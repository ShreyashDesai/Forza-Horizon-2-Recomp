// Workaround (2026-09-02): sub_824A6170 reads an object's field 0
// (a pointer we call FIELD_A here), optionally AddRef/Release's it via
// sub_824A5FC0, then dereferences FIELD_A's own vtable (FIELD_A[0][0]) and
// calls through it. Live, reproducible crash: FIELD_A == 0x494E5400
// ("INT\0" as ASCII) on every occurrence, byte-identical across separate
// runs -- not random heap garbage (this runtime's allocator is
// deterministic, unlike real hardware/ASLR), consistent with an
// uninitialized read of a fixed memory cell whose vtable-slot-0 (FIELD_A[0])
// is 0, producing a "call to guest address 0" FATAL at the bctrl below.
// This override adds a guard on the vtable slot read (r11) immediately
// before the indirect call, following the exact pattern of the earlier
// sub_823F4EE8 fix this session: skip the call when the slot is null,
// falling through to the same loc_824A61B8 path the original code already
// uses for its own "FIELD_A == 0" case. This does not fix the root cause
// (why FIELD_A ends up uninitialized) -- that remains open, tracked in
// xbox360-static-recomp-metodologia.md -- it only prevents the crash so
// investigation of the (unrelated) semaphore-wait stall isn't blocked by
// this intermittent, pre-existing bug.
#include "forzahorizon2_recomp.h"

#include <rex/system/checkpoint.h>
#include <rex/system/function_dispatcher.h>

DECLARE_REX_FUNC(sub_824A5FC0);
DECLARE_REX_FUNC(sub_8240D2C8);

extern "C" REX_FUNC(sub_824A6170) {
  REX_FUNC_PROLOGUE();
  uint32_t rex_entry = 0x824A6170;
  {
    const uint32_t rex_dispatch_address = ctx.dispatch_address;
    ctx.dispatch_address = 0;
    if (rex_entry == 0x824A6170) {
      switch (rex_dispatch_address) {
        case 0x824A619C:
        case 0x824A61B8:
        case 0x824A61C8:
          rex_entry = rex_dispatch_address; break;
        default: break;
      }
    }
  }
  rex::system::PollCheckpointBoundary(ctx, rex_entry);
  const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
  constexpr bool rex_lr_restore_helper_ = false;
  ctx.current_function = 0x824A6170;
  ctx.current_instruction = rex_entry;
  uint32_t ea{};
  switch (rex_entry) {
    case 0x824A619C: goto loc_824A619C;
    case 0x824A61B8: goto loc_824A61B8;
    case 0x824A61C8: goto loc_824A61C8;
    default: break;
  }
  // mflr r12
  ctx.r12.u64 = ctx.lr;
  // stw r12,-8(r1)
  ctx.current_instruction = 0x824A6174;
  REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
  // std r30,-24(r1)
  ctx.current_instruction = 0x824A6178;
  REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
  // std r31,-16(r1)
  ctx.current_instruction = 0x824A617C;
  REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
  // stwu r1,-112(r1)
  ctx.current_instruction = 0x824A6180;
  ea = -112 + ctx.r1.u32;
  REX_STORE_U32(ea, ctx.r1.u32);
  ctx.r1.u32 = ea;
  // mr r31,r3
  ctx.r31.u64 = ctx.r3.u64;
  // lwz r3,0(r3)
  ctx.current_instruction = 0x824A6188;
  ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
  // mr r30,r4
  ctx.r30.u64 = ctx.r4.u64;
  // cmplwi cr6,r3,0
  ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
  // beq cr6,0x824a61b8
  if (ctx.cr6.eq) goto loc_824A61B8;
  // bl 0x824a5fc0
  ctx.lr = 0x824A619C;
  sub_824A5FC0(ctx, base);
loc_824A619C:
  // cmplwi r3,0
  ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
  // beq 0x824a61b8
  if (ctx.cr0.eq) goto loc_824A61B8;
  // lwz r11,0(r3)
  ctx.current_instruction = 0x824A61A4;
  ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
  // li r4,1
  ctx.r4.s64 = 1;
  // lwz r11,0(r11)
  ctx.current_instruction = 0x824A61AC;
  ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
  // WORKAROUND (2026-09-02): the original code unconditionally does
  // `mtctr r11; bctrl` here. If the vtable slot (r11) is null -- confirmed
  // live, reproducibly, when r3 (FIELD_A) == 0x494E5400 -- that call
  // crashes ("invalid function at guest address 0"). Treat a null slot the
  // same as the FIELD_A == 0 case the original code already handles.
  if (ctx.r11.u32 == 0) goto loc_824A61B8;
  // mtctr r11
  ctx.ctr.u64 = ctx.r11.u64;
  // bctrl
  ctx.lr = 0x824A61B8;
  REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A61B8:
  // clrlwi. r11,r30,31
  ctx.r11.u64 = ctx.r30.u32 & 0x1;
  ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
  // beq 0x824a61c8
  if (ctx.cr0.eq) goto loc_824A61C8;
  // mr r3,r31
  ctx.r3.u64 = ctx.r31.u64;
  // bl 0x8240d2c8
  ctx.lr = 0x824A61C8;
  sub_8240D2C8(ctx, base);
loc_824A61C8:
  // mr r3,r31
  ctx.r3.u64 = ctx.r31.u64;
  // addi r1,r1,112
  ctx.r1.s64 = ctx.r1.s64 + 112;
  // lwz r12,-8(r1)
  ctx.current_instruction = 0x824A61D0;
  ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
  // mtlr r12
  ctx.lr = ctx.r12.u64;
  // ld r30,-24(r1)
  ctx.current_instruction = 0x824A61D8;
  ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
  // ld r31,-16(r1)
  ctx.current_instruction = 0x824A61DC;
  ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
  // blr
  if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
  return;
}
