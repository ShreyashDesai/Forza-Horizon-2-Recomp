// Override for sub_823F4EE8 -- workaround for a real, confirmed access
// violation that fires during the boot sequence and is suspected to leave
// state corrupted enough to contribute to a later stall (see
// D:\GAME RECOMP\docs\xbox360-static-recomp-metodologia.md, 2026-09-01/02
// entries for the full investigation history -- this is the SAME bug found
// and fixed once before, whose fix never got ported to the codegen
// structure used after the Alexbeav-branch SDK migration).
//
// DEFINE_REX_FUNC emits each recompiled body as a weak symbol, so this
// strong `extern "C" REX_FUNC(...)` definition replaces the generated one
// (same pattern already used elsewhere in forzahorizon2_hooks.cpp).
//
// This file is a byte-for-byte copy of the codegen output for
// sub_823F4EE8 (generated/default/forzahorizon2_recomp.823F0000.0.cpp at
// the time of writing, re-extracted after the branch migration changed its
// structure -- per-line ctx.current_instruction, PollCheckpointBoundary,
// dispatch_address switch for resumable entries -- none of which existed
// in the pre-migration version this override used to be written against).
// The only changes are the four guards marked "WORKAROUND" below.
//
// Root cause, confirmed via AVDIAG + Ghidra (not speculated): this function
// is a RemoveEntryList-style doubly-linked-list unlink with a built-in
// consistency check (Blink->Flink == &entry), repeated 4 times in the
// function body (for list items r4, r31, r30, r31 again). In all 4, the
// Blink pointer (loaded from item+8, here named r10) is dereferenced
// (`lwz r7,4(r10)`, reading Blink->Flink) BEFORE any validity check on it.
// The LIST_ENTRY embedded in the item was never initialized before this
// completion routine (a "BloomTonemap" post-processing effect table
// referenced only from data at guest 0x820013E0, never a direct `bl`) tried
// to remove it. Real captured values for the Blink pointer across runs
// have been small/implausible (e.g. 0x00010000), never a real heap address.
//
// Workaround (not a root-cause fix, documented as such): reuse the same
// "inconsistent list" bail-out path the original code already has for the
// `bne cr6` consistency-check failure, entered a few instructions later,
// instead of dereferencing an implausible Blink pointer.
//
// 2026-09-03 update: the guard originally used a magic-number heuristic
// (`address < 0x10000`), which missed a later run's garbage value
// (0x3F280000 -- large, but still outside the pool's real arena). Replaced
// at all 4 sites with RexRecomp_LooksLikeLiveGuestPointer(), a real check
// against the runtime's own heap range tracking (Memory::LookupHeap) --
// see its definition below for the reasoning. Still only a guard against
// the symptom; the corruption's root cause remains unknown.
#include "forzahorizon2_recomp.h"

#include <rex/system/checkpoint.h>
#include <rex/system/function_dispatcher.h>
#include <rex/system/kernel_state.h>
#include <rex/system/xmemory.h>

// Not declared by forzahorizon2_recomp.h itself -- each generated shard
// forward-declares the specific helpers/subs it calls locally (see the top
// of generated/default/forzahorizon2_recomp.823F0000.0.cpp).
DECLARE_REX_FUNC(__savegprlr_25);
DECLARE_REX_FUNC(__restgprlr_25);
DECLARE_REX_FUNC(__imp__RtlCompareMemoryUlong);

// 2026-09-03: the original 4 guards below used a magic-number heuristic
// (`address < 0x10000`) picked from the one failure captured on 2026-09-02.
// A later run captured a DIFFERENT garbage Blink value (0x3F280000, then
// 0x0F280000 in a third run) that isn't small at all -- a magic threshold
// can't generalize across arbitrary garbage magnitudes.
//
// First replacement attempt used Memory::LookupHeap() (a range-membership
// check: does this address fall inside a heap's *reserved* address range at
// all). CONFIRMED LIVE NOT TO WORK: the exact same fault (same pc, same
// r10.u32 that this function skipped) still happened on the next run --
// LookupHeap only checks reservation, not per-page commit state, so a
// reserved-but-never-committed address still passes it and still hard-faults
// on the real dereference. Replaced with Memory::QueryRegionInfo(), which
// reports the actual per-page commit state (the same state Windows'
// VirtualQuery would report) -- an address only passes if its page is
// really backed by memory. This is what should have been used from the
// start. Root cause of why the pointer is garbage in the first place is
// still unknown -- this only prevents dereferencing it.
static bool RexRecomp_LooksLikeLiveGuestPointer(uint32_t address) {
  if (address == 0) {
    return false;
  }
  auto* kernel_state = rex::system::kernel_state();
  if (!kernel_state) {
    return false;
  }
  auto* memory = kernel_state->memory();
  if (!memory) {
    return false;
  }
  auto* heap = memory->LookupHeap(address);
  if (!heap) {
    return false;
  }
  rex::memory::HeapAllocationInfo info{};
  if (!heap->QueryRegionInfo(address, &info)) {
    return false;
  }
  return (info.state & rex::memory::kMemoryAllocationCommit) != 0;
}

