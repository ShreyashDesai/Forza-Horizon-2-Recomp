// Investigation override (2026-09-02): sub_82D881E8 is the shared
// "(re)create a semaphore and store the resulting handle at object[0]"
// primitive (confirmed by reading its real body -- it calls sub_82BF0EB0,
// which calls __imp__NtCreateSemaphore directly). The main guest thread is
// permanently parked in NtWaitForSingleObjectEx on the semaphore stored at
// guest global 0x8342B654 (confirmed live: field0 == 0xF8000038, matching
// the handle [WAITDIAG] shows as never released). No static caller of this
// function targets 0x8342B654 except the ones already found by address
// (construction, and one table-driven reset-list entry at 0x8324CB68 whose
// own caller could not be found statically). This override logs every call
// with its target object address so we can see, live, whether the
// 0x8342B654 object is ever (re)created a second time after its initial
// construction -- and if so, when, relative to the freeze.
#include "forzahorizon2_recomp.h"

#include <rex/system/checkpoint.h>
#include <rex/system/function_dispatcher.h>

DECLARE_REX_FUNC(sub_82BF0EB0);

extern "C" REX_FUNC(sub_82D881E8) {
  REX_FUNC_PROLOGUE();
  uint32_t rex_entry = 0x82D881E8;
  {
    const uint32_t rex_dispatch_address = ctx.dispatch_address;
    ctx.dispatch_address = 0;
    if (rex_entry == 0x82D881E8) {
      switch (rex_dispatch_address) {
        case 0x82D88204:
          rex_entry = rex_dispatch_address; break;
        default: break;
      }
    }
  }
  rex::system::PollCheckpointBoundary(ctx, rex_entry);
  const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
  constexpr bool rex_lr_restore_helper_ = false;
  ctx.current_function = 0x82D881E8;
  ctx.current_instruction = rex_entry;
  uint32_t ea{};
  switch (rex_entry) {
    case 0x82D88204: goto loc_82D88204;
    default: break;
  }
  if (rex_entry == 0x82D881E8) {
    REXKRNL_WARN("[SEMCREATE] sub_82D881E8 called: object=0x{:08X} count/r4=0x{:08X} "
                 "limit/r5=0x{:08X} name/r6=0x{:08X} lr=0x{:08X}",
                 ctx.r3.u32, ctx.r4.u32, ctx.r5.u32, ctx.r6.u32, (uint32_t)ctx.lr);
  }
  // mflr r12
  ctx.r12.u64 = ctx.lr;
  // stw r12,-8(r1)
  ctx.current_instruction = 0x82D881EC;
  REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
  // std r31,-16(r1)
  ctx.current_instruction = 0x82D881F0;
  REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
  // stwu r1,-96(r1)
  ctx.current_instruction = 0x82D881F4;
  ea = -96 + ctx.r1.u32;
  REX_STORE_U32(ea, ctx.r1.u32);
  ctx.r1.u32 = ea;
  // mr r31,r3
  ctx.r31.u64 = ctx.r3.u64;
  // li r3,0
  ctx.r3.s64 = 0;
  // bl 0x82bf0eb0
  ctx.lr = 0x82D88204;
  sub_82BF0EB0(ctx, base);
loc_82D88204:
  // stw r3,0(r31)
  ctx.current_instruction = 0x82D88204;
  if (ctx.r31.u32 == 0x8342B654u) {
    REXKRNL_WARN("[SEMCREATE] sub_82D881E8: our tracked object 0x8342B654 got new handle=0x{:08X}",
                 ctx.r3.u32);
  }
  REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
  // mr r3,r31
  ctx.r3.u64 = ctx.r31.u64;
  // addi r1,r1,96
  ctx.r1.s64 = ctx.r1.s64 + 96;
  // lwz r12,-8(r1)
  ctx.current_instruction = 0x82D88210;
  ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
  // mtlr r12
  ctx.lr = ctx.r12.u64;
  // ld r31,-16(r1)
  ctx.current_instruction = 0x82D88218;
  ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
  // blr
  if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
  return;
}
