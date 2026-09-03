#include "forzahorizon2_funcs.5.h"

DEFINE_REX_FUNC(sub_88050070) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050070);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050070;
	ctx.current_instruction = 0x88050070;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,20(r11)
	ctx.current_instruction = 0x88050078;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__savegprlr_14) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050810);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050810;
	ctx.current_instruction = 0x88050810;
	// std r14,-152(r1)
	ctx.current_instruction = 0x88050810;
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r14.u64);
	// std r15,-144(r1)
	ctx.current_instruction = 0x88050814;
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r15.u64);
	// std r16,-136(r1)
	ctx.current_instruction = 0x88050818;
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.r16.u64);
	// std r17,-128(r1)
	ctx.current_instruction = 0x8805081C;
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r17.u64);
	// std r18,-120(r1)
	ctx.current_instruction = 0x88050820;
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	ctx.current_instruction = 0x88050824;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	ctx.current_instruction = 0x88050828;
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	ctx.current_instruction = 0x8805082C;
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	ctx.current_instruction = 0x88050830;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	ctx.current_instruction = 0x88050834;
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	ctx.current_instruction = 0x88050838;
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	ctx.current_instruction = 0x8805083C;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	ctx.current_instruction = 0x88050840;
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	ctx.current_instruction = 0x88050844;
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	ctx.current_instruction = 0x88050848;
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	ctx.current_instruction = 0x8805084C;
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88050850;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88050854;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88050858;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880523D8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880523D8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880523D8;
	ctx.current_instruction = 0x880523D8;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// stw r3,18328(r11)
	ctx.current_instruction = 0x880523DC;
	REX_STORE_U32(ctx.r11.u32 + 18328, ctx.r3.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88052690) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88052690;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88052690) {
			switch (rex_dispatch_address) {
				case 0x880526D0:
				case 0x880526E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88052690;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880526D0: goto loc_880526D0;
		case 0x880526E0: goto loc_880526E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88052694;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88052698;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805269C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880526A0;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r11,1032
	ctx.r10.s64 = ctx.r11.s64 + 1032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x88053e38
	ctx.lr = 0x880526D0;
	sub_88053E38(ctx, base);
loc_880526D0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x88053008
	ctx.lr = 0x880526E0;
	sub_88053008(ctx, base);
loc_880526E0:
	// clrlwi. r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88052708
	if (!ctx.cr0.eq) goto loc_88052708;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x880526f8
	if (!ctx.cr6.eq) goto loc_880526F8;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x88052720
	goto loc_88052720;
loc_880526F8:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8805271c
	if (!ctx.cr6.eq) goto loc_8805271C;
loc_88052700:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x88052720
	goto loc_88052720;
loc_88052708:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88052700
	if (!ctx.cr0.eq) goto loc_88052700;
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne 0x88052720
	if (!ctx.cr0.eq) goto loc_88052720;
loc_8805271C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_88052720:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88052724;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8805272C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88052730;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88057908) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88057908;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88057908) {
			switch (rex_dispatch_address) {
				case 0x88057920:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88057908;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88057920: goto loc_88057920;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805790C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88057910;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88057914;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88062238
	ctx.lr = 0x88057920;
	sub_88062238(ctx, base);
loc_88057920:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	ctx.current_instruction = 0x88057928;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	ctx.current_instruction = 0x8805792C;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lfs f0,6800(r10)
	ctx.current_instruction = 0x88057930;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6800);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,64(r31)
	ctx.current_instruction = 0x88057934;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stfs f0,72(r31)
	ctx.current_instruction = 0x88057938;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r11,68(r31)
	ctx.current_instruction = 0x8805793C;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88057944;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805794C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88058878) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88058878);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88058878;
	ctx.current_instruction = 0x88058878;
	uint32_t ea{};
	// addi r11,r3,368
	ctx.r11.s64 = ctx.r3.s64 + 368;
loc_8805887C:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8805887c
	if (!ctx.cr0.eq) goto loc_8805887C;
	// lwz r11,272(r3)
	ctx.current_instruction = 0x88058898;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r3,284(r3)
	ctx.current_instruction = 0x880588A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88059700) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88059700);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88059700;
	ctx.current_instruction = 0x88059700;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88059C18) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88059C18;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88059C18) {
			switch (rex_dispatch_address) {
				case 0x88059C20:
				case 0x88059C48:
				case 0x88059C5C:
				case 0x88059C70:
				case 0x88059CBC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88059C18;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88059C20: goto loc_88059C20;
		case 0x88059C48: goto loc_88059C48;
		case 0x88059C5C: goto loc_88059C5C;
		case 0x88059C70: goto loc_88059C70;
		case 0x88059CBC: goto loc_88059CBC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88059C20;
	__savegprlr_29(ctx, base);
loc_88059C20:
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88059C24;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	ctx.current_instruction = 0x88059C2C;
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r4)
	ctx.current_instruction = 0x88059C34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88059C3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88059C48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88059C48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r30)
	ctx.current_instruction = 0x88059C4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,76(r9)
	ctx.current_instruction = 0x88059C50;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88059C5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88059C5C:
	// stw r29,52(r30)
	ctx.current_instruction = 0x88059C5C;
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88064578
	ctx.lr = 0x88059C70;
	sub_88064578(ctx, base);
loc_88059C70:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,520(r30)
	ctx.current_instruction = 0x88059C78;
	REX_STORE_U32(ctx.r30.u32 + 520, ctx.r3.u32);
	// ori r8,r11,65535
	ctx.r8.u64 = ctx.r11.u64 | 65535;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stw r3,80(r31)
	ctx.current_instruction = 0x88059C88;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x88059cac
	goto loc_88059CAC;
loc_88059CAC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88059cbc
	if (ctx.cr6.lt) goto loc_88059CBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880597e0
	ctx.lr = 0x88059CBC;
	sub_880597E0(ctx, base);
loc_88059CBC:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805B9F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805B9F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805B9F8) {
			switch (rex_dispatch_address) {
				case 0x8805BA00:
				case 0x8805BA34:
				case 0x8805BA58:
				case 0x8805BA7C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805B9F8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805BA00: goto loc_8805BA00;
		case 0x8805BA34: goto loc_8805BA34;
		case 0x8805BA58: goto loc_8805BA58;
		case 0x8805BA7C: goto loc_8805BA7C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8805BA00;
	__savegprlr_27(ctx, base);
loc_8805BA00:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8805BA00;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8805ba38
	if (ctx.cr6.eq) goto loc_8805BA38;
	// lwz r11,68(r3)
	ctx.current_instruction = 0x8805BA1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// addi r29,r3,68
	ctx.r29.s64 = ctx.r3.s64 + 68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8805BA28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805BA34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805BA34:
	// stw r29,0(r30)
	ctx.current_instruction = 0x8805BA34;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_8805BA38:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8805ba5c
	if (ctx.cr6.eq) goto loc_8805BA5C;
	// lwz r11,140(r31)
	ctx.current_instruction = 0x8805BA40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r31,140
	ctx.r30.s64 = ctx.r31.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8805BA4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805BA58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805BA58:
	// stw r30,0(r28)
	ctx.current_instruction = 0x8805BA58;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_8805BA5C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8805ba80
	if (ctx.cr6.eq) goto loc_8805BA80;
	// lwz r11,212(r31)
	ctx.current_instruction = 0x8805BA64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// addi r31,r31,212
	ctx.r31.s64 = ctx.r31.s64 + 212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8805BA70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805BA7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805BA7C:
	// stw r31,0(r27)
	ctx.current_instruction = 0x8805BA7C;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_8805BA80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805C1A8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805C1A8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805C1A8;
	ctx.current_instruction = 0x8805C1A8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8805c1cc
	if (ctx.cr6.eq) goto loc_8805C1CC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8805c1cc
	if (!ctx.cr6.eq) goto loc_8805C1CC;
	// lwz r10,48(r3)
	ctx.current_instruction = 0x8805C1BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// stw r10,52(r3)
	ctx.current_instruction = 0x8805C1C0;
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8805C1CC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,52(r11)
	ctx.current_instruction = 0x8805C1D4;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805D208) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805D208;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805D208) {
			switch (rex_dispatch_address) {
				case 0x8805D210:
				case 0x8805D2E0:
				case 0x8805D300:
				case 0x8805D370:
				case 0x8805D390:
				case 0x8805D3C0:
				case 0x8805D3E0:
				case 0x8805D40C:
				case 0x8805D42C:
				case 0x8805D444:
				case 0x8805D464:
				case 0x8805D47C:
				case 0x8805D4A0:
				case 0x8805D4B8:
				case 0x8805D508:
				case 0x8805D520:
				case 0x8805D540:
				case 0x8805D560:
				case 0x8805D578:
				case 0x8805D584:
				case 0x8805D5A4:
				case 0x8805D5CC:
				case 0x8805D5E0:
				case 0x8805D5FC:
				case 0x8805D618:
				case 0x8805D634:
				case 0x8805D650:
				case 0x8805D66C:
				case 0x8805D678:
				case 0x8805D694:
				case 0x8805D6F4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805D208;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805D210: goto loc_8805D210;
		case 0x8805D2E0: goto loc_8805D2E0;
		case 0x8805D300: goto loc_8805D300;
		case 0x8805D370: goto loc_8805D370;
		case 0x8805D390: goto loc_8805D390;
		case 0x8805D3C0: goto loc_8805D3C0;
		case 0x8805D3E0: goto loc_8805D3E0;
		case 0x8805D40C: goto loc_8805D40C;
		case 0x8805D42C: goto loc_8805D42C;
		case 0x8805D444: goto loc_8805D444;
		case 0x8805D464: goto loc_8805D464;
		case 0x8805D47C: goto loc_8805D47C;
		case 0x8805D4A0: goto loc_8805D4A0;
		case 0x8805D4B8: goto loc_8805D4B8;
		case 0x8805D508: goto loc_8805D508;
		case 0x8805D520: goto loc_8805D520;
		case 0x8805D540: goto loc_8805D540;
		case 0x8805D560: goto loc_8805D560;
		case 0x8805D578: goto loc_8805D578;
		case 0x8805D584: goto loc_8805D584;
		case 0x8805D5A4: goto loc_8805D5A4;
		case 0x8805D5CC: goto loc_8805D5CC;
		case 0x8805D5E0: goto loc_8805D5E0;
		case 0x8805D5FC: goto loc_8805D5FC;
		case 0x8805D618: goto loc_8805D618;
		case 0x8805D634: goto loc_8805D634;
		case 0x8805D650: goto loc_8805D650;
		case 0x8805D66C: goto loc_8805D66C;
		case 0x8805D678: goto loc_8805D678;
		case 0x8805D694: goto loc_8805D694;
		case 0x8805D6F4: goto loc_8805D6F4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x8805D210;
	__savegprlr_19(ctx, base);
loc_8805D210:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x8805D210;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r22,48(r3)
	ctx.current_instruction = 0x8805D21C;
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r22.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r22,0(r6)
	ctx.current_instruction = 0x8805D224;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r22.u32);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// ld r9,88(r3)
	ctx.current_instruction = 0x8805D22C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 88);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// ld r11,64(r3)
	ctx.current_instruction = 0x8805D234;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// ld r10,56(r3)
	ctx.current_instruction = 0x8805D23C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 56);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x8805d264
	if (ctx.cr6.lt) goto loc_8805D264;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,48(r31)
	ctx.current_instruction = 0x8805D258;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_8805D264:
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// clrldi r7,r21,32
	ctx.r7.u64 = ctx.r21.u64 & 0xFFFFFFFF;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpld cr6,r6,r7
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r7.u64, ctx.xer);
	// bge cr6,0x8805d28c
	if (!ctx.cr6.lt) goto loc_8805D28C;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r10,r9,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8805D28C:
	// li r20,1
	ctx.r20.s64 = 1;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8805d72c
	if (ctx.cr6.eq) goto loc_8805D72C;
loc_8805D298:
	// ld r10,64(r31)
	ctx.current_instruction = 0x8805D298;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 64);
	// ld r11,56(r31)
	ctx.current_instruction = 0x8805D29C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 56);
	// ld r9,88(r31)
	ctx.current_instruction = 0x8805D2A0;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 88);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bge cr6,0x8805d728
	if (!ctx.cr6.lt) goto loc_8805D728;
	// lwz r11,132(r31)
	ctx.current_instruction = 0x8805D2B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r10,108(r31)
	ctx.current_instruction = 0x8805D2B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// stw r22,112(r31)
	ctx.current_instruction = 0x8805D2B8;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r22.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,128(r31)
	ctx.current_instruction = 0x8805D2C0;
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// ble cr6,0x8805d34c
	if (!ctx.cr6.gt) goto loc_8805D34C;
loc_8805D2C8:
	// lwz r3,128(r31)
	ctx.current_instruction = 0x8805D2C8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// ld r30,88(r31)
	ctx.current_instruction = 0x8805D2CC;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r31.u32 + 88);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805D2D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.current_instruction = 0x8805D2D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D2E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D2E0:
	// cmpld cr6,r30,r3
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r3.u64, ctx.xer);
	// blt cr6,0x8805d310
	if (ctx.cr6.lt) goto loc_8805D310;
	// lwz r3,128(r31)
	ctx.current_instruction = 0x8805D2E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// ld r30,88(r31)
	ctx.current_instruction = 0x8805D2EC;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r31.u32 + 88);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805D2F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.current_instruction = 0x8805D2F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D300;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D300:
	// lwz r9,104(r31)
	ctx.current_instruction = 0x8805D300;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmpld cr6,r30,r8
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x8805d34c
	if (ctx.cr6.lt) goto loc_8805D34C;
loc_8805D310:
	// ld r11,72(r31)
	ctx.current_instruction = 0x8805D310;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 72);
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// lwz r11,128(r31)
	ctx.current_instruction = 0x8805D318;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// blt cr6,0x8805d328
	if (ctx.cr6.lt) goto loc_8805D328;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8805D320;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8805d32c
	goto loc_8805D32C;
loc_8805D328:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8805D328;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8805D32C:
	// lwz r11,112(r31)
	ctx.current_instruction = 0x8805D32C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// stw r10,128(r31)
	ctx.current_instruction = 0x8805D330;
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,112(r31)
	ctx.current_instruction = 0x8805D33C;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r9,108(r31)
	ctx.current_instruction = 0x8805D340;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8805d2c8
	if (ctx.cr6.lt) goto loc_8805D2C8;
loc_8805D34C:
	// lwz r11,112(r31)
	ctx.current_instruction = 0x8805D34C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.current_instruction = 0x8805D350;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8805d3ac
	if (ctx.cr6.lt) goto loc_8805D3AC;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805D35C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,124(r11)
	ctx.current_instruction = 0x8805D364;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D370;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D370:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8805d72c
	if (ctx.cr6.lt) goto loc_8805D72C;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805D37C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,120(r11)
	ctx.current_instruction = 0x8805D384;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D390;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D390:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8805d72c
	if (ctx.cr6.lt) goto loc_8805D72C;
	// lwz r11,48(r31)
	ctx.current_instruction = 0x8805D39C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8805d72c
	if (!ctx.cr6.eq) goto loc_8805D72C;
	// b 0x8805d71c
	goto loc_8805D71C;
loc_8805D3AC:
	// lwz r3,128(r31)
	ctx.current_instruction = 0x8805D3AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805D3B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.current_instruction = 0x8805D3B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D3C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D3C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805d728
	if (!ctx.cr6.eq) goto loc_8805D728;
	// lwz r3,128(r31)
	ctx.current_instruction = 0x8805D3C8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// stw r3,132(r31)
	ctx.current_instruction = 0x8805D3CC;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805D3D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.current_instruction = 0x8805D3D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D3E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D3E0:
	// lwz r9,108(r31)
	ctx.current_instruction = 0x8805D3E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r30,128(r31)
	ctx.current_instruction = 0x8805D3E4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// addic. r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r3,72(r31)
	ctx.current_instruction = 0x8805D3F0;
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r3.u64);
	// beq 0x8805d618
	if (ctx.cr0.eq) goto loc_8805D618;
loc_8805D3F8:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8805D3F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.current_instruction = 0x8805D400;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D40C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D40C:
	// lwz r30,8(r30)
	ctx.current_instruction = 0x8805D40C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,128(r31)
	ctx.current_instruction = 0x8805D414;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r30)
	ctx.current_instruction = 0x8805D41C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,72(r9)
	ctx.current_instruction = 0x8805D420;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8805D42C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D42C:
	// lwz r7,0(r28)
	ctx.current_instruction = 0x8805D42C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,72(r7)
	ctx.current_instruction = 0x8805D438;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8805D444;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D444:
	// cmpld cr6,r19,r3
	ctx.cr6.compare<uint64_t>(ctx.r19.u64, ctx.r3.u64, ctx.xer);
	// bgt cr6,0x8805d5b0
	if (ctx.cr6.gt) goto loc_8805D5B0;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8805D44C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,128(r31)
	ctx.current_instruction = 0x8805D454;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,72(r11)
	ctx.current_instruction = 0x8805D458;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D464;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D464:
	// lwz r9,0(r28)
	ctx.current_instruction = 0x8805D464;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,72(r9)
	ctx.current_instruction = 0x8805D470;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8805D47C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D47C:
	// lwz r7,116(r31)
	ctx.current_instruction = 0x8805D47C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// subf r6,r19,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r19.u64;
	// cmpld cr6,r7,r6
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r6.u64, ctx.xer);
	// bgt cr6,0x8805d618
	if (ctx.cr6.gt) goto loc_8805D618;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8805D48C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.current_instruction = 0x8805D494;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D4A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D4A0:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,44(r31)
	ctx.current_instruction = 0x8805D4A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x881eccf0
	ctx.lr = 0x8805D4B8;
	sub_881ECCF0(ctx, base);
loc_8805D4B8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8805d5c8
	if (ctx.cr6.eq) goto loc_8805D5C8;
	// ld r10,64(r31)
	ctx.current_instruction = 0x8805D4C0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 64);
	// ld r11,56(r31)
	ctx.current_instruction = 0x8805D4C4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 56);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,104(r31)
	ctx.current_instruction = 0x8805D4CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmpld cr6,r29,r9
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x8805d4f0
	if (ctx.cr6.lt) goto loc_8805D4F0;
	// lwz r10,120(r31)
	ctx.current_instruction = 0x8805D4DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8805d618
	if (ctx.cr6.eq) goto loc_8805D618;
	// rldicr r29,r11,0,52
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF800;
loc_8805D4F0:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8805D4F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.current_instruction = 0x8805D4FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D508;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D508:
	// lwz r9,0(r30)
	ctx.current_instruction = 0x8805D508;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,60(r9)
	ctx.current_instruction = 0x8805D514;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8805D520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D520:
	// ld r4,96(r31)
	ctx.current_instruction = 0x8805D520;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
	// std r7,96(r31)
	ctx.current_instruction = 0x8805D52C;
	REX_STORE_U64(ctx.r31.u32 + 96, ctx.r7.u64);
	// lwz r6,0(r30)
	ctx.current_instruction = 0x8805D530;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,68(r6)
	ctx.current_instruction = 0x8805D534;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 68);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8805D540;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D540:
	// rldicl r11,r29,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF;
	// stw r29,8(r28)
	ctx.current_instruction = 0x8805D544;
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,12(r28)
	ctx.current_instruction = 0x8805D54C;
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.current_instruction = 0x8805D550;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,40(r10)
	ctx.current_instruction = 0x8805D554;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8805D560;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D560:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,104(r31)
	ctx.current_instruction = 0x8805D564;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r3,44(r31)
	ctx.current_instruction = 0x8805D56C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x881ecb70
	ctx.lr = 0x8805D578;
	sub_881ECB70(ctx, base);
loc_8805D578:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805d5b0
	if (!ctx.cr6.eq) goto loc_8805D5B0;
	// bl 0x881e9030
	ctx.lr = 0x8805D584;
	sub_881E9030(ctx, base);
loc_8805D584:
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// bne cr6,0x8805d5a8
	if (!ctx.cr6.eq) goto loc_8805D5A8;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8805D58C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.current_instruction = 0x8805D598;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D5A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D5A4:
	// b 0x8805d5b0
	goto loc_8805D5B0;
loc_8805D5A8:
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x8805d5e8
	if (!ctx.cr6.eq) goto loc_8805D5E8;
loc_8805D5B0:
	// lwz r11,108(r31)
	ctx.current_instruction = 0x8805D5B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8805d3f8
	if (ctx.cr6.lt) goto loc_8805D3F8;
	// b 0x8805d618
	goto loc_8805D618;
loc_8805D5C8:
	// bl 0x881e9030
	ctx.lr = 0x8805D5CC;
	sub_881E9030(ctx, base);
loc_8805D5CC:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805D5CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.current_instruction = 0x8805D5D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D5E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D5E0:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x8805d618
	goto loc_8805D618;
loc_8805D5E8:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805D5E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.current_instruction = 0x8805D5F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D5FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D5FC:
	// lwz r9,0(r30)
	ctx.current_instruction = 0x8805D5FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,52(r9)
	ctx.current_instruction = 0x8805D60C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8805D618;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D618:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x8805d72c
	if (ctx.cr6.lt) goto loc_8805D72C;
	// lwz r3,128(r31)
	ctx.current_instruction = 0x8805D620;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805D624;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.current_instruction = 0x8805D628;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D634;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D634:
	// lwz r9,128(r31)
	ctx.current_instruction = 0x8805D634;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.current_instruction = 0x8805D640;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,40(r8)
	ctx.current_instruction = 0x8805D644;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8805D650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D650:
	// stw r22,80(r1)
	ctx.current_instruction = 0x8805D650;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,44(r31)
	ctx.current_instruction = 0x8805D664;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x881eccf0
	ctx.lr = 0x8805D66C;
	sub_881ECCF0(ctx, base);
loc_8805D66C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805d698
	if (!ctx.cr6.eq) goto loc_8805D698;
	// bl 0x881e9030
	ctx.lr = 0x8805D678;
	sub_881E9030(ctx, base);
loc_8805D678:
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// beq cr6,0x8805d698
	if (ctx.cr6.eq) goto loc_8805D698;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805D680;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.current_instruction = 0x8805D688;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D694:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_8805D698:
	// ld r10,72(r31)
	ctx.current_instruction = 0x8805D698;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 72);
	// ld r11,88(r31)
	ctx.current_instruction = 0x8805D69C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 88);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,104(r31)
	ctx.current_instruction = 0x8805D6A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r10,r7,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r30,r10,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x8805d6c0
	if (!ctx.cr6.gt) goto loc_8805D6C0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8805D6C0:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8805D6C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8805d728
	if (ctx.cr6.lt) goto loc_8805D728;
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8805d728
	if (ctx.cr0.eq) goto loc_8805D728;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8805d6e0
	if (!ctx.cr6.gt) goto loc_8805D6E0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8805D6E0:
	// lwz r11,0(r25)
	ctx.current_instruction = 0x8805D6E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x880547a0
	ctx.lr = 0x8805D6F4;
	sub_880547A0(ctx, base);
loc_8805D6F4:
	// ld r10,88(r31)
	ctx.current_instruction = 0x8805D6F4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 88);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf r26,r30,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// std r11,88(r31)
	ctx.current_instruction = 0x8805D708;
	REX_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// lwz r11,0(r25)
	ctx.current_instruction = 0x8805D70C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,0(r25)
	ctx.current_instruction = 0x8805D714;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// blt cr6,0x8805d72c
	if (ctx.cr6.lt) goto loc_8805D72C;
loc_8805D71C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8805d298
	if (!ctx.cr6.eq) goto loc_8805D298;
	// b 0x8805d72c
	goto loc_8805D72C;
loc_8805D728:
	// stw r20,48(r31)
	ctx.current_instruction = 0x8805D728;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r20.u32);
loc_8805D72C:
	// lwz r11,0(r25)
	ctx.current_instruction = 0x8805D72C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x8805d740
	if (ctx.cr6.lt) goto loc_8805D740;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bge cr6,0x8805d744
	if (!ctx.cr6.lt) goto loc_8805D744;
loc_8805D740:
	// stw r20,48(r31)
	ctx.current_instruction = 0x8805D740;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r20.u32);
loc_8805D744:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806DD70) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806DD70;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806DD70) {
			switch (rex_dispatch_address) {
				case 0x8806DD78:
				case 0x8806DDFC:
				case 0x8806DE0C:
				case 0x8806DE1C:
				case 0x8806DE2C:
				case 0x8806DE3C:
				case 0x8806DE4C:
				case 0x8806DE5C:
				case 0x8806DE6C:
				case 0x8806DE7C:
				case 0x8806DE8C:
				case 0x8806DE9C:
				case 0x8806DEB8:
				case 0x8806DEC8:
				case 0x8806DED8:
				case 0x8806DF08:
				case 0x8806DF28:
				case 0x8806DF4C:
				case 0x8806DF68:
				case 0x8806DF84:
				case 0x8806DFA0:
				case 0x8806DFBC:
				case 0x8806DFD8:
				case 0x8806DFF4:
				case 0x8806DFFC:
				case 0x8806E020:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806DD70;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806DD78: goto loc_8806DD78;
		case 0x8806DDFC: goto loc_8806DDFC;
		case 0x8806DE0C: goto loc_8806DE0C;
		case 0x8806DE1C: goto loc_8806DE1C;
		case 0x8806DE2C: goto loc_8806DE2C;
		case 0x8806DE3C: goto loc_8806DE3C;
		case 0x8806DE4C: goto loc_8806DE4C;
		case 0x8806DE5C: goto loc_8806DE5C;
		case 0x8806DE6C: goto loc_8806DE6C;
		case 0x8806DE7C: goto loc_8806DE7C;
		case 0x8806DE8C: goto loc_8806DE8C;
		case 0x8806DE9C: goto loc_8806DE9C;
		case 0x8806DEB8: goto loc_8806DEB8;
		case 0x8806DEC8: goto loc_8806DEC8;
		case 0x8806DED8: goto loc_8806DED8;
		case 0x8806DF08: goto loc_8806DF08;
		case 0x8806DF28: goto loc_8806DF28;
		case 0x8806DF4C: goto loc_8806DF4C;
		case 0x8806DF68: goto loc_8806DF68;
		case 0x8806DF84: goto loc_8806DF84;
		case 0x8806DFA0: goto loc_8806DFA0;
		case 0x8806DFBC: goto loc_8806DFBC;
		case 0x8806DFD8: goto loc_8806DFD8;
		case 0x8806DFF4: goto loc_8806DFF4;
		case 0x8806DFFC: goto loc_8806DFFC;
		case 0x8806E020: goto loc_8806E020;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8806DD78;
	__savegprlr_27(ctx, base);
loc_8806DD78:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8806DD78;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,30408(r3)
	ctx.current_instruction = 0x8806DD7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30408);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806dde0
	if (ctx.cr6.eq) goto loc_8806DDE0;
	// lwz r11,30432(r3)
	ctx.current_instruction = 0x8806DD98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806e020
	if (ctx.cr6.eq) goto loc_8806E020;
	// lwz r11,30672(r3)
	ctx.current_instruction = 0x8806DDA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30672);
	// lwz r10,30648(r3)
	ctx.current_instruction = 0x8806DDA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30648);
	// stw r30,1268(r3)
	ctx.current_instruction = 0x8806DDAC;
	REX_STORE_U32(ctx.r3.u32 + 1268, ctx.r30.u32);
	// stw r28,1272(r3)
	ctx.current_instruction = 0x8806DDB0;
	REX_STORE_U32(ctx.r3.u32 + 1272, ctx.r28.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r30,1276(r3)
	ctx.current_instruction = 0x8806DDB8;
	REX_STORE_U32(ctx.r3.u32 + 1276, ctx.r30.u32);
	// stw r30,28164(r3)
	ctx.current_instruction = 0x8806DDBC;
	REX_STORE_U32(ctx.r3.u32 + 28164, ctx.r30.u32);
	// stw r30,2564(r3)
	ctx.current_instruction = 0x8806DDC0;
	REX_STORE_U32(ctx.r3.u32 + 2564, ctx.r30.u32);
	// bne cr6,0x8806dde0
	if (!ctx.cr6.eq) goto loc_8806DDE0;
	// lwz r11,30676(r3)
	ctx.current_instruction = 0x8806DDC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30676);
	// lwz r10,30652(r3)
	ctx.current_instruction = 0x8806DDCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30652);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r6,r28
	ctx.r28.u64 = ctx.r6.u64 & ctx.r28.u64;
loc_8806DDE0:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x8806DDE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DDE8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x880e68e0
	ctx.lr = 0x8806DDFC;
	sub_880E68E0(ctx, base);
loc_8806DDFC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1268(r31)
	ctx.current_instruction = 0x8806DE00;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1268);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DE04;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DE0C;
	sub_880E6960(ctx, base);
loc_8806DE0C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1272(r31)
	ctx.current_instruction = 0x8806DE10;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1272);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DE14;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DE1C;
	sub_880E6960(ctx, base);
loc_8806DE1C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1276(r31)
	ctx.current_instruction = 0x8806DE20;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1276);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DE24;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DE2C;
	sub_880E6960(ctx, base);
loc_8806DE2C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28164(r31)
	ctx.current_instruction = 0x8806DE30;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28164);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DE34;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DE3C;
	sub_880E6960(ctx, base);
loc_8806DE3C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1604(r31)
	ctx.current_instruction = 0x8806DE40;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1604);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DE44;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DE4C;
	sub_880E6960(ctx, base);
loc_8806DE4C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,788(r31)
	ctx.current_instruction = 0x8806DE50;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 788);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DE54;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DE5C;
	sub_880E6960(ctx, base);
loc_8806DE5C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DE60;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r4,2564(r31)
	ctx.current_instruction = 0x8806DE64;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2564);
	// bl 0x880e6960
	ctx.lr = 0x8806DE6C;
	sub_880E6960(ctx, base);
loc_8806DE6C:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,2424(r31)
	ctx.current_instruction = 0x8806DE70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2424);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DE74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DE7C;
	sub_880E6960(ctx, base);
loc_8806DE7C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1608(r31)
	ctx.current_instruction = 0x8806DE80;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DE84;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DE8C;
	sub_880E6960(ctx, base);
loc_8806DE8C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2336(r31)
	ctx.current_instruction = 0x8806DE90;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2336);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DE94;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DE9C;
	sub_880E6960(ctx, base);
loc_8806DE9C:
	// lwz r9,1436(r31)
	ctx.current_instruction = 0x8806DE9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1436);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DEA0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8806dec0
	if (ctx.cr6.eq) goto loc_8806DEC0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x8806DEB8;
	sub_880E6960(ctx, base);
loc_8806DEB8:
	// lwz r4,1428(r31)
	ctx.current_instruction = 0x8806DEB8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1428);
	// b 0x8806decc
	goto loc_8806DECC;
loc_8806DEC0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x8806DEC8;
	sub_880E6960(ctx, base);
loc_8806DEC8:
	// lwz r4,1440(r31)
	ctx.current_instruction = 0x8806DEC8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1440);
loc_8806DECC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DED0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DED8;
	sub_880E6960(ctx, base);
loc_8806DED8:
	// lwz r11,1264(r31)
	ctx.current_instruction = 0x8806DED8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806df18
	if (ctx.cr6.eq) goto loc_8806DF18;
	// lwz r11,1260(r31)
	ctx.current_instruction = 0x8806DEE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8806df18
	if (!ctx.cr6.gt) goto loc_8806DF18;
	// addi r29,r31,872
	ctx.r29.s64 = ctx.r31.s64 + 872;
loc_8806DEF4:
	// lwzu r11,4(r29)
	ctx.current_instruction = 0x8806DEF4;
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DEFC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x8806DF08;
	sub_880E6960(ctx, base);
loc_8806DF08:
	// lwz r11,1260(r31)
	ctx.current_instruction = 0x8806DF08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1260);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8806def4
	if (ctx.cr6.lt) goto loc_8806DEF4;
loc_8806DF18:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DF1C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x880e6960
	ctx.lr = 0x8806DF28;
	sub_880E6960(ctx, base);
loc_8806DF28:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8806df68
	if (ctx.cr6.eq) goto loc_8806DF68;
	// lwz r11,796(r31)
	ctx.current_instruction = 0x8806DF30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DF38;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x8806DF4C;
	sub_880E6960(ctx, base);
loc_8806DF4C:
	// lwz r9,800(r31)
	ctx.current_instruction = 0x8806DF4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DF54;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x8806DF68;
	sub_880E6960(ctx, base);
loc_8806DF68:
	// lwz r11,2564(r31)
	ctx.current_instruction = 0x8806DF68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806df84
	if (ctx.cr6.eq) goto loc_8806DF84;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2568(r31)
	ctx.current_instruction = 0x8806DF78;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2568);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DF7C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DF84;
	sub_880E6960(ctx, base);
loc_8806DF84:
	// lwz r11,30784(r31)
	ctx.current_instruction = 0x8806DF84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30784);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DF8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r4,r9,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// bl 0x880e6960
	ctx.lr = 0x8806DFA0;
	sub_880E6960(ctx, base);
loc_8806DFA0:
	// lwz r11,30784(r31)
	ctx.current_instruction = 0x8806DFA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8806dfbc
	if (!ctx.cr6.gt) goto loc_8806DFBC;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DFB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x8806DFBC;
	sub_880E6960(ctx, base);
loc_8806DFBC:
	// lwz r11,30788(r31)
	ctx.current_instruction = 0x8806DFBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30788);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DFC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r4,r9,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// bl 0x880e6960
	ctx.lr = 0x8806DFD8;
	sub_880E6960(ctx, base);
loc_8806DFD8:
	// lwz r11,30788(r31)
	ctx.current_instruction = 0x8806DFD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8806dff4
	if (!ctx.cr6.gt) goto loc_8806DFF4;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DFE8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x8806DFF4;
	sub_880E6960(ctx, base);
loc_8806DFF4:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806DFF4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6b40
	ctx.lr = 0x8806DFFC;
	sub_880E6B40(ctx, base);
loc_8806DFFC:
	// lwz r11,7868(r31)
	ctx.current_instruction = 0x8806DFFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x8806E000;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// subfic r9,r10,39
	ctx.xer.ca = ctx.r10.u32 <= 39;
	ctx.r9.u64 = static_cast<uint64_t>(39) - ctx.r10.u64;
	// rlwinm r10,r9,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r11,4(r11)
	ctx.current_instruction = 0x8806E00C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r27)
	ctx.current_instruction = 0x8806E014;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806E018;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6900
	ctx.lr = 0x8806E020;
	sub_880E6900(ctx, base);
loc_8806E020:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807B658) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807B658;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807B658) {
			switch (rex_dispatch_address) {
				case 0x8807B660:
				case 0x8807B6C4:
				case 0x8807B764:
				case 0x8807B794:
				case 0x8807B7D4:
				case 0x8807B814:
				case 0x8807B888:
				case 0x8807B8B4:
				case 0x8807B8E0:
				case 0x8807B924:
				case 0x8807B98C:
				case 0x8807B99C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807B658;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807B660: goto loc_8807B660;
		case 0x8807B6C4: goto loc_8807B6C4;
		case 0x8807B764: goto loc_8807B764;
		case 0x8807B794: goto loc_8807B794;
		case 0x8807B7D4: goto loc_8807B7D4;
		case 0x8807B814: goto loc_8807B814;
		case 0x8807B888: goto loc_8807B888;
		case 0x8807B8B4: goto loc_8807B8B4;
		case 0x8807B8E0: goto loc_8807B8E0;
		case 0x8807B924: goto loc_8807B924;
		case 0x8807B98C: goto loc_8807B98C;
		case 0x8807B99C: goto loc_8807B99C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8807B660;
	__savegprlr_24(ctx, base);
loc_8807B660:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x8807B660;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,6756(r3)
	ctx.current_instruction = 0x8807B664;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6756);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b688
	if (!ctx.cr6.eq) goto loc_8807B688;
	// lwz r11,7572(r3)
	ctx.current_instruction = 0x8807B67C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7572);
	// stw r11,676(r3)
	ctx.current_instruction = 0x8807B680;
	REX_STORE_U32(ctx.r3.u32 + 676, ctx.r11.u32);
	// stw r11,672(r3)
	ctx.current_instruction = 0x8807B684;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r11.u32);
loc_8807B688:
	// lwz r11,2192(r31)
	ctx.current_instruction = 0x8807B688;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2192);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,2200(r31)
	ctx.current_instruction = 0x8807B690;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2200);
	// stw r30,96(r1)
	ctx.current_instruction = 0x8807B694;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,2192(r31)
	ctx.current_instruction = 0x8807B69C;
	REX_STORE_U32(ctx.r31.u32 + 2192, ctx.r9.u32);
	// bge 0x8807b6a8
	if (!ctx.cr0.lt) goto loc_8807B6A8;
	// stw r30,2192(r31)
	ctx.current_instruction = 0x8807B6A4;
	REX_STORE_U32(ctx.r31.u32 + 2192, ctx.r30.u32);
loc_8807B6A8:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807B6A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// lwz r27,676(r31)
	ctx.current_instruction = 0x8807B6AC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// lwz r26,1424(r31)
	ctx.current_instruction = 0x8807B6B0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807b6c4
	if (!ctx.cr6.eq) goto loc_8807B6C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e2c80
	ctx.lr = 0x8807B6C4;
	sub_880E2C80(ctx, base);
loc_8807B6C4:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8807B6C8:
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x8807B6C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// stw r29,6736(r31)
	ctx.current_instruction = 0x8807B6CC;
	REX_STORE_U32(ctx.r31.u32 + 6736, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b83c
	if (ctx.cr6.eq) goto loc_8807B83C;
	// lwz r4,2804(r31)
	ctx.current_instruction = 0x8807B6D8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2804);
	// stw r30,96(r1)
	ctx.current_instruction = 0x8807B6DC;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	ctx.current_instruction = 0x8807B6E0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8807b708
	if (ctx.cr6.eq) goto loc_8807B708;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8807b708
	if (ctx.cr6.eq) goto loc_8807B708;
	// lwz r11,2808(r31)
	ctx.current_instruction = 0x8807B6F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2808);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b708
	if (ctx.cr6.eq) goto loc_8807B708;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8807b710
	if (!ctx.cr6.eq) goto loc_8807B710;
loc_8807B708:
	// lwz r11,2124(r31)
	ctx.current_instruction = 0x8807B708;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// stw r11,28168(r31)
	ctx.current_instruction = 0x8807B70C;
	REX_STORE_U32(ctx.r31.u32 + 28168, ctx.r11.u32);
loc_8807B710:
	// lwz r11,20264(r31)
	ctx.current_instruction = 0x8807B710;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20264);
	// lwz r10,30408(r31)
	ctx.current_instruction = 0x8807B714;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// stw r4,2800(r31)
	ctx.current_instruction = 0x8807B718;
	REX_STORE_U32(ctx.r31.u32 + 2800, ctx.r4.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,20260(r31)
	ctx.current_instruction = 0x8807B720;
	REX_STORE_U32(ctx.r31.u32 + 20260, ctx.r11.u32);
	// bne cr6,0x8807b740
	if (!ctx.cr6.eq) goto loc_8807B740;
	// lwz r11,2116(r31)
	ctx.current_instruction = 0x8807B728;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b740
	if (!ctx.cr6.eq) goto loc_8807B740;
	// lwz r11,30728(r31)
	ctx.current_instruction = 0x8807B734;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b764
	if (ctx.cr6.eq) goto loc_8807B764;
loc_8807B740:
	// lwz r11,30720(r31)
	ctx.current_instruction = 0x8807B740;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30720);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b758
	if (!ctx.cr6.eq) goto loc_8807B758;
	// lwz r11,30724(r31)
	ctx.current_instruction = 0x8807B74C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b764
	if (ctx.cr6.eq) goto loc_8807B764;
loc_8807B758:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,676(r31)
	ctx.current_instruction = 0x8807B75C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// bl 0x8806d3c0
	ctx.lr = 0x8807B764;
	sub_8806D3C0(ctx, base);
loc_8807B764:
	// lwz r11,1560(r31)
	ctx.current_instruction = 0x8807B764;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r6,1424(r31)
	ctx.current_instruction = 0x8807B770;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// lwz r5,676(r31)
	ctx.current_instruction = 0x8807B778;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,2800(r31)
	ctx.current_instruction = 0x8807B780;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,92(r1)
	ctx.current_instruction = 0x8807B788;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x8807B78C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880799f0
	ctx.lr = 0x8807B794;
	sub_880799F0(ctx, base);
loc_8807B794:
	// lwz r4,2808(r31)
	ctx.current_instruction = 0x8807B794;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2808);
	// stw r4,2800(r31)
	ctx.current_instruction = 0x8807B798;
	REX_STORE_U32(ctx.r31.u32 + 2800, ctx.r4.u32);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r11,2804(r31)
	ctx.current_instruction = 0x8807B7A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2804);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r24,1560(r31)
	ctx.current_instruction = 0x8807B7A8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,1424(r31)
	ctx.current_instruction = 0x8807B7B4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,676(r31)
	ctx.current_instruction = 0x8807B7BC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// rotlwi r4,r4,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r29,92(r1)
	ctx.current_instruction = 0x8807B7C4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r11,20260(r31)
	ctx.current_instruction = 0x8807B7C8;
	REX_STORE_U32(ctx.r31.u32 + 20260, ctx.r11.u32);
	// stw r24,84(r1)
	ctx.current_instruction = 0x8807B7CC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// bl 0x880799f0
	ctx.lr = 0x8807B7D4;
	sub_880799F0(ctx, base);
loc_8807B7D4:
	// lwz r10,2124(r31)
	ctx.current_instruction = 0x8807B7D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8807b814
	if (!ctx.cr6.gt) goto loc_8807B814;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807B7E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8807b814
	if (ctx.cr6.eq) goto loc_8807B814;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8807b814
	if (ctx.cr6.eq) goto loc_8807B814;
	// lwz r11,724(r31)
	ctx.current_instruction = 0x8807B7F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r10,720(r31)
	ctx.current_instruction = 0x8807B7F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lwz r4,7848(r31)
	ctx.current_instruction = 0x8807B800;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7848);
	// lwz r3,2448(r31)
	ctx.current_instruction = 0x8807B804;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2448);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x880547a0
	ctx.lr = 0x8807B814;
	sub_880547A0(ctx, base);
loc_8807B814:
	// lwz r11,96(r1)
	ctx.current_instruction = 0x8807B814;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b834
	if (!ctx.cr6.eq) goto loc_8807B834;
	// lwz r11,100(r1)
	ctx.current_instruction = 0x8807B820;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b834
	if (!ctx.cr6.eq) goto loc_8807B834;
	// stw r30,96(r1)
	ctx.current_instruction = 0x8807B82C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// b 0x8807b8b4
	goto loc_8807B8B4;
loc_8807B834:
	// stw r29,96(r1)
	ctx.current_instruction = 0x8807B834;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// b 0x8807b8b4
	goto loc_8807B8B4;
loc_8807B83C:
	// lwz r11,30408(r31)
	ctx.current_instruction = 0x8807B83C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b860
	if (!ctx.cr6.eq) goto loc_8807B860;
	// lwz r11,2116(r31)
	ctx.current_instruction = 0x8807B848;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b860
	if (!ctx.cr6.eq) goto loc_8807B860;
	// lwz r11,30728(r31)
	ctx.current_instruction = 0x8807B854;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b888
	if (ctx.cr6.eq) goto loc_8807B888;
loc_8807B860:
	// lwz r11,30720(r31)
	ctx.current_instruction = 0x8807B860;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30720);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b878
	if (!ctx.cr6.eq) goto loc_8807B878;
	// lwz r11,30724(r31)
	ctx.current_instruction = 0x8807B86C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b888
	if (ctx.cr6.eq) goto loc_8807B888;
loc_8807B878:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,672(r31)
	ctx.current_instruction = 0x8807B87C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// lwz r4,2800(r31)
	ctx.current_instruction = 0x8807B880;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// bl 0x8806d3c0
	ctx.lr = 0x8807B888;
	sub_8806D3C0(ctx, base);
loc_8807B888:
	// lwz r11,1560(r31)
	ctx.current_instruction = 0x8807B888;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r6,1424(r31)
	ctx.current_instruction = 0x8807B894;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lwz r5,676(r31)
	ctx.current_instruction = 0x8807B89C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r4,2800(r31)
	ctx.current_instruction = 0x8807B8A4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8807B8AC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880794a0
	ctx.lr = 0x8807B8B4;
	sub_880794A0(ctx, base);
loc_8807B8B4:
	// lwz r11,6736(r31)
	ctx.current_instruction = 0x8807B8B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b8e4
	if (!ctx.cr6.eq) goto loc_8807B8E4;
	// lwz r11,672(r31)
	ctx.current_instruction = 0x8807B8C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bge cr6,0x8807b8e4
	if (!ctx.cr6.lt) goto loc_8807B8E4;
	// lwz r11,676(r31)
	ctx.current_instruction = 0x8807B8CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bge cr6,0x8807b8e4
	if (!ctx.cr6.lt) goto loc_8807B8E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807ab88
	ctx.lr = 0x8807B8E0;
	sub_8807AB88(ctx, base);
loc_8807B8E0:
	// b 0x8807b924
	goto loc_8807B924;
loc_8807B8E4:
	// lwz r11,6760(r31)
	ctx.current_instruction = 0x8807B8E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b900
	if (ctx.cr6.eq) goto loc_8807B900;
	// lwz r11,6764(r31)
	ctx.current_instruction = 0x8807B8F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6764);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b900
	if (ctx.cr6.eq) goto loc_8807B900;
	// stw r30,6756(r31)
	ctx.current_instruction = 0x8807B8FC;
	REX_STORE_U32(ctx.r31.u32 + 6756, ctx.r30.u32);
loc_8807B900:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x8807B900;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6748(r31)
	ctx.current_instruction = 0x8807B908;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6748);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,6764(r31)
	ctx.current_instruction = 0x8807B910;
	REX_STORE_U32(ctx.r31.u32 + 6764, ctx.r29.u32);
	// stw r30,6752(r31)
	ctx.current_instruction = 0x8807B914;
	REX_STORE_U32(ctx.r31.u32 + 6752, ctx.r30.u32);
	// stw r30,6744(r31)
	ctx.current_instruction = 0x8807B918;
	REX_STORE_U32(ctx.r31.u32 + 6744, ctx.r30.u32);
	// stw r29,6760(r31)
	ctx.current_instruction = 0x8807B91C;
	REX_STORE_U32(ctx.r31.u32 + 6760, ctx.r29.u32);
	// bl 0x88052d90
	ctx.lr = 0x8807B924;
	sub_88052D90(ctx, base);
loc_8807B924:
	// lwz r11,6736(r31)
	ctx.current_instruction = 0x8807B924;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b948
	if (!ctx.cr6.eq) goto loc_8807B948;
	// lwz r11,672(r31)
	ctx.current_instruction = 0x8807B930;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bge cr6,0x8807b948
	if (!ctx.cr6.lt) goto loc_8807B948;
	// lwz r11,676(r31)
	ctx.current_instruction = 0x8807B93C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// blt cr6,0x8807b6c8
	if (ctx.cr6.lt) goto loc_8807B6C8;
loc_8807B948:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807B948;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8807b95c
	if (ctx.cr6.eq) goto loc_8807B95C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8807b964
	if (!ctx.cr6.eq) goto loc_8807B964;
loc_8807B95C:
	// stw r27,676(r31)
	ctx.current_instruction = 0x8807B95C;
	REX_STORE_U32(ctx.r31.u32 + 676, ctx.r27.u32);
	// stw r26,1424(r31)
	ctx.current_instruction = 0x8807B960;
	REX_STORE_U32(ctx.r31.u32 + 1424, ctx.r26.u32);
loc_8807B964:
	// lwz r11,96(r1)
	ctx.current_instruction = 0x8807B964;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r25)
	ctx.current_instruction = 0x8807B96C;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,7868(r31)
	ctx.current_instruction = 0x8807B970;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r9,56(r10)
	ctx.current_instruction = 0x8807B974;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8807b994
	if (ctx.cr6.eq) goto loc_8807B994;
	// stw r29,8236(r31)
	ctx.current_instruction = 0x8807B980;
	REX_STORE_U32(ctx.r31.u32 + 8236, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x88079c58
	ctx.lr = 0x8807B98C;
	sub_88079C58(ctx, base);
loc_8807B98C:
	// stw r29,8172(r31)
	ctx.current_instruction = 0x8807B98C;
	REX_STORE_U32(ctx.r31.u32 + 8172, ctx.r29.u32);
	// b 0x8807b9a0
	goto loc_8807B9A0;
loc_8807B994:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88079c58
	ctx.lr = 0x8807B99C;
	sub_88079C58(ctx, base);
loc_8807B99C:
	// stw r30,8172(r31)
	ctx.current_instruction = 0x8807B99C;
	REX_STORE_U32(ctx.r31.u32 + 8172, ctx.r30.u32);
loc_8807B9A0:
	// lwz r11,7868(r31)
	ctx.current_instruction = 0x8807B9A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r7,7880(r31)
	ctx.current_instruction = 0x8807B9A4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7880);
	// lwz r9,7680(r31)
	ctx.current_instruction = 0x8807B9A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7680);
	// lwz r10,7596(r31)
	ctx.current_instruction = 0x8807B9AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// lwz r6,16(r11)
	ctx.current_instruction = 0x8807B9B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lwz r8,4(r11)
	ctx.current_instruction = 0x8807B9B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subfic r5,r6,39
	ctx.xer.ca = ctx.r6.u32 <= 39;
	ctx.r5.u64 = static_cast<uint64_t>(39) - ctx.r6.u64;
	// stw r30,8024(r31)
	ctx.current_instruction = 0x8807B9C0;
	REX_STORE_U32(ctx.r31.u32 + 8024, ctx.r30.u32);
	// srawi r11,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 3;
	// rlwinm r7,r5,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r4,7680(r31)
	ctx.current_instruction = 0x8807B9D8;
	REX_STORE_U32(ctx.r31.u32 + 7680, ctx.r4.u32);
	// bne cr6,0x8807ba00
	if (!ctx.cr6.eq) goto loc_8807BA00;
	// lwz r10,2192(r31)
	ctx.current_instruction = 0x8807B9E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2192);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,2192(r31)
	ctx.current_instruction = 0x8807B9E8;
	REX_STORE_U32(ctx.r31.u32 + 2192, ctx.r11.u32);
	// lwz r11,7632(r31)
	ctx.current_instruction = 0x8807B9EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7632);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7632(r31)
	ctx.current_instruction = 0x8807B9F4;
	REX_STORE_U32(ctx.r31.u32 + 7632, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8807BA00:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8807ba4c
	if (!ctx.cr6.eq) goto loc_8807BA4C;
	// lwz r10,2800(r31)
	ctx.current_instruction = 0x8807BA08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r9,6880(r31)
	ctx.current_instruction = 0x8807BA10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6880);
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// ld r7,7160(r31)
	ctx.current_instruction = 0x8807BA18;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 7160);
	// lwz r6,7184(r31)
	ctx.current_instruction = 0x8807BA1C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 7184);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,7160(r31)
	ctx.current_instruction = 0x8807BA2C;
	REX_STORE_U64(ctx.r31.u32 + 7160, ctx.r5.u64);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r4,6880(r31)
	ctx.current_instruction = 0x8807BA34;
	REX_STORE_U32(ctx.r31.u32 + 6880, ctx.r4.u32);
	// bne cr6,0x8807ba4c
	if (!ctx.cr6.eq) goto loc_8807BA4C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8807ba4c
	if (!ctx.cr6.eq) goto loc_8807BA4C;
	// lwz r11,7628(r31)
	ctx.current_instruction = 0x8807BA44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7628);
	// stw r11,7184(r31)
	ctx.current_instruction = 0x8807BA48;
	REX_STORE_U32(ctx.r31.u32 + 7184, ctx.r11.u32);
loc_8807BA4C:
	// lwz r11,7632(r31)
	ctx.current_instruction = 0x8807BA4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7632);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7632(r31)
	ctx.current_instruction = 0x8807BA54;
	REX_STORE_U32(ctx.r31.u32 + 7632, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88088F80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88088F80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88088F80) {
			switch (rex_dispatch_address) {
				case 0x88088F88:
				case 0x88089060:
				case 0x88089078:
				case 0x880890A4:
				case 0x880890C0:
				case 0x880890E4:
				case 0x880891B8:
				case 0x880891D0:
				case 0x880891FC:
				case 0x88089218:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88088F80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88088F88: goto loc_88088F88;
		case 0x88089060: goto loc_88089060;
		case 0x88089078: goto loc_88089078;
		case 0x880890A4: goto loc_880890A4;
		case 0x880890C0: goto loc_880890C0;
		case 0x880890E4: goto loc_880890E4;
		case 0x880891B8: goto loc_880891B8;
		case 0x880891D0: goto loc_880891D0;
		case 0x880891FC: goto loc_880891FC;
		case 0x88089218: goto loc_88089218;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88088F88;
	__savegprlr_14(ctx, base);
loc_88088F88:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x88088F88;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,380(r1)
	ctx.current_instruction = 0x88088F8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r14,372(r1)
	ctx.current_instruction = 0x88088F94;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// lwz r20,364(r1)
	ctx.current_instruction = 0x88088F9C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// lwz r28,356(r1)
	ctx.current_instruction = 0x88088FA4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// stw r5,292(r1)
	ctx.current_instruction = 0x88088FAC;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r15,12(r11)
	ctx.current_instruction = 0x88088FB4;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r21,4
	ctx.r21.s64 = 4;
	// li r19,16
	ctx.r19.s64 = 16;
loc_88088FD4:
	// lwz r10,0(r27)
	ctx.current_instruction = 0x88088FD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,4(r27)
	ctx.current_instruction = 0x88088FD8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,2604(r31)
	ctx.current_instruction = 0x88088FDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// add r30,r10,r26
	ctx.r30.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r29,r9,r25
	ctx.r29.u64 = ctx.r9.u64 + ctx.r25.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88089100
	if (!ctx.cr6.lt) goto loc_88089100;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88089100
	if (ctx.cr6.lt) goto loc_88089100;
	// lwz r11,2608(r31)
	ctx.current_instruction = 0x88088FFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88089100
	if (!ctx.cr6.lt) goto loc_88089100;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88089100
	if (ctx.cr6.lt) goto loc_88089100;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88089014;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r10,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 2;
	// srawi r11,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 2;
	// lwz r9,292(r1)
	ctx.current_instruction = 0x88089020;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808902C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r8,r29,30
	ctx.r8.u64 = ctx.r29.u32 & 0x3;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x88089064
	if (!ctx.cr6.eq) goto loc_88089064;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808904C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r19,84(r1)
	ctx.current_instruction = 0x88089054;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089060;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089060:
	// b 0x88089078
	goto loc_88089078;
loc_88089064:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88089064;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// stw r19,84(r1)
	ctx.current_instruction = 0x8808906C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089078:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x88089078;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x880890A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880890A4:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r15
	ctx.ctr.u64 = ctx.r15.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x880890C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880890C0:
	// lwz r10,348(r1)
	ctx.current_instruction = 0x880890C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r9,340(r1)
	ctx.current_instruction = 0x880890C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// subf r5,r10,r29
	ctx.r5.u64 = ctx.r29.u64 - ctx.r10.u64;
	// stw r11,96(r1)
	ctx.current_instruction = 0x880890D4;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// subf r4,r9,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085820
	ctx.lr = 0x880890E4;
	sub_88085820(ctx, base);
loc_880890E4:
	// lwz r11,96(r1)
	ctx.current_instruction = 0x880890E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88089100
	if (!ctx.cr6.lt) goto loc_88089100;
	// lwz r24,0(r27)
	ctx.current_instruction = 0x880890F4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// lwz r23,4(r27)
	ctx.current_instruction = 0x880890FC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
loc_88089100:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bne 0x88088fd4
	if (!ctx.cr0.eq) goto loc_88088FD4;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// add r25,r23,r25
	ctx.r25.u64 = ctx.r23.u64 + ctx.r25.u64;
	// addi r27,r22,32
	ctx.r27.s64 = ctx.r22.s64 + 32;
	// add r26,r24,r26
	ctx.r26.u64 = ctx.r24.u64 + ctx.r26.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r22,4
	ctx.r22.s64 = 4;
	// addi r24,r11,6848
	ctx.r24.s64 = ctx.r11.s64 + 6848;
loc_8808912C:
	// lwz r9,0(r27)
	ctx.current_instruction = 0x8808912C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.current_instruction = 0x88089130;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,2604(r31)
	ctx.current_instruction = 0x88089134;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// add r30,r9,r26
	ctx.r30.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r29,r10,r25
	ctx.r29.u64 = ctx.r10.u64 + ctx.r25.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88089298
	if (!ctx.cr6.lt) goto loc_88089298;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88089298
	if (ctx.cr6.lt) goto loc_88089298;
	// lwz r11,2608(r31)
	ctx.current_instruction = 0x88089154;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88089298
	if (!ctx.cr6.lt) goto loc_88089298;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88089298
	if (ctx.cr6.lt) goto loc_88089298;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808916C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r11,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 2;
	// srawi r10,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 2;
	// lwz r9,292(r1)
	ctx.current_instruction = 0x88089178;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88089184;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r8,r29,30
	ctx.r8.u64 = ctx.r29.u32 & 0x3;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x880891bc
	if (!ctx.cr6.eq) goto loc_880891BC;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x880891A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r19,84(r1)
	ctx.current_instruction = 0x880891AC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880891B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880891B8:
	// b 0x880891d0
	goto loc_880891D0;
loc_880891BC:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x880891BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// stw r19,84(r1)
	ctx.current_instruction = 0x880891C4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880891D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880891D0:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x880891D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x880891FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880891FC:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r15
	ctx.ctr.u64 = ctx.r15.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88089218;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089218:
	// lwz r10,340(r1)
	ctx.current_instruction = 0x88089218;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r9,348(r1)
	ctx.current_instruction = 0x8808921C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// subf r8,r10,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r10.u64;
	// subf r7,r9,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r9.u64;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// xor r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// xor r10,r7,r5
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// subf r11,r6,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r10,r5,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r5.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88089278
	if (ctx.cr6.gt) goto loc_88089278;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88089278
	if (ctx.cr6.gt) goto loc_88089278;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x88089258;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x8808925C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r14
	ctx.current_instruction = 0x88089268;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r14.u32);
	// lwzx r11,r6,r14
	ctx.current_instruction = 0x8808926C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r14.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88089280
	goto loc_88089280;
loc_88089278:
	// lwz r11,20(r14)
	ctx.current_instruction = 0x88089278;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88089280:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88089298
	if (!ctx.cr6.lt) goto loc_88089298;
	// lwz r23,0(r27)
	ctx.current_instruction = 0x8808928C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// lwz r21,4(r27)
	ctx.current_instruction = 0x88089294;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
loc_88089298:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bne 0x8808912c
	if (!ctx.cr0.eq) goto loc_8808912C;
	// lwz r11,388(r1)
	ctx.current_instruction = 0x880892A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// add r10,r23,r26
	ctx.r10.u64 = ctx.r23.u64 + ctx.r26.u64;
	// lwz r9,396(r1)
	ctx.current_instruction = 0x880892AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// add r8,r21,r25
	ctx.r8.u64 = ctx.r21.u64 + ctx.r25.u64;
	// lwz r7,404(r1)
	ctx.current_instruction = 0x880892B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// stw r10,0(r11)
	ctx.current_instruction = 0x880892B8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,0(r9)
	ctx.current_instruction = 0x880892BC;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r18,0(r7)
	ctx.current_instruction = 0x880892C0;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r18.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880AA088) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880AA088;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880AA088) {
			switch (rex_dispatch_address) {
				case 0x880AA090:
				case 0x880AA100:
				case 0x880AA500:
				case 0x880AA54C:
				case 0x880AA5A0:
				case 0x880AA788:
				case 0x880AA7D0:
				case 0x880AA820:
				case 0x880AA98C:
				case 0x880AA9EC:
				case 0x880AAA74:
				case 0x880AAA90:
				case 0x880AAAD4:
				case 0x880AAAF4:
				case 0x880AAD08:
				case 0x880AAD68:
				case 0x880AADF0:
				case 0x880AAE0C:
				case 0x880AAE50:
				case 0x880AAE70:
				case 0x880AB070:
				case 0x880AB0A4:
				case 0x880AB100:
				case 0x880AB194:
				case 0x880AB1B0:
				case 0x880AB1CC:
				case 0x880AB380:
				case 0x880AB3C8:
				case 0x880AB3FC:
				case 0x880AB444:
				case 0x880AB4B4:
				case 0x880AB4FC:
				case 0x880AB534:
				case 0x880AB650:
				case 0x880AB6A0:
				case 0x880AB6F8:
				case 0x880AB710:
				case 0x880AB754:
				case 0x880AB780:
				case 0x880AB7BC:
				case 0x880AB800:
				case 0x880AB870:
				case 0x880AB8B4:
				case 0x880AB8EC:
				case 0x880AB9D8:
				case 0x880ABA30:
				case 0x880ABA4C:
				case 0x880ABA90:
				case 0x880ABABC:
				case 0x880ABAF8:
				case 0x880ABB3C:
				case 0x880ABBA4:
				case 0x880ABBE8:
				case 0x880ABC18:
				case 0x880ABCB8:
				case 0x880ABCD8:
				case 0x880ABD0C:
				case 0x880ABD24:
				case 0x880ABD50:
				case 0x880ABD6C:
				case 0x880ABE78:
				case 0x880ABEDC:
				case 0x880ABF30:
				case 0x880ABF44:
				case 0x880ABF64:
				case 0x880ABF94:
				case 0x880ABFD0:
				case 0x880ABFEC:
				case 0x880AC024:
				case 0x880AC040:
				case 0x880AC16C:
				case 0x880AC1C0:
				case 0x880AC1D4:
				case 0x880AC1F4:
				case 0x880AC224:
				case 0x880AC260:
				case 0x880AC27C:
				case 0x880AC2B4:
				case 0x880AC2D0:
				case 0x880AC2E8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880AA088;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880AA090: goto loc_880AA090;
		case 0x880AA100: goto loc_880AA100;
		case 0x880AA500: goto loc_880AA500;
		case 0x880AA54C: goto loc_880AA54C;
		case 0x880AA5A0: goto loc_880AA5A0;
		case 0x880AA788: goto loc_880AA788;
		case 0x880AA7D0: goto loc_880AA7D0;
		case 0x880AA820: goto loc_880AA820;
		case 0x880AA98C: goto loc_880AA98C;
		case 0x880AA9EC: goto loc_880AA9EC;
		case 0x880AAA74: goto loc_880AAA74;
		case 0x880AAA90: goto loc_880AAA90;
		case 0x880AAAD4: goto loc_880AAAD4;
		case 0x880AAAF4: goto loc_880AAAF4;
		case 0x880AAD08: goto loc_880AAD08;
		case 0x880AAD68: goto loc_880AAD68;
		case 0x880AADF0: goto loc_880AADF0;
		case 0x880AAE0C: goto loc_880AAE0C;
		case 0x880AAE50: goto loc_880AAE50;
		case 0x880AAE70: goto loc_880AAE70;
		case 0x880AB070: goto loc_880AB070;
		case 0x880AB0A4: goto loc_880AB0A4;
		case 0x880AB100: goto loc_880AB100;
		case 0x880AB194: goto loc_880AB194;
		case 0x880AB1B0: goto loc_880AB1B0;
		case 0x880AB1CC: goto loc_880AB1CC;
		case 0x880AB380: goto loc_880AB380;
		case 0x880AB3C8: goto loc_880AB3C8;
		case 0x880AB3FC: goto loc_880AB3FC;
		case 0x880AB444: goto loc_880AB444;
		case 0x880AB4B4: goto loc_880AB4B4;
		case 0x880AB4FC: goto loc_880AB4FC;
		case 0x880AB534: goto loc_880AB534;
		case 0x880AB650: goto loc_880AB650;
		case 0x880AB6A0: goto loc_880AB6A0;
		case 0x880AB6F8: goto loc_880AB6F8;
		case 0x880AB710: goto loc_880AB710;
		case 0x880AB754: goto loc_880AB754;
		case 0x880AB780: goto loc_880AB780;
		case 0x880AB7BC: goto loc_880AB7BC;
		case 0x880AB800: goto loc_880AB800;
		case 0x880AB870: goto loc_880AB870;
		case 0x880AB8B4: goto loc_880AB8B4;
		case 0x880AB8EC: goto loc_880AB8EC;
		case 0x880AB9D8: goto loc_880AB9D8;
		case 0x880ABA30: goto loc_880ABA30;
		case 0x880ABA4C: goto loc_880ABA4C;
		case 0x880ABA90: goto loc_880ABA90;
		case 0x880ABABC: goto loc_880ABABC;
		case 0x880ABAF8: goto loc_880ABAF8;
		case 0x880ABB3C: goto loc_880ABB3C;
		case 0x880ABBA4: goto loc_880ABBA4;
		case 0x880ABBE8: goto loc_880ABBE8;
		case 0x880ABC18: goto loc_880ABC18;
		case 0x880ABCB8: goto loc_880ABCB8;
		case 0x880ABCD8: goto loc_880ABCD8;
		case 0x880ABD0C: goto loc_880ABD0C;
		case 0x880ABD24: goto loc_880ABD24;
		case 0x880ABD50: goto loc_880ABD50;
		case 0x880ABD6C: goto loc_880ABD6C;
		case 0x880ABE78: goto loc_880ABE78;
		case 0x880ABEDC: goto loc_880ABEDC;
		case 0x880ABF30: goto loc_880ABF30;
		case 0x880ABF44: goto loc_880ABF44;
		case 0x880ABF64: goto loc_880ABF64;
		case 0x880ABF94: goto loc_880ABF94;
		case 0x880ABFD0: goto loc_880ABFD0;
		case 0x880ABFEC: goto loc_880ABFEC;
		case 0x880AC024: goto loc_880AC024;
		case 0x880AC040: goto loc_880AC040;
		case 0x880AC16C: goto loc_880AC16C;
		case 0x880AC1C0: goto loc_880AC1C0;
		case 0x880AC1D4: goto loc_880AC1D4;
		case 0x880AC1F4: goto loc_880AC1F4;
		case 0x880AC224: goto loc_880AC224;
		case 0x880AC260: goto loc_880AC260;
		case 0x880AC27C: goto loc_880AC27C;
		case 0x880AC2B4: goto loc_880AC2B4;
		case 0x880AC2D0: goto loc_880AC2D0;
		case 0x880AC2E8: goto loc_880AC2E8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880AA090;
	__savegprlr_14(ctx, base);
loc_880AA090:
	// stwu r1,-1504(r1)
	ctx.current_instruction = 0x880AA090;
	ea = -1504 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r10,1580(r1)
	ctx.current_instruction = 0x880AA098;
	REX_STORE_U32(ctx.r1.u32 + 1580, ctx.r10.u32);
	// lwz r11,28088(r3)
	ctx.current_instruction = 0x880AA09C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28088);
	// addi r10,r1,1087
	ctx.r10.s64 = ctx.r1.s64 + 1087;
	// stw r8,1564(r1)
	ctx.current_instruction = 0x880AA0A4;
	REX_STORE_U32(ctx.r1.u32 + 1564, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,1572(r1)
	ctx.current_instruction = 0x880AA0AC;
	REX_STORE_U32(ctx.r1.u32 + 1572, ctx.r9.u32);
	// rlwinm r9,r10,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// stw r4,1532(r1)
	ctx.current_instruction = 0x880AA0B8;
	REX_STORE_U32(ctx.r1.u32 + 1532, ctx.r4.u32);
	// stw r5,1540(r1)
	ctx.current_instruction = 0x880AA0BC;
	REX_STORE_U32(ctx.r1.u32 + 1540, ctx.r5.u32);
	// stw r6,1548(r1)
	ctx.current_instruction = 0x880AA0C0;
	REX_STORE_U32(ctx.r1.u32 + 1548, ctx.r6.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r7,1556(r1)
	ctx.current_instruction = 0x880AA0C8;
	REX_STORE_U32(ctx.r1.u32 + 1556, ctx.r7.u32);
	// stw r9,264(r1)
	ctx.current_instruction = 0x880AA0CC;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
	// beq cr6,0x880aa0dc
	if (ctx.cr6.eq) goto loc_880AA0DC;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x880aa0f0
	goto loc_880AA0F0;
loc_880AA0DC:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lwz r5,1716(r1)
	ctx.current_instruction = 0x880AA0E0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880aa0f0
	if (!ctx.cr6.eq) goto loc_880AA0F0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_880AA0F0:
	// lwz r19,1708(r1)
	ctx.current_instruction = 0x880AA0F0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1708);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x880e2660
	ctx.lr = 0x880AA100;
	sub_880E2660(ctx, base);
loc_880AA100:
	// lwz r28,1604(r1)
	ctx.current_instruction = 0x880AA100;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// lwz r29,1612(r1)
	ctx.current_instruction = 0x880AA104;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// li r15,0
	ctx.r15.s64 = 0;
	// srawi r11,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 2;
	// lwz r9,8(r19)
	ctx.current_instruction = 0x880AA110;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r19.u32 + 8);
	// lwz r8,1668(r1)
	ctx.current_instruction = 0x880AA114;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// lwz r20,4(r19)
	ctx.current_instruction = 0x880AA120;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r19.u32 + 4);
	// lwz r27,1628(r1)
	ctx.current_instruction = 0x880AA124;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1628);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// lwz r22,1620(r1)
	ctx.current_instruction = 0x880AA130;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// srawi r11,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 2;
	// lwz r5,1684(r1)
	ctx.current_instruction = 0x880AA138;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1684);
	// stw r3,280(r1)
	ctx.current_instruction = 0x880AA13C;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// stw r9,300(r1)
	ctx.current_instruction = 0x880AA144;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r9.u32);
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// beq cr6,0x880aa1c4
	if (ctx.cr6.eq) goto loc_880AA1C4;
	// srawi r11,r22,2
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// srawi r11,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 2;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// ble cr6,0x880aa19c
	if (!ctx.cr6.gt) goto loc_880AA19C;
	// addi r11,r30,256
	ctx.r11.s64 = ctx.r30.s64 + 256;
loc_880AA174:
	// lwz r4,-128(r11)
	ctx.current_instruction = 0x880AA174;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -128);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x880aa18c
	if (!ctx.cr6.eq) goto loc_880AA18C;
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880AA180;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x880aa19c
	if (ctx.cr6.eq) goto loc_880AA19C;
loc_880AA18C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x880aa174
	if (ctx.cr6.lt) goto loc_880AA174;
loc_880AA19C:
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x880aa1c4
	if (!ctx.cr6.eq) goto loc_880AA1C4;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r5,1684(r1)
	ctx.current_instruction = 0x880AA1B8;
	REX_STORE_U32(ctx.r1.u32 + 1684, ctx.r5.u32);
	// stwx r9,r4,r30
	ctx.current_instruction = 0x880AA1BC;
	REX_STORE_U32(ctx.r4.u32 + ctx.r30.u32, ctx.r9.u32);
	// stwx r8,r3,r30
	ctx.current_instruction = 0x880AA1C0;
	REX_STORE_U32(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u32);
loc_880AA1C4:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x880aa1fc
	if (!ctx.cr6.gt) goto loc_880AA1FC;
	// addi r10,r30,256
	ctx.r10.s64 = ctx.r30.s64 + 256;
loc_880AA1D4:
	// lwz r9,-128(r10)
	ctx.current_instruction = 0x880AA1D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -128);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x880aa1ec
	if (!ctx.cr6.eq) goto loc_880AA1EC;
	// lwz r9,0(r10)
	ctx.current_instruction = 0x880AA1E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x880aa1fc
	if (ctx.cr6.eq) goto loc_880AA1FC;
loc_880AA1EC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x880aa1d4
	if (ctx.cr6.lt) goto loc_880AA1D4;
loc_880AA1FC:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x880aa224
	if (!ctx.cr6.eq) goto loc_880AA224;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r5,1684(r1)
	ctx.current_instruction = 0x880AA218;
	REX_STORE_U32(ctx.r1.u32 + 1684, ctx.r5.u32);
	// stwx r7,r8,r30
	ctx.current_instruction = 0x880AA21C;
	REX_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r7.u32);
	// stwx r6,r4,r30
	ctx.current_instruction = 0x880AA220;
	REX_STORE_U32(ctx.r4.u32 + ctx.r30.u32, ctx.r6.u32);
loc_880AA224:
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// lwz r17,1700(r1)
	ctx.current_instruction = 0x880AA228;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// srawi r10,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 1;
	// stw r15,276(r1)
	ctx.current_instruction = 0x880AA230;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r15.u32);
	// ori r26,r11,65535
	ctx.r26.u64 = ctx.r11.u64 | 65535;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// stw r10,360(r1)
	ctx.current_instruction = 0x880AA23C;
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
	// srawi r9,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r22.s32 >> 1;
	// stw r26,272(r1)
	ctx.current_instruction = 0x880AA244;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r26.u32);
	// srawi r8,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 1;
	// stw r26,340(r1)
	ctx.current_instruction = 0x880AA24C;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r26.u32);
	// addi r7,r1,464
	ctx.r7.s64 = ctx.r1.s64 + 464;
	// stw r9,352(r1)
	ctx.current_instruction = 0x880AA254;
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// addi r6,r1,880
	ctx.r6.s64 = ctx.r1.s64 + 880;
	// stw r8,368(r1)
	ctx.current_instruction = 0x880AA25C;
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r8.u32);
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// stw r7,292(r1)
	ctx.current_instruction = 0x880AA264;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// srawi r3,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r27.s32 >> 1;
	// stw r6,268(r1)
	ctx.current_instruction = 0x880AA26C;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r6.u32);
	// addi r21,r11,6848
	ctx.r21.s64 = ctx.r11.s64 + 6848;
	// stw r4,324(r1)
	ctx.current_instruction = 0x880AA274;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r4.u32);
	// mr r16,r26
	ctx.r16.u64 = ctx.r26.u64;
	// stw r3,372(r1)
	ctx.current_instruction = 0x880AA27C;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r3.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r21,344(r1)
	ctx.current_instruction = 0x880AA284;
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r21.u32);
	// ble cr6,0x880aaffc
	if (!ctx.cr6.gt) goto loc_880AAFFC;
loc_880AA28C:
	// lwz r3,276(r1)
	ctx.current_instruction = 0x880AA28C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r30,1580(r1)
	ctx.current_instruction = 0x880AA294;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1580);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// lwz r4,1676(r1)
	ctx.current_instruction = 0x880AA29C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1676);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// lwz r9,1380(r31)
	ctx.current_instruction = 0x880AA2A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880AA2AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r23,1556(r1)
	ctx.current_instruction = 0x880AA2B4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// neg r11,r4
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// lwz r22,1564(r1)
	ctx.current_instruction = 0x880AA2BC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// lwz r21,1572(r1)
	ctx.current_instruction = 0x880AA2C0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// stw r11,256(r1)
	ctx.current_instruction = 0x880AA2CC;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// lwzx r19,r8,r30
	ctx.current_instruction = 0x880AA2D0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lwzx r18,r6,r30
	ctx.current_instruction = 0x880AA2D8;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// rlwinm r28,r19,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,284(r1)
	ctx.current_instruction = 0x880AA2E4;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// rlwinm r17,r19,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,260(r1)
	ctx.current_instruction = 0x880AA2EC;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r4.u32);
	// mullw r10,r9,r28
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// stw r4,288(r1)
	ctx.current_instruction = 0x880AA2F4;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r4.u32);
	// stw r28,312(r1)
	ctx.current_instruction = 0x880AA2F8;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r28.u32);
	// rlwinm r29,r18,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r9,r17,r5
	ctx.r9.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r5.s32);
	// stw r29,332(r1)
	ctx.current_instruction = 0x880AA304;
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r29.u32);
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r15,r10,r23
	ctx.r15.u64 = ctx.r10.u64 + ctx.r23.u64;
	// rlwinm r14,r18,3,0,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r19,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r15,296(r1)
	ctx.current_instruction = 0x880AA320;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r15.u32);
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stw r14,408(r1)
	ctx.current_instruction = 0x880AA328;
	REX_STORE_U32(ctx.r1.u32 + 408, ctx.r14.u32);
	// add r9,r11,r21
	ctx.r9.u64 = ctx.r11.u64 + ctx.r21.u64;
	// stw r5,400(r1)
	ctx.current_instruction = 0x880AA330;
	REX_STORE_U32(ctx.r1.u32 + 400, ctx.r5.u32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stw r10,336(r1)
	ctx.current_instruction = 0x880AA338;
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r10.u32);
	// stw r9,348(r1)
	ctx.current_instruction = 0x880AA33C;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r9.u32);
	// ble cr6,0x880aa3f0
	if (!ctx.cr6.gt) goto loc_880AA3F0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880aa3f0
	if (ctx.cr6.eq) goto loc_880AA3F0;
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_880AA358:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880aa3e0
	if (ctx.cr6.eq) goto loc_880AA3E0;
	// lwz r11,0(r9)
	ctx.current_instruction = 0x880AA360;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r10,r6,r30
	ctx.current_instruction = 0x880AA364;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880aa3a0
	if (!ctx.cr6.eq) goto loc_880AA3A0;
	// lwzx r11,r8,r30
	ctx.current_instruction = 0x880AA370;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// lwz r10,128(r9)
	ctx.current_instruction = 0x880AA374;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 128);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x880aa38c
	if (!ctx.cr6.eq) goto loc_880AA38C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
loc_880AA38C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880aa3d8
	if (!ctx.cr6.eq) goto loc_880AA3D8;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// b 0x880aa3d4
	goto loc_880AA3D4;
loc_880AA3A0:
	// lwz r3,128(r9)
	ctx.current_instruction = 0x880AA3A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 128);
	// lwzx r23,r8,r30
	ctx.current_instruction = 0x880AA3A4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// cmpw cr6,r3,r23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x880aa3d8
	if (!ctx.cr6.eq) goto loc_880AA3D8;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x880aa3c4
	if (!ctx.cr6.eq) goto loc_880AA3C4;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
loc_880AA3C4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880aa3d8
	if (!ctx.cr6.eq) goto loc_880AA3D8;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
loc_880AA3D4:
	// li r7,0
	ctx.r7.s64 = 0;
loc_880AA3D8:
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bdnz 0x880aa358
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880AA358;
loc_880AA3E0:
	// stw r27,284(r1)
	ctx.current_instruction = 0x880AA3E0;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r27.u32);
	// stw r4,288(r1)
	ctx.current_instruction = 0x880AA3E4;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r4.u32);
	// stw r25,256(r1)
	ctx.current_instruction = 0x880AA3E8;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r25.u32);
	// stw r24,260(r1)
	ctx.current_instruction = 0x880AA3EC;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r24.u32);
loc_880AA3F0:
	// lwz r11,1636(r1)
	ctx.current_instruction = 0x880AA3F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// add r10,r25,r29
	ctx.r10.u64 = ctx.r25.u64 + ctx.r29.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880aa408
	if (!ctx.cr6.lt) goto loc_880AA408;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// stw r11,256(r1)
	ctx.current_instruction = 0x880AA404;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
loc_880AA408:
	// lwz r11,1644(r1)
	ctx.current_instruction = 0x880AA408;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1644);
	// add r10,r24,r29
	ctx.r10.u64 = ctx.r24.u64 + ctx.r29.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880aa420
	if (!ctx.cr6.gt) goto loc_880AA420;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// stw r11,260(r1)
	ctx.current_instruction = 0x880AA41C;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
loc_880AA420:
	// lwz r11,1652(r1)
	ctx.current_instruction = 0x880AA420;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// add r10,r27,r28
	ctx.r10.u64 = ctx.r27.u64 + ctx.r28.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880aa438
	if (!ctx.cr6.lt) goto loc_880AA438;
	// subf r27,r28,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r28.u64;
	// stw r27,284(r1)
	ctx.current_instruction = 0x880AA434;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r27.u32);
loc_880AA438:
	// lwz r11,1660(r1)
	ctx.current_instruction = 0x880AA438;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// add r10,r4,r28
	ctx.r10.u64 = ctx.r4.u64 + ctx.r28.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880aa450
	if (!ctx.cr6.gt) goto loc_880AA450;
	// subf r4,r28,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r28.u64;
	// stw r4,288(r1)
	ctx.current_instruction = 0x880AA44C;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r4.u32);
loc_880AA450:
	// lwz r11,28052(r31)
	ctx.current_instruction = 0x880AA450;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28052);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1668(r1)
	ctx.current_instruction = 0x880AA458;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// beq cr6,0x880aa8d8
	if (ctx.cr6.eq) goto loc_880AA8D8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880aa6f4
	if (ctx.cr6.eq) goto loc_880AA6F4;
	// cmpw cr6,r27,r4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x880aaf38
	if (ctx.cr6.gt) goto loc_880AAF38;
	// lwz r11,284(r1)
	ctx.current_instruction = 0x880AA470;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r10,312(r1)
	ctx.current_instruction = 0x880AA478;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r9,372(r1)
	ctx.current_instruction = 0x880AA47C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r17,1700(r1)
	ctx.current_instruction = 0x880AA484;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// lwz r14,344(r1)
	ctx.current_instruction = 0x880AA488;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// rlwinm r19,r8,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r9,r19
	ctx.r18.u64 = ctx.r19.u64 - ctx.r9.u64;
loc_880AA494:
	// lwz r29,256(r1)
	ctx.current_instruction = 0x880AA494;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,260(r1)
	ctx.current_instruction = 0x880AA49C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880aa6d4
	if (ctx.cr6.gt) goto loc_880AA6D4;
	// lwz r8,332(r1)
	ctx.current_instruction = 0x880AA4A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// srawi r9,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r18.s32 >> 31;
	// lwz r11,352(r1)
	ctx.current_instruction = 0x880AA4B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r5,360(r1)
	ctx.current_instruction = 0x880AA4BC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// xor r7,r18,r9
	ctx.r7.u64 = ctx.r18.u64 ^ ctx.r9.u64;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r23,r9,r7
	ctx.r23.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r22,r5,r11
	ctx.r22.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r25,r11,r4
	ctx.r25.u64 = ctx.r4.u64 - ctx.r11.u64;
loc_880AA4D4:
	// lwz r6,1380(r31)
	ctx.current_instruction = 0x880AA4D4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r10,300(r1)
	ctx.current_instruction = 0x880AA4DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// li r4,16
	ctx.r4.s64 = 16;
	// mullw r11,r6,r27
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
	// lwz r3,1532(r1)
	ctx.current_instruction = 0x880AA4E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r5,r11,r15
	ctx.r5.u64 = ctx.r11.u64 + ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x880AA500;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AA500:
	// lwz r9,28100(r31)
	ctx.current_instruction = 0x880AA500;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880aa550
	if (ctx.cr6.eq) goto loc_880AA550;
	// cmpw cr6,r26,r3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x880aa550
	if (!ctx.cr6.gt) goto loc_880AA550;
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x880AA51C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r10,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 1;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r9,336(r1)
	ctx.current_instruction = 0x880AA528;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r3,1540(r1)
	ctx.current_instruction = 0x880AA530;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r7,r28,r26
	ctx.r7.u64 = ctx.r26.u64 - ctx.r28.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bctrl 
	ctx.lr = 0x880AA54C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AA54C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_880AA550:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880AA550;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880aa5a4
	if (ctx.cr6.eq) goto loc_880AA5A4;
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880aa5a4
	if (!ctx.cr6.gt) goto loc_880AA5A4;
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x880AA56C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r10,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 1;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r9,348(r1)
	ctx.current_instruction = 0x880AA578;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r3,1548(r1)
	ctx.current_instruction = 0x880AA580;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r8,r28,r26
	ctx.r8.u64 = ctx.r26.u64 - ctx.r28.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r7,r30,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bctrl 
	ctx.lr = 0x880AA5A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AA5A0:
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_880AA5A4:
	// lwz r11,368(r1)
	ctx.current_instruction = 0x880AA5A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// add r10,r22,r25
	ctx.r10.u64 = ctx.r22.u64 + ctx.r25.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// subf r8,r11,r19
	ctx.r8.u64 = ctx.r19.u64 - ctx.r11.u64;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// xor r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// subf r10,r6,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r6.u64;
	// bgt cr6,0x880aa600
	if (ctx.cr6.gt) goto loc_880AA600;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880aa600
	if (ctx.cr6.gt) goto loc_880AA600;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r14
	ctx.current_instruction = 0x880AA5E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	// lwzx r8,r10,r14
	ctx.current_instruction = 0x880AA5E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r17
	ctx.current_instruction = 0x880AA5F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r17.u32);
	// lwzx r10,r6,r17
	ctx.current_instruction = 0x880AA5F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r17.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880aa608
	goto loc_880AA608;
loc_880AA600:
	// lwz r11,20(r17)
	ctx.current_instruction = 0x880AA600;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880AA608:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x880aa630
	if (!ctx.cr6.lt) goto loc_880AA630;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,356(r1)
	ctx.current_instruction = 0x880AA61C;
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r29.u32);
	// addi r26,r16,1
	ctx.r26.s64 = ctx.r16.s64 + 1;
	// stw r27,384(r1)
	ctx.current_instruction = 0x880AA624;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r27.u32);
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// stw r10,328(r1)
	ctx.current_instruction = 0x880AA62C;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r10.u32);
loc_880AA630:
	// srawi r10,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r25.s32 >> 31;
	// lwz r8,292(r1)
	ctx.current_instruction = 0x880AA634;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// add r7,r21,r24
	ctx.r7.u64 = ctx.r21.u64 + ctx.r24.u64;
	// xor r6,r25,r10
	ctx.r6.u64 = ctx.r25.u64 ^ ctx.r10.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// stwx r11,r9,r8
	ctx.current_instruction = 0x880AA64C;
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// bgt cr6,0x880aa684
	if (ctx.cr6.gt) goto loc_880AA684;
	// cmpwi cr6,r23,158
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 158, ctx.xer);
	// bgt cr6,0x880aa684
	if (ctx.cr6.gt) goto loc_880AA684;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r14
	ctx.current_instruction = 0x880AA664;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	// lwzx r7,r10,r14
	ctx.current_instruction = 0x880AA668;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r17
	ctx.current_instruction = 0x880AA674;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r17.u32);
	// lwzx r10,r5,r17
	ctx.current_instruction = 0x880AA678;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r17.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880aa68c
	goto loc_880AA68C;
loc_880AA684:
	// lwz r11,20(r17)
	ctx.current_instruction = 0x880AA684;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880AA68C:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x880aa6b4
	if (!ctx.cr6.lt) goto loc_880AA6B4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,356(r1)
	ctx.current_instruction = 0x880AA6A0;
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r29.u32);
	// addi r26,r16,1
	ctx.r26.s64 = ctx.r16.s64 + 1;
	// stw r27,384(r1)
	ctx.current_instruction = 0x880AA6A8;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r27.u32);
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// stw r10,328(r1)
	ctx.current_instruction = 0x880AA6B0;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r10.u32);
loc_880AA6B4:
	// lwz r10,268(r1)
	ctx.current_instruction = 0x880AA6B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r8,260(r1)
	ctx.current_instruction = 0x880AA6BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// stwx r11,r9,r10
	ctx.current_instruction = 0x880AA6CC;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// ble cr6,0x880aa4d4
	if (!ctx.cr6.gt) goto loc_880AA4D4;
loc_880AA6D4:
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880AA6D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// addi r18,r18,2
	ctx.r18.s64 = ctx.r18.s64 + 2;
	// addi r21,r21,7
	ctx.r21.s64 = ctx.r21.s64 + 7;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880aa494
	if (!ctx.cr6.gt) goto loc_880AA494;
	// b 0x880aaf34
	goto loc_880AAF34;
loc_880AA6F4:
	// cmpw cr6,r27,r4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x880aaf38
	if (ctx.cr6.gt) goto loc_880AAF38;
	// lwz r11,284(r1)
	ctx.current_instruction = 0x880AA6FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r10,312(r1)
	ctx.current_instruction = 0x880AA704;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r9,368(r1)
	ctx.current_instruction = 0x880AA708;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r19,1700(r1)
	ctx.current_instruction = 0x880AA710;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// lwz r18,336(r1)
	ctx.current_instruction = 0x880AA714;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r17,348(r1)
	ctx.current_instruction = 0x880AA71C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r14,300(r1)
	ctx.current_instruction = 0x880AA720;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// subf r21,r9,r7
	ctx.r21.u64 = ctx.r7.u64 - ctx.r9.u64;
loc_880AA728:
	// lwz r29,256(r1)
	ctx.current_instruction = 0x880AA728;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,260(r1)
	ctx.current_instruction = 0x880AA730;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880aa8bc
	if (ctx.cr6.gt) goto loc_880AA8BC;
	// lwz r9,332(r1)
	ctx.current_instruction = 0x880AA73C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// rotlwi r11,r29,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// srawi r10,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r21.s32 >> 31;
	// lwz r8,360(r1)
	ctx.current_instruction = 0x880AA748;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// xor r7,r21,r10
	ctx.r7.u64 = ctx.r21.u64 ^ ctx.r10.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r23,r10,r7
	ctx.r23.u64 = ctx.r7.u64 - ctx.r10.u64;
	// subf r25,r8,r5
	ctx.r25.u64 = ctx.r5.u64 - ctx.r8.u64;
loc_880AA760:
	// lwz r6,1380(r31)
	ctx.current_instruction = 0x880AA760;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1532(r1)
	ctx.current_instruction = 0x880AA76C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// mullw r11,r6,r27
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
	// mtctr r14
	ctx.ctr.u64 = ctx.r14.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r5,r11,r15
	ctx.r5.u64 = ctx.r11.u64 + ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x880AA788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AA788:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880AA788;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880aa7d4
	if (ctx.cr6.eq) goto loc_880AA7D4;
	// cmpw cr6,r26,r3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x880aa7d4
	if (!ctx.cr6.gt) goto loc_880AA7D4;
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x880AA7A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r10,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 1;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r3,1540(r1)
	ctx.current_instruction = 0x880AA7B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r7,r28,r26
	ctx.r7.u64 = ctx.r26.u64 - ctx.r28.u64;
	// add r5,r11,r18
	ctx.r5.u64 = ctx.r11.u64 + ctx.r18.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bctrl 
	ctx.lr = 0x880AA7D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AA7D0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_880AA7D4:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880AA7D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880aa824
	if (ctx.cr6.eq) goto loc_880AA824;
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880aa824
	if (!ctx.cr6.gt) goto loc_880AA824;
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x880AA7F0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r10,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 1;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r3,1548(r1)
	ctx.current_instruction = 0x880AA7FC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r9,r28,r26
	ctx.r9.u64 = ctx.r26.u64 - ctx.r28.u64;
	// add r5,r11,r17
	ctx.r5.u64 = ctx.r11.u64 + ctx.r17.u64;
	// subf r7,r30,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bctrl 
	ctx.lr = 0x880AA820;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AA820:
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_880AA824:
	// srawi r11,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 31;
	// xor r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 ^ ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880aa86c
	if (ctx.cr6.gt) goto loc_880AA86C;
	// cmpwi cr6,r23,158
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 158, ctx.xer);
	// bgt cr6,0x880aa86c
	if (ctx.cr6.gt) goto loc_880AA86C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,344(r1)
	ctx.current_instruction = 0x880AA844;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x880AA84C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x880AA850;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r19
	ctx.current_instruction = 0x880AA85C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r19.u32);
	// lwzx r10,r5,r19
	ctx.current_instruction = 0x880AA860;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r19.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880aa874
	goto loc_880AA874;
loc_880AA86C:
	// lwz r11,20(r19)
	ctx.current_instruction = 0x880AA86C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880AA874:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x880aa894
	if (!ctx.cr6.lt) goto loc_880AA894;
	// addi r26,r16,1
	ctx.r26.s64 = ctx.r16.s64 + 1;
	// stw r29,356(r1)
	ctx.current_instruction = 0x880AA888;
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r29.u32);
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// stw r27,384(r1)
	ctx.current_instruction = 0x880AA890;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r27.u32);
loc_880AA894:
	// add r10,r22,r24
	ctx.r10.u64 = ctx.r22.u64 + ctx.r24.u64;
	// lwz r9,292(r1)
	ctx.current_instruction = 0x880AA898;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r8,260(r1)
	ctx.current_instruction = 0x880AA89C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// stwx r11,r7,r9
	ctx.current_instruction = 0x880AA8B4;
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u32);
	// ble cr6,0x880aa760
	if (!ctx.cr6.gt) goto loc_880AA760;
loc_880AA8BC:
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880AA8BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r21,r21,2
	ctx.r21.s64 = ctx.r21.s64 + 2;
	// addi r22,r22,7
	ctx.r22.s64 = ctx.r22.s64 + 7;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880aa728
	if (!ctx.cr6.gt) goto loc_880AA728;
	// b 0x880aaf34
	goto loc_880AAF34;
loc_880AA8D8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880aac6c
	if (ctx.cr6.eq) goto loc_880AAC6C;
	// cmpw cr6,r27,r4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x880aaf38
	if (ctx.cr6.gt) goto loc_880AAF38;
	// lwz r11,284(r1)
	ctx.current_instruction = 0x880AA8E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r9,312(r1)
	ctx.current_instruction = 0x880AA8F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,372(r1)
	ctx.current_instruction = 0x880AA8F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r23,r10,r5
	ctx.r23.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// subf r17,r8,r11
	ctx.r17.u64 = ctx.r11.u64 - ctx.r8.u64;
loc_880AA910:
	// lwz r28,256(r1)
	ctx.current_instruction = 0x880AA910;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// clrlwi r21,r27,31
	ctx.r21.u64 = ctx.r27.u32 & 0x1;
	// lwz r11,260(r1)
	ctx.current_instruction = 0x880AA918;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880aac44
	if (ctx.cr6.gt) goto loc_880AAC44;
	// lwz r9,332(r1)
	ctx.current_instruction = 0x880AA928;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// rotlwi r11,r28,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// srawi r10,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r17.s32 >> 31;
	// lwz r8,360(r1)
	ctx.current_instruction = 0x880AA934;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r7,r17,r10
	ctx.r7.u64 = ctx.r17.u64 ^ ctx.r10.u64;
	// add r25,r11,r14
	ctx.r25.u64 = ctx.r11.u64 + ctx.r14.u64;
	// lwz r11,352(r1)
	ctx.current_instruction = 0x880AA948;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r19,r10,r7
	ctx.r19.u64 = ctx.r7.u64 - ctx.r10.u64;
	// subf r24,r11,r5
	ctx.r24.u64 = ctx.r5.u64 - ctx.r11.u64;
	// subf r18,r8,r11
	ctx.r18.u64 = ctx.r11.u64 - ctx.r8.u64;
loc_880AA95C:
	// lwz r6,1380(r31)
	ctx.current_instruction = 0x880AA95C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r10,300(r1)
	ctx.current_instruction = 0x880AA964;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// li r4,16
	ctx.r4.s64 = 16;
	// mullw r11,r6,r27
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
	// lwz r9,296(r1)
	ctx.current_instruction = 0x880AA970;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r3,1532(r1)
	ctx.current_instruction = 0x880AA974;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880AA98C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AA98C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x880aaa34
	if (!ctx.cr6.eq) goto loc_880AAA34;
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880aaa34
	if (!ctx.cr6.eq) goto loc_880AAA34;
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880AA9A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880aa9f0
	if (ctx.cr6.eq) goto loc_880AA9F0;
	// cmpw cr6,r26,r3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x880aa9f0
	if (!ctx.cr6.gt) goto loc_880AA9F0;
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x880AA9BC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// srawi r10,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 1;
	// lwz r9,336(r1)
	ctx.current_instruction = 0x880AA9C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lwz r3,1540(r1)
	ctx.current_instruction = 0x880AA9D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r7,r29,r26
	ctx.r7.u64 = ctx.r26.u64 - ctx.r29.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bctrl 
	ctx.lr = 0x880AA9EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AA9EC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_880AA9F0:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880AA9F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880aaaf8
	if (ctx.cr6.eq) goto loc_880AAAF8;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880aaaf8
	if (!ctx.cr6.gt) goto loc_880AAAF8;
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x880AAA0C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// srawi r10,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 1;
	// lwz r9,348(r1)
	ctx.current_instruction = 0x880AAA18;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r8,r29,r26
	ctx.r8.u64 = ctx.r26.u64 - ctx.r29.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r7,r30,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r30.u64;
	// b 0x880aaae4
	goto loc_880AAAE4;
loc_880AAA34:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880AAA34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880aaa94
	if (ctx.cr6.eq) goto loc_880AAA94;
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x880aaa94
	if (!ctx.cr6.gt) goto loc_880AAA94;
	// lwz r30,264(r1)
	ctx.current_instruction = 0x880AAA4C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880AAA58;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,1564(r1)
	ctx.current_instruction = 0x880AAA60;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880AAA74;
	sub_8810B7F8(ctx, base);
loc_880AAA74:
	// subf r7,r29,r26
	ctx.r7.u64 = ctx.r26.u64 - ctx.r29.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,1540(r1)
	ctx.current_instruction = 0x880AAA7C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bctrl 
	ctx.lr = 0x880AAA90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AAA90:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_880AAA94:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880AAA94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880aaaf8
	if (ctx.cr6.eq) goto loc_880AAAF8;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880aaaf8
	if (!ctx.cr6.gt) goto loc_880AAAF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880AAAB4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r6,264(r1)
	ctx.current_instruction = 0x880AAABC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r4,1572(r1)
	ctx.current_instruction = 0x880AAAC4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880AAAD4;
	sub_8810B7F8(ctx, base);
loc_880AAAD4:
	// subf r11,r29,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r29.u64;
	// lwz r5,264(r1)
	ctx.current_instruction = 0x880AAAD8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// li r6,8
	ctx.r6.s64 = 8;
	// subf r7,r30,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r30.u64;
loc_880AAAE4:
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,1548(r1)
	ctx.current_instruction = 0x880AAAE8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x880AAAF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AAAF4:
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_880AAAF8:
	// lwz r11,368(r1)
	ctx.current_instruction = 0x880AAAF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// add r10,r24,r18
	ctx.r10.u64 = ctx.r24.u64 + ctx.r18.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// subf r8,r11,r15
	ctx.r8.u64 = ctx.r15.u64 - ctx.r11.u64;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// xor r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// subf r10,r6,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r6.u64;
	// bgt cr6,0x880aab5c
	if (ctx.cr6.gt) goto loc_880AAB5C;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880aab5c
	if (ctx.cr6.gt) goto loc_880AAB5C;
	// lwz r6,344(r1)
	ctx.current_instruction = 0x880AAB2C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,1700(r1)
	ctx.current_instruction = 0x880AAB38;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// lwzx r9,r11,r6
	ctx.current_instruction = 0x880AAB3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r8,r10,r6
	ctx.current_instruction = 0x880AAB40;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r7
	ctx.current_instruction = 0x880AAB4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwzx r11,r4,r7
	ctx.current_instruction = 0x880AAB50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880aab6c
	goto loc_880AAB6C;
loc_880AAB5C:
	// lwz r7,1700(r1)
	ctx.current_instruction = 0x880AAB5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// lwz r6,344(r1)
	ctx.current_instruction = 0x880AAB60;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r11,20(r7)
	ctx.current_instruction = 0x880AAB64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880AAB6C:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r8,340(r1)
	ctx.current_instruction = 0x880AAB70;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x880aab9c
	if (!ctx.cr6.lt) goto loc_880AAB9C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,356(r1)
	ctx.current_instruction = 0x880AAB84;
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r28.u32);
	// addi r26,r8,1
	ctx.r26.s64 = ctx.r8.s64 + 1;
	// stw r27,384(r1)
	ctx.current_instruction = 0x880AAB8C;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r27.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r11,340(r1)
	ctx.current_instruction = 0x880AAB94;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// stw r10,328(r1)
	ctx.current_instruction = 0x880AAB98;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r10.u32);
loc_880AAB9C:
	// srawi r10,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r24.s32 >> 31;
	// lwz r5,292(r1)
	ctx.current_instruction = 0x880AABA0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// add r4,r16,r22
	ctx.r4.u64 = ctx.r16.u64 + ctx.r22.u64;
	// xor r3,r24,r10
	ctx.r3.u64 = ctx.r24.u64 ^ ctx.r10.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// stwx r11,r9,r5
	ctx.current_instruction = 0x880AABB8;
	REX_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r11.u32);
	// bgt cr6,0x880aabf0
	if (ctx.cr6.gt) goto loc_880AABF0;
	// cmpwi cr6,r19,158
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 158, ctx.xer);
	// bgt cr6,0x880aabf0
	if (ctx.cr6.gt) goto loc_880AABF0;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r6
	ctx.current_instruction = 0x880AABD0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r4,r10,r6
	ctx.current_instruction = 0x880AABD4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r7
	ctx.current_instruction = 0x880AABE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lwzx r11,r11,r7
	ctx.current_instruction = 0x880AABE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880aabf8
	goto loc_880AABF8;
loc_880AABF0:
	// lwz r11,20(r7)
	ctx.current_instruction = 0x880AABF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880AABF8:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x880aac20
	if (!ctx.cr6.lt) goto loc_880AAC20;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,340(r1)
	ctx.current_instruction = 0x880AAC0C;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// addi r26,r8,1
	ctx.r26.s64 = ctx.r8.s64 + 1;
	// stw r28,356(r1)
	ctx.current_instruction = 0x880AAC14;
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r28.u32);
	// stw r27,384(r1)
	ctx.current_instruction = 0x880AAC18;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r27.u32);
	// stw r10,328(r1)
	ctx.current_instruction = 0x880AAC1C;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r10.u32);
loc_880AAC20:
	// lwz r10,268(r1)
	ctx.current_instruction = 0x880AAC20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r8,260(r1)
	ctx.current_instruction = 0x880AAC28;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// stwx r11,r9,r10
	ctx.current_instruction = 0x880AAC3C;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// ble cr6,0x880aa95c
	if (!ctx.cr6.gt) goto loc_880AA95C;
loc_880AAC44:
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880AAC44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r15,r15,2
	ctx.r15.s64 = ctx.r15.s64 + 2;
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// addi r16,r16,7
	ctx.r16.s64 = ctx.r16.s64 + 7;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880aa910
	if (!ctx.cr6.gt) goto loc_880AA910;
	// lwz r16,340(r1)
	ctx.current_instruction = 0x880AAC64;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// b 0x880aaf38
	goto loc_880AAF38;
loc_880AAC6C:
	// cmpw cr6,r27,r4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x880aaf38
	if (ctx.cr6.gt) goto loc_880AAF38;
	// lwz r11,284(r1)
	ctx.current_instruction = 0x880AAC74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r18,0
	ctx.r18.s64 = 0;
	// lwz r10,312(r1)
	ctx.current_instruction = 0x880AAC7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r9,368(r1)
	ctx.current_instruction = 0x880AAC80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r11,r5
	ctx.r24.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r17,r9,r7
	ctx.r17.u64 = ctx.r7.u64 - ctx.r9.u64;
loc_880AAC98:
	// lwz r28,256(r1)
	ctx.current_instruction = 0x880AAC98;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// clrlwi r21,r27,31
	ctx.r21.u64 = ctx.r27.u32 & 0x1;
	// lwz r11,260(r1)
	ctx.current_instruction = 0x880AACA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880aaf18
	if (ctx.cr6.gt) goto loc_880AAF18;
	// lwz r9,332(r1)
	ctx.current_instruction = 0x880AACB0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// rotlwi r11,r28,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// srawi r10,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r17.s32 >> 31;
	// lwz r8,360(r1)
	ctx.current_instruction = 0x880AACBC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// xor r7,r17,r10
	ctx.r7.u64 = ctx.r17.u64 ^ ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r19,r10,r7
	ctx.r19.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r25,r11,r14
	ctx.r25.u64 = ctx.r11.u64 + ctx.r14.u64;
	// subf r23,r8,r5
	ctx.r23.u64 = ctx.r5.u64 - ctx.r8.u64;
loc_880AACDC:
	// lwz r6,1380(r31)
	ctx.current_instruction = 0x880AACDC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r10,300(r1)
	ctx.current_instruction = 0x880AACE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// li r4,16
	ctx.r4.s64 = 16;
	// mullw r11,r6,r27
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
	// lwz r3,1532(r1)
	ctx.current_instruction = 0x880AACF0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r5,r11,r15
	ctx.r5.u64 = ctx.r11.u64 + ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x880AAD08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AAD08:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x880aadb0
	if (!ctx.cr6.eq) goto loc_880AADB0;
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880aadb0
	if (!ctx.cr6.eq) goto loc_880AADB0;
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880AAD20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880aad6c
	if (ctx.cr6.eq) goto loc_880AAD6C;
	// cmpw cr6,r26,r3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x880aad6c
	if (!ctx.cr6.gt) goto loc_880AAD6C;
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x880AAD38;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// srawi r10,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 1;
	// lwz r9,336(r1)
	ctx.current_instruction = 0x880AAD44;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lwz r3,1540(r1)
	ctx.current_instruction = 0x880AAD4C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r7,r29,r26
	ctx.r7.u64 = ctx.r26.u64 - ctx.r29.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bctrl 
	ctx.lr = 0x880AAD68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AAD68:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_880AAD6C:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880AAD6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880aae74
	if (ctx.cr6.eq) goto loc_880AAE74;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880aae74
	if (!ctx.cr6.gt) goto loc_880AAE74;
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x880AAD88;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// srawi r10,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 1;
	// lwz r9,348(r1)
	ctx.current_instruction = 0x880AAD94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r8,r29,r26
	ctx.r8.u64 = ctx.r26.u64 - ctx.r29.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r7,r30,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r30.u64;
	// b 0x880aae60
	goto loc_880AAE60;
loc_880AADB0:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880AADB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880aae10
	if (ctx.cr6.eq) goto loc_880AAE10;
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x880aae10
	if (!ctx.cr6.gt) goto loc_880AAE10;
	// lwz r30,264(r1)
	ctx.current_instruction = 0x880AADC8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880AADD4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,1564(r1)
	ctx.current_instruction = 0x880AADDC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880AADF0;
	sub_8810B7F8(ctx, base);
loc_880AADF0:
	// subf r7,r29,r26
	ctx.r7.u64 = ctx.r26.u64 - ctx.r29.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,1540(r1)
	ctx.current_instruction = 0x880AADF8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bctrl 
	ctx.lr = 0x880AAE0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AAE0C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_880AAE10:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880AAE10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880aae74
	if (ctx.cr6.eq) goto loc_880AAE74;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880aae74
	if (!ctx.cr6.gt) goto loc_880AAE74;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880AAE30;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r6,264(r1)
	ctx.current_instruction = 0x880AAE38;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r4,1572(r1)
	ctx.current_instruction = 0x880AAE40;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880AAE50;
	sub_8810B7F8(ctx, base);
loc_880AAE50:
	// subf r11,r29,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r29.u64;
	// lwz r5,264(r1)
	ctx.current_instruction = 0x880AAE54;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// li r6,8
	ctx.r6.s64 = 8;
	// subf r7,r30,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r30.u64;
loc_880AAE60:
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,1548(r1)
	ctx.current_instruction = 0x880AAE64;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x880AAE70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AAE70:
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_880AAE74:
	// srawi r11,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 31;
	// xor r10,r23,r11
	ctx.r10.u64 = ctx.r23.u64 ^ ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880aaec0
	if (ctx.cr6.gt) goto loc_880AAEC0;
	// cmpwi cr6,r19,158
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 158, ctx.xer);
	// bgt cr6,0x880aaec0
	if (ctx.cr6.gt) goto loc_880AAEC0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,344(r1)
	ctx.current_instruction = 0x880AAE94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// rlwinm r8,r19,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1700(r1)
	ctx.current_instruction = 0x880AAE9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x880AAEA0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.current_instruction = 0x880AAEA4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r10
	ctx.current_instruction = 0x880AAEB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r10,r5,r10
	ctx.current_instruction = 0x880AAEB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880aaecc
	goto loc_880AAECC;
loc_880AAEC0:
	// lwz r11,1700(r1)
	ctx.current_instruction = 0x880AAEC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x880AAEC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_880AAECC:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x880aaeec
	if (!ctx.cr6.lt) goto loc_880AAEEC;
	// addi r26,r16,1
	ctx.r26.s64 = ctx.r16.s64 + 1;
	// stw r28,356(r1)
	ctx.current_instruction = 0x880AAEE0;
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r28.u32);
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// stw r27,384(r1)
	ctx.current_instruction = 0x880AAEE8;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r27.u32);
loc_880AAEEC:
	// add r10,r18,r22
	ctx.r10.u64 = ctx.r18.u64 + ctx.r22.u64;
	// lwz r9,292(r1)
	ctx.current_instruction = 0x880AAEF0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r8,260(r1)
	ctx.current_instruction = 0x880AAEF4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// stwx r11,r7,r9
	ctx.current_instruction = 0x880AAF10;
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u32);
	// ble cr6,0x880aacdc
	if (!ctx.cr6.gt) goto loc_880AACDC;
loc_880AAF18:
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880AAF18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// addi r18,r18,7
	ctx.r18.s64 = ctx.r18.s64 + 7;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880aac98
	if (!ctx.cr6.gt) goto loc_880AAC98;
loc_880AAF34:
	// stw r16,340(r1)
	ctx.current_instruction = 0x880AAF34;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r16.u32);
loc_880AAF38:
	// lwz r11,272(r1)
	ctx.current_instruction = 0x880AAF38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpw cr6,r16,r11
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880aafbc
	if (!ctx.cr6.lt) goto loc_880AAFBC;
	// lwz r10,312(r1)
	ctx.current_instruction = 0x880AAF44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r11,332(r1)
	ctx.current_instruction = 0x880AAF48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r9,356(r1)
	ctx.current_instruction = 0x880AAF4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r8,384(r1)
	ctx.current_instruction = 0x880AAF50;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r7,256(r1)
	ctx.current_instruction = 0x880AAF54;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r6,284(r1)
	ctx.current_instruction = 0x880AAF58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r5,260(r1)
	ctx.current_instruction = 0x880AAF5C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,288(r1)
	ctx.current_instruction = 0x880AAF60;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r3,1668(r1)
	ctx.current_instruction = 0x880AAF64;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// stw r10,364(r1)
	ctx.current_instruction = 0x880AAF68;
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r10.u32);
	// lwz r10,324(r1)
	ctx.current_instruction = 0x880AAF6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r16,272(r1)
	ctx.current_instruction = 0x880AAF74;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r16.u32);
	// stw r11,316(r1)
	ctx.current_instruction = 0x880AAF78;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r11.u32);
	// stw r9,308(r1)
	ctx.current_instruction = 0x880AAF7C;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// stw r8,320(r1)
	ctx.current_instruction = 0x880AAF80;
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r8.u32);
	// stw r7,404(r1)
	ctx.current_instruction = 0x880AAF84;
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r7.u32);
	// stw r6,380(r1)
	ctx.current_instruction = 0x880AAF88;
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r6.u32);
	// stw r5,376(r1)
	ctx.current_instruction = 0x880AAF8C;
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r5.u32);
	// stw r4,304(r1)
	ctx.current_instruction = 0x880AAF90;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r4.u32);
	// beq cr6,0x880aafb0
	if (ctx.cr6.eq) goto loc_880AAFB0;
	// lwz r11,328(r1)
	ctx.current_instruction = 0x880AAF98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880aafb0
	if (ctx.cr6.eq) goto loc_880AAFB0;
	// lwz r11,268(r1)
	ctx.current_instruction = 0x880AAFA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// stw r10,268(r1)
	ctx.current_instruction = 0x880AAFA8;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r10.u32);
	// b 0x880aafb8
	goto loc_880AAFB8;
loc_880AAFB0:
	// lwz r11,292(r1)
	ctx.current_instruction = 0x880AAFB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stw r10,292(r1)
	ctx.current_instruction = 0x880AAFB4;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
loc_880AAFB8:
	// stw r11,324(r1)
	ctx.current_instruction = 0x880AAFB8;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
loc_880AAFBC:
	// lwz r11,276(r1)
	ctx.current_instruction = 0x880AAFBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r10,1684(r1)
	ctx.current_instruction = 0x880AAFC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1684);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,276(r1)
	ctx.current_instruction = 0x880AAFC8;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880aa28c
	if (ctx.cr6.lt) goto loc_880AA28C;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// lwz r29,1612(r1)
	ctx.current_instruction = 0x880AAFD8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// lwz r28,1604(r1)
	ctx.current_instruction = 0x880AAFDC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// li r15,0
	ctx.r15.s64 = 0;
	// lwz r19,1708(r1)
	ctx.current_instruction = 0x880AAFE4;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1708);
	// ori r26,r11,65535
	ctx.r26.u64 = ctx.r11.u64 | 65535;
	// lwz r17,1700(r1)
	ctx.current_instruction = 0x880AAFEC;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// lwz r22,1620(r1)
	ctx.current_instruction = 0x880AAFF0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// lwz r27,1628(r1)
	ctx.current_instruction = 0x880AAFF4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1628);
	// lwz r21,344(r1)
	ctx.current_instruction = 0x880AAFF8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
loc_880AAFFC:
	// lwz r11,316(r1)
	ctx.current_instruction = 0x880AAFFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r10,308(r1)
	ctx.current_instruction = 0x880AB000;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r9,364(r1)
	ctx.current_instruction = 0x880AB004;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r8,320(r1)
	ctx.current_instruction = 0x880AB008;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,1668(r1)
	ctx.current_instruction = 0x880AB010;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// add r25,r8,r9
	ctx.r25.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r24,r23,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r25,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880ab0b0
	if (ctx.cr6.eq) goto loc_880AB0B0;
	// lwz r9,2608(r31)
	ctx.current_instruction = 0x880AB028;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,2604(r31)
	ctx.current_instruction = 0x880AB030;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r10,r29,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r29.u64;
	// lwz r20,2616(r31)
	ctx.current_instruction = 0x880AB03C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// subf r11,r28,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r28.u64;
	// lwz r18,2612(r31)
	ctx.current_instruction = 0x880AB044;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// and r3,r5,r20
	ctx.r3.u64 = ctx.r5.u64 & ctx.r20.u64;
	// and r11,r4,r18
	ctx.r11.u64 = ctx.r4.u64 & ctx.r18.u64;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// subf r4,r8,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// bl 0x88085e60
	ctx.lr = 0x880AB070;
	sub_88085E60(ctx, base);
loc_880AB070:
	// subf r11,r22,r14
	ctx.r11.u64 = ctx.r14.u64 - ctx.r22.u64;
	// subf r10,r27,r16
	ctx.r10.u64 = ctx.r16.u64 - ctx.r27.u64;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// and r4,r9,r18
	ctx.r4.u64 = ctx.r9.u64 & ctx.r18.u64;
	// and r8,r10,r20
	ctx.r8.u64 = ctx.r10.u64 & ctx.r20.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r5,r16,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r16.u64;
	// subf r4,r14,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880AB0A4;
	sub_88085E60(ctx, base);
loc_880AB0A4:
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x880ab0cc
	if (!ctx.cr6.lt) goto loc_880AB0CC;
	// stw r15,328(r1)
	ctx.current_instruction = 0x880AB0AC;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r15.u32);
loc_880AB0B0:
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
loc_880AB0B4:
	// lwz r11,28088(r31)
	ctx.current_instruction = 0x880AB0B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28088);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880ab0e0
	if (ctx.cr6.eq) goto loc_880AB0E0;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x880ab0f4
	goto loc_880AB0F4;
loc_880AB0CC:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// stw r11,328(r1)
	ctx.current_instruction = 0x880AB0D4;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// b 0x880ab0b4
	goto loc_880AB0B4;
loc_880AB0E0:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lwz r5,1716(r1)
	ctx.current_instruction = 0x880AB0E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ab0f4
	if (!ctx.cr6.eq) goto loc_880AB0F4;
	// li r5,0
	ctx.r5.s64 = 0;
loc_880AB0F4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e2660
	ctx.lr = 0x880AB100;
	sub_880E2660(ctx, base);
loc_880AB100:
	// lwz r11,280(r1)
	ctx.current_instruction = 0x880AB100;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r30,12(r19)
	ctx.current_instruction = 0x880AB104;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r19.u32 + 12);
	// xor r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// lwz r18,0(r19)
	ctx.current_instruction = 0x880AB10C;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880AB110;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// stw r10,280(r1)
	ctx.current_instruction = 0x880AB114;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// lwz r10,272(r1)
	ctx.current_instruction = 0x880AB118;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// stw r30,300(r1)
	ctx.current_instruction = 0x880AB11C;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// stw r18,312(r1)
	ctx.current_instruction = 0x880AB124;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r18.u32);
	// bne cr6,0x880ab21c
	if (!ctx.cr6.eq) goto loc_880AB21C;
	// srawi r10,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 2;
	// lwz r9,1692(r1)
	ctx.current_instruction = 0x880AB130;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1692);
	// srawi r16,r20,2
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3) != 0);
	ctx.r16.s64 = ctx.r20.s32 >> 2;
	// lwz r6,1556(r1)
	ctx.current_instruction = 0x880AB138;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// clrlwi r7,r28,30
	ctx.r7.u64 = ctx.r28.u32 & 0x3;
	// stw r10,316(r1)
	ctx.current_instruction = 0x880AB140;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// mullw r11,r4,r16
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r16.s32);
	// stw r15,320(r1)
	ctx.current_instruction = 0x880AB148;
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r15.u32);
	// stw r7,284(r1)
	ctx.current_instruction = 0x880AB14C;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r7.u32);
	// stw r15,308(r1)
	ctx.current_instruction = 0x880AB150;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r15.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880AB158;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// clrlwi r8,r20,30
	ctx.r8.u64 = ctx.r20.u32 & 0x3;
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x880AB168;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// stw r8,280(r1)
	ctx.current_instruction = 0x880AB16C;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r8.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// bne cr6,0x880ab198
	if (!ctx.cr6.eq) goto loc_880AB198;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x880AB17C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// lwz r31,264(r1)
	ctx.current_instruction = 0x880AB180;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// stw r5,84(r1)
	ctx.current_instruction = 0x880AB184;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880AB194;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AB194:
	// b 0x880ab1b0
	goto loc_880AB1B0;
loc_880AB198:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x880AB198;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// lwz r31,264(r1)
	ctx.current_instruction = 0x880AB19C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// stw r5,84(r1)
	ctx.current_instruction = 0x880AB1A0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880AB1B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AB1B0:
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r3,1532(r1)
	ctx.current_instruction = 0x880AB1B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bctrl 
	ctx.lr = 0x880AB1CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AB1CC:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// cmpwi cr6,r15,158
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 158, ctx.xer);
	// bgt cr6,0x880ab208
	if (ctx.cr6.gt) goto loc_880AB208;
	// rlwinm r10,r15,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r19,320(r1)
	ctx.current_instruction = 0x880AB1DC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// rlwinm r9,r15,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r21
	ctx.current_instruction = 0x880AB1E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// lwzx r7,r9,r21
	ctx.current_instruction = 0x880AB1E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r21.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r17
	ctx.current_instruction = 0x880AB1F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r17.u32);
	// lwzx r10,r5,r17
	ctx.current_instruction = 0x880AB1F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r17.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r23,r11,r3
	ctx.r23.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x880ac310
	goto loc_880AC310;
loc_880AB208:
	// lwz r11,20(r17)
	ctx.current_instruction = 0x880AB208;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 20);
	// lwz r19,320(r1)
	ctx.current_instruction = 0x880AB20C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r23,r11,r3
	ctx.r23.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x880ac310
	goto loc_880AC310;
loc_880AB21C:
	// lwz r11,1652(r1)
	ctx.current_instruction = 0x880AB21C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// srawi r3,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r25.s32 >> 1;
	// lwz r10,1660(r1)
	ctx.current_instruction = 0x880AB224;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// srawi r8,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r23.s32 >> 1;
	// subf r9,r25,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r25.u64;
	// lwz r6,1636(r1)
	ctx.current_instruction = 0x880AB230;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwz r16,2616(r31)
	ctx.current_instruction = 0x880AB234;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// subf r7,r25,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r25.u64;
	// addic r5,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// lwz r10,308(r1)
	ctx.current_instruction = 0x880AB240;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// subf r30,r23,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r23.u64;
	// lwz r14,1564(r1)
	ctx.current_instruction = 0x880AB248;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// subfe r17,r5,r9
	temp.u8 = (~ctx.r5.u32 + ctx.r9.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r17.u64 = ~ctx.r5.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r9,2612(r31)
	ctx.current_instruction = 0x880AB250;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// lwz r5,1644(r1)
	ctx.current_instruction = 0x880AB258;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1644);
	// stw r16,268(r1)
	ctx.current_instruction = 0x880AB25C;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r16.u32);
	// mullw r11,r25,r4
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r4.s32);
	// lwz r19,1596(r1)
	ctx.current_instruction = 0x880AB264;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1596);
	// stw r14,360(r1)
	ctx.current_instruction = 0x880AB268;
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r14.u32);
	// stw r9,276(r1)
	ctx.current_instruction = 0x880AB26C;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r9.u32);
	// lwz r22,1384(r31)
	ctx.current_instruction = 0x880AB270;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r27,2604(r31)
	ctx.current_instruction = 0x880AB274;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// std r4,384(r1)
	ctx.current_instruction = 0x880AB278;
	REX_STORE_U64(ctx.r1.u32 + 384, ctx.r4.u64);
	// lwz r29,724(r31)
	ctx.current_instruction = 0x880AB27C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r26,2608(r31)
	ctx.current_instruction = 0x880AB280;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// lwz r21,1588(r1)
	ctx.current_instruction = 0x880AB284;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1588);
	// subfe r16,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r16.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r7,28036(r31)
	ctx.current_instruction = 0x880AB28C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28036);
	// addic r6,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r6.s64 = ctx.r30.s64 + -1;
	// lwz r15,316(r1)
	ctx.current_instruction = 0x880AB294;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// subf r5,r23,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r23.u64;
	// lwz r4,1572(r1)
	ctx.current_instruction = 0x880AB29C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// stw r6,296(r1)
	ctx.current_instruction = 0x880AB2A0;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r6.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,352(r1)
	ctx.current_instruction = 0x880AB2A8;
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r5.u32);
	// subf r5,r28,r27
	ctx.r5.u64 = ctx.r27.u64 - ctx.r28.u64;
	// lwz r11,1556(r1)
	ctx.current_instruction = 0x880AB2B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// subf r6,r20,r26
	ctx.r6.u64 = ctx.r26.u64 - ctx.r20.u64;
	// stw r7,332(r1)
	ctx.current_instruction = 0x880AB2B8;
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r7.u32);
	// mullw r7,r29,r19
	ctx.r7.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r19.s32);
	// lwz r9,7764(r31)
	ctx.current_instruction = 0x880AB2C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// stw r11,368(r1)
	ctx.current_instruction = 0x880AB2C4;
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// lwz r29,276(r1)
	ctx.current_instruction = 0x880AB2C8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mullw r11,r3,r22
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r22.s32);
	// lwz r3,296(r1)
	ctx.current_instruction = 0x880AB2D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// subfe r3,r3,r30
	temp.u8 = (~ctx.r3.u32 + ctx.r30.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r30,352(r1)
	ctx.current_instruction = 0x880AB2D8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// add r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 + ctx.r24.u64;
	// rlwinm r14,r25,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,372(r1)
	ctx.current_instruction = 0x880AB2E4;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r3.u32);
	// and r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 & ctx.r29.u64;
	// lwz r29,268(r1)
	ctx.current_instruction = 0x880AB2EC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// add r3,r6,r14
	ctx.r3.u64 = ctx.r6.u64 + ctx.r14.u64;
	// addic r6,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r6.s64 = ctx.r30.s64 + -1;
	// and r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 & ctx.r29.u64;
	// lwz r29,360(r1)
	ctx.current_instruction = 0x880AB2FC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// add r7,r7,r21
	ctx.r7.u64 = ctx.r7.u64 + ctx.r21.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r8,r10,r15
	ctx.r8.u64 = ctx.r10.u64 + ctx.r15.u64;
	// subfe r6,r6,r30
	temp.u8 = (~ctx.r6.u32 + ctx.r30.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r30,368(r1)
	ctx.current_instruction = 0x880AB310;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// mulli r10,r7,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(276));
	// stw r6,352(r1)
	ctx.current_instruction = 0x880AB318;
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r6.u32);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf r26,r26,r3
	ctx.r26.u64 = ctx.r3.u64 - ctx.r26.u64;
	// lwz r3,332(r1)
	ctx.current_instruction = 0x880AB324;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// ld r4,384(r1)
	ctx.current_instruction = 0x880AB32C;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 384);
	// add r29,r8,r30
	ctx.r29.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r7,336(r1)
	ctx.current_instruction = 0x880AB334;
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r7.u32);
	// stw r11,348(r1)
	ctx.current_instruction = 0x880AB338;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r11.u32);
	// subf r27,r27,r5
	ctx.r27.u64 = ctx.r5.u64 - ctx.r27.u64;
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880abc60
	if (ctx.cr6.eq) goto loc_880ABC60;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x880AB34C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r18,264(r1)
	ctx.current_instruction = 0x880AB354;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880AB360;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x880AB368;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880AB370;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x880AB380;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AB380:
	// lwz r15,1596(r1)
	ctx.current_instruction = 0x880AB380;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 1596);
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// lwz r4,1532(r1)
	ctx.current_instruction = 0x880AB388;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// addi r7,r1,264
	ctx.r7.s64 = ctx.r1.s64 + 264;
	// stw r21,108(r1)
	ctx.current_instruction = 0x880AB390;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// addi r11,r1,260
	ctx.r11.s64 = ctx.r1.s64 + 260;
	// stw r9,92(r1)
	ctx.current_instruction = 0x880AB398;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x880AB39C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880AB3A8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r15,116(r1)
	ctx.current_instruction = 0x880AB3B0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880AB3C8;
	sub_88085938(ctx, base);
loc_880AB3C8:
	// lwz r6,28100(r31)
	ctx.current_instruction = 0x880AB3C8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880ab474
	if (ctx.cr6.eq) goto loc_880AB474;
	// srawi r9,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r14.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880AB3DC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,1564(r1)
	ctx.current_instruction = 0x880AB3E4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// srawi r8,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r24.s32 >> 1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880AB3FC;
	sub_8810B7F8(ctx, base);
loc_880AB3FC:
	// rotlwi r11,r21,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r21.u32, 0);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// stw r15,116(r1)
	ctx.current_instruction = 0x880AB404;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// stw r11,108(r1)
	ctx.current_instruction = 0x880AB40C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r7,r1,292
	ctx.r7.s64 = ctx.r1.s64 + 292;
	// stw r10,100(r1)
	ctx.current_instruction = 0x880AB414;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x880AB418;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r7,84(r1)
	ctx.current_instruction = 0x880AB420;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r4,1540(r1)
	ctx.current_instruction = 0x880AB42C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880AB444;
	sub_88085938(ctx, base);
loc_880AB444:
	// lwz r6,256(r1)
	ctx.current_instruction = 0x880AB444;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r5,260(r1)
	ctx.current_instruction = 0x880AB448;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880AB44C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r3,272(r1)
	ctx.current_instruction = 0x880AB450;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r10,292(r1)
	ctx.current_instruction = 0x880AB454;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// add r22,r11,r6
	ctx.r22.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r4,264(r1)
	ctx.current_instruction = 0x880AB45C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// or r19,r3,r5
	ctx.r19.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stw r22,256(r1)
	ctx.current_instruction = 0x880AB464;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r22.u32);
	// add r21,r10,r4
	ctx.r21.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r19,260(r1)
	ctx.current_instruction = 0x880AB46C;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r19.u32);
	// b 0x880ab480
	goto loc_880AB480;
loc_880AB474:
	// lwz r19,260(r1)
	ctx.current_instruction = 0x880AB474;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r22,256(r1)
	ctx.current_instruction = 0x880AB478;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r21,264(r1)
	ctx.current_instruction = 0x880AB47C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
loc_880AB480:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880AB480;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880ab51c
	if (ctx.cr6.eq) goto loc_880AB51C;
	// srawi r9,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r14.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880AB494;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,1572(r1)
	ctx.current_instruction = 0x880AB49C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// srawi r8,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r24.s32 >> 1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880AB4B4;
	sub_8810B7F8(ctx, base);
loc_880AB4B4:
	// lwz r11,1588(r1)
	ctx.current_instruction = 0x880AB4B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1588);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// lwz r4,1548(r1)
	ctx.current_instruction = 0x880AB4BC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// stw r15,116(r1)
	ctx.current_instruction = 0x880AB4C4;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// addi r7,r1,292
	ctx.r7.s64 = ctx.r1.s64 + 292;
	// stw r10,100(r1)
	ctx.current_instruction = 0x880AB4CC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x880AB4D0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r7,84(r1)
	ctx.current_instruction = 0x880AB4D8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,108(r1)
	ctx.current_instruction = 0x880AB4E4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880AB4FC;
	sub_88085938(ctx, base);
loc_880AB4FC:
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880AB4FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r6,272(r1)
	ctx.current_instruction = 0x880AB500;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r10,292(r1)
	ctx.current_instruction = 0x880AB504;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// or r19,r6,r19
	ctx.r19.u64 = ctx.r6.u64 | ctx.r19.u64;
	// add r21,r10,r21
	ctx.r21.u64 = ctx.r10.u64 + ctx.r21.u64;
	// stw r22,256(r1)
	ctx.current_instruction = 0x880AB514;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r22.u32);
	// stw r19,260(r1)
	ctx.current_instruction = 0x880AB518;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r19.u32);
loc_880AB51C:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880AB534;
	sub_88085E60(ctx, base);
loc_880AB534:
	// lwz r19,1668(r1)
	ctx.current_instruction = 0x880AB534;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// add r11,r3,r21
	ctx.r11.u64 = ctx.r3.u64 + ctx.r21.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// stw r11,264(r1)
	ctx.current_instruction = 0x880AB540;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// beq cr6,0x880ab550
	if (ctx.cr6.eq) goto loc_880AB550;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,264(r1)
	ctx.current_instruction = 0x880AB54C;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
loc_880AB550:
	// addi r9,r1,300
	ctx.r9.s64 = ctx.r1.s64 + 300;
	// lwz r6,108(r30)
	ctx.current_instruction = 0x880AB554;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r5,320(r1)
	ctx.current_instruction = 0x880AB558;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// rlwinm r10,r25,1,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0x2;
	// stw r9,252(r1)
	ctx.current_instruction = 0x880AB560;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lwz r9,352(r1)
	ctx.current_instruction = 0x880AB568;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// stw r10,228(r1)
	ctx.current_instruction = 0x880AB56C;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// lwz r6,372(r1)
	ctx.current_instruction = 0x880AB570;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r10,304(r1)
	ctx.current_instruction = 0x880AB574;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// stw r5,304(r1)
	ctx.current_instruction = 0x880AB578;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r5.u32);
	// stw r9,296(r1)
	ctx.current_instruction = 0x880AB57C;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
	// lwz r4,308(r1)
	ctx.current_instruction = 0x880AB580;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r26,180(r1)
	ctx.current_instruction = 0x880AB584;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// lwz r26,324(r1)
	ctx.current_instruction = 0x880AB588;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r7,r1,284
	ctx.r7.s64 = ctx.r1.s64 + 284;
	// stw r27,172(r1)
	ctx.current_instruction = 0x880AB590;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r27.u32);
	// addi r8,r1,280
	ctx.r8.s64 = ctx.r1.s64 + 280;
	// lwz r27,376(r1)
	ctx.current_instruction = 0x880AB598;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
	// stw r7,236(r1)
	ctx.current_instruction = 0x880AB59C;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r7.u32);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r7,380(r1)
	ctx.current_instruction = 0x880AB5A4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r23,r23,1,30,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0x2;
	// stw r6,380(r1)
	ctx.current_instruction = 0x880AB5AC;
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,244(r1)
	ctx.current_instruction = 0x880AB5B4;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// subf r9,r7,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lwz r8,404(r1)
	ctx.current_instruction = 0x880AB5BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r25,1588(r1)
	ctx.current_instruction = 0x880AB5C0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1588);
	// subf r10,r8,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r8.u64;
	// lwz r21,1692(r1)
	ctx.current_instruction = 0x880AB5C8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1692);
	// stw r4,376(r1)
	ctx.current_instruction = 0x880AB5CC;
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r4.u32);
	// addi r27,r9,1
	ctx.r27.s64 = ctx.r9.s64 + 1;
	// stw r26,132(r1)
	ctx.current_instruction = 0x880AB5D4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r26,r10,1
	ctx.r26.s64 = ctx.r10.s64 + 1;
	// stw r19,212(r1)
	ctx.current_instruction = 0x880AB5DC;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r19.u32);
	// stw r30,204(r1)
	ctx.current_instruction = 0x880AB5E0;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// stw r15,196(r1)
	ctx.current_instruction = 0x880AB5E4;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r15.u32);
	// stw r25,188(r1)
	ctx.current_instruction = 0x880AB5E8;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r25.u32);
	// stw r21,164(r1)
	ctx.current_instruction = 0x880AB5EC;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// lwz r10,296(r1)
	ctx.current_instruction = 0x880AB5F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,1548(r1)
	ctx.current_instruction = 0x880AB5F4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// lwz r5,1540(r1)
	ctx.current_instruction = 0x880AB5F8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// lwz r4,1532(r1)
	ctx.current_instruction = 0x880AB5FC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// lwz r9,348(r1)
	ctx.current_instruction = 0x880AB600;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// stw r10,124(r1)
	ctx.current_instruction = 0x880AB604;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r10,304(r1)
	ctx.current_instruction = 0x880AB608;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// stw r18,140(r1)
	ctx.current_instruction = 0x880AB60C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// subf r22,r7,r10
	ctx.r22.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lwz r10,380(r1)
	ctx.current_instruction = 0x880AB614;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r16,108(r1)
	ctx.current_instruction = 0x880AB61C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// stw r11,300(r1)
	ctx.current_instruction = 0x880AB620;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// stw r17,100(r1)
	ctx.current_instruction = 0x880AB624;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// stw r23,220(r1)
	ctx.current_instruction = 0x880AB628;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r23.u32);
	// stw r10,116(r1)
	ctx.current_instruction = 0x880AB62C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r10,376(r1)
	ctx.current_instruction = 0x880AB630;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
	// stw r27,156(r1)
	ctx.current_instruction = 0x880AB634;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// lwz r8,336(r1)
	ctx.current_instruction = 0x880AB63C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// stw r26,148(r1)
	ctx.current_instruction = 0x880AB640;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r22,84(r1)
	ctx.current_instruction = 0x880AB644;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// stw r11,92(r1)
	ctx.current_instruction = 0x880AB648;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8808a8d8
	ctx.lr = 0x880AB650;
	sub_8808A8D8(ctx, base);
loc_880AB650:
	// lwz r9,284(r1)
	ctx.current_instruction = 0x880AB650;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// add r8,r24,r9
	ctx.r8.u64 = ctx.r24.u64 + ctx.r9.u64;
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x880ab670
	if (!ctx.cr6.eq) goto loc_880AB670;
	// lwz r11,280(r1)
	ctx.current_instruction = 0x880AB660;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// add r10,r14,r11
	ctx.r10.u64 = ctx.r14.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x880ab93c
	if (ctx.cr6.eq) goto loc_880AB93C;
loc_880AB670:
	// stw r28,276(r1)
	ctx.current_instruction = 0x880AB670;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// stw r20,268(r1)
	ctx.current_instruction = 0x880AB678;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r20.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r17,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r17.s64 = ctx.r28.s32 >> 2;
	// srawi r16,r20,2
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3) != 0);
	ctx.r16.s64 = ctx.r20.s32 >> 2;
	// clrlwi r23,r28,30
	ctx.r23.u64 = ctx.r28.u32 & 0x3;
	// clrlwi r22,r20,30
	ctx.r22.u64 = ctx.r20.u32 & 0x3;
	// bl 0x8810aa38
	ctx.lr = 0x880AB6A0;
	sub_8810AA38(ctx, base);
loc_880AB6A0:
	// lwz r8,268(r1)
	ctx.current_instruction = 0x880AB6A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r7,276(r1)
	ctx.current_instruction = 0x880AB6A4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880AB6AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// lwz r9,1556(r1)
	ctx.current_instruction = 0x880AB6B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// mullw r11,r6,r4
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880AB6D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x880AB6DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// bne cr6,0x880ab6fc
	if (!ctx.cr6.eq) goto loc_880AB6FC;
	// stw r5,84(r1)
	ctx.current_instruction = 0x880AB6E4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x880AB6EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880AB6F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AB6F8:
	// b 0x880ab710
	goto loc_880AB710;
loc_880AB6FC:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x880AB6FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// stw r5,84(r1)
	ctx.current_instruction = 0x880AB700;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880AB710;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AB710:
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// lwz r4,1532(r1)
	ctx.current_instruction = 0x880AB714;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// addi r7,r1,264
	ctx.r7.s64 = ctx.r1.s64 + 264;
	// stw r15,116(r1)
	ctx.current_instruction = 0x880AB71C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// addi r11,r1,260
	ctx.r11.s64 = ctx.r1.s64 + 260;
	// stw r8,92(r1)
	ctx.current_instruction = 0x880AB724;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x880AB728;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r25,108(r1)
	ctx.current_instruction = 0x880AB734;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880AB73C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880AB754;
	sub_88085938(ctx, base);
loc_880AB754:
	// lwz r11,276(r1)
	ctx.current_instruction = 0x880AB754;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r10,268(r1)
	ctx.current_instruction = 0x880AB758;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,400
	ctx.r7.s64 = ctx.r1.s64 + 400;
	// addi r6,r1,408
	ctx.r6.s64 = ctx.r1.s64 + 408;
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// stw r11,384(r1)
	ctx.current_instruction = 0x880AB76C;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// stw r10,416(r1)
	ctx.current_instruction = 0x880AB774;
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880AB780;
	sub_88095050(ctx, base);
loc_880AB780:
	// lwz r9,28100(r31)
	ctx.current_instruction = 0x880AB780;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r26,408(r1)
	ctx.current_instruction = 0x880AB78C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r24,400(r1)
	ctx.current_instruction = 0x880AB790;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// beq cr6,0x880ab830
	if (ctx.cr6.eq) goto loc_880AB830;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880AB79C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r4,1564(r1)
	ctx.current_instruction = 0x880AB7A4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880AB7BC;
	sub_8810B7F8(ctx, base);
loc_880AB7BC:
	// addi r11,r1,292
	ctx.r11.s64 = ctx.r1.s64 + 292;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// stw r25,108(r1)
	ctx.current_instruction = 0x880AB7C4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880AB7CC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,100(r1)
	ctx.current_instruction = 0x880AB7D0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,92(r1)
	ctx.current_instruction = 0x880AB7D8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r4,1540(r1)
	ctx.current_instruction = 0x880AB7E4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r15,116(r1)
	ctx.current_instruction = 0x880AB7EC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880AB800;
	sub_88085938(ctx, base);
loc_880AB800:
	// lwz r8,256(r1)
	ctx.current_instruction = 0x880AB800;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r7,260(r1)
	ctx.current_instruction = 0x880AB804;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880AB808;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r5,272(r1)
	ctx.current_instruction = 0x880AB80C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r10,292(r1)
	ctx.current_instruction = 0x880AB810;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// add r27,r11,r8
	ctx.r27.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r6,264(r1)
	ctx.current_instruction = 0x880AB818;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// or r28,r5,r7
	ctx.r28.u64 = ctx.r5.u64 | ctx.r7.u64;
	// stw r27,256(r1)
	ctx.current_instruction = 0x880AB820;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r27.u32);
	// add r29,r10,r6
	ctx.r29.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r28,260(r1)
	ctx.current_instruction = 0x880AB828;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// b 0x880ab83c
	goto loc_880AB83C;
loc_880AB830:
	// lwz r28,260(r1)
	ctx.current_instruction = 0x880AB830;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r27,256(r1)
	ctx.current_instruction = 0x880AB834;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r29,264(r1)
	ctx.current_instruction = 0x880AB838;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
loc_880AB83C:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880AB83C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880ab8d4
	if (ctx.cr6.eq) goto loc_880AB8D4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880AB850;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r4,1572(r1)
	ctx.current_instruction = 0x880AB858;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880AB870;
	sub_8810B7F8(ctx, base);
loc_880AB870:
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// addi r9,r1,292
	ctx.r9.s64 = ctx.r1.s64 + 292;
	// lwz r4,1548(r1)
	ctx.current_instruction = 0x880AB878;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// stw r10,92(r1)
	ctx.current_instruction = 0x880AB87C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stw r9,84(r1)
	ctx.current_instruction = 0x880AB884;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r15,116(r1)
	ctx.current_instruction = 0x880AB890;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880AB898;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r25,108(r1)
	ctx.current_instruction = 0x880AB8A0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880AB8B4;
	sub_88085938(ctx, base);
loc_880AB8B4:
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880AB8B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r8,272(r1)
	ctx.current_instruction = 0x880AB8B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r10,292(r1)
	ctx.current_instruction = 0x880AB8BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// or r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 | ctx.r28.u64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r27,256(r1)
	ctx.current_instruction = 0x880AB8CC;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r27.u32);
	// stw r28,260(r1)
	ctx.current_instruction = 0x880AB8D0;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
loc_880AB8D4:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880AB8EC;
	sub_88085E60(ctx, base);
loc_880AB8EC:
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// stw r11,264(r1)
	ctx.current_instruction = 0x880AB8F4;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// beq cr6,0x880ab904
	if (ctx.cr6.eq) goto loc_880AB904;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,264(r1)
	ctx.current_instruction = 0x880AB900;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
loc_880AB904:
	// lwz r10,108(r30)
	ctx.current_instruction = 0x880AB904;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r14,300(r1)
	ctx.current_instruction = 0x880AB908;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x880ab940
	if (!ctx.cr6.lt) goto loc_880AB940;
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// stw r23,284(r1)
	ctx.current_instruction = 0x880AB920;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r23.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r22,280(r1)
	ctx.current_instruction = 0x880AB928;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r22.u32);
	// stw r17,316(r1)
	ctx.current_instruction = 0x880AB92C;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r17.u32);
	// stw r11,320(r1)
	ctx.current_instruction = 0x880AB930;
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// stw r11,308(r1)
	ctx.current_instruction = 0x880AB934;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// b 0x880ab944
	goto loc_880AB944;
loc_880AB93C:
	// lwz r14,300(r1)
	ctx.current_instruction = 0x880AB93C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
loc_880AB940:
	// lwz r16,364(r1)
	ctx.current_instruction = 0x880AB940;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
loc_880AB944:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x880abc54
	if (ctx.cr6.eq) goto loc_880ABC54;
	// lwz r11,328(r1)
	ctx.current_instruction = 0x880AB94C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ab964
	if (!ctx.cr6.eq) goto loc_880AB964;
	// lwz r11,1620(r1)
	ctx.current_instruction = 0x880AB958;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// lwz r10,1628(r1)
	ctx.current_instruction = 0x880AB95C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1628);
	// b 0x880ab96c
	goto loc_880AB96C;
loc_880AB964:
	// lwz r11,1604(r1)
	ctx.current_instruction = 0x880AB964;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// lwz r10,1612(r1)
	ctx.current_instruction = 0x880AB968;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
loc_880AB96C:
	// lwz r9,308(r1)
	ctx.current_instruction = 0x880AB96C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r8,316(r1)
	ctx.current_instruction = 0x880AB970;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r7,284(r1)
	ctx.current_instruction = 0x880AB974;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880ab9a8
	if (!ctx.cr6.eq) goto loc_880AB9A8;
	// lwz r9,320(r1)
	ctx.current_instruction = 0x880AB98C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r8,280(r1)
	ctx.current_instruction = 0x880AB990;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// add r7,r9,r16
	ctx.r7.u64 = ctx.r9.u64 + ctx.r16.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880abc54
	if (ctx.cr6.eq) goto loc_880ABC54;
loc_880AB9A8:
	// stw r11,276(r1)
	ctx.current_instruction = 0x880AB9A8;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// stw r10,268(r1)
	ctx.current_instruction = 0x880AB9B0;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r10.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r20,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r20.s64 = ctx.r11.s32 >> 2;
	// srawi r17,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r17.s64 = ctx.r10.s32 >> 2;
	// clrlwi r23,r11,30
	ctx.r23.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r22,r10,30
	ctx.r22.u64 = ctx.r10.u32 & 0x3;
	// bl 0x8810aa38
	ctx.lr = 0x880AB9D8;
	sub_8810AA38(ctx, base);
loc_880AB9D8:
	// lwz r8,268(r1)
	ctx.current_instruction = 0x880AB9D8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r7,276(r1)
	ctx.current_instruction = 0x880AB9DC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880AB9E4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// lwz r9,1556(r1)
	ctx.current_instruction = 0x880AB9F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// mullw r11,r6,r4
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880ABA0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x880ABA10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// bne cr6,0x880aba34
	if (!ctx.cr6.eq) goto loc_880ABA34;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x880ABA18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r5,84(r1)
	ctx.current_instruction = 0x880ABA20;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880ABA30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880ABA30:
	// b 0x880aba4c
	goto loc_880ABA4C;
loc_880ABA34:
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r29,2496(r31)
	ctx.current_instruction = 0x880ABA38;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880ABA40;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x880ABA4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880ABA4C:
	// stw r15,116(r1)
	ctx.current_instruction = 0x880ABA4C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// addi r8,r1,260
	ctx.r8.s64 = ctx.r1.s64 + 260;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// lwz r4,1532(r1)
	ctx.current_instruction = 0x880ABA58;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// addi r11,r1,264
	ctx.r11.s64 = ctx.r1.s64 + 264;
	// stw r8,100(r1)
	ctx.current_instruction = 0x880ABA60;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	ctx.current_instruction = 0x880ABA64;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880ABA70;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r25,108(r1)
	ctx.current_instruction = 0x880ABA78;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880ABA90;
	sub_88085938(ctx, base);
loc_880ABA90:
	// lwz r11,276(r1)
	ctx.current_instruction = 0x880ABA90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r10,268(r1)
	ctx.current_instruction = 0x880ABA94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,296
	ctx.r7.s64 = ctx.r1.s64 + 296;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// stw r11,416(r1)
	ctx.current_instruction = 0x880ABAA8;
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// stw r10,384(r1)
	ctx.current_instruction = 0x880ABAB0;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880ABABC;
	sub_88095050(ctx, base);
loc_880ABABC:
	// lwz r9,28100(r31)
	ctx.current_instruction = 0x880ABABC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r26,296(r1)
	ctx.current_instruction = 0x880ABAC8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r24,304(r1)
	ctx.current_instruction = 0x880ABACC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// beq cr6,0x880abb64
	if (ctx.cr6.eq) goto loc_880ABB64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880ABAD8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r4,1564(r1)
	ctx.current_instruction = 0x880ABAE0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880ABAF8;
	sub_8810B7F8(ctx, base);
loc_880ABAF8:
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// stw r15,116(r1)
	ctx.current_instruction = 0x880ABB00;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// addi r8,r1,292
	ctx.r8.s64 = ctx.r1.s64 + 292;
	// stw r25,108(r1)
	ctx.current_instruction = 0x880ABB08;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x880ABB0C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x880ABB14;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880ABB1C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r4,1540(r1)
	ctx.current_instruction = 0x880ABB28;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880ABB3C;
	sub_88085938(ctx, base);
loc_880ABB3C:
	// lwz r10,292(r1)
	ctx.current_instruction = 0x880ABB3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880ABB40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,264(r1)
	ctx.current_instruction = 0x880ABB44;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r6,256(r1)
	ctx.current_instruction = 0x880ABB48;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r5,260(r1)
	ctx.current_instruction = 0x880ABB4C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// add r29,r10,r7
	ctx.r29.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r4,272(r1)
	ctx.current_instruction = 0x880ABB54;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// add r28,r11,r6
	ctx.r28.u64 = ctx.r11.u64 + ctx.r6.u64;
	// or r27,r4,r5
	ctx.r27.u64 = ctx.r4.u64 | ctx.r5.u64;
	// b 0x880abb70
	goto loc_880ABB70;
loc_880ABB64:
	// lwz r27,260(r1)
	ctx.current_instruction = 0x880ABB64;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r28,256(r1)
	ctx.current_instruction = 0x880ABB68;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r29,264(r1)
	ctx.current_instruction = 0x880ABB6C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
loc_880ABB70:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880ABB70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880abc00
	if (ctx.cr6.eq) goto loc_880ABC00;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880ABB84;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r4,1572(r1)
	ctx.current_instruction = 0x880ABB8C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880ABBA4;
	sub_8810B7F8(ctx, base);
loc_880ABBA4:
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r9,r1,292
	ctx.r9.s64 = ctx.r1.s64 + 292;
	// stw r15,116(r1)
	ctx.current_instruction = 0x880ABBAC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880ABBB4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r9,84(r1)
	ctx.current_instruction = 0x880ABBB8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r6,92(r1)
	ctx.current_instruction = 0x880ABBC0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r4,1548(r1)
	ctx.current_instruction = 0x880ABBCC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r25,108(r1)
	ctx.current_instruction = 0x880ABBD4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880ABBE8;
	sub_88085938(ctx, base);
loc_880ABBE8:
	// lwz r10,292(r1)
	ctx.current_instruction = 0x880ABBE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880ABBEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r5,272(r1)
	ctx.current_instruction = 0x880ABBF0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// or r27,r5,r27
	ctx.r27.u64 = ctx.r5.u64 | ctx.r27.u64;
loc_880ABC00:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880ABC18;
	sub_88085E60(ctx, base);
loc_880ABC18:
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r10,108(r30)
	ctx.current_instruction = 0x880ABC1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x880abc54
	if (!ctx.cr6.lt) goto loc_880ABC54;
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// stw r23,284(r1)
	ctx.current_instruction = 0x880ABC38;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r23.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r22,280(r1)
	ctx.current_instruction = 0x880ABC40;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r22.u32);
	// stw r20,316(r1)
	ctx.current_instruction = 0x880ABC44;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r20.u32);
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
	// stw r11,320(r1)
	ctx.current_instruction = 0x880ABC4C;
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// stw r11,308(r1)
	ctx.current_instruction = 0x880ABC50;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
loc_880ABC54:
	// lwz r19,320(r1)
	ctx.current_instruction = 0x880ABC54;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// b 0x880ac310
	goto loc_880AC310;
loc_880ABC60:
	// lwz r11,280(r1)
	ctx.current_instruction = 0x880ABC60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880abd84
	if (ctx.cr6.eq) goto loc_880ABD84;
	// lwz r11,1668(r1)
	ctx.current_instruction = 0x880ABC6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880abd84
	if (!ctx.cr6.eq) goto loc_880ABD84;
	// lwz r21,1380(r31)
	ctx.current_instruction = 0x880ABC78;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r11,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r14.s32 >> 2;
	// srawi r10,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r24.s32 >> 2;
	// lwz r9,1556(r1)
	ctx.current_instruction = 0x880ABC84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
	// lwz r6,1700(r1)
	ctx.current_instruction = 0x880ABC8C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// stw r18,312(r1)
	ctx.current_instruction = 0x880ABC90;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r18.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r5,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r26.s32 >> 1;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,1708(r1)
	ctx.current_instruction = 0x880ABCA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1708);
	// srawi r4,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r22,12(r11)
	ctx.current_instruction = 0x880ABCAC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r22,300(r1)
	ctx.current_instruction = 0x880ABCB0;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r22.u32);
	// bl 0x88085820
	ctx.lr = 0x880ABCB8;
	sub_88085820(ctx, base);
loc_880ABCB8:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r3,1532(r1)
	ctx.current_instruction = 0x880ABCD0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// bctrl 
	ctx.lr = 0x880ABCD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880ABCD8:
	// srawi r22,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r14.s32 >> 1;
	// lwz r15,264(r1)
	ctx.current_instruction = 0x880ABCDC;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// srawi r21,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r24.s32 >> 1;
	// add r19,r19,r3
	ctx.r19.u64 = ctx.r19.u64 + ctx.r3.u64;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880ABCE8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lwz r4,1564(r1)
	ctx.current_instruction = 0x880ABCF0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880ABD0C;
	sub_8810B7F8(ctx, base);
loc_880ABD0C:
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,1540(r1)
	ctx.current_instruction = 0x880ABD14;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x880ABD24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880ABD24:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880ABD2C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,1572(r1)
	ctx.current_instruction = 0x880ABD34;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// stw r11,296(r1)
	ctx.current_instruction = 0x880ABD3C;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r11.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880ABD50;
	sub_8810B7F8(ctx, base);
loc_880ABD50:
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// lwz r18,1548(r1)
	ctx.current_instruction = 0x880ABD54;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x880ABD6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880ABD6C:
	// lwz r11,296(r1)
	ctx.current_instruction = 0x880ABD6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r21,1588(r1)
	ctx.current_instruction = 0x880ABD70;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1588);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r8,r11,r19
	ctx.r8.u64 = ctx.r11.u64 + ctx.r19.u64;
	// stw r8,272(r1)
	ctx.current_instruction = 0x880ABD7C;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r8.u32);
	// b 0x880abd8c
	goto loc_880ABD8C;
loc_880ABD84:
	// lwz r18,1548(r1)
	ctx.current_instruction = 0x880ABD84;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// lwz r15,264(r1)
	ctx.current_instruction = 0x880ABD88;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
loc_880ABD8C:
	// lwz r10,404(r1)
	ctx.current_instruction = 0x880ABD8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// srawi r8,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r26.s32 >> 1;
	// lwz r7,376(r1)
	ctx.current_instruction = 0x880ABD94;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
	// srawi r6,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r27.s32 >> 1;
	// lwz r4,304(r1)
	ctx.current_instruction = 0x880ABD9C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r5,r1,280
	ctx.r5.s64 = ctx.r1.s64 + 280;
	// subf r11,r10,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r10.u64;
	// lwz r9,380(r1)
	ctx.current_instruction = 0x880ABDA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// stw r8,180(r1)
	ctx.current_instruction = 0x880ABDAC;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// addi r7,r1,284
	ctx.r7.s64 = ctx.r1.s64 + 284;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lwz r8,372(r1)
	ctx.current_instruction = 0x880ABDB8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// subf r11,r9,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r9.u64;
	// lwz r19,320(r1)
	ctx.current_instruction = 0x880ABDC0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r3,1708(r1)
	ctx.current_instruction = 0x880ABDC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1708);
	// rlwinm r26,r23,1,30,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0x2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,244(r1)
	ctx.current_instruction = 0x880ABDD0;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// subf r9,r9,r19
	ctx.r9.u64 = ctx.r19.u64 - ctx.r9.u64;
	// stw r5,228(r1)
	ctx.current_instruction = 0x880ABDD8;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r5.u32);
	// stw r11,156(r1)
	ctx.current_instruction = 0x880ABDDC;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// rlwinm r30,r25,1,30,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0x2;
	// stw r9,304(r1)
	ctx.current_instruction = 0x880ABDE4;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// stw r8,296(r1)
	ctx.current_instruction = 0x880ABDEC;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r8.u32);
	// lwz r11,272(r1)
	ctx.current_instruction = 0x880ABDF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// stw r6,172(r1)
	ctx.current_instruction = 0x880ABDF4;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// stw r3,212(r1)
	ctx.current_instruction = 0x880ABDFC;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,220(r1)
	ctx.current_instruction = 0x880ABE04;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r30,196(r1)
	ctx.current_instruction = 0x880ABE0C;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r11,92(r1)
	ctx.current_instruction = 0x880ABE10;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r22,1692(r1)
	ctx.current_instruction = 0x880ABE14;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1692);
	// lwz r29,324(r1)
	ctx.current_instruction = 0x880ABE18;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r25,352(r1)
	ctx.current_instruction = 0x880ABE1C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r23,1700(r1)
	ctx.current_instruction = 0x880ABE20;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// lwz r5,308(r1)
	ctx.current_instruction = 0x880ABE24;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r4,236(r1)
	ctx.current_instruction = 0x880ABE28;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// lwz r9,348(r1)
	ctx.current_instruction = 0x880ABE30;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r8,336(r1)
	ctx.current_instruction = 0x880ABE34;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r5,1540(r1)
	ctx.current_instruction = 0x880ABE38;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// lwz r4,1532(r1)
	ctx.current_instruction = 0x880ABE3C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// stw r15,140(r1)
	ctx.current_instruction = 0x880ABE40;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r15.u32);
	// stw r27,148(r1)
	ctx.current_instruction = 0x880ABE44;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// lwz r11,304(r1)
	ctx.current_instruction = 0x880ABE48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r30,296(r1)
	ctx.current_instruction = 0x880ABE4C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// stw r29,132(r1)
	ctx.current_instruction = 0x880ABE50;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r25,124(r1)
	ctx.current_instruction = 0x880ABE54;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r23,204(r1)
	ctx.current_instruction = 0x880ABE58;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r23.u32);
	// stw r22,164(r1)
	ctx.current_instruction = 0x880ABE5C;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// stw r26,188(r1)
	ctx.current_instruction = 0x880ABE60;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r26.u32);
	// stw r17,100(r1)
	ctx.current_instruction = 0x880ABE64;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// stw r30,116(r1)
	ctx.current_instruction = 0x880ABE68;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r16,108(r1)
	ctx.current_instruction = 0x880ABE6C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880ABE70;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880896d8
	ctx.lr = 0x880ABE78;
	sub_880896D8(ctx, base);
loc_880ABE78:
	// clrlwi r30,r28,30
	ctx.r30.u64 = ctx.r28.u32 & 0x3;
	// li r17,16
	ctx.r17.s64 = 16;
	// clrlwi r26,r20,30
	ctx.r26.u64 = ctx.r20.u32 & 0x3;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x880abe94
	if (!ctx.cr6.eq) goto loc_880ABE94;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x880ac0bc
	if (ctx.cr6.eq) goto loc_880AC0BC;
loc_880ABE94:
	// lwz r11,284(r1)
	ctx.current_instruction = 0x880ABE94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// add r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x880abeb4
	if (!ctx.cr6.eq) goto loc_880ABEB4;
	// lwz r11,280(r1)
	ctx.current_instruction = 0x880ABEA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// add r10,r14,r11
	ctx.r10.u64 = ctx.r14.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x880ac0bc
	if (ctx.cr6.eq) goto loc_880AC0BC;
loc_880ABEB4:
	// stw r28,276(r1)
	ctx.current_instruction = 0x880ABEB4;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stw r20,268(r1)
	ctx.current_instruction = 0x880ABEBC;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r20.u32);
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// lwz r7,1596(r1)
	ctx.current_instruction = 0x880ABEC8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1596);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r25,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r28.s32 >> 2;
	// srawi r24,r20,2
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r20.s32 >> 2;
	// bl 0x8810aa38
	ctx.lr = 0x880ABEDC;
	sub_8810AA38(ctx, base);
loc_880ABEDC:
	// lwz r8,268(r1)
	ctx.current_instruction = 0x880ABEDC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r7,276(r1)
	ctx.current_instruction = 0x880ABEE0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880ABEE8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// lwz r9,1556(r1)
	ctx.current_instruction = 0x880ABEF4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// mullw r11,r6,r4
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880ABF14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x880ABF18;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// bne cr6,0x880abf34
	if (!ctx.cr6.eq) goto loc_880ABF34;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x880ABF20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// stw r17,84(r1)
	ctx.current_instruction = 0x880ABF24;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880ABF30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880ABF30:
	// b 0x880abf44
	goto loc_880ABF44;
loc_880ABF34:
	// stw r17,84(r1)
	ctx.current_instruction = 0x880ABF34;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x880ABF38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880ABF44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880ABF44:
	// lwz r11,300(r1)
	ctx.current_instruction = 0x880ABF44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,1532(r1)
	ctx.current_instruction = 0x880ABF50;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880ABF64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880ABF64:
	// lwz r10,276(r1)
	ctx.current_instruction = 0x880ABF64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,268(r1)
	ctx.current_instruction = 0x880ABF6C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,296
	ctx.r7.s64 = ctx.r1.s64 + 296;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// stw r10,416(r1)
	ctx.current_instruction = 0x880ABF80;
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r10.u32);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// stw r9,384(r1)
	ctx.current_instruction = 0x880ABF88;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880ABF94;
	sub_88095050(ctx, base);
loc_880ABF94:
	// lwz r8,28100(r31)
	ctx.current_instruction = 0x880ABF94;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r28,296(r1)
	ctx.current_instruction = 0x880ABFA0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r27,304(r1)
	ctx.current_instruction = 0x880ABFA4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// beq cr6,0x880abff0
	if (ctx.cr6.eq) goto loc_880ABFF0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880ABFB0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r4,1564(r1)
	ctx.current_instruction = 0x880ABFB8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880ABFD0;
	sub_8810B7F8(ctx, base);
loc_880ABFD0:
	// lwz r11,312(r1)
	ctx.current_instruction = 0x880ABFD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,1540(r1)
	ctx.current_instruction = 0x880ABFD8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880ABFEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880ABFEC:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_880ABFF0:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880ABFF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880ac044
	if (ctx.cr6.eq) goto loc_880AC044;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880AC004;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r4,1572(r1)
	ctx.current_instruction = 0x880AC00C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880AC024;
	sub_8810B7F8(ctx, base);
loc_880AC024:
	// lwz r11,312(r1)
	ctx.current_instruction = 0x880AC024;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880AC040;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AC040:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_880AC044:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r20,1700(r1)
	ctx.current_instruction = 0x880AC048;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880ac080
	if (ctx.cr6.gt) goto loc_880AC080;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,344(r1)
	ctx.current_instruction = 0x880AC05C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x880AC060;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x880AC064;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r20
	ctx.current_instruction = 0x880AC070;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r20.u32);
	// lwzx r10,r5,r20
	ctx.current_instruction = 0x880AC074;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880ac088
	goto loc_880AC088;
loc_880AC080:
	// lwz r11,20(r20)
	ctx.current_instruction = 0x880AC080;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880AC088:
	// lwz r23,272(r1)
	ctx.current_instruction = 0x880AC088;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880ac0c4
	if (!ctx.cr6.lt) goto loc_880AC0C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,284(r1)
	ctx.current_instruction = 0x880AC09C;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r30.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r26,280(r1)
	ctx.current_instruction = 0x880AC0A4;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r26.u32);
	// stw r25,316(r1)
	ctx.current_instruction = 0x880AC0A8;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r25.u32);
	// mr r16,r24
	ctx.r16.u64 = ctx.r24.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r10,308(r1)
	ctx.current_instruction = 0x880AC0B4;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r10.u32);
	// b 0x880ac0c8
	goto loc_880AC0C8;
loc_880AC0BC:
	// lwz r20,1700(r1)
	ctx.current_instruction = 0x880AC0BC;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// lwz r23,272(r1)
	ctx.current_instruction = 0x880AC0C0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
loc_880AC0C4:
	// lwz r16,364(r1)
	ctx.current_instruction = 0x880AC0C4;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
loc_880AC0C8:
	// lwz r11,1668(r1)
	ctx.current_instruction = 0x880AC0C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ac310
	if (ctx.cr6.eq) goto loc_880AC310;
	// lwz r11,328(r1)
	ctx.current_instruction = 0x880AC0D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ac0ec
	if (!ctx.cr6.eq) goto loc_880AC0EC;
	// lwz r11,1620(r1)
	ctx.current_instruction = 0x880AC0E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// lwz r10,1628(r1)
	ctx.current_instruction = 0x880AC0E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1628);
	// b 0x880ac0f4
	goto loc_880AC0F4;
loc_880AC0EC:
	// lwz r11,1604(r1)
	ctx.current_instruction = 0x880AC0EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// lwz r10,1612(r1)
	ctx.current_instruction = 0x880AC0F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
loc_880AC0F4:
	// clrlwi r25,r11,30
	ctx.r25.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r24,r10,30
	ctx.r24.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x880ac10c
	if (!ctx.cr6.eq) goto loc_880AC10C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x880ac310
	if (ctx.cr6.eq) goto loc_880AC310;
loc_880AC10C:
	// lwz r9,308(r1)
	ctx.current_instruction = 0x880AC10C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r8,316(r1)
	ctx.current_instruction = 0x880AC110;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r7,284(r1)
	ctx.current_instruction = 0x880AC114;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880ac144
	if (!ctx.cr6.eq) goto loc_880AC144;
	// add r9,r19,r16
	ctx.r9.u64 = ctx.r19.u64 + ctx.r16.u64;
	// lwz r8,280(r1)
	ctx.current_instruction = 0x880AC130;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880ac310
	if (ctx.cr6.eq) goto loc_880AC310;
loc_880AC144:
	// stw r11,276(r1)
	ctx.current_instruction = 0x880AC144;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stw r10,268(r1)
	ctx.current_instruction = 0x880AC14C;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r10.u32);
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// lwz r7,1596(r1)
	ctx.current_instruction = 0x880AC158;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1596);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r27,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 2;
	// srawi r26,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r10.s32 >> 2;
	// bl 0x8810aa38
	ctx.lr = 0x880AC16C;
	sub_8810AA38(ctx, base);
loc_880AC16C:
	// lwz r8,268(r1)
	ctx.current_instruction = 0x880AC16C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r7,276(r1)
	ctx.current_instruction = 0x880AC170;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880AC178;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// lwz r9,1556(r1)
	ctx.current_instruction = 0x880AC184;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// mullw r11,r6,r4
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880AC1A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x880AC1A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// bne cr6,0x880ac1c4
	if (!ctx.cr6.eq) goto loc_880AC1C4;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x880AC1B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// stw r17,84(r1)
	ctx.current_instruction = 0x880AC1B4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880AC1C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AC1C0:
	// b 0x880ac1d4
	goto loc_880AC1D4;
loc_880AC1C4:
	// stw r17,84(r1)
	ctx.current_instruction = 0x880AC1C4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x880AC1C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880AC1D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AC1D4:
	// lwz r11,300(r1)
	ctx.current_instruction = 0x880AC1D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,1532(r1)
	ctx.current_instruction = 0x880AC1E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880AC1F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AC1F4:
	// lwz r10,276(r1)
	ctx.current_instruction = 0x880AC1F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r9,268(r1)
	ctx.current_instruction = 0x880AC1FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,296
	ctx.r7.s64 = ctx.r1.s64 + 296;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// stw r10,416(r1)
	ctx.current_instruction = 0x880AC210;
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r10.u32);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// stw r9,384(r1)
	ctx.current_instruction = 0x880AC218;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880AC224;
	sub_88095050(ctx, base);
loc_880AC224:
	// lwz r8,28100(r31)
	ctx.current_instruction = 0x880AC224;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r29,296(r1)
	ctx.current_instruction = 0x880AC230;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r28,304(r1)
	ctx.current_instruction = 0x880AC234;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// beq cr6,0x880ac280
	if (ctx.cr6.eq) goto loc_880AC280;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880AC240;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r4,1564(r1)
	ctx.current_instruction = 0x880AC248;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880AC260;
	sub_8810B7F8(ctx, base);
loc_880AC260:
	// lwz r11,312(r1)
	ctx.current_instruction = 0x880AC260;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,1540(r1)
	ctx.current_instruction = 0x880AC268;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880AC27C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AC27C:
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_880AC280:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880AC280;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880ac2d4
	if (ctx.cr6.eq) goto loc_880AC2D4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880AC294;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r4,1572(r1)
	ctx.current_instruction = 0x880AC29C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880AC2B4;
	sub_8810B7F8(ctx, base);
loc_880AC2B4:
	// lwz r11,312(r1)
	ctx.current_instruction = 0x880AC2B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880AC2D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AC2D0:
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_880AC2D4:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085820
	ctx.lr = 0x880AC2E8;
	sub_88085820(ctx, base);
loc_880AC2E8:
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880ac310
	if (!ctx.cr6.lt) goto loc_880AC310;
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r25,284(r1)
	ctx.current_instruction = 0x880AC2F8;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r25.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r24,280(r1)
	ctx.current_instruction = 0x880AC300;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r24.u32);
	// stw r27,316(r1)
	ctx.current_instruction = 0x880AC304;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r27.u32);
	// mr r16,r26
	ctx.r16.u64 = ctx.r26.u64;
	// stw r19,308(r1)
	ctx.current_instruction = 0x880AC30C;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r19.u32);
loc_880AC310:
	// lwz r10,308(r1)
	ctx.current_instruction = 0x880AC310;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// add r9,r19,r16
	ctx.r9.u64 = ctx.r19.u64 + ctx.r16.u64;
	// lwz r8,316(r1)
	ctx.current_instruction = 0x880AC318;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r7,1724(r1)
	ctx.current_instruction = 0x880AC31C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1724);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r5,284(r1)
	ctx.current_instruction = 0x880AC328;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r4,1732(r1)
	ctx.current_instruction = 0x880AC32C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1732);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,280(r1)
	ctx.current_instruction = 0x880AC334;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r9,1740(r1)
	ctx.current_instruction = 0x880AC338;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1740);
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,0(r7)
	ctx.current_instruction = 0x880AC344;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,0(r4)
	ctx.current_instruction = 0x880AC348;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// stw r23,0(r9)
	ctx.current_instruction = 0x880AC34C;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r23.u32);
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F9550) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F9550;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F9550) {
			switch (rex_dispatch_address) {
				case 0x880F9584:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F9550;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F9584: goto loc_880F9584;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880F9554;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880F9558;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880F955C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.current_instruction = 0x880F9560;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r4,10
	ctx.r9.s64 = ctx.r4.s64 + 10;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	ctx.current_instruction = 0x880F9578;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzx r3,r8,r3
	ctx.current_instruction = 0x880F957C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// bl 0x880f9348
	ctx.lr = 0x880F9584;
	sub_880F9348(ctx, base);
loc_880F9584:
	// lwz r11,88(r31)
	ctx.current_instruction = 0x880F9584;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r3,0(r11)
	ctx.current_instruction = 0x880F958C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,88(r31)
	ctx.current_instruction = 0x880F9590;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880F9598;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880F95A0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880FA1F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FA1F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FA1F8) {
			switch (rex_dispatch_address) {
				case 0x880FA250:
				case 0x880FA260:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FA1F8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FA250: goto loc_880FA250;
		case 0x880FA260: goto loc_880FA260;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880FA1FC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880FA200;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880FA204;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880FA208;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1416(r3)
	ctx.current_instruction = 0x880FA20C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1416);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x880fa240
	if (ctx.cr6.lt) goto loc_880FA240;
	// addi r9,r5,6
	ctx.r9.s64 = ctx.r5.s64 + 6;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x880fa240
	if (ctx.cr6.gt) goto loc_880FA240;
	// li r5,3
	ctx.r5.s64 = 3;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x880fa258
	goto loc_880FA258;
loc_880FA240:
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FA244;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x880e6960
	ctx.lr = 0x880FA250;
	sub_880E6960(ctx, base);
loc_880FA250:
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_880FA258:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FA258;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x880FA260;
	sub_880E6960(ctx, base);
loc_880FA260:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880FA264;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880FA26C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880FA270;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880FBD48) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FBD48;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FBD48) {
			switch (rex_dispatch_address) {
				case 0x880FBD50:
				case 0x880FC054:
				case 0x880FC064:
				case 0x880FC074:
				case 0x880FC0A4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FBD48;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FBD50: goto loc_880FBD50;
		case 0x880FC054: goto loc_880FC054;
		case 0x880FC064: goto loc_880FC064;
		case 0x880FC074: goto loc_880FC074;
		case 0x880FC0A4: goto loc_880FC0A4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880FBD50;
	__savegprlr_26(ctx, base);
loc_880FBD50:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880FBD50;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880fc0b0
	if (ctx.cr6.eq) goto loc_880FC0B0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x880fc0b0
	if (ctx.cr6.eq) goto loc_880FC0B0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880fbd84
	if (ctx.cr6.eq) goto loc_880FBD84;
	// lwz r30,4(r4)
	ctx.current_instruction = 0x880FBD70;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,8(r4)
	ctx.current_instruction = 0x880FBD74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lhz r28,14(r4)
	ctx.current_instruction = 0x880FBD78;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r4.u32 + 14);
	// lwz r29,16(r4)
	ctx.current_instruction = 0x880FBD7C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// b 0x880fbd98
	goto loc_880FBD98;
loc_880FBD84:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880FBD84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,14620(r31)
	ctx.current_instruction = 0x880FBD88;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 14620);
	// lwz r3,14624(r31)
	ctx.current_instruction = 0x880FBD8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 14624);
	// lhz r28,14(r11)
	ctx.current_instruction = 0x880FBD90;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lwz r29,16(r11)
	ctx.current_instruction = 0x880FBD94;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
loc_880FBD98:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x880fc0b0
	if (ctx.cr6.lt) goto loc_880FC0B0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x880fc0b0
	if (ctx.cr6.lt) goto loc_880FC0B0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x880fc0b0
	if (ctx.cr6.lt) goto loc_880FC0B0;
	// lwz r4,228(r1)
	ctx.current_instruction = 0x880FBDB0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x880fc0b0
	if (ctx.cr6.lt) goto loc_880FC0B0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x880fc0b0
	if (ctx.cr6.lt) goto loc_880FC0B0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x880fc0b0
	if (ctx.cr6.lt) goto loc_880FC0B0;
	// add r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x880fc0b0
	if (ctx.cr6.gt) goto loc_880FC0B0;
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// add r27,r7,r4
	ctx.r27.u64 = ctx.r7.u64 + ctx.r4.u64;
	// xor r26,r3,r11
	ctx.r26.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// subf r11,r11,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r11.u64;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880fc0b0
	if (ctx.cr6.gt) goto loc_880FC0B0;
	// lwz r11,4(r5)
	ctx.current_instruction = 0x880FBDF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add r27,r8,r10
	ctx.r27.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880fc0b0
	if (ctx.cr6.gt) goto loc_880FC0B0;
	// lwz r11,8(r5)
	ctx.current_instruction = 0x880FBE00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// add r27,r9,r4
	ctx.r27.u64 = ctx.r9.u64 + ctx.r4.u64;
	// srawi r26,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 31;
	// xor r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r26.u64;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880fc0b0
	if (ctx.cr6.gt) goto loc_880FC0B0;
	// lwz r27,14636(r31)
	ctx.current_instruction = 0x880FBE1C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 14636);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpw cr6,r27,r6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x880fbe34
	if (ctx.cr6.eq) goto loc_880FBE34;
	// stw r6,14636(r31)
	ctx.current_instruction = 0x880FBE2C;
	REX_STORE_U32(ctx.r31.u32 + 14636, ctx.r6.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_880FBE34:
	// lwz r6,14640(r31)
	ctx.current_instruction = 0x880FBE34;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 14640);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x880fbe48
	if (ctx.cr6.eq) goto loc_880FBE48;
	// stw r7,14640(r31)
	ctx.current_instruction = 0x880FBE40;
	REX_STORE_U32(ctx.r31.u32 + 14640, ctx.r7.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_880FBE48:
	// lwz r7,14644(r31)
	ctx.current_instruction = 0x880FBE48;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 14644);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x880fbe5c
	if (ctx.cr6.eq) goto loc_880FBE5C;
	// stw r8,14644(r31)
	ctx.current_instruction = 0x880FBE54;
	REX_STORE_U32(ctx.r31.u32 + 14644, ctx.r8.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_880FBE5C:
	// lwz r8,14648(r31)
	ctx.current_instruction = 0x880FBE5C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 14648);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x880fbe70
	if (ctx.cr6.eq) goto loc_880FBE70;
	// stw r9,14648(r31)
	ctx.current_instruction = 0x880FBE68;
	REX_STORE_U32(ctx.r31.u32 + 14648, ctx.r9.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_880FBE70:
	// lwz r9,14512(r31)
	ctx.current_instruction = 0x880FBE70;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 14512);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880fbe8c
	if (ctx.cr6.eq) goto loc_880FBE8C;
	// lwz r9,0(r31)
	ctx.current_instruction = 0x880FBE7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,4(r9)
	ctx.current_instruction = 0x880FBE84;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,14512(r31)
	ctx.current_instruction = 0x880FBE88;
	REX_STORE_U32(ctx.r31.u32 + 14512, ctx.r10.u32);
loc_880FBE8C:
	// lwz r9,14516(r31)
	ctx.current_instruction = 0x880FBE8C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 14516);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x880fbea8
	if (ctx.cr6.eq) goto loc_880FBEA8;
	// lwz r9,0(r31)
	ctx.current_instruction = 0x880FBE98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r4,8(r9)
	ctx.current_instruction = 0x880FBEA0;
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// stw r4,14516(r31)
	ctx.current_instruction = 0x880FBEA4;
	REX_STORE_U32(ctx.r31.u32 + 14516, ctx.r4.u32);
loc_880FBEA8:
	// lwz r9,14476(r31)
	ctx.current_instruction = 0x880FBEA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 14476);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880fbec4
	if (ctx.cr6.eq) goto loc_880FBEC4;
	// lwz r9,4(r31)
	ctx.current_instruction = 0x880FBEB4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,4(r9)
	ctx.current_instruction = 0x880FBEBC;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,14476(r31)
	ctx.current_instruction = 0x880FBEC0;
	REX_STORE_U32(ctx.r31.u32 + 14476, ctx.r10.u32);
loc_880FBEC4:
	// lwz r10,14480(r31)
	ctx.current_instruction = 0x880FBEC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14480);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x880fbee0
	if (ctx.cr6.eq) goto loc_880FBEE0;
	// lwz r10,4(r31)
	ctx.current_instruction = 0x880FBED0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r4,8(r10)
	ctx.current_instruction = 0x880FBED8;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// stw r4,14480(r31)
	ctx.current_instruction = 0x880FBEDC;
	REX_STORE_U32(ctx.r31.u32 + 14480, ctx.r4.u32);
loc_880FBEE0:
	// lwz r10,14620(r31)
	ctx.current_instruction = 0x880FBEE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14620);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x880fbf00
	if (ctx.cr6.eq) goto loc_880FBF00;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r30,14620(r31)
	ctx.current_instruction = 0x880FBEF0;
	REX_STORE_U32(ctx.r31.u32 + 14620, ctx.r30.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880FBF00:
	// lwz r10,14624(r31)
	ctx.current_instruction = 0x880FBF00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14624);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x880fbf14
	if (ctx.cr6.eq) goto loc_880FBF14;
	// stw r3,14624(r31)
	ctx.current_instruction = 0x880FBF0C;
	REX_STORE_U32(ctx.r31.u32 + 14624, ctx.r3.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_880FBF14:
	// lwz r10,4(r5)
	ctx.current_instruction = 0x880FBF14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,14628(r31)
	ctx.current_instruction = 0x880FBF18;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 14628);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880fbf38
	if (ctx.cr6.eq) goto loc_880FBF38;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,14628(r31)
	ctx.current_instruction = 0x880FBF28;
	REX_STORE_U32(ctx.r31.u32 + 14628, ctx.r10.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880FBF38:
	// lwz r10,8(r5)
	ctx.current_instruction = 0x880FBF38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,14632(r31)
	ctx.current_instruction = 0x880FBF3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 14632);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880fbf50
	if (ctx.cr6.eq) goto loc_880FBF50;
	// stw r10,14632(r31)
	ctx.current_instruction = 0x880FBF48;
	REX_STORE_U32(ctx.r31.u32 + 14632, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_880FBF50:
	// lwz r10,0(r31)
	ctx.current_instruction = 0x880FBF50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.current_instruction = 0x880FBF54;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x880fbf68
	if (ctx.cr6.eq) goto loc_880FBF68;
	// stw r29,16(r10)
	ctx.current_instruction = 0x880FBF60;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r29.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_880FBF68:
	// lwz r9,4(r31)
	ctx.current_instruction = 0x880FBF68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,16(r5)
	ctx.current_instruction = 0x880FBF6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r8,16(r9)
	ctx.current_instruction = 0x880FBF70;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880fbf84
	if (ctx.cr6.eq) goto loc_880FBF84;
	// stw r10,16(r9)
	ctx.current_instruction = 0x880FBF7C;
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_880FBF84:
	// lwz r10,0(r31)
	ctx.current_instruction = 0x880FBF84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r9,r28,16
	ctx.r9.u64 = ctx.r28.u32 & 0xFFFF;
	// lhz r8,14(r10)
	ctx.current_instruction = 0x880FBF8C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x880fbfa0
	if (ctx.cr6.eq) goto loc_880FBFA0;
	// sth r28,14(r10)
	ctx.current_instruction = 0x880FBF98;
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r28.u16);
	// li r11,2
	ctx.r11.s64 = 2;
loc_880FBFA0:
	// lwz r9,4(r31)
	ctx.current_instruction = 0x880FBFA0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,14(r5)
	ctx.current_instruction = 0x880FBFA4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 14);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lhz r7,14(r9)
	ctx.current_instruction = 0x880FBFAC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 14);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880fbfc0
	if (ctx.cr6.eq) goto loc_880FBFC0;
	// sth r10,14(r9)
	ctx.current_instruction = 0x880FBFB8;
	REX_STORE_U16(ctx.r9.u32 + 14, ctx.r10.u16);
	// li r11,2
	ctx.r11.s64 = 2;
loc_880FBFC0:
	// lwz r10,244(r1)
	ctx.current_instruction = 0x880FBFC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r9,14656(r31)
	ctx.current_instruction = 0x880FBFC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 14656);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880fbfe4
	if (ctx.cr6.eq) goto loc_880FBFE4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,14656(r31)
	ctx.current_instruction = 0x880FBFD4;
	REX_STORE_U32(ctx.r31.u32 + 14656, ctx.r10.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880FBFE4:
	// lwz r10,252(r1)
	ctx.current_instruction = 0x880FBFE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r9,14660(r31)
	ctx.current_instruction = 0x880FBFE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 14660);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880fc008
	if (ctx.cr6.eq) goto loc_880FC008;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,14660(r31)
	ctx.current_instruction = 0x880FBFF8;
	REX_STORE_U32(ctx.r31.u32 + 14660, ctx.r10.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880FC008:
	// lwz r10,260(r1)
	ctx.current_instruction = 0x880FC008;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r9,14664(r31)
	ctx.current_instruction = 0x880FC00C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 14664);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880fc02c
	if (ctx.cr6.eq) goto loc_880FC02C;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,14664(r31)
	ctx.current_instruction = 0x880FC01C;
	REX_STORE_U32(ctx.r31.u32 + 14664, ctx.r10.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880FC02C:
	// lwz r10,236(r1)
	ctx.current_instruction = 0x880FC02C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r9,14652(r31)
	ctx.current_instruction = 0x880FC030;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 14652);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880fc044
	if (ctx.cr6.eq) goto loc_880FC044;
	// stw r10,14652(r31)
	ctx.current_instruction = 0x880FC03C;
	REX_STORE_U32(ctx.r31.u32 + 14652, ctx.r10.u32);
	// b 0x880fc04c
	goto loc_880FC04C;
loc_880FC044:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880fc084
	if (!ctx.cr6.eq) goto loc_880FC084;
loc_880FC04C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813cb60
	ctx.lr = 0x880FC054;
	sub_8813CB60(ctx, base);
loc_880FC054:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880fc0b4
	if (!ctx.cr6.eq) goto loc_880FC0B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cac40
	ctx.lr = 0x880FC064;
	sub_880CAC40(ctx, base);
loc_880FC064:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880fc0b4
	if (!ctx.cr6.eq) goto loc_880FC0B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813cd20
	ctx.lr = 0x880FC074;
	sub_8813CD20(ctx, base);
loc_880FC074:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880fc0a4
	if (ctx.cr6.eq) goto loc_880FC0A4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880FC084:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880fc0a4
	if (!ctx.cr6.eq) goto loc_880FC0A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,14632(r31)
	ctx.current_instruction = 0x880FC090;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 14632);
	// lwz r6,14628(r31)
	ctx.current_instruction = 0x880FC094;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 14628);
	// lwz r5,14624(r31)
	ctx.current_instruction = 0x880FC098;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14624);
	// lwz r4,14620(r31)
	ctx.current_instruction = 0x880FC09C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 14620);
	// bl 0x880c9958
	ctx.lr = 0x880FC0A4;
	sub_880C9958(ctx, base);
loc_880FC0A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880FC0B0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_880FC0B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88108728) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88108728;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88108728) {
			switch (rex_dispatch_address) {
				case 0x88108730:
				case 0x881087A4:
				case 0x881087BC:
				case 0x88108838:
				case 0x88108850:
				case 0x881088CC:
				case 0x881088E4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88108728;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88108730: goto loc_88108730;
		case 0x881087A4: goto loc_881087A4;
		case 0x881087BC: goto loc_881087BC;
		case 0x88108838: goto loc_88108838;
		case 0x88108850: goto loc_88108850;
		case 0x881088CC: goto loc_881088CC;
		case 0x881088E4: goto loc_881088E4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x88108730;
	__savegprlr_20(ctx, base);
loc_88108730:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x88108730;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x881087e4
	if (!ctx.cr6.gt) goto loc_881087E4;
	// lwz r11,1352(r3)
	ctx.current_instruction = 0x8810875C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1352);
	// addi r27,r8,-1
	ctx.r27.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
loc_8810876C:
	// lwz r10,1380(r31)
	ctx.current_instruction = 0x8810876C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r9,r10,r26
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r25
	ctx.r30.u64 = ctx.r10.u64 + ctx.r25.u64;
	// ble cr6,0x881087d8
	if (!ctx.cr6.gt) goto loc_881087D8;
loc_88108788:
	// lbzu r28,1(r27)
	ctx.current_instruction = 0x88108788;
	ea = 1 + ctx.r27.u32;
	ctx.r28.u64 = REX_LOAD_U8(ea);
	ctx.r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,1416(r31)
	ctx.current_instruction = 0x88108794;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r6,1380(r31)
	ctx.current_instruction = 0x8810879C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// bl 0x88105518
	ctx.lr = 0x881087A4;
	sub_88105518(ctx, base);
loc_881087A4:
	// clrlwi r5,r28,28
	ctx.r5.u64 = ctx.r28.u32 & 0xF;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lwz r7,1416(r31)
	ctx.current_instruction = 0x881087AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,1380(r31)
	ctx.current_instruction = 0x881087B4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// bl 0x88105518
	ctx.lr = 0x881087BC;
	sub_88105518(ctx, base);
loc_881087BC:
	// lwz r11,1352(r31)
	ctx.current_instruction = 0x881087BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88108788
	if (ctx.cr6.lt) goto loc_88108788;
loc_881087D8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x8810876c
	if (ctx.cr6.lt) goto loc_8810876C;
loc_881087E4:
	// srawi. r25,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r24.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// ble 0x88108878
	if (!ctx.cr0.gt) goto loc_88108878;
	// lwz r11,1364(r31)
	ctx.current_instruction = 0x881087F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1364);
	// addi r27,r23,-1
	ctx.r27.s64 = ctx.r23.s64 + -1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
loc_88108800:
	// lwz r10,1384(r31)
	ctx.current_instruction = 0x88108800;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r9,r10,r26
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r22
	ctx.r30.u64 = ctx.r10.u64 + ctx.r22.u64;
	// ble cr6,0x8810886c
	if (!ctx.cr6.gt) goto loc_8810886C;
loc_8810881C:
	// lbzu r28,1(r27)
	ctx.current_instruction = 0x8810881C;
	ea = 1 + ctx.r27.u32;
	ctx.r28.u64 = REX_LOAD_U8(ea);
	ctx.r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,1416(r31)
	ctx.current_instruction = 0x88108828;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x88108830;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// bl 0x88105518
	ctx.lr = 0x88108838;
	sub_88105518(ctx, base);
loc_88108838:
	// clrlwi r5,r28,28
	ctx.r5.u64 = ctx.r28.u32 & 0xF;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lwz r7,1416(r31)
	ctx.current_instruction = 0x88108840;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x88108848;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// bl 0x88105518
	ctx.lr = 0x88108850;
	sub_88105518(ctx, base);
loc_88108850:
	// lwz r11,1364(r31)
	ctx.current_instruction = 0x88108850;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1364);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8810881c
	if (ctx.cr6.lt) goto loc_8810881C;
loc_8810886C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x88108800
	if (ctx.cr6.lt) goto loc_88108800;
loc_88108878:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x8810890c
	if (!ctx.cr6.gt) goto loc_8810890C;
	// lwz r11,1364(r31)
	ctx.current_instruction = 0x88108884;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1364);
	// addi r27,r21,-1
	ctx.r27.s64 = ctx.r21.s64 + -1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
loc_88108894:
	// lwz r10,1384(r31)
	ctx.current_instruction = 0x88108894;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r9,r10,r26
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r20
	ctx.r30.u64 = ctx.r10.u64 + ctx.r20.u64;
	// ble cr6,0x88108900
	if (!ctx.cr6.gt) goto loc_88108900;
loc_881088B0:
	// lbzu r28,1(r27)
	ctx.current_instruction = 0x881088B0;
	ea = 1 + ctx.r27.u32;
	ctx.r28.u64 = REX_LOAD_U8(ea);
	ctx.r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,1416(r31)
	ctx.current_instruction = 0x881088BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x881088C4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// bl 0x88105518
	ctx.lr = 0x881088CC;
	sub_88105518(ctx, base);
loc_881088CC:
	// clrlwi r5,r28,28
	ctx.r5.u64 = ctx.r28.u32 & 0xF;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lwz r7,1416(r31)
	ctx.current_instruction = 0x881088D4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x881088DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// bl 0x88105518
	ctx.lr = 0x881088E4;
	sub_88105518(ctx, base);
loc_881088E4:
	// lwz r11,1364(r31)
	ctx.current_instruction = 0x881088E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1364);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881088b0
	if (ctx.cr6.lt) goto loc_881088B0;
loc_88108900:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x88108894
	if (ctx.cr6.lt) goto loc_88108894;
loc_8810890C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810C400) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8810C400);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810C400;
	ctx.current_instruction = 0x8810C400;
	uint32_t ea{};
	// lwz r11,2800(r3)
	ctx.current_instruction = 0x8810C400;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,2208(r3)
	ctx.current_instruction = 0x8810C414;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,2224(r3)
	ctx.current_instruction = 0x8810C420;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2224);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x8810c434
	if (!ctx.cr6.gt) goto loc_8810C434;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stw r11,2224(r3)
	ctx.current_instruction = 0x8810C430;
	REX_STORE_U32(ctx.r3.u32 + 2224, ctx.r11.u32);
loc_8810C434:
	// lwz r11,2220(r3)
	ctx.current_instruction = 0x8810C434;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8810c454
	if (!ctx.cr6.eq) goto loc_8810C454;
	// lwz r11,2224(r3)
	ctx.current_instruction = 0x8810C440;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2224);
	// li r6,-64
	ctx.r6.s64 = -64;
	// rlwinm r10,r11,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// subfic r11,r10,16320
	ctx.xer.ca = ctx.r10.u32 <= 16320;
	ctx.r11.u64 = static_cast<uint64_t>(16320) - ctx.r10.u64;
	// b 0x8810c460
	goto loc_8810C460;
loc_8810C454:
	// lwz r10,2224(r3)
	ctx.current_instruction = 0x8810C454;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2224);
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
loc_8810C460:
	// li r9,256
	ctx.r9.s64 = 256;
	// rlwinm r8,r6,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// li r10,0
	ctx.r10.s64 = 0;
	// subfic r8,r8,8224
	ctx.xer.ca = ctx.r8.u32 <= 8224;
	ctx.r8.u64 = static_cast<uint64_t>(8224) - ctx.r8.u64;
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8810C478:
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8810c48c
	if (!ctx.cr6.gt) goto loc_8810C48C;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8810c498
	goto loc_8810C498;
loc_8810C48C:
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
loc_8810C498:
	// addi r9,r1,-256
	ctx.r9.s64 = ctx.r1.s64 + -256;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// srawi r11,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 6;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// stbx r5,r10,r9
	ctx.current_instruction = 0x8810C4A8;
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u8);
	// ble cr6,0x8810c4b8
	if (!ctx.cr6.gt) goto loc_8810C4B8;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8810c4c4
	goto loc_8810C4C4;
loc_8810C4B8:
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
loc_8810C4C4:
	// addi r9,r1,-512
	ctx.r9.s64 = ctx.r1.s64 + -512;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stbx r5,r10,r9
	ctx.current_instruction = 0x8810C4D4;
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8810c478
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810C478;
	// lwz r9,1380(r3)
	ctx.current_instruction = 0x8810C4E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1380);
	// lwz r11,1388(r3)
	ctx.current_instruction = 0x8810C4E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1388);
	// lwz r10,20(r3)
	ctx.current_instruction = 0x8810C4E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mullw. r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,24(r3)
	ctx.current_instruction = 0x8810C4F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,28(r3)
	ctx.current_instruction = 0x8810C4F4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// ble 0x8810c51c
	if (!ctx.cr0.gt) goto loc_8810C51C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// addi r10,r1,-256
	ctx.r10.s64 = ctx.r1.s64 + -256;
loc_8810C508:
	// lbz r7,1(r11)
	ctx.current_instruction = 0x8810C508;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lbzx r5,r7,r10
	ctx.current_instruction = 0x8810C510;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stbu r5,1(r11)
	ctx.current_instruction = 0x8810C514;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8810c508
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810C508;
loc_8810C51C:
	// lwz r11,1392(r3)
	ctx.current_instruction = 0x8810C51C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1392);
	// lwz r10,1384(r3)
	ctx.current_instruction = 0x8810C520;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1384);
	// mullw. r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// addi r9,r1,-512
	ctx.r9.s64 = ctx.r1.s64 + -512;
loc_8810C53C:
	// lbz r6,1(r11)
	ctx.current_instruction = 0x8810C53C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r7,r1,-512
	ctx.r7.s64 = ctx.r1.s64 + -512;
	// lbzx r5,r6,r9
	ctx.current_instruction = 0x8810C544;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// stbu r5,1(r11)
	ctx.current_instruction = 0x8810C548;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// lbz r4,1(r10)
	ctx.current_instruction = 0x8810C54C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbzx r8,r4,r7
	ctx.current_instruction = 0x8810C554;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// stbu r8,1(r10)
	ctx.current_instruction = 0x8810C558;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8810c53c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810C53C;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8810E8A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8810E8A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8810E8A0) {
			switch (rex_dispatch_address) {
				case 0x8810E9A4:
				case 0x8810E9B8:
				case 0x8810E9CC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810E8A0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8810E9A4: goto loc_8810E9A4;
		case 0x8810E9B8: goto loc_8810E9B8;
		case 0x8810E9CC: goto loc_8810E9CC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8810E8A4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8810E8A8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8810E8AC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,3600(r3)
	ctx.current_instruction = 0x8810E8B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3600);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8810e8d8
	if (!ctx.cr6.gt) goto loc_8810E8D8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8810E8C8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8810e8c8
	if (ctx.cr6.gt) goto loc_8810E8C8;
loc_8810E8D8:
	// lwz r9,3604(r31)
	ctx.current_instruction = 0x8810E8D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3604);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,1552(r31)
	ctx.current_instruction = 0x8810E8E4;
	REX_STORE_U32(ctx.r31.u32 + 1552, ctx.r10.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x8810e904
	if (!ctx.cr6.gt) goto loc_8810E904;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_8810E8F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x8810e8f4
	if (ctx.cr6.gt) goto loc_8810E8F4;
loc_8810E904:
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stw r4,1548(r31)
	ctx.current_instruction = 0x8810E90C;
	REX_STORE_U32(ctx.r31.u32 + 1548, ctx.r4.u32);
	// bge cr6,0x8810e91c
	if (!ctx.cr6.lt) goto loc_8810E91C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1552(r31)
	ctx.current_instruction = 0x8810E918;
	REX_STORE_U32(ctx.r31.u32 + 1552, ctx.r11.u32);
loc_8810E91C:
	// lwz r11,1556(r31)
	ctx.current_instruction = 0x8810E91C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1556);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8810e98c
	if (ctx.cr6.lt) goto loc_8810E98C;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8810E928;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8810e93c
	if (ctx.cr6.eq) goto loc_8810E93C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8810e948
	if (!ctx.cr6.eq) goto loc_8810E948;
loc_8810E93C:
	// lwz r11,2572(r31)
	ctx.current_instruction = 0x8810E93C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8810e954
	if (ctx.cr6.eq) goto loc_8810E954;
loc_8810E948:
	// lwz r11,2428(r31)
	ctx.current_instruction = 0x8810E948;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8810e98c
	if (!ctx.cr6.eq) goto loc_8810E98C;
loc_8810E954:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bge cr6,0x8810e964
	if (!ctx.cr6.lt) goto loc_8810E964;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1548(r31)
	ctx.current_instruction = 0x8810E960;
	REX_STORE_U32(ctx.r31.u32 + 1548, ctx.r11.u32);
loc_8810E964:
	// lwz r11,1548(r31)
	ctx.current_instruction = 0x8810E964;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1548);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8810E968;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x8810e980
	if (ctx.cr6.lt) goto loc_8810E980;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8810e9b4
	goto loc_8810E9B4;
loc_8810E980:
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8810e9b4
	goto loc_8810E9B4;
loc_8810E98C:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8810E98C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// li r5,3
	ctx.r5.s64 = 3;
	// blt cr6,0x8810e9b4
	if (ctx.cr6.lt) goto loc_8810E9B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x8810E9A4;
	sub_880E6960(ctx, base);
loc_8810E9A4:
	// lwz r11,1548(r31)
	ctx.current_instruction = 0x8810E9A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1548);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8810E9A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_8810E9B4:
	// bl 0x880e6960
	ctx.lr = 0x8810E9B8;
	sub_880E6960(ctx, base);
loc_8810E9B8:
	// lwz r11,1552(r31)
	ctx.current_instruction = 0x8810E9B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1552);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8810E9C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-3
	ctx.r4.s64 = ctx.r11.s64 + -3;
	// bl 0x880e6960
	ctx.lr = 0x8810E9CC;
	sub_880E6960(ctx, base);
loc_8810E9CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8810E9D0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8810E9D8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88111388) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88111388;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88111388) {
			switch (rex_dispatch_address) {
				case 0x881113BC:
				case 0x881113D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88111388;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881113BC: goto loc_881113BC;
		case 0x881113D0: goto loc_881113D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8811138C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88111390;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88111394;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88111398;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,128(r3)
	ctx.current_instruction = 0x881113A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881113c0
	if (ctx.cr6.eq) goto loc_881113C0;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050358
	ctx.lr = 0x881113BC;
	sub_88050358(ctx, base);
loc_881113BC:
	// stw r30,128(r31)
	ctx.current_instruction = 0x881113BC;
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
loc_881113C0:
	// lwz r3,124(r31)
	ctx.current_instruction = 0x881113C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881113d4
	if (ctx.cr6.eq) goto loc_881113D4;
	// bl 0x88052278
	ctx.lr = 0x881113D0;
	sub_88052278(ctx, base);
loc_881113D0:
	// stw r30,124(r31)
	ctx.current_instruction = 0x881113D0;
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
loc_881113D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	ctx.current_instruction = 0x881113D8;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881113E0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881113E8;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881113EC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88112B70) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88112B70;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88112B70) {
			switch (rex_dispatch_address) {
				case 0x88112B78:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88112B70;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88112B78: goto loc_88112B78;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88112B78;
	__savegprlr_27(ctx, base);
loc_88112B78:
	// lwz r10,116(r3)
	ctx.current_instruction = 0x88112B78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r11,8(r10)
	ctx.current_instruction = 0x88112B7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88112db8
	if (ctx.cr6.eq) goto loc_88112DB8;
	// lwz r9,100(r3)
	ctx.current_instruction = 0x88112B88;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88112db8
	if (ctx.cr6.eq) goto loc_88112DB8;
	// lwz r9,96(r3)
	ctx.current_instruction = 0x88112B94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88112db8
	if (ctx.cr6.eq) goto loc_88112DB8;
	// lwz r7,100(r3)
	ctx.current_instruction = 0x88112BA0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// lhz r6,14(r10)
	ctx.current_instruction = 0x88112BA8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// rlwinm r31,r11,8,0,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// mullw r30,r27,r7
	ctx.r30.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// rotlwi r10,r30,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// rotlwi r8,r31,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// rlwinm r9,r9,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// andc r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// andc r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r10.u64;
	// divw r29,r30,r11
	ctx.r29.u64 = uint32_t((ctx.r11.s32 && !(ctx.r30.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r30.s32 / ctx.r11.s32 : 0);
	// srawi r10,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r11,r31,r7
	ctx.r11.u64 = uint32_t((ctx.r7.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r31.s32 / ctx.r7.s32 : 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x88112c04
	if (!ctx.cr6.gt) goto loc_88112C04;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
loc_88112C04:
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r8,104(r3)
	ctx.current_instruction = 0x88112C08;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// and r28,r7,r11
	ctx.r28.u64 = ctx.r7.u64 & ctx.r11.u64;
	// beq cr6,0x88112c2c
	if (ctx.cr6.eq) goto loc_88112C2C;
	// addi r11,r28,-256
	ctx.r11.s64 = ctx.r28.s64 + -256;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// b 0x88112c30
	goto loc_88112C30;
loc_88112C2C:
	// li r8,0
	ctx.r8.s64 = 0;
loc_88112C30:
	// mullw r11,r28,r4
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r4.s32);
	// lwz r9,124(r3)
	ctx.current_instruction = 0x88112C34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// add. r31,r11,r8
	ctx.r31.u64 = ctx.r11.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bge 0x88112cb8
	if (!ctx.cr0.lt) goto loc_88112CB8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x88112c58
	if (!ctx.cr6.eq) goto loc_88112C58;
	// li r28,1
	ctx.r28.s64 = 1;
loc_88112C58:
	// subf r8,r31,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r31.u64;
	// twllei r28,0
	if (ctx.r28.s32 == 0 || ctx.r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r7,r8,r28
	ctx.r7.u64 = uint32_t((ctx.r28.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r28.s32 == -1)) ? ctx.r8.s32 / ctx.r28.s32 : 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// add r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 + ctx.r4.u64;
	// andc r8,r28,r6
	ctx.r8.u64 = ctx.r28.u64 & ~ctx.r6.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bge cr6,0x88112cb0
	if (!ctx.cr6.lt) goto loc_88112CB0;
	// subf r6,r4,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r4.u64;
loc_88112C84:
	// lwz r11,132(r3)
	ctx.current_instruction = 0x88112C84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88112ca8
	if (!ctx.cr6.gt) goto loc_88112CA8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_88112C98:
	// lbzu r8,1(r11)
	ctx.current_instruction = 0x88112C98;
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r8,0(r9)
	ctx.current_instruction = 0x88112C9C;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x88112c98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88112C98;
loc_88112CA8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x88112c84
	if (!ctx.cr0.eq) goto loc_88112C84;
loc_88112CB0:
	// mullw r11,r7,r28
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r28.s32);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_88112CB8:
	// add r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 + ctx.r4.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x88112d24
	if (!ctx.cr6.lt) goto loc_88112D24;
	// subf r30,r11,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r11.u64;
loc_88112CC8:
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// lwz r7,132(r3)
	ctx.current_instruction = 0x88112CCC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r4,r8,256
	ctx.xer.ca = ctx.r8.u32 <= 256;
	ctx.r4.u64 = static_cast<uint64_t>(256) - ctx.r8.u64;
	// srawi r11,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 8;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// ble cr6,0x88112d18
	if (!ctx.cr6.gt) goto loc_88112D18;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88112CEC:
	// lbzx r7,r11,r10
	ctx.current_instruction = 0x88112CEC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbz r6,0(r11)
	ctx.current_instruction = 0x88112CF0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r7,r7,r8
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// stb r7,0(r9)
	ctx.current_instruction = 0x88112D0C;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x88112cec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88112CEC;
loc_88112D18:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bne 0x88112cc8
	if (!ctx.cr0.eq) goto loc_88112CC8;
loc_88112D24:
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88112db8
	if (!ctx.cr6.lt) goto loc_88112DB8;
	// subf r4,r29,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r29.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_88112D34:
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// lwz r6,132(r3)
	ctx.current_instruction = 0x88112D38;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// subfic r5,r8,256
	ctx.xer.ca = ctx.r8.u32 <= 256;
	ctx.r5.u64 = static_cast<uint64_t>(256) - ctx.r8.u64;
	// srawi r7,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r31.s32 >> 8;
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpw cr6,r7,r27
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x88112d90
	if (!ctx.cr6.lt) goto loc_88112D90;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88112dac
	if (!ctx.cr6.gt) goto loc_88112DAC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88112D60:
	// lbzx r7,r11,r10
	ctx.current_instruction = 0x88112D60;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbz r6,0(r11)
	ctx.current_instruction = 0x88112D64;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r7,r7,r8
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r6,r5
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// stb r7,1(r9)
	ctx.current_instruction = 0x88112D80;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x88112d60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88112D60;
	// b 0x88112dac
	goto loc_88112DAC;
loc_88112D90:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88112dac
	if (!ctx.cr6.gt) goto loc_88112DAC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_88112DA0:
	// lbzu r8,1(r11)
	ctx.current_instruction = 0x88112DA0;
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,1(r9)
	ctx.current_instruction = 0x88112DA4;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x88112da0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88112DA0;
loc_88112DAC:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bne 0x88112d34
	if (!ctx.cr0.eq) goto loc_88112D34;
loc_88112DB8:
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811C0A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811C0A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811C0A8) {
			switch (rex_dispatch_address) {
				case 0x8811C0B0:
				case 0x8811C0F0:
				case 0x8811C130:
				case 0x8811C180:
				case 0x8811C1CC:
				case 0x8811C1F8:
				case 0x8811C228:
				case 0x8811C248:
				case 0x8811C280:
				case 0x8811C2C8:
				case 0x8811C310:
				case 0x8811C320:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811C0A8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811C0B0: goto loc_8811C0B0;
		case 0x8811C0F0: goto loc_8811C0F0;
		case 0x8811C130: goto loc_8811C130;
		case 0x8811C180: goto loc_8811C180;
		case 0x8811C1CC: goto loc_8811C1CC;
		case 0x8811C1F8: goto loc_8811C1F8;
		case 0x8811C228: goto loc_8811C228;
		case 0x8811C248: goto loc_8811C248;
		case 0x8811C280: goto loc_8811C280;
		case 0x8811C2C8: goto loc_8811C2C8;
		case 0x8811C310: goto loc_8811C310;
		case 0x8811C320: goto loc_8811C320;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8811C0B0;
	__savegprlr_26(ctx, base);
loc_8811C0B0:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8811C0B0;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,28(r3)
	ctx.current_instruction = 0x8811C0B8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r27,r4,-24
	ctx.r27.s64 = ctx.r4.s64 + -24;
	// stw r30,92(r1)
	ctx.current_instruction = 0x8811C0C0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	ctx.current_instruction = 0x8811C0C8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r30,80(r1)
	ctx.current_instruction = 0x8811C0D0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.current_instruction = 0x8811C0D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x8811C0DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r27,88(r1)
	ctx.current_instruction = 0x8811C0E4;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r30,96(r1)
	ctx.current_instruction = 0x8811C0E8;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bctrl 
	ctx.lr = 0x8811C0F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811C0F0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811c2f4
	if (ctx.cr6.lt) goto loc_8811C2F4;
	// lwz r11,4(r29)
	ctx.current_instruction = 0x8811C0FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lhz r10,64(r11)
	ctx.current_instruction = 0x8811C100;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8811c2ec
	if (ctx.cr6.gt) goto loc_8811C2EC;
	// lwz r10,120(r11)
	ctx.current_instruction = 0x8811C110;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// addi r6,r11,120
	ctx.r6.s64 = ctx.r11.s64 + 120;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8811c154
	if (!ctx.cr6.eq) goto loc_8811C154;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,224(r29)
	ctx.current_instruction = 0x8811C124;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb2c0
	ctx.lr = 0x8811C130;
	sub_880CB2C0(ctx, base);
loc_8811C130:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811c2f4
	if (ctx.cr6.lt) goto loc_8811C2F4;
	// lwz r11,4(r29)
	ctx.current_instruction = 0x8811C13C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,120(r11)
	ctx.current_instruction = 0x8811C140;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// stw r30,0(r10)
	ctx.current_instruction = 0x8811C144;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r30,4(r10)
	ctx.current_instruction = 0x8811C148;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stw r30,8(r10)
	ctx.current_instruction = 0x8811C14C;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// stw r30,12(r10)
	ctx.current_instruction = 0x8811C150;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
loc_8811C154:
	// lwz r11,4(r29)
	ctx.current_instruction = 0x8811C154;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,120(r11)
	ctx.current_instruction = 0x8811C158;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// addi r28,r11,12
	ctx.r28.s64 = ctx.r11.s64 + 12;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x8811C160;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8811c2ec
	if (!ctx.cr6.eq) goto loc_8811C2EC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,224(r29)
	ctx.current_instruction = 0x8811C170;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 224);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb2c0
	ctx.lr = 0x8811C180;
	sub_880CB2C0(ctx, base);
loc_8811C180:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811c2f4
	if (ctx.cr6.lt) goto loc_8811C2F4;
	// lwz r11,0(r28)
	ctx.current_instruction = 0x8811C18C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// stw r30,0(r11)
	ctx.current_instruction = 0x8811C194;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	ctx.current_instruction = 0x8811C198;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,0(r28)
	ctx.current_instruction = 0x8811C19C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,80(r1)
	ctx.current_instruction = 0x8811C1A0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x8811c1b4
	if (!ctx.cr6.lt) goto loc_8811C1B4;
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
	// b 0x8811c2f8
	goto loc_8811C2F8;
loc_8811C1B4:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88119390
	ctx.lr = 0x8811C1CC;
	sub_88119390(ctx, base);
loc_8811C1CC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811c2f4
	if (ctx.cr6.lt) goto loc_8811C2F4;
	// cmplwi cr6,r27,8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 8, ctx.xer);
	// blt cr6,0x8811c2ec
	if (ctx.cr6.lt) goto loc_8811C2EC;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x8811C1E4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88119390
	ctx.lr = 0x8811C1F8;
	sub_88119390(ctx, base);
loc_8811C1F8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811c2f4
	if (ctx.cr6.lt) goto loc_8811C2F4;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811C204;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r5,0(r11)
	ctx.current_instruction = 0x8811C20C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8811c290
	if (ctx.cr6.eq) goto loc_8811C290;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwz r3,224(r29)
	ctx.current_instruction = 0x8811C21C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb2c0
	ctx.lr = 0x8811C228;
	sub_880CB2C0(ctx, base);
loc_8811C228:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811c2f4
	if (ctx.cr6.lt) goto loc_8811C2F4;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811C234;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r11)
	ctx.current_instruction = 0x8811C23C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.current_instruction = 0x8811C240;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x88052d90
	ctx.lr = 0x8811C248;
	sub_88052D90(ctx, base);
loc_8811C248:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811C248;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r11)
	ctx.current_instruction = 0x8811C24C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r5,8
	ctx.r30.s64 = ctx.r5.s64 + 8;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8811c268
	if (!ctx.cr6.gt) goto loc_8811C268;
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
	// b 0x8811c2f8
	goto loc_8811C2F8;
loc_8811C268:
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r4,4(r11)
	ctx.current_instruction = 0x8811C26C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881198a8
	ctx.lr = 0x8811C280;
	sub_881198A8(ctx, base);
loc_8811C280:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811c2f4
	if (ctx.cr6.lt) goto loc_8811C2F4;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8811C290:
	// lwz r11,4(r29)
	ctx.current_instruction = 0x8811C290;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lhz r10,64(r11)
	ctx.current_instruction = 0x8811C294;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,64(r11)
	ctx.current_instruction = 0x8811C29C;
	REX_STORE_U16(ctx.r11.u32 + 64, ctx.r8.u16);
	// lwz r6,84(r1)
	ctx.current_instruction = 0x8811C2A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r5,r6,r27
	ctx.r5.u64 = ctx.r27.u64 - ctx.r6.u64;
	// subf. r30,r9,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8811c320
	if (ctx.cr0.eq) goto loc_8811C320;
	// lwz r11,0(r29)
	ctx.current_instruction = 0x8811C2B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8811C2BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811C2C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811C2C8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811c2f4
	if (ctx.cr6.lt) goto loc_8811C2F4;
	// ld r11,8(r29)
	ctx.current_instruction = 0x8811C2D4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r29.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r29)
	ctx.current_instruction = 0x8811C2E0;
	REX_STORE_U64(ctx.r29.u32 + 8, ctx.r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8811C2EC:
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
loc_8811C2F4:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811C2F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8811C2F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8811c320
	if (ctx.cr6.eq) goto loc_8811C320;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r3,224(r29)
	ctx.current_instruction = 0x8811C304;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x8811C310;
	sub_880CB318(ctx, base);
loc_8811C310:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r29)
	ctx.current_instruction = 0x8811C318;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 224);
	// bl 0x880cb318
	ctx.lr = 0x8811C320;
	sub_880CB318(ctx, base);
loc_8811C320:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881219C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881219C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881219C0) {
			switch (rex_dispatch_address) {
				case 0x881219C8:
				case 0x88121A84:
				case 0x88121AAC:
				case 0x88121ACC:
				case 0x88121AE4:
				case 0x88121B48:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881219C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881219C8: goto loc_881219C8;
		case 0x88121A84: goto loc_88121A84;
		case 0x88121AAC: goto loc_88121AAC;
		case 0x88121ACC: goto loc_88121ACC;
		case 0x88121AE4: goto loc_88121AE4;
		case 0x88121B48: goto loc_88121B48;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881219C8;
	__savegprlr_27(ctx, base);
loc_881219C8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881219C8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r3)
	ctx.current_instruction = 0x881219CC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881219f0
	if (!ctx.cr6.eq) goto loc_881219F0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881219F0:
	// lwz r11,228(r31)
	ctx.current_instruction = 0x881219F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88121b64
	if (!ctx.cr6.eq) goto loc_88121B64;
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// li r29,5
	ctx.r29.s64 = 5;
	// ori r28,r11,6
	ctx.r28.u64 = ctx.r11.u64 | 6;
	// li r27,14
	ctx.r27.s64 = 14;
loc_88121A0C:
	// lwz r11,80(r31)
	ctx.current_instruction = 0x88121A0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x88121a0c
	if (ctx.cr6.gt) goto loc_88121A0C;
	// lis r12,-30702
	ctx.r12.s64 = -2012086272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6704
	ctx.r12.s64 = ctx.r12.s64 + 6704;
	// lwzx r0,r12,r0
	ctx.current_instruction = 0x88121A24;
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_88121A7C;
	case 1:
		goto loc_88121A7C;
	case 2:
		goto loc_88121A7C;
	case 3:
		goto loc_88121A7C;
	case 4:
		goto loc_88121A94;
	case 5:
		goto loc_88121ADC;
	case 6:
		goto loc_88121ADC;
	case 7:
		goto loc_88121ADC;
	case 8:
		goto loc_88121ADC;
	case 9:
		goto loc_88121ADC;
	case 10:
		goto loc_88121ADC;
	case 11:
		goto loc_88121ADC;
	case 12:
		goto loc_88121ADC;
	case 13:
		goto loc_88121ADC;
	case 14:
		goto loc_88121AC4;
	case 15:
		goto loc_88121AC4;
	case 16:
		goto loc_88121AC4;
	case 17:
		goto loc_88121B20;
	case 18:
		goto loc_88121B5C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_88121A7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8811f5a0
	ctx.lr = 0x88121A84;
	sub_8811F5A0(ctx, base);
loc_88121A84:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88121a0c
	if (!ctx.cr6.lt) goto loc_88121A0C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88121A94:
	// stw r29,80(r31)
	ctx.current_instruction = 0x88121A94;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,224(r31)
	ctx.current_instruction = 0x88121AA0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880cafe0
	ctx.lr = 0x88121AAC;
	sub_880CAFE0(ctx, base);
loc_88121AAC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88121b64
	if (ctx.cr6.lt) goto loc_88121B64;
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x88121b50
	if (!ctx.cr6.eq) goto loc_88121B50;
	// stw r27,80(r31)
	ctx.current_instruction = 0x88121ABC;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// b 0x88121a0c
	goto loc_88121A0C;
loc_88121AC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8811dc58
	ctx.lr = 0x88121ACC;
	sub_8811DC58(ctx, base);
loc_88121ACC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88121a0c
	if (!ctx.cr6.lt) goto loc_88121A0C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88121ADC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88120850
	ctx.lr = 0x88121AE4;
	sub_88120850(ctx, base);
loc_88121AE4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88121b64
	if (ctx.cr6.lt) goto loc_88121B64;
	// lwz r11,228(r31)
	ctx.current_instruction = 0x88121AEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88121b04
	if (!ctx.cr6.eq) goto loc_88121B04;
	// lwz r11,232(r31)
	ctx.current_instruction = 0x88121AF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88121a0c
	if (ctx.cr6.eq) goto loc_88121A0C;
loc_88121B04:
	// lwz r11,232(r31)
	ctx.current_instruction = 0x88121B04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88121b64
	if (ctx.cr6.eq) goto loc_88121B64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,232(r31)
	ctx.current_instruction = 0x88121B14;
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88121B20:
	// stw r29,80(r31)
	ctx.current_instruction = 0x88121B20;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r3,224(r31)
	ctx.current_instruction = 0x88121B2C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,16
	ctx.r5.u64 = ctx.r5.u64 | 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880cb090
	ctx.lr = 0x88121B48;
	sub_880CB090(ctx, base);
loc_88121B48:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88121b64
	if (ctx.cr6.lt) goto loc_88121B64;
loc_88121B50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88121B5C:
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
loc_88121B64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88123488) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88123488;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88123488) {
			switch (rex_dispatch_address) {
				case 0x88123490:
				case 0x881234E8:
				case 0x881234FC:
				case 0x8812351C:
				case 0x88123530:
				case 0x8812354C:
				case 0x88123570:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88123488;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88123490: goto loc_88123490;
		case 0x881234E8: goto loc_881234E8;
		case 0x881234FC: goto loc_881234FC;
		case 0x8812351C: goto loc_8812351C;
		case 0x88123530: goto loc_88123530;
		case 0x8812354C: goto loc_8812354C;
		case 0x88123570: goto loc_88123570;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88123490;
	__savegprlr_25(ctx, base);
loc_88123490:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88123490;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,0(r6)
	ctx.current_instruction = 0x8812349C;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r11,0(r7)
	ctx.current_instruction = 0x881234A4;
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	ctx.current_instruction = 0x881234AC;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x881234B4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x881234BC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x881234C0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,32(r31)
	ctx.current_instruction = 0x881234C4;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// ld r11,40(r31)
	ctx.current_instruction = 0x881234C8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x881234f0
	if (ctx.cr6.eq) goto loc_881234F0;
	// lwz r11,76(r31)
	ctx.current_instruction = 0x881234D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881234DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881234E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881234E8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812362c
	if (ctx.cr6.lt) goto loc_8812362C;
loc_881234F0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88123358
	ctx.lr = 0x881234FC;
	sub_88123358(ctx, base);
loc_881234FC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812362c
	if (ctx.cr6.lt) goto loc_8812362C;
	// lwz r11,88(r31)
	ctx.current_instruction = 0x88123504;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88123538
	if (ctx.cr6.eq) goto loc_88123538;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,80(r31)
	ctx.current_instruction = 0x88123514;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 80);
	// bl 0x88122d18
	ctx.lr = 0x8812351C;
	sub_88122D18(ctx, base);
loc_8812351C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812362c
	if (ctx.cr6.lt) goto loc_8812362C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88123358
	ctx.lr = 0x88123530;
	sub_88123358(ctx, base);
loc_88123530:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812362c
	if (ctx.cr6.lt) goto loc_8812362C;
loc_88123538:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// ld r4,64(r31)
	ctx.current_instruction = 0x8812353C;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88122968
	ctx.lr = 0x8812354C;
	sub_88122968(ctx, base);
loc_8812354C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812362c
	if (ctx.cr6.lt) goto loc_8812362C;
	// lwz r30,80(r1)
	ctx.current_instruction = 0x88123554;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88123558;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// ld r10,8(r11)
	ctx.current_instruction = 0x8812355C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x88123578
	if (!ctx.cr6.eq) goto loc_88123578;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881224b8
	ctx.lr = 0x88123570;
	sub_881224B8(ctx, base);
loc_88123570:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812362c
	if (ctx.cr6.lt) goto loc_8812362C;
loc_88123578:
	// lwz r8,0(r30)
	ctx.current_instruction = 0x88123578;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// ld r10,64(r31)
	ctx.current_instruction = 0x88123580;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 64);
	// lwz r9,4(r8)
	ctx.current_instruction = 0x88123584;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// ld r8,8(r8)
	ctx.current_instruction = 0x88123588;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpld cr6,r6,r11
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x881235d0
	if (ctx.cr6.lt) goto loc_881235D0;
	// stw r28,0(r27)
	ctx.current_instruction = 0x8812359C;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// lwz r9,0(r30)
	ctx.current_instruction = 0x881235A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// ld r8,64(r31)
	ctx.current_instruction = 0x881235A4;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 64);
	// ld r10,8(r9)
	ctx.current_instruction = 0x881235A8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// lwz r9,4(r9)
	ctx.current_instruction = 0x881235AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// cmpld cr6,r6,r11
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x881235f0
	if (!ctx.cr6.eq) goto loc_881235F0;
	// lwz r11,4(r30)
	ctx.current_instruction = 0x881235C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	ctx.current_instruction = 0x881235C8;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x881235f0
	goto loc_881235F0;
loc_881235D0:
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,0(r27)
	ctx.current_instruction = 0x881235E0;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.current_instruction = 0x881235E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,4(r30)
	ctx.current_instruction = 0x881235EC;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
loc_881235F0:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x881235F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// ld r10,64(r31)
	ctx.current_instruction = 0x881235F4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 64);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r8,8(r11)
	ctx.current_instruction = 0x881235FC;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88123600;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r11,r7,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r7.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,0(r26)
	ctx.current_instruction = 0x88123610;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r6.u32);
	// ld r5,64(r31)
	ctx.current_instruction = 0x88123614;
	ctx.r5.u64 = REX_LOAD_U64(ctx.r31.u32 + 64);
	// std r5,0(r25)
	ctx.current_instruction = 0x88123618;
	REX_STORE_U64(ctx.r25.u32 + 0, ctx.r5.u64);
	// lwz r11,0(r27)
	ctx.current_instruction = 0x8812361C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// ld r10,64(r31)
	ctx.current_instruction = 0x88123620;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 64);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r4,64(r31)
	ctx.current_instruction = 0x88123628;
	REX_STORE_U64(ctx.r31.u32 + 64, ctx.r4.u64);
loc_8812362C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88126210) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88126210;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88126210) {
			switch (rex_dispatch_address) {
				case 0x88126218:
				case 0x881263F4:
				case 0x88126404:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88126210;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88126218: goto loc_88126218;
		case 0x881263F4: goto loc_881263F4;
		case 0x88126404: goto loc_88126404;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x88126218;
	__savegprlr_22(ctx, base);
loc_88126218:
	// stfd f31,-96(r1)
	ctx.current_instruction = 0x88126218;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x8812621C;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,332(r1)
	ctx.current_instruction = 0x88126220;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8812623c
	if (ctx.cr6.eq) goto loc_8812623C;
	// lhz r30,0(r11)
	ctx.current_instruction = 0x88126234;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// b 0x88126240
	goto loc_88126240;
loc_8812623C:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_88126240:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r3,292(r1)
	ctx.current_instruction = 0x88126244;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r27,324(r1)
	ctx.current_instruction = 0x8812624C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r26,276(r1)
	ctx.current_instruction = 0x88126254;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r25,284(r1)
	ctx.current_instruction = 0x88126258;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// lhz r24,302(r1)
	ctx.current_instruction = 0x88126264;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r1.u32 + 302);
	// lhz r23,310(r1)
	ctx.current_instruction = 0x88126268;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r1.u32 + 310);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,88(r31)
	ctx.current_instruction = 0x88126270;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// not r22,r11
	ctx.r22.u64 = ~ctx.r11.u64;
	// sth r10,110(r31)
	ctx.current_instruction = 0x8812627C;
	REX_STORE_U16(ctx.r31.u32 + 110, ctx.r10.u16);
	// stw r11,116(r31)
	ctx.current_instruction = 0x88126280;
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r5,820(r31)
	ctx.current_instruction = 0x88126288;
	REX_STORE_U32(ctx.r31.u32 + 820, ctx.r5.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r6,256(r31)
	ctx.current_instruction = 0x88126290;
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// sth r8,34(r31)
	ctx.current_instruction = 0x88126298;
	REX_STORE_U16(ctx.r31.u32 + 34, ctx.r8.u16);
	// stw r27,100(r31)
	ctx.current_instruction = 0x8812629C;
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// stw r26,104(r31)
	ctx.current_instruction = 0x881262A0;
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r26.u32);
	// stw r25,84(r31)
	ctx.current_instruction = 0x881262A4;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// stw r4,60(r31)
	ctx.current_instruction = 0x881262A8;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// stw r7,80(r31)
	ctx.current_instruction = 0x881262AC;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// stw r22,112(r31)
	ctx.current_instruction = 0x881262B0;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r22.u32);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881262B4;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r24,64(r31)
	ctx.current_instruction = 0x881262B8;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r24.u32);
	// stw r23,68(r31)
	ctx.current_instruction = 0x881262BC;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r23.u32);
	// stw r9,620(r31)
	ctx.current_instruction = 0x881262C0;
	REX_STORE_U32(ctx.r31.u32 + 620, ctx.r9.u32);
	// ble cr6,0x881262dc
	if (!ctx.cr6.gt) goto loc_881262DC;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_881262CC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x881262cc
	if (ctx.cr6.gt) goto loc_881262CC;
loc_881262DC:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r9,612(r31)
	ctx.current_instruction = 0x881262E4;
	REX_STORE_U32(ctx.r31.u32 + 612, ctx.r9.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x88126304
	if (!ctx.cr6.gt) goto loc_88126304;
	// lwz r9,12(r31)
	ctx.current_instruction = 0x881262F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
loc_881262F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x881262f4
	if (ctx.cr6.gt) goto loc_881262F4;
loc_88126304:
	// lwz r9,176(r31)
	ctx.current_instruction = 0x88126304;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,616(r31)
	ctx.current_instruction = 0x8812630C;
	REX_STORE_U32(ctx.r31.u32 + 616, ctx.r8.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x88126320
	if (!ctx.cr6.eq) goto loc_88126320;
	// li r9,-129
	ctx.r9.s64 = -129;
	// b 0x88126330
	goto loc_88126330;
loc_88126320:
	// li r9,-651
	ctx.r9.s64 = -651;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// ble cr6,0x88126330
	if (!ctx.cr6.gt) goto loc_88126330;
	// li r9,-907
	ctx.r9.s64 = -907;
loc_88126330:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x881264d8
	if (!ctx.cr6.eq) goto loc_881264D8;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// addi r6,r9,23840
	ctx.r6.s64 = ctx.r9.s64 + 23840;
	// lbzx r5,r8,r6
	ctx.current_instruction = 0x88126350;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x881264d8
	if (ctx.cr6.eq) goto loc_881264D8;
	// rlwinm r9,r11,0,28,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bne cr6,0x88126378
	if (!ctx.cr6.eq) goto loc_88126378;
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,65525
	ctx.r12.u64 = ctx.r12.u64 | 65525;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
loc_88126378:
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// stw r7,452(r31)
	ctx.current_instruction = 0x8812637C;
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r7.u32);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r28,456(r31)
	ctx.current_instruction = 0x88126384;
	REX_STORE_U32(ctx.r31.u32 + 456, ctx.r28.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881263a0
	if (ctx.cr6.eq) goto loc_881263A0;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// stw r29,456(r31)
	ctx.current_instruction = 0x88126394;
	REX_STORE_U32(ctx.r31.u32 + 456, ctx.r29.u32);
	// stw r11,452(r31)
	ctx.current_instruction = 0x88126398;
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// b 0x88126470
	goto loc_88126470;
loc_881263A0:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881263c0
	if (ctx.cr6.eq) goto loc_881263C0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,456(r31)
	ctx.current_instruction = 0x881263B4;
	REX_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// stw r10,452(r31)
	ctx.current_instruction = 0x881263B8;
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r10.u32);
	// b 0x88126470
	goto loc_88126470;
loc_881263C0:
	// lwz r11,316(r1)
	ctx.current_instruction = 0x881263C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x88126470
	if (ctx.cr6.eq) goto loc_88126470;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// std r11,80(r1)
	ctx.current_instruction = 0x881263D4;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x881263D8;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	ctx.current_instruction = 0x881263DC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x881263E0;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fdiv f1,f12,f11
	ctx.f1.f64 = ctx.f12.f64 / ctx.f11.f64;
	// bl 0x881ef2e8
	ctx.lr = 0x881263F4;
	sub_881EF2E8(ctx, base);
loc_881263F4:
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfd f1,12296(r9)
	ctx.current_instruction = 0x881263FC;
	ctx.f1.u64 = REX_LOAD_U64(ctx.r9.u32 + 12296);
	// bl 0x881ef2e8
	ctx.lr = 0x88126404;
	sub_881EF2E8(ctx, base);
loc_88126404:
	// fdiv f10,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64 / ctx.f1.f64;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f13,6732(r8)
	ctx.current_instruction = 0x88126410;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 6732);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,6728(r11)
	ctx.current_instruction = 0x8812641C;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6728);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x88126438
	if (!ctx.cr6.lt) goto loc_88126438;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	ctx.current_instruction = 0x8812642C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88126430;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x88126448
	goto loc_88126448;
loc_88126438:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	ctx.current_instruction = 0x88126440;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88126444;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_88126448:
	// lwz r10,80(r31)
	ctx.current_instruction = 0x88126448;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,456(r31)
	ctx.current_instruction = 0x88126450;
	REX_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// ble cr6,0x88126464
	if (!ctx.cr6.gt) goto loc_88126464;
	// sraw r9,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r9.s64 = ctx.r10.s32 >> temp.u32;
	// stw r9,452(r31)
	ctx.current_instruction = 0x8812645C;
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r9.u32);
	// b 0x88126470
	goto loc_88126470;
loc_88126464:
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// slw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// stw r8,452(r31)
	ctx.current_instruction = 0x8812646C;
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r8.u32);
loc_88126470:
	// lwz r11,456(r31)
	ctx.current_instruction = 0x88126470;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// stw r28,444(r31)
	ctx.current_instruction = 0x88126474;
	REX_STORE_U32(ctx.r31.u32 + 444, ctx.r28.u32);
	// stw r28,448(r31)
	ctx.current_instruction = 0x88126478;
	REX_STORE_U32(ctx.r31.u32 + 448, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,460(r31)
	ctx.current_instruction = 0x88126480;
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r28.u32);
	// bge cr6,0x881264a4
	if (!ctx.cr6.lt) goto loc_881264A4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r29,448(r31)
	ctx.current_instruction = 0x8812648C;
	REX_STORE_U32(ctx.r31.u32 + 448, ctx.r29.u32);
	// stw r11,456(r31)
	ctx.current_instruction = 0x88126490;
	REX_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
loc_88126494:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_88126498:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.current_instruction = 0x8812649C;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881264A4:
	// ble cr6,0x88126494
	if (!ctx.cr6.gt) goto loc_88126494;
	// lwz r11,60(r31)
	ctx.current_instruction = 0x881264A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,444(r31)
	ctx.current_instruction = 0x881264B0;
	REX_STORE_U32(ctx.r31.u32 + 444, ctx.r29.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x88126498
	if (!ctx.cr6.gt) goto loc_88126498;
	// lwz r11,176(r31)
	ctx.current_instruction = 0x881264BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88126498
	if (!ctx.cr6.eq) goto loc_88126498;
	// stw r29,460(r31)
	ctx.current_instruction = 0x881264C8;
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r29.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.current_instruction = 0x881264D0;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881264D8:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.current_instruction = 0x881264E0;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88133D18) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88133D18;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88133D18) {
			switch (rex_dispatch_address) {
				case 0x88133D20:
				case 0x88133D40:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88133D18;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88133D20: goto loc_88133D20;
		case 0x88133D40: goto loc_88133D40;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88133D20;
	__savegprlr_29(ctx, base);
loc_88133D20:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88133D20;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lhz r5,174(r30)
	ctx.current_instruction = 0x88133D38;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 174);
	// bl 0x88141ee8
	ctx.lr = 0x88133D40;
	sub_88141EE8(ctx, base);
loc_88133D40:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// ble cr6,0x88133d88
	if (!ctx.cr6.gt) goto loc_88133D88;
	// li r11,1
	ctx.r11.s64 = 1;
loc_88133D4C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,632(r30)
	ctx.current_instruction = 0x88133D50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 632);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// lwz r6,-4(r10)
	ctx.current_instruction = 0x88133D68;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r8,0(r10)
	ctx.current_instruction = 0x88133D6C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r5,r9,32
	ctx.r5.s64 = ctx.r9.s64 + 32;
	// srawi r9,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 6;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r4,0(r10)
	ctx.current_instruction = 0x88133D80;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// blt cr6,0x88133d4c
	if (ctx.cr6.lt) goto loc_88133D4C;
loc_88133D88:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88134628) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88134628;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88134628) {
			switch (rex_dispatch_address) {
				case 0x881346BC:
				case 0x88134728:
				case 0x881347C0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88134628;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881346BC: goto loc_881346BC;
		case 0x88134728: goto loc_88134728;
		case 0x881347C0: goto loc_881347C0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8813462C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88134630;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88134634;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88134638;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.current_instruction = 0x8813463C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88134730
	if (ctx.cr6.eq) goto loc_88134730;
	// lwz r10,8(r3)
	ctx.current_instruction = 0x88134650;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88134714
	if (ctx.cr6.eq) goto loc_88134714;
	// lwz r11,48(r3)
	ctx.current_instruction = 0x8813465C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881346b0
	if (!ctx.cr6.eq) goto loc_881346B0;
	// lwz r11,208(r3)
	ctx.current_instruction = 0x88134668;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8813467c
	if (ctx.cr6.gt) goto loc_8813467C;
	// lwz r11,200(r3)
	ctx.current_instruction = 0x88134674;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// b 0x88134788
	goto loc_88134788;
loc_8813467C:
	// lwz r11,208(r31)
	ctx.current_instruction = 0x8813467C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r9,204(r31)
	ctx.current_instruction = 0x88134680;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// subf r8,r11,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r11.u64;
	// lwz r10,200(r31)
	ctx.current_instruction = 0x88134688;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r5,r6,r7
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// sradi r4,r5,20
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s64 >> 20;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88134788
	goto loc_88134788;
loc_881346B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88134558
	ctx.lr = 0x881346BC;
	sub_88134558(ctx, base);
loc_881346BC:
	// lwz r11,208(r31)
	ctx.current_instruction = 0x881346BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x881346d8
	if (ctx.cr6.gt) goto loc_881346D8;
	// lwz r11,200(r31)
	ctx.current_instruction = 0x881346C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88134788
	goto loc_88134788;
loc_881346D8:
	// lwz r11,208(r31)
	ctx.current_instruction = 0x881346D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,204(r31)
	ctx.current_instruction = 0x881346DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// subf r8,r11,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r11.u64;
	// lwz r9,200(r31)
	ctx.current_instruction = 0x881346E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r5,r6,r7
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// sradi r4,r5,20
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s64 >> 20;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88134788
	goto loc_88134788;
loc_88134714:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88134730
	if (ctx.cr6.eq) goto loc_88134730;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88134558
	ctx.lr = 0x88134728;
	sub_88134558(ctx, base);
loc_88134728:
	// subf r11,r30,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r30.u64;
	// b 0x88134788
	goto loc_88134788;
loc_88134730:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88134730;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88134784
	if (ctx.cr6.eq) goto loc_88134784;
	// lwz r11,208(r31)
	ctx.current_instruction = 0x8813473C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x88134750
	if (ctx.cr6.gt) goto loc_88134750;
	// lwz r11,200(r31)
	ctx.current_instruction = 0x88134748;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// b 0x88134788
	goto loc_88134788;
loc_88134750:
	// lwz r11,208(r31)
	ctx.current_instruction = 0x88134750;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,204(r31)
	ctx.current_instruction = 0x88134754;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// subf r8,r11,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r11.u64;
	// lwz r9,200(r31)
	ctx.current_instruction = 0x8813475C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r5,r6,r7
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// sradi r4,r5,20
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s64 >> 20;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88134788
	goto loc_88134788;
loc_88134784:
	// li r11,0
	ctx.r11.s64 = 0;
loc_88134788:
	// lis r10,-1024
	ctx.r10.s64 = -67108864;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881347a0
	if (!ctx.cr6.lt) goto loc_881347A0;
	// lis r4,-1024
	ctx.r4.s64 = -67108864;
	// b 0x881347b4
	goto loc_881347B4;
loc_881347A0:
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881347b4
	if (!ctx.cr6.gt) goto loc_881347B4;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_881347B4:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r3,r11,32348
	ctx.r3.s64 = ctx.r11.s64 + 32348;
	// bl 0x881340b8
	ctx.lr = 0x881347C0;
	sub_881340B8(ctx, base);
loc_881347C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881347C4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881347CC;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881347D0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88138E70) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88138E70);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88138E70;
	ctx.current_instruction = 0x88138E70;
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x88138e80
	if (!ctx.cr6.eq) goto loc_88138E80;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// blt cr6,0x8813900c
	if (ctx.cr6.lt) goto loc_8813900C;
loc_88138E80:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bgt cr6,0x8813900c
	if (ctx.cr6.gt) goto loc_8813900C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8813900c
	if (!ctx.cr6.gt) goto loc_8813900C;
	// cmpwi cr6,r3,8000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8000, ctx.xer);
	// bgt cr6,0x88138ea0
	if (ctx.cr6.gt) goto loc_88138EA0;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x88138f30
	goto loc_88138F30;
loc_88138EA0:
	// cmpwi cr6,r3,11025
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11025, ctx.xer);
	// bgt cr6,0x88138eb0
	if (ctx.cr6.gt) goto loc_88138EB0;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x88138f30
	goto loc_88138F30;
loc_88138EB0:
	// cmpwi cr6,r3,16000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16000, ctx.xer);
	// bgt cr6,0x88138ec0
	if (ctx.cr6.gt) goto loc_88138EC0;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x88138f30
	goto loc_88138F30;
loc_88138EC0:
	// cmpwi cr6,r3,22050
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22050, ctx.xer);
	// bgt cr6,0x88138ed0
	if (ctx.cr6.gt) goto loc_88138ED0;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x88138f30
	goto loc_88138F30;
loc_88138ED0:
	// cmpwi cr6,r3,32000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32000, ctx.xer);
	// bgt cr6,0x88138ee8
	if (ctx.cr6.gt) goto loc_88138EE8;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x88138f10
	if (!ctx.cr6.eq) goto loc_88138F10;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x88138f84
	goto loc_88138F84;
loc_88138EE8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,44100
	ctx.r10.u64 = ctx.r11.u64 | 44100;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x88138f00
	if (ctx.cr6.gt) goto loc_88138F00;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// b 0x88138f30
	goto loc_88138F30;
loc_88138F00:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,48000
	ctx.r10.u64 = ctx.r11.u64 | 48000;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x88138f18
	if (ctx.cr6.gt) goto loc_88138F18;
loc_88138F10:
	// li r11,2048
	ctx.r11.s64 = 2048;
	// b 0x88138f30
	goto loc_88138F30;
loc_88138F18:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,30464
	ctx.r10.u64 = ctx.r11.u64 | 30464;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88138f30
	if (!ctx.cr6.gt) goto loc_88138F30;
	// li r11,8192
	ctx.r11.s64 = 8192;
loc_88138F30:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x88138f80
	if (!ctx.cr6.eq) goto loc_88138F80;
	// rlwinm r10,r6,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x88138f50
	if (!ctx.cr6.eq) goto loc_88138F50;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88138F50:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x88138f68
	if (!ctx.cr6.eq) goto loc_88138F68;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88138F68:
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x88139004
	if (!ctx.cr6.eq) goto loc_88139004;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88138F80:
	// bge cr6,0x88139004
	if (!ctx.cr6.lt) goto loc_88139004;
loc_88138F84:
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// divwu r9,r9,r3
	ctx.r9.u64 = uint32_t(ctx.r3.u32 ? ctx.r9.u32 / ctx.r3.u32 : 0);
	// addi r7,r9,7
	ctx.r7.s64 = ctx.r9.s64 + 7;
	// rlwinm r9,r7,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88138fd0
	if (!ctx.cr6.eq) goto loc_88138FD0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x88138fe0
	if (!ctx.cr6.eq) goto loc_88138FE0;
	// mullw r9,r11,r3
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// divwu r9,r9,r3
	ctx.r9.u64 = uint32_t(ctx.r3.u32 ? ctx.r9.u32 / ctx.r3.u32 : 0);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r8,r9,7
	ctx.r8.s64 = ctx.r9.s64 + 7;
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
loc_88138FD0:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x88139004
	if (ctx.cr6.gt) goto loc_88139004;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88139004
	if (!ctx.cr6.eq) goto loc_88139004;
loc_88138FE0:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// divwu r9,r9,r3
	ctx.r9.u64 = uint32_t(ctx.r3.u32 ? ctx.r9.u32 / ctx.r3.u32 : 0);
	// addi r8,r9,7
	ctx.r8.s64 = ctx.r9.s64 + 7;
	// rlwinm r7,r8,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x88138fe0
	if (ctx.cr6.eq) goto loc_88138FE0;
loc_88139004:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813900C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8813D380) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8813D380);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813D380;
	ctx.current_instruction = 0x8813D380;
	uint32_t ea{};
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v9,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltish v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x2)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v11,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x1)));
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vspltish v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x4)));
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// vspltish v10,5
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x5)));
	// lvx128 v8,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-30678
	ctx.r6.s64 = -2010513408;
	// lvx128 v7,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r4,-30678
	ctx.r4.s64 = -2010513408;
	// lvx128 v3,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v3,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v2,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v25,v3,v7
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v6,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v27,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v1,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v30,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v28,v9,v1
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// lwz r11,25784(r6)
	ctx.current_instruction = 0x8813D3E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 25784);
	// vsubshs v26,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lwz r10,25764(r4)
	ctx.current_instruction = 0x8813D3F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 25764);
	// vaddshs v22,v27,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubshs v21,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v20,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v17,v26,v25
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// lvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v19,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// lvx128 v4,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v18,v27,v29
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v6,v20,v22
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubshs v23,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v24,v9,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsubshs v16,v8,v3
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v15,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v6,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v17.u8));
	// vsubshs v7,v24,v23
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vor v8,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v21.u8));
	// vaddshs v3,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v9,v9,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vslh v27,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v22,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vslh v2,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v30,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vslh v29,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v7,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v16.u8));
	// vaddshs v18,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vaddshs v17,v23,v2
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v6,v1,v31
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vslh v19,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v29,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v14,v21,v8
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v16,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v30,v30,v0
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v28,v18,v20
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vslh v3,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v27,v17,v19
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vslh v26,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v16,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v24,v15,v14
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vaddshs v23,v29,v0
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vslh v31,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v1,v30,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v20,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v19,v22,v7
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// li r3,32
	ctx.r3.s64 = 32;
	// vslh v18,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r11,64
	ctx.r11.s64 = 64;
	// vaddshs v16,v20,v6
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// li r10,96
	ctx.r10.s64 = 96;
	// vaddshs v17,v25,v21
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// li r9,16
	ctx.r9.s64 = 16;
	// vaddshs v15,v24,v31
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// li r8,48
	ctx.r8.s64 = 48;
	// vaddshs v14,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vaddshs v29,v16,v26
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v26,v17,v2
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vslh v30,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v14,v3
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v22,v29,v31
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v24,v15,v7
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v21,v26,v30
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v20,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v18,v22,v9
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v19,v24,v30
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v17,v21,v6
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v16,v20,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v14,v3,v18
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vaddshs v9,v27,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v15,v28,v0
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v8,v16,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v7,v19,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v6,v14,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v3,v17,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v28,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v9,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v15,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v6,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v7,v7,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v23,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v31,v1,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsrah v10,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrglh v30,v1,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vmrghh v27,v2,v8
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrglh v26,v2,v8
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghh v25,v28,v7
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrglh v24,v28,v7
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrghh v23,v29,v10
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vmrglh v22,v29,v10
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vmrghw128 v63,v31,v27
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v27.u32), simde_mm_load_si128((simde__m128i*)ctx.v31.u32)));
	// vmrglw128 v62,v31,v27
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v27.u32), simde_mm_load_si128((simde__m128i*)ctx.v31.u32)));
	// vmrghw128 v60,v30,v26
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v26.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrghw128 v61,v23,v25
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v25.u32), simde_mm_load_si128((simde__m128i*)ctx.v23.u32)));
	// vmrghw128 v59,v22,v24
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v24.u32), simde_mm_load_si128((simde__m128i*)ctx.v22.u32)));
	// vmrglw128 v58,v23,v25
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v25.u32), simde_mm_load_si128((simde__m128i*)ctx.v23.u32)));
	// vmrglw128 v57,v30,v26
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v26.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrglw128 v56,v22,v24
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v24.u32), simde_mm_load_si128((simde__m128i*)ctx.v22.u32)));
	// vperm128 v8,v60,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v10,v63,v61,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v60,v59,v4
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v6,v62,v58,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v9,v63,v61,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v3,v62,v58,v4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v5,v57,v56,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v4,v57,v56,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vsubshs v21,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v2,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v1,v10,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v31,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v30,v8,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v29,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v20,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v28,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v18,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v9,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubshs v27,v10,v3
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v26,v8,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v5,v20,v18
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v7,v3,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v10,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v19,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v17,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v16,v29,v28
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vor v8,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v21.u8));
	// vslh v15,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r7,80
	ctx.r7.s64 = 80;
	// vslh v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r6,112
	ctx.r6.s64 = 112;
	// vsubshs v6,v27,v26
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vslh v14,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v4,v19,v17
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vor v5,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v16.u8));
	// vslh v27,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v3,v8
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v19,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v22,v2,v10
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vslh v21,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v20,v30,v7
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v1,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v16,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vslh v3,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v27,v19,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v25,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v2,v22,v24
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v4,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vaddshs v24,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vaddshs v17,v1,v31
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vslh v5,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v16,v3
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v18,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v16,v30,v27
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vslh v15,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v26,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v6,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v20,v2,v5
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v31,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v24,v1
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v29,v16,v1
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v18,v15,v14
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vaddshs v14,v22,v4
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vslh v19,v26,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v21,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v2,v23,v25
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vaddshs v4,v20,v31
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vslh v15,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v30,v17,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v25,v29,v8
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v10,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v12,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vsubshs v9,v4,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v27,v15,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v7,v3,v30
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v8,v25,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vslh v23,v12,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v14,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vslh v16,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v22,v27,v0
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v19,v23,v12
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v12,v18,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v11,v16,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v10,v15,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v9,v14,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v24,v28,v2
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsrah v21,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v8,v19,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v20,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v21,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v7,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v17,r5,r3
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v6,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v5,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v4,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v3,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v1,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v3,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v29,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v2,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v1,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v31,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881512D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881512D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881512D0) {
			switch (rex_dispatch_address) {
				case 0x88151388:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881512D0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88151388: goto loc_88151388;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881512D4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881512D8;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881512DC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x881512E0;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881512f8
	if (!ctx.cr6.eq) goto loc_881512F8;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x88151388
	goto loc_88151388;
loc_881512F8:
	// lwz r10,24688(r11)
	ctx.current_instruction = 0x881512F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24688);
	// lwz r9,712(r10)
	ctx.current_instruction = 0x881512FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 712);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88151310
	if (ctx.cr6.eq) goto loc_88151310;
loc_88151308:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88151388
	goto loc_88151388;
loc_88151310:
	// lwz r9,22036(r11)
	ctx.current_instruction = 0x88151310;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 22036);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88151308
	if (ctx.cr6.eq) goto loc_88151308;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lfd f0,21560(r11)
	ctx.current_instruction = 0x88151324;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 21560);
	// lwz r8,3716(r11)
	ctx.current_instruction = 0x88151328;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// ori r7,r9,45384
	ctx.r7.u64 = ctx.r9.u64 | 45384;
	// stfd f13,80(r1)
	ctx.current_instruction = 0x88151334;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r6,22032(r11)
	ctx.current_instruction = 0x88151338;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 22032);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,3964(r11)
	ctx.current_instruction = 0x88151340;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 3964);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,21932(r11)
	ctx.current_instruction = 0x88151348;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 21932);
	// lwz r31,21864(r11)
	ctx.current_instruction = 0x8815134C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// lwzx r7,r11,r7
	ctx.current_instruction = 0x88151350;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r30,84(r1)
	ctx.current_instruction = 0x88151354;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,96(r1)
	ctx.current_instruction = 0x88151358;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r4,112(r1)
	ctx.current_instruction = 0x8815135C;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// stw r5,108(r1)
	ctx.current_instruction = 0x88151360;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r9,116(r1)
	ctx.current_instruction = 0x88151364;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r7,104(r1)
	ctx.current_instruction = 0x88151368;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r31,120(r1)
	ctx.current_instruction = 0x8815136C;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r30,124(r1)
	ctx.current_instruction = 0x88151370;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r11,100(r1)
	ctx.current_instruction = 0x88151374;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r8,128(r1)
	ctx.current_instruction = 0x88151378;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// lwz r6,192(r10)
	ctx.current_instruction = 0x8815137C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 192);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88151388;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88151388:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8815138C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88151394;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88151398;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88155E78) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88155E78);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88155E78;
	ctx.current_instruction = 0x88155E78;
	uint32_t ea{};
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88155E88:
	// stdu r9,8(r11)
	ctx.current_instruction = 0x88155E88;
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x88155e88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88155E88;
	// stw r4,44(r3)
	ctx.current_instruction = 0x88155E90;
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88156678) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88156678;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88156678) {
			switch (rex_dispatch_address) {
				case 0x88156700:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88156678;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88156700: goto loc_88156700;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8815667C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88156680;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88156684;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8815668C:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x8815668C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88156690;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88156740
	if (ctx.cr6.lt) goto loc_88156740;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x881566ec
	if (ctx.cr6.gt) goto loc_881566EC;
loc_881566A8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881566A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r7,0(r11)
	ctx.current_instruction = 0x881566AC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881566B8;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r6,r10,40
	ctx.xer.ca = ctx.r10.u32 <= 40;
	ctx.r6.u64 = static_cast<uint64_t>(40) - ctx.r10.u64;
	// stw r9,8(r31)
	ctx.current_instruction = 0x881566C0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// sld r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881566D0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// lwz r3,16(r31)
	ctx.current_instruction = 0x881566D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x881566a8
	if (!ctx.cr6.gt) goto loc_881566A8;
	// stw r11,12(r31)
	ctx.current_instruction = 0x881566E0;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x881567ac
	if (!ctx.cr6.lt) goto loc_881567AC;
loc_881566EC:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x881566EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88156704
	if (!ctx.cr6.eq) goto loc_88156704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156188
	ctx.lr = 0x88156700;
	sub_88156188(ctx, base);
loc_88156700:
	// b 0x8815668c
	goto loc_8815668C;
loc_88156704:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88156704;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,-16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -16, ctx.xer);
	// bge cr6,0x881567ac
	if (!ctx.cr6.lt) goto loc_881567AC;
	// lwz r11,20(r31)
	ctx.current_instruction = 0x88156710;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88156724
	if (!ctx.cr6.eq) goto loc_88156724;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r31)
	ctx.current_instruction = 0x88156720;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_88156724:
	// li r11,127
	ctx.r11.s64 = 127;
	// stw r11,8(r31)
	ctx.current_instruction = 0x88156728;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88156730;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88156738;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88156740:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x88156740;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x88156748;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x88156750;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x88156754;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x8815675C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x88156760;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88156768;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x8815676C;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88156774;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	ctx.current_instruction = 0x88156790;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r31)
	ctx.current_instruction = 0x881567A8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_881567AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881567B0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881567B8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8815BAF8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815BAF8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815BAF8) {
			switch (rex_dispatch_address) {
				case 0x8815BB00:
				case 0x8815BB60:
				case 0x8815BBB4:
				case 0x8815BC48:
				case 0x8815BC50:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815BAF8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815BB00: goto loc_8815BB00;
		case 0x8815BB60: goto loc_8815BB60;
		case 0x8815BBB4: goto loc_8815BBB4;
		case 0x8815BC48: goto loc_8815BC48;
		case 0x8815BC50: goto loc_8815BC50;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8815BB00;
	__savegprlr_27(ctx, base);
loc_8815BB00:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8815BB00;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22204(r3)
	ctx.current_instruction = 0x8815BB04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22204);
	// addi r8,r5,15
	ctx.r8.s64 = ctx.r5.s64 + 15;
	// lwz r9,22208(r3)
	ctx.current_instruction = 0x8815BB0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 22208);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r7,22212(r3)
	ctx.current_instruction = 0x8815BB14;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 22212);
	// addi r10,r4,15
	ctx.r10.s64 = ctx.r4.s64 + 15;
	// lwz r6,22216(r3)
	ctx.current_instruction = 0x8815BB1C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 22216);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,15536(r3)
	ctx.current_instruction = 0x8815BB24;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r28,r10,0,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,22188(r3)
	ctx.current_instruction = 0x8815BB30;
	REX_STORE_U32(ctx.r3.u32 + 22188, ctx.r11.u32);
	// rlwinm r27,r8,0,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r9,22192(r3)
	ctx.current_instruction = 0x8815BB38;
	REX_STORE_U32(ctx.r3.u32 + 22192, ctx.r9.u32);
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// stw r7,22196(r3)
	ctx.current_instruction = 0x8815BB40;
	REX_STORE_U32(ctx.r3.u32 + 22196, ctx.r7.u32);
	// stw r6,22200(r3)
	ctx.current_instruction = 0x8815BB44;
	REX_STORE_U32(ctx.r3.u32 + 22200, ctx.r6.u32);
	// bne cr6,0x8815bb58
	if (!ctx.cr6.eq) goto loc_8815BB58;
	// lwz r11,3408(r3)
	ctx.current_instruction = 0x8815BB4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3408);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8815bb80
	if (ctx.cr6.eq) goto loc_8815BB80;
loc_8815BB58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814d328
	ctx.lr = 0x8815BB60;
	sub_8814D328(ctx, base);
loc_8815BB60:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815bb78
	if (!ctx.cr6.eq) goto loc_8815BB78;
	// lwz r11,156(r31)
	ctx.current_instruction = 0x8815BB68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,160(r31)
	ctx.current_instruction = 0x8815BB6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// stw r11,22084(r31)
	ctx.current_instruction = 0x8815BB70;
	REX_STORE_U32(ctx.r31.u32 + 22084, ctx.r11.u32);
	// stw r10,22088(r31)
	ctx.current_instruction = 0x8815BB74;
	REX_STORE_U32(ctx.r31.u32 + 22088, ctx.r10.u32);
loc_8815BB78:
	// stw r30,156(r31)
	ctx.current_instruction = 0x8815BB78;
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r29,160(r31)
	ctx.current_instruction = 0x8815BB7C;
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
loc_8815BB80:
	// lwz r11,156(r31)
	ctx.current_instruction = 0x8815BB80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8815bb9c
	if (!ctx.cr6.eq) goto loc_8815BB9C;
	// lwz r11,160(r31)
	ctx.current_instruction = 0x8815BB8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8815bba0
	if (ctx.cr6.eq) goto loc_8815BBA0;
loc_8815BB9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8815BBA0:
	// stw r11,152(r31)
	ctx.current_instruction = 0x8815BBA0;
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,180(r31)
	ctx.current_instruction = 0x8815BBA8;
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r28.u32);
	// stw r27,188(r31)
	ctx.current_instruction = 0x8815BBAC;
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r27.u32);
	// bl 0x8814d328
	ctx.lr = 0x8815BBB4;
	sub_8814D328(ctx, base);
loc_8815BBB4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8815bbcc
	if (ctx.cr6.eq) goto loc_8815BBCC;
	// lwz r11,180(r31)
	ctx.current_instruction = 0x8815BBBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r10,188(r31)
	ctx.current_instruction = 0x8815BBC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// stw r11,22084(r31)
	ctx.current_instruction = 0x8815BBC4;
	REX_STORE_U32(ctx.r31.u32 + 22084, ctx.r11.u32);
	// stw r10,22088(r31)
	ctx.current_instruction = 0x8815BBC8;
	REX_STORE_U32(ctx.r31.u32 + 22088, ctx.r10.u32);
loc_8815BBCC:
	// li r10,-63
	ctx.r10.s64 = -63;
	// lwz r11,3980(r31)
	ctx.current_instruction = 0x8815BBD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3980);
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r28,22204(r31)
	ctx.current_instruction = 0x8815BBD8;
	REX_STORE_U32(ctx.r31.u32 + 22204, ctx.r28.u32);
	// stw r10,240(r31)
	ctx.current_instruction = 0x8815BBDC;
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,188(r31)
	ctx.current_instruction = 0x8815BBE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// stw r9,244(r31)
	ctx.current_instruction = 0x8815BBE8;
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// stw r27,22208(r31)
	ctx.current_instruction = 0x8815BBEC;
	REX_STORE_U32(ctx.r31.u32 + 22208, ctx.r27.u32);
	// beq cr6,0x8815bc00
	if (ctx.cr6.eq) goto loc_8815BC00;
	// lwz r9,180(r31)
	ctx.current_instruction = 0x8815BBF4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// b 0x8815bc0c
	goto loc_8815BC0C;
loc_8815BC00:
	// lwz r11,180(r31)
	ctx.current_instruction = 0x8815BC00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
loc_8815BC0C:
	// stw r11,22212(r31)
	ctx.current_instruction = 0x8815BC0C;
	REX_STORE_U32(ctx.r31.u32 + 22212, ctx.r11.u32);
	// stw r11,192(r31)
	ctx.current_instruction = 0x8815BC10;
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x8815BC14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// stw r10,22216(r31)
	ctx.current_instruction = 0x8815BC18;
	REX_STORE_U32(ctx.r31.u32 + 22216, ctx.r10.u32);
	// stw r10,200(r31)
	ctx.current_instruction = 0x8815BC1C;
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x8815bc40
	if (!ctx.cr6.lt) goto loc_8815BC40;
	// lwz r11,22212(r31)
	ctx.current_instruction = 0x8815BC28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22212);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r28,22188(r31)
	ctx.current_instruction = 0x8815BC30;
	REX_STORE_U32(ctx.r31.u32 + 22188, ctx.r28.u32);
	// stw r27,22192(r31)
	ctx.current_instruction = 0x8815BC34;
	REX_STORE_U32(ctx.r31.u32 + 22192, ctx.r27.u32);
	// stw r10,22200(r31)
	ctx.current_instruction = 0x8815BC38;
	REX_STORE_U32(ctx.r31.u32 + 22200, ctx.r10.u32);
	// stw r11,22196(r31)
	ctx.current_instruction = 0x8815BC3C;
	REX_STORE_U32(ctx.r31.u32 + 22196, ctx.r11.u32);
loc_8815BC40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8815af68
	ctx.lr = 0x8815BC48;
	sub_8815AF68(ctx, base);
loc_8815BC48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88183cf0
	ctx.lr = 0x8815BC50;
	sub_88183CF0(ctx, base);
loc_8815BC50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88160B60) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88160B60;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88160B60) {
			switch (rex_dispatch_address) {
				case 0x88160B68:
				case 0x88160C0C:
				case 0x88160C54:
				case 0x88160D14:
				case 0x88160D5C:
				case 0x88160E20:
				case 0x88160E68:
				case 0x88160F18:
				case 0x88160F60:
				case 0x8816101C:
				case 0x88161064:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88160B60;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88160B68: goto loc_88160B68;
		case 0x88160C0C: goto loc_88160C0C;
		case 0x88160C54: goto loc_88160C54;
		case 0x88160D14: goto loc_88160D14;
		case 0x88160D5C: goto loc_88160D5C;
		case 0x88160E20: goto loc_88160E20;
		case 0x88160E68: goto loc_88160E68;
		case 0x88160F18: goto loc_88160F18;
		case 0x88160F60: goto loc_88160F60;
		case 0x8816101C: goto loc_8816101C;
		case 0x88161064: goto loc_88161064;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x88160B68;
	__savegprlr_24(ctx, base);
loc_88160B68:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88160B68;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,272(r3)
	ctx.current_instruction = 0x88160B6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r10,4000(r3)
	ctx.current_instruction = 0x88160B74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4000);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x88160f94
	if (ctx.cr6.lt) goto loc_88160F94;
	// beq cr6,0x88160da8
	if (ctx.cr6.eq) goto loc_88160DA8;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x881610a0
	if (!ctx.cr6.lt) goto loc_881610A0;
	// lwz r10,136(r3)
	ctx.current_instruction = 0x88160B90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x881610a0
	if (!ctx.cr6.gt) goto loc_881610A0;
loc_88160BA4:
	// lwz r31,84(r25)
	ctx.current_instruction = 0x88160BA4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88160BB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88160c1c
	if (!ctx.cr6.lt) goto loc_88160C1C;
loc_88160BC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88160c1c
	if (ctx.cr6.eq) goto loc_88160C1C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88160BD0;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x88160BF4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88160BFC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88160c0c
	if (!ctx.cr0.lt) goto loc_88160C0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88160C0C;
	sub_88156678(ctx, base);
loc_88160C0C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88160C0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88160bc4
	if (ctx.cr6.gt) goto loc_88160BC4;
loc_88160C1C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88160C20;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x88160C38;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88160C44;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88160c54
	if (!ctx.cr0.lt) goto loc_88160C54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88160C54;
	sub_88156678(ctx, base);
loc_88160C54:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88160ca0
	if (ctx.cr6.eq) goto loc_88160CA0;
	// lwz r10,140(r25)
	ctx.current_instruction = 0x88160C5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 140);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x88160d8c
	if (!ctx.cr6.gt) goto loc_88160D8C;
loc_88160C6C:
	// lwz r10,0(r28)
	ctx.current_instruction = 0x88160C6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,0(r28)
	ctx.current_instruction = 0x88160C78;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// lwz r8,140(r25)
	ctx.current_instruction = 0x88160C7C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 140);
	// lwz r10,136(r25)
	ctx.current_instruction = 0x88160C80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// blt cr6,0x88160c6c
	if (ctx.cr6.lt) goto loc_88160C6C;
	// b 0x88160d8c
	goto loc_88160D8C;
loc_88160CA0:
	// lwz r11,140(r25)
	ctx.current_instruction = 0x88160CA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 140);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x88160d8c
	if (!ctx.cr6.gt) goto loc_88160D8C;
loc_88160CB0:
	// lwz r31,84(r25)
	ctx.current_instruction = 0x88160CB0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88160CBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88160d24
	if (!ctx.cr6.lt) goto loc_88160D24;
loc_88160CCC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88160d24
	if (ctx.cr6.eq) goto loc_88160D24;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88160CD8;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x88160CFC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88160D04;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88160d14
	if (!ctx.cr0.lt) goto loc_88160D14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88160D14;
	sub_88156678(ctx, base);
loc_88160D14:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88160D14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88160ccc
	if (ctx.cr6.gt) goto loc_88160CCC;
loc_88160D24:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88160D28;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x88160D40;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88160D4C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88160d5c
	if (!ctx.cr0.lt) goto loc_88160D5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88160D5C;
	sub_88156678(ctx, base);
loc_88160D5C:
	// lwz r11,0(r28)
	ctx.current_instruction = 0x88160D5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// rlwimi r11,r30,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r28)
	ctx.current_instruction = 0x88160D68;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r9,140(r25)
	ctx.current_instruction = 0x88160D6C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 140);
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// lwz r11,136(r25)
	ctx.current_instruction = 0x88160D74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// blt cr6,0x88160cb0
	if (ctx.cr6.lt) goto loc_88160CB0;
loc_88160D8C:
	// lwz r11,136(r25)
	ctx.current_instruction = 0x88160D8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,24
	ctx.r26.s64 = ctx.r26.s64 + 24;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88160ba4
	if (ctx.cr6.lt) goto loc_88160BA4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88160DA8:
	// lwz r11,140(r25)
	ctx.current_instruction = 0x88160DA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 140);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x881610a0
	if (!ctx.cr6.gt) goto loc_881610A0;
	// addi r27,r24,-24
	ctx.r27.s64 = ctx.r24.s64 + -24;
loc_88160DBC:
	// lwz r31,84(r25)
	ctx.current_instruction = 0x88160DBC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88160DC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88160e30
	if (!ctx.cr6.lt) goto loc_88160E30;
loc_88160DD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88160e30
	if (ctx.cr6.eq) goto loc_88160E30;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88160DE4;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x88160E08;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88160E10;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88160e20
	if (!ctx.cr0.lt) goto loc_88160E20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88160E20;
	sub_88156678(ctx, base);
loc_88160E20:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88160E20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88160dd8
	if (ctx.cr6.gt) goto loc_88160DD8;
loc_88160E30:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88160E34;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x88160E4C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88160E58;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88160e68
	if (!ctx.cr0.lt) goto loc_88160E68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88160E68;
	sub_88156678(ctx, base);
loc_88160E68:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88160ea4
	if (ctx.cr6.eq) goto loc_88160EA4;
	// lwz r10,136(r25)
	ctx.current_instruction = 0x88160E70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x88160f7c
	if (!ctx.cr6.gt) goto loc_88160F7C;
loc_88160E80:
	// lwz r10,24(r27)
	ctx.current_instruction = 0x88160E80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,24(r27)
	ctx.current_instruction = 0x88160E8C;
	REX_STORE_U32(ctx.r27.u32 + 24, ctx.r9.u32);
	// addi r27,r27,24
	ctx.r27.s64 = ctx.r27.s64 + 24;
	// lwz r8,136(r25)
	ctx.current_instruction = 0x88160E94;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x88160e80
	if (ctx.cr6.lt) goto loc_88160E80;
	// b 0x88160f7c
	goto loc_88160F7C;
loc_88160EA4:
	// lwz r11,136(r25)
	ctx.current_instruction = 0x88160EA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x88160f7c
	if (!ctx.cr6.gt) goto loc_88160F7C;
loc_88160EB4:
	// lwz r31,84(r25)
	ctx.current_instruction = 0x88160EB4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88160EC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88160f28
	if (!ctx.cr6.lt) goto loc_88160F28;
loc_88160ED0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88160f28
	if (ctx.cr6.eq) goto loc_88160F28;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88160EDC;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x88160F00;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88160F08;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88160f18
	if (!ctx.cr0.lt) goto loc_88160F18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88160F18;
	sub_88156678(ctx, base);
loc_88160F18:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88160F18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88160ed0
	if (ctx.cr6.gt) goto loc_88160ED0;
loc_88160F28:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88160F2C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x88160F44;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88160F50;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88160f60
	if (!ctx.cr0.lt) goto loc_88160F60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88160F60;
	sub_88156678(ctx, base);
loc_88160F60:
	// lwz r11,24(r27)
	ctx.current_instruction = 0x88160F60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwimi r11,r30,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwu r11,24(r27)
	ctx.current_instruction = 0x88160F6C;
	ea = 24 + ctx.r27.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r27.u32 = ea;
	// lwz r10,136(r25)
	ctx.current_instruction = 0x88160F70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88160eb4
	if (ctx.cr6.lt) goto loc_88160EB4;
loc_88160F7C:
	// lwz r11,140(r25)
	ctx.current_instruction = 0x88160F7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 140);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88160dbc
	if (ctx.cr6.lt) goto loc_88160DBC;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88160F94:
	// lwz r11,140(r25)
	ctx.current_instruction = 0x88160F94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 140);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x881610a0
	if (!ctx.cr6.gt) goto loc_881610A0;
loc_88160FA4:
	// lwz r11,136(r25)
	ctx.current_instruction = 0x88160FA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88161080
	if (ctx.cr6.eq) goto loc_88161080;
	// addi r27,r24,-24
	ctx.r27.s64 = ctx.r24.s64 + -24;
loc_88160FB8:
	// lwz r31,84(r25)
	ctx.current_instruction = 0x88160FB8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88160FC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816102c
	if (!ctx.cr6.lt) goto loc_8816102C;
loc_88160FD4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816102c
	if (ctx.cr6.eq) goto loc_8816102C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88160FE0;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x88161004;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816100C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816101c
	if (!ctx.cr0.lt) goto loc_8816101C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816101C;
	sub_88156678(ctx, base);
loc_8816101C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816101C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88160fd4
	if (ctx.cr6.gt) goto loc_88160FD4;
loc_8816102C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88161030;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x88161048;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88161054;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88161064
	if (!ctx.cr0.lt) goto loc_88161064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88161064;
	sub_88156678(ctx, base);
loc_88161064:
	// lwz r11,24(r27)
	ctx.current_instruction = 0x88161064;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwimi r11,r30,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwu r11,24(r27)
	ctx.current_instruction = 0x88161070;
	ea = 24 + ctx.r27.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r27.u32 = ea;
	// lwz r11,136(r25)
	ctx.current_instruction = 0x88161074;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88160fb8
	if (ctx.cr6.lt) goto loc_88160FB8;
loc_88161080:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,140(r25)
	ctx.current_instruction = 0x88161084;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 140);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// blt cr6,0x88160fa4
	if (ctx.cr6.lt) goto loc_88160FA4;
loc_881610A0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881774B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881774B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881774B0) {
			switch (rex_dispatch_address) {
				case 0x881774B8:
				case 0x88177560:
				case 0x881775A8:
				case 0x88177618:
				case 0x88177660:
				case 0x881776BC:
				case 0x881776FC:
				case 0x88177730:
				case 0x881777B8:
				case 0x88177800:
				case 0x88177864:
				case 0x881778AC:
				case 0x88177954:
				case 0x8817799C:
				case 0x88177A1C:
				case 0x88177A64:
				case 0x88177AC8:
				case 0x88177B10:
				case 0x88177BB8:
				case 0x88177C00:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881774B0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881774B8: goto loc_881774B8;
		case 0x88177560: goto loc_88177560;
		case 0x881775A8: goto loc_881775A8;
		case 0x88177618: goto loc_88177618;
		case 0x88177660: goto loc_88177660;
		case 0x881776BC: goto loc_881776BC;
		case 0x881776FC: goto loc_881776FC;
		case 0x88177730: goto loc_88177730;
		case 0x881777B8: goto loc_881777B8;
		case 0x88177800: goto loc_88177800;
		case 0x88177864: goto loc_88177864;
		case 0x881778AC: goto loc_881778AC;
		case 0x88177954: goto loc_88177954;
		case 0x8817799C: goto loc_8817799C;
		case 0x88177A1C: goto loc_88177A1C;
		case 0x88177A64: goto loc_88177A64;
		case 0x88177AC8: goto loc_88177AC8;
		case 0x88177B10: goto loc_88177B10;
		case 0x88177BB8: goto loc_88177BB8;
		case 0x88177C00: goto loc_88177C00;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x881774B8;
	__savegprlr_21(ctx, base);
loc_881774B8:
	// stfd f30,-112(r1)
	ctx.current_instruction = 0x881774B8;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	ctx.current_instruction = 0x881774BC;
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x881774C0;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881774fc
	if (!ctx.cr6.eq) goto loc_881774FC;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-112(r1)
	ctx.current_instruction = 0x881774F0;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.current_instruction = 0x881774F4;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_881774FC:
	// lwz r31,84(r24)
	ctx.current_instruction = 0x881774FC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// li r30,32
	ctx.r30.s64 = 32;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88177508;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x88177570
	if (!ctx.cr6.lt) goto loc_88177570;
loc_88177518:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88177570
	if (ctx.cr6.eq) goto loc_88177570;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88177524;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x88177548;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88177550;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88177560
	if (!ctx.cr0.lt) goto loc_88177560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88177560;
	sub_88156678(ctx, base);
loc_88177560:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88177560;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88177518
	if (ctx.cr6.gt) goto loc_88177518;
loc_88177570:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88177574;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x8817758C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88177598;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881775a8
	if (!ctx.cr0.lt) goto loc_881775A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881775A8;
	sub_88156678(ctx, base);
loc_881775A8:
	// stw r30,0(r27)
	ctx.current_instruction = 0x881775A8;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88177b54
	if (ctx.cr6.eq) goto loc_88177B54;
	// lwz r31,84(r24)
	ctx.current_instruction = 0x881775B4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881775C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x88177628
	if (!ctx.cr6.lt) goto loc_88177628;
loc_881775D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88177628
	if (ctx.cr6.eq) goto loc_88177628;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881775DC;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x88177600;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88177608;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88177618
	if (!ctx.cr0.lt) goto loc_88177618;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88177618;
	sub_88156678(ctx, base);
loc_88177618:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88177618;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881775d0
	if (ctx.cr6.gt) goto loc_881775D0;
loc_88177628:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8817762C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x88177644;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88177650;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88177660
	if (!ctx.cr0.lt) goto loc_88177660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88177660;
	sub_88156678(ctx, base);
loc_88177660:
	// stw r30,0(r25)
	ctx.current_instruction = 0x88177660;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r30,14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 14, ctx.xer);
	// ble cr6,0x88177680
	if (!ctx.cr6.gt) goto loc_88177680;
loc_8817766C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-112(r1)
	ctx.current_instruction = 0x88177674;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.current_instruction = 0x88177678;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_88177680:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// cmplwi cr6,r30,7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 7, ctx.xer);
	// lfs f30,12188(r11)
	ctx.current_instruction = 0x8817768C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12188);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,18136(r10)
	ctx.current_instruction = 0x88177690;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 18136);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x881776d0
	if (!ctx.cr6.eq) goto loc_881776D0;
	// addi r10,r28,24
	ctx.r10.s64 = ctx.r28.s64 + 24;
	// addi r9,r28,20
	ctx.r9.s64 = ctx.r28.s64 + 20;
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// addi r7,r28,12
	ctx.r7.s64 = ctx.r28.s64 + 12;
	// addi r6,r28,8
	ctx.r6.s64 = ctx.r28.s64 + 8;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8814d3f0
	ctx.lr = 0x881776BC;
	sub_8814D3F0(ctx, base);
loc_881776BC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88177c10
	if (!ctx.cr6.eq) goto loc_88177C10;
	// lwz r11,15428(r24)
	ctx.current_instruction = 0x881776C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 15428);
	// stw r11,15464(r24)
	ctx.current_instruction = 0x881776C8;
	REX_STORE_U32(ctx.r24.u32 + 15464, ctx.r11.u32);
	// b 0x881778f0
	goto loc_881778F0;
loc_881776D0:
	// cmplwi cr6,r30,14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 14, ctx.xer);
	// bne cr6,0x88177744
	if (!ctx.cr6.eq) goto loc_88177744;
	// addi r10,r28,24
	ctx.r10.s64 = ctx.r28.s64 + 24;
	// addi r9,r28,20
	ctx.r9.s64 = ctx.r28.s64 + 20;
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// addi r7,r28,12
	ctx.r7.s64 = ctx.r28.s64 + 12;
	// addi r6,r28,8
	ctx.r6.s64 = ctx.r28.s64 + 8;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8814d3f0
	ctx.lr = 0x881776FC;
	sub_8814D3F0(ctx, base);
loc_881776FC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88177c10
	if (!ctx.cr6.eq) goto loc_88177C10;
	// lwz r11,15428(r24)
	ctx.current_instruction = 0x88177704;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 15428);
	// addi r10,r28,52
	ctx.r10.s64 = ctx.r28.s64 + 52;
	// addi r9,r28,48
	ctx.r9.s64 = ctx.r28.s64 + 48;
	// addi r8,r28,44
	ctx.r8.s64 = ctx.r28.s64 + 44;
	// addi r7,r28,40
	ctx.r7.s64 = ctx.r28.s64 + 40;
	// addi r6,r28,36
	ctx.r6.s64 = ctx.r28.s64 + 36;
	// stw r11,15464(r24)
	ctx.current_instruction = 0x8817771C;
	REX_STORE_U32(ctx.r24.u32 + 15464, ctx.r11.u32);
	// addi r5,r28,32
	ctx.r5.s64 = ctx.r28.s64 + 32;
	// addi r4,r28,28
	ctx.r4.s64 = ctx.r28.s64 + 28;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8814d3f0
	ctx.lr = 0x88177730;
	sub_8814D3F0(ctx, base);
loc_88177730:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88177c10
	if (!ctx.cr6.eq) goto loc_88177C10;
	// lwz r11,15428(r24)
	ctx.current_instruction = 0x88177738;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 15428);
	// stw r11,15468(r24)
	ctx.current_instruction = 0x8817773C;
	REX_STORE_U32(ctx.r24.u32 + 15468, ctx.r11.u32);
	// b 0x881778f0
	goto loc_881778F0;
loc_88177744:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881778f0
	if (ctx.cr6.eq) goto loc_881778F0;
	// addi r26,r28,-4
	ctx.r26.s64 = ctx.r28.s64 + -4;
loc_88177754:
	// lwz r31,84(r24)
	ctx.current_instruction = 0x88177754;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88177760;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x881777c8
	if (!ctx.cr6.lt) goto loc_881777C8;
loc_88177770:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881777c8
	if (ctx.cr6.eq) goto loc_881777C8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8817777C;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x881777A0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881777A8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881777b8
	if (!ctx.cr0.lt) goto loc_881777B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881777B8;
	sub_88156678(ctx, base);
loc_881777B8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881777B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88177770
	if (ctx.cr6.gt) goto loc_88177770;
loc_881777C8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881777CC;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x881777E4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881777F0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88177800
	if (!ctx.cr0.lt) goto loc_88177800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88177800;
	sub_88156678(ctx, base);
loc_88177800:
	// lwz r31,84(r24)
	ctx.current_instruction = 0x88177800;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8817780C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x88177874
	if (!ctx.cr6.lt) goto loc_88177874;
loc_8817781C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88177874
	if (ctx.cr6.eq) goto loc_88177874;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88177828;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x8817784C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88177854;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88177864
	if (!ctx.cr0.lt) goto loc_88177864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88177864;
	sub_88156678(ctx, base);
loc_88177864:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88177864;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8817781c
	if (ctx.cr6.gt) goto loc_8817781C;
loc_88177874:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88177878;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x88177890;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8817789C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881778ac
	if (!ctx.cr0.lt) goto loc_881778AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881778AC;
	sub_88156678(ctx, base);
loc_881778AC:
	// lwz r11,84(r24)
	ctx.current_instruction = 0x881778AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x881778B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8817766c
	if (!ctx.cr6.eq) goto loc_8817766C;
	// rlwinm r11,r28,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 15) & 0xFFFF8000;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	ctx.current_instruction = 0x881778CC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x881778D0;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmsubs f11,f12,f31,f30
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f31.f64, -ctx.f30.f64)));
	// stfsu f11,4(r26)
	ctx.current_instruction = 0x881778E0;
	ea = 4 + ctx.r26.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r26.u32 = ea;
	// lwz r9,0(r25)
	ctx.current_instruction = 0x881778E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88177754
	if (ctx.cr6.lt) goto loc_88177754;
loc_881778F0:
	// lwz r31,84(r24)
	ctx.current_instruction = 0x881778F0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// li r30,16
	ctx.r30.s64 = 16;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881778FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x88177964
	if (!ctx.cr6.lt) goto loc_88177964;
loc_8817790C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88177964
	if (ctx.cr6.eq) goto loc_88177964;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88177918;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x8817793C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88177944;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88177954
	if (!ctx.cr0.lt) goto loc_88177954;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88177954;
	sub_88156678(ctx, base);
loc_88177954:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88177954;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8817790c
	if (ctx.cr6.gt) goto loc_8817790C;
loc_88177964:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88177968;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x88177980;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8817798C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8817799c
	if (!ctx.cr0.lt) goto loc_8817799C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8817799C;
	sub_88156678(ctx, base);
loc_8817799C:
	// stw r30,0(r22)
	ctx.current_instruction = 0x8817799C;
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r30,100
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 100, ctx.xer);
	// bgt cr6,0x8817766c
	if (ctx.cr6.gt) goto loc_8817766C;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88177b54
	if (ctx.cr6.eq) goto loc_88177B54;
	// addi r26,r23,-4
	ctx.r26.s64 = ctx.r23.s64 + -4;
loc_881779B8:
	// lwz r31,84(r24)
	ctx.current_instruction = 0x881779B8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881779C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x88177a2c
	if (!ctx.cr6.lt) goto loc_88177A2C;
loc_881779D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88177a2c
	if (ctx.cr6.eq) goto loc_88177A2C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881779E0;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x88177A04;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88177A0C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88177a1c
	if (!ctx.cr0.lt) goto loc_88177A1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88177A1C;
	sub_88156678(ctx, base);
loc_88177A1C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88177A1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881779d4
	if (ctx.cr6.gt) goto loc_881779D4;
loc_88177A2C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88177A30;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x88177A48;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88177A54;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88177a64
	if (!ctx.cr0.lt) goto loc_88177A64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88177A64;
	sub_88156678(ctx, base);
loc_88177A64:
	// lwz r31,84(r24)
	ctx.current_instruction = 0x88177A64;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88177A70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x88177ad8
	if (!ctx.cr6.lt) goto loc_88177AD8;
loc_88177A80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88177ad8
	if (ctx.cr6.eq) goto loc_88177AD8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88177A8C;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x88177AB0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88177AB8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88177ac8
	if (!ctx.cr0.lt) goto loc_88177AC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88177AC8;
	sub_88156678(ctx, base);
loc_88177AC8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88177AC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88177a80
	if (ctx.cr6.gt) goto loc_88177A80;
loc_88177AD8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88177ADC;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x88177AF4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88177B00;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88177b10
	if (!ctx.cr0.lt) goto loc_88177B10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88177B10;
	sub_88156678(ctx, base);
loc_88177B10:
	// lwz r11,84(r24)
	ctx.current_instruction = 0x88177B10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88177B14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8817766c
	if (!ctx.cr6.eq) goto loc_8817766C;
	// rlwinm r11,r28,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 15) & 0xFFFF8000;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	ctx.current_instruction = 0x88177B30;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x88177B34;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmsubs f11,f12,f31,f30
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f31.f64, -ctx.f30.f64)));
	// stfsu f11,4(r26)
	ctx.current_instruction = 0x88177B44;
	ea = 4 + ctx.r26.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r26.u32 = ea;
	// lwz r9,0(r22)
	ctx.current_instruction = 0x88177B48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x881779b8
	if (ctx.cr6.lt) goto loc_881779B8;
loc_88177B54:
	// lwz r31,84(r24)
	ctx.current_instruction = 0x88177B54;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88177B60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88177bc8
	if (!ctx.cr6.lt) goto loc_88177BC8;
loc_88177B70:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88177bc8
	if (ctx.cr6.eq) goto loc_88177BC8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88177B7C;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x88177BA0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88177BA8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88177bb8
	if (!ctx.cr0.lt) goto loc_88177BB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88177BB8;
	sub_88156678(ctx, base);
loc_88177BB8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88177BB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88177b70
	if (ctx.cr6.gt) goto loc_88177B70;
loc_88177BC8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88177BCC;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x88177BE4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88177BF0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88177c00
	if (!ctx.cr0.lt) goto loc_88177C00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88177C00;
	sub_88156678(ctx, base);
loc_88177C00:
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfe r10,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,0(r21)
	ctx.current_instruction = 0x88177C0C;
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
loc_88177C10:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-112(r1)
	ctx.current_instruction = 0x88177C14;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.current_instruction = 0x88177C18;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88185458) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88185458);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88185458;
	ctx.current_instruction = 0x88185458;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x88185458;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.current_instruction = 0x8818545C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88186770) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88186770;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88186770) {
			switch (rex_dispatch_address) {
				case 0x88186778:
				case 0x881867D4:
				case 0x88186838:
				case 0x88186880:
				case 0x881868C0:
				case 0x88186904:
				case 0x8818694C:
				case 0x8818697C:
				case 0x881869B8:
				case 0x88186A14:
				case 0x88186A2C:
				case 0x88186A3C:
				case 0x88186A80:
				case 0x88186ACC:
				case 0x88186AFC:
				case 0x88186B38:
				case 0x88186B94:
				case 0x88186BD0:
				case 0x88186C10:
				case 0x88186C80:
				case 0x88186CBC:
				case 0x88186EB8:
				case 0x88186F44:
				case 0x88186F5C:
				case 0x881870EC:
				case 0x88187178:
				case 0x88187190:
				case 0x881872FC:
				case 0x88187388:
				case 0x881873A0:
				case 0x88187498:
				case 0x88187524:
				case 0x8818753C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88186770;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88186778: goto loc_88186778;
		case 0x881867D4: goto loc_881867D4;
		case 0x88186838: goto loc_88186838;
		case 0x88186880: goto loc_88186880;
		case 0x881868C0: goto loc_881868C0;
		case 0x88186904: goto loc_88186904;
		case 0x8818694C: goto loc_8818694C;
		case 0x8818697C: goto loc_8818697C;
		case 0x881869B8: goto loc_881869B8;
		case 0x88186A14: goto loc_88186A14;
		case 0x88186A2C: goto loc_88186A2C;
		case 0x88186A3C: goto loc_88186A3C;
		case 0x88186A80: goto loc_88186A80;
		case 0x88186ACC: goto loc_88186ACC;
		case 0x88186AFC: goto loc_88186AFC;
		case 0x88186B38: goto loc_88186B38;
		case 0x88186B94: goto loc_88186B94;
		case 0x88186BD0: goto loc_88186BD0;
		case 0x88186C10: goto loc_88186C10;
		case 0x88186C80: goto loc_88186C80;
		case 0x88186CBC: goto loc_88186CBC;
		case 0x88186EB8: goto loc_88186EB8;
		case 0x88186F44: goto loc_88186F44;
		case 0x88186F5C: goto loc_88186F5C;
		case 0x881870EC: goto loc_881870EC;
		case 0x88187178: goto loc_88187178;
		case 0x88187190: goto loc_88187190;
		case 0x881872FC: goto loc_881872FC;
		case 0x88187388: goto loc_88187388;
		case 0x881873A0: goto loc_881873A0;
		case 0x88187498: goto loc_88187498;
		case 0x88187524: goto loc_88187524;
		case 0x8818753C: goto loc_8818753C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x88186778;
	__savegprlr_19(ctx, base);
loc_88186778:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x88186778;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.current_instruction = 0x88186780;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// lwz r11,136(r25)
	ctx.current_instruction = 0x8818678C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// lwz r10,140(r25)
	ctx.current_instruction = 0x88186790;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 140);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r9,0(r3)
	ctx.current_instruction = 0x88186798;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r8,8(r3)
	ctx.current_instruction = 0x8818679C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r26,r11,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r21,272(r25)
	ctx.current_instruction = 0x881867A8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r25.u32 + 272);
	// rlwinm r22,r10,31,1,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r30,22344(r25)
	ctx.current_instruction = 0x881867B0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r25.u32 + 22344);
	// rldicr r7,r9,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r24,r22,r26
	ctx.r24.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r26.s32);
	// std r7,0(r3)
	ctx.current_instruction = 0x881867C0;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881867C4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// rldicl r20,r9,1,63
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0x1;
	// bge 0x881867d4
	if (!ctx.cr0.lt) goto loc_881867D4;
	// bl 0x88156678
	ctx.lr = 0x881867D4;
	sub_88156678(ctx, base);
loc_881867D4:
	// lwz r31,84(r25)
	ctx.current_instruction = 0x881867D4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// li r29,2
	ctx.r29.s64 = 2;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881867E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x88186848
	if (!ctx.cr6.lt) goto loc_88186848;
loc_881867F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88186848
	if (ctx.cr6.eq) goto loc_88186848;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881867FC;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r29,r11,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r29.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x88186820;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88186828;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88186838
	if (!ctx.cr0.lt) goto loc_88186838;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88186838;
	sub_88156678(ctx, base);
loc_88186838:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88186838;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881867f0
	if (ctx.cr6.gt) goto loc_881867F0;
loc_88186848:
	// subfic r11,r29,64
	ctx.xer.ca = ctx.r29.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r29.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818684C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r29,32
	ctx.r8.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r29,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x88186864;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88186870;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88186880
	if (!ctx.cr0.lt) goto loc_88186880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88186880;
	sub_88156678(ctx, base);
loc_88186880:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// beq cr6,0x88186b6c
	if (ctx.cr6.eq) goto loc_88186B6C;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// beq cr6,0x88186a4c
	if (ctx.cr6.eq) goto loc_88186A4C;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x88186a30
	if (ctx.cr6.eq) goto loc_88186A30;
	// lwz r3,84(r25)
	ctx.current_instruction = 0x88186898;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x8818689C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881868A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x881868B0;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881868B4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881868c0
	if (!ctx.cr0.lt) goto loc_881868C0;
	// bl 0x88156678
	ctx.lr = 0x881868C0;
	sub_88156678(ctx, base);
loc_881868C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881869ec
	if (ctx.cr6.eq) goto loc_881869EC;
	// clrlwi r31,r24,31
	ctx.r31.u64 = ctx.r24.u32 & 0x1;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// beq cr6,0x8818690c
	if (ctx.cr6.eq) goto loc_8818690C;
	// lwz r3,84(r25)
	ctx.current_instruction = 0x881868DC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881868E0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881868E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r29,r10,1,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x881868F4;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881868F8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88186904
	if (!ctx.cr0.lt) goto loc_88186904;
	// bl 0x88156678
	ctx.lr = 0x88186904;
	sub_88156678(ctx, base);
loc_88186904:
	// stb r29,0(r30)
	ctx.current_instruction = 0x88186904;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8818690C:
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x88186cfc
	if (!ctx.cr6.lt) goto loc_88186CFC;
	// subf r11,r31,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_88186924:
	// lwz r3,84(r25)
	ctx.current_instruction = 0x88186924;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88186928;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x8818692C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x8818693C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88186940;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8818694c
	if (!ctx.cr0.lt) goto loc_8818694C;
	// bl 0x88156678
	ctx.lr = 0x8818694C;
	sub_88156678(ctx, base);
loc_8818694C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881869d4
	if (ctx.cr6.eq) goto loc_881869D4;
	// lwz r3,84(r25)
	ctx.current_instruction = 0x88186954;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88186958;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x8818695C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x8818696C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88186970;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8818697c
	if (!ctx.cr0.lt) goto loc_8818697C;
	// bl 0x88156678
	ctx.lr = 0x8818697C;
	sub_88156678(ctx, base);
loc_8818697C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88186990
	if (ctx.cr6.eq) goto loc_88186990;
	// stb r28,0(r30)
	ctx.current_instruction = 0x88186984;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// stbu r28,1(r30)
	ctx.current_instruction = 0x88186988;
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r28.u8);
	ctx.r30.u32 = ea;
	// b 0x881869dc
	goto loc_881869DC;
loc_88186990:
	// lwz r3,84(r25)
	ctx.current_instruction = 0x88186990;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88186994;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88186998;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x881869A8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881869AC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881869b8
	if (!ctx.cr0.lt) goto loc_881869B8;
	// bl 0x88156678
	ctx.lr = 0x881869B8;
	sub_88156678(ctx, base);
loc_881869B8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881869cc
	if (ctx.cr6.eq) goto loc_881869CC;
	// stb r19,0(r30)
	ctx.current_instruction = 0x881869C0;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r19.u8);
	// stbu r28,1(r30)
	ctx.current_instruction = 0x881869C4;
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r28.u8);
	ctx.r30.u32 = ea;
	// b 0x881869dc
	goto loc_881869DC;
loc_881869CC:
	// stb r28,0(r30)
	ctx.current_instruction = 0x881869CC;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// b 0x881869d8
	goto loc_881869D8;
loc_881869D4:
	// stb r19,0(r30)
	ctx.current_instruction = 0x881869D4;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r19.u8);
loc_881869D8:
	// stbu r19,1(r30)
	ctx.current_instruction = 0x881869D8;
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r19.u8);
	ctx.r30.u32 = ea;
loc_881869DC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x88186924
	if (!ctx.cr0.eq) goto loc_88186924;
	// b 0x88186cfc
	goto loc_88186CFC;
loc_881869EC:
	// lwz r3,84(r25)
	ctx.current_instruction = 0x881869EC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881869F0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881869F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x88186A04;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88186A08;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88186a14
	if (!ctx.cr0.lt) goto loc_88186A14;
	// bl 0x88156678
	ctx.lr = 0x88186A14;
	sub_88156678(ctx, base);
loc_88186A14:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88186cfc
	if (ctx.cr6.eq) goto loc_88186CFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// bl 0x881856c8
	ctx.lr = 0x88186A2C;
	sub_881856C8(ctx, base);
loc_88186A2C:
	// b 0x88186cfc
	goto loc_88186CFC;
loc_88186A30:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x881856c8
	ctx.lr = 0x88186A3C;
	sub_881856C8(ctx, base);
loc_88186A3C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88186cfc
	if (ctx.cr6.eq) goto loc_88186CFC;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88186A4C:
	// clrlwi r29,r24,31
	ctx.r29.u64 = ctx.r24.u32 & 0x1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x88186a88
	if (ctx.cr6.eq) goto loc_88186A88;
	// lwz r3,84(r25)
	ctx.current_instruction = 0x88186A58;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88186A5C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88186A60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x88186A70;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88186A74;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88186a80
	if (!ctx.cr0.lt) goto loc_88186A80;
	// bl 0x88156678
	ctx.lr = 0x88186A80;
	sub_88156678(ctx, base);
loc_88186A80:
	// stb r31,0(r30)
	ctx.current_instruction = 0x88186A80;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_88186A88:
	// cmpw cr6,r29,r24
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x88186cfc
	if (!ctx.cr6.lt) goto loc_88186CFC;
	// subf r11,r29,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r29.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_88186AA4:
	// lwz r3,84(r25)
	ctx.current_instruction = 0x88186AA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88186AA8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88186AAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x88186ABC;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88186AC0;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88186acc
	if (!ctx.cr0.lt) goto loc_88186ACC;
	// bl 0x88156678
	ctx.lr = 0x88186ACC;
	sub_88156678(ctx, base);
loc_88186ACC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88186b54
	if (ctx.cr6.eq) goto loc_88186B54;
	// lwz r3,84(r25)
	ctx.current_instruction = 0x88186AD4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88186AD8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88186ADC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x88186AEC;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88186AF0;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88186afc
	if (!ctx.cr0.lt) goto loc_88186AFC;
	// bl 0x88156678
	ctx.lr = 0x88186AFC;
	sub_88156678(ctx, base);
loc_88186AFC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88186b10
	if (ctx.cr6.eq) goto loc_88186B10;
	// stb r28,0(r30)
	ctx.current_instruction = 0x88186B04;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// stbu r28,1(r30)
	ctx.current_instruction = 0x88186B08;
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r28.u8);
	ctx.r30.u32 = ea;
	// b 0x88186b5c
	goto loc_88186B5C;
loc_88186B10:
	// lwz r3,84(r25)
	ctx.current_instruction = 0x88186B10;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88186B14;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88186B18;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x88186B28;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88186B2C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88186b38
	if (!ctx.cr0.lt) goto loc_88186B38;
	// bl 0x88156678
	ctx.lr = 0x88186B38;
	sub_88156678(ctx, base);
loc_88186B38:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88186b4c
	if (ctx.cr6.eq) goto loc_88186B4C;
	// stb r19,0(r30)
	ctx.current_instruction = 0x88186B40;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r19.u8);
	// stbu r28,1(r30)
	ctx.current_instruction = 0x88186B44;
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r28.u8);
	ctx.r30.u32 = ea;
	// b 0x88186b5c
	goto loc_88186B5C;
loc_88186B4C:
	// stb r28,0(r30)
	ctx.current_instruction = 0x88186B4C;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// b 0x88186b58
	goto loc_88186B58;
loc_88186B54:
	// stb r19,0(r30)
	ctx.current_instruction = 0x88186B54;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r19.u8);
loc_88186B58:
	// stbu r19,1(r30)
	ctx.current_instruction = 0x88186B58;
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r19.u8);
	ctx.r30.u32 = ea;
loc_88186B5C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x88186aa4
	if (!ctx.cr0.eq) goto loc_88186AA4;
	// b 0x88186cfc
	goto loc_88186CFC;
loc_88186B6C:
	// lwz r3,84(r25)
	ctx.current_instruction = 0x88186B6C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88186B70;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88186B74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x88186B84;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88186B88;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88186b94
	if (!ctx.cr0.lt) goto loc_88186B94;
	// bl 0x88156678
	ctx.lr = 0x88186B94;
	sub_88156678(ctx, base);
loc_88186B94:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88186c4c
	if (ctx.cr6.eq) goto loc_88186C4C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x88186cfc
	if (!ctx.cr6.gt) goto loc_88186CFC;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_88186BA8:
	// lwz r3,84(r25)
	ctx.current_instruction = 0x88186BA8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88186BAC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88186BB0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x88186BC0;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88186BC4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88186bd0
	if (!ctx.cr0.lt) goto loc_88186BD0;
	// bl 0x88156678
	ctx.lr = 0x88186BD0;
	sub_88156678(ctx, base);
loc_88186BD0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88186c24
	if (ctx.cr6.eq) goto loc_88186C24;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x88186c3c
	if (!ctx.cr6.gt) goto loc_88186C3C;
	// subf r28,r26,r30
	ctx.r28.u64 = ctx.r30.u64 - ctx.r26.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_88186BE8:
	// lwz r3,84(r25)
	ctx.current_instruction = 0x88186BE8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88186BEC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88186BF0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r29,r10,1,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x88186C00;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88186C04;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88186c10
	if (!ctx.cr0.lt) goto loc_88186C10;
	// bl 0x88156678
	ctx.lr = 0x88186C10;
	sub_88156678(ctx, base);
loc_88186C10:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stbux r11,r28,r26
	ctx.current_instruction = 0x88186C18;
	ea = ctx.r28.u32 + ctx.r26.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r28.u32 = ea;
	// bne 0x88186be8
	if (!ctx.cr0.eq) goto loc_88186BE8;
	// b 0x88186c3c
	goto loc_88186C3C;
loc_88186C24:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x88186c3c
	if (!ctx.cr6.gt) goto loc_88186C3C;
	// subf r11,r26,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r26.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
loc_88186C34:
	// stbux r19,r11,r26
	ctx.current_instruction = 0x88186C34;
	ea = ctx.r11.u32 + ctx.r26.u32;
	REX_STORE_U8(ea, ctx.r19.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x88186c34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88186C34;
loc_88186C3C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x88186ba8
	if (!ctx.cr0.eq) goto loc_88186BA8;
	// b 0x88186cfc
	goto loc_88186CFC;
loc_88186C4C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x88186cfc
	if (!ctx.cr6.gt) goto loc_88186CFC;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_88186C58:
	// lwz r3,84(r25)
	ctx.current_instruction = 0x88186C58;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88186C5C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88186C60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x88186C70;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88186C74;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88186c80
	if (!ctx.cr0.lt) goto loc_88186C80;
	// bl 0x88156678
	ctx.lr = 0x88186C80;
	sub_88156678(ctx, base);
loc_88186C80:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88186cd4
	if (ctx.cr6.eq) goto loc_88186CD4;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x88186cf0
	if (!ctx.cr6.gt) goto loc_88186CF0;
loc_88186C94:
	// lwz r3,84(r25)
	ctx.current_instruction = 0x88186C94;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88186C98;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88186C9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r29,r10,1,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x88186CAC;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88186CB0;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88186cbc
	if (!ctx.cr0.lt) goto loc_88186CBC;
	// bl 0x88156678
	ctx.lr = 0x88186CBC;
	sub_88156678(ctx, base);
loc_88186CBC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// stbx r11,r30,r31
	ctx.current_instruction = 0x88186CC0;
	REX_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x88186c94
	if (ctx.cr6.lt) goto loc_88186C94;
	// b 0x88186cf0
	goto loc_88186CF0;
loc_88186CD4:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x88186cf0
	if (!ctx.cr6.gt) goto loc_88186CF0;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
loc_88186CE4:
	// stbx r19,r30,r11
	ctx.current_instruction = 0x88186CE4;
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r19.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88186ce4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88186CE4;
loc_88186CF0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bne 0x88186c58
	if (!ctx.cr0.eq) goto loc_88186C58;
loc_88186CFC:
	// lwz r10,22344(r25)
	ctx.current_instruction = 0x88186CFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 22344);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88186dac
	if (ctx.cr6.eq) goto loc_88186DAC;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x88186de0
	if (!ctx.cr6.gt) goto loc_88186DE0;
loc_88186D14:
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x88186d9c
	if (!ctx.cr6.gt) goto loc_88186D9C;
	// subfic r8,r26,1
	ctx.xer.ca = ctx.r26.u32 <= 1;
	ctx.r8.u64 = static_cast<uint64_t>(1) - ctx.r26.u64;
loc_88186D24:
	// add. r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x88186d74
	if (ctx.cr0.eq) goto loc_88186D74;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x88186d40
	if (!ctx.cr6.eq) goto loc_88186D40;
	// lbz r11,-1(r10)
	ctx.current_instruction = 0x88186D34;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x88186d78
	goto loc_88186D78;
loc_88186D40:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88186d58
	if (!ctx.cr6.eq) goto loc_88186D58;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r6,-1(r11)
	ctx.current_instruction = 0x88186D4C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// b 0x88186d78
	goto loc_88186D78;
loc_88186D58:
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r5,-1(r10)
	ctx.current_instruction = 0x88186D5C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// lbz r4,-1(r6)
	ctx.current_instruction = 0x88186D64;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + -1);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x88186d78
	if (ctx.cr6.eq) goto loc_88186D78;
loc_88186D74:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_88186D78:
	// lbz r6,0(r10)
	ctx.current_instruction = 0x88186D78;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// xor r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// stb r3,0(r10)
	ctx.current_instruction = 0x88186D90;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x88186d24
	if (ctx.cr6.lt) goto loc_88186D24;
loc_88186D9C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r22
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x88186d14
	if (ctx.cr6.lt) goto loc_88186D14;
	// b 0x88186de0
	goto loc_88186DE0;
loc_88186DAC:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88186de0
	if (ctx.cr6.eq) goto loc_88186DE0;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x88186de0
	if (!ctx.cr6.gt) goto loc_88186DE0;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
loc_88186DC4:
	// lbzx r9,r11,r10
	ctx.current_instruction = 0x88186DC4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// stbx r6,r11,r10
	ctx.current_instruction = 0x88186DD4;
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88186dc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88186DC4;
loc_88186DE0:
	// lwz r11,140(r25)
	ctx.current_instruction = 0x88186DE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 140);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,136(r25)
	ctx.current_instruction = 0x88186DE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// li r22,3
	ctx.r22.s64 = 3;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// lwz r20,22344(r25)
	ctx.current_instruction = 0x88186DF4;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r25.u32 + 22344);
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// subf. r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r24,r10,32768
	ctx.r24.u64 = ctx.r10.u64 | 32768;
	// subf r23,r7,r9
	ctx.r23.u64 = ctx.r9.u64 - ctx.r7.u64;
	// ble 0x8818723c
	if (!ctx.cr0.gt) goto loc_8818723C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
loc_88186E18:
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x8818704c
	if (!ctx.cr6.gt) goto loc_8818704C;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_88186E28:
	// lbz r11,0(r20)
	ctx.current_instruction = 0x88186E28;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88186fe0
	if (!ctx.cr6.eq) goto loc_88186FE0;
	// lwz r31,84(r25)
	ctx.current_instruction = 0x88186E38;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// addic. r11,r25,22348
	ctx.xer.ca = ctx.r25.u32 > 4294944947;
	ctx.r11.s64 = ctx.r25.s64 + 22348;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88186e50
	if (!ctx.cr0.eq) goto loc_88186E50;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r22,20(r31)
	ctx.current_instruction = 0x88186E48;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r22.u32);
	// b 0x88186f78
	goto loc_88186F78;
loc_88186E50:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x88186E50;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.current_instruction = 0x88186E54;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.current_instruction = 0x88186E5C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.current_instruction = 0x88186E6C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x88186f3c
	if (ctx.cr6.lt) goto loc_88186F3C;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88186E7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x88186E8C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x88186E94;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x88186f34
	if (!ctx.cr6.lt) goto loc_88186F34;
loc_88186E9C:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x88186E9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88186EA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88186ec8
	if (ctx.cr6.lt) goto loc_88186EC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x88186EB8;
	sub_88156440(ctx, base);
loc_88186EB8:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x88186e9c
	if (ctx.cr6.eq) goto loc_88186E9C;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x88186f74
	goto loc_88186F74;
loc_88186EC8:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x88186EC8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x88186ED0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x88186ED8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x88186EDC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x88186EE4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x88186EE8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88186EF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x88186EF4;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x88186EFC;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	ctx.current_instruction = 0x88186F18;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r8,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r3.u8 & 0x7F));
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r7,0(r31)
	ctx.current_instruction = 0x88186F30;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_88186F34:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x88186f74
	goto loc_88186F74;
loc_88186F3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88186F44;
	sub_88156500(ctx, base);
loc_88186F44:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88186F44;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88156500
	ctx.lr = 0x88186F5C;
	sub_88156500(ctx, base);
loc_88186F5C:
	// add r10,r29,r24
	ctx.r10.u64 = ctx.r29.u64 + ctx.r24.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x88186F64;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x88186f44
	if (ctx.cr6.lt) goto loc_88186F44;
loc_88186F74:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_88186F78:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r9,0(r30)
	ctx.current_instruction = 0x88186F7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,24(r30)
	ctx.current_instruction = 0x88186F80;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// rlwimi r9,r11,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwimi r8,r10,31,0,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// stw r9,0(r30)
	ctx.current_instruction = 0x88186F94;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,24(r30)
	ctx.current_instruction = 0x88186F98;
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r8.u32);
	// lwz r11,136(r25)
	ctx.current_instruction = 0x88186F9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r11,r21
	ctx.current_instruction = 0x88186FB0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// rlwimi r4,r7,31,0,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x80000000) | (ctx.r4.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r4,r11,r21
	ctx.current_instruction = 0x88186FB8;
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r4.u32);
	// lwz r11,136(r25)
	ctx.current_instruction = 0x88186FBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r21
	ctx.current_instruction = 0x88186FD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// rlwimi r10,r6,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// b 0x88187038
	goto loc_88187038;
loc_88186FE0:
	// lwz r11,24(r30)
	ctx.current_instruction = 0x88186FE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,0(r30)
	ctx.current_instruction = 0x88186FE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// oris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,24(r30)
	ctx.current_instruction = 0x88186FF0;
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// stw r8,0(r30)
	ctx.current_instruction = 0x88186FF4;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r11,136(r25)
	ctx.current_instruction = 0x88186FF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r11,r21
	ctx.current_instruction = 0x8818700C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// oris r5,r6,32768
	ctx.r5.u64 = ctx.r6.u64 | 2147483648;
	// stwx r5,r11,r21
	ctx.current_instruction = 0x88187014;
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r5.u32);
	// lwz r11,136(r25)
	ctx.current_instruction = 0x88187018;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r21
	ctx.current_instruction = 0x88187030;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// oris r10,r3,32768
	ctx.r10.u64 = ctx.r3.u64 | 2147483648;
loc_88187038:
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// stwx r10,r11,r21
	ctx.current_instruction = 0x8818703C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r10.u32);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x88186e28
	if (ctx.cr6.lt) goto loc_88186E28;
loc_8818704C:
	// lwz r11,136(r25)
	ctx.current_instruction = 0x8818704C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88187220
	if (ctx.cr6.eq) goto loc_88187220;
	// lbz r11,0(r20)
	ctx.current_instruction = 0x8818705C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881871e8
	if (!ctx.cr6.eq) goto loc_881871E8;
	// lwz r31,84(r25)
	ctx.current_instruction = 0x8818706C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// addic. r11,r25,22348
	ctx.xer.ca = ctx.r25.u32 > 4294944947;
	ctx.r11.s64 = ctx.r25.s64 + 22348;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88187084
	if (!ctx.cr0.eq) goto loc_88187084;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r22,20(r31)
	ctx.current_instruction = 0x8818707C;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r22.u32);
	// b 0x881871a8
	goto loc_881871A8;
loc_88187084:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x88187084;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.current_instruction = 0x88187088;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r11)
	ctx.current_instruction = 0x88187090;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r29
	ctx.current_instruction = 0x881870A0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r29.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88187170
	if (ctx.cr6.lt) goto loc_88187170;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x881870B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881870C0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881870C8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x88187168
	if (!ctx.cr6.lt) goto loc_88187168;
loc_881870D0:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881870D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881870D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881870fc
	if (ctx.cr6.lt) goto loc_881870FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881870EC;
	sub_88156440(ctx, base);
loc_881870EC:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881870d0
	if (ctx.cr6.eq) goto loc_881870D0;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881871a8
	goto loc_881871A8;
loc_881870FC:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x881870FC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x88187104;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x8818710C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x88187110;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x88187118;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x8818711C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88187124;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x88187128;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88187130;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	ctx.current_instruction = 0x8818714C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r31)
	ctx.current_instruction = 0x88187164;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_88187168:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881871a8
	goto loc_881871A8;
loc_88187170:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88187178;
	sub_88156500(ctx, base);
loc_88187178:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88187178;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x88187190;
	sub_88156500(ctx, base);
loc_88187190:
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x88187198;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88187178
	if (ctx.cr6.lt) goto loc_88187178;
loc_881871A8:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r9,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 2;
	// add r8,r27,r11
	ctx.r8.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r11,r21
	ctx.current_instruction = 0x881871B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// rlwimi r7,r30,31,0,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x80000000) | (ctx.r7.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r7,r11,r21
	ctx.current_instruction = 0x881871C0;
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r7.u32);
	// lwz r11,136(r25)
	ctx.current_instruction = 0x881871C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r11,r21
	ctx.current_instruction = 0x881871D8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// rlwimi r5,r9,31,0,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000) | (ctx.r5.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r5,r11,r21
	ctx.current_instruction = 0x881871E0;
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r5.u32);
	// b 0x88187220
	goto loc_88187220;
loc_881871E8:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r21
	ctx.current_instruction = 0x881871F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stwx r9,r11,r21
	ctx.current_instruction = 0x881871FC;
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r9.u32);
	// lwz r11,136(r25)
	ctx.current_instruction = 0x88187200;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r11,r21
	ctx.current_instruction = 0x88187214;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// oris r6,r7,32768
	ctx.r6.u64 = ctx.r7.u64 | 2147483648;
	// stwx r6,r11,r21
	ctx.current_instruction = 0x8818721C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r6.u32);
loc_88187220:
	// lwz r11,136(r25)
	ctx.current_instruction = 0x88187220;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bne 0x88186e18
	if (!ctx.cr0.eq) goto loc_88186E18;
loc_8818723C:
	// lwz r11,140(r25)
	ctx.current_instruction = 0x8818723C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 140);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88187590
	if (ctx.cr6.eq) goto loc_88187590;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x881873fc
	if (!ctx.cr6.gt) goto loc_881873FC;
	// addi r11,r23,-1
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// rlwinm r26,r27,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_8818726C:
	// lbz r11,0(r20)
	ctx.current_instruction = 0x8818726C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881873d8
	if (!ctx.cr6.eq) goto loc_881873D8;
	// lwz r31,84(r25)
	ctx.current_instruction = 0x8818727C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// addic. r11,r25,22348
	ctx.xer.ca = ctx.r25.u32 > 4294944947;
	ctx.r11.s64 = ctx.r25.s64 + 22348;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88187294
	if (!ctx.cr0.eq) goto loc_88187294;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r22,20(r31)
	ctx.current_instruction = 0x8818728C;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r22.u32);
	// b 0x881873b8
	goto loc_881873B8;
loc_88187294:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x88187294;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.current_instruction = 0x88187298;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r11)
	ctx.current_instruction = 0x881872A0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r29
	ctx.current_instruction = 0x881872B0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r29.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88187380
	if (ctx.cr6.lt) goto loc_88187380;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x881872C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881872D0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881872D8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x88187378
	if (!ctx.cr6.lt) goto loc_88187378;
loc_881872E0:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881872E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881872E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8818730c
	if (ctx.cr6.lt) goto loc_8818730C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881872FC;
	sub_88156440(ctx, base);
loc_881872FC:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881872e0
	if (ctx.cr6.eq) goto loc_881872E0;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881873b8
	goto loc_881873B8;
loc_8818730C:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x8818730C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x88187314;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x8818731C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x88187320;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x88187328;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x8818732C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88187334;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x88187338;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88187340;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	ctx.current_instruction = 0x8818735C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r31)
	ctx.current_instruction = 0x88187374;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_88187378:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881873b8
	goto loc_881873B8;
loc_88187380:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88187388;
	sub_88156500(ctx, base);
loc_88187388:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88187388;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881873A0;
	sub_88156500(ctx, base);
loc_881873A0:
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x881873A8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88187388
	if (ctx.cr6.lt) goto loc_88187388;
loc_881873B8:
	// lwz r11,0(r28)
	ctx.current_instruction = 0x881873B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// srawi r10,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 1;
	// lwz r9,24(r28)
	ctx.current_instruction = 0x881873C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// rlwimi r11,r30,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwimi r9,r10,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r28)
	ctx.current_instruction = 0x881873CC;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r9,24(r28)
	ctx.current_instruction = 0x881873D0;
	REX_STORE_U32(ctx.r28.u32 + 24, ctx.r9.u32);
	// b 0x881873f0
	goto loc_881873F0;
loc_881873D8:
	// lwz r11,0(r28)
	ctx.current_instruction = 0x881873D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,24(r28)
	ctx.current_instruction = 0x881873DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// oris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,0(r28)
	ctx.current_instruction = 0x881873E8;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r8,24(r28)
	ctx.current_instruction = 0x881873EC;
	REX_STORE_U32(ctx.r28.u32 + 24, ctx.r8.u32);
loc_881873F0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// bne 0x8818726c
	if (!ctx.cr0.eq) goto loc_8818726C;
loc_881873FC:
	// lwz r11,136(r25)
	ctx.current_instruction = 0x881873FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88187590
	if (ctx.cr6.eq) goto loc_88187590;
	// lbz r11,0(r20)
	ctx.current_instruction = 0x8818740C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88187578
	if (!ctx.cr6.eq) goto loc_88187578;
	// lwz r31,84(r25)
	ctx.current_instruction = 0x88187418;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// addic. r11,r25,22348
	ctx.xer.ca = ctx.r25.u32 > 4294944947;
	ctx.r11.s64 = ctx.r25.s64 + 22348;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88187430
	if (!ctx.cr0.eq) goto loc_88187430;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r22,20(r31)
	ctx.current_instruction = 0x88187428;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r22.u32);
	// b 0x88187554
	goto loc_88187554;
loc_88187430:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x88187430;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.current_instruction = 0x88187434;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r11)
	ctx.current_instruction = 0x8818743C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r29
	ctx.current_instruction = 0x8818744C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r29.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8818751c
	if (ctx.cr6.lt) goto loc_8818751C;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x8818745C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x8818746C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x88187474;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x88187514
	if (!ctx.cr6.lt) goto loc_88187514;
loc_8818747C:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x8818747C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88187480;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881874a8
	if (ctx.cr6.lt) goto loc_881874A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x88187498;
	sub_88156440(ctx, base);
loc_88187498:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8818747c
	if (ctx.cr6.eq) goto loc_8818747C;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88187554
	goto loc_88187554;
loc_881874A8:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x881874A8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x881874B0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x881874B8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x881874BC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x881874C4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x881874C8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881874D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881874D4;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881874DC;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	ctx.current_instruction = 0x881874F8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r31)
	ctx.current_instruction = 0x88187510;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_88187514:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88187554
	goto loc_88187554;
loc_8818751C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88187524;
	sub_88156500(ctx, base);
loc_88187524:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88187524;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x8818753C;
	sub_88156500(ctx, base);
loc_8818753C:
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x88187544;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88187524
	if (ctx.cr6.lt) goto loc_88187524;
loc_88187554:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r21
	ctx.current_instruction = 0x88187564;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// rlwimi r10,r30,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r10,r11,r21
	ctx.current_instruction = 0x8818756C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88187578:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r21
	ctx.current_instruction = 0x88187584;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stwx r9,r11,r21
	ctx.current_instruction = 0x8818758C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r9.u32);
loc_88187590:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AE530) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881AE530;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881AE530) {
			switch (rex_dispatch_address) {
				case 0x881AE538:
				case 0x881AE568:
				case 0x881AE5E8:
				case 0x881AE674:
				case 0x881AE694:
				case 0x881AE740:
				case 0x881AE788:
				case 0x881AE7F0:
				case 0x881AE838:
				case 0x881AE958:
				case 0x881AE9A0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881AE530;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881AE538: goto loc_881AE538;
		case 0x881AE568: goto loc_881AE568;
		case 0x881AE5E8: goto loc_881AE5E8;
		case 0x881AE674: goto loc_881AE674;
		case 0x881AE694: goto loc_881AE694;
		case 0x881AE740: goto loc_881AE740;
		case 0x881AE788: goto loc_881AE788;
		case 0x881AE7F0: goto loc_881AE7F0;
		case 0x881AE838: goto loc_881AE838;
		case 0x881AE958: goto loc_881AE958;
		case 0x881AE9A0: goto loc_881AE9A0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881AE538;
	__savegprlr_25(ctx, base);
loc_881AE538:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x881AE538;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// bl 0x881ae400
	ctx.lr = 0x881AE568;
	sub_881AE400(ctx, base);
loc_881AE568:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881AE568;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881ae580
	if (!ctx.cr6.eq) goto loc_881AE580;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r31)
	ctx.current_instruction = 0x881AE578;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881ae6ac
	goto loc_881AE6AC;
loc_881AE580:
	// lbz r4,8(r30)
	ctx.current_instruction = 0x881AE580;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x881AE584;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r30)
	ctx.current_instruction = 0x881AE58C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r28
	ctx.current_instruction = 0x881AE59C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r28.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881ae66c
	if (ctx.cr6.lt) goto loc_881AE66C;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE5AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881AE5BC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881AE5C4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881ae664
	if (!ctx.cr6.lt) goto loc_881AE664;
loc_881AE5CC:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881AE5CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881AE5D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881ae5f8
	if (ctx.cr6.lt) goto loc_881AE5F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881AE5E8;
	sub_88156440(ctx, base);
loc_881AE5E8:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881ae5cc
	if (ctx.cr6.eq) goto loc_881AE5CC;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881ae6ac
	goto loc_881AE6AC;
loc_881AE5F8:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881AE5F8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881AE600;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881AE608;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x881AE60C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x881AE614;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x881AE618;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE620;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881AE624;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x881AE62C;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	ctx.current_instruction = 0x881AE648;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r8,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r3.u8 & 0x7F));
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r7,0(r31)
	ctx.current_instruction = 0x881AE660;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_881AE664:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881ae6ac
	goto loc_881AE6AC;
loc_881AE66C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881AE674;
	sub_88156500(ctx, base);
loc_881AE674:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
loc_881AE67C:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881AE67C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881AE694;
	sub_88156500(ctx, base);
loc_881AE694:
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881AE69C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881ae67c
	if (ctx.cr6.lt) goto loc_881AE67C;
loc_881AE6AC:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881AE6AC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x881AE6B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881ae6c8
	if (ctx.cr6.eq) goto loc_881AE6C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_881AE6C8:
	// cmpwi cr6,r30,1099
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1099, ctx.xer);
	// beq cr6,0x881ae6e0
	if (ctx.cr6.eq) goto loc_881AE6E0;
	// lwz r11,244(r1)
	ctx.current_instruction = 0x881AE6D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lbzx r28,r30,r27
	ctx.current_instruction = 0x881AE6D4;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// lbzx r30,r30,r11
	ctx.current_instruction = 0x881AE6D8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// b 0x881ae838
	goto loc_881AE838;
loc_881AE6E0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE6E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,6
	ctx.r30.s64 = 6;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x881ae750
	if (!ctx.cr6.lt) goto loc_881AE750;
loc_881AE6F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ae750
	if (ctx.cr6.eq) goto loc_881AE750;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881AE704;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x881AE728;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881AE730;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881ae740
	if (!ctx.cr0.lt) goto loc_881AE740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE740;
	sub_88156678(ctx, base);
loc_881AE740:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE740;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ae6f8
	if (ctx.cr6.gt) goto loc_881AE6F8;
loc_881AE750:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881AE754;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x881AE76C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881AE778;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881ae788
	if (!ctx.cr0.lt) goto loc_881AE788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE788;
	sub_88156678(ctx, base);
loc_881AE788:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881AE788;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r30,6
	ctx.r30.s64 = 6;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE798;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x881ae800
	if (!ctx.cr6.lt) goto loc_881AE800;
loc_881AE7A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ae800
	if (ctx.cr6.eq) goto loc_881AE800;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881AE7B4;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x881AE7D8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881AE7E0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881ae7f0
	if (!ctx.cr0.lt) goto loc_881AE7F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE7F0;
	sub_88156678(ctx, base);
loc_881AE7F0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE7F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ae7a8
	if (ctx.cr6.gt) goto loc_881AE7A8;
loc_881AE800:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881AE804;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x881AE81C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881AE828;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881ae838
	if (!ctx.cr0.lt) goto loc_881AE838;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE838;
	sub_88156678(ctx, base);
loc_881AE838:
	// lbz r11,80(r1)
	ctx.current_instruction = 0x881AE838;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,244(r26)
	ctx.current_instruction = 0x881AE83C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 244);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881ae860
	if (!ctx.cr6.gt) goto loc_881AE860;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stb r11,0(r25)
	ctx.current_instruction = 0x881AE858;
	REX_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
	// b 0x881ae87c
	goto loc_881AE87C;
loc_881AE860:
	// lwz r10,240(r26)
	ctx.current_instruction = 0x881AE860;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 240);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881ae878
	if (!ctx.cr6.lt) goto loc_881AE878;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stb r11,0(r25)
	ctx.current_instruction = 0x881AE870;
	REX_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
	// b 0x881ae87c
	goto loc_881AE87C;
loc_881AE878:
	// stb r11,0(r25)
	ctx.current_instruction = 0x881AE878;
	REX_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
loc_881AE87C:
	// lbz r11,81(r1)
	ctx.current_instruction = 0x881AE87C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lwz r10,244(r26)
	ctx.current_instruction = 0x881AE880;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 244);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881ae8a4
	if (!ctx.cr6.gt) goto loc_881AE8A4;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stb r11,1(r25)
	ctx.current_instruction = 0x881AE89C;
	REX_STORE_U8(ctx.r25.u32 + 1, ctx.r11.u8);
	// b 0x881ae8c0
	goto loc_881AE8C0;
loc_881AE8A4:
	// lwz r10,240(r26)
	ctx.current_instruction = 0x881AE8A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 240);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881ae8bc
	if (!ctx.cr6.lt) goto loc_881AE8BC;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stb r11,1(r25)
	ctx.current_instruction = 0x881AE8B4;
	REX_STORE_U8(ctx.r25.u32 + 1, ctx.r11.u8);
	// b 0x881ae8c0
	goto loc_881AE8C0;
loc_881AE8BC:
	// stb r11,1(r25)
	ctx.current_instruction = 0x881AE8BC;
	REX_STORE_U8(ctx.r25.u32 + 1, ctx.r11.u8);
loc_881AE8C0:
	// lwz r11,456(r26)
	ctx.current_instruction = 0x881AE8C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 456);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,336(r26)
	ctx.current_instruction = 0x881AE8CC;
	REX_STORE_U32(ctx.r26.u32 + 336, ctx.r10.u32);
	// bne cr6,0x881ae9a4
	if (!ctx.cr6.eq) goto loc_881AE9A4;
	// lbz r11,0(r25)
	ctx.current_instruction = 0x881AE8D4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881ae8f4
	if (!ctx.cr6.eq) goto loc_881AE8F4;
	// lbz r11,1(r25)
	ctx.current_instruction = 0x881AE8E4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 1);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881ae9a4
	if (ctx.cr6.eq) goto loc_881AE9A4;
loc_881AE8F4:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881AE8F4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE900;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881ae968
	if (!ctx.cr6.lt) goto loc_881AE968;
loc_881AE910:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ae968
	if (ctx.cr6.eq) goto loc_881AE968;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881AE91C;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x881AE940;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881AE948;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881ae958
	if (!ctx.cr0.lt) goto loc_881AE958;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE958;
	sub_88156678(ctx, base);
loc_881AE958:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE958;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ae910
	if (ctx.cr6.gt) goto loc_881AE910;
loc_881AE968:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881AE96C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x881AE984;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881AE990;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881ae9a0
	if (!ctx.cr0.lt) goto loc_881AE9A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE9A0;
	sub_88156678(ctx, base);
loc_881AE9A0:
	// stw r30,336(r26)
	ctx.current_instruction = 0x881AE9A0;
	REX_STORE_U32(ctx.r26.u32 + 336, ctx.r30.u32);
loc_881AE9A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B5DD8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B5DD8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B5DD8) {
			switch (rex_dispatch_address) {
				case 0x881B5DE0:
				case 0x881B5E14:
				case 0x881B5E48:
				case 0x881B5E64:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B5DD8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B5DE0: goto loc_881B5DE0;
		case 0x881B5E14: goto loc_881B5E14;
		case 0x881B5E48: goto loc_881B5E48;
		case 0x881B5E64: goto loc_881B5E64;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881B5DE0;
	__savegprlr_28(ctx, base);
loc_881B5DE0:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881B5DE0;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,24688(r3)
	ctx.current_instruction = 0x881B5DE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// lwz r4,0(r4)
	ctx.current_instruction = 0x881B5DEC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r5,4(r31)
	ctx.current_instruction = 0x881B5E00;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stb r7,8(r31)
	ctx.current_instruction = 0x881B5E04;
	REX_STORE_U8(ctx.r31.u32 + 8, ctx.r7.u8);
	// beq cr6,0x881b5e1c
	if (ctx.cr6.eq) goto loc_881B5E1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x881B5E14;
	sub_8815E528(ctx, base);
loc_881B5E14:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	ctx.current_instruction = 0x881B5E18;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_881B5E1C:
	// lwz r11,0(r28)
	ctx.current_instruction = 0x881B5E1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r10,r11,27,5,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFE;
	// slw r11,r9,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r7,18168
	ctx.r5.s64 = ctx.r7.s64 + 18168;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e468
	ctx.lr = 0x881B5E48;
	sub_8815E468(ctx, base);
loc_881B5E48:
	// stw r3,0(r31)
	ctx.current_instruction = 0x881B5E48;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881b5e70
	if (ctx.cr6.eq) goto loc_881B5E70;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x881b5ad0
	ctx.lr = 0x881B5E64;
	sub_881B5AD0(ctx, base);
loc_881B5E64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_881B5E70:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B8370) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B8370;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B8370) {
			switch (rex_dispatch_address) {
				case 0x881B8378:
				case 0x881B84B8:
				case 0x881B8544:
				case 0x881B855C:
				case 0x881B85D4:
				case 0x881B8618:
				case 0x881B86AC:
				case 0x881B8738:
				case 0x881B8750:
				case 0x881B87E8:
				case 0x881B8820:
				case 0x881B88B4:
				case 0x881B8940:
				case 0x881B8958:
				case 0x881B89F4:
				case 0x881B8A2C:
				case 0x881B8A50:
				case 0x881B8AD8:
				case 0x881B8B20:
				case 0x881B8B4C:
				case 0x881B8BE0:
				case 0x881B8C28:
				case 0x881B8CA4:
				case 0x881B8CEC:
				case 0x881B8D54:
				case 0x881B8D9C:
				case 0x881B8E04:
				case 0x881B8E4C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B8370;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B8378: goto loc_881B8378;
		case 0x881B84B8: goto loc_881B84B8;
		case 0x881B8544: goto loc_881B8544;
		case 0x881B855C: goto loc_881B855C;
		case 0x881B85D4: goto loc_881B85D4;
		case 0x881B8618: goto loc_881B8618;
		case 0x881B86AC: goto loc_881B86AC;
		case 0x881B8738: goto loc_881B8738;
		case 0x881B8750: goto loc_881B8750;
		case 0x881B87E8: goto loc_881B87E8;
		case 0x881B8820: goto loc_881B8820;
		case 0x881B88B4: goto loc_881B88B4;
		case 0x881B8940: goto loc_881B8940;
		case 0x881B8958: goto loc_881B8958;
		case 0x881B89F4: goto loc_881B89F4;
		case 0x881B8A2C: goto loc_881B8A2C;
		case 0x881B8A50: goto loc_881B8A50;
		case 0x881B8AD8: goto loc_881B8AD8;
		case 0x881B8B20: goto loc_881B8B20;
		case 0x881B8B4C: goto loc_881B8B4C;
		case 0x881B8BE0: goto loc_881B8BE0;
		case 0x881B8C28: goto loc_881B8C28;
		case 0x881B8CA4: goto loc_881B8CA4;
		case 0x881B8CEC: goto loc_881B8CEC;
		case 0x881B8D54: goto loc_881B8D54;
		case 0x881B8D9C: goto loc_881B8D9C;
		case 0x881B8E04: goto loc_881B8E04;
		case 0x881B8E4C: goto loc_881B8E4C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881B8378;
	__savegprlr_14(ctx, base);
loc_881B8378:
	// stwu r1,-272(r1)
	ctx.current_instruction = 0x881B8378;
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.current_instruction = 0x881B837C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r9,15536(r3)
	ctx.current_instruction = 0x881B8384;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// stw r24,84(r1)
	ctx.current_instruction = 0x881B8398;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// lwz r8,40(r10)
	ctx.current_instruction = 0x881B839C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// lwz r6,12(r10)
	ctx.current_instruction = 0x881B83A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,16(r10)
	ctx.current_instruction = 0x881B83A8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r4,20(r10)
	ctx.current_instruction = 0x881B83AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r3,24(r10)
	ctx.current_instruction = 0x881B83B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r28,4(r10)
	ctx.current_instruction = 0x881B83B4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,8(r10)
	ctx.current_instruction = 0x881B83B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r25,0(r10)
	ctx.current_instruction = 0x881B83BC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r20,28(r10)
	ctx.current_instruction = 0x881B83C0;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r18,r11,1
	ctx.r18.s64 = ctx.r11.s64 + 1;
	// lwz r19,32(r10)
	ctx.current_instruction = 0x881B83C8;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// stw r8,80(r1)
	ctx.current_instruction = 0x881B83CC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r6,100(r1)
	ctx.current_instruction = 0x881B83D0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r5,96(r1)
	ctx.current_instruction = 0x881B83D4;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r4,108(r1)
	ctx.current_instruction = 0x881B83D8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// stw r3,104(r1)
	ctx.current_instruction = 0x881B83DC;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r28,112(r1)
	ctx.current_instruction = 0x881B83E0;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// blt cr6,0x881b83fc
	if (ctx.cr6.lt) goto loc_881B83FC;
	// lwz r11,8(r7)
	ctx.current_instruction = 0x881B83E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,12(r7)
	ctx.current_instruction = 0x881B83EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r17,0(r7)
	ctx.current_instruction = 0x881B83F0;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r16,4(r7)
	ctx.current_instruction = 0x881B83F4;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x881b840c
	goto loc_881B840C;
loc_881B83FC:
	// lwz r11,308(r27)
	ctx.current_instruction = 0x881B83FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 308);
	// lwz r10,312(r27)
	ctx.current_instruction = 0x881B8400;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 312);
	// lwz r17,316(r27)
	ctx.current_instruction = 0x881B8404;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r27.u32 + 316);
	// lwz r16,320(r27)
	ctx.current_instruction = 0x881B8408;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r27.u32 + 320);
loc_881B840C:
	// stw r11,88(r1)
	ctx.current_instruction = 0x881B840C;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,1764(r27)
	ctx.current_instruction = 0x881B8410;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// stw r10,92(r1)
	ctx.current_instruction = 0x881B8414;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// dcbz r0,r11
	ea = (ctx.r11.u32) & ~31;
	memset((void*)REX_RAW_ADDR(ea), 0, 32);
	// li r10,128
	ctx.r10.s64 = 128;
	// lwz r9,1764(r27)
	ctx.current_instruction = 0x881B8420;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// dcbz r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~31;
	memset((void*)REX_RAW_ADDR(ea), 0, 32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r14,3
	ctx.r14.s64 = 3;
	// ori r26,r11,32768
	ctx.r26.u64 = ctx.r11.u64 | 32768;
	// li r15,1
	ctx.r15.s64 = 1;
loc_881B8438:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881B8438;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x881b8450
	if (!ctx.cr6.eq) goto loc_881B8450;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r14,20(r31)
	ctx.current_instruction = 0x881B8448;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r14.u32);
	// b 0x881b8574
	goto loc_881B8574;
loc_881B8450:
	// lbz r4,8(r25)
	ctx.current_instruction = 0x881B8450;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r25.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x881B8454;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r25)
	ctx.current_instruction = 0x881B845C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.current_instruction = 0x881B846C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881b853c
	if (ctx.cr6.lt) goto loc_881B853C;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B847C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881B848C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881B8494;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881b8534
	if (!ctx.cr6.lt) goto loc_881B8534;
loc_881B849C:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881B849C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881B84A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881b84c8
	if (ctx.cr6.lt) goto loc_881B84C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881B84B8;
	sub_88156440(ctx, base);
loc_881B84B8:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881b849c
	if (ctx.cr6.eq) goto loc_881B849C;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881b8574
	goto loc_881B8574;
loc_881B84C8:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881B84C8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881B84D0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881B84D8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,4(r11)
	ctx.current_instruction = 0x881B84DC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,3(r11)
	ctx.current_instruction = 0x881B84E4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x881B84E8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B84F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881B84F4;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x881B84FC;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	ctx.current_instruction = 0x881B8518;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881B8530;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
loc_881B8534:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881b8574
	goto loc_881B8574;
loc_881B853C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881B8544;
	sub_88156500(ctx, base);
loc_881B8544:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881B8544;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881B855C;
	sub_88156500(ctx, base);
loc_881B855C:
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x881B8564;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881b8544
	if (ctx.cr6.lt) goto loc_881B8544;
loc_881B8574:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x881B8574;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.current_instruction = 0x881B857C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881b8f20
	if (!ctx.cr6.eq) goto loc_881B8F20;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x881b85f4
	if (ctx.cr6.eq) goto loc_881B85F4;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881B8594;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x881b8f20
	if (!ctx.cr6.lt) goto loc_881B8F20;
	// cmplw cr6,r31,r18
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x881b85ac
	if (ctx.cr6.lt) goto loc_881B85AC;
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
loc_881B85AC:
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B85AC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B85B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// lbzx r28,r31,r19
	ctx.current_instruction = 0x881B85B8;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r19.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x881B85C4;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B85C8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b85d4
	if (!ctx.cr0.lt) goto loc_881B85D4;
	// bl 0x88156678
	ctx.lr = 0x881B85D4;
	sub_88156678(ctx, base);
loc_881B85D4:
	// lbzx r11,r31,r20
	ctx.current_instruction = 0x881B85D4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r20.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881b85ec
	if (ctx.cr6.eq) goto loc_881B85EC;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// neg r31,r10
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// b 0x881b8e50
	goto loc_881B8E50;
loc_881B85EC:
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// b 0x881b8e50
	goto loc_881B8E50;
loc_881B85F4:
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B85F4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B85F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x881B8608;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B860C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b8618
	if (!ctx.cr0.lt) goto loc_881B8618;
	// bl 0x88156678
	ctx.lr = 0x881B8618;
	sub_88156678(ctx, base);
loc_881B8618:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881b87f8
	if (ctx.cr6.eq) goto loc_881B87F8;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881B8620;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x881B8624;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881b8f20
	if (!ctx.cr6.eq) goto loc_881B8F20;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x881b8644
	if (!ctx.cr6.eq) goto loc_881B8644;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r14,20(r31)
	ctx.current_instruction = 0x881B863C;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r14.u32);
	// b 0x881b8768
	goto loc_881B8768;
loc_881B8644:
	// lbz r4,8(r25)
	ctx.current_instruction = 0x881B8644;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r25.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x881B8648;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r25)
	ctx.current_instruction = 0x881B8650;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.current_instruction = 0x881B8660;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881b8730
	if (ctx.cr6.lt) goto loc_881B8730;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B8670;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881B8680;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881B8688;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881b8728
	if (!ctx.cr6.lt) goto loc_881B8728;
loc_881B8690:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881B8690;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881B8694;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881b86bc
	if (ctx.cr6.lt) goto loc_881B86BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881B86AC;
	sub_88156440(ctx, base);
loc_881B86AC:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881b8690
	if (ctx.cr6.eq) goto loc_881B8690;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881b8768
	goto loc_881B8768;
loc_881B86BC:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x881B86BC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x881B86C4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881B86CC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,4(r11)
	ctx.current_instruction = 0x881B86D0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,3(r11)
	ctx.current_instruction = 0x881B86D8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x881B86DC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B86E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881B86E8;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x881B86F0;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	ctx.current_instruction = 0x881B870C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881B8724;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
loc_881B8728:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881b8768
	goto loc_881B8768;
loc_881B8730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881B8738;
	sub_88156500(ctx, base);
loc_881B8738:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881B8738;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881B8750;
	sub_88156500(ctx, base);
loc_881B8750:
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x881B8758;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881b8738
	if (ctx.cr6.lt) goto loc_881B8738;
loc_881B8768:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x881B8768;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.current_instruction = 0x881B8770;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881b8f20
	if (!ctx.cr6.eq) goto loc_881B8F20;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x881b8f20
	if (ctx.cr6.eq) goto loc_881B8F20;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x881B8788;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x881b8f20
	if (!ctx.cr6.lt) goto loc_881B8F20;
	// lbzx r10,r11,r20
	ctx.current_instruction = 0x881B8794;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// lbzx r28,r11,r19
	ctx.current_instruction = 0x881B879C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// blt cr6,0x881b87b4
	if (ctx.cr6.lt) goto loc_881B87B4;
	// lwz r10,96(r1)
	ctx.current_instruction = 0x881B87A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// b 0x881b87b8
	goto loc_881B87B8;
loc_881B87B4:
	// lwz r10,100(r1)
	ctx.current_instruction = 0x881B87B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_881B87B8:
	// lbzx r9,r28,r10
	ctx.current_instruction = 0x881B87B8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B87C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B87C8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B87D8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r8,0(r3)
	ctx.current_instruction = 0x881B87DC;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// bge 0x881b87e8
	if (!ctx.cr0.lt) goto loc_881B87E8;
	// bl 0x88156678
	ctx.lr = 0x881B87E8;
	sub_88156678(ctx, base);
loc_881B87E8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881b8e50
	if (ctx.cr6.eq) goto loc_881B8E50;
	// neg r31,r31
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// b 0x881b8e50
	goto loc_881B8E50;
loc_881B87F8:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x881B87F8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B87FC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B8800;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x881B8810;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B8814;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b8820
	if (!ctx.cr0.lt) goto loc_881B8820;
	// bl 0x88156678
	ctx.lr = 0x881B8820;
	sub_88156678(ctx, base);
loc_881B8820:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881b8a04
	if (ctx.cr6.eq) goto loc_881B8A04;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881B8828;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x881B882C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881b8f20
	if (!ctx.cr6.eq) goto loc_881B8F20;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x881b884c
	if (!ctx.cr6.eq) goto loc_881B884C;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r14,20(r31)
	ctx.current_instruction = 0x881B8844;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r14.u32);
	// b 0x881b8970
	goto loc_881B8970;
loc_881B884C:
	// lbz r4,8(r25)
	ctx.current_instruction = 0x881B884C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r25.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x881B8850;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r25)
	ctx.current_instruction = 0x881B8858;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.current_instruction = 0x881B8868;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881b8938
	if (ctx.cr6.lt) goto loc_881B8938;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B8878;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881B8888;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881B8890;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881b8930
	if (!ctx.cr6.lt) goto loc_881B8930;
loc_881B8898:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881B8898;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881B889C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881b88c4
	if (ctx.cr6.lt) goto loc_881B88C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881B88B4;
	sub_88156440(ctx, base);
loc_881B88B4:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881b8898
	if (ctx.cr6.eq) goto loc_881B8898;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881b8970
	goto loc_881B8970;
loc_881B88C4:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881B88C4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881B88CC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r5,2(r11)
	ctx.current_instruction = 0x881B88D4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x881B88D8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x881B88E0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x881B88E4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r4,r10,8,55
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B88EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881B88F0;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881B88F8;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	ctx.current_instruction = 0x881B8914;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r6,0(r31)
	ctx.current_instruction = 0x881B892C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
loc_881B8930:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881b8970
	goto loc_881B8970;
loc_881B8938:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881B8940;
	sub_88156500(ctx, base);
loc_881B8940:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881B8940;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881B8958;
	sub_88156500(ctx, base);
loc_881B8958:
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x881B8960;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881b8940
	if (ctx.cr6.lt) goto loc_881B8940;
loc_881B8970:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x881B8970;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.current_instruction = 0x881B8978;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881b8f20
	if (!ctx.cr6.eq) goto loc_881B8F20;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x881b8f20
	if (ctx.cr6.eq) goto loc_881B8F20;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x881B8990;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x881b8f20
	if (!ctx.cr6.lt) goto loc_881B8F20;
	// lbzx r10,r11,r20
	ctx.current_instruction = 0x881B899C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// lbzx r11,r11,r19
	ctx.current_instruction = 0x881B89A4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// lwz r9,1936(r27)
	ctx.current_instruction = 0x881B89A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1936);
	// extsb r31,r10
	ctx.r31.s64 = ctx.r10.s8;
	// blt cr6,0x881b89c0
	if (ctx.cr6.lt) goto loc_881B89C0;
	// lwz r10,104(r1)
	ctx.current_instruction = 0x881B89B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// b 0x881b89c4
	goto loc_881B89C4;
loc_881B89C0:
	// lwz r10,108(r1)
	ctx.current_instruction = 0x881B89C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_881B89C4:
	// lbzx r10,r31,r10
	ctx.current_instruction = 0x881B89C4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B89CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B89D4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B89E4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r8,0(r3)
	ctx.current_instruction = 0x881B89E8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// bge 0x881b89f4
	if (!ctx.cr0.lt) goto loc_881B89F4;
	// bl 0x88156678
	ctx.lr = 0x881B89F4;
	sub_88156678(ctx, base);
loc_881B89F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881b8e50
	if (ctx.cr6.eq) goto loc_881B8E50;
	// neg r31,r31
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// b 0x881b8e50
	goto loc_881B8E50;
loc_881B8A04:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x881B8A04;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B8A08;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B8A0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x881B8A1C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B8A20;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b8a2c
	if (!ctx.cr0.lt) goto loc_881B8A2C;
	// bl 0x88156678
	ctx.lr = 0x881B8A2C;
	sub_88156678(ctx, base);
loc_881B8A2C:
	// lwz r11,15536(r27)
	ctx.current_instruction = 0x881B8A2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 15536);
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x881b8cf0
	if (ctx.cr6.lt) goto loc_881B8CF0;
	// lwz r11,1948(r27)
	ctx.current_instruction = 0x881B8A3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881b8a54
	if (ctx.cr6.eq) goto loc_881B8A54;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881b8060
	ctx.lr = 0x881B8A50;
	sub_881B8060(ctx, base);
loc_881B8A50:
	// stw r24,1948(r27)
	ctx.current_instruction = 0x881B8A50;
	REX_STORE_U32(ctx.r27.u32 + 1948, ctx.r24.u32);
loc_881B8A54:
	// lwz r30,84(r27)
	ctx.current_instruction = 0x881B8A54;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lwz r31,1956(r27)
	ctx.current_instruction = 0x881B8A5C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 1956);
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881B8A64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x881b8a78
	if (!ctx.cr6.gt) goto loc_881B8A78;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// b 0x881b8b24
	goto loc_881B8B24;
loc_881B8A78:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881b8a88
	if (!ctx.cr6.eq) goto loc_881B8A88;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// b 0x881b8b24
	goto loc_881B8B24;
loc_881B8A88:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881b8ae8
	if (!ctx.cr6.gt) goto loc_881B8AE8;
loc_881B8A90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881b8ae8
	if (ctx.cr6.eq) goto loc_881B8AE8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x881B8A9C;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	ctx.current_instruction = 0x881B8AC0;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x881B8AC8;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881b8ad8
	if (!ctx.cr0.lt) goto loc_881B8AD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881B8AD8;
	sub_88156678(ctx, base);
loc_881B8AD8:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881B8AD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881b8a90
	if (ctx.cr6.gt) goto loc_881B8A90;
loc_881B8AE8:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881B8AEC;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	ctx.current_instruction = 0x881B8B04;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x881B8B10;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881b8b20
	if (!ctx.cr0.lt) goto loc_881B8B20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881B8B20;
	sub_88156678(ctx, base);
loc_881B8B20:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_881B8B24:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x881B8B24;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B8B28;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B8B2C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x881B8B3C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B8B40;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b8b4c
	if (!ctx.cr0.lt) goto loc_881B8B4C;
	// bl 0x88156678
	ctx.lr = 0x881B8B4C;
	sub_88156678(ctx, base);
loc_881B8B4C:
	// lwz r30,84(r27)
	ctx.current_instruction = 0x881B8B4C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r31,1952(r27)
	ctx.current_instruction = 0x881B8B54;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 1952);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881B8B5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x881b8c34
	if (ctx.cr6.eq) goto loc_881B8C34;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// ble cr6,0x881b8b7c
	if (!ctx.cr6.gt) goto loc_881B8B7C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// neg r31,r24
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r24.u64);
	// b 0x881b8e50
	goto loc_881B8E50;
loc_881B8B7C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881b8b90
	if (!ctx.cr6.eq) goto loc_881B8B90;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// neg r31,r24
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r24.u64);
	// b 0x881b8e50
	goto loc_881B8E50;
loc_881B8B90:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881b8bf0
	if (!ctx.cr6.gt) goto loc_881B8BF0;
loc_881B8B98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881b8bf0
	if (ctx.cr6.eq) goto loc_881B8BF0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x881B8BA4;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	ctx.current_instruction = 0x881B8BC8;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x881B8BD0;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881b8be0
	if (!ctx.cr0.lt) goto loc_881B8BE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881B8BE0;
	sub_88156678(ctx, base);
loc_881B8BE0:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881B8BE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881b8b98
	if (ctx.cr6.gt) goto loc_881B8B98;
loc_881B8BF0:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881B8BF4;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	ctx.current_instruction = 0x881B8C0C;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x881B8C18;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881b8c28
	if (!ctx.cr0.lt) goto loc_881B8C28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881B8C28;
	sub_88156678(ctx, base);
loc_881B8C28:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// neg r31,r31
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// b 0x881b8e50
	goto loc_881B8E50;
loc_881B8C34:
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// ble cr6,0x881b8c44
	if (!ctx.cr6.gt) goto loc_881B8C44;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x881b8e50
	goto loc_881B8E50;
loc_881B8C44:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881b8c54
	if (!ctx.cr6.eq) goto loc_881B8C54;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x881b8e50
	goto loc_881B8E50;
loc_881B8C54:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881b8cb4
	if (!ctx.cr6.gt) goto loc_881B8CB4;
loc_881B8C5C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881b8cb4
	if (ctx.cr6.eq) goto loc_881B8CB4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x881B8C68;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	ctx.current_instruction = 0x881B8C8C;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x881B8C94;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881b8ca4
	if (!ctx.cr0.lt) goto loc_881B8CA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881B8CA4;
	sub_88156678(ctx, base);
loc_881B8CA4:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881B8CA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881b8c5c
	if (ctx.cr6.gt) goto loc_881B8C5C;
loc_881B8CB4:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881B8CB8;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	ctx.current_instruction = 0x881B8CD0;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x881B8CDC;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881b8e50
	if (!ctx.cr0.lt) goto loc_881B8E50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881B8CEC;
	sub_88156678(ctx, base);
loc_881B8CEC:
	// b 0x881b8e50
	goto loc_881B8E50;
loc_881B8CF0:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881B8CF0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,6
	ctx.r30.s64 = 6;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B8CFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x881b8d64
	if (!ctx.cr6.lt) goto loc_881B8D64;
loc_881B8D0C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881b8d64
	if (ctx.cr6.eq) goto loc_881B8D64;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881B8D18;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x881B8D3C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881B8D44;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881b8d54
	if (!ctx.cr0.lt) goto loc_881B8D54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881B8D54;
	sub_88156678(ctx, base);
loc_881B8D54:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B8D54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881b8d0c
	if (ctx.cr6.gt) goto loc_881B8D0C;
loc_881B8D64:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881B8D68;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x881B8D80;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881B8D8C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881b8d9c
	if (!ctx.cr0.lt) goto loc_881B8D9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881B8D9C;
	sub_88156678(ctx, base);
loc_881B8D9C:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881B8D9C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r30,8
	ctx.r30.s64 = 8;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B8DAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x881b8e14
	if (!ctx.cr6.lt) goto loc_881B8E14;
loc_881B8DBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881b8e14
	if (ctx.cr6.eq) goto loc_881B8E14;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881B8DC8;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x881B8DEC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881B8DF4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881b8e04
	if (!ctx.cr0.lt) goto loc_881B8E04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881B8E04;
	sub_88156678(ctx, base);
loc_881B8E04:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B8E04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881b8dbc
	if (ctx.cr6.gt) goto loc_881B8DBC;
loc_881B8E14:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881B8E18;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x881B8E30;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881B8E3C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881b8e4c
	if (!ctx.cr0.lt) goto loc_881B8E4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881B8E4C;
	sub_88156678(ctx, base);
loc_881B8E4C:
	// extsb r31,r30
	ctx.r31.s64 = ctx.r30.s8;
loc_881B8E50:
	// lwz r11,84(r27)
	ctx.current_instruction = 0x881B8E50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x881B8E54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881b8f20
	if (!ctx.cr6.eq) goto loc_881B8F20;
	// add r11,r28,r22
	ctx.r11.u64 = ctx.r28.u64 + ctx.r22.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x881b8f20
	if (!ctx.cr6.lt) goto loc_881B8F20;
	// lwz r10,1832(r27)
	ctx.current_instruction = 0x881B8E6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1832);
	// lbzx r10,r10,r11
	ctx.current_instruction = 0x881B8E70;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881b8e98
	if (ctx.cr6.eq) goto loc_881B8E98;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// lwz r9,84(r1)
	ctx.current_instruction = 0x881B8E84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// slw r7,r15,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r8.u8 & 0x3F));
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r6,84(r1)
	ctx.current_instruction = 0x881B8E94;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
loc_881B8E98:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x881b8eb8
	if (!ctx.cr6.eq) goto loc_881B8EB8;
	// lbzx r10,r11,r21
	ctx.current_instruction = 0x881B8EA0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r21.u32);
	// lwz r9,1764(r27)
	ctx.current_instruction = 0x881B8EA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// lwz r8,88(r1)
	ctx.current_instruction = 0x881B8EA8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r8,r7,r9
	ctx.current_instruction = 0x881B8EB0;
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r8.u32);
	// b 0x881b8f0c
	goto loc_881B8F0C;
loc_881B8EB8:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x881b8ed8
	if (!ctx.cr6.eq) goto loc_881B8ED8;
	// lbzx r10,r11,r21
	ctx.current_instruction = 0x881B8EC0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r21.u32);
	// lwz r9,1764(r27)
	ctx.current_instruction = 0x881B8EC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// lwz r8,92(r1)
	ctx.current_instruction = 0x881B8EC8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r8,r7,r9
	ctx.current_instruction = 0x881B8ED0;
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r8.u32);
	// b 0x881b8f0c
	goto loc_881B8F0C;
loc_881B8ED8:
	// lwz r8,1764(r27)
	ctx.current_instruction = 0x881B8ED8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x881b8ef8
	if (!ctx.cr6.gt) goto loc_881B8EF8;
	// lbzx r9,r11,r21
	ctx.current_instruction = 0x881B8EE4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r21.u32);
	// mullw r10,r31,r17
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r17.s32);
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r6,r10,r16
	ctx.r6.u64 = ctx.r10.u64 + ctx.r16.u64;
	// b 0x881b8f08
	goto loc_881B8F08;
loc_881B8EF8:
	// lbzx r10,r11,r21
	ctx.current_instruction = 0x881B8EF8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r21.u32);
	// mullw r9,r31,r17
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r17.s32);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// subf r6,r16,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r16.u64;
loc_881B8F08:
	// stwx r6,r7,r8
	ctx.current_instruction = 0x881B8F08;
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u32);
loc_881B8F0C:
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x881b8f2c
	if (!ctx.cr6.eq) goto loc_881B8F2C;
	// lwz r28,112(r1)
	ctx.current_instruction = 0x881B8F18;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x881b8438
	goto loc_881B8438;
loc_881B8F20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881B8F2C:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x881B8F2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1944(r27)
	ctx.current_instruction = 0x881B8F34;
	REX_STORE_U32(ctx.r27.u32 + 1944, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DF410) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DF410;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DF410) {
			switch (rex_dispatch_address) {
				case 0x881DF418:
				case 0x881DF528:
				case 0x881DF544:
				case 0x881DF644:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DF410;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881DF418: goto loc_881DF418;
		case 0x881DF528: goto loc_881DF528;
		case 0x881DF544: goto loc_881DF544;
		case 0x881DF644: goto loc_881DF644;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881DF418;
	__savegprlr_14(ctx, base);
loc_881DF418:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x881DF418;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,356(r1)
	ctx.current_instruction = 0x881DF41C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// stw r4,284(r1)
	ctx.current_instruction = 0x881DF424;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// srawi r11,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 31;
	// stw r9,324(r1)
	ctx.current_instruction = 0x881DF430;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r3,276(r1)
	ctx.current_instruction = 0x881DF438;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// xor r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 ^ ctx.r11.u64;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// beq cr6,0x881df460
	if (ctx.cr6.eq) goto loc_881DF460;
	// srawi r6,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 1;
loc_881DF460:
	// lwz r24,364(r1)
	ctx.current_instruction = 0x881DF460;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// srawi r11,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 31;
	// xor r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 ^ ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x881df47c
	if (ctx.cr6.eq) goto loc_881DF47C;
	// srawi r24,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 1;
loc_881DF47C:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r29,340(r1)
	ctx.current_instruction = 0x881DF480;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// rlwinm r10,r18,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 16) & 0xFFFF0000;
	// lwz r26,380(r1)
	ctx.current_instruction = 0x881DF488;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r11,r17,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 16) & 0xFFFF0000;
	// lwz r7,348(r1)
	ctx.current_instruction = 0x881DF490;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// subf r3,r9,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r31,r9,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rotlwi r9,r3,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// rotlwi r8,r31,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// addi r28,r29,-1
	ctx.r28.s64 = ctx.r29.s64 + -1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r27,r26,1
	ctx.r27.s64 = ctx.r26.s64 + 1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lis r25,0
	ctx.r25.s64 = 0;
	// clrlwi r23,r27,30
	ctx.r23.u64 = ctx.r27.u32 & 0x3;
	// andc r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 & ~ctx.r9.u64;
	// andc r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// ori r27,r25,32768
	ctx.r27.u64 = ctx.r25.u64 | 32768;
	// divw r25,r3,r28
	ctx.r25.u64 = uint32_t((ctx.r28.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r28.s32 == -1)) ? ctx.r3.s32 / ctx.r28.s32 : 0);
	// twllei r28,0
	if (ctx.r28.s32 == 0 || ctx.r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r15,r31,r7
	ctx.r15.u64 = uint32_t((ctx.r7.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r31.s32 / ctx.r7.s32 : 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x881df54c
	if (!ctx.cr6.eq) goto loc_881DF54C;
	// srawi r9,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x881df54c
	if (!ctx.cr6.eq) goto loc_881DF54C;
	// rlwinm r28,r15,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r25,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,17
	ctx.r31.s64 = 17;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r31,84(r1)
	ctx.current_instruction = 0x881DF514;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// addi r3,r26,-3
	ctx.r3.s64 = ctx.r26.s64 + -3;
	// bl 0x881de698
	ctx.lr = 0x881DF528;
	sub_881DE698(ctx, base);
loc_881DF528:
	// lwz r11,388(r1)
	ctx.current_instruction = 0x881DF528;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// stw r31,84(r1)
	ctx.current_instruction = 0x881DF530;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r11,-3
	ctx.r3.s64 = ctx.r11.s64 + -3;
	// bl 0x881de698
	ctx.lr = 0x881DF544;
	sub_881DE698(ctx, base);
loc_881DF544:
	// lwz r16,96(r1)
	ctx.current_instruction = 0x881DF544;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x881df5fc
	goto loc_881DF5FC;
loc_881DF54C:
	// srawi r9,r15,4
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r15.s32 >> 4;
	// stw r11,96(r1)
	ctx.current_instruction = 0x881DF550;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r20,r27,r8
	ctx.r20.u64 = ctx.r8.u64 - ctx.r27.u64;
	// cmpw cr6,r20,r27
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x881df5fc
	if (ctx.cr6.lt) goto loc_881DF5FC;
	// srawi r11,r25,4
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 4;
	// lwz r22,388(r1)
	ctx.current_instruction = 0x881DF574;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// rlwinm r21,r15,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r28,r27,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r27.u64;
loc_881DF58C:
	// srawi r9,r23,17
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r23.s32 >> 17;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x881df5e8
	if (ctx.cr6.lt) goto loc_881DF5E8;
	// mullw r3,r9,r5
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r31,r3,r19
	ctx.r31.u64 = ctx.r3.u64 + ctx.r19.u64;
	// add r30,r7,r22
	ctx.r30.u64 = ctx.r7.u64 + ctx.r22.u64;
	// rlwinm r29,r25,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
loc_881DF5B4:
	// srawi r9,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 17;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r14,r3,r9
	ctx.r14.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// lbzx r9,r31,r9
	ctx.current_instruction = 0x881DF5C4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r14,r14,r4
	ctx.current_instruction = 0x881DF5C8;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r14.u32 + ctx.r4.u32);
	// stbx r14,r8,r26
	ctx.current_instruction = 0x881DF5CC;
	REX_STORE_U8(ctx.r8.u32 + ctx.r26.u32, ctx.r14.u8);
	// stbx r9,r30,r11
	ctx.current_instruction = 0x881DF5D0;
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// ble cr6,0x881df5b4
	if (!ctx.cr6.gt) goto loc_881DF5B4;
	// lwz r14,276(r1)
	ctx.current_instruction = 0x881DF5E0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r30,356(r1)
	ctx.current_instruction = 0x881DF5E4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
loc_881DF5E8:
	// add r23,r21,r23
	ctx.r23.u64 = ctx.r21.u64 + ctx.r23.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// cmpw cr6,r23,r20
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x881df58c
	if (!ctx.cr6.gt) goto loc_881DF58C;
	// lwz r29,340(r1)
	ctx.current_instruction = 0x881DF5F8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_881DF5FC:
	// addi r11,r14,1
	ctx.r11.s64 = ctx.r14.s64 + 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881df64c
	if (!ctx.cr6.eq) goto loc_881DF64C;
	// clrlwi r11,r29,30
	ctx.r11.u64 = ctx.r29.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881df64c
	if (!ctx.cr6.eq) goto loc_881DF64C;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r5,324(r1)
	ctx.current_instruction = 0x881DF61C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// lwz r4,284(r1)
	ctx.current_instruction = 0x881DF624;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x881DF62C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r14,-3
	ctx.r3.s64 = ctx.r14.s64 + -3;
	// bl 0x881de698
	ctx.lr = 0x881DF644;
	sub_881DE698(ctx, base);
loc_881DF644:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881DF64C:
	// srawi r11,r15,4
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r15.s32 >> 4;
	// lwz r10,96(r1)
	ctx.current_instruction = 0x881DF650;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r29,r27,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r27.u64;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x881df6fc
	if (ctx.cr6.lt) goto loc_881DF6FC;
	// srawi r11,r25,4
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 4;
	// rlwinm r31,r15,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r16
	ctx.r10.u64 = ctx.r11.u64 + ctx.r16.u64;
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// subf r4,r27,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r27.u64;
loc_881DF688:
	// add r11,r3,r15
	ctx.r11.u64 = ctx.r3.u64 + ctx.r15.u64;
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// srawi r6,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x881df6ec
	if (ctx.cr6.lt) goto loc_881DF6EC;
	// lwz r5,324(r1)
	ctx.current_instruction = 0x881DF6A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r28,356(r1)
	ctx.current_instruction = 0x881DF6A8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mullw r7,r9,r5
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// mullw r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r6,284(r1)
	ctx.current_instruction = 0x881DF6B4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r5,r8,r28
	ctx.r5.u64 = ctx.r8.u64 + ctx.r28.u64;
loc_881DF6C4:
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// lwz r28,364(r1)
	ctx.current_instruction = 0x881DF6C8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// lbzx r26,r7,r9
	ctx.current_instruction = 0x881DF6D4;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r9,r6,r9
	ctx.current_instruction = 0x881DF6D8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// stbx r26,r8,r10
	ctx.current_instruction = 0x881DF6DC;
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r26.u8);
	// stbx r9,r5,r10
	ctx.current_instruction = 0x881DF6E0;
	REX_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r9.u8);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// ble cr6,0x881df6c4
	if (!ctx.cr6.gt) goto loc_881DF6C4;
loc_881DF6EC:
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x881df688
	if (!ctx.cr6.gt) goto loc_881DF688;
loc_881DF6FC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E51F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E51F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E51F8) {
			switch (rex_dispatch_address) {
				case 0x881E5200:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E51F8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E5200: goto loc_881E5200;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881E5200;
	__savegprlr_14(ctx, base);
loc_881E5200:
	// stwu r1,-896(r1)
	ctx.current_instruction = 0x881E5200;
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,996(r1)
	ctx.current_instruction = 0x881E5204;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 996);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// stw r9,964(r1)
	ctx.current_instruction = 0x881E5210;
	REX_STORE_U32(ctx.r1.u32 + 964, ctx.r9.u32);
	// srawi r31,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 8;
	// stw r4,92(r1)
	ctx.current_instruction = 0x881E5218;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,940(r1)
	ctx.current_instruction = 0x881E5220;
	REX_STORE_U32(ctx.r1.u32 + 940, ctx.r6.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// vspltisb v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x0)));
	// mullw r29,r31,r18
	ctx.r29.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r18.s32);
	// vspltish v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x2)));
	// vspltish v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x3)));
	// stw r5,52(r1)
	ctx.current_instruction = 0x881E5238;
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r5.u32);
	// add r30,r9,r4
	ctx.r30.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r19,r11,r4
	ctx.r19.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r26,r4,r8
	ctx.r26.u64 = ctx.r4.u64 + ctx.r8.u64;
	// stw r30,76(r1)
	ctx.current_instruction = 0x881E5248;
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r30.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// rlwinm r9,r6,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFC0;
	// stw r26,84(r1)
	ctx.current_instruction = 0x881E5254;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r3,r5,r7
	ctx.r3.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stw r4,80(r1)
	ctx.current_instruction = 0x881E5264;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,16
	ctx.r31.s64 = 16;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x881e538c
	if (!ctx.cr6.gt) goto loc_881E538C;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// addi r8,r27,1
	ctx.r8.s64 = ctx.r27.s64 + 1;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r9,r5,32
	ctx.r9.s64 = ctx.r5.s64 + 32;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// rlwinm r7,r28,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r28,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r22,r7,1
	ctx.r22.s64 = ctx.r7.s64 + 1;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_881E52AC:
	// addi r28,r8,-1
	ctx.r28.s64 = ctx.r8.s64 + -1;
	// lvrx128 v63,r21,r8
	temp.u32 = ctx.r21.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r24,r9,-32
	ctx.r24.s64 = ctx.r9.s64 + -32;
	// vor128 v9,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r23,r9,-16
	ctx.r23.s64 = ctx.r9.s64 + -16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lvrx128 v61,r31,r28
	temp.u32 = ctx.r31.u32 + ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v10,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v11,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vmrglb v9,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r28,r9,16
	ctx.r28.s64 = ctx.r9.s64 + 16;
	// vaddshs v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmrghb v8,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmrglb v7,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v2,v6,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v4,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v3,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v1,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v31,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v30,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v29,v3,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v28,v3,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v27,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v26,v30,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v25,v29,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v24,v7,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v23,v28,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus v9,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vpkshus v10,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vpkshus v8,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vmrghb v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrglb v11,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrghb v9,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrglb v10,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrghb v17,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v16,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrghb v15,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrglb v14,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// stvlx v17,0,r24
	ctx.current_instruction = 0x881E5364;
	ea = ctx.r24.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v17.u8[15 - i]);
	// stvrx v17,r24,r31
	ctx.current_instruction = 0x881E5368;
	ea = ctx.r24.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v17.u8[i]);
	// stvlx v16,0,r23
	ctx.current_instruction = 0x881E536C;
	ea = ctx.r23.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v16.u8[15 - i]);
	// stvrx v16,r23,r31
	ctx.current_instruction = 0x881E5370;
	ea = ctx.r23.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v16.u8[i]);
	// stvlx v15,0,r9
	ctx.current_instruction = 0x881E5374;
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v15.u8[15 - i]);
	// stvrx v15,r9,r31
	ctx.current_instruction = 0x881E5378;
	ea = ctx.r9.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v15.u8[i]);
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// stvlx v14,0,r28
	ctx.current_instruction = 0x881E5380;
	ea = ctx.r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v14.u8[15 - i]);
	// stvrx v14,r28,r31
	ctx.current_instruction = 0x881E5384;
	ea = ctx.r28.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v14.u8[i]);
	// bdnz 0x881e52ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E52AC;
loc_881E538C:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x881e5420
	if (!ctx.cr6.lt) goto loc_881E5420;
	// subf r8,r11,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r9,r22,r27
	ctx.r9.u64 = ctx.r22.u64 + ctx.r27.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r22,r5,1
	ctx.r22.s64 = ctx.r5.s64 + 1;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r21,r5,2
	ctx.r21.s64 = ctx.r5.s64 + 2;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r20,r5,3
	ctx.r20.s64 = ctx.r5.s64 + 3;
	// addi r24,r9,-1
	ctx.r24.s64 = ctx.r9.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881E53BC:
	// lbzx r17,r7,r27
	ctx.current_instruction = 0x881E53BC;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbzu r28,1(r24)
	ctx.current_instruction = 0x881E53C4;
	ea = 1 + ctx.r24.u32;
	ctx.r28.u64 = REX_LOAD_U8(ea);
	ctx.r24.u32 = ea;
	// rotlwi r23,r17,1
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r17.u32, 1);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// rotlwi r28,r28,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// add r23,r17,r23
	ctx.r23.u64 = ctx.r17.u64 + ctx.r23.u64;
	// stbx r17,r11,r5
	ctx.current_instruction = 0x881E53D8;
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r17.u8);
	// add r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 + ctx.r28.u64;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// add r23,r23,r8
	ctx.r23.u64 = ctx.r23.u64 + ctx.r8.u64;
	// add r8,r8,r17
	ctx.r8.u64 = ctx.r8.u64 + ctx.r17.u64;
	// add r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 + ctx.r9.u64;
	// srawi r28,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r23.s32 >> 2;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// clrlwi r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbx r28,r22,r11
	ctx.current_instruction = 0x881E5408;
	REX_STORE_U8(ctx.r22.u32 + ctx.r11.u32, ctx.r28.u8);
	// stbx r8,r11,r21
	ctx.current_instruction = 0x881E540C;
	REX_STORE_U8(ctx.r11.u32 + ctx.r21.u32, ctx.r8.u8);
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
	// stbx r9,r11,r20
	ctx.current_instruction = 0x881E5414;
	REX_STORE_U8(ctx.r11.u32 + ctx.r20.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881e53bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E53BC;
loc_881E5420:
	// lbzx r7,r7,r27
	ctx.current_instruction = 0x881E5420;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r8,980(r1)
	ctx.current_instruction = 0x881E5428;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 980);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r27,r27,r18
	ctx.r27.u64 = ctx.r27.u64 + ctx.r18.u64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// stw r27,60(r1)
	ctx.current_instruction = 0x881E5438;
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r27.u32);
	// stbx r7,r11,r5
	ctx.current_instruction = 0x881E543C;
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u8);
	// stb r7,1(r9)
	ctx.current_instruction = 0x881E5440;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// stb r7,2(r9)
	ctx.current_instruction = 0x881E5444;
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r7.u8);
	// stb r7,3(r9)
	ctx.current_instruction = 0x881E5448;
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r7.u8);
	// bge cr6,0x881e6184
	if (!ctx.cr6.lt) goto loc_881E6184;
	// subf r11,r8,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r28,r19,2
	ctx.r28.s64 = ctx.r19.s64 + 2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r5,r30,r19
	ctx.r5.u64 = ctx.r19.u64 - ctx.r30.u64;
	// stw r28,16(r1)
	ctx.current_instruction = 0x881E5460;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r28.u32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r5,88(r1)
	ctx.current_instruction = 0x881E5468;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,72(r1)
	ctx.current_instruction = 0x881E5470;
	REX_STORE_U32(ctx.r1.u32 + 72, ctx.r10.u32);
loc_881E5474:
	// rlwinm r10,r6,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFC0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881e5d5c
	if (!ctx.cr6.gt) goto loc_881E5D5C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r11,r5,r30
	ctx.r11.u64 = ctx.r5.u64 + ctx.r30.u64;
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// subf r8,r3,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r3.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// subf r7,r26,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r26.u64;
	// stw r8,64(r1)
	ctx.current_instruction = 0x881E54A4;
	REX_STORE_U32(ctx.r1.u32 + 64, ctx.r8.u32);
	// rlwinm r24,r9,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r6,r30,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r30.u64;
	// stw r7,40(r1)
	ctx.current_instruction = 0x881E54B0;
	REX_STORE_U32(ctx.r1.u32 + 40, ctx.r7.u32);
	// subf r15,r29,r11
	ctx.r15.u64 = ctx.r11.u64 - ctx.r29.u64;
	// addi r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r6,48(r1)
	ctx.current_instruction = 0x881E54C0;
	REX_STORE_U32(ctx.r1.u32 + 48, ctx.r6.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,20(r1)
	ctx.current_instruction = 0x881E54C8;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r11.u32);
	// addi r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 1;
	// addi r7,r26,16
	ctx.r7.s64 = ctx.r26.s64 + 16;
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// subf r19,r29,r3
	ctx.r19.u64 = ctx.r3.u64 - ctx.r29.u64;
	// subf r18,r29,r25
	ctx.r18.u64 = ctx.r25.u64 - ctx.r29.u64;
	// subf r17,r29,r26
	ctx.r17.u64 = ctx.r26.u64 - ctx.r29.u64;
	// subf r16,r29,r30
	ctx.r16.u64 = ctx.r30.u64 - ctx.r29.u64;
	// subf r14,r3,r25
	ctx.r14.u64 = ctx.r25.u64 - ctx.r3.u64;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
loc_881E54F4:
	// addi r23,r4,-1
	ctx.r23.s64 = ctx.r4.s64 + -1;
	// lvlx128 v59,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v58,r31,r4
	temp.u32 = ctx.r31.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r9,16
	ctx.r9.s64 = 16;
	// vor128 v10,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// addi r22,r10,-32
	ctx.r22.s64 = ctx.r10.s64 + -32;
	// addi r21,r10,-16
	ctx.r21.s64 = ctx.r10.s64 + -16;
	// lvlx128 v57,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r20,r8,-48
	ctx.r20.s64 = ctx.r8.s64 + -48;
	// lvrx128 v56,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v55,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,560
	ctx.r6.s64 = ctx.r1.s64 + 560;
	// lvrx128 v54,r31,r23
	temp.u32 = ctx.r31.u32 + ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v8,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v11,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vmrglb v7,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r23,r10,16
	ctx.r23.s64 = ctx.r10.s64 + 16;
	// lvrx128 v53,r9,r22
	temp.u32 = ctx.r9.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v49,r9,r21
	temp.u32 = ctx.r9.u32 + ctx.r21.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v57,v56
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vaddshs v4,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvlx128 v52,r0,r22
	temp.u32 = ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v10,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v3,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrglb v9,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvlx128 v51,r0,r21
	temp.u32 = ctx.r21.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v50,r31,r23
	temp.u32 = ctx.r31.u32 + ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r9,r19,r10
	ctx.r9.u64 = ctx.r19.u64 + ctx.r10.u64;
	// vaddshs v2,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvlx128 v48,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddshs v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r23,r8,-32
	ctx.r23.s64 = ctx.r8.s64 + -32;
	// vaddshs v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v1,v3,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v30,v10,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v29,v6,v10
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v28,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v26,v6,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v27,v5,v3
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v25,v29,v8
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v24,v9,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v28,v7
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsrah v21,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus v9,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vor128 v3,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vor128 v1,v51,v49
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vpkshus v8,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vor128 v30,v48,v50
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vpkshus v10,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vmrghb v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrglb v6,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrghb v16,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v9,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrglb v8,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrglb v15,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v14,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v11,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v10,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrghb v9,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrglb v8,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrghb v7,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v6,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v4,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvlx v11,0,r20
	ctx.current_instruction = 0x881E5604;
	ea = ctx.r20.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// vmrglb v3,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvrx v11,r20,r31
	ctx.current_instruction = 0x881E560C;
	ea = ctx.r20.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v11.u8[i]);
	// vmrglb v11,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvlx v10,0,r23
	ctx.current_instruction = 0x881E5614;
	ea = ctx.r23.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// vmrglb v5,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v26,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrghb v2,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v29,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v24,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v25,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvrx v10,r23,r31
	ctx.current_instruction = 0x881E5630;
	ea = ctx.r23.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v10.u8[i]);
	// vmrglb v28,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v10,v26,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvlx v9,r19,r10
	ctx.current_instruction = 0x881E563C;
	ea = ctx.r19.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvrx v9,r9,r31
	ctx.current_instruction = 0x881E5640;
	ea = ctx.r9.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v9.u8[i]);
	// addi r9,r1,608
	ctx.r9.s64 = ctx.r1.s64 + 608;
	// stvlx v8,0,r8
	ctx.current_instruction = 0x881E5648;
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// vaddshs v9,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvrx v8,r8,r31
	ctx.current_instruction = 0x881E5650;
	ea = ctx.r8.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v8.u8[i]);
	// vor v1,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// stvx128 v10,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,624
	ctx.r6.s64 = ctx.r1.s64 + 624;
	// vaddshs v17,v26,v10
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmrglb v29,v13,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor v10,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v16.u8));
	// vmrghb v16,v13,v31
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v8,v24,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvx128 v9,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v23,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrglb v27,v13,v30
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v31,v25,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r9,r1,480
	ctx.r9.s64 = ctx.r1.s64 + 480;
	// vor v9,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v15.u8));
	// vmrghb v15,v13,v30
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v30,v24,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx128 v8,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r28,120(r1)
	ctx.current_instruction = 0x881E5698;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r28.u64);
	// addi r28,r1,496
	ctx.r28.s64 = ctx.r1.s64 + 496;
	// vaddshs v8,v23,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// std r11,112(r1)
	ctx.current_instruction = 0x881E56A4;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// vaddshs v19,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// addi r11,r1,464
	ctx.r11.s64 = ctx.r1.s64 + 464;
	// std r29,104(r1)
	ctx.current_instruction = 0x881E56B0;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// addi r29,r1,528
	ctx.r29.s64 = ctx.r1.s64 + 528;
	// vaddshs v20,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// addi r23,r1,448
	ctx.r23.s64 = ctx.r1.s64 + 448;
	// stvx128 v8,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,688
	ctx.r9.s64 = ctx.r1.s64 + 688;
	// stvx128 v30,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v30,v19,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// stvx128 v17,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// stvx128 v31,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v22,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v31,v20,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// std r27,176(r1)
	ctx.current_instruction = 0x881E56E4;
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r27.u64);
	// stvx128 v30,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v47,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lvx128 v45,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v18,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v13,v22,v4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// addi r22,r1,544
	ctx.r22.s64 = ctx.r1.s64 + 544;
	// vaddshs v21,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvx128 v31,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v31,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v28.u8));
	// addi r11,r1,720
	ctx.r11.s64 = ctx.r1.s64 + 720;
	// vor v8,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v14.u8));
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
	// vaddshs v28,v18,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// std r24,144(r1)
	ctx.current_instruction = 0x881E5720;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r24.u64);
	// addi r21,r1,512
	ctx.r21.s64 = ctx.r1.s64 + 512;
	// addi r20,r1,576
	ctx.r20.s64 = ctx.r1.s64 + 576;
	// vaddshs v17,v21,v3
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// addi r24,r1,160
	ctx.r24.s64 = ctx.r1.s64 + 160;
	// vaddshs v14,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// stvx128 v13,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v30,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v16.u8));
	// vaddshs v13,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// stvx128 v28,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r19,96(r1)
	ctx.current_instruction = 0x881E5748;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r19.u64);
	// stvx128 v17,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v28,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v15.u8));
	// stvx128 v14,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r19,r1,240
	ctx.r19.s64 = ctx.r1.s64 + 240;
	// stvx128 v46,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// vaddshs v17,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stvx128 v45,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v16,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v15,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// stvx128 v13,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v14,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// vor128 v43,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vaddshs v12,v16,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// addi r22,r1,304
	ctx.r22.s64 = ctx.r1.s64 + 304;
	// vaddshs v13,v17,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r23,r1,272
	ctx.r23.s64 = ctx.r1.s64 + 272;
	// vor128 v42,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// addi r21,r1,272
	ctx.r21.s64 = ctx.r1.s64 + 272;
	// vaddshs v8,v15,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// addi r20,r1,160
	ctx.r20.s64 = ctx.r1.s64 + 160;
	// stvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// stvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v38,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v13,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// stvx128 v8,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v39,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_load_si128((simde__m128i*)ctx.v27.u8));
	// lvx128 v12,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r21,r1,368
	ctx.r21.s64 = ctx.r1.s64 + 368;
	// lvx128 v10,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v40,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// lvx128 v8,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r22,r1,192
	ctx.r22.s64 = ctx.r1.s64 + 192;
	// lvx128 v44,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v8,v8,v27
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// stvx128 v44,r0,r19
	ea = (ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v27,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// stvx128 v8,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v31,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// addi r28,r1,208
	ctx.r28.s64 = ctx.r1.s64 + 208;
	// stvx128 v31,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// vaddshs v8,v18,v27
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// addi r22,r1,352
	ctx.r22.s64 = ctx.r1.s64 + 352;
	// stvx128 v8,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,352
	ctx.r24.s64 = ctx.r1.s64 + 352;
	// vaddshs v13,v16,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r23,r1,336
	ctx.r23.s64 = ctx.r1.s64 + 336;
	// stvx128 v13,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v41,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// addi r20,r1,336
	ctx.r20.s64 = ctx.r1.s64 + 336;
	// vaddshs v30,v14,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// addi r21,r1,256
	ctx.r21.s64 = ctx.r1.s64 + 256;
	// addi r27,r1,256
	ctx.r27.s64 = ctx.r1.s64 + 256;
	// vaddshs v10,v17,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v12,v15,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r29,r1,384
	ctx.r29.s64 = ctx.r1.s64 + 384;
	// vor128 v37,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvx128 v27,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r23,r1,384
	ctx.r23.s64 = ctx.r1.s64 + 384;
	// lvx128 v31,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r20,r1,128
	ctx.r20.s64 = ctx.r1.s64 + 128;
	// stvx128 v12,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,432
	ctx.r6.s64 = ctx.r1.s64 + 432;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvx128 v30,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r22,r1,432
	ctx.r22.s64 = ctx.r1.s64 + 432;
	// vor128 v36,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// stvx128 v10,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r23,r1,160
	ctx.r23.s64 = ctx.r1.s64 + 160;
	// lvx128 v10,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
	// lvx128 v9,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v35,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_load_si128((simde__m128i*)ctx.v24.u8));
	// vaddshs v9,v9,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// lvx128 v13,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v34,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_load_si128((simde__m128i*)ctx.v26.u8));
	// addi r21,r1,416
	ctx.r21.s64 = ctx.r1.s64 + 416;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// lvx128 v29,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,400
	ctx.r29.s64 = ctx.r1.s64 + 400;
	// lvx128 v24,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,320
	ctx.r28.s64 = ctx.r1.s64 + 320;
	// lvx128 v26,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v18,v18,v12
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// vaddshs v15,v15,v10
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// lvx128 v9,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v31,v14,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// vaddshs v16,v16,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// addi r22,r1,448
	ctx.r22.s64 = ctx.r1.s64 + 448;
	// vaddshs v7,v18,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// addi r20,r1,512
	ctx.r20.s64 = ctx.r1.s64 + 512;
	// vaddshs v9,v29,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r23,r1,480
	ctx.r23.s64 = ctx.r1.s64 + 480;
	// stvx128 v31,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v5,v15,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// lvx128 v15,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v6,v16,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsrah v16,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// addi r21,r1,544
	ctx.r21.s64 = ctx.r1.s64 + 544;
	// stvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v17,v17,v13
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// lvx128 v7,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v9,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v30,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// addi r11,r1,576
	ctx.r11.s64 = ctx.r1.s64 + 576;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lvx128 v18,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v11,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// stvx128 v9,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,400
	ctx.r29.s64 = ctx.r1.s64 + 400;
	// stvx128 v30,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,160
	ctx.r28.s64 = ctx.r1.s64 + 160;
	// addi r27,r1,320
	ctx.r27.s64 = ctx.r1.s64 + 320;
	// stw r9,28(r1)
	ctx.current_instruction = 0x881E5944;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r9.u32);
	// vsrah v17,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// subf r9,r30,r25
	ctx.r9.u64 = ctx.r25.u64 - ctx.r30.u64;
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// lvx128 v12,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r29,28(r1)
	ctx.current_instruction = 0x881E595C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lvx128 v10,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r6,28(r1)
	ctx.current_instruction = 0x881E5964;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r6.u32);
	// vaddshs v11,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vpkshus128 v33,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// lvx128 v16,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r22,r1,608
	ctx.r22.s64 = ctx.r1.s64 + 608;
	// lvx128 v15,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r21,r1,384
	ctx.r21.s64 = ctx.r1.s64 + 384;
	// lvx128 v17,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// vaddshs v7,v26,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v14,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v11,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v9,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r20,r1,560
	ctx.r20.s64 = ctx.r1.s64 + 560;
	// lvx128 v8,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r22,28(r1)
	ctx.current_instruction = 0x881E59A4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lvx128 v11,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v7,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvlx128 v33,r9,r5
	ctx.current_instruction = 0x881E59B0;
	ea = ctx.r9.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// add r23,r9,r5
	ctx.r23.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lvx128 v3,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,704
	ctx.r11.s64 = ctx.r1.s64 + 704;
	// vaddshs v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// subf r6,r26,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r26.u64;
	// lvx128 v9,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r9,r3,r26
	ctx.r9.u64 = ctx.r26.u64 - ctx.r3.u64;
	// vsrah v5,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v6,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r21,r9,r8
	ctx.r21.u64 = ctx.r9.u64 + ctx.r8.u64;
	// vsrah v7,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v3,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v3,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// stvrx128 v33,r23,r31
	ctx.current_instruction = 0x881E59E8;
	ea = ctx.r23.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v33.u8[i]);
	// add r23,r6,r7
	ctx.r23.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lvx128 v13,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r22,r26,r30
	ctx.r22.u64 = ctx.r30.u64 - ctx.r26.u64;
	// vsrah v4,v4,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stw r23,32(r1)
	ctx.current_instruction = 0x881E59FC;
	REX_STORE_U32(ctx.r1.u32 + 32, ctx.r23.u32);
	// vaddshs v12,v8,v3
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vpkshus128 v32,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// lvx128 v6,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,672
	ctx.r11.s64 = ctx.r1.s64 + 672;
	// vaddshs v11,v11,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// addi r28,r1,416
	ctx.r28.s64 = ctx.r1.s64 + 416;
	// vaddshs v2,v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v12,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stw r21,36(r1)
	ctx.current_instruction = 0x881E5A20;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r21.u32);
	// addi r21,r1,624
	ctx.r21.s64 = ctx.r1.s64 + 624;
	// vaddshs v1,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// addi r29,r1,288
	ctx.r29.s64 = ctx.r1.s64 + 288;
	// vaddshs v5,v20,v14
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// stvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v11,v23,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// lvx128 v9,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v12,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// addi r28,r1,272
	ctx.r28.s64 = ctx.r1.s64 + 272;
	// vaddshs v18,v13,v18
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// addi r27,r1,320
	ctx.r27.s64 = ctx.r1.s64 + 320;
	// vsrah v1,v1,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// addi r24,r1,528
	ctx.r24.s64 = ctx.r1.s64 + 528;
	// vsrah v2,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v13,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r21,r1,224
	ctx.r21.s64 = ctx.r1.s64 + 224;
	// addi r19,r1,640
	ctx.r19.s64 = ctx.r1.s64 + 640;
	// vaddshs v14,v3,v14
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// lvx128 v31,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,592
	ctx.r28.s64 = ctx.r1.s64 + 592;
	// vpkshus128 v62,v2,v1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v8,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,496
	ctx.r27.s64 = ctx.r1.s64 + 496;
	// addi r24,r1,304
	ctx.r24.s64 = ctx.r1.s64 + 304;
	// lvx128 v3,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r19
	ea = (ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r28,28(r1)
	ctx.current_instruction = 0x881E5A90;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r28.u32);
	// addi r21,r1,336
	ctx.r21.s64 = ctx.r1.s64 + 336;
	// lwz r20,32(r1)
	ctx.current_instruction = 0x881E5A98;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 32);
	// vpkshus128 v63,v4,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v7,v22,v16
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v6,v21,v15
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// addi r23,r7,-16
	ctx.r23.s64 = ctx.r7.s64 + -16;
	// lvx128 v30,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v19,v17
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vaddshs v16,v9,v16
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// add r22,r22,r7
	ctx.r22.u64 = ctx.r22.u64 + ctx.r7.u64;
	// vaddshs v17,v8,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vsrah v18,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v31,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// vsrah v10,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v61,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// lvx128 v10,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,240
	ctx.r29.s64 = ctx.r1.s64 + 240;
	// addi r11,r1,464
	ctx.r11.s64 = ctx.r1.s64 + 464;
	// vaddshs v13,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v15,v10,v15
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// lvx128 v1,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,400
	ctx.r29.s64 = ctx.r1.s64 + 400;
	// lvx128 v3,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// stvx128 v1,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,432
	ctx.r28.s64 = ctx.r1.s64 + 432;
	// lvx128 v1,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v13,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v32,r6,r7
	ctx.current_instruction = 0x881E5B10;
	ea = ctx.r6.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// add r6,r18,r10
	ctx.r6.u64 = ctx.r18.u64 + ctx.r10.u64;
	// stvrx128 v32,r20,r31
	ctx.current_instruction = 0x881E5B18;
	ea = ctx.r20.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v32.u8[i]);
	// lvx128 v29,r0,r19
	ea = (ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r19,28(r1)
	ctx.current_instruction = 0x881E5B20;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lvx128 v12,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v29,v2
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r18,r10
	ctx.current_instruction = 0x881E5B38;
	ea = ctx.r18.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// lvx128 v27,r0,r19
	ea = (ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v27,v27,v3
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvrx128 v63,r6,r31
	ctx.current_instruction = 0x881E5B44;
	ea = ctx.r6.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// vsrah v15,v15,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r6,r14,r8
	ctx.r6.u64 = ctx.r14.u64 + ctx.r8.u64;
	// vsrah v16,v16,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v60,v13,v18
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsrah v14,v14,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v62,r14,r8
	ctx.current_instruction = 0x881E5B5C;
	ea = ctx.r14.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// vsrah v17,v17,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stw r22,32(r1)
	ctx.current_instruction = 0x881E5B64;
	REX_STORE_U32(ctx.r1.u32 + 32, ctx.r22.u32);
	// vaddshs v30,v30,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// lwz r22,48(r1)
	ctx.current_instruction = 0x881E5B6C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 48);
	// vpkshus128 v59,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v18,v12,v7
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v13,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvrx128 v62,r6,r31
	ctx.current_instruction = 0x881E5B7C;
	ea = ctx.r6.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// vaddshs v12,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vpkshus128 v58,v14,v17
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vsrah v10,v29,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r6,r17,r10
	ctx.r6.u64 = ctx.r17.u64 + ctx.r10.u64;
	// vsrah v9,v27,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v61,r0,r23
	ctx.current_instruction = 0x881E5B94;
	ea = ctx.r23.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// vsrah v16,v31,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvrx128 v61,r23,r31
	ctx.current_instruction = 0x881E5B9C;
	ea = ctx.r23.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// vsrah v15,v30,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v60,r0,r7
	ctx.current_instruction = 0x881E5BA4;
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r7,r31
	ctx.current_instruction = 0x881E5BA8;
	ea = ctx.r7.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// lwz r23,36(r1)
	ctx.current_instruction = 0x881E5BAC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// vpkshus128 v57,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stvlx128 v59,r17,r10
	ctx.current_instruction = 0x881E5BB4;
	ea = ctx.r17.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r6,r31
	ctx.current_instruction = 0x881E5BB8;
	ea = ctx.r6.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// vaddshs v8,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vpkshus128 v56,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// stvlx128 v58,r9,r8
	ctx.current_instruction = 0x881E5BC4;
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// subf r9,r26,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r26.u64;
	// lwz r6,64(r1)
	ctx.current_instruction = 0x881E5BCC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 64);
	// stvrx128 v58,r23,r31
	ctx.current_instruction = 0x881E5BD0;
	ea = ctx.r23.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v58.u8[i]);
	// vsrah v18,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r23,r6,r8
	ctx.r23.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r22,r22,r5
	ctx.r22.u64 = ctx.r22.u64 + ctx.r5.u64;
	// vor128 v26,v34,v34
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v34.u8));
	// stvlx128 v57,r0,r5
	ctx.current_instruction = 0x881E5BE8;
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stw r23,28(r1)
	ctx.current_instruction = 0x881E5BEC;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r23.u32);
	// stvrx128 v57,r5,r31
	ctx.current_instruction = 0x881E5BF0;
	ea = ctx.r5.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v57.u8[i]);
	// vor128 v24,v35,v35
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_load_si128((simde__m128i*)ctx.v35.u8));
	// stvlx128 v56,r9,r7
	ctx.current_instruction = 0x881E5BF8;
	ea = ctx.r9.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// subf r9,r3,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r3.u64;
	// vpkshus128 v55,v18,v14
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// stw r22,68(r1)
	ctx.current_instruction = 0x881E5C04;
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r22.u32);
	// add r23,r9,r8
	ctx.r23.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r22,32(r1)
	ctx.current_instruction = 0x881E5C0C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 32);
	// lwz r20,40(r1)
	ctx.current_instruction = 0x881E5C10;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 40);
	// vaddshs v14,v23,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stw r23,36(r1)
	ctx.current_instruction = 0x881E5C18;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r23.u32);
	// vsrah v17,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r23,r16,r10
	ctx.r23.u64 = ctx.r16.u64 + ctx.r10.u64;
	// vaddshs v15,v26,v3
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v11,v24,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// add r21,r15,r10
	ctx.r21.u64 = ctx.r15.u64 + ctx.r10.u64;
	// vaddshs v16,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// add r20,r20,r7
	ctx.r20.u64 = ctx.r20.u64 + ctx.r7.u64;
	// vsrah v13,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvrx128 v56,r22,r31
	ctx.current_instruction = 0x881E5C3C;
	ea = ctx.r22.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v56.u8[i]);
	// vor128 v9,v37,v37
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v37.u8));
	// stw r20,56(r1)
	ctx.current_instruction = 0x881E5C44;
	REX_STORE_U32(ctx.r1.u32 + 56, ctx.r20.u32);
	// vor128 v10,v38,v38
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v38.u8));
	// stw r21,44(r1)
	ctx.current_instruction = 0x881E5C4C;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r21.u32);
	// vor128 v31,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// stvlx128 v55,r16,r10
	ctx.current_instruction = 0x881E5C54;
	ea = ctx.r16.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// vor128 v8,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// lwz r21,48(r1)
	ctx.current_instruction = 0x881E5C5C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 48);
	// lwz r20,40(r1)
	ctx.current_instruction = 0x881E5C60;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 40);
	// vpkshus128 v54,v13,v17
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v6,v21,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvrx128 v55,r23,r31
	ctx.current_instruction = 0x881E5C6C;
	ea = ctx.r23.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v55.u8[i]);
	// vaddshs v3,v22,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v2,v9,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v1,v10,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vaddshs v26,v19,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v25,v20,v5
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v24,v31,v14
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vaddshs v23,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vor128 v29,v36,v36
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v36.u8));
	// lwz r29,36(r1)
	ctx.current_instruction = 0x881E5C90;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// vor128 v30,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// stvlx128 v54,r9,r8
	ctx.current_instruction = 0x881E5C98;
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// vor128 v27,v39,v39
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v39.u8));
	// lwz r9,68(r1)
	ctx.current_instruction = 0x881E5CA0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// vsrah v20,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lwz r23,56(r1)
	ctx.current_instruction = 0x881E5CA8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// vaddshs v22,v29,v6
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// lwz r22,44(r1)
	ctx.current_instruction = 0x881E5CB0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// vaddshs v21,v30,v3
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvrx128 v54,r29,r31
	ctx.current_instruction = 0x881E5CB8;
	ea = ctx.r29.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v54.u8[i]);
	// vsrah v19,v1,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lwz r11,28(r1)
	ctx.current_instruction = 0x881E5CC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// vaddshs v18,v27,v26
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// ld r29,104(r1)
	ctx.current_instruction = 0x881E5CC8;
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// vaddshs v17,v28,v25
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// ld r28,120(r1)
	ctx.current_instruction = 0x881E5CD0;
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// vsrah v16,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// ld r27,176(r1)
	ctx.current_instruction = 0x881E5CD8;
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// vsrah v15,v23,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v53,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vsrah v14,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// ld r24,144(r1)
	ctx.current_instruction = 0x881E5CE8;
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// vsrah v11,v21,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// ld r19,96(r1)
	ctx.current_instruction = 0x881E5CF0;
	ctx.r19.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// vsrah v10,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// vsrah v9,v17,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v52,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vor128 v13,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// vpkshus128 v51,v11,v14
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vor128 v12,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// stvlx128 v53,r21,r5
	ctx.current_instruction = 0x881E5D10;
	ea = ctx.r21.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// addi r5,r5,64
	ctx.r5.s64 = ctx.r5.s64 + 64;
	// vpkshus128 v50,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stvrx128 v53,r9,r31
	ctx.current_instruction = 0x881E5D1C;
	ea = ctx.r9.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v53.u8[i]);
	// stvlx128 v52,r20,r7
	ctx.current_instruction = 0x881E5D20;
	ea = ctx.r20.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// addi r7,r7,64
	ctx.r7.s64 = ctx.r7.s64 + 64;
	// stvrx128 v52,r23,r31
	ctx.current_instruction = 0x881E5D28;
	ea = ctx.r23.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v52.u8[i]);
	// stvlx128 v51,r15,r10
	ctx.current_instruction = 0x881E5D2C;
	ea = ctx.r15.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvrx128 v51,r22,r31
	ctx.current_instruction = 0x881E5D34;
	ea = ctx.r22.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// stvlx128 v50,r6,r8
	ctx.current_instruction = 0x881E5D38;
	ea = ctx.r6.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvrx128 v50,r11,r31
	ctx.current_instruction = 0x881E5D40;
	ea = ctx.r11.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v50.u8[i]);
	// ld r11,112(r1)
	ctx.current_instruction = 0x881E5D44;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// bdnz 0x881e54f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E54F4;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x881E5D4C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,88(r1)
	ctx.current_instruction = 0x881E5D50;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,940(r1)
	ctx.current_instruction = 0x881E5D54;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 940);
	// lwz r8,20(r1)
	ctx.current_instruction = 0x881E5D58;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
loc_881E5D5C:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x881e6070
	if (!ctx.cr6.lt) goto loc_881E6070;
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// addi r10,r25,2
	ctx.r10.s64 = ctx.r25.s64 + 2;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// add r9,r8,r27
	ctx.r9.u64 = ctx.r8.u64 + ctx.r27.u64;
	// rlwinm r8,r7,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// add r4,r7,r30
	ctx.r4.u64 = ctx.r7.u64 + ctx.r30.u64;
	// stw r6,20(r1)
	ctx.current_instruction = 0x881E5D8C;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r6.u32);
	// stw r5,44(r1)
	ctx.current_instruction = 0x881E5D90;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r5.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r4,64(r1)
	ctx.current_instruction = 0x881E5D9C;
	REX_STORE_U32(ctx.r1.u32 + 64, ctx.r4.u32);
	// b 0x881e5da8
	goto loc_881E5DA8;
loc_881E5DA4:
	// lwz r10,48(r1)
	ctx.current_instruction = 0x881E5DA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 48);
loc_881E5DA8:
	// lbzu r9,1(r10)
	ctx.current_instruction = 0x881E5DA8;
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r8,r29,3
	ctx.r8.s64 = ctx.r29.s64 + 3;
	// lbzx r19,r24,r27
	ctx.current_instruction = 0x881E5DB0;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r27.u32);
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r6,r24,1
	ctx.r6.s64 = ctx.r24.s64 + 1;
	// std r31,96(r1)
	ctx.current_instruction = 0x881E5DBC;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// rotlwi r7,r19,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r19.u32, 1);
	// lwz r21,20(r1)
	ctx.current_instruction = 0x881E5DC4;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// stw r6,40(r1)
	ctx.current_instruction = 0x881E5DC8;
	REX_STORE_U32(ctx.r1.u32 + 40, ctx.r6.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r10,48(r1)
	ctx.current_instruction = 0x881E5DD0;
	REX_STORE_U32(ctx.r1.u32 + 48, ctx.r10.u32);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// lbzx r15,r8,r11
	ctx.current_instruction = 0x881E5DD8;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// subf r8,r3,r29
	ctx.r8.u64 = ctx.r29.u64 - ctx.r3.u64;
	// add r6,r19,r7
	ctx.r6.u64 = ctx.r19.u64 + ctx.r7.u64;
	// rotlwi r28,r15,3
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r15.u32, 3);
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// lbzx r17,r10,r11
	ctx.current_instruction = 0x881E5DEC;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 2;
	// lbzx r16,r8,r4
	ctx.current_instruction = 0x881E5DF4;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// rotlwi r24,r17,3
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r17.u32, 3);
	// rotlwi r7,r16,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r16.u32, 3);
	// rotlwi r22,r17,2
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r17.u32, 2);
	// lbzx r14,r10,r11
	ctx.current_instruction = 0x881E5E04;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// stbx r19,r11,r3
	ctx.current_instruction = 0x881E5E10;
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r19.u8);
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + ctx.r19.u64;
	// add r26,r9,r19
	ctx.r26.u64 = ctx.r9.u64 + ctx.r19.u64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// srawi r25,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r10.s32 >> 1;
	// subf r9,r16,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r16.u64;
	// srawi r7,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r26.s32 >> 2;
	// add r20,r9,r19
	ctx.r20.u64 = ctx.r9.u64 + ctx.r19.u64;
	// subf r9,r15,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r15.u64;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// add r18,r9,r7
	ctx.r18.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// clrlwi r8,r25,16
	ctx.r8.u64 = ctx.r25.u32 & 0xFFFF;
	// subf r26,r17,r24
	ctx.r26.u64 = ctx.r24.u64 - ctx.r17.u64;
	// clrlwi r31,r8,24
	ctx.r31.u64 = ctx.r8.u32 & 0xFF;
	// stb r8,24(r1)
	ctx.current_instruction = 0x881E5E58;
	REX_STORE_U8(ctx.r1.u32 + 24, ctx.r8.u8);
	// rotlwi r23,r14,3
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r14.u32, 3);
	// stbx r10,r9,r11
	ctx.current_instruction = 0x881E5E60;
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r9,r3,2
	ctx.r9.s64 = ctx.r3.s64 + 2;
	// subf r24,r14,r23
	ctx.r24.u64 = ctx.r23.u64 - ctx.r14.u64;
	// rotlwi r25,r16,2
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r16.u32, 2);
	// rlwinm r23,r10,1,15,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// stbx r31,r9,r11
	ctx.current_instruction = 0x881E5E78;
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r31.u8);
	// add r9,r26,r10
	ctx.r9.u64 = ctx.r26.u64 + ctx.r10.u64;
	// add r26,r16,r25
	ctx.r26.u64 = ctx.r16.u64 + ctx.r25.u64;
	// add r31,r24,r8
	ctx.r31.u64 = ctx.r24.u64 + ctx.r8.u64;
	// stw r9,28(r1)
	ctx.current_instruction = 0x881E5E88;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r9.u32);
	// add r25,r17,r22
	ctx.r25.u64 = ctx.r17.u64 + ctx.r22.u64;
	// add r24,r10,r23
	ctx.r24.u64 = ctx.r10.u64 + ctx.r23.u64;
	// addi r9,r3,3
	ctx.r9.s64 = ctx.r3.s64 + 3;
	// add r24,r24,r25
	ctx.r24.u64 = ctx.r24.u64 + ctx.r25.u64;
	// lwz r25,92(r1)
	ctx.current_instruction = 0x881E5E9C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// srawi r22,r20,3
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7) != 0);
	ctx.r22.s64 = ctx.r20.s32 >> 3;
	// lwz r20,28(r1)
	ctx.current_instruction = 0x881E5EA4;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// srawi r23,r20,3
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7) != 0);
	ctx.r23.s64 = ctx.r20.s32 >> 3;
	// stbx r7,r9,r11
	ctx.current_instruction = 0x881E5EAC;
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// subf r9,r3,r25
	ctx.r9.u64 = ctx.r25.u64 - ctx.r3.u64;
	// add r6,r26,r6
	ctx.r6.u64 = ctx.r26.u64 + ctx.r6.u64;
	// stbx r23,r21,r11
	ctx.current_instruction = 0x881E5EB8;
	REX_STORE_U8(ctx.r21.u32 + ctx.r11.u32, ctx.r23.u8);
	// srawi r26,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r31.s32 >> 3;
	// srawi r20,r18,3
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7) != 0);
	ctx.r20.s64 = ctx.r18.s32 >> 3;
	// srawi r6,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 3;
	// srawi r18,r24,3
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7) != 0);
	ctx.r18.s64 = ctx.r24.s32 >> 3;
	// stbx r22,r9,r4
	ctx.current_instruction = 0x881E5ECC;
	REX_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r22.u8);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// lwz r26,84(r1)
	ctx.current_instruction = 0x881E5ED4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// stb r6,24(r1)
	ctx.current_instruction = 0x881E5EDC;
	REX_STORE_U8(ctx.r1.u32 + 24, ctx.r6.u8);
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// addi r9,r25,2
	ctx.r9.s64 = ctx.r25.s64 + 2;
	// stbx r24,r9,r11
	ctx.current_instruction = 0x881E5EEC;
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r24.u8);
	// rlwinm r6,r8,1,15,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1FFFE;
	// lwz r9,44(r1)
	ctx.current_instruction = 0x881E5EF4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// rotlwi r24,r14,2
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r14.u32, 2);
	// add r21,r8,r6
	ctx.r21.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r28,16(r1)
	ctx.current_instruction = 0x881E5F00;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// add r22,r14,r24
	ctx.r22.u64 = ctx.r14.u64 + ctx.r24.u64;
	// rlwinm r20,r10,2,14,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// rlwinm r6,r10,3,13,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7FFF8;
	// stw r9,28(r1)
	ctx.current_instruction = 0x881E5F10;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r9.u32);
	// subf r9,r3,r26
	ctx.r9.u64 = ctx.r26.u64 - ctx.r3.u64;
	// lwz r31,28(r1)
	ctx.current_instruction = 0x881E5F18;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// rotlwi r24,r16,1
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r16.u32, 1);
	// stbx r23,r31,r11
	ctx.current_instruction = 0x881E5F20;
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r23.u8);
	// lbz r23,24(r1)
	ctx.current_instruction = 0x881E5F24;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r1.u32 + 24);
	// add r16,r16,r24
	ctx.r16.u64 = ctx.r16.u64 + ctx.r24.u64;
	// stbx r23,r9,r4
	ctx.current_instruction = 0x881E5F2C;
	REX_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r23.u8);
	// addi r9,r26,1
	ctx.r9.s64 = ctx.r26.s64 + 1;
	// add r23,r21,r22
	ctx.r23.u64 = ctx.r21.u64 + ctx.r22.u64;
	// add r21,r10,r20
	ctx.r21.u64 = ctx.r10.u64 + ctx.r20.u64;
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// rotlwi r6,r15,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r15.u32, 2);
	// stbx r18,r9,r11
	ctx.current_instruction = 0x881E5F44;
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r18.u8);
	// rlwinm r9,r7,1,15,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1FFFE;
	// add r20,r10,r17
	ctx.r20.u64 = ctx.r10.u64 + ctx.r17.u64;
	// srawi r22,r23,3
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7) != 0);
	ctx.r22.s64 = ctx.r23.s32 >> 3;
	// addi r10,r26,2
	ctx.r10.s64 = ctx.r26.s64 + 2;
	// add r18,r7,r9
	ctx.r18.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r9,r15,r6
	ctx.r9.u64 = ctx.r15.u64 + ctx.r6.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// rotlwi r22,r19,3
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r19.u32, 3);
	// stbx r6,r10,r11
	ctx.current_instruction = 0x881E5F68;
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u8);
	// add r9,r18,r9
	ctx.r9.u64 = ctx.r18.u64 + ctx.r9.u64;
	// subf r5,r5,r22
	ctx.r5.u64 = ctx.r22.u64 - ctx.r5.u64;
	// addi r10,r26,3
	ctx.r10.s64 = ctx.r26.s64 + 3;
	// rotlwi r23,r19,2
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r19.u32, 2);
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lwz r30,76(r1)
	ctx.current_instruction = 0x881E5F84;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// add r24,r19,r23
	ctx.r24.u64 = ctx.r19.u64 + ctx.r23.u64;
	// stbx r9,r10,r11
	ctx.current_instruction = 0x881E5F8C;
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// subf r10,r3,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r3.u64;
	// add r6,r16,r24
	ctx.r6.u64 = ctx.r16.u64 + ctx.r24.u64;
	// rotlwi r19,r17,1
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r17.u32, 1);
	// srawi r9,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 3;
	// add r22,r17,r19
	ctx.r22.u64 = ctx.r17.u64 + ctx.r19.u64;
	// stbx r9,r10,r4
	ctx.current_instruction = 0x881E5FA4;
	REX_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r9.u8);
	// rlwinm r6,r8,2,14,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FFFC;
	// add r29,r21,r22
	ctx.r29.u64 = ctx.r21.u64 + ctx.r22.u64;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// rotlwi r17,r14,1
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r14.u32, 1);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// srawi r29,r29,3
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 3;
	// add r9,r14,r17
	ctx.r9.u64 = ctx.r14.u64 + ctx.r17.u64;
	// rlwinm r22,r8,3,13,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x7FFF8;
	// stbx r29,r10,r11
	ctx.current_instruction = 0x881E5FC8;
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u8);
	// rlwinm r23,r7,2,14,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FFFC;
	// rotlwi r15,r15,1
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r15.u32, 1);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// subf r9,r8,r22
	ctx.r9.u64 = ctx.r22.u64 - ctx.r8.u64;
	// add r23,r7,r23
	ctx.r23.u64 = ctx.r7.u64 + ctx.r23.u64;
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// add r24,r27,r15
	ctx.r24.u64 = ctx.r27.u64 + ctx.r15.u64;
	// rlwinm r8,r7,3,13,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x7FFF8;
	// srawi r6,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 3;
	// add r29,r23,r24
	ctx.r29.u64 = ctx.r23.u64 + ctx.r24.u64;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// stbx r6,r10,r11
	ctx.current_instruction = 0x881E5FF8;
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u8);
	// srawi r29,r29,3
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 3;
	// add r9,r9,r14
	ctx.r9.u64 = ctx.r9.u64 + ctx.r14.u64;
	// srawi r7,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 3;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// addi r10,r30,3
	ctx.r10.s64 = ctx.r30.s64 + 3;
	// srawi r5,r20,3
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r20.s32 >> 3;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbx r29,r10,r11
	ctx.current_instruction = 0x881E6024;
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u8);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// lwz r6,64(r1)
	ctx.current_instruction = 0x881E6034;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 64);
	// stbx r9,r28,r11
	ctx.current_instruction = 0x881E6038;
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r9.u8);
	// ld r31,96(r1)
	ctx.current_instruction = 0x881E603C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r29,52(r1)
	ctx.current_instruction = 0x881E6040;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// lwz r27,60(r1)
	ctx.current_instruction = 0x881E6044;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// stbx r5,r10,r11
	ctx.current_instruction = 0x881E6048;
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// lwz r24,40(r1)
	ctx.current_instruction = 0x881E6050;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 40);
	// stbx r7,r6,r4
	ctx.current_instruction = 0x881E6054;
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r7.u8);
	// stbx r8,r10,r11
	ctx.current_instruction = 0x881E6058;
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881e5da4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E5DA4;
	// lwz r5,88(r1)
	ctx.current_instruction = 0x881E6064;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,940(r1)
	ctx.current_instruction = 0x881E6068;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 940);
	// lwz r4,80(r1)
	ctx.current_instruction = 0x881E606C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_881E6070:
	// lbzx r22,r11,r29
	ctx.current_instruction = 0x881E6070;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbzx r18,r24,r27
	ctx.current_instruction = 0x881E6078;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r27.u32);
	// add r19,r5,r11
	ctx.r19.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rotlwi r23,r22,3
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r22.u32, 3);
	// lwz r17,72(r1)
	ctx.current_instruction = 0x881E6084;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 72);
	// rotlwi r7,r18,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r18.u32, 1);
	// lwz r16,964(r1)
	ctx.current_instruction = 0x881E608C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 964);
	// subf r21,r22,r23
	ctx.r21.u64 = ctx.r23.u64 - ctx.r22.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// rotlwi r24,r22,2
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r22.u32, 2);
	// stbx r18,r11,r3
	ctx.current_instruction = 0x881E609C;
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r18.u8);
	// rotlwi r22,r22,1
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r22.u32, 1);
	// add r20,r18,r7
	ctx.r20.u64 = ctx.r18.u64 + ctx.r7.u64;
	// add r7,r8,r24
	ctx.r7.u64 = ctx.r8.u64 + ctx.r24.u64;
	// add r24,r8,r22
	ctx.r24.u64 = ctx.r8.u64 + ctx.r22.u64;
	// add r22,r21,r18
	ctx.r22.u64 = ctx.r21.u64 + ctx.r18.u64;
	// rotlwi r23,r18,2
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r18.u32, 2);
	// rotlwi r21,r18,3
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r18.u32, 3);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// add r23,r18,r23
	ctx.r23.u64 = ctx.r18.u64 + ctx.r23.u64;
	// subf r9,r9,r21
	ctx.r9.u64 = ctx.r21.u64 - ctx.r9.u64;
	// add r7,r20,r7
	ctx.r7.u64 = ctx.r20.u64 + ctx.r7.u64;
	// add r24,r23,r24
	ctx.r24.u64 = ctx.r23.u64 + ctx.r24.u64;
	// srawi r23,r22,3
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7) != 0);
	ctx.r23.s64 = ctx.r22.s32 >> 3;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// srawi r24,r24,3
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 3;
	// clrlwi r23,r23,24
	ctx.r23.u64 = ctx.r23.u32 & 0xFF;
	// clrlwi r21,r7,24
	ctx.r21.u64 = ctx.r7.u32 & 0xFF;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stbx r23,r11,r25
	ctx.current_instruction = 0x881E60F0;
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r23.u8);
	// clrlwi r20,r24,24
	ctx.r20.u64 = ctx.r24.u32 & 0xFF;
	// stb r23,1(r10)
	ctx.current_instruction = 0x881E60F8;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r23.u8);
	// srawi r22,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r22.s64 = ctx.r8.s32 >> 3;
	// stb r23,2(r10)
	ctx.current_instruction = 0x881E6100;
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r23.u8);
	// stb r23,3(r10)
	ctx.current_instruction = 0x881E6104;
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r23.u8);
	// add r8,r19,r30
	ctx.r8.u64 = ctx.r19.u64 + ctx.r30.u64;
	// stbx r21,r11,r26
	ctx.current_instruction = 0x881E610C;
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r21.u8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r21,1(r9)
	ctx.current_instruction = 0x881E6114;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r21.u8);
	// addic. r24,r17,-1
	ctx.xer.ca = ctx.r17.u32 > 0;
	ctx.r24.s64 = ctx.r17.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stb r21,2(r9)
	ctx.current_instruction = 0x881E611C;
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r21.u8);
	// add r25,r4,r25
	ctx.r25.u64 = ctx.r4.u64 + ctx.r25.u64;
	// stb r21,3(r9)
	ctx.current_instruction = 0x881E6124;
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r21.u8);
	// add r26,r4,r26
	ctx.r26.u64 = ctx.r4.u64 + ctx.r26.u64;
	// stbx r20,r11,r30
	ctx.current_instruction = 0x881E612C;
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r20.u8);
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// add r30,r4,r30
	ctx.r30.u64 = ctx.r4.u64 + ctx.r30.u64;
	// stb r20,1(r7)
	ctx.current_instruction = 0x881E6138;
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r20.u8);
	// add r28,r28,r4
	ctx.r28.u64 = ctx.r28.u64 + ctx.r4.u64;
	// stb r20,2(r7)
	ctx.current_instruction = 0x881E6140;
	REX_STORE_U8(ctx.r7.u32 + 2, ctx.r20.u8);
	// add r27,r27,r16
	ctx.r27.u64 = ctx.r27.u64 + ctx.r16.u64;
	// stb r20,3(r7)
	ctx.current_instruction = 0x881E6148;
	REX_STORE_U8(ctx.r7.u32 + 3, ctx.r20.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r24,72(r1)
	ctx.current_instruction = 0x881E6150;
	REX_STORE_U32(ctx.r1.u32 + 72, ctx.r24.u32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stw r10,52(r1)
	ctx.current_instruction = 0x881E6158;
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r10.u32);
	// stw r25,92(r1)
	ctx.current_instruction = 0x881E615C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r26,84(r1)
	ctx.current_instruction = 0x881E6160;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r30,76(r1)
	ctx.current_instruction = 0x881E6164;
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r30.u32);
	// stw r28,16(r1)
	ctx.current_instruction = 0x881E6168;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r28.u32);
	// stw r27,60(r1)
	ctx.current_instruction = 0x881E616C;
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r27.u32);
	// stb r11,0(r8)
	ctx.current_instruction = 0x881E6170;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// stb r11,1(r8)
	ctx.current_instruction = 0x881E6174;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// stb r11,2(r8)
	ctx.current_instruction = 0x881E6178;
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r11.u8);
	// stb r11,3(r8)
	ctx.current_instruction = 0x881E617C;
	REX_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// bne 0x881e5474
	if (!ctx.cr0.eq) goto loc_881E5474;
loc_881E6184:
	// rlwinm r10,r6,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFC0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r16,1
	ctx.r16.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881e6550
	if (!ctx.cr6.gt) goto loc_881E6550;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r7,r27,1
	ctx.r7.s64 = ctx.r27.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r26,16
	ctx.r8.s64 = ctx.r26.s64 + 16;
	// rlwinm r28,r11,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r23,r29,r3
	ctx.r23.u64 = ctx.r3.u64 - ctx.r29.u64;
	// subf r22,r29,r25
	ctx.r22.u64 = ctx.r25.u64 - ctx.r29.u64;
	// subf r21,r29,r26
	ctx.r21.u64 = ctx.r26.u64 - ctx.r29.u64;
	// subf r20,r3,r25
	ctx.r20.u64 = ctx.r25.u64 - ctx.r3.u64;
	// subf r19,r3,r26
	ctx.r19.u64 = ctx.r26.u64 - ctx.r3.u64;
	// subf r18,r26,r25
	ctx.r18.u64 = ctx.r25.u64 - ctx.r26.u64;
	// addi r16,r28,1
	ctx.r16.s64 = ctx.r28.s64 + 1;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r17,r31
	ctx.r17.u64 = ctx.r31.u64;
loc_881E61E8:
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// lvlx128 v49,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v48,r31,r7
	temp.u32 = ctx.r31.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r10,-32
	ctx.r3.s64 = ctx.r10.s64 + -32;
	// vor128 v10,v49,v48
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// addi r30,r10,-16
	ctx.r30.s64 = ctx.r10.s64 + -16;
	// lvlx128 v47,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r24,r9,-48
	ctx.r24.s64 = ctx.r9.s64 + -48;
	// lvrx128 v46,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v45,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v2,v47,v46
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// lvrx128 v44,r31,r4
	temp.u32 = ctx.r31.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v8,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v11,v45,v44
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// vmrglb v7,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// lvrx128 v43,r31,r3
	temp.u32 = ctx.r31.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v42,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r10,r23
	ctx.r3.u64 = ctx.r10.u64 + ctx.r23.u64;
	// vaddshs v4,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvrx128 v41,r17,r30
	temp.u32 = ctx.r17.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v10,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v3,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrglb v9,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvlx128 v40,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v39,r31,r4
	temp.u32 = ctx.r31.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vaddshs v1,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvlx128 v38,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddshs v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r4,r9,-32
	ctx.r4.s64 = ctx.r9.s64 + -32;
	// vaddshs v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v31,v3,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v30,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v29,v6,v10
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v28,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v27,v6,v4
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v26,v5,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmrghb v3,v13,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v25,v29,v8
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vmrglb v2,v13,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v24,v9,v31
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v23,v28,v7
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsrah v21,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus v9,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vor128 v6,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vor128 v4,v40,v41
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// vpkshus v8,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vor128 v1,v38,v39
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vpkshus v10,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vmrghb v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrglb v5,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrghb v16,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v9,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrglb v8,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrglb v31,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor v1,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v16.u8));
	// vmrghb v11,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v10,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrghb v9,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrglb v8,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v7,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v5,v13,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v6,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v4,v13,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvlx v11,0,r24
	ctx.current_instruction = 0x881E62FC;
	ea = ctx.r24.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvrx v11,r24,r31
	ctx.current_instruction = 0x881E6300;
	ea = ctx.r24.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v11.u8[i]);
	// vmrghb v15,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvlx v10,0,r4
	ctx.current_instruction = 0x881E6308;
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// vaddshs v30,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrglb v14,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v29,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmrghb v19,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v28,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrglb v18,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v27,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vmrghb v17,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvrx v10,r4,r31
	ctx.current_instruction = 0x881E632C;
	ea = ctx.r4.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v10.u8[i]);
	// vaddshs v25,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// stvlx v9,r10,r23
	ctx.current_instruction = 0x881E6334;
	ea = ctx.r10.u32 + ctx.r23.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// vmrglb v16,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvrx v9,r3,r31
	ctx.current_instruction = 0x881E633C;
	ea = ctx.r3.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v9.u8[i]);
	// vaddshs v26,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v9,v29,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmrghb v10,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v11,v30,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// addi r6,r1,592
	ctx.r6.s64 = ctx.r1.s64 + 592;
	// vaddshs v6,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// stvlx v8,0,r9
	ctx.current_instruction = 0x881E6358;
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// vaddshs v7,v26,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvrx v8,r9,r31
	ctx.current_instruction = 0x881E6360;
	ea = ctx.r9.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v8.u8[i]);
	// vaddshs v2,v29,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmrglb v8,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v3,v30,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r24,r1,640
	ctx.r24.s64 = ctx.r1.s64 + 640;
	// vor v11,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v15.u8));
	// add r4,r8,r18
	ctx.r4.u64 = ctx.r8.u64 + ctx.r18.u64;
	// stvx128 v10,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v14.u8));
	// vaddshs v29,v29,v2
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// add r3,r10,r22
	ctx.r3.u64 = ctx.r10.u64 + ctx.r22.u64;
	// vaddshs v22,v30,v3
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// add r30,r9,r20
	ctx.r30.u64 = ctx.r9.u64 + ctx.r20.u64;
	// vaddshs v23,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v20,v27,v4
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvx128 v8,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v15,v29,v10
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v14,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v4,v23,v31
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v24,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v31,v15,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v14,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v21,v28,v5
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v5,v24,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v22,v27,v20
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vpkshus128 v37,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v20,v25,v6
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v1,v28,v21
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vaddshs v21,v26,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v31,v23,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v29,v27,v22
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vor v9,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v19.u8));
	// lvx128 v36,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v8,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v18.u8));
	// stvlx128 v37,r0,r5
	ctx.current_instruction = 0x881E63E8;
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// vor v7,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v17.u8));
	// vor v6,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v16.u8));
	// vaddshs v27,v25,v20
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vaddshs v19,v24,v5
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v28,v28,v1
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v26,v26,v21
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vaddshs v25,v23,v31
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vor128 v5,v36,v36
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v36.u8));
	// vaddshs v23,v29,v8
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v18,v28,v9
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v17,v27,v6
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v16,v26,v7
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v24,v24,v19
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v15,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v14,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vor128 v34,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vaddshs v30,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v29,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v28,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v27,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v35,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v13,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor128 v4,v35,v35
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v35.u8));
	// stvrx128 v37,r5,r31
	ctx.current_instruction = 0x881E6448;
	ea = ctx.r5.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v37.u8[i]);
	// vaddshs v24,v24,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsrah v23,v23,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v26,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v25,v25,v4
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsrah v17,v17,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v16,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v15,v15,v10
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v14,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v11,v30,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus128 v33,v18,v23
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vaddshs v10,v29,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus128 v32,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v9,v28,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// vaddshs v8,v27,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// addi r5,r5,64
	ctx.r5.s64 = ctx.r5.s64 + 64;
	// vaddshs v7,v2,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vaddshs v6,v3,v14
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vaddshs v4,v26,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v3,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvlx128 v33,r8,r18
	ctx.current_instruction = 0x881E64A0;
	ea = ctx.r8.u32 + ctx.r18.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// vaddshs v2,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvrx128 v33,r4,r31
	ctx.current_instruction = 0x881E64A8;
	ea = ctx.r4.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v33.u8[i]);
	// vaddshs v1,v1,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r4,r8,-16
	ctx.r4.s64 = ctx.r8.s64 + -16;
	// vsrah v30,v25,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v32,r10,r22
	ctx.current_instruction = 0x881E64B8;
	ea = ctx.r10.u32 + ctx.r22.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// vsrah v29,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvrx128 v32,r3,r31
	ctx.current_instruction = 0x881E64C0;
	ea = ctx.r3.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v32.u8[i]);
	// vaddshs v27,v21,v8
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// add r3,r10,r21
	ctx.r3.u64 = ctx.r10.u64 + ctx.r21.u64;
	// vaddshs v28,v20,v9
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsrah v26,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v63,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v23,v19,v3
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v24,v31,v4
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsrah v22,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v1,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsrah v20,v28,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v27,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v63,r9,r20
	ctx.current_instruction = 0x881E64FC;
	ea = ctx.r9.u32 + ctx.r20.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vsrah v17,v23,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v61,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// stvrx128 v63,r30,r31
	ctx.current_instruction = 0x881E6508;
	ea = ctx.r30.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// add r30,r9,r19
	ctx.r30.u64 = ctx.r9.u64 + ctx.r19.u64;
	// vpkshus128 v60,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vor128 v13,v34,v34
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v34.u8));
	// stvlx128 v62,r0,r4
	ctx.current_instruction = 0x881E6518;
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// vpkshus128 v59,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// stvrx128 v62,r4,r31
	ctx.current_instruction = 0x881E6520;
	ea = ctx.r4.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// stvlx128 v61,r0,r8
	ctx.current_instruction = 0x881E6524;
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r8,r31
	ctx.current_instruction = 0x881E6528;
	ea = ctx.r8.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvlx128 v60,r10,r21
	ctx.current_instruction = 0x881E6530;
	ea = ctx.r10.u32 + ctx.r21.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvrx128 v60,r3,r31
	ctx.current_instruction = 0x881E6538;
	ea = ctx.r3.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// stvlx128 v59,r9,r19
	ctx.current_instruction = 0x881E653C;
	ea = ctx.r9.u32 + ctx.r19.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// stvrx128 v59,r30,r31
	ctx.current_instruction = 0x881E6544;
	ea = ctx.r30.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// bdnz 0x881e61e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E61E8;
	// lwz r6,940(r1)
	ctx.current_instruction = 0x881E654C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 940);
loc_881E6550:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x881e66dc
	if (!ctx.cr6.lt) goto loc_881E66DC;
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r10,r16,r27
	ctx.r10.u64 = ctx.r16.u64 + ctx.r27.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r15,r29,1
	ctx.r15.s64 = ctx.r29.s64 + 1;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r24,r10,-1
	ctx.r24.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881E6578:
	// addi r5,r29,3
	ctx.r5.s64 = ctx.r29.s64 + 3;
	// lbzx r6,r28,r27
	ctx.current_instruction = 0x881E657C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r27.u32);
	// addi r8,r29,2
	ctx.r8.s64 = ctx.r29.s64 + 2;
	// lbzu r7,1(r24)
	ctx.current_instruction = 0x881E6584;
	ea = 1 + ctx.r24.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r24.u32 = ea;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbzx r20,r15,r11
	ctx.current_instruction = 0x881E658C;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r11.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rotlwi r6,r6,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// lbzx r3,r5,r11
	ctx.current_instruction = 0x881E6598;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// subf r5,r25,r29
	ctx.r5.u64 = ctx.r29.u64 - ctx.r25.u64;
	// lbzx r14,r8,r11
	ctx.current_instruction = 0x881E65A0;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r31,r5,r9
	ctx.current_instruction = 0x881E65B4;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r8,r5
	ctx.r6.u64 = ctx.r8.u64 + ctx.r5.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// srawi r23,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r4.s32 >> 1;
	// rotlwi r4,r31,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r31.u32, 3);
	// srawi r8,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 2;
	// subf r21,r31,r4
	ctx.r21.u64 = ctx.r4.u64 - ctx.r31.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// rotlwi r7,r3,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// rotlwi r22,r31,2
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// add r21,r21,r10
	ctx.r21.u64 = ctx.r21.u64 + ctx.r10.u64;
	// subf r19,r3,r7
	ctx.r19.u64 = ctx.r7.u64 - ctx.r3.u64;
	// add r22,r30,r22
	ctx.r22.u64 = ctx.r30.u64 + ctx.r22.u64;
	// rlwinm r10,r8,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1FFFE;
	// rotlwi r30,r3,2
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// rotlwi r18,r20,3
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r20.u32, 3);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r19,r19,r8
	ctx.r19.u64 = ctx.r19.u64 + ctx.r8.u64;
	// add r8,r3,r30
	ctx.r8.u64 = ctx.r3.u64 + ctx.r30.u64;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// subf r16,r20,r18
	ctx.r16.u64 = ctx.r18.u64 - ctx.r20.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r4,r16,r6
	ctx.r4.u64 = ctx.r16.u64 + ctx.r6.u64;
	// addi r10,r25,1
	ctx.r10.s64 = ctx.r25.s64 + 1;
	// rotlwi r30,r14,3
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r14.u32, 3);
	// srawi r16,r21,3
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7) != 0);
	ctx.r16.s64 = ctx.r21.s32 >> 3;
	// srawi r4,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 3;
	// clrlwi r7,r23,16
	ctx.r7.u64 = ctx.r23.u32 & 0xFFFF;
	// stbx r16,r11,r25
	ctx.current_instruction = 0x881E6634;
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r16.u8);
	// subf r17,r14,r30
	ctx.r17.u64 = ctx.r30.u64 - ctx.r14.u64;
	// stbx r4,r10,r11
	ctx.current_instruction = 0x881E663C;
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u8);
	// addi r10,r25,2
	ctx.r10.s64 = ctx.r25.s64 + 2;
	// add r30,r17,r7
	ctx.r30.u64 = ctx.r17.u64 + ctx.r7.u64;
	// rlwinm r23,r6,1,15,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1FFFE;
	// srawi r4,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r30.s32 >> 3;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// stbx r4,r10,r11
	ctx.current_instruction = 0x881E6654;
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u8);
	// rotlwi r18,r20,2
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r20.u32, 2);
	// rlwinm r20,r7,1,15,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1FFFE;
	// addi r10,r25,3
	ctx.r10.s64 = ctx.r25.s64 + 3;
	// rotlwi r21,r14,2
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r14.u32, 2);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// add r23,r6,r23
	ctx.r23.u64 = ctx.r6.u64 + ctx.r23.u64;
	// add r3,r22,r5
	ctx.r3.u64 = ctx.r22.u64 + ctx.r5.u64;
	// add r31,r31,r18
	ctx.r31.u64 = ctx.r31.u64 + ctx.r18.u64;
	// add r7,r7,r20
	ctx.r7.u64 = ctx.r7.u64 + ctx.r20.u64;
	// srawi r5,r19,3
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r19.s32 >> 3;
	// add r6,r14,r21
	ctx.r6.u64 = ctx.r14.u64 + ctx.r21.u64;
	// add r4,r23,r31
	ctx.r4.u64 = ctx.r23.u64 + ctx.r31.u64;
	// stbx r5,r10,r11
	ctx.current_instruction = 0x881E6688;
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u8);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r3,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 3;
	// subf r10,r25,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r25.u64;
	// srawi r6,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 3;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// srawi r5,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 3;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stbx r4,r10,r9
	ctx.current_instruction = 0x881E66B0;
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u8);
	// clrlwi r3,r6,24
	ctx.r3.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// addi r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 1;
	// stbx r3,r10,r11
	ctx.current_instruction = 0x881E66C0;
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u8);
	// addi r10,r26,2
	ctx.r10.s64 = ctx.r26.s64 + 2;
	// stbx r8,r10,r11
	ctx.current_instruction = 0x881E66C8;
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r10,r26,3
	ctx.r10.s64 = ctx.r26.s64 + 3;
	// stbx r7,r10,r11
	ctx.current_instruction = 0x881E66D0;
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881e6578
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E6578;
loc_881E66DC:
	// lbzx r6,r11,r29
	ctx.current_instruction = 0x881E66DC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbzx r5,r28,r27
	ctx.current_instruction = 0x881E66E4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r27.u32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rotlwi r4,r6,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// rotlwi r7,r5,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// rotlwi r5,r6,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// subf r6,r6,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r6.u64;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r3,r6,r8
	ctx.r3.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r8,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 3;
	// srawi r7,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 3;
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// stb r4,0(r10)
	ctx.current_instruction = 0x881E6724;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// stb r4,1(r10)
	ctx.current_instruction = 0x881E6728;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// stb r4,2(r10)
	ctx.current_instruction = 0x881E672C;
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// stb r4,3(r10)
	ctx.current_instruction = 0x881E6730;
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r4.u8);
	// stb r3,0(r11)
	ctx.current_instruction = 0x881E6734;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// stb r3,1(r11)
	ctx.current_instruction = 0x881E6738;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// stb r3,2(r11)
	ctx.current_instruction = 0x881E673C;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// stb r3,3(r11)
	ctx.current_instruction = 0x881E6740;
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88228370) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88228370;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88228370) {
			switch (rex_dispatch_address) {
				case 0x88228378:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88228370;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88228378: goto loc_88228378;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88228378;
	__savegprlr_26(ctx, base);
loc_88228378:
	// lwz r11,1148(r7)
	ctx.current_instruction = 0x88228378;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1148);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// lwz r30,1156(r7)
	ctx.current_instruction = 0x88228380;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 1156);
	// addi r26,r1,-80
	ctx.r26.s64 = ctx.r1.s64 + -80;
	// lwz r28,84(r1)
	ctx.current_instruction = 0x88228388;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,1164(r7)
	ctx.current_instruction = 0x88228390;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// cntlzw r7,r28
	ctx.r7.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// vspltish v8,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x3)));
	// stw r11,-96(r1)
	ctx.current_instruction = 0x882283A0;
	REX_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// stw r30,-80(r1)
	ctx.current_instruction = 0x882283A8;
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r30.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r7,1
	ctx.r7.s64 = 1;
	// vspltish v26,7
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_set1_epi16(short(0x7)));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// vspltish v31,1
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r27,-32
	ctx.r27.s64 = -32;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// slw r8,r7,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// vspltish v30,5
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_set1_epi16(short(0x5)));
	// lvx128 v11,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,-16
	ctx.r28.s64 = -16;
	// lvx128 v10,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// vsplth v1,v11,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_set1_epi16(short(0xD0C))));
	// li r31,16
	ctx.r31.s64 = 16;
	// vsplth v25,v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_set1_epi16(short(0xD0C))));
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// bne cr6,0x88228540
	if (!ctx.cr6.eq) goto loc_88228540;
	// lvx128 v60,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvx128 v61,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v7,v58,v59,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v5,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88228720
	if (!ctx.cr6.gt) goto loc_88228720;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_88228464:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v6,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v11,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vadduhm v22,v6,v11
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// lvx128 v57,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v10,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v27,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// vperm128 v6,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vadduhm v21,v3,v10
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v5,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v4,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vslh v20,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v9,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v11,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vmrghb v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vmrglb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v29,v2
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v15,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v3,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v29,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v2,v22,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v28,v21,v15
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v14,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v24,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsubshs v21,v9,v14
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vsubshs v20,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v23,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vadduhm v22,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v19,v24,v1
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v17,v21,v27
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v16,v20,v23
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v18,v22,v1
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v6,v19,v17
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v3,v18,v16
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vsrah v15,v6,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v15,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r7,r31
	ea = (ctx.r7.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// blt cr6,0x88228464
	if (ctx.cr6.lt) goto loc_88228464;
	// b 0x88228720
	goto loc_88228720;
loc_88228540:
	// li r30,32
	ctx.r30.s64 = 32;
	// lvrx128 v52,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvlx128 v55,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v51,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v9,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v2,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v4,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88228720
	if (!ctx.cr6.gt) goto loc_88228720;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r29,32
	ctx.r9.s64 = ctx.r29.s64 + 32;
loc_882285C4:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v29,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v11,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// vor v7,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vor v28,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v41,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v6,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v11,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v3,v43,v63,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvsl v1,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v23,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v19,v63,v42,v1
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vslh v22,v10,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v18,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v24,v2
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v7,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v14,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v17,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v2,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v18.u8));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v24,v23,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vor v27,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vadduhm v22,v20,v10
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v23,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v16,v24,v15
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v21,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v19,v23
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v29,v22,v18
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vslh v24,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v9,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v5,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vslh v23,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v4,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v14.u8));
	// vadduhm v15,v29,v15
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v28,v24,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vor128 v1,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vadduhm v24,v23,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v14,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v5,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vsubshs v18,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsubshs v23,v3,v22
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubshs v16,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vsubshs v22,v2,v19
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vadduhm v20,v15,v1
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v15,v29,v14
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vadduhm v21,v17,v1
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v14,v24,v28
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v29,v23,v18
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v28,v22,v16
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v19,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v21,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v21,v20,v28
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsubshs v27,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vsubshs v24,v4,v17
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vadduhm v23,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vsrah v18,v22,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v20,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v19,v23,v1
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// stvx128 v18,r9,r27
	ea = (ctx.r9.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r9,r28
	ea = (ctx.r9.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v16,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsrah v15,v16,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// stvx128 v15,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// blt cr6,0x882285c4
	if (ctx.cr6.lt) goto loc_882285C4;
loc_88228720:
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltish v12,-1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// vspltish v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vslh v9,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x882287a8
	if (!ctx.cr6.eq) goto loc_882287A8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88228844
	if (!ctx.cr6.gt) goto loc_88228844;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_88228754:
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// vsldoi128 v12,v13,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// vsldoi128 v10,v13,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 14));
	// vsldoi128 v7,v13,v40,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 10));
	// vadduhm v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v6,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v5,v12,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vadduhm v3,v12,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v2,v3,v25
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v1,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v31,v1,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v39,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vor v11,v11,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// stvewx128 v39,r0,r11
	ctx.current_instruction = 0x88228794;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r11,r10
	ctx.current_instruction = 0x88228798;
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x88228754
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88228754;
	// b 0x88228844
	goto loc_88228844;
loc_882287A8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88228844
	if (!ctx.cr6.gt) goto loc_88228844;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_882287C0:
	// lvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v13,v38,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 12));
	// vsldoi128 v7,v13,v38,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 14));
	// vsldoi128 v6,v13,v38,6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 10));
	// vsldoi v5,v12,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vsldoi v4,v12,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 14));
	// vadduhm v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsldoi v2,v12,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 10));
	// vadduhm v1,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v10,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vor v13,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v31,v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v30,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v13,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vadduhm v24,v10,v29
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v23,v13,v28
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v22,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v21,v23,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v12,v22,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v20,v21,v30
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vsrah v19,v12,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v20,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v37,v11,v19
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8)));
	// vpkshus128 v36,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vor128 v11,v37,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)));
	// stvx128 v36,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x882287c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882287C0;
loc_88228844:
	// vand v13,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vcmpgtuh. v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