extern "C" REX_FUNC(sub_823F4EE8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x823F4EE8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x823F4EE8) {
			switch (rex_dispatch_address) {
				case 0x823F4EF0:
				case 0x823F4FE4:
				case 0x823F5090:
				case 0x823F51D0:
				case 0x823F529C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x823F4EE8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x823F4EF0: goto loc_823F4EF0;
		case 0x823F4FE4: goto loc_823F4FE4;
		case 0x823F5090: goto loc_823F5090;
		case 0x823F51D0: goto loc_823F51D0;
		case 0x823F529C: goto loc_823F529C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82c010ac
	ctx.lr = 0x823F4EF0;
	__savegprlr_25(ctx, base);
loc_823F4EF0:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x823F4EF0;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,2(r4)
	ctx.current_instruction = 0x823F4EF4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// lis r10,-274
	ctx.r10.s64 = -17956864;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r31,r11,r4
	ctx.r31.u64 = ctx.r4.u64 - ctx.r11.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// ori r25,r10,65262
	ctx.r25.u64 = ctx.r10.u64 | 65262;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823f50fc
	if (ctx.cr6.eq) goto loc_823F50FC;
	// lbz r11,5(r31)
	ctx.current_instruction = 0x823F4F24;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f50fc
	if (!ctx.cr0.eq) goto loc_823F50FC;
	// lhz r10,0(r31)
	ctx.current_instruction = 0x823F4F30;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r11,0(r5)
	ctx.current_instruction = 0x823F4F34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,61440
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61440, ctx.xer);
	// bgt cr6,0x823f50fc
	if (ctx.cr6.gt) goto loc_823F50FC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823f4ff8
	if (ctx.cr6.eq) goto loc_823F4FF8;
	// lwz r11,12(r4)
	ctx.current_instruction = 0x823F4F4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// lwz r10,8(r4)
	ctx.current_instruction = 0x823F4F54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x823F4F58;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x823F4F5C;
	// WORKAROUND: r10 (Blink) is an uninitialized LIST_ENTRY on this item --
	// bail out via the same "inconsistent list" path the code already uses
	// a few instructions below instead of dereferencing an implausible
	// pointer.
	if (!RexRecomp_LooksLikeLiveGuestPointer(ctx.r10.u32)) goto loc_823F4FAC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x823f4fac
	if (!ctx.cr6.eq) goto loc_823F4FAC;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823f4fac
	if (!ctx.cr6.eq) goto loc_823F4FAC;
	// stw r10,0(r11)
	ctx.current_instruction = 0x823F4F70;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	ctx.current_instruction = 0x823F4F78;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x823f4fac
	if (!ctx.cr6.eq) goto loc_823F4FAC;
	// lhz r11,0(r4)
	ctx.current_instruction = 0x823F4F80;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x823f4fac
	if (!ctx.cr6.lt) goto loc_823F4FAC;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.current_instruction = 0x823F4FA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r3
	ctx.current_instruction = 0x823F4FA8;
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
loc_823F4FAC:
	// lbz r11,5(r30)
	ctx.current_instruction = 0x823F4FAC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f4fe4
	if (ctx.cr0.eq) goto loc_823F4FE4;
	// lhz r10,0(r30)
	ctx.current_instruction = 0x823F4FB8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x823f4fd8
	if (ctx.cr0.eq) goto loc_823F4FD8;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x823f4fd8
	if (!ctx.cr6.gt) goto loc_823F4FD8;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_823F4FD8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x832f12e4
	ctx.lr = 0x823F4FE4;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_823F4FE4:
	// lhz r11,0(r30)
	ctx.current_instruction = 0x823F4FE4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,48(r29)
	ctx.current_instruction = 0x823F4FEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r29)
	ctx.current_instruction = 0x823F4FF4;
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
loc_823F4FF8:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x823F4FF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x823F5000;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x823F5004;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x823F5008;
	// WORKAROUND: same as above, this instance's item is r31. Confirmed
	// live via AVDIAG: this exact address (pc=0x823F5008) is the one that
	// actually faulted in a real run (2026-09-02) AND again in a later run
	// (2026-09-03, garbage value 0x3F280000 -- the magic-number version of
	// this guard did not catch it, see RexRecomp_LooksLikeLiveGuestPointer).
	if (!RexRecomp_LooksLikeLiveGuestPointer(ctx.r10.u32)) goto loc_823F5058;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x823f5058
	if (!ctx.cr6.eq) goto loc_823F5058;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823f5058
	if (!ctx.cr6.eq) goto loc_823F5058;
	// stw r10,0(r11)
	ctx.current_instruction = 0x823F501C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	ctx.current_instruction = 0x823F5024;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x823f5058
	if (!ctx.cr6.eq) goto loc_823F5058;
	// lhz r11,0(r31)
	ctx.current_instruction = 0x823F502C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x823f5058
	if (!ctx.cr6.lt) goto loc_823F5058;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.current_instruction = 0x823F504C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	ctx.current_instruction = 0x823F5054;
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
loc_823F5058:
	// lbz r11,5(r31)
	ctx.current_instruction = 0x823F5058;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f5090
	if (ctx.cr0.eq) goto loc_823F5090;
	// lhz r10,0(r31)
	ctx.current_instruction = 0x823F5064;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x823f5084
	if (ctx.cr0.eq) goto loc_823F5084;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x823f5084
	if (!ctx.cr6.gt) goto loc_823F5084;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_823F5084:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x832f12e4
	ctx.lr = 0x823F5090;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_823F5090:
	// lbz r11,5(r30)
	ctx.current_instruction = 0x823F5090;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,5(r31)
	ctx.current_instruction = 0x823F5098;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// beq 0x823f50b4
	if (ctx.cr0.eq) goto loc_823F50B4;
	// lbz r11,4(r31)
	ctx.current_instruction = 0x823F50A0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.current_instruction = 0x823F50AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r31,64(r11)
	ctx.current_instruction = 0x823F50B0;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
