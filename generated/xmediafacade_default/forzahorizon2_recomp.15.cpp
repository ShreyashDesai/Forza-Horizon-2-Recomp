#include "forzahorizon2_funcs.15.h"

DEFINE_REX_FUNC(sub_88050160) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050160);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050160;
	ctx.current_instruction = 0x88050160;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,72(r11)
	ctx.current_instruction = 0x88050168;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__savegprlr_24) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050838);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050838;
	ctx.current_instruction = 0x88050838;
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

DEFINE_REX_FUNC(sub_880512E0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880512E0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880512E0;
	ctx.current_instruction = 0x880512E0;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,0(r3)
	ctx.current_instruction = 0x880512E4;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f0,1488(r11)
	ctx.current_instruction = 0x880512EC;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880523B0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880523B0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880523B0;
	ctx.current_instruction = 0x880523B0;
	// lis r11,-30715
	ctx.r11.s64 = -2012938240;
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// addi r11,r11,9048
	ctx.r11.s64 = ctx.r11.s64 + 9048;
	// stw r11,18320(r10)
	ctx.current_instruction = 0x880523BC;
	REX_STORE_U32(ctx.r10.u32 + 18320, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88052738) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88052738;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88052738) {
			switch (rex_dispatch_address) {
				case 0x88052778:
				case 0x88052788:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88052738;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88052778: goto loc_88052778;
		case 0x88052788: goto loc_88052788;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805273C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88052740;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88052744;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88052748;
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
	ctx.lr = 0x88052778;
	sub_88053E38(ctx, base);
loc_88052778:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x88053720
	ctx.lr = 0x88052788;
	sub_88053720(ctx, base);
loc_88052788:
	// clrlwi. r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x880527b0
	if (!ctx.cr0.eq) goto loc_880527B0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x880527a0
	if (!ctx.cr6.eq) goto loc_880527A0;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x880527c8
	goto loc_880527C8;
loc_880527A0:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x880527c4
	if (!ctx.cr6.eq) goto loc_880527C4;
loc_880527A8:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x880527c8
	goto loc_880527C8;
loc_880527B0:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x880527a8
	if (!ctx.cr0.eq) goto loc_880527A8;
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne 0x880527c8
	if (!ctx.cr0.eq) goto loc_880527C8;
loc_880527C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_880527C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880527CC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880527D4;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880527D8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88057958) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88057958);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88057958;
	ctx.current_instruction = 0x88057958;
	PPCRegister temp{};
	// stfs f1,72(r3)
	ctx.current_instruction = 0x88057958;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88057970) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88057970;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88057970) {
			switch (rex_dispatch_address) {
				case 0x88057988:
				case 0x8805799C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88057970;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88057988: goto loc_88057988;
		case 0x8805799C: goto loc_8805799C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88057974;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88057978;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8805797C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88062268
	ctx.lr = 0x88057988;
	sub_88062268(ctx, base);
loc_88057988:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,6736
	ctx.r10.s64 = ctx.r11.s64 + 6736;
	// stw r10,0(r31)
	ctx.current_instruction = 0x88057994;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x88062238
	ctx.lr = 0x8805799C;
	sub_88062238(ctx, base);
loc_8805799C:
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	ctx.current_instruction = 0x880579A8;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	ctx.current_instruction = 0x880579AC;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lfs f0,6800(r9)
	ctx.current_instruction = 0x880579B0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6800);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,64(r31)
	ctx.current_instruction = 0x880579B4;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stfs f0,72(r31)
	ctx.current_instruction = 0x880579B8;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r11,68(r31)
	ctx.current_instruction = 0x880579BC;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880579C4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880579CC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88059118) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88059118;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88059118) {
			switch (rex_dispatch_address) {
				case 0x88059120:
				case 0x8805913C:
				case 0x88059158:
				case 0x880591C0:
				case 0x880591EC:
				case 0x8805920C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88059118;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88059120: goto loc_88059120;
		case 0x8805913C: goto loc_8805913C;
		case 0x88059158: goto loc_88059158;
		case 0x880591C0: goto loc_880591C0;
		case 0x880591EC: goto loc_880591EC;
		case 0x8805920C: goto loc_8805920C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88059120;
	__savegprlr_29(ctx, base);
loc_88059120:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88059120;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88059124;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,60(r11)
	ctx.current_instruction = 0x88059130;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805913C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805913C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880591f8
	if (ctx.cr6.lt) goto loc_880591F8;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// bl 0x88050340
	ctx.lr = 0x88059158;
	sub_88050340(ctx, base);
loc_88059158:
	// stw r3,524(r31)
	ctx.current_instruction = 0x88059158;
	REX_STORE_U32(ctx.r31.u32 + 524, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88059170
	if (!ctx.cr6.eq) goto loc_88059170;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x880591f8
	goto loc_880591F8;
loc_88059170:
	// lwz r11,8(r30)
	ctx.current_instruction = 0x88059170;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,112(r31)
	ctx.current_instruction = 0x88059174;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.current_instruction = 0x88059178;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,116(r31)
	ctx.current_instruction = 0x8805917C;
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// lwz r9,20(r30)
	ctx.current_instruction = 0x88059180;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// stw r9,120(r31)
	ctx.current_instruction = 0x88059184;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// lwz r8,16(r30)
	ctx.current_instruction = 0x88059188;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r8,548(r31)
	ctx.current_instruction = 0x8805918C;
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r8.u32);
	// lwz r11,24(r30)
	ctx.current_instruction = 0x88059190;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880591a0
	if (ctx.cr6.eq) goto loc_880591A0;
	// stw r11,508(r31)
	ctx.current_instruction = 0x8805919C;
	REX_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
loc_880591A0:
	// lwz r4,0(r30)
	ctx.current_instruction = 0x880591A0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880591c4
	if (ctx.cr6.eq) goto loc_880591C4;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880591AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.current_instruction = 0x880591B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880591C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880591C0:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_880591C4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x880591f8
	if (ctx.cr6.lt) goto loc_880591F8;
	// lwz r4,4(r30)
	ctx.current_instruction = 0x880591CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880591f0
	if (ctx.cr6.eq) goto loc_880591F0;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880591D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.current_instruction = 0x880591E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880591EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880591EC:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_880591F0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8805920c
	if (!ctx.cr6.lt) goto loc_8805920C;
loc_880591F8:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880591F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.current_instruction = 0x88059200;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805920C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805920C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805BB98) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805BB98;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805BB98) {
			switch (rex_dispatch_address) {
				case 0x8805BBC4:
				case 0x8805BC14:
				case 0x8805BC28:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805BB98;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805BBC4: goto loc_8805BBC4;
		case 0x8805BC14: goto loc_8805BC14;
		case 0x8805BC28: goto loc_8805BC28;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805BB9C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8805BBA0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805BBA4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8805BBA8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805BBAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x8805BBB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805BBC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805BBC4:
	// lwz r11,316(r31)
	ctx.current_instruction = 0x8805BBC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// lis r9,-13108
	ctx.r9.s64 = -859045888;
	// lwz r10,332(r31)
	ctx.current_instruction = 0x8805BBCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r8,316(r31)
	ctx.current_instruction = 0x8805BBD8;
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r8.u32);
	// ori r6,r9,52429
	ctx.r6.u64 = ctx.r9.u64 | 52429;
	// std r7,304(r31)
	ctx.current_instruction = 0x8805BBE0;
	REX_STORE_U64(ctx.r31.u32 + 304, ctx.r7.u64);
	// lwz r5,316(r31)
	ctx.current_instruction = 0x8805BBE4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// mulhwu r4,r5,r6
	ctx.r4.u64 = (uint64_t(ctx.r5.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r11,r3,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8805bc14
	if (!ctx.cr0.eq) goto loc_8805BC14;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805BC00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,120(r11)
	ctx.current_instruction = 0x8805BC08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805BC14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805BC14:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805BC14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8805BC1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805BC28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805BC28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805BC30;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8805BC38;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805BC3C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805D978) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805D978);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805D978;
	ctx.current_instruction = 0x8805D978;
	// lwz r3,12(r3)
	ctx.current_instruction = 0x8805D978;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x8806fd10
	sub_8806FD10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805DCD8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805DCD8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805DCD8;
	ctx.current_instruction = 0x8805DCD8;
	// lwz r11,24(r3)
	ctx.current_instruction = 0x8805DCD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805dd10
	if (ctx.cr6.eq) goto loc_8805DD10;
	// lwz r11,12(r3)
	ctx.current_instruction = 0x8805DCE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,2124(r11)
	ctx.current_instruction = 0x8805DCE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8805dd10
	if (!ctx.cr6.eq) goto loc_8805DD10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8805dd04
	if (ctx.cr6.eq) goto loc_8805DD04;
	// mulli r11,r8,10000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(10000));
	// std r11,0(r9)
	ctx.current_instruction = 0x8805DD00;
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
loc_8805DD04:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	ctx.current_instruction = 0x8805DD08;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8805DD10:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	ctx.current_instruction = 0x8805DD14;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88060360) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88060360);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88060360;
	ctx.current_instruction = 0x88060360;
	// lis r9,12889
	ctx.r9.s64 = 844693504;
	// lwz r11,16(r3)
	ctx.current_instruction = 0x88060364;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// ori r8,r9,21849
	ctx.r8.u64 = ctx.r9.u64 | 21849;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x88060380
	if (!ctx.cr6.eq) goto loc_88060380;
	// li r3,1
	ctx.r3.s64 = 1;
loc_88060380:
	// lis r9,12849
	ctx.r9.s64 = 842072064;
	// ori r8,r9,22105
	ctx.r8.u64 = ctx.r9.u64 | 22105;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x88060394
	if (!ctx.cr6.eq) goto loc_88060394;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_88060394:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880603a4
	if (ctx.cr6.eq) goto loc_880603A4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_880603A4:
	// lhz r11,14(r10)
	ctx.current_instruction = 0x880603A4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88062010) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88062010);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88062010;
	ctx.current_instruction = 0x88062010;
	uint32_t ea{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
loc_88062014:
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
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
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
	// bne 0x88062014
	if (!ctx.cr0.eq) goto loc_88062014;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88062238) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88062238);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88062238;
	ctx.current_instruction = 0x88062238;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r3)
	ctx.current_instruction = 0x8806223C;
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	ctx.current_instruction = 0x88062240;
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	ctx.current_instruction = 0x88062244;
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88062468) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88062468;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88062468) {
			switch (rex_dispatch_address) {
				case 0x88062470:
				case 0x880624A8:
				case 0x880624D8:
				case 0x880624F4:
				case 0x88062524:
				case 0x88062564:
				case 0x8806259C:
				case 0x880625AC:
				case 0x880625CC:
				case 0x880625DC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88062468;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88062470: goto loc_88062470;
		case 0x880624A8: goto loc_880624A8;
		case 0x880624D8: goto loc_880624D8;
		case 0x880624F4: goto loc_880624F4;
		case 0x88062524: goto loc_88062524;
		case 0x88062564: goto loc_88062564;
		case 0x8806259C: goto loc_8806259C;
		case 0x880625AC: goto loc_880625AC;
		case 0x880625CC: goto loc_880625CC;
		case 0x880625DC: goto loc_880625DC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x88062470;
	__savegprlr_23(ctx, base);
loc_88062470:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88062470;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r6,8(r3)
	ctx.current_instruction = 0x88062480;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r3,8
	ctx.r27.s64 = ctx.r3.s64 + 8;
	// lwz r3,608(r3)
	ctx.current_instruction = 0x88062494;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 608);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x880cb4b0
	ctx.lr = 0x880624A8;
	sub_880CB4B0(ctx, base);
loc_880624A8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88062568
	if (ctx.cr6.lt) goto loc_88062568;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x880624B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,608(r31)
	ctx.current_instruction = 0x880624C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 608);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x880624CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880624D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880624D8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88062568
	if (ctx.cr6.lt) goto loc_88062568;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,0(r31)
	ctx.current_instruction = 0x880624E8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,608(r31)
	ctx.current_instruction = 0x880624EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x880cb4a0
	ctx.lr = 0x880624F4;
	sub_880CB4A0(ctx, base);
loc_880624F4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88062568
	if (ctx.cr6.lt) goto loc_88062568;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88062500;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r6,608(r31)
	ctx.current_instruction = 0x88062508;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 608);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r4,0(r27)
	ctx.current_instruction = 0x88062510;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r5,4(r31)
	ctx.current_instruction = 0x88062514;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88062518;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88062524;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88062524:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88062568
	if (ctx.cr6.lt) goto loc_88062568;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88062530;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r11)
	ctx.current_instruction = 0x8806253C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r24,540(r31)
	ctx.current_instruction = 0x88062540;
	REX_STORE_U32(ctx.r31.u32 + 540, ctx.r24.u32);
	// stw r23,544(r31)
	ctx.current_instruction = 0x88062544;
	REX_STORE_U32(ctx.r31.u32 + 544, ctx.r23.u32);
	// stw r26,548(r31)
	ctx.current_instruction = 0x88062548;
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r26.u32);
	// stw r9,588(r31)
	ctx.current_instruction = 0x8806254C;
	REX_STORE_U32(ctx.r31.u32 + 588, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.current_instruction = 0x88062550;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,8(r8)
	ctx.current_instruction = 0x88062558;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x88062564;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88062564:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_88062568:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x880625dc
	if (ctx.cr6.eq) goto loc_880625DC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x880625dc
	if (!ctx.cr6.lt) goto loc_880625DC;
	// lwz r3,0(r31)
	ctx.current_instruction = 0x8806257C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880625ac
	if (ctx.cr6.eq) goto loc_880625AC;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x88062588;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880625ac
	if (ctx.cr6.eq) goto loc_880625AC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8806259C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806259C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,608(r31)
	ctx.current_instruction = 0x880625A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x880cb318
	ctx.lr = 0x880625AC;
	sub_880CB318(ctx, base);
loc_880625AC:
	// lwz r3,0(r27)
	ctx.current_instruction = 0x880625AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880625dc
	if (ctx.cr6.eq) goto loc_880625DC;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x880625B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880625dc
	if (ctx.cr6.eq) goto loc_880625DC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880625CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880625CC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,608(r31)
	ctx.current_instruction = 0x880625D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x880cb318
	ctx.lr = 0x880625DC;
	sub_880CB318(ctx, base);
loc_880625DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88067328) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88067328;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88067328) {
			switch (rex_dispatch_address) {
				case 0x88067330:
				case 0x88067374:
				case 0x880673E0:
				case 0x88067444:
				case 0x88067474:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88067328;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88067330: goto loc_88067330;
		case 0x88067374: goto loc_88067374;
		case 0x880673E0: goto loc_880673E0;
		case 0x88067444: goto loc_88067444;
		case 0x88067474: goto loc_88067474;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88067330;
	__savegprlr_27(ctx, base);
loc_88067330:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x88067330;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880674c0
	if (ctx.cr6.eq) goto loc_880674C0;
	// lwz r11,584(r3)
	ctx.current_instruction = 0x88067344;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880674c0
	if (ctx.cr6.eq) goto loc_880674C0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88067360
	if (ctx.cr6.eq) goto loc_88067360;
	// stw r30,0(r4)
	ctx.current_instruction = 0x8806735C;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
loc_88067360:
	// lwz r11,392(r31)
	ctx.current_instruction = 0x88067360;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x88067388
	if (ctx.cr6.eq) goto loc_88067388;
loc_8806736C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88065948
	ctx.lr = 0x88067374;
	sub_88065948(ctx, base);
loc_88067374:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880674c4
	if (!ctx.cr6.eq) goto loc_880674C4;
	// lwz r11,392(r31)
	ctx.current_instruction = 0x8806737C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8806736c
	if (!ctx.cr6.eq) goto loc_8806736C;
loc_88067388:
	// lwz r11,588(r31)
	ctx.current_instruction = 0x88067388;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 588);
	// addi r27,r31,588
	ctx.r27.s64 = ctx.r31.s64 + 588;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x880674a4
	if (ctx.cr6.gt) goto loc_880674A4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880674a4
	if (ctx.cr6.eq) goto loc_880674A4;
	// bdz 0x880673b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_880673B0;
	// bdz 0x88067460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88067460;
	// b 0x880674a4
	goto loc_880674A4;
loc_880673B0:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r30,100(r1)
	ctx.current_instruction = 0x880673B4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,96(r1)
	ctx.current_instruction = 0x880673B8;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r30,0(r11)
	ctx.current_instruction = 0x880673CC;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// std r30,8(r11)
	ctx.current_instruction = 0x880673D4;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x88066ca8
	ctx.lr = 0x880673E0;
	sub_88066CA8(ctx, base);
loc_880673E0:
	// lis r10,-32764
	ctx.r10.s64 = -2147221504;
	// ori r9,r10,5
	ctx.r9.u64 = ctx.r10.u64 | 5;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x880673f8
	if (!ctx.cr6.eq) goto loc_880673F8;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x8806741c
	goto loc_8806741C;
loc_880673F8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88067410
	if (!ctx.cr6.lt) goto loc_88067410;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,392(r31)
	ctx.current_instruction = 0x88067404;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88067410:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8806741c
	if (!ctx.cr6.eq) goto loc_8806741C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8806741C:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r3,584(r31)
	ctx.current_instruction = 0x88067420;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// ld r9,120(r1)
	ctx.current_instruction = 0x88067428;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,116(r1)
	ctx.current_instruction = 0x88067430;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.current_instruction = 0x88067434;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.current_instruction = 0x88067438;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r30,84(r1)
	ctx.current_instruction = 0x8806743C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x880d1f50
	ctx.lr = 0x88067444;
	sub_880D1F50(ctx, base);
loc_88067444:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88067490
	if (!ctx.cr6.lt) goto loc_88067490;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,392(r31)
	ctx.current_instruction = 0x88067454;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88067460:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,584(r31)
	ctx.current_instruction = 0x88067464;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880d7ce8
	ctx.lr = 0x88067474;
	sub_880D7CE8(ctx, base);
loc_88067474:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88067490
	if (!ctx.cr6.lt) goto loc_88067490;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,392(r31)
	ctx.current_instruction = 0x88067484;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88067490:
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x880674a4
	if (!ctx.cr6.eq) goto loc_880674A4;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_880674A4:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x880674A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_880674C0:
	// li r3,2
	ctx.r3.s64 = 2;
loc_880674C4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806A140) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806A140;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806A140) {
			switch (rex_dispatch_address) {
				case 0x8806A16C:
				case 0x8806A184:
				case 0x8806A198:
				case 0x8806A1B4:
				case 0x8806A1D0:
				case 0x8806A1E0:
				case 0x8806A1F4:
				case 0x8806A204:
				case 0x8806A218:
				case 0x8806A228:
				case 0x8806A23C:
				case 0x8806A24C:
				case 0x8806A260:
				case 0x8806A278:
				case 0x8806A28C:
				case 0x8806A298:
				case 0x8806A2A8:
				case 0x8806A2C0:
				case 0x8806A2D4:
				case 0x8806A2E0:
				case 0x8806A2F0:
				case 0x8806A308:
				case 0x8806A31C:
				case 0x8806A328:
				case 0x8806A338:
				case 0x8806A350:
				case 0x8806A364:
				case 0x8806A370:
				case 0x8806A380:
				case 0x8806A394:
				case 0x8806A3B4:
				case 0x8806A3CC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806A140;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806A16C: goto loc_8806A16C;
		case 0x8806A184: goto loc_8806A184;
		case 0x8806A198: goto loc_8806A198;
		case 0x8806A1B4: goto loc_8806A1B4;
		case 0x8806A1D0: goto loc_8806A1D0;
		case 0x8806A1E0: goto loc_8806A1E0;
		case 0x8806A1F4: goto loc_8806A1F4;
		case 0x8806A204: goto loc_8806A204;
		case 0x8806A218: goto loc_8806A218;
		case 0x8806A228: goto loc_8806A228;
		case 0x8806A23C: goto loc_8806A23C;
		case 0x8806A24C: goto loc_8806A24C;
		case 0x8806A260: goto loc_8806A260;
		case 0x8806A278: goto loc_8806A278;
		case 0x8806A28C: goto loc_8806A28C;
		case 0x8806A298: goto loc_8806A298;
		case 0x8806A2A8: goto loc_8806A2A8;
		case 0x8806A2C0: goto loc_8806A2C0;
		case 0x8806A2D4: goto loc_8806A2D4;
		case 0x8806A2E0: goto loc_8806A2E0;
		case 0x8806A2F0: goto loc_8806A2F0;
		case 0x8806A308: goto loc_8806A308;
		case 0x8806A31C: goto loc_8806A31C;
		case 0x8806A328: goto loc_8806A328;
		case 0x8806A338: goto loc_8806A338;
		case 0x8806A350: goto loc_8806A350;
		case 0x8806A364: goto loc_8806A364;
		case 0x8806A370: goto loc_8806A370;
		case 0x8806A380: goto loc_8806A380;
		case 0x8806A394: goto loc_8806A394;
		case 0x8806A3B4: goto loc_8806A3B4;
		case 0x8806A3CC: goto loc_8806A3CC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806A144;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8806A148;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8806A14C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8806A150;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806A154;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,276(r11)
	ctx.current_instruction = 0x8806A160;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806A16C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806A16C:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x8806A16C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r8,280(r9)
	ctx.current_instruction = 0x8806A178;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 280);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806A184;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806A184:
	// lwz r7,0(r31)
	ctx.current_instruction = 0x8806A184;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,244(r7)
	ctx.current_instruction = 0x8806A18C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 244);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806A198;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806A198:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8806a1bc
	if (!ctx.cr6.eq) goto loc_8806A1BC;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806A1A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,248(r11)
	ctx.current_instruction = 0x8806A1A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806A1B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806A1B4:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8806a260
	if (ctx.cr6.eq) goto loc_8806A260;
loc_8806A1BC:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806A1BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.current_instruction = 0x8806A1C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806A1D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806A1D0:
	// lwz r3,264(r31)
	ctx.current_instruction = 0x8806A1D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806a1f4
	if (ctx.cr6.eq) goto loc_8806A1F4;
	// bl 0x881ec5b8
	ctx.lr = 0x8806A1E0;
	sub_881EC5B8(ctx, base);
loc_8806A1E0:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806A1E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,180(r11)
	ctx.current_instruction = 0x8806A1E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806A1F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806A1F4:
	// lwz r3,268(r31)
	ctx.current_instruction = 0x8806A1F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806a218
	if (ctx.cr6.eq) goto loc_8806A218;
	// bl 0x881ec5b8
	ctx.lr = 0x8806A204;
	sub_881EC5B8(ctx, base);
loc_8806A204:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806A204;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,184(r11)
	ctx.current_instruction = 0x8806A20C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806A218;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806A218:
	// lwz r3,272(r31)
	ctx.current_instruction = 0x8806A218;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806a23c
	if (ctx.cr6.eq) goto loc_8806A23C;
	// bl 0x881ec5b8
	ctx.lr = 0x8806A228;
	sub_881EC5B8(ctx, base);
loc_8806A228:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806A228;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,188(r11)
	ctx.current_instruction = 0x8806A230;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806A23C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806A23C:
	// lwz r3,276(r31)
	ctx.current_instruction = 0x8806A23C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806a260
	if (ctx.cr6.eq) goto loc_8806A260;
	// bl 0x881ec5b8
	ctx.lr = 0x8806A24C;
	sub_881EC5B8(ctx, base);
loc_8806A24C:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806A24C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,192(r11)
	ctx.current_instruction = 0x8806A254;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806A260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806A260:
	// lwz r11,264(r31)
	ctx.current_instruction = 0x8806A260;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8806a2ac
	if (ctx.cr6.eq) goto loc_8806A2AC;
loc_8806A270:
	// lwz r3,264(r31)
	ctx.current_instruction = 0x8806A270;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x881ec5b8
	ctx.lr = 0x8806A278;
	sub_881EC5B8(ctx, base);
loc_8806A278:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806A278;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,196(r11)
	ctx.current_instruction = 0x8806A280;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806A28C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806A28C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,264(r31)
	ctx.current_instruction = 0x8806A290;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x881ecd98
	ctx.lr = 0x8806A298;
	sub_881ECD98(ctx, base);
loc_8806A298:
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x8806a270
	if (ctx.cr6.eq) goto loc_8806A270;
	// lwz r3,264(r31)
	ctx.current_instruction = 0x8806A2A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x881ec570
	ctx.lr = 0x8806A2A8;
	sub_881EC570(ctx, base);
loc_8806A2A8:
	// stw r30,264(r31)
	ctx.current_instruction = 0x8806A2A8;
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
loc_8806A2AC:
	// lwz r11,268(r31)
	ctx.current_instruction = 0x8806A2AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8806a2f4
	if (ctx.cr6.eq) goto loc_8806A2F4;
loc_8806A2B8:
	// lwz r3,268(r31)
	ctx.current_instruction = 0x8806A2B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x881ec5b8
	ctx.lr = 0x8806A2C0;
	sub_881EC5B8(ctx, base);
loc_8806A2C0:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806A2C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,200(r11)
	ctx.current_instruction = 0x8806A2C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806A2D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806A2D4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,268(r31)
	ctx.current_instruction = 0x8806A2D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x881ecd98
	ctx.lr = 0x8806A2E0;
	sub_881ECD98(ctx, base);
loc_8806A2E0:
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x8806a2b8
	if (ctx.cr6.eq) goto loc_8806A2B8;
	// lwz r3,268(r31)
	ctx.current_instruction = 0x8806A2E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x881ec570
	ctx.lr = 0x8806A2F0;
	sub_881EC570(ctx, base);
loc_8806A2F0:
	// stw r30,268(r31)
	ctx.current_instruction = 0x8806A2F0;
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
loc_8806A2F4:
	// lwz r11,272(r31)
	ctx.current_instruction = 0x8806A2F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8806a33c
	if (ctx.cr6.eq) goto loc_8806A33C;
loc_8806A300:
	// lwz r3,272(r31)
	ctx.current_instruction = 0x8806A300;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x881ec5b8
	ctx.lr = 0x8806A308;
	sub_881EC5B8(ctx, base);
loc_8806A308:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806A308;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,204(r11)
	ctx.current_instruction = 0x8806A310;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806A31C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806A31C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,272(r31)
	ctx.current_instruction = 0x8806A320;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x881ecd98
	ctx.lr = 0x8806A328;
	sub_881ECD98(ctx, base);
loc_8806A328:
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x8806a300
	if (ctx.cr6.eq) goto loc_8806A300;
	// lwz r3,272(r31)
	ctx.current_instruction = 0x8806A330;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x881ec570
	ctx.lr = 0x8806A338;
	sub_881EC570(ctx, base);
loc_8806A338:
	// stw r30,272(r31)
	ctx.current_instruction = 0x8806A338;
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
loc_8806A33C:
	// lwz r11,276(r31)
	ctx.current_instruction = 0x8806A33C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8806a384
	if (ctx.cr6.eq) goto loc_8806A384;
loc_8806A348:
	// lwz r3,276(r31)
	ctx.current_instruction = 0x8806A348;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x881ec5b8
	ctx.lr = 0x8806A350;
	sub_881EC5B8(ctx, base);
loc_8806A350:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806A350;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,208(r11)
	ctx.current_instruction = 0x8806A358;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806A364;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806A364:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,276(r31)
	ctx.current_instruction = 0x8806A368;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x881ecd98
	ctx.lr = 0x8806A370;
	sub_881ECD98(ctx, base);
loc_8806A370:
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x8806a348
	if (ctx.cr6.eq) goto loc_8806A348;
	// lwz r3,276(r31)
	ctx.current_instruction = 0x8806A378;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x881ec570
	ctx.lr = 0x8806A380;
	sub_881EC570(ctx, base);
loc_8806A380:
	// stw r30,276(r31)
	ctx.current_instruction = 0x8806A380;
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
loc_8806A384:
	// lwz r3,48(r31)
	ctx.current_instruction = 0x8806A384;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806a398
	if (ctx.cr6.eq) goto loc_8806A398;
	// bl 0x88050028
	ctx.lr = 0x8806A394;
	sub_88050028(ctx, base);
loc_8806A394:
	// stw r30,48(r31)
	ctx.current_instruction = 0x8806A394;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_8806A398:
	// lwz r3,44(r31)
	ctx.current_instruction = 0x8806A398;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806a3b8
	if (ctx.cr6.eq) goto loc_8806A3B8;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806A3A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8806A3A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806A3B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806A3B4:
	// stw r30,44(r31)
	ctx.current_instruction = 0x8806A3B4;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_8806A3B8:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806A3B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,156(r11)
	ctx.current_instruction = 0x8806A3C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806A3CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806A3CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8806A3D4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8806A3DC;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8806A3E0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88077788) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88077788;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88077788) {
			switch (rex_dispatch_address) {
				case 0x88077790:
				case 0x880777D4:
				case 0x880777E4:
				case 0x880777F4:
				case 0x88077804:
				case 0x88077814:
				case 0x88077824:
				case 0x8807782C:
				case 0x88077850:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88077788;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88077790: goto loc_88077790;
		case 0x880777D4: goto loc_880777D4;
		case 0x880777E4: goto loc_880777E4;
		case 0x880777F4: goto loc_880777F4;
		case 0x88077804: goto loc_88077804;
		case 0x88077814: goto loc_88077814;
		case 0x88077824: goto loc_88077824;
		case 0x8807782C: goto loc_8807782C;
		case 0x88077850: goto loc_88077850;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88077790;
	__savegprlr_29(ctx, base);
loc_88077790:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88077790;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,7688(r3)
	ctx.current_instruction = 0x88077798;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 7688);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfd f13,12016(r11)
	ctx.current_instruction = 0x880777A4;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12016);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x880777b8
	if (ctx.cr6.lt) goto loc_880777B8;
	// li r30,31
	ctx.r30.s64 = 31;
	// b 0x880777c4
	goto loc_880777C4;
loc_880777B8:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	ctx.current_instruction = 0x880777BC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.current_instruction = 0x880777C0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_880777C4:
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r4,796(r31)
	ctx.current_instruction = 0x880777C8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880777CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x880777D4;
	sub_880E6960(ctx, base);
loc_880777D4:
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r4,800(r31)
	ctx.current_instruction = 0x880777D8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880777DC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x880777E4;
	sub_880E6960(ctx, base);
loc_880777E4:
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880777E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x880777F4;
	sub_880E6960(ctx, base);
loc_880777F4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1580(r31)
	ctx.current_instruction = 0x880777F8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1580);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880777FC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x88077804;
	sub_880E6960(ctx, base);
loc_88077804:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1540(r31)
	ctx.current_instruction = 0x88077808;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1540);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8807780C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x88077814;
	sub_880E6960(ctx, base);
loc_88077814:
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,1624(r31)
	ctx.current_instruction = 0x88077818;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8807781C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x88077824;
	sub_880E6960(ctx, base);
loc_88077824:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88077824;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6b40
	ctx.lr = 0x8807782C;
	sub_880E6B40(ctx, base);
loc_8807782C:
	// lwz r11,7868(r31)
	ctx.current_instruction = 0x8807782C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x88077830;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// subfic r9,r10,39
	ctx.xer.ca = ctx.r10.u32 <= 39;
	ctx.r9.u64 = static_cast<uint64_t>(39) - ctx.r10.u64;
	// rlwinm r10,r9,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r11,4(r11)
	ctx.current_instruction = 0x8807783C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r29)
	ctx.current_instruction = 0x88077844;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88077848;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6900
	ctx.lr = 0x88077850;
	sub_880E6900(ctx, base);
loc_88077850:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807B110) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807B110;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807B110) {
			switch (rex_dispatch_address) {
				case 0x8807B118:
				case 0x8807B134:
				case 0x8807B164:
				case 0x8807B178:
				case 0x8807B26C:
				case 0x8807B2B4:
				case 0x8807B30C:
				case 0x8807B314:
				case 0x8807B39C:
				case 0x8807B458:
				case 0x8807B488:
				case 0x8807B4C0:
				case 0x8807B4C8:
				case 0x8807B4DC:
				case 0x8807B4E4:
				case 0x8807B520:
				case 0x8807B554:
				case 0x8807B598:
				case 0x8807B5C4:
				case 0x8807B5DC:
				case 0x8807B5EC:
				case 0x8807B630:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807B110;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807B118: goto loc_8807B118;
		case 0x8807B134: goto loc_8807B134;
		case 0x8807B164: goto loc_8807B164;
		case 0x8807B178: goto loc_8807B178;
		case 0x8807B26C: goto loc_8807B26C;
		case 0x8807B2B4: goto loc_8807B2B4;
		case 0x8807B30C: goto loc_8807B30C;
		case 0x8807B314: goto loc_8807B314;
		case 0x8807B39C: goto loc_8807B39C;
		case 0x8807B458: goto loc_8807B458;
		case 0x8807B488: goto loc_8807B488;
		case 0x8807B4C0: goto loc_8807B4C0;
		case 0x8807B4C8: goto loc_8807B4C8;
		case 0x8807B4DC: goto loc_8807B4DC;
		case 0x8807B4E4: goto loc_8807B4E4;
		case 0x8807B520: goto loc_8807B520;
		case 0x8807B554: goto loc_8807B554;
		case 0x8807B598: goto loc_8807B598;
		case 0x8807B5C4: goto loc_8807B5C4;
		case 0x8807B5DC: goto loc_8807B5DC;
		case 0x8807B5EC: goto loc_8807B5EC;
		case 0x8807B630: goto loc_8807B630;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8807B118;
	__savegprlr_26(ctx, base);
loc_8807B118:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x8807B118;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r27,676(r3)
	ctx.current_instruction = 0x8807B120;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 676);
	// lwz r26,1424(r3)
	ctx.current_instruction = 0x8807B124;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 1424);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,96(r1)
	ctx.current_instruction = 0x8807B12C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// bl 0x88078398
	ctx.lr = 0x8807B134;
	sub_88078398(ctx, base);
loc_8807B134:
	// lwz r11,8024(r3)
	ctx.current_instruction = 0x8807B134;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8024);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b150
	if (ctx.cr6.eq) goto loc_8807B150;
	// lwz r11,2800(r3)
	ctx.current_instruction = 0x8807B144;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8807b5c4
	if (ctx.cr6.eq) goto loc_8807B5C4;
loc_8807B150:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807B150;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8807b168
	if (!ctx.cr6.eq) goto loc_8807B168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e30c8
	ctx.lr = 0x8807B164;
	sub_880E30C8(ctx, base);
loc_8807B164:
	// b 0x8807b178
	goto loc_8807B178;
loc_8807B168:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807b178
	if (!ctx.cr6.eq) goto loc_8807B178;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e2c80
	ctx.lr = 0x8807B178;
	sub_880E2C80(ctx, base);
loc_8807B178:
	// lwz r11,2804(r31)
	ctx.current_instruction = 0x8807B178;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b1a0
	if (ctx.cr6.eq) goto loc_8807B1A0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8807b1a0
	if (ctx.cr6.eq) goto loc_8807B1A0;
	// lwz r11,2808(r31)
	ctx.current_instruction = 0x8807B18C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2808);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b1a0
	if (ctx.cr6.eq) goto loc_8807B1A0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8807b1a8
	if (!ctx.cr6.eq) goto loc_8807B1A8;
loc_8807B1A0:
	// lwz r11,2124(r31)
	ctx.current_instruction = 0x8807B1A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// stw r11,28168(r31)
	ctx.current_instruction = 0x8807B1A4;
	REX_STORE_U32(ctx.r31.u32 + 28168, ctx.r11.u32);
loc_8807B1A8:
	// lwz r11,2804(r31)
	ctx.current_instruction = 0x8807B1A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2804);
	// lwz r10,20264(r31)
	ctx.current_instruction = 0x8807B1AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,6736(r31)
	ctx.current_instruction = 0x8807B1B4;
	REX_STORE_U32(ctx.r31.u32 + 6736, ctx.r28.u32);
	// stw r11,2800(r31)
	ctx.current_instruction = 0x8807B1B8;
	REX_STORE_U32(ctx.r31.u32 + 2800, ctx.r11.u32);
	// lwz r11,30304(r31)
	ctx.current_instruction = 0x8807B1BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30304);
	// stw r10,20260(r31)
	ctx.current_instruction = 0x8807B1C0;
	REX_STORE_U32(ctx.r31.u32 + 20260, ctx.r10.u32);
	// bne cr6,0x8807b3cc
	if (!ctx.cr6.eq) goto loc_8807B3CC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b220
	if (ctx.cr6.eq) goto loc_8807B220;
	// ld r11,736(r31)
	ctx.current_instruction = 0x8807B1D0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// bne cr6,0x8807b220
	if (!ctx.cr6.eq) goto loc_8807B220;
	// lwz r11,7600(r31)
	ctx.current_instruction = 0x8807B1DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7600);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807b220
	if (!ctx.cr6.eq) goto loc_8807B220;
	// lwz r11,30308(r31)
	ctx.current_instruction = 0x8807B1E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30308);
	// lwz r10,672(r31)
	ctx.current_instruction = 0x8807B1EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// lwz r11,28(r11)
	ctx.current_instruction = 0x8807B1F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8807b20c
	if (!ctx.cr6.gt) goto loc_8807B20C;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8807b220
	if (ctx.cr6.lt) goto loc_8807B220;
loc_8807B20C:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r28,30404(r31)
	ctx.current_instruction = 0x8807B210;
	REX_STORE_U32(ctx.r31.u32 + 30404, ctx.r28.u32);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,672(r31)
	ctx.current_instruction = 0x8807B21C;
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r9.u32);
loc_8807B220:
	// lwz r11,30408(r31)
	ctx.current_instruction = 0x8807B220;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b244
	if (!ctx.cr6.eq) goto loc_8807B244;
	// lwz r11,2116(r31)
	ctx.current_instruction = 0x8807B22C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b244
	if (!ctx.cr6.eq) goto loc_8807B244;
	// lwz r11,30728(r31)
	ctx.current_instruction = 0x8807B238;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b26c
	if (ctx.cr6.eq) goto loc_8807B26C;
loc_8807B244:
	// lwz r11,30720(r31)
	ctx.current_instruction = 0x8807B244;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30720);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b25c
	if (!ctx.cr6.eq) goto loc_8807B25C;
	// lwz r11,30724(r31)
	ctx.current_instruction = 0x8807B250;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b26c
	if (ctx.cr6.eq) goto loc_8807B26C;
loc_8807B25C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,672(r31)
	ctx.current_instruction = 0x8807B260;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806d3c0
	ctx.lr = 0x8807B26C;
	sub_8806D3C0(ctx, base);
loc_8807B26C:
	// lwz r11,8004(r31)
	ctx.current_instruction = 0x8807B26C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8004);
	// lwz r10,7952(r31)
	ctx.current_instruction = 0x8807B270;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7952);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8807b284
	if (ctx.cr6.lt) goto loc_8807B284;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_8807B284:
	// lwz r11,1560(r31)
	ctx.current_instruction = 0x8807B284;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r6,1424(r31)
	ctx.current_instruction = 0x8807B290;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lwz r4,2800(r31)
	ctx.current_instruction = 0x8807B298;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,672(r31)
	ctx.current_instruction = 0x8807B2A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,92(r1)
	ctx.current_instruction = 0x8807B2A8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x8807B2AC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880799f0
	ctx.lr = 0x8807B2B4;
	sub_880799F0(ctx, base);
loc_8807B2B4:
	// lwz r10,7868(r31)
	ctx.current_instruction = 0x8807B2B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r9,7880(r31)
	ctx.current_instruction = 0x8807B2B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7880);
	// lwz r8,16(r10)
	ctx.current_instruction = 0x8807B2BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x8807B2C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// subfic r7,r8,39
	ctx.xer.ca = ctx.r8.u32 <= 39;
	ctx.r7.u64 = static_cast<uint64_t>(39) - ctx.r8.u64;
	// rlwinm r10,r7,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x8807b4e4
	if (!ctx.cr6.gt) goto loc_8807B4E4;
loc_8807B2E0:
	// lwz r11,7912(r31)
	ctx.current_instruction = 0x8807B2E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7912);
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// ble cr6,0x8807b2f4
	if (!ctx.cr6.gt) goto loc_8807B2F4;
	// li r11,30
	ctx.r11.s64 = 30;
loc_8807B2F4:
	// lwz r10,672(r31)
	ctx.current_instruction = 0x8807B2F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8807b4e4
	if (!ctx.cr6.lt) goto loc_8807B4E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88079c58
	ctx.lr = 0x8807B30C;
	sub_88079C58(ctx, base);
loc_8807B30C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88078168
	ctx.lr = 0x8807B314;
	sub_88078168(ctx, base);
loc_8807B314:
	// lwz r11,672(r31)
	ctx.current_instruction = 0x8807B314;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// lwz r10,7932(r31)
	ctx.current_instruction = 0x8807B318;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7932);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,672(r31)
	ctx.current_instruction = 0x8807B320;
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8807b330
	if (ctx.cr6.gt) goto loc_8807B330;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8807B330:
	// lwz r10,7912(r31)
	ctx.current_instruction = 0x8807B330;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7912);
	// stw r11,672(r31)
	ctx.current_instruction = 0x8807B334;
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// addi r9,r10,14
	ctx.r9.s64 = ctx.r10.s64 + 14;
	// li r10,30
	ctx.r10.s64 = 30;
	// cmpwi cr6,r9,30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 30, ctx.xer);
	// bgt cr6,0x8807b34c
	if (ctx.cr6.gt) goto loc_8807B34C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8807B34C:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8807b35c
	if (!ctx.cr6.lt) goto loc_8807B35C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x8807b36c
	goto loc_8807B36C;
loc_8807B35C:
	// cmpwi cr6,r9,30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 30, ctx.xer);
	// li r5,30
	ctx.r5.s64 = 30;
	// bgt cr6,0x8807b36c
	if (ctx.cr6.gt) goto loc_8807B36C;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_8807B36C:
	// lwz r11,1560(r31)
	ctx.current_instruction = 0x8807B36C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r6,1424(r31)
	ctx.current_instruction = 0x8807B378;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lwz r4,2800(r31)
	ctx.current_instruction = 0x8807B380;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r5,672(r31)
	ctx.current_instruction = 0x8807B388;
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,92(r1)
	ctx.current_instruction = 0x8807B390;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x8807B394;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880799f0
	ctx.lr = 0x8807B39C;
	sub_880799F0(ctx, base);
loc_8807B39C:
	// lwz r9,7868(r31)
	ctx.current_instruction = 0x8807B39C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r10,7880(r31)
	ctx.current_instruction = 0x8807B3A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7880);
	// lwz r8,16(r9)
	ctx.current_instruction = 0x8807B3A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// subfic r7,r8,39
	ctx.xer.ca = ctx.r8.u32 <= 39;
	ctx.r7.u64 = static_cast<uint64_t>(39) - ctx.r8.u64;
	// lwz r9,4(r9)
	ctx.current_instruction = 0x8807B3AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x8807b2e0
	if (ctx.cr6.gt) goto loc_8807B2E0;
	// b 0x8807b4e4
	goto loc_8807B4E4;
loc_8807B3CC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b40c
	if (ctx.cr6.eq) goto loc_8807B40C;
	// lwz r11,7600(r31)
	ctx.current_instruction = 0x8807B3D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7600);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807b40c
	if (!ctx.cr6.eq) goto loc_8807B40C;
	// lwz r11,30316(r31)
	ctx.current_instruction = 0x8807B3E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30316);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8807B3E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8807b40c
	if (ctx.cr6.eq) goto loc_8807B40C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r10,736(r31)
	ctx.current_instruction = 0x8807B3F4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8807B3F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// cmpd cr6,r10,r8
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r8.s64, ctx.xer);
	// blt cr6,0x8807b40c
	if (ctx.cr6.lt) goto loc_8807B40C;
	// stw r11,30316(r31)
	ctx.current_instruction = 0x8807B408;
	REX_STORE_U32(ctx.r31.u32 + 30316, ctx.r11.u32);
loc_8807B40C:
	// lwz r11,30408(r31)
	ctx.current_instruction = 0x8807B40C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b430
	if (!ctx.cr6.eq) goto loc_8807B430;
	// lwz r11,2116(r31)
	ctx.current_instruction = 0x8807B418;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b430
	if (!ctx.cr6.eq) goto loc_8807B430;
	// lwz r11,30728(r31)
	ctx.current_instruction = 0x8807B424;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b458
	if (ctx.cr6.eq) goto loc_8807B458;
loc_8807B430:
	// lwz r11,30720(r31)
	ctx.current_instruction = 0x8807B430;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30720);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b448
	if (!ctx.cr6.eq) goto loc_8807B448;
	// lwz r11,30724(r31)
	ctx.current_instruction = 0x8807B43C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b458
	if (ctx.cr6.eq) goto loc_8807B458;
loc_8807B448:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806d3c0
	ctx.lr = 0x8807B458;
	sub_8806D3C0(ctx, base);
loc_8807B458:
	// lwz r11,1560(r31)
	ctx.current_instruction = 0x8807B458;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r6,1424(r31)
	ctx.current_instruction = 0x8807B464;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lwz r5,676(r31)
	ctx.current_instruction = 0x8807B46C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,2800(r31)
	ctx.current_instruction = 0x8807B474;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,92(r1)
	ctx.current_instruction = 0x8807B47C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x8807B480;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880799f0
	ctx.lr = 0x8807B488;
	sub_880799F0(ctx, base);
loc_8807B488:
	// lwz r10,100(r1)
	ctx.current_instruction = 0x8807B488;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,30304(r31)
	ctx.current_instruction = 0x8807B48C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 30304);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,2804(r31)
	ctx.current_instruction = 0x8807B494;
	REX_STORE_U32(ctx.r31.u32 + 2804, ctx.r10.u32);
	// beq cr6,0x8807b4e4
	if (ctx.cr6.eq) goto loc_8807B4E4;
	// lwz r11,96(r1)
	ctx.current_instruction = 0x8807B49C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b4e4
	if (ctx.cr6.eq) goto loc_8807B4E4;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807B4A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b4e4
	if (!ctx.cr6.eq) goto loc_8807B4E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88079c58
	ctx.lr = 0x8807B4C0;
	sub_88079C58(ctx, base);
loc_8807B4C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88078168
	ctx.lr = 0x8807B4C8;
	sub_88078168(ctx, base);
loc_8807B4C8:
	// lwz r11,30304(r31)
	ctx.current_instruction = 0x8807B4C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b4dc
	if (ctx.cr6.eq) goto loc_8807B4DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880fc840
	ctx.lr = 0x8807B4DC;
	sub_880FC840(ctx, base);
loc_8807B4DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88079088
	ctx.lr = 0x8807B4E4;
	sub_88079088(ctx, base);
loc_8807B4E4:
	// lwz r11,1560(r31)
	ctx.current_instruction = 0x8807B4E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r4,2808(r31)
	ctx.current_instruction = 0x8807B4EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2808);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r30,2804(r31)
	ctx.current_instruction = 0x8807B4F4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 2804);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,1424(r31)
	ctx.current_instruction = 0x8807B500;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,676(r31)
	ctx.current_instruction = 0x8807B508;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// stw r11,84(r1)
	ctx.current_instruction = 0x8807B50C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r4,2800(r31)
	ctx.current_instruction = 0x8807B510;
	REX_STORE_U32(ctx.r31.u32 + 2800, ctx.r4.u32);
	// stw r30,20260(r31)
	ctx.current_instruction = 0x8807B514;
	REX_STORE_U32(ctx.r31.u32 + 20260, ctx.r30.u32);
	// stw r28,92(r1)
	ctx.current_instruction = 0x8807B518;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x880799f0
	ctx.lr = 0x8807B520;
	sub_880799F0(ctx, base);
loc_8807B520:
	// lwz r10,100(r1)
	ctx.current_instruction = 0x8807B520;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,6736(r31)
	ctx.current_instruction = 0x8807B524;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6736);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,2808(r31)
	ctx.current_instruction = 0x8807B52C;
	REX_STORE_U32(ctx.r31.u32 + 2808, ctx.r10.u32);
	// bne cr6,0x8807b558
	if (!ctx.cr6.eq) goto loc_8807B558;
	// lwz r11,672(r31)
	ctx.current_instruction = 0x8807B534;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bge cr6,0x8807b558
	if (!ctx.cr6.lt) goto loc_8807B558;
	// lwz r11,676(r31)
	ctx.current_instruction = 0x8807B540;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bge cr6,0x8807b558
	if (!ctx.cr6.lt) goto loc_8807B558;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807ab88
	ctx.lr = 0x8807B554;
	sub_8807AB88(ctx, base);
loc_8807B554:
	// b 0x8807b598
	goto loc_8807B598;
loc_8807B558:
	// lwz r11,6760(r31)
	ctx.current_instruction = 0x8807B558;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b574
	if (ctx.cr6.eq) goto loc_8807B574;
	// lwz r11,6764(r31)
	ctx.current_instruction = 0x8807B564;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6764);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b574
	if (ctx.cr6.eq) goto loc_8807B574;
	// stw r29,6756(r31)
	ctx.current_instruction = 0x8807B570;
	REX_STORE_U32(ctx.r31.u32 + 6756, ctx.r29.u32);
loc_8807B574:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x8807B574;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6748(r31)
	ctx.current_instruction = 0x8807B57C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6748);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,6764(r31)
	ctx.current_instruction = 0x8807B584;
	REX_STORE_U32(ctx.r31.u32 + 6764, ctx.r28.u32);
	// stw r29,6752(r31)
	ctx.current_instruction = 0x8807B588;
	REX_STORE_U32(ctx.r31.u32 + 6752, ctx.r29.u32);
	// stw r29,6744(r31)
	ctx.current_instruction = 0x8807B58C;
	REX_STORE_U32(ctx.r31.u32 + 6744, ctx.r29.u32);
	// stw r28,6760(r31)
	ctx.current_instruction = 0x8807B590;
	REX_STORE_U32(ctx.r31.u32 + 6760, ctx.r28.u32);
	// bl 0x88052d90
	ctx.lr = 0x8807B598;
	sub_88052D90(ctx, base);
loc_8807B598:
	// lwz r11,6736(r31)
	ctx.current_instruction = 0x8807B598;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b5bc
	if (!ctx.cr6.eq) goto loc_8807B5BC;
	// lwz r11,672(r31)
	ctx.current_instruction = 0x8807B5A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bge cr6,0x8807b5bc
	if (!ctx.cr6.lt) goto loc_8807B5BC;
	// lwz r11,676(r31)
	ctx.current_instruction = 0x8807B5B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// blt cr6,0x8807b1a8
	if (ctx.cr6.lt) goto loc_8807B1A8;
loc_8807B5BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e45e8
	ctx.lr = 0x8807B5C4;
	sub_880E45E8(ctx, base);
loc_8807B5C4:
	// lwz r11,8024(r31)
	ctx.current_instruction = 0x8807B5C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8024);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b5e4
	if (ctx.cr6.eq) goto loc_8807B5E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x88079c58
	ctx.lr = 0x8807B5DC;
	sub_88079C58(ctx, base);
loc_8807B5DC:
	// stw r28,8172(r31)
	ctx.current_instruction = 0x8807B5DC;
	REX_STORE_U32(ctx.r31.u32 + 8172, ctx.r28.u32);
	// b 0x8807b630
	goto loc_8807B630;
loc_8807B5E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88079c58
	ctx.lr = 0x8807B5EC;
	sub_88079C58(ctx, base);
loc_8807B5EC:
	// lwz r11,2124(r31)
	ctx.current_instruction = 0x8807B5EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// stw r29,8172(r31)
	ctx.current_instruction = 0x8807B5F0;
	REX_STORE_U32(ctx.r31.u32 + 8172, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8807b630
	if (!ctx.cr6.gt) goto loc_8807B630;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807B5FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8807b630
	if (ctx.cr6.eq) goto loc_8807B630;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8807b630
	if (ctx.cr6.eq) goto loc_8807B630;
	// lwz r11,724(r31)
	ctx.current_instruction = 0x8807B610;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r10,720(r31)
	ctx.current_instruction = 0x8807B614;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lwz r4,7848(r31)
	ctx.current_instruction = 0x8807B61C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7848);
	// lwz r3,2448(r31)
	ctx.current_instruction = 0x8807B620;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2448);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x880547a0
	ctx.lr = 0x8807B630;
	sub_880547A0(ctx, base);
loc_8807B630:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807B630;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8807b644
	if (ctx.cr6.eq) goto loc_8807B644;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8807b64c
	if (!ctx.cr6.eq) goto loc_8807B64C;
loc_8807B644:
	// stw r27,676(r31)
	ctx.current_instruction = 0x8807B644;
	REX_STORE_U32(ctx.r31.u32 + 676, ctx.r27.u32);
	// stw r26,1424(r31)
	ctx.current_instruction = 0x8807B648;
	REX_STORE_U32(ctx.r31.u32 + 1424, ctx.r26.u32);
loc_8807B64C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88095050) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88095050;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88095050) {
			switch (rex_dispatch_address) {
				case 0x88095058:
				case 0x8809538C:
				case 0x880953A4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88095050;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88095058: goto loc_88095058;
		case 0x8809538C: goto loc_8809538C;
		case 0x880953A4: goto loc_880953A4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x88095058;
	__savegprlr_24(ctx, base);
loc_88095058:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88095058;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880950a8
	if (ctx.cr6.eq) goto loc_880950A8;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x88095078;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x8809509c
	if (!ctx.cr6.eq) goto loc_8809509C;
loc_88095084:
	// li r31,16384
	ctx.r31.s64 = 16384;
	// li r3,16384
	ctx.r3.s64 = 16384;
	// stw r31,0(r25)
	ctx.current_instruction = 0x8809508C;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// stw r3,0(r24)
	ctx.current_instruction = 0x88095090;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8809509C:
	// lwz r3,0(r10)
	ctx.current_instruction = 0x8809509C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x880953b0
	goto loc_880953B0;
loc_880950A8:
	// lwz r6,12(r11)
	ctx.current_instruction = 0x880950A8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,8(r11)
	ctx.current_instruction = 0x880950AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r6,-16384
	ctx.r8.s64 = ctx.r6.s64 + -16384;
	// lwz r4,4(r11)
	ctx.current_instruction = 0x880950B4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r5,-16384
	ctx.r9.s64 = ctx.r5.s64 + -16384;
	// lwz r3,0(r11)
	ctx.current_instruction = 0x880950BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r30,0(r10)
	ctx.current_instruction = 0x880950C4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r28,4(r10)
	ctx.current_instruction = 0x880950CC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r4,-16384
	ctx.r8.s64 = ctx.r4.s64 + -16384;
	// lwz r29,8(r10)
	ctx.current_instruction = 0x880950D4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r27,12(r10)
	ctx.current_instruction = 0x880950DC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r8,r3,-16384
	ctx.r8.s64 = ctx.r3.s64 + -16384;
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x88095084
	if (ctx.cr6.gt) goto loc_88095084;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88095324
	if (!ctx.cr6.eq) goto loc_88095324;
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// bne cr6,0x88095194
	if (!ctx.cr6.eq) goto loc_88095194;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x8809513c
	if (!ctx.cr6.gt) goto loc_8809513C;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x88095158
	if (ctx.cr6.gt) goto loc_88095158;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x88095144
	if (!ctx.cr6.gt) goto loc_88095144;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// b 0x8809515c
	goto loc_8809515C;
loc_8809513C:
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8809514c
	if (!ctx.cr6.gt) goto loc_8809514C;
loc_88095144:
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// b 0x8809515c
	goto loc_8809515C;
loc_8809514C:
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bgt cr6,0x8809515c
	if (ctx.cr6.gt) goto loc_8809515C;
loc_88095158:
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_8809515C:
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x88095184
	if (!ctx.cr6.gt) goto loc_88095184;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88095174
	if (!ctx.cr6.gt) goto loc_88095174;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x880953b0
	goto loc_880953B0;
loc_88095174:
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x8809518c
	if (!ctx.cr6.gt) goto loc_8809518C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x880953b0
	goto loc_880953B0;
loc_88095184:
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88095314
	if (!ctx.cr6.gt) goto loc_88095314;
loc_8809518C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x880953b0
	goto loc_880953B0;
loc_88095194:
	// cmpwi cr6,r4,16384
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16384, ctx.xer);
	// bne cr6,0x88095204
	if (!ctx.cr6.eq) goto loc_88095204;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x880951bc
	if (!ctx.cr6.gt) goto loc_880951BC;
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x880951d8
	if (ctx.cr6.gt) goto loc_880951D8;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x880951c4
	if (!ctx.cr6.gt) goto loc_880951C4;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// b 0x880951dc
	goto loc_880951DC;
loc_880951BC:
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x880951cc
	if (!ctx.cr6.gt) goto loc_880951CC;
loc_880951C4:
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// b 0x880951dc
	goto loc_880951DC;
loc_880951CC:
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bgt cr6,0x880951dc
	if (ctx.cr6.gt) goto loc_880951DC;
loc_880951D8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_880951DC:
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x880951f4
	if (!ctx.cr6.gt) goto loc_880951F4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88095174
	if (!ctx.cr6.gt) goto loc_88095174;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x880953b0
	goto loc_880953B0;
loc_880951F4:
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x880952f4
	if (!ctx.cr6.gt) goto loc_880952F4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x880953b0
	goto loc_880953B0;
loc_88095204:
	// cmpwi cr6,r5,16384
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16384, ctx.xer);
	// bne cr6,0x88095294
	if (!ctx.cr6.eq) goto loc_88095294;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x8809522c
	if (!ctx.cr6.gt) goto loc_8809522C;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x88095248
	if (ctx.cr6.gt) goto loc_88095248;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x88095234
	if (!ctx.cr6.gt) goto loc_88095234;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8809524c
	goto loc_8809524C;
loc_8809522C:
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x8809523c
	if (!ctx.cr6.gt) goto loc_8809523C;
loc_88095234:
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// b 0x8809524c
	goto loc_8809524C;
loc_8809523C:
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bgt cr6,0x8809524c
	if (ctx.cr6.gt) goto loc_8809524C;
loc_88095248:
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_8809524C:
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x88095274
	if (!ctx.cr6.gt) goto loc_88095274;
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x88095264
	if (!ctx.cr6.gt) goto loc_88095264;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x880953b0
	goto loc_880953B0;
loc_88095264:
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x8809518c
	if (!ctx.cr6.gt) goto loc_8809518C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x880953b0
	goto loc_880953B0;
loc_88095274:
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x88095284
	if (!ctx.cr6.gt) goto loc_88095284;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x880953b0
	goto loc_880953B0;
loc_88095284:
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x880952ec
	if (!ctx.cr6.gt) goto loc_880952EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x880953b0
	goto loc_880953B0;
loc_88095294:
	// cmpwi cr6,r6,16384
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16384, ctx.xer);
	// bne cr6,0x880953a8
	if (!ctx.cr6.eq) goto loc_880953A8;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x880952bc
	if (!ctx.cr6.gt) goto loc_880952BC;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x880952d8
	if (ctx.cr6.gt) goto loc_880952D8;
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x880952c4
	if (!ctx.cr6.gt) goto loc_880952C4;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// b 0x880952dc
	goto loc_880952DC;
loc_880952BC:
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x880952cc
	if (!ctx.cr6.gt) goto loc_880952CC;
loc_880952C4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x880952dc
	goto loc_880952DC;
loc_880952CC:
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bgt cr6,0x880952dc
	if (ctx.cr6.gt) goto loc_880952DC;
loc_880952D8:
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_880952DC:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x88095304
	if (!ctx.cr6.gt) goto loc_88095304;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x880952f4
	if (!ctx.cr6.gt) goto loc_880952F4;
loc_880952EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x880953b0
	goto loc_880953B0;
loc_880952F4:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x8809530c
	if (!ctx.cr6.gt) goto loc_8809530C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x880953b0
	goto loc_880953B0;
loc_88095304:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88095314
	if (!ctx.cr6.gt) goto loc_88095314;
loc_8809530C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x880953b0
	goto loc_880953B0;
loc_88095314:
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x880952ec
	if (!ctx.cr6.gt) goto loc_880952EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x880953b0
	goto loc_880953B0;
loc_88095324:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88095388
	if (!ctx.cr6.eq) goto loc_88095388;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// beq cr6,0x88095344
	if (ctx.cr6.eq) goto loc_88095344;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_88095344:
	// cmpwi cr6,r4,16384
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16384, ctx.xer);
	// beq cr6,0x88095354
	if (ctx.cr6.eq) goto loc_88095354;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
loc_88095354:
	// cmpwi cr6,r5,16384
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16384, ctx.xer);
	// beq cr6,0x88095364
	if (ctx.cr6.eq) goto loc_88095364;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
loc_88095364:
	// cmpwi cr6,r6,16384
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16384, ctx.xer);
	// beq cr6,0x88095374
	if (ctx.cr6.eq) goto loc_88095374;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
loc_88095374:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r31,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r31.s64 = temp.s64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r3,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r3.s64 = temp.s64;
	// b 0x880953b0
	goto loc_880953B0;
loc_88095388:
	// bl 0x88085650
	ctx.lr = 0x8809538C;
	sub_88085650(ctx, base);
loc_8809538C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88085650
	ctx.lr = 0x880953A4;
	sub_88085650(ctx, base);
loc_880953A4:
	// b 0x880953b0
	goto loc_880953B0;
loc_880953A8:
	// lwz r31,80(r1)
	ctx.current_instruction = 0x880953A8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,80(r1)
	ctx.current_instruction = 0x880953AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_880953B0:
	// cmpwi cr6,r31,16384
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16384, ctx.xer);
	// beq cr6,0x88095438
	if (ctx.cr6.eq) goto loc_88095438;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,788(r26)
	ctx.current_instruction = 0x880953BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 788);
	// rlwinm r9,r31,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xC;
	// addi r8,r11,13304
	ctx.r8.s64 = ctx.r11.s64 + 13304;
	// rlwinm r7,r3,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r10,r9,r8
	ctx.current_instruction = 0x880953D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r11,r7,r8
	ctx.current_instruction = 0x880953D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srawi r31,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r6.s32 >> 1;
	// srawi r3,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// beq cr6,0x88095438
	if (ctx.cr6.eq) goto loc_88095438;
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8809540c
	if (ctx.cr6.eq) goto loc_8809540C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x88095408
	if (!ctx.cr6.gt) goto loc_88095408;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// b 0x8809540c
	goto loc_8809540C;
loc_88095408:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8809540C:
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88095438
	if (ctx.cr6.eq) goto loc_88095438;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x88095434
	if (!ctx.cr6.gt) goto loc_88095434;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stw r31,0(r25)
	ctx.current_instruction = 0x88095424;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// stw r3,0(r24)
	ctx.current_instruction = 0x88095428;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88095434:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_88095438:
	// stw r31,0(r25)
	ctx.current_instruction = 0x88095438;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// stw r3,0(r24)
	ctx.current_instruction = 0x8809543C;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B1F58) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880B1F58;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880B1F58) {
			switch (rex_dispatch_address) {
				case 0x880B1F98:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880B1F58;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880B1F98: goto loc_880B1F98;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880B1F5C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880B1F60;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880B1F64;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880B1F68;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,720(r3)
	ctx.current_instruction = 0x880B1F6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,724(r3)
	ctx.current_instruction = 0x880B1F74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1680(r3)
	ctx.current_instruction = 0x880B1F84;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 1680);
	// rlwinm r8,r9,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x880B1F98;
	sub_88052D90(ctx, base);
loc_880B1F98:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,21092(r31)
	ctx.current_instruction = 0x880B1FA0;
	REX_STORE_U32(ctx.r31.u32 + 21092, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x880b2004
	if (!ctx.cr6.eq) goto loc_880B2004;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,28020(r31)
	ctx.current_instruction = 0x880B1FB0;
	REX_STORE_U32(ctx.r31.u32 + 28020, ctx.r11.u32);
	// lis r8,-30711
	ctx.r8.s64 = -2012676096;
	// stw r11,27996(r31)
	ctx.current_instruction = 0x880B1FB8;
	REX_STORE_U32(ctx.r31.u32 + 27996, ctx.r11.u32);
	// lis r7,-30711
	ctx.r7.s64 = -2012676096;
	// stw r11,28032(r31)
	ctx.current_instruction = 0x880B1FC0;
	REX_STORE_U32(ctx.r31.u32 + 28032, ctx.r11.u32);
	// lis r6,-30712
	ctx.r6.s64 = -2012741632;
	// stw r9,28112(r31)
	ctx.current_instruction = 0x880B1FC8;
	REX_STORE_U32(ctx.r31.u32 + 28112, ctx.r9.u32);
	// lis r5,-30709
	ctx.r5.s64 = -2012545024;
	// stw r9,28116(r31)
	ctx.current_instruction = 0x880B1FD0;
	REX_STORE_U32(ctx.r31.u32 + 28116, ctx.r9.u32);
	// addi r3,r8,-18456
	ctx.r3.s64 = ctx.r8.s64 + -18456;
	// stw r10,1676(r31)
	ctx.current_instruction = 0x880B1FD8;
	REX_STORE_U32(ctx.r31.u32 + 1676, ctx.r10.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r11,r7,2640
	ctx.r11.s64 = ctx.r7.s64 + 2640;
	// stw r3,28456(r31)
	ctx.current_instruction = 0x880B1FE4;
	REX_STORE_U32(ctx.r31.u32 + 28456, ctx.r3.u32);
	// addi r9,r6,29048
	ctx.r9.s64 = ctx.r6.s64 + 29048;
	// stw r4,28120(r31)
	ctx.current_instruction = 0x880B1FEC;
	REX_STORE_U32(ctx.r31.u32 + 28120, ctx.r4.u32);
	// addi r8,r5,-368
	ctx.r8.s64 = ctx.r5.s64 + -368;
	// stw r11,28460(r31)
	ctx.current_instruction = 0x880B1FF4;
	REX_STORE_U32(ctx.r31.u32 + 28460, ctx.r11.u32);
	// stw r9,28464(r31)
	ctx.current_instruction = 0x880B1FF8;
	REX_STORE_U32(ctx.r31.u32 + 28464, ctx.r9.u32);
	// stw r8,28468(r31)
	ctx.current_instruction = 0x880B1FFC;
	REX_STORE_U32(ctx.r31.u32 + 28468, ctx.r8.u32);
	// b 0x880b218c
	goto loc_880B218C;
loc_880B2004:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x880b2048
	if (!ctx.cr6.eq) goto loc_880B2048;
	// lis r9,-30711
	ctx.r9.s64 = -2012676096;
	// stw r11,28020(r31)
	ctx.current_instruction = 0x880B2010;
	REX_STORE_U32(ctx.r31.u32 + 28020, ctx.r11.u32);
	// lis r8,-30711
	ctx.r8.s64 = -2012676096;
	// stw r11,27996(r31)
	ctx.current_instruction = 0x880B2018;
	REX_STORE_U32(ctx.r31.u32 + 27996, ctx.r11.u32);
	// lis r7,-30712
	ctx.r7.s64 = -2012741632;
	// stw r11,28032(r31)
	ctx.current_instruction = 0x880B2020;
	REX_STORE_U32(ctx.r31.u32 + 28032, ctx.r11.u32);
	// lis r6,-30709
	ctx.r6.s64 = -2012545024;
	// stw r10,1676(r31)
	ctx.current_instruction = 0x880B2028;
	REX_STORE_U32(ctx.r31.u32 + 1676, ctx.r10.u32);
	// addi r11,r9,-14488
	ctx.r11.s64 = ctx.r9.s64 + -14488;
	// addi r9,r8,6440
	ctx.r9.s64 = ctx.r8.s64 + 6440;
	// addi r8,r7,29048
	ctx.r8.s64 = ctx.r7.s64 + 29048;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r7,r6,-368
	ctx.r7.s64 = ctx.r6.s64 + -368;
	// b 0x880b216c
	goto loc_880B216C;
loc_880B2048:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// stw r11,28040(r31)
	ctx.current_instruction = 0x880B204C;
	REX_STORE_U32(ctx.r31.u32 + 28040, ctx.r11.u32);
	// stw r10,27996(r31)
	ctx.current_instruction = 0x880B2050;
	REX_STORE_U32(ctx.r31.u32 + 27996, ctx.r10.u32);
	// bne cr6,0x880b20c0
	if (!ctx.cr6.eq) goto loc_880B20C0;
	// lis r9,-30711
	ctx.r9.s64 = -2012676096;
	// stw r11,28020(r31)
	ctx.current_instruction = 0x880B205C;
	REX_STORE_U32(ctx.r31.u32 + 28020, ctx.r11.u32);
	// lis r7,-30711
	ctx.r7.s64 = -2012676096;
	// stw r11,28032(r31)
	ctx.current_instruction = 0x880B2064;
	REX_STORE_U32(ctx.r31.u32 + 28032, ctx.r11.u32);
	// lis r6,-30712
	ctx.r6.s64 = -2012741632;
	// lwz r8,2204(r31)
	ctx.current_instruction = 0x880B206C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2204);
	// lis r5,-30709
	ctx.r5.s64 = -2012545024;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r4,28112(r31)
	ctx.current_instruction = 0x880B2080;
	REX_STORE_U32(ctx.r31.u32 + 28112, ctx.r4.u32);
	// addi r9,r9,-14488
	ctx.r9.s64 = ctx.r9.s64 + -14488;
	// stw r3,28116(r31)
	ctx.current_instruction = 0x880B2088;
	REX_STORE_U32(ctx.r31.u32 + 28116, ctx.r3.u32);
	// addi r7,r7,6440
	ctx.r7.s64 = ctx.r7.s64 + 6440;
	// stw r11,28120(r31)
	ctx.current_instruction = 0x880B2090;
	REX_STORE_U32(ctx.r31.u32 + 28120, ctx.r11.u32);
	// addi r6,r6,29048
	ctx.r6.s64 = ctx.r6.s64 + 29048;
	// stw r9,28456(r31)
	ctx.current_instruction = 0x880B2098;
	REX_STORE_U32(ctx.r31.u32 + 28456, ctx.r9.u32);
	// addi r5,r5,-368
	ctx.r5.s64 = ctx.r5.s64 + -368;
	// stw r7,28460(r31)
	ctx.current_instruction = 0x880B20A0;
	REX_STORE_U32(ctx.r31.u32 + 28460, ctx.r7.u32);
	// stw r6,28464(r31)
	ctx.current_instruction = 0x880B20A4;
	REX_STORE_U32(ctx.r31.u32 + 28464, ctx.r6.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r5,28468(r31)
	ctx.current_instruction = 0x880B20AC;
	REX_STORE_U32(ctx.r31.u32 + 28468, ctx.r5.u32);
	// bne cr6,0x880b2130
	if (!ctx.cr6.eq) goto loc_880B2130;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1676(r31)
	ctx.current_instruction = 0x880B20B8;
	REX_STORE_U32(ctx.r31.u32 + 1676, ctx.r11.u32);
	// b 0x880b218c
	goto loc_880B218C;
loc_880B20C0:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// stw r10,28020(r31)
	ctx.current_instruction = 0x880B20C4;
	REX_STORE_U32(ctx.r31.u32 + 28020, ctx.r10.u32);
	// stw r10,28032(r31)
	ctx.current_instruction = 0x880B20C8;
	REX_STORE_U32(ctx.r31.u32 + 28032, ctx.r10.u32);
	// bne cr6,0x880b213c
	if (!ctx.cr6.eq) goto loc_880B213C;
	// lis r9,-30711
	ctx.r9.s64 = -2012676096;
	// lwz r8,2204(r31)
	ctx.current_instruction = 0x880B20D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2204);
	// lis r7,-30711
	ctx.r7.s64 = -2012676096;
	// lis r6,-30711
	ctx.r6.s64 = -2012676096;
	// lis r5,-30709
	ctx.r5.s64 = -2012545024;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r4,28112(r31)
	ctx.current_instruction = 0x880B20F0;
	REX_STORE_U32(ctx.r31.u32 + 28112, ctx.r4.u32);
	// addi r9,r9,-14488
	ctx.r9.s64 = ctx.r9.s64 + -14488;
	// stw r3,28116(r31)
	ctx.current_instruction = 0x880B20F8;
	REX_STORE_U32(ctx.r31.u32 + 28116, ctx.r3.u32);
	// addi r7,r7,6440
	ctx.r7.s64 = ctx.r7.s64 + 6440;
	// stw r11,28120(r31)
	ctx.current_instruction = 0x880B2100;
	REX_STORE_U32(ctx.r31.u32 + 28120, ctx.r11.u32);
	// addi r6,r6,-30616
	ctx.r6.s64 = ctx.r6.s64 + -30616;
	// stw r9,28456(r31)
	ctx.current_instruction = 0x880B2108;
	REX_STORE_U32(ctx.r31.u32 + 28456, ctx.r9.u32);
	// addi r5,r5,-368
	ctx.r5.s64 = ctx.r5.s64 + -368;
	// stw r7,28460(r31)
	ctx.current_instruction = 0x880B2110;
	REX_STORE_U32(ctx.r31.u32 + 28460, ctx.r7.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r6,28464(r31)
	ctx.current_instruction = 0x880B2118;
	REX_STORE_U32(ctx.r31.u32 + 28464, ctx.r6.u32);
	// stw r5,28468(r31)
	ctx.current_instruction = 0x880B211C;
	REX_STORE_U32(ctx.r31.u32 + 28468, ctx.r5.u32);
	// bne cr6,0x880b2130
	if (!ctx.cr6.eq) goto loc_880B2130;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1676(r31)
	ctx.current_instruction = 0x880B2128;
	REX_STORE_U32(ctx.r31.u32 + 1676, ctx.r11.u32);
	// b 0x880b218c
	goto loc_880B218C;
loc_880B2130:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,1676(r31)
	ctx.current_instruction = 0x880B2134;
	REX_STORE_U32(ctx.r31.u32 + 1676, ctx.r11.u32);
	// b 0x880b218c
	goto loc_880B218C;
loc_880B213C:
	// lis r9,-30711
	ctx.r9.s64 = -2012676096;
	// lis r8,-30711
	ctx.r8.s64 = -2012676096;
	// lis r7,-30711
	ctx.r7.s64 = -2012676096;
	// lis r6,-30709
	ctx.r6.s64 = -2012545024;
	// addi r11,r9,-8456
	ctx.r11.s64 = ctx.r9.s64 + -8456;
	// addi r9,r8,12176
	ctx.r9.s64 = ctx.r8.s64 + 12176;
	// addi r8,r7,-30616
	ctx.r8.s64 = ctx.r7.s64 + -30616;
	// addi r7,r6,-912
	ctx.r7.s64 = ctx.r6.s64 + -912;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r6,1676(r31)
	ctx.current_instruction = 0x880B2168;
	REX_STORE_U32(ctx.r31.u32 + 1676, ctx.r6.u32);
loc_880B216C:
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r7,28468(r31)
	ctx.current_instruction = 0x880B2170;
	REX_STORE_U32(ctx.r31.u32 + 28468, ctx.r7.u32);
	// stw r8,28464(r31)
	ctx.current_instruction = 0x880B2174;
	REX_STORE_U32(ctx.r31.u32 + 28464, ctx.r8.u32);
	// stw r9,28460(r31)
	ctx.current_instruction = 0x880B2178;
	REX_STORE_U32(ctx.r31.u32 + 28460, ctx.r9.u32);
	// stw r11,28456(r31)
	ctx.current_instruction = 0x880B217C;
	REX_STORE_U32(ctx.r31.u32 + 28456, ctx.r11.u32);
	// stw r3,28120(r31)
	ctx.current_instruction = 0x880B2180;
	REX_STORE_U32(ctx.r31.u32 + 28120, ctx.r3.u32);
	// stw r4,28116(r31)
	ctx.current_instruction = 0x880B2184;
	REX_STORE_U32(ctx.r31.u32 + 28116, ctx.r4.u32);
	// stw r5,28112(r31)
	ctx.current_instruction = 0x880B2188;
	REX_STORE_U32(ctx.r31.u32 + 28112, ctx.r5.u32);
loc_880B218C:
	// lwz r11,28036(r31)
	ctx.current_instruction = 0x880B218C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28036);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b219c
	if (ctx.cr6.eq) goto loc_880B219C;
	// stw r10,28020(r31)
	ctx.current_instruction = 0x880B2198;
	REX_STORE_U32(ctx.r31.u32 + 28020, ctx.r10.u32);
loc_880B219C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880B21A0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880B21A8;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880B21AC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880BC598) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880BC598;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880BC598) {
			switch (rex_dispatch_address) {
				case 0x880BC5A0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BC598;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x880BC5A0: goto loc_880BC5A0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x880BC5A0;
	__savegprlr_24(ctx, base);
loc_880BC5A0:
	// addi r9,r6,3
	ctx.r9.s64 = ctx.r6.s64 + 3;
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r5
	ctx.current_instruction = 0x880BC5C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwzx r31,r8,r5
	ctx.current_instruction = 0x880BC5DC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// addi r27,r11,3
	ctx.r27.s64 = ctx.r11.s64 + 3;
	// lwzx r8,r30,r5
	ctx.current_instruction = 0x880BC5E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// addi r26,r11,2
	ctx.r26.s64 = ctx.r11.s64 + 2;
	// lwzx r6,r6,r5
	ctx.current_instruction = 0x880BC5EC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r29,4(r10)
	ctx.current_instruction = 0x880BC5F8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r7,0(r10)
	ctx.current_instruction = 0x880BC600;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,4(r9)
	ctx.current_instruction = 0x880BC608;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r9)
	ctx.current_instruction = 0x880BC610;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// addi r25,r11,3
	ctx.r25.s64 = ctx.r11.s64 + 3;
	// add r10,r28,r5
	ctx.r10.u64 = ctx.r28.u64 + ctx.r5.u64;
	// addi r24,r11,2
	ctx.r24.s64 = ctx.r11.s64 + 2;
	// lwzx r8,r27,r5
	ctx.current_instruction = 0x880BC624;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r5.u32);
	// add r9,r31,r29
	ctx.r9.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lwzx r31,r26,r5
	ctx.current_instruction = 0x880BC62C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// add r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 + ctx.r30.u64;
	// lwzx r6,r28,r5
	ctx.current_instruction = 0x880BC634;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	// rlwinm r29,r25,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r7,4(r10)
	ctx.current_instruction = 0x880BC640;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r24,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r30,r9
	ctx.r10.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lwzx r9,r29,r5
	ctx.current_instruction = 0x880BC654;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwzx r5,r28,r5
	ctx.current_instruction = 0x880BC660;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r8,4(r11)
	ctx.current_instruction = 0x880BC668;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x880BC670;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r5,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// stw r3,0(r4)
	ctx.current_instruction = 0x880BC68C;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BCF50) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880BCF50);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BCF50;
	ctx.current_instruction = 0x880BCF50;
	// lwz r10,44(r3)
	ctx.current_instruction = 0x880BCF50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x880bcf88
	if (ctx.cr6.lt) goto loc_880BCF88;
	// lwz r11,48(r3)
	ctx.current_instruction = 0x880BCF5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x880bcf90
	if (!ctx.cr6.lt) goto loc_880BCF90;
	// lwz r11,40(r3)
	ctx.current_instruction = 0x880BCF68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addic. r11,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r11.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x880bcf90
	if (!ctx.cr0.lt) goto loc_880BCF90;
	// lwz r10,28(r3)
	ctx.current_instruction = 0x880BCF78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x880bcf90
	if (!ctx.cr6.lt) goto loc_880BCF90;
loc_880BCF88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880BCF90:
	// lwz r10,24(r3)
	ctx.current_instruction = 0x880BCF90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r11,r11,16428
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(16428));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880BCFF8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880BCFF8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BCFF8;
	ctx.current_instruction = 0x880BCFF8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x880bd004
	if (!ctx.cr6.eq) goto loc_880BD004;
	// stw r4,36(r3)
	ctx.current_instruction = 0x880BD000;
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
loc_880BD004:
	// lwz r10,36(r3)
	ctx.current_instruction = 0x880BD004;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x880bd018
	if (ctx.cr6.gt) goto loc_880BD018;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_880BD018:
	// lwz r10,32(r3)
	ctx.current_instruction = 0x880BD018;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,36(r3)
	ctx.current_instruction = 0x880BD020;
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stwx r5,r9,r10
	ctx.current_instruction = 0x880BD024;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880BE3D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880BE3D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880BE3D8) {
			switch (rex_dispatch_address) {
				case 0x880BE3E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BE3D8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x880BE3E0: goto loc_880BE3E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x880BE3E0;
	__savegprlr_22(ctx, base);
loc_880BE3E0:
	// lwz r10,44(r3)
	ctx.current_instruction = 0x880BE3E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x880be430
	if (ctx.cr6.lt) goto loc_880BE430;
	// lwz r11,48(r3)
	ctx.current_instruction = 0x880BE3F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x880be420
	if (!ctx.cr6.lt) goto loc_880BE420;
	// lwz r11,40(r3)
	ctx.current_instruction = 0x880BE400;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addic. r11,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r11.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x880be420
	if (!ctx.cr0.lt) goto loc_880BE420;
	// lwz r10,28(r3)
	ctx.current_instruction = 0x880BE410;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x880be430
	if (ctx.cr6.lt) goto loc_880BE430;
loc_880BE420:
	// lwz r10,24(r3)
	ctx.current_instruction = 0x880BE420;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r11,r11,16428
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(16428));
	// add. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x880be438
	if (!ctx.cr0.eq) goto loc_880BE438;
loc_880BE430:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_880BE438:
	// lwz r9,56(r3)
	ctx.current_instruction = 0x880BE438;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,31544(r9)
	ctx.current_instruction = 0x880BE43C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880be474
	if (ctx.cr6.eq) goto loc_880BE474;
	// lwz r11,27988(r9)
	ctx.current_instruction = 0x880BE448;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880be474
	if (ctx.cr6.eq) goto loc_880BE474;
	// lwz r11,16(r3)
	ctx.current_instruction = 0x880BE454;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r24,2
	ctx.r24.s64 = 2;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880be478
	if (ctx.cr6.lt) goto loc_880BE478;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// b 0x880be478
	goto loc_880BE478;
loc_880BE474:
	// li r24,1
	ctx.r24.s64 = 1;
loc_880BE478:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x880be568
	if (!ctx.cr6.gt) goto loc_880BE568;
	// lwz r11,20(r3)
	ctx.current_instruction = 0x880BE484;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// lwz r27,720(r9)
	ctx.current_instruction = 0x880BE48C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 720);
	// rlwinm r25,r11,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,4(r10)
	ctx.current_instruction = 0x880BE494;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r11,-1
	ctx.r11.s64 = -1;
loc_880BE49C:
	// add r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 + ctx.r4.u64;
	// mullw r10,r27,r4
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r4.s32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lwz r31,0(r9)
	ctx.current_instruction = 0x880BE4B8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r31,30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 30, ctx.xer);
	// blt cr6,0x880be4d0
	if (ctx.cr6.lt) goto loc_880BE4D0;
	// cmplwi cr6,r31,60
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 60, ctx.xer);
	// bge cr6,0x880be4d0
	if (!ctx.cr6.lt) goto loc_880BE4D0;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_880BE4D0:
	// lwz r30,4(r9)
	ctx.current_instruction = 0x880BE4D0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r30,30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 30, ctx.xer);
	// blt cr6,0x880be4e8
	if (ctx.cr6.lt) goto loc_880BE4E8;
	// cmplwi cr6,r30,60
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 60, ctx.xer);
	// bge cr6,0x880be4e8
	if (!ctx.cr6.lt) goto loc_880BE4E8;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_880BE4E8:
	// add r10,r25,r10
	ctx.r10.u64 = ctx.r25.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwz r8,0(r10)
	ctx.current_instruction = 0x880BE4F4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 30, ctx.xer);
	// blt cr6,0x880be50c
	if (ctx.cr6.lt) goto loc_880BE50C;
	// cmplwi cr6,r8,60
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 60, ctx.xer);
	// bge cr6,0x880be50c
	if (!ctx.cr6.lt) goto loc_880BE50C;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_880BE50C:
	// lwz r10,4(r10)
	ctx.current_instruction = 0x880BE50C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 30, ctx.xer);
	// blt cr6,0x880be524
	if (ctx.cr6.lt) goto loc_880BE524;
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// bge cr6,0x880be524
	if (!ctx.cr6.lt) goto loc_880BE524;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_880BE524:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x880be560
	if (ctx.cr6.eq) goto loc_880BE560;
	// lwz r22,72(r3)
	ctx.current_instruction = 0x880BE52C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// subfc r10,r10,r22
	ctx.xer.ca = ctx.r22.u32 >= ctx.r10.u32;
	ctx.r10.u64 = ctx.r22.u64 - ctx.r10.u64;
	// subfze r9,r11
	temp.u8 = ~ctx.r11.u32 + ctx.xer.ca < ~ctx.r11.u32;
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r10,r8,r22
	ctx.xer.ca = ctx.r22.u32 >= ctx.r8.u32;
	ctx.r10.u64 = ctx.r22.u64 - ctx.r8.u64;
	// subfze r8,r11
	temp.u8 = ~ctx.r11.u32 + ctx.xer.ca < ~ctx.r11.u32;
	ctx.r8.u64 = ~ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r10,r30,r22
	ctx.xer.ca = ctx.r22.u32 >= ctx.r30.u32;
	ctx.r10.u64 = ctx.r22.u64 - ctx.r30.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subfze r8,r11
	temp.u8 = ~ctx.r11.u32 + ctx.xer.ca < ~ctx.r11.u32;
	ctx.r8.u64 = ~ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r10,r31,r22
	ctx.xer.ca = ctx.r22.u32 >= ctx.r31.u32;
	ctx.r10.u64 = ctx.r22.u64 - ctx.r31.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subfze r10,r11
	temp.u8 = ~ctx.r11.u32 + ctx.xer.ca < ~ctx.r11.u32;
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_880BE560:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bdnz 0x880be49c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880BE49C;
loc_880BE568:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x880be58c
	if (ctx.cr6.eq) goto loc_880BE58C;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x880be580
	if (!ctx.cr6.eq) goto loc_880BE580;
	// stw r29,0(r6)
	ctx.current_instruction = 0x880BE578;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// b 0x880be58c
	goto loc_880BE58C;
loc_880BE580:
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// srawi r23,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 1;
	// stw r11,0(r6)
	ctx.current_instruction = 0x880BE588;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_880BE58C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x880be598
	if (ctx.cr6.eq) goto loc_880BE598;
	// stw r23,0(r7)
	ctx.current_instruction = 0x880BE594;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r23.u32);
loc_880BE598:
	// li r11,3
	ctx.r11.s64 = 3;
	// srawi r10,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r23.s32 >> 31;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r23
	ctx.xer.ca = ctx.r23.u32 >= ctx.r11.u32;
	ctx.r8.u64 = ctx.r23.u64 - ctx.r11.u64;
	// adde r3,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BF848) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880BF848;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880BF848) {
			switch (rex_dispatch_address) {
				case 0x880BF884:
				case 0x880BF8A8:
				case 0x880BF8B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BF848;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880BF884: goto loc_880BF884;
		case 0x880BF8A8: goto loc_880BF8A8;
		case 0x880BF8B8: goto loc_880BF8B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880BF84C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880BF850;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880BF854;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880BF858;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,60(r3)
	ctx.current_instruction = 0x880BF860;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,13612
	ctx.r10.s64 = ctx.r11.s64 + 13612;
	// stw r10,0(r31)
	ctx.current_instruction = 0x880BF870;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x880bf88c
	if (ctx.cr6.eq) goto loc_880BF88C;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050358
	ctx.lr = 0x880BF884;
	sub_88050358(ctx, base);
loc_880BF884:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r31)
	ctx.current_instruction = 0x880BF888;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_880BF88C:
	// lis r30,-30680
	ctx.r30.s64 = -2010644480;
	// lwz r3,18540(r30)
	ctx.current_instruction = 0x880BF890;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 18540);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880bf8b0
	if (ctx.cr6.eq) goto loc_880BF8B0;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050358
	ctx.lr = 0x880BF8A8;
	sub_88050358(ctx, base);
loc_880BF8A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,18540(r30)
	ctx.current_instruction = 0x880BF8AC;
	REX_STORE_U32(ctx.r30.u32 + 18540, ctx.r11.u32);
loc_880BF8B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880bf710
	ctx.lr = 0x880BF8B8;
	sub_880BF710(ctx, base);
loc_880BF8B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880BF8BC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880BF8C4;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880BF8C8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880C0548) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880C0548);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C0548;
	ctx.current_instruction = 0x880C0548;
	PPCRegister temp{};
	uint32_t ea{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880c056c
	if (ctx.cr6.eq) goto loc_880C056C;
	// lwz r11,4(r4)
	ctx.current_instruction = 0x880C0550;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880c056c
	if (!ctx.cr6.gt) goto loc_880C056C;
	// lwz r11,8(r4)
	ctx.current_instruction = 0x880C055C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880c056c
	if (!ctx.cr6.gt) goto loc_880C056C;
	// stw r4,19112(r3)
	ctx.current_instruction = 0x880C0568;
	REX_STORE_U32(ctx.r3.u32 + 19112, ctx.r4.u32);
loc_880C056C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x880c05a8
	if (ctx.cr6.eq) goto loc_880C05A8;
	// lwz r11,4(r5)
	ctx.current_instruction = 0x880C0574;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880c05a8
	if (!ctx.cr6.gt) goto loc_880C05A8;
	// lwz r11,8(r5)
	ctx.current_instruction = 0x880C0580;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880c05a8
	if (!ctx.cr6.gt) goto loc_880C05A8;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r3,19112
	ctx.r10.s64 = ctx.r3.s64 + 19112;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880C059C:
	// lwzu r9,4(r11)
	ctx.current_instruction = 0x880C059C;
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ctx.current_instruction = 0x880C05A0;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x880c059c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C059C;
loc_880C05A8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x880c05cc
	if (ctx.cr6.eq) goto loc_880C05CC;
	// lwz r11,4(r6)
	ctx.current_instruction = 0x880C05B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880c05cc
	if (!ctx.cr6.gt) goto loc_880C05CC;
	// lwz r11,8(r6)
	ctx.current_instruction = 0x880C05BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880c05cc
	if (!ctx.cr6.gt) goto loc_880C05CC;
	// stw r6,19196(r3)
	ctx.current_instruction = 0x880C05C8;
	REX_STORE_U32(ctx.r3.u32 + 19196, ctx.r6.u32);
loc_880C05CC:
	// lwz r11,30624(r3)
	ctx.current_instruction = 0x880C05CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c05e4
	if (!ctx.cr6.eq) goto loc_880C05E4;
	// lwz r11,30628(r3)
	ctx.current_instruction = 0x880C05D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_880C05E4:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,4(r6)
	ctx.current_instruction = 0x880C05EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,8(r6)
	ctx.current_instruction = 0x880C05F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,4(r5)
	ctx.current_instruction = 0x880C060C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,8(r5)
	ctx.current_instruction = 0x880C0618;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r8,r3,19156
	ctx.r8.s64 = ctx.r3.s64 + 19156;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880C0638:
	// lwzu r9,4(r11)
	ctx.current_instruction = 0x880C0638;
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ctx.current_instruction = 0x880C063C;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x880c0638
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C0638;
	// lwz r9,19116(r3)
	ctx.current_instruction = 0x880C0644;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 19116);
	// lwz r10,19132(r3)
	ctx.current_instruction = 0x880C0648;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 19132);
	// lhz r11,19130(r3)
	ctx.current_instruction = 0x880C064C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 19130);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r8)
	ctx.current_instruction = 0x880C0654;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,19172(r3)
	ctx.current_instruction = 0x880C065C;
	REX_STORE_U32(ctx.r3.u32 + 19172, ctx.r10.u32);
	// sth r11,19170(r3)
	ctx.current_instruction = 0x880C0660;
	REX_STORE_U16(ctx.r3.u32 + 19170, ctx.r11.u16);
	// bne cr6,0x880c0690
	if (!ctx.cr6.eq) goto loc_880C0690;
	// lwz r10,19160(r3)
	ctx.current_instruction = 0x880C0668;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 19160);
	// lwz r8,19164(r3)
	ctx.current_instruction = 0x880C066C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 19164);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r11,31
	ctx.r7.s64 = ctx.r11.s64 + 31;
	// rlwinm r6,r7,0,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// mullw r11,r4,r8
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// stw r11,19176(r3)
	ctx.current_instruction = 0x880C0688;
	REX_STORE_U32(ctx.r3.u32 + 19176, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880C0690:
	// lwz r10,19164(r3)
	ctx.current_instruction = 0x880C0690;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 19164);
	// lwz r8,19160(r3)
	ctx.current_instruction = 0x880C0694;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 19160);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// stw r4,19176(r3)
	ctx.current_instruction = 0x880C06A8;
	REX_STORE_U32(ctx.r3.u32 + 19176, ctx.r4.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880C3EC8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C3EC8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C3EC8) {
			switch (rex_dispatch_address) {
				case 0x880C3ED0:
				case 0x880C4154:
				case 0x880C42CC:
				case 0x880C42F8:
				case 0x880C4318:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C3EC8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C3ED0: goto loc_880C3ED0;
		case 0x880C4154: goto loc_880C4154;
		case 0x880C42CC: goto loc_880C42CC;
		case 0x880C42F8: goto loc_880C42F8;
		case 0x880C4318: goto loc_880C4318;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x880C3ED0;
	__savegprlr_16(ctx, base);
loc_880C3ED0:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x880C3ED0;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// lwz r11,796(r3)
	ctx.current_instruction = 0x880C3ED8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// lwz r10,1352(r3)
	ctx.current_instruction = 0x880C3EDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1352);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// lwz r9,800(r3)
	ctx.current_instruction = 0x880C3EE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 800);
	// lwz r6,1360(r3)
	ctx.current_instruction = 0x880C3EEC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1360);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r30,27988(r3)
	ctx.current_instruction = 0x880C3EF8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 27988);
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// subf r11,r6,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// addi r25,r11,16
	ctx.r25.s64 = ctx.r11.s64 + 16;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r10,r25,1
	ctx.r10.s64 = ctx.r25.s64 + 1;
	// srawi r26,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 1;
	// srawi r24,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r10.s32 >> 1;
	// srawi r20,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r20.s64 = ctx.r8.s32 >> 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x880c3f4c
	if (ctx.cr6.eq) goto loc_880C3F4C;
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x880C3F38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c3f4c
	if (ctx.cr6.eq) goto loc_880C3F4C;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
loc_880C3F4C:
	// lwz r11,832(r31)
	ctx.current_instruction = 0x880C3F4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c42b8
	if (!ctx.cr6.eq) goto loc_880C42B8;
	// lwz r23,308(r1)
	ctx.current_instruction = 0x880C3F58;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x880c3f6c
	if (ctx.cr6.eq) goto loc_880C3F6C;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bne cr6,0x880c3f7c
	if (!ctx.cr6.eq) goto loc_880C3F7C;
loc_880C3F6C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x880c42b8
	if (ctx.cr6.eq) goto loc_880C42B8;
	// cmpwi cr6,r25,16
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 16, ctx.xer);
	// beq cr6,0x880c42b8
	if (ctx.cr6.eq) goto loc_880C42B8;
loc_880C3F7C:
	// lwz r16,316(r1)
	ctx.current_instruction = 0x880C3F7C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x880c40c8
	if (ctx.cr6.eq) goto loc_880C40C8;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x880c3fa0
	if (!ctx.cr6.eq) goto loc_880C3FA0;
	// li r25,16
	ctx.r25.s64 = 16;
	// li r24,8
	ctx.r24.s64 = 8;
loc_880C3FA0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x880c4018
	if (!ctx.cr6.gt) goto loc_880C4018;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_880C3FAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x880c3fd8
	if (!ctx.cr6.gt) goto loc_880C3FD8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// subf r9,r8,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r8.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_880C3FC8:
	// lbzx r30,r9,r11
	ctx.current_instruction = 0x880C3FC8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r30,0(r11)
	ctx.current_instruction = 0x880C3FCC;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x880c3fc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C3FC8;
loc_880C3FD8:
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// lbz r9,-1(r11)
	ctx.current_instruction = 0x880C3FE0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// bge cr6,0x880c4008
	if (!ctx.cr6.lt) goto loc_880C4008;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfic r10,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880c4008
	if (ctx.cr6.eq) goto loc_880C4008;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880C4000:
	// stbu r9,1(r11)
	ctx.current_instruction = 0x880C4000;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x880c4000
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C4000;
loc_880C4008:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bne 0x880c3fac
	if (!ctx.cr0.eq) goto loc_880C3FAC;
loc_880C4018:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x880c40c8
	if (!ctx.cr6.eq) goto loc_880C40C8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x880c40c8
	if (!ctx.cr6.gt) goto loc_880C40C8;
	// subf r29,r21,r18
	ctx.r29.u64 = ctx.r18.u64 - ctx.r21.u64;
	// subf r28,r22,r19
	ctx.r28.u64 = ctx.r19.u64 - ctx.r22.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_880C403C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x880c4078
	if (!ctx.cr6.gt) goto loc_880C4078;
	// subf r10,r9,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r9.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subf r8,r9,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r9.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_880C4060:
	// lbzx r31,r11,r8
	ctx.current_instruction = 0x880C4060;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// stb r31,0(r11)
	ctx.current_instruction = 0x880C4064;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbzx r31,r6,r11
	ctx.current_instruction = 0x880C4068;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// stbx r31,r28,r11
	ctx.current_instruction = 0x880C406C;
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x880c4060
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C4060;
loc_880C4078:
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// lbz r31,-1(r8)
	ctx.current_instruction = 0x880C4088;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
	// lbz r30,-1(r6)
	ctx.current_instruction = 0x880C408C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r6.u32 + -1);
	// bge cr6,0x880c40b8
	if (!ctx.cr6.lt) goto loc_880C40B8;
	// subfic r6,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r6.u64 = static_cast<uint64_t>(8) - ctx.r10.u64;
	// add r8,r28,r9
	ctx.r8.u64 = ctx.r28.u64 + ctx.r9.u64;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_880C40A8:
	// stbx r31,r10,r11
	ctx.current_instruction = 0x880C40A8;
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u8);
	// stb r30,0(r11)
	ctx.current_instruction = 0x880C40AC;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x880c40a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C40A8;
loc_880C40B8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// add r3,r3,r20
	ctx.r3.u64 = ctx.r3.u64 + ctx.r20.u64;
	// bne 0x880c403c
	if (!ctx.cr0.eq) goto loc_880C403C;
loc_880C40C8:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x880c4318
	if (ctx.cr6.eq) goto loc_880C4318;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x880c40f0
	if (ctx.cr6.eq) goto loc_880C40F0;
	// rlwinm r11,r25,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// b 0x880c4134
	goto loc_880C4134;
loc_880C40F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x880c4134
	if (!ctx.cr6.gt) goto loc_880C4134;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_880C4104:
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r31,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880C4114:
	// lbzx r10,r9,r11
	ctx.current_instruction = 0x880C4114;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r10,0(r11)
	ctx.current_instruction = 0x880C4118;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x880c4114
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C4114;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// bne 0x880c4104
	if (!ctx.cr0.eq) goto loc_880C4104;
loc_880C4134:
	// addi r29,r31,-16
	ctx.r29.s64 = ctx.r31.s64 + -16;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// bge cr6,0x880c4160
	if (!ctx.cr6.lt) goto loc_880C4160;
	// subfic r30,r5,16
	ctx.xer.ca = ctx.r5.u32 <= 16;
	ctx.r30.u64 = static_cast<uint64_t>(16) - ctx.r5.u64;
loc_880C4144:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x880C4154;
	sub_880547A0(ctx, base);
loc_880C4154:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x880c4144
	if (!ctx.cr0.eq) goto loc_880C4144;
loc_880C4160:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x880c4318
	if (!ctx.cr6.eq) goto loc_880C4318;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x880c418c
	if (ctx.cr6.eq) goto loc_880C418C;
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r8,r11,r22
	ctx.r8.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// b 0x880c424c
	goto loc_880C424C;
loc_880C418C:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x880c424c
	if (!ctx.cr6.gt) goto loc_880C424C;
	// subf r6,r19,r22
	ctx.r6.u64 = ctx.r22.u64 - ctx.r19.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// addi r9,r21,3
	ctx.r9.s64 = ctx.r21.s64 + 3;
	// addi r10,r18,2
	ctx.r10.s64 = ctx.r18.s64 + 2;
	// subf r5,r18,r21
	ctx.r5.u64 = ctx.r21.u64 - ctx.r18.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
loc_880C41B4:
	// lbz r3,-3(r9)
	ctx.current_instruction = 0x880C41B4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + -3);
	// stb r3,0(r8)
	ctx.current_instruction = 0x880C41B8;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r3.u8);
	// lbz r3,-2(r10)
	ctx.current_instruction = 0x880C41BC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// stb r3,0(r11)
	ctx.current_instruction = 0x880C41C0;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// lbz r3,-2(r9)
	ctx.current_instruction = 0x880C41C4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + -2);
	// stb r3,1(r7)
	ctx.current_instruction = 0x880C41C8;
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r3.u8);
	// lbz r7,-1(r10)
	ctx.current_instruction = 0x880C41CC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// stb r7,1(r11)
	ctx.current_instruction = 0x880C41D0;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbzx r3,r5,r10
	ctx.current_instruction = 0x880C41D4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// stb r3,2(r8)
	ctx.current_instruction = 0x880C41D8;
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880C41DC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stb r7,2(r11)
	ctx.current_instruction = 0x880C41E0;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r3,0(r9)
	ctx.current_instruction = 0x880C41E4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stb r3,3(r8)
	ctx.current_instruction = 0x880C41E8;
	REX_STORE_U8(ctx.r8.u32 + 3, ctx.r3.u8);
	// lbz r7,1(r10)
	ctx.current_instruction = 0x880C41EC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,3(r11)
	ctx.current_instruction = 0x880C41F0;
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r3,1(r9)
	ctx.current_instruction = 0x880C41F4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// stb r3,4(r8)
	ctx.current_instruction = 0x880C41F8;
	REX_STORE_U8(ctx.r8.u32 + 4, ctx.r3.u8);
	// lbz r7,2(r10)
	ctx.current_instruction = 0x880C41FC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stb r7,4(r11)
	ctx.current_instruction = 0x880C4200;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r3,2(r9)
	ctx.current_instruction = 0x880C4204;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// stb r3,5(r8)
	ctx.current_instruction = 0x880C4208;
	REX_STORE_U8(ctx.r8.u32 + 5, ctx.r3.u8);
	// lbz r7,3(r10)
	ctx.current_instruction = 0x880C420C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,5(r11)
	ctx.current_instruction = 0x880C4210;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r3,3(r9)
	ctx.current_instruction = 0x880C4214;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// stb r3,6(r8)
	ctx.current_instruction = 0x880C4218;
	REX_STORE_U8(ctx.r8.u32 + 6, ctx.r3.u8);
	// lbz r7,4(r10)
	ctx.current_instruction = 0x880C421C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// stb r7,6(r11)
	ctx.current_instruction = 0x880C4220;
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r3,4(r9)
	ctx.current_instruction = 0x880C4224;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// add r9,r9,r20
	ctx.r9.u64 = ctx.r9.u64 + ctx.r20.u64;
	// stb r3,7(r8)
	ctx.current_instruction = 0x880C422C;
	REX_STORE_U8(ctx.r8.u32 + 7, ctx.r3.u8);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lbz r7,5(r10)
	ctx.current_instruction = 0x880C4234;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + ctx.r20.u64;
	// stb r7,7(r11)
	ctx.current_instruction = 0x880C423C;
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// bdnz 0x880c41b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C41B4;
loc_880C424C:
	// addi r6,r8,-8
	ctx.r6.s64 = ctx.r8.s64 + -8;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bge cr6,0x880c4318
	if (!ctx.cr6.lt) goto loc_880C4318;
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// subfic r4,r4,8
	ctx.xer.ca = ctx.r4.u32 <= 8;
	ctx.r4.u64 = static_cast<uint64_t>(8) - ctx.r4.u64;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
loc_880C4268:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880C427C:
	// lbzu r9,1(r11)
	ctx.current_instruction = 0x880C427C;
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ctx.current_instruction = 0x880C4280;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x880c427c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C427C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880C429C:
	// lbzu r9,1(r11)
	ctx.current_instruction = 0x880C429C;
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ctx.current_instruction = 0x880C42A0;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x880c429c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C429C;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x880c4268
	if (!ctx.cr0.eq) goto loc_880C4268;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
loc_880C42B8:
	// lwz r11,8200(r31)
	ctx.current_instruction = 0x880C42B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8200);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880C42CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880C42CC:
	// lwz r10,316(r1)
	ctx.current_instruction = 0x880C42CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880c4318
	if (!ctx.cr6.eq) goto loc_880C4318;
	// lwz r11,8196(r31)
	ctx.current_instruction = 0x880C42D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8196);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880C42F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880C42F8:
	// lwz r10,8196(r31)
	ctx.current_instruction = 0x880C42F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8196);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880C4318;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880C4318:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CAC40) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CAC40;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CAC40) {
			switch (rex_dispatch_address) {
				case 0x880CAC48:
				case 0x880CAC78:
				case 0x880CAC90:
				case 0x880CACC8:
				case 0x880CACD4:
				case 0x880CAD14:
				case 0x880CAD24:
				case 0x880CAD34:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CAC40;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CAC48: goto loc_880CAC48;
		case 0x880CAC78: goto loc_880CAC78;
		case 0x880CAC90: goto loc_880CAC90;
		case 0x880CACC8: goto loc_880CACC8;
		case 0x880CACD4: goto loc_880CACD4;
		case 0x880CAD14: goto loc_880CAD14;
		case 0x880CAD24: goto loc_880CAD24;
		case 0x880CAD34: goto loc_880CAD34;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880CAC48;
	__savegprlr_29(ctx, base);
loc_880CAC48:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880CAC48;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880CAC4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.current_instruction = 0x880CAC54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,16(r11)
	ctx.current_instruction = 0x880CAC58;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r29,16(r10)
	ctx.current_instruction = 0x880CAC5C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x880cac70
	if (ctx.cr6.eq) goto loc_880CAC70;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x880cac78
	if (!ctx.cr6.eq) goto loc_880CAC78;
loc_880CAC70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c8e68
	ctx.lr = 0x880CAC78;
	sub_880C8E68(ctx, base);
loc_880CAC78:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x880cac88
	if (ctx.cr6.eq) goto loc_880CAC88;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x880cac90
	if (!ctx.cr6.eq) goto loc_880CAC90;
loc_880CAC88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c8cf0
	ctx.lr = 0x880CAC90;
	sub_880C8CF0(ctx, base);
loc_880CAC90:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x880caca8
	if (!ctx.cr6.eq) goto loc_880CACA8;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880CAC98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,14(r11)
	ctx.current_instruction = 0x880CAC9C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x880cacc0
	if (ctx.cr6.eq) goto loc_880CACC0;
loc_880CACA8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x880cacc8
	if (!ctx.cr6.eq) goto loc_880CACC8;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880CACB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,14(r11)
	ctx.current_instruction = 0x880CACB4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x880cacc8
	if (!ctx.cr6.eq) goto loc_880CACC8;
loc_880CACC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c90f0
	ctx.lr = 0x880CACC8;
	sub_880C90F0(ctx, base);
loc_880CACC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r31)
	ctx.current_instruction = 0x880CACCC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880c94e0
	ctx.lr = 0x880CACD4;
	sub_880C94E0(ctx, base);
loc_880CACD4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cad38
	if (!ctx.cr6.eq) goto loc_880CAD38;
	// lwz r11,108(r31)
	ctx.current_instruction = 0x880CACDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,116(r31)
	ctx.current_instruction = 0x880CACE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// lwz r9,112(r31)
	ctx.current_instruction = 0x880CACE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r7,120(r31)
	ctx.current_instruction = 0x880CACEC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// rlwinm r6,r10,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 | ctx.r11.u64;
	// lwz r3,0(r31)
	ctx.current_instruction = 0x880CACF8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// or r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 | ctx.r10.u64;
	// stw r5,92(r31)
	ctx.current_instruction = 0x880CAD00;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r5.u32);
	// stw r9,96(r31)
	ctx.current_instruction = 0x880CAD04;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stw r7,104(r31)
	ctx.current_instruction = 0x880CAD08;
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// stw r11,100(r31)
	ctx.current_instruction = 0x880CAD0C;
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x880c94e0
	ctx.lr = 0x880CAD14;
	sub_880C94E0(ctx, base);
loc_880CAD14:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cad38
	if (!ctx.cr6.eq) goto loc_880CAD38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c9600
	ctx.lr = 0x880CAD24;
	sub_880C9600(ctx, base);
loc_880CAD24:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cad38
	if (!ctx.cr6.eq) goto loc_880CAD38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ca778
	ctx.lr = 0x880CAD34;
	sub_880CA778(ctx, base);
loc_880CAD34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_880CAD38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CB828) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880CB828);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CB828;
	ctx.current_instruction = 0x880CB828;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,512(r11)
	ctx.current_instruction = 0x880CB834;
	REX_STORE_U8(ctx.r11.u32 + 512, ctx.r10.u8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880CBC90) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880CBC90);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CBC90;
	ctx.current_instruction = 0x880CBC90;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	ctx.current_instruction = 0x880CBC94;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,0(r7)
	ctx.current_instruction = 0x880CBC98;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// std r11,0(r8)
	ctx.current_instruction = 0x880CBC9C;
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// lwz r3,4(r3)
	ctx.current_instruction = 0x880CBCA0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,12(r3)
	ctx.current_instruction = 0x880CBCA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_880CC488) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880CC488);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CC488;
	ctx.current_instruction = 0x880CC488;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	ctx.current_instruction = 0x880CC48C;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.current_instruction = 0x880CC490;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,28(r10)
	ctx.current_instruction = 0x880CC498;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_880CC988) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CC988;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CC988) {
			switch (rex_dispatch_address) {
				case 0x880CC990:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CC988;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x880CC990: goto loc_880CC990;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880CC990;
	__savegprlr_29(ctx, base);
loc_880CC990:
	// li r30,3
	ctx.r30.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r6)
	ctx.current_instruction = 0x880CC998;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// lwz r7,24(r4)
	ctx.current_instruction = 0x880CC99C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x880cc9b8
	if (!ctx.cr6.eq) goto loc_880CC9B8;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880CC9B8:
	// lwz r11,48(r31)
	ctx.current_instruction = 0x880CC9B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880cca74
	if (!ctx.cr6.eq) goto loc_880CCA74;
	// lwz r11,12(r31)
	ctx.current_instruction = 0x880CC9C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880cca74
	if (!ctx.cr6.eq) goto loc_880CCA74;
	// ld r11,32(r31)
	ctx.current_instruction = 0x880CC9D0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpd cr6,r11,r5
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r5.s64, ctx.xer);
	// blt cr6,0x880cca84
	if (ctx.cr6.lt) goto loc_880CCA84;
	// bne cr6,0x880ccaa0
	if (!ctx.cr6.eq) goto loc_880CCAA0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x880cca04
	if (!ctx.cr6.eq) goto loc_880CCA04;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// b 0x880cca64
	goto loc_880CCA64;
loc_880CCA04:
	// lwz r10,48(r11)
	ctx.current_instruction = 0x880CCA04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880cca50
	if (!ctx.cr6.eq) goto loc_880CCA50;
	// lwz r9,12(r11)
	ctx.current_instruction = 0x880CCA10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x880cca28
	if (!ctx.cr6.eq) goto loc_880CCA28;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x880cca28
	if (!ctx.cr6.eq) goto loc_880CCA28;
	// li r8,1
	ctx.r8.s64 = 1;
loc_880CCA28:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880cca50
	if (!ctx.cr6.eq) goto loc_880CCA50;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x880CCA30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,12(r11)
	ctx.current_instruction = 0x880CCA34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,16(r11)
	ctx.current_instruction = 0x880CCA38;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x880cca50
	if (!ctx.cr6.eq) goto loc_880CCA50;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x880cca60
	if (!ctx.cr6.eq) goto loc_880CCA60;
loc_880CCA50:
	// lwz r11,60(r11)
	ctx.current_instruction = 0x880CCA50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880cca04
	if (!ctx.cr6.eq) goto loc_880CCA04;
	// b 0x880cca64
	goto loc_880CCA64;
loc_880CCA60:
	// li r4,1
	ctx.r4.s64 = 1;
loc_880CCA64:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880ccaa4
	if (ctx.cr6.lt) goto loc_880CCAA4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x880cca90
	if (!ctx.cr6.eq) goto loc_880CCA90;
loc_880CCA74:
	// lwz r31,60(r31)
	ctx.current_instruction = 0x880CCA74;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x880cc9b8
	if (!ctx.cr6.eq) goto loc_880CC9B8;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880CCA84:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r6)
	ctx.current_instruction = 0x880CCA88;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880CCA90:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	ctx.current_instruction = 0x880CCA98;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880CCAA0:
	// stw r30,0(r6)
	ctx.current_instruction = 0x880CCAA0;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
loc_880CCAA4:
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CF9A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CF9A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CF9A8) {
			switch (rex_dispatch_address) {
				case 0x880CF9B0:
				case 0x880CFA08:
				case 0x880CFA5C:
				case 0x880CFAF4:
				case 0x880CFBBC:
				case 0x880CFD9C:
				case 0x880CFE54:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CF9A8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CF9B0: goto loc_880CF9B0;
		case 0x880CFA08: goto loc_880CFA08;
		case 0x880CFA5C: goto loc_880CFA5C;
		case 0x880CFAF4: goto loc_880CFAF4;
		case 0x880CFBBC: goto loc_880CFBBC;
		case 0x880CFD9C: goto loc_880CFD9C;
		case 0x880CFE54: goto loc_880CFE54;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x880CF9B0;
	__savegprlr_17(ctx, base);
loc_880CF9B0:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x880CF9B0;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CF9C0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880cf9d8
	if (!ctx.cr6.eq) goto loc_880CF9D8;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_880CF9D8:
	// addi r23,r4,-24
	ctx.r23.s64 = ctx.r4.s64 + -24;
	// addi r22,r6,24
	ctx.r22.s64 = ctx.r6.s64 + 24;
	// cmplwi cr6,r23,50
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 50, ctx.xer);
	// blt cr6,0x880cfe6c
	if (ctx.cr6.lt) goto loc_880CFE6C;
	// ld r11,0(r31)
	ctx.current_instruction = 0x880CF9E8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r24,r22,32
	ctx.r24.u64 = ctx.r22.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CFA08;
	sub_8805ADC8(ctx, base);
loc_880CFA08:
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x880cfe6c
	if (!ctx.cr6.eq) goto loc_880CFE6C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CFA10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880cfe6c
	if (ctx.cr6.eq) goto loc_880CFE6C;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x880CFA1C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r11,0(r11)
	ctx.current_instruction = 0x880CFA24;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r23,64
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 64, ctx.xer);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// stw r9,80(r1)
	ctx.current_instruction = 0x880CFA30;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r25,r8,16
	ctx.r25.u64 = ctx.r8.u32 & 0xFFFF;
	// blt cr6,0x880cfe6c
	if (ctx.cr6.lt) goto loc_880CFE6C;
	// ld r11,0(r31)
	ctx.current_instruction = 0x880CFA40;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// bl 0x8805adc8
	ctx.lr = 0x880CFA5C;
	sub_8805ADC8(ctx, base);
loc_880CFA5C:
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x880cfe6c
	if (!ctx.cr6.eq) goto loc_880CFE6C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CFA64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880cfe6c
	if (ctx.cr6.eq) goto loc_880CFE6C;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x880CFA70;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// li r28,64
	ctx.r28.s64 = 64;
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CFA78;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFA84;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r7,0(r11)
	ctx.current_instruction = 0x880CFA90;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,1(r11)
	ctx.current_instruction = 0x880CFA94;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r6,80(r1)
	ctx.current_instruction = 0x880CFAA0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r26,r3,16
	ctx.r26.u64 = ctx.r3.u32 & 0xFFFF;
	// beq cr6,0x880cfb38
	if (ctx.cr6.eq) goto loc_880CFB38;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880cfb38
	if (!ctx.cr6.gt) goto loc_880CFB38;
loc_880CFAC4:
	// addi r30,r28,2
	ctx.r30.s64 = ctx.r28.s64 + 2;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x880cfe6c
	if (ctx.cr6.gt) goto loc_880CFE6C;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// ld r10,0(r31)
	ctx.current_instruction = 0x880CFAD8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CFAF4;
	sub_8805ADC8(ctx, base);
loc_880CFAF4:
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x880cfe6c
	if (!ctx.cr6.eq) goto loc_880CFE6C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CFAFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880cfe6c
	if (ctx.cr6.eq) goto loc_880CFE6C;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x880CFB08;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lbz r10,0(r11)
	ctx.current_instruction = 0x880CFB10;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r8,80(r1)
	ctx.current_instruction = 0x880CFB1C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
	// blt cr6,0x880cfac4
	if (ctx.cr6.lt) goto loc_880CFAC4;
loc_880CFB38:
	// clrlwi r27,r26,16
	ctx.r27.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x880cfd7c
	if (ctx.cr6.eq) goto loc_880CFD7C;
	// lhz r11,240(r31)
	ctx.current_instruction = 0x880CFB44;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x880cfb5c
	if (!ctx.cr6.eq) goto loc_880CFB5C;
loc_880CFB50:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_880CFB5C:
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// bgt cr6,0x880cfb50
	if (ctx.cr6.gt) goto loc_880CFB50;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r29,0
	ctx.r29.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r25,244(r10)
	ctx.current_instruction = 0x880CFB7C;
	REX_STORE_U16(ctx.r10.u32 + 244, ctx.r25.u16);
	// ble cr6,0x880cfd7c
	if (!ctx.cr6.gt) goto loc_880CFD7C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r11,14168
	ctx.r26.s64 = ctx.r11.s64 + 14168;
loc_880CFB90:
	// addi r11,r28,22
	ctx.r11.s64 = ctx.r28.s64 + 22;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x880cfe6c
	if (ctx.cr6.gt) goto loc_880CFE6C;
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// ld r10,0(r31)
	ctx.current_instruction = 0x880CFBA0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CFBBC;
	sub_8805ADC8(ctx, base);
loc_880CFBBC:
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// bne cr6,0x880cfe6c
	if (!ctx.cr6.eq) goto loc_880CFE6C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CFBC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880cfe6c
	if (ctx.cr6.eq) goto loc_880CFE6C;
	// lbz r8,3(r11)
	ctx.current_instruction = 0x880CFBD0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lbz r5,2(r11)
	ctx.current_instruction = 0x880CFBD8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r6,1(r11)
	ctx.current_instruction = 0x880CFBE4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.current_instruction = 0x880CFBE8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFBF4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r26,16
	ctx.r5.s64 = ctx.r26.s64 + 16;
	// rlwinm r8,r4,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lbz r6,1(r11)
	ctx.current_instruction = 0x880CFC04;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r8,r3,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,0(r11)
	ctx.current_instruction = 0x880CFC10;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r8,r6,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// stw r4,96(r1)
	ctx.current_instruction = 0x880CFC1C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFC20;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,0(r11)
	ctx.current_instruction = 0x880CFC28;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.current_instruction = 0x880CFC2C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbzu r6,2(r11)
	ctx.current_instruction = 0x880CFC34;
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFC3C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r8,1(r11)
	ctx.current_instruction = 0x880CFC40;
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFC44;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r4,1(r11)
	ctx.current_instruction = 0x880CFC48;
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFC4C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r25,1(r11)
	ctx.current_instruction = 0x880CFC50;
	ea = 1 + ctx.r11.u32;
	ctx.r25.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFC54;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r20,1(r11)
	ctx.current_instruction = 0x880CFC58;
	ea = 1 + ctx.r11.u32;
	ctx.r20.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFC5C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r19,1(r11)
	ctx.current_instruction = 0x880CFC60;
	ea = 1 + ctx.r11.u32;
	ctx.r19.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFC64;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r18,1(r11)
	ctx.current_instruction = 0x880CFC68;
	ea = 1 + ctx.r11.u32;
	ctx.r18.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFC6C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r17,1(r11)
	ctx.current_instruction = 0x880CFC70;
	ea = 1 + ctx.r11.u32;
	ctx.r17.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r3,100(r1)
	ctx.current_instruction = 0x880CFC78;
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r3.u16);
	// stb r8,105(r1)
	ctx.current_instruction = 0x880CFC7C;
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r8.u8);
	// stb r6,104(r1)
	ctx.current_instruction = 0x880CFC80;
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r6.u8);
	// stb r4,106(r1)
	ctx.current_instruction = 0x880CFC84;
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r4.u8);
	// sth r7,102(r1)
	ctx.current_instruction = 0x880CFC88;
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r7.u16);
	// stb r20,108(r1)
	ctx.current_instruction = 0x880CFC8C;
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r20.u8);
	// stb r25,107(r1)
	ctx.current_instruction = 0x880CFC90;
	REX_STORE_U8(ctx.r1.u32 + 107, ctx.r25.u8);
	// stb r19,109(r1)
	ctx.current_instruction = 0x880CFC94;
	REX_STORE_U8(ctx.r1.u32 + 109, ctx.r19.u8);
	// stb r17,111(r1)
	ctx.current_instruction = 0x880CFC98;
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r17.u8);
	// stb r18,110(r1)
	ctx.current_instruction = 0x880CFC9C;
	REX_STORE_U8(ctx.r1.u32 + 110, ctx.r18.u8);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFCA0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_880CFCA4:
	// lbz r11,0(r10)
	ctx.current_instruction = 0x880CFCA4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r9)
	ctx.current_instruction = 0x880CFCA8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r8,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x880cfcc4
	if (!ctx.cr0.eq) goto loc_880CFCC4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x880cfca4
	if (!ctx.cr6.eq) goto loc_880CFCA4;
loc_880CFCC4:
	// lhz r11,240(r31)
	ctx.current_instruction = 0x880CFCC4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 240);
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stwx r9,r7,r31
	ctx.current_instruction = 0x880CFCEC;
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x880CFCF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r8,0(r10)
	ctx.current_instruction = 0x880CFCF4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,1(r10)
	ctx.current_instruction = 0x880CFCF8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r9,r6,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lhz r11,240(r31)
	ctx.current_instruction = 0x880CFD00;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 240);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r3,248(r11)
	ctx.current_instruction = 0x880CFD24;
	REX_STORE_U16(ctx.r11.u32 + 248, ctx.r3.u16);
	// lhz r11,240(r31)
	ctx.current_instruction = 0x880CFD28;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 240);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x880CFD30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFD38;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// sth r9,240(r31)
	ctx.current_instruction = 0x880CFD40;
	REX_STORE_U16(ctx.r31.u32 + 240, ctx.r9.u16);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x880CFD44;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x880CFD48;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r6,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r8,2(r11)
	ctx.current_instruction = 0x880CFD50;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,0(r11)
	ctx.current_instruction = 0x880CFD58;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// stw r7,80(r1)
	ctx.current_instruction = 0x880CFD60;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r28,r11,22
	ctx.r28.s64 = ctx.r11.s64 + 22;
	// blt cr6,0x880cfb90
	if (ctx.cr6.lt) goto loc_880CFB90;
loc_880CFD7C:
	// addi r30,r28,24
	ctx.r30.s64 = ctx.r28.s64 + 24;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x880cfe60
	if (!ctx.cr6.lt) goto loc_880CFE60;
	// add r6,r28,r22
	ctx.r6.u64 = ctx.r28.u64 + ctx.r22.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cd8c0
	ctx.lr = 0x880CFD9C;
	sub_880CD8C0(ctx, base);
loc_880CFD9C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cfe70
	if (!ctx.cr6.eq) goto loc_880CFE70;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,13960
	ctx.r11.s64 = ctx.r11.s64 + 13960;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_880CFDB4:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CFDB4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880CFDB8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x880cfdd4
	if (!ctx.cr0.eq) goto loc_880CFDD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880cfdb4
	if (!ctx.cr6.eq) goto loc_880CFDB4;
loc_880CFDD4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880cfe14
	if (ctx.cr6.eq) goto loc_880CFE14;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,14088
	ctx.r11.s64 = ctx.r11.s64 + 14088;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_880CFDEC:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CFDEC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880CFDF0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x880cfe0c
	if (!ctx.cr0.eq) goto loc_880CFE0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880cfdec
	if (!ctx.cr6.eq) goto loc_880CFDEC;
loc_880CFE0C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880cfe60
	if (!ctx.cr6.eq) goto loc_880CFE60;
loc_880CFE14:
	// lwz r4,96(r1)
	ctx.current_instruction = 0x880CFE14;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r30,r22
	ctx.r11.u64 = ctx.r30.u64 + ctx.r22.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x880CFE1C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r4,-24
	ctx.r10.s64 = ctx.r4.s64 + -24;
	// ld r8,40(r31)
	ctx.current_instruction = 0x880CFE24;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,0(r31)
	ctx.current_instruction = 0x880CFE3C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x880cfb50
	if (ctx.cr6.gt) goto loc_880CFB50;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cde90
	ctx.lr = 0x880CFE54;
	sub_880CDE90(ctx, base);
loc_880CFE54:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cfe70
	if (!ctx.cr6.eq) goto loc_880CFE70;
	// std r30,0(r31)
	ctx.current_instruction = 0x880CFE5C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
loc_880CFE60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_880CFE6C:
	// li r3,3
	ctx.r3.s64 = 3;
loc_880CFE70:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D90E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D90E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D90E8) {
			switch (rex_dispatch_address) {
				case 0x880D90F0:
				case 0x880D916C:
				case 0x880D919C:
				case 0x880D91D8:
				case 0x880D9208:
				case 0x880D9250:
				case 0x880D9280:
				case 0x880D92BC:
				case 0x880D92E0:
				case 0x880D935C:
				case 0x880D93D8:
				case 0x880D93F4:
				case 0x880D941C:
				case 0x880D9438:
				case 0x880D945C:
				case 0x880D9528:
				case 0x880D9588:
				case 0x880D95A0:
				case 0x880D95E4:
				case 0x880D965C:
				case 0x880D96C0:
				case 0x880D96DC:
				case 0x880D9720:
				case 0x880D9778:
				case 0x880D97D4:
				case 0x880D9834:
				case 0x880D984C:
				case 0x880D9890:
				case 0x880D98F4:
				case 0x880D9968:
				case 0x880D9A2C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D90E8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D90F0: goto loc_880D90F0;
		case 0x880D916C: goto loc_880D916C;
		case 0x880D919C: goto loc_880D919C;
		case 0x880D91D8: goto loc_880D91D8;
		case 0x880D9208: goto loc_880D9208;
		case 0x880D9250: goto loc_880D9250;
		case 0x880D9280: goto loc_880D9280;
		case 0x880D92BC: goto loc_880D92BC;
		case 0x880D92E0: goto loc_880D92E0;
		case 0x880D935C: goto loc_880D935C;
		case 0x880D93D8: goto loc_880D93D8;
		case 0x880D93F4: goto loc_880D93F4;
		case 0x880D941C: goto loc_880D941C;
		case 0x880D9438: goto loc_880D9438;
		case 0x880D945C: goto loc_880D945C;
		case 0x880D9528: goto loc_880D9528;
		case 0x880D9588: goto loc_880D9588;
		case 0x880D95A0: goto loc_880D95A0;
		case 0x880D95E4: goto loc_880D95E4;
		case 0x880D965C: goto loc_880D965C;
		case 0x880D96C0: goto loc_880D96C0;
		case 0x880D96DC: goto loc_880D96DC;
		case 0x880D9720: goto loc_880D9720;
		case 0x880D9778: goto loc_880D9778;
		case 0x880D97D4: goto loc_880D97D4;
		case 0x880D9834: goto loc_880D9834;
		case 0x880D984C: goto loc_880D984C;
		case 0x880D9890: goto loc_880D9890;
		case 0x880D98F4: goto loc_880D98F4;
		case 0x880D9968: goto loc_880D9968;
		case 0x880D9A2C: goto loc_880D9A2C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880D90F0;
	__savegprlr_20(ctx, base);
loc_880D90F0:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x880D90F0;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,28012(r3)
	ctx.current_instruction = 0x880D90F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28012);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,720(r3)
	ctx.current_instruction = 0x880D90FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// lbz r8,88(r4)
	ctx.current_instruction = 0x880D9108;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 88);
	// mullw r9,r11,r6
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lwz r30,7868(r3)
	ctx.current_instruction = 0x880D9110;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r6,0,26,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x3E;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm r21,r5,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r20,r10,71
	ctx.r20.s64 = ctx.r10.s64 + 71;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x880d922c
	if (!ctx.cr6.eq) goto loc_880D922C;
	// lbz r11,146(r4)
	ctx.current_instruction = 0x880D9144;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 146);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lbz r11,147(r4)
	ctx.current_instruction = 0x880D914C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 147);
	// beq cr6,0x880d91c0
	if (ctx.cr6.eq) goto loc_880D91C0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,20852(r31)
	ctx.current_instruction = 0x880D9158;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// beq cr6,0x880d9190
	if (ctx.cr6.eq) goto loc_880D9190;
	// lwz r5,44(r11)
	ctx.current_instruction = 0x880D9160;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r4,40(r11)
	ctx.current_instruction = 0x880D9164;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x880e6960
	ctx.lr = 0x880D916C;
	sub_880E6960(ctx, base);
loc_880D916C:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880D916C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d9314
	if (ctx.cr6.eq) goto loc_880D9314;
	// lwz r9,20852(r31)
	ctx.current_instruction = 0x880D9178;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// lwz r10,28632(r31)
	ctx.current_instruction = 0x880D917C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28632);
	// lwz r9,44(r9)
	ctx.current_instruction = 0x880D9180;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,28632(r31)
	ctx.current_instruction = 0x880D9188;
	REX_STORE_U32(ctx.r31.u32 + 28632, ctx.r8.u32);
	// b 0x880d9300
	goto loc_880D9300;
loc_880D9190:
	// lwz r5,36(r11)
	ctx.current_instruction = 0x880D9190;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r4,32(r11)
	ctx.current_instruction = 0x880D9194;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x880e6960
	ctx.lr = 0x880D919C;
	sub_880E6960(ctx, base);
loc_880D919C:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880D919C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d9314
	if (ctx.cr6.eq) goto loc_880D9314;
	// lwz r9,20852(r31)
	ctx.current_instruction = 0x880D91A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// lwz r10,28632(r31)
	ctx.current_instruction = 0x880D91AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28632);
	// lwz r9,36(r9)
	ctx.current_instruction = 0x880D91B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,28632(r31)
	ctx.current_instruction = 0x880D91B8;
	REX_STORE_U32(ctx.r31.u32 + 28632, ctx.r8.u32);
	// b 0x880d9300
	goto loc_880D9300;
loc_880D91C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,20852(r31)
	ctx.current_instruction = 0x880D91C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// beq cr6,0x880d91fc
	if (ctx.cr6.eq) goto loc_880D91FC;
	// lwz r5,28(r11)
	ctx.current_instruction = 0x880D91CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,24(r11)
	ctx.current_instruction = 0x880D91D0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x880e6960
	ctx.lr = 0x880D91D8;
	sub_880E6960(ctx, base);
loc_880D91D8:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880D91D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d9314
	if (ctx.cr6.eq) goto loc_880D9314;
	// lwz r9,20852(r31)
	ctx.current_instruction = 0x880D91E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// lwz r10,28632(r31)
	ctx.current_instruction = 0x880D91E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28632);
	// lwz r9,28(r9)
	ctx.current_instruction = 0x880D91EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,28632(r31)
	ctx.current_instruction = 0x880D91F4;
	REX_STORE_U32(ctx.r31.u32 + 28632, ctx.r8.u32);
	// b 0x880d9300
	goto loc_880D9300;
loc_880D91FC:
	// lwz r5,20(r11)
	ctx.current_instruction = 0x880D91FC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,16(r11)
	ctx.current_instruction = 0x880D9200;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x880e6960
	ctx.lr = 0x880D9208;
	sub_880E6960(ctx, base);
loc_880D9208:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880D9208;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d9314
	if (ctx.cr6.eq) goto loc_880D9314;
	// lwz r9,20852(r31)
	ctx.current_instruction = 0x880D9214;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// lwz r10,28632(r31)
	ctx.current_instruction = 0x880D9218;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28632);
	// lwz r9,20(r9)
	ctx.current_instruction = 0x880D921C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,28632(r31)
	ctx.current_instruction = 0x880D9224;
	REX_STORE_U32(ctx.r31.u32 + 28632, ctx.r8.u32);
	// b 0x880d9300
	goto loc_880D9300;
loc_880D922C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lbz r11,146(r22)
	ctx.current_instruction = 0x880D9230;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 146);
	// bne cr6,0x880d92a4
	if (!ctx.cr6.eq) goto loc_880D92A4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,20852(r31)
	ctx.current_instruction = 0x880D923C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// beq cr6,0x880d9274
	if (ctx.cr6.eq) goto loc_880D9274;
	// lwz r5,60(r11)
	ctx.current_instruction = 0x880D9244;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r4,56(r11)
	ctx.current_instruction = 0x880D9248;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x880e6960
	ctx.lr = 0x880D9250;
	sub_880E6960(ctx, base);
loc_880D9250:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880D9250;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d9314
	if (ctx.cr6.eq) goto loc_880D9314;
	// lwz r9,20852(r31)
	ctx.current_instruction = 0x880D925C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// lwz r10,28632(r31)
	ctx.current_instruction = 0x880D9260;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28632);
	// lwz r9,60(r9)
	ctx.current_instruction = 0x880D9264;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,28632(r31)
	ctx.current_instruction = 0x880D926C;
	REX_STORE_U32(ctx.r31.u32 + 28632, ctx.r8.u32);
	// b 0x880d9300
	goto loc_880D9300;
loc_880D9274:
	// lwz r5,52(r11)
	ctx.current_instruction = 0x880D9274;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,48(r11)
	ctx.current_instruction = 0x880D9278;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x880e6960
	ctx.lr = 0x880D9280;
	sub_880E6960(ctx, base);
loc_880D9280:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880D9280;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d9314
	if (ctx.cr6.eq) goto loc_880D9314;
	// lwz r9,20852(r31)
	ctx.current_instruction = 0x880D928C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// lwz r10,28632(r31)
	ctx.current_instruction = 0x880D9290;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28632);
	// lwz r9,52(r9)
	ctx.current_instruction = 0x880D9294;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,28632(r31)
	ctx.current_instruction = 0x880D929C;
	REX_STORE_U32(ctx.r31.u32 + 28632, ctx.r8.u32);
	// b 0x880d9300
	goto loc_880D9300;
loc_880D92A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,20852(r31)
	ctx.current_instruction = 0x880D92A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// beq cr6,0x880d92d4
	if (ctx.cr6.eq) goto loc_880D92D4;
	// lwz r5,12(r11)
	ctx.current_instruction = 0x880D92B0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,8(r11)
	ctx.current_instruction = 0x880D92B4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x880e6960
	ctx.lr = 0x880D92BC;
	sub_880E6960(ctx, base);
loc_880D92BC:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880D92BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d9314
	if (ctx.cr6.eq) goto loc_880D9314;
	// lwz r10,20852(r31)
	ctx.current_instruction = 0x880D92C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// lwz r10,12(r10)
	ctx.current_instruction = 0x880D92CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x880d92f4
	goto loc_880D92F4;
loc_880D92D4:
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880D92D4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880D92D8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x880D92E0;
	sub_880E6960(ctx, base);
loc_880D92E0:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880D92E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d9314
	if (ctx.cr6.eq) goto loc_880D9314;
	// lwz r10,20852(r31)
	ctx.current_instruction = 0x880D92EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20852);
	// lwz r10,4(r10)
	ctx.current_instruction = 0x880D92F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_880D92F4:
	// lwz r9,28632(r31)
	ctx.current_instruction = 0x880D92F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28632);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,28632(r31)
	ctx.current_instruction = 0x880D92FC;
	REX_STORE_U32(ctx.r31.u32 + 28632, ctx.r9.u32);
loc_880D9300:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d9314
	if (ctx.cr6.eq) goto loc_880D9314;
	// lwz r11,30156(r31)
	ctx.current_instruction = 0x880D9308;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30156);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,30156(r31)
	ctx.current_instruction = 0x880D9310;
	REX_STORE_U32(ctx.r31.u32 + 30156, ctx.r11.u32);
loc_880D9314:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880D9314;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880d93f4
	if (!ctx.cr6.eq) goto loc_880D93F4;
	// lbz r11,88(r22)
	ctx.current_instruction = 0x880D9320;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 88);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x880d93f4
	if (ctx.cr6.eq) goto loc_880D93F4;
	// lwz r11,2256(r31)
	ctx.current_instruction = 0x880D932C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d935c
	if (!ctx.cr6.eq) goto loc_880D935C;
	// lwz r11,92(r22)
	ctx.current_instruction = 0x880D9338;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 92);
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880D9344;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// rlwinm r9,r11,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x880e6960
	ctx.lr = 0x880D935C;
	sub_880E6960(ctx, base);
loc_880D935C:
	// lwz r11,92(r22)
	ctx.current_instruction = 0x880D935C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 92);
	// srawi r11,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 28;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x880d93f4
	if (ctx.cr6.eq) goto loc_880D93F4;
	// lbz r10,88(r22)
	ctx.current_instruction = 0x880D936C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r22.u32 + 88);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x880d93f4
	if (ctx.cr6.eq) goto loc_880D93F4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880d938c
	if (!ctx.cr6.eq) goto loc_880D938C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x880d93ec
	goto loc_880D93EC;
loc_880D938C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x880d93e4
	if (ctx.cr6.eq) goto loc_880D93E4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880d93f4
	if (!ctx.cr6.eq) goto loc_880D93F4;
	// lwz r11,7856(r31)
	ctx.current_instruction = 0x880D939C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7856);
	// rlwinm r10,r21,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.current_instruction = 0x880D93A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880d93c4
	if (!ctx.cr6.eq) goto loc_880D93C4;
	// rlwinm r11,r11,0,16,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d93c8
	if (ctx.cr6.eq) goto loc_880D93C8;
loc_880D93C4:
	// li r25,1
	ctx.r25.s64 = 1;
loc_880D93C8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x880D93D8;
	sub_880E6960(ctx, base);
loc_880D93D8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x880d93e8
	if (!ctx.cr6.eq) goto loc_880D93E8;
loc_880D93E4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_880D93E8:
	// li r5,1
	ctx.r5.s64 = 1;
loc_880D93EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x880D93F4;
	sub_880E6960(ctx, base);
loc_880D93F4:
	// lbz r11,88(r22)
	ctx.current_instruction = 0x880D93F4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 88);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x880d94c0
	if (!ctx.cr6.eq) goto loc_880D94C0;
	// lwz r11,2428(r31)
	ctx.current_instruction = 0x880D9404;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d941c
	if (ctx.cr6.eq) goto loc_880D941C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r22)
	ctx.current_instruction = 0x880D9414;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 96);
	// bl 0x880fa448
	ctx.lr = 0x880D941C;
	sub_880FA448(ctx, base);
loc_880D941C:
	// lbz r11,146(r22)
	ctx.current_instruction = 0x880D941C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 146);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28(r22)
	ctx.current_instruction = 0x880D9424;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d9a28
	if (ctx.cr6.eq) goto loc_880D9A28;
	// bl 0x880e6960
	ctx.lr = 0x880D9438;
	sub_880E6960(ctx, base);
loc_880D9438:
	// lbz r11,146(r22)
	ctx.current_instruction = 0x880D9438;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 146);
	// lwz r10,20880(r31)
	ctx.current_instruction = 0x880D943C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20880);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880D9444;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,-4(r11)
	ctx.current_instruction = 0x880D9450;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r4,-8(r11)
	ctx.current_instruction = 0x880D9454;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x880e6960
	ctx.lr = 0x880D945C;
	sub_880E6960(ctx, base);
loc_880D945C:
	// lwz r8,28568(r31)
	ctx.current_instruction = 0x880D945C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880d9a2c
	if (ctx.cr6.eq) goto loc_880D9A2C;
	// lbz r10,146(r22)
	ctx.current_instruction = 0x880D9468;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r22.u32 + 146);
	// lwz r11,20880(r31)
	ctx.current_instruction = 0x880D946C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20880);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// lwz r8,28604(r31)
	ctx.current_instruction = 0x880D9474;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28604);
	// lwz r7,30172(r31)
	ctx.current_instruction = 0x880D9478;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 30172);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,28608(r31)
	ctx.current_instruction = 0x880D9480;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28608);
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,-4(r6)
	ctx.current_instruction = 0x880D948C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + -4);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r4,28604(r31)
	ctx.current_instruction = 0x880D9494;
	REX_STORE_U32(ctx.r31.u32 + 28604, ctx.r4.u32);
	// lbz r3,146(r22)
	ctx.current_instruction = 0x880D9498;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r22.u32 + 146);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,-4(r8)
	ctx.current_instruction = 0x880D94A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,30172(r31)
	ctx.current_instruction = 0x880D94B0;
	REX_STORE_U32(ctx.r31.u32 + 30172, ctx.r5.u32);
	// stw r7,28608(r31)
	ctx.current_instruction = 0x880D94B4;
	REX_STORE_U32(ctx.r31.u32 + 28608, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880D94C0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d9744
	if (!ctx.cr6.eq) goto loc_880D9744;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880D94C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// rlwinm r26,r21,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,2324(r31)
	ctx.current_instruction = 0x880D94D0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880d94f0
	if (!ctx.cr6.eq) goto loc_880D94F0;
	// lwz r11,92(r22)
	ctx.current_instruction = 0x880D94DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 92);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// rlwinm r9,r11,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880d9608
	if (ctx.cr6.eq) goto loc_880D9608;
loc_880D94F0:
	// lbz r11,147(r22)
	ctx.current_instruction = 0x880D94F0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 147);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d9608
	if (ctx.cr6.eq) goto loc_880D9608;
	// lwz r29,28432(r31)
	ctx.current_instruction = 0x880D94FC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28432);
	// lwz r11,20864(r31)
	ctx.current_instruction = 0x880D9500;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20864);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880D9508;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// stw r10,28432(r31)
	ctx.current_instruction = 0x880D950C;
	REX_STORE_U32(ctx.r31.u32 + 28432, ctx.r10.u32);
	// lbz r30,0(r29)
	ctx.current_instruction = 0x880D9510;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// rotlwi r28,r30,3
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880D951C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880D9520;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x880D9528;
	sub_880E6960(ctx, base);
loc_880D9528:
	// lwz r9,28568(r31)
	ctx.current_instruction = 0x880D9528;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d956c
	if (ctx.cr6.eq) goto loc_880D956C;
	// lwz r11,20864(r31)
	ctx.current_instruction = 0x880D9534;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20864);
	// addi r10,r30,7169
	ctx.r10.s64 = ctx.r30.s64 + 7169;
	// lwz r9,28620(r31)
	ctx.current_instruction = 0x880D953C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28620);
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r8)
	ctx.current_instruction = 0x880D9548;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,28620(r31)
	ctx.current_instruction = 0x880D9550;
	REX_STORE_U32(ctx.r31.u32 + 28620, ctx.r7.u32);
	// lwzx r10,r11,r31
	ctx.current_instruction = 0x880D9554;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stwx r6,r11,r31
	ctx.current_instruction = 0x880D955C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r11,30148(r31)
	ctx.current_instruction = 0x880D9560;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30148);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,30148(r31)
	ctx.current_instruction = 0x880D9568;
	REX_STORE_U32(ctx.r31.u32 + 30148, ctx.r5.u32);
loc_880D956C:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880D956C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x880d95c8
	if (!ctx.cr6.eq) goto loc_880D95C8;
	// lhzx r11,r27,r26
	ctx.current_instruction = 0x880D9578;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r26.u32);
	// lwz r5,2596(r31)
	ctx.current_instruction = 0x880D957C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x880e6960
	ctx.lr = 0x880D9588;
	sub_880E6960(ctx, base);
loc_880D9588:
	// lwzx r10,r27,r26
	ctx.current_instruction = 0x880D9588;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880D958C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lwz r5,2600(r31)
	ctx.current_instruction = 0x880D9594;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// srawi r4,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 20;
	// bl 0x880e6960
	ctx.lr = 0x880D95A0;
	sub_880E6960(ctx, base);
loc_880D95A0:
	// lwz r8,28568(r31)
	ctx.current_instruction = 0x880D95A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880d9608
	if (ctx.cr6.eq) goto loc_880D9608;
	// lwz r10,2596(r31)
	ctx.current_instruction = 0x880D95AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// lwz r11,2600(r31)
	ctx.current_instruction = 0x880D95B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,28628(r31)
	ctx.current_instruction = 0x880D95B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28628);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,28628(r31)
	ctx.current_instruction = 0x880D95C0;
	REX_STORE_U32(ctx.r31.u32 + 28628, ctx.r11.u32);
	// b 0x880d9608
	goto loc_880D9608;
loc_880D95C8:
	// lwz r11,28012(r31)
	ctx.current_instruction = 0x880D95C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28012);
	// lwz r10,20872(r31)
	ctx.current_instruction = 0x880D95CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,0(r29)
	ctx.current_instruction = 0x880D95D4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r4,4(r29)
	ctx.current_instruction = 0x880D95D8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lbzx r5,r11,r10
	ctx.current_instruction = 0x880D95DC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x880e6960
	ctx.lr = 0x880D95E4;
	sub_880E6960(ctx, base);
loc_880D95E4:
	// lwz r9,28568(r31)
	ctx.current_instruction = 0x880D95E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d9608
	if (ctx.cr6.eq) goto loc_880D9608;
	// lbz r11,0(r29)
	ctx.current_instruction = 0x880D95F0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r9,20872(r31)
	ctx.current_instruction = 0x880D95F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20872);
	// lwz r10,28624(r31)
	ctx.current_instruction = 0x880D95F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28624);
	// lbzx r11,r11,r9
	ctx.current_instruction = 0x880D95FC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,28624(r31)
	ctx.current_instruction = 0x880D9604;
	REX_STORE_U32(ctx.r31.u32 + 28624, ctx.r8.u32);
loc_880D9608:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880D9608;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880d9744
	if (!ctx.cr6.eq) goto loc_880D9744;
	// lwz r11,92(r22)
	ctx.current_instruction = 0x880D9614;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 92);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// rlwinm r9,r11,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880d9744
	if (!ctx.cr6.eq) goto loc_880D9744;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x880d9744
	if (ctx.cr6.eq) goto loc_880D9744;
	// lwz r29,28432(r31)
	ctx.current_instruction = 0x880D9630;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28432);
	// lwz r11,20864(r31)
	ctx.current_instruction = 0x880D9634;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20864);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880D963C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// stw r10,28432(r31)
	ctx.current_instruction = 0x880D9640;
	REX_STORE_U32(ctx.r31.u32 + 28432, ctx.r10.u32);
	// lbz r30,0(r29)
	ctx.current_instruction = 0x880D9644;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// rotlwi r28,r30,3
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880D9650;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880D9654;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x880e6960
	ctx.lr = 0x880D965C;
	sub_880E6960(ctx, base);
loc_880D965C:
	// lwz r9,28568(r31)
	ctx.current_instruction = 0x880D965C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d96a0
	if (ctx.cr6.eq) goto loc_880D96A0;
	// lwz r11,20864(r31)
	ctx.current_instruction = 0x880D9668;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20864);
	// addi r10,r30,7169
	ctx.r10.s64 = ctx.r30.s64 + 7169;
	// lwz r9,28620(r31)
	ctx.current_instruction = 0x880D9670;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28620);
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r8)
	ctx.current_instruction = 0x880D967C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,28620(r31)
	ctx.current_instruction = 0x880D9684;
	REX_STORE_U32(ctx.r31.u32 + 28620, ctx.r7.u32);
	// lwzx r10,r11,r31
	ctx.current_instruction = 0x880D9688;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stwx r6,r11,r31
	ctx.current_instruction = 0x880D9690;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r11,30148(r31)
	ctx.current_instruction = 0x880D9694;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30148);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,30148(r31)
	ctx.current_instruction = 0x880D969C;
	REX_STORE_U32(ctx.r31.u32 + 30148, ctx.r5.u32);
loc_880D96A0:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880D96A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x880d9704
	if (!ctx.cr6.eq) goto loc_880D9704;
	// lwz r11,7856(r31)
	ctx.current_instruction = 0x880D96AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7856);
	// lwz r5,2596(r31)
	ctx.current_instruction = 0x880D96B0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// lhzx r10,r11,r26
	ctx.current_instruction = 0x880D96B4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// bl 0x880e6960
	ctx.lr = 0x880D96C0;
	sub_880E6960(ctx, base);
loc_880D96C0:
	// lwz r9,7856(r31)
	ctx.current_instruction = 0x880D96C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7856);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880D96C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r5,2600(r31)
	ctx.current_instruction = 0x880D96C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// lwzx r8,r9,r26
	ctx.current_instruction = 0x880D96CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// rlwinm r7,r8,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// srawi r4,r7,20
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 20;
	// bl 0x880e6960
	ctx.lr = 0x880D96DC;
	sub_880E6960(ctx, base);
loc_880D96DC:
	// lwz r6,28568(r31)
	ctx.current_instruction = 0x880D96DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x880d9744
	if (ctx.cr6.eq) goto loc_880D9744;
	// lwz r10,2596(r31)
	ctx.current_instruction = 0x880D96E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// lwz r11,2600(r31)
	ctx.current_instruction = 0x880D96EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,28628(r31)
	ctx.current_instruction = 0x880D96F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28628);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,28628(r31)
	ctx.current_instruction = 0x880D96FC;
	REX_STORE_U32(ctx.r31.u32 + 28628, ctx.r11.u32);
	// b 0x880d9744
	goto loc_880D9744;
loc_880D9704:
	// lwz r11,28012(r31)
	ctx.current_instruction = 0x880D9704;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28012);
	// lwz r10,20872(r31)
	ctx.current_instruction = 0x880D9708;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,0(r29)
	ctx.current_instruction = 0x880D9710;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r4,4(r29)
	ctx.current_instruction = 0x880D9714;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lbzx r5,r11,r10
	ctx.current_instruction = 0x880D9718;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x880e6960
	ctx.lr = 0x880D9720;
	sub_880E6960(ctx, base);
loc_880D9720:
	// lwz r9,28568(r31)
	ctx.current_instruction = 0x880D9720;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d9744
	if (ctx.cr6.eq) goto loc_880D9744;
	// lbz r11,0(r29)
	ctx.current_instruction = 0x880D972C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r9,20872(r31)
	ctx.current_instruction = 0x880D9730;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20872);
	// lwz r10,28624(r31)
	ctx.current_instruction = 0x880D9734;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28624);
	// lbzx r11,r11,r9
	ctx.current_instruction = 0x880D9738;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,28624(r31)
	ctx.current_instruction = 0x880D9740;
	REX_STORE_U32(ctx.r31.u32 + 28624, ctx.r8.u32);
loc_880D9744:
	// lbz r11,88(r22)
	ctx.current_instruction = 0x880D9744;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x880d98c4
	if (!ctx.cr6.eq) goto loc_880D98C4;
	// lbz r10,147(r22)
	ctx.current_instruction = 0x880D9750;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r22.u32 + 147);
	// li r24,8
	ctx.r24.s64 = 8;
	// lwz r11,20856(r31)
	ctx.current_instruction = 0x880D9758;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20856);
	// extsb r23,r10
	ctx.r23.s64 = ctx.r10.s8;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880D9760;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// rlwinm r10,r23,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880D976C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880D9770;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x880D9778;
	sub_880E6960(ctx, base);
loc_880D9778:
	// li r25,0
	ctx.r25.s64 = 0;
loc_880D977C:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880D977C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r9,r25,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	// clrlwi r10,r25,31
	ctx.r10.u64 = ctx.r25.u32 & 0x1;
	// lwz r26,2324(r31)
	ctx.current_instruction = 0x880D9788;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// and r8,r23,r24
	ctx.r8.u64 = ctx.r23.u64 & ctx.r24.u64;
	// add r7,r11,r21
	ctx.r7.u64 = ctx.r11.u64 + ctx.r21.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r27,r7,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x880d98b4
	if (ctx.cr6.eq) goto loc_880D98B4;
	// lwz r29,28432(r31)
	ctx.current_instruction = 0x880D97A8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28432);
	// lwz r11,20864(r31)
	ctx.current_instruction = 0x880D97AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20864);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880D97B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// stw r10,28432(r31)
	ctx.current_instruction = 0x880D97B8;
	REX_STORE_U32(ctx.r31.u32 + 28432, ctx.r10.u32);
	// lbz r30,0(r29)
	ctx.current_instruction = 0x880D97BC;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// rotlwi r28,r30,3
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880D97C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880D97CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x880D97D4;
	sub_880E6960(ctx, base);
loc_880D97D4:
	// lwz r9,28568(r31)
	ctx.current_instruction = 0x880D97D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d9818
	if (ctx.cr6.eq) goto loc_880D9818;
	// lwz r11,20864(r31)
	ctx.current_instruction = 0x880D97E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20864);
	// addi r10,r30,7169
	ctx.r10.s64 = ctx.r30.s64 + 7169;
	// lwz r9,28620(r31)
	ctx.current_instruction = 0x880D97E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28620);
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r8)
	ctx.current_instruction = 0x880D97F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,28620(r31)
	ctx.current_instruction = 0x880D97FC;
	REX_STORE_U32(ctx.r31.u32 + 28620, ctx.r7.u32);
	// lwzx r10,r11,r31
	ctx.current_instruction = 0x880D9800;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stwx r6,r11,r31
	ctx.current_instruction = 0x880D9808;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r11,30148(r31)
	ctx.current_instruction = 0x880D980C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30148);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,30148(r31)
	ctx.current_instruction = 0x880D9814;
	REX_STORE_U32(ctx.r31.u32 + 30148, ctx.r5.u32);
loc_880D9818:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880D9818;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x880d9874
	if (!ctx.cr6.eq) goto loc_880D9874;
	// lhzx r11,r27,r26
	ctx.current_instruction = 0x880D9824;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r26.u32);
	// lwz r5,2596(r31)
	ctx.current_instruction = 0x880D9828;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x880e6960
	ctx.lr = 0x880D9834;
	sub_880E6960(ctx, base);
loc_880D9834:
	// lwzx r10,r27,r26
	ctx.current_instruction = 0x880D9834;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880D9838;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lwz r5,2600(r31)
	ctx.current_instruction = 0x880D9840;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// srawi r4,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 20;
	// bl 0x880e6960
	ctx.lr = 0x880D984C;
	sub_880E6960(ctx, base);
loc_880D984C:
	// lwz r8,28568(r31)
	ctx.current_instruction = 0x880D984C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880d98b4
	if (ctx.cr6.eq) goto loc_880D98B4;
	// lwz r10,2596(r31)
	ctx.current_instruction = 0x880D9858;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// lwz r11,2600(r31)
	ctx.current_instruction = 0x880D985C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,28628(r31)
	ctx.current_instruction = 0x880D9864;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28628);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,28628(r31)
	ctx.current_instruction = 0x880D986C;
	REX_STORE_U32(ctx.r31.u32 + 28628, ctx.r11.u32);
	// b 0x880d98b4
	goto loc_880D98B4;
loc_880D9874:
	// lwz r11,28012(r31)
	ctx.current_instruction = 0x880D9874;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28012);
	// lwz r10,20872(r31)
	ctx.current_instruction = 0x880D9878;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,0(r29)
	ctx.current_instruction = 0x880D9880;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r4,4(r29)
	ctx.current_instruction = 0x880D9884;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lbzx r5,r11,r10
	ctx.current_instruction = 0x880D9888;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x880e6960
	ctx.lr = 0x880D9890;
	sub_880E6960(ctx, base);
loc_880D9890:
	// lwz r9,28568(r31)
	ctx.current_instruction = 0x880D9890;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d98b4
	if (ctx.cr6.eq) goto loc_880D98B4;
	// lbz r11,0(r29)
	ctx.current_instruction = 0x880D989C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r9,20872(r31)
	ctx.current_instruction = 0x880D98A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20872);
	// lwz r10,28624(r31)
	ctx.current_instruction = 0x880D98A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28624);
	// lbzx r11,r11,r9
	ctx.current_instruction = 0x880D98A8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,28624(r31)
	ctx.current_instruction = 0x880D98B0;
	REX_STORE_U32(ctx.r31.u32 + 28624, ctx.r8.u32);
loc_880D98B4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// srawi r24,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 1;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// blt cr6,0x880d977c
	if (ctx.cr6.lt) goto loc_880D977C;
loc_880D98C4:
	// lbz r11,146(r22)
	ctx.current_instruction = 0x880D98C4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 146);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d9a2c
	if (ctx.cr6.eq) goto loc_880D9A2C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,20876(r31)
	ctx.current_instruction = 0x880D98D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20876);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880D98D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,-4(r11)
	ctx.current_instruction = 0x880D98E8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r4,-8(r11)
	ctx.current_instruction = 0x880D98EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x880e6960
	ctx.lr = 0x880D98F4;
	sub_880E6960(ctx, base);
loc_880D98F4:
	// lwz r8,28568(r31)
	ctx.current_instruction = 0x880D98F4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880d9950
	if (ctx.cr6.eq) goto loc_880D9950;
	// lbz r10,146(r22)
	ctx.current_instruction = 0x880D9900;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r22.u32 + 146);
	// lwz r11,20876(r31)
	ctx.current_instruction = 0x880D9904;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20876);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// lwz r8,28604(r31)
	ctx.current_instruction = 0x880D990C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28604);
	// lwz r7,30164(r31)
	ctx.current_instruction = 0x880D9910;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 30164);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,28612(r31)
	ctx.current_instruction = 0x880D9918;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28612);
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,-4(r6)
	ctx.current_instruction = 0x880D9924;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + -4);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r4,28604(r31)
	ctx.current_instruction = 0x880D992C;
	REX_STORE_U32(ctx.r31.u32 + 28604, ctx.r4.u32);
	// lbz r3,146(r22)
	ctx.current_instruction = 0x880D9930;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r22.u32 + 146);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,-4(r8)
	ctx.current_instruction = 0x880D9940;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,30164(r31)
	ctx.current_instruction = 0x880D9948;
	REX_STORE_U32(ctx.r31.u32 + 30164, ctx.r5.u32);
	// stw r7,28612(r31)
	ctx.current_instruction = 0x880D994C;
	REX_STORE_U32(ctx.r31.u32 + 28612, ctx.r7.u32);
loc_880D9950:
	// lwz r11,2428(r31)
	ctx.current_instruction = 0x880D9950;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d9968
	if (ctx.cr6.eq) goto loc_880D9968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r22)
	ctx.current_instruction = 0x880D9960;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 96);
	// bl 0x880fa448
	ctx.lr = 0x880D9968;
	sub_880FA448(ctx, base);
loc_880D9968:
	// lwz r11,1608(r31)
	ctx.current_instruction = 0x880D9968;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d9a2c
	if (ctx.cr6.eq) goto loc_880D9A2C;
	// lwz r11,1564(r31)
	ctx.current_instruction = 0x880D9974;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d9a2c
	if (ctx.cr6.eq) goto loc_880D9A2C;
	// lwz r9,0(r22)
	ctx.current_instruction = 0x880D9980;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r22,4
	ctx.r10.s64 = ctx.r22.s64 + 4;
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// rlwinm r9,r8,7,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x8;
loc_880D9994:
	// lwz r8,0(r10)
	ctx.current_instruction = 0x880D9994;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880d99b0
	if (ctx.cr6.eq) goto loc_880D99B0;
	// add r8,r11,r22
	ctx.r8.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r7,74(r8)
	ctx.current_instruction = 0x880D99A4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 74);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x880d99c4
	if (ctx.cr6.eq) goto loc_880D99C4;
loc_880D99B0:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x880d99c4
	if (!ctx.cr6.lt) goto loc_880D99C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x880d9994
	goto loc_880D9994;
loc_880D99C4:
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r10,56(r11)
	ctx.current_instruction = 0x880D99C8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 56);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880d99e8
	if (!ctx.cr6.eq) goto loc_880D99E8;
	// lbz r11,128(r11)
	ctx.current_instruction = 0x880D99D8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 128);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x880d9a10
	goto loc_880D9A10;
loc_880D99E8:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x880d9a04
	if (!ctx.cr6.eq) goto loc_880D9A04;
	// lbz r11,134(r11)
	ctx.current_instruction = 0x880D99F0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 134);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// b 0x880d9a10
	goto loc_880D9A10;
loc_880D9A04:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x880d9a10
	if (!ctx.cr6.eq) goto loc_880D9A10;
	// addi r9,r9,7
	ctx.r9.s64 = ctx.r9.s64 + 7;
loc_880D9A10:
	// lwz r11,30208(r31)
	ctx.current_instruction = 0x880D9A10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30208);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880D9A18;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880D9A20;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880D9A24;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_880D9A28:
	// bl 0x880e6960
	ctx.lr = 0x880D9A2C;
	sub_880E6960(ctx, base);
loc_880D9A2C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F3040) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F3040;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F3040) {
			switch (rex_dispatch_address) {
				case 0x880F3048:
				case 0x880F3124:
				case 0x880F31F0:
				case 0x880F32AC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F3040;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F3048: goto loc_880F3048;
		case 0x880F3124: goto loc_880F3124;
		case 0x880F31F0: goto loc_880F31F0;
		case 0x880F32AC: goto loc_880F32AC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880F3048;
	__savegprlr_20(ctx, base);
loc_880F3048:
	// stwu r1,-320(r1)
	ctx.current_instruction = 0x880F3048;
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,27988(r3)
	ctx.current_instruction = 0x880F304C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 27988);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r6,268(r4)
	ctx.current_instruction = 0x880F3054;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 268);
	// lwz r9,2484(r3)
	ctx.current_instruction = 0x880F3058;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2484);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880f31f8
	if (ctx.cr6.eq) goto loc_880F31F8;
	// lwz r10,31544(r3)
	ctx.current_instruction = 0x880F3064;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880f312c
	if (ctx.cr6.eq) goto loc_880F312C;
	// lwz r4,4(r4)
	ctx.current_instruction = 0x880F3070;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,260(r11)
	ctx.current_instruction = 0x880F3074;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,256(r11)
	ctx.current_instruction = 0x880F307C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// lwz r31,592(r11)
	ctx.current_instruction = 0x880F3080;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 592);
	// add r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r30,576(r11)
	ctx.current_instruction = 0x880F3088;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 576);
	// lwz r29,588(r11)
	ctx.current_instruction = 0x880F308C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 588);
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// stw r8,188(r1)
	ctx.current_instruction = 0x880F3094;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// stw r7,180(r1)
	ctx.current_instruction = 0x880F3098;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r28,572(r11)
	ctx.current_instruction = 0x880F30A0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 572);
	// lwz r27,584(r11)
	ctx.current_instruction = 0x880F30A4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 584);
	// stw r10,196(r1)
	ctx.current_instruction = 0x880F30A8;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// lwz r26,568(r11)
	ctx.current_instruction = 0x880F30AC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 568);
	// lwz r25,580(r11)
	ctx.current_instruction = 0x880F30B0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 580);
	// lwz r24,564(r11)
	ctx.current_instruction = 0x880F30B4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 564);
	// lwz r23,560(r11)
	ctx.current_instruction = 0x880F30B8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 560);
	// lwz r22,556(r11)
	ctx.current_instruction = 0x880F30BC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 556);
	// lwz r21,288(r11)
	ctx.current_instruction = 0x880F30C0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// lwz r20,944(r11)
	ctx.current_instruction = 0x880F30C4;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 944);
	// lwz r10,608(r11)
	ctx.current_instruction = 0x880F30C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// lwz r5,604(r11)
	ctx.current_instruction = 0x880F30CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 604);
	// lwz r9,19100(r3)
	ctx.current_instruction = 0x880F30D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 19100);
	// lwz r8,19096(r3)
	ctx.current_instruction = 0x880F30D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 19096);
	// lwz r7,19092(r3)
	ctx.current_instruction = 0x880F30D8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 19092);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,632(r11)
	ctx.current_instruction = 0x880F30E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 632);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lwz r5,264(r11)
	ctx.current_instruction = 0x880F30EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// stw r31,172(r1)
	ctx.current_instruction = 0x880F30F0;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r30,164(r1)
	ctx.current_instruction = 0x880F30F4;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r29,156(r1)
	ctx.current_instruction = 0x880F30F8;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stw r28,148(r1)
	ctx.current_instruction = 0x880F30FC;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r27,140(r1)
	ctx.current_instruction = 0x880F3100;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stw r26,132(r1)
	ctx.current_instruction = 0x880F3104;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r25,124(r1)
	ctx.current_instruction = 0x880F3108;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r24,116(r1)
	ctx.current_instruction = 0x880F310C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r23,108(r1)
	ctx.current_instruction = 0x880F3110;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r22,100(r1)
	ctx.current_instruction = 0x880F3114;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r21,92(r1)
	ctx.current_instruction = 0x880F3118;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r20,84(r1)
	ctx.current_instruction = 0x880F311C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// bl 0x880c1498
	ctx.lr = 0x880F3124;
	sub_880C1498(ctx, base);
loc_880F3124:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880F312C:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x880F312C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r31,576(r11)
	ctx.current_instruction = 0x880F3134;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 576);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,260(r11)
	ctx.current_instruction = 0x880F313C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// lwz r6,256(r11)
	ctx.current_instruction = 0x880F3140;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,592(r11)
	ctx.current_instruction = 0x880F3148;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 592);
	// lwz r30,588(r11)
	ctx.current_instruction = 0x880F314C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 588);
	// stw r31,172(r1)
	ctx.current_instruction = 0x880F3150;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r31,572(r11)
	ctx.current_instruction = 0x880F3158;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 572);
	// lwz r29,584(r11)
	ctx.current_instruction = 0x880F315C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 584);
	// lwz r28,568(r11)
	ctx.current_instruction = 0x880F3160;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 568);
	// lwz r27,580(r11)
	ctx.current_instruction = 0x880F3164;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 580);
	// lwz r26,564(r11)
	ctx.current_instruction = 0x880F3168;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 564);
	// lwz r25,560(r11)
	ctx.current_instruction = 0x880F316C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 560);
	// lwz r24,556(r11)
	ctx.current_instruction = 0x880F3170;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 556);
	// stw r7,196(r1)
	ctx.current_instruction = 0x880F3174;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,188(r1)
	ctx.current_instruction = 0x880F317C;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// stw r8,180(r1)
	ctx.current_instruction = 0x880F3180;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stw r7,204(r1)
	ctx.current_instruction = 0x880F3184;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// stw r30,164(r1)
	ctx.current_instruction = 0x880F3188;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,156(r1)
	ctx.current_instruction = 0x880F318C;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r29,148(r1)
	ctx.current_instruction = 0x880F3190;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r28,140(r1)
	ctx.current_instruction = 0x880F3194;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// stw r27,132(r1)
	ctx.current_instruction = 0x880F3198;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r26,124(r1)
	ctx.current_instruction = 0x880F319C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// stw r25,116(r1)
	ctx.current_instruction = 0x880F31A0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r24,108(r1)
	ctx.current_instruction = 0x880F31A4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// lwz r23,288(r11)
	ctx.current_instruction = 0x880F31A8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// lwz r22,944(r11)
	ctx.current_instruction = 0x880F31AC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 944);
	// lwz r21,640(r11)
	ctx.current_instruction = 0x880F31B0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 640);
	// lwz r10,608(r11)
	ctx.current_instruction = 0x880F31B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// lwz r9,19092(r3)
	ctx.current_instruction = 0x880F31B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 19092);
	// lwz r8,19100(r3)
	ctx.current_instruction = 0x880F31BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 19100);
	// lwz r7,19096(r3)
	ctx.current_instruction = 0x880F31C0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 19096);
	// lwz r6,604(r11)
	ctx.current_instruction = 0x880F31C4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 604);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r10,636(r11)
	ctx.current_instruction = 0x880F31D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 636);
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r9,632(r11)
	ctx.current_instruction = 0x880F31D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 632);
	// lwz r4,264(r11)
	ctx.current_instruction = 0x880F31DC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// stw r23,100(r1)
	ctx.current_instruction = 0x880F31E0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r22,92(r1)
	ctx.current_instruction = 0x880F31E4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// stw r21,84(r1)
	ctx.current_instruction = 0x880F31E8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// bl 0x88061460
	ctx.lr = 0x880F31F0;
	sub_88061460(ctx, base);
loc_880F31F0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880F31F8:
	// lwz r4,4(r11)
	ctx.current_instruction = 0x880F31F8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,260(r11)
	ctx.current_instruction = 0x880F31FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,256(r11)
	ctx.current_instruction = 0x880F3204;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// lwz r31,592(r11)
	ctx.current_instruction = 0x880F3208;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 592);
	// add r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r30,576(r11)
	ctx.current_instruction = 0x880F3210;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 576);
	// lwz r29,588(r11)
	ctx.current_instruction = 0x880F3214;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 588);
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// stw r8,188(r1)
	ctx.current_instruction = 0x880F321C;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// stw r7,180(r1)
	ctx.current_instruction = 0x880F3220;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r28,572(r11)
	ctx.current_instruction = 0x880F3228;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 572);
	// lwz r27,584(r11)
	ctx.current_instruction = 0x880F322C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 584);
	// stw r10,196(r1)
	ctx.current_instruction = 0x880F3230;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// lwz r26,568(r11)
	ctx.current_instruction = 0x880F3234;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 568);
	// lwz r25,580(r11)
	ctx.current_instruction = 0x880F3238;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 580);
	// lwz r24,564(r11)
	ctx.current_instruction = 0x880F323C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 564);
	// lwz r23,560(r11)
	ctx.current_instruction = 0x880F3240;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 560);
	// lwz r22,556(r11)
	ctx.current_instruction = 0x880F3244;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 556);
	// lwz r21,288(r11)
	ctx.current_instruction = 0x880F3248;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// lwz r20,944(r11)
	ctx.current_instruction = 0x880F324C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 944);
	// lwz r10,608(r11)
	ctx.current_instruction = 0x880F3250;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// lwz r5,604(r11)
	ctx.current_instruction = 0x880F3254;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 604);
	// lwz r9,19100(r3)
	ctx.current_instruction = 0x880F3258;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 19100);
	// lwz r8,19096(r3)
	ctx.current_instruction = 0x880F325C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 19096);
	// lwz r7,19092(r3)
	ctx.current_instruction = 0x880F3260;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 19092);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,632(r11)
	ctx.current_instruction = 0x880F326C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 632);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lwz r5,264(r11)
	ctx.current_instruction = 0x880F3274;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// stw r31,172(r1)
	ctx.current_instruction = 0x880F3278;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r30,164(r1)
	ctx.current_instruction = 0x880F327C;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r29,156(r1)
	ctx.current_instruction = 0x880F3280;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stw r28,148(r1)
	ctx.current_instruction = 0x880F3284;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r27,140(r1)
	ctx.current_instruction = 0x880F3288;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stw r26,132(r1)
	ctx.current_instruction = 0x880F328C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r25,124(r1)
	ctx.current_instruction = 0x880F3290;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r24,116(r1)
	ctx.current_instruction = 0x880F3294;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r23,108(r1)
	ctx.current_instruction = 0x880F3298;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r22,100(r1)
	ctx.current_instruction = 0x880F329C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r21,92(r1)
	ctx.current_instruction = 0x880F32A0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r20,84(r1)
	ctx.current_instruction = 0x880F32A4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// bl 0x880c1498
	ctx.lr = 0x880F32AC;
	sub_880C1498(ctx, base);
loc_880F32AC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F9348) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F9348;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F9348) {
			switch (rex_dispatch_address) {
				case 0x880F9350:
				case 0x880F93D0:
				case 0x880F93E8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F9348;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F9350: goto loc_880F9350;
		case 0x880F93D0: goto loc_880F93D0;
		case 0x880F93E8: goto loc_880F93E8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880F9350;
	__savegprlr_27(ctx, base);
loc_880F9350:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x880F9350;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.current_instruction = 0x880F9354;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.current_instruction = 0x880F935C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// lwz r31,88(r11)
	ctx.current_instruction = 0x880F9368;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880f937c
	if (ctx.cr6.eq) goto loc_880F937C;
	// li r11,37
	ctx.r11.s64 = 37;
	// b 0x880f9440
	goto loc_880F9440;
loc_880F937C:
	// lwz r30,36(r11)
	ctx.current_instruction = 0x880F937C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// li r11,128
	ctx.r11.s64 = 128;
	// sraw r11,r11,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// srawi r3,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 16;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f943c
	if (!ctx.cr6.lt) goto loc_880F943C;
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880f943c
	if (ctx.cr6.lt) goto loc_880F943C;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// srawi r29,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 20;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f943c
	if (!ctx.cr6.lt) goto loc_880F943C;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880f943c
	if (ctx.cr6.lt) goto loc_880F943C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x880f8fd8
	ctx.lr = 0x880F93D0;
	sub_880F8FD8(ctx, base);
loc_880F93D0:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880f8fd8
	ctx.lr = 0x880F93E8;
	sub_880F8FD8(ctx, base);
loc_880F93E8:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880F93E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x880F93EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.current_instruction = 0x880F93F0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r4,96(r1)
	ctx.current_instruction = 0x880F93F8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r5,0(r31)
	ctx.current_instruction = 0x880F9400;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r1)
	ctx.current_instruction = 0x880F9404;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// or r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rlwinm r3,r6,18,8,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0xFC0000;
	// lwz r9,100(r1)
	ctx.current_instruction = 0x880F9410;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r8,1,14,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FFFE;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r5,0,31,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFF000001;
	// or r4,r3,r6
	ctx.r4.u64 = ctx.r3.u64 | ctx.r6.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r3,0(r31)
	ctx.current_instruction = 0x880F9434;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x880f944c
	goto loc_880F944C;
loc_880F943C:
	// li r11,36
	ctx.r11.s64 = 36;
loc_880F9440:
	// lwz r10,0(r31)
	ctx.current_instruction = 0x880F9440;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r10,0,31,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFC0001;
	// stw r9,0(r31)
	ctx.current_instruction = 0x880F9448;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_880F944C:
	// lwz r10,0(r27)
	ctx.current_instruction = 0x880F944C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880f9460
	if (ctx.cr6.eq) goto loc_880F9460;
	// addi r11,r11,38
	ctx.r11.s64 = ctx.r11.s64 + 38;
loc_880F9460:
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r10,0(r31)
	ctx.current_instruction = 0x880F9468;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,48(r28)
	ctx.current_instruction = 0x880F9470;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r10,-4(r11)
	ctx.current_instruction = 0x880F947C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,-4(r11)
	ctx.current_instruction = 0x880F9484;
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// lwz r11,52(r28)
	ctx.current_instruction = 0x880F9488;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 52);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,52(r28)
	ctx.current_instruction = 0x880F9490;
	REX_STORE_U32(ctx.r28.u32 + 52, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FC8E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FC8E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FC8E8) {
			switch (rex_dispatch_address) {
				case 0x880FC8F0:
				case 0x880FC970:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FC8E8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FC8F0: goto loc_880FC8F0;
		case 0x880FC970: goto loc_880FC970;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880FC8F0;
	__savegprlr_27(ctx, base);
loc_880FC8F0:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880FC8F0;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.current_instruction = 0x880FC8F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r10,720(r3)
	ctx.current_instruction = 0x880FC8FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r4,156(r1)
	ctx.current_instruction = 0x880FC908;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,164(r1)
	ctx.current_instruction = 0x880FC910;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mullw r10,r28,r5
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r5.s32);
	// stw r11,0(r29)
	ctx.current_instruction = 0x880FC91C;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r9,2544(r3)
	ctx.current_instruction = 0x880FC920;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// add r27,r10,r4
	ctx.r27.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm r30,r27,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r30
	ctx.current_instruction = 0x880FC930;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r30.u32);
	// cmplwi cr6,r8,16384
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16384, ctx.xer);
	// bne cr6,0x880fc960
	if (!ctx.cr6.eq) goto loc_880FC960;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r11,r10,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r11,r10,2,16,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFF000F);
	// stw r11,0(r29)
	ctx.current_instruction = 0x880FC950;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// sth r9,0(r29)
	ctx.current_instruction = 0x880FC954;
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r9.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_880FC960:
	// addi r8,r1,164
	ctx.r8.s64 = ctx.r1.s64 + 164;
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810e6b0
	ctx.lr = 0x880FC970;
	sub_8810E6B0(ctx, base);
loc_880FC970:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x880FC970;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwimi r11,r3,0,30,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stw r11,0(r29)
	ctx.current_instruction = 0x880FC980;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880fcab8
	if (ctx.cr6.eq) goto loc_880FCAB8;
	// lwz r11,2544(r31)
	ctx.current_instruction = 0x880FC98C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// subf r9,r28,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r28.u64;
	// lwz r10,2548(r31)
	ctx.current_instruction = 0x880FC994;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lhzx r7,r11,r30
	ctx.current_instruction = 0x880FC9A4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// lhzx r6,r10,r30
	ctx.current_instruction = 0x880FC9A8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r30.u32);
	// lhz r3,-2(r8)
	ctx.current_instruction = 0x880FC9AC;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// extsh r28,r7
	ctx.r28.s64 = ctx.r7.s16;
	// lhzx r8,r9,r11
	ctx.current_instruction = 0x880FC9B4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r27,r6
	ctx.r27.s64 = ctx.r6.s16;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lhzx r3,r10,r9
	ctx.current_instruction = 0x880FC9C0;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r10,-2(r5)
	ctx.current_instruction = 0x880FC9C8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + -2);
	// addi r7,r11,-16384
	ctx.r7.s64 = ctx.r11.s64 + -16384;
	// addi r6,r8,-16384
	ctx.r6.s64 = ctx.r8.s64 + -16384;
	// subfic r7,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// subfe r7,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r6,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r6.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// subfe r6,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r5,r27,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r27.u64;
	// and r3,r6,r8
	ctx.r3.u64 = ctx.r6.u64 & ctx.r8.u64;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// subf r8,r28,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r28.u64;
	// subf r7,r27,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r27.u64;
	// subf r3,r28,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r28.u64;
	// srawi r6,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 31;
	// srawi r11,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 31;
	// srawi r28,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 31;
	// srawi r27,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r3.s32 >> 31;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// xor r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// xor r5,r3,r27
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r27.u64;
	// xor r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r7,r28,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r28.u64;
	// subf r8,r27,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r27.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// lwz r11,0(r29)
	ctx.current_instruction = 0x880FCA40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bge cr6,0x880fca74
	if (!ctx.cr6.lt) goto loc_880FCA74;
	// rlwimi r11,r4,0,30,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// stw r11,0(r29)
	ctx.current_instruction = 0x880FCA4C;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,2548(r31)
	ctx.current_instruction = 0x880FCA50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lwz r11,2544(r31)
	ctx.current_instruction = 0x880FCA54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lhz r7,-2(r9)
	ctx.current_instruction = 0x880FCA60;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// stw r10,156(r1)
	ctx.current_instruction = 0x880FCA68;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// lhz r6,-2(r8)
	ctx.current_instruction = 0x880FCA6C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// b 0x880fca94
	goto loc_880FCA94;
loc_880FCA74:
	// rlwimi r11,r4,1,30,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// stw r11,0(r29)
	ctx.current_instruction = 0x880FCA78;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r8,2548(r31)
	ctx.current_instruction = 0x880FCA7C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lwz r10,2544(r31)
	ctx.current_instruction = 0x880FCA80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lhzx r7,r10,r9
	ctx.current_instruction = 0x880FCA84;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// stw r10,156(r1)
	ctx.current_instruction = 0x880FCA8C;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// lhzx r6,r8,r9
	ctx.current_instruction = 0x880FCA90;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
loc_880FCA94:
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// stw r5,164(r1)
	ctx.current_instruction = 0x880FCA9C;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// bne cr6,0x880fcabc
	if (!ctx.cr6.eq) goto loc_880FCABC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,164(r1)
	ctx.current_instruction = 0x880FCAAC;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r10,156(r1)
	ctx.current_instruction = 0x880FCAB0;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// b 0x880fcabc
	goto loc_880FCABC;
loc_880FCAB8:
	// lwz r10,156(r1)
	ctx.current_instruction = 0x880FCAB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
loc_880FCABC:
	// lwz r9,2544(r31)
	ctx.current_instruction = 0x880FCABC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r11,2604(r31)
	ctx.current_instruction = 0x880FCAC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// lwz r8,2612(r31)
	ctx.current_instruction = 0x880FCAC4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// lwz r7,164(r1)
	ctx.current_instruction = 0x880FCAC8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lhzx r6,r9,r30
	ctx.current_instruction = 0x880FCACC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r30.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r10,r3,r8
	ctx.r10.u64 = ctx.r3.u64 & ctx.r8.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// sth r9,0(r29)
	ctx.current_instruction = 0x880FCAE4;
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r9.u16);
	// lwz r6,2548(r31)
	ctx.current_instruction = 0x880FCAE8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lwz r9,0(r29)
	ctx.current_instruction = 0x880FCAEC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,2616(r31)
	ctx.current_instruction = 0x880FCAF0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// rlwinm r3,r5,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r6,r30
	ctx.current_instruction = 0x880FCAF8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r30.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lwz r11,2608(r31)
	ctx.current_instruction = 0x880FCB04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// and r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 & ctx.r3.u64;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// rlwimi r9,r3,0,16,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFF000F);
	// rlwinm r11,r9,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r11,0(r29)
	ctx.current_instruction = 0x880FCB28;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880fcb44
	if (!ctx.cr6.eq) goto loc_880FCB44;
	// rlwinm r11,r11,0,16,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fcb48
	if (ctx.cr6.eq) goto loc_880FCB48;
loc_880FCB44:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_880FCB48:
	// lwz r11,2204(r31)
	ctx.current_instruction = 0x880FCB48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2204);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x880fcb5c
	if (ctx.cr6.eq) goto loc_880FCB5C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x880fcb78
	if (!ctx.cr6.eq) goto loc_880FCB78;
loc_880FCB5C:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x880FCB5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// srawi r10,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 17;
	// sth r10,0(r29)
	ctx.current_instruction = 0x880FCB64;
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r10.u16);
	// lwz r8,0(r29)
	ctx.current_instruction = 0x880FCB68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// rlwimi r7,r8,0,28,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF000F) | (ctx.r7.u64 & 0xFFF0);
	// stw r7,0(r29)
	ctx.current_instruction = 0x880FCB74;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
loc_880FCB78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88106F08) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88106F08;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88106F08) {
			switch (rex_dispatch_address) {
				case 0x88106F10:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88106F08;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88106F10: goto loc_88106F10;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88106F10;
	__savegprlr_14(ctx, base);
loc_88106F10:
	// lwz r11,720(r3)
	ctx.current_instruction = 0x88106F10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r31,100(r1)
	ctx.current_instruction = 0x88106F18;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r7,-188(r1)
	ctx.current_instruction = 0x88106F20;
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r7.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,-160(r1)
	ctx.current_instruction = 0x88106F28;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r4,-192(r1)
	ctx.current_instruction = 0x88106F30;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r4.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r7,-184(r1)
	ctx.current_instruction = 0x88106F3C;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r7.u32);
	// stw r31,-176(r1)
	ctx.current_instruction = 0x88106F40;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r31.u32);
	// beq cr6,0x88107310
	if (ctx.cr6.eq) goto loc_88107310;
	// lwz r31,720(r3)
	ctx.current_instruction = 0x88106F48;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r29,r31,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x88107140
	if (!ctx.cr6.gt) goto loc_88107140;
loc_88106F60:
	// lbz r31,9(r10)
	ctx.current_instruction = 0x88106F60;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// lbz r29,8(r10)
	ctx.current_instruction = 0x88106F64;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r28,3(r10)
	ctx.current_instruction = 0x88106F68;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r27,r31
	ctx.r27.s64 = ctx.r31.s8;
	// lbz r25,10(r10)
	ctx.current_instruction = 0x88106F70;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// extsb r24,r29
	ctx.r24.s64 = ctx.r29.s8;
	// lbz r23,11(r10)
	ctx.current_instruction = 0x88106F78;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 11);
	// extsb r22,r28
	ctx.r22.s64 = ctx.r28.s8;
	// lbz r21,1(r10)
	ctx.current_instruction = 0x88106F80;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r31,r31,0,28,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xC;
	// srawi r27,r27,6
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3F) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 6;
	// lbz r20,6(r10)
	ctx.current_instruction = 0x88106F8C;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// srawi r24,r24,4
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xF) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 4;
	// lbz r19,7(r10)
	ctx.current_instruction = 0x88106F94;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// extsb r25,r25
	ctx.r25.s64 = ctx.r25.s8;
	// lbz r18,2(r10)
	ctx.current_instruction = 0x88106F9C;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r23,r23
	ctx.r23.s64 = ctx.r23.s8;
	// lbz r17,0(r10)
	ctx.current_instruction = 0x88106FA4;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r22,r22,2
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 2;
	// lbz r16,4(r10)
	ctx.current_instruction = 0x88106FAC;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r21,r21
	ctx.r21.s64 = ctx.r21.s8;
	// lbz r15,5(r10)
	ctx.current_instruction = 0x88106FB4;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// srawi r25,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 2;
	// extsb r20,r20
	ctx.r20.s64 = ctx.r20.s8;
	// srawi r23,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 2;
	// srawi r21,r21,2
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x3) != 0);
	ctx.r21.s64 = ctx.r21.s32 >> 2;
	// srawi r20,r20,4
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xF) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 4;
	// extsb r19,r19
	ctx.r19.s64 = ctx.r19.s8;
	// rlwimi r27,r24,0,28,29
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xC) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwimi r28,r18,2,22,27
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3F0) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r21,r20,0,28,29
	ctx.r21.u64 = (__builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xC) | (ctx.r21.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r24,r19,6
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3F) != 0);
	ctx.r24.s64 = ctx.r19.s32 >> 6;
	// rlwinm r28,r28,2,24,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xF0;
	// rlwimi r21,r24,0,30,31
	ctx.r21.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x3) | (ctx.r21.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r27,r22,0,26,27
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x30) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFFCF);
	// or r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 | ctx.r31.u64;
	// rlwinm r29,r29,0,28,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xC;
	// rlwimi r21,r17,0,24,25
	ctx.r21.u64 = (__builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xC0) | (ctx.r21.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwimi r27,r18,0,24,25
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0xC0) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFF3F);
	// or r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 | ctx.r29.u64;
	// stb r21,0(r30)
	ctx.current_instruction = 0x88107004;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r21.u8);
	// stb r27,0(r7)
	ctx.current_instruction = 0x88107008;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r27.u8);
	// rlwimi r16,r25,0,26,27
	ctx.r16.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x30) | (ctx.r16.u64 & 0xFFFFFFFFFFFFFFCF);
	// stb r31,0(r4)
	ctx.current_instruction = 0x88107010;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// rlwimi r15,r23,0,26,27
	ctx.r15.u64 = (__builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x30) | (ctx.r15.u64 & 0xFFFFFFFFFFFFFFCF);
	// lbz r31,20(r10)
	ctx.current_instruction = 0x88107018;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 20);
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// lbz r28,15(r10)
	ctx.current_instruction = 0x88107020;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 15);
	// rlwinm r29,r16,0,24,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xF0;
	// lbz r25,14(r10)
	ctx.current_instruction = 0x88107028;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 14);
	// rlwinm r27,r15,0,24,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xF0;
	// lbz r24,21(r10)
	ctx.current_instruction = 0x88107030;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// extsb r23,r24
	ctx.r23.s64 = ctx.r24.s8;
	// extsb r22,r31
	ctx.r22.s64 = ctx.r31.s8;
	// lbz r20,23(r10)
	ctx.current_instruction = 0x8810703C;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + 23);
	// srawi r23,r23,6
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3F) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 6;
	// lbz r19,13(r10)
	ctx.current_instruction = 0x88107044;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 13);
	// srawi r22,r22,4
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0xF) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 4;
	// lbz r18,18(r10)
	ctx.current_instruction = 0x8810704C;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 18);
	// extsb r21,r28
	ctx.r21.s64 = ctx.r28.s8;
	// lbz r17,19(r10)
	ctx.current_instruction = 0x88107054;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r10.u32 + 19);
	// rlwimi r23,r22,0,28,29
	ctx.r23.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xC) | (ctx.r23.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r22,r21,2
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x3) != 0);
	ctx.r22.s64 = ctx.r21.s32 >> 2;
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
	// lbz r21,17(r10)
	ctx.current_instruction = 0x88107064;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 17);
	// rlwimi r23,r22,0,26,27
	ctx.r23.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x30) | (ctx.r23.u64 & 0xFFFFFFFFFFFFFFCF);
	// lbz r22,22(r10)
	ctx.current_instruction = 0x8810706C;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 22);
	// rlwimi r28,r25,2,22,27
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3F0) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r23,r25,0,24,25
	ctx.r23.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC0) | (ctx.r23.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwinm r25,r24,0,28,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xC;
	// clrlwi r24,r23,24
	ctx.r24.u64 = ctx.r23.u32 & 0xFF;
	// lbz r23,16(r10)
	ctx.current_instruction = 0x88107080;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// srawi r25,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 2;
	// rlwinm r28,r28,2,24,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xF0;
	// rlwinm r31,r31,0,28,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xC;
	// extsb r21,r21
	ctx.r21.s64 = ctx.r21.s8;
	// extsb r22,r22
	ctx.r22.s64 = ctx.r22.s8;
	// extsb r20,r20
	ctx.r20.s64 = ctx.r20.s8;
	// extsb r23,r23
	ctx.r23.s64 = ctx.r23.s8;
	// srawi r23,r23,4
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xF) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 4;
	// extsb r19,r19
	ctx.r19.s64 = ctx.r19.s8;
	// lbz r16,12(r10)
	ctx.current_instruction = 0x881070A8;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// srawi r22,r22,6
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3F) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 6;
	// srawi r21,r21,4
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xF) != 0);
	ctx.r21.s64 = ctx.r21.s32 >> 4;
	// extsb r18,r18
	ctx.r18.s64 = ctx.r18.s8;
	// srawi r20,r20,6
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3F) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 6;
	// srawi r19,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r19.s64 = ctx.r19.s32 >> 2;
	// srawi r18,r18,4
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xF) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 4;
	// extsb r17,r17
	ctx.r17.s64 = ctx.r17.s8;
	// rlwimi r19,r18,0,28,29
	ctx.r19.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0xC) | (ctx.r19.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r18,r17,6
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3F) != 0);
	ctx.r18.s64 = ctx.r17.s32 >> 6;
	// rlwimi r23,r22,0,30,31
	ctx.r23.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x3) | (ctx.r23.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r19,r18,0,30,31
	ctx.r19.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x3) | (ctx.r19.u64 & 0xFFFFFFFFFFFFFFFC);
	// or r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 | ctx.r25.u64;
	// rlwimi r19,r16,0,24,25
	ctx.r19.u64 = (__builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xC0) | (ctx.r19.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwimi r21,r20,0,30,31
	ctx.r21.u64 = (__builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x3) | (ctx.r21.u64 & 0xFFFFFFFFFFFFFFFC);
	// clrlwi r25,r23,28
	ctx.r25.u64 = ctx.r23.u32 & 0xF;
	// clrlwi r23,r19,24
	ctx.r23.u64 = ctx.r19.u32 & 0xFF;
	// clrlwi r22,r21,28
	ctx.r22.u64 = ctx.r21.u32 & 0xF;
	// or r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 | ctx.r31.u64;
	// stbu r23,1(r30)
	ctx.current_instruction = 0x881070F4;
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r23.u8);
	ctx.r30.u32 = ea;
	// or r29,r25,r29
	ctx.r29.u64 = ctx.r25.u64 | ctx.r29.u64;
	// stbu r24,1(r7)
	ctx.current_instruction = 0x881070FC;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r24.u8);
	ctx.r7.u32 = ea;
	// or r28,r22,r27
	ctx.r28.u64 = ctx.r22.u64 | ctx.r27.u64;
	// stbu r31,1(r4)
	ctx.current_instruction = 0x88107104;
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r31.u8);
	ctx.r4.u32 = ea;
	// stb r29,0(r8)
	ctx.current_instruction = 0x88107108;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r29.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r28,0(r9)
	ctx.current_instruction = 0x88107110;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r28.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r31,720(r3)
	ctx.current_instruction = 0x88107118;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// srawi r29,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r31.s32 >> 2;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x88106f60
	if (ctx.cr6.lt) goto loc_88106F60;
	// stw r4,-192(r1)
	ctx.current_instruction = 0x8810713C;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r4.u32);
loc_88107140:
	// clrlwi r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881072e8
	if (ctx.cr6.eq) goto loc_881072E8;
	// lbz r11,1(r10)
	ctx.current_instruction = 0x8810714C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r25,r31,0,30,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// lbz r31,3(r10)
	ctx.current_instruction = 0x88107154;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lbz r29,2(r10)
	ctx.current_instruction = 0x8810715C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r28,r31
	ctx.r28.s64 = ctx.r31.s8;
	// lbz r27,0(r10)
	ctx.current_instruction = 0x88107164;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lbz r24,4(r10)
	ctx.current_instruction = 0x8810716C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// lbz r22,5(r10)
	ctx.current_instruction = 0x88107174;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r28,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 2;
	// rlwimi r11,r27,0,24,25
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwimi r31,r29,2,22,27
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3F0) | (ctx.r31.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r23,r28,0,26,27
	ctx.r23.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x30) | (ctx.r23.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r29,r11,0,24,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// rlwinm r27,r31,2,24,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xF0;
	// rlwinm r28,r23,0,24,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xF0;
	// rlwinm r11,r24,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r31,r22,0,0,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFC0;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 2, ctx.xer);
	// bne cr6,0x88107230
	if (!ctx.cr6.eq) goto loc_88107230;
	// lbz r25,1(r10)
	ctx.current_instruction = 0x881071A8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r24,3(r10)
	ctx.current_instruction = 0x881071AC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r23,0(r10)
	ctx.current_instruction = 0x881071B0;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r25,r25
	ctx.r25.s64 = ctx.r25.s8;
	// lbz r22,2(r10)
	ctx.current_instruction = 0x881071B8;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r21,r24,0,28,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xC;
	// extsb r23,r23
	ctx.r23.s64 = ctx.r23.s8;
	// lbz r20,4(r10)
	ctx.current_instruction = 0x881071C4;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r24,r24
	ctx.r24.s64 = ctx.r24.s8;
	// lbz r19,5(r10)
	ctx.current_instruction = 0x881071CC;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r25,r25,6
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3F) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 6;
	// extsb r18,r22
	ctx.r18.s64 = ctx.r22.s8;
	// srawi r23,r23,4
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xF) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 4;
	// srawi r24,r24,6
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3F) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 6;
	// extsb r20,r20
	ctx.r20.s64 = ctx.r20.s8;
	// srawi r18,r18,4
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xF) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 4;
	// extsb r19,r19
	ctx.r19.s64 = ctx.r19.s8;
	// srawi r21,r21,2
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x3) != 0);
	ctx.r21.s64 = ctx.r21.s32 >> 2;
	// rlwimi r25,r23,0,28,29
	ctx.r25.u64 = (__builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xC) | (ctx.r25.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r23,r22,0,28,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xC;
	// srawi r20,r20,2
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 2;
	// rlwimi r24,r18,0,28,29
	ctx.r24.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0xC) | (ctx.r24.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r22,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r22.s64 = ctx.r19.s32 >> 2;
	// or r23,r21,r23
	ctx.r23.u64 = ctx.r21.u64 | ctx.r23.u64;
	// clrlwi r25,r25,28
	ctx.r25.u64 = ctx.r25.u32 & 0xF;
	// clrlwi r24,r24,28
	ctx.r24.u64 = ctx.r24.u32 & 0xF;
	// rlwinm r21,r20,0,26,27
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x30;
	// rlwinm r22,r22,0,26,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x30;
	// or r29,r25,r29
	ctx.r29.u64 = ctx.r25.u64 | ctx.r29.u64;
	// or r28,r24,r28
	ctx.r28.u64 = ctx.r24.u64 | ctx.r28.u64;
	// or r27,r23,r27
	ctx.r27.u64 = ctx.r23.u64 | ctx.r27.u64;
	// or r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 | ctx.r11.u64;
	// or r31,r22,r31
	ctx.r31.u64 = ctx.r22.u64 | ctx.r31.u64;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_88107230:
	// stb r29,0(r30)
	ctx.current_instruction = 0x88107230;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// stb r28,0(r7)
	ctx.current_instruction = 0x88107234;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r28.u8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r27,0(r4)
	ctx.current_instruction = 0x8810723C;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r27.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r29,720(r3)
	ctx.current_instruction = 0x88107244;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// clrlwi r29,r29,30
	ctx.r29.u64 = ctx.r29.u32 & 0x3;
	// stw r4,-192(r1)
	ctx.current_instruction = 0x8810724C;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r4.u32);
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bne cr6,0x881072d8
	if (!ctx.cr6.eq) goto loc_881072D8;
	// lbz r29,1(r10)
	ctx.current_instruction = 0x88107258;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r28,3(r10)
	ctx.current_instruction = 0x8810725C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// lbz r27,2(r10)
	ctx.current_instruction = 0x88107264;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r24,0(r10)
	ctx.current_instruction = 0x88107268;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r25,r28
	ctx.r25.s64 = ctx.r28.s8;
	// srawi r29,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 2;
	// lbz r23,4(r10)
	ctx.current_instruction = 0x88107274;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// srawi r25,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 2;
	// lbz r22,5(r10)
	ctx.current_instruction = 0x8810727C;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// rlwimi r29,r24,0,24,25
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xC0) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFF3F);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// rlwinm r29,r29,0,24,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF0;
	// rlwimi r21,r25,0,26,27
	ctx.r21.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x30) | (ctx.r21.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r28,r27,2,22,27
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3F0) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFC0F);
	// stb r29,1(r30)
	ctx.current_instruction = 0x88107294;
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r29.u8);
	// extsb r25,r23
	ctx.r25.s64 = ctx.r23.s8;
	// extsb r27,r22
	ctx.r27.s64 = ctx.r22.s8;
	// rlwinm r24,r21,0,24,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xF0;
	// srawi r25,r25,4
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 4;
	// rlwinm r30,r28,2,24,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xF0;
	// stb r24,0(r7)
	ctx.current_instruction = 0x881072AC;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r24.u8);
	// srawi r29,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r27.s32 >> 4;
	// stb r30,0(r4)
	ctx.current_instruction = 0x881072B4;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r30.u8);
	// rlwinm r30,r25,0,28,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC;
	// rlwinm r29,r29,0,28,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xC;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// or r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 | ctx.r11.u64;
	// or r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 | ctx.r31.u64;
	// stw r4,-192(r1)
	ctx.current_instruction = 0x881072CC;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r4.u32);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_881072D8:
	// stb r11,0(r8)
	ctx.current_instruction = 0x881072D8;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r31,0(r9)
	ctx.current_instruction = 0x881072E0;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_881072E8:
	// lwz r11,720(r3)
	ctx.current_instruction = 0x881072E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r7,-188(r1)
	ctx.current_instruction = 0x881072F0;
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r31,-176(r1)
	ctx.current_instruction = 0x88107304;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r31.u32);
	// stw r7,-184(r1)
	ctx.current_instruction = 0x88107308;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r7.u32);
	// b 0x88107314
	goto loc_88107314;
loc_88107310:
	// lwz r26,84(r1)
	ctx.current_instruction = 0x88107310;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_88107314:
	// lwz r11,92(r1)
	ctx.current_instruction = 0x88107314;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881078cc
	if (!ctx.cr6.lt) goto loc_881078CC;
	// subf r29,r26,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r26.u64;
	// addi r26,r5,-1
	ctx.r26.s64 = ctx.r5.s64 + -1;
	// addi r25,r6,-1
	ctx.r25.s64 = ctx.r6.s64 + -1;
	// addi r24,r8,-1
	ctx.r24.s64 = ctx.r8.s64 + -1;
	// stw r26,36(r1)
	ctx.current_instruction = 0x88107330;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r26.u32);
	// addi r23,r9,-1
	ctx.r23.s64 = ctx.r9.s64 + -1;
	// stw r25,44(r1)
	ctx.current_instruction = 0x88107338;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r25.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r24,60(r1)
	ctx.current_instruction = 0x88107340;
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r24.u32);
	// stw r23,68(r1)
	ctx.current_instruction = 0x88107344;
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r23.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// stw r11,76(r1)
	ctx.current_instruction = 0x8810734C;
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r11.u32);
loc_88107350:
	// lwz r10,720(r3)
	ctx.current_instruction = 0x88107350;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r10,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r9,-168(r1)
	ctx.current_instruction = 0x8810735C;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8810764c
	if (!ctx.cr6.gt) goto loc_8810764C;
loc_88107368:
	// lbz r10,8(r11)
	ctx.current_instruction = 0x88107368;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r9,10(r11)
	ctx.current_instruction = 0x8810736C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r6,9(r11)
	ctx.current_instruction = 0x88107370;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// rlwinm r8,r10,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lbz r5,4(r11)
	ctx.current_instruction = 0x88107378;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// lbz r29,11(r11)
	ctx.current_instruction = 0x88107380;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// extsb r27,r6
	ctx.r27.s64 = ctx.r6.s8;
	// lbz r28,12(r11)
	ctx.current_instruction = 0x88107388;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// extsb r24,r5
	ctx.r24.s64 = ctx.r5.s8;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// lbz r26,7(r11)
	ctx.current_instruction = 0x88107394;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// srawi r3,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 6;
	// lbz r25,2(r11)
	ctx.current_instruction = 0x8810739C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// lbz r22,3(r11)
	ctx.current_instruction = 0x881073A4;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r27,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 4;
	// lbz r23,1(r11)
	ctx.current_instruction = 0x881073AC;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r19,r29
	ctx.r19.s64 = ctx.r29.s8;
	// lbz r21,5(r11)
	ctx.current_instruction = 0x881073B4;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// srawi r24,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 2;
	// lbz r20,6(r11)
	ctx.current_instruction = 0x881073BC;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// extsb r18,r28
	ctx.r18.s64 = ctx.r28.s8;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// extsb r17,r26
	ctx.r17.s64 = ctx.r26.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// srawi r19,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r19.s64 = ctx.r19.s32 >> 2;
	// srawi r18,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 2;
	// srawi r17,r17,4
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0xF) != 0);
	ctx.r17.s64 = ctx.r17.s32 >> 4;
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// extsb r16,r25
	ctx.r16.s64 = ctx.r25.s8;
	// rlwimi r17,r10,0,30,31
	ctx.r17.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3) | (ctx.r17.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r3,r27,0,28,29
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r10,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r16.s32 >> 2;
	// rlwimi r5,r22,2,22,27
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3F0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r25,r23,2,22,27
	ctx.r25.u64 = (__builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3F0) | (ctx.r25.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r17,r10,0,26,27
	ctx.r17.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30) | (ctx.r17.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r3,r24,0,26,27
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x30) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r5,r5,2,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xF0;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// rlwinm r10,r25,2,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xF0;
	// rlwimi r3,r22,0,24,25
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xC0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFF3F);
	// or r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r9,r6,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// rlwinm r8,r26,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xC;
	// rlwimi r17,r23,0,24,25
	ctx.r17.u64 = (__builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xC0) | (ctx.r17.u64 & 0xFFFFFFFFFFFFFF3F);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stb r17,0(r30)
	ctx.current_instruction = 0x88107430;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r17.u8);
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stb r6,0(r7)
	ctx.current_instruction = 0x88107438;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// rlwimi r3,r19,0,26,27
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x30) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFCF);
	// stb r10,0(r4)
	ctx.current_instruction = 0x88107440;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// stb r9,0(r31)
	ctx.current_instruction = 0x88107448;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// rlwinm r7,r3,0,24,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF0;
	// lbz r8,13(r11)
	ctx.current_instruction = 0x88107450;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r3,20(r11)
	ctx.current_instruction = 0x88107454;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// lbz r9,22(r11)
	ctx.current_instruction = 0x88107460;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// rlwimi r28,r20,2,22,27
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3F0) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFC0F);
	// lbz r26,17(r11)
	ctx.current_instruction = 0x88107468;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 17);
	// rlwimi r30,r18,0,26,27
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x30) | (ctx.r30.u64 & 0xFFFFFFFFFFFFFFCF);
	// lbz r24,24(r11)
	ctx.current_instruction = 0x88107470;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// rlwimi r29,r21,2,22,27
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3F0) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFC0F);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// rlwinm r6,r30,0,24,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF0;
	// rlwinm r4,r28,2,24,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xF0;
	// rlwinm r5,r29,2,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xF0;
	// lbz r29,16(r11)
	ctx.current_instruction = 0x88107488;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// extsb r28,r9
	ctx.r28.s64 = ctx.r9.s8;
	// lbz r30,21(r11)
	ctx.current_instruction = 0x88107490;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// mr r16,r23
	ctx.r16.u64 = ctx.r23.u64;
	// lbz r27,23(r11)
	ctx.current_instruction = 0x88107498;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r31,r3,0,28,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// extsb r25,r30
	ctx.r25.s64 = ctx.r30.s8;
	// extsb r22,r29
	ctx.r22.s64 = ctx.r29.s8;
	// lbz r23,18(r11)
	ctx.current_instruction = 0x881074B0;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// lbz r21,19(r11)
	ctx.current_instruction = 0x881074B8;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 19);
	// srawi r28,r28,6
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3F) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 6;
	// lbz r19,15(r11)
	ctx.current_instruction = 0x881074C0;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// srawi r25,r25,4
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 4;
	// lbz r20,14(r11)
	ctx.current_instruction = 0x881074C8;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// extsb r18,r27
	ctx.r18.s64 = ctx.r27.s8;
	// extsb r17,r26
	ctx.r17.s64 = ctx.r26.s8;
	// srawi r22,r22,2
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 2;
	// extsb r16,r24
	ctx.r16.s64 = ctx.r24.s8;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// extsb r15,r23
	ctx.r15.s64 = ctx.r23.s8;
	// srawi r18,r18,6
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3F) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 6;
	// rlwinm r27,r27,0,28,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC;
	// srawi r17,r17,4
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0xF) != 0);
	ctx.r17.s64 = ctx.r17.s32 >> 4;
	// rlwinm r24,r24,0,28,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xC;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// srawi r16,r16,6
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3F) != 0);
	ctx.r16.s64 = ctx.r16.s32 >> 6;
	// extsb r21,r21
	ctx.r21.s64 = ctx.r21.s8;
	// srawi r15,r15,4
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xF) != 0);
	ctx.r15.s64 = ctx.r15.s32 >> 4;
	// rlwimi r28,r25,0,28,29
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// srawi r27,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 2;
	// srawi r25,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r24.s32 >> 2;
	// srawi r24,r21,4
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xF) != 0);
	ctx.r24.s64 = ctx.r21.s32 >> 4;
	// srawi r3,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 6;
	// extsb r10,r20
	ctx.r10.s64 = ctx.r20.s8;
	// rlwimi r24,r3,0,30,31
	ctx.r24.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x3) | (ctx.r24.u64 & 0xFFFFFFFFFFFFFFFC);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// rlwimi r24,r10,0,26,27
	ctx.r24.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30) | (ctx.r24.u64 & 0xFFFFFFFFFFFFFFCF);
	// lwz r10,-188(r1)
	ctx.current_instruction = 0x88107530;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// rlwimi r21,r8,2,22,27
	ctx.r21.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3F0) | (ctx.r21.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r24,r8,0,24,25
	ctx.r24.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0) | (ctx.r24.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwinm r3,r21,2,24,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xF0;
	// rlwimi r18,r17,0,28,29
	ctx.r18.u64 = (__builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xC) | (ctx.r18.u64 & 0xFFFFFFFFFFFFFFF3);
	// or r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 | ctx.r31.u64;
	// rlwinm r26,r26,0,28,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xC;
	// clrlwi r8,r24,24
	ctx.r8.u64 = ctx.r24.u32 & 0xFF;
	// rlwinm r31,r30,0,28,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xC;
	// rlwinm r23,r23,0,28,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xC;
	// stbu r8,1(r10)
	ctx.current_instruction = 0x88107558;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// clrlwi r30,r18,28
	ctx.r30.u64 = ctx.r18.u32 & 0xF;
	// or r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 | ctx.r26.u64;
	// or r26,r25,r23
	ctx.r26.u64 = ctx.r25.u64 | ctx.r23.u64;
	// rlwimi r28,r22,0,26,27
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x30) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFFCF);
	// or r23,r30,r7
	ctx.r23.u64 = ctx.r30.u64 | ctx.r7.u64;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// lwz r10,-184(r1)
	ctx.current_instruction = 0x88107574;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// rlwimi r28,r19,0,24,25
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xC0) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwimi r29,r19,2,22,27
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3F0) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFC0F);
	// stw r30,-188(r1)
	ctx.current_instruction = 0x88107580;
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r30.u32);
	// clrlwi r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	// rlwinm r29,r29,2,24,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xF0;
	// stbu r28,1(r10)
	ctx.current_instruction = 0x8810758C;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r28.u8);
	ctx.r10.u32 = ea;
	// rlwimi r16,r15,0,28,29
	ctx.r16.u64 = (__builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xC) | (ctx.r16.u64 & 0xFFFFFFFFFFFFFFF3);
	// or r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 | ctx.r9.u64;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lwz r10,-192(r1)
	ctx.current_instruction = 0x8810759C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// clrlwi r29,r16,28
	ctx.r29.u64 = ctx.r16.u32 & 0xF;
	// stw r7,-184(r1)
	ctx.current_instruction = 0x881075A8;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r7.u32);
	// or r25,r3,r11
	ctx.r25.u64 = ctx.r3.u64 | ctx.r11.u64;
	// lwz r11,76(r1)
	ctx.current_instruction = 0x881075B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// or r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 | ctx.r6.u64;
	// lwz r3,-160(r1)
	ctx.current_instruction = 0x881075B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// or r29,r26,r4
	ctx.r29.u64 = ctx.r26.u64 | ctx.r4.u64;
	// lwz r4,-168(r1)
	ctx.current_instruction = 0x881075C0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// stbu r25,1(r10)
	ctx.current_instruction = 0x881075C4;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r25.u8);
	ctx.r10.u32 = ea;
	// or r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 | ctx.r31.u64;
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// lwz r10,-176(r1)
	ctx.current_instruction = 0x881075D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r9,-168(r1)
	ctx.current_instruction = 0x881075DC;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r9.u32);
	// mr r14,r19
	ctx.r14.u64 = ctx.r19.u64;
	// stw r4,-192(r1)
	ctx.current_instruction = 0x881075E4;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r4.u32);
	// or r5,r27,r5
	ctx.r5.u64 = ctx.r27.u64 | ctx.r5.u64;
	// stw r11,76(r1)
	ctx.current_instruction = 0x881075EC;
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r11.u32);
	// stbu r31,1(r10)
	ctx.current_instruction = 0x881075F0;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r31.u8);
	ctx.r10.u32 = ea;
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// lwz r10,36(r1)
	ctx.current_instruction = 0x881075F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// addi r26,r10,1
	ctx.r26.s64 = ctx.r10.s64 + 1;
	// stw r31,-176(r1)
	ctx.current_instruction = 0x88107600;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r31.u32);
	// stw r26,36(r1)
	ctx.current_instruction = 0x88107604;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r26.u32);
	// stb r5,1(r10)
	ctx.current_instruction = 0x88107608;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// lwz r10,44(r1)
	ctx.current_instruction = 0x8810760C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
	// stw r25,44(r1)
	ctx.current_instruction = 0x88107614;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r25.u32);
	// stb r29,1(r10)
	ctx.current_instruction = 0x88107618;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r29.u8);
	// lwz r10,60(r1)
	ctx.current_instruction = 0x8810761C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// addi r24,r10,1
	ctx.r24.s64 = ctx.r10.s64 + 1;
	// stw r24,60(r1)
	ctx.current_instruction = 0x88107624;
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r24.u32);
	// stb r23,1(r10)
	ctx.current_instruction = 0x88107628;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r23.u8);
	// lwz r10,68(r1)
	ctx.current_instruction = 0x8810762C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// addi r23,r10,1
	ctx.r23.s64 = ctx.r10.s64 + 1;
	// stw r23,68(r1)
	ctx.current_instruction = 0x88107634;
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r23.u32);
	// stb r6,1(r10)
	ctx.current_instruction = 0x88107638;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r6.u8);
	// lwz r10,720(r3)
	ctx.current_instruction = 0x8810763C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// srawi r6,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88107368
	if (ctx.cr6.lt) goto loc_88107368;
loc_8810764C:
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8810789c
	if (ctx.cr6.eq) goto loc_8810789C;
	// lbz r9,2(r11)
	ctx.current_instruction = 0x88107658;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r22,r10,0,30,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// lbz r8,4(r11)
	ctx.current_instruction = 0x88107660;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// lbz r10,3(r11)
	ctx.current_instruction = 0x88107668;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r29,r8
	ctx.r29.s64 = ctx.r8.s8;
	// lbz r5,1(r11)
	ctx.current_instruction = 0x88107670;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// lbz r21,5(r11)
	ctx.current_instruction = 0x88107678;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// lbz r20,6(r11)
	ctx.current_instruction = 0x88107680;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// srawi r29,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 2;
	// rlwimi r9,r5,2,22,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3F0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r27,r29,0,26,27
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x30) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r8,r10,2,22,27
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3F0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r6,r5,0,24,25
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF3F);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r28,r27,0,24,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xF0;
	// rlwinm r5,r6,0,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF0;
	// stw r11,76(r1)
	ctx.current_instruction = 0x881076A8;
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r11.u32);
	// rlwinm r29,r9,2,24,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xF0;
	// rlwinm r27,r8,2,24,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xF0;
	// rlwinm r10,r21,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r9,r20,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r8,r21,4,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 4) & 0xC0;
	// rlwinm r6,r20,4,24,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 4) & 0xC0;
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 2, ctx.xer);
	// bne cr6,0x881077b0
	if (!ctx.cr6.eq) goto loc_881077B0;
	// lbz r25,2(r11)
	ctx.current_instruction = 0x881076CC;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// std r4,-176(r1)
	ctx.current_instruction = 0x881076D4;
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r4.u64);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r17,r25,0,28,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC;
	// std r3,-184(r1)
	ctx.current_instruction = 0x881076E0;
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r3.u64);
	// extsb r25,r25
	ctx.r25.s64 = ctx.r25.s8;
	// lbz r22,1(r11)
	ctx.current_instruction = 0x881076E8;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r21,4(r11)
	ctx.current_instruction = 0x881076EC;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// srawi r14,r25,6
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3F) != 0);
	ctx.r14.s64 = ctx.r25.s32 >> 6;
	// lwz r25,44(r1)
	ctx.current_instruction = 0x881076F4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// std r7,-168(r1)
	ctx.current_instruction = 0x881076F8;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r7.u64);
	// extsb r19,r22
	ctx.r19.s64 = ctx.r22.s8;
	// lbz r20,3(r11)
	ctx.current_instruction = 0x88107700;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r15,r21,0,28,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xC;
	// lbz r18,5(r11)
	ctx.current_instruction = 0x88107708;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r21,r21
	ctx.r21.s64 = ctx.r21.s8;
	// lbz r16,6(r11)
	ctx.current_instruction = 0x88107710;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// srawi r19,r19,4
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0xF) != 0);
	ctx.r19.s64 = ctx.r19.s32 >> 4;
	// extsb r7,r20
	ctx.r7.s64 = ctx.r20.s8;
	// lwz r23,68(r1)
	ctx.current_instruction = 0x8810771C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// srawi r17,r17,2
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3) != 0);
	ctx.r17.s64 = ctx.r17.s32 >> 2;
	// lwz r24,60(r1)
	ctx.current_instruction = 0x88107724;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// srawi r21,r21,6
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x3F) != 0);
	ctx.r21.s64 = ctx.r21.s32 >> 6;
	// extsb r4,r18
	ctx.r4.s64 = ctx.r18.s8;
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// extsb r3,r16
	ctx.r3.s64 = ctx.r16.s8;
	// srawi r15,r15,2
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x3) != 0);
	ctx.r15.s64 = ctx.r15.s32 >> 2;
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// rlwimi r14,r19,0,28,29
	ctx.r14.u64 = (__builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xC) | (ctx.r14.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r22,r22,0,28,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xC;
	// rlwimi r21,r7,0,28,29
	ctx.r21.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC) | (ctx.r21.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r19,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r19.s64 = ctx.r3.s32 >> 2;
	// rlwinm r20,r20,0,28,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xC;
	// ld r3,-184(r1)
	ctx.current_instruction = 0x88107754;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// rlwinm r18,r18,2,26,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x30;
	// rlwinm r16,r16,2,26,27
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0x30;
	// or r22,r17,r22
	ctx.r22.u64 = ctx.r17.u64 | ctx.r22.u64;
	// rlwinm r17,r4,0,26,27
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x30;
	// ld r7,-168(r1)
	ctx.current_instruction = 0x88107768;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// clrlwi r14,r14,28
	ctx.r14.u64 = ctx.r14.u32 & 0xF;
	// ld r4,-176(r1)
	ctx.current_instruction = 0x88107770;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// clrlwi r21,r21,28
	ctx.r21.u64 = ctx.r21.u32 & 0xF;
	// or r20,r15,r20
	ctx.r20.u64 = ctx.r15.u64 | ctx.r20.u64;
	// rlwinm r19,r19,0,26,27
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x30;
	// or r8,r18,r8
	ctx.r8.u64 = ctx.r18.u64 | ctx.r8.u64;
	// or r6,r16,r6
	ctx.r6.u64 = ctx.r16.u64 | ctx.r6.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// or r5,r14,r5
	ctx.r5.u64 = ctx.r14.u64 | ctx.r5.u64;
	// or r29,r22,r29
	ctx.r29.u64 = ctx.r22.u64 | ctx.r29.u64;
	// stw r11,76(r1)
	ctx.current_instruction = 0x88107794;
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r11.u32);
	// or r28,r21,r28
	ctx.r28.u64 = ctx.r21.u64 | ctx.r28.u64;
	// or r27,r20,r27
	ctx.r27.u64 = ctx.r20.u64 | ctx.r27.u64;
	// or r10,r17,r10
	ctx.r10.u64 = ctx.r17.u64 | ctx.r10.u64;
	// or r9,r19,r9
	ctx.r9.u64 = ctx.r19.u64 | ctx.r9.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
loc_881077B0:
	// stb r5,0(r30)
	ctx.current_instruction = 0x881077B0;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r5.u8);
	// stb r28,0(r7)
	ctx.current_instruction = 0x881077B4;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r28.u8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r29,0(r4)
	ctx.current_instruction = 0x881077BC;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r29.u8);
	// stb r27,0(r31)
	ctx.current_instruction = 0x881077C0;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r5,720(r3)
	ctx.current_instruction = 0x881077C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bne cr6,0x8810787c
	if (!ctx.cr6.eq) goto loc_8810787C;
	// lbz r5,2(r11)
	ctx.current_instruction = 0x881077D8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r29,r8,24
	ctx.r29.u64 = ctx.r8.u32 & 0xFF;
	// lbz r28,4(r11)
	ctx.current_instruction = 0x881077E0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// lbz r22,3(r11)
	ctx.current_instruction = 0x881077EC;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r21,r28
	ctx.r21.s64 = ctx.r28.s8;
	// lbz r27,1(r11)
	ctx.current_instruction = 0x881077F4;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srawi r19,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r19.s64 = ctx.r8.s32 >> 2;
	// lbz r20,5(r11)
	ctx.current_instruction = 0x881077FC;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// srawi r21,r21,2
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x3) != 0);
	ctx.r21.s64 = ctx.r21.s32 >> 2;
	// lbzu r8,6(r11)
	ctx.current_instruction = 0x88107804;
	ea = 6 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r17,r22
	ctx.r17.u64 = ctx.r22.u64;
	// rlwimi r19,r27,0,24,25
	ctx.r19.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC0) | (ctx.r19.u64 & 0xFFFFFFFFFFFFFF3F);
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// rlwimi r17,r21,0,26,27
	ctx.r17.u64 = (__builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x30) | (ctx.r17.u64 & 0xFFFFFFFFFFFFFFCF);
	// extsb r18,r20
	ctx.r18.s64 = ctx.r20.s8;
	// stw r11,76(r1)
	ctx.current_instruction = 0x8810781C;
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r11.u32);
	// rlwinm r21,r19,0,24,27
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xF0;
	// extsb r16,r8
	ctx.r16.s64 = ctx.r8.s8;
	// rlwimi r5,r27,2,22,27
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3F0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC0F);
	// stb r21,1(r30)
	ctx.current_instruction = 0x8810782C;
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r21.u8);
	// rlwimi r28,r22,2,22,27
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3F0) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwinm r22,r17,0,24,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xF0;
	// srawi r27,r18,4
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r18.s32 >> 4;
	// rlwinm r5,r5,2,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xF0;
	// stb r22,0(r7)
	ctx.current_instruction = 0x88107840;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r22.u8);
	// srawi r30,r16,4
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r16.s32 >> 4;
	// rlwinm r22,r8,0,28,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// stb r5,1(r4)
	ctx.current_instruction = 0x8810784C;
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r5.u8);
	// rlwinm r8,r30,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xC;
	// rlwinm r28,r28,2,24,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xF0;
	// rlwinm r4,r27,0,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC;
	// rlwinm r5,r20,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xC;
	// stb r28,0(r31)
	ctx.current_instruction = 0x88107860;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// or r8,r5,r29
	ctx.r8.u64 = ctx.r5.u64 | ctx.r29.u64;
	// or r6,r22,r6
	ctx.r6.u64 = ctx.r22.u64 | ctx.r6.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8810787C:
	// stbu r8,1(r26)
	ctx.current_instruction = 0x8810787C;
	ea = 1 + ctx.r26.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r26.u32 = ea;
	// stbu r6,1(r25)
	ctx.current_instruction = 0x88107880;
	ea = 1 + ctx.r25.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r25.u32 = ea;
	// stbu r10,1(r24)
	ctx.current_instruction = 0x88107884;
	ea = 1 + ctx.r24.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r24.u32 = ea;
	// stbu r9,1(r23)
	ctx.current_instruction = 0x88107888;
	ea = 1 + ctx.r23.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r23.u32 = ea;
	// stw r26,36(r1)
	ctx.current_instruction = 0x8810788C;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r26.u32);
	// stw r25,44(r1)
	ctx.current_instruction = 0x88107890;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r25.u32);
	// stw r24,60(r1)
	ctx.current_instruction = 0x88107894;
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r24.u32);
	// stw r23,68(r1)
	ctx.current_instruction = 0x88107898;
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r23.u32);
loc_8810789C:
	// lwz r10,720(r3)
	ctx.current_instruction = 0x8810789C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r7,-188(r1)
	ctx.current_instruction = 0x881078A8;
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r7.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r31,-192(r1)
	ctx.current_instruction = 0x881078B0;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r31.u32);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r7,-184(r1)
	ctx.current_instruction = 0x881078C0;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r7.u32);
	// stw r31,-176(r1)
	ctx.current_instruction = 0x881078C4;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r31.u32);
	// bdnz 0x88107350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88107350;
loc_881078CC:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881226C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881226C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881226C8) {
			switch (rex_dispatch_address) {
				case 0x88122724:
				case 0x88122790:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881226C8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88122724: goto loc_88122724;
		case 0x88122790: goto loc_88122790;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881226CC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881226D0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881226D4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881226D8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x881226DC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,80(r1)
	ctx.current_instruction = 0x881226E4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r31)
	ctx.current_instruction = 0x881226EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881227ac
	if (ctx.cr6.eq) goto loc_881227AC;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x881226F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r11)
	ctx.current_instruction = 0x881226FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	ctx.current_instruction = 0x88122704;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x881227ac
	if (ctx.cr6.eq) goto loc_881227AC;
loc_8812270C:
	// lwz r10,76(r31)
	ctx.current_instruction = 0x8812270C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x88122710;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,8(r10)
	ctx.current_instruction = 0x88122718;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88122724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88122724:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881227ac
	if (ctx.cr6.lt) goto loc_881227AC;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812272C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88122730;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r11)
	ctx.current_instruction = 0x88122734;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r10)
	ctx.current_instruction = 0x88122738;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812273C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r11)
	ctx.current_instruction = 0x88122740;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88122758
	if (ctx.cr6.eq) goto loc_88122758;
	// lwz r9,12(r11)
	ctx.current_instruction = 0x8812274C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r9,12(r10)
	ctx.current_instruction = 0x88122754;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_88122758:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x88122758;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,144(r31)
	ctx.current_instruction = 0x8812275C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r9,140(r31)
	ctx.current_instruction = 0x88122760;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r11,24(r31)
	ctx.current_instruction = 0x8812276C;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r8,144(r31)
	ctx.current_instruction = 0x88122770;
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// bne 0x88122780
	if (!ctx.cr0.eq) goto loc_88122780;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x88122778;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,8(r11)
	ctx.current_instruction = 0x8812277C;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_88122780:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r31)
	ctx.current_instruction = 0x88122784;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x880cb318
	ctx.lr = 0x88122790;
	sub_880CB318(ctx, base);
loc_88122790:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881227ac
	if (ctx.cr6.lt) goto loc_881227AC;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x88122798;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r11)
	ctx.current_instruction = 0x8812279C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	ctx.current_instruction = 0x881227A4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x8812270c
	if (!ctx.cr6.eq) goto loc_8812270C;
loc_881227AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881227B0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881227B8;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881227BC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88123DA8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88123DA8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88123DA8) {
			switch (rex_dispatch_address) {
				case 0x88123DB0:
				case 0x88123E24:
				case 0x88123EA0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88123DA8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88123DB0: goto loc_88123DB0;
		case 0x88123E24: goto loc_88123E24;
		case 0x88123EA0: goto loc_88123EA0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88123DB0;
	__savegprlr_28(ctx, base);
loc_88123DB0:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88123DB0;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x88123DB4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	ctx.current_instruction = 0x88123DC0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,24(r31)
	ctx.current_instruction = 0x88123DC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88123ddc
	if (!ctx.cr6.eq) goto loc_88123DDC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88123DDC:
	// lwz r11,16(r31)
	ctx.current_instruction = 0x88123DDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r11)
	ctx.current_instruction = 0x88123DE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	ctx.current_instruction = 0x88123DE8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x88123eb8
	if (ctx.cr6.eq) goto loc_88123EB8;
loc_88123DF0:
	// lwz r4,0(r11)
	ctx.current_instruction = 0x88123DF0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,8(r4)
	ctx.current_instruction = 0x88123DF4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// cmpld cr6,r10,r29
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r29.u64, ctx.xer);
	// blt cr6,0x88123eb8
	if (ctx.cr6.lt) goto loc_88123EB8;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88123E00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	ctx.current_instruction = 0x88123E04;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88123ea8
	if (!ctx.cr6.eq) goto loc_88123EA8;
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88123E10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88123E18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88123E24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88123E24:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88123eb8
	if (ctx.cr6.lt) goto loc_88123EB8;
	// lwz r11,120(r31)
	ctx.current_instruction = 0x88123E2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,116(r31)
	ctx.current_instruction = 0x88123E30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,120(r31)
	ctx.current_instruction = 0x88123E38;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88123E3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,12(r11)
	ctx.current_instruction = 0x88123E40;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,8(r11)
	ctx.current_instruction = 0x88123E44;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r8)
	ctx.current_instruction = 0x88123E48;
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88123E4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,8(r11)
	ctx.current_instruction = 0x88123E50;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x88123e6c
	if (ctx.cr6.eq) goto loc_88123E6C;
	// lwz r9,12(r11)
	ctx.current_instruction = 0x88123E5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,12(r10)
	ctx.current_instruction = 0x88123E64;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// b 0x88123e74
	goto loc_88123E74;
loc_88123E6C:
	// lwz r11,12(r11)
	ctx.current_instruction = 0x88123E6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,20(r31)
	ctx.current_instruction = 0x88123E70;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_88123E74:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x88123E74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	ctx.current_instruction = 0x88123E7C;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bne 0x88123e90
	if (!ctx.cr0.eq) goto loc_88123E90;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x88123E84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r28,8(r11)
	ctx.current_instruction = 0x88123E88;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,20(r31)
	ctx.current_instruction = 0x88123E8C;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_88123E90:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.current_instruction = 0x88123E94;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x880cb318
	ctx.lr = 0x88123EA0;
	sub_880CB318(ctx, base);
loc_88123EA0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88123eb8
	if (ctx.cr6.lt) goto loc_88123EB8;
loc_88123EA8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,80(r1)
	ctx.current_instruction = 0x88123EAC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x88123df0
	if (!ctx.cr6.eq) goto loc_88123DF0;
loc_88123EB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88125DD0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88125DD0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88125DD0) {
			switch (rex_dispatch_address) {
				case 0x88125DD8:
				case 0x88125E34:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88125DD0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88125DD8: goto loc_88125DD8;
		case 0x88125E34: goto loc_88125E34;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88125DD8;
	__savegprlr_26(ctx, base);
loc_88125DD8:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88125DD8;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// lis r9,-32688
	ctx.r9.s64 = -2142240768;
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// ori r26,r9,3
	ctx.r26.u64 = ctx.r9.u64 | 3;
	// addi r27,r10,5592
	ctx.r27.s64 = ctx.r10.s64 + 5592;
loc_88125E04:
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.current_instruction = 0x88125E0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88125E10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88125e44
	if (ctx.cr6.eq) goto loc_88125E44;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88125E34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88125E34:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88125e58
	if (!ctx.cr6.lt) goto loc_88125E58;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x88125e58
	if (!ctx.cr6.eq) goto loc_88125E58;
loc_88125E44:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x88125e04
	if (ctx.cr6.lt) goto loc_88125E04;
loc_88125E58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88127D10) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88127D10;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88127D10) {
			switch (rex_dispatch_address) {
				case 0x88127D18:
				case 0x88127DEC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88127D10;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88127D18: goto loc_88127D18;
		case 0x88127DEC: goto loc_88127DEC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x88127D18;
	__savegprlr_24(ctx, base);
loc_88127D18:
	// stfd f30,-88(r1)
	ctx.current_instruction = 0x88127D18;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	ctx.current_instruction = 0x88127D1C;
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x88127D20;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r24,r5,16
	ctx.r24.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x88127e1c
	if (!ctx.cr6.gt) goto loc_88127E1C;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lhz r11,34(r3)
	ctx.current_instruction = 0x88127D40;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f31,6728(r10)
	ctx.current_instruction = 0x88127D50;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6728);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,6732(r9)
	ctx.current_instruction = 0x88127D54;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6732);
	ctx.f30.f64 = double(temp.f32);
loc_88127D58:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88127e08
	if (!ctx.cr6.gt) goto loc_88127E08;
	// rlwinm r27,r25,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_88127D68:
	// lwz r11,320(r31)
	ctx.current_instruction = 0x88127D68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r10,r30,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(1776));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,60(r11)
	ctx.current_instruction = 0x88127D74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lhz r11,110(r31)
	ctx.current_instruction = 0x88127D78;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfsx f0,r10,r27
	ctx.current_instruction = 0x88127D80;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x88127db4
	if (!ctx.cr6.lt) goto loc_88127DB4;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	ctx.current_instruction = 0x88127DA0;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.current_instruction = 0x88127DA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88127dd4
	if (!ctx.cr6.lt) goto loc_88127DD4;
	// b 0x88127dd0
	goto loc_88127DD0;
loc_88127DB4:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	ctx.current_instruction = 0x88127DC0;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.current_instruction = 0x88127DC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88127dd4
	if (!ctx.cr6.gt) goto loc_88127DD4;
loc_88127DD0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_88127DD4:
	// lwz r11,520(r31)
	ctx.current_instruction = 0x88127DD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88127DEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88127DEC:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// lhz r11,34(r31)
	ctx.current_instruction = 0x88127DF0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88127d68
	if (ctx.cr6.lt) goto loc_88127D68;
loc_88127E08:
	// addi r10,r25,1
	ctx.r10.s64 = ctx.r25.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x88127d58
	if (ctx.cr6.lt) goto loc_88127D58;
loc_88127E1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.current_instruction = 0x88127E24;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.current_instruction = 0x88127E28;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812BC48) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8812BC48);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812BC48;
	ctx.current_instruction = 0x8812BC48;
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.current_instruction = 0x8812BC48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.current_instruction = 0x8812BC4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,60(r11)
	ctx.current_instruction = 0x8812BC50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x8812bc7c
	if (ctx.cr6.gt) goto loc_8812BC7C;
	// lwz r10,212(r11)
	ctx.current_instruction = 0x8812BC5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8812bc74
	if (ctx.cr6.eq) goto loc_8812BC74;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8812BC68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// b 0x8812bc98
	goto loc_8812BC98;
loc_8812BC74:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8812bc9c
	goto loc_8812BC9C;
loc_8812BC7C:
	// lwz r10,604(r11)
	ctx.current_instruction = 0x8812BC7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 604);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8812BC84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x8812bc94
	if (ctx.cr6.eq) goto loc_8812BC94;
	// addi r10,r10,17
	ctx.r10.s64 = ctx.r10.s64 + 17;
	// b 0x8812bc98
	goto loc_8812BC98;
loc_8812BC94:
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_8812BC98:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_8812BC9C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r9,60(r11)
	ctx.current_instruction = 0x8812BCA0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// srawi r8,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 3;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r6,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r6.u64;
	// bgt cr6,0x8812bcdc
	if (ctx.cr6.gt) goto loc_8812BCDC;
	// lwz r10,212(r11)
	ctx.current_instruction = 0x8812BCBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8812bcd4
	if (ctx.cr6.eq) goto loc_8812BCD4;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8812BCC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// b 0x8812bcf8
	goto loc_8812BCF8;
loc_8812BCD4:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8812bcfc
	goto loc_8812BCFC;
loc_8812BCDC:
	// lwz r10,604(r11)
	ctx.current_instruction = 0x8812BCDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 604);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8812BCE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x8812bcf4
	if (ctx.cr6.eq) goto loc_8812BCF4;
	// addi r10,r10,17
	ctx.r10.s64 = ctx.r10.s64 + 17;
	// b 0x8812bcf8
	goto loc_8812BCF8;
loc_8812BCF4:
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_8812BCF8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_8812BCFC:
	// lwz r8,24(r3)
	ctx.current_instruction = 0x8812BCFC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r7,r10,29,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1F;
	// lwz r6,28(r3)
	ctx.current_instruction = 0x8812BD04;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r5,620(r11)
	ctx.current_instruction = 0x8812BD08;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r9,20(r3)
	ctx.current_instruction = 0x8812BD0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// subf r11,r6,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,32(r3)
	ctx.current_instruction = 0x8812BD1C;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,80(r3)
	ctx.current_instruction = 0x8812BD24;
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// ble cr6,0x8812bd34
	if (!ctx.cr6.gt) goto loc_8812BD34;
	// stw r10,32(r3)
	ctx.current_instruction = 0x8812BD2C;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x8812bd44
	goto loc_8812BD44;
loc_8812BD34:
	// li r9,1
	ctx.r9.s64 = 1;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,68(r3)
	ctx.current_instruction = 0x8812BD3C;
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r8,72(r3)
	ctx.current_instruction = 0x8812BD40;
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
loc_8812BD44:
	// b 0x8812bb00
	sub_8812BB00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88130C18) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88130C18;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88130C18) {
			switch (rex_dispatch_address) {
				case 0x88130C20:
				case 0x88130C28:
				case 0x88130CC8:
				case 0x88130CE4:
				case 0x8813111C:
				case 0x88131188:
				case 0x881311A4:
				case 0x88131474:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88130C18;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88130C20: goto loc_88130C20;
		case 0x88130C28: goto loc_88130C28;
		case 0x88130CC8: goto loc_88130CC8;
		case 0x88130CE4: goto loc_88130CE4;
		case 0x8813111C: goto loc_8813111C;
		case 0x88131188: goto loc_88131188;
		case 0x881311A4: goto loc_881311A4;
		case 0x88131474: goto loc_88131474;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88130C20;
	__savegprlr_26(ctx, base);
loc_88130C20:
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x881ef274
	ctx.lr = 0x88130C28;
	__savefpr_23(ctx, base);
loc_88130C28:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x88130C28;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,580(r3)
	ctx.current_instruction = 0x88130C2C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x88131120
	if (!ctx.cr6.eq) goto loc_88131120;
	// lwz r10,584(r3)
	ctx.current_instruction = 0x88130C40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// lwz r11,320(r3)
	ctx.current_instruction = 0x88130C44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r8,60(r3)
	ctx.current_instruction = 0x88130C48;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// lhz r7,0(r10)
	ctx.current_instruction = 0x88130C50;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r6,2(r10)
	ctx.current_instruction = 0x88130C54;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// mulli r10,r5,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r10,r4,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// lhz r31,122(r30)
	ctx.current_instruction = 0x88130C6C;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r30.u32 + 122);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x88130c8c
	if (!ctx.cr6.gt) goto loc_88130C8C;
	// lhz r11,122(r27)
	ctx.current_instruction = 0x88130C78;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 122);
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x88131120
	if (!ctx.cr6.eq) goto loc_88131120;
loc_88130C8C:
	// lhz r26,124(r30)
	ctx.current_instruction = 0x88130C8C;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r30.u32 + 124);
	// extsh r29,r31
	ctx.r29.s64 = ctx.r31.s16;
	// addi r9,r1,86
	ctx.r9.s64 = ctx.r1.s64 + 86;
	// lfs f29,72(r30)
	ctx.current_instruction = 0x88130C98;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f29.f64 = double(temp.f32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lfs f31,76(r30)
	ctx.current_instruction = 0x88130CA0;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f31.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lfs f28,80(r30)
	ctx.current_instruction = 0x88130CA8;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lfs f27,84(r30)
	ctx.current_instruction = 0x88130CB0;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f30,88(r30)
	ctx.current_instruction = 0x88130CB8;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8812d8e8
	ctx.lr = 0x88130CC8;
	sub_8812D8E8(ctx, base);
loc_88130CC8:
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8812d818
	ctx.lr = 0x88130CE4;
	sub_8812D818(ctx, base);
loc_88130CE4:
	// extsh r7,r26
	ctx.r7.s64 = ctx.r26.s16;
	// lwz r9,56(r30)
	ctx.current_instruction = 0x88130CE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// li r8,0
	ctx.r8.s64 = 0;
	// srawi r10,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// lwz r11,56(r27)
	ctx.current_instruction = 0x88130CF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 56);
	// addze. r3,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r3.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x88130d54
	if (!ctx.cr0.gt) goto loc_88130D54;
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_88130D18:
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lfsx f0,r4,r10
	ctx.current_instruction = 0x88130D1C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	ctx.current_instruction = 0x88130D20;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r5,r9
	ctx.r6.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lfs f12,-4(r6)
	ctx.current_instruction = 0x88130D34;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r5)
	ctx.current_instruction = 0x88130D38;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f12,r4,r10
	ctx.current_instruction = 0x88130D3C;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r10.u32, temp.u32);
	// stfs f11,0(r10)
	ctx.current_instruction = 0x88130D40;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f0,-4(r6)
	ctx.current_instruction = 0x88130D48;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + -4, temp.u32);
	// stfs f13,-4(r5)
	ctx.current_instruction = 0x88130D4C;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + -4, temp.u32);
	// bdnz 0x88130d18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88130D18;
loc_88130D54:
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x88130db4
	if (!ctx.cr6.gt) goto loc_88130DB4;
	// addi r8,r3,-2
	ctx.r8.s64 = ctx.r3.s64 + -2;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88130D78:
	// subf r8,r5,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r5.u64;
	// lfsx f0,r10,r4
	ctx.current_instruction = 0x88130D7C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	ctx.current_instruction = 0x88130D80;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f12,-4(r8)
	ctx.current_instruction = 0x88130D94;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r6)
	ctx.current_instruction = 0x88130D98;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f12,r10,r4
	ctx.current_instruction = 0x88130D9C;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// stfs f11,0(r10)
	ctx.current_instruction = 0x88130DA0;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f0,-4(r8)
	ctx.current_instruction = 0x88130DA8;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// stfs f13,-4(r6)
	ctx.current_instruction = 0x88130DAC;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + -4, temp.u32);
	// bdnz 0x88130d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88130D78;
loc_88130DB4:
	// li r5,2
	ctx.r5.s64 = 2;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x88130e14
	if (!ctx.cr6.gt) goto loc_88130E14;
	// addi r8,r3,-3
	ctx.r8.s64 = ctx.r3.s64 + -3;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88130DD8:
	// subf r8,r5,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r5.u64;
	// lfsx f0,r10,r4
	ctx.current_instruction = 0x88130DDC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	ctx.current_instruction = 0x88130DE0;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f12,-4(r8)
	ctx.current_instruction = 0x88130DF4;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r6)
	ctx.current_instruction = 0x88130DF8;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f12,r10,r4
	ctx.current_instruction = 0x88130DFC;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// stfs f11,0(r10)
	ctx.current_instruction = 0x88130E00;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f0,-4(r8)
	ctx.current_instruction = 0x88130E08;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// stfs f13,-4(r6)
	ctx.current_instruction = 0x88130E0C;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + -4, temp.u32);
	// bdnz 0x88130dd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88130DD8;
loc_88130E14:
	// li r5,3
	ctx.r5.s64 = 3;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// ble cr6,0x88130e74
	if (!ctx.cr6.gt) goto loc_88130E74;
	// addi r8,r3,-4
	ctx.r8.s64 = ctx.r3.s64 + -4;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88130E38:
	// subf r8,r5,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r5.u64;
	// lfsx f0,r10,r4
	ctx.current_instruction = 0x88130E3C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	ctx.current_instruction = 0x88130E40;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f12,-4(r8)
	ctx.current_instruction = 0x88130E54;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r6)
	ctx.current_instruction = 0x88130E58;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f12,r10,r4
	ctx.current_instruction = 0x88130E5C;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// stfs f11,0(r10)
	ctx.current_instruction = 0x88130E60;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f0,-4(r8)
	ctx.current_instruction = 0x88130E68;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// stfs f13,-4(r6)
	ctx.current_instruction = 0x88130E6C;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + -4, temp.u32);
	// bdnz 0x88130e38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88130E38;
loc_88130E74:
	// srawi r8,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 1;
	// lwz r11,56(r30)
	ctx.current_instruction = 0x88130E78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,56(r27)
	ctx.current_instruction = 0x88130E80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 56);
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88130edc
	if (!ctx.cr6.gt) goto loc_88130EDC;
	// lhz r6,82(r1)
	ctx.current_instruction = 0x88130EAC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r5,80(r1)
	ctx.current_instruction = 0x88130EB0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// subf r7,r7,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r7.u64;
	// subf r6,r3,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r3.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// b 0x88130f10
	goto loc_88130F10;
loc_88130EDC:
	// lhz r7,84(r1)
	ctx.current_instruction = 0x88130EDC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r6,80(r1)
	ctx.current_instruction = 0x88130EE0;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r5,82(r1)
	ctx.current_instruction = 0x88130EE4;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// subf r6,r29,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r29.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addze r5,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r5.s64 = temp.s64;
loc_88130F10:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8813108c
	if (ctx.cr6.lt) goto loc_8813108C;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
loc_88130F20:
	// lfs f12,0(r9)
	ctx.current_instruction = 0x88130F20;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fneg f10,f29
	ctx.f10.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f8,0(r8)
	ctx.current_instruction = 0x88130F2C;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// lfs f6,-4(r11)
	ctx.current_instruction = 0x88130F34;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fnmsubs f0,f30,f29,f27
	ctx.f0.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f29.f64, -ctx.f27.f64)));
	// lfs f5,4(r10)
	ctx.current_instruction = 0x88130F3C;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f30,f31,f28
	ctx.f13.f64 = double(float(std::fma(ctx.f30.f64, ctx.f31.f64, ctx.f28.f64)));
	// lfs f1,0(r10)
	ctx.current_instruction = 0x88130F44;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f26,f1,f31
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lfs f2,0(r11)
	ctx.current_instruction = 0x88130F4C;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f28,f2,f31
	ctx.f28.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// lfs f4,-8(r11)
	ctx.current_instruction = 0x88130F54;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r10)
	ctx.current_instruction = 0x88130F58;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfs f27,12(r10)
	ctx.current_instruction = 0x88130F60;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// lfs f25,-12(r11)
	ctx.current_instruction = 0x88130F64;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f11,f10,f8,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f8.f64, ctx.f9.f64)));
	// stfs f11,0(r9)
	ctx.current_instruction = 0x88130F6C;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f9,-4(r8)
	ctx.current_instruction = 0x88130F70;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f12,f29,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f29.f64, ctx.f7.f64)));
	// stfs f8,0(r8)
	ctx.current_instruction = 0x88130F78;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f7,f0,f6
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f8,4(r9)
	ctx.current_instruction = 0x88130F80;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fneg f24,f13
	ctx.f24.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f23,f0,f9
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmadds f7,f13,f5,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f7.f64)));
	// stfs f7,-4(r11)
	ctx.current_instruction = 0x88130F94;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fmuls f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmadds f10,f10,f2,f26
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f2.f64, ctx.f26.f64)));
	// stfs f10,0(r10)
	ctx.current_instruction = 0x88130FA0;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmadds f1,f1,f29,f28
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f29.f64, ctx.f28.f64)));
	// stfs f1,0(r11)
	ctx.current_instruction = 0x88130FA8;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f11,f24,f9,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f24.f64, ctx.f9.f64, ctx.f12.f64)));
	// stfs f11,4(r9)
	ctx.current_instruction = 0x88130FB0;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmadds f8,f13,f8,f23
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f23.f64)));
	// stfs f8,-4(r8)
	ctx.current_instruction = 0x88130FB8;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// lfs f7,8(r9)
	ctx.current_instruction = 0x88130FBC;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmadds f13,f0,f30,f29
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f30.f64, ctx.f29.f64)));
	// lfs f9,-8(r8)
	ctx.current_instruction = 0x88130FC8;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fnmsubs f0,f30,f12,f31
	ctx.f0.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f12.f64, -ctx.f31.f64)));
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// fmadds f12,f24,f6,f5
	ctx.f12.f64 = double(float(std::fma(ctx.f24.f64, ctx.f6.f64, ctx.f5.f64)));
	// stfs f12,4(r10)
	ctx.current_instruction = 0x88130FDC;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmuls f8,f0,f4
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmadds f11,f13,f3,f8
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, ctx.f8.f64)));
	// stfs f11,-8(r11)
	ctx.current_instruction = 0x88130FFC;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// fmadds f8,f13,f7,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f6.f64)));
	// fmadds f13,f0,f30,f2
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f30.f64, ctx.f2.f64)));
	// fmuls f7,f0,f3
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fnmsubs f0,f30,f12,f1
	ctx.f0.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f12.f64, -ctx.f1.f64)));
	// fmadds f6,f10,f9,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f9.f64, ctx.f5.f64)));
	// stfs f6,8(r9)
	ctx.current_instruction = 0x88131018;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f5,-12(r8)
	ctx.current_instruction = 0x8813101C;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f8,-8(r8)
	ctx.current_instruction = 0x88131020;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// lfs f3,12(r9)
	ctx.current_instruction = 0x88131024;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fneg f2,f13
	ctx.f2.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmadds f1,f10,f4,f7
	ctx.f1.f64 = double(float(std::fma(ctx.f10.f64, ctx.f4.f64, ctx.f7.f64)));
	// stfs f1,8(r10)
	ctx.current_instruction = 0x88131030;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
	// fmuls f10,f0,f25
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// fmuls f9,f0,f27
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f8,f0,f3
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmadds f6,f2,f25,f9
	ctx.f6.f64 = double(float(std::fma(ctx.f2.f64, ctx.f25.f64, ctx.f9.f64)));
	// stfs f6,12(r10)
	ctx.current_instruction = 0x88131048;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f4,f2,f5,f8
	ctx.f4.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f8.f64)));
	// stfs f4,12(r9)
	ctx.current_instruction = 0x88131050;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// fmadds f7,f13,f27,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, ctx.f27.f64, ctx.f10.f64)));
	// stfs f7,-12(r11)
	ctx.current_instruction = 0x88131058;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// fmuls f2,f0,f5
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmadds f29,f0,f30,f12
	ctx.f29.f64 = double(float(std::fma(ctx.f0.f64, ctx.f30.f64, ctx.f12.f64)));
	// fmadds f1,f13,f3,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, ctx.f2.f64)));
	// stfs f1,-12(r8)
	ctx.current_instruction = 0x88131068;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r8.u32 + -12, temp.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// fnmsubs f31,f30,f13,f11
	ctx.f31.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f13.f64, -ctx.f11.f64)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// addi r8,r8,-16
	ctx.r8.s64 = ctx.r8.s64 + -16;
	// blt cr6,0x88130f20
	if (ctx.cr6.lt) goto loc_88130F20;
loc_8813108C:
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88131464
	if (!ctx.cr6.lt) goto loc_88131464;
	// subf r7,r7,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881310A4:
	// lfsx f12,r9,r10
	ctx.current_instruction = 0x881310A4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f29
	ctx.f11.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// lfsx f10,r8,r11
	ctx.current_instruction = 0x881310AC;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f8,0(r11)
	ctx.current_instruction = 0x881310B4;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// lfs f6,0(r10)
	ctx.current_instruction = 0x881310BC;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f4,f6,f31
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmadds f0,f30,f31,f28
	ctx.f0.f64 = double(float(std::fma(ctx.f30.f64, ctx.f31.f64, ctx.f28.f64)));
	// fnmsubs f13,f30,f29,f27
	ctx.f13.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f29.f64, -ctx.f27.f64)));
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// fmadds f3,f11,f10,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f9.f64)));
	// stfsx f3,r9,r10
	ctx.current_instruction = 0x881310DC;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// fmadds f2,f12,f29,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f12.f64, ctx.f29.f64, ctx.f7.f64)));
	// stfsx f2,r8,r11
	ctx.current_instruction = 0x881310E4;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// fmadds f1,f6,f29,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f29.f64, ctx.f5.f64)));
	// stfs f1,0(r11)
	ctx.current_instruction = 0x881310EC;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f12,f11,f8,f4
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, ctx.f4.f64)));
	// stfs f12,0(r10)
	ctx.current_instruction = 0x881310F4;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x881310a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881310A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x881ef2c0
	ctx.lr = 0x8813111C;
	__restfpr_23(ctx, base);
loc_8813111C:
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88131120:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88131464
	if (!ctx.cr6.gt) goto loc_88131464;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_88131130:
	// lwz r7,584(r28)
	ctx.current_instruction = 0x88131130;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 584);
	// addi r9,r1,86
	ctx.r9.s64 = ctx.r1.s64 + 86;
	// lwz r11,320(r28)
	ctx.current_instruction = 0x88131138;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 320);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhzx r6,r10,r7
	ctx.current_instruction = 0x88131148;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r10,r5,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r30,122(r31)
	ctx.current_instruction = 0x88131158;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r31.u32 + 122);
	// lfs f30,72(r31)
	ctx.current_instruction = 0x8813115C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f30.f64 = double(temp.f32);
	// lhz r26,124(r31)
	ctx.current_instruction = 0x88131160;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// lfs f29,76(r31)
	ctx.current_instruction = 0x88131164;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f29.f64 = double(temp.f32);
	// extsh r29,r30
	ctx.r29.s64 = ctx.r30.s16;
	// lfs f28,80(r31)
	ctx.current_instruction = 0x8813116C;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f27,84(r31)
	ctx.current_instruction = 0x88131174;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lfs f31,88(r31)
	ctx.current_instruction = 0x8813117C;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x8812d8e8
	ctx.lr = 0x88131188;
	sub_8812D8E8(ctx, base);
loc_88131188:
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8812d818
	ctx.lr = 0x881311A4;
	sub_8812D818(ctx, base);
loc_881311A4:
	// extsh r4,r26
	ctx.r4.s64 = ctx.r26.s16;
	// lwz r10,56(r31)
	ctx.current_instruction = 0x881311A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// addze r30,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r30.s64 = temp.s64;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x88131238
	if (ctx.cr6.lt) goto loc_88131238;
	// addi r3,r30,-3
	ctx.r3.s64 = ctx.r30.s64 + -3;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_881311C8:
	// subf r8,r9,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r9.u64;
	// lfs f0,4(r11)
	ctx.current_instruction = 0x881311CC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r8,-2
	ctx.r6.s64 = ctx.r8.s64 + -2;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r8,-3
	ctx.r5.s64 = ctx.r8.s64 + -3;
	// addi r26,r8,-4
	ctx.r26.s64 = ctx.r8.s64 + -4;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,-4(r7)
	ctx.current_instruction = 0x881311F0;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,4(r11)
	ctx.current_instruction = 0x881311F8;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// stfs f0,-4(r7)
	ctx.current_instruction = 0x88131200;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// lfs f12,8(r11)
	ctx.current_instruction = 0x88131204;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r6,r10
	ctx.current_instruction = 0x88131208;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	ctx.current_instruction = 0x8813120C;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsx f12,r6,r10
	ctx.current_instruction = 0x88131210;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// lfs f10,12(r11)
	ctx.current_instruction = 0x88131214;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r8,r10
	ctx.current_instruction = 0x88131218;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r11)
	ctx.current_instruction = 0x8813121C;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsx f10,r8,r10
	ctx.current_instruction = 0x88131220;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// lfs f8,16(r11)
	ctx.current_instruction = 0x88131224;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r5,r10
	ctx.current_instruction = 0x88131228;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfsu f7,16(r11)
	ctx.current_instruction = 0x8813122C;
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsx f8,r5,r10
	ctx.current_instruction = 0x88131230;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// blt cr6,0x881311c8
	if (ctx.cr6.lt) goto loc_881311C8;
loc_88131238:
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x88131278
	if (!ctx.cr6.lt) goto loc_88131278;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r9,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88131254:
	// subf r8,r9,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r9.u64;
	// lfs f0,4(r11)
	ctx.current_instruction = 0x88131258;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r10
	ctx.current_instruction = 0x88131268;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsu f13,4(r11)
	ctx.current_instruction = 0x8813126C;
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsx f0,r8,r10
	ctx.current_instruction = 0x88131270;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// bdnz 0x88131254
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88131254;
loc_88131278:
	// srawi r9,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 1;
	// lwz r10,56(r31)
	ctx.current_instruction = 0x8813127C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,80(r1)
	ctx.current_instruction = 0x88131290;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// cmpw cr6,r4,r29
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x881312cc
	if (!ctx.cr6.gt) goto loc_881312CC;
	// lhz r9,82(r1)
	ctx.current_instruction = 0x881312A4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r4,r6,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// b 0x881312f8
	goto loc_881312F8;
loc_881312CC:
	// lhz r9,84(r1)
	ctx.current_instruction = 0x881312CC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// lhz r7,82(r1)
	ctx.current_instruction = 0x881312D4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// subf r3,r29,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r29.u64;
	// subf r8,r5,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r5.u64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addze r8,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r8.s64 = temp.s64;
loc_881312F8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x881313ec
	if (ctx.cr6.lt) goto loc_881313EC;
	// addi r7,r8,-3
	ctx.r7.s64 = ctx.r8.s64 + -3;
loc_88131308:
	// fnmsubs f0,f31,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-std::fma(ctx.f31.f64, ctx.f30.f64, -ctx.f27.f64)));
	// lfs f5,0(r11)
	ctx.current_instruction = 0x8813130C;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f31,f29,f28
	ctx.f13.f64 = double(float(std::fma(ctx.f31.f64, ctx.f29.f64, ctx.f28.f64)));
	// lfs f3,0(r10)
	ctx.current_instruction = 0x88131314;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,-4(r11)
	ctx.current_instruction = 0x88131318;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f5,f29
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// fmuls f1,f3,f29
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f29.f64));
	// lfs f9,4(r10)
	ctx.current_instruction = 0x88131324;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fneg f7,f30
	ctx.f7.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// lfs f8,-8(r11)
	ctx.current_instruction = 0x8813132C;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,8(r10)
	ctx.current_instruction = 0x88131330;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfs f28,12(r10)
	ctx.current_instruction = 0x88131338;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// lfs f2,-12(r11)
	ctx.current_instruction = 0x8813133C;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f2.f64 = double(temp.f32);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// fmuls f27,f0,f10
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmadds f4,f3,f30,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f3.f64, ctx.f30.f64, ctx.f4.f64)));
	// stfs f4,0(r11)
	ctx.current_instruction = 0x88131350;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fneg f26,f13
	ctx.f26.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmadds f3,f7,f5,f1
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f5.f64, ctx.f1.f64)));
	// stfs f3,0(r10)
	ctx.current_instruction = 0x8813135C;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f25,f0,f9
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmadds f1,f13,f9,f27
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f27.f64)));
	// stfs f1,-4(r11)
	ctx.current_instruction = 0x8813136C;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fmadds f13,f0,f31,f30
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f31.f64, ctx.f30.f64)));
	// fnmsubs f0,f31,f12,f29
	ctx.f0.f64 = double(float(-std::fma(ctx.f31.f64, ctx.f12.f64, -ctx.f29.f64)));
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// fmadds f5,f26,f10,f25
	ctx.f5.f64 = double(float(std::fma(ctx.f26.f64, ctx.f10.f64, ctx.f25.f64)));
	// stfs f5,4(r10)
	ctx.current_instruction = 0x88131380;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmuls f4,f0,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fneg f3,f13
	ctx.f3.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f1,f0,f6
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmadds f13,f13,f6,f4
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, ctx.f4.f64)));
	// stfs f13,-8(r11)
	ctx.current_instruction = 0x881313A0;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// fmadds f13,f0,f31,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f31.f64, ctx.f9.f64)));
	// fnmsubs f0,f31,f12,f7
	ctx.f0.f64 = double(float(-std::fma(ctx.f31.f64, ctx.f12.f64, -ctx.f7.f64)));
	// fmadds f10,f3,f8,f1
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f8.f64, ctx.f1.f64)));
	// stfs f10,8(r10)
	ctx.current_instruction = 0x881313B0;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fneg f7,f13
	ctx.f7.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f8,f0,f28
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f9,f0,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// fmadds f30,f0,f31,f12
	ctx.f30.f64 = double(float(std::fma(ctx.f0.f64, ctx.f31.f64, ctx.f12.f64)));
	// fnmsubs f29,f31,f13,f11
	ctx.f29.f64 = double(float(-std::fma(ctx.f31.f64, ctx.f13.f64, -ctx.f11.f64)));
	// fmadds f5,f7,f2,f8
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f2.f64, ctx.f8.f64)));
	// stfs f5,12(r10)
	ctx.current_instruction = 0x881313D0;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f6,f13,f28,f9
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f28.f64, ctx.f9.f64)));
	// stfs f6,-12(r11)
	ctx.current_instruction = 0x881313D8;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x88131308
	if (ctx.cr6.lt) goto loc_88131308;
loc_881313EC:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88131444
	if (!ctx.cr6.lt) goto loc_88131444;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88131404:
	// lfs f12,4(r10)
	ctx.current_instruction = 0x88131404;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f30
	ctx.f11.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// lfs f10,-4(r11)
	ctx.current_instruction = 0x8813140C;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f29
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f8,f10,f29
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmadds f0,f31,f29,f28
	ctx.f0.f64 = double(float(std::fma(ctx.f31.f64, ctx.f29.f64, ctx.f28.f64)));
	// fnmsubs f13,f31,f30,f27
	ctx.f13.f64 = double(float(-std::fma(ctx.f31.f64, ctx.f30.f64, -ctx.f27.f64)));
	// fmr f28,f30
	ctx.f28.f64 = ctx.f30.f64;
	// fmr f27,f29
	ctx.f27.f64 = ctx.f29.f64;
	// fmadds f7,f11,f10,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f9.f64)));
	// stfsu f7,4(r10)
	ctx.current_instruction = 0x8813142C;
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f6,f12,f30,f8
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, ctx.f30.f64, ctx.f8.f64)));
	// stfsu f6,-4(r11)
	ctx.current_instruction = 0x88131434;
	ea = -4 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
	// bdnz 0x88131404
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88131404;
loc_88131444:
	// lhz r10,580(r28)
	ctx.current_instruction = 0x88131444;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 580);
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x88131130
	if (ctx.cr6.lt) goto loc_88131130;
loc_88131464:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x881ef2c0
	ctx.lr = 0x88131474;
	__restfpr_23(ctx, base);
loc_88131474:
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88148EE8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88148EE8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88148EE8;
	ctx.current_instruction = 0x88148EE8;
	PPCRegister temp{};
	uint32_t ea{};
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// sth r8,-2(r1)
	ctx.current_instruction = 0x88148EEC;
	REX_STORE_U16(ctx.r1.u32 + -2, ctx.r8.u16);
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vspltish v11,7
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x7)));
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v9,v10,7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_set1_epi16(short(0x100))));
	// vadduhm v11,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bne cr6,0x88149010
	if (!ctx.cr6.eq) goto loc_88149010;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,4
	ctx.r7.s64 = 4;
	// lvx128 v59,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v63,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v61,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// vperm128 v7,v62,v58,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v9,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_88148F6C:
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v6,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// lvx128 v62,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v4,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vperm128 v7,v63,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v3,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v1,v6,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v2,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v30,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vor v9,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v10,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vsubshs v31,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vadduhm v8,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v7,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vslh v29,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v28,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v27,v8,v29
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vpkshus128 v57,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vadduhm v26,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// stvewx128 v57,r0,r5
	ctx.current_instruction = 0x88148FCC;
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r5,r7
	ctx.current_instruction = 0x88148FD0;
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v25,v63,v62,v5
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v8,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vadduhm v24,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vsubshs v23,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v22,v23,v26
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vsrah v21,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v56,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// stvewx128 v56,r5,r6
	ctx.current_instruction = 0x88148FFC;
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stvewx128 v56,r9,r7
	ctx.current_instruction = 0x88149004;
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// bdnz 0x88148f6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88148F6C;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88149010:
	// lvx128 v55,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,8
	ctx.r7.s64 = 8;
	// lvx128 v53,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v55,v53,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v51,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// vperm128 v9,v52,v51,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v5,v54,v50,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v8,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_88149054:
	// lvx128 v49,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v2,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// lvx128 v48,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v3,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor128 v47,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vperm128 v4,v49,v48,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vslh v30,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vmrghb v1,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v2,v30
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v27,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vor v3,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v2,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// stvx128 v5,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v29,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v28,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v23,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v22,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsubshs v25,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubshs v24,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vor v7,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// lvx128 v4,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vadduhm v31,v25,v23
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v21,v24,v22
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vor v8,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vor128 v9,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// vsrah v20,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v6,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v5,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vpkshus128 v46,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vslh v17,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v14,v6,v17
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v15,v5,v18
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// stvx128 v46,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v44,v45,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v16,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v1,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrglb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v4,v15,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v6,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v16.u8));
	// vadduhm v30,v2,v5
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v31,v3,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsubshs v28,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v29,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vadduhm v26,v28,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v27,v29,v1
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsrah v24,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v43,v25,v24
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// stvx128 v43,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// bdnz 0x88149054
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88149054;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88151058) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88151058;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88151058) {
			switch (rex_dispatch_address) {
				case 0x8815108C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88151058;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815108C: goto loc_8815108C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8815105C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88151060;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88151064;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88151068;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r11,21912(r30)
	ctx.current_instruction = 0x88151080;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21912);
	// stw r11,0(r31)
	ctx.current_instruction = 0x88151084;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x880547a0
	ctx.lr = 0x8815108C;
	sub_880547A0(ctx, base);
loc_8815108C:
	// lwz r10,21888(r30)
	ctx.current_instruction = 0x8815108C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 21888);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,36(r31)
	ctx.current_instruction = 0x88151098;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// lwz r7,156(r30)
	ctx.current_instruction = 0x8815109C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 156);
	// stw r7,40(r31)
	ctx.current_instruction = 0x881510A0;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// lwz r6,160(r30)
	ctx.current_instruction = 0x881510A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 160);
	// stw r6,44(r31)
	ctx.current_instruction = 0x881510A8;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// lwz r5,14836(r30)
	ctx.current_instruction = 0x881510AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 14836);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// andc r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ~ctx.r5.u64;
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// stw r11,64(r31)
	ctx.current_instruction = 0x881510BC;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r10,22068(r30)
	ctx.current_instruction = 0x881510C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 22068);
	// stw r10,48(r31)
	ctx.current_instruction = 0x881510C4;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r9,22072(r30)
	ctx.current_instruction = 0x881510C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 22072);
	// stw r9,52(r31)
	ctx.current_instruction = 0x881510CC;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lwz r8,22076(r30)
	ctx.current_instruction = 0x881510D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 22076);
	// stw r8,56(r31)
	ctx.current_instruction = 0x881510D4;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// lwz r7,22080(r30)
	ctx.current_instruction = 0x881510D8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 22080);
	// stw r7,60(r31)
	ctx.current_instruction = 0x881510DC;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// lwz r6,21916(r30)
	ctx.current_instruction = 0x881510E0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 21916);
	// stw r6,68(r31)
	ctx.current_instruction = 0x881510E4;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// lwz r5,21924(r30)
	ctx.current_instruction = 0x881510E8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 21924);
	// stw r5,72(r31)
	ctx.current_instruction = 0x881510EC;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// lwz r4,21920(r30)
	ctx.current_instruction = 0x881510F0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 21920);
	// stw r4,76(r31)
	ctx.current_instruction = 0x881510F4;
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r4.u32);
	// lwz r3,21928(r30)
	ctx.current_instruction = 0x881510F8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 21928);
	// stw r3,80(r31)
	ctx.current_instruction = 0x881510FC;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88151104;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8815110C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88151110;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88155498) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88155498;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88155498) {
			switch (rex_dispatch_address) {
				case 0x881554A0:
				case 0x88155524:
				case 0x88155564:
				case 0x8815559C:
				case 0x881555BC:
				case 0x881555F8:
				case 0x8815560C:
				case 0x8815563C:
				case 0x88155650:
				case 0x88155688:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88155498;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881554A0: goto loc_881554A0;
		case 0x88155524: goto loc_88155524;
		case 0x88155564: goto loc_88155564;
		case 0x8815559C: goto loc_8815559C;
		case 0x881555BC: goto loc_881555BC;
		case 0x881555F8: goto loc_881555F8;
		case 0x8815560C: goto loc_8815560C;
		case 0x8815563C: goto loc_8815563C;
		case 0x88155650: goto loc_88155650;
		case 0x88155688: goto loc_88155688;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881554A0;
	__savegprlr_25(ctx, base);
loc_881554A0:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x881554A0;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// sth r28,0(r4)
	ctx.current_instruction = 0x881554B0;
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r28.u16);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r28,80(r1)
	ctx.current_instruction = 0x881554B8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,84(r1)
	ctx.current_instruction = 0x881554C0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r11,88(r1)
	ctx.current_instruction = 0x881554C4;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bne cr6,0x881554d8
	if (!ctx.cr6.eq) goto loc_881554D8;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_881554D8:
	// lwz r31,736(r3)
	ctx.current_instruction = 0x881554D8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 736);
	// lwz r11,24688(r31)
	ctx.current_instruction = 0x881554DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24688);
	// lwz r10,15616(r31)
	ctx.current_instruction = 0x881554E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15616);
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x881554fc
	if (!ctx.cr6.gt) goto loc_881554FC;
	// lwz r11,3460(r31)
	ctx.current_instruction = 0x881554F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3460);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3460(r31)
	ctx.current_instruction = 0x881554F8;
	REX_STORE_U32(ctx.r31.u32 + 3460, ctx.r11.u32);
loc_881554FC:
	// lhz r11,3740(r31)
	ctx.current_instruction = 0x881554FC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 3740);
	// stw r28,15616(r31)
	ctx.current_instruction = 0x88155500;
	REX_STORE_U32(ctx.r31.u32 + 15616, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88155528
	if (ctx.cr6.eq) goto loc_88155528;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,15568(r31)
	ctx.current_instruction = 0x88155510;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 15568);
	// lwz r6,15560(r31)
	ctx.current_instruction = 0x88155514;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 15560);
	// lhz r5,15556(r31)
	ctx.current_instruction = 0x88155518;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 15556);
	// lwz r4,15552(r31)
	ctx.current_instruction = 0x8815551C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15552);
	// bl 0x881544d0
	ctx.lr = 0x88155524;
	sub_881544D0(ctx, base);
loc_88155524:
	// sth r28,3740(r31)
	ctx.current_instruction = 0x88155524;
	REX_STORE_U16(ctx.r31.u32 + 3740, ctx.r28.u16);
loc_88155528:
	// lwz r11,15620(r31)
	ctx.current_instruction = 0x88155528;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15620);
	// rlwinm r10,r11,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF0000000;
	// srawi. r11,r10,28
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 28;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x88155544
	if (ctx.cr0.lt) goto loc_88155544;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x88155544
	if (ctx.cr6.gt) goto loc_88155544;
	// stw r11,3700(r31)
	ctx.current_instruction = 0x88155540;
	REX_STORE_U32(ctx.r31.u32 + 3700, ctx.r11.u32);
loc_88155544:
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r3,3376(r31)
	ctx.current_instruction = 0x88155548;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x88185458
	ctx.lr = 0x88155564;
	sub_88185458(ctx, base);
loc_88155564:
	// lwz r11,88(r1)
	ctx.current_instruction = 0x88155564;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88155668
	if (ctx.cr6.eq) goto loc_88155668;
loc_88155570:
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x88155570;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x881555c8
	if (!ctx.cr6.eq) goto loc_881555C8;
	// lwz r5,80(r1)
	ctx.current_instruction = 0x8815557C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r29,r30,r5
	ctx.r29.u64 = ctx.r30.u64 + ctx.r5.u64;
	// cmplwi cr6,r29,64
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 64, ctx.xer);
	// bge cr6,0x881555cc
	if (!ctx.cr6.lt) goto loc_881555CC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.current_instruction = 0x88155590;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x880547a0
	ctx.lr = 0x8815559C;
	sub_880547A0(ctx, base);
loc_8815559C:
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,3376(r31)
	ctx.current_instruction = 0x881555A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x88185458
	ctx.lr = 0x881555BC;
	sub_88185458(ctx, base);
loc_881555BC:
	// lwz r11,88(r1)
	ctx.current_instruction = 0x881555BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88155570
	if (!ctx.cr6.eq) goto loc_88155570;
loc_881555C8:
	// lwz r5,80(r1)
	ctx.current_instruction = 0x881555C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_881555CC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8815566c
	if (ctx.cr6.eq) goto loc_8815566C;
	// lwz r11,23968(r31)
	ctx.current_instruction = 0x881555D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 23968);
	// add r29,r30,r5
	ctx.r29.u64 = ctx.r30.u64 + ctx.r5.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8815562c
	if (!ctx.cr6.gt) goto loc_8815562C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881555f8
	if (ctx.cr6.eq) goto loc_881555F8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,23972(r31)
	ctx.current_instruction = 0x881555F0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 23972);
	// bl 0x8815e528
	ctx.lr = 0x881555F8;
	sub_8815E528(ctx, base);
loc_881555F8:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,18168
	ctx.r5.s64 = ctx.r11.s64 + 18168;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8815e468
	ctx.lr = 0x8815560C;
	sub_8815E468(ctx, base);
loc_8815560C:
	// stw r3,23972(r31)
	ctx.current_instruction = 0x8815560C;
	REX_STORE_U32(ctx.r31.u32 + 23972, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88155628
	if (!ctx.cr6.eq) goto loc_88155628;
	// li r3,-9
	ctx.r3.s64 = -9;
	// stw r28,23968(r31)
	ctx.current_instruction = 0x8815561C;
	REX_STORE_U32(ctx.r31.u32 + 23968, ctx.r28.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88155628:
	// stw r29,23968(r31)
	ctx.current_instruction = 0x88155628;
	REX_STORE_U32(ctx.r31.u32 + 23968, ctx.r29.u32);
loc_8815562C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,23972(r31)
	ctx.current_instruction = 0x88155630;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 23972);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x881ece80
	ctx.lr = 0x8815563C;
	sub_881ECE80(ctx, base);
loc_8815563C:
	// lwz r11,23972(r31)
	ctx.current_instruction = 0x8815563C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 23972);
	// lwz r5,80(r1)
	ctx.current_instruction = 0x88155640;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,84(r1)
	ctx.current_instruction = 0x88155648;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x881ece80
	ctx.lr = 0x88155650;
	sub_881ECE80(ctx, base);
loc_88155650:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88155650;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r5,80(r1)
	ctx.current_instruction = 0x88155658;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r10,23972(r31)
	ctx.current_instruction = 0x8815565C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 23972);
	// stw r10,84(r1)
	ctx.current_instruction = 0x88155660;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// b 0x8815566c
	goto loc_8815566C;
loc_88155668:
	// lwz r5,80(r1)
	ctx.current_instruction = 0x88155668;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8815566C:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,88(r1)
	ctx.current_instruction = 0x88155670;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r4,84(r1)
	ctx.current_instruction = 0x88155678;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88152228
	ctx.lr = 0x88155688;
	sub_88152228(ctx, base);
loc_88155688:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815D0C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815D0C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815D0C0) {
			switch (rex_dispatch_address) {
				case 0x8815D0C8:
				case 0x8815D174:
				case 0x8815D184:
				case 0x8815D1F0:
				case 0x8815D1F8:
				case 0x8815D208:
				case 0x8815D21C:
				case 0x8815D224:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815D0C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815D0C8: goto loc_8815D0C8;
		case 0x8815D174: goto loc_8815D174;
		case 0x8815D184: goto loc_8815D184;
		case 0x8815D1F0: goto loc_8815D1F0;
		case 0x8815D1F8: goto loc_8815D1F8;
		case 0x8815D208: goto loc_8815D208;
		case 0x8815D21C: goto loc_8815D21C;
		case 0x8815D224: goto loc_8815D224;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8815D0C8;
	__savegprlr_27(ctx, base);
loc_8815D0C8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8815D0C8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815d224
	if (ctx.cr6.eq) goto loc_8815D224;
	// lwz r11,28(r3)
	ctx.current_instruction = 0x8815D0D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8815d1e8
	if (ctx.cr6.eq) goto loc_8815D1E8;
	// lwz r11,12(r3)
	ctx.current_instruction = 0x8815D0E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8815d100
	if (!ctx.cr6.eq) goto loc_8815D100;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x8815d118
	goto loc_8815D118;
loc_8815D100:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r28)
	ctx.current_instruction = 0x8815D104;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r28)
	ctx.current_instruction = 0x8815D10C;
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwzx r31,r10,r9
	ctx.current_instruction = 0x8815D110;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r30,r10,r9
	ctx.current_instruction = 0x8815D114;
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
loc_8815D118:
	// lwz r11,24(r27)
	ctx.current_instruction = 0x8815D118;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// addi r29,r27,16
	ctx.r29.s64 = ctx.r27.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8815d130
	if (!ctx.cr6.eq) goto loc_8815D130;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8815d148
	goto loc_8815D148;
loc_8815D130:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r29)
	ctx.current_instruction = 0x8815D134;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r29)
	ctx.current_instruction = 0x8815D13C;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwzx r11,r10,r9
	ctx.current_instruction = 0x8815D140;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r30,r10,r9
	ctx.current_instruction = 0x8815D144;
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
loc_8815D148:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8815d1e8
	if (ctx.cr6.eq) goto loc_8815D1E8;
loc_8815D154:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815d174
	if (ctx.cr6.eq) goto loc_8815D174;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,45872
	ctx.r5.u64 = ctx.r5.u64 | 45872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88052d90
	ctx.lr = 0x8815D174;
	sub_88052D90(ctx, base);
loc_8815D174:
	// lwz r11,36(r27)
	ctx.current_instruction = 0x8815D174;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8815e528
	ctx.lr = 0x8815D184;
	sub_8815E528(ctx, base);
loc_8815D184:
	// lwz r11,8(r28)
	ctx.current_instruction = 0x8815D184;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8815d198
	if (!ctx.cr6.eq) goto loc_8815D198;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x8815d1b0
	goto loc_8815D1B0;
loc_8815D198:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r28)
	ctx.current_instruction = 0x8815D19C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,8(r28)
	ctx.current_instruction = 0x8815D1A0;
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.current_instruction = 0x8815D1A8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r30,r11,r10
	ctx.current_instruction = 0x8815D1AC;
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
loc_8815D1B0:
	// lwz r11,8(r29)
	ctx.current_instruction = 0x8815D1B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8815d1c4
	if (!ctx.cr6.eq) goto loc_8815D1C4;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// b 0x8815d1dc
	goto loc_8815D1DC;
loc_8815D1C4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r29)
	ctx.current_instruction = 0x8815D1C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,8(r29)
	ctx.current_instruction = 0x8815D1CC;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.current_instruction = 0x8815D1D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r30,r11,r10
	ctx.current_instruction = 0x8815D1D8;
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
loc_8815D1DC:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8815d154
	if (!ctx.cr6.eq) goto loc_8815D154;
loc_8815D1E8:
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// bl 0x881c4560
	ctx.lr = 0x8815D1F0;
	sub_881C4560(ctx, base);
loc_8815D1F0:
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// bl 0x881c4560
	ctx.lr = 0x8815D1F8;
	sub_881C4560(ctx, base);
loc_8815D1F8:
	// lwz r3,0(r27)
	ctx.current_instruction = 0x8815D1F8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815d20c
	if (ctx.cr6.eq) goto loc_8815D20C;
	// bl 0x8815ba70
	ctx.lr = 0x8815D208;
	sub_8815BA70(ctx, base);
loc_8815D208:
	// stw r30,0(r27)
	ctx.current_instruction = 0x8815D208;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
loc_8815D20C:
	// lwz r11,36(r27)
	ctx.current_instruction = 0x8815D20C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x88061460
	ctx.lr = 0x8815D21C;
	sub_88061460(ctx, base);
loc_8815D21C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88052278
	ctx.lr = 0x8815D224;
	sub_88052278(ctx, base);
loc_8815D224:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881610A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881610A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881610A8) {
			switch (rex_dispatch_address) {
				case 0x881610D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881610A8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881610D0: goto loc_881610D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881610AC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881610B0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881610B4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881610B8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,3764
	ctx.r30.s64 = ctx.r3.s64 + 3764;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,3760
	ctx.r3.s64 = ctx.r3.s64 + 3760;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88171680
	ctx.lr = 0x881610D0;
	sub_88171680(ctx, base);
loc_881610D0:
	// lwz r11,3760(r31)
	ctx.current_instruction = 0x881610D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881610f4
	if (ctx.cr6.eq) goto loc_881610F4;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881610DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,3832(r31)
	ctx.current_instruction = 0x881610E0;
	REX_STORE_U32(ctx.r31.u32 + 3832, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x881610E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,3836(r31)
	ctx.current_instruction = 0x881610E8;
	REX_STORE_U32(ctx.r31.u32 + 3836, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.current_instruction = 0x881610EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,3840(r31)
	ctx.current_instruction = 0x881610F0;
	REX_STORE_U32(ctx.r31.u32 + 3840, ctx.r8.u32);
loc_881610F4:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x881610F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88161118
	if (ctx.cr6.eq) goto loc_88161118;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88161100;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,3844(r31)
	ctx.current_instruction = 0x88161104;
	REX_STORE_U32(ctx.r31.u32 + 3844, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x88161108;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,3848(r31)
	ctx.current_instruction = 0x8816110C;
	REX_STORE_U32(ctx.r31.u32 + 3848, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.current_instruction = 0x88161110;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,3852(r31)
	ctx.current_instruction = 0x88161114;
	REX_STORE_U32(ctx.r31.u32 + 3852, ctx.r8.u32);
loc_88161118:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8816111C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88161124;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88161128;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88165A18) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88165A18);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88165A18;
	ctx.current_instruction = 0x88165A18;
	// lwz r11,1832(r3)
	ctx.current_instruction = 0x88165A18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1832);
	// lwz r10,1840(r3)
	ctx.current_instruction = 0x88165A1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1840);
	// lwz r9,1844(r3)
	ctx.current_instruction = 0x88165A20;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1844);
	// lwz r8,1868(r3)
	ctx.current_instruction = 0x88165A24;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1868);
	// lwz r7,1792(r3)
	ctx.current_instruction = 0x88165A28;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1792);
	// stw r11,1836(r3)
	ctx.current_instruction = 0x88165A2C;
	REX_STORE_U32(ctx.r3.u32 + 1836, ctx.r11.u32);
	// stw r10,1856(r3)
	ctx.current_instruction = 0x88165A30;
	REX_STORE_U32(ctx.r3.u32 + 1856, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r9,1860(r3)
	ctx.current_instruction = 0x88165A38;
	REX_STORE_U32(ctx.r3.u32 + 1860, ctx.r9.u32);
	// stw r8,1864(r3)
	ctx.current_instruction = 0x88165A3C;
	REX_STORE_U32(ctx.r3.u32 + 1864, ctx.r8.u32);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,1828(r3)
	ctx.current_instruction = 0x88165A44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1828);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,1848(r3)
	ctx.current_instruction = 0x88165A4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1848);
	// lwz r8,1852(r3)
	ctx.current_instruction = 0x88165A50;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1852);
	// lwz r7,1872(r3)
	ctx.current_instruction = 0x88165A54;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1872);
	// stw r10,1800(r3)
	ctx.current_instruction = 0x88165A58;
	REX_STORE_U32(ctx.r3.u32 + 1800, ctx.r10.u32);
	// stw r11,1836(r3)
	ctx.current_instruction = 0x88165A5C;
	REX_STORE_U32(ctx.r3.u32 + 1836, ctx.r11.u32);
	// stw r9,1856(r3)
	ctx.current_instruction = 0x88165A60;
	REX_STORE_U32(ctx.r3.u32 + 1856, ctx.r9.u32);
	// stw r8,1860(r3)
	ctx.current_instruction = 0x88165A64;
	REX_STORE_U32(ctx.r3.u32 + 1860, ctx.r8.u32);
	// stw r7,1864(r3)
	ctx.current_instruction = 0x88165A68;
	REX_STORE_U32(ctx.r3.u32 + 1864, ctx.r7.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88166648) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88166648);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88166648;
	ctx.current_instruction = 0x88166648;
	// lwz r10,15364(r3)
	ctx.current_instruction = 0x88166648;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15364);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-3
	ctx.r9.s64 = -3;
	// stw r11,288(r3)
	ctx.current_instruction = 0x88166654;
	REX_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,3412(r3)
	ctx.current_instruction = 0x8816665C;
	REX_STORE_U32(ctx.r3.u32 + 3412, ctx.r9.u32);
	// stw r11,3416(r3)
	ctx.current_instruction = 0x88166660;
	REX_STORE_U32(ctx.r3.u32 + 3416, ctx.r11.u32);
	// stw r11,3432(r3)
	ctx.current_instruction = 0x88166664;
	REX_STORE_U32(ctx.r3.u32 + 3432, ctx.r11.u32);
	// beq cr6,0x88166680
	if (ctx.cr6.eq) goto loc_88166680;
	// stw r11,14852(r3)
	ctx.current_instruction = 0x8816666C;
	REX_STORE_U32(ctx.r3.u32 + 14852, ctx.r11.u32);
	// stw r11,3420(r3)
	ctx.current_instruction = 0x88166670;
	REX_STORE_U32(ctx.r3.u32 + 3420, ctx.r11.u32);
	// stw r11,3436(r3)
	ctx.current_instruction = 0x88166674;
	REX_STORE_U32(ctx.r3.u32 + 3436, ctx.r11.u32);
	// stw r11,22136(r3)
	ctx.current_instruction = 0x88166678;
	REX_STORE_U32(ctx.r3.u32 + 22136, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88166680:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,3420(r3)
	ctx.current_instruction = 0x88166684;
	REX_STORE_U32(ctx.r3.u32 + 3420, ctx.r11.u32);
	// stw r11,3436(r3)
	ctx.current_instruction = 0x88166688;
	REX_STORE_U32(ctx.r3.u32 + 3436, ctx.r11.u32);
	// stw r10,14852(r3)
	ctx.current_instruction = 0x8816668C;
	REX_STORE_U32(ctx.r3.u32 + 14852, ctx.r10.u32);
	// stw r11,22136(r3)
	ctx.current_instruction = 0x88166690;
	REX_STORE_U32(ctx.r3.u32 + 22136, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8816AD70) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8816AD70;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8816AD70) {
			switch (rex_dispatch_address) {
				case 0x8816AD78:
				case 0x8816ADA8:
				case 0x8816AE7C:
				case 0x8816AEE4:
				case 0x8816AF24:
				case 0x8816AF68:
				case 0x8816AF74:
				case 0x8816AFC0:
				case 0x8816B014:
				case 0x8816B034:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8816AD70;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8816AD78: goto loc_8816AD78;
		case 0x8816ADA8: goto loc_8816ADA8;
		case 0x8816AE7C: goto loc_8816AE7C;
		case 0x8816AEE4: goto loc_8816AEE4;
		case 0x8816AF24: goto loc_8816AF24;
		case 0x8816AF68: goto loc_8816AF68;
		case 0x8816AF74: goto loc_8816AF74;
		case 0x8816AFC0: goto loc_8816AFC0;
		case 0x8816B014: goto loc_8816B014;
		case 0x8816B034: goto loc_8816B034;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8816AD78;
	__savegprlr_25(ctx, base);
loc_8816AD78:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x8816AD78;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,14892(r3)
	ctx.current_instruction = 0x8816AD7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14892);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,14888(r3)
	ctx.current_instruction = 0x8816AD84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14888);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8816b03c
	if (ctx.cr6.eq) goto loc_8816B03C;
	// lwz r10,14836(r3)
	ctx.current_instruction = 0x8816AD90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14836);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8816ada8
	if (ctx.cr6.eq) goto loc_8816ADA8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8816ada8
	if (!ctx.cr6.eq) goto loc_8816ADA8;
	// bl 0x881664c0
	ctx.lr = 0x8816ADA8;
	sub_881664C0(ctx, base);
loc_8816ADA8:
	// lwz r6,288(r31)
	ctx.current_instruction = 0x8816ADA8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8816adbc
	if (ctx.cr6.eq) goto loc_8816ADBC;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bne cr6,0x8816ade8
	if (!ctx.cr6.eq) goto loc_8816ADE8;
loc_8816ADBC:
	// lwz r9,3776(r31)
	ctx.current_instruction = 0x8816ADBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// lwz r10,220(r31)
	ctx.current_instruction = 0x8816ADC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r11,224(r31)
	ctx.current_instruction = 0x8816ADC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r8,3780(r31)
	ctx.current_instruction = 0x8816ADC8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,3784(r31)
	ctx.current_instruction = 0x8816ADD0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,3856(r31)
	ctx.current_instruction = 0x8816ADD8;
	REX_STORE_U32(ctx.r31.u32 + 3856, ctx.r10.u32);
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r9,3860(r31)
	ctx.current_instruction = 0x8816ADE0;
	REX_STORE_U32(ctx.r31.u32 + 3860, ctx.r9.u32);
	// stw r8,3864(r31)
	ctx.current_instruction = 0x8816ADE4;
	REX_STORE_U32(ctx.r31.u32 + 3864, ctx.r8.u32);
loc_8816ADE8:
	// lwz r11,14836(r31)
	ctx.current_instruction = 0x8816ADE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8816ae04
	if (!ctx.cr6.eq) goto loc_8816AE04;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8816ae04
	if (ctx.cr6.eq) goto loc_8816AE04;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x8816b03c
	if (!ctx.cr6.eq) goto loc_8816B03C;
loc_8816AE04:
	// lwz r10,14892(r31)
	ctx.current_instruction = 0x8816AE04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// lwz r9,14888(r31)
	ctx.current_instruction = 0x8816AE08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 14888);
	// mulli r11,r10,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(84));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// lwz r29,14964(r11)
	ctx.current_instruction = 0x8816AE18;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 14964);
	// lwz r30,14968(r11)
	ctx.current_instruction = 0x8816AE1C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 14968);
	// ble cr6,0x8816af28
	if (!ctx.cr6.gt) goto loc_8816AF28;
	// lwz r10,152(r31)
	ctx.current_instruction = 0x8816AE24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8816aee4
	if (!ctx.cr6.eq) goto loc_8816AEE4;
	// lwz r10,20680(r31)
	ctx.current_instruction = 0x8816AE30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r28,14948(r11)
	ctx.current_instruction = 0x8816AE38;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 14948);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r27,14920(r11)
	ctx.current_instruction = 0x8816AE40;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 14920);
	// cntlzw r6,r10
	ctx.r6.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r26,15920(r31)
	ctx.current_instruction = 0x8816AE48;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 15920);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// rlwinm r25,r6,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lwz r10,14896(r11)
	ctx.current_instruction = 0x8816AE54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14896);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,14904(r11)
	ctx.current_instruction = 0x8816AE5C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 14904);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,3788(r31)
	ctx.current_instruction = 0x8816AE64;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3788);
	// stw r28,92(r1)
	ctx.current_instruction = 0x8816AE68;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// stw r27,84(r1)
	ctx.current_instruction = 0x8816AE70;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r25,100(r1)
	ctx.current_instruction = 0x8816AE74;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// bctrl 
	ctx.lr = 0x8816AE7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8816AE7C:
	// lwz r11,14892(r31)
	ctx.current_instruction = 0x8816AE7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,20680(r31)
	ctx.current_instruction = 0x8816AE84;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r11,178
	ctx.r3.s64 = ctx.r11.s64 + 178;
	// lwz r5,3796(r31)
	ctx.current_instruction = 0x8816AE90;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// mulli r7,r11,84
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// lwz r4,3792(r31)
	ctx.current_instruction = 0x8816AE98;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// add r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lwz r7,15916(r31)
	ctx.current_instruction = 0x8816AEA0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 15916);
	// mulli r6,r3,84
	ctx.r6.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(84));
	// lwz r3,14924(r11)
	ctx.current_instruction = 0x8816AEA8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 14924);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwzx r6,r6,r31
	ctx.current_instruction = 0x8816AEB0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lwz r28,14900(r11)
	ctx.current_instruction = 0x8816AEB4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 14900);
	// lwz r7,14908(r11)
	ctx.current_instruction = 0x8816AEB8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 14908);
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r3,92(r1)
	ctx.current_instruction = 0x8816AEC0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r6,100(r1)
	ctx.current_instruction = 0x8816AECC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,84(r1)
	ctx.current_instruction = 0x8816AED4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,108(r1)
	ctx.current_instruction = 0x8816AEDC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8816AEE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8816AEE4:
	// lwz r11,224(r31)
	ctx.current_instruction = 0x8816AEE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,3784(r31)
	ctx.current_instruction = 0x8816AEEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r8,3780(r31)
	ctx.current_instruction = 0x8816AEF0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r5,220(r31)
	ctx.current_instruction = 0x8816AEF4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,3776(r31)
	ctx.current_instruction = 0x8816AEFC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r6,3796(r31)
	ctx.current_instruction = 0x8816AF04;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// lwz r10,3792(r31)
	ctx.current_instruction = 0x8816AF08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lwz r11,3788(r31)
	ctx.current_instruction = 0x8816AF10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3788);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x881b08e8
	ctx.lr = 0x8816AF24;
	sub_881B08E8(ctx, base);
loc_8816AF24:
	// b 0x8816af68
	goto loc_8816AF68;
loc_8816AF28:
	// lwz r11,224(r31)
	ctx.current_instruction = 0x8816AF28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,3784(r31)
	ctx.current_instruction = 0x8816AF30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r8,3780(r31)
	ctx.current_instruction = 0x8816AF34;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r5,220(r31)
	ctx.current_instruction = 0x8816AF38;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,3776(r31)
	ctx.current_instruction = 0x8816AF40;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r6,3796(r31)
	ctx.current_instruction = 0x8816AF48;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// lwz r10,3792(r31)
	ctx.current_instruction = 0x8816AF4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lwz r11,3788(r31)
	ctx.current_instruction = 0x8816AF54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3788);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x881b1680
	ctx.lr = 0x8816AF68;
	sub_881B1680(ctx, base);
loc_8816AF68:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88167b48
	ctx.lr = 0x8816AF74;
	sub_88167B48(ctx, base);
loc_8816AF74:
	// lwz r11,20680(r31)
	ctx.current_instruction = 0x8816AF74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,164(r31)
	ctx.current_instruction = 0x8816AF7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r7,220(r31)
	ctx.current_instruction = 0x8816AF84;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,172(r31)
	ctx.current_instruction = 0x8816AF8C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r4,3788(r31)
	ctx.current_instruction = 0x8816AF94;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3788);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8816AFA0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r30,204(r31)
	ctx.current_instruction = 0x8816AFA4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r29,184(r31)
	ctx.current_instruction = 0x8816AFA8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r28,15920(r31)
	ctx.current_instruction = 0x8816AFAC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 15920);
	// stw r30,92(r1)
	ctx.current_instruction = 0x8816AFB0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r29,84(r1)
	ctx.current_instruction = 0x8816AFB4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8816AFC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8816AFC0:
	// lwz r11,20680(r31)
	ctx.current_instruction = 0x8816AFC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,224(r31)
	ctx.current_instruction = 0x8816AFCC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r7,176(r31)
	ctx.current_instruction = 0x8816AFD4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,3796(r31)
	ctx.current_instruction = 0x8816AFDC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r4,3792(r31)
	ctx.current_instruction = 0x8816AFE4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,108(r1)
	ctx.current_instruction = 0x8816AFEC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r30,208(r31)
	ctx.current_instruction = 0x8816AFF0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r29,196(r31)
	ctx.current_instruction = 0x8816AFF4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r28,168(r31)
	ctx.current_instruction = 0x8816AFF8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r27,15916(r31)
	ctx.current_instruction = 0x8816AFFC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 15916);
	// stw r30,100(r1)
	ctx.current_instruction = 0x8816B000;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r29,92(r1)
	ctx.current_instruction = 0x8816B004;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r28,84(r1)
	ctx.current_instruction = 0x8816B008;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8816B014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8816B014:
	// lwz r10,15628(r31)
	ctx.current_instruction = 0x8816B014;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15628);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8816b03c
	if (!ctx.cr6.eq) goto loc_8816B03C;
	// lwz r11,14892(r31)
	ctx.current_instruction = 0x8816B020;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8816b03c
	if (!ctx.cr6.eq) goto loc_8816B03C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88166278
	ctx.lr = 0x8816B034;
	sub_88166278(ctx, base);
loc_8816B034:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,15628(r31)
	ctx.current_instruction = 0x8816B038;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r11.u32);
loc_8816B03C:
	// lwz r11,14888(r31)
	ctx.current_instruction = 0x8816B03C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14888);
	// stw r11,14892(r31)
	ctx.current_instruction = 0x8816B040;
	REX_STORE_U32(ctx.r31.u32 + 14892, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88176D18) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88176D18);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88176D18;
	ctx.current_instruction = 0x88176D18;
	uint32_t ea{};
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// stb r7,-16(r1)
	ctx.current_instruction = 0x88176D1C;
	REX_STORE_U8(ctx.r1.u32 + -16, ctx.r7.u8);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// srawi. r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r9,r6,28
	ctx.r9.u64 = ctx.r6.u32 & 0xF;
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltb v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi8(char(0xF))));
	// ble 0x88176d60
	if (!ctx.cr0.gt) goto loc_88176D60;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88176D3C:
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lvx128 v12,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// vaddubs v11,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddubs v10,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v10,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x88176d3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88176D3C;
loc_88176D60:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r8,r11,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r6,r11,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r11.u64;
loc_88176D74:
	// lbzx r10,r8,r11
	ctx.current_instruction = 0x88176D74;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbz r9,0(r11)
	ctx.current_instruction = 0x88176D78;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x88176d90
	if (!ctx.cr6.gt) goto loc_88176D90;
	// li r10,255
	ctx.r10.s64 = 255;
loc_88176D90:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r6,r11
	ctx.current_instruction = 0x88176D94;
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88176d74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88176D74;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88177CF0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88177CF0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88177CF0) {
			switch (rex_dispatch_address) {
				case 0x88177CF8:
				case 0x88177D44:
				case 0x88177D54:
				case 0x88177D84:
				case 0x88177D94:
				case 0x88177DC4:
				case 0x88177DD4:
				case 0x88177E04:
				case 0x88177E14:
				case 0x88177E44:
				case 0x88177E54:
				case 0x88177E84:
				case 0x88177E94:
				case 0x88177EC4:
				case 0x88177ED4:
				case 0x88177EF4:
				case 0x88177F08:
				case 0x88177F1C:
				case 0x88177F30:
				case 0x88177F44:
				case 0x88177F58:
				case 0x88177F6C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88177CF0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88177CF8: goto loc_88177CF8;
		case 0x88177D44: goto loc_88177D44;
		case 0x88177D54: goto loc_88177D54;
		case 0x88177D84: goto loc_88177D84;
		case 0x88177D94: goto loc_88177D94;
		case 0x88177DC4: goto loc_88177DC4;
		case 0x88177DD4: goto loc_88177DD4;
		case 0x88177E04: goto loc_88177E04;
		case 0x88177E14: goto loc_88177E14;
		case 0x88177E44: goto loc_88177E44;
		case 0x88177E54: goto loc_88177E54;
		case 0x88177E84: goto loc_88177E84;
		case 0x88177E94: goto loc_88177E94;
		case 0x88177EC4: goto loc_88177EC4;
		case 0x88177ED4: goto loc_88177ED4;
		case 0x88177EF4: goto loc_88177EF4;
		case 0x88177F08: goto loc_88177F08;
		case 0x88177F1C: goto loc_88177F1C;
		case 0x88177F30: goto loc_88177F30;
		case 0x88177F44: goto loc_88177F44;
		case 0x88177F58: goto loc_88177F58;
		case 0x88177F6C: goto loc_88177F6C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88177CF8;
	__savegprlr_27(ctx, base);
loc_88177CF8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88177CF8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// ble cr6,0x88177f7c
	if (!ctx.cr6.gt) goto loc_88177F7C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x88177f7c
	if (!ctx.cr6.gt) goto loc_88177F7C;
	// lwz r3,20(r3)
	ctx.current_instruction = 0x88177D20;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177d48
	if (ctx.cr6.eq) goto loc_88177D48;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88177D2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88177d60
	if (!ctx.cr6.lt) goto loc_88177D60;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177d48
	if (ctx.cr6.eq) goto loc_88177D48;
	// bl 0x8815ba70
	ctx.lr = 0x88177D44;
	sub_8815BA70(ctx, base);
loc_88177D44:
	// stw r29,20(r31)
	ctx.current_instruction = 0x88177D44;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_88177D48:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815b9f8
	ctx.lr = 0x88177D54;
	sub_8815B9F8(ctx, base);
loc_88177D54:
	// stw r3,20(r31)
	ctx.current_instruction = 0x88177D54;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ee0
	if (ctx.cr6.eq) goto loc_88177EE0;
loc_88177D60:
	// lwz r3,24(r31)
	ctx.current_instruction = 0x88177D60;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177d88
	if (ctx.cr6.eq) goto loc_88177D88;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88177D6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x88177da0
	if (!ctx.cr6.lt) goto loc_88177DA0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177d88
	if (ctx.cr6.eq) goto loc_88177D88;
	// bl 0x8815ba70
	ctx.lr = 0x88177D84;
	sub_8815BA70(ctx, base);
loc_88177D84:
	// stw r29,24(r31)
	ctx.current_instruction = 0x88177D84;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_88177D88:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815b9f8
	ctx.lr = 0x88177D94;
	sub_8815B9F8(ctx, base);
loc_88177D94:
	// stw r3,24(r31)
	ctx.current_instruction = 0x88177D94;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ee0
	if (ctx.cr6.eq) goto loc_88177EE0;
loc_88177DA0:
	// lwz r3,28(r31)
	ctx.current_instruction = 0x88177DA0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177dc8
	if (ctx.cr6.eq) goto loc_88177DC8;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88177DAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x88177de0
	if (!ctx.cr6.lt) goto loc_88177DE0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177dc8
	if (ctx.cr6.eq) goto loc_88177DC8;
	// bl 0x8815ba70
	ctx.lr = 0x88177DC4;
	sub_8815BA70(ctx, base);
loc_88177DC4:
	// stw r29,28(r31)
	ctx.current_instruction = 0x88177DC4;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_88177DC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815b9f8
	ctx.lr = 0x88177DD4;
	sub_8815B9F8(ctx, base);
loc_88177DD4:
	// stw r3,28(r31)
	ctx.current_instruction = 0x88177DD4;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ee0
	if (ctx.cr6.eq) goto loc_88177EE0;
loc_88177DE0:
	// lwz r3,32(r31)
	ctx.current_instruction = 0x88177DE0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177e08
	if (ctx.cr6.eq) goto loc_88177E08;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88177DEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x88177e20
	if (!ctx.cr6.lt) goto loc_88177E20;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177e08
	if (ctx.cr6.eq) goto loc_88177E08;
	// bl 0x8815ba70
	ctx.lr = 0x88177E04;
	sub_8815BA70(ctx, base);
loc_88177E04:
	// stw r29,32(r31)
	ctx.current_instruction = 0x88177E04;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_88177E08:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815b9f8
	ctx.lr = 0x88177E14;
	sub_8815B9F8(ctx, base);
loc_88177E14:
	// stw r3,32(r31)
	ctx.current_instruction = 0x88177E14;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ee0
	if (ctx.cr6.eq) goto loc_88177EE0;
loc_88177E20:
	// lwz r3,60(r31)
	ctx.current_instruction = 0x88177E20;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177e48
	if (ctx.cr6.eq) goto loc_88177E48;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88177E2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x88177e60
	if (!ctx.cr6.lt) goto loc_88177E60;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177e48
	if (ctx.cr6.eq) goto loc_88177E48;
	// bl 0x8815ba70
	ctx.lr = 0x88177E44;
	sub_8815BA70(ctx, base);
loc_88177E44:
	// stw r29,60(r31)
	ctx.current_instruction = 0x88177E44;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
loc_88177E48:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8815b9f8
	ctx.lr = 0x88177E54;
	sub_8815B9F8(ctx, base);
loc_88177E54:
	// stw r3,60(r31)
	ctx.current_instruction = 0x88177E54;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ee0
	if (ctx.cr6.eq) goto loc_88177EE0;
loc_88177E60:
	// lwz r3,64(r31)
	ctx.current_instruction = 0x88177E60;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177e88
	if (ctx.cr6.eq) goto loc_88177E88;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88177E6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x88177ea0
	if (!ctx.cr6.lt) goto loc_88177EA0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177e88
	if (ctx.cr6.eq) goto loc_88177E88;
	// bl 0x8815ba70
	ctx.lr = 0x88177E84;
	sub_8815BA70(ctx, base);
loc_88177E84:
	// stw r29,64(r31)
	ctx.current_instruction = 0x88177E84;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
loc_88177E88:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815b9f8
	ctx.lr = 0x88177E94;
	sub_8815B9F8(ctx, base);
loc_88177E94:
	// stw r3,64(r31)
	ctx.current_instruction = 0x88177E94;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ee0
	if (ctx.cr6.eq) goto loc_88177EE0;
loc_88177EA0:
	// lwz r3,68(r31)
	ctx.current_instruction = 0x88177EA0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ec8
	if (ctx.cr6.eq) goto loc_88177EC8;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88177EAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x88177f70
	if (!ctx.cr6.lt) goto loc_88177F70;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ec8
	if (ctx.cr6.eq) goto loc_88177EC8;
	// bl 0x8815ba70
	ctx.lr = 0x88177EC4;
	sub_8815BA70(ctx, base);
loc_88177EC4:
	// stw r29,68(r31)
	ctx.current_instruction = 0x88177EC4;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
loc_88177EC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815b9f8
	ctx.lr = 0x88177ED4;
	sub_8815B9F8(ctx, base);
loc_88177ED4:
	// stw r3,68(r31)
	ctx.current_instruction = 0x88177ED4;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88177f70
	if (!ctx.cr6.eq) goto loc_88177F70;
loc_88177EE0:
	// lwz r3,20(r31)
	ctx.current_instruction = 0x88177EE0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r27,-9
	ctx.r27.s64 = -9;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ef8
	if (ctx.cr6.eq) goto loc_88177EF8;
	// bl 0x8815ba70
	ctx.lr = 0x88177EF4;
	sub_8815BA70(ctx, base);
loc_88177EF4:
	// stw r29,20(r31)
	ctx.current_instruction = 0x88177EF4;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_88177EF8:
	// lwz r3,24(r31)
	ctx.current_instruction = 0x88177EF8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177f0c
	if (ctx.cr6.eq) goto loc_88177F0C;
	// bl 0x8815ba70
	ctx.lr = 0x88177F08;
	sub_8815BA70(ctx, base);
loc_88177F08:
	// stw r29,24(r31)
	ctx.current_instruction = 0x88177F08;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_88177F0C:
	// lwz r3,28(r31)
	ctx.current_instruction = 0x88177F0C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177f20
	if (ctx.cr6.eq) goto loc_88177F20;
	// bl 0x8815ba70
	ctx.lr = 0x88177F1C;
	sub_8815BA70(ctx, base);
loc_88177F1C:
	// stw r29,28(r31)
	ctx.current_instruction = 0x88177F1C;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_88177F20:
	// lwz r3,32(r31)
	ctx.current_instruction = 0x88177F20;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177f34
	if (ctx.cr6.eq) goto loc_88177F34;
	// bl 0x8815ba70
	ctx.lr = 0x88177F30;
	sub_8815BA70(ctx, base);
loc_88177F30:
	// stw r29,32(r31)
	ctx.current_instruction = 0x88177F30;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_88177F34:
	// lwz r3,60(r31)
	ctx.current_instruction = 0x88177F34;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177f48
	if (ctx.cr6.eq) goto loc_88177F48;
	// bl 0x8815ba70
	ctx.lr = 0x88177F44;
	sub_8815BA70(ctx, base);
loc_88177F44:
	// stw r29,60(r31)
	ctx.current_instruction = 0x88177F44;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
loc_88177F48:
	// lwz r3,64(r31)
	ctx.current_instruction = 0x88177F48;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177f5c
	if (ctx.cr6.eq) goto loc_88177F5C;
	// bl 0x8815ba70
	ctx.lr = 0x88177F58;
	sub_8815BA70(ctx, base);
loc_88177F58:
	// stw r29,64(r31)
	ctx.current_instruction = 0x88177F58;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
loc_88177F5C:
	// lwz r3,68(r31)
	ctx.current_instruction = 0x88177F5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177f70
	if (ctx.cr6.eq) goto loc_88177F70;
	// bl 0x8815ba70
	ctx.lr = 0x88177F6C;
	sub_8815BA70(ctx, base);
loc_88177F6C:
	// stw r29,68(r31)
	ctx.current_instruction = 0x88177F6C;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
loc_88177F70:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88177F7C:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8817C440) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8817C440;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8817C440) {
			switch (rex_dispatch_address) {
				case 0x8817C448:
				case 0x8817C470:
				case 0x8817C488:
				case 0x8817C4C4:
				case 0x8817C4EC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817C440;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8817C448: goto loc_8817C448;
		case 0x8817C470: goto loc_8817C470;
		case 0x8817C488: goto loc_8817C488;
		case 0x8817C4C4: goto loc_8817C4C4;
		case 0x8817C4EC: goto loc_8817C4EC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8817C448;
	__savegprlr_29(ctx, base);
loc_8817C448:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8817C448;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24688(r3)
	ctx.current_instruction = 0x8817C44C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,15436(r3)
	ctx.current_instruction = 0x8817C454;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15436);
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8817c4a0
	if (!ctx.cr6.eq) goto loc_8817C4A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x8815b9f8
	ctx.lr = 0x8817C470;
	sub_8815B9F8(ctx, base);
loc_8817C470:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8817c488
	if (ctx.cr6.eq) goto loc_8817C488;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8817C488;
	sub_88052D90(ctx, base);
loc_8817C488:
	// stw r30,15436(r31)
	ctx.current_instruction = 0x8817C488;
	REX_STORE_U32(ctx.r31.u32 + 15436, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8817c4a0
	if (!ctx.cr6.eq) goto loc_8817C4A0;
loc_8817C494:
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_8817C4A0:
	// lwz r10,15448(r31)
	ctx.current_instruction = 0x8817C4A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15448);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r30,r11,18168
	ctx.r30.s64 = ctx.r11.s64 + 18168;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8817c4d0
	if (!ctx.cr6.eq) goto loc_8817C4D0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e468
	ctx.lr = 0x8817C4C4;
	sub_8815E468(ctx, base);
loc_8817C4C4:
	// stw r3,15448(r31)
	ctx.current_instruction = 0x8817C4C4;
	REX_STORE_U32(ctx.r31.u32 + 15448, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8817c494
	if (ctx.cr6.eq) goto loc_8817C494;
loc_8817C4D0:
	// lwz r11,15456(r31)
	ctx.current_instruction = 0x8817C4D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8817c4fc
	if (!ctx.cr6.eq) goto loc_8817C4FC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,400
	ctx.r4.s64 = 400;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e468
	ctx.lr = 0x8817C4EC;
	sub_8815E468(ctx, base);
loc_8817C4EC:
	// stw r3,15456(r31)
	ctx.current_instruction = 0x8817C4EC;
	REX_STORE_U32(ctx.r31.u32 + 15456, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,-9
	ctx.r3.s64 = -9;
	// beq cr6,0x8817c500
	if (ctx.cr6.eq) goto loc_8817C500;
loc_8817C4FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8817C500:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8817D630) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8817D630);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817D630;
	ctx.current_instruction = 0x8817D630;
	PPCRegister temp{};
	// lwz r10,23976(r3)
	ctx.current_instruction = 0x8817D630;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 23976);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8817d64c
	if (!ctx.cr6.lt) goto loc_8817D64C;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r7,23976(r3)
	ctx.current_instruction = 0x8817D648;
	REX_STORE_U32(ctx.r3.u32 + 23976, ctx.r7.u32);
loc_8817D64C:
	// lwz r9,3700(r11)
	ctx.current_instruction = 0x8817D64C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 3700);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8817d66c
	if (ctx.cr6.lt) goto loc_8817D66C;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bgt cr6,0x8817d66c
	if (ctx.cr6.gt) goto loc_8817D66C;
	// stw r9,15612(r11)
	ctx.current_instruction = 0x8817D660;
	REX_STORE_U32(ctx.r11.u32 + 15612, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8817D66C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8817d67c
	if (ctx.cr6.lt) goto loc_8817D67C;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// ble cr6,0x8817d79c
	if (!ctx.cr6.gt) goto loc_8817D79C;
loc_8817D67C:
	// lwz r10,3712(r11)
	ctx.current_instruction = 0x8817D67C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3712);
	// li r8,30
	ctx.r8.s64 = 30;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8817d690
	if (!ctx.cr6.gt) goto loc_8817D690;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_8817D690:
	// lwz r9,3716(r11)
	ctx.current_instruction = 0x8817D690;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8817d6a0
	if (ctx.cr6.gt) goto loc_8817D6A0;
	// li r9,500
	ctx.r9.s64 = 500;
loc_8817D6A0:
	// lwz r10,23980(r11)
	ctx.current_instruction = 0x8817D6A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 23980);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8817d7a8
	if (!ctx.cr6.gt) goto loc_8817D7A8;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// blt cr6,0x8817d7a8
	if (ctx.cr6.lt) goto loc_8817D7A8;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r3,r6,34464
	ctx.r3.u64 = ctx.r6.u64 | 34464;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x8817d7a8
	if (ctx.cr6.gt) goto loc_8817D7A8;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// lwz r6,15636(r11)
	ctx.current_instruction = 0x8817D6C8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 15636);
	// mullw r5,r8,r5
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// std r4,-16(r1)
	ctx.current_instruction = 0x8817D6D8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f0,-16(r1)
	ctx.current_instruction = 0x8817D6DC;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r3,-16(r1)
	ctx.current_instruction = 0x8817D6E0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f13,-16(r1)
	ctx.current_instruction = 0x8817D6E4;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,12508(r9)
	ctx.current_instruction = 0x8817D6F4;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12508);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// mulli r9,r10,10000
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(10000));
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// fsqrts f10,f12
	ctx.f10.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,-16(r1)
	ctx.current_instruction = 0x8817D714;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// lwz r8,-12(r1)
	ctx.current_instruction = 0x8817D718;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r9,r6,r8
	ctx.r9.u64 = uint32_t((ctx.r8.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r6.s32 / ctx.r8.s32 : 0);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// andc r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bne cr6,0x8817d744
	if (!ctx.cr6.eq) goto loc_8817D744;
	// addi r9,r9,-50
	ctx.r9.s64 = ctx.r9.s64 + -50;
loc_8817D744:
	// addi r10,r9,-100
	ctx.r10.s64 = ctx.r9.s64 + -100;
	// cmpwi cr6,r10,120
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 120, ctx.xer);
	// blt cr6,0x8817d760
	if (ctx.cr6.lt) goto loc_8817D760;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15612(r11)
	ctx.current_instruction = 0x8817D758;
	REX_STORE_U32(ctx.r11.u32 + 15612, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8817D760:
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// blt cr6,0x8817d778
	if (ctx.cr6.lt) goto loc_8817D778;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15612(r11)
	ctx.current_instruction = 0x8817D770;
	REX_STORE_U32(ctx.r11.u32 + 15612, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8817D778:
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// blt cr6,0x8817d790
	if (ctx.cr6.lt) goto loc_8817D790;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15612(r11)
	ctx.current_instruction = 0x8817D788;
	REX_STORE_U32(ctx.r11.u32 + 15612, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8817D790:
	// cmpwi cr6,r10,42
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 42, ctx.xer);
	// blt cr6,0x8817d7a8
	if (ctx.cr6.lt) goto loc_8817D7A8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8817D79C:
	// stw r10,15612(r11)
	ctx.current_instruction = 0x8817D79C;
	REX_STORE_U32(ctx.r11.u32 + 15612, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8817D7A8:
	// stw r7,15612(r11)
	ctx.current_instruction = 0x8817D7A8;
	REX_STORE_U32(ctx.r11.u32 + 15612, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88182C30) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88182C30;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88182C30) {
			switch (rex_dispatch_address) {
				case 0x88182C38:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88182C30;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x88182C38: goto loc_88182C38;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x88182C38;
	__savegprlr_18(ctx, base);
loc_88182C38:
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
loc_88182C5C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x88182c98
	if (!ctx.cr6.eq) goto loc_88182C98;
	// lwz r8,-8(r9)
	ctx.current_instruction = 0x88182C64;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + -8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88182db8
	if (ctx.cr6.eq) goto loc_88182DB8;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// stw r8,28(r10)
	ctx.current_instruction = 0x88182C78;
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
	// stw r8,24(r10)
	ctx.current_instruction = 0x88182C7C;
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r8.u32);
	// stw r8,16(r10)
	ctx.current_instruction = 0x88182C80;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stw r8,12(r10)
	ctx.current_instruction = 0x88182C84;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// stw r8,8(r10)
	ctx.current_instruction = 0x88182C88;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r8,4(r10)
	ctx.current_instruction = 0x88182C8C;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r8,0(r10)
	ctx.current_instruction = 0x88182C90;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// b 0x88182db4
	goto loc_88182DB4;
loc_88182C98:
	// lwz r8,-4(r9)
	ctx.current_instruction = 0x88182C98;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// lwz r6,4(r9)
	ctx.current_instruction = 0x88182CA0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,12(r9)
	ctx.current_instruction = 0x88182CA4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mulli r29,r8,2276
	ctx.r29.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(2276));
	// lwz r7,20(r9)
	ctx.current_instruction = 0x88182CAC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r31,0(r9)
	ctx.current_instruction = 0x88182CB0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r30,16(r9)
	ctx.current_instruction = 0x88182CB4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r25,-8(r9)
	ctx.current_instruction = 0x88182CB8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r22,8(r9)
	ctx.current_instruction = 0x88182CBC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// add r28,r5,r6
	ctx.r28.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulli r5,r5,799
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(799));
	// mulli r27,r28,2408
	ctx.r27.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(2408));
	// mulli r7,r7,3406
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(3406));
	// mulli r6,r6,4017
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(4017));
	// mulli r4,r8,565
	ctx.r4.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(565));
	// subf r28,r5,r27
	ctx.r28.u64 = ctx.r27.u64 - ctx.r5.u64;
	// subf r26,r7,r4
	ctx.r26.u64 = ctx.r4.u64 - ctx.r7.u64;
	// add r8,r29,r4
	ctx.r8.u64 = ctx.r29.u64 + ctx.r4.u64;
	// subf r27,r6,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r6.u64;
	// subf r7,r28,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r28.u64;
	// subf r6,r27,r26
	ctx.r6.u64 = ctx.r26.u64 - ctx.r27.u64;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwinm r5,r25,11,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 11) & 0xFFFFF800;
	// add r25,r6,r7
	ctx.r25.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r20,r6,r7
	ctx.r20.u64 = ctx.r7.u64 - ctx.r6.u64;
	// mulli r6,r31,1568
	ctx.r6.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(1568));
	// mulli r29,r4,1108
	ctx.r29.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1108));
	// addi r7,r5,128
	ctx.r7.s64 = ctx.r5.s64 + 128;
	// rlwinm r4,r22,11,0,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 11) & 0xFFFFF800;
	// mulli r22,r30,3784
	ctx.r22.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(3784));
	// mulli r31,r25,181
	ctx.r31.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(181));
	// add r5,r6,r29
	ctx.r5.u64 = ctx.r6.u64 + ctx.r29.u64;
	// mulli r25,r20,181
	ctx.r25.s64 = static_cast<int64_t>(ctx.r20.u64 * static_cast<uint64_t>(181));
	// add r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r30,r4,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r22,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r22.u64;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// addi r25,r25,128
	ctx.r25.s64 = ctx.r25.s64 + 128;
	// subf r29,r5,r6
	ctx.r29.u64 = ctx.r6.u64 - ctx.r5.u64;
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 + ctx.r8.u64;
	// add r6,r30,r7
	ctx.r6.u64 = ctx.r30.u64 + ctx.r7.u64;
	// srawi r5,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r31.s32 >> 8;
	// subf r30,r7,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r7.u64;
	// srawi r31,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r25.s32 >> 8;
	// add r7,r26,r27
	ctx.r7.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r28,r8,r4
	ctx.r28.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r27,r5,r6
	ctx.r27.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r26,r30,r31
	ctx.r26.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r25,r29,r7
	ctx.r25.u64 = ctx.r29.u64 + ctx.r7.u64;
	// srawi r28,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 8;
	// subf r7,r7,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r7.u64;
	// srawi r27,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 8;
	// stw r28,0(r10)
	ctx.current_instruction = 0x88182D74;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// srawi r29,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r26.s32 >> 8;
	// subf r31,r31,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r31.u64;
	// stw r27,4(r10)
	ctx.current_instruction = 0x88182D80;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// stw r29,8(r10)
	ctx.current_instruction = 0x88182D88;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// srawi r30,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r25.s32 >> 8;
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// subf r4,r8,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r8.u64;
	// stw r30,12(r10)
	ctx.current_instruction = 0x88182D98;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// srawi r8,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 8;
	// stw r5,16(r10)
	ctx.current_instruction = 0x88182DA0;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r5.u32);
	// srawi r7,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 8;
	// srawi r6,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 8;
	// stw r7,24(r10)
	ctx.current_instruction = 0x88182DAC;
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r7.u32);
	// stw r6,28(r10)
	ctx.current_instruction = 0x88182DB0;
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r6.u32);
loc_88182DB4:
	// stw r8,20(r10)
	ctx.current_instruction = 0x88182DB4;
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
loc_88182DB8:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// rotlwi r23,r23,1
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r23.u32, 1);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bdnz 0x88182c5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88182C5C;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// subf r26,r11,r10
	ctx.r26.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// subf r25,r11,r9
	ctx.r25.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r10,r3,r8
	ctx.r10.u64 = ctx.r3.u64 + ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r24,r11,r8
	ctx.r24.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// subf r23,r11,r9
	ctx.r23.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64;
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r22,r11,r7
	ctx.r22.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_88182E0C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x88182e4c
	if (!ctx.cr6.eq) goto loc_88182E4C;
	// lwz r8,0(r11)
	ctx.current_instruction = 0x88182E14;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88182f8c
	if (ctx.cr6.eq) goto loc_88182F8C;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// srawi r8,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 6;
	// stwx r8,r22,r11
	ctx.current_instruction = 0x88182E28;
	REX_STORE_U32(ctx.r22.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r8,r9,r11
	ctx.current_instruction = 0x88182E2C;
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r8,r23,r11
	ctx.current_instruction = 0x88182E30;
	REX_STORE_U32(ctx.r23.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r8,r10,r11
	ctx.current_instruction = 0x88182E34;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r8,r24,r11
	ctx.current_instruction = 0x88182E38;
	REX_STORE_U32(ctx.r24.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r8,r25,r11
	ctx.current_instruction = 0x88182E3C;
	REX_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r8,r26,r11
	ctx.current_instruction = 0x88182E40;
	REX_STORE_U32(ctx.r26.u32 + ctx.r11.u32, ctx.r8.u32);
	// stw r8,0(r11)
	ctx.current_instruction = 0x88182E44;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x88182f8c
	goto loc_88182F8C;
loc_88182E4C:
	// lwzx r8,r26,r11
	ctx.current_instruction = 0x88182E4C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lwzx r7,r22,r11
	ctx.current_instruction = 0x88182E50;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// mulli r4,r8,2276
	ctx.r4.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(2276));
	// lwzx r5,r23,r11
	ctx.current_instruction = 0x88182E58;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// lwzx r6,r24,r11
	ctx.current_instruction = 0x88182E5C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// lwzx r31,r9,r11
	ctx.current_instruction = 0x88182E60;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r3,r25,r11
	ctx.current_instruction = 0x88182E64;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// lwz r30,0(r11)
	ctx.current_instruction = 0x88182E68;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r29,r10,r11
	ctx.current_instruction = 0x88182E6C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r28,r5,r6
	ctx.r28.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mulli r8,r8,565
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(565));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r27,r7,3406
	ctx.r27.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(3406));
	// mulli r7,r28,2408
	ctx.r7.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(2408));
	// subf r28,r27,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r27.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// mulli r7,r5,799
	ctx.r7.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(799));
	// mulli r6,r6,4017
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(4017));
	// add r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 + ctx.r3.u64;
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r20,r6,r8
	ctx.r20.u64 = ctx.r8.u64 - ctx.r6.u64;
	// srawi r7,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 3;
	// srawi r6,r28,3
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r28.s32 >> 3;
	// srawi r5,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 3;
	// mulli r8,r27,1108
	ctx.r8.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(1108));
	// srawi r4,r20,3
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r20.s32 >> 3;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r31,r31,3784
	ctx.r31.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(3784));
	// subf r27,r4,r6
	ctx.r27.u64 = ctx.r6.u64 - ctx.r4.u64;
	// addi r20,r30,32
	ctx.r20.s64 = ctx.r30.s64 + 32;
	// subf r28,r5,r7
	ctx.r28.u64 = ctx.r7.u64 - ctx.r5.u64;
	// mulli r3,r3,1568
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(1568));
	// subf r31,r31,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r31.u64;
	// rlwinm r30,r29,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// add r19,r3,r8
	ctx.r19.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r18,r27,r28
	ctx.r18.u64 = ctx.r27.u64 + ctx.r28.u64;
	// rlwinm r29,r20,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 8) & 0xFFFFFF00;
	// subf r28,r27,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r27.u64;
	// srawi r3,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r31.s32 >> 3;
	// add r8,r29,r30
	ctx.r8.u64 = ctx.r29.u64 + ctx.r30.u64;
	// srawi r31,r19,3
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r19.s32 >> 3;
	// mulli r27,r18,181
	ctx.r27.s64 = static_cast<int64_t>(ctx.r18.u64 * static_cast<uint64_t>(181));
	// mulli r28,r28,181
	ctx.r28.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(181));
	// subf r30,r30,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r30.u64;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r5,r8,r31
	ctx.r5.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r29,r27,128
	ctx.r29.s64 = ctx.r27.s64 + 128;
	// subf r31,r31,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r31.u64;
	// addi r28,r28,128
	ctx.r28.s64 = ctx.r28.s64 + 128;
	// add r8,r30,r3
	ctx.r8.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// srawi r4,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r29.s32 >> 8;
	// subf r30,r3,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r3.u64;
	// srawi r3,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r28.s32 >> 8;
	// add r29,r7,r5
	ctx.r29.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r28,r4,r8
	ctx.r28.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r27,r30,r3
	ctx.r27.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r20,r31,r6
	ctx.r20.u64 = ctx.r31.u64 + ctx.r6.u64;
	// srawi r29,r29,14
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 14;
	// srawi r28,r28,14
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 14;
	// subf r6,r6,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r6.u64;
	// stw r29,0(r11)
	ctx.current_instruction = 0x88182F48;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// subf r3,r3,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r3.u64;
	// stwx r28,r26,r11
	ctx.current_instruction = 0x88182F50;
	REX_STORE_U32(ctx.r26.u32 + ctx.r11.u32, ctx.r28.u32);
	// srawi r31,r27,14
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3FFF) != 0);
	ctx.r31.s64 = ctx.r27.s32 >> 14;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// srawi r30,r20,14
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3FFF) != 0);
	ctx.r30.s64 = ctx.r20.s32 >> 14;
	// stwx r31,r25,r11
	ctx.current_instruction = 0x88182F60;
	REX_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r31.u32);
	// srawi r6,r6,14
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 14;
	// srawi r4,r3,14
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 14;
	// stwx r30,r24,r11
	ctx.current_instruction = 0x88182F6C;
	REX_STORE_U32(ctx.r24.u32 + ctx.r11.u32, ctx.r30.u32);
	// srawi r3,r8,14
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 14;
	// stwx r6,r10,r11
	ctx.current_instruction = 0x88182F74;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// subf r8,r7,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r7.u64;
	// stwx r4,r23,r11
	ctx.current_instruction = 0x88182F7C;
	REX_STORE_U32(ctx.r23.u32 + ctx.r11.u32, ctx.r4.u32);
	// stwx r3,r9,r11
	ctx.current_instruction = 0x88182F80;
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// srawi r7,r8,14
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 14;
	// stwx r7,r22,r11
	ctx.current_instruction = 0x88182F88;
	REX_STORE_U32(ctx.r22.u32 + ctx.r11.u32, ctx.r7.u32);
loc_88182F8C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88182e0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88182E0C;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8818B198) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8818B198;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8818B198) {
			switch (rex_dispatch_address) {
				case 0x8818B1A0:
				case 0x8818B38C:
				case 0x8818B718:
				case 0x8818BAAC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8818B198;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8818B1A0: goto loc_8818B1A0;
		case 0x8818B38C: goto loc_8818B38C;
		case 0x8818B718: goto loc_8818B718;
		case 0x8818BAAC: goto loc_8818BAAC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8818B1A0;
	__savegprlr_14(ctx, base);
loc_8818B1A0:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x8818B1A0;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r1)
	ctx.current_instruction = 0x8818B1A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// stw r3,276(r1)
	ctx.current_instruction = 0x8818B1A8;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// stw r4,284(r1)
	ctx.current_instruction = 0x8818B1AC;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,308(r1)
	ctx.current_instruction = 0x8818B1B4;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// stw r8,316(r1)
	ctx.current_instruction = 0x8818B1B8;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// beq cr6,0x8818b558
	if (ctx.cr6.eq) goto loc_8818B558;
	// addi r22,r4,8
	ctx.r22.s64 = ctx.r4.s64 + 8;
	// lwz r25,256(r3)
	ctx.current_instruction = 0x8818B1C4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r16,0
	ctx.r16.s64 = 0;
	// addi r21,r22,-1
	ctx.r21.s64 = ctx.r22.s64 + -1;
	// addi r18,r22,1
	ctx.r18.s64 = ctx.r22.s64 + 1;
	// stw r16,80(r1)
	ctx.current_instruction = 0x8818B1D4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// addi r19,r21,-1
	ctx.r19.s64 = ctx.r21.s64 + -1;
	// addi r17,r18,1
	ctx.r17.s64 = ctx.r18.s64 + 1;
	// addi r20,r19,-1
	ctx.r20.s64 = ctx.r19.s64 + -1;
	// addi r14,r17,1
	ctx.r14.s64 = ctx.r17.s64 + 1;
	// addi r15,r20,-1
	ctx.r15.s64 = ctx.r20.s64 + -1;
	// stw r14,96(r1)
	ctx.current_instruction = 0x8818B1EC;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// stw r15,88(r1)
	ctx.current_instruction = 0x8818B1F0;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
loc_8818B1F4:
	// clrlwi r10,r16,30
	ctx.r10.u64 = ctx.r16.u32 & 0x3;
	// lbz r23,0(r15)
	ctx.current_instruction = 0x8818B1F8;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// lbz r24,0(r14)
	ctx.current_instruction = 0x8818B1FC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// lbz r27,0(r20)
	ctx.current_instruction = 0x8818B200;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r29,0(r19)
	ctx.current_instruction = 0x8818B208;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// lbz r31,0(r21)
	ctx.current_instruction = 0x8818B20C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// lbz r30,0(r22)
	ctx.current_instruction = 0x8818B210;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r22.u32 + 0);
	// lbz r28,0(r18)
	ctx.current_instruction = 0x8818B214;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r18.u32 + 0);
	// lbz r26,0(r17)
	ctx.current_instruction = 0x8818B218;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r17.u32 + 0);
	// bne cr6,0x8818b35c
	if (!ctx.cr6.eq) goto loc_8818B35C;
	// subf r10,r24,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r24.u64;
	// lwz r15,88(r1)
	ctx.current_instruction = 0x8818B224;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r14,96(r1)
	ctx.current_instruction = 0x8818B22C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// lwz r16,80(r1)
	ctx.current_instruction = 0x8818B234;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// std r31,80(r1)
	ctx.current_instruction = 0x8818B23C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r6,r26,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r26.u64;
	// subf r5,r9,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r9.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r4,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r3,r5,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r9,r28,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r28.u64;
	// adde r7,r3,r8
	temp.u8 = (ctx.r3.u32 + ctx.r8.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// subf r3,r8,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r4,r30,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r30.u64;
	// subfc r8,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r6,r3,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// adde r8,r6,r5
	temp.u8 = (ctx.r6.u32 + ctx.r5.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r6.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// xor r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// subf r6,r31,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r31.u64;
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r6,88(r1)
	ctx.current_instruction = 0x8818B294;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r11,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r5,r5,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r31,r29,r27
	ctx.r31.u64 = ctx.r27.u64 - ctx.r29.u64;
	// adde r6,r5,r3
	temp.u8 = (ctx.r5.u32 + ctx.r3.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r5.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// subf r3,r3,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r3.u64;
	// subf r4,r27,r23
	ctx.r4.u64 = ctx.r23.u64 - ctx.r27.u64;
	// subfc r10,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// stw r10,96(r1)
	ctx.current_instruction = 0x8818B2CC;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r8,96(r1)
	ctx.current_instruction = 0x8818B2D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// adde r8,r3,r5
	temp.u8 = (ctx.r3.u32 + ctx.r5.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r3.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r5,88(r1)
	ctx.current_instruction = 0x8818B2DC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// srawi r3,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// xor r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// subf r3,r3,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r3.u64;
	// stw r7,96(r1)
	ctx.current_instruction = 0x8818B2F0;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subfc r9,r3,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r3.u32;
	ctx.r9.u64 = ctx.r9.u64 - ctx.r3.u64;
	// lwz r5,96(r1)
	ctx.current_instruction = 0x8818B2FC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r6,r3,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// adde r9,r6,r5
	temp.u8 = (ctx.r6.u32 + ctx.r5.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r6.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r31.s32 >> 31;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// xor r6,r31,r3
	ctx.r6.u64 = ctx.r31.u64 ^ ctx.r3.u64;
	// ld r31,80(r1)
	ctx.current_instruction = 0x8818B318;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r3,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// adde r11,r11,r7
	temp.u8 = (ctx.r11.u32 + ctx.r7.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 31;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// xor r6,r4,r8
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r5,r8,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r8.u64;
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subfc r3,r5,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r10.u64 - ctx.r5.u64;
	// adde r11,r4,r7
	temp.u8 = (ctx.r4.u32 + ctx.r7.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8818B358;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_8818B35C:
	// lwz r11,100(r1)
	ctx.current_instruction = 0x8818B35C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8818b4d4
	if (ctx.cr6.lt) goto loc_8818B4D4;
	// lwz r11,348(r1)
	ctx.current_instruction = 0x8818B368;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881b3b80
	ctx.lr = 0x8818B38C;
	sub_881B3B80(ctx, base);
loc_8818B38C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8818b514
	if (ctx.cr6.eq) goto loc_8818B514;
	// subf r10,r23,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r23.u64;
	// lwz r11,348(r1)
	ctx.current_instruction = 0x8818B398;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8818b3b4
	if (ctx.cr6.lt) goto loc_8818B3B4;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
loc_8818B3B4:
	// subf r10,r24,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r24.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8818b3d0
	if (ctx.cr6.lt) goto loc_8818B3D0;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_8818B3D0:
	// addi r10,r27,2
	ctx.r10.s64 = ctx.r27.s64 + 2;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// add r9,r29,r23
	ctx.r9.u64 = ctx.r29.u64 + ctx.r23.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 2;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 3;
	// addi r6,r30,2
	ctx.r6.s64 = ctx.r30.s64 + 2;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r5,r25
	ctx.current_instruction = 0x8818B418;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r25.u32);
	// add r8,r24,r28
	ctx.r8.u64 = ctx.r24.u64 + ctx.r28.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// stb r4,0(r20)
	ctx.current_instruction = 0x8818B430;
	REX_STORE_U8(ctx.r20.u32 + 0, ctx.r4.u8);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// addi r6,r26,2
	ctx.r6.s64 = ctx.r26.s64 + 2;
	// rlwinm r7,r24,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r8,r27
	ctx.r5.u64 = ctx.r8.u64 + ctx.r27.u64;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r24,r7
	ctx.r7.u64 = ctx.r24.u64 + ctx.r7.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// srawi r4,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r3,r8,r23
	ctx.r3.u64 = ctx.r8.u64 + ctx.r23.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbzx r8,r4,r25
	ctx.current_instruction = 0x8818B488;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r25.u32);
	// add r7,r9,r27
	ctx.r7.u64 = ctx.r9.u64 + ctx.r27.u64;
	// srawi r6,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 3;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// stb r8,0(r19)
	ctx.current_instruction = 0x8818B4A0;
	REX_STORE_U8(ctx.r19.u32 + 0, ctx.r8.u8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// srawi r11,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 3;
	// lbzx r10,r6,r25
	ctx.current_instruction = 0x8818B4AC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r25.u32);
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// stb r10,0(r21)
	ctx.current_instruction = 0x8818B4B4;
	REX_STORE_U8(ctx.r21.u32 + 0, ctx.r10.u8);
	// lbzx r8,r4,r25
	ctx.current_instruction = 0x8818B4B8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r25.u32);
	// stb r8,0(r22)
	ctx.current_instruction = 0x8818B4BC;
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r8.u8);
	// lbzx r7,r11,r25
	ctx.current_instruction = 0x8818B4C0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// stb r7,0(r18)
	ctx.current_instruction = 0x8818B4C4;
	REX_STORE_U8(ctx.r18.u32 + 0, ctx.r7.u8);
	// lbzx r6,r9,r25
	ctx.current_instruction = 0x8818B4C8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r25.u32);
	// stb r6,0(r17)
	ctx.current_instruction = 0x8818B4CC;
	REX_STORE_U8(ctx.r17.u32 + 0, ctx.r6.u8);
	// b 0x8818b514
	goto loc_8818B514;
loc_8818B4D4:
	// subf. r11,r31,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8818b514
	if (ctx.cr0.eq) goto loc_8818B514;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// lwz r9,348(r1)
	ctx.current_instruction = 0x8818B4E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8818b514
	if (!ctx.cr6.lt) goto loc_8818B514;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r9,r11,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r11.u64;
	// lbzx r8,r10,r25
	ctx.current_instruction = 0x8818B504;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r25.u32);
	// stb r8,0(r21)
	ctx.current_instruction = 0x8818B508;
	REX_STORE_U8(ctx.r21.u32 + 0, ctx.r8.u8);
	// lbzx r7,r9,r25
	ctx.current_instruction = 0x8818B50C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r25.u32);
	// stb r7,0(r22)
	ctx.current_instruction = 0x8818B510;
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r7.u8);
loc_8818B514:
	// lwz r11,356(r1)
	ctx.current_instruction = 0x8818B514;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// add r15,r15,r11
	ctx.r15.u64 = ctx.r15.u64 + ctx.r11.u64;
	// stw r16,80(r1)
	ctx.current_instruction = 0x8818B520;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// add r14,r14,r11
	ctx.r14.u64 = ctx.r14.u64 + ctx.r11.u64;
	// stw r15,88(r1)
	ctx.current_instruction = 0x8818B528;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// add r20,r20,r11
	ctx.r20.u64 = ctx.r20.u64 + ctx.r11.u64;
	// add r19,r19,r11
	ctx.r19.u64 = ctx.r19.u64 + ctx.r11.u64;
	// stw r14,96(r1)
	ctx.current_instruction = 0x8818B534;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// add r21,r21,r11
	ctx.r21.u64 = ctx.r21.u64 + ctx.r11.u64;
	// add r22,r22,r11
	ctx.r22.u64 = ctx.r22.u64 + ctx.r11.u64;
	// add r18,r18,r11
	ctx.r18.u64 = ctx.r18.u64 + ctx.r11.u64;
	// add r17,r17,r11
	ctx.r17.u64 = ctx.r17.u64 + ctx.r11.u64;
	// cmpwi cr6,r16,16
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 16, ctx.xer);
	// blt cr6,0x8818b1f4
	if (ctx.cr6.lt) goto loc_8818B1F4;
	// lwz r4,284(r1)
	ctx.current_instruction = 0x8818B550;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r3,276(r1)
	ctx.current_instruction = 0x8818B554;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_8818B558:
	// lwz r11,308(r1)
	ctx.current_instruction = 0x8818B558;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818b8d8
	if (ctx.cr6.eq) goto loc_8818B8D8;
	// addi r21,r4,-1
	ctx.r21.s64 = ctx.r4.s64 + -1;
	// lwz r25,256(r3)
	ctx.current_instruction = 0x8818B568;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// addi r19,r21,-1
	ctx.r19.s64 = ctx.r21.s64 + -1;
	// addi r18,r11,1
	ctx.r18.s64 = ctx.r11.s64 + 1;
	// addi r20,r19,-1
	ctx.r20.s64 = ctx.r19.s64 + -1;
	// addi r14,r18,1
	ctx.r14.s64 = ctx.r18.s64 + 1;
	// addi r15,r20,-1
	ctx.r15.s64 = ctx.r20.s64 + -1;
	// stw r14,88(r1)
	ctx.current_instruction = 0x8818B584;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r14.u32);
	// li r16,0
	ctx.r16.s64 = 0;
	// stw r15,96(r1)
	ctx.current_instruction = 0x8818B58C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// addi r22,r21,1
	ctx.r22.s64 = ctx.r21.s64 + 1;
loc_8818B594:
	// clrlwi r10,r16,30
	ctx.r10.u64 = ctx.r16.u32 & 0x3;
	// lbz r23,0(r15)
	ctx.current_instruction = 0x8818B598;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// lbz r24,0(r14)
	ctx.current_instruction = 0x8818B59C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// lbz r27,0(r20)
	ctx.current_instruction = 0x8818B5A0;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r29,0(r19)
	ctx.current_instruction = 0x8818B5A8;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// lbz r31,0(r21)
	ctx.current_instruction = 0x8818B5AC;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// lbz r30,0(r22)
	ctx.current_instruction = 0x8818B5B0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r22.u32 + 0);
	// lbz r28,1(r22)
	ctx.current_instruction = 0x8818B5B4;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r22.u32 + 1);
	// lbz r26,0(r18)
	ctx.current_instruction = 0x8818B5B8;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r18.u32 + 0);
	// bne cr6,0x8818b6e8
	if (!ctx.cr6.eq) goto loc_8818B6E8;
	// subf r10,r24,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r24.u64;
	// lwz r15,96(r1)
	ctx.current_instruction = 0x8818B5C4;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r14,88(r1)
	ctx.current_instruction = 0x8818B5CC;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r6,r26,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r26.u64;
	// subf r5,r9,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r9.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r4,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r3,r5,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r9,r28,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r28.u64;
	// adde r7,r3,r8
	temp.u8 = (ctx.r3.u32 + ctx.r8.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// subf r17,r31,r29
	ctx.r17.u64 = ctx.r29.u64 - ctx.r31.u64;
	// subf r3,r8,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r4,r30,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r30.u64;
	// subfc r8,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r6,r3,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// adde r6,r6,r5
	temp.u8 = (ctx.r6.u32 + ctx.r5.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// xor r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r5,r8,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// subf r8,r29,r27
	ctx.r8.u64 = ctx.r27.u64 - ctx.r29.u64;
	// stw r8,96(r1)
	ctx.current_instruction = 0x8818B63C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// adde r8,r11,r3
	temp.u8 = (ctx.r11.u32 + ctx.r3.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 31;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// xor r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r4,r27,r23
	ctx.r4.u64 = ctx.r23.u64 - ctx.r27.u64;
	// subfc r10,r5,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r5.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r5.u64;
	// rlwinm r5,r5,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// stw r10,100(r1)
	ctx.current_instruction = 0x8818B664;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r7,100(r1)
	ctx.current_instruction = 0x8818B66C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// adde r7,r5,r3
	temp.u8 = (ctx.r5.u32 + ctx.r3.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r5.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r17.s32 >> 31;
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// xor r5,r17,r3
	ctx.r5.u64 = ctx.r17.u64 ^ ctx.r3.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r3,r3,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r5,r3,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r3.u32;
	ctx.r5.u64 = ctx.r9.u64 - ctx.r3.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// adde r8,r3,r6
	temp.u8 = (ctx.r3.u32 + ctx.r6.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r3.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r5,96(r1)
	ctx.current_instruction = 0x8818B69C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// srawi r3,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// xor r6,r5,r3
	ctx.r6.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// subfc r3,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// adde r11,r11,r7
	temp.u8 = (ctx.r11.u32 + ctx.r7.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 31;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// xor r6,r4,r8
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r5,r8,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r8.u64;
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subfc r3,r5,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r10.u64 - ctx.r5.u64;
	// adde r10,r4,r7
	temp.u8 = (ctx.r4.u32 + ctx.r7.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r4.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8818B6E4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_8818B6E8:
	// lwz r11,100(r1)
	ctx.current_instruction = 0x8818B6E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8818b85c
	if (ctx.cr6.lt) goto loc_8818B85C;
	// lwz r17,348(r1)
	ctx.current_instruction = 0x8818B6F4;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rlwinm r9,r17,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881b3b80
	ctx.lr = 0x8818B718;
	sub_881B3B80(ctx, base);
loc_8818B718:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8818b89c
	if (ctx.cr6.eq) goto loc_8818B89C;
	// subf r11,r23,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r23.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x8818b73c
	if (ctx.cr6.lt) goto loc_8818B73C;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
loc_8818B73C:
	// subf r11,r24,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r24.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x8818b758
	if (ctx.cr6.lt) goto loc_8818B758;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_8818B758:
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r27,2
	ctx.r11.s64 = ctx.r27.s64 + 2;
	// add r9,r23,r10
	ctx.r9.u64 = ctx.r23.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r29,r23
	ctx.r10.u64 = ctx.r29.u64 + ctx.r23.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// addi r6,r31,2
	ctx.r6.s64 = ctx.r31.s64 + 2;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// lbzx r3,r7,r25
	ctx.current_instruction = 0x8818B7A0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r25.u32);
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stb r3,0(r20)
	ctx.current_instruction = 0x8818B7B8;
	REX_STORE_U8(ctx.r20.u32 + 0, ctx.r3.u8);
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r3,r26,2
	ctx.r3.s64 = ctx.r26.s64 + 2;
	// rlwinm r8,r24,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// srawi r5,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 3;
	// add r8,r24,r8
	ctx.r8.u64 = ctx.r24.u64 + ctx.r8.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + ctx.r27.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r8,r7,r23
	ctx.r8.u64 = ctx.r7.u64 + ctx.r23.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r10,r24,r28
	ctx.r10.u64 = ctx.r24.u64 + ctx.r28.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// add r6,r9,r27
	ctx.r6.u64 = ctx.r9.u64 + ctx.r27.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lbzx r7,r5,r25
	ctx.current_instruction = 0x8818B80C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r25.u32);
	// srawi r5,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 3;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// srawi r3,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 3;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r7,0(r19)
	ctx.current_instruction = 0x8818B824;
	REX_STORE_U8(ctx.r19.u32 + 0, ctx.r7.u8);
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbzx r9,r5,r25
	ctx.current_instruction = 0x8818B82C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r25.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r9,0(r21)
	ctx.current_instruction = 0x8818B834;
	REX_STORE_U8(ctx.r21.u32 + 0, ctx.r9.u8);
	// srawi r10,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 3;
	// lbzx r7,r3,r25
	ctx.current_instruction = 0x8818B83C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r25.u32);
	// srawi r8,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// stb r7,0(r22)
	ctx.current_instruction = 0x8818B844;
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r7.u8);
	// lbzx r6,r10,r25
	ctx.current_instruction = 0x8818B848;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r25.u32);
	// stb r6,1(r22)
	ctx.current_instruction = 0x8818B84C;
	REX_STORE_U8(ctx.r22.u32 + 1, ctx.r6.u8);
	// lbzx r5,r8,r25
	ctx.current_instruction = 0x8818B850;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r25.u32);
	// stb r5,0(r18)
	ctx.current_instruction = 0x8818B854;
	REX_STORE_U8(ctx.r18.u32 + 0, ctx.r5.u8);
	// b 0x8818b89c
	goto loc_8818B89C;
loc_8818B85C:
	// subf. r11,r31,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8818b89c
	if (ctx.cr0.eq) goto loc_8818B89C;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// lwz r9,348(r1)
	ctx.current_instruction = 0x8818B868;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8818b89c
	if (!ctx.cr6.lt) goto loc_8818B89C;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// add r10,r31,r25
	ctx.r10.u64 = ctx.r31.u64 + ctx.r25.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// subf r9,r11,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r11.u64;
	// lbzx r8,r10,r11
	ctx.current_instruction = 0x8818B88C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r8,0(r21)
	ctx.current_instruction = 0x8818B890;
	REX_STORE_U8(ctx.r21.u32 + 0, ctx.r8.u8);
	// lbzx r7,r9,r25
	ctx.current_instruction = 0x8818B894;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r25.u32);
	// stb r7,0(r22)
	ctx.current_instruction = 0x8818B898;
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r7.u8);
loc_8818B89C:
	// lwz r11,356(r1)
	ctx.current_instruction = 0x8818B89C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// add r15,r15,r11
	ctx.r15.u64 = ctx.r15.u64 + ctx.r11.u64;
	// add r14,r14,r11
	ctx.r14.u64 = ctx.r14.u64 + ctx.r11.u64;
	// stw r15,96(r1)
	ctx.current_instruction = 0x8818B8AC;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// add r20,r20,r11
	ctx.r20.u64 = ctx.r20.u64 + ctx.r11.u64;
	// add r19,r19,r11
	ctx.r19.u64 = ctx.r19.u64 + ctx.r11.u64;
	// stw r14,88(r1)
	ctx.current_instruction = 0x8818B8B8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r14.u32);
	// add r21,r21,r11
	ctx.r21.u64 = ctx.r21.u64 + ctx.r11.u64;
	// add r22,r22,r11
	ctx.r22.u64 = ctx.r22.u64 + ctx.r11.u64;
	// add r18,r18,r11
	ctx.r18.u64 = ctx.r18.u64 + ctx.r11.u64;
	// cmpwi cr6,r16,16
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 16, ctx.xer);
	// blt cr6,0x8818b594
	if (ctx.cr6.lt) goto loc_8818B594;
	// lwz r4,284(r1)
	ctx.current_instruction = 0x8818B8D0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r3,276(r1)
	ctx.current_instruction = 0x8818B8D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_8818B8D8:
	// lwz r11,316(r1)
	ctx.current_instruction = 0x8818B8D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818bbc4
	if (ctx.cr6.eq) goto loc_8818BBC4;
	// addi r19,r4,16
	ctx.r19.s64 = ctx.r4.s64 + 16;
	// lwz r21,256(r3)
	ctx.current_instruction = 0x8818B8E8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r24,r19,-1
	ctx.r24.s64 = ctx.r19.s64 + -1;
	// addi r17,r19,1
	ctx.r17.s64 = ctx.r19.s64 + 1;
	// addi r22,r24,-1
	ctx.r22.s64 = ctx.r24.s64 + -1;
	// addi r16,r17,1
	ctx.r16.s64 = ctx.r17.s64 + 1;
	// stw r17,88(r1)
	ctx.current_instruction = 0x8818B900;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// addi r23,r22,-1
	ctx.r23.s64 = ctx.r22.s64 + -1;
	// stw r16,80(r1)
	ctx.current_instruction = 0x8818B908;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// addi r20,r16,1
	ctx.r20.s64 = ctx.r16.s64 + 1;
	// addi r15,r23,-1
	ctx.r15.s64 = ctx.r23.s64 + -1;
	// stw r15,96(r1)
	ctx.current_instruction = 0x8818B914;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
loc_8818B918:
	// clrlwi r10,r18,30
	ctx.r10.u64 = ctx.r18.u32 & 0x3;
	// lbz r27,0(r15)
	ctx.current_instruction = 0x8818B91C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// lbz r29,0(r19)
	ctx.current_instruction = 0x8818B920;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// lbz r26,0(r17)
	ctx.current_instruction = 0x8818B924;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r17.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r25,0(r16)
	ctx.current_instruction = 0x8818B92C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r16.u32 + 0);
	// lbz r31,0(r23)
	ctx.current_instruction = 0x8818B930;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r23.u32 + 0);
	// lbz r28,0(r22)
	ctx.current_instruction = 0x8818B934;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r22.u32 + 0);
	// lbz r30,0(r24)
	ctx.current_instruction = 0x8818B938;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// bne cr6,0x8818ba7c
	if (!ctx.cr6.eq) goto loc_8818BA7C;
	// lbz r7,0(r20)
	ctx.current_instruction = 0x8818B940;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// subf r8,r25,r26
	ctx.r8.u64 = ctx.r26.u64 - ctx.r25.u64;
	// lwz r15,96(r1)
	ctx.current_instruction = 0x8818B94C;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r6,r7,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r7.u64;
	// lwz r17,88(r1)
	ctx.current_instruction = 0x8818B954;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,2
	ctx.r10.s64 = 2;
	// std r30,88(r1)
	ctx.current_instruction = 0x8818B95C;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// srawi r4,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// lwz r16,80(r1)
	ctx.current_instruction = 0x8818B964;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// xor r7,r6,r4
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// subf r5,r26,r29
	ctx.r5.u64 = ctx.r29.u64 - ctx.r26.u64;
	// subf r6,r4,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r4.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r7,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r6,r6,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subf r4,r29,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r29.u64;
	// adde r7,r6,r3
	temp.u8 = (ctx.r6.u32 + ctx.r3.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r6.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 31;
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// subf r14,r30,r28
	ctx.r14.u64 = ctx.r28.u64 - ctx.r30.u64;
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// subfc r10,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subf r30,r28,r31
	ctx.r30.u64 = ctx.r31.u64 - ctx.r28.u64;
	// adde r6,r3,r6
	temp.u8 = (ctx.r3.u32 + ctx.r6.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// xor r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// stw r10,100(r1)
	ctx.current_instruction = 0x8818B9C0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// subf r3,r3,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r3.u64;
	// subf r5,r31,r27
	ctx.r5.u64 = ctx.r27.u64 - ctx.r31.u64;
	// subfc r9,r3,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r3.u32;
	ctx.r9.u64 = ctx.r9.u64 - ctx.r3.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// stw r9,96(r1)
	ctx.current_instruction = 0x8818B9D8;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r7,100(r1)
	ctx.current_instruction = 0x8818B9E0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,96(r1)
	ctx.current_instruction = 0x8818B9E4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// adde r7,r3,r7
	temp.u8 = (ctx.r3.u32 + ctx.r7.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 31;
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// xor r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r6,r6,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r6.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r4,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// adde r11,r11,r3
	temp.u8 = (ctx.r11.u32 + ctx.r3.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r14,31
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r14.s32 >> 31;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// xor r3,r14,r6
	ctx.r3.u64 = ctx.r14.u64 ^ ctx.r6.u64;
	// srawi r4,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 31;
	// subf r7,r6,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r6.u64;
	// subfc r3,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r3.u64 = ctx.r8.u64 - ctx.r7.u64;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// adde r8,r6,r4
	temp.u8 = (ctx.r6.u32 + ctx.r4.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r6.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r7,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 31;
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// xor r4,r30,r7
	ctx.r4.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// ld r30,88(r1)
	ctx.current_instruction = 0x8818BA3C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r3,r7,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r7.u64;
	// subfc r10,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r8,r3,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// adde r10,r8,r6
	temp.u8 = (ctx.r8.u32 + ctx.r6.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r8.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r7,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 31;
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// xor r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r7,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subfc r10,r4,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r4.u32;
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// adde r10,r3,r6
	temp.u8 = (ctx.r3.u32 + ctx.r6.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,100(r1)
	ctx.current_instruction = 0x8818BA78;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_8818BA7C:
	// lwz r11,100(r1)
	ctx.current_instruction = 0x8818BA7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8818bb54
	if (ctx.cr6.lt) goto loc_8818BB54;
	// lwz r14,348(r1)
	ctx.current_instruction = 0x8818BA88;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// rlwinm r9,r14,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b3b80
	ctx.lr = 0x8818BAAC;
	sub_881B3B80(ctx, base);
loc_8818BAAC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8818bb88
	if (ctx.cr6.eq) goto loc_8818BB88;
	// subf r11,r27,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r27.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x8818bad0
	if (ctx.cr6.lt) goto loc_8818BAD0;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8818BAD0:
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// addi r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 2;
	// add r9,r28,r27
	ctx.r9.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r6,r9,r28
	ctx.r6.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbzx r3,r5,r21
	ctx.current_instruction = 0x8818BB2C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r21.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// srawi r10,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 3;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// stb r3,0(r23)
	ctx.current_instruction = 0x8818BB3C;
	REX_STORE_U8(ctx.r23.u32 + 0, ctx.r3.u8);
	// lbzx r8,r10,r21
	ctx.current_instruction = 0x8818BB40;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r21.u32);
	// stb r8,0(r22)
	ctx.current_instruction = 0x8818BB44;
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r8.u8);
	// lbzx r7,r9,r21
	ctx.current_instruction = 0x8818BB48;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r21.u32);
	// stb r7,0(r24)
	ctx.current_instruction = 0x8818BB4C;
	REX_STORE_U8(ctx.r24.u32 + 0, ctx.r7.u8);
	// b 0x8818bb88
	goto loc_8818BB88;
loc_8818BB54:
	// subf. r11,r30,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8818bb88
	if (ctx.cr0.eq) goto loc_8818BB88;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// lwz r9,348(r1)
	ctx.current_instruction = 0x8818BB60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8818bb88
	if (!ctx.cr6.lt) goto loc_8818BB88;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzx r9,r10,r21
	ctx.current_instruction = 0x8818BB80;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r21.u32);
	// stb r9,0(r24)
	ctx.current_instruction = 0x8818BB84;
	REX_STORE_U8(ctx.r24.u32 + 0, ctx.r9.u8);
loc_8818BB88:
	// lwz r11,356(r1)
	ctx.current_instruction = 0x8818BB88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// add r15,r15,r11
	ctx.r15.u64 = ctx.r15.u64 + ctx.r11.u64;
	// add r17,r17,r11
	ctx.r17.u64 = ctx.r17.u64 + ctx.r11.u64;
	// add r16,r16,r11
	ctx.r16.u64 = ctx.r16.u64 + ctx.r11.u64;
	// stw r15,96(r1)
	ctx.current_instruction = 0x8818BB9C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// add r23,r23,r11
	ctx.r23.u64 = ctx.r23.u64 + ctx.r11.u64;
	// stw r17,88(r1)
	ctx.current_instruction = 0x8818BBA4;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// add r22,r22,r11
	ctx.r22.u64 = ctx.r22.u64 + ctx.r11.u64;
	// stw r16,80(r1)
	ctx.current_instruction = 0x8818BBAC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// add r24,r24,r11
	ctx.r24.u64 = ctx.r24.u64 + ctx.r11.u64;
	// add r19,r19,r11
	ctx.r19.u64 = ctx.r19.u64 + ctx.r11.u64;
	// add r20,r20,r11
	ctx.r20.u64 = ctx.r20.u64 + ctx.r11.u64;
	// cmpwi cr6,r18,16
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 16, ctx.xer);
	// blt cr6,0x8818b918
	if (ctx.cr6.lt) goto loc_8818B918;
loc_8818BBC4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A95C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881A95C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881A95C8) {
			switch (rex_dispatch_address) {
				case 0x881A95D0:
				case 0x881A9650:
				case 0x881A96B4:
				case 0x881A9708:
				case 0x881A9764:
				case 0x881A97CC:
				case 0x881A9830:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881A95C8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881A95D0: goto loc_881A95D0;
		case 0x881A9650: goto loc_881A9650;
		case 0x881A96B4: goto loc_881A96B4;
		case 0x881A9708: goto loc_881A9708;
		case 0x881A9764: goto loc_881A9764;
		case 0x881A97CC: goto loc_881A97CC;
		case 0x881A9830: goto loc_881A9830;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881A95D0;
	__savegprlr_25(ctx, base);
loc_881A95D0:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x881A95D0;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20680(r3)
	ctx.current_instruction = 0x881A95D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20680);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a976c
	if (ctx.cr6.eq) goto loc_881A976C;
	// lwz r10,20684(r3)
	ctx.current_instruction = 0x881A95E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881a976c
	if (!ctx.cr6.eq) goto loc_881A976C;
	// lwz r11,15116(r3)
	ctx.current_instruction = 0x881A95F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15116);
	// lwz r10,204(r3)
	ctx.current_instruction = 0x881A95F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x881a9830
	if (!ctx.cr6.eq) goto loc_881A9830;
	// lwz r7,3776(r3)
	ctx.current_instruction = 0x881A9600;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r29,184(r3)
	ctx.current_instruction = 0x881A9608;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r28,15920(r3)
	ctx.current_instruction = 0x881A9610;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 15920);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r6,172(r3)
	ctx.current_instruction = 0x881A9618;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,164(r3)
	ctx.current_instruction = 0x881A9620;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,220(r3)
	ctx.current_instruction = 0x881A9628;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,100(r1)
	ctx.current_instruction = 0x881A9634;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// stw r27,92(r1)
	ctx.current_instruction = 0x881A963C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// stw r29,84(r1)
	ctx.current_instruction = 0x881A9648;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bctrl 
	ctx.lr = 0x881A9650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A9650:
	// lwz r11,208(r31)
	ctx.current_instruction = 0x881A9650;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r5,3784(r31)
	ctx.current_instruction = 0x881A9654;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,3780(r31)
	ctx.current_instruction = 0x881A9660;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// stw r7,100(r1)
	ctx.current_instruction = 0x881A9664;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r7,20680(r31)
	ctx.current_instruction = 0x881A966C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,196(r31)
	ctx.current_instruction = 0x881A9674;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r30,168(r31)
	ctx.current_instruction = 0x881A967C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r29,15916(r31)
	ctx.current_instruction = 0x881A9684;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 15916);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r28,176(r31)
	ctx.current_instruction = 0x881A968C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r27,r7,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,224(r31)
	ctx.current_instruction = 0x881A9698;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// srawi r7,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 1;
	// stw r27,108(r1)
	ctx.current_instruction = 0x881A96A0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r11,92(r1)
	ctx.current_instruction = 0x881A96A4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// stw r30,84(r1)
	ctx.current_instruction = 0x881A96AC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bctrl 
	ctx.lr = 0x881A96B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A96B4:
	// lwz r6,20680(r31)
	ctx.current_instruction = 0x881A96B4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// lwz r11,204(r31)
	ctx.current_instruction = 0x881A96B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// li r9,1
	ctx.r9.s64 = 1;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lwz r10,164(r31)
	ctx.current_instruction = 0x881A96C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r30,184(r31)
	ctx.current_instruction = 0x881A96C8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// rlwinm r27,r6,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lwz r29,15920(r31)
	ctx.current_instruction = 0x881A96D0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 15920);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,172(r31)
	ctx.current_instruction = 0x881A96D8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,220(r31)
	ctx.current_instruction = 0x881A96E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,3776(r31)
	ctx.current_instruction = 0x881A96EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// srawi r6,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r28.s32 >> 1;
	// stw r11,92(r1)
	ctx.current_instruction = 0x881A96F4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r27,100(r1)
	ctx.current_instruction = 0x881A96F8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// stw r30,84(r1)
	ctx.current_instruction = 0x881A9700;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bctrl 
	ctx.lr = 0x881A9708;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A9708:
	// lwz r7,20680(r31)
	ctx.current_instruction = 0x881A9708;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,208(r31)
	ctx.current_instruction = 0x881A9710;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// li r9,1
	ctx.r9.s64 = 1;
	// cntlzw r4,r7
	ctx.r4.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r8,224(r31)
	ctx.current_instruction = 0x881A971C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r7,176(r31)
	ctx.current_instruction = 0x881A9720;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,196(r31)
	ctx.current_instruction = 0x881A9728;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,168(r31)
	ctx.current_instruction = 0x881A9730;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// rlwinm r29,r5,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,15916(r31)
	ctx.current_instruction = 0x881A9738;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 15916);
	// rlwinm r27,r4,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// lwz r5,3784(r31)
	ctx.current_instruction = 0x881A9744;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// lwz r4,3780(r31)
	ctx.current_instruction = 0x881A974C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// stw r27,108(r1)
	ctx.current_instruction = 0x881A9750;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r29,100(r1)
	ctx.current_instruction = 0x881A9754;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r11,92(r1)
	ctx.current_instruction = 0x881A9758;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	ctx.current_instruction = 0x881A975C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bctrl 
	ctx.lr = 0x881A9764;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A9764:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_881A976C:
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r8,204(r31)
	ctx.current_instruction = 0x881A9770;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r5,184(r31)
	ctx.current_instruction = 0x881A9774;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r9,15920(r31)
	ctx.current_instruction = 0x881A9780;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15920);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// lwz r11,3776(r31)
	ctx.current_instruction = 0x881A9788;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// and r30,r10,r4
	ctx.r30.u64 = ctx.r10.u64 & ctx.r4.u64;
	// lwz r10,164(r31)
	ctx.current_instruction = 0x881A9790;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// stw r8,92(r1)
	ctx.current_instruction = 0x881A9798;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mullw r4,r6,r30
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// stw r5,84(r1)
	ctx.current_instruction = 0x881A97A0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r3,100(r1)
	ctx.current_instruction = 0x881A97A8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lwz r7,220(r31)
	ctx.current_instruction = 0x881A97AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r6,172(r31)
	ctx.current_instruction = 0x881A97B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctrl 
	ctx.lr = 0x881A97CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A97CC:
	// lwz r11,20680(r31)
	ctx.current_instruction = 0x881A97CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// lwz r5,3784(r31)
	ctx.current_instruction = 0x881A97D0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,3780(r31)
	ctx.current_instruction = 0x881A97D8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// cntlzw r25,r11
	ctx.r25.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r8,224(r31)
	ctx.current_instruction = 0x881A97E0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,176(r31)
	ctx.current_instruction = 0x881A97E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r29,208(r31)
	ctx.current_instruction = 0x881A97F4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r27,196(r31)
	ctx.current_instruction = 0x881A97F8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r26,168(r31)
	ctx.current_instruction = 0x881A97FC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// srawi r28,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r29.s32 >> 1;
	// lwz r31,15916(r31)
	ctx.current_instruction = 0x881A9804;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 15916);
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r30.s32);
	// stw r27,92(r1)
	ctx.current_instruction = 0x881A980C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r29,100(r1)
	ctx.current_instruction = 0x881A9810;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r26,84(r1)
	ctx.current_instruction = 0x881A9814;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// rlwinm r31,r25,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 27) & 0x1;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r31,108(r1)
	ctx.current_instruction = 0x881A9828;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// bctrl 
	ctx.lr = 0x881A9830;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A9830:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881ADF70) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881ADF70;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881ADF70) {
			switch (rex_dispatch_address) {
				case 0x881ADF78:
				case 0x881ADFB0:
				case 0x881AE02C:
				case 0x881AE060:
				case 0x881AE0C4:
				case 0x881AE10C:
				case 0x881AE15C:
				case 0x881AE190:
				case 0x881AE1D8:
				case 0x881AE20C:
				case 0x881AE268:
				case 0x881AE29C:
				case 0x881AE2E4:
				case 0x881AE318:
				case 0x881AE360:
				case 0x881AE394:
				case 0x881AE3DC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ADF70;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881ADF78: goto loc_881ADF78;
		case 0x881ADFB0: goto loc_881ADFB0;
		case 0x881AE02C: goto loc_881AE02C;
		case 0x881AE060: goto loc_881AE060;
		case 0x881AE0C4: goto loc_881AE0C4;
		case 0x881AE10C: goto loc_881AE10C;
		case 0x881AE15C: goto loc_881AE15C;
		case 0x881AE190: goto loc_881AE190;
		case 0x881AE1D8: goto loc_881AE1D8;
		case 0x881AE20C: goto loc_881AE20C;
		case 0x881AE268: goto loc_881AE268;
		case 0x881AE29C: goto loc_881AE29C;
		case 0x881AE2E4: goto loc_881AE2E4;
		case 0x881AE318: goto loc_881AE318;
		case 0x881AE360: goto loc_881AE360;
		case 0x881AE394: goto loc_881AE394;
		case 0x881AE3DC: goto loc_881AE3DC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881ADF78;
	__savegprlr_28(ctx, base);
loc_881ADF78:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881ADF78;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x881ae20c
	if (ctx.cr6.eq) goto loc_881AE20C;
	// lwz r3,84(r3)
	ctx.current_instruction = 0x881ADF88;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881ADF8C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881ADF90;
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
	ctx.current_instruction = 0x881ADFA0;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881ADFA4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881adfb0
	if (!ctx.cr0.lt) goto loc_881ADFB0;
	// bl 0x88156678
	ctx.lr = 0x881ADFB0;
	sub_88156678(ctx, base);
loc_881ADFB0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x881ae20c
	if (!ctx.cr6.eq) goto loc_881AE20C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881ADFB8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x881ADFBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881adfd0
	if (ctx.cr6.eq) goto loc_881ADFD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x881adfd8
	goto loc_881ADFD8;
loc_881ADFD0:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x881ADFD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
loc_881ADFD8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881ADFD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r30,r11,29
	ctx.r30.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x881ae060
	if (ctx.cr6.gt) goto loc_881AE060;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881ae060
	if (ctx.cr6.eq) goto loc_881AE060;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881ae03c
	if (!ctx.cr6.gt) goto loc_881AE03C;
loc_881ADFFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ae03c
	if (ctx.cr6.eq) goto loc_881AE03C;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881AE004;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// std r6,0(r31)
	ctx.current_instruction = 0x881AE018;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881AE01C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x881ae02c
	if (!ctx.cr0.lt) goto loc_881AE02C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE02C;
	sub_88156678(ctx, base);
loc_881AE02C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE02C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881adffc
	if (ctx.cr6.gt) goto loc_881ADFFC;
loc_881AE03C:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881AE03C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x881AE04C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x881AE050;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x881ae060
	if (!ctx.cr0.lt) goto loc_881AE060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE060;
	sub_88156678(ctx, base);
loc_881AE060:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881AE060;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,24
	ctx.r30.s64 = 24;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE06C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x881ae0d4
	if (!ctx.cr6.lt) goto loc_881AE0D4;
loc_881AE07C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ae0d4
	if (ctx.cr6.eq) goto loc_881AE0D4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881AE088;
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
	ctx.current_instruction = 0x881AE0AC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881AE0B4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881ae0c4
	if (!ctx.cr0.lt) goto loc_881AE0C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE0C4;
	sub_88156678(ctx, base);
loc_881AE0C4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE0C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ae07c
	if (ctx.cr6.gt) goto loc_881AE07C;
loc_881AE0D4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881AE0D8;
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
	ctx.current_instruction = 0x881AE0F0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881AE0FC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881ae10c
	if (!ctx.cr0.lt) goto loc_881AE10C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE10C;
	sub_88156678(ctx, base);
loc_881AE10C:
	// cmpwi cr6,r30,170
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 170, ctx.xer);
	// bne cr6,0x881ae218
	if (!ctx.cr6.eq) goto loc_881AE218;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881AE114;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,24
	ctx.r30.s64 = 24;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE11C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x881ae16c
	if (!ctx.cr6.lt) goto loc_881AE16C;
loc_881AE12C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ae16c
	if (ctx.cr6.eq) goto loc_881AE16C;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881AE134;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// std r6,0(r31)
	ctx.current_instruction = 0x881AE148;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881AE14C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x881ae15c
	if (!ctx.cr0.lt) goto loc_881AE15C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE15C;
	sub_88156678(ctx, base);
loc_881AE15C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE15C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ae12c
	if (ctx.cr6.gt) goto loc_881AE12C;
loc_881AE16C:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881AE16C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x881AE17C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x881AE180;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x881ae190
	if (!ctx.cr0.lt) goto loc_881AE190;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE190;
	sub_88156678(ctx, base);
loc_881AE190:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881AE190;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,16
	ctx.r30.s64 = 16;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE198;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x881ae1e8
	if (!ctx.cr6.lt) goto loc_881AE1E8;
loc_881AE1A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ae1e8
	if (ctx.cr6.eq) goto loc_881AE1E8;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881AE1B0;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// std r6,0(r31)
	ctx.current_instruction = 0x881AE1C4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881AE1C8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x881ae1d8
	if (!ctx.cr0.lt) goto loc_881AE1D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE1D8;
	sub_88156678(ctx, base);
loc_881AE1D8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE1D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ae1a8
	if (ctx.cr6.gt) goto loc_881AE1A8;
loc_881AE1E8:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881AE1E8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x881AE1F8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x881AE1FC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x881ae20c
	if (!ctx.cr0.lt) goto loc_881AE20C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE20C;
	sub_88156678(ctx, base);
loc_881AE20C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_881AE218:
	// cmpwi cr6,r30,171
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 171, ctx.xer);
	// bne cr6,0x881ae3f0
	if (!ctx.cr6.eq) goto loc_881AE3F0;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881AE220;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,24
	ctx.r30.s64 = 24;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE228;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x881ae278
	if (!ctx.cr6.lt) goto loc_881AE278;
loc_881AE238:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ae278
	if (ctx.cr6.eq) goto loc_881AE278;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881AE240;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// std r6,0(r31)
	ctx.current_instruction = 0x881AE254;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881AE258;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x881ae268
	if (!ctx.cr0.lt) goto loc_881AE268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE268;
	sub_88156678(ctx, base);
loc_881AE268:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE268;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ae238
	if (ctx.cr6.gt) goto loc_881AE238;
loc_881AE278:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881AE278;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x881AE288;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x881AE28C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x881ae29c
	if (!ctx.cr0.lt) goto loc_881AE29C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE29C;
	sub_88156678(ctx, base);
loc_881AE29C:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881AE29C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,24
	ctx.r30.s64 = 24;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE2A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x881ae2f4
	if (!ctx.cr6.lt) goto loc_881AE2F4;
loc_881AE2B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ae2f4
	if (ctx.cr6.eq) goto loc_881AE2F4;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881AE2BC;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// std r6,0(r31)
	ctx.current_instruction = 0x881AE2D0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881AE2D4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x881ae2e4
	if (!ctx.cr0.lt) goto loc_881AE2E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE2E4;
	sub_88156678(ctx, base);
loc_881AE2E4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE2E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ae2b4
	if (ctx.cr6.gt) goto loc_881AE2B4;
loc_881AE2F4:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881AE2F4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x881AE304;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x881AE308;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x881ae318
	if (!ctx.cr0.lt) goto loc_881AE318;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE318;
	sub_88156678(ctx, base);
loc_881AE318:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881AE318;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,24
	ctx.r30.s64 = 24;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE320;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x881ae370
	if (!ctx.cr6.lt) goto loc_881AE370;
loc_881AE330:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ae370
	if (ctx.cr6.eq) goto loc_881AE370;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881AE338;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// std r6,0(r31)
	ctx.current_instruction = 0x881AE34C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881AE350;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x881ae360
	if (!ctx.cr0.lt) goto loc_881AE360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE360;
	sub_88156678(ctx, base);
loc_881AE360:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE360;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ae330
	if (ctx.cr6.gt) goto loc_881AE330;
loc_881AE370:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881AE370;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x881AE380;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x881AE384;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x881ae394
	if (!ctx.cr0.lt) goto loc_881AE394;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE394;
	sub_88156678(ctx, base);
loc_881AE394:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881AE394;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,16
	ctx.r30.s64 = 16;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE39C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x881ae1e8
	if (!ctx.cr6.lt) goto loc_881AE1E8;
loc_881AE3AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ae1e8
	if (ctx.cr6.eq) goto loc_881AE1E8;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881AE3B4;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// std r6,0(r31)
	ctx.current_instruction = 0x881AE3C8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881AE3CC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x881ae3dc
	if (!ctx.cr0.lt) goto loc_881AE3DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE3DC;
	sub_88156678(ctx, base);
loc_881AE3DC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AE3DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ae3ac
	if (ctx.cr6.gt) goto loc_881AE3AC;
	// b 0x881ae1e8
	goto loc_881AE1E8;
loc_881AE3F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B5E80) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881B5E80);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B5E80;
	ctx.current_instruction = 0x881B5E80;
	uint32_t ea{};
	// std r31,-8(r1)
	ctx.current_instruction = 0x881B5E80;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r5,16
	ctx.r5.s64 = 16;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r6,112
	ctx.r6.s64 = 112;
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// li r7,48
	ctx.r7.s64 = 48;
	// vspltish v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x3)));
	// li r8,80
	ctx.r8.s64 = 80;
	// lvx128 v3,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,64
	ctx.r9.s64 = 64;
	// vslh v26,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v10,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v8,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v4,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// lvx128 v7,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r11,96
	ctx.r11.s64 = 96;
	// vadduhm v24,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// lvx128 v31,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v23,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v6,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vspltish v30,1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_set1_epi16(short(0x1)));
	// vslh v21,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v12,6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x6)));
	// vadduhm v19,v2,v24
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// lvx128 v5,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubuhm v8,v23,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v20,v1,v25
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vslh v18,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v10,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v22.u8));
	// vadduhm v16,v1,v21
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vsubuhm v1,v8,v20
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsubuhm v29,v8,v19
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v15,v18,v2
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vor v8,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v17.u8));
	// vslh v14,v3,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v15,v8
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vsubuhm v27,v8,v16
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v23,v25,v4
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vor v8,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vadduhm v22,v3,v24
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vslh v21,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v31,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v14,v26
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v18,v8,v23
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vsubuhm v17,v8,v22
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v15,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v14,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v8,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vadduhm v2,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v16,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v9,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vslh v7,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v31,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v26,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v16,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v25,v2,v8
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v24,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v21,v26,v31
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v20,v4,v15
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v19,v3,v14
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vsubuhm v9,v2,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vsubuhm v1,v1,v18
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v31,v29,v17
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vsubuhm v7,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v8,v21,v24
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsubuhm v18,v10,v20
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsubuhm v17,v10,v19
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vor v11,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v25.u8));
	// vadduhm v5,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// lis r4,-30718
	ctx.r4.s64 = -2013134848;
	// vsubuhm v11,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// li r31,16
	ctx.r31.s64 = 16;
	// vadduhm v8,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// addi r4,r4,6240
	ctx.r4.s64 = ctx.r4.s64 + 6240;
	// vadduhm v10,v28,v18
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vspltish v16,8
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_set1_epi16(short(0x8)));
	// vadduhm v6,v27,v17
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vsubuhm v9,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v15,v8,v1
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v14,v5,v10
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v7,v11,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsubuhm v6,v11,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsubuhm v4,v5,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v2,v8,v1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsrah v11,v14,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v10,v15,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v3,v9,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v1,v9,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vsrah v8,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v31,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsrah v7,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrglh v29,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsrah v6,v3,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v9,v1,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v11,v4,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v28,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v22,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglh v27,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// lvx128 v7,r4,r31
	ea = (ctx.r4.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghh v26,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// lvx128 v6,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghh v25,v5,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglh v24,v5,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglh v23,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vmrghw128 v63,v31,v26
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v26.u32), simde_mm_load_si128((simde__m128i*)ctx.v31.u32)));
	// vmrghw128 v59,v28,v25
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v25.u32), simde_mm_load_si128((simde__m128i*)ctx.v28.u32)));
	// vmrglw128 v56,v27,v24
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v24.u32), simde_mm_load_si128((simde__m128i*)ctx.v27.u32)));
	// vmrglw128 v60,v29,v23
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v23.u32), simde_mm_load_si128((simde__m128i*)ctx.v29.u32)));
	// vmrglw128 v62,v31,v26
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v26.u32), simde_mm_load_si128((simde__m128i*)ctx.v31.u32)));
	// vmrglw128 v58,v28,v25
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v25.u32), simde_mm_load_si128((simde__m128i*)ctx.v28.u32)));
	// vmrghw128 v61,v29,v23
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v23.u32), simde_mm_load_si128((simde__m128i*)ctx.v29.u32)));
	// vmrghw128 v57,v27,v24
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v24.u32), simde_mm_load_si128((simde__m128i*)ctx.v27.u32)));
	// vperm128 v11,v63,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v10,v60,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v9,v62,v58,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v8,v61,v57,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v1,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vperm128 v4,v63,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v7,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vperm128 v3,v61,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v31,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v5,v62,v58,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v21,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v2,v60,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v20,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v19,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v16,v31,v21
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vsubuhm v11,v19,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v28,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v14,v31,v17
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v6,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v29,v11,v20
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsubuhm v31,v11,v16
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v15,v18,v1
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vor v11,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v28.u8));
	// vadduhm v10,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v25,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v24,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v23,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v28,v11,v15
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vsubuhm v27,v11,v14
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vadduhm v19,v25,v10
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v11,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v26.u8));
	// vadduhm v18,v1,v24
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vslh v17,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v16,v23,v6
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v15,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v14,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v9,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v4,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vslh v3,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v2,v5
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v25,v11,v19
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vsubuhm v24,v11,v18
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v23,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v21,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v1,v17
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vor v11,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v16.u8));
	// vadduhm v19,v15,v5
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v9,v14,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v10,v22,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vslh v0,v26,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubuhm v17,v11,v23
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vsubuhm v16,v11,v20
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v15,v21,v19
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v11,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v9,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsubuhm v0,v0,v15
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vsrah v8,v7,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v4,v31,v25
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vsrah v13,v6,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v1,v28,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v3,v29,v24
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v5,v27,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vsubuhm v11,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v9,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v0,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v6,v1,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v10,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v13,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v8,v3,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v14,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v5,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v4,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vsubuhm v2,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vsubuhm v1,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vsubuhm v31,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v30,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsrah v29,v14,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v29,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v24,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v28,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v23,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v27,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v22,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v26,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881B6214;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881DB3F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DB3F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DB3F0) {
			switch (rex_dispatch_address) {
				case 0x881DB3F8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DB3F0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881DB3F8: goto loc_881DB3F8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881DB3F8;
	__savegprlr_14(ctx, base);
loc_881DB3F8:
	// lis r11,-30717
	ctx.r11.s64 = -2013069312;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-26080
	ctx.r11.s64 = ctx.r11.s64 + -26080;
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// stw r8,-168(r1)
	ctx.current_instruction = 0x881DB408;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// lis r9,-24416
	ctx.r9.s64 = -1600126976;
	// stw r11,-164(r1)
	ctx.current_instruction = 0x881DB410;
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// li r6,51
	ctx.r6.s64 = 51;
	// ori r9,r9,41121
	ctx.r9.u64 = ctx.r9.u64 | 41121;
	// addi r7,r10,22816
	ctx.r7.s64 = ctx.r10.s64 + 22816;
loc_881DB420:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,-172(r1)
	ctx.current_instruction = 0x881DB424;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// stw r10,-176(r1)
	ctx.current_instruction = 0x881DB428;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
loc_881DB42C:
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x881DB430;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r7,259
	ctx.r4.s64 = ctx.r7.s64 + 259;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r24,r8,r4
	ctx.r24.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_881DB444:
	// rlwinm r4,r10,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF8;
	// rlwinm r3,r10,0,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC;
	// mulhw r5,r4,r9
	ctx.r5.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32)) >> 32;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// mulhw r31,r3,r9
	ctx.r31.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r5,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 5;
	// add r29,r31,r3
	ctx.r29.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r30,r5,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// divw r28,r4,r6
	ctx.r28.u64 = uint32_t((ctx.r6.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r4.s32 / ctx.r6.s32 : 0);
	// add r31,r5,r30
	ctx.r31.u64 = ctx.r5.u64 + ctx.r30.u64;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// mulli r31,r31,51
	ctx.r31.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(51));
	// subf r30,r31,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r31.u64;
	// addi r31,r5,-1
	ctx.r31.s64 = ctx.r5.s64 + -1;
	// subfc r4,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r30.u64;
	// eqv r27,r30,r11
	ctx.r27.u64 = ~(ctx.r30.u64 ^ ctx.r11.u64);
	// eqv r26,r30,r11
	ctx.r26.u64 = ~(ctx.r30.u64 ^ ctx.r11.u64);
	// rlwinm r27,r27,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// rlwinm r4,r31,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF8;
	// addze r25,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r25.s64 = temp.s64;
	// subfc r30,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r30.u64 = ctx.r11.u64 - ctx.r30.u64;
	// rlwinm r31,r31,0,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFC;
	// rlwinm r30,r26,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x1;
	// add r26,r8,r10
	ctx.r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addze r27,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r27.s64 = temp.s64;
	// srawi r30,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r29.s32 >> 5;
	// clrlwi r29,r27,31
	ctx.r29.u64 = ctx.r27.u32 & 0x1;
	// rlwinm r27,r30,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// mulhw r27,r4,r9
	ctx.r27.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32)) >> 32;
	// mulli r30,r30,51
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(51));
	// subf r23,r30,r3
	ctx.r23.u64 = ctx.r3.u64 - ctx.r30.u64;
	// rlwinm r30,r29,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// subfc r22,r23,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r23.u32;
	ctx.r22.u64 = ctx.r11.u64 - ctx.r23.u64;
	// eqv r23,r23,r11
	ctx.r23.u64 = ~(ctx.r23.u64 ^ ctx.r11.u64);
	// add r27,r27,r4
	ctx.r27.u64 = ctx.r27.u64 + ctx.r4.u64;
	// rlwinm r23,r23,1,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0x1;
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addze r23,r23
	temp.s64 = ctx.r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r23.u32;
	ctx.r23.s64 = temp.s64;
	// srawi r30,r27,5
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r27.s32 >> 5;
	// divw r3,r3,r6
	ctx.r3.u64 = uint32_t((ctx.r6.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r3.s32 / ctx.r6.s32 : 0);
	// rlwinm r27,r30,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// add r20,r8,r10
	ctx.r20.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r27,r30,r27
	ctx.r27.u64 = ctx.r30.u64 + ctx.r27.u64;
	// clrlwi r30,r23,31
	ctx.r30.u64 = ctx.r23.u32 & 0x1;
	// mulli r27,r27,51
	ctx.r27.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(51));
	// subf r23,r27,r4
	ctx.r23.u64 = ctx.r4.u64 - ctx.r27.u64;
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// subfc r30,r23,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r23.u32;
	ctx.r30.u64 = ctx.r11.u64 - ctx.r23.u64;
	// eqv r22,r23,r11
	ctx.r22.u64 = ~(ctx.r23.u64 ^ ctx.r11.u64);
	// rlwinm r27,r3,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r22,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0x1;
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addze r22,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r22.s64 = temp.s64;
	// subfc r21,r23,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r23.u32;
	ctx.r21.u64 = ctx.r11.u64 - ctx.r23.u64;
	// eqv r23,r23,r11
	ctx.r23.u64 = ~(ctx.r23.u64 ^ ctx.r11.u64);
	// mulhw r3,r31,r9
	ctx.r3.s64 = (int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32)) >> 32;
	// clrlwi r30,r25,31
	ctx.r30.u64 = ctx.r25.u32 & 0x1;
	// rlwinm r25,r23,1,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0x1;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// divw r28,r4,r6
	ctx.r28.u64 = uint32_t((ctx.r6.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r4.s32 / ctx.r6.s32 : 0);
	// addze r25,r25
	temp.s64 = ctx.r25.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r25.u32;
	ctx.r25.s64 = temp.s64;
	// stbx r30,r26,r7
	ctx.current_instruction = 0x881DB544;
	REX_STORE_U8(ctx.r26.u32 + ctx.r7.u32, ctx.r30.u8);
	// srawi r4,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 5;
	// addi r19,r7,256
	ctx.r19.s64 = ctx.r7.s64 + 256;
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r30,r5,0,24,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xF8;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r8,r10
	ctx.r23.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r21,r7,512
	ctx.r21.s64 = ctx.r7.s64 + 512;
	// rlwinm r27,r27,1,24,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFE;
	// mulli r3,r4,51
	ctx.r3.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(51));
	// stbx r27,r20,r19
	ctx.current_instruction = 0x881DB570;
	REX_STORE_U8(ctx.r20.u32 + ctx.r19.u32, ctx.r27.u8);
	// addi r29,r29,10
	ctx.r29.s64 = ctx.r29.s64 + 10;
	// mulhw r4,r30,r9
	ctx.r4.s64 = (int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32)) >> 32;
	// stbx r29,r23,r21
	ctx.current_instruction = 0x881DB57C;
	REX_STORE_U8(ctx.r23.u32 + ctx.r21.u32, ctx.r29.u8);
	// subf r3,r3,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r3.u64;
	// add r27,r4,r30
	ctx.r27.u64 = ctx.r4.u64 + ctx.r30.u64;
	// subfc r29,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r29.u64 = ctx.r11.u64 - ctx.r3.u64;
	// std r24,-160(r1)
	ctx.current_instruction = 0x881DB58C;
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r24.u64);
	// eqv r3,r3,r11
	ctx.r3.u64 = ~(ctx.r3.u64 ^ ctx.r11.u64);
	// clrlwi r4,r25,31
	ctx.r4.u64 = ctx.r25.u32 & 0x1;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r29,r4,r28
	ctx.r29.u64 = ctx.r4.u64 + ctx.r28.u64;
	// addze r25,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r25.s64 = temp.s64;
	// srawi r4,r27,5
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 5;
	// rlwinm r26,r29,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r27,r4,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r3,r5,0,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFC;
	// add r27,r4,r27
	ctx.r27.u64 = ctx.r4.u64 + ctx.r27.u64;
	// add r26,r29,r26
	ctx.r26.u64 = ctx.r29.u64 + ctx.r26.u64;
	// mulli r27,r27,51
	ctx.r27.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(51));
	// subf r27,r27,r30
	ctx.r27.u64 = ctx.r30.u64 - ctx.r27.u64;
	// mulhw r4,r3,r9
	ctx.r4.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32)) >> 32;
	// subfc r23,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r27.u32;
	ctx.r23.u64 = ctx.r11.u64 - ctx.r27.u64;
	// eqv r21,r27,r11
	ctx.r21.u64 = ~(ctx.r27.u64 ^ ctx.r11.u64);
	// eqv r20,r27,r11
	ctx.r20.u64 = ~(ctx.r27.u64 ^ ctx.r11.u64);
	// rlwinm r23,r21,1,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0x1;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addze r23,r23
	temp.s64 = ctx.r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r23.u32;
	ctx.r23.s64 = temp.s64;
	// subfc r29,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r27.u32;
	ctx.r29.u64 = ctx.r11.u64 - ctx.r27.u64;
	// divw r31,r31,r6
	ctx.r31.u64 = uint32_t((ctx.r6.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r31.s32 / ctx.r6.s32 : 0);
	// rlwinm r29,r20,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0x1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addze r21,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r21.s64 = temp.s64;
	// srawi r4,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 5;
	// divw r27,r30,r6
	ctx.r27.u64 = uint32_t((ctx.r6.s32 && !(ctx.r30.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r30.s32 / ctx.r6.s32 : 0);
	// rlwinm r29,r4,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// clrlwi r30,r23,31
	ctx.r30.u64 = ctx.r23.u32 & 0x1;
	// add r29,r4,r29
	ctx.r29.u64 = ctx.r4.u64 + ctx.r29.u64;
	// clrlwi r4,r25,31
	ctx.r4.u64 = ctx.r25.u32 & 0x1;
	// mulli r29,r29,51
	ctx.r29.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(51));
	// add r31,r4,r31
	ctx.r31.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r29,r29,r3
	ctx.r29.u64 = ctx.r3.u64 - ctx.r29.u64;
	// rlwinm r25,r31,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r5,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xF8;
	// subfc r23,r29,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r29.u32;
	ctx.r23.u64 = ctx.r11.u64 - ctx.r29.u64;
	// add r25,r31,r25
	ctx.r25.u64 = ctx.r31.u64 + ctx.r25.u64;
	// eqv r29,r29,r11
	ctx.r29.u64 = ~(ctx.r29.u64 ^ ctx.r11.u64);
	// mulhw r31,r4,r9
	ctx.r31.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32)) >> 32;
	// rlwinm r29,r29,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// add r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 + ctx.r4.u64;
	// addze r23,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r23.s64 = temp.s64;
	// srawi r31,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 5;
	// add r20,r30,r27
	ctx.r20.u64 = ctx.r30.u64 + ctx.r27.u64;
	// rlwinm r30,r31,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// clrlwi r29,r22,31
	ctx.r29.u64 = ctx.r22.u32 & 0x1;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mulli r31,r31,51
	ctx.r31.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(51));
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r8,r10
	ctx.r28.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r22,r7,1
	ctx.r22.s64 = ctx.r7.s64 + 1;
	// subf r30,r31,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r31.u64;
	// addi r31,r26,10
	ctx.r31.s64 = ctx.r26.s64 + 10;
	// add r17,r8,r10
	ctx.r17.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r16,r7,257
	ctx.r16.s64 = ctx.r7.s64 + 257;
	// subfc r26,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r26.u64 = ctx.r11.u64 - ctx.r30.u64;
	// stbx r29,r28,r22
	ctx.current_instruction = 0x881DB678;
	REX_STORE_U8(ctx.r28.u32 + ctx.r22.u32, ctx.r29.u8);
	// eqv r24,r30,r11
	ctx.r24.u64 = ~(ctx.r30.u64 ^ ctx.r11.u64);
	// add r19,r8,r10
	ctx.r19.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r18,r7,513
	ctx.r18.s64 = ctx.r7.s64 + 513;
	// rlwinm r25,r25,1,24,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFE;
	// rlwinm r29,r24,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0x1;
	// rlwinm r5,r5,0,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFC;
	// stbx r25,r17,r16
	ctx.current_instruction = 0x881DB694;
	REX_STORE_U8(ctx.r17.u32 + ctx.r16.u32, ctx.r25.u8);
	// add r15,r8,r10
	ctx.r15.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r14,r7,2
	ctx.r14.s64 = ctx.r7.s64 + 2;
	// stbx r31,r19,r18
	ctx.current_instruction = 0x881DB6A0;
	REX_STORE_U8(ctx.r19.u32 + ctx.r18.u32, ctx.r31.u8);
	// eqv r28,r30,r11
	ctx.r28.u64 = ~(ctx.r30.u64 ^ ctx.r11.u64);
	// addze r25,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r25.s64 = temp.s64;
	// mulhw r31,r5,r9
	ctx.r31.s64 = (int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32)) >> 32;
	// stbx r20,r15,r14
	ctx.current_instruction = 0x881DB6B0;
	REX_STORE_U8(ctx.r15.u32 + ctx.r14.u32, ctx.r20.u8);
	// clrlwi r26,r21,31
	ctx.r26.u64 = ctx.r21.u32 & 0x1;
	// subfc r30,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r30.u64 = ctx.r11.u64 - ctx.r30.u64;
	// divw r29,r4,r6
	ctx.r29.u64 = uint32_t((ctx.r6.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r4.s32 / ctx.r6.s32 : 0);
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// rlwinm r30,r28,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// add r4,r26,r27
	ctx.r4.u64 = ctx.r26.u64 + ctx.r27.u64;
	// addze r28,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r28.s64 = temp.s64;
	// ld r24,-160(r1)
	ctx.current_instruction = 0x881DB6D0;
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// srawi r30,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r31.s32 >> 5;
	// clrlwi r31,r28,31
	ctx.r31.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r28,r30,1,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r30,r30,51
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(51));
	// subf r27,r30,r5
	ctx.r27.u64 = ctx.r5.u64 - ctx.r30.u64;
	// add r28,r4,r28
	ctx.r28.u64 = ctx.r4.u64 + ctx.r28.u64;
	// subfc r26,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r27.u32;
	ctx.r26.u64 = ctx.r11.u64 - ctx.r27.u64;
	// eqv r27,r27,r11
	ctx.r27.u64 = ~(ctx.r27.u64 ^ ctx.r11.u64);
	// rlwinm r30,r31,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r27,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addze r27,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r27.s64 = temp.s64;
	// divw r4,r5,r6
	ctx.r4.u64 = uint32_t((ctx.r6.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r5.s32 / ctx.r6.s32 : 0);
	// clrlwi r5,r27,31
	ctx.r5.u64 = ctx.r27.u32 & 0x1;
	// divw r30,r3,r6
	ctx.r30.u64 = uint32_t((ctx.r6.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r3.s32 / ctx.r6.s32 : 0);
	// clrlwi r3,r23,31
	ctx.r3.u64 = ctx.r23.u32 & 0x1;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r28,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r28,r5,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r30,r25,31
	ctx.r30.u64 = ctx.r25.u32 & 0x1;
	// addi r27,r27,10
	ctx.r27.s64 = ctx.r27.s64 + 10;
	// addi r22,r7,514
	ctx.r22.s64 = ctx.r7.s64 + 514;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r3,r3,1,24,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// add r26,r8,r10
	ctx.r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stbx r3,r24,r10
	ctx.current_instruction = 0x881DB760;
	REX_STORE_U8(ctx.r24.u32 + ctx.r10.u32, ctx.r3.u8);
	// add r25,r8,r10
	ctx.r25.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stbx r27,r4,r22
	ctx.current_instruction = 0x881DB768;
	REX_STORE_U8(ctx.r4.u32 + ctx.r22.u32, ctx.r27.u8);
	// add r23,r8,r10
	ctx.r23.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r28,r7,258
	ctx.r28.s64 = ctx.r7.s64 + 258;
	// addi r29,r7,3
	ctx.r29.s64 = ctx.r7.s64 + 3;
	// addi r31,r31,10
	ctx.r31.s64 = ctx.r31.s64 + 10;
	// addi r21,r7,515
	ctx.r21.s64 = ctx.r7.s64 + 515;
	// rlwinm r5,r5,1,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// clrlwi r3,r30,24
	ctx.r3.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// stbx r5,r26,r28
	ctx.current_instruction = 0x881DB78C;
	REX_STORE_U8(ctx.r26.u32 + ctx.r28.u32, ctx.r5.u8);
	// stbx r3,r25,r29
	ctx.current_instruction = 0x881DB790;
	REX_STORE_U8(ctx.r25.u32 + ctx.r29.u32, ctx.r3.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbx r4,r23,r21
	ctx.current_instruction = 0x881DB798;
	REX_STORE_U8(ctx.r23.u32 + ctx.r21.u32, ctx.r4.u8);
	// bdnz 0x881db444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881DB444;
	// lwz r11,-176(r1)
	ctx.current_instruction = 0x881DB7A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// addi r8,r8,3072
	ctx.r8.s64 = ctx.r8.s64 + 3072;
	// lwz r5,-172(r1)
	ctx.current_instruction = 0x881DB7A8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// stw r10,-176(r1)
	ctx.current_instruction = 0x881DB7B4;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// stw r11,-172(r1)
	ctx.current_instruction = 0x881DB7B8;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// bne 0x881db42c
	if (!ctx.cr0.eq) goto loc_881DB42C;
	// lwz r10,-168(r1)
	ctx.current_instruction = 0x881DB7C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r5,-164(r1)
	ctx.current_instruction = 0x881DB7C4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// addi r8,r10,768
	ctx.r8.s64 = ctx.r10.s64 + 768;
	// addi r4,r5,64
	ctx.r4.s64 = ctx.r5.s64 + 64;
	// stw r8,-168(r1)
	ctx.current_instruction = 0x881DB7D0;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x881db420
	if (ctx.cr6.lt) goto loc_881DB420;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E0DB0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E0DB0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E0DB0) {
			switch (rex_dispatch_address) {
				case 0x881E0DB8:
				case 0x881E0E54:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E0DB0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E0DB8: goto loc_881E0DB8;
		case 0x881E0E54: goto loc_881E0E54;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x881E0DB8;
	__savegprlr_20(ctx, base);
loc_881E0DB8:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x881E0DB8;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,300(r1)
	ctx.current_instruction = 0x881E0DBC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// srawi r11,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 31;
	// xor r31,r22,r11
	ctx.r31.u64 = ctx.r22.u64 ^ ctx.r11.u64;
	// subf r11,r11,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r11.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x881e0ddc
	if (ctx.cr6.eq) goto loc_881E0DDC;
	// srawi r31,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r22.s32 >> 1;
loc_881E0DDC:
	// srawi r24,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r7.s32 >> 1;
	// srawi. r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r25,r31,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// ble 0x881e0e48
	if (!ctx.cr0.gt) goto loc_881E0E48;
	// lwz r28,316(r1)
	ctx.current_instruction = 0x881E0DEC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_881E0DF8:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x881e0e38
	if (!ctx.cr6.gt) goto loc_881E0E38;
	// add r27,r29,r6
	ctx.r27.u64 = ctx.r29.u64 + ctx.r6.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// addi r26,r28,1
	ctx.r26.s64 = ctx.r28.s64 + 1;
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_881E0E18:
	// lbzx r21,r30,r5
	ctx.current_instruction = 0x881E0E18;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// lbzx r20,r27,r11
	ctx.current_instruction = 0x881E0E1C;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stbx r21,r28,r31
	ctx.current_instruction = 0x881E0E28;
	REX_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r21.u8);
	// stbx r20,r26,r31
	ctx.current_instruction = 0x881E0E2C;
	REX_STORE_U8(ctx.r26.u32 + ctx.r31.u32, ctx.r20.u8);
	// add r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 + ctx.r25.u64;
	// bdnz 0x881e0e18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E0E18;
loc_881E0E38:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addi r28,r28,-2
	ctx.r28.s64 = ctx.r28.s64 + -2;
	// bne 0x881e0df8
	if (!ctx.cr0.eq) goto loc_881E0DF8;
loc_881E0E48:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x881e00f8
	ctx.lr = 0x881E0E54;
	sub_881E00F8(ctx, base);
loc_881E0E54:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E2078) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E2078;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E2078) {
			switch (rex_dispatch_address) {
				case 0x881E2080:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E2078;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881E2080: goto loc_881E2080;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881E2080;
	__savegprlr_14(ctx, base);
loc_881E2080:
	// rlwinm r11,r7,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,76(r1)
	ctx.current_instruction = 0x881E2084;
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x881E2088;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwz r31,92(r1)
	ctx.current_instruction = 0x881E2090;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// subf r29,r7,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r27,r10,-1
	ctx.r27.s64 = ctx.r10.s64 + -1;
	// subf r26,r7,r8
	ctx.r26.u64 = ctx.r8.u64 - ctx.r7.u64;
	// divw r28,r29,r27
	ctx.r28.u64 = uint32_t((ctx.r27.s32 && !(ctx.r29.s32 == INT32_MIN && ctx.r27.s32 == -1)) ? ctx.r29.s32 / ctx.r27.s32 : 0);
	// addi r25,r31,-1
	ctx.r25.s64 = ctx.r31.s64 + -1;
	// srawi r7,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 4;
	// divw r10,r26,r25
	ctx.r10.u64 = uint32_t((ctx.r25.s32 && !(ctx.r26.s32 == INT32_MIN && ctx.r25.s32 == -1)) ? ctx.r26.s32 / ctx.r25.s32 : 0);
	// addze r30,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r30.s64 = temp.s64;
	// rotlwi r7,r29,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// stw r10,-168(r1)
	ctx.current_instruction = 0x881E20BC;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r10.u32);
	// srawi r29,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 4;
	// addi r24,r7,-1
	ctx.r24.s64 = ctx.r7.s64 + -1;
	// rotlwi r31,r26,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// addze r7,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r7.s64 = temp.s64;
	// lis r23,0
	ctx.r23.s64 = 0;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r14,r3,-2
	ctx.r14.s64 = ctx.r3.s64 + -2;
	// ori r19,r23,32768
	ctx.r19.u64 = ctx.r23.u64 | 32768;
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// andc r7,r25,r31
	ctx.r7.u64 = ctx.r25.u64 & ~ctx.r31.u64;
	// andc r8,r27,r24
	ctx.r8.u64 = ctx.r27.u64 & ~ctx.r24.u64;
	// clrlwi r31,r14,30
	ctx.r31.u64 = ctx.r14.u32 & 0x3;
	// subf r30,r19,r3
	ctx.r30.u64 = ctx.r3.u64 - ctx.r19.u64;
	// twllei r27,0
	if (ctx.r27.s32 == 0 || ctx.r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r25,0
	if (ctx.r25.s32 == 0 || ctx.r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r30,-176(r1)
	ctx.current_instruction = 0x881E2100;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r30.u32);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subf r22,r19,r11
	ctx.r22.u64 = ctx.r11.u64 - ctx.r19.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// bne cr6,0x881e2204
	if (!ctx.cr6.eq) goto loc_881E2204;
	// cmpw cr6,r30,r19
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x881e2304
	if (ctx.cr6.lt) goto loc_881E2304;
	// lwz r17,100(r1)
	ctx.current_instruction = 0x881E2124;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r16,r10,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r15,r17,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
loc_881E2130:
	// srawi r8,r18,16
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r18.s32 >> 16;
	// add r11,r18,r10
	ctx.r11.u64 = ctx.r18.u64 + ctx.r10.u64;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r31,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 16;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpw cr6,r22,r19
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x881e21f0
	if (ctx.cr6.lt) goto loc_881E21F0;
	// lwz r30,76(r1)
	ctx.current_instruction = 0x881E2150;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r24,r3,r30
	ctx.r24.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// mullw r3,r31,r9
	ctx.r3.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r23,r24,r6
	ctx.r23.u64 = ctx.r24.u64 + ctx.r6.u64;
	// add r30,r8,r4
	ctx.r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r29,r3,r4
	ctx.r29.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r21,r17,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r28,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_881E2174:
	// srawi r8,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 16;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// add r11,r20,r11
	ctx.r11.u64 = ctx.r20.u64 + ctx.r11.u64;
	// add r25,r24,r3
	ctx.r25.u64 = ctx.r24.u64 + ctx.r3.u64;
	// lbzx r27,r30,r8
	ctx.current_instruction = 0x881E2188;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// lbzx r26,r29,r8
	ctx.current_instruction = 0x881E2190;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// srawi r8,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 16;
	// lbzx r3,r23,r3
	ctx.current_instruction = 0x881E2198;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r3.u32);
	// rotlwi r27,r27,24
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 24);
	// rotlwi r26,r26,24
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 24);
	// lbzx r31,r25,r5
	ctx.current_instruction = 0x881E21A4;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r5.u32);
	// rotlwi r3,r3,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// lbzx r25,r30,r8
	ctx.current_instruction = 0x881E21AC;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// lbzx r8,r29,r8
	ctx.current_instruction = 0x881E21B0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// rotlwi r25,r25,8
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r25.u32, 8);
	// add r25,r25,r31
	ctx.r25.u64 = ctx.r25.u64 + ctx.r31.u64;
	// stw r8,-172(r1)
	ctx.current_instruction = 0x881E21BC;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r8.u32);
	// add r8,r27,r3
	ctx.r8.u64 = ctx.r27.u64 + ctx.r3.u64;
	// lwz r27,-172(r1)
	ctx.current_instruction = 0x881E21C4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// rlwinm r27,r27,8,0,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r26,r3
	ctx.r3.u64 = ctx.r26.u64 + ctx.r3.u64;
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
	// or r8,r25,r8
	ctx.r8.u64 = ctx.r25.u64 | ctx.r8.u64;
	// or r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 | ctx.r3.u64;
	// stw r8,0(r7)
	ctx.current_instruction = 0x881E21DC;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stwx r3,r21,r7
	ctx.current_instruction = 0x881E21E0;
	REX_STORE_U32(ctx.r21.u32 + ctx.r7.u32, ctx.r3.u32);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// ble cr6,0x881e2174
	if (!ctx.cr6.gt) goto loc_881E2174;
	// lwz r30,-176(r1)
	ctx.current_instruction = 0x881E21EC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
loc_881E21F0:
	// add r18,r16,r18
	ctx.r18.u64 = ctx.r16.u64 + ctx.r18.u64;
	// add r14,r15,r14
	ctx.r14.u64 = ctx.r15.u64 + ctx.r14.u64;
	// cmpw cr6,r18,r30
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x881e2130
	if (!ctx.cr6.gt) goto loc_881E2130;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881E2204:
	// cmpw cr6,r30,r19
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x881e2304
	if (ctx.cr6.lt) goto loc_881E2304;
	// lwz r17,100(r1)
	ctx.current_instruction = 0x881E220C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r16,r10,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r15,r17,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
loc_881E2218:
	// srawi r7,r18,16
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r18.s32 >> 16;
	// add r11,r18,r10
	ctx.r11.u64 = ctx.r18.u64 + ctx.r10.u64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// srawi r31,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 16;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// cmpw cr6,r22,r19
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x881e22f4
	if (ctx.cr6.lt) goto loc_881E22F4;
	// lwz r10,76(r1)
	ctx.current_instruction = 0x881E2238;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// rlwinm r27,r17,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r28,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r23,r3,r10
	ctx.r23.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// mullw r3,r7,r9
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r31,r9
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r21,r23,r6
	ctx.r21.u64 = ctx.r23.u64 + ctx.r6.u64;
	// add r30,r3,r4
	ctx.r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r29,r7,r4
	ctx.r29.u64 = ctx.r7.u64 + ctx.r4.u64;
loc_881E225C:
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// add r10,r8,r28
	ctx.r10.u64 = ctx.r8.u64 + ctx.r28.u64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r26,r23,r3
	ctx.r26.u64 = ctx.r23.u64 + ctx.r3.u64;
	// lbzx r25,r30,r7
	ctx.current_instruction = 0x881E2270;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// add r8,r20,r8
	ctx.r8.u64 = ctx.r20.u64 + ctx.r8.u64;
	// lbzx r7,r29,r7
	ctx.current_instruction = 0x881E2278;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// rotlwi r24,r25,8
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r25.u32, 8);
	// lbzx r3,r21,r3
	ctx.current_instruction = 0x881E2280;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r3.u32);
	// cmpw cr6,r8,r22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r22.s32, ctx.xer);
	// stw r7,-172(r1)
	ctx.current_instruction = 0x881E2288;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r7.u32);
	// srawi r7,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 16;
	// lwz r10,-172(r1)
	ctx.current_instruction = 0x881E2290;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// rlwinm r25,r10,8,0,23
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbzx r10,r26,r5
	ctx.current_instruction = 0x881E2298;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r5.u32);
	// lbzx r26,r30,r7
	ctx.current_instruction = 0x881E229C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// lbzx r7,r29,r7
	ctx.current_instruction = 0x881E22A0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// stw r31,-172(r1)
	ctx.current_instruction = 0x881E22A4;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r31.u32);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// rotlwi r26,r26,8
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 8);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r10,r24,r10
	ctx.r10.u64 = ctx.r24.u64 + ctx.r10.u64;
	// add r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 + ctx.r31.u64;
	// add r26,r26,r3
	ctx.r26.u64 = ctx.r26.u64 + ctx.r3.u64;
	// sth r10,2(r11)
	ctx.current_instruction = 0x881E22C0;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// clrlwi r3,r31,16
	ctx.r3.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r31,-172(r1)
	ctx.current_instruction = 0x881E22CC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r3,2(r31)
	ctx.current_instruction = 0x881E22D8;
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// sth r10,0(r11)
	ctx.current_instruction = 0x881E22DC;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// sthx r7,r27,r11
	ctx.current_instruction = 0x881E22E0;
	REX_STORE_U16(ctx.r27.u32 + ctx.r11.u32, ctx.r7.u16);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// ble cr6,0x881e225c
	if (!ctx.cr6.gt) goto loc_881E225C;
	// lwz r10,-168(r1)
	ctx.current_instruction = 0x881E22EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r30,-176(r1)
	ctx.current_instruction = 0x881E22F0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
loc_881E22F4:
	// add r18,r16,r18
	ctx.r18.u64 = ctx.r16.u64 + ctx.r18.u64;
	// add r14,r15,r14
	ctx.r14.u64 = ctx.r15.u64 + ctx.r14.u64;
	// cmpw cr6,r18,r30
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x881e2218
	if (!ctx.cr6.gt) goto loc_881E2218;
loc_881E2304:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EA528) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EA528;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EA528) {
			switch (rex_dispatch_address) {
				case 0x881EA530:
				case 0x881EA5A0:
				case 0x881EA5C4:
				case 0x881EA5D8:
				case 0x881EA658:
				case 0x881EA69C:
				case 0x881EA6EC:
				case 0x881EA71C:
				case 0x881EA758:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EA528;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EA530: goto loc_881EA530;
		case 0x881EA5A0: goto loc_881EA5A0;
		case 0x881EA5C4: goto loc_881EA5C4;
		case 0x881EA5D8: goto loc_881EA5D8;
		case 0x881EA658: goto loc_881EA658;
		case 0x881EA69C: goto loc_881EA69C;
		case 0x881EA6EC: goto loc_881EA6EC;
		case 0x881EA71C: goto loc_881EA71C;
		case 0x881EA758: goto loc_881EA758;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881EA530;
	__savegprlr_27(ctx, base);
loc_881EA530:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881EA530;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r29,r11,16,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// li r27,64
	ctx.r27.s64 = 64;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,88(r1)
	ctx.current_instruction = 0x881EA558;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_881EA55C:
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.current_instruction = 0x881EA564;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,84(r1)
	ctx.current_instruction = 0x881EA56C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x881ea5e0
	if (ctx.cr6.eq) goto loc_881EA5E0;
	// lwz r11,48(r4)
	ctx.current_instruction = 0x881EA574;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ea5f0
	if (ctx.cr6.gt) goto loc_881EA5F0;
	// lwz r11,28(r4)
	ctx.current_instruction = 0x881EA580;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,88(r1)
	ctx.current_instruction = 0x881EA584;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ea5f0
	if (ctx.cr6.gt) goto loc_881EA5F0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881e9458
	ctx.lr = 0x881EA5A0;
	sub_881E9458(ctx, base);
loc_881EA5A0:
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x881ea5f0
	if (ctx.cr0.eq) goto loc_881EA5F0;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x881EA5A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	ctx.current_instruction = 0x881EA5BC;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x881e9740
	ctx.lr = 0x881EA5C4;
	sub_881E9740(ctx, base);
loc_881EA5C4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,88(r1)
	ctx.current_instruction = 0x881EA5CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x881e9b48
	ctx.lr = 0x881EA5D8;
	sub_881E9B48(ctx, base);
loc_881EA5D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x881ea75c
	goto loc_881EA75C;
loc_881EA5E0:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x881ea5f0
	if (!ctx.cr6.eq) goto loc_881EA5F0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_881EA5F0:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x881ea55c
	if (ctx.cr6.lt) goto loc_881EA55C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x881ea758
	if (ctx.cr6.eq) goto loc_881EA758;
	// lwz r11,20(r31)
	ctx.current_instruction = 0x881EA610;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ea758
	if (ctx.cr0.eq) goto loc_881EA758;
	// lwz r11,32(r31)
	ctx.current_instruction = 0x881EA61C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addis r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r30,80(r1)
	ctx.current_instruction = 0x881EA62C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r10,84(r1)
	ctx.current_instruction = 0x881EA630;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x881ea63c
	if (ctx.cr6.gt) goto loc_881EA63C;
	// stw r11,80(r1)
	ctx.current_instruction = 0x881EA638;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_881EA63C:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r31)
	ctx.current_instruction = 0x881EA640;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x88243720
	ctx.lr = 0x881EA658;
	__imp__NtAllocateVirtualMemory(ctx, base);
loc_881EA658:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x881ea6ac
	if (!ctx.cr0.lt) goto loc_881EA6AC;
loc_881EA660:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881EA660;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x881ea6a4
	if (ctx.cr6.eq) goto loc_881EA6A4;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r11,80(r1)
	ctx.current_instruction = 0x881EA670;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x881ea680
	if (!ctx.cr6.lt) goto loc_881EA680;
	// stw r30,80(r1)
	ctx.current_instruction = 0x881EA67C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_881EA680:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r31)
	ctx.current_instruction = 0x881EA684;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x88243720
	ctx.lr = 0x881EA69C;
	__imp__NtAllocateVirtualMemory(ctx, base);
loc_881EA69C:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x881ea660
	if (ctx.cr0.lt) goto loc_881EA660;
loc_881EA6A4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881ea758
	if (ctx.cr6.lt) goto loc_881EA758;
loc_881EA6AC:
	// lwz r10,32(r31)
	ctx.current_instruction = 0x881EA6AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x881EA6B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,36(r31)
	ctx.current_instruction = 0x881EA6B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r30,92(r1)
	ctx.current_instruction = 0x881EA6BC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r10,32(r31)
	ctx.current_instruction = 0x881EA6C4;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bgt cr6,0x881ea6d0
	if (ctx.cr6.gt) goto loc_881EA6D0;
	// stw r11,92(r1)
	ctx.current_instruction = 0x881EA6CC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_881EA6D0:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r31)
	ctx.current_instruction = 0x881EA6D4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x88243720
	ctx.lr = 0x881EA6EC;
	__imp__NtAllocateVirtualMemory(ctx, base);
loc_881EA6EC:
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x881ea740
	if (ctx.cr0.lt) goto loc_881EA740;
	// lwz r7,84(r1)
	ctx.current_instruction = 0x881EA6F4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881EA6FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r10,92(r1)
	ctx.current_instruction = 0x881EA704;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x881ea3c0
	ctx.lr = 0x881EA71C;
	sub_881EA3C0(ctx, base);
loc_881EA71C:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x881ea72c
	if (!ctx.cr0.eq) goto loc_881EA72C;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,23
	ctx.r30.u64 = ctx.r30.u64 | 23;
loc_881EA72C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881ea740
	if (ctx.cr6.lt) goto loc_881EA740;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x881EA734;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,40(r11)
	ctx.current_instruction = 0x881EA738;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x881ea75c
	goto loc_881EA75C;
loc_881EA740:
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r6,1424(r31)
	ctx.current_instruction = 0x881EA744;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x88243750
	ctx.lr = 0x881EA758;
	__imp__NtFreeVirtualMemory(ctx, base);
loc_881EA758:
	// li r3,0
	ctx.r3.s64 = 0;
loc_881EA75C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881ED488) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881ED488;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881ED488) {
			switch (rex_dispatch_address) {
				case 0x881ED498:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ED488;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881ED498: goto loc_881ED498;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881ED48C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881ED490;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x882436f0
	ctx.lr = 0x881ED498;
	__imp__RtlNtStatusToDosError(ctx, base);
loc_881ED498:
	// lwz r11,336(r13)
	ctx.current_instruction = 0x881ED498;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881ed4ac
	if (!ctx.cr6.eq) goto loc_881ED4AC;
	// lwz r11,256(r13)
	ctx.current_instruction = 0x881ED4A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// stw r3,352(r11)
	ctx.current_instruction = 0x881ED4A8;
	REX_STORE_U32(ctx.r11.u32 + 352, ctx.r3.u32);
loc_881ED4AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881ED4B0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EDE40) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EDE40);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EDE40;
	ctx.current_instruction = 0x881EDE40;
	uint32_t ea{};
	// std r30,-16(r1)
	ctx.current_instruction = 0x881EDE40;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x881EDE44;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r12,112
	ctx.r12.s64 = 112;
	// li r31,512
	ctx.r31.s64 = 512;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x881ee168
	if (ctx.cr6.lt) goto loc_881EE168;
loc_881EDE70:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x881ede80
	if (ctx.cr6.lt) goto loc_881EDE80;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_881EDE80:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v14,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v15,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v16,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v18,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v19,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v20,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v21,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v22,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v23,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v24,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v26,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v27,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v28,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v32,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// xor r30,r30,r30
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r30.u64;
	// lvx128 v33,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v34,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v35,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v39,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	ea = (ctx.r3.u32 + ctx.r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	ea = (ctx.r3.u32 + ctx.r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	ea = (ctx.r3.u32 + ctx.r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	ea = (ctx.r3.u32 + ctx.r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ctx.current_instruction = 0x881EE000;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ctx.current_instruction = 0x881EE004;
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ctx.current_instruction = 0x881EE008;
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ctx.current_instruction = 0x881EE00C;
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ctx.current_instruction = 0x881EE010;
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ctx.current_instruction = 0x881EE014;
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ctx.current_instruction = 0x881EE018;
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ctx.current_instruction = 0x881EE01C;
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	ea = (ctx.r3.u32 + ctx.r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v9,r0,r3
	ctx.current_instruction = 0x881EE02C;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r6,r3
	ctx.current_instruction = 0x881EE030;
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r7,r3
	ctx.current_instruction = 0x881EE034;
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r8,r3
	ctx.current_instruction = 0x881EE038;
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r9,r3
	ctx.current_instruction = 0x881EE03C;
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r10,r3
	ctx.current_instruction = 0x881EE040;
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v14.u8[15 - i]);
	// stvlx128 v15,r11,r3
	ctx.current_instruction = 0x881EE044;
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v15.u8[15 - i]);
	// stvlx128 v16,r12,r3
	ctx.current_instruction = 0x881EE048;
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v16.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	ea = (ctx.r3.u32 + ctx.r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v17,r0,r3
	ctx.current_instruction = 0x881EE058;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v17.u8[15 - i]);
	// stvlx128 v18,r6,r3
	ctx.current_instruction = 0x881EE05C;
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v18.u8[15 - i]);
	// stvlx128 v19,r7,r3
	ctx.current_instruction = 0x881EE060;
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v19.u8[15 - i]);
	// stvlx128 v20,r8,r3
	ctx.current_instruction = 0x881EE064;
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v20.u8[15 - i]);
	// stvlx128 v21,r9,r3
	ctx.current_instruction = 0x881EE068;
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v21.u8[15 - i]);
	// stvlx128 v22,r10,r3
	ctx.current_instruction = 0x881EE06C;
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v22.u8[15 - i]);
	// stvlx128 v23,r11,r3
	ctx.current_instruction = 0x881EE070;
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v23.u8[15 - i]);
	// stvlx128 v24,r12,r3
	ctx.current_instruction = 0x881EE074;
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v24.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	ea = (ctx.r3.u32 + ctx.r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v25,r0,r3
	ctx.current_instruction = 0x881EE084;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v25.u8[15 - i]);
	// stvlx128 v26,r6,r3
	ctx.current_instruction = 0x881EE088;
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v26.u8[15 - i]);
	// stvlx128 v27,r7,r3
	ctx.current_instruction = 0x881EE08C;
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v27.u8[15 - i]);
	// stvlx128 v28,r8,r3
	ctx.current_instruction = 0x881EE090;
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v28.u8[15 - i]);
	// stvlx128 v29,r9,r3
	ctx.current_instruction = 0x881EE094;
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v29.u8[15 - i]);
	// stvlx128 v30,r10,r3
	ctx.current_instruction = 0x881EE098;
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v30.u8[15 - i]);
	// stvlx128 v31,r11,r3
	ctx.current_instruction = 0x881EE09C;
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v31.u8[15 - i]);
	// stvlx128 v32,r12,r3
	ctx.current_instruction = 0x881EE0A0;
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	ea = (ctx.r3.u32 + ctx.r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v33,r0,r3
	ctx.current_instruction = 0x881EE0B0;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r6,r3
	ctx.current_instruction = 0x881EE0B4;
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r7,r3
	ctx.current_instruction = 0x881EE0B8;
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r8,r3
	ctx.current_instruction = 0x881EE0BC;
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r9,r3
	ctx.current_instruction = 0x881EE0C0;
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r10,r3
	ctx.current_instruction = 0x881EE0C4;
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r11,r3
	ctx.current_instruction = 0x881EE0C8;
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvlx128 v40,r12,r3
	ctx.current_instruction = 0x881EE0CC;
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v41,r0,r3
	ctx.current_instruction = 0x881EE0D8;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r6,r3
	ctx.current_instruction = 0x881EE0DC;
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r7,r3
	ctx.current_instruction = 0x881EE0E0;
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r8,r3
	ctx.current_instruction = 0x881EE0E4;
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r9,r3
	ctx.current_instruction = 0x881EE0E8;
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r10,r3
	ctx.current_instruction = 0x881EE0EC;
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r11,r3
	ctx.current_instruction = 0x881EE0F0;
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// stvlx128 v48,r12,r3
	ctx.current_instruction = 0x881EE0F4;
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v49,r0,r3
	ctx.current_instruction = 0x881EE100;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r6,r3
	ctx.current_instruction = 0x881EE104;
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r7,r3
	ctx.current_instruction = 0x881EE108;
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r8,r3
	ctx.current_instruction = 0x881EE10C;
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r9,r3
	ctx.current_instruction = 0x881EE110;
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r10,r3
	ctx.current_instruction = 0x881EE114;
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r11,r3
	ctx.current_instruction = 0x881EE118;
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvlx128 v56,r12,r3
	ctx.current_instruction = 0x881EE11C;
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v57,r0,r3
	ctx.current_instruction = 0x881EE128;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r6,r3
	ctx.current_instruction = 0x881EE12C;
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r7,r3
	ctx.current_instruction = 0x881EE130;
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r8,r3
	ctx.current_instruction = 0x881EE134;
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r9,r3
	ctx.current_instruction = 0x881EE138;
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r10,r3
	ctx.current_instruction = 0x881EE13C;
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r11,r3
	ctx.current_instruction = 0x881EE140;
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvlx128 v0,r12,r3
	ctx.current_instruction = 0x881EE144;
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x881ede70
	if (!ctx.cr6.lt) goto loc_881EDE70;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x881ee168
	if (!ctx.cr6.eq) goto loc_881EE168;
	// b 0x881ee1c4
	goto loc_881EE1C4;
loc_881EE168:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ctx.current_instruction = 0x881EE190;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ctx.current_instruction = 0x881EE194;
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ctx.current_instruction = 0x881EE198;
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ctx.current_instruction = 0x881EE19C;
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ctx.current_instruction = 0x881EE1A0;
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ctx.current_instruction = 0x881EE1A4;
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ctx.current_instruction = 0x881EE1A8;
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ctx.current_instruction = 0x881EE1AC;
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x881ee168
	if (ctx.cr6.gt) goto loc_881EE168;
loc_881EE1C4:
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881EE1C4;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881EE1C8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(__savevmx_119) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEF2C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEF2C;
	ctx.current_instruction = 0x881EEF2C;
	uint32_t ea{};
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v119.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v120.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v121.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v122.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v123.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(__restvmx_70) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF03C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF03C;
	ctx.current_instruction = 0x881EF03C;
	uint32_t ea{};
	// li r11,-928
	ctx.r11.s64 = -928;
	// lvx128 v70,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v70.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-912
	ctx.r11.s64 = -912;
	// lvx128 v71,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v71.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-896
	ctx.r11.s64 = -896;
	// lvx128 v72,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v72.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-880
	ctx.r11.s64 = -880;
	// lvx128 v73,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v73.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v74.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v75.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v76.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v77.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v78.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v79.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v80.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v81.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v82.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v83.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v84.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v85.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v86.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v87.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v88.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v89.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v90.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v91.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v92.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v93.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v94.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v95.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v96.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v97.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v98.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v99.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// lvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// lvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(__restvmx_125) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF1F4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF1F4;
	ctx.current_instruction = 0x881EF1F4;
	uint32_t ea{};
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(__savefpr_19) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF264);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EF264;
	ctx.current_instruction = 0x881EF264;
	// stfd f19,-104(r12)
	ctx.current_instruction = 0x881EF264;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	ctx.current_instruction = 0x881EF268;
	REX_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	ctx.current_instruction = 0x881EF26C;
	REX_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	ctx.current_instruction = 0x881EF270;
	REX_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	ctx.current_instruction = 0x881EF274;
	REX_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	ctx.current_instruction = 0x881EF278;
	REX_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	ctx.current_instruction = 0x881EF27C;
	REX_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	ctx.current_instruction = 0x881EF280;
	REX_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	ctx.current_instruction = 0x881EF284;
	REX_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	ctx.current_instruction = 0x881EF288;
	REX_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	ctx.current_instruction = 0x881EF28C;
	REX_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	ctx.current_instruction = 0x881EF290;
	REX_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	ctx.current_instruction = 0x881EF294;
	REX_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EF2E8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF2E8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EF2E8;
	ctx.current_instruction = 0x881EF2E8;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stfd f1,16(r1)
	ctx.current_instruction = 0x881EF2EC;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lfd f6,8624(r11)
	ctx.current_instruction = 0x881EF2F0;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// fcmpu cr6,f1,f6
	ctx.cr6.compare(ctx.f1.f64, ctx.f6.f64);
	// bne cr6,0x881ef308
	if (!ctx.cr6.eq) goto loc_881EF308;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f1,1488(r11)
	ctx.current_instruction = 0x881EF300;
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881EF308:
	// lhz r10,16(r1)
	ctx.current_instruction = 0x881EF308;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r10,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7FF0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x881ef33c
	if (!ctx.cr6.eq) goto loc_881EF33C;
	// lis r11,-30715
	ctx.r11.s64 = -2012938240;
	// lfd f0,-30568(r11)
	ctx.current_instruction = 0x881EF320;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -30568);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_881EF32C:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lfd f0,16680(r11)
	ctx.current_instruction = 0x881EF330;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16680);
loc_881EF334:
	// fneg f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881EF33C:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f0,1488(r10)
	ctx.current_instruction = 0x881EF340;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 1488);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x881ef360
	if (ctx.cr6.gt) goto loc_881EF360;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x881ef32c
	if (!ctx.cr6.eq) goto loc_881EF32C;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lfd f0,16672(r11)
	ctx.current_instruction = 0x881EF358;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16672);
	// b 0x881ef334
	goto loc_881EF334;
loc_881EF360:
	// lis r10,-30715
	ctx.r10.s64 = -2012938240;
	// lfd f0,-30576(r10)
	ctx.current_instruction = 0x881EF364;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -30576);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x881ef398
	if (!ctx.cr6.lt) goto loc_881EF398;
	// lis r11,-30715
	ctx.r11.s64 = -2012938240;
	// lfd f0,-30584(r11)
	ctx.current_instruction = 0x881EF374;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -30584);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64;
	// stfd f1,16(r1)
	ctx.current_instruction = 0x881EF37C;
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.current_instruction = 0x881EF380;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r10,r11,28,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7FF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r10,-1075
	ctx.r10.s64 = ctx.r10.s64 + -1075;
	// b 0x881ef3a0
	goto loc_881EF3A0;
loc_881EF398:
	// rlwinm r11,r11,28,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF;
	// addi r10,r11,-1022
	ctx.r10.s64 = ctx.r11.s64 + -1022;
loc_881EF3A0:
	// lis r11,-30715
	ctx.r11.s64 = -2012938240;
	// stfd f1,-16(r1)
	ctx.current_instruction = 0x881EF3A4;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// andi. r9,r9,32783
	ctx.r9.u64 = ctx.r9.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,-30704
	ctx.r11.s64 = ctx.r11.s64 + -30704;
	// ori r9,r9,16352
	ctx.r9.u64 = ctx.r9.u64 | 16352;
	// sth r9,-16(r1)
	ctx.current_instruction = 0x881EF3B4;
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r9.u16);
	// lfd f13,-16(r1)
	ctx.current_instruction = 0x881EF3B8;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lfd f0,0(r11)
	ctx.current_instruction = 0x881EF3C0;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x881ef3e4
	if (!ctx.cr6.gt) goto loc_881EF3E4;
	// lfd f0,12088(r9)
	ctx.current_instruction = 0x881EF3CC;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 12088);
	// fadd f12,f13,f6
	ctx.f12.f64 = ctx.f13.f64 + ctx.f6.f64;
	// fsub f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fmul f13,f12,f0
	ctx.f13.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fsub f0,f11,f0
	ctx.f0.f64 = ctx.f11.f64 - ctx.f0.f64;
	// b 0x881ef3f8
	goto loc_881EF3F8;
loc_881EF3E4:
	// lfd f12,12088(r9)
	ctx.current_instruction = 0x881EF3E4;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r9.u32 + 12088);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fsub f0,f13,f12
	ctx.f0.f64 = ctx.f13.f64 - ctx.f12.f64;
	// fadd f13,f0,f6
	ctx.f13.f64 = ctx.f0.f64 + ctx.f6.f64;
	// fmul f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 * ctx.f12.f64;
loc_881EF3F8:
	// fdiv f5,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f0.f64 / ctx.f13.f64;
	// lis r9,-30715
	ctx.r9.s64 = -2012938240;
	// lis r8,-30715
	ctx.r8.s64 = -2012938240;
	// lfd f12,40(r11)
	ctx.current_instruction = 0x881EF404;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// lis r7,-30715
	ctx.r7.s64 = -2012938240;
	// lfd f9,64(r11)
	ctx.current_instruction = 0x881EF40C;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lis r6,-30715
	ctx.r6.s64 = -2012938240;
	// lfd f7,8(r11)
	ctx.current_instruction = 0x881EF414;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lfd f13,-30592(r9)
	ctx.current_instruction = 0x881EF41C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + -30592);
	// lis r10,-30715
	ctx.r10.s64 = -2012938240;
	// lfd f11,-30600(r8)
	ctx.current_instruction = 0x881EF424;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r8.u32 + -30600);
	// std r11,-16(r1)
	ctx.current_instruction = 0x881EF428;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f10,-30608(r7)
	ctx.current_instruction = 0x881EF42C;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r7.u32 + -30608);
	// lfd f8,-30616(r6)
	ctx.current_instruction = 0x881EF430;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r6.u32 + -30616);
	// lfd f0,-16(r1)
	ctx.current_instruction = 0x881EF434;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f0
	ctx.f4.f64 = double(ctx.f0.s64);
	// fmul f3,f5,f5
	ctx.f3.f64 = ctx.f5.f64 * ctx.f5.f64;
	// lfd f0,-30624(r10)
	ctx.current_instruction = 0x881EF440;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -30624);
	// fmul f0,f4,f0
	ctx.f0.f64 = ctx.f4.f64 * ctx.f0.f64;
	// fnmsub f13,f3,f13,f12
	ctx.f13.f64 = -std::fma(ctx.f3.f64, ctx.f13.f64, -ctx.f12.f64);
	// fsub f12,f3,f11
	ctx.f12.f64 = ctx.f3.f64 - ctx.f11.f64;
	// fmsub f13,f13,f3,f10
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f3.f64, -ctx.f10.f64);
	// fmadd f12,f12,f3,f9
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f9.f64);
	// fmul f13,f13,f3
	ctx.f13.f64 = ctx.f13.f64 * ctx.f3.f64;
	// fmsub f12,f12,f3,f8
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f3.f64, -ctx.f8.f64);
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f13,f13,f6
	ctx.f13.f64 = ctx.f13.f64 + ctx.f6.f64;
	// fmsub f0,f13,f5,f0
	ctx.f0.f64 = std::fma(ctx.f13.f64, ctx.f5.f64, -ctx.f0.f64);
	// fmadd f1,f4,f7,f0
	ctx.f1.f64 = std::fma(ctx.f4.f64, ctx.f7.f64, ctx.f0.f64);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881FC190) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881FC190;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881FC190) {
			switch (rex_dispatch_address) {
				case 0x881FC198:
				case 0x881FC1AC:
				case 0x881FC1C0:
				case 0x881FC1D4:
				case 0x881FC1FC:
				case 0x881FC214:
				case 0x881FC22C:
				case 0x881FC24C:
				case 0x881FC278:
				case 0x881FC2A4:
				case 0x881FC2B0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881FC190;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881FC198: goto loc_881FC198;
		case 0x881FC1AC: goto loc_881FC1AC;
		case 0x881FC1C0: goto loc_881FC1C0;
		case 0x881FC1D4: goto loc_881FC1D4;
		case 0x881FC1FC: goto loc_881FC1FC;
		case 0x881FC214: goto loc_881FC214;
		case 0x881FC22C: goto loc_881FC22C;
		case 0x881FC24C: goto loc_881FC24C;
		case 0x881FC278: goto loc_881FC278;
		case 0x881FC2A4: goto loc_881FC2A4;
		case 0x881FC2B0: goto loc_881FC2B0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881FC198;
	__savegprlr_28(ctx, base);
loc_881FC198:
	// stwu r1,-1664(r1)
	ctx.current_instruction = 0x881FC198;
	ea = -1664 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,15984
	ctx.r30.s64 = ctx.r3.s64 + 15984;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88207de0
	ctx.lr = 0x881FC1AC;
	sub_88207DE0(ctx, base);
loc_881FC1AC:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r28,r31,22432
	ctx.r28.s64 = ctx.r31.s64 + 22432;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,24352(r11)
	ctx.current_instruction = 0x881FC1B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24352);
	// bl 0x881fc868
	ctx.lr = 0x881FC1C0;
	sub_881FC868(ctx, base);
loc_881FC1C0:
	// addi r29,r30,1408
	ctx.r29.s64 = ctx.r30.s64 + 1408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88207eb8
	ctx.lr = 0x881FC1D4;
	sub_88207EB8(ctx, base);
loc_881FC1D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc2c8
	if (!ctx.cr6.eq) goto loc_881FC2C8;
	// lhz r11,52(r30)
	ctx.current_instruction = 0x881FC1DC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88242388
	ctx.lr = 0x881FC1FC;
	sub_88242388(ctx, base);
loc_881FC1FC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc2c8
	if (!ctx.cr6.eq) goto loc_881FC2C8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8822ece0
	ctx.lr = 0x881FC214;
	sub_8822ECE0(ctx, base);
loc_881FC214:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc2c8
	if (!ctx.cr6.eq) goto loc_881FC2C8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x882171f8
	ctx.lr = 0x881FC22C;
	sub_882171F8(ctx, base);
loc_881FC22C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc2c8
	if (!ctx.cr6.eq) goto loc_881FC2C8;
	// lwz r11,3948(r31)
	ctx.current_instruction = 0x881FC234;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881fc2a4
	if (ctx.cr6.eq) goto loc_881FC2A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,272(r31)
	ctx.current_instruction = 0x881FC244;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x8822b460
	ctx.lr = 0x881FC24C;
	sub_8822B460(ctx, base);
loc_881FC24C:
	// lwz r11,224(r31)
	ctx.current_instruction = 0x881FC24C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r9,3784(r31)
	ctx.current_instruction = 0x881FC250;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,3780(r31)
	ctx.current_instruction = 0x881FC258;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,3776(r31)
	ctx.current_instruction = 0x881FC264;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,220(r31)
	ctx.current_instruction = 0x881FC26C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x8822b588
	ctx.lr = 0x881FC278;
	sub_8822B588(ctx, base);
loc_881FC278:
	// lwz r11,224(r31)
	ctx.current_instruction = 0x881FC278;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r9,3784(r31)
	ctx.current_instruction = 0x881FC27C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,3780(r31)
	ctx.current_instruction = 0x881FC284;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,3776(r31)
	ctx.current_instruction = 0x881FC290;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,220(r31)
	ctx.current_instruction = 0x881FC298;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x8822b588
	ctx.lr = 0x881FC2A4;
	sub_8822B588(ctx, base);
loc_881FC2A4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881fcbb0
	ctx.lr = 0x881FC2B0;
	sub_881FCBB0(ctx, base);
loc_881FC2B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,15624(r31)
	ctx.current_instruction = 0x881FC2B8;
	REX_STORE_U32(ctx.r31.u32 + 15624, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15628(r31)
	ctx.current_instruction = 0x881FC2C0;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r10.u32);
	// stw r11,15600(r31)
	ctx.current_instruction = 0x881FC2C4;
	REX_STORE_U32(ctx.r31.u32 + 15600, ctx.r11.u32);
loc_881FC2C8:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8820AA10) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8820AA10;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8820AA10) {
			switch (rex_dispatch_address) {
				case 0x8820AAF4:
				case 0x8820AB00:
				case 0x8820AB08:
				case 0x8820AB10:
				case 0x8820AB1C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8820AA10;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8820AAF4: goto loc_8820AAF4;
		case 0x8820AB00: goto loc_8820AB00;
		case 0x8820AB08: goto loc_8820AB08;
		case 0x8820AB10: goto loc_8820AB10;
		case 0x8820AB1C: goto loc_8820AB1C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8820AA14;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8820AA18;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8820AA1C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8820AA20;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4016(r3)
	ctx.current_instruction = 0x8820AA24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4016);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8820aa44
	if (ctx.cr6.eq) goto loc_8820AA44;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x8820aa48
	if (!ctx.cr6.eq) goto loc_8820AA48;
loc_8820AA44:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8820AA48:
	// lwz r11,2964(r31)
	ctx.current_instruction = 0x8820AA48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2964);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// lwz r10,2092(r31)
	ctx.current_instruction = 0x8820AA50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2092);
	// addi r8,r11,735
	ctx.r8.s64 = ctx.r11.s64 + 735;
	// addi r7,r11,738
	ctx.r7.s64 = ctx.r11.s64 + 738;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r10,263
	ctx.r5.s64 = ctx.r10.s64 + 263;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r6,r31
	ctx.current_instruction = 0x8820AA70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,2916(r31)
	ctx.current_instruction = 0x8820AA7C;
	REX_STORE_U32(ctx.r31.u32 + 2916, ctx.r10.u32);
	// lwzx r7,r4,r31
	ctx.current_instruction = 0x8820AA80;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// stw r7,2928(r31)
	ctx.current_instruction = 0x8820AA84;
	REX_STORE_U32(ctx.r31.u32 + 2928, ctx.r7.u32);
	// lwzx r6,r3,r31
	ctx.current_instruction = 0x8820AA88;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r6,2096(r31)
	ctx.current_instruction = 0x8820AA8C;
	REX_STORE_U32(ctx.r31.u32 + 2096, ctx.r6.u32);
	// lwz r5,2108(r8)
	ctx.current_instruction = 0x8820AA90;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 2108);
	// stw r5,2100(r31)
	ctx.current_instruction = 0x8820AA94;
	REX_STORE_U32(ctx.r31.u32 + 2100, ctx.r5.u32);
	// beq cr6,0x8820aaa0
	if (ctx.cr6.eq) goto loc_8820AAA0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8820AAA0:
	// stw r11,460(r31)
	ctx.current_instruction = 0x8820AAA0;
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// lwz r11,21704(r31)
	ctx.current_instruction = 0x8820AAA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21704);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8820aac8
	if (!ctx.cr6.eq) goto loc_8820AAC8;
	// lwz r11,140(r31)
	ctx.current_instruction = 0x8820AAB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,21972(r31)
	ctx.current_instruction = 0x8820AAB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21972);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,21968(r31)
	ctx.current_instruction = 0x8820AAC0;
	REX_STORE_U32(ctx.r31.u32 + 21968, ctx.r10.u32);
	// b 0x8820aad0
	goto loc_8820AAD0;
loc_8820AAC8:
	// lwz r11,21972(r31)
	ctx.current_instruction = 0x8820AAC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21972);
	// stw r11,21968(r31)
	ctx.current_instruction = 0x8820AACC;
	REX_STORE_U32(ctx.r31.u32 + 21968, ctx.r11.u32);
loc_8820AAD0:
	// lwz r11,20688(r31)
	ctx.current_instruction = 0x8820AAD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8820aae4
	if (!ctx.cr6.eq) goto loc_8820AAE4;
	// stw r9,22176(r31)
	ctx.current_instruction = 0x8820AADC;
	REX_STORE_U32(ctx.r31.u32 + 22176, ctx.r9.u32);
	// b 0x8820aae8
	goto loc_8820AAE8;
loc_8820AAE4:
	// stw r9,22180(r31)
	ctx.current_instruction = 0x8820AAE4;
	REX_STORE_U32(ctx.r31.u32 + 22180, ctx.r9.u32);
loc_8820AAE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,248(r31)
	ctx.current_instruction = 0x8820AAEC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x8815e728
	ctx.lr = 0x8820AAF4;
	sub_8815E728(ctx, base);
loc_8820AAF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,248(r31)
	ctx.current_instruction = 0x8820AAF8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x8819b878
	ctx.lr = 0x8820AB00;
	sub_8819B878(ctx, base);
loc_8820AB00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88193d00
	ctx.lr = 0x8820AB08;
	sub_88193D00(ctx, base);
loc_8820AB08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88193e08
	ctx.lr = 0x8820AB10;
	sub_88193E08(ctx, base);
loc_8820AB10:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881810e0
	ctx.lr = 0x8820AB1C;
	sub_881810E0(ctx, base);
loc_8820AB1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8820AB20;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8820AB28;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8820AB2C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88218068) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88218068);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88218068;
	ctx.current_instruction = 0x88218068;
	uint32_t ea{};
	// li r7,32
	ctx.r7.s64 = 32;
	// lvx v5,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,16
	ctx.r6.s64 = 16;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// li r8,48
	ctx.r8.s64 = 48;
	// vspltish v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v31,3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_set1_epi16(short(0x3)));
	// vor128 v16,v69,v69
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_load_si128((simde__m128i*)ctx.v69.u8));
	// vspltish v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x2)));
	// li r10,64
	ctx.r10.s64 = 64;
	// lvx v7,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v13,5
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x5)));
	// vaddshs v28,v5,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx v6,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx v8,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubuhm v29,v5,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vaddshs v30,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vspltish v25,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_set1_epi16(short(0x1)));
	// vslh v3,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v26,2
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v1,v28,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v27,3
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_set1_epi16(short(0x3)));
	// vslh v2,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v17,8
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v9,v30,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v21,6
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_set1_epi16(short(0x6)));
	// vslh v30,v30,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v24,0
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_set1_epi16(short(0x0)));
	// vaddshs v1,v1,v28
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// li r11,80
	ctx.r11.s64 = 80;
	// vslh v28,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r12,96
	ctx.r12.s64 = 96;
	// vaddshs v2,v2,v29
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// li r5,112
	ctx.r5.s64 = 112;
	// vaddshs v9,v9,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vslh v4,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v3,v3,v28
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v1,v1,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v2,v2,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubuhm v4,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v3,v9,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v11,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v10,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubuhm v13,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsubuhm v12,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v11,v11,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v10,v10,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v13,v13,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v12,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v28,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrglh v29,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrghh v30,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglh v31,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrghw v1,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v30.u32), simde_mm_load_si128((simde__m128i*)ctx.v28.u32)));
	// vmrglw v3,v29,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v29.u32)));
	// vmrghw v2,v29,v31
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v29.u32)));
	// vslh v29,v17,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglw v4,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v30.u32), simde_mm_load_si128((simde__m128i*)ctx.v28.u32)));
	// vsldoi v5,v1,v1,8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 8));
	// vslh v18,v1,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v6,v3,v3,8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), 8));
	// vslh v1,v1,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v7,v2,v2,8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 8));
	// vslh v2,v2,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v28,4
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_set1_epi16(short(0x4)));
	// vsldoi v8,v4,v4,8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), 8));
	// vaddshs v13,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v1,v1,v18
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vslh v10,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v2,v2,v19
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vslh v9,v13,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v6,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v6,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v29
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubuhm v9,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vslh v18,v5,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v5,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v11,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v5,v5,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// vsubuhm v10,v10,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vslh v9,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v11,v11,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vaddshs v5,v5,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v12,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v18,v7,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v9,v12,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vslh v19,v8,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v6,v20
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vslh v20,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v9,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vsubuhm v19,v9,v19
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vslh v9,v12,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v10,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vslh v17,v7,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v20,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v11,v19
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v17,v17,v7
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v19,v8,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v7,v3,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v23,v12,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v17,v9,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vsubuhm v19,v9,v19
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vaddshs v9,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubuhm v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v2,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v5,v5,v17
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vaddshs v7,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v17,v4,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v2,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v22,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v5,v5,v23
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsubuhm v7,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vsubuhm v2,v2,v17
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v10,v10,v22
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vaddshs v6,v6,v19
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v8,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubuhm v2,v2,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsubuhm v9,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vaddshs v6,v6,v23
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v24,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubuhm v2,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v11,v11,v22
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubuhm v31,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsrah v24,v24,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v7,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v27,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vperm v24,v24,v24,v16
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v25,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubuhm v30,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsrah v25,v25,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v31,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v27,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvewx v24,r0,r4
	ctx.current_instruction = 0x882182B8;
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v28,v28,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvewx v24,r0,r3
	ctx.current_instruction = 0x882182C0;
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// vperm v25,v25,v25,v16
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// vsrah v30,v30,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v26,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm v31,v31,v31,v16
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// vsrah v29,v29,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm v27,v27,v27,v16
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// vperm v28,v28,v28,v16
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// vperm v30,v30,v30,v16
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// vperm v26,v26,v26,v16
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// vperm v29,v29,v29,v16
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// stvewx v25,r6,r4
	ctx.current_instruction = 0x882182EC;
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v25.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v25,r6,r3
	ctx.current_instruction = 0x882182F0;
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v25.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r7,r4
	ctx.current_instruction = 0x882182F4;
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r7,r3
	ctx.current_instruction = 0x882182F8;
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r8,r4
	ctx.current_instruction = 0x882182FC;
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r8,r3
	ctx.current_instruction = 0x88218300;
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r10,r4
	ctx.current_instruction = 0x88218304;
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r10,r3
	ctx.current_instruction = 0x88218308;
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r11,r4
	ctx.current_instruction = 0x8821830C;
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r11,r3
	ctx.current_instruction = 0x88218310;
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r12,r4
	ctx.current_instruction = 0x88218314;
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r12,r3
	ctx.current_instruction = 0x88218318;
	ea = (ctx.r12.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r5,r4
	ctx.current_instruction = 0x8821831C;
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r5,r3
	ctx.current_instruction = 0x88218320;
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8821E768) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8821E768);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821E768;
	ctx.current_instruction = 0x8821E768;
	PPCRegister temp{};
	uint32_t ea{};
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// vspltisb v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// li r5,1
	ctx.r5.s64 = 1;
	// vspltish v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x4)));
	// and r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 & ctx.r8.u64;
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// li r8,16
	ctx.r8.s64 = 16;
	// slw r7,r5,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bne cr6,0x8821e894
	if (!ctx.cr6.eq) goto loc_8821E894;
	// lvx128 v60,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v61,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v59,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v62,v60,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v9,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vperm128 v31,v58,v59,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v12,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v11,v13,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// ble cr6,0x8821e9c0
	if (!ctx.cr6.gt) goto loc_8821E9C0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
loc_8821E7F8:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v7,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v55,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vslh v8,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// vslh v3,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v57,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v9,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v31,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v30,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v11,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// vperm128 v28,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vor v12,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vadduhm v27,v4,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// vsubshs v26,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v25,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrghb v11,v13,v28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v5,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// vadduhm v24,v31,v27
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vslh v23,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vsubshs v21,v11,v23
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vadduhm v20,v22,v2
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v19,v21,v26
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v8,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vsrah v18,v8,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v54,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// stvewx128 v54,r0,r10
	ctx.current_instruction = 0x8821E87C;
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v54,r10,r5
	ctx.current_instruction = 0x8821E880;
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// blt cr6,0x8821e7f8
	if (ctx.cr6.lt) goto loc_8821E7F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8821E894:
	// lvx128 v50,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v53,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v51,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v52,v50,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v48,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v4,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vperm128 v8,v48,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v3,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v12,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v11,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v9,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v8,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// ble cr6,0x8821e9c0
	if (!ctx.cr6.gt) goto loc_8821E9C0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8821E8E4:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v7,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v4,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vslh v31,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// vadduhm v24,v7,v12
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvx128 v47,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v46,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v11,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v27,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v3,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// vperm128 v7,v46,v47,v4
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v23,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vor v4,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// vor v3,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vslh v22,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v12,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vmrghb v9,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor v11,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vmrglb v8,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vadduhm v18,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v17,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v31,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v14,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v7,v24,v18
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v30,v23,v17
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vslh v16,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v29,v13,v26
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v27,v13,v25
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vadduhm v28,v7,v14
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vadduhm v26,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vsubshs v25,v9,v16
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vsubshs v24,v8,v15
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vadduhm v23,v28,v2
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v22,v26,v2
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v21,v25,v29
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v20,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v7,v23,v21
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vadduhm v31,v22,v20
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsrah v19,v7,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v31,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v45,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// stvx128 v45,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// blt cr6,0x8821e8e4
	if (ctx.cr6.lt) goto loc_8821E8E4;
loc_8821E9C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88224360) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88224360;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88224360) {
			switch (rex_dispatch_address) {
				case 0x88224368:
				case 0x88224390:
				case 0x882243B0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88224360;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88224368: goto loc_88224368;
		case 0x88224390: goto loc_88224390;
		case 0x882243B0: goto loc_882243B0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88224368;
	__savegprlr_28(ctx, base);
loc_88224368:
	// stwu r1,-896(r1)
	ctx.current_instruction = 0x88224368;
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8821b4b8
	ctx.lr = 0x88224390;
	sub_8821B4B8(ctx, base);
loc_88224390:
	// li r10,1104
	ctx.r10.s64 = 1104;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r29,r10
	ea = (ctx.r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x88222df8
	ctx.lr = 0x882243B0;
	sub_88222DF8(ctx, base);
loc_882243B0:
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88224BB0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88224BB0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88224BB0) {
			switch (rex_dispatch_address) {
				case 0x88224BB8:
				case 0x88224BE0:
				case 0x88224C00:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88224BB0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88224BB8: goto loc_88224BB8;
		case 0x88224BE0: goto loc_88224BE0;
		case 0x88224C00: goto loc_88224C00;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88224BB8;
	__savegprlr_28(ctx, base);
loc_88224BB8:
	// stwu r1,-896(r1)
	ctx.current_instruction = 0x88224BB8;
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8821b4b8
	ctx.lr = 0x88224BE0;
	sub_8821B4B8(ctx, base);
loc_88224BE0:
	// li r10,1104
	ctx.r10.s64 = 1104;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r29,r10
	ea = (ctx.r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x88223088
	ctx.lr = 0x88224C00;
	sub_88223088(ctx, base);
loc_88224C00:
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_882251D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x882251D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x882251D0) {
			switch (rex_dispatch_address) {
				case 0x88225220:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882251D0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88225220: goto loc_88225220;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x882251D4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x882251D8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x882251DC;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r8,196(r1)
	ctx.current_instruction = 0x882251E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// subfic r9,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r9,80(r1)
	ctx.current_instruction = 0x882251F4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r7,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r7,4
	ctx.r7.s64 = 4;
	// and r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lvx128 v0,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// vsplth v1,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x88221e10
	ctx.lr = 0x88225220;
	sub_88221E10(ctx, base);
loc_88225220:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88225224;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8822522C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88225580) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88225580;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88225580) {
			switch (rex_dispatch_address) {
				case 0x88225588:
				case 0x88225B90:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88225580;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88225588: goto loc_88225588;
		case 0x88225B90: goto loc_88225B90;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88225588;
	__savegprlr_14(ctx, base);
loc_88225588:
	// stwu r1,-1040(r1)
	ctx.current_instruction = 0x88225588;
	ea = -1040 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r7,1124(r1)
	ctx.current_instruction = 0x88225590;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1124);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stw r5,1076(r1)
	ctx.current_instruction = 0x88225598;
	REX_STORE_U32(ctx.r1.u32 + 1076, ctx.r5.u32);
	// subfic r9,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// stw r6,1084(r1)
	ctx.current_instruction = 0x882255A0;
	REX_STORE_U32(ctx.r1.u32 + 1084, ctx.r6.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// stw r9,96(r1)
	ctx.current_instruction = 0x882255AC;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r7,1
	ctx.r7.s64 = 1;
	// and r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ctx.r10.u64;
	// slw r6,r5,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lvx128 v12,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r6,88(r1)
	ctx.current_instruction = 0x882255D4;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// vsplth v1,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stw r7,80(r1)
	ctx.current_instruction = 0x882255E4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// beq cr6,0x88225a5c
	if (ctx.cr6.eq) goto loc_88225A5C;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// beq cr6,0x882258a0
	if (ctx.cr6.eq) goto loc_882258A0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88225830
	if (!ctx.cr6.gt) goto loc_88225830;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,84(r1)
	ctx.current_instruction = 0x8822560C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r4,-96
	ctx.r4.s64 = -96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// li r5,-48
	ctx.r5.s64 = -48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r7,96
	ctx.r7.s64 = 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r14,144
	ctx.r14.s64 = 144;
	// li r15,192
	ctx.r15.s64 = 192;
	// li r16,240
	ctx.r16.s64 = 240;
	// li r17,-80
	ctx.r17.s64 = -80;
	// li r18,-32
	ctx.r18.s64 = -32;
	// li r19,64
	ctx.r19.s64 = 64;
	// li r20,112
	ctx.r20.s64 = 112;
	// li r21,160
	ctx.r21.s64 = 160;
	// li r22,208
	ctx.r22.s64 = 208;
	// li r23,256
	ctx.r23.s64 = 256;
loc_88225658:
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r30,r8,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lwz r27,84(r1)
	ctx.current_instruction = 0x88225674;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r29,r31,r8
	ctx.r29.u64 = ctx.r31.u64 + ctx.r8.u64;
	// vperm128 v5,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r25,r9,r8
	ctx.r25.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lvx128 v62,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r26,r30,r8
	ctx.r26.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r28,r29,r8
	ctx.r28.u64 = ctx.r29.u64 + ctx.r8.u64;
	// lvx128 v60,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v27,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r27,r27,r9
	ctx.r27.u64 = ctx.r27.u64 + ctx.r9.u64;
	// vmrglb v26,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r24,r28,r8
	ctx.r24.u64 = ctx.r28.u64 + ctx.r8.u64;
	// lvx128 v56,r25,r10
	ea = (ctx.r25.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r25
	temp.u32 = ctx.r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r31,r8
	ea = (ctx.r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r30,r8
	ea = (ctx.r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r26,r10
	ea = (ctx.r26.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r29,r10
	ea = (ctx.r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r26
	temp.u32 = ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v11,v59,v55,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v57,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v9,v60,v53,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v51,r29,r8
	ea = (ctx.r29.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v58,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v50,r28,r8
	ea = (ctx.r28.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r28,r10
	ea = (ctx.r28.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v3,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v48,r24,r10
	ea = (ctx.r24.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v47,r27,r10
	ea = (ctx.r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v30,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v29,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r24
	temp.u32 = ctx.r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v46,v47,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v51,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v22,v3,v27
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vperm128 v6,v50,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v25,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v23,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vmrghb v19,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v28,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrghb v27,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v20,v12,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglb v12,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v15,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v14,v19,v27
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v5,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v31,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v30,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v15,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v29,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v5,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v4,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v27,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v3,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v2,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// vslh v24,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r11,r14
	ea = (ctx.r11.u32 + ctx.r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v20,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v24,r11,r15
	ea = (ctx.r11.u32 + ctx.r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r11,r17
	ea = (ctx.r11.u32 + ctx.r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v18,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v21,r11,r18
	ea = (ctx.r11.u32 + ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v23,r11,r16
	ea = (ctx.r11.u32 + ctx.r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v16,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v20,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v15,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v19,r11,r19
	ea = (ctx.r11.u32 + ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r11,r20
	ea = (ctx.r11.u32 + ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r11,r21
	ea = (ctx.r11.u32 + ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r11,r22
	ea = (ctx.r11.u32 + ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r11,r23
	ea = (ctx.r11.u32 + ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// bdnz 0x88225658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88225658;
	// lwz r6,88(r1)
	ctx.current_instruction = 0x88225828;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x8822582C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88225830:
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88225b80
	if (!ctx.cr6.gt) goto loc_88225B80;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// subf r30,r10,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r10.u64;
	// rlwinm r5,r11,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r4,-48
	ctx.r9.s64 = ctx.r4.s64 + -48;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_88225864:
	// lbzx r3,r30,r11
	ctx.current_instruction = 0x88225864;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzux r4,r8,r10
	ctx.current_instruction = 0x88225868;
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r31,0(r11)
	ctx.current_instruction = 0x88225870;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r4,r31,r3
	ctx.r4.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// sth r4,48(r9)
	ctx.current_instruction = 0x88225890;
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r4.u16);
	// sthu r3,96(r9)
	ctx.current_instruction = 0x88225894;
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x88225864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88225864;
	// b 0x88225b80
	goto loc_88225B80;
loc_882258A0:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v44,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r29,r3,r8
	ctx.r29.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lvx128 v43,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r29,r10
	ea = (ctx.r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lvsl v2,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v45,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,160
	ctx.r28.s64 = ctx.r1.s64 + 160;
	// lvx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v29,v44,v38,v2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v40,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,208
	ctx.r27.s64 = ctx.r1.s64 + 208;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r31,r8
	ctx.r11.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lvx128 v39,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v30,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vperm128 v3,v42,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v32,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v40,v39,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v63,r31,r8
	ea = (ctx.r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v37,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,256
	ctx.r29.s64 = ctx.r1.s64 + 256;
	// lvx128 v62,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v35,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v34,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v12,v30
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// lvx128 v33,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,304
	ctx.r26.s64 = ctx.r1.s64 + 304;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v4,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v29,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v2,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v37,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v30,v34,v32,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v27,v36,v62,v2
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vperm128 v31,v35,v33,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v26,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v7,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v28,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v8,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v25,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,352
	ctx.r31.s64 = ctx.r1.s64 + 352;
	// vmrghb v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,400
	ctx.r30.s64 = ctx.r1.s64 + 400;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v4,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v3,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// addi r25,r1,448
	ctx.r25.s64 = ctx.r1.s64 + 448;
	// vadduhm v24,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vperm128 v31,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vadduhm v23,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v26,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v26,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v26,v6
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stvx128 v2,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r5,r11,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r11.u64;
	// stvx128 v30,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stvx128 v29,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v28,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r8,r11,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stvx128 v27,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_88225A20:
	// lbzx r31,r10,r5
	ctx.current_instruction = 0x88225A20;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lbzux r3,r8,r11
	ctx.current_instruction = 0x88225A24;
	ea = ctx.r8.u32 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r30,0(r10)
	ctx.current_instruction = 0x88225A2C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sth r4,48(r9)
	ctx.current_instruction = 0x88225A4C;
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r4.u16);
	// sthu r3,96(r9)
	ctx.current_instruction = 0x88225A50;
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x88225a20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88225A20;
	// b 0x88225b80
	goto loc_88225B80;
loc_88225A5C:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvx128 v58,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 + ctx.r8.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// lvx128 v54,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v59,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r30,r1,160
	ctx.r30.s64 = ctx.r1.s64 + 160;
	// lvx128 v55,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,208
	ctx.r29.s64 = ctx.r1.s64 + 208;
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v58,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v56,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,256
	ctx.r28.s64 = ctx.r1.s64 + 256;
	// lvx128 v53,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v57,v55,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvsl v3,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// lvx128 v51,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v50,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v56,v53,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvsl v7,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v3,v50,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrghb v10,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v30,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v28,v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v31,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v29,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v26,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v31,v10
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v25,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v26,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v23,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x88225b80
	if (!ctx.cr6.eq) goto loc_88225B80;
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// subf r30,r10,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r10.u64;
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// subf r8,r10,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r10.u64;
loc_88225B44:
	// lbzx r29,r11,r30
	ctx.current_instruction = 0x88225B44;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// lbzux r3,r8,r10
	ctx.current_instruction = 0x88225B48;
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lbz r4,0(r11)
	ctx.current_instruction = 0x88225B4C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r4,r3,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// sth r5,48(r9)
	ctx.current_instruction = 0x88225B6C;
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r5.u16);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthu r4,96(r9)
	ctx.current_instruction = 0x88225B78;
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x88225b44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88225B44;
loc_88225B80:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,1076(r1)
	ctx.current_instruction = 0x88225B84;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1076);
	// lwz r4,1084(r1)
	ctx.current_instruction = 0x88225B88;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1084);
	// bl 0x88222bc8
	ctx.lr = 0x88225B90;
	sub_88222BC8(ctx, base);
loc_88225B90:
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

