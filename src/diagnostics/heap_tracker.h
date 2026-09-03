// heap_tracker.h - reusable guest-heap allocation/leak tracker for
// ReXGlue-based (or similarly-shaped) static-recompilation projects.
//
// Design goal (see D:\GAME RECOMP\docs\xbox360-static-recomp-metodologia.md,
// "Ferramentas de diagnóstico" section): a diagnostic that reads REAL values
// from the running process -- every number this produces comes from actual
// Alloc()/Free() calls the project's own hooks report to it. It never
// mocks or estimates.
//
// This header is intentionally logging-agnostic and has no dependency on
// any specific recompiler's headers (PPCContext, REX_FUNC, etc.) -- it only
// deals in plain guest addresses (uint32_t) and caller return addresses
// (also uint32_t, whatever "lr"/"return address" means in the guest ISA).
// To reuse in another project: copy this file, call OnAlloc/OnFree/
// OnLeakedFree from your own alloc/free hook functions, and read the
// summaries with whatever logger that project already has.
//
// Usage pattern that motivated this (Forza Horizon 2 / ReXGlue):
//   - The title's own native allocator is partially routed through a
//     project-level free() override. Blocks that come from the CRT heap
//     get freed normally (OnAlloc/OnFree). Blocks that come from the
//     title's own allocator (which this project cannot safely hand back to
//     yet) get dropped -- call OnLeakedFree() there instead of OnFree(),
//     tagging with the guest return address (lr) of the CALLER. Summarizing
//     by call site answers "which part of the title's code is generating
//     the most un-recoverable frees" without guessing.
#pragma once

#include <algorithm>
#include <cstdint>
#include <mutex>
#include <string>
#include <unordered_map>
#include <vector>

namespace recomp_diag {

struct AllocRecord {
  uint32_t size = 0;
  uint32_t caller_pc = 0;  // guest return address of the Alloc() call site
  std::string tag;         // e.g. "crt_heap", "native_heap"
  uint64_t seq = 0;        // allocation order, for age-based views
};

struct SiteSummary {
  uint32_t caller_pc = 0;
  std::string tag;
  uint64_t count = 0;
  uint64_t bytes = 0;
};

// One tracker instance covers one "kind" of event you want ranked by call
// site (e.g. one instance for live/leaked allocations, a separate one for
// leaked-free attempts) -- kept as two independent tiny maps rather than
// one combined one, so a leaked-free histogram isn't diluted by ordinary
// alloc/free traffic.
class CallSiteHistogram {
 public:
  void Record(uint32_t caller_pc, uint32_t size, const std::string& tag) {
    std::lock_guard<std::mutex> lock(mutex_);
    auto& s = sites_[caller_pc];
    s.caller_pc = caller_pc;
    s.tag = tag;
    s.count++;
    s.bytes += size;
  }

  std::vector<SiteSummary> TopSites(size_t max_entries = 20) const {
    std::vector<SiteSummary> out;
    {
      std::lock_guard<std::mutex> lock(mutex_);
      out.reserve(sites_.size());
      for (auto& [pc, s] : sites_) out.push_back(s);
    }
    std::sort(out.begin(), out.end(),
              [](const SiteSummary& a, const SiteSummary& b) { return a.bytes > b.bytes; });
    if (out.size() > max_entries) out.resize(max_entries);
    return out;
  }

  uint64_t TotalEvents() const {
    std::lock_guard<std::mutex> lock(mutex_);
    uint64_t total = 0;
    for (auto& [_, s] : sites_) total += s.count;
    return total;
  }

 private:
  mutable std::mutex mutex_;
  std::unordered_map<uint32_t, SiteSummary> sites_;
};

class HeapTracker {
 public:
  static HeapTracker& Instance() {
    static HeapTracker inst;
    return inst;
  }

  // Call when a real allocation succeeds and you have a valid guest address.
  void OnAlloc(uint32_t guest_addr, uint32_t size, uint32_t caller_pc, const std::string& tag) {
    if (guest_addr == 0) return;
    std::lock_guard<std::mutex> lock(mutex_);
    live_[guest_addr] = AllocRecord{size, caller_pc, tag, seq_++};
    live_bytes_ += size;
    alloc_count_++;
  }

  // Call when a block is genuinely freed (returned to its real allocator).
  void OnFree(uint32_t guest_addr) {
    if (guest_addr == 0) return;
    std::lock_guard<std::mutex> lock(mutex_);
    auto it = live_.find(guest_addr);
    if (it != live_.end()) {
      live_bytes_ -= it->second.size;
      live_.erase(it);
      free_count_++;
    } else {
      unknown_free_count_++;
    }
  }

  // Call when a free request cannot be honored (the classic "known
  // imperfect workaround" case: dropping a pointer this project's override
  // doesn't know how to route back to its real owner). Size is often
  // unknown in that situation -- pass 0 if so; the site histogram still
  // gives an accurate COUNT per call site even without sizes.
  void OnLeakedFree(uint32_t guest_addr, uint32_t caller_pc, uint32_t size_if_known = 0) {
    leaked_free_sites_.Record(caller_pc, size_if_known, "leaked_free");
    leaked_free_total_++;
  }

  std::vector<SiteSummary> TopLiveAllocationSites(size_t max_entries = 20) const {
    std::unordered_map<uint32_t, SiteSummary> agg;
    {
      std::lock_guard<std::mutex> lock(mutex_);
      for (auto& [addr, rec] : live_) {
        auto& s = agg[rec.caller_pc];
        s.caller_pc = rec.caller_pc;
        s.tag = rec.tag;
        s.count++;
        s.bytes += rec.size;
      }
    }
    std::vector<SiteSummary> out;
    out.reserve(agg.size());
    for (auto& [_, s] : agg) out.push_back(s);
    std::sort(out.begin(), out.end(),
              [](const SiteSummary& a, const SiteSummary& b) { return a.bytes > b.bytes; });
    if (out.size() > max_entries) out.resize(max_entries);
    return out;
  }

  std::vector<SiteSummary> TopLeakedFreeSites(size_t max_entries = 20) const {
    return leaked_free_sites_.TopSites(max_entries);
  }

  struct Totals {
    uint64_t alloc_count;
    uint64_t free_count;
    uint64_t unknown_free_count;
    uint64_t leaked_free_total;
    uint64_t live_bytes;
    uint64_t live_block_count;
  };

  Totals GetTotals() const {
    std::lock_guard<std::mutex> lock(mutex_);
    return Totals{alloc_count_, free_count_, unknown_free_count_, leaked_free_total_, live_bytes_,
                  static_cast<uint64_t>(live_.size())};
  }

 private:
  mutable std::mutex mutex_;
  std::unordered_map<uint32_t, AllocRecord> live_;
  uint64_t seq_ = 0;
  uint64_t live_bytes_ = 0;
  uint64_t alloc_count_ = 0;
  uint64_t free_count_ = 0;
  uint64_t unknown_free_count_ = 0;   // Free() called on an address we never saw allocated.
  uint64_t leaked_free_total_ = 0;
  CallSiteHistogram leaked_free_sites_;
};

}  // namespace recomp_diag