loc_823F50B4:
	// lhz r10,0(r31)
	ctx.current_instruction = 0x823F50B4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x823F50BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r27)
	ctx.current_instruction = 0x823F50C4;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r10,48(r29)
	ctx.current_instruction = 0x823F50C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// lhz r11,0(r31)
	ctx.current_instruction = 0x823F50CC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r29)
	ctx.current_instruction = 0x823F50D4;
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// lwz r10,0(r27)
	ctx.current_instruction = 0x823F50D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r11,5(r31)
	ctx.current_instruction = 0x823F50DC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r10,0(r31)
	ctx.current_instruction = 0x823F50E4;
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// bne 0x823f50fc
	if (!ctx.cr0.eq) goto loc_823F50FC;
	// lwz r10,0(r27)
	ctx.current_instruction = 0x823F50EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r10,2(r11)
	ctx.current_instruction = 0x823F50F8;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
loc_823F50FC:
	// lbz r11,5(r30)
	ctx.current_instruction = 0x823F50FC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f52e0
	if (!ctx.cr0.eq) goto loc_823F52E0;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x823F5108;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r10,5(r31)
	ctx.current_instruction = 0x823F5114;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823f52e0
	if (!ctx.cr0.eq) goto loc_823F52E0;
	// lhz r10,0(r31)
	ctx.current_instruction = 0x823F5120;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,61440
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61440, ctx.xer);
	// bgt cr6,0x823f52e0
	if (ctx.cr6.gt) goto loc_823F52E0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823f51e0
	if (ctx.cr6.eq) goto loc_823F51E0;
	// lwz r11,12(r30)
	ctx.current_instruction = 0x823F5138;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x823F5140;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x823F5144;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x823F5148;
	// WORKAROUND: same pattern, this instance's item is r30.
	if (!RexRecomp_LooksLikeLiveGuestPointer(ctx.r10.u32)) goto loc_823F5198;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x823f5198
	if (!ctx.cr6.eq) goto loc_823F5198;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823f5198
	if (!ctx.cr6.eq) goto loc_823F5198;
	// stw r10,0(r11)
	ctx.current_instruction = 0x823F515C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	ctx.current_instruction = 0x823F5164;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x823f5198
	if (!ctx.cr6.eq) goto loc_823F5198;
	// lhz r11,0(r30)
	ctx.current_instruction = 0x823F516C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x823f5198
	if (!ctx.cr6.lt) goto loc_823F5198;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.current_instruction = 0x823F518C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	ctx.current_instruction = 0x823F5194;
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
loc_823F5198:
	// lbz r11,5(r30)
	ctx.current_instruction = 0x823F5198;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f51d0
	if (ctx.cr0.eq) goto loc_823F51D0;
	// lhz r10,0(r30)
	ctx.current_instruction = 0x823F51A4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x823f51c4
	if (ctx.cr0.eq) goto loc_823F51C4;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x823f51c4
	if (!ctx.cr6.gt) goto loc_823F51C4;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_823F51C4:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x832f12e4
	ctx.lr = 0x823F51D0;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_823F51D0:
	// lhz r11,0(r30)
	ctx.current_instruction = 0x823F51D0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r10,48(r29)
	ctx.current_instruction = 0x823F51D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r29)
	ctx.current_instruction = 0x823F51DC;
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
loc_823F51E0:
	// lbz r11,5(r31)
	ctx.current_instruction = 0x823F51E0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,5(r30)
	ctx.current_instruction = 0x823F51E8;
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// beq 0x823f5204
	if (ctx.cr0.eq) goto loc_823F5204;
	// lbz r11,4(r30)
	ctx.current_instruction = 0x823F51F0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.current_instruction = 0x823F51FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r30,64(r11)
	ctx.current_instruction = 0x823F5200;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
loc_823F5204:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x823F5204;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x823F520C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x823F5210;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x823F5214;
	// WORKAROUND: same pattern, this instance's item is r31 again (the
	// 4th and last occurrence in this function).
	if (!RexRecomp_LooksLikeLiveGuestPointer(ctx.r10.u32)) goto loc_823F5264;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x823f5264
	if (!ctx.cr6.eq) goto loc_823F5264;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823f5264
	if (!ctx.cr6.eq) goto loc_823F5264;
	// stw r10,0(r11)
	ctx.current_instruction = 0x823F5228;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	ctx.current_instruction = 0x823F5230;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x823f5264
	if (!ctx.cr6.eq) goto loc_823F5264;
	// lhz r11,0(r31)
	ctx.current_instruction = 0x823F5238;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x823f5264
	if (!ctx.cr6.lt) goto loc_823F5264;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.current_instruction = 0x823F5258;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	ctx.current_instruction = 0x823F5260;
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
loc_823F5264:
	// lbz r11,5(r31)
	ctx.current_instruction = 0x823F5264;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f529c
	if (ctx.cr0.eq) goto loc_823F529C;
	// lhz r10,0(r31)
	ctx.current_instruction = 0x823F5270;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x823f5290
	if (ctx.cr0.eq) goto loc_823F5290;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x823f5290
	if (!ctx.cr6.gt) goto loc_823F5290;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_823F5290:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x832f12e4
	ctx.lr = 0x823F529C;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_823F529C:
	// lwz r10,0(r27)
	ctx.current_instruction = 0x823F529C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lhz r11,0(r31)
	ctx.current_instruction = 0x823F52A0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r27)
	ctx.current_instruction = 0x823F52A8;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r31)
	ctx.current_instruction = 0x823F52AC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r11,48(r29)
	ctx.current_instruction = 0x823F52B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,48(r29)
	ctx.current_instruction = 0x823F52B8;
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// lbz r11,5(r30)
	ctx.current_instruction = 0x823F52BC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,0(r27)
	ctx.current_instruction = 0x823F52C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// sth r10,0(r30)
	ctx.current_instruction = 0x823F52C8;
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// bne 0x823f52e0
	if (!ctx.cr0.eq) goto loc_823F52E0;
	// lwz r10,0(r27)
	ctx.current_instruction = 0x823F52D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r10,2(r11)
	ctx.current_instruction = 0x823F52DC;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
loc_823F52E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82c010fc
	__restgprlr_25(ctx, base);
	return;
}
