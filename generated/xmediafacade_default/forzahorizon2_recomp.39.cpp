#include "forzahorizon2_funcs.39.h"

DEFINE_REX_FUNC(sub_880503A0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880503A0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880503A0;
	ctx.current_instruction = 0x880503A0;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwzx r3,r10,r11
	ctx.current_instruction = 0x880503AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88050958) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050958);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050958;
	ctx.current_instruction = 0x88050958;
	// b 0x880508c0
	sub_880508C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880509A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880509A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880509A8) {
			switch (rex_dispatch_address) {
				case 0x880509B0:
				case 0x880509B8:
				case 0x880509C8:
				case 0x880509DC:
				case 0x880509F0:
				case 0x88050A04:
				case 0x88050A2C:
				case 0x88050A44:
				case 0x88050A54:
				case 0x88050A70:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880509A8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880509B0: goto loc_880509B0;
		case 0x880509B8: goto loc_880509B8;
		case 0x880509C8: goto loc_880509C8;
		case 0x880509DC: goto loc_880509DC;
		case 0x880509F0: goto loc_880509F0;
		case 0x88050A04: goto loc_88050A04;
		case 0x88050A2C: goto loc_88050A2C;
		case 0x88050A44: goto loc_88050A44;
		case 0x88050A54: goto loc_88050A54;
		case 0x88050A70: goto loc_88050A70;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880509B0;
	__savegprlr_29(ctx, base);
loc_880509B0:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880509B0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x881e9030
	ctx.lr = 0x880509B8;
	sub_881E9030(ctx, base);
loc_880509B8:
	// lis r30,-30683
	ctx.r30.s64 = -2010841088;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,104(r30)
	ctx.current_instruction = 0x880509C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x88243610
	ctx.lr = 0x880509C8;
	__imp__KeTlsGetValue(ctx, base);
loc_880509C8:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x88050a58
	if (!ctx.cr0.eq) goto loc_88050A58;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,104(r30)
	ctx.current_instruction = 0x880509D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x88243620
	ctx.lr = 0x880509DC;
	__imp__KeTlsSetValue(ctx, base);
loc_880509DC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x88050a68
	if (ctx.cr0.eq) goto loc_88050A68;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x880522d8
	ctx.lr = 0x880509F0;
	sub_880522D8(ctx, base);
loc_880509F0:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r3,104(r30)
	ctx.current_instruction = 0x880509F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 104);
	// beq 0x88050a4c
	if (ctx.cr0.eq) goto loc_88050A4C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x88243620
	ctx.lr = 0x88050A04;
	__imp__KeTlsSetValue(ctx, base);
loc_88050A04:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x88050a3c
	if (ctx.cr0.eq) goto loc_88050A3C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1328
	ctx.r11.s64 = ctx.r11.s64 + 1328;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r31)
	ctx.current_instruction = 0x88050A1C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,92(r31)
	ctx.current_instruction = 0x88050A20;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r9,20(r31)
	ctx.current_instruction = 0x88050A24;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x881e9020
	ctx.lr = 0x88050A2C;
	sub_881E9020(ctx, base);
loc_88050A2C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,0(r31)
	ctx.current_instruction = 0x88050A30;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r11,4(r31)
	ctx.current_instruction = 0x88050A34;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x88050a68
	goto loc_88050A68;
loc_88050A3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88052278
	ctx.lr = 0x88050A44;
	sub_88052278(ctx, base);
loc_88050A44:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x88050a68
	goto loc_88050A68;
loc_88050A4C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88243620
	ctx.lr = 0x88050A54;
	__imp__KeTlsSetValue(ctx, base);
loc_88050A54:
	// b 0x88050a68
	goto loc_88050A68;
loc_88050A58:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_88050A68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881e9018
	ctx.lr = 0x88050A70;
	sub_881E9018(ctx, base);
loc_88050A70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88056FA8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88056FA8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88056FA8;
	ctx.current_instruction = 0x88056FA8;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88056FA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,48(r11)
	ctx.current_instruction = 0x88056FB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_880574D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880574D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880574D8) {
			switch (rex_dispatch_address) {
				case 0x880574F0:
				case 0x880574F8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880574D8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880574F0: goto loc_880574F0;
		case 0x880574F8: goto loc_880574F8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880574DC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880574E0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880574E4;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88057110
	ctx.lr = 0x880574F0;
	sub_88057110(ctx, base);
loc_880574F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88062000
	ctx.lr = 0x880574F8;
	sub_88062000(ctx, base);
loc_880574F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880574FC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88057504;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88057AF8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88057AF8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88057AF8) {
			switch (rex_dispatch_address) {
				case 0x88057B10:
				case 0x88057B24:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88057AF8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88057B10: goto loc_88057B10;
		case 0x88057B24: goto loc_88057B24;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88057AFC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88057B00;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88057B04;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88062268
	ctx.lr = 0x88057B10;
	sub_88062268(ctx, base);
loc_88057B10:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,6808
	ctx.r10.s64 = ctx.r11.s64 + 6808;
	// stw r10,0(r31)
	ctx.current_instruction = 0x88057B1C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x88062238
	ctx.lr = 0x88057B24;
	sub_88062238(ctx, base);
loc_88057B24:
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	ctx.current_instruction = 0x88057B30;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	ctx.current_instruction = 0x88057B34;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lfs f0,6732(r9)
	ctx.current_instruction = 0x88057B38;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,64(r31)
	ctx.current_instruction = 0x88057B3C;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stfs f0,80(r31)
	ctx.current_instruction = 0x88057B40;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r11,68(r31)
	ctx.current_instruction = 0x88057B44;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	ctx.current_instruction = 0x88057B48;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	ctx.current_instruction = 0x88057B4C;
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88057B54;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88057B5C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880597E0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880597E0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880597E0) {
			switch (rex_dispatch_address) {
				case 0x880597E8:
				case 0x88059804:
				case 0x8805983C:
				case 0x88059870:
				case 0x880598AC:
				case 0x880598D8:
				case 0x88059904:
				case 0x88059920:
				case 0x88059954:
				case 0x8805996C:
				case 0x88059984:
				case 0x88059990:
				case 0x8805999C:
				case 0x880599A8:
				case 0x880599C0:
				case 0x880599E4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880597E0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880597E8: goto loc_880597E8;
		case 0x88059804: goto loc_88059804;
		case 0x8805983C: goto loc_8805983C;
		case 0x88059870: goto loc_88059870;
		case 0x880598AC: goto loc_880598AC;
		case 0x880598D8: goto loc_880598D8;
		case 0x88059904: goto loc_88059904;
		case 0x88059920: goto loc_88059920;
		case 0x88059954: goto loc_88059954;
		case 0x8805996C: goto loc_8805996C;
		case 0x88059984: goto loc_88059984;
		case 0x88059990: goto loc_88059990;
		case 0x8805999C: goto loc_8805999C;
		case 0x880599A8: goto loc_880599A8;
		case 0x880599C0: goto loc_880599C0;
		case 0x880599E4: goto loc_880599E4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880597E8;
	__savegprlr_27(ctx, base);
loc_880597E8:
	// stfd f31,-56(r1)
	ctx.current_instruction = 0x880597E8;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// addi r31,r1,-2000
	ctx.r31.s64 = ctx.r1.s64 + -2000;
	// stwu r1,-2000(r1)
	ctx.current_instruction = 0x880597F0;
	ea = -2000 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r27,r3,136
	ctx.r27.s64 = ctx.r3.s64 + 136;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88057968
	ctx.lr = 0x88059804;
	sub_88057968(ctx, base);
loc_88059804:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// std r11,528(r30)
	ctx.current_instruction = 0x88059810;
	REX_STORE_U64(ctx.r30.u32 + 528, ctx.r11.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,500(r30)
	ctx.current_instruction = 0x88059818;
	REX_STORE_U32(ctx.r30.u32 + 500, ctx.r10.u32);
	// stw r11,536(r30)
	ctx.current_instruction = 0x8805981C;
	REX_STORE_U32(ctx.r30.u32 + 536, ctx.r11.u32);
	// stw r11,540(r30)
	ctx.current_instruction = 0x88059820;
	REX_STORE_U32(ctx.r30.u32 + 540, ctx.r11.u32);
	// stw r11,544(r30)
	ctx.current_instruction = 0x88059824;
	REX_STORE_U32(ctx.r30.u32 + 544, ctx.r11.u32);
	// lwz r3,52(r30)
	ctx.current_instruction = 0x88059828;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8805982C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r9)
	ctx.current_instruction = 0x88059830;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8805983C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805983C:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x88059890
	if (ctx.cr6.lt) goto loc_88059890;
	// lwz r11,548(r30)
	ctx.current_instruction = 0x88059850;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 548);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r30,520
	ctx.r3.s64 = ctx.r30.s64 + 520;
	// bl 0x880645f8
	ctx.lr = 0x88059870;
	sub_880645F8(ctx, base);
loc_88059870:
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// ori r29,r9,65535
	ctx.r29.u64 = ctx.r9.u64 | 65535;
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r6,r29
	ctx.r28.u64 = ctx.r6.u64 & ctx.r29.u64;
	// stw r28,80(r31)
	ctx.current_instruction = 0x88059888;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// b 0x88059898
	goto loc_88059898;
loc_88059890:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
loc_88059898:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x880599e4
	if (ctx.cr6.lt) goto loc_880599E4;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,520(r30)
	ctx.current_instruction = 0x880598A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 520);
	// bl 0x880636b8
	ctx.lr = 0x880598AC;
	sub_880636B8(ctx, base);
loc_880598AC:
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r9,r29
	ctx.r28.u64 = ctx.r9.u64 & ctx.r29.u64;
	// stw r28,80(r31)
	ctx.current_instruction = 0x880598BC;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x880599e4
	if (ctx.cr6.lt) goto loc_880599E4;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// lwz r4,508(r30)
	ctx.current_instruction = 0x880598CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r3,520(r30)
	ctx.current_instruction = 0x880598D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 520);
	// bl 0x88064840
	ctx.lr = 0x880598D8;
	sub_88064840(ctx, base);
loc_880598D8:
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r9,r29
	ctx.r28.u64 = ctx.r9.u64 & ctx.r29.u64;
	// stw r28,80(r31)
	ctx.current_instruction = 0x880598E8;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x880599e4
	if (ctx.cr6.lt) goto loc_880599E4;
	// li r5,1016
	ctx.r5.s64 = 1016;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// bl 0x88052d90
	ctx.lr = 0x88059904;
	sub_88052D90(ctx, base);
loc_88059904:
	// lwz r11,508(r30)
	ctx.current_instruction = 0x88059904;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 508);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r4,r31,928
	ctx.r4.s64 = ctx.r31.s64 + 928;
	// sth r11,928(r31)
	ctx.current_instruction = 0x88059910;
	REX_STORE_U16(ctx.r31.u32 + 928, ctx.r11.u16);
	// addi r3,r30,520
	ctx.r3.s64 = ctx.r30.s64 + 520;
	// stw r10,932(r31)
	ctx.current_instruction = 0x88059918;
	REX_STORE_U32(ctx.r31.u32 + 932, ctx.r10.u32);
	// bl 0x88064b10
	ctx.lr = 0x88059920;
	sub_88064B10(ctx, base);
loc_88059920:
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r6,r29
	ctx.r28.u64 = ctx.r6.u64 & ctx.r29.u64;
	// stw r28,80(r31)
	ctx.current_instruction = 0x88059930;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x880599e4
	if (ctx.cr6.lt) goto loc_880599E4;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x8805993C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,36(r11)
	ctx.current_instruction = 0x88059948;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88059954;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88059954:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,0(r27)
	ctx.current_instruction = 0x8805995C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,40(r9)
	ctx.current_instruction = 0x88059960;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8805996C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805996C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r7,0(r27)
	ctx.current_instruction = 0x88059974;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r6,44(r7)
	ctx.current_instruction = 0x88059978;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88059984;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88059984:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,140(r31)
	ctx.current_instruction = 0x88059988;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x88057aa8
	ctx.lr = 0x88059990;
	sub_88057AA8(ctx, base);
loc_88059990:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,144(r31)
	ctx.current_instruction = 0x88059994;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x88057ab0
	ctx.lr = 0x8805999C;
	sub_88057AB0(ctx, base);
loc_8805999C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,96(r31)
	ctx.current_instruction = 0x880599A0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x88057ab8
	ctx.lr = 0x880599A8;
	sub_88057AB8(ctx, base);
loc_880599A8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,144(r31)
	ctx.current_instruction = 0x880599AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r4,140(r31)
	ctx.current_instruction = 0x880599B0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r4,r11,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x88057ac0
	ctx.lr = 0x880599C0;
	sub_88057AC0(ctx, base);
loc_880599C0:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfs f0,136(r31)
	ctx.current_instruction = 0x880599C4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6732(r10)
	ctx.current_instruction = 0x880599C8;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6732);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x880599d8
	if (ctx.cr6.eq) goto loc_880599D8;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_880599D8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x88057958
	ctx.lr = 0x880599E4;
	sub_88057958(ctx, base);
loc_880599E4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x88059a00
	goto loc_88059A00;
loc_88059A00:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,2000
	ctx.r1.s64 = ctx.r31.s64 + 2000;
	// lfd f31,-56(r1)
	ctx.current_instruction = 0x88059A08;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880607E0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880607E0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880607E0) {
			switch (rex_dispatch_address) {
				case 0x880607E8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880607E0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880607E8: goto loc_880607E8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880607E8;
	__savegprlr_14(ctx, base);
loc_880607E8:
	// lwz r27,14628(r9)
	ctx.current_instruction = 0x880607E8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 14628);
	// subf r28,r7,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r26,14476(r9)
	ctx.current_instruction = 0x880607F0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 14476);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mullw r10,r27,r7
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// lwz r8,14524(r9)
	ctx.current_instruction = 0x880607FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// lwz r7,14532(r9)
	ctx.current_instruction = 0x88060800;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14532);
	// lwz r31,14500(r9)
	ctx.current_instruction = 0x88060804;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 14500);
	// lwz r30,14504(r9)
	ctx.current_instruction = 0x88060808;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 14504);
	// lwz r29,14508(r9)
	ctx.current_instruction = 0x8806080C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 14508);
	// lwz r25,14684(r9)
	ctx.current_instruction = 0x88060810;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 14684);
	// srawi r24,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r10.s32 >> 2;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r23,r26,r27
	ctx.r23.u64 = ctx.r27.u64 - ctx.r26.u64;
	// addze r11,r24
	temp.s64 = ctx.r24.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r24.u32;
	ctx.r11.s64 = temp.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r23,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 1;
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r24,r8,r3
	ctx.r24.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r22,r26,r27
	ctx.r22.u64 = ctx.r27.u64 - ctx.r26.u64;
	// addze r23,r23
	temp.s64 = ctx.r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r23.u32;
	ctx.r23.s64 = temp.s64;
	// stw r24,20(r1)
	ctx.current_instruction = 0x88060848;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r24.u32);
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r22,-180(r1)
	ctx.current_instruction = 0x88060850;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r22.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r23,-176(r1)
	ctx.current_instruction = 0x88060858;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r23.u32);
	// add r10,r7,r5
	ctx.r10.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// beq cr6,0x88060c78
	if (ctx.cr6.eq) goto loc_88060C78;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x88060f18
	if (!ctx.cr6.gt) goto loc_88060F18;
	// addi r7,r28,-1
	ctx.r7.s64 = ctx.r28.s64 + -1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stw r5,36(r1)
	ctx.current_instruction = 0x88060880;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// rotlwi r8,r26,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// stw r3,44(r1)
	ctx.current_instruction = 0x8806088C;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r3.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88060894:
	// lwz r10,14628(r9)
	ctx.current_instruction = 0x88060894;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14628);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,14524(r9)
	ctx.current_instruction = 0x8806089C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r10,-172(r1)
	ctx.current_instruction = 0x880608AC;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// ble cr6,0x88060b14
	if (!ctx.cr6.gt) goto loc_88060B14;
	// addi r11,r24,-2
	ctx.r11.s64 = ctx.r24.s64 + -2;
	// addi r10,r6,-2
	ctx.r10.s64 = ctx.r6.s64 + -2;
loc_880608BC:
	// lbz r8,2(r11)
	ctx.current_instruction = 0x880608BC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r28,6(r10)
	ctx.current_instruction = 0x880608C0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// addi r3,r8,2079
	ctx.r3.s64 = ctx.r8.s64 + 2079;
	// lbz r31,2(r10)
	ctx.current_instruction = 0x880608C8;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// addi r25,r28,2079
	ctx.r25.s64 = ctx.r28.s64 + 2079;
	// lbz r6,3(r11)
	ctx.current_instruction = 0x880608D0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r27,r3,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r30,4(r11)
	ctx.current_instruction = 0x880608D8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r23,3(r10)
	ctx.current_instruction = 0x880608E0;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// addi r29,r31,2079
	ctx.r29.s64 = ctx.r31.s64 + 2079;
	// lbz r5,6(r11)
	ctx.current_instruction = 0x880608E8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// addi r19,r6,1311
	ctx.r19.s64 = ctx.r6.s64 + 1311;
	// lbz r22,7(r10)
	ctx.current_instruction = 0x880608F0;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r21,4(r10)
	ctx.current_instruction = 0x880608F8;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lwzx r27,r27,r9
	ctx.current_instruction = 0x880608FC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// addi r14,r8,1823
	ctx.r14.s64 = ctx.r8.s64 + 1823;
	// lwzx r25,r25,r9
	ctx.current_instruction = 0x88060904;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// addi r6,r6,1055
	ctx.r6.s64 = ctx.r6.s64 + 1055;
	// lbz r26,7(r11)
	ctx.current_instruction = 0x8806090C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// rlwinm r14,r14,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r3,8(r11)
	ctx.current_instruction = 0x88060914;
	ea = 8 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r20,r29,r9
	ctx.current_instruction = 0x8806091C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r27,-192(r1)
	ctx.current_instruction = 0x88060924;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r27.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r25,-184(r1)
	ctx.current_instruction = 0x8806092C;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r25.u32);
	// addi r23,r5,2079
	ctx.r23.s64 = ctx.r5.s64 + 2079;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// lbzu r24,8(r10)
	ctx.current_instruction = 0x88060938;
	ea = 8 + ctx.r10.u32;
	ctx.r24.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// rlwinm r17,r23,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// std r11,-168(r1)
	ctx.current_instruction = 0x88060940;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r11.u64);
	// stw r20,-188(r1)
	ctx.current_instruction = 0x88060944;
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r20.u32);
	// rlwinm r20,r19,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// addi r21,r30,1311
	ctx.r21.s64 = ctx.r30.s64 + 1311;
	// addi r22,r3,543
	ctx.r22.s64 = ctx.r3.s64 + 543;
	// addi r18,r27,1311
	ctx.r18.s64 = ctx.r27.s64 + 1311;
	// lwzx r23,r20,r9
	ctx.current_instruction = 0x8806095C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r9.u32);
	// addi r16,r26,1311
	ctx.r16.s64 = ctx.r26.s64 + 1311;
	// rlwinm r20,r21,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r21,r17,r9
	ctx.current_instruction = 0x88060968;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r9.u32);
	// addi r15,r25,543
	ctx.r15.s64 = ctx.r25.s64 + 543;
	// rlwinm r22,r22,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r16,r16,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r17,r24,543
	ctx.r17.s64 = ctx.r24.s64 + 543;
	// lwzx r20,r20,r9
	ctx.current_instruction = 0x88060980;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r9.u32);
	// rlwinm r15,r15,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r22,r9
	ctx.current_instruction = 0x8806098C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r9.u32);
	// addi r19,r29,543
	ctx.r19.s64 = ctx.r29.s64 + 543;
	// lwzx r18,r18,r9
	ctx.current_instruction = 0x88060994;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r9.u32);
	// addi r28,r28,1823
	ctx.r28.s64 = ctx.r28.s64 + 1823;
	// lwz r8,-192(r1)
	ctx.current_instruction = 0x8806099C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,-192(r1)
	ctx.current_instruction = 0x880609A4;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r6.u32);
	// add r8,r8,r23
	ctx.r8.u64 = ctx.r8.u64 + ctx.r23.u64;
	// lwz r23,-184(r1)
	ctx.current_instruction = 0x880609AC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// lwzx r6,r16,r9
	ctx.current_instruction = 0x880609B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r9.u32);
	// lwz r11,-188(r1)
	ctx.current_instruction = 0x880609B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// stw r17,-184(r1)
	ctx.current_instruction = 0x880609B8;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r17.u32);
	// lwzx r17,r15,r9
	ctx.current_instruction = 0x880609BC;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r9.u32);
	// lwz r16,-184(r1)
	ctx.current_instruction = 0x880609C0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// stw r23,-188(r1)
	ctx.current_instruction = 0x880609C4;
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r23.u32);
	// add r23,r21,r22
	ctx.r23.u64 = ctx.r21.u64 + ctx.r22.u64;
	// lwz r15,-188(r1)
	ctx.current_instruction = 0x880609CC;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// add r21,r15,r18
	ctx.r21.u64 = ctx.r15.u64 + ctx.r18.u64;
	// lwz r15,-192(r1)
	ctx.current_instruction = 0x880609D4;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// add r22,r11,r20
	ctx.r22.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lwzx r19,r19,r9
	ctx.current_instruction = 0x880609DC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r9.u32);
	// add r6,r23,r6
	ctx.r6.u64 = ctx.r23.u64 + ctx.r6.u64;
	// lwzx r16,r16,r9
	ctx.current_instruction = 0x880609E4;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r9.u32);
	// add r23,r22,r17
	ctx.r23.u64 = ctx.r22.u64 + ctx.r17.u64;
	// add r8,r8,r19
	ctx.r8.u64 = ctx.r8.u64 + ctx.r19.u64;
	// lwzx r19,r14,r9
	ctx.current_instruction = 0x880609F0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r9.u32);
	// add r21,r21,r16
	ctx.r21.u64 = ctx.r21.u64 + ctx.r16.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// lwzx r20,r15,r9
	ctx.current_instruction = 0x880609FC;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r9.u32);
	// addi r27,r27,1055
	ctx.r27.s64 = ctx.r27.s64 + 1055;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r24,287
	ctx.r24.s64 = ctx.r24.s64 + 287;
	// addi r18,r30,1055
	ctx.r18.s64 = ctx.r30.s64 + 1055;
	// addi r29,r29,287
	ctx.r29.s64 = ctx.r29.s64 + 287;
	// lwzx r30,r28,r9
	ctx.current_instruction = 0x88060A18;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// rlwinm r28,r24,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r31,1823
	ctx.r22.s64 = ctx.r31.s64 + 1823;
	// lwzx r31,r27,r9
	ctx.current_instruction = 0x88060A24;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r18,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r25,287
	ctx.r27.s64 = ctx.r25.s64 + 287;
	// rlwinm r25,r22,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r5,1823
	ctx.r22.s64 = ctx.r5.s64 + 1823;
	// lwzx r5,r28,r9
	ctx.current_instruction = 0x88060A3C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// addi r3,r3,287
	ctx.r3.s64 = ctx.r3.s64 + 287;
	// lwzx r28,r29,r9
	ctx.current_instruction = 0x88060A44;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// rlwinm r18,r27,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r24,r9
	ctx.current_instruction = 0x88060A4C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	// rlwinm r24,r3,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r26,1055
	ctx.r29.s64 = ctx.r26.s64 + 1055;
	// lwzx r25,r25,r9
	ctx.current_instruction = 0x88060A58;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwinm r26,r22,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r19,r20
	ctx.r22.u64 = ctx.r19.u64 + ctx.r20.u64;
	// lwzx r31,r18,r9
	ctx.current_instruction = 0x88060A68;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r9.u32);
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lwzx r30,r24,r9
	ctx.current_instruction = 0x88060A70;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	// rlwinm r20,r29,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r25,r27
	ctx.r5.u64 = ctx.r25.u64 + ctx.r27.u64;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// add r27,r22,r28
	ctx.r27.u64 = ctx.r22.u64 + ctx.r28.u64;
	// lwzx r28,r26,r9
	ctx.current_instruction = 0x88060A84;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	// srawi r29,r23,16
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xFFFF) != 0);
	ctx.r29.s64 = ctx.r23.s32 >> 16;
	// srawi r23,r21,16
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFFFF) != 0);
	ctx.r23.s64 = ctx.r21.s32 >> 16;
	// lwzx r26,r20,r9
	ctx.current_instruction = 0x88060A90;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r9.u32);
	// add r31,r5,r31
	ctx.r31.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r27,r27,16
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 16;
	// srawi r3,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// add r5,r28,r30
	ctx.r5.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r3,r27,r3
	ctx.r3.u64 = ctx.r27.u64 + ctx.r3.u64;
	// add r30,r5,r26
	ctx.r30.u64 = ctx.r5.u64 + ctx.r26.u64;
	// srawi r31,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 16;
	// add r5,r23,r29
	ctx.r5.u64 = ctx.r23.u64 + ctx.r29.u64;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// srawi r30,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 16;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r3,44(r1)
	ctx.current_instruction = 0x88060AC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// lwz r5,36(r1)
	ctx.current_instruction = 0x88060AD0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// stbu r6,1(r5)
	ctx.current_instruction = 0x88060AE8;
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r5.u32 = ea;
	// stbu r8,1(r3)
	ctx.current_instruction = 0x88060AEC;
	ea = 1 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r3.u32 = ea;
	// lwz r8,14476(r9)
	ctx.current_instruction = 0x88060AF0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14476);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// stw r3,44(r1)
	ctx.current_instruction = 0x88060AF8;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r3.u32);
	// ld r11,-168(r1)
	ctx.current_instruction = 0x88060AFC;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// stw r5,36(r1)
	ctx.current_instruction = 0x88060B00;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// blt cr6,0x880608bc
	if (ctx.cr6.lt) goto loc_880608BC;
	// lwz r24,20(r1)
	ctx.current_instruction = 0x88060B08;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r22,-180(r1)
	ctx.current_instruction = 0x88060B0C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// lwz r23,-176(r1)
	ctx.current_instruction = 0x88060B10;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
loc_88060B14:
	// lwz r11,14524(r9)
	ctx.current_instruction = 0x88060B14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// ble cr6,0x88060c50
	if (!ctx.cr6.gt) goto loc_88060C50;
	// lwz r8,-172(r1)
	ctx.current_instruction = 0x88060B28;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// addi r11,r24,-3
	ctx.r11.s64 = ctx.r24.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
loc_88060B38:
	// lbz r31,3(r11)
	ctx.current_instruction = 0x88060B38;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// lbz r8,4(r11)
	ctx.current_instruction = 0x88060B40;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r29,5(r11)
	ctx.current_instruction = 0x88060B44;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// addi r31,r31,1567
	ctx.r31.s64 = ctx.r31.s64 + 1567;
	// addi r30,r8,799
	ctx.r30.s64 = ctx.r8.s64 + 799;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,31
	ctx.r8.s64 = ctx.r8.s64 + 31;
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r31,r9
	ctx.current_instruction = 0x88060B64;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r31,r30,r9
	ctx.current_instruction = 0x88060B68;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwzx r31,r29,r9
	ctx.current_instruction = 0x88060B70;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stb r8,0(r4)
	ctx.current_instruction = 0x88060B7C;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// lbz r31,7(r11)
	ctx.current_instruction = 0x88060B80;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r30,9(r11)
	ctx.current_instruction = 0x88060B84;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// addi r30,r30,31
	ctx.r30.s64 = ctx.r30.s64 + 31;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r8,8(r11)
	ctx.current_instruction = 0x88060B90;
	ea = 8 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r29,r31,1567
	ctx.r29.s64 = ctx.r31.s64 + 1567;
	// addi r8,r8,799
	ctx.r8.s64 = ctx.r8.s64 + 799;
	// lwzx r31,r30,r9
	ctx.current_instruction = 0x88060B9C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r30,r9
	ctx.current_instruction = 0x88060BA8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r30,r29,r9
	ctx.current_instruction = 0x88060BAC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stb r8,1(r4)
	ctx.current_instruction = 0x88060BBC;
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r8.u8);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// lbz r31,4(r10)
	ctx.current_instruction = 0x88060BC4;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r8,5(r10)
	ctx.current_instruction = 0x88060BC8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r30,6(r10)
	ctx.current_instruction = 0x88060BCC;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// addi r30,r30,31
	ctx.r30.s64 = ctx.r30.s64 + 31;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1567
	ctx.r31.s64 = ctx.r31.s64 + 1567;
	// addi r8,r8,799
	ctx.r8.s64 = ctx.r8.s64 + 799;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r30,r9
	ctx.current_instruction = 0x88060BE8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r8,r29,r9
	ctx.current_instruction = 0x88060BEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// lwzx r30,r28,r9
	ctx.current_instruction = 0x88060BF0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stb r8,1(r7)
	ctx.current_instruction = 0x88060C00;
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r8.u8);
	// lbz r31,9(r10)
	ctx.current_instruction = 0x88060C04;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// lbz r30,10(r10)
	ctx.current_instruction = 0x88060C08;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// addi r30,r30,31
	ctx.r30.s64 = ctx.r30.s64 + 31;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r8,8(r10)
	ctx.current_instruction = 0x88060C14;
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r29,r31,799
	ctx.r29.s64 = ctx.r31.s64 + 799;
	// addi r8,r8,1567
	ctx.r8.s64 = ctx.r8.s64 + 1567;
	// lwzx r31,r30,r9
	ctx.current_instruction = 0x88060C20;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.current_instruction = 0x88060C2C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r30,r30,r9
	ctx.current_instruction = 0x88060C30;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stbu r8,2(r7)
	ctx.current_instruction = 0x88060C40;
	ea = 2 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r7.u32 = ea;
	// lwz r8,14476(r9)
	ctx.current_instruction = 0x88060C44;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14476);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88060b38
	if (ctx.cr6.lt) goto loc_88060B38;
loc_88060C50:
	// lwz r11,14528(r9)
	ctx.current_instruction = 0x88060C50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14528);
	// add r5,r23,r5
	ctx.r5.u64 = ctx.r23.u64 + ctx.r5.u64;
	// add r3,r23,r3
	ctx.r3.u64 = ctx.r23.u64 + ctx.r3.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r5,36(r1)
	ctx.current_instruction = 0x88060C60;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// add r4,r22,r4
	ctx.r4.u64 = ctx.r22.u64 + ctx.r4.u64;
	// stw r3,44(r1)
	ctx.current_instruction = 0x88060C68;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r3.u32);
	// stw r24,20(r1)
	ctx.current_instruction = 0x88060C6C;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r24.u32);
	// bdnz 0x88060894
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88060894;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88060C78:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x88060f18
	if (!ctx.cr6.gt) goto loc_88060F18;
	// addi r7,r28,-1
	ctx.r7.s64 = ctx.r28.s64 + -1;
	// lwz r8,14476(r9)
	ctx.current_instruction = 0x88060C84;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14476);
	// addi r27,r10,-1
	ctx.r27.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r26,r11,-1
	ctx.r26.s64 = ctx.r11.s64 + -1;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88060C9C:
	// lwz r11,14628(r9)
	ctx.current_instruction = 0x88060C9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14628);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r25,r11,r4
	ctx.r25.u64 = ctx.r11.u64 + ctx.r4.u64;
	// ble cr6,0x88060dc4
	if (!ctx.cr6.gt) goto loc_88060DC4;
	// addi r11,r24,-2
	ctx.r11.s64 = ctx.r24.s64 + -2;
loc_88060CB4:
	// lbz r31,2(r11)
	ctx.current_instruction = 0x88060CB4;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r3,3(r11)
	ctx.current_instruction = 0x88060CBC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,7(r11)
	ctx.current_instruction = 0x88060CC0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// addi r29,r31,2079
	ctx.r29.s64 = ctx.r31.s64 + 2079;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x88060CC8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// addi r28,r3,1311
	ctx.r28.s64 = ctx.r3.s64 + 1311;
	// lbz r5,6(r11)
	ctx.current_instruction = 0x88060CD0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// addi r17,r3,1055
	ctx.r17.s64 = ctx.r3.s64 + 1055;
	// lbzu r6,8(r11)
	ctx.current_instruction = 0x88060CD8;
	ea = 8 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r30,r7,543
	ctx.r30.s64 = ctx.r7.s64 + 543;
	// addi r20,r5,2079
	ctx.r20.s64 = ctx.r5.s64 + 2079;
	// addi r21,r6,543
	ctx.r21.s64 = ctx.r6.s64 + 543;
	// addi r19,r6,287
	ctx.r19.s64 = ctx.r6.s64 + 287;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,1823
	ctx.r5.s64 = ctx.r5.s64 + 1823;
	// addi r18,r31,1823
	ctx.r18.s64 = ctx.r31.s64 + 1823;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r20,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.current_instruction = 0x88060D04;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwzx r28,r29,r9
	ctx.current_instruction = 0x88060D08;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// rlwinm r31,r21,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r21,r8,1311
	ctx.r21.s64 = ctx.r8.s64 + 1311;
	// rlwinm r29,r19,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r20,r8,1055
	ctx.r20.s64 = ctx.r8.s64 + 1055;
	// lwzx r8,r5,r9
	ctx.current_instruction = 0x88060D1C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r9
	ctx.current_instruction = 0x88060D24;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// rlwinm r19,r18,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r9
	ctx.current_instruction = 0x88060D2C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r7,r7,287
	ctx.r7.s64 = ctx.r7.s64 + 287;
	// rlwinm r18,r17,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r29,r9
	ctx.current_instruction = 0x88060D38;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// rlwinm r21,r21,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r20,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r30,r9
	ctx.current_instruction = 0x88060D44;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// rlwinm r17,r7,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r19,r9
	ctx.current_instruction = 0x88060D4C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r9.u32);
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// lwzx r30,r18,r9
	ctx.current_instruction = 0x88060D54;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r9.u32);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwzx r31,r21,r9
	ctx.current_instruction = 0x88060D5C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r9.u32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwzx r5,r20,r9
	ctx.current_instruction = 0x88060D64;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r9.u32);
	// add r29,r6,r29
	ctx.r29.u64 = ctx.r6.u64 + ctx.r29.u64;
	// lwzx r6,r17,r9
	ctx.current_instruction = 0x88060D6C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r9.u32);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r31,r7,r6
	ctx.r31.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r8,r29,16
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 16;
	// srawi r7,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 16;
	// srawi r6,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 16;
	// srawi r5,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r31.s32 >> 16;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// srawi r6,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 1;
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r3,r6,24
	ctx.r3.u64 = ctx.r6.u32 & 0xFF;
	// stbu r5,1(r27)
	ctx.current_instruction = 0x88060DB0;
	ea = 1 + ctx.r27.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r27.u32 = ea;
	// stbu r3,1(r26)
	ctx.current_instruction = 0x88060DB4;
	ea = 1 + ctx.r26.u32;
	REX_STORE_U8(ea, ctx.r3.u8);
	ctx.r26.u32 = ea;
	// lwz r8,14476(r9)
	ctx.current_instruction = 0x88060DB8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14476);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88060cb4
	if (ctx.cr6.lt) goto loc_88060CB4;
loc_88060DC4:
	// lwz r11,14524(r9)
	ctx.current_instruction = 0x88060DC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// ble cr6,0x88060f00
	if (!ctx.cr6.gt) goto loc_88060F00;
	// addi r11,r24,-4
	ctx.r11.s64 = ctx.r24.s64 + -4;
	// addi r7,r25,-1
	ctx.r7.s64 = ctx.r25.s64 + -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_88060DE4:
	// lbz r8,4(r11)
	ctx.current_instruction = 0x88060DE4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// lbz r5,5(r11)
	ctx.current_instruction = 0x88060DEC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r31,6(r11)
	ctx.current_instruction = 0x88060DF0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// addi r3,r8,1567
	ctx.r3.s64 = ctx.r8.s64 + 1567;
	// addi r5,r5,799
	ctx.r5.s64 = ctx.r5.s64 + 799;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,31
	ctx.r8.s64 = ctx.r8.s64 + 31;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r3,r9
	ctx.current_instruction = 0x88060E10;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwzx r5,r5,r9
	ctx.current_instruction = 0x88060E14;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwzx r5,r31,r9
	ctx.current_instruction = 0x88060E1C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r3,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 16;
	// stb r3,0(r4)
	ctx.current_instruction = 0x88060E28;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r3.u8);
	// lbz r8,9(r11)
	ctx.current_instruction = 0x88060E2C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r5,10(r11)
	ctx.current_instruction = 0x88060E30;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// addi r3,r5,31
	ctx.r3.s64 = ctx.r5.s64 + 31;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r8,799
	ctx.r3.s64 = ctx.r8.s64 + 799;
	// lbzu r8,8(r11)
	ctx.current_instruction = 0x88060E40;
	ea = 8 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r8,r8,1567
	ctx.r8.s64 = ctx.r8.s64 + 1567;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r9
	ctx.current_instruction = 0x88060E4C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.current_instruction = 0x88060E54;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r3,r3,r9
	ctx.current_instruction = 0x88060E58;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r3,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 16;
	// stb r3,1(r4)
	ctx.current_instruction = 0x88060E68;
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r3.u8);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// lbz r5,4(r10)
	ctx.current_instruction = 0x88060E70;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r8,6(r10)
	ctx.current_instruction = 0x88060E74;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// addi r8,r8,31
	ctx.r8.s64 = ctx.r8.s64 + 31;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r3,5(r10)
	ctx.current_instruction = 0x88060E80;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// addi r5,r5,1567
	ctx.r5.s64 = ctx.r5.s64 + 1567;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,799
	ctx.r8.s64 = ctx.r8.s64 + 799;
	// lwzx r5,r31,r9
	ctx.current_instruction = 0x88060E94;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r3,r9
	ctx.current_instruction = 0x88060E9C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwzx r3,r31,r9
	ctx.current_instruction = 0x88060EA0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r3,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 16;
	// stb r3,1(r7)
	ctx.current_instruction = 0x88060EB0;
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r3.u8);
	// lbz r5,9(r10)
	ctx.current_instruction = 0x88060EB4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// lbz r3,10(r10)
	ctx.current_instruction = 0x88060EB8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// addi r3,r3,31
	ctx.r3.s64 = ctx.r3.s64 + 31;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r8,8(r10)
	ctx.current_instruction = 0x88060EC4;
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r31,r5,799
	ctx.r31.s64 = ctx.r5.s64 + 799;
	// addi r8,r8,1567
	ctx.r8.s64 = ctx.r8.s64 + 1567;
	// lwzx r5,r3,r9
	ctx.current_instruction = 0x88060ED0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.current_instruction = 0x88060EDC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r3,r3,r9
	ctx.current_instruction = 0x88060EE0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r3,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 16;
	// stbu r3,2(r7)
	ctx.current_instruction = 0x88060EF0;
	ea = 2 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r3.u8);
	ctx.r7.u32 = ea;
	// lwz r8,14476(r9)
	ctx.current_instruction = 0x88060EF4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14476);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88060de4
	if (ctx.cr6.lt) goto loc_88060DE4;
loc_88060F00:
	// lwz r11,14528(r9)
	ctx.current_instruction = 0x88060F00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14528);
	// add r4,r22,r4
	ctx.r4.u64 = ctx.r22.u64 + ctx.r4.u64;
	// add r27,r23,r27
	ctx.r27.u64 = ctx.r23.u64 + ctx.r27.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r26,r23,r26
	ctx.r26.u64 = ctx.r23.u64 + ctx.r26.u64;
	// bdnz 0x88060c9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88060C9C;
loc_88060F18:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807AD18) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807AD18;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807AD18) {
			switch (rex_dispatch_address) {
				case 0x8807AD20:
				case 0x8807AD40:
				case 0x8807AD7C:
				case 0x8807AD84:
				case 0x8807AD98:
				case 0x8807AE50:
				case 0x8807AE94:
				case 0x8807AEC0:
				case 0x8807AEF8:
				case 0x8807AF88:
				case 0x8807AFB4:
				case 0x8807AFF0:
				case 0x8807B004:
				case 0x8807B00C:
				case 0x8807B038:
				case 0x8807B07C:
				case 0x8807B0B4:
				case 0x8807B0BC:
				case 0x8807B0D4:
				case 0x8807B0E4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807AD18;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807AD20: goto loc_8807AD20;
		case 0x8807AD40: goto loc_8807AD40;
		case 0x8807AD7C: goto loc_8807AD7C;
		case 0x8807AD84: goto loc_8807AD84;
		case 0x8807AD98: goto loc_8807AD98;
		case 0x8807AE50: goto loc_8807AE50;
		case 0x8807AE94: goto loc_8807AE94;
		case 0x8807AEC0: goto loc_8807AEC0;
		case 0x8807AEF8: goto loc_8807AEF8;
		case 0x8807AF88: goto loc_8807AF88;
		case 0x8807AFB4: goto loc_8807AFB4;
		case 0x8807AFF0: goto loc_8807AFF0;
		case 0x8807B004: goto loc_8807B004;
		case 0x8807B00C: goto loc_8807B00C;
		case 0x8807B038: goto loc_8807B038;
		case 0x8807B07C: goto loc_8807B07C;
		case 0x8807B0B4: goto loc_8807B0B4;
		case 0x8807B0BC: goto loc_8807B0BC;
		case 0x8807B0D4: goto loc_8807B0D4;
		case 0x8807B0E4: goto loc_8807B0E4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8807AD20;
	__savegprlr_25(ctx, base);
loc_8807AD20:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x8807AD20;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r26,676(r3)
	ctx.current_instruction = 0x8807AD28;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 676);
	// lwz r25,1424(r3)
	ctx.current_instruction = 0x8807AD2C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 1424);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r27,96(r1)
	ctx.current_instruction = 0x8807AD38;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// bl 0x88078398
	ctx.lr = 0x8807AD40;
	sub_88078398(ctx, base);
loc_8807AD40:
	// lwz r11,8024(r3)
	ctx.current_instruction = 0x8807AD40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8024);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807ad5c
	if (ctx.cr6.eq) goto loc_8807AD5C;
	// lwz r11,2800(r3)
	ctx.current_instruction = 0x8807AD50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8807b0bc
	if (ctx.cr6.eq) goto loc_8807B0BC;
loc_8807AD5C:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807AD5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8807ad88
	if (!ctx.cr6.eq) goto loc_8807AD88;
	// lwz r11,7596(r31)
	ctx.current_instruction = 0x8807AD68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8807ad80
	if (!ctx.cr6.eq) goto loc_8807AD80;
	// bl 0x8807f478
	ctx.lr = 0x8807AD7C;
	sub_8807F478(ctx, base);
loc_8807AD7C:
	// b 0x8807ad98
	goto loc_8807AD98;
loc_8807AD80:
	// bl 0x880e30c8
	ctx.lr = 0x8807AD84;
	sub_880E30C8(ctx, base);
loc_8807AD84:
	// b 0x8807ad98
	goto loc_8807AD98;
loc_8807AD88:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807ad98
	if (!ctx.cr6.eq) goto loc_8807AD98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e2c80
	ctx.lr = 0x8807AD98;
	sub_880E2C80(ctx, base);
loc_8807AD98:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807AD98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// stw r29,6736(r31)
	ctx.current_instruction = 0x8807AD9C;
	REX_STORE_U32(ctx.r31.u32 + 6736, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,30304(r31)
	ctx.current_instruction = 0x8807ADA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30304);
	// bne cr6,0x8807aefc
	if (!ctx.cr6.eq) goto loc_8807AEFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807ae04
	if (ctx.cr6.eq) goto loc_8807AE04;
	// ld r11,736(r31)
	ctx.current_instruction = 0x8807ADB4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// bne cr6,0x8807ae04
	if (!ctx.cr6.eq) goto loc_8807AE04;
	// lwz r11,7600(r31)
	ctx.current_instruction = 0x8807ADC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7600);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807ae04
	if (!ctx.cr6.eq) goto loc_8807AE04;
	// lwz r11,30308(r31)
	ctx.current_instruction = 0x8807ADCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30308);
	// lwz r10,672(r31)
	ctx.current_instruction = 0x8807ADD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// lwz r11,28(r11)
	ctx.current_instruction = 0x8807ADD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8807adf0
	if (!ctx.cr6.gt) goto loc_8807ADF0;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8807ae04
	if (ctx.cr6.lt) goto loc_8807AE04;
loc_8807ADF0:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,30404(r31)
	ctx.current_instruction = 0x8807ADF4;
	REX_STORE_U32(ctx.r31.u32 + 30404, ctx.r29.u32);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,672(r31)
	ctx.current_instruction = 0x8807AE00;
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r9.u32);
loc_8807AE04:
	// lwz r10,8004(r31)
	ctx.current_instruction = 0x8807AE04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8004);
	// lwz r11,7952(r31)
	ctx.current_instruction = 0x8807AE08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7952);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8807ae1c
	if (ctx.cr6.lt) goto loc_8807AE1C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8807AE1C:
	// lwz r11,30408(r31)
	ctx.current_instruction = 0x8807AE1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807ae54
	if (ctx.cr6.eq) goto loc_8807AE54;
	// lwz r11,7596(r31)
	ctx.current_instruction = 0x8807AE28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8807ae38
	if (!ctx.cr6.eq) goto loc_8807AE38;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_8807AE38:
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880825f0
	ctx.lr = 0x8807AE50;
	sub_880825F0(ctx, base);
loc_8807AE50:
	// b 0x8807b00c
	goto loc_8807B00C;
loc_8807AE54:
	// lwz r11,2116(r31)
	ctx.current_instruction = 0x8807AE54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807ae6c
	if (!ctx.cr6.eq) goto loc_8807AE6C;
	// lwz r11,30728(r31)
	ctx.current_instruction = 0x8807AE60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807ae94
	if (ctx.cr6.eq) goto loc_8807AE94;
loc_8807AE6C:
	// lwz r11,30720(r31)
	ctx.current_instruction = 0x8807AE6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30720);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807ae84
	if (!ctx.cr6.eq) goto loc_8807AE84;
	// lwz r11,30724(r31)
	ctx.current_instruction = 0x8807AE78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807ae94
	if (ctx.cr6.eq) goto loc_8807AE94;
loc_8807AE84:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,672(r31)
	ctx.current_instruction = 0x8807AE88;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806d3c0
	ctx.lr = 0x8807AE94;
	sub_8806D3C0(ctx, base);
loc_8807AE94:
	// lwz r11,1560(r31)
	ctx.current_instruction = 0x8807AE94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r6,1424(r31)
	ctx.current_instruction = 0x8807AEA0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r5,672(r31)
	ctx.current_instruction = 0x8807AEA8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r4,2800(r31)
	ctx.current_instruction = 0x8807AEB0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8807AEB8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880794a0
	ctx.lr = 0x8807AEC0;
	sub_880794A0(ctx, base);
loc_8807AEC0:
	// lwz r10,7868(r31)
	ctx.current_instruction = 0x8807AEC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r4,16(r10)
	ctx.current_instruction = 0x8807AED4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfic r11,r4,39
	ctx.xer.ca = ctx.r4.u32 <= 39;
	ctx.r11.u64 = static_cast<uint64_t>(39) - ctx.r4.u64;
	// lwz r10,4(r10)
	ctx.current_instruction = 0x8807AEE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x88082160
	ctx.lr = 0x8807AEF8;
	sub_88082160(ctx, base);
loc_8807AEF8:
	// b 0x8807b00c
	goto loc_8807B00C;
loc_8807AEFC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807af3c
	if (ctx.cr6.eq) goto loc_8807AF3C;
	// lwz r11,7600(r31)
	ctx.current_instruction = 0x8807AF04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7600);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807af3c
	if (!ctx.cr6.eq) goto loc_8807AF3C;
	// lwz r11,30316(r31)
	ctx.current_instruction = 0x8807AF10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30316);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8807AF14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8807af3c
	if (ctx.cr6.eq) goto loc_8807AF3C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r10,736(r31)
	ctx.current_instruction = 0x8807AF24;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8807AF28;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// cmpd cr6,r10,r8
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r8.s64, ctx.xer);
	// blt cr6,0x8807af3c
	if (ctx.cr6.lt) goto loc_8807AF3C;
	// stw r11,30316(r31)
	ctx.current_instruction = 0x8807AF38;
	REX_STORE_U32(ctx.r31.u32 + 30316, ctx.r11.u32);
loc_8807AF3C:
	// lwz r11,30408(r31)
	ctx.current_instruction = 0x8807AF3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807af60
	if (!ctx.cr6.eq) goto loc_8807AF60;
	// lwz r11,2116(r31)
	ctx.current_instruction = 0x8807AF48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807af60
	if (!ctx.cr6.eq) goto loc_8807AF60;
	// lwz r11,30728(r31)
	ctx.current_instruction = 0x8807AF54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807af88
	if (ctx.cr6.eq) goto loc_8807AF88;
loc_8807AF60:
	// lwz r11,30752(r31)
	ctx.current_instruction = 0x8807AF60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30752);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807af78
	if (!ctx.cr6.eq) goto loc_8807AF78;
	// lwz r11,30756(r31)
	ctx.current_instruction = 0x8807AF6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807af88
	if (ctx.cr6.eq) goto loc_8807AF88;
loc_8807AF78:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4a00
	ctx.lr = 0x8807AF88;
	sub_880E4A00(ctx, base);
loc_8807AF88:
	// lwz r11,1560(r31)
	ctx.current_instruction = 0x8807AF88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r6,1424(r31)
	ctx.current_instruction = 0x8807AF94;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r5,676(r31)
	ctx.current_instruction = 0x8807AF9C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r4,2800(r31)
	ctx.current_instruction = 0x8807AFA4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8807AFAC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880794a0
	ctx.lr = 0x8807AFB4;
	sub_880794A0(ctx, base);
loc_8807AFB4:
	// lwz r10,30304(r31)
	ctx.current_instruction = 0x8807AFB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30304);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8807b00c
	if (ctx.cr6.eq) goto loc_8807B00C;
	// lwz r11,96(r1)
	ctx.current_instruction = 0x8807AFC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b00c
	if (ctx.cr6.eq) goto loc_8807B00C;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807AFCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b00c
	if (!ctx.cr6.eq) goto loc_8807B00C;
	// lwz r11,6736(r31)
	ctx.current_instruction = 0x8807AFD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b018
	if (ctx.cr6.eq) goto loc_8807B018;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88079c58
	ctx.lr = 0x8807AFF0;
	sub_88079C58(ctx, base);
loc_8807AFF0:
	// lwz r11,30304(r31)
	ctx.current_instruction = 0x8807AFF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b004
	if (ctx.cr6.eq) goto loc_8807B004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880fc840
	ctx.lr = 0x8807B004;
	sub_880FC840(ctx, base);
loc_8807B004:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88079088
	ctx.lr = 0x8807B00C;
	sub_88079088(ctx, base);
loc_8807B00C:
	// lwz r11,6736(r31)
	ctx.current_instruction = 0x8807B00C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b03c
	if (!ctx.cr6.eq) goto loc_8807B03C;
loc_8807B018:
	// lwz r11,672(r31)
	ctx.current_instruction = 0x8807B018;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bge cr6,0x8807b03c
	if (!ctx.cr6.lt) goto loc_8807B03C;
	// lwz r11,676(r31)
	ctx.current_instruction = 0x8807B024;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bge cr6,0x8807b03c
	if (!ctx.cr6.lt) goto loc_8807B03C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807ab88
	ctx.lr = 0x8807B038;
	sub_8807AB88(ctx, base);
loc_8807B038:
	// b 0x8807b07c
	goto loc_8807B07C;
loc_8807B03C:
	// lwz r11,6760(r31)
	ctx.current_instruction = 0x8807B03C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b058
	if (ctx.cr6.eq) goto loc_8807B058;
	// lwz r11,6764(r31)
	ctx.current_instruction = 0x8807B048;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6764);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b058
	if (ctx.cr6.eq) goto loc_8807B058;
	// stw r27,6756(r31)
	ctx.current_instruction = 0x8807B054;
	REX_STORE_U32(ctx.r31.u32 + 6756, ctx.r27.u32);
loc_8807B058:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x8807B058;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6748(r31)
	ctx.current_instruction = 0x8807B060;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6748);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,6764(r31)
	ctx.current_instruction = 0x8807B068;
	REX_STORE_U32(ctx.r31.u32 + 6764, ctx.r29.u32);
	// stw r27,6752(r31)
	ctx.current_instruction = 0x8807B06C;
	REX_STORE_U32(ctx.r31.u32 + 6752, ctx.r27.u32);
	// stw r27,6744(r31)
	ctx.current_instruction = 0x8807B070;
	REX_STORE_U32(ctx.r31.u32 + 6744, ctx.r27.u32);
	// stw r29,6760(r31)
	ctx.current_instruction = 0x8807B074;
	REX_STORE_U32(ctx.r31.u32 + 6760, ctx.r29.u32);
	// bl 0x88052d90
	ctx.lr = 0x8807B07C;
	sub_88052D90(ctx, base);
loc_8807B07C:
	// lwz r11,6736(r31)
	ctx.current_instruction = 0x8807B07C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807b0a0
	if (!ctx.cr6.eq) goto loc_8807B0A0;
	// lwz r11,672(r31)
	ctx.current_instruction = 0x8807B088;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bge cr6,0x8807b0a0
	if (!ctx.cr6.lt) goto loc_8807B0A0;
	// lwz r11,676(r31)
	ctx.current_instruction = 0x8807B094;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// blt cr6,0x8807ad98
	if (ctx.cr6.lt) goto loc_8807AD98;
loc_8807B0A0:
	// lwz r11,7596(r31)
	ctx.current_instruction = 0x8807B0A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8807b0b8
	if (!ctx.cr6.eq) goto loc_8807B0B8;
	// bl 0x8807f9c0
	ctx.lr = 0x8807B0B4;
	sub_8807F9C0(ctx, base);
loc_8807B0B4:
	// b 0x8807b0bc
	goto loc_8807B0BC;
loc_8807B0B8:
	// bl 0x880e45e8
	ctx.lr = 0x8807B0BC;
	sub_880E45E8(ctx, base);
loc_8807B0BC:
	// lwz r11,8024(r31)
	ctx.current_instruction = 0x8807B0BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8024);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807b0dc
	if (ctx.cr6.eq) goto loc_8807B0DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x88079c58
	ctx.lr = 0x8807B0D4;
	sub_88079C58(ctx, base);
loc_8807B0D4:
	// stw r29,8172(r31)
	ctx.current_instruction = 0x8807B0D4;
	REX_STORE_U32(ctx.r31.u32 + 8172, ctx.r29.u32);
	// b 0x8807b0e8
	goto loc_8807B0E8;
loc_8807B0DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88079c58
	ctx.lr = 0x8807B0E4;
	sub_88079C58(ctx, base);
loc_8807B0E4:
	// stw r27,8172(r31)
	ctx.current_instruction = 0x8807B0E4;
	REX_STORE_U32(ctx.r31.u32 + 8172, ctx.r27.u32);
loc_8807B0E8:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807B0E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8807b0fc
	if (ctx.cr6.eq) goto loc_8807B0FC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8807b108
	if (!ctx.cr6.eq) goto loc_8807B108;
loc_8807B0FC:
	// stw r26,676(r31)
	ctx.current_instruction = 0x8807B0FC;
	REX_STORE_U32(ctx.r31.u32 + 676, ctx.r26.u32);
	// stw r26,672(r31)
	ctx.current_instruction = 0x8807B100;
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r26.u32);
	// stw r25,1424(r31)
	ctx.current_instruction = 0x8807B104;
	REX_STORE_U32(ctx.r31.u32 + 1424, ctx.r25.u32);
loc_8807B108:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88085E60) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88085E60;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88085E60) {
			switch (rex_dispatch_address) {
				case 0x88085EE4:
				case 0x88085EF0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88085E60;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88085EE4: goto loc_88085EE4;
		case 0x88085EF0: goto loc_88085EF0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88085E64;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88085E68;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x88085e9c
	if (!ctx.cr6.eq) goto loc_88085E9C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x88085e9c
	if (!ctx.cr6.eq) goto loc_88085E9C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x88085e9c
	if (!ctx.cr6.eq) goto loc_88085E9C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88085E90;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88085E9C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88085eb4
	if (ctx.cr6.eq) goto loc_88085EB4;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// li r11,94
	ctx.r11.s64 = 94;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// b 0x88085eb8
	goto loc_88085EB8;
loc_88085EB4:
	// li r11,158
	ctx.r11.s64 = 158;
loc_88085EB8:
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x88085f10
	if (ctx.cr6.gt) goto loc_88085F10;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88085f10
	if (ctx.cr6.lt) goto loc_88085F10;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x88085f10
	if (ctx.cr6.gt) goto loc_88085F10;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88085f10
	if (ctx.cr6.lt) goto loc_88085F10;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x88085df0
	ctx.lr = 0x88085EE4;
	sub_88085DF0(ctx, base);
loc_88085EE4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x88085df0
	ctx.lr = 0x88085EF0;
	sub_88085DF0(ctx, base);
loc_88085EF0:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88085EF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88085EF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x88085f14
	goto loc_88085F14;
loc_88085F10:
	// li r11,34
	ctx.r11.s64 = 34;
loc_88085F14:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x88085f20
	if (ctx.cr6.eq) goto loc_88085F20;
	// addi r11,r11,37
	ctx.r11.s64 = ctx.r11.s64 + 37;
loc_88085F20:
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x88085f68
	if (ctx.cr6.eq) goto loc_88085F68;
	// cmpwi cr6,r11,71
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 71, ctx.xer);
	// beq cr6,0x88085f68
	if (ctx.cr6.eq) goto loc_88085F68;
	// lwz r9,20820(r8)
	ctx.current_instruction = 0x88085F30;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 20820);
	// mulli r10,r7,73
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(73));
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r7,-30681
	ctx.r7.s64 = -2010710016;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r4,r7,30824
	ctx.r4.s64 = ctx.r7.s64 + 30824;
	// lwz r11,4(r5)
	ctx.current_instruction = 0x88085F4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lbzx r10,r6,r4
	ctx.current_instruction = 0x88085F50;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88085F5C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88085F68:
	// lwz r10,20820(r8)
	ctx.current_instruction = 0x88085F68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 20820);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,2600(r8)
	ctx.current_instruction = 0x88085F70;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 2600);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,2596(r8)
	ctx.current_instruction = 0x88085F7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 2596);
	// lwz r11,4(r6)
	ctx.current_instruction = 0x88085F80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88085F94;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88094E80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88094E80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88094E80) {
			switch (rex_dispatch_address) {
				case 0x88094E88:
				case 0x88094EFC:
				case 0x88094F4C:
				case 0x88094FA8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88094E80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88094E88: goto loc_88094E88;
		case 0x88094EFC: goto loc_88094EFC;
		case 0x88094F4C: goto loc_88094F4C;
		case 0x88094FA8: goto loc_88094FA8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x88094E88;
	__savegprlr_24(ctx, base);
loc_88094E88:
	// stwu r1,-896(r1)
	ctx.current_instruction = 0x88094E88;
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// lwz r8,2652(r31)
	ctx.current_instruction = 0x88094EA0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88094EA8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// mullw r10,r5,r4
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lwz r5,988(r1)
	ctx.current_instruction = 0x88094EB8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 988);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lwz r25,0(r5)
	ctx.current_instruction = 0x88094EC0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r8,r1,175
	ctx.r8.s64 = ctx.r1.s64 + 175;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88094ED0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// rlwinm r30,r8,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r8,r6,30
	ctx.r8.u64 = ctx.r6.u32 & 0x3;
	// li r24,0
	ctx.r24.s64 = 0;
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r24,128(r1)
	ctx.current_instruction = 0x88094EEC;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x88094EFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88094EFC:
	// lwz r7,28020(r31)
	ctx.current_instruction = 0x88094EFC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88094f90
	if (ctx.cr6.eq) goto loc_88094F90;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r26,116(r1)
	ctx.current_instruction = 0x88094F0C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// stw r27,108(r1)
	ctx.current_instruction = 0x88094F14;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r9,92(r1)
	ctx.current_instruction = 0x88094F1C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	ctx.current_instruction = 0x88094F20;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x88094F2C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x88094F4C;
	sub_88085938(ctx, base);
loc_88094F4C:
	// lwz r7,980(r1)
	ctx.current_instruction = 0x88094F4C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 980);
	// lwz r11,132(r1)
	ctx.current_instruction = 0x88094F50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r6,0(r7)
	ctx.current_instruction = 0x88094F54;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x88094f64
	if (ctx.cr6.eq) goto loc_88094F64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_88094F64:
	// lwz r9,108(r28)
	ctx.current_instruction = 0x88094F64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x88094F68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r8,996(r1)
	ctx.current_instruction = 0x88094F6C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 996);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r7,1004(r1)
	ctx.current_instruction = 0x88094F74;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1004);
	// lwz r6,128(r1)
	ctx.current_instruction = 0x88094F78;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r8)
	ctx.current_instruction = 0x88094F80;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r6,0(r7)
	ctx.current_instruction = 0x88094F84;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88094F90:
	// li r6,8
	ctx.r6.s64 = 8;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x88094FA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88094FA8:
	// lwz r11,996(r1)
	ctx.current_instruction = 0x88094FA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 996);
	// lwz r10,1004(r1)
	ctx.current_instruction = 0x88094FAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1004);
	// stw r3,0(r11)
	ctx.current_instruction = 0x88094FB0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r24,0(r10)
	ctx.current_instruction = 0x88094FB4;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A0010) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880A0010;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880A0010) {
			switch (rex_dispatch_address) {
				case 0x880A0018:
				case 0x880A009C:
				case 0x880A03CC:
				case 0x880A0484:
				case 0x880A0620:
				case 0x880A08F8:
				case 0x880A09F0:
				case 0x880A0C60:
				case 0x880A0C94:
				case 0x880A0CF0:
				case 0x880A0D60:
				case 0x880A0D7C:
				case 0x880A0EFC:
				case 0x880A0F78:
				case 0x880A0FFC:
				case 0x880A1038:
				case 0x880A1050:
				case 0x880A1074:
				case 0x880A108C:
				case 0x880A10D0:
				case 0x880A10EC:
				case 0x880A111C:
				case 0x880A1134:
				case 0x880A11F4:
				case 0x880A1280:
				case 0x880A1310:
				case 0x880A1360:
				case 0x880A1378:
				case 0x880A139C:
				case 0x880A13B4:
				case 0x880A13F4:
				case 0x880A140C:
				case 0x880A1438:
				case 0x880A1450:
				case 0x880A14B8:
				case 0x880A14D0:
				case 0x880A14F0:
				case 0x880A1508:
				case 0x880A152C:
				case 0x880A1544:
				case 0x880A15A4:
				case 0x880A15C0:
				case 0x880A15EC:
				case 0x880A1604:
				case 0x880A1630:
				case 0x880A1648:
				case 0x880A16C4:
				case 0x880A1718:
				case 0x880A1730:
				case 0x880A17E0:
				case 0x880A188C:
				case 0x880A18DC:
				case 0x880A18F4:
				case 0x880A1A50:
				case 0x880A1AA0:
				case 0x880A1AB8:
				case 0x880A1B3C:
				case 0x880A1B5C:
				case 0x880A1C00:
				case 0x880A1CC4:
				case 0x880A1CDC:
				case 0x880A1E6C:
				case 0x880A1E84:
				case 0x880A1E9C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880A0010;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880A0018: goto loc_880A0018;
		case 0x880A009C: goto loc_880A009C;
		case 0x880A03CC: goto loc_880A03CC;
		case 0x880A0484: goto loc_880A0484;
		case 0x880A0620: goto loc_880A0620;
		case 0x880A08F8: goto loc_880A08F8;
		case 0x880A09F0: goto loc_880A09F0;
		case 0x880A0C60: goto loc_880A0C60;
		case 0x880A0C94: goto loc_880A0C94;
		case 0x880A0CF0: goto loc_880A0CF0;
		case 0x880A0D60: goto loc_880A0D60;
		case 0x880A0D7C: goto loc_880A0D7C;
		case 0x880A0EFC: goto loc_880A0EFC;
		case 0x880A0F78: goto loc_880A0F78;
		case 0x880A0FFC: goto loc_880A0FFC;
		case 0x880A1038: goto loc_880A1038;
		case 0x880A1050: goto loc_880A1050;
		case 0x880A1074: goto loc_880A1074;
		case 0x880A108C: goto loc_880A108C;
		case 0x880A10D0: goto loc_880A10D0;
		case 0x880A10EC: goto loc_880A10EC;
		case 0x880A111C: goto loc_880A111C;
		case 0x880A1134: goto loc_880A1134;
		case 0x880A11F4: goto loc_880A11F4;
		case 0x880A1280: goto loc_880A1280;
		case 0x880A1310: goto loc_880A1310;
		case 0x880A1360: goto loc_880A1360;
		case 0x880A1378: goto loc_880A1378;
		case 0x880A139C: goto loc_880A139C;
		case 0x880A13B4: goto loc_880A13B4;
		case 0x880A13F4: goto loc_880A13F4;
		case 0x880A140C: goto loc_880A140C;
		case 0x880A1438: goto loc_880A1438;
		case 0x880A1450: goto loc_880A1450;
		case 0x880A14B8: goto loc_880A14B8;
		case 0x880A14D0: goto loc_880A14D0;
		case 0x880A14F0: goto loc_880A14F0;
		case 0x880A1508: goto loc_880A1508;
		case 0x880A152C: goto loc_880A152C;
		case 0x880A1544: goto loc_880A1544;
		case 0x880A15A4: goto loc_880A15A4;
		case 0x880A15C0: goto loc_880A15C0;
		case 0x880A15EC: goto loc_880A15EC;
		case 0x880A1604: goto loc_880A1604;
		case 0x880A1630: goto loc_880A1630;
		case 0x880A1648: goto loc_880A1648;
		case 0x880A16C4: goto loc_880A16C4;
		case 0x880A1718: goto loc_880A1718;
		case 0x880A1730: goto loc_880A1730;
		case 0x880A17E0: goto loc_880A17E0;
		case 0x880A188C: goto loc_880A188C;
		case 0x880A18DC: goto loc_880A18DC;
		case 0x880A18F4: goto loc_880A18F4;
		case 0x880A1A50: goto loc_880A1A50;
		case 0x880A1AA0: goto loc_880A1AA0;
		case 0x880A1AB8: goto loc_880A1AB8;
		case 0x880A1B3C: goto loc_880A1B3C;
		case 0x880A1B5C: goto loc_880A1B5C;
		case 0x880A1C00: goto loc_880A1C00;
		case 0x880A1CC4: goto loc_880A1CC4;
		case 0x880A1CDC: goto loc_880A1CDC;
		case 0x880A1E6C: goto loc_880A1E6C;
		case 0x880A1E84: goto loc_880A1E84;
		case 0x880A1E9C: goto loc_880A1E9C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880A0018;
	__savegprlr_14(ctx, base);
loc_880A0018:
	// stwu r1,-1584(r1)
	ctx.current_instruction = 0x880A0018;
	ea = -1584 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r10,1660(r1)
	ctx.current_instruction = 0x880A0020;
	REX_STORE_U32(ctx.r1.u32 + 1660, ctx.r10.u32);
	// lwz r11,28088(r3)
	ctx.current_instruction = 0x880A0024;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28088);
	// addi r10,r1,1167
	ctx.r10.s64 = ctx.r1.s64 + 1167;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r8,1644(r1)
	ctx.current_instruction = 0x880A0030;
	REX_STORE_U32(ctx.r1.u32 + 1644, ctx.r8.u32);
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// stw r9,1652(r1)
	ctx.current_instruction = 0x880A0038;
	REX_STORE_U32(ctx.r1.u32 + 1652, ctx.r9.u32);
	// rlwinm r9,r10,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r3,1604(r1)
	ctx.current_instruction = 0x880A0040;
	REX_STORE_U32(ctx.r1.u32 + 1604, ctx.r3.u32);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// stw r4,1612(r1)
	ctx.current_instruction = 0x880A0048;
	REX_STORE_U32(ctx.r1.u32 + 1612, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,1620(r1)
	ctx.current_instruction = 0x880A0050;
	REX_STORE_U32(ctx.r1.u32 + 1620, ctx.r5.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r6,1628(r1)
	ctx.current_instruction = 0x880A0058;
	REX_STORE_U32(ctx.r1.u32 + 1628, ctx.r6.u32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stw r7,1636(r1)
	ctx.current_instruction = 0x880A0060;
	REX_STORE_U32(ctx.r1.u32 + 1636, ctx.r7.u32);
	// stw r9,300(r1)
	ctx.current_instruction = 0x880A0064;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880a0078
	if (ctx.cr6.eq) goto loc_880A0078;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x880a008c
	goto loc_880A008C;
loc_880A0078:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lwz r5,1756(r1)
	ctx.current_instruction = 0x880A007C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a008c
	if (!ctx.cr6.eq) goto loc_880A008C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_880A008C:
	// lwz r28,1748(r1)
	ctx.current_instruction = 0x880A008C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1748);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x880e2660
	ctx.lr = 0x880A009C;
	sub_880E2660(ctx, base);
loc_880A009C:
	// stw r3,276(r1)
	ctx.current_instruction = 0x880A009C;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// srawi r11,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r19.s32 >> 2;
	// lwz r10,724(r29)
	ctx.current_instruction = 0x880A00A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 724);
	// lwz r7,4(r28)
	ctx.current_instruction = 0x880A00A8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lwz r6,0(r28)
	ctx.current_instruction = 0x880A00B4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mullw r11,r10,r30
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// lwz r5,16(r28)
	ctx.current_instruction = 0x880A00BC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r9,7764(r29)
	ctx.current_instruction = 0x880A00C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 7764);
	// lwz r4,1716(r1)
	ctx.current_instruction = 0x880A00C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// stw r7,304(r1)
	ctx.current_instruction = 0x880A00C8;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r7.u32);
	// stw r6,260(r1)
	ctx.current_instruction = 0x880A00CC;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r6.u32);
	// stw r5,296(r1)
	ctx.current_instruction = 0x880A00D0;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r5.u32);
	// lwz r24,1676(r1)
	ctx.current_instruction = 0x880A00D4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1676);
	// lwz r5,1732(r1)
	ctx.current_instruction = 0x880A00D8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1732);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// srawi r10,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 2;
	// mulli r11,r3,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(276));
	// lwz r22,1668(r1)
	ctx.current_instruction = 0x880A00EC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r9,312(r1)
	ctx.current_instruction = 0x880A00FC;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r9.u32);
	// srawi r6,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 2;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x880a0180
	if (ctx.cr6.eq) goto loc_880A0180;
	// srawi r11,r22,2
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// srawi r11,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 2;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// ble cr6,0x880a0158
	if (!ctx.cr6.gt) goto loc_880A0158;
	// addi r11,r27,256
	ctx.r11.s64 = ctx.r27.s64 + 256;
loc_880A0130:
	// lwz r4,-128(r11)
	ctx.current_instruction = 0x880A0130;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -128);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x880a0148
	if (!ctx.cr6.eq) goto loc_880A0148;
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880A013C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x880a0158
	if (ctx.cr6.eq) goto loc_880A0158;
loc_880A0148:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x880a0130
	if (ctx.cr6.lt) goto loc_880A0130;
loc_880A0158:
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x880a0180
	if (!ctx.cr6.eq) goto loc_880A0180;
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r5,1732(r1)
	ctx.current_instruction = 0x880A0174;
	REX_STORE_U32(ctx.r1.u32 + 1732, ctx.r5.u32);
	// stwx r10,r4,r27
	ctx.current_instruction = 0x880A0178;
	REX_STORE_U32(ctx.r4.u32 + ctx.r27.u32, ctx.r10.u32);
	// stwx r9,r3,r27
	ctx.current_instruction = 0x880A017C;
	REX_STORE_U32(ctx.r3.u32 + ctx.r27.u32, ctx.r9.u32);
loc_880A0180:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x880a01b8
	if (!ctx.cr6.gt) goto loc_880A01B8;
	// addi r10,r27,256
	ctx.r10.s64 = ctx.r27.s64 + 256;
loc_880A0190:
	// lwz r9,-128(r10)
	ctx.current_instruction = 0x880A0190;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -128);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x880a01a8
	if (!ctx.cr6.eq) goto loc_880A01A8;
	// lwz r9,0(r10)
	ctx.current_instruction = 0x880A019C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x880a01b8
	if (ctx.cr6.eq) goto loc_880A01B8;
loc_880A01A8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x880a0190
	if (ctx.cr6.lt) goto loc_880A0190;
loc_880A01B8:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x880a01e0
	if (!ctx.cr6.eq) goto loc_880A01E0;
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
	// stw r5,1732(r1)
	ctx.current_instruction = 0x880A01D4;
	REX_STORE_U32(ctx.r1.u32 + 1732, ctx.r5.u32);
	// stwx r7,r8,r27
	ctx.current_instruction = 0x880A01D8;
	REX_STORE_U32(ctx.r8.u32 + ctx.r27.u32, ctx.r7.u32);
	// stwx r6,r4,r27
	ctx.current_instruction = 0x880A01DC;
	REX_STORE_U32(ctx.r4.u32 + ctx.r27.u32, ctx.r6.u32);
loc_880A01E0:
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r21,1740(r1)
	ctx.current_instruction = 0x880A01E4;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1740);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// stw r25,288(r1)
	ctx.current_instruction = 0x880A01EC;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r25.u32);
	// ori r23,r10,65535
	ctx.r23.u64 = ctx.r10.u64 | 65535;
	// addi r9,r1,960
	ctx.r9.s64 = ctx.r1.s64 + 960;
	// addi r8,r1,544
	ctx.r8.s64 = ctx.r1.s64 + 544;
	// stw r23,232(r1)
	ctx.current_instruction = 0x880A01FC;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r23.u32);
	// addi r7,r1,752
	ctx.r7.s64 = ctx.r1.s64 + 752;
	// stw r9,284(r1)
	ctx.current_instruction = 0x880A0204;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r9.u32);
	// addi r27,r11,6848
	ctx.r27.s64 = ctx.r11.s64 + 6848;
	// stw r8,308(r1)
	ctx.current_instruction = 0x880A020C;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r8.u32);
	// mr r18,r23
	ctx.r18.u64 = ctx.r23.u64;
	// stw r7,212(r1)
	ctx.current_instruction = 0x880A0214;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// stw r27,216(r1)
	ctx.current_instruction = 0x880A0218;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r27.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x880a0bec
	if (!ctx.cr6.gt) goto loc_880A0BEC;
	// addi r11,r1,383
	ctx.r11.s64 = ctx.r1.s64 + 383;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,320(r1)
	ctx.current_instruction = 0x880A022C;
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
loc_880A0230:
	// lwz r6,288(r1)
	ctx.current_instruction = 0x880A0230;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,1628(r1)
	ctx.current_instruction = 0x880A0238;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1628);
	// addi r11,r6,64
	ctx.r11.s64 = ctx.r6.s64 + 64;
	// lwz r27,1604(r1)
	ctx.current_instruction = 0x880A0240;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// addi r9,r6,32
	ctx.r9.s64 = ctx.r6.s64 + 32;
	// lwz r7,1724(r1)
	ctx.current_instruction = 0x880A0248;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1724);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r26,1620(r1)
	ctx.current_instruction = 0x880A0250;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// neg r11,r7
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// lwz r25,1380(r27)
	ctx.current_instruction = 0x880A0260;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r11,280(r1)
	ctx.current_instruction = 0x880A026C;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// lwzx r9,r8,r5
	ctx.current_instruction = 0x880A0270;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwzx r8,r4,r5
	ctx.current_instruction = 0x880A0278;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,220(r1)
	ctx.current_instruction = 0x880A0284;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,252(r1)
	ctx.current_instruction = 0x880A028C;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r7.u32);
	// mullw r11,r3,r25
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r25.s32);
	// stw r7,224(r1)
	ctx.current_instruction = 0x880A0294;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// stw r3,292(r1)
	ctx.current_instruction = 0x880A0298;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// stw r4,228(r1)
	ctx.current_instruction = 0x880A029C;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r26,340(r1)
	ctx.current_instruction = 0x880A02AC;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r26.u32);
	// ble cr6,0x880a0354
	if (!ctx.cr6.gt) goto loc_880A0354;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x880a0354
	if (ctx.cr6.eq) goto loc_880A0354;
	// addi r11,r6,31
	ctx.r11.s64 = ctx.r6.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_880A02C8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a0344
	if (ctx.cr6.eq) goto loc_880A0344;
	// lwz r11,0(r7)
	ctx.current_instruction = 0x880A02D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880a0308
	if (!ctx.cr6.eq) goto loc_880A0308;
	// lwz r11,128(r7)
	ctx.current_instruction = 0x880A02DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 128);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x880a02f4
	if (!ctx.cr6.eq) goto loc_880A02F4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_880A02F4:
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x880a033c
	if (!ctx.cr6.eq) goto loc_880A033C;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// b 0x880a0338
	goto loc_880A0338;
loc_880A0308:
	// lwz r6,128(r7)
	ctx.current_instruction = 0x880A0308;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 128);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x880a033c
	if (!ctx.cr6.eq) goto loc_880A033C;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x880a0328
	if (!ctx.cr6.eq) goto loc_880A0328;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_880A0328:
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x880a033c
	if (!ctx.cr6.eq) goto loc_880A033C;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_880A0338:
	// li r10,0
	ctx.r10.s64 = 0;
loc_880A033C:
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bdnz 0x880a02c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880A02C8;
loc_880A0344:
	// stw r29,220(r1)
	ctx.current_instruction = 0x880A0344;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
	// stw r28,224(r1)
	ctx.current_instruction = 0x880A0348;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r28.u32);
	// stw r30,280(r1)
	ctx.current_instruction = 0x880A034C;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
	// stw r31,252(r1)
	ctx.current_instruction = 0x880A0350;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
loc_880A0354:
	// lwz r11,1684(r1)
	ctx.current_instruction = 0x880A0354;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1684);
	// add r10,r30,r4
	ctx.r10.u64 = ctx.r30.u64 + ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880a036c
	if (!ctx.cr6.lt) goto loc_880A036C;
	// subf r30,r4,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r4.u64;
	// stw r30,280(r1)
	ctx.current_instruction = 0x880A0368;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
loc_880A036C:
	// lwz r11,1692(r1)
	ctx.current_instruction = 0x880A036C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1692);
	// add r10,r31,r4
	ctx.r10.u64 = ctx.r31.u64 + ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880a0384
	if (!ctx.cr6.gt) goto loc_880A0384;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// stw r11,252(r1)
	ctx.current_instruction = 0x880A0380;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
loc_880A0384:
	// lwz r11,1700(r1)
	ctx.current_instruction = 0x880A0384;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// add r10,r29,r3
	ctx.r10.u64 = ctx.r29.u64 + ctx.r3.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880a039c
	if (!ctx.cr6.lt) goto loc_880A039C;
	// subf r29,r3,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r3.u64;
	// stw r29,220(r1)
	ctx.current_instruction = 0x880A0398;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
loc_880A039C:
	// lwz r11,1708(r1)
	ctx.current_instruction = 0x880A039C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1708);
	// add r10,r28,r3
	ctx.r10.u64 = ctx.r28.u64 + ctx.r3.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880a03b4
	if (!ctx.cr6.gt) goto loc_880A03B4;
	// subf r28,r3,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r3.u64;
	// stw r28,224(r1)
	ctx.current_instruction = 0x880A03B0;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r28.u32);
loc_880A03B4:
	// lwz r11,7100(r27)
	ctx.current_instruction = 0x880A03B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 7100);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,1612(r1)
	ctx.current_instruction = 0x880A03BC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// lwz r3,320(r1)
	ctx.current_instruction = 0x880A03C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A03CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A03CC:
	// lwz r9,1380(r27)
	ctx.current_instruction = 0x880A03CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// lwz r10,1716(r1)
	ctx.current_instruction = 0x880A03D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// mullw r11,r29,r9
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r8,316(r1)
	ctx.current_instruction = 0x880A03E4;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// beq cr6,0x880a087c
	if (ctx.cr6.eq) goto loc_880A087C;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x880a0b28
	if (ctx.cr6.gt) goto loc_880A0B28;
	// lwz r11,220(r1)
	ctx.current_instruction = 0x880A03F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r10,292(r1)
	ctx.current_instruction = 0x880A03FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r9,280(r1)
	ctx.current_instruction = 0x880A0400;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r8,252(r1)
	ctx.current_instruction = 0x880A0404;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,1676(r1)
	ctx.current_instruction = 0x880A040C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1676);
	// lwz r15,308(r1)
	ctx.current_instruction = 0x880A0410;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r5,1660(r1)
	ctx.current_instruction = 0x880A0418;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,284(r1)
	ctx.current_instruction = 0x880A0420;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// clrlwi r19,r6,31
	ctx.r19.u64 = ctx.r6.u32 & 0x1;
	// subf r20,r11,r4
	ctx.r20.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r14,r5,r11
	ctx.r14.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r17,r15,r3
	ctx.r17.u64 = ctx.r3.u64 - ctx.r15.u64;
loc_880A0434:
	// lwz r9,1604(r1)
	ctx.current_instruction = 0x880A0434;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r22,316(r1)
	ctx.current_instruction = 0x880A043C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// lwz r31,280(r1)
	ctx.current_instruction = 0x880A0444;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r11,1380(r9)
	ctx.current_instruction = 0x880A0448;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 1380);
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// stw r11,316(r1)
	ctx.current_instruction = 0x880A0450;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r11.u32);
	// beq cr6,0x880a05b8
	if (ctx.cr6.eq) goto loc_880A05B8;
	// lwz r6,1380(r9)
	ctx.current_instruction = 0x880A0458;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 1380);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// lwz r10,304(r1)
	ctx.current_instruction = 0x880A0460;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// li r4,16
	ctx.r4.s64 = 16;
	// mullw r11,r6,r29
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// lwz r9,340(r1)
	ctx.current_instruction = 0x880A046C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r3,1612(r1)
	ctx.current_instruction = 0x880A0470;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880A0484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A0484:
	// lwz r8,228(r1)
	ctx.current_instruction = 0x880A0484;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r7,1652(r1)
	ctx.current_instruction = 0x880A0488;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// add r6,r14,r20
	ctx.r6.u64 = ctx.r14.u64 + ctx.r20.u64;
	// add r5,r31,r8
	ctx.r5.u64 = ctx.r31.u64 + ctx.r8.u64;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r7,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r7.u64;
	// srawi r11,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 31;
	// srawi r10,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 31;
	// xor r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// xor r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a04f4
	if (ctx.cr6.gt) goto loc_880A04F4;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880a04f4
	if (ctx.cr6.gt) goto loc_880A04F4;
	// lwz r8,216(r1)
	ctx.current_instruction = 0x880A04C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r8
	ctx.current_instruction = 0x880A04D4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r6,r10,r8
	ctx.current_instruction = 0x880A04D8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r21
	ctx.current_instruction = 0x880A04E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// lwzx r10,r4,r21
	ctx.current_instruction = 0x880A04E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a0500
	goto loc_880A0500;
loc_880A04F4:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x880A04F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// lwz r8,216(r1)
	ctx.current_instruction = 0x880A04F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0500:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a0524
	if (!ctx.cr6.lt) goto loc_880A0524;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,268(r1)
	ctx.current_instruction = 0x880A0510;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// addi r18,r23,1
	ctx.r18.s64 = ctx.r23.s64 + 1;
	// stw r29,208(r1)
	ctx.current_instruction = 0x880A0518;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r10,248(r1)
	ctx.current_instruction = 0x880A0520;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
loc_880A0524:
	// lwz r10,1668(r1)
	ctx.current_instruction = 0x880A0524;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// stwx r11,r17,r15
	ctx.current_instruction = 0x880A0528;
	REX_STORE_U32(ctx.r17.u32 + ctx.r15.u32, ctx.r11.u32);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// srawi r6,r20,31
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r20.s32 >> 31;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// xor r4,r20,r6
	ctx.r4.u64 = ctx.r20.u64 ^ ctx.r6.u64;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a0580
	if (ctx.cr6.gt) goto loc_880A0580;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880a0580
	if (ctx.cr6.gt) goto loc_880A0580;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r8
	ctx.current_instruction = 0x880A0560;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r8,r10,r8
	ctx.current_instruction = 0x880A0564;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r21
	ctx.current_instruction = 0x880A0570;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r21.u32);
	// lwzx r10,r6,r21
	ctx.current_instruction = 0x880A0574;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a0588
	goto loc_880A0588;
loc_880A0580:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x880A0580;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0588:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a05ac
	if (!ctx.cr6.lt) goto loc_880A05AC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,268(r1)
	ctx.current_instruction = 0x880A0598;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// addi r18,r23,1
	ctx.r18.s64 = ctx.r23.s64 + 1;
	// stw r29,208(r1)
	ctx.current_instruction = 0x880A05A0;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r10,248(r1)
	ctx.current_instruction = 0x880A05A8;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
loc_880A05AC:
	// stw r11,0(r15)
	ctx.current_instruction = 0x880A05AC;
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
loc_880A05B8:
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880A05B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880a085c
	if (ctx.cr6.gt) goto loc_880A085C;
	// lwz r11,228(r1)
	ctx.current_instruction = 0x880A05C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// srawi r8,r20,31
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r20.s32 >> 31;
	// lwz r9,1668(r1)
	ctx.current_instruction = 0x880A05CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,1652(r1)
	ctx.current_instruction = 0x880A05D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// lwz r6,1676(r1)
	ctx.current_instruction = 0x880A05DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1676);
	// xor r5,r20,r8
	ctx.r5.u64 = ctx.r20.u64 ^ ctx.r8.u64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r20,r6
	ctx.r25.u64 = ctx.r20.u64 + ctx.r6.u64;
	// subf r11,r9,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r9.u64;
	// subf r26,r8,r5
	ctx.r26.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r28,r10,r4
	ctx.r28.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// subf r24,r10,r9
	ctx.r24.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_880A0600:
	// lwz r11,1604(r1)
	ctx.current_instruction = 0x880A0600;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// addi r6,r1,328
	ctx.r6.s64 = ctx.r1.s64 + 328;
	// lwz r10,296(r1)
	ctx.current_instruction = 0x880A0608;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,320(r1)
	ctx.current_instruction = 0x880A0610;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r5,1380(r11)
	ctx.current_instruction = 0x880A0614;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 1380);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880A0620;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A0620:
	// lwz r9,1660(r1)
	ctx.current_instruction = 0x880A0620;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// srawi r8,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r28.s32 >> 31;
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// subf r7,r9,r25
	ctx.r7.u64 = ctx.r25.u64 - ctx.r9.u64;
	// xor r6,r28,r8
	ctx.r6.u64 = ctx.r28.u64 ^ ctx.r8.u64;
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// xor r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// subf r7,r5,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r5.u64;
	// bgt cr6,0x880a0680
	if (ctx.cr6.gt) goto loc_880A0680;
	// cmpwi cr6,r7,158
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 158, ctx.xer);
	// bgt cr6,0x880a0680
	if (ctx.cr6.gt) goto loc_880A0680;
	// lwz r5,216(r1)
	ctx.current_instruction = 0x880A0654;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r5
	ctx.current_instruction = 0x880A0660;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r8,r10,r5
	ctx.current_instruction = 0x880A0664;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r21
	ctx.current_instruction = 0x880A0670;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// lwzx r10,r4,r21
	ctx.current_instruction = 0x880A0674;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a068c
	goto loc_880A068C;
loc_880A0680:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x880A0680;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// lwz r5,216(r1)
	ctx.current_instruction = 0x880A0684;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A068C:
	// lwz r8,328(r1)
	ctx.current_instruction = 0x880A068C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a06b4
	if (!ctx.cr6.lt) goto loc_880A06B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,268(r1)
	ctx.current_instruction = 0x880A06A0;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// addi r18,r23,1
	ctx.r18.s64 = ctx.r23.s64 + 1;
	// stw r29,208(r1)
	ctx.current_instruction = 0x880A06A8;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r10,248(r1)
	ctx.current_instruction = 0x880A06B0;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
loc_880A06B4:
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// lwz r6,284(r1)
	ctx.current_instruction = 0x880A06B8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// add r4,r27,r16
	ctx.r4.u64 = ctx.r27.u64 + ctx.r16.u64;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// stw r11,0(r6)
	ctx.current_instruction = 0x880A06D8;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x880a0710
	if (ctx.cr6.gt) goto loc_880A0710;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// bgt cr6,0x880a0710
	if (ctx.cr6.gt) goto loc_880A0710;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r5
	ctx.current_instruction = 0x880A06F0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r3,r10,r5
	ctx.current_instruction = 0x880A06F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r21
	ctx.current_instruction = 0x880A0700;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// lwzx r10,r10,r21
	ctx.current_instruction = 0x880A0704;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a0718
	goto loc_880A0718;
loc_880A0710:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x880A0710;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0718:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a073c
	if (!ctx.cr6.lt) goto loc_880A073C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,268(r1)
	ctx.current_instruction = 0x880A0728;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// addi r18,r23,1
	ctx.r18.s64 = ctx.r23.s64 + 1;
	// stw r29,208(r1)
	ctx.current_instruction = 0x880A0730;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r10,248(r1)
	ctx.current_instruction = 0x880A0738;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
loc_880A073C:
	// add r10,r24,r30
	ctx.r10.u64 = ctx.r24.u64 + ctx.r30.u64;
	// lwz r8,308(r1)
	ctx.current_instruction = 0x880A0740;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// srawi r4,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 31;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// xor r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// stw r11,0(r8)
	ctx.current_instruction = 0x880A0754;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880a0790
	if (ctx.cr6.gt) goto loc_880A0790;
	// cmpwi cr6,r7,158
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 158, ctx.xer);
	// bgt cr6,0x880a0790
	if (ctx.cr6.gt) goto loc_880A0790;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r5
	ctx.current_instruction = 0x880A0770;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r7,r10,r5
	ctx.current_instruction = 0x880A0774;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r21
	ctx.current_instruction = 0x880A0780;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// lwzx r10,r3,r21
	ctx.current_instruction = 0x880A0784;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a0798
	goto loc_880A0798;
loc_880A0790:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x880A0790;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0798:
	// lwz r9,332(r1)
	ctx.current_instruction = 0x880A0798;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a07c4
	if (!ctx.cr6.lt) goto loc_880A07C4;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// stw r29,208(r1)
	ctx.current_instruction = 0x880A07AC;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r18,r23,1
	ctx.r18.s64 = ctx.r23.s64 + 1;
	// stw r10,268(r1)
	ctx.current_instruction = 0x880A07B8;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r10.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r7,248(r1)
	ctx.current_instruction = 0x880A07C0;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
loc_880A07C4:
	// srawi r10,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 31;
	// stw r11,4(r6)
	ctx.current_instruction = 0x880A07C8;
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// xor r7,r30,r10
	ctx.r7.u64 = ctx.r30.u64 ^ ctx.r10.u64;
	// subf r11,r10,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a080c
	if (ctx.cr6.gt) goto loc_880A080C;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// bgt cr6,0x880a080c
	if (ctx.cr6.gt) goto loc_880A080C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r5
	ctx.current_instruction = 0x880A07EC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r6,r10,r5
	ctx.current_instruction = 0x880A07F0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r21
	ctx.current_instruction = 0x880A07FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// lwzx r10,r4,r21
	ctx.current_instruction = 0x880A0800;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a0814
	goto loc_880A0814;
loc_880A080C:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x880A080C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0814:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a083c
	if (!ctx.cr6.lt) goto loc_880A083C;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// stw r29,208(r1)
	ctx.current_instruction = 0x880A0824;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r18,r23,1
	ctx.r18.s64 = ctx.r23.s64 + 1;
	// stw r10,268(r1)
	ctx.current_instruction = 0x880A0830;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r10.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r9,248(r1)
	ctx.current_instruction = 0x880A0838;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
loc_880A083C:
	// lwz r10,252(r1)
	ctx.current_instruction = 0x880A083C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// stw r11,4(r8)
	ctx.current_instruction = 0x880A0844;
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880a0600
	if (!ctx.cr6.gt) goto loc_880A0600;
loc_880A085C:
	// lwz r11,224(r1)
	ctx.current_instruction = 0x880A085C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// addi r16,r16,7
	ctx.r16.s64 = ctx.r16.s64 + 7;
	// addi r15,r15,28
	ctx.r15.s64 = ctx.r15.s64 + 28;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880a0434
	if (!ctx.cr6.gt) goto loc_880A0434;
	// b 0x880a0b28
	goto loc_880A0B28;
loc_880A087C:
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x880a0b28
	if (ctx.cr6.gt) goto loc_880A0B28;
	// lwz r11,220(r1)
	ctx.current_instruction = 0x880A0888;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,292(r1)
	ctx.current_instruction = 0x880A0890;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r9,280(r1)
	ctx.current_instruction = 0x880A0894;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r8,252(r1)
	ctx.current_instruction = 0x880A0898;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,1660(r1)
	ctx.current_instruction = 0x880A08A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// subf r5,r9,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r22,284(r1)
	ctx.current_instruction = 0x880A08A8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r20,r5,31
	ctx.r20.u64 = ctx.r5.u32 & 0x1;
	// subf r24,r6,r4
	ctx.r24.u64 = ctx.r4.u64 - ctx.r6.u64;
loc_880A08B8:
	// lwz r11,1604(r1)
	ctx.current_instruction = 0x880A08B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r27,316(r1)
	ctx.current_instruction = 0x880A08C0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// lwz r31,280(r1)
	ctx.current_instruction = 0x880A08C8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r6,1380(r11)
	ctx.current_instruction = 0x880A08CC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1380);
	// add r10,r6,r27
	ctx.r10.u64 = ctx.r6.u64 + ctx.r27.u64;
	// stw r10,316(r1)
	ctx.current_instruction = 0x880A08D4;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// beq cr6,0x880a0994
	if (ctx.cr6.eq) goto loc_880A0994;
	// lwz r11,304(r1)
	ctx.current_instruction = 0x880A08DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,1612(r1)
	ctx.current_instruction = 0x880A08E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A08F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A08F8:
	// lwz r10,228(r1)
	ctx.current_instruction = 0x880A08F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r9,1652(r1)
	ctx.current_instruction = 0x880A0900;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r9,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r9.u64;
	// srawi r5,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// srawi r4,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r24.s32 >> 31;
	// xor r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// xor r10,r24,r4
	ctx.r10.u64 = ctx.r24.u64 ^ ctx.r4.u64;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a0964
	if (ctx.cr6.gt) goto loc_880A0964;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880a0964
	if (ctx.cr6.gt) goto loc_880A0964;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,216(r1)
	ctx.current_instruction = 0x880A093C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x880A0944;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.current_instruction = 0x880A0948;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r21
	ctx.current_instruction = 0x880A0954;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// lwzx r10,r4,r21
	ctx.current_instruction = 0x880A0958;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a096c
	goto loc_880A096C;
loc_880A0964:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x880A0964;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A096C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a0988
	if (!ctx.cr6.lt) goto loc_880A0988;
	// addi r18,r23,1
	ctx.r18.s64 = ctx.r23.s64 + 1;
	// stw r31,268(r1)
	ctx.current_instruction = 0x880A097C;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r25,208(r1)
	ctx.current_instruction = 0x880A0984;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
loc_880A0988:
	// stw r11,0(r22)
	ctx.current_instruction = 0x880A0988;
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r29,1
	ctx.r29.s64 = 1;
loc_880A0994:
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880A0994;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880a0b0c
	if (ctx.cr6.gt) goto loc_880A0B0C;
	// lwz r11,228(r1)
	ctx.current_instruction = 0x880A09A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// srawi r10,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r24.s32 >> 31;
	// lwz r9,1652(r1)
	ctx.current_instruction = 0x880A09A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r17,284(r1)
	ctx.current_instruction = 0x880A09B0;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// xor r7,r24,r10
	ctx.r7.u64 = ctx.r24.u64 ^ ctx.r10.u64;
	// lwz r19,216(r1)
	ctx.current_instruction = 0x880A09B8;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,296(r1)
	ctx.current_instruction = 0x880A09C0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r16,252(r1)
	ctx.current_instruction = 0x880A09C4;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// subf r28,r10,r7
	ctx.r28.u64 = ctx.r7.u64 - ctx.r10.u64;
	// lwz r15,320(r1)
	ctx.current_instruction = 0x880A09CC;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// subf r30,r9,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r9.u64;
loc_880A09D4:
	// lwz r11,1604(r1)
	ctx.current_instruction = 0x880A09D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// addi r6,r1,328
	ctx.r6.s64 = ctx.r1.s64 + 328;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r14
	ctx.ctr.u64 = ctx.r14.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r5,1380(r11)
	ctx.current_instruction = 0x880A09E8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 1380);
	// bctrl 
	ctx.lr = 0x880A09F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A09F0:
	// srawi r10,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 31;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// xor r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 ^ ctx.r10.u64;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a0a38
	if (ctx.cr6.gt) goto loc_880A0A38;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x880a0a38
	if (ctx.cr6.gt) goto loc_880A0A38;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r19
	ctx.current_instruction = 0x880A0A18;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// lwzx r8,r10,r19
	ctx.current_instruction = 0x880A0A1C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r21
	ctx.current_instruction = 0x880A0A28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r21.u32);
	// lwzx r10,r6,r21
	ctx.current_instruction = 0x880A0A2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a0a40
	goto loc_880A0A40;
loc_880A0A38:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x880A0A38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0A40:
	// lwz r10,328(r1)
	ctx.current_instruction = 0x880A0A40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,328(r1)
	ctx.current_instruction = 0x880A0A48;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r10.u32);
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a0a64
	if (!ctx.cr6.lt) goto loc_880A0A64;
	// addi r18,r23,1
	ctx.r18.s64 = ctx.r23.s64 + 1;
	// stw r31,268(r1)
	ctx.current_instruction = 0x880A0A58;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// stw r25,208(r1)
	ctx.current_instruction = 0x880A0A60;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
loc_880A0A64:
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// add r11,r26,r29
	ctx.r11.u64 = ctx.r26.u64 + ctx.r29.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// addi r7,r29,1
	ctx.r7.s64 = ctx.r29.s64 + 1;
	// stwx r10,r6,r17
	ctx.current_instruction = 0x880A0A84;
	REX_STORE_U32(ctx.r6.u32 + ctx.r17.u32, ctx.r10.u32);
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a0ac0
	if (ctx.cr6.gt) goto loc_880A0AC0;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x880a0ac0
	if (ctx.cr6.gt) goto loc_880A0AC0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r19
	ctx.current_instruction = 0x880A0AA0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// lwzx r5,r10,r19
	ctx.current_instruction = 0x880A0AA4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r21
	ctx.current_instruction = 0x880A0AB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// lwzx r10,r3,r21
	ctx.current_instruction = 0x880A0AB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a0ac8
	goto loc_880A0AC8;
loc_880A0AC0:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x880A0AC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0AC8:
	// lwz r10,332(r1)
	ctx.current_instruction = 0x880A0AC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,332(r1)
	ctx.current_instruction = 0x880A0AD0;
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r11.u32);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a0aec
	if (!ctx.cr6.lt) goto loc_880A0AEC;
	// addi r18,r23,1
	ctx.r18.s64 = ctx.r23.s64 + 1;
	// stw r8,268(r1)
	ctx.current_instruction = 0x880A0AE0;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r25,208(r1)
	ctx.current_instruction = 0x880A0AE8;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
loc_880A0AEC:
	// add r10,r26,r7
	ctx.r10.u64 = ctx.r26.u64 + ctx.r7.u64;
	// addi r31,r8,1
	ctx.r31.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r9,4
	ctx.r30.s64 = ctx.r9.s64 + 4;
	// addi r29,r7,1
	ctx.r29.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r31,r16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r16.s32, ctx.xer);
	// stwx r11,r8,r17
	ctx.current_instruction = 0x880A0B04;
	REX_STORE_U32(ctx.r8.u32 + ctx.r17.u32, ctx.r11.u32);
	// ble cr6,0x880a09d4
	if (!ctx.cr6.gt) goto loc_880A09D4;
loc_880A0B0C:
	// lwz r11,224(r1)
	ctx.current_instruction = 0x880A0B0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r26,r26,7
	ctx.r26.s64 = ctx.r26.s64 + 7;
	// addi r22,r22,28
	ctx.r22.s64 = ctx.r22.s64 + 28;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880a08b8
	if (!ctx.cr6.gt) goto loc_880A08B8;
loc_880A0B28:
	// lwz r11,232(r1)
	ctx.current_instruction = 0x880A0B28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880a0bac
	if (!ctx.cr6.lt) goto loc_880A0BAC;
	// lwz r10,292(r1)
	ctx.current_instruction = 0x880A0B34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r11,228(r1)
	ctx.current_instruction = 0x880A0B38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r9,268(r1)
	ctx.current_instruction = 0x880A0B3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r8,208(r1)
	ctx.current_instruction = 0x880A0B40;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r7,280(r1)
	ctx.current_instruction = 0x880A0B44;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r6,220(r1)
	ctx.current_instruction = 0x880A0B48;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r5,252(r1)
	ctx.current_instruction = 0x880A0B4C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,224(r1)
	ctx.current_instruction = 0x880A0B50;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r3,1716(r1)
	ctx.current_instruction = 0x880A0B54;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// stw r10,272(r1)
	ctx.current_instruction = 0x880A0B58;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// lwz r10,212(r1)
	ctx.current_instruction = 0x880A0B5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,264(r1)
	ctx.current_instruction = 0x880A0B64;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// stw r23,232(r1)
	ctx.current_instruction = 0x880A0B68;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r23.u32);
	// stw r9,256(r1)
	ctx.current_instruction = 0x880A0B6C;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r9.u32);
	// stw r8,244(r1)
	ctx.current_instruction = 0x880A0B70;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// stw r7,336(r1)
	ctx.current_instruction = 0x880A0B74;
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r7.u32);
	// stw r6,352(r1)
	ctx.current_instruction = 0x880A0B78;
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r6.u32);
	// stw r5,344(r1)
	ctx.current_instruction = 0x880A0B7C;
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r5.u32);
	// stw r4,348(r1)
	ctx.current_instruction = 0x880A0B80;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// beq cr6,0x880a0ba0
	if (ctx.cr6.eq) goto loc_880A0BA0;
	// lwz r11,248(r1)
	ctx.current_instruction = 0x880A0B88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a0ba0
	if (ctx.cr6.eq) goto loc_880A0BA0;
	// lwz r11,308(r1)
	ctx.current_instruction = 0x880A0B94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r10,308(r1)
	ctx.current_instruction = 0x880A0B98;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r10.u32);
	// b 0x880a0ba8
	goto loc_880A0BA8;
loc_880A0BA0:
	// lwz r11,284(r1)
	ctx.current_instruction = 0x880A0BA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// stw r10,284(r1)
	ctx.current_instruction = 0x880A0BA4;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r10.u32);
loc_880A0BA8:
	// stw r11,212(r1)
	ctx.current_instruction = 0x880A0BA8;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
loc_880A0BAC:
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880A0BAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r10,1732(r1)
	ctx.current_instruction = 0x880A0BB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1732);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,288(r1)
	ctx.current_instruction = 0x880A0BB8;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880a0230
	if (ctx.cr6.lt) goto loc_880A0230;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// lwz r27,216(r1)
	ctx.current_instruction = 0x880A0BC8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r26,1660(r1)
	ctx.current_instruction = 0x880A0BCC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r19,1652(r1)
	ctx.current_instruction = 0x880A0BD4;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// ori r23,r11,65535
	ctx.r23.u64 = ctx.r11.u64 | 65535;
	// lwz r24,1676(r1)
	ctx.current_instruction = 0x880A0BDC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1676);
	// lwz r22,1668(r1)
	ctx.current_instruction = 0x880A0BE0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// lwz r28,1748(r1)
	ctx.current_instruction = 0x880A0BE4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1748);
	// lwz r29,1604(r1)
	ctx.current_instruction = 0x880A0BE8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
loc_880A0BEC:
	// lwz r11,256(r1)
	ctx.current_instruction = 0x880A0BEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r10,264(r1)
	ctx.current_instruction = 0x880A0BF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r9,272(r1)
	ctx.current_instruction = 0x880A0BF4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r8,244(r1)
	ctx.current_instruction = 0x880A0BF8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,1716(r1)
	ctx.current_instruction = 0x880A0C00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r16,r30,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r15,r31,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880a0ca0
	if (ctx.cr6.eq) goto loc_880A0CA0;
	// lwz r9,2608(r29)
	ctx.current_instruction = 0x880A0C18;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 2608);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,2604(r29)
	ctx.current_instruction = 0x880A0C20;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 2604);
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r11,r26,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r26.u64;
	// lwz r20,2616(r29)
	ctx.current_instruction = 0x880A0C2C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r29.u32 + 2616);
	// subf r10,r19,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r19.u64;
	// lwz r18,2612(r29)
	ctx.current_instruction = 0x880A0C34;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r29.u32 + 2612);
	// add r5,r11,r15
	ctx.r5.u64 = ctx.r11.u64 + ctx.r15.u64;
	// add r4,r10,r16
	ctx.r4.u64 = ctx.r10.u64 + ctx.r16.u64;
	// and r3,r5,r20
	ctx.r3.u64 = ctx.r5.u64 & ctx.r20.u64;
	// and r11,r4,r18
	ctx.r11.u64 = ctx.r4.u64 & ctx.r18.u64;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// subf r4,r8,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A0C60;
	sub_88085E60(ctx, base);
loc_880A0C60:
	// subf r11,r24,r17
	ctx.r11.u64 = ctx.r17.u64 - ctx.r24.u64;
	// subf r10,r22,r14
	ctx.r10.u64 = ctx.r14.u64 - ctx.r22.u64;
	// add r9,r11,r15
	ctx.r9.u64 = ctx.r11.u64 + ctx.r15.u64;
	// add r8,r10,r16
	ctx.r8.u64 = ctx.r10.u64 + ctx.r16.u64;
	// and r5,r9,r20
	ctx.r5.u64 = ctx.r9.u64 & ctx.r20.u64;
	// and r4,r8,r18
	ctx.r4.u64 = ctx.r8.u64 & ctx.r18.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r5,r17,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r17.u64;
	// subf r4,r14,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r14.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A0C94;
	sub_88085E60(ctx, base);
loc_880A0C94:
	// cmpw cr6,r20,r3
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x880a0cbc
	if (!ctx.cr6.lt) goto loc_880A0CBC;
	// stw r25,248(r1)
	ctx.current_instruction = 0x880A0C9C;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r25.u32);
loc_880A0CA0:
	// mr r18,r26
	ctx.r18.u64 = ctx.r26.u64;
loc_880A0CA4:
	// lwz r11,28088(r29)
	ctx.current_instruction = 0x880A0CA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 28088);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a0cd0
	if (ctx.cr6.eq) goto loc_880A0CD0;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x880a0ce4
	goto loc_880A0CE4;
loc_880A0CBC:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// stw r11,248(r1)
	ctx.current_instruction = 0x880A0CC4;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// mr r18,r24
	ctx.r18.u64 = ctx.r24.u64;
	// b 0x880a0ca4
	goto loc_880A0CA4;
loc_880A0CD0:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lwz r5,1756(r1)
	ctx.current_instruction = 0x880A0CD4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a0ce4
	if (!ctx.cr6.eq) goto loc_880A0CE4;
	// li r5,0
	ctx.r5.s64 = 0;
loc_880A0CE4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880e2660
	ctx.lr = 0x880A0CF0;
	sub_880E2660(ctx, base);
loc_880A0CF0:
	// lwz r11,276(r1)
	ctx.current_instruction = 0x880A0CF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// xor r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// lwz r11,232(r1)
	ctx.current_instruction = 0x880A0CF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// stw r10,276(r1)
	ctx.current_instruction = 0x880A0CFC;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x880a0dc4
	if (!ctx.cr6.eq) goto loc_880A0DC4;
	// clrlwi r7,r19,30
	ctx.r7.u64 = ctx.r19.u32 & 0x3;
	// lwz r4,1380(r29)
	ctx.current_instruction = 0x880A0D0C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 1380);
	// clrlwi r8,r18,30
	ctx.r8.u64 = ctx.r18.u32 & 0x3;
	// lwz r9,2652(r29)
	ctx.current_instruction = 0x880A0D14;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 2652);
	// stw r7,240(r1)
	ctx.current_instruction = 0x880A0D18;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r7.u32);
	// srawi r10,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r19.s32 >> 2;
	// stw r8,236(r1)
	ctx.current_instruction = 0x880A0D20;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// srawi r11,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r18.s32 >> 2;
	// lwz r31,300(r1)
	ctx.current_instruction = 0x880A0D28;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,272(r1)
	ctx.current_instruction = 0x880A0D30;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// lwz r3,1620(r1)
	ctx.current_instruction = 0x880A0D38;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r9,1560(r29)
	ctx.current_instruction = 0x880A0D40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 1560);
	// stw r10,264(r1)
	ctx.current_instruction = 0x880A0D44;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r10.u32);
	// stw r25,244(r1)
	ctx.current_instruction = 0x880A0D48;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r25.u32);
	// stw r25,256(r1)
	ctx.current_instruction = 0x880A0D4C;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r25.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880A0D60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A0D60:
	// lwz r11,260(r1)
	ctx.current_instruction = 0x880A0D60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,1612(r1)
	ctx.current_instruction = 0x880A0D68;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A0D7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A0D7C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r25,158
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 158, ctx.xer);
	// bgt cr6,0x880a0db4
	if (ctx.cr6.gt) goto loc_880A0DB4;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.current_instruction = 0x880A0D90;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwzx r7,r9,r27
	ctx.current_instruction = 0x880A0D94;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r21
	ctx.current_instruction = 0x880A0DA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// lwzx r10,r5,r21
	ctx.current_instruction = 0x880A0DA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x880a1ec8
	goto loc_880A1EC8;
loc_880A0DB4:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x880A0DB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x880a1ec8
	goto loc_880A1EC8;
loc_880A0DC4:
	// lwz r11,1700(r1)
	ctx.current_instruction = 0x880A0DC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// lwz r10,1708(r1)
	ctx.current_instruction = 0x880A0DC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1708);
	// subf r9,r31,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r31.u64;
	// lwz r23,1604(r1)
	ctx.current_instruction = 0x880A0DD0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// subf r8,r31,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r31.u64;
	// lwz r7,1684(r1)
	ctx.current_instruction = 0x880A0DD8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1684);
	// addic r6,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// lwz r5,1692(r1)
	ctx.current_instruction = 0x880A0DE0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1692);
	// subf r4,r30,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r30.u64;
	// lwz r7,256(r1)
	ctx.current_instruction = 0x880A0DE8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// subfe r10,r6,r9
	temp.u8 = (~ctx.r6.u32 + ctx.r9.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r9,352(r1)
	ctx.current_instruction = 0x880A0DF0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// addic r3,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// lwz r6,1380(r23)
	ctx.current_instruction = 0x880A0DF8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1380);
	// subf r30,r30,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r30.u64;
	// lwz r29,244(r1)
	ctx.current_instruction = 0x880A0E00;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// subfe r8,r3,r8
	temp.u8 = (~ctx.r3.u32 + ctx.r8.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,264(r1)
	ctx.current_instruction = 0x880A0E08;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// mullw r11,r31,r6
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r6.s32);
	// lwz r27,348(r1)
	ctx.current_instruction = 0x880A0E10;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r5,336(r1)
	ctx.current_instruction = 0x880A0E14;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r31,344(r1)
	ctx.current_instruction = 0x880A0E18;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r26,1620(r1)
	ctx.current_instruction = 0x880A0E1C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// stw r10,292(r1)
	ctx.current_instruction = 0x880A0E20;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// stw r8,304(r1)
	ctx.current_instruction = 0x880A0E24;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r8.u32);
	// addic r28,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r28.s64 = ctx.r4.s64 + -1;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subfe r14,r28,r4
	temp.u8 = (~ctx.r28.u32 + ctx.r4.u32 < ~ctx.r28.u32) | (~ctx.r28.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r14.u64 = ~ctx.r28.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r4,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// subf r25,r9,r29
	ctx.r25.u64 = ctx.r29.u64 - ctx.r9.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r9,r9,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r9.u64;
	// subfe r3,r4,r30
	temp.u8 = (~ctx.r4.u32 + ctx.r30.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r17,r5,r31
	ctx.r17.u64 = ctx.r31.u64 - ctx.r5.u64;
	// stw r9,296(r1)
	ctx.current_instruction = 0x880A0E4C;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
	// subf r20,r5,r7
	ctx.r20.u64 = ctx.r7.u64 - ctx.r5.u64;
	// stw r3,220(r1)
	ctx.current_instruction = 0x880A0E54;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x880a1148
	if (!ctx.cr6.eq) goto loc_880A1148;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a1148
	if (ctx.cr6.eq) goto loc_880A1148;
	// subf r30,r19,r16
	ctx.r30.u64 = ctx.r16.u64 - ctx.r19.u64;
	// subf r28,r18,r15
	ctx.r28.u64 = ctx.r15.u64 - ctx.r18.u64;
	// addi r24,r30,-4
	ctx.r24.s64 = ctx.r30.s64 + -4;
	// addi r9,r28,-4
	ctx.r9.s64 = ctx.r28.s64 + -4;
	// srawi r8,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r24.s32 >> 31;
	// subf r11,r6,r20
	ctx.r11.u64 = ctx.r20.u64 - ctx.r6.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r5,r24,r8
	ctx.r5.u64 = ctx.r24.u64 ^ ctx.r8.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// xor r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r11,r8,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r27,r7,r4
	ctx.r27.u64 = ctx.r4.u64 - ctx.r7.u64;
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a0edc
	if (ctx.cr6.gt) goto loc_880A0EDC;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x880a0edc
	if (ctx.cr6.gt) goto loc_880A0EDC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,216(r1)
	ctx.current_instruction = 0x880A0EB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x880A0EBC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x880A0EC0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r21
	ctx.current_instruction = 0x880A0ECC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// lwzx r11,r4,r21
	ctx.current_instruction = 0x880A0ED0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880a0ee4
	goto loc_880A0EE4;
loc_880A0EDC:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x880A0EDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0EE4:
	// lwz r22,260(r1)
	ctx.current_instruction = 0x880A0EE4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1612(r1)
	ctx.current_instruction = 0x880A0EF0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x880A0EFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A0EFC:
	// srawi r11,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 31;
	// lwz r10,212(r1)
	ctx.current_instruction = 0x880A0F00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r9,r20,-8
	ctx.r9.s64 = ctx.r20.s64 + -8;
	// xor r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 ^ ctx.r11.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r3,r29
	ctx.r6.u64 = ctx.r3.u64 + ctx.r29.u64;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// stwx r6,r7,r10
	ctx.current_instruction = 0x880A0F1C;
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u32);
	// bgt cr6,0x880a0f58
	if (ctx.cr6.gt) goto loc_880A0F58;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x880a0f58
	if (ctx.cr6.gt) goto loc_880A0F58;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,216(r1)
	ctx.current_instruction = 0x880A0F30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x880A0F38;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x880A0F3C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r21
	ctx.current_instruction = 0x880A0F48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// lwzx r11,r5,r21
	ctx.current_instruction = 0x880A0F4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880a0f60
	goto loc_880A0F60;
loc_880A0F58:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x880A0F58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0F60:
	// addi r5,r26,1
	ctx.r5.s64 = ctx.r26.s64 + 1;
	// lwz r6,1380(r23)
	ctx.current_instruction = 0x880A0F64;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1612(r1)
	ctx.current_instruction = 0x880A0F6C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x880A0F78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A0F78:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r20,-7
	ctx.r11.s64 = ctx.r20.s64 + -7;
	// lwz r10,212(r1)
	ctx.current_instruction = 0x880A0F80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// srawi r9,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 31;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r7,r30,r9
	ctx.r7.u64 = ctx.r30.u64 ^ ctx.r9.u64;
	// add r6,r3,r29
	ctx.r6.u64 = ctx.r3.u64 + ctx.r29.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stwx r6,r8,r10
	ctx.current_instruction = 0x880A0F98;
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u32);
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a0fd8
	if (ctx.cr6.gt) goto loc_880A0FD8;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x880a0fd8
	if (ctx.cr6.gt) goto loc_880A0FD8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,216(r1)
	ctx.current_instruction = 0x880A0FB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x880A0FB8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x880A0FBC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r21
	ctx.current_instruction = 0x880A0FC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// lwzx r11,r5,r21
	ctx.current_instruction = 0x880A0FCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880a0fe0
	goto loc_880A0FE0;
loc_880A0FD8:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x880A0FD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0FE0:
	// lwz r27,1612(r1)
	ctx.current_instruction = 0x880A0FE0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// addi r5,r26,2
	ctx.r5.s64 = ctx.r26.s64 + 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,1380(r23)
	ctx.current_instruction = 0x880A0FEC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1380);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x880A0FFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A0FFC:
	// addi r11,r20,-6
	ctx.r11.s64 = ctx.r20.s64 + -6;
	// add r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r29,212(r1)
	ctx.current_instruction = 0x880A1004;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stwx r10,r9,r29
	ctx.current_instruction = 0x880A1010;
	REX_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r10.u32);
	// bne cr6,0x880a1098
	if (!ctx.cr6.eq) goto loc_880A1098;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x880a1098
	if (ctx.cr6.eq) goto loc_880A1098;
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// lwz r6,1380(r23)
	ctx.current_instruction = 0x880A1024;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880A1038;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A1038:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88085820
	ctx.lr = 0x880A1050;
	sub_88085820(ctx, base);
loc_880A1050:
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lwz r6,1380(r23)
	ctx.current_instruction = 0x880A1054;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,-4(r29)
	ctx.current_instruction = 0x880A105C;
	REX_STORE_U32(ctx.r29.u32 + -4, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r11,r6,r31
	ctx.r11.u64 = ctx.r6.u64 + ctx.r31.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x880A1074;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A1074:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88085820
	ctx.lr = 0x880A108C;
	sub_88085820(ctx, base);
loc_880A108C:
	// add r10,r30,r3
	ctx.r10.u64 = ctx.r30.u64 + ctx.r3.u64;
	// stw r10,24(r29)
	ctx.current_instruction = 0x880A1090;
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r10.u32);
	// b 0x880a1658
	goto loc_880A1658;
loc_880A1098:
	// cmpw cr6,r20,r17
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x880a1658
	if (!ctx.cr6.eq) goto loc_880A1658;
	// lwz r11,220(r1)
	ctx.current_instruction = 0x880A10A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a1658
	if (ctx.cr6.eq) goto loc_880A1658;
	// lwz r29,1604(r1)
	ctx.current_instruction = 0x880A10AC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// lwz r27,260(r1)
	ctx.current_instruction = 0x880A10B4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r24,1612(r1)
	ctx.current_instruction = 0x880A10BC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r6,1380(r29)
	ctx.current_instruction = 0x880A10C4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 1380);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880A10D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A10D0:
	// lwz r26,1740(r1)
	ctx.current_instruction = 0x880A10D0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1740);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88085820
	ctx.lr = 0x880A10EC;
	sub_88085820(ctx, base);
loc_880A10EC:
	// addi r11,r17,1
	ctx.r11.s64 = ctx.r17.s64 + 1;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// lwz r27,212(r1)
	ctx.current_instruction = 0x880A10F4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,1380(r29)
	ctx.current_instruction = 0x880A10FC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 1380);
	// add r9,r23,r3
	ctx.r9.u64 = ctx.r23.u64 + ctx.r3.u64;
	// add r11,r6,r31
	ctx.r11.u64 = ctx.r6.u64 + ctx.r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r27
	ctx.current_instruction = 0x880A1110;
	REX_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x880A111C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A111C:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88085820
	ctx.lr = 0x880A1134;
	sub_88085820(ctx, base);
loc_880A1134:
	// addi r8,r17,8
	ctx.r8.s64 = ctx.r17.s64 + 8;
	// add r7,r24,r3
	ctx.r7.u64 = ctx.r24.u64 + ctx.r3.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r6,r27
	ctx.current_instruction = 0x880A1140;
	REX_STORE_U32(ctx.r6.u32 + ctx.r27.u32, ctx.r7.u32);
	// b 0x880a1658
	goto loc_880A1658;
loc_880A1148:
	// cmpw cr6,r25,r9
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x880a1464
	if (!ctx.cr6.eq) goto loc_880A1464;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880a1464
	if (ctx.cr6.eq) goto loc_880A1464;
	// subf r30,r19,r16
	ctx.r30.u64 = ctx.r16.u64 - ctx.r19.u64;
	// subf r26,r18,r15
	ctx.r26.u64 = ctx.r15.u64 - ctx.r18.u64;
	// addi r22,r30,-4
	ctx.r22.s64 = ctx.r30.s64 + -4;
	// addi r9,r26,4
	ctx.r9.s64 = ctx.r26.s64 + 4;
	// srawi r8,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r22.s32 >> 31;
	// add r11,r6,r20
	ctx.r11.u64 = ctx.r6.u64 + ctx.r20.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r5,r22,r8
	ctx.r5.u64 = ctx.r22.u64 ^ ctx.r8.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// xor r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r11,r8,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r23,r7,r4
	ctx.r23.u64 = ctx.r4.u64 - ctx.r7.u64;
	// addi r24,r10,-1
	ctx.r24.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a11c8
	if (ctx.cr6.gt) goto loc_880A11C8;
	// cmpwi cr6,r23,158
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 158, ctx.xer);
	// bgt cr6,0x880a11c8
	if (ctx.cr6.gt) goto loc_880A11C8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,216(r1)
	ctx.current_instruction = 0x880A11A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x880A11A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x880A11AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r21
	ctx.current_instruction = 0x880A11B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// lwzx r11,r4,r21
	ctx.current_instruction = 0x880A11BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880a11d0
	goto loc_880A11D0;
loc_880A11C8:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x880A11C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A11D0:
	// lwz r11,260(r1)
	ctx.current_instruction = 0x880A11D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r10,r25,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,1612(r1)
	ctx.current_instruction = 0x880A11DC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// subf r21,r25,r10
	ctx.r21.u64 = ctx.r10.u64 - ctx.r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r28,r21,r20
	ctx.r28.u64 = ctx.r21.u64 + ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A11F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A11F4:
	// srawi r9,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 31;
	// lwz r7,212(r1)
	ctx.current_instruction = 0x880A11F8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r8,r28,6
	ctx.r8.s64 = ctx.r28.s64 + 6;
	// xor r6,r30,r9
	ctx.r6.u64 = ctx.r30.u64 ^ ctx.r9.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// subf r11,r9,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// stwx r4,r5,r7
	ctx.current_instruction = 0x880A1214;
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r4.u32);
	// bgt cr6,0x880a1254
	if (ctx.cr6.gt) goto loc_880A1254;
	// cmpwi cr6,r23,158
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 158, ctx.xer);
	// bgt cr6,0x880a1254
	if (ctx.cr6.gt) goto loc_880A1254;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,216(r1)
	ctx.current_instruction = 0x880A1228;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r8,r23,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1740(r1)
	ctx.current_instruction = 0x880A1230;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1740);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x880A1234;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.current_instruction = 0x880A1238;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r10
	ctx.current_instruction = 0x880A1244;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r10,r5,r10
	ctx.current_instruction = 0x880A1248;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880a1260
	goto loc_880A1260;
loc_880A1254:
	// lwz r11,1740(r1)
	ctx.current_instruction = 0x880A1254;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1740);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x880A1258;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r27,r10,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A1260:
	// lwz r11,1604(r1)
	ctx.current_instruction = 0x880A1260;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// addi r5,r24,1
	ctx.r5.s64 = ctx.r24.s64 + 1;
	// lwz r10,260(r1)
	ctx.current_instruction = 0x880A1268;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1612(r1)
	ctx.current_instruction = 0x880A1270;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// lwz r6,1380(r11)
	ctx.current_instruction = 0x880A1274;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1380);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880A1280;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A1280:
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// lwz r9,212(r1)
	ctx.current_instruction = 0x880A1284;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r8,r28,7
	ctx.r8.s64 = ctx.r28.s64 + 7;
	// srawi r7,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r29.s32 >> 31;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r5,r29,r7
	ctx.r5.u64 = ctx.r29.u64 ^ ctx.r7.u64;
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// stwx r4,r6,r9
	ctx.current_instruction = 0x880A12A0;
	REX_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r4.u32);
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a12e4
	if (ctx.cr6.gt) goto loc_880A12E4;
	// cmpwi cr6,r23,158
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 158, ctx.xer);
	// bgt cr6,0x880a12e4
	if (ctx.cr6.gt) goto loc_880A12E4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,216(r1)
	ctx.current_instruction = 0x880A12B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r23,1740(r1)
	ctx.current_instruction = 0x880A12C0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1740);
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x880A12C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x880A12C8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r23
	ctx.current_instruction = 0x880A12D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// lwzx r11,r5,r23
	ctx.current_instruction = 0x880A12D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880a12f0
	goto loc_880A12F0;
loc_880A12E4:
	// lwz r23,1740(r1)
	ctx.current_instruction = 0x880A12E4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1740);
	// lwz r11,20(r23)
	ctx.current_instruction = 0x880A12E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A12F0:
	// addi r5,r24,2
	ctx.r5.s64 = ctx.r24.s64 + 2;
	// lwz r27,1604(r1)
	ctx.current_instruction = 0x880A12F4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// lwz r24,260(r1)
	ctx.current_instruction = 0x880A12F8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1612(r1)
	ctx.current_instruction = 0x880A1300;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x880A1304;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x880A1310;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A1310:
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// lwz r28,212(r1)
	ctx.current_instruction = 0x880A1314;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stwx r10,r9,r28
	ctx.current_instruction = 0x880A1324;
	REX_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r10.u32);
	// bne cr6,0x880a13c0
	if (!ctx.cr6.eq) goto loc_880A13C0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x880a13c0
	if (ctx.cr6.eq) goto loc_880A13C0;
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r29,1612(r1)
	ctx.current_instruction = 0x880A1338;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x880A1340;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// subf r10,r25,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r25.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x880A1360;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A1360:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x880A1378;
	sub_88085820(ctx, base);
loc_880A1378:
	// add r9,r28,r3
	ctx.r9.u64 = ctx.r28.u64 + ctx.r3.u64;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x880A137C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r9,-4(r30)
	ctx.current_instruction = 0x880A1384;
	REX_STORE_U32(ctx.r30.u32 + -4, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r11,r6,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r6.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x880A139C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A139C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r26,-4
	ctx.r5.s64 = ctx.r26.s64 + -4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x880A13B4;
	sub_88085820(ctx, base);
loc_880A13B4:
	// add r8,r29,r3
	ctx.r8.u64 = ctx.r29.u64 + ctx.r3.u64;
	// stw r8,-32(r30)
	ctx.current_instruction = 0x880A13B8;
	REX_STORE_U32(ctx.r30.u32 + -32, ctx.r8.u32);
	// b 0x880a1658
	goto loc_880A1658;
loc_880A13C0:
	// cmpw cr6,r20,r17
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x880a1658
	if (!ctx.cr6.eq) goto loc_880A1658;
	// lwz r11,220(r1)
	ctx.current_instruction = 0x880A13C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a1658
	if (ctx.cr6.eq) goto loc_880A1658;
	// lwz r22,1612(r1)
	ctx.current_instruction = 0x880A13D4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x880A13E0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r30,r21,r17
	ctx.r30.u64 = ctx.r21.u64 + ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x880A13F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A13F4:
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x880A140C;
	sub_88085820(ctx, base);
loc_880A140C:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// add r10,r21,r3
	ctx.r10.u64 = ctx.r21.u64 + ctx.r3.u64;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x880A1414;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// subf r11,r6,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r6.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stwx r10,r9,r28
	ctx.current_instruction = 0x880A1430;
	REX_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r10.u32);
	// bctrl 
	ctx.lr = 0x880A1438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A1438:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r26,-4
	ctx.r5.s64 = ctx.r26.s64 + -4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x880A1450;
	sub_88085820(ctx, base);
loc_880A1450:
	// addi r8,r30,-6
	ctx.r8.s64 = ctx.r30.s64 + -6;
	// add r7,r24,r3
	ctx.r7.u64 = ctx.r24.u64 + ctx.r3.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r6,r28
	ctx.current_instruction = 0x880A145C;
	REX_STORE_U32(ctx.r6.u32 + ctx.r28.u32, ctx.r7.u32);
	// b 0x880a1658
	goto loc_880A1658;
loc_880A1464:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x880a1550
	if (!ctx.cr6.eq) goto loc_880A1550;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x880a1550
	if (ctx.cr6.eq) goto loc_880A1550;
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,1380(r23)
	ctx.current_instruction = 0x880A1478;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1380);
	// lwz r27,260(r1)
	ctx.current_instruction = 0x880A147C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// subf r10,r19,r16
	ctx.r10.u64 = ctx.r16.u64 - ctx.r19.u64;
	// subf r8,r25,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r25.u64;
	// lwz r26,1612(r1)
	ctx.current_instruction = 0x880A1488;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// subf r9,r6,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r6.u64;
	// lwz r7,212(r1)
	ctx.current_instruction = 0x880A1490;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// subf r28,r18,r15
	ctx.r28.u64 = ctx.r15.u64 - ctx.r18.u64;
	// addi r30,r10,-4
	ctx.r30.s64 = ctx.r10.s64 + -4;
	// add r29,r11,r7
	ctx.r29.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x880A14B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A14B8:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r28,-4
	ctx.r5.s64 = ctx.r28.s64 + -4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88085820
	ctx.lr = 0x880A14D0;
	sub_88085820(ctx, base);
loc_880A14D0:
	// add r5,r24,r3
	ctx.r5.u64 = ctx.r24.u64 + ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r6,1380(r23)
	ctx.current_instruction = 0x880A14D8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1380);
	// stw r5,-32(r29)
	ctx.current_instruction = 0x880A14DC;
	REX_STORE_U32(ctx.r29.u32 + -32, ctx.r5.u32);
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880A14F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A14F0:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88085820
	ctx.lr = 0x880A1508;
	sub_88085820(ctx, base);
loc_880A1508:
	// add r3,r24,r3
	ctx.r3.u64 = ctx.r24.u64 + ctx.r3.u64;
	// lwz r6,1380(r23)
	ctx.current_instruction = 0x880A150C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,-4(r29)
	ctx.current_instruction = 0x880A1514;
	REX_STORE_U32(ctx.r29.u32 + -4, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r11,r31,r6
	ctx.r11.u64 = ctx.r31.u64 + ctx.r6.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x880A152C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A152C:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88085820
	ctx.lr = 0x880A1544;
	sub_88085820(ctx, base);
loc_880A1544:
	// add r11,r27,r3
	ctx.r11.u64 = ctx.r27.u64 + ctx.r3.u64;
	// stw r11,24(r29)
	ctx.current_instruction = 0x880A1548;
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// b 0x880a1658
	goto loc_880A1658;
loc_880A1550:
	// cmpw cr6,r20,r17
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x880a1658
	if (!ctx.cr6.eq) goto loc_880A1658;
	// lwz r11,220(r1)
	ctx.current_instruction = 0x880A1558;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a1658
	if (ctx.cr6.eq) goto loc_880A1658;
	// lwz r27,1604(r1)
	ctx.current_instruction = 0x880A1564;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r26,260(r1)
	ctx.current_instruction = 0x880A156C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// subf r10,r19,r16
	ctx.r10.u64 = ctx.r16.u64 - ctx.r19.u64;
	// lwz r22,1612(r1)
	ctx.current_instruction = 0x880A1574;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x880A1584;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// subf r28,r18,r15
	ctx.r28.u64 = ctx.r15.u64 - ctx.r18.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// subf r9,r6,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r6.u64;
	// add r29,r11,r17
	ctx.r29.u64 = ctx.r11.u64 + ctx.r17.u64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// bctrl 
	ctx.lr = 0x880A15A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A15A4:
	// lwz r23,1740(r1)
	ctx.current_instruction = 0x880A15A4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1740);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r5,r28,-4
	ctx.r5.s64 = ctx.r28.s64 + -4;
	// bl 0x88085820
	ctx.lr = 0x880A15C0;
	sub_88085820(ctx, base);
loc_880A15C0:
	// addi r10,r29,-6
	ctx.r10.s64 = ctx.r29.s64 + -6;
	// lwz r24,212(r1)
	ctx.current_instruction = 0x880A15C4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// add r9,r21,r3
	ctx.r9.u64 = ctx.r21.u64 + ctx.r3.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x880A15D0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// stwx r9,r8,r24
	ctx.current_instruction = 0x880A15E4;
	REX_STORE_U32(ctx.r8.u32 + ctx.r24.u32, ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x880A15EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A15EC:
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x88085820
	ctx.lr = 0x880A1604;
	sub_88085820(ctx, base);
loc_880A1604:
	// addi r7,r29,1
	ctx.r7.s64 = ctx.r29.s64 + 1;
	// add r3,r21,r3
	ctx.r3.u64 = ctx.r21.u64 + ctx.r3.u64;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x880A160C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// add r11,r31,r6
	ctx.r11.u64 = ctx.r31.u64 + ctx.r6.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stwx r3,r10,r24
	ctx.current_instruction = 0x880A1624;
	REX_STORE_U32(ctx.r10.u32 + ctx.r24.u32, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x880A1630;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A1630:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x880A1648;
	sub_88085820(ctx, base);
loc_880A1648:
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// add r8,r26,r3
	ctx.r8.u64 = ctx.r26.u64 + ctx.r3.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r7,r24
	ctx.current_instruction = 0x880A1654;
	REX_STORE_U32(ctx.r7.u32 + ctx.r24.u32, ctx.r8.u32);
loc_880A1658:
	// lwz r27,1604(r1)
	ctx.current_instruction = 0x880A1658;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// subf r8,r19,r16
	ctx.r8.u64 = ctx.r16.u64 - ctx.r19.u64;
	// subf r9,r18,r15
	ctx.r9.u64 = ctx.r15.u64 - ctx.r18.u64;
	// lwz r10,2604(r27)
	ctx.current_instruction = 0x880A1664;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 2604);
	// lwz r11,2608(r27)
	ctx.current_instruction = 0x880A1668;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2608);
	// lwz r7,2612(r27)
	ctx.current_instruction = 0x880A166C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 2612);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r5,2616(r27)
	ctx.current_instruction = 0x880A1674;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 2616);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r3,28036(r27)
	ctx.current_instruction = 0x880A167C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 28036);
	// and r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 & ctx.r7.u64;
	// and r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 & ctx.r5.u64;
	// subf r30,r10,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r29,r11,r8
	ctx.r29.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880a1b04
	if (ctx.cr6.eq) goto loc_880A1B04;
	// lwz r11,2652(r27)
	ctx.current_instruction = 0x880A1698;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2652);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r26,300(r1)
	ctx.current_instruction = 0x880A16A0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r27)
	ctx.current_instruction = 0x880A16AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r9,1560(r27)
	ctx.current_instruction = 0x880A16B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A16C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A16C4:
	// lwz r22,1644(r1)
	ctx.current_instruction = 0x880A16C4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1644);
	// lwz r23,1636(r1)
	ctx.current_instruction = 0x880A16C8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// addi r9,r1,228
	ctx.r9.s64 = ctx.r1.s64 + 228;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// lwz r28,312(r1)
	ctx.current_instruction = 0x880A16D4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r24,1612(r1)
	ctx.current_instruction = 0x880A16DC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// stw r9,100(r1)
	ctx.current_instruction = 0x880A16E0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r6,92(r1)
	ctx.current_instruction = 0x880A16E8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r5,84(r1)
	ctx.current_instruction = 0x880A16F0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r22,116(r1)
	ctx.current_instruction = 0x880A16FC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r23,108(r1)
	ctx.current_instruction = 0x880A1704;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085938
	ctx.lr = 0x880A1718;
	sub_88085938(ctx, base);
loc_880A1718:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,228(r1)
	ctx.current_instruction = 0x880A1720;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A1730;
	sub_88085E60(ctx, base);
loc_880A1730:
	// lwz r4,208(r1)
	ctx.current_instruction = 0x880A1730;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,1716(r1)
	ctx.current_instruction = 0x880A1734;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r11,208(r1)
	ctx.current_instruction = 0x880A173C;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a1750
	if (ctx.cr6.eq) goto loc_880A1750;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,208(r1)
	ctx.current_instruction = 0x880A174C;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
loc_880A1750:
	// lwz r9,212(r1)
	ctx.current_instruction = 0x880A1750;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// stw r10,172(r1)
	ctx.current_instruction = 0x880A1758;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// stw r9,100(r1)
	ctx.current_instruction = 0x880A1760;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r21,r1,240
	ctx.r21.s64 = ctx.r1.s64 + 240;
	// stw r5,188(r1)
	ctx.current_instruction = 0x880A1768;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,108(r28)
	ctx.current_instruction = 0x880A1770;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 108);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// lwz r3,220(r1)
	ctx.current_instruction = 0x880A1778;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r9,224(r1)
	ctx.current_instruction = 0x880A1780;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r31,296(r1)
	ctx.current_instruction = 0x880A1788;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// stw r8,196(r1)
	ctx.current_instruction = 0x880A178C;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// lwz r10,304(r1)
	ctx.current_instruction = 0x880A1790;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// stw r3,92(r1)
	ctx.current_instruction = 0x880A1794;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r28,164(r1)
	ctx.current_instruction = 0x880A1798;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r22,156(r1)
	ctx.current_instruction = 0x880A179C;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r22.u32);
	// stw r14,84(r1)
	ctx.current_instruction = 0x880A17A0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// stw r21,180(r1)
	ctx.current_instruction = 0x880A17A4;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// stw r23,148(r1)
	ctx.current_instruction = 0x880A17A8;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,292(r1)
	ctx.current_instruction = 0x880A17B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r29,140(r1)
	ctx.current_instruction = 0x880A17B8;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// stw r30,132(r1)
	ctx.current_instruction = 0x880A17C0;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r17,116(r1)
	ctx.current_instruction = 0x880A17C8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r26,108(r1)
	ctx.current_instruction = 0x880A17D0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r8,288(r1)
	ctx.current_instruction = 0x880A17D4;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r8.u32);
	// stw r11,124(r1)
	ctx.current_instruction = 0x880A17D8;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x88093570
	ctx.lr = 0x880A17E0;
	sub_88093570(ctx, base);
loc_880A17E0:
	// lwz r10,240(r1)
	ctx.current_instruction = 0x880A17E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r9,r16,r10
	ctx.r9.u64 = ctx.r16.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r19
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x880a1800
	if (!ctx.cr6.eq) goto loc_880A1800;
	// lwz r11,236(r1)
	ctx.current_instruction = 0x880A17F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r10,r15,r11
	ctx.r10.u64 = ctx.r15.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r18.s32, ctx.xer);
	// beq cr6,0x880a1954
	if (ctx.cr6.eq) goto loc_880A1954;
loc_880A1800:
	// srawi r29,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r19.s32 >> 2;
	// lwz r9,1684(r1)
	ctx.current_instruction = 0x880A1804;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1684);
	// srawi r27,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r18.s32 >> 2;
	// clrlwi r31,r19,30
	ctx.r31.u64 = ctx.r19.u32 & 0x3;
	// clrlwi r30,r18,30
	ctx.r30.u64 = ctx.r18.u32 & 0x3;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880a1830
	if (ctx.cr6.lt) goto loc_880A1830;
	// lwz r9,1692(r1)
	ctx.current_instruction = 0x880A1824;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1692);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880a1834
	if (!ctx.cr6.gt) goto loc_880A1834;
loc_880A1830:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_880A1834:
	// lwz r9,1700(r1)
	ctx.current_instruction = 0x880A1834;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880a184c
	if (ctx.cr6.lt) goto loc_880A184C;
	// lwz r9,1708(r1)
	ctx.current_instruction = 0x880A1840;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1708);
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880a1850
	if (!ctx.cr6.gt) goto loc_880A1850;
loc_880A184C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_880A1850:
	// lwz r28,1604(r1)
	ctx.current_instruction = 0x880A1850;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r26,300(r1)
	ctx.current_instruction = 0x880A1858;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r3,1620(r1)
	ctx.current_instruction = 0x880A1860;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,1380(r28)
	ctx.current_instruction = 0x880A186C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 1380);
	// lwz r25,2652(r28)
	ctx.current_instruction = 0x880A1870;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r28.u32 + 2652);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,1560(r28)
	ctx.current_instruction = 0x880A1878;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 1560);
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880A188C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A188C:
	// lwz r11,1636(r1)
	ctx.current_instruction = 0x880A188C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwz r6,1644(r1)
	ctx.current_instruction = 0x880A1890;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1644);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r25,312(r1)
	ctx.current_instruction = 0x880A189C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// stw r5,92(r1)
	ctx.current_instruction = 0x880A18A0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
	// stw r4,84(r1)
	ctx.current_instruction = 0x880A18A8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,108(r1)
	ctx.current_instruction = 0x880A18B0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r6,116(r1)
	ctx.current_instruction = 0x880A18B8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r10,100(r1)
	ctx.current_instruction = 0x880A18C0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r4,1612(r1)
	ctx.current_instruction = 0x880A18CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x88085938
	ctx.lr = 0x880A18DC;
	sub_88085938(ctx, base);
loc_880A18DC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,228(r1)
	ctx.current_instruction = 0x880A18E4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A18F4;
	sub_88085E60(ctx, base);
loc_880A18F4:
	// lwz r11,208(r1)
	ctx.current_instruction = 0x880A18F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,1716(r1)
	ctx.current_instruction = 0x880A18F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,208(r1)
	ctx.current_instruction = 0x880A1900;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a1914
	if (ctx.cr6.eq) goto loc_880A1914;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,208(r1)
	ctx.current_instruction = 0x880A1910;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
loc_880A1914:
	// lwz r9,108(r25)
	ctx.current_instruction = 0x880A1914;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 108);
	// lwz r10,224(r1)
	ctx.current_instruction = 0x880A1918;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r28,288(r1)
	ctx.current_instruction = 0x880A1920;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x880a1958
	if (!ctx.cr6.lt) goto loc_880A1958;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r31,240(r1)
	ctx.current_instruction = 0x880A1934;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,236(r1)
	ctx.current_instruction = 0x880A193C;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r29,264(r1)
	ctx.current_instruction = 0x880A1940;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
	// stw r27,272(r1)
	ctx.current_instruction = 0x880A1944;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// stw r11,244(r1)
	ctx.current_instruction = 0x880A1948;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// stw r11,256(r1)
	ctx.current_instruction = 0x880A194C;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// b 0x880a1958
	goto loc_880A1958;
loc_880A1954:
	// lwz r28,288(r1)
	ctx.current_instruction = 0x880A1954;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
loc_880A1958:
	// lwz r11,1716(r1)
	ctx.current_instruction = 0x880A1958;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a1afc
	if (ctx.cr6.eq) goto loc_880A1AFC;
	// lwz r11,248(r1)
	ctx.current_instruction = 0x880A1964;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a197c
	if (!ctx.cr6.eq) goto loc_880A197C;
	// lwz r11,1668(r1)
	ctx.current_instruction = 0x880A1970;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// lwz r10,1676(r1)
	ctx.current_instruction = 0x880A1974;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1676);
	// b 0x880a1984
	goto loc_880A1984;
loc_880A197C:
	// lwz r11,1652(r1)
	ctx.current_instruction = 0x880A197C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// lwz r10,1660(r1)
	ctx.current_instruction = 0x880A1980;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
loc_880A1984:
	// lwz r9,256(r1)
	ctx.current_instruction = 0x880A1984;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r8,264(r1)
	ctx.current_instruction = 0x880A1988;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r7,240(r1)
	ctx.current_instruction = 0x880A198C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880a19c4
	if (!ctx.cr6.eq) goto loc_880A19C4;
	// lwz r9,244(r1)
	ctx.current_instruction = 0x880A19A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,272(r1)
	ctx.current_instruction = 0x880A19A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r7,236(r1)
	ctx.current_instruction = 0x880A19AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880a1afc
	if (ctx.cr6.eq) goto loc_880A1AFC;
loc_880A19C4:
	// srawi r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	// lwz r9,1684(r1)
	ctx.current_instruction = 0x880A19C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1684);
	// srawi r27,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r10.s32 >> 2;
	// clrlwi r31,r11,30
	ctx.r31.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r30,r10,30
	ctx.r30.u64 = ctx.r10.u32 & 0x3;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880a19f4
	if (ctx.cr6.lt) goto loc_880A19F4;
	// lwz r9,1692(r1)
	ctx.current_instruction = 0x880A19E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1692);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880a19f8
	if (!ctx.cr6.gt) goto loc_880A19F8;
loc_880A19F4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_880A19F8:
	// lwz r9,1700(r1)
	ctx.current_instruction = 0x880A19F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880a1a10
	if (ctx.cr6.lt) goto loc_880A1A10;
	// lwz r9,1708(r1)
	ctx.current_instruction = 0x880A1A04;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1708);
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880a1a14
	if (!ctx.cr6.gt) goto loc_880A1A14;
loc_880A1A10:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_880A1A14:
	// lwz r26,1604(r1)
	ctx.current_instruction = 0x880A1A14;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r24,300(r1)
	ctx.current_instruction = 0x880A1A1C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r3,1620(r1)
	ctx.current_instruction = 0x880A1A24;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,1380(r26)
	ctx.current_instruction = 0x880A1A30;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 1380);
	// lwz r25,2652(r26)
	ctx.current_instruction = 0x880A1A34;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r26.u32 + 2652);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,1560(r26)
	ctx.current_instruction = 0x880A1A3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 1560);
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880A1A50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A1A50:
	// lwz r11,1636(r1)
	ctx.current_instruction = 0x880A1A50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// addi r8,r1,228
	ctx.r8.s64 = ctx.r1.s64 + 228;
	// lwz r9,1644(r1)
	ctx.current_instruction = 0x880A1A58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1644);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lwz r25,312(r1)
	ctx.current_instruction = 0x880A1A60;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stw r8,100(r1)
	ctx.current_instruction = 0x880A1A68;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	ctx.current_instruction = 0x880A1A6C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r6,84(r1)
	ctx.current_instruction = 0x880A1A74;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r11,108(r1)
	ctx.current_instruction = 0x880A1A7C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r9,116(r1)
	ctx.current_instruction = 0x880A1A84;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r4,1612(r1)
	ctx.current_instruction = 0x880A1A90;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x88085938
	ctx.lr = 0x880A1AA0;
	sub_88085938(ctx, base);
loc_880A1AA0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,228(r1)
	ctx.current_instruction = 0x880A1AA8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A1AB8;
	sub_88085E60(ctx, base);
loc_880A1AB8:
	// lwz r5,208(r1)
	ctx.current_instruction = 0x880A1AB8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lwz r4,108(r25)
	ctx.current_instruction = 0x880A1AC0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 108);
	// lwz r10,224(r1)
	ctx.current_instruction = 0x880A1AC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x880a1afc
	if (!ctx.cr6.lt) goto loc_880A1AFC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r31,240(r1)
	ctx.current_instruction = 0x880A1AE0;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,236(r1)
	ctx.current_instruction = 0x880A1AE8;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r29,264(r1)
	ctx.current_instruction = 0x880A1AEC;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
	// stw r27,272(r1)
	ctx.current_instruction = 0x880A1AF0;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// stw r11,244(r1)
	ctx.current_instruction = 0x880A1AF4;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// stw r11,256(r1)
	ctx.current_instruction = 0x880A1AF8;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
loc_880A1AFC:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x880a1ec8
	goto loc_880A1EC8;
loc_880A1B04:
	// lwz r11,276(r1)
	ctx.current_instruction = 0x880A1B04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r22,1740(r1)
	ctx.current_instruction = 0x880A1B08;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a1b68
	if (ctx.cr6.eq) goto loc_880A1B68;
	// lwz r11,1716(r1)
	ctx.current_instruction = 0x880A1B14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a1b68
	if (!ctx.cr6.eq) goto loc_880A1B68;
	// lwz r11,1748(r1)
	ctx.current_instruction = 0x880A1B20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1748);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r21,0(r11)
	ctx.current_instruction = 0x880A1B34;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x88085820
	ctx.lr = 0x880A1B3C;
	sub_88085820(ctx, base);
loc_880A1B3C:
	// lwz r24,1612(r1)
	ctx.current_instruction = 0x880A1B3C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x880A1B48;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x880A1B5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A1B5C:
	// add r11,r28,r3
	ctx.r11.u64 = ctx.r28.u64 + ctx.r3.u64;
	// stw r11,232(r1)
	ctx.current_instruction = 0x880A1B60;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// b 0x880a1b70
	goto loc_880A1B70;
loc_880A1B68:
	// lwz r21,260(r1)
	ctx.current_instruction = 0x880A1B68;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r24,1612(r1)
	ctx.current_instruction = 0x880A1B6C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
loc_880A1B70:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r11,1748(r1)
	ctx.current_instruction = 0x880A1B74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1748);
	// addi r10,r1,232
	ctx.r10.s64 = ctx.r1.s64 + 232;
	// lwz r9,312(r1)
	ctx.current_instruction = 0x880A1B7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// stw r5,164(r1)
	ctx.current_instruction = 0x880A1B80;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r10,180(r1)
	ctx.current_instruction = 0x880A1B88;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r8,r1,236
	ctx.r8.s64 = ctx.r1.s64 + 236;
	// lwz r10,296(r1)
	ctx.current_instruction = 0x880A1B90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r28,r17,1
	ctx.r28.s64 = ctx.r17.s64 + 1;
	// lwz r26,300(r1)
	ctx.current_instruction = 0x880A1B98;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r31,212(r1)
	ctx.current_instruction = 0x880A1BA0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// stw r29,140(r1)
	ctx.current_instruction = 0x880A1BA8;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// stw r8,172(r1)
	ctx.current_instruction = 0x880A1BB0;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r11,156(r1)
	ctx.current_instruction = 0x880A1BB8;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r9,188(r1)
	ctx.current_instruction = 0x880A1BC0;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// stw r22,148(r1)
	ctx.current_instruction = 0x880A1BC4;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// stw r30,132(r1)
	ctx.current_instruction = 0x880A1BC8;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r29,124(r1)
	ctx.current_instruction = 0x880A1BCC;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r28,116(r1)
	ctx.current_instruction = 0x880A1BD0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r26,108(r1)
	ctx.current_instruction = 0x880A1BD4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r31,100(r1)
	ctx.current_instruction = 0x880A1BD8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lwz r11,28460(r27)
	ctx.current_instruction = 0x880A1BDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 28460);
	// lwz r25,220(r1)
	ctx.current_instruction = 0x880A1BE0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r10,304(r1)
	ctx.current_instruction = 0x880A1BE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r9,292(r1)
	ctx.current_instruction = 0x880A1BE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r8,232(r1)
	ctx.current_instruction = 0x880A1BEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r14,84(r1)
	ctx.current_instruction = 0x880A1BF4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// stw r25,92(r1)
	ctx.current_instruction = 0x880A1BF8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// bctrl 
	ctx.lr = 0x880A1C00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A1C00:
	// clrlwi r31,r19,30
	ctx.r31.u64 = ctx.r19.u32 & 0x3;
	// clrlwi r30,r18,30
	ctx.r30.u64 = ctx.r18.u32 & 0x3;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x880a1c18
	if (!ctx.cr6.eq) goto loc_880A1C18;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x880a1d54
	if (ctx.cr6.eq) goto loc_880A1D54;
loc_880A1C18:
	// lwz r11,240(r1)
	ctx.current_instruction = 0x880A1C18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r10,r16,r11
	ctx.r10.u64 = ctx.r16.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x880a1c38
	if (!ctx.cr6.eq) goto loc_880A1C38;
	// lwz r11,236(r1)
	ctx.current_instruction = 0x880A1C28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r10,r15,r11
	ctx.r10.u64 = ctx.r15.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r18.s32, ctx.xer);
	// beq cr6,0x880a1d54
	if (ctx.cr6.eq) goto loc_880A1D54;
loc_880A1C38:
	// srawi r29,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r19.s32 >> 2;
	// lwz r25,1684(r1)
	ctx.current_instruction = 0x880A1C3C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1684);
	// srawi r28,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r18.s32 >> 2;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x880a1c5c
	if (!ctx.cr6.lt) goto loc_880A1C5C;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// b 0x880a1c6c
	goto loc_880A1C6C;
loc_880A1C5C:
	// lwz r9,1692(r1)
	ctx.current_instruction = 0x880A1C5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1692);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880a1c6c
	if (!ctx.cr6.gt) goto loc_880A1C6C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_880A1C6C:
	// lwz r23,1700(r1)
	ctx.current_instruction = 0x880A1C6C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a1c80
	if (!ctx.cr6.lt) goto loc_880A1C80;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x880a1c90
	goto loc_880A1C90;
loc_880A1C80:
	// lwz r9,1708(r1)
	ctx.current_instruction = 0x880A1C80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1708);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880a1c90
	if (!ctx.cr6.gt) goto loc_880A1C90;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_880A1C90:
	// lwz r4,1380(r27)
	ctx.current_instruction = 0x880A1C90;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r6,2652(r27)
	ctx.current_instruction = 0x880A1C98;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 2652);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r3,1620(r1)
	ctx.current_instruction = 0x880A1CA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// lwz r9,1560(r27)
	ctx.current_instruction = 0x880A1CA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1560);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880A1CC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A1CC4:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x880A1CDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A1CDC:
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmpwi cr6,r20,158
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 158, ctx.xer);
	// bgt cr6,0x880a1d18
	if (ctx.cr6.gt) goto loc_880A1D18;
	// lwz r11,216(r1)
	ctx.current_instruction = 0x880A1CEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r10,r20,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r20,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x880A1CF8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x880A1CFC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r22
	ctx.current_instruction = 0x880A1D08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r22.u32);
	// lwzx r10,r5,r22
	ctx.current_instruction = 0x880A1D0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r22.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880a1d20
	goto loc_880A1D20;
loc_880A1D18:
	// lwz r11,20(r22)
	ctx.current_instruction = 0x880A1D18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A1D20:
	// lwz r10,232(r1)
	ctx.current_instruction = 0x880A1D20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880a1d64
	if (!ctx.cr6.lt) goto loc_880A1D64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r31,240(r1)
	ctx.current_instruction = 0x880A1D34;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stw r30,236(r1)
	ctx.current_instruction = 0x880A1D38;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r11,232(r1)
	ctx.current_instruction = 0x880A1D3C;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// stw r29,264(r1)
	ctx.current_instruction = 0x880A1D40;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
	// stw r28,272(r1)
	ctx.current_instruction = 0x880A1D44;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r28.u32);
	// stw r20,244(r1)
	ctx.current_instruction = 0x880A1D48;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r20.u32);
	// stw r20,256(r1)
	ctx.current_instruction = 0x880A1D4C;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r20.u32);
	// b 0x880a1d64
	goto loc_880A1D64;
loc_880A1D54:
	// lwz r25,1684(r1)
	ctx.current_instruction = 0x880A1D54;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1684);
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r23,1700(r1)
	ctx.current_instruction = 0x880A1D5C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// lwz r10,232(r1)
	ctx.current_instruction = 0x880A1D60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
loc_880A1D64:
	// lwz r11,1716(r1)
	ctx.current_instruction = 0x880A1D64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a1ec8
	if (ctx.cr6.eq) goto loc_880A1EC8;
	// lwz r11,248(r1)
	ctx.current_instruction = 0x880A1D70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a1d88
	if (!ctx.cr6.eq) goto loc_880A1D88;
	// lwz r11,1668(r1)
	ctx.current_instruction = 0x880A1D7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// lwz r9,1676(r1)
	ctx.current_instruction = 0x880A1D80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1676);
	// b 0x880a1d90
	goto loc_880A1D90;
loc_880A1D88:
	// lwz r11,1652(r1)
	ctx.current_instruction = 0x880A1D88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// lwz r9,1660(r1)
	ctx.current_instruction = 0x880A1D8C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
loc_880A1D90:
	// clrlwi r29,r11,30
	ctx.r29.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r28,r9,30
	ctx.r28.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x880a1da8
	if (!ctx.cr6.eq) goto loc_880A1DA8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x880a1ec8
	if (ctx.cr6.eq) goto loc_880A1EC8;
loc_880A1DA8:
	// lwz r8,256(r1)
	ctx.current_instruction = 0x880A1DA8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r7,264(r1)
	ctx.current_instruction = 0x880A1DAC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r6,240(r1)
	ctx.current_instruction = 0x880A1DB0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880a1de8
	if (!ctx.cr6.eq) goto loc_880A1DE8;
	// lwz r8,244(r1)
	ctx.current_instruction = 0x880A1DC8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r7,272(r1)
	ctx.current_instruction = 0x880A1DCC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r6,236(r1)
	ctx.current_instruction = 0x880A1DD0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x880a1ec8
	if (ctx.cr6.eq) goto loc_880A1EC8;
loc_880A1DE8:
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// srawi r30,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x880a1e08
	if (!ctx.cr6.lt) goto loc_880A1E08;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// b 0x880a1e18
	goto loc_880A1E18;
loc_880A1E08:
	// lwz r9,1692(r1)
	ctx.current_instruction = 0x880A1E08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1692);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880a1e18
	if (!ctx.cr6.gt) goto loc_880A1E18;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_880A1E18:
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a1e28
	if (!ctx.cr6.lt) goto loc_880A1E28;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x880a1e38
	goto loc_880A1E38;
loc_880A1E28:
	// lwz r9,1708(r1)
	ctx.current_instruction = 0x880A1E28;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1708);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880a1e38
	if (!ctx.cr6.gt) goto loc_880A1E38;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_880A1E38:
	// lwz r4,1380(r27)
	ctx.current_instruction = 0x880A1E38;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r6,2652(r27)
	ctx.current_instruction = 0x880A1E40;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 2652);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r3,1620(r1)
	ctx.current_instruction = 0x880A1E4C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// lwz r9,1560(r27)
	ctx.current_instruction = 0x880A1E50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1560);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880A1E6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A1E6C:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x880A1E84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880A1E84:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x880A1E9C;
	sub_88085820(ctx, base);
loc_880A1E9C:
	// lwz r10,232(r1)
	ctx.current_instruction = 0x880A1E9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// add r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 + ctx.r26.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880a1ec8
	if (!ctx.cr6.lt) goto loc_880A1EC8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r29,240(r1)
	ctx.current_instruction = 0x880A1EB0;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// stw r28,236(r1)
	ctx.current_instruction = 0x880A1EB4;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// stw r31,264(r1)
	ctx.current_instruction = 0x880A1EB8;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stw r30,272(r1)
	ctx.current_instruction = 0x880A1EBC;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// stw r20,244(r1)
	ctx.current_instruction = 0x880A1EC0;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r20.u32);
	// stw r20,256(r1)
	ctx.current_instruction = 0x880A1EC4;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r20.u32);
loc_880A1EC8:
	// lwz r11,256(r1)
	ctx.current_instruction = 0x880A1EC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r9,264(r1)
	ctx.current_instruction = 0x880A1ECC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r8,244(r1)
	ctx.current_instruction = 0x880A1ED0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r7,272(r1)
	ctx.current_instruction = 0x880A1ED4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,240(r1)
	ctx.current_instruction = 0x880A1EDC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r5,1764(r1)
	ctx.current_instruction = 0x880A1EE4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1764);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,1772(r1)
	ctx.current_instruction = 0x880A1EEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1772);
	// lwz r7,236(r1)
	ctx.current_instruction = 0x880A1EF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,1780(r1)
	ctx.current_instruction = 0x880A1EF8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1780);
	// add r4,r9,r3
	ctx.r4.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r4,0(r5)
	ctx.current_instruction = 0x880A1F04;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// stw r3,0(r8)
	ctx.current_instruction = 0x880A1F08;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// stw r10,0(r6)
	ctx.current_instruction = 0x880A1F0C;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// addi r1,r1,1584
	ctx.r1.s64 = ctx.r1.s64 + 1584;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EF038) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880EF038;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880EF038) {
			switch (rex_dispatch_address) {
				case 0x880EF040:
				case 0x880EF0B4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EF038;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880EF040: goto loc_880EF040;
		case 0x880EF0B4: goto loc_880EF0B4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880EF040;
	__savegprlr_29(ctx, base);
loc_880EF040:
	// stwu r1,-816(r1)
	ctx.current_instruction = 0x880EF040;
	ea = -816 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,142
	ctx.r10.s64 = ctx.r1.s64 + 142;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880EF058:
	// lbz r9,-2(r11)
	ctx.current_instruction = 0x880EF058;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-1(r11)
	ctx.current_instruction = 0x880EF05C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,0(r11)
	ctx.current_instruction = 0x880EF060;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.current_instruction = 0x880EF064;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.current_instruction = 0x880EF068;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r3,3(r11)
	ctx.current_instruction = 0x880EF06C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r30,4(r11)
	ctx.current_instruction = 0x880EF070;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r29,5(r11)
	ctx.current_instruction = 0x880EF074;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// sth r9,2(r10)
	ctx.current_instruction = 0x880EF07C;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// sth r8,4(r10)
	ctx.current_instruction = 0x880EF080;
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r8.u16);
	// sth r7,6(r10)
	ctx.current_instruction = 0x880EF084;
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r7.u16);
	// sth r6,8(r10)
	ctx.current_instruction = 0x880EF088;
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r6.u16);
	// sth r5,10(r10)
	ctx.current_instruction = 0x880EF08C;
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r5.u16);
	// sth r3,12(r10)
	ctx.current_instruction = 0x880EF090;
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r3.u16);
	// sth r30,14(r10)
	ctx.current_instruction = 0x880EF094;
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r30.u16);
	// sthu r29,16(r10)
	ctx.current_instruction = 0x880EF098;
	ea = 16 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r29.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x880ef058
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EF058;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x880ee4e0
	ctx.lr = 0x880EF0B4;
	sub_880EE4E0(ctx, base);
loc_880EF0B4:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,270
	ctx.r11.s64 = ctx.r1.s64 + 270;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lfs f0,19216(r9)
	ctx.current_instruction = 0x880EF0C8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 19216);
	ctx.f0.f64 = double(temp.f32);
loc_880EF0CC:
	// lhz r9,2(r11)
	ctx.current_instruction = 0x880EF0CC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r5,8(r11)
	ctx.current_instruction = 0x880EF0D0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhz r3,10(r11)
	ctx.current_instruction = 0x880EF0D8;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r6,12(r11)
	ctx.current_instruction = 0x880EF0DC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// std r8,136(r1)
	ctx.current_instruction = 0x880EF0E0;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lhz r4,4(r11)
	ctx.current_instruction = 0x880EF0E8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// lhz r7,6(r11)
	ctx.current_instruction = 0x880EF0F0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// lhz r31,14(r11)
	ctx.current_instruction = 0x880EF0F8;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// lhzu r9,16(r11)
	ctx.current_instruction = 0x880EF100;
	ea = 16 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// std r3,112(r1)
	ctx.current_instruction = 0x880EF10C;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// std r8,96(r1)
	ctx.current_instruction = 0x880EF114;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r5,128(r1)
	ctx.current_instruction = 0x880EF11C;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// extsw r8,r31
	ctx.r8.s64 = ctx.r31.s32;
	// std r6,88(r1)
	ctx.current_instruction = 0x880EF124;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// std r3,120(r1)
	ctx.current_instruction = 0x880EF12C;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// lfd f12,96(r1)
	ctx.current_instruction = 0x880EF130;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,80(r1)
	ctx.current_instruction = 0x880EF134;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f8,88(r1)
	ctx.current_instruction = 0x880EF138;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r5,104(r1)
	ctx.current_instruction = 0x880EF13C;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f6,120(r1)
	ctx.current_instruction = 0x880EF140;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// lfd f11,128(r1)
	ctx.current_instruction = 0x880EF144;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lfd f10,112(r1)
	ctx.current_instruction = 0x880EF148;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lfd f9,80(r1)
	ctx.current_instruction = 0x880EF14C;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f7,104(r1)
	ctx.current_instruction = 0x880EF150;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// lfd f13,136(r1)
	ctx.current_instruction = 0x880EF154;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f3,f13
	ctx.f3.f64 = double(ctx.f13.s64);
	// fcfid f4,f8
	ctx.f4.f64 = double(ctx.f8.s64);
	// fcfid f2,f12
	ctx.f2.f64 = double(ctx.f12.s64);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fcfid f1,f11
	ctx.f1.f64 = double(ctx.f11.s64);
	// fcfid f13,f10
	ctx.f13.f64 = double(ctx.f10.s64);
	// fcfid f12,f9
	ctx.f12.f64 = double(ctx.f9.s64);
	// fcfid f11,f7
	ctx.f11.f64 = double(ctx.f7.s64);
	// frsp f8,f3
	ctx.f8.f64 = double(float(ctx.f3.f64));
	// frsp f9,f4
	ctx.f9.f64 = double(float(ctx.f4.f64));
	// frsp f7,f2
	ctx.f7.f64 = double(float(ctx.f2.f64));
	// frsp f10,f5
	ctx.f10.f64 = double(float(ctx.f5.f64));
	// frsp f6,f1
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// frsp f5,f13
	ctx.f5.f64 = double(float(ctx.f13.f64));
	// frsp f4,f12
	ctx.f4.f64 = double(float(ctx.f12.f64));
	// frsp f3,f11
	ctx.f3.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f13,4(r10)
	ctx.current_instruction = 0x880EF19C;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f1,8(r10)
	ctx.current_instruction = 0x880EF1A4;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f12,16(r10)
	ctx.current_instruction = 0x880EF1AC;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// fmuls f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f2,12(r10)
	ctx.current_instruction = 0x880EF1B4;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmuls f11,f6,f0
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f11,20(r10)
	ctx.current_instruction = 0x880EF1BC;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f10,24(r10)
	ctx.current_instruction = 0x880EF1C4;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// fmuls f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f9,28(r10)
	ctx.current_instruction = 0x880EF1CC;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// fmuls f8,f3,f0
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfsu f8,32(r10)
	ctx.current_instruction = 0x880EF1D4;
	ea = 32 + ctx.r10.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x880ef0cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EF0CC;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F3D50) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F3D50;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F3D50) {
			switch (rex_dispatch_address) {
				case 0x880F3D58:
				case 0x880F3DA8:
				case 0x880F3DB8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F3D50;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F3D58: goto loc_880F3D58;
		case 0x880F3DA8: goto loc_880F3DA8;
		case 0x880F3DB8: goto loc_880F3DB8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880F3D58;
	__savegprlr_27(ctx, base);
loc_880F3D58:
	// ld r12,-4096(r1)
	ctx.current_instruction = 0x880F3D58;
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4224(r1)
	ctx.current_instruction = 0x880F3D5C;
	ea = -4224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,192(r4)
	ctx.current_instruction = 0x880F3D60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 192);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,796(r3)
	ctx.current_instruction = 0x880F3D68;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r8,196(r4)
	ctx.current_instruction = 0x880F3D70;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 196);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,6844(r3)
	ctx.current_instruction = 0x880F3D78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6844);
	// mullw r11,r9,r27
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// subf. r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble 0x880f3dd4
	if (!ctx.cr0.gt) goto loc_880F3DD4;
loc_880F3D8C:
	// lwz r11,21152(r31)
	ctx.current_instruction = 0x880F3D8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21152);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,796(r31)
	ctx.current_instruction = 0x880F3D98;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880F3DA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880F3DA8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x880F3DB8;
	sub_880547A0(ctx, base);
loc_880F3DB8:
	// lwz r10,196(r29)
	ctx.current_instruction = 0x880F3DB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 196);
	// lwz r9,192(r29)
	ctx.current_instruction = 0x880F3DBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 192);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880f3d8c
	if (ctx.cr6.lt) goto loc_880F3D8C;
loc_880F3DD4:
	// addi r1,r1,4224
	ctx.r1.s64 = ctx.r1.s64 + 4224;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F5168) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F5168;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F5168) {
			switch (rex_dispatch_address) {
				case 0x880F5170:
				case 0x880F5238:
				case 0x880F5274:
				case 0x880F528C:
				case 0x880F52C0:
				case 0x880F5300:
				case 0x880F531C:
				case 0x880F5328:
				case 0x880F5360:
				case 0x880F5368:
				case 0x880F53EC:
				case 0x880F5420:
				case 0x880F5428:
				case 0x880F5440:
				case 0x880F547C:
				case 0x880F54B4:
				case 0x880F54DC:
				case 0x880F54E4:
				case 0x880F54EC:
				case 0x880F5500:
				case 0x880F5518:
				case 0x880F5520:
				case 0x880F5528:
				case 0x880F5530:
				case 0x880F5538:
				case 0x880F554C:
				case 0x880F5554:
				case 0x880F556C:
				case 0x880F557C:
				case 0x880F5580:
				case 0x880F55A0:
				case 0x880F55D8:
				case 0x880F5604:
				case 0x880F561C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F5168;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F5170: goto loc_880F5170;
		case 0x880F5238: goto loc_880F5238;
		case 0x880F5274: goto loc_880F5274;
		case 0x880F528C: goto loc_880F528C;
		case 0x880F52C0: goto loc_880F52C0;
		case 0x880F5300: goto loc_880F5300;
		case 0x880F531C: goto loc_880F531C;
		case 0x880F5328: goto loc_880F5328;
		case 0x880F5360: goto loc_880F5360;
		case 0x880F5368: goto loc_880F5368;
		case 0x880F53EC: goto loc_880F53EC;
		case 0x880F5420: goto loc_880F5420;
		case 0x880F5428: goto loc_880F5428;
		case 0x880F5440: goto loc_880F5440;
		case 0x880F547C: goto loc_880F547C;
		case 0x880F54B4: goto loc_880F54B4;
		case 0x880F54DC: goto loc_880F54DC;
		case 0x880F54E4: goto loc_880F54E4;
		case 0x880F54EC: goto loc_880F54EC;
		case 0x880F5500: goto loc_880F5500;
		case 0x880F5518: goto loc_880F5518;
		case 0x880F5520: goto loc_880F5520;
		case 0x880F5528: goto loc_880F5528;
		case 0x880F5530: goto loc_880F5530;
		case 0x880F5538: goto loc_880F5538;
		case 0x880F554C: goto loc_880F554C;
		case 0x880F5554: goto loc_880F5554;
		case 0x880F556C: goto loc_880F556C;
		case 0x880F557C: goto loc_880F557C;
		case 0x880F5580: goto loc_880F5580;
		case 0x880F55A0: goto loc_880F55A0;
		case 0x880F55D8: goto loc_880F55D8;
		case 0x880F5604: goto loc_880F5604;
		case 0x880F561C: goto loc_880F561C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880F5170;
	__savegprlr_29(ctx, base);
loc_880F5170:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880F5170;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,1624(r3)
	ctx.current_instruction = 0x880F5174;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1624);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880f51fc
	if (ctx.cr6.eq) goto loc_880F51FC;
	// addi r11,r3,2648
	ctx.r11.s64 = ctx.r3.s64 + 2648;
loc_880F5190:
	// stw r31,884(r11)
	ctx.current_instruction = 0x880F5190;
	REX_STORE_U32(ctx.r11.u32 + 884, ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r31,880(r11)
	ctx.current_instruction = 0x880F5198;
	REX_STORE_U32(ctx.r11.u32 + 880, ctx.r31.u32);
	// stw r31,872(r11)
	ctx.current_instruction = 0x880F519C;
	REX_STORE_U32(ctx.r11.u32 + 872, ctx.r31.u32);
	// stw r31,876(r11)
	ctx.current_instruction = 0x880F51A0;
	REX_STORE_U32(ctx.r11.u32 + 876, ctx.r31.u32);
	// stw r31,896(r11)
	ctx.current_instruction = 0x880F51A4;
	REX_STORE_U32(ctx.r11.u32 + 896, ctx.r31.u32);
	// stw r31,888(r11)
	ctx.current_instruction = 0x880F51A8;
	REX_STORE_U32(ctx.r11.u32 + 888, ctx.r31.u32);
	// stw r31,892(r11)
	ctx.current_instruction = 0x880F51AC;
	REX_STORE_U32(ctx.r11.u32 + 892, ctx.r31.u32);
	// stw r31,916(r11)
	ctx.current_instruction = 0x880F51B0;
	REX_STORE_U32(ctx.r11.u32 + 916, ctx.r31.u32);
	// stw r31,920(r11)
	ctx.current_instruction = 0x880F51B4;
	REX_STORE_U32(ctx.r11.u32 + 920, ctx.r31.u32);
	// stw r31,900(r11)
	ctx.current_instruction = 0x880F51B8;
	REX_STORE_U32(ctx.r11.u32 + 900, ctx.r31.u32);
	// stw r31,904(r11)
	ctx.current_instruction = 0x880F51BC;
	REX_STORE_U32(ctx.r11.u32 + 904, ctx.r31.u32);
	// stw r31,908(r11)
	ctx.current_instruction = 0x880F51C0;
	REX_STORE_U32(ctx.r11.u32 + 908, ctx.r31.u32);
	// stw r31,912(r11)
	ctx.current_instruction = 0x880F51C4;
	REX_STORE_U32(ctx.r11.u32 + 912, ctx.r31.u32);
	// stw r31,952(r11)
	ctx.current_instruction = 0x880F51C8;
	REX_STORE_U32(ctx.r11.u32 + 952, ctx.r31.u32);
	// stw r31,956(r11)
	ctx.current_instruction = 0x880F51CC;
	REX_STORE_U32(ctx.r11.u32 + 956, ctx.r31.u32);
	// stw r31,936(r11)
	ctx.current_instruction = 0x880F51D0;
	REX_STORE_U32(ctx.r11.u32 + 936, ctx.r31.u32);
	// stw r31,932(r11)
	ctx.current_instruction = 0x880F51D4;
	REX_STORE_U32(ctx.r11.u32 + 932, ctx.r31.u32);
	// stw r31,928(r11)
	ctx.current_instruction = 0x880F51D8;
	REX_STORE_U32(ctx.r11.u32 + 928, ctx.r31.u32);
	// stw r31,924(r11)
	ctx.current_instruction = 0x880F51DC;
	REX_STORE_U32(ctx.r11.u32 + 924, ctx.r31.u32);
	// stw r31,940(r11)
	ctx.current_instruction = 0x880F51E0;
	REX_STORE_U32(ctx.r11.u32 + 940, ctx.r31.u32);
	// stw r31,976(r11)
	ctx.current_instruction = 0x880F51E4;
	REX_STORE_U32(ctx.r11.u32 + 976, ctx.r31.u32);
	// stw r31,972(r11)
	ctx.current_instruction = 0x880F51E8;
	REX_STORE_U32(ctx.r11.u32 + 972, ctx.r31.u32);
	// stwu r31,968(r11)
	ctx.current_instruction = 0x880F51EC;
	ea = 968 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// lwz r9,1624(r30)
	ctx.current_instruction = 0x880F51F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1624);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x880f5190
	if (ctx.cr6.lt) goto loc_880F5190;
loc_880F51FC:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x880f5328
	if (!ctx.cr6.eq) goto loc_880F5328;
	// lwz r11,27988(r30)
	ctx.current_instruction = 0x880F5204;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 27988);
	// addi r29,r30,2848
	ctx.r29.s64 = ctx.r30.s64 + 2848;
	// lwz r5,3116(r30)
	ctx.current_instruction = 0x880F520C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 3116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f523c
	if (ctx.cr6.eq) goto loc_880F523C;
	// lwz r11,31544(r30)
	ctx.current_instruction = 0x880F5218;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 31544);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,556(r29)
	ctx.current_instruction = 0x880F5220;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 556);
	// lwz r6,288(r29)
	ctx.current_instruction = 0x880F5224;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r4,264(r29)
	ctx.current_instruction = 0x880F522C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 264);
	// bne cr6,0x880f5288
	if (!ctx.cr6.eq) goto loc_880F5288;
	// bl 0x88061460
	ctx.lr = 0x880F5238;
	sub_88061460(ctx, base);
loc_880F5238:
	// b 0x880f528c
	goto loc_880F528C;
loc_880F523C:
	// lwz r11,2800(r30)
	ctx.current_instruction = 0x880F523C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f5250
	if (ctx.cr6.eq) goto loc_880F5250;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x880f5278
	if (!ctx.cr6.eq) goto loc_880F5278;
loc_880F5250:
	// lwz r11,2572(r30)
	ctx.current_instruction = 0x880F5250;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f5278
	if (!ctx.cr6.eq) goto loc_880F5278;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,552(r29)
	ctx.current_instruction = 0x880F5260;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 552);
	// lwz r8,556(r29)
	ctx.current_instruction = 0x880F5264;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 556);
	// lwz r6,288(r29)
	ctx.current_instruction = 0x880F5268;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 288);
	// lwz r4,264(r29)
	ctx.current_instruction = 0x880F526C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 264);
	// bl 0x880c2ab0
	ctx.lr = 0x880F5274;
	sub_880C2AB0(ctx, base);
loc_880F5274:
	// b 0x880f528c
	goto loc_880F528C;
loc_880F5278:
	// lwz r7,556(r29)
	ctx.current_instruction = 0x880F5278;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 556);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,288(r29)
	ctx.current_instruction = 0x880F5280;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 288);
	// lwz r4,264(r29)
	ctx.current_instruction = 0x880F5284;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 264);
loc_880F5288:
	// bl 0x88103550
	ctx.lr = 0x880F528C;
	sub_88103550(ctx, base);
loc_880F528C:
	// lwz r11,27988(r30)
	ctx.current_instruction = 0x880F528C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 27988);
	// lwz r5,268(r29)
	ctx.current_instruction = 0x880F5290;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f52c4
	if (ctx.cr6.eq) goto loc_880F52C4;
	// lwz r11,31544(r30)
	ctx.current_instruction = 0x880F529C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 31544);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,560(r29)
	ctx.current_instruction = 0x880F52A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 560);
	// lwz r7,556(r29)
	ctx.current_instruction = 0x880F52A8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r6,288(r29)
	ctx.current_instruction = 0x880F52B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 288);
	// lwz r4,264(r29)
	ctx.current_instruction = 0x880F52B4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 264);
	// bne cr6,0x880f5318
	if (!ctx.cr6.eq) goto loc_880F5318;
	// bl 0x88061460
	ctx.lr = 0x880F52C0;
	sub_88061460(ctx, base);
loc_880F52C0:
	// b 0x880f531c
	goto loc_880F531C;
loc_880F52C4:
	// lwz r11,2800(r30)
	ctx.current_instruction = 0x880F52C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f52d8
	if (ctx.cr6.eq) goto loc_880F52D8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x880f5304
	if (!ctx.cr6.eq) goto loc_880F5304;
loc_880F52D8:
	// lwz r11,2572(r30)
	ctx.current_instruction = 0x880F52D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f5304
	if (!ctx.cr6.eq) goto loc_880F5304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,560(r29)
	ctx.current_instruction = 0x880F52E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 560);
	// lwz r8,556(r29)
	ctx.current_instruction = 0x880F52EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 556);
	// lwz r7,552(r29)
	ctx.current_instruction = 0x880F52F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 552);
	// lwz r6,288(r29)
	ctx.current_instruction = 0x880F52F4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 288);
	// lwz r4,264(r29)
	ctx.current_instruction = 0x880F52F8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 264);
	// bl 0x880c2b68
	ctx.lr = 0x880F5300;
	sub_880C2B68(ctx, base);
loc_880F5300:
	// b 0x880f531c
	goto loc_880F531C;
loc_880F5304:
	// lwz r8,560(r29)
	ctx.current_instruction = 0x880F5304;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 560);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,556(r29)
	ctx.current_instruction = 0x880F530C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 556);
	// lwz r6,288(r29)
	ctx.current_instruction = 0x880F5310;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 288);
	// lwz r4,264(r29)
	ctx.current_instruction = 0x880F5314;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 264);
loc_880F5318:
	// bl 0x880ff330
	ctx.lr = 0x880F531C;
	sub_880FF330(ctx, base);
loc_880F531C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880f2db8
	ctx.lr = 0x880F5328;
	sub_880F2DB8(ctx, base);
loc_880F5328:
	// lwz r11,2800(r30)
	ctx.current_instruction = 0x880F5328;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2800);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x880f533c
	if (ctx.cr6.eq) goto loc_880F533C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880f53e0
	if (!ctx.cr6.eq) goto loc_880F53E0;
loc_880F533C:
	// lwz r11,1608(r30)
	ctx.current_instruction = 0x880F533C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f536c
	if (ctx.cr6.eq) goto loc_880F536C;
	// lwz r11,7600(r30)
	ctx.current_instruction = 0x880F5348;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 7600);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x880f536c
	if (ctx.cr6.eq) goto loc_880F536C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1624(r30)
	ctx.current_instruction = 0x880F5358;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 1624);
	// bl 0x880f2730
	ctx.lr = 0x880F5360;
	sub_880F2730(ctx, base);
loc_880F5360:
	// lwz r4,1624(r30)
	ctx.current_instruction = 0x880F5360;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 1624);
	// bl 0x880f4470
	ctx.lr = 0x880F5368;
	sub_880F4470(ctx, base);
loc_880F5368:
	// b 0x880f53ec
	goto loc_880F53EC;
loc_880F536C:
	// lwz r11,724(r30)
	ctx.current_instruction = 0x880F536C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 724);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r10,7764(r30)
	ctx.current_instruction = 0x880F5374;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 7764);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x880f53e0
	if (!ctx.cr6.gt) goto loc_880F53E0;
loc_880F5380:
	// lwz r11,720(r30)
	ctx.current_instruction = 0x880F5380;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x880f53d0
	if (!ctx.cr6.gt) goto loc_880F53D0;
loc_880F5390:
	// lwz r8,0(r10)
	ctx.current_instruction = 0x880F5390;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// li r9,6
	ctx.r9.s64 = 6;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwinm r5,r8,0,8,4
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFF8FFFFFF;
	// addi r8,r10,56
	ctx.r8.s64 = ctx.r10.s64 + 56;
	// rlwinm r5,r5,0,4,2
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r5,0(r10)
	ctx.current_instruction = 0x880F53AC;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
loc_880F53B0:
	// stbx r31,r8,r11
	ctx.current_instruction = 0x880F53B0;
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x880f53b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F53B0;
	// lwz r11,720(r30)
	ctx.current_instruction = 0x880F53BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,276
	ctx.r10.s64 = ctx.r10.s64 + 276;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880f5390
	if (ctx.cr6.lt) goto loc_880F5390;
loc_880F53D0:
	// lwz r11,724(r30)
	ctx.current_instruction = 0x880F53D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 724);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880f5380
	if (ctx.cr6.lt) goto loc_880F5380;
loc_880F53E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1624(r30)
	ctx.current_instruction = 0x880F53E4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 1624);
	// bl 0x880f2470
	ctx.lr = 0x880F53EC;
	sub_880F2470(ctx, base);
loc_880F53EC:
	// lwz r11,2800(r30)
	ctx.current_instruction = 0x880F53EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2800);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x880f5400
	if (ctx.cr6.eq) goto loc_880F5400;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880f547c
	if (!ctx.cr6.eq) goto loc_880F547C;
loc_880F5400:
	// lwz r11,27988(r30)
	ctx.current_instruction = 0x880F5400;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f5438
	if (ctx.cr6.eq) goto loc_880F5438;
	// lwz r11,31544(r30)
	ctx.current_instruction = 0x880F540C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 31544);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f5424
	if (ctx.cr6.eq) goto loc_880F5424;
	// bl 0x88061460
	ctx.lr = 0x880F5420;
	sub_88061460(ctx, base);
loc_880F5420:
	// b 0x880f5458
	goto loc_880F5458;
loc_880F5424:
	// bl 0x88061460
	ctx.lr = 0x880F5428;
	sub_88061460(ctx, base);
loc_880F5428:
	// lwz r11,8236(r30)
	ctx.current_instruction = 0x880F5428;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f561c
	if (!ctx.cr6.eq) goto loc_880F561C;
	// b 0x880f5458
	goto loc_880F5458;
loc_880F5438:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880fcb80
	ctx.lr = 0x880F5440;
	sub_880FCB80(ctx, base);
loc_880F5440:
	// lwz r11,8236(r30)
	ctx.current_instruction = 0x880F5440;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f5458
	if (ctx.cr6.eq) goto loc_880F5458;
	// lwz r11,4(r30)
	ctx.current_instruction = 0x880F544C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x880f561c
	if (ctx.cr6.eq) goto loc_880F561C;
loc_880F5458:
	// lwz r11,1608(r30)
	ctx.current_instruction = 0x880F5458;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f547c
	if (!ctx.cr6.eq) goto loc_880F547C;
	// lwz r11,1624(r30)
	ctx.current_instruction = 0x880F5464;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1624);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x880f547c
	if (!ctx.cr6.eq) goto loc_880F547C;
	// addi r4,r30,2848
	ctx.r4.s64 = ctx.r30.s64 + 2848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880f3040
	ctx.lr = 0x880F547C;
	sub_880F3040(ctx, base);
loc_880F547C:
	// lwz r11,1608(r30)
	ctx.current_instruction = 0x880F547C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f54b4
	if (ctx.cr6.eq) goto loc_880F54B4;
	// lwz r11,2800(r30)
	ctx.current_instruction = 0x880F5488;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2800);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x880f549c
	if (ctx.cr6.eq) goto loc_880F549C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880f54b4
	if (!ctx.cr6.eq) goto loc_880F54B4;
loc_880F549C:
	// lwz r11,1624(r30)
	ctx.current_instruction = 0x880F549C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1624);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x880f54b4
	if (!ctx.cr6.eq) goto loc_880F54B4;
	// addi r4,r30,2848
	ctx.r4.s64 = ctx.r30.s64 + 2848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880f3040
	ctx.lr = 0x880F54B4;
	sub_880F3040(ctx, base);
loc_880F54B4:
	// lwz r11,2800(r30)
	ctx.current_instruction = 0x880F54B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f5584
	if (ctx.cr6.eq) goto loc_880F5584;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x880f5584
	if (ctx.cr6.eq) goto loc_880F5584;
	// lwz r11,31544(r30)
	ctx.current_instruction = 0x880F54C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 31544);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f5504
	if (ctx.cr6.eq) goto loc_880F5504;
	// bl 0x88061460
	ctx.lr = 0x880F54DC;
	sub_88061460(ctx, base);
loc_880F54DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88061460
	ctx.lr = 0x880F54E4;
	sub_88061460(ctx, base);
loc_880F54E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88061460
	ctx.lr = 0x880F54EC;
	sub_88061460(ctx, base);
loc_880F54EC:
	// lwz r11,2204(r30)
	ctx.current_instruction = 0x880F54EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f55a0
	if (!ctx.cr6.eq) goto loc_880F55A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88061460
	ctx.lr = 0x880F5500;
	sub_88061460(ctx, base);
loc_880F5500:
	// b 0x880f55a0
	goto loc_880F55A0;
loc_880F5504:
	// lwz r11,27988(r30)
	ctx.current_instruction = 0x880F5504;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 27988);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f5550
	if (ctx.cr6.eq) goto loc_880F5550;
	// bl 0x880fda90
	ctx.lr = 0x880F5518;
	sub_880FDA90(ctx, base);
loc_880F5518:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88061460
	ctx.lr = 0x880F5520;
	sub_88061460(ctx, base);
loc_880F5520:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88061460
	ctx.lr = 0x880F5528;
	sub_88061460(ctx, base);
loc_880F5528:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88061460
	ctx.lr = 0x880F5530;
	sub_88061460(ctx, base);
loc_880F5530:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88061460
	ctx.lr = 0x880F5538;
	sub_88061460(ctx, base);
loc_880F5538:
	// lwz r11,2204(r30)
	ctx.current_instruction = 0x880F5538;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f55a0
	if (!ctx.cr6.eq) goto loc_880F55A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88061460
	ctx.lr = 0x880F554C;
	sub_88061460(ctx, base);
loc_880F554C:
	// b 0x880f55a0
	goto loc_880F55A0;
loc_880F5550:
	// bl 0x880fda90
	ctx.lr = 0x880F5554;
	sub_880FDA90(ctx, base);
loc_880F5554:
	// lwz r11,2204(r30)
	ctx.current_instruction = 0x880F5554;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f556c
	if (!ctx.cr6.eq) goto loc_880F556C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880fda90
	ctx.lr = 0x880F556C;
	sub_880FDA90(ctx, base);
loc_880F556C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1624(r30)
	ctx.current_instruction = 0x880F5570;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 1624);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880f27f8
	ctx.lr = 0x880F557C;
	sub_880F27F8(ctx, base);
loc_880F557C:
	// bl 0x880f2900
	ctx.lr = 0x880F5580;
	sub_880F2900(ctx, base);
loc_880F5580:
	// b 0x880f55a0
	goto loc_880F55A0;
loc_880F5584:
	// lwz r11,2340(r30)
	ctx.current_instruction = 0x880F5584;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2340);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880f55a0
	if (ctx.cr6.eq) goto loc_880F55A0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880fda90
	ctx.lr = 0x880F55A0;
	sub_880FDA90(ctx, base);
loc_880F55A0:
	// lwz r11,27988(r30)
	ctx.current_instruction = 0x880F55A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f55d8
	if (ctx.cr6.eq) goto loc_880F55D8;
	// lwz r11,31544(r30)
	ctx.current_instruction = 0x880F55AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f55d8
	if (!ctx.cr6.eq) goto loc_880F55D8;
	// lwz r11,2800(r30)
	ctx.current_instruction = 0x880F55B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f55cc
	if (ctx.cr6.eq) goto loc_880F55CC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x880f55d8
	if (!ctx.cr6.eq) goto loc_880F55D8;
loc_880F55CC:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880fda90
	ctx.lr = 0x880F55D8;
	sub_880FDA90(ctx, base);
loc_880F55D8:
	// lwz r11,4(r30)
	ctx.current_instruction = 0x880F55D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880f5604
	if (!ctx.cr6.eq) goto loc_880F5604;
	// lwz r11,2800(r30)
	ctx.current_instruction = 0x880F55E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f55f8
	if (ctx.cr6.eq) goto loc_880F55F8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x880f5604
	if (!ctx.cr6.eq) goto loc_880F5604;
loc_880F55F8:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880fda90
	ctx.lr = 0x880F5604;
	sub_880FDA90(ctx, base);
loc_880F5604:
	// lwz r11,2800(r30)
	ctx.current_instruction = 0x880F5604;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880f561c
	if (!ctx.cr6.eq) goto loc_880F561C;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880fda90
	ctx.lr = 0x880F561C;
	sub_880FDA90(ctx, base);
loc_880F561C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88102570) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88102570);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88102570;
	ctx.current_instruction = 0x88102570;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bge cr6,0x881025a0
	if (!ctx.cr6.lt) goto loc_881025A0;
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// lis r10,-30681
	ctx.r10.s64 = -2010710016;
	// lis r9,-30681
	ctx.r9.s64 = -2010710016;
	// addi r8,r11,23720
	ctx.r8.s64 = ctx.r11.s64 + 23720;
	// addi r7,r10,24104
	ctx.r7.s64 = ctx.r10.s64 + 24104;
	// addi r6,r9,23336
	ctx.r6.s64 = ctx.r9.s64 + 23336;
	// stw r8,30208(r3)
	ctx.current_instruction = 0x88102590;
	REX_STORE_U32(ctx.r3.u32 + 30208, ctx.r8.u32);
	// stw r7,30212(r3)
	ctx.current_instruction = 0x88102594;
	REX_STORE_U32(ctx.r3.u32 + 30212, ctx.r7.u32);
	// stw r6,30216(r3)
	ctx.current_instruction = 0x88102598;
	REX_STORE_U32(ctx.r3.u32 + 30216, ctx.r6.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881025A0:
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// bge cr6,0x881025d0
	if (!ctx.cr6.lt) goto loc_881025D0;
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// lis r10,-30681
	ctx.r10.s64 = -2010710016;
	// lis r9,-30681
	ctx.r9.s64 = -2010710016;
	// addi r8,r11,23848
	ctx.r8.s64 = ctx.r11.s64 + 23848;
	// addi r7,r10,24168
	ctx.r7.s64 = ctx.r10.s64 + 24168;
	// addi r6,r9,23464
	ctx.r6.s64 = ctx.r9.s64 + 23464;
	// stw r8,30208(r3)
	ctx.current_instruction = 0x881025C0;
	REX_STORE_U32(ctx.r3.u32 + 30208, ctx.r8.u32);
	// stw r7,30212(r3)
	ctx.current_instruction = 0x881025C4;
	REX_STORE_U32(ctx.r3.u32 + 30212, ctx.r7.u32);
	// stw r6,30216(r3)
	ctx.current_instruction = 0x881025C8;
	REX_STORE_U32(ctx.r3.u32 + 30216, ctx.r6.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881025D0:
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// lis r10,-30681
	ctx.r10.s64 = -2010710016;
	// lis r9,-30681
	ctx.r9.s64 = -2010710016;
	// addi r8,r11,23976
	ctx.r8.s64 = ctx.r11.s64 + 23976;
	// addi r7,r10,24232
	ctx.r7.s64 = ctx.r10.s64 + 24232;
	// addi r6,r9,23592
	ctx.r6.s64 = ctx.r9.s64 + 23592;
	// stw r8,30208(r3)
	ctx.current_instruction = 0x881025E8;
	REX_STORE_U32(ctx.r3.u32 + 30208, ctx.r8.u32);
	// stw r7,30212(r3)
	ctx.current_instruction = 0x881025EC;
	REX_STORE_U32(ctx.r3.u32 + 30212, ctx.r7.u32);
	// stw r6,30216(r3)
	ctx.current_instruction = 0x881025F0;
	REX_STORE_U32(ctx.r3.u32 + 30216, ctx.r6.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88105168) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88105168;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88105168) {
			switch (rex_dispatch_address) {
				case 0x88105170:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88105168;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x88105170: goto loc_88105170;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x88105170;
	__savegprlr_23(ctx, base);
loc_88105170:
	// srawi. r11,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x88105330
	if (!ctx.cr0.gt) goto loc_88105330;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r24,r11,2808
	ctx.r24.s64 = ctx.r11.s64 + 2808;
loc_88105184:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// li r25,0
	ctx.r25.s64 = 0;
loc_88105190:
	// subf r29,r4,r3
	ctx.r29.u64 = ctx.r3.u64 - ctx.r4.u64;
	// lbz r6,0(r3)
	ctx.current_instruction = 0x88105194;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lbzx r9,r3,r4
	ctx.current_instruction = 0x88105198;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subf r10,r4,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subf r8,r4,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r4.u64;
	// lbz r31,0(r29)
	ctx.current_instruction = 0x881051AC;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// subf r27,r4,r8
	ctx.r27.u64 = ctx.r8.u64 - ctx.r4.u64;
	// lbz r10,0(r10)
	ctx.current_instruction = 0x881051B4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r28,r6,r31
	ctx.r28.u64 = ctx.r31.u64 - ctx.r6.u64;
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lbz r8,0(r8)
	ctx.current_instruction = 0x881051C0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r7,2
	ctx.r23.s64 = ctx.r7.s64 + 2;
	// lbz r7,0(r27)
	ctx.current_instruction = 0x881051CC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// rlwinm r27,r23,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r30,r30,r27
	ctx.r30.u64 = ctx.r27.u64 - ctx.r30.u64;
	// srawi r30,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 3;
	// srawi r27,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r30.s32 >> 31;
	// xor r23,r30,r27
	ctx.r23.u64 = ctx.r30.u64 ^ ctx.r27.u64;
	// subf r27,r27,r23
	ctx.r27.u64 = ctx.r23.u64 - ctx.r27.u64;
	// cmpw cr6,r27,r5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88105300
	if (!ctx.cr6.lt) goto loc_88105300;
	// lbzx r23,r11,r4
	ctx.current_instruction = 0x881051F4;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// lbz r11,0(r11)
	ctx.current_instruction = 0x881051FC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r8,r31,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r31.u64;
	// subf r7,r23,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r23.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r9,r8,2
	ctx.r9.s64 = ctx.r8.s64 + 2;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r7,2
	ctx.r23.s64 = ctx.r7.s64 + 2;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// xor r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88105260
	if (!ctx.cr6.lt) goto loc_88105260;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88105260:
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x88105300
	if (!ctx.cr6.lt) goto loc_88105300;
	// srawi r10,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 1;
	// addze. r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x881052b4
	if (!ctx.cr0.gt) goto loc_881052B4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x88105308
	if (!ctx.cr6.lt) goto loc_88105308;
	// subf r11,r11,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x881052e4
	if (!ctx.cr6.gt) goto loc_881052E4;
	// subf r10,r9,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r9.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,0(r29)
	ctx.current_instruction = 0x881052A8;
	REX_STORE_U8(ctx.r29.u32 + 0, ctx.r8.u8);
	// stb r7,0(r3)
	ctx.current_instruction = 0x881052AC;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// b 0x88105308
	goto loc_88105308;
loc_881052B4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x88105300
	if (!ctx.cr6.lt) goto loc_88105300;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88105308
	if (ctx.cr6.lt) goto loc_88105308;
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r27.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881052e4
	if (!ctx.cr6.lt) goto loc_881052E4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_881052E4:
	// subf r10,r11,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r11.u64;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,0(r29)
	ctx.current_instruction = 0x881052F4;
	REX_STORE_U8(ctx.r29.u32 + 0, ctx.r8.u8);
	// stb r7,0(r3)
	ctx.current_instruction = 0x881052F8;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// b 0x88105308
	goto loc_88105308;
loc_88105300:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x88105328
	if (ctx.cr6.eq) goto loc_88105328;
loc_88105308:
	// lwz r11,0(r26)
	ctx.current_instruction = 0x88105308;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r10,r24,16
	ctx.r10.s64 = ctx.r24.s64 + 16;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88105190
	if (ctx.cr6.lt) goto loc_88105190;
	// b 0x8810532c
	goto loc_8810532C;
loc_88105328:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
loc_8810532C:
	// bdnz 0x88105184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88105184;
loc_88105330:
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88109258) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88109258);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88109258;
	ctx.current_instruction = 0x88109258;
	uint32_t ea{};
	// std r30,-16(r1)
	ctx.current_instruction = 0x88109258;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x8810925C;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r8,64
	ctx.r8.s64 = 64;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// addi r10,r3,-2
	ctx.r10.s64 = ctx.r3.s64 + -2;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88109278:
	// lhz r8,-4(r11)
	ctx.current_instruction = 0x88109278;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhzx r7,r9,r11
	ctx.current_instruction = 0x8810927C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r31,r8
	ctx.r31.s64 = ctx.r8.s16;
	// lhz r5,4(r10)
	ctx.current_instruction = 0x88109284;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// xor r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// lhz r30,8(r10)
	ctx.current_instruction = 0x8810928C;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lhz r3,6(r10)
	ctx.current_instruction = 0x88109294;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// srawi r8,r6,15
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 15;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// andc r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 & ~ctx.r5.u64;
	// and r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ctx.r8.u64;
	// extsh r31,r30
	ctx.r31.s64 = ctx.r30.s16;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// sthx r8,r9,r11
	ctx.current_instruction = 0x881092C4;
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u16);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lhz r8,-2(r11)
	ctx.current_instruction = 0x881092CC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// xor r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// srawi r8,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 15;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// andc r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 & ~ctx.r4.u64;
	// and r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	// or r6,r4,r8
	ctx.r6.u64 = ctx.r4.u64 | ctx.r8.u64;
	// sth r6,4(r10)
	ctx.current_instruction = 0x881092F8;
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r6.u16);
	// lhz r8,0(r11)
	ctx.current_instruction = 0x881092FC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// xor r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// srawi r8,r6,15
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 15;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// andc r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r4.u64;
	// and r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 & ctx.r8.u64;
	// or r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 | ctx.r6.u64;
	// sth r4,6(r10)
	ctx.current_instruction = 0x88109324;
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r4.u16);
	// lhz r8,2(r11)
	ctx.current_instruction = 0x88109328;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// xor r6,r5,r8
	ctx.r6.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// srawi r8,r4,15
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 15;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// andc r7,r5,r3
	ctx.r7.u64 = ctx.r5.u64 & ~ctx.r3.u64;
	// and r6,r31,r8
	ctx.r6.u64 = ctx.r31.u64 & ctx.r8.u64;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sthu r4,8(r10)
	ctx.current_instruction = 0x88109358;
	ea = 8 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x88109278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88109278;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88109360;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88109364;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8810B758) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8810B758);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810B758;
	ctx.current_instruction = 0x8810B758;
	// lwz r11,0(r4)
	ctx.current_instruction = 0x8810B758;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// addi r9,r10,5520
	ctx.r9.s64 = ctx.r10.s64 + 5520;
	// rlwinm r8,r11,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r10,r8,r9
	ctx.current_instruction = 0x8810B768;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// stw r6,0(r4)
	ctx.current_instruction = 0x8810B774;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// lwz r11,0(r5)
	ctx.current_instruction = 0x8810B778;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r11,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r10,r10,r9
	ctx.current_instruction = 0x8810B780;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// stw r8,0(r5)
	ctx.current_instruction = 0x8810B78C;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r7,788(r3)
	ctx.current_instruction = 0x8810B790;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 788);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,0(r4)
	ctx.current_instruction = 0x8810B79C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8810b7c4
	if (ctx.cr6.eq) goto loc_8810B7C4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8810b7bc
	if (!ctx.cr6.gt) goto loc_8810B7BC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8810b7c0
	goto loc_8810B7C0;
loc_8810B7BC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8810B7C0:
	// stw r11,0(r4)
	ctx.current_instruction = 0x8810B7C0;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8810B7C4:
	// lwz r11,0(r5)
	ctx.current_instruction = 0x8810B7C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8810b7e8
	if (!ctx.cr6.gt) goto loc_8810B7E8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r5)
	ctx.current_instruction = 0x8810B7E0;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8810B7E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r5)
	ctx.current_instruction = 0x8810B7EC;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8810CEA8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8810CEA8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8810CEA8) {
			switch (rex_dispatch_address) {
				case 0x8810CEB0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810CEA8;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x8810CEB0: goto loc_8810CEB0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8810CEB0;
	__savegprlr_28(ctx, base);
loc_8810CEB0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r6,2128(r3)
	ctx.current_instruction = 0x8810CEB4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2128);
	// lwz r11,2132(r3)
	ctx.current_instruction = 0x8810CEB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2132);
	// lwz r29,84(r1)
	ctx.current_instruction = 0x8810CEBC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lwz r28,92(r1)
	ctx.current_instruction = 0x8810CEC4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r11,-256
	ctx.r6.s64 = ctx.r11.s64 + -256;
	// beq cr6,0x8810cf18
	if (ctx.cr6.eq) goto loc_8810CF18;
	// mullw r31,r11,r4
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// mullw r30,r11,r5
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r4,r6,r4
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// addi r31,r31,255
	ctx.r31.s64 = ctx.r31.s64 + 255;
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// addi r5,r4,255
	ctx.r5.s64 = ctx.r4.s64 + 255;
	// addi r6,r30,255
	ctx.r6.s64 = ctx.r30.s64 + 255;
	// srawi r4,r31,9
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1FF) != 0);
	ctx.r4.s64 = ctx.r31.s32 >> 9;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// srawi r6,r6,9
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1FF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 9;
	// srawi r5,r5,9
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 9;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// stw r4,0(r9)
	ctx.current_instruction = 0x8810CF04;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8810cf4c
	goto loc_8810CF4C;
loc_8810CF18:
	// mullw r30,r11,r4
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// mullw r31,r11,r5
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r4,r6,r4
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// addi r5,r4,128
	ctx.r5.s64 = ctx.r4.s64 + 128;
	// addi r6,r31,128
	ctx.r6.s64 = ctx.r31.s64 + 128;
	// srawi r4,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r30.s32 >> 8;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// stw r4,0(r9)
	ctx.current_instruction = 0x8810CF40;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// srawi r4,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 8;
loc_8810CF4C:
	// stw r6,0(r10)
	ctx.current_instruction = 0x8810CF4C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r5,0(r29)
	ctx.current_instruction = 0x8810CF50;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// stw r4,0(r28)
	ctx.current_instruction = 0x8810CF54;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r4.u32);
	// lwz r11,27988(r3)
	ctx.current_instruction = 0x8810CF58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8810d028
	if (!ctx.cr6.eq) goto loc_8810D028;
	// lwz r6,720(r3)
	ctx.current_instruction = 0x8810CF64;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// rlwinm r4,r8,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r3,724(r3)
	ctx.current_instruction = 0x8810CF6C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r8,0(r9)
	ctx.current_instruction = 0x8810CF74;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r5,r6,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r7,0(r10)
	ctx.current_instruction = 0x8810CF7C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r3,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// cmpwi cr6,r8,-60
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -60, ctx.xer);
	// bge cr6,0x8810cfa4
	if (!ctx.cr6.lt) goto loc_8810CFA4;
	// subfic r8,r11,-60
	ctx.xer.ca = ctx.r11.u32 <= 4294967236;
	ctx.r8.u64 = static_cast<uint64_t>(-60) - ctx.r11.u64;
	// b 0x8810cfb0
	goto loc_8810CFB0;
loc_8810CFA4:
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8810cfb4
	if (!ctx.cr6.gt) goto loc_8810CFB4;
	// subf r8,r11,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r11.u64;
loc_8810CFB0:
	// stw r8,0(r9)
	ctx.current_instruction = 0x8810CFB0;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_8810CFB4:
	// cmpwi cr6,r7,-60
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -60, ctx.xer);
	// bge cr6,0x8810cfc4
	if (!ctx.cr6.lt) goto loc_8810CFC4;
	// subfic r9,r4,-60
	ctx.xer.ca = ctx.r4.u32 <= 4294967236;
	ctx.r9.u64 = static_cast<uint64_t>(-60) - ctx.r4.u64;
	// b 0x8810cfd0
	goto loc_8810CFD0;
loc_8810CFC4:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8810cfd4
	if (!ctx.cr6.gt) goto loc_8810CFD4;
	// subf r9,r4,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r4.u64;
loc_8810CFD0:
	// stw r9,0(r10)
	ctx.current_instruction = 0x8810CFD0;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8810CFD4:
	// lwz r10,0(r29)
	ctx.current_instruction = 0x8810CFD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r28)
	ctx.current_instruction = 0x8810CFD8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmpwi cr6,r10,-60
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -60, ctx.xer);
	// bge cr6,0x8810cff4
	if (!ctx.cr6.lt) goto loc_8810CFF4;
	// subfic r11,r11,-60
	ctx.xer.ca = ctx.r11.u32 <= 4294967236;
	ctx.r11.u64 = static_cast<uint64_t>(-60) - ctx.r11.u64;
	// b 0x8810d000
	goto loc_8810D000;
loc_8810CFF4:
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8810d004
	if (!ctx.cr6.gt) goto loc_8810D004;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
loc_8810D000:
	// stw r11,0(r29)
	ctx.current_instruction = 0x8810D000;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8810D004:
	// cmpwi cr6,r9,-60
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -60, ctx.xer);
	// bge cr6,0x8810d018
	if (!ctx.cr6.lt) goto loc_8810D018;
	// subfic r11,r4,-60
	ctx.xer.ca = ctx.r4.u32 <= 4294967236;
	ctx.r11.u64 = static_cast<uint64_t>(-60) - ctx.r4.u64;
	// stw r11,0(r28)
	ctx.current_instruction = 0x8810D010;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_8810D018:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8810d028
	if (!ctx.cr6.gt) goto loc_8810D028;
	// subf r11,r4,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r4.u64;
	// stw r11,0(r28)
	ctx.current_instruction = 0x8810D024;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8810D028:
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810F120) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8810F120);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810F120;
	ctx.current_instruction = 0x8810F120;
	// srawi r10,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 31;
	// lwz r9,16(r6)
	ctx.current_instruction = 0x8810F124;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// xor r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// bgt cr6,0x8810f190
	if (ctx.cr6.gt) goto loc_8810F190;
	// lwz r9,0(r6)
	ctx.current_instruction = 0x8810F13C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r5,r9
	ctx.current_instruction = 0x8810F144;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8810f1d4
	if (!ctx.cr6.gt) goto loc_8810F1D4;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,12(r6)
	ctx.current_instruction = 0x8810F158;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// bgt cr6,0x8810f17c
	if (ctx.cr6.gt) goto loc_8810F17C;
	// lwz r8,24(r6)
	ctx.current_instruction = 0x8810F160;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,4(r7)
	ctx.current_instruction = 0x8810F170;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8810f1d4
	goto loc_8810F1D4;
loc_8810F17C:
	// lwz r9,24(r6)
	ctx.current_instruction = 0x8810F17C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,4(r6)
	ctx.current_instruction = 0x8810F188;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x8810f214
	goto loc_8810F214;
loc_8810F190:
	// lwz r11,20(r6)
	ctx.current_instruction = 0x8810F190;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8810f200
	if (ctx.cr6.gt) goto loc_8810F200;
	// lwz r11,4(r6)
	ctx.current_instruction = 0x8810F19C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.current_instruction = 0x8810F1A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x8810f200
	if (ctx.cr6.gt) goto loc_8810F200;
	// lwz r7,24(r6)
	ctx.current_instruction = 0x8810F1B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// subf r8,r11,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lwz r9,12(r6)
	ctx.current_instruction = 0x8810F1BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r5)
	ctx.current_instruction = 0x8810F1CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_8810F1D4:
	// lwz r8,8(r6)
	ctx.current_instruction = 0x8810F1D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,12(r6)
	ctx.current_instruction = 0x8810F1DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// lwzx r8,r7,r8
	ctx.current_instruction = 0x8810F1E0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,-4(r5)
	ctx.current_instruction = 0x8810F1F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + -4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8810F200:
	// lwz r11,24(r6)
	ctx.current_instruction = 0x8810F200;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r9,12(r6)
	ctx.current_instruction = 0x8810F204;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r9)
	ctx.current_instruction = 0x8810F210;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_8810F214:
	// lwz r9,0(r7)
	ctx.current_instruction = 0x8810F214;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8810f228
	if (!ctx.cr6.lt) goto loc_8810F228;
	// stw r4,0(r7)
	ctx.current_instruction = 0x8810F224;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
loc_8810F228:
	// lwz r9,0(r8)
	ctx.current_instruction = 0x8810F228;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8810f238
	if (!ctx.cr6.lt) goto loc_8810F238;
	// stw r10,0(r8)
	ctx.current_instruction = 0x8810F234;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_8810F238:
	// addi r3,r11,15
	ctx.r3.s64 = ctx.r11.s64 + 15;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88112008) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88112008;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88112008) {
			switch (rex_dispatch_address) {
				case 0x88112010:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88112008;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88112010: goto loc_88112010;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x88112010;
	__savegprlr_19(ctx, base);
loc_88112010:
	// lwz r11,116(r3)
	ctx.current_instruction = 0x88112010;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// lwz r29,96(r3)
	ctx.current_instruction = 0x88112018;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r6,88(r3)
	ctx.current_instruction = 0x8811201C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r28,92(r3)
	ctx.current_instruction = 0x88112020;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// twllei r29,0
	if (ctx.r29.s32 == 0 || ctx.r29.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r31,120(r3)
	ctx.current_instruction = 0x8811202C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88112030;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,8(r11)
	ctx.current_instruction = 0x88112034;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r30,132(r3)
	ctx.current_instruction = 0x8811203C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r8,r10,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r25,r7,r29
	ctx.r25.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// mullw r23,r11,r29
	ctx.r23.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// divw r22,r8,r29
	ctx.r22.u64 = uint32_t((ctx.r29.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r29.s32 == -1)) ? ctx.r8.s32 / ctx.r29.s32 : 0);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// srawi r26,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r29.s32 >> 1;
	// rotlwi r8,r25,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// rotlwi r7,r23,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r23.u32, 1);
	// addze r24,r26
	temp.s64 = ctx.r26.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r26.u32;
	ctx.r24.s64 = temp.s64;
	// addi r21,r11,-1
	ctx.r21.s64 = ctx.r11.s64 + -1;
	// srawi r26,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r6.s32 >> 1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r6,r22,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0x1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// andc r29,r29,r21
	ctx.r29.u64 = ctx.r29.u64 & ~ctx.r21.u64;
	// addze r26,r26
	temp.s64 = ctx.r26.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r26.u32;
	ctx.r26.s64 = temp.s64;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// andc r21,r10,r8
	ctx.r21.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// addi r20,r6,-1
	ctx.r20.s64 = ctx.r6.s64 + -1;
	// srawi r19,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r19.s64 = ctx.r28.s32 >> 1;
	// andc r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// mullw r8,r9,r4
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// twlgei r29,-1
	if (ctx.r29.s32 == -1 || ctx.r29.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r28,r25,r10
	ctx.r28.u64 = uint32_t((ctx.r10.s32 && !(ctx.r25.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r25.s32 / ctx.r10.s32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r21,-1
	if (ctx.r21.s32 == -1 || ctx.r21.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r23,r23,r10
	ctx.r23.u64 = uint32_t((ctx.r10.s32 && !(ctx.r23.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r23.s32 / ctx.r10.s32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addze r25,r19
	temp.s64 = ctx.r19.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r19.u32;
	ctx.r25.s64 = temp.s64;
	// and r29,r20,r22
	ctx.r29.u64 = ctx.r20.u64 & ctx.r22.u64;
	// add r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 + ctx.r30.u64;
	// bge cr6,0x88112164
	if (!ctx.cr6.lt) goto loc_88112164;
	// subf r30,r4,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
loc_881120DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x88112128
	if (!ctx.cr6.gt) goto loc_88112128;
	// addi r31,r6,1
	ctx.r31.s64 = ctx.r6.s64 + 1;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_881120F0:
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// clrlwi r22,r11,25
	ctx.r22.u64 = ctx.r11.u32 & 0x7F;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subfic r7,r22,128
	ctx.xer.ca = ctx.r22.u32 <= 128;
	ctx.r7.u64 = static_cast<uint64_t>(128) - ctx.r22.u64;
	// lbzx r21,r9,r6
	ctx.current_instruction = 0x88112100;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r9,r31,r9
	ctx.current_instruction = 0x88112104;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mullw r7,r21,r7
	ctx.r7.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r9,r22
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r22.s32);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r9,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 7;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stb r7,1(r8)
	ctx.current_instruction = 0x8811211C;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r7.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x881120f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881120F0;
loc_88112128:
	// lwz r9,96(r3)
	ctx.current_instruction = 0x88112128;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88112158
	if (!ctx.cr6.lt) goto loc_88112158;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_88112138:
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbzx r9,r9,r6
	ctx.current_instruction = 0x88112144;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stbu r9,1(r8)
	ctx.current_instruction = 0x88112148;
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r8.u32 = ea;
	// lwz r9,96(r3)
	ctx.current_instruction = 0x8811214C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88112138
	if (ctx.cr6.lt) goto loc_88112138;
loc_88112158:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bne 0x881120dc
	if (!ctx.cr0.eq) goto loc_881120DC;
loc_88112164:
	// lwz r11,108(r3)
	ctx.current_instruction = 0x88112164;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mullw r30,r10,r27
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// lwz r6,120(r3)
	ctx.current_instruction = 0x8811216C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r7,132(r3)
	ctx.current_instruction = 0x88112170;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// mullw r8,r4,r11
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// mullw r31,r5,r10
	ctx.r31.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// mullw r10,r11,r24
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// srawi r31,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 1;
	// mullw r8,r11,r26
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addze r9,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r9.s64 = temp.s64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88112254
	if (!ctx.cr6.lt) goto loc_88112254;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_881121BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x8811220c
	if (!ctx.cr6.gt) goto loc_8811220C;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
loc_881121D0:
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// clrlwi r7,r11,25
	ctx.r7.u64 = ctx.r11.u32 & 0x7F;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// subfic r28,r7,128
	ctx.xer.ca = ctx.r7.u32 <= 128;
	ctx.r28.u64 = static_cast<uint64_t>(128) - ctx.r7.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbzx r22,r6,r9
	ctx.current_instruction = 0x881121E4;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// lbzx r9,r9,r8
	ctx.current_instruction = 0x881121E8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// mullw r7,r22,r7
	ctx.r7.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r9,r28
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r9,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 7;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stb r7,1(r10)
	ctx.current_instruction = 0x88112200;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x881121d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881121D0;
loc_8811220C:
	// cmpw cr6,r23,r24
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x88112234
	if (!ctx.cr6.lt) goto loc_88112234;
	// subf r9,r23,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r23.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8811221C:
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// lbzx r6,r7,r8
	ctx.current_instruction = 0x88112228;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// stbu r6,1(r10)
	ctx.current_instruction = 0x8811222C;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8811221c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8811221C;
loc_88112234:
	// lwz r11,108(r3)
	ctx.current_instruction = 0x88112234;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 + ctx.r26.u64;
	// mullw r9,r5,r11
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x881121bc
	if (ctx.cr6.lt) goto loc_881121BC;
loc_88112254:
	// lwz r11,108(r3)
	ctx.current_instruction = 0x88112254;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r8,96(r3)
	ctx.current_instruction = 0x88112258;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r6,120(r3)
	ctx.current_instruction = 0x88112260;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r7,132(r3)
	ctx.current_instruction = 0x88112264;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// mullw r10,r11,r25
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r4,r8,r27
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mullw r8,r10,r26
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// mullw r10,r10,r24
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88112334
	if (!ctx.cr6.lt) goto loc_88112334;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_881122A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x881122f0
	if (!ctx.cr6.gt) goto loc_881122F0;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
loc_881122B8:
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// clrlwi r7,r11,25
	ctx.r7.u64 = ctx.r11.u32 & 0x7F;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subfic r4,r7,128
	ctx.xer.ca = ctx.r7.u32 <= 128;
	ctx.r4.u64 = static_cast<uint64_t>(128) - ctx.r7.u64;
	// lbzx r30,r6,r9
	ctx.current_instruction = 0x881122C8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// lbzx r9,r9,r8
	ctx.current_instruction = 0x881122CC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// mullw r7,r30,r7
	ctx.r7.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r4,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 7;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// stb r9,1(r10)
	ctx.current_instruction = 0x881122E4;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x881122b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881122B8;
loc_881122F0:
	// cmpw cr6,r23,r24
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x88112314
	if (!ctx.cr6.lt) goto loc_88112314;
	// subf r9,r23,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r23.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88112300:
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbzx r7,r9,r8
	ctx.current_instruction = 0x88112308;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stbu r7,1(r10)
	ctx.current_instruction = 0x8811230C;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x88112300
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88112300;
loc_88112314:
	// lwz r11,108(r3)
	ctx.current_instruction = 0x88112314;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 + ctx.r26.u64;
	// mullw r9,r5,r11
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x881122a4
	if (ctx.cr6.lt) goto loc_881122A4;
loc_88112334:
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811E0A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811E0A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811E0A8) {
			switch (rex_dispatch_address) {
				case 0x8811E0E4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811E0A8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811E0E4: goto loc_8811E0E4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8811E0AC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8811E0B0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8811E0B4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8811E0B8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,28(r3)
	ctx.current_instruction = 0x8811E0C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// sth r11,0(r6)
	ctx.current_instruction = 0x8811E0C8;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	ctx.current_instruction = 0x8811E0D0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r9,4(r10)
	ctx.current_instruction = 0x8811E0D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,128(r9)
	ctx.current_instruction = 0x8811E0DC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 128);
	// bl 0x880cb730
	ctx.lr = 0x8811E0E4;
	sub_880CB730(ctx, base);
loc_8811E0E4:
	// lis r8,-32688
	ctx.r8.s64 = -2142240768;
	// ori r7,r8,22
	ctx.r7.u64 = ctx.r8.u64 | 22;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8811e0fc
	if (!ctx.cr6.eq) goto loc_8811E0FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8811e118
	goto loc_8811E118;
loc_8811E0FC:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811E0FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r10,r30
	ctx.r10.s64 = ctx.r30.s16;
	// mulli r10,r10,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// lwz r11,80(r11)
	ctx.current_instruction = 0x8811E108;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r8,16(r9)
	ctx.current_instruction = 0x8811E110;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 16);
	// sth r8,0(r31)
	ctx.current_instruction = 0x8811E114;
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
loc_8811E118:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8811E11C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8811E124;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8811E128;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8811EAF8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811EAF8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811EAF8) {
			switch (rex_dispatch_address) {
				case 0x8811EB00:
				case 0x8811EB4C:
				case 0x8811EB68:
				case 0x8811EC1C:
				case 0x8811EC30:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811EAF8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811EB00: goto loc_8811EB00;
		case 0x8811EB4C: goto loc_8811EB4C;
		case 0x8811EB68: goto loc_8811EB68;
		case 0x8811EC1C: goto loc_8811EC1C;
		case 0x8811EC30: goto loc_8811EC30;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8811EB00;
	__savegprlr_26(ctx, base);
loc_8811EB00:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8811EB00;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r31,84(r1)
	ctx.current_instruction = 0x8811EB10;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,88(r1)
	ctx.current_instruction = 0x8811EB18;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stb r31,80(r1)
	ctx.current_instruction = 0x8811EB1C;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bne cr6,0x8811eb34
	if (!ctx.cr6.eq) goto loc_8811EB34;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8811EB34:
	// lwz r27,28(r3)
	ctx.current_instruction = 0x8811EB34;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,148(r27)
	ctx.current_instruction = 0x8811EB44;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 148);
	// bl 0x880cb758
	ctx.lr = 0x8811EB4C;
	sub_880CB758(ctx, base);
loc_8811EB4C:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r28,r11,22
	ctx.r28.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8811eb74
	if (!ctx.cr6.eq) goto loc_8811EB74;
	// lwz r4,88(r1)
	ctx.current_instruction = 0x8811EB5C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,148(r27)
	ctx.current_instruction = 0x8811EB60;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 148);
	// bl 0x880cb828
	ctx.lr = 0x8811EB68;
	sub_880CB828(ctx, base);
loc_8811EB68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8811EB74:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8811EB78:
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8811EB78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r10)
	ctx.current_instruction = 0x8811EB7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811ec08
	if (ctx.cr6.eq) goto loc_8811EC08;
	// rlwinm r11,r29,27,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// addi r8,r11,21
	ctx.r8.s64 = ctx.r11.s64 + 21;
	// slw r7,r30,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.current_instruction = 0x8811EB9C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8811ec08
	if (!ctx.cr6.eq) goto loc_8811EC08;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8811ebc4
	if (ctx.cr6.eq) goto loc_8811EBC4;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// beq cr6,0x8811ebc4
	if (ctx.cr6.eq) goto loc_8811EBC4;
	// stw r30,4(r10)
	ctx.current_instruction = 0x8811EBBC;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// b 0x8811ebc8
	goto loc_8811EBC8;
loc_8811EBC4:
	// stw r31,4(r10)
	ctx.current_instruction = 0x8811EBC4;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
loc_8811EBC8:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8811EBC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,8(r11)
	ctx.current_instruction = 0x8811EBCC;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8811EBD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r10)
	ctx.current_instruction = 0x8811EBD4;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x8811EBD8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,20(r9)
	ctx.current_instruction = 0x8811EBDC;
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r31.u32);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x8811EBE0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r8)
	ctx.current_instruction = 0x8811EBE4;
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r31.u32);
	// lwz r7,84(r1)
	ctx.current_instruction = 0x8811EBE8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,32(r7)
	ctx.current_instruction = 0x8811EBEC;
	REX_STORE_U8(ctx.r7.u32 + 32, ctx.r31.u8);
	// lwz r6,84(r1)
	ctx.current_instruction = 0x8811EBF0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,36(r6)
	ctx.current_instruction = 0x8811EBF4;
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r31.u32);
	// lwz r5,84(r1)
	ctx.current_instruction = 0x8811EBF8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,40(r5)
	ctx.current_instruction = 0x8811EBFC;
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r31.u32);
	// lwz r4,84(r1)
	ctx.current_instruction = 0x8811EC00;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,76(r4)
	ctx.current_instruction = 0x8811EC04;
	REX_STORE_U32(ctx.r4.u32 + 76, ctx.r30.u32);
loc_8811EC08:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r27)
	ctx.current_instruction = 0x8811EC0C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 148);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.current_instruction = 0x8811EC14;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x880cb7c0
	ctx.lr = 0x8811EC1C;
	sub_880CB7C0(ctx, base);
loc_8811EC1C:
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8811eb78
	if (!ctx.cr6.eq) goto loc_8811EB78;
	// lwz r4,88(r1)
	ctx.current_instruction = 0x8811EC24;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,148(r27)
	ctx.current_instruction = 0x8811EC28;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 148);
	// bl 0x880cb828
	ctx.lr = 0x8811EC30;
	sub_880CB828(ctx, base);
loc_8811EC30:
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8811ec3c
	if (!ctx.cr6.eq) goto loc_8811EC3C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8811EC3C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881225D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881225D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881225D0) {
			switch (rex_dispatch_address) {
				case 0x881225D8:
				case 0x8812263C:
				case 0x881226A4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881225D0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881225D8: goto loc_881225D8;
		case 0x8812263C: goto loc_8812263C;
		case 0x881226A4: goto loc_881226A4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881225D8;
	__savegprlr_29(ctx, base);
loc_881225D8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881225D8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x881225DC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r3,80(r1)
	ctx.current_instruction = 0x881225E8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,148(r31)
	ctx.current_instruction = 0x881225EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88122600
	if (!ctx.cr6.eq) goto loc_88122600;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88122600:
	// stw r11,80(r1)
	ctx.current_instruction = 0x88122600;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881226bc
	if (ctx.cr6.eq) goto loc_881226BC;
loc_8812260C:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8812260C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	ctx.current_instruction = 0x88122610;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x88122624
	if (ctx.cr6.eq) goto loc_88122624;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x881226ac
	if (ctx.cr6.eq) goto loc_881226AC;
loc_88122624:
	// lwz r10,76(r31)
	ctx.current_instruction = 0x88122624;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x88122628;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,8(r10)
	ctx.current_instruction = 0x88122630;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8812263C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8812263C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881226bc
	if (ctx.cr6.lt) goto loc_881226BC;
	// lwz r10,148(r31)
	ctx.current_instruction = 0x88122644;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88122648;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88122660
	if (!ctx.cr6.eq) goto loc_88122660;
	// lwz r11,8(r11)
	ctx.current_instruction = 0x88122654;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,148(r31)
	ctx.current_instruction = 0x88122658;
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812265C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88122660:
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88122660;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8812267c
	if (ctx.cr6.eq) goto loc_8812267C;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8812266C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,8(r10)
	ctx.current_instruction = 0x88122674;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88122678;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8812267C:
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8812267C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88122694
	if (ctx.cr6.eq) goto loc_88122694;
	// lwz r9,12(r11)
	ctx.current_instruction = 0x88122688;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,12(r10)
	ctx.current_instruction = 0x88122690;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_88122694:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r31)
	ctx.current_instruction = 0x88122698;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x880cb318
	ctx.lr = 0x881226A4;
	sub_880CB318(ctx, base);
loc_881226A4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881226bc
	if (ctx.cr6.lt) goto loc_881226BC;
loc_881226AC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,80(r1)
	ctx.current_instruction = 0x881226B0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8812260c
	if (!ctx.cr6.eq) goto loc_8812260C;
loc_881226BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88123A90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88123A90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88123A90) {
			switch (rex_dispatch_address) {
				case 0x88123A98:
				case 0x88123B00:
				case 0x88123B2C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88123A90;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88123A98: goto loc_88123A98;
		case 0x88123B00: goto loc_88123B00;
		case 0x88123B2C: goto loc_88123B2C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88123A98;
	__savegprlr_29(ctx, base);
loc_88123A98:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88123A98;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x88123A9C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,80(r1)
	ctx.current_instruction = 0x88123AA4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88123AAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88123ac4
	if (!ctx.cr6.eq) goto loc_88123AC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88123AC4:
	// stw r11,80(r1)
	ctx.current_instruction = 0x88123AC4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,36(r11)
	ctx.current_instruction = 0x88123AC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88123b1c
	if (ctx.cr6.eq) goto loc_88123B1C;
loc_88123AD4:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88123AD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r10,36(r11)
	ctx.current_instruction = 0x88123AE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,0(r30)
	ctx.current_instruction = 0x88123AE4;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r29,40(r10)
	ctx.current_instruction = 0x88123AE8;
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r29.u32);
	// lwz r3,48(r31)
	ctx.current_instruction = 0x88123AEC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88123AF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,12(r31)
	ctx.current_instruction = 0x88123AF8;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bl 0x880cb318
	ctx.lr = 0x88123B00;
	sub_880CB318(ctx, base);
loc_88123B00:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88123b48
	if (ctx.cr6.lt) goto loc_88123B48;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88123B08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,80(r1)
	ctx.current_instruction = 0x88123B0C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,36(r11)
	ctx.current_instruction = 0x88123B10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88123ad4
	if (!ctx.cr6.eq) goto loc_88123AD4;
loc_88123B1C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,48(r31)
	ctx.current_instruction = 0x88123B20;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x880cb318
	ctx.lr = 0x88123B2C;
	sub_880CB318(ctx, base);
loc_88123B2C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88123b48
	if (ctx.cr6.lt) goto loc_88123B48;
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88123B34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r29,0(r30)
	ctx.current_instruction = 0x88123B38;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r29,8(r31)
	ctx.current_instruction = 0x88123B40;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r11,12(r31)
	ctx.current_instruction = 0x88123B44;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_88123B48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88124F50) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88124F50;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88124F50) {
			switch (rex_dispatch_address) {
				case 0x88124F58:
				case 0x88124FC4:
				case 0x88124FDC:
				case 0x88125008:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88124F50;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88124F58: goto loc_88124F58;
		case 0x88124FC4: goto loc_88124FC4;
		case 0x88124FDC: goto loc_88124FDC;
		case 0x88125008: goto loc_88125008;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88124F58;
	__savegprlr_29(ctx, base);
loc_88124F58:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88124F58;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x88124F5C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,80(r1)
	ctx.current_instruction = 0x88124F64;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88124F6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88124f84
	if (!ctx.cr6.eq) goto loc_88124F84;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88124F84:
	// stw r11,80(r1)
	ctx.current_instruction = 0x88124F84;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,36(r11)
	ctx.current_instruction = 0x88124F88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88124ff8
	if (ctx.cr6.eq) goto loc_88124FF8;
loc_88124F94:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88124F94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r10,36(r11)
	ctx.current_instruction = 0x88124F9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,0(r30)
	ctx.current_instruction = 0x88124FA0;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r29,40(r10)
	ctx.current_instruction = 0x88124FA4;
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r29.u32);
	// lwz r3,48(r31)
	ctx.current_instruction = 0x88124FA8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88124FAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,12(r31)
	ctx.current_instruction = 0x88124FB4;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x88124FB8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r8,44
	ctx.r5.s64 = ctx.r8.s64 + 44;
	// bl 0x880cb318
	ctx.lr = 0x88124FC4;
	sub_880CB318(ctx, base);
loc_88124FC4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88125024
	if (ctx.cr6.lt) goto loc_88125024;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.current_instruction = 0x88124FD0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x880cb318
	ctx.lr = 0x88124FDC;
	sub_880CB318(ctx, base);
loc_88124FDC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88125024
	if (ctx.cr6.lt) goto loc_88125024;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88124FE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,80(r1)
	ctx.current_instruction = 0x88124FE8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,36(r11)
	ctx.current_instruction = 0x88124FEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88124f94
	if (!ctx.cr6.eq) goto loc_88124F94;
loc_88124FF8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,48(r31)
	ctx.current_instruction = 0x88124FFC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x880cb318
	ctx.lr = 0x88125008;
	sub_880CB318(ctx, base);
loc_88125008:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88125024
	if (ctx.cr6.lt) goto loc_88125024;
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88125010;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r29,0(r30)
	ctx.current_instruction = 0x88125014;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r29,8(r31)
	ctx.current_instruction = 0x8812501C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r11,12(r31)
	ctx.current_instruction = 0x88125020;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_88125024:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88127880) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88127880;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88127880) {
			switch (rex_dispatch_address) {
				case 0x88127888:
				case 0x88127B90:
				case 0x88127BA4:
				case 0x88127BC0:
				case 0x88127BE0:
				case 0x88127C04:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88127880;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88127888: goto loc_88127888;
		case 0x88127B90: goto loc_88127B90;
		case 0x88127BA4: goto loc_88127BA4;
		case 0x88127BC0: goto loc_88127BC0;
		case 0x88127BE0: goto loc_88127BE0;
		case 0x88127C04: goto loc_88127C04;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88127888;
	__savegprlr_28(ctx, base);
loc_88127888:
	// stfd f30,-56(r1)
	ctx.current_instruction = 0x88127888;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	ctx.current_instruction = 0x8812788C;
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88127890;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.current_instruction = 0x88127894;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88127928
	if (!ctx.cr6.eq) goto loc_88127928;
	// lhz r11,580(r3)
	ctx.current_instruction = 0x881278A8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88127c04
	if (!ctx.cr6.gt) goto loc_88127C04;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_881278C0:
	// lwz r8,584(r31)
	ctx.current_instruction = 0x881278C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lwz r11,320(r31)
	ctx.current_instruction = 0x881278C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lhzx r5,r9,r8
	ctx.current_instruction = 0x881278D0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r8,r4,1776
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lhz r3,114(r11)
	ctx.current_instruction = 0x881278E4;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 114);
	// lwz r8,424(r11)
	ctx.current_instruction = 0x881278E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,8(r8)
	ctx.current_instruction = 0x881278F4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lhzx r4,r6,r5
	ctx.current_instruction = 0x881278F8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// sth r4,124(r11)
	ctx.current_instruction = 0x881278FC;
	REX_STORE_U16(ctx.r11.u32 + 124, ctx.r4.u16);
	// sth r4,118(r11)
	ctx.current_instruction = 0x88127900;
	REX_STORE_U16(ctx.r11.u32 + 118, ctx.r4.u16);
	// lhz r3,580(r31)
	ctx.current_instruction = 0x88127904;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881278c0
	if (ctx.cr6.lt) goto loc_881278C0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.current_instruction = 0x8812791C;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.current_instruction = 0x88127920;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88127928:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88127c04
	if (!ctx.cr6.eq) goto loc_88127C04;
	// lhz r11,580(r31)
	ctx.current_instruction = 0x88127930;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88127bfc
	if (!ctx.cr6.gt) goto loc_88127BFC;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f30,6728(r11)
	ctx.current_instruction = 0x88127950;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6728);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,12180(r9)
	ctx.current_instruction = 0x88127954;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12180);
	ctx.f31.f64 = double(temp.f32);
loc_88127958:
	// lwz r9,584(r31)
	ctx.current_instruction = 0x88127958;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r11,320(r31)
	ctx.current_instruction = 0x8812795C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lhzx r8,r10,r9
	ctx.current_instruction = 0x88127960;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,424(r30)
	ctx.current_instruction = 0x88127970;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 424);
	// lhz r5,114(r30)
	ctx.current_instruction = 0x88127974;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 114);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lwz r3,8(r6)
	ctx.current_instruction = 0x8812797C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r11,r3
	ctx.current_instruction = 0x88127984;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// sth r8,124(r30)
	ctx.current_instruction = 0x88127988;
	REX_STORE_U16(ctx.r30.u32 + 124, ctx.r8.u16);
	// lwz r10,8(r6)
	ctx.current_instruction = 0x8812798C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r9,-2(r10)
	ctx.current_instruction = 0x88127994;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// sth r9,122(r30)
	ctx.current_instruction = 0x88127998;
	REX_STORE_U16(ctx.r30.u32 + 122, ctx.r9.u16);
	// lwz r10,8(r6)
	ctx.current_instruction = 0x8812799C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,2(r7)
	ctx.current_instruction = 0x881279A4;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// sth r5,126(r30)
	ctx.current_instruction = 0x881279A8;
	REX_STORE_U16(ctx.r30.u32 + 126, ctx.r5.u16);
	// lhz r4,0(r6)
	ctx.current_instruction = 0x881279AC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x88127a78
	if (!ctx.cr6.gt) goto loc_88127A78;
	// lwz r7,256(r31)
	ctx.current_instruction = 0x881279BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// li r10,0
	ctx.r10.s64 = 0;
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r6,r7,r11
	ctx.r6.u64 = uint32_t((ctx.r11.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r7.s32 / ctx.r11.s32 : 0);
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x88127a14
	if (!ctx.cr6.gt) goto loc_88127A14;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r9,r9,r11
	ctx.r9.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// andc r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_88127A04:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x88127a04
	if (ctx.cr6.gt) goto loc_88127A04;
loc_88127A14:
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lwz r10,244(r31)
	ctx.current_instruction = 0x88127A18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88127c18
	if (!ctx.cr6.lt) goto loc_88127C18;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88127a48
	if (!ctx.cr6.gt) goto loc_88127A48;
	// li r10,0
	ctx.r10.s64 = 0;
loc_88127A34:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88127a34
	if (ctx.cr6.lt) goto loc_88127A34;
loc_88127A48:
	// lwz r9,340(r31)
	ctx.current_instruction = 0x88127A48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,344(r31)
	ctx.current_instruction = 0x88127A50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// mulli r11,r11,116
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(116));
	// lwz r5,352(r31)
	ctx.current_instruction = 0x88127A58;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// lwzx r4,r9,r6
	ctx.current_instruction = 0x88127A5C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,304(r31)
	ctx.current_instruction = 0x88127A64;
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r4.u32);
	// stw r3,308(r31)
	ctx.current_instruction = 0x88127A68;
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r3.u32);
	// lwzx r11,r5,r6
	ctx.current_instruction = 0x88127A6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// stw r11,312(r31)
	ctx.current_instruction = 0x88127A70;
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// b 0x88127a9c
	goto loc_88127A9C;
loc_88127A78:
	// lwz r11,340(r31)
	ctx.current_instruction = 0x88127A78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,344(r31)
	ctx.current_instruction = 0x88127A80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r9,352(r31)
	ctx.current_instruction = 0x88127A84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// lwz r6,0(r11)
	ctx.current_instruction = 0x88127A88;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,308(r31)
	ctx.current_instruction = 0x88127A8C;
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// stw r6,304(r31)
	ctx.current_instruction = 0x88127A90;
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r6.u32);
	// lwz r5,0(r9)
	ctx.current_instruction = 0x88127A94;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r5,312(r31)
	ctx.current_instruction = 0x88127A98;
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r5.u32);
loc_88127A9C:
	// lwz r10,272(r31)
	ctx.current_instruction = 0x88127A9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// lwz r6,256(r31)
	ctx.current_instruction = 0x88127AA4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r9,276(r31)
	ctx.current_instruction = 0x88127AAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// divw r3,r5,r6
	ctx.r3.u64 = uint32_t((ctx.r6.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r5.s32 / ctx.r6.s32 : 0);
	// mullw r4,r9,r11
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r3,264(r31)
	ctx.current_instruction = 0x88127AB8;
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// divw r10,r4,r6
	ctx.r10.u64 = uint32_t((ctx.r6.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r4.s32 / ctx.r6.s32 : 0);
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// stw r10,268(r31)
	ctx.current_instruction = 0x88127AC4;
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sth r8,118(r30)
	ctx.current_instruction = 0x88127AD0;
	REX_STORE_U16(ctx.r30.u32 + 118, ctx.r8.u16);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// lwz r8,268(r31)
	ctx.current_instruction = 0x88127AD8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
	// andc r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// andc r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r3,-1
	if (ctx.r3.s32 == -1 || ctx.r3.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r10,264(r31)
	ctx.current_instruction = 0x88127AF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// stw r9,36(r30)
	ctx.current_instruction = 0x88127AFC;
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r9.u32);
	// lwz r8,40(r31)
	ctx.current_instruction = 0x88127B00;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x88127b84
	if (!ctx.cr6.eq) goto loc_88127B84;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,80(r31)
	ctx.current_instruction = 0x88127B10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lfs f0,396(r31)
	ctx.current_instruction = 0x88127B14;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	ctx.current_instruction = 0x88127B18;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x88127B1C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// std r9,88(r1)
	ctx.current_instruction = 0x88127B2C;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f10,88(r1)
	ctx.current_instruction = 0x88127B30;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmuls f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fdivs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f7.f64));
	// fadds f4,f5,f30
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f30.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,96(r1)
	ctx.current_instruction = 0x88127B50;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f3.u64);
	// lwz r8,100(r1)
	ctx.current_instruction = 0x88127B54;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r8,404(r31)
	ctx.current_instruction = 0x88127B58;
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r8.u32);
	// lhz r6,118(r30)
	ctx.current_instruction = 0x88127B5C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 118);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88127b70
	if (!ctx.cr6.gt) goto loc_88127B70;
	// stw r11,404(r31)
	ctx.current_instruction = 0x88127B6C;
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
loc_88127B70:
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lwz r10,412(r31)
	ctx.current_instruction = 0x88127B74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.current_instruction = 0x88127B7C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,400(r31)
	ctx.current_instruction = 0x88127B80;
	REX_STORE_U32(ctx.r31.u32 + 400, ctx.r8.u32);
loc_88127B84:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881276d8
	ctx.lr = 0x88127B90;
	sub_881276D8(ctx, base);
loc_88127B90:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x88127ba4
	if (!ctx.cr6.eq) goto loc_88127BA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,120(r30)
	ctx.current_instruction = 0x88127B9C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 120);
	// bl 0x881277e8
	ctx.lr = 0x88127BA4;
	sub_881277E8(ctx, base);
loc_88127BA4:
	// addi r8,r30,130
	ctx.r8.s64 = ctx.r30.s64 + 130;
	// lhz r6,124(r30)
	ctx.current_instruction = 0x88127BA8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 124);
	// addi r7,r30,128
	ctx.r7.s64 = ctx.r30.s64 + 128;
	// lhz r5,122(r30)
	ctx.current_instruction = 0x88127BB0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 122);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812d818
	ctx.lr = 0x88127BC0;
	sub_8812D818(ctx, base);
loc_88127BC0:
	// addi r9,r30,134
	ctx.r9.s64 = ctx.r30.s64 + 134;
	// addi r8,r30,132
	ctx.r8.s64 = ctx.r30.s64 + 132;
	// lwz r7,140(r30)
	ctx.current_instruction = 0x88127BC8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// li r4,1
	ctx.r4.s64 = 1;
	// lhz r6,126(r30)
	ctx.current_instruction = 0x88127BD0;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 126);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,124(r30)
	ctx.current_instruction = 0x88127BD8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 124);
	// bl 0x8812d8e8
	ctx.lr = 0x88127BE0;
	sub_8812D8E8(ctx, base);
loc_88127BE0:
	// lhz r9,580(r31)
	ctx.current_instruction = 0x88127BE0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88127958
	if (ctx.cr6.lt) goto loc_88127958;
loc_88127BFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812d9b8
	ctx.lr = 0x88127C04;
	sub_8812D9B8(ctx, base);
loc_88127C04:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.current_instruction = 0x88127C0C;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.current_instruction = 0x88127C10;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88127C18:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.current_instruction = 0x88127C24;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.current_instruction = 0x88127C28;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88136A20) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88136A20);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88136A20;
	ctx.current_instruction = 0x88136A20;
	PPCRegister temp{};
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// lfs f0,6732(r11)
	ctx.current_instruction = 0x88136A2C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// blt cr6,0x88136a6c
	if (ctx.cr6.lt) goto loc_88136A6C;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88136A54:
	// lfs f11,0(r3)
	ctx.current_instruction = 0x88136A54;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	ctx.current_instruction = 0x88136A58;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmadds f13,f10,f10,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f13.f64)));
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bdnz 0x88136a54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88136A54;
loc_88136A6C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88136a7c
	if (!ctx.cr6.gt) goto loc_88136A7C;
	// lfs f12,0(r3)
	ctx.current_instruction = 0x88136A74;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
loc_88136A7C:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// std r11,-16(r1)
	ctx.current_instruction = 0x88136A84;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.current_instruction = 0x88136A88;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fadds f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88137FC0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88137FC0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88137FC0) {
			switch (rex_dispatch_address) {
				case 0x88137FC8:
				case 0x88138004:
				case 0x8813807C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88137FC0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88137FC8: goto loc_88137FC8;
		case 0x88138004: goto loc_88138004;
		case 0x8813807C: goto loc_8813807C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88137FC8;
	__savegprlr_29(ctx, base);
loc_88137FC8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88137FC8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,136(r3)
	ctx.current_instruction = 0x88137FD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r30,0(r3)
	ctx.current_instruction = 0x88137FD4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8813805c
	if (!ctx.cr6.eq) goto loc_8813805C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,140(r31)
	ctx.current_instruction = 0x88137FF4;
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88138004;
	sub_8812C528(ctx, base);
loc_88138004:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881380ec
	if (ctx.cr6.lt) goto loc_881380EC;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8813800C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r31)
	ctx.current_instruction = 0x88138024;
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x88138038
	if (!ctx.cr6.eq) goto loc_88138038;
	// li r11,-64
	ctx.r11.s64 = -64;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_88138038:
	// lwz r11,296(r30)
	ctx.current_instruction = 0x88138038;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 296);
	// cmpwi cr6,r10,-32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,296(r30)
	ctx.current_instruction = 0x88138044;
	REX_STORE_U32(ctx.r30.u32 + 296, ctx.r11.u32);
	// ble cr6,0x88138054
	if (!ctx.cr6.gt) goto loc_88138054;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// blt cr6,0x8813805c
	if (ctx.cr6.lt) goto loc_8813805C;
loc_88138054:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,140(r31)
	ctx.current_instruction = 0x88138058;
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_8813805C:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x8813805C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881380ec
	if (ctx.cr6.eq) goto loc_881380EC;
	// addi r29,r31,224
	ctx.r29.s64 = ctx.r31.s64 + 224;
loc_8813806C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812c528
	ctx.lr = 0x8813807C;
	sub_8812C528(ctx, base);
loc_8813807C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881380ec
	if (ctx.cr6.lt) goto loc_881380EC;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88138084;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,296(r30)
	ctx.current_instruction = 0x88138088;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 296);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x881380c4
	if (!ctx.cr6.eq) goto loc_881380C4;
	// lwz r11,136(r31)
	ctx.current_instruction = 0x88138094;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,296(r30)
	ctx.current_instruction = 0x881380A4;
	REX_STORE_U32(ctx.r30.u32 + 296, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x881380dc
	if (ctx.cr6.lt) goto loc_881380DC;
	// lwz r11,140(r31)
	ctx.current_instruction = 0x881380B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8813806c
	if (!ctx.cr6.eq) goto loc_8813806C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_881380C4:
	// lwz r9,136(r31)
	ctx.current_instruction = 0x881380C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,296(r30)
	ctx.current_instruction = 0x881380D0;
	REX_STORE_U32(ctx.r30.u32 + 296, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_881380DC:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// li r11,62
	ctx.r11.s64 = 62;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// stw r11,296(r30)
	ctx.current_instruction = 0x881380E8;
	REX_STORE_U32(ctx.r30.u32 + 296, ctx.r11.u32);
loc_881380EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813A208) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8813A208;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8813A208) {
			switch (rex_dispatch_address) {
				case 0x8813A210:
				case 0x8813A2F0:
				case 0x8813A3C4:
				case 0x8813A3E8:
				case 0x8813A420:
				case 0x8813A444:
				case 0x8813A46C:
				case 0x8813A834:
				case 0x8813A86C:
				case 0x8813A894:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813A208;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8813A210: goto loc_8813A210;
		case 0x8813A2F0: goto loc_8813A2F0;
		case 0x8813A3C4: goto loc_8813A3C4;
		case 0x8813A3E8: goto loc_8813A3E8;
		case 0x8813A420: goto loc_8813A420;
		case 0x8813A444: goto loc_8813A444;
		case 0x8813A46C: goto loc_8813A46C;
		case 0x8813A834: goto loc_8813A834;
		case 0x8813A86C: goto loc_8813A86C;
		case 0x8813A894: goto loc_8813A894;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x8813A210;
	__savegprlr_22(ctx, base);
loc_8813A210:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x8813A210;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,720(r3)
	ctx.current_instruction = 0x8813A214;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// subf r10,r4,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r10,4,0,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// addi r23,r11,16
	ctx.r23.s64 = ctx.r11.s64 + 16;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8813a250
	if (!ctx.cr6.eq) goto loc_8813A250;
	// addi r22,r22,16
	ctx.r22.s64 = ctx.r22.s64 + 16;
loc_8813A250:
	// lwz r10,724(r31)
	ctx.current_instruction = 0x8813A250;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8813a274
	if (!ctx.cr6.eq) goto loc_8813A274;
	// lwz r10,800(r31)
	ctx.current_instruction = 0x8813A25C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r22,r22,16
	ctx.r22.s64 = ctx.r22.s64 + 16;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
loc_8813A274:
	// lwz r10,21096(r31)
	ctx.current_instruction = 0x8813A274;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21096);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8813a2f0
	if (ctx.cr6.eq) goto loc_8813A2F0;
	// lwz r10,28132(r31)
	ctx.current_instruction = 0x8813A280;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// lwz r4,796(r31)
	ctx.current_instruction = 0x8813A284;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8813a2b4
	if (!ctx.cr6.eq) goto loc_8813A2B4;
	// mullw r6,r11,r30
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwz r10,6844(r31)
	ctx.current_instruction = 0x8813A294;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6844);
	// lwz r7,6800(r31)
	ctx.current_instruction = 0x8813A298;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 6800);
	// mullw r5,r4,r30
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// rlwinm r9,r5,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// b 0x8813a2dc
	goto loc_8813A2DC;
loc_8813A2B4:
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r7,6844(r31)
	ctx.current_instruction = 0x8813A2B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 6844);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,6800(r31)
	ctx.current_instruction = 0x8813A2C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 6800);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
loc_8813A2DC:
	// lwz r10,7084(r31)
	ctx.current_instruction = 0x8813A2DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7084);
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8813A2F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8813A2F0:
	// lwz r11,28136(r31)
	ctx.current_instruction = 0x8813A2F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8813a480
	if (!ctx.cr6.eq) goto loc_8813A480;
	// lwz r10,20272(r31)
	ctx.current_instruction = 0x8813A2FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20272);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8813a480
	if (ctx.cr6.eq) goto loc_8813A480;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8813a374
	if (ctx.cr6.eq) goto loc_8813A374;
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x8813A310;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// lwz r9,20(r31)
	ctx.current_instruction = 0x8813A318;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r7,6808(r31)
	ctx.current_instruction = 0x8813A320;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 6808);
	// lwz r6,28044(r31)
	ctx.current_instruction = 0x8813A324;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// mullw r5,r10,r23
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r8,r9
	ctx.r29.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r28,r7,r11
	ctx.r28.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8813a398
	if (ctx.cr6.eq) goto loc_8813A398;
	// lwz r9,1384(r31)
	ctx.current_instruction = 0x8813A344;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r7,24(r31)
	ctx.current_instruction = 0x8813A348;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mullw r5,r9,r10
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r6,28(r31)
	ctx.current_instruction = 0x8813A350;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,6836(r31)
	ctx.current_instruction = 0x8813A354;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6836);
	// lwz r9,6840(r31)
	ctx.current_instruction = 0x8813A358;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6840);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r8,r11
	ctx.r27.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r25,r7,r10
	ctx.r25.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r24,r6,r10
	ctx.r24.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r26,r9,r11
	ctx.r26.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x8813a398
	goto loc_8813A398;
loc_8813A374:
	// lwz r11,28044(r31)
	ctx.current_instruction = 0x8813A374;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// lwz r29,20(r31)
	ctx.current_instruction = 0x8813A378;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r28,6808(r31)
	ctx.current_instruction = 0x8813A37C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 6808);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813a398
	if (ctx.cr6.eq) goto loc_8813A398;
	// lwz r25,24(r31)
	ctx.current_instruction = 0x8813A388;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r24,28(r31)
	ctx.current_instruction = 0x8813A38C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r27,6836(r31)
	ctx.current_instruction = 0x8813A390;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 6836);
	// lwz r26,6840(r31)
	ctx.current_instruction = 0x8813A394;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 6840);
loc_8813A398:
	// lwz r11,7084(r31)
	ctx.current_instruction = 0x8813A398;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7084);
	// rlwinm r30,r23,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,1380(r31)
	ctx.current_instruction = 0x8813A3A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// srawi r4,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8813A3C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8813A3C4:
	// lwz r5,1380(r31)
	ctx.current_instruction = 0x8813A3C4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r9,7084(r31)
	ctx.current_instruction = 0x8813A3C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7084);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// add r6,r28,r23
	ctx.r6.u64 = ctx.r28.u64 + ctx.r23.u64;
	// add r3,r4,r29
	ctx.r3.u64 = ctx.r4.u64 + ctx.r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8813A3E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8813A3E8:
	// lwz r8,28044(r31)
	ctx.current_instruction = 0x8813A3E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8813a894
	if (ctx.cr6.eq) goto loc_8813A894;
	// lwz r11,7088(r31)
	ctx.current_instruction = 0x8813A3F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// srawi r29,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r22.s32 >> 1;
	// lwz r10,1384(r31)
	ctx.current_instruction = 0x8813A3FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// srawi r4,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 1;
	// bctrl 
	ctx.lr = 0x8813A420;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8813A420:
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8813A420;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r9,7088(r31)
	ctx.current_instruction = 0x8813A424;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// add r6,r27,r23
	ctx.r6.u64 = ctx.r27.u64 + ctx.r23.u64;
	// add r3,r4,r25
	ctx.r3.u64 = ctx.r4.u64 + ctx.r25.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8813A444;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8813A444:
	// lwz r11,7088(r31)
	ctx.current_instruction = 0x8813A444;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// lwz r10,1384(r31)
	ctx.current_instruction = 0x8813A448;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// srawi r4,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 1;
	// bctrl 
	ctx.lr = 0x8813A46C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8813A46C:
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8813A46C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// add r6,r26,r23
	ctx.r6.u64 = ctx.r26.u64 + ctx.r23.u64;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// add r3,r4,r24
	ctx.r3.u64 = ctx.r4.u64 + ctx.r24.u64;
	// b 0x8813a880
	goto loc_8813A880;
loc_8813A480:
	// lwz r10,2800(r31)
	ctx.current_instruction = 0x8813A480;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8813a61c
	if (!ctx.cr6.eq) goto loc_8813A61C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8813a574
	if (!ctx.cr6.eq) goto loc_8813A574;
	// lwz r11,6888(r31)
	ctx.current_instruction = 0x8813A494;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813a894
	if (ctx.cr6.eq) goto loc_8813A894;
	// lwz r11,28132(r31)
	ctx.current_instruction = 0x8813A4A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// lwz r5,1380(r31)
	ctx.current_instruction = 0x8813A4A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,7804(r31)
	ctx.current_instruction = 0x8813A4AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7804);
	// lwz r9,6808(r31)
	ctx.current_instruction = 0x8813A4B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6808);
	// lwz r11,28044(r31)
	ctx.current_instruction = 0x8813A4B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// stw r24,6888(r31)
	ctx.current_instruction = 0x8813A4B8;
	REX_STORE_U32(ctx.r31.u32 + 6888, ctx.r24.u32);
	// bne cr6,0x8813a524
	if (!ctx.cr6.eq) goto loc_8813A524;
	// mullw r10,r5,r30
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// rlwinm r6,r30,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r8,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r10,r6,r23
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r23.s32);
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813a7d0
	if (ctx.cr6.eq) goto loc_8813A7D0;
	// lwz r29,1384(r31)
	ctx.current_instruction = 0x8813A4EC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r7,7808(r31)
	ctx.current_instruction = 0x8813A4F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7808);
	// mullw r9,r29,r30
	ctx.r9.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// lwz r8,7812(r31)
	ctx.current_instruction = 0x8813A4F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7812);
	// lwz r28,6836(r31)
	ctx.current_instruction = 0x8813A4FC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 6836);
	// lwz r4,6840(r31)
	ctx.current_instruction = 0x8813A500;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 6840);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r29,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 1;
	// add r27,r28,r10
	ctx.r27.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r26,r4,r10
	ctx.r26.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r25,r7,r9
	ctx.r25.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r24,r8,r9
	ctx.r24.u64 = ctx.r8.u64 + ctx.r9.u64;
	// b 0x8813a7d0
	goto loc_8813A7D0;
loc_8813A524:
	// mullw r10,r23,r30
	ctx.r10.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r30.s32);
	// mullw r8,r5,r30
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813a7d0
	if (ctx.cr6.eq) goto loc_8813A7D0;
	// lwz r9,1384(r31)
	ctx.current_instruction = 0x8813A544;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r4,7808(r31)
	ctx.current_instruction = 0x8813A548;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7808);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// lwz r7,7812(r31)
	ctx.current_instruction = 0x8813A550;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7812);
	// lwz r29,6836(r31)
	ctx.current_instruction = 0x8813A554;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 6836);
	// lwz r8,6840(r31)
	ctx.current_instruction = 0x8813A558;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6840);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r29,r10
	ctx.r27.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r25,r4,r9
	ctx.r25.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r24,r7,r9
	ctx.r24.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r26,r8,r10
	ctx.r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// b 0x8813a7d0
	goto loc_8813A7D0;
loc_8813A574:
	// lwz r11,28132(r31)
	ctx.current_instruction = 0x8813A574;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// lwz r5,1380(r31)
	ctx.current_instruction = 0x8813A578;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,19092(r31)
	ctx.current_instruction = 0x8813A580;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19092);
	// lwz r8,6812(r31)
	ctx.current_instruction = 0x8813A584;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6812);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// bne cr6,0x8813a5dc
	if (!ctx.cr6.eq) goto loc_8813A5DC;
	// addi r10,r11,-31
	ctx.r10.s64 = ctx.r11.s64 + -31;
	// lwz r11,28044(r31)
	ctx.current_instruction = 0x8813A594;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// srawi r6,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 1;
	// rlwinm r7,r30,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// addi r4,r7,1
	ctx.r4.s64 = ctx.r7.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r10,r4,r23
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r23.s32);
	// addi r3,r9,-32
	ctx.r3.s64 = ctx.r9.s64 + -32;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813a7d0
	if (ctx.cr6.eq) goto loc_8813A7D0;
	// lwz r7,1384(r31)
	ctx.current_instruction = 0x8813A5C0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// rlwinm r9,r30,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,6828(r31)
	ctx.current_instruction = 0x8813A5C8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 6828);
	// srawi r28,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 1;
	// lwz r7,6832(r31)
	ctx.current_instruction = 0x8813A5D0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 6832);
	// addi r9,r9,-15
	ctx.r9.s64 = ctx.r9.s64 + -15;
	// b 0x8813a7ac
	goto loc_8813A7AC;
loc_8813A5DC:
	// addi r6,r11,-32
	ctx.r6.s64 = ctx.r11.s64 + -32;
	// lwz r11,28044(r31)
	ctx.current_instruction = 0x8813A5E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// mullw r7,r23,r30
	ctx.r7.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r30.s32);
	// mullw r10,r6,r4
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r9,-32
	ctx.r3.s64 = ctx.r9.s64 + -32;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// beq cr6,0x8813a7d0
	if (ctx.cr6.eq) goto loc_8813A7D0;
	// lwz r7,1384(r31)
	ctx.current_instruction = 0x8813A608;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r4,6828(r31)
	ctx.current_instruction = 0x8813A60C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 6828);
	// srawi r28,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 1;
	// lwz r7,6832(r31)
	ctx.current_instruction = 0x8813A614;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 6832);
	// b 0x8813a7a4
	goto loc_8813A7A4;
loc_8813A61C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8813a700
	if (!ctx.cr6.eq) goto loc_8813A700;
	// lwz r11,6888(r31)
	ctx.current_instruction = 0x8813A624;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813a894
	if (ctx.cr6.eq) goto loc_8813A894;
	// lwz r11,28132(r31)
	ctx.current_instruction = 0x8813A630;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// lwz r5,1380(r31)
	ctx.current_instruction = 0x8813A634;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,20(r31)
	ctx.current_instruction = 0x8813A63C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,6808(r31)
	ctx.current_instruction = 0x8813A640;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6808);
	// lwz r11,28044(r31)
	ctx.current_instruction = 0x8813A644;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// bne cr6,0x8813a6b0
	if (!ctx.cr6.eq) goto loc_8813A6B0;
	// mullw r10,r5,r30
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// rlwinm r6,r30,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r8,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r10,r6,r23
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r23.s32);
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813a7d0
	if (ctx.cr6.eq) goto loc_8813A7D0;
	// lwz r29,1384(r31)
	ctx.current_instruction = 0x8813A678;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r7,24(r31)
	ctx.current_instruction = 0x8813A67C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mullw r9,r29,r30
	ctx.r9.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// lwz r8,28(r31)
	ctx.current_instruction = 0x8813A684;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r28,6836(r31)
	ctx.current_instruction = 0x8813A688;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 6836);
	// lwz r4,6840(r31)
	ctx.current_instruction = 0x8813A68C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 6840);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r29,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 1;
	// add r27,r28,r10
	ctx.r27.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r26,r4,r10
	ctx.r26.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r25,r7,r9
	ctx.r25.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r24,r8,r9
	ctx.r24.u64 = ctx.r8.u64 + ctx.r9.u64;
	// b 0x8813a7d0
	goto loc_8813A7D0;
loc_8813A6B0:
	// mullw r10,r23,r30
	ctx.r10.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r30.s32);
	// mullw r8,r5,r30
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813a7d0
	if (ctx.cr6.eq) goto loc_8813A7D0;
	// lwz r9,1384(r31)
	ctx.current_instruction = 0x8813A6D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r4,24(r31)
	ctx.current_instruction = 0x8813A6D4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// lwz r7,28(r31)
	ctx.current_instruction = 0x8813A6DC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r29,6836(r31)
	ctx.current_instruction = 0x8813A6E0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 6836);
	// lwz r8,6840(r31)
	ctx.current_instruction = 0x8813A6E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6840);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r29,r10
	ctx.r27.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r25,r4,r9
	ctx.r25.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r24,r7,r9
	ctx.r24.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r26,r8,r10
	ctx.r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// b 0x8813a7d0
	goto loc_8813A7D0;
loc_8813A700:
	// lwz r11,28132(r31)
	ctx.current_instruction = 0x8813A700;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// lwz r5,1380(r31)
	ctx.current_instruction = 0x8813A704;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,19092(r31)
	ctx.current_instruction = 0x8813A70C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19092);
	// lwz r8,6808(r31)
	ctx.current_instruction = 0x8813A710;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6808);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// bne cr6,0x8813a768
	if (!ctx.cr6.eq) goto loc_8813A768;
	// addi r10,r11,-31
	ctx.r10.s64 = ctx.r11.s64 + -31;
	// lwz r11,28044(r31)
	ctx.current_instruction = 0x8813A720;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// srawi r6,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 1;
	// rlwinm r7,r30,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// addi r4,r7,1
	ctx.r4.s64 = ctx.r7.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r10,r4,r23
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r23.s32);
	// addi r3,r9,-32
	ctx.r3.s64 = ctx.r9.s64 + -32;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813a7d0
	if (ctx.cr6.eq) goto loc_8813A7D0;
	// lwz r7,1384(r31)
	ctx.current_instruction = 0x8813A74C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// rlwinm r9,r30,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,6836(r31)
	ctx.current_instruction = 0x8813A754;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 6836);
	// srawi r28,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 1;
	// lwz r7,6840(r31)
	ctx.current_instruction = 0x8813A75C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 6840);
	// addi r9,r9,-15
	ctx.r9.s64 = ctx.r9.s64 + -15;
	// b 0x8813a7ac
	goto loc_8813A7AC;
loc_8813A768:
	// addi r6,r11,-32
	ctx.r6.s64 = ctx.r11.s64 + -32;
	// lwz r11,28044(r31)
	ctx.current_instruction = 0x8813A76C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// mullw r7,r23,r30
	ctx.r7.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r30.s32);
	// mullw r10,r6,r4
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r9,-32
	ctx.r3.s64 = ctx.r9.s64 + -32;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// beq cr6,0x8813a7d0
	if (ctx.cr6.eq) goto loc_8813A7D0;
	// lwz r7,1384(r31)
	ctx.current_instruction = 0x8813A794;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r4,6836(r31)
	ctx.current_instruction = 0x8813A798;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 6836);
	// srawi r28,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 1;
	// lwz r7,6840(r31)
	ctx.current_instruction = 0x8813A7A0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 6840);
loc_8813A7A4:
	// rlwinm r9,r30,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
loc_8813A7AC:
	// lwz r8,19096(r31)
	ctx.current_instruction = 0x8813A7AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 19096);
	// mullw r9,r28,r9
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// lwz r29,19100(r31)
	ctx.current_instruction = 0x8813A7B4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 19100);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r26,r7,r10
	ctx.r26.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r27,r4,r10
	ctx.r27.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r24,r9,-16
	ctx.r24.s64 = ctx.r9.s64 + -16;
	// addi r25,r8,-16
	ctx.r25.s64 = ctx.r8.s64 + -16;
loc_8813A7D0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8813a894
	if (ctx.cr6.eq) goto loc_8813A894;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8813a818
	if (ctx.cr6.eq) goto loc_8813A818;
	// srawi r9,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 1;
	// rlwinm r10,r23,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813a818
	if (ctx.cr6.eq) goto loc_8813A818;
	// lwz r11,1384(r31)
	ctx.current_instruction = 0x8813A7FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_8813A818:
	// lwz r11,7084(r31)
	ctx.current_instruction = 0x8813A818;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7084);
	// rlwinm r30,r23,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8813A834;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8813A834:
	// lwz r10,28044(r31)
	ctx.current_instruction = 0x8813A834;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8813a894
	if (ctx.cr6.eq) goto loc_8813A894;
	// lwz r11,7088(r31)
	ctx.current_instruction = 0x8813A840;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// srawi r29,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r22.s32 >> 1;
	// lwz r10,1384(r31)
	ctx.current_instruction = 0x8813A848;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// srawi r4,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 1;
	// bctrl 
	ctx.lr = 0x8813A86C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8813A86C:
	// lwz r4,1384(r31)
	ctx.current_instruction = 0x8813A86C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
loc_8813A880:
	// lwz r9,7088(r31)
	ctx.current_instruction = 0x8813A880;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8813A894;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8813A894:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A268) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814A268;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814A268) {
			switch (rex_dispatch_address) {
				case 0x8814A270:
				case 0x8814A2A4:
				case 0x8814A2C0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814A268;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814A270: goto loc_8814A270;
		case 0x8814A2A4: goto loc_8814A2A4;
		case 0x8814A2C0: goto loc_8814A2C0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814A270;
	__savegprlr_28(ctx, base);
loc_8814A270:
	// stwu r1,-1152(r1)
	ctx.current_instruction = 0x8814A270;
	ea = -1152 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// slw r28,r10,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x88149730
	ctx.lr = 0x8814A2A4;
	sub_88149730(ctx, base);
loc_8814A2A4:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x88149d20
	ctx.lr = 0x8814A2C0;
	sub_88149D20(ctx, base);
loc_8814A2C0:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A4C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814A4C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814A4C8) {
			switch (rex_dispatch_address) {
				case 0x8814A4D0:
				case 0x8814A504:
				case 0x8814A520:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814A4C8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814A4D0: goto loc_8814A4D0;
		case 0x8814A504: goto loc_8814A504;
		case 0x8814A520: goto loc_8814A520;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814A4D0;
	__savegprlr_28(ctx, base);
loc_8814A4D0:
	// stwu r1,-1152(r1)
	ctx.current_instruction = 0x8814A4D0;
	ea = -1152 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// slw r28,r10,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x88149730
	ctx.lr = 0x8814A504;
	sub_88149730(ctx, base);
loc_8814A504:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8814a0e0
	ctx.lr = 0x8814A520;
	sub_8814A0E0(ctx, base);
loc_8814A520:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814B6A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814B6A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814B6A8) {
			switch (rex_dispatch_address) {
				case 0x8814B6B0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814B6A8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814B6B0: goto loc_8814B6B0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8814B6B0;
	__savegprlr_29(ctx, base);
loc_8814B6B0:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// srawi r31,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 2;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r31,-50(r1)
	ctx.current_instruction = 0x8814B6D4;
	REX_STORE_U16(ctx.r1.u32 + -50, ctx.r31.u16);
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lvx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r31,-30678
	ctx.r31.s64 = -2010513408;
	// vperm128 v11,v62,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// vperm128 v10,v63,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v59,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v2,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v57,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-64
	ctx.r29.s64 = ctx.r1.s64 + -64;
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v56,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v54,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v58,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v52,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r30,r10,r4
	ctx.r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvsl v3,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// lvsl v5,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v50,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v55,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v53,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v5,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v56,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v3,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v59,v50,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvsl v4,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lwz r9,25792(r31)
	ctx.current_instruction = 0x8814B77C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 25792);
	// lvx128 v51,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r6,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v55,v53,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v49,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lvx128 v48,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v54,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v3,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v7,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v29,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v3,v49,v48,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// vmrglb v28,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vmrglb v27,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r4,r31,r6
	ctx.r4.u64 = ctx.r31.u64 + ctx.r6.u64;
	// vmrglb v26,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v25,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v0,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm v3,v11,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm v2,v10,v1,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm v1,v9,v31,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsubshs v24,v11,v3
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsplth v12,v25,7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_set1_epi16(short(0x100))));
	// vsubshs v23,v10,v2
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vperm v31,v8,v30,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// li r11,4
	ctx.r11.s64 = 4;
	// vperm v30,v6,v29,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsubshs v22,v9,v1
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vperm v29,v5,v28,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v20,v24,v12
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vperm v28,v4,v27,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsubshs v21,v8,v31
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vperm v7,v0,v26,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v19,v23,v12
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubshs v18,v6,v30
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v17,v22,v12
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v15,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v16,v5,v29
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v14,v21,v12
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubshs v11,v4,v28
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsrah v10,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v9,v18,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v8,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v6,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v4,v15,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v5,v16,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v3,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v27,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v26,v10,v2
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vpkshus128 v47,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsrah v25,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v24,v6,v12
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v23,v8,v1
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v22,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v46,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v21,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsrah v20,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v19,v25,v30
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vpkshus128 v45,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vsrah v18,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvewx128 v47,r0,r5
	ctx.current_instruction = 0x8814B894;
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v17,v22,v29
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vpkshus128 v44,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vaddshs v16,v20,v28
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// stvewx128 v47,r5,r11
	ctx.current_instruction = 0x8814B8A4;
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v43,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// stvewx128 v46,r0,r8
	ctx.current_instruction = 0x8814B8AC;
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v15,v18,v7
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvewx128 v46,r8,r11
	ctx.current_instruction = 0x8814B8B4;
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v42,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// stvewx128 v45,r0,r31
	ctx.current_instruction = 0x8814B8BC;
	ea = (ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v41,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// stvewx128 v45,r31,r11
	ctx.current_instruction = 0x8814B8C4;
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r0,r4
	ctx.current_instruction = 0x8814B8C8;
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v40,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// stvewx128 v44,r4,r11
	ctx.current_instruction = 0x8814B8D0;
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r0,r7
	ctx.current_instruction = 0x8814B8D4;
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r7,r11
	ctx.current_instruction = 0x8814B8D8;
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r0,r10
	ctx.current_instruction = 0x8814B8DC;
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r10,r11
	ctx.current_instruction = 0x8814B8E0;
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r0,r9
	ctx.current_instruction = 0x8814B8E4;
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r9,r11
	ctx.current_instruction = 0x8814B8E8;
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r0,r6
	ctx.current_instruction = 0x8814B8EC;
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r6,r11
	ctx.current_instruction = 0x8814B8F0;
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88156858) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88156858;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88156858) {
			switch (rex_dispatch_address) {
				case 0x88156860:
				case 0x881568EC:
				case 0x8815690C:
				case 0x88156990:
				case 0x881569AC:
				case 0x88156A30:
				case 0x88156A4C:
				case 0x88156AD0:
				case 0x88156AEC:
				case 0x88156B70:
				case 0x88156B8C:
				case 0x88156C0C:
				case 0x88156C28:
				case 0x88156CAC:
				case 0x88156CC8:
				case 0x88156D4C:
				case 0x88156D68:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88156858;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88156860: goto loc_88156860;
		case 0x881568EC: goto loc_881568EC;
		case 0x8815690C: goto loc_8815690C;
		case 0x88156990: goto loc_88156990;
		case 0x881569AC: goto loc_881569AC;
		case 0x88156A30: goto loc_88156A30;
		case 0x88156A4C: goto loc_88156A4C;
		case 0x88156AD0: goto loc_88156AD0;
		case 0x88156AEC: goto loc_88156AEC;
		case 0x88156B70: goto loc_88156B70;
		case 0x88156B8C: goto loc_88156B8C;
		case 0x88156C0C: goto loc_88156C0C;
		case 0x88156C28: goto loc_88156C28;
		case 0x88156CAC: goto loc_88156CAC;
		case 0x88156CC8: goto loc_88156CC8;
		case 0x88156D4C: goto loc_88156D4C;
		case 0x88156D68: goto loc_88156D68;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x88156860;
	__savegprlr_20(ctx, base);
loc_88156860:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x88156860;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lwz r9,24688(r3)
	ctx.current_instruction = 0x88156868;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lwz r4,2600(r3)
	ctx.current_instruction = 0x88156870;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 2600);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// lis r5,-30719
	ctx.r5.s64 = -2013200384;
	// lis r3,-30719
	ctx.r3.s64 = -2013200384;
	// addi r29,r11,27208
	ctx.r29.s64 = ctx.r11.s64 + 27208;
	// addi r28,r10,27040
	ctx.r28.s64 = ctx.r10.s64 + 27040;
	// addi r11,r7,22368
	ctx.r11.s64 = ctx.r7.s64 + 22368;
	// stw r29,2592(r31)
	ctx.current_instruction = 0x88156894;
	REX_STORE_U32(ctx.r31.u32 + 2592, ctx.r29.u32);
	// addi r10,r6,22396
	ctx.r10.s64 = ctx.r6.s64 + 22396;
	// stw r28,2596(r31)
	ctx.current_instruction = 0x8815689C;
	REX_STORE_U32(ctx.r31.u32 + 2596, ctx.r28.u32);
	// addi r7,r5,22436
	ctx.r7.s64 = ctx.r5.s64 + 22436;
	// stw r11,2576(r31)
	ctx.current_instruction = 0x881568A4;
	REX_STORE_U32(ctx.r31.u32 + 2576, ctx.r11.u32);
	// addi r6,r3,22460
	ctx.r6.s64 = ctx.r3.s64 + 22460;
	// stw r10,2580(r31)
	ctx.current_instruction = 0x881568AC;
	REX_STORE_U32(ctx.r31.u32 + 2580, ctx.r10.u32);
	// li r8,168
	ctx.r8.s64 = 168;
	// stw r7,2584(r31)
	ctx.current_instruction = 0x881568B4;
	REX_STORE_U32(ctx.r31.u32 + 2584, ctx.r7.u32);
	// addi r5,r31,2184
	ctx.r5.s64 = ctx.r31.s64 + 2184;
	// stw r6,2588(r31)
	ctx.current_instruction = 0x881568BC;
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r6.u32);
	// li r3,98
	ctx.r3.s64 = 98;
	// stw r8,2568(r31)
	ctx.current_instruction = 0x881568C4;
	REX_STORE_U32(ctx.r31.u32 + 2568, ctx.r8.u32);
	// addi r20,r31,2564
	ctx.r20.s64 = ctx.r31.s64 + 2564;
	// stw r5,2564(r31)
	ctx.current_instruction = 0x881568CC;
	REX_STORE_U32(ctx.r31.u32 + 2564, ctx.r5.u32);
	// stw r3,2572(r31)
	ctx.current_instruction = 0x881568D0;
	REX_STORE_U32(ctx.r31.u32 + 2572, ctx.r3.u32);
	// addi r30,r9,8
	ctx.r30.s64 = ctx.r9.s64 + 8;
	// stw r8,2604(r31)
	ctx.current_instruction = 0x881568D8;
	REX_STORE_U32(ctx.r31.u32 + 2604, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881568ec
	if (ctx.cr6.eq) goto loc_881568EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x881568EC;
	sub_8815E528(ctx, base);
loc_881568EC:
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r25,2600(r31)
	ctx.current_instruction = 0x881568F4;
	REX_STORE_U32(ctx.r31.u32 + 2600, ctx.r25.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r6,168
	ctx.r6.s64 = 168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881567c0
	ctx.lr = 0x8815690C;
	sub_881567C0(ctx, base);
loc_8815690C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88156dec
	if (!ctx.cr6.eq) goto loc_88156DEC;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lwz r4,2644(r31)
	ctx.current_instruction = 0x88156918;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2644);
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r8,-30719
	ctx.r8.s64 = -2013200384;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// lis r5,-30719
	ctx.r5.s64 = -2013200384;
	// addi r29,r11,27568
	ctx.r29.s64 = ctx.r11.s64 + 27568;
	// addi r28,r10,27376
	ctx.r28.s64 = ctx.r10.s64 + 27376;
	// addi r3,r8,22140
	ctx.r3.s64 = ctx.r8.s64 + 22140;
	// stw r29,2636(r31)
	ctx.current_instruction = 0x8815693C;
	REX_STORE_U32(ctx.r31.u32 + 2636, ctx.r29.u32);
	// addi r11,r7,22320
	ctx.r11.s64 = ctx.r7.s64 + 22320;
	// stw r28,2640(r31)
	ctx.current_instruction = 0x88156944;
	REX_STORE_U32(ctx.r31.u32 + 2640, ctx.r28.u32);
	// addi r10,r6,22172
	ctx.r10.s64 = ctx.r6.s64 + 22172;
	// stw r3,2620(r31)
	ctx.current_instruction = 0x8815694C;
	REX_STORE_U32(ctx.r31.u32 + 2620, ctx.r3.u32);
	// li r9,185
	ctx.r9.s64 = 185;
	// stw r11,2624(r31)
	ctx.current_instruction = 0x88156954;
	REX_STORE_U32(ctx.r31.u32 + 2624, ctx.r11.u32);
	// addi r8,r5,22360
	ctx.r8.s64 = ctx.r5.s64 + 22360;
	// stw r10,2628(r31)
	ctx.current_instruction = 0x8815695C;
	REX_STORE_U32(ctx.r31.u32 + 2628, ctx.r10.u32);
	// addi r7,r31,2196
	ctx.r7.s64 = ctx.r31.s64 + 2196;
	// stw r9,2612(r31)
	ctx.current_instruction = 0x88156964;
	REX_STORE_U32(ctx.r31.u32 + 2612, ctx.r9.u32);
	// li r6,118
	ctx.r6.s64 = 118;
	// stw r8,2632(r31)
	ctx.current_instruction = 0x8815696C;
	REX_STORE_U32(ctx.r31.u32 + 2632, ctx.r8.u32);
	// addi r21,r31,2608
	ctx.r21.s64 = ctx.r31.s64 + 2608;
	// stw r7,2608(r31)
	ctx.current_instruction = 0x88156974;
	REX_STORE_U32(ctx.r31.u32 + 2608, ctx.r7.u32);
	// stw r6,2616(r31)
	ctx.current_instruction = 0x88156978;
	REX_STORE_U32(ctx.r31.u32 + 2616, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,2648(r31)
	ctx.current_instruction = 0x88156980;
	REX_STORE_U32(ctx.r31.u32 + 2648, ctx.r9.u32);
	// beq cr6,0x88156990
	if (ctx.cr6.eq) goto loc_88156990;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88156990;
	sub_8815E528(ctx, base);
loc_88156990:
	// stw r25,2644(r31)
	ctx.current_instruction = 0x88156990;
	REX_STORE_U32(ctx.r31.u32 + 2644, ctx.r25.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,185
	ctx.r6.s64 = 185;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881567c0
	ctx.lr = 0x881569AC;
	sub_881567C0(ctx, base);
loc_881569AC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88156dec
	if (!ctx.cr6.eq) goto loc_88156DEC;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lwz r4,2688(r31)
	ctx.current_instruction = 0x881569B8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2688);
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r8,-30719
	ctx.r8.s64 = -2013200384;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// lis r5,-30719
	ctx.r5.s64 = -2013200384;
	// addi r29,r11,27912
	ctx.r29.s64 = ctx.r11.s64 + 27912;
	// addi r28,r10,27760
	ctx.r28.s64 = ctx.r10.s64 + 27760;
	// addi r3,r8,22552
	ctx.r3.s64 = ctx.r8.s64 + 22552;
	// stw r29,2680(r31)
	ctx.current_instruction = 0x881569DC;
	REX_STORE_U32(ctx.r31.u32 + 2680, ctx.r29.u32);
	// addi r11,r7,22584
	ctx.r11.s64 = ctx.r7.s64 + 22584;
	// stw r28,2684(r31)
	ctx.current_instruction = 0x881569E4;
	REX_STORE_U32(ctx.r31.u32 + 2684, ctx.r28.u32);
	// addi r10,r6,22628
	ctx.r10.s64 = ctx.r6.s64 + 22628;
	// stw r3,2664(r31)
	ctx.current_instruction = 0x881569EC;
	REX_STORE_U32(ctx.r31.u32 + 2664, ctx.r3.u32);
	// li r9,148
	ctx.r9.s64 = 148;
	// stw r11,2668(r31)
	ctx.current_instruction = 0x881569F4;
	REX_STORE_U32(ctx.r31.u32 + 2668, ctx.r11.u32);
	// addi r8,r5,22644
	ctx.r8.s64 = ctx.r5.s64 + 22644;
	// stw r10,2672(r31)
	ctx.current_instruction = 0x881569FC;
	REX_STORE_U32(ctx.r31.u32 + 2672, ctx.r10.u32);
	// addi r7,r31,2208
	ctx.r7.s64 = ctx.r31.s64 + 2208;
	// stw r9,2656(r31)
	ctx.current_instruction = 0x88156A04;
	REX_STORE_U32(ctx.r31.u32 + 2656, ctx.r9.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r8,2676(r31)
	ctx.current_instruction = 0x88156A0C;
	REX_STORE_U32(ctx.r31.u32 + 2676, ctx.r8.u32);
	// addi r22,r31,2652
	ctx.r22.s64 = ctx.r31.s64 + 2652;
	// stw r7,2652(r31)
	ctx.current_instruction = 0x88156A14;
	REX_STORE_U32(ctx.r31.u32 + 2652, ctx.r7.u32);
	// stw r6,2660(r31)
	ctx.current_instruction = 0x88156A18;
	REX_STORE_U32(ctx.r31.u32 + 2660, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,2692(r31)
	ctx.current_instruction = 0x88156A20;
	REX_STORE_U32(ctx.r31.u32 + 2692, ctx.r9.u32);
	// beq cr6,0x88156a30
	if (ctx.cr6.eq) goto loc_88156A30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88156A30;
	sub_8815E528(ctx, base);
loc_88156A30:
	// stw r25,2688(r31)
	ctx.current_instruction = 0x88156A30;
	REX_STORE_U32(ctx.r31.u32 + 2688, ctx.r25.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// li r6,148
	ctx.r6.s64 = 148;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881567c0
	ctx.lr = 0x88156A4C;
	sub_881567C0(ctx, base);
loc_88156A4C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88156dec
	if (!ctx.cr6.eq) goto loc_88156DEC;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lwz r4,2732(r31)
	ctx.current_instruction = 0x88156A58;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2732);
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r8,-30719
	ctx.r8.s64 = -2013200384;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// lis r5,-30719
	ctx.r5.s64 = -2013200384;
	// addi r29,r11,28200
	ctx.r29.s64 = ctx.r11.s64 + 28200;
	// addi r28,r10,28064
	ctx.r28.s64 = ctx.r10.s64 + 28064;
	// addi r3,r8,22472
	ctx.r3.s64 = ctx.r8.s64 + 22472;
	// stw r29,2724(r31)
	ctx.current_instruction = 0x88156A7C;
	REX_STORE_U32(ctx.r31.u32 + 2724, ctx.r29.u32);
	// addi r11,r7,22496
	ctx.r11.s64 = ctx.r7.s64 + 22496;
	// stw r28,2728(r31)
	ctx.current_instruction = 0x88156A84;
	REX_STORE_U32(ctx.r31.u32 + 2728, ctx.r28.u32);
	// addi r10,r6,22524
	ctx.r10.s64 = ctx.r6.s64 + 22524;
	// stw r3,2708(r31)
	ctx.current_instruction = 0x88156A8C;
	REX_STORE_U32(ctx.r31.u32 + 2708, ctx.r3.u32);
	// li r9,132
	ctx.r9.s64 = 132;
	// stw r11,2712(r31)
	ctx.current_instruction = 0x88156A94;
	REX_STORE_U32(ctx.r31.u32 + 2712, ctx.r11.u32);
	// addi r8,r5,22544
	ctx.r8.s64 = ctx.r5.s64 + 22544;
	// stw r10,2716(r31)
	ctx.current_instruction = 0x88156A9C;
	REX_STORE_U32(ctx.r31.u32 + 2716, ctx.r10.u32);
	// addi r7,r31,2220
	ctx.r7.s64 = ctx.r31.s64 + 2220;
	// stw r9,2700(r31)
	ctx.current_instruction = 0x88156AA4;
	REX_STORE_U32(ctx.r31.u32 + 2700, ctx.r9.u32);
	// li r6,84
	ctx.r6.s64 = 84;
	// stw r8,2720(r31)
	ctx.current_instruction = 0x88156AAC;
	REX_STORE_U32(ctx.r31.u32 + 2720, ctx.r8.u32);
	// addi r23,r31,2696
	ctx.r23.s64 = ctx.r31.s64 + 2696;
	// stw r7,2696(r31)
	ctx.current_instruction = 0x88156AB4;
	REX_STORE_U32(ctx.r31.u32 + 2696, ctx.r7.u32);
	// stw r6,2704(r31)
	ctx.current_instruction = 0x88156AB8;
	REX_STORE_U32(ctx.r31.u32 + 2704, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,2736(r31)
	ctx.current_instruction = 0x88156AC0;
	REX_STORE_U32(ctx.r31.u32 + 2736, ctx.r9.u32);
	// beq cr6,0x88156ad0
	if (ctx.cr6.eq) goto loc_88156AD0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88156AD0;
	sub_8815E528(ctx, base);
loc_88156AD0:
	// stw r25,2732(r31)
	ctx.current_instruction = 0x88156AD0;
	REX_STORE_U32(ctx.r31.u32 + 2732, ctx.r25.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,132
	ctx.r6.s64 = 132;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881567c0
	ctx.lr = 0x88156AEC;
	sub_881567C0(ctx, base);
loc_88156AEC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88156dec
	if (!ctx.cr6.eq) goto loc_88156DEC;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lwz r4,2776(r31)
	ctx.current_instruction = 0x88156AF8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2776);
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// lis r8,-30719
	ctx.r8.s64 = -2013200384;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// addi r28,r11,29024
	ctx.r28.s64 = ctx.r11.s64 + 29024;
	// addi r27,r10,29128
	ctx.r27.s64 = ctx.r10.s64 + 29128;
	// addi r5,r9,22732
	ctx.r5.s64 = ctx.r9.s64 + 22732;
	// stw r28,2768(r31)
	ctx.current_instruction = 0x88156B1C;
	REX_STORE_U32(ctx.r31.u32 + 2768, ctx.r28.u32);
	// addi r3,r8,22760
	ctx.r3.s64 = ctx.r8.s64 + 22760;
	// stw r27,2772(r31)
	ctx.current_instruction = 0x88156B24;
	REX_STORE_U32(ctx.r31.u32 + 2772, ctx.r27.u32);
	// li r29,102
	ctx.r29.s64 = 102;
	// stw r5,2752(r31)
	ctx.current_instruction = 0x88156B2C;
	REX_STORE_U32(ctx.r31.u32 + 2752, ctx.r5.u32);
	// addi r11,r7,22804
	ctx.r11.s64 = ctx.r7.s64 + 22804;
	// stw r3,2756(r31)
	ctx.current_instruction = 0x88156B34;
	REX_STORE_U32(ctx.r31.u32 + 2756, ctx.r3.u32);
	// addi r10,r6,22820
	ctx.r10.s64 = ctx.r6.s64 + 22820;
	// stw r29,2744(r31)
	ctx.current_instruction = 0x88156B3C;
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r29.u32);
	// addi r9,r31,2232
	ctx.r9.s64 = ctx.r31.s64 + 2232;
	// stw r11,2760(r31)
	ctx.current_instruction = 0x88156B44;
	REX_STORE_U32(ctx.r31.u32 + 2760, ctx.r11.u32);
	// li r8,57
	ctx.r8.s64 = 57;
	// stw r10,2764(r31)
	ctx.current_instruction = 0x88156B4C;
	REX_STORE_U32(ctx.r31.u32 + 2764, ctx.r10.u32);
	// addi r24,r31,2740
	ctx.r24.s64 = ctx.r31.s64 + 2740;
	// stw r9,2740(r31)
	ctx.current_instruction = 0x88156B54;
	REX_STORE_U32(ctx.r31.u32 + 2740, ctx.r9.u32);
	// stw r8,2748(r31)
	ctx.current_instruction = 0x88156B58;
	REX_STORE_U32(ctx.r31.u32 + 2748, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r29,2780(r31)
	ctx.current_instruction = 0x88156B60;
	REX_STORE_U32(ctx.r31.u32 + 2780, ctx.r29.u32);
	// beq cr6,0x88156b70
	if (ctx.cr6.eq) goto loc_88156B70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88156B70;
	sub_8815E528(ctx, base);
loc_88156B70:
	// stw r25,2776(r31)
	ctx.current_instruction = 0x88156B70;
	REX_STORE_U32(ctx.r31.u32 + 2776, ctx.r25.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,102
	ctx.r6.s64 = 102;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881567c0
	ctx.lr = 0x88156B8C;
	sub_881567C0(ctx, base);
loc_88156B8C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88156dec
	if (!ctx.cr6.eq) goto loc_88156DEC;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lwz r4,2820(r31)
	ctx.current_instruction = 0x88156B98;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2820);
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// stw r29,2788(r31)
	ctx.current_instruction = 0x88156BA0;
	REX_STORE_U32(ctx.r31.u32 + 2788, ctx.r29.u32);
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// stw r29,2824(r31)
	ctx.current_instruction = 0x88156BA8;
	REX_STORE_U32(ctx.r31.u32 + 2824, ctx.r29.u32);
	// lis r8,-30719
	ctx.r8.s64 = -2013200384;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// addi r28,r11,29232
	ctx.r28.s64 = ctx.r11.s64 + 29232;
	// addi r27,r10,29336
	ctx.r27.s64 = ctx.r10.s64 + 29336;
	// addi r5,r9,22652
	ctx.r5.s64 = ctx.r9.s64 + 22652;
	// stw r28,2812(r31)
	ctx.current_instruction = 0x88156BC4;
	REX_STORE_U32(ctx.r31.u32 + 2812, ctx.r28.u32);
	// addi r3,r8,22668
	ctx.r3.s64 = ctx.r8.s64 + 22668;
	// stw r27,2816(r31)
	ctx.current_instruction = 0x88156BCC;
	REX_STORE_U32(ctx.r31.u32 + 2816, ctx.r27.u32);
	// addi r11,r7,22692
	ctx.r11.s64 = ctx.r7.s64 + 22692;
	// stw r5,2796(r31)
	ctx.current_instruction = 0x88156BD4;
	REX_STORE_U32(ctx.r31.u32 + 2796, ctx.r5.u32);
	// addi r10,r6,22720
	ctx.r10.s64 = ctx.r6.s64 + 22720;
	// stw r3,2800(r31)
	ctx.current_instruction = 0x88156BDC;
	REX_STORE_U32(ctx.r31.u32 + 2800, ctx.r3.u32);
	// addi r9,r31,2244
	ctx.r9.s64 = ctx.r31.s64 + 2244;
	// stw r11,2804(r31)
	ctx.current_instruction = 0x88156BE4;
	REX_STORE_U32(ctx.r31.u32 + 2804, ctx.r11.u32);
	// li r8,66
	ctx.r8.s64 = 66;
	// stw r10,2808(r31)
	ctx.current_instruction = 0x88156BEC;
	REX_STORE_U32(ctx.r31.u32 + 2808, ctx.r10.u32);
	// addi r26,r31,2784
	ctx.r26.s64 = ctx.r31.s64 + 2784;
	// stw r9,2784(r31)
	ctx.current_instruction = 0x88156BF4;
	REX_STORE_U32(ctx.r31.u32 + 2784, ctx.r9.u32);
	// stw r8,2792(r31)
	ctx.current_instruction = 0x88156BF8;
	REX_STORE_U32(ctx.r31.u32 + 2792, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88156c0c
	if (ctx.cr6.eq) goto loc_88156C0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88156C0C;
	sub_8815E528(ctx, base);
loc_88156C0C:
	// stw r25,2820(r31)
	ctx.current_instruction = 0x88156C0C;
	REX_STORE_U32(ctx.r31.u32 + 2820, ctx.r25.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,102
	ctx.r6.s64 = 102;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881567c0
	ctx.lr = 0x88156C28;
	sub_881567C0(ctx, base);
loc_88156C28:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88156dec
	if (!ctx.cr6.eq) goto loc_88156DEC;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lwz r4,2908(r31)
	ctx.current_instruction = 0x88156C34;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2908);
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r8,-30719
	ctx.r8.s64 = -2013200384;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// lis r5,-30719
	ctx.r5.s64 = -2013200384;
	// addi r28,r11,28512
	ctx.r28.s64 = ctx.r11.s64 + 28512;
	// addi r27,r10,28336
	ctx.r27.s64 = ctx.r10.s64 + 28336;
	// addi r3,r8,22928
	ctx.r3.s64 = ctx.r8.s64 + 22928;
	// stw r28,2900(r31)
	ctx.current_instruction = 0x88156C58;
	REX_STORE_U32(ctx.r31.u32 + 2900, ctx.r28.u32);
	// addi r11,r7,22956
	ctx.r11.s64 = ctx.r7.s64 + 22956;
	// stw r27,2904(r31)
	ctx.current_instruction = 0x88156C60;
	REX_STORE_U32(ctx.r31.u32 + 2904, ctx.r27.u32);
	// addi r10,r6,22988
	ctx.r10.s64 = ctx.r6.s64 + 22988;
	// stw r3,2884(r31)
	ctx.current_instruction = 0x88156C68;
	REX_STORE_U32(ctx.r31.u32 + 2884, ctx.r3.u32);
	// li r9,174
	ctx.r9.s64 = 174;
	// stw r11,2888(r31)
	ctx.current_instruction = 0x88156C70;
	REX_STORE_U32(ctx.r31.u32 + 2888, ctx.r11.u32);
	// addi r8,r5,23024
	ctx.r8.s64 = ctx.r5.s64 + 23024;
	// stw r10,2892(r31)
	ctx.current_instruction = 0x88156C78;
	REX_STORE_U32(ctx.r31.u32 + 2892, ctx.r10.u32);
	// addi r7,r31,2432
	ctx.r7.s64 = ctx.r31.s64 + 2432;
	// stw r9,2876(r31)
	ctx.current_instruction = 0x88156C80;
	REX_STORE_U32(ctx.r31.u32 + 2876, ctx.r9.u32);
	// li r6,108
	ctx.r6.s64 = 108;
	// stw r8,2896(r31)
	ctx.current_instruction = 0x88156C88;
	REX_STORE_U32(ctx.r31.u32 + 2896, ctx.r8.u32);
	// addi r29,r31,2872
	ctx.r29.s64 = ctx.r31.s64 + 2872;
	// stw r7,2872(r31)
	ctx.current_instruction = 0x88156C90;
	REX_STORE_U32(ctx.r31.u32 + 2872, ctx.r7.u32);
	// stw r6,2880(r31)
	ctx.current_instruction = 0x88156C94;
	REX_STORE_U32(ctx.r31.u32 + 2880, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,2912(r31)
	ctx.current_instruction = 0x88156C9C;
	REX_STORE_U32(ctx.r31.u32 + 2912, ctx.r9.u32);
	// beq cr6,0x88156cac
	if (ctx.cr6.eq) goto loc_88156CAC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88156CAC;
	sub_8815E528(ctx, base);
loc_88156CAC:
	// stw r25,2908(r31)
	ctx.current_instruction = 0x88156CAC;
	REX_STORE_U32(ctx.r31.u32 + 2908, ctx.r25.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,174
	ctx.r6.s64 = 174;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881567c0
	ctx.lr = 0x88156CC8;
	sub_881567C0(ctx, base);
loc_88156CC8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88156dec
	if (!ctx.cr6.eq) goto loc_88156DEC;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lwz r4,2864(r31)
	ctx.current_instruction = 0x88156CD4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2864);
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r8,-30719
	ctx.r8.s64 = -2013200384;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// lis r5,-30719
	ctx.r5.s64 = -2013200384;
	// addi r28,r11,28856
	ctx.r28.s64 = ctx.r11.s64 + 28856;
	// addi r27,r10,28688
	ctx.r27.s64 = ctx.r10.s64 + 28688;
	// addi r3,r8,22824
	ctx.r3.s64 = ctx.r8.s64 + 22824;
	// stw r28,2856(r31)
	ctx.current_instruction = 0x88156CF8;
	REX_STORE_U32(ctx.r31.u32 + 2856, ctx.r28.u32);
	// addi r11,r7,22840
	ctx.r11.s64 = ctx.r7.s64 + 22840;
	// stw r27,2860(r31)
	ctx.current_instruction = 0x88156D00;
	REX_STORE_U32(ctx.r31.u32 + 2860, ctx.r27.u32);
	// addi r10,r6,22860
	ctx.r10.s64 = ctx.r6.s64 + 22860;
	// stw r3,2840(r31)
	ctx.current_instruction = 0x88156D08;
	REX_STORE_U32(ctx.r31.u32 + 2840, ctx.r3.u32);
	// li r9,162
	ctx.r9.s64 = 162;
	// stw r11,2844(r31)
	ctx.current_instruction = 0x88156D10;
	REX_STORE_U32(ctx.r31.u32 + 2844, ctx.r11.u32);
	// addi r8,r5,22920
	ctx.r8.s64 = ctx.r5.s64 + 22920;
	// stw r10,2848(r31)
	ctx.current_instruction = 0x88156D18;
	REX_STORE_U32(ctx.r31.u32 + 2848, ctx.r10.u32);
	// addi r7,r31,2256
	ctx.r7.s64 = ctx.r31.s64 + 2256;
	// stw r9,2832(r31)
	ctx.current_instruction = 0x88156D20;
	REX_STORE_U32(ctx.r31.u32 + 2832, ctx.r9.u32);
	// li r6,125
	ctx.r6.s64 = 125;
	// stw r8,2852(r31)
	ctx.current_instruction = 0x88156D28;
	REX_STORE_U32(ctx.r31.u32 + 2852, ctx.r8.u32);
	// addi r29,r31,2828
	ctx.r29.s64 = ctx.r31.s64 + 2828;
	// stw r7,2828(r31)
	ctx.current_instruction = 0x88156D30;
	REX_STORE_U32(ctx.r31.u32 + 2828, ctx.r7.u32);
	// stw r6,2836(r31)
	ctx.current_instruction = 0x88156D34;
	REX_STORE_U32(ctx.r31.u32 + 2836, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,2868(r31)
	ctx.current_instruction = 0x88156D3C;
	REX_STORE_U32(ctx.r31.u32 + 2868, ctx.r9.u32);
	// beq cr6,0x88156d4c
	if (ctx.cr6.eq) goto loc_88156D4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88156D4C;
	sub_8815E528(ctx, base);
loc_88156D4C:
	// stw r25,2864(r31)
	ctx.current_instruction = 0x88156D4C;
	REX_STORE_U32(ctx.r31.u32 + 2864, ctx.r25.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,162
	ctx.r6.s64 = 162;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881567c0
	ctx.lr = 0x88156D68;
	sub_881567C0(ctx, base);
loc_88156D68:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88156dec
	if (!ctx.cr6.eq) goto loc_88156DEC;
	// addi r11,r31,2044
	ctx.r11.s64 = ctx.r31.s64 + 2044;
	// stw r22,2940(r31)
	ctx.current_instruction = 0x88156D74;
	REX_STORE_U32(ctx.r31.u32 + 2940, ctx.r22.u32);
	// addi r10,r31,2056
	ctx.r10.s64 = ctx.r31.s64 + 2056;
	// stw r20,2944(r31)
	ctx.current_instruction = 0x88156D7C;
	REX_STORE_U32(ctx.r31.u32 + 2944, ctx.r20.u32);
	// addi r9,r31,2068
	ctx.r9.s64 = ctx.r31.s64 + 2068;
	// stw r11,2104(r31)
	ctx.current_instruction = 0x88156D84;
	REX_STORE_U32(ctx.r31.u32 + 2104, ctx.r11.u32);
	// stw r24,2948(r31)
	ctx.current_instruction = 0x88156D88;
	REX_STORE_U32(ctx.r31.u32 + 2948, ctx.r24.u32);
	// addi r8,r31,2080
	ctx.r8.s64 = ctx.r31.s64 + 2080;
	// stw r23,2952(r31)
	ctx.current_instruction = 0x88156D90;
	REX_STORE_U32(ctx.r31.u32 + 2952, ctx.r23.u32);
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// stw r21,2956(r31)
	ctx.current_instruction = 0x88156D98;
	REX_STORE_U32(ctx.r31.u32 + 2956, ctx.r21.u32);
	// addi r6,r31,1992
	ctx.r6.s64 = ctx.r31.s64 + 1992;
	// stw r26,2960(r31)
	ctx.current_instruction = 0x88156DA0;
	REX_STORE_U32(ctx.r31.u32 + 2960, ctx.r26.u32);
	// lis r5,-30719
	ctx.r5.s64 = -2013200384;
	// stw r10,2108(r31)
	ctx.current_instruction = 0x88156DA8;
	REX_STORE_U32(ctx.r31.u32 + 2108, ctx.r10.u32);
	// lis r3,-30719
	ctx.r3.s64 = -2013200384;
	// stw r9,2112(r31)
	ctx.current_instruction = 0x88156DB0;
	REX_STORE_U32(ctx.r31.u32 + 2112, ctx.r9.u32);
	// addi r4,r31,2004
	ctx.r4.s64 = ctx.r31.s64 + 2004;
	// stw r8,2116(r31)
	ctx.current_instruction = 0x88156DB8;
	REX_STORE_U32(ctx.r31.u32 + 2116, ctx.r8.u32);
	// addi r11,r7,31648
	ctx.r11.s64 = ctx.r7.s64 + 31648;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// stw r6,2016(r31)
	ctx.current_instruction = 0x88156DC4;
	REX_STORE_U32(ctx.r31.u32 + 2016, ctx.r6.u32);
	// addi r9,r5,32752
	ctx.r9.s64 = ctx.r5.s64 + 32752;
	// stw r4,2020(r31)
	ctx.current_instruction = 0x88156DCC;
	REX_STORE_U32(ctx.r31.u32 + 2020, ctx.r4.u32);
	// addi r8,r3,29440
	ctx.r8.s64 = ctx.r3.s64 + 29440;
	// stw r11,2024(r31)
	ctx.current_instruction = 0x88156DD4;
	REX_STORE_U32(ctx.r31.u32 + 2024, ctx.r11.u32);
	// addi r7,r10,30544
	ctx.r7.s64 = ctx.r10.s64 + 30544;
	// stw r9,2028(r31)
	ctx.current_instruction = 0x88156DDC;
	REX_STORE_U32(ctx.r31.u32 + 2028, ctx.r9.u32);
	// stw r8,2032(r31)
	ctx.current_instruction = 0x88156DE0;
	REX_STORE_U32(ctx.r31.u32 + 2032, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,2036(r31)
	ctx.current_instruction = 0x88156DE8;
	REX_STORE_U32(ctx.r31.u32 + 2036, ctx.r7.u32);
loc_88156DEC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8816D2B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8816D2B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8816D2B0) {
			switch (rex_dispatch_address) {
				case 0x8816D2B8:
				case 0x8816D2F8:
				case 0x8816D378:
				case 0x8816D3FC:
				case 0x8816D43C:
				case 0x8816D490:
				case 0x8816D4B0:
				case 0x8816D520:
				case 0x8816D530:
				case 0x8816D548:
				case 0x8816D55C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8816D2B0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8816D2B8: goto loc_8816D2B8;
		case 0x8816D2F8: goto loc_8816D2F8;
		case 0x8816D378: goto loc_8816D378;
		case 0x8816D3FC: goto loc_8816D3FC;
		case 0x8816D43C: goto loc_8816D43C;
		case 0x8816D490: goto loc_8816D490;
		case 0x8816D4B0: goto loc_8816D4B0;
		case 0x8816D520: goto loc_8816D520;
		case 0x8816D530: goto loc_8816D530;
		case 0x8816D548: goto loc_8816D548;
		case 0x8816D55C: goto loc_8816D55C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8816D2B8;
	__savegprlr_25(ctx, base);
loc_8816D2B8:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8816D2B8;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,452(r3)
	ctx.current_instruction = 0x8816D2BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 452);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816d348
	if (ctx.cr6.eq) goto loc_8816D348;
	// lwz r3,84(r3)
	ctx.current_instruction = 0x8816D2D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x8816D2D4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x8816D2D8;
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
	ctx.current_instruction = 0x8816D2E8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x8816D2EC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8816d2f8
	if (!ctx.cr0.lt) goto loc_8816D2F8;
	// bl 0x88156678
	ctx.lr = 0x8816D2F8;
	sub_88156678(ctx, base);
loc_8816D2F8:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x8816D2F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwimi r11,r31,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r29)
	ctx.current_instruction = 0x8816D300;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,84(r27)
	ctx.current_instruction = 0x8816D304;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r9,20(r10)
	ctx.current_instruction = 0x8816D308;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8816d578
	if (!ctx.cr6.eq) goto loc_8816D578;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816d354
	if (ctx.cr6.eq) goto loc_8816D354;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,14(r29)
	ctx.current_instruction = 0x8816D328;
	REX_STORE_U16(ctx.r29.u32 + 14, ctx.r11.u16);
	// sth r11,16(r29)
	ctx.current_instruction = 0x8816D32C;
	REX_STORE_U16(ctx.r29.u32 + 16, ctx.r11.u16);
	// sth r11,18(r29)
	ctx.current_instruction = 0x8816D330;
	REX_STORE_U16(ctx.r29.u32 + 18, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.current_instruction = 0x8816D334;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// oris r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 131072;
	// stw r10,0(r29)
	ctx.current_instruction = 0x8816D33C;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8816D348:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x8816D348;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,0(r29)
	ctx.current_instruction = 0x8816D350;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_8816D354:
	// lwz r30,84(r27)
	ctx.current_instruction = 0x8816D354;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// addi r28,r11,7152
	ctx.r28.s64 = ctx.r11.s64 + 7152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r10,0(r30)
	ctx.current_instruction = 0x8816D364;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// rldicl r9,r10,7,57
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 7) & 0x7F;
	// rlwinm r26,r9,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r26,r28
	ctx.current_instruction = 0x8816D370;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r28.u32);
	// bl 0x88156500
	ctx.lr = 0x8816D378;
	sub_88156500(ctx, base);
loc_8816D378:
	// addi r8,r28,1
	ctx.r8.s64 = ctx.r28.s64 + 1;
	// li r31,3
	ctx.r31.s64 = 3;
	// lbzx r11,r26,r8
	ctx.current_instruction = 0x8816D380;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8816d390
	if (!ctx.cr6.eq) goto loc_8816D390;
	// stw r31,20(r30)
	ctx.current_instruction = 0x8816D38C;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
loc_8816D390:
	// lwz r10,84(r27)
	ctx.current_instruction = 0x8816D390;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,20(r10)
	ctx.current_instruction = 0x8816D398;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8816d578
	if (!ctx.cr6.eq) goto loc_8816D578;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8816d578
	if (ctx.cr6.lt) goto loc_8816D578;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x8816d578
	if (ctx.cr6.gt) goto loc_8816D578;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// clrlwi r26,r11,30
	ctx.r26.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8816d458
	if (ctx.cr6.lt) goto loc_8816D458;
	// bne cr6,0x8816d578
	if (!ctx.cr6.eq) goto loc_8816D578;
	// lwz r11,0(r29)
	ctx.current_instruction = 0x8816D3C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,0,15,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r10,0(r29)
	ctx.current_instruction = 0x8816D3D0;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r3,84(r27)
	ctx.current_instruction = 0x8816D3D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x8816D3D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ld r8,0(r3)
	ctx.current_instruction = 0x8816D3DC;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r7,r8,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r7,0(r3)
	ctx.current_instruction = 0x8816D3E8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// rldicl r30,r8,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0x1;
	// stw r11,8(r3)
	ctx.current_instruction = 0x8816D3F0;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8816d3fc
	if (!ctx.cr0.lt) goto loc_8816D3FC;
	// bl 0x88156678
	ctx.lr = 0x8816D3FC;
	sub_88156678(ctx, base);
loc_8816D3FC:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x8816D3FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r29)
	ctx.current_instruction = 0x8816D408;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r30,84(r27)
	ctx.current_instruction = 0x8816D40C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r9,20(r30)
	ctx.current_instruction = 0x8816D410;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8816d578
	if (!ctx.cr6.eq) goto loc_8816D578;
	// ld r11,0(r30)
	ctx.current_instruction = 0x8816D41C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// lis r10,-30718
	ctx.r10.s64 = -2013134848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicl r9,r11,6,58
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0x3F;
	// addi r28,r10,7008
	ctx.r28.s64 = ctx.r10.s64 + 7008;
	// rlwinm r25,r9,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r25,r28
	ctx.current_instruction = 0x8816D434;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r28.u32);
	// bl 0x88156500
	ctx.lr = 0x8816D43C;
	sub_88156500(ctx, base);
loc_8816D43C:
	// addi r8,r28,1
	ctx.r8.s64 = ctx.r28.s64 + 1;
	// lbzx r11,r25,r8
	ctx.current_instruction = 0x8816D440;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8816d450
	if (!ctx.cr6.eq) goto loc_8816D450;
	// stw r31,20(r30)
	ctx.current_instruction = 0x8816D44C;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
loc_8816D450:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8816d4f0
	goto loc_8816D4F0;
loc_8816D458:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x8816D458;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// oris r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 131072;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// stw r10,0(r29)
	ctx.current_instruction = 0x8816D468;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r28,r11,7008
	ctx.r28.s64 = ctx.r11.s64 + 7008;
	// lwz r30,84(r27)
	ctx.current_instruction = 0x8816D470;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r10,0(r30)
	ctx.current_instruction = 0x8816D478;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// rldicl r9,r10,6,58
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 6) & 0x3F;
	// rlwinm r25,r9,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r25,r28
	ctx.current_instruction = 0x8816D484;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r28.u32);
	// bne cr6,0x8816d4ac
	if (!ctx.cr6.eq) goto loc_8816D4AC;
	// bl 0x88156500
	ctx.lr = 0x8816D490;
	sub_88156500(ctx, base);
loc_8816D490:
	// addi r8,r28,1
	ctx.r8.s64 = ctx.r28.s64 + 1;
	// lbzx r11,r25,r8
	ctx.current_instruction = 0x8816D494;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8816d4a4
	if (!ctx.cr6.eq) goto loc_8816D4A4;
	// stw r31,20(r30)
	ctx.current_instruction = 0x8816D4A0;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
loc_8816D4A4:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8816d4e0
	goto loc_8816D4E0;
loc_8816D4AC:
	// bl 0x88156500
	ctx.lr = 0x8816D4B0;
	sub_88156500(ctx, base);
loc_8816D4B0:
	// addi r8,r28,1
	ctx.r8.s64 = ctx.r28.s64 + 1;
	// lbzx r11,r25,r8
	ctx.current_instruction = 0x8816D4B4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8816d4c4
	if (!ctx.cr6.eq) goto loc_8816D4C4;
	// stw r31,20(r30)
	ctx.current_instruction = 0x8816D4C0;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
loc_8816D4C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// subfic r28,r11,15
	ctx.xer.ca = ctx.r11.u32 <= 15;
	ctx.r28.u64 = static_cast<uint64_t>(15) - ctx.r11.u64;
	// bne cr6,0x8816d4e0
	if (!ctx.cr6.eq) goto loc_8816D4E0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8816d4e4
	if (ctx.cr6.eq) goto loc_8816D4E4;
loc_8816D4E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8816D4E4:
	// lwz r10,0(r29)
	ctx.current_instruction = 0x8816D4E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwimi r10,r11,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,0(r29)
	ctx.current_instruction = 0x8816D4EC;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_8816D4F0:
	// lwz r11,84(r27)
	ctx.current_instruction = 0x8816D4F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8816D4F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8816d578
	if (!ctx.cr6.eq) goto loc_8816D578;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8816d578
	if (ctx.cr6.lt) goto loc_8816D578;
	// cmpwi cr6,r28,15
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 15, ctx.xer);
	// bgt cr6,0x8816d578
	if (ctx.cr6.gt) goto loc_8816D578;
	// srawi r5,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r26.s32 >> 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881ad268
	ctx.lr = 0x8816D520;
	sub_881AD268(ctx, base);
loc_8816D520:
	// clrlwi r5,r26,31
	ctx.r5.u64 = ctx.r26.u32 & 0x1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881ad268
	ctx.lr = 0x8816D530;
	sub_881AD268(ctx, base);
loc_8816D530:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8816D534:
	// sraw r11,r28,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r28.s32 < 0) & (((ctx.r28.s32 >> temp.u32) << temp.u32) != ctx.r28.s32);
	ctx.r11.s64 = ctx.r28.s32 >> temp.u32;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881ad268
	ctx.lr = 0x8816D548;
	sub_881AD268(ctx, base);
loc_8816D548:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bge 0x8816d534
	if (!ctx.cr0.lt) goto loc_8816D534;
	// addi r3,r29,14
	ctx.r3.s64 = ctx.r29.s64 + 14;
	// bl 0x8815e6f0
	ctx.lr = 0x8816D55C;
	sub_8815E6F0(ctx, base);
loc_8816D55C:
	// lwz r10,0(r29)
	ctx.current_instruction = 0x8816D55C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwimi r10,r11,19,12,13
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xC0000) | (ctx.r10.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r10,0(r29)
	ctx.current_instruction = 0x8816D56C;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8816D578:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88176ED8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88176ED8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88176ED8) {
			switch (rex_dispatch_address) {
				case 0x88176EE0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88176ED8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88176EE0: goto loc_88176EE0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88176EE0;
	__savegprlr_14(ctx, base);
loc_88176EE0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88176ef0
	if (!ctx.cr6.eq) goto loc_88176EF0;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88176EF0:
	// fmul f0,f2,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f2.f64 * ctx.f2.f64;
	// lwz r10,20(r3)
	ctx.current_instruction = 0x88176EF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fmul f13,f5,f5
	ctx.f13.f64 = ctx.f5.f64 * ctx.f5.f64;
	// lwz r20,15408(r3)
	ctx.current_instruction = 0x88176EFC;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 15408);
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// lwz r19,15412(r3)
	ctx.current_instruction = 0x88176F04;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 15412);
	// lwz r8,15416(r3)
	ctx.current_instruction = 0x88176F08;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 15416);
	// lwz r7,15420(r3)
	ctx.current_instruction = 0x88176F0C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 15420);
	// addze r28,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r28.s64 = temp.s64;
	// lwz r5,15424(r3)
	ctx.current_instruction = 0x88176F14;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 15424);
	// fmadd f12,f1,f1,f0
	ctx.f12.f64 = std::fma(ctx.f1.f64, ctx.f1.f64, ctx.f0.f64);
	// fmadd f11,f4,f4,f13
	ctx.f11.f64 = std::fma(ctx.f4.f64, ctx.f4.f64, ctx.f13.f64);
	// fsqrt f0,f12
	ctx.f0.f64 = sqrt(ctx.f12.f64);
	// fsqrt f13,f11
	ctx.f13.f64 = sqrt(ctx.f11.f64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x88176f38
	if (!ctx.cr6.lt) goto loc_88176F38;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x88176f3c
	goto loc_88176F3C;
loc_88176F38:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_88176F3C:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f10,8624(r11)
	ctx.current_instruction = 0x88176F40;
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x88176f70
	if (!ctx.cr6.lt) goto loc_88176F70;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x88176f5c
	if (!ctx.cr6.lt) goto loc_88176F5C;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// b 0x88176f60
	goto loc_88176F60;
loc_88176F5C:
	// fmr f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64;
loc_88176F60:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f12,12000(r11)
	ctx.current_instruction = 0x88176F64;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 12000);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x88176fa4
	if (!ctx.cr6.gt) goto loc_88176FA4;
loc_88176F70:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x88176f80
	if (!ctx.cr6.lt) goto loc_88176F80;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x88176f84
	goto loc_88176F84;
loc_88176F80:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_88176F84:
	// fcmpu cr6,f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x88176f9c
	if (!ctx.cr6.lt) goto loc_88176F9C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x88176fa8
	if (ctx.cr6.lt) goto loc_88176FA8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x88176fa8
	goto loc_88176FA8;
loc_88176F9C:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x88176fa8
	goto loc_88176FA8;
loc_88176FA4:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_88176FA8:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lfd f13,23440(r11)
	ctx.current_instruction = 0x88176FB0;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 23440);
	// lfd f12,12088(r9)
	ctx.current_instruction = 0x88176FB4;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r9.u32 + 12088);
	// fmadd f13,f7,f13,f12
	ctx.f13.f64 = std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f12.f64);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-168(r1)
	ctx.current_instruction = 0x88176FC0;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f11.u64);
	// lwz r4,-164(r1)
	ctx.current_instruction = 0x88176FC4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x88176fe0
	if (!ctx.cr6.gt) goto loc_88176FE0;
	// cmpwi cr6,r4,256
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 256, ctx.xer);
	// ble cr6,0x88176fe4
	if (!ctx.cr6.gt) goto loc_88176FE4;
	// li r4,256
	ctx.r4.s64 = 256;
	// b 0x88176fe4
	goto loc_88176FE4;
loc_88176FE0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_88176FE4:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,12528(r11)
	ctx.current_instruction = 0x88176FE8;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12528);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x88177008
	if (!ctx.cr6.lt) goto loc_88177008;
	// li r30,512
	ctx.r30.s64 = 512;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r22,10
	ctx.r22.s64 = 10;
	// li r6,511
	ctx.r6.s64 = 511;
	// b 0x88177034
	goto loc_88177034;
loc_88177008:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x88177024
	if (!ctx.cr6.lt) goto loc_88177024;
	// li r30,256
	ctx.r30.s64 = 256;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r22,9
	ctx.r22.s64 = 9;
	// li r6,255
	ctx.r6.s64 = 255;
	// b 0x88177034
	goto loc_88177034;
loc_88177024:
	// li r30,128
	ctx.r30.s64 = 128;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r22,8
	ctx.r22.s64 = 8;
	// li r6,127
	ctx.r6.s64 = 127;
loc_88177034:
	// extsw r9,r30
	ctx.r9.s64 = ctx.r30.s32;
	// lwz r31,15388(r3)
	ctx.current_instruction = 0x88177038;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 15388);
	// lwz r29,15396(r3)
	ctx.current_instruction = 0x8817703C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 15396);
	// mullw r17,r10,r30
	ctx.r17.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// std r9,-168(r1)
	ctx.current_instruction = 0x88177044;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r9.u64);
	// stw r17,-204(r1)
	ctx.current_instruction = 0x88177048;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r17.u32);
	// mullw r16,r31,r30
	ctx.r16.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// stw r16,-200(r1)
	ctx.current_instruction = 0x88177050;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r16.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// lfd f0,-168(r1)
	ctx.current_instruction = 0x88177058;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmul f12,f13,f1
	ctx.f12.f64 = ctx.f13.f64 * ctx.f1.f64;
	// fmul f11,f13,f3
	ctx.f11.f64 = ctx.f13.f64 * ctx.f3.f64;
	// fmul f9,f13,f6
	ctx.f9.f64 = ctx.f13.f64 * ctx.f6.f64;
	// fmul f10,f13,f4
	ctx.f10.f64 = ctx.f13.f64 * ctx.f4.f64;
	// fmul f7,f13,f5
	ctx.f7.f64 = ctx.f13.f64 * ctx.f5.f64;
	// fmul f8,f13,f2
	ctx.f8.f64 = ctx.f13.f64 * ctx.f2.f64;
	// fctiwz f6,f12
	ctx.f6.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f6,-168(r1)
	ctx.current_instruction = 0x88177080;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f6.u64);
	// fctiwz f5,f11
	ctx.f5.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f5,-176(r1)
	ctx.current_instruction = 0x88177088;
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.f5.u64);
	// fctiwz f3,f9
	ctx.f3.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// lwz r18,-164(r1)
	ctx.current_instruction = 0x88177090;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// fctiwz f4,f10
	ctx.f4.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// lwz r10,-172(r1)
	ctx.current_instruction = 0x88177098;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// stfd f4,-184(r1)
	ctx.current_instruction = 0x8817709C;
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.f4.u64);
	// fctiwz f1,f7
	ctx.f1.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f3,-192(r1)
	ctx.current_instruction = 0x881770A4;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.f3.u64);
	// fctiwz f2,f8
	ctx.f2.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// lwz r31,-180(r1)
	ctx.current_instruction = 0x881770AC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// stfd f2,-176(r1)
	ctx.current_instruction = 0x881770B0;
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.f2.u64);
	// lwz r9,-188(r1)
	ctx.current_instruction = 0x881770B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// stfd f1,-168(r1)
	ctx.current_instruction = 0x881770B8;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f1.u64);
	// ble cr6,0x88177344
	if (!ctx.cr6.gt) goto loc_88177344;
	// subf r27,r31,r9
	ctx.r27.u64 = ctx.r9.u64 - ctx.r31.u64;
	// subf r26,r18,r10
	ctx.r26.u64 = ctx.r10.u64 - ctx.r18.u64;
	// addi r23,r5,-1
	ctx.r23.s64 = ctx.r5.s64 + -1;
	// addi r24,r7,-1
	ctx.r24.s64 = ctx.r7.s64 + -1;
	// addi r29,r8,-1
	ctx.r29.s64 = ctx.r8.s64 + -1;
loc_881770D4:
	// lwz r10,15392(r3)
	ctx.current_instruction = 0x881770D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15392);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88177260
	if (!ctx.cr6.gt) goto loc_88177260;
loc_881770F0:
	// lwz r10,-180(r1)
	ctx.current_instruction = 0x881770F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// add. r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + ctx.r18.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt 0x88177250
	if (ctx.cr0.lt) goto loc_88177250;
	// cmpw cr6,r9,r17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88177250
	if (!ctx.cr6.lt) goto loc_88177250;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x88177250
	if (ctx.cr6.lt) goto loc_88177250;
	// cmpw cr6,r8,r16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88177250
	if (!ctx.cr6.lt) goto loc_88177250;
	// lwz r15,20(r3)
	ctx.current_instruction = 0x88177118;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// sraw r7,r8,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// mullw r7,r7,r15
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r15.s32);
	// lwz r5,15404(r3)
	ctx.current_instruction = 0x88177124;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 15404);
	// sraw r10,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r10.s64 = ctx.r9.s32 >> temp.u32;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// and r14,r8,r6
	ctx.r14.u64 = ctx.r8.u64 & ctx.r6.u64;
	// and r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 & ctx.r6.u64;
	// subf r7,r14,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r14.u64;
	// lbz r31,0(r10)
	ctx.current_instruction = 0x88177144;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// lbzx r15,r15,r10
	ctx.current_instruction = 0x8817714C;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r10.u32);
	// lbz r10,1(r10)
	ctx.current_instruction = 0x88177150;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// stw r10,-208(r1)
	ctx.current_instruction = 0x88177158;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// mullw r10,r15,r14
	ctx.r10.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r14.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r31,-208(r1)
	ctx.current_instruction = 0x88177164;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// mullw r10,r31,r5
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r10,r5,r4
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// srawi r7,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 8;
	// sraw r5,r7,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r5.s64 = ctx.r7.s32 >> temp.u32;
	// stb r5,1(r29)
	ctx.current_instruction = 0x8817717C;
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r5.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// beq cr6,0x8817724c
	if (ctx.cr6.eq) goto loc_8817724C;
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// std r9,-160(r1)
	ctx.current_instruction = 0x8817718C;
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r9.u64);
	// srawi r31,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 1;
	// lwz r17,-204(r1)
	ctx.current_instruction = 0x88177194;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// sraw r7,r8,r22
	temp.u32 = ctx.r22.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// lwz r16,-200(r1)
	ctx.current_instruction = 0x8817719C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// sraw r10,r9,r22
	temp.u32 = ctx.r22.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r10.s64 = ctx.r9.s32 >> temp.u32;
	// mullw r7,r7,r28
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r28.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// and r15,r31,r6
	ctx.r15.u64 = ctx.r31.u64 & ctx.r6.u64;
	// add r10,r7,r20
	ctx.r10.u64 = ctx.r7.u64 + ctx.r20.u64;
	// and r14,r5,r6
	ctx.r14.u64 = ctx.r5.u64 & ctx.r6.u64;
	// subf r5,r15,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r15.u64;
	// lbzx r31,r7,r20
	ctx.current_instruction = 0x881771BC;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r20.u32);
	// subf r5,r14,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r14.u64;
	// lbzx r9,r10,r28
	ctx.current_instruction = 0x881771C4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// lbz r10,1(r10)
	ctx.current_instruction = 0x881771C8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stw r5,-192(r1)
	ctx.current_instruction = 0x881771CC;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r5.u32);
	// mullw r5,r9,r15
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r15.s32);
	// stw r31,-208(r1)
	ctx.current_instruction = 0x881771D4;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r31.u32);
	// lwz r9,-192(r1)
	ctx.current_instruction = 0x881771D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// mullw r10,r10,r14
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r14.s32);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r10,-208(r1)
	ctx.current_instruction = 0x881771E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// li r31,0
	ctx.r31.s64 = 0;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r10,r7,r19
	ctx.r10.u64 = ctx.r7.u64 + ctx.r19.u64;
	// mullw r5,r5,r4
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// sraw r5,r5,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r5.s64 = ctx.r5.s32 >> temp.u32;
	// stbu r5,1(r24)
	ctx.current_instruction = 0x88177204;
	ea = 1 + ctx.r24.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r24.u32 = ea;
	// lbz r5,1(r10)
	ctx.current_instruction = 0x88177208;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzx r10,r10,r28
	ctx.current_instruction = 0x8817720C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// lbzx r7,r7,r19
	ctx.current_instruction = 0x88177210;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r19.u32);
	// stw r7,-192(r1)
	ctx.current_instruction = 0x88177214;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// mullw r7,r10,r15
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r15.s32);
	// mullw r10,r5,r14
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r14.s32);
	// lwz r5,-192(r1)
	ctx.current_instruction = 0x88177220;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// ld r9,-160(r1)
	ctx.current_instruction = 0x8817722C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r7,r10,r4
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// sraw r10,r5,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r10.s64 = ctx.r5.s32 >> temp.u32;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// stbu r7,1(r23)
	ctx.current_instruction = 0x88177244;
	ea = 1 + ctx.r23.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r23.u32 = ea;
	// b 0x88177250
	goto loc_88177250;
loc_8817724C:
	// li r31,1
	ctx.r31.s64 = 1;
loc_88177250:
	// lwz r10,15392(r3)
	ctx.current_instruction = 0x88177250;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15392);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881770f0
	if (ctx.cr6.lt) goto loc_881770F0;
loc_88177260:
	// lwz r9,-172(r1)
	ctx.current_instruction = 0x88177260;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// addi r25,r21,1
	ctx.r25.s64 = ctx.r21.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r31,r26,r9
	ctx.r31.u64 = ctx.r26.u64 + ctx.r9.u64;
	// lwz r9,-164(r1)
	ctx.current_instruction = 0x88177270;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// li r26,0
	ctx.r26.s64 = 0;
	// add r27,r27,r9
	ctx.r27.u64 = ctx.r27.u64 + ctx.r9.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// ble cr6,0x88177324
	if (!ctx.cr6.gt) goto loc_88177324;
loc_88177288:
	// lwz r10,-180(r1)
	ctx.current_instruction = 0x88177288;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// add. r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + ctx.r18.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt 0x88177314
	if (ctx.cr0.lt) goto loc_88177314;
	// cmpw cr6,r9,r17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88177314
	if (!ctx.cr6.lt) goto loc_88177314;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x88177314
	if (ctx.cr6.lt) goto loc_88177314;
	// cmpw cr6,r8,r16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88177314
	if (!ctx.cr6.lt) goto loc_88177314;
	// lwz r21,20(r3)
	ctx.current_instruction = 0x881772B0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// sraw r10,r8,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// mullw r10,r10,r21
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r21.s32);
	// lwz r7,15404(r3)
	ctx.current_instruction = 0x881772BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 15404);
	// sraw r5,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r5.s64 = ctx.r9.s32 >> temp.u32;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// subf r7,r5,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r5.u64;
	// and r15,r9,r6
	ctx.r15.u64 = ctx.r9.u64 & ctx.r6.u64;
	// subf r14,r15,r7
	ctx.r14.u64 = ctx.r7.u64 - ctx.r15.u64;
	// lbzx r7,r21,r10
	ctx.current_instruction = 0x881772DC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r10.u32);
	// lbz r21,0(r10)
	ctx.current_instruction = 0x881772E0;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r10,1(r10)
	ctx.current_instruction = 0x881772E4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// mullw r7,r7,r5
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// stw r10,-192(r1)
	ctx.current_instruction = 0x881772EC;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// mullw r10,r14,r21
	ctx.r10.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r21.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r5,-192(r1)
	ctx.current_instruction = 0x881772F8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// mullw r7,r5,r15
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r15.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mullw r7,r10,r4
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// sraw r10,r5,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r10.s64 = ctx.r5.s32 >> temp.u32;
	// stbu r10,1(r29)
	ctx.current_instruction = 0x88177310;
	ea = 1 + ctx.r29.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r29.u32 = ea;
loc_88177314:
	// lwz r10,15392(r3)
	ctx.current_instruction = 0x88177314;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15392);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88177288
	if (ctx.cr6.lt) goto loc_88177288;
loc_88177324:
	// lwz r10,-172(r1)
	ctx.current_instruction = 0x88177324;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// addi r21,r25,1
	ctx.r21.s64 = ctx.r25.s64 + 1;
	// lwz r9,15396(r3)
	ctx.current_instruction = 0x8817732C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15396);
	// add r26,r31,r10
	ctx.r26.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r10,-164(r1)
	ctx.current_instruction = 0x88177334;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// cmpw cr6,r21,r9
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r9.s32, ctx.xer);
	// add r27,r27,r10
	ctx.r27.u64 = ctx.r27.u64 + ctx.r10.u64;
	// blt cr6,0x881770d4
	if (ctx.cr6.lt) goto loc_881770D4;
loc_88177344:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8817DFC8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8817DFC8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8817DFC8) {
			switch (rex_dispatch_address) {
				case 0x8817DFD0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817DFC8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8817DFD0: goto loc_8817DFD0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x8817DFD0;
	__savegprlr_21(ctx, base);
loc_8817DFD0:
	// lwz r25,136(r3)
	ctx.current_instruction = 0x8817DFD0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r6,15720(r3)
	ctx.current_instruction = 0x8817DFD8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 15720);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// mullw r10,r25,r4
	ctx.r10.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r4.s32);
	// lwz r31,15724(r3)
	ctx.current_instruction = 0x8817DFE4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 15724);
	// lwz r8,15728(r3)
	ctx.current_instruction = 0x8817DFE8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 15728);
	// lwz r30,3972(r3)
	ctx.current_instruction = 0x8817DFEC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 3972);
	// lwz r9,15732(r3)
	ctx.current_instruction = 0x8817DFF0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15732);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r31,r11
	ctx.r29.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r6,r30
	ctx.r11.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bge cr6,0x8817e1bc
	if (!ctx.cr6.lt) goto loc_8817E1BC;
	// addi r27,r10,-1
	ctx.r27.s64 = ctx.r10.s64 + -1;
	// addi r28,r8,-1
	ctx.r28.s64 = ctx.r8.s64 + -1;
loc_8817E024:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8817e1b0
	if (ctx.cr6.eq) goto loc_8817E1B0;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// addi r30,r25,-1
	ctx.r30.s64 = ctx.r25.s64 + -1;
loc_8817E038:
	// lbz r10,1(r11)
	ctx.current_instruction = 0x8817E038;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,3(r11)
	ctx.current_instruction = 0x8817E03C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lbz r6,2(r11)
	ctx.current_instruction = 0x8817E044;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// lbz r31,5(r11)
	ctx.current_instruction = 0x8817E04C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// lbz r24,0(r11)
	ctx.current_instruction = 0x8817E054;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// srawi r23,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r23.s64 = ctx.r10.s32 >> 6;
	// lbz r22,4(r11)
	ctx.current_instruction = 0x8817E05C;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r21,r6
	ctx.r21.s64 = ctx.r6.s8;
	// lwz r10,140(r3)
	ctx.current_instruction = 0x8817E064;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// rlwimi r8,r23,0,30,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x3) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFC);
	// srawi r23,r21,4
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xF) != 0);
	ctx.r23.s64 = ctx.r21.s32 >> 4;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// rlwimi r8,r23,0,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// rlwimi r8,r24,0,24,25
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xC0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwimi r22,r31,0,26,27
	ctx.r22.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x30) | (ctx.r22.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r9,r6,2,22,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3F0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC0F);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r31,r8,24
	ctx.r31.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r8,r22,0,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xF0;
	// rlwinm r9,r9,2,24,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xF0;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8817e0ec
	if (ctx.cr6.eq) goto loc_8817E0EC;
	// lwz r10,136(r3)
	ctx.current_instruction = 0x8817E0A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r6,1(r10)
	ctx.current_instruction = 0x8817E0B4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r24,5(r10)
	ctx.current_instruction = 0x8817E0B8;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r23,0(r10)
	ctx.current_instruction = 0x8817E0BC;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r6,r6,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC;
	// lbz r10,4(r10)
	ctx.current_instruction = 0x8817E0C4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r24,r24,0,28,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xC;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// rlwinm r23,r23,0,28,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xC;
	// srawi r24,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 2;
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// or r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 | ctx.r23.u64;
	// or r10,r24,r10
	ctx.r10.u64 = ctx.r24.u64 | ctx.r10.u64;
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
loc_8817E0EC:
	// stb r31,0(r7)
	ctx.current_instruction = 0x8817E0EC;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// stbu r9,1(r7)
	ctx.current_instruction = 0x8817E0F4;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// stbu r8,1(r28)
	ctx.current_instruction = 0x8817E0F8;
	ea = 1 + ctx.r28.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r28.u32 = ea;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x8817E0FC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbz r9,0(r11)
	ctx.current_instruction = 0x8817E104;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,2(r11)
	ctx.current_instruction = 0x8817E108;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x8817E10C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r31,r6,0,26,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x30;
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// rlwinm r24,r10,0,26,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	// rlwinm r9,r9,2,24,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC0;
	// or r31,r31,r24
	ctx.r31.u64 = ctx.r31.u64 | ctx.r24.u64;
	// rlwimi r6,r10,2,22,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFC03);
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// rlwinm r8,r8,0,26,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x30;
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// or r10,r31,r9
	ctx.r10.u64 = ctx.r31.u64 | ctx.r9.u64;
	// rlwinm r9,r6,4,24,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xF0;
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bge cr6,0x8817e160
	if (!ctx.cr6.lt) goto loc_8817E160;
	// lbz r10,6(r11)
	ctx.current_instruction = 0x8817E144;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lbz r6,8(r11)
	ctx.current_instruction = 0x8817E14C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// rlwimi r6,r10,2,28,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// clrlwi r10,r6,28
	ctx.r10.u64 = ctx.r6.u32 & 0xF;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
loc_8817E160:
	// lbz r10,4(r11)
	ctx.current_instruction = 0x8817E160;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// lbz r6,5(r11)
	ctx.current_instruction = 0x8817E168;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwimi r6,r10,2,22,25
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwinm r10,r6,0,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF0;
	// bge cr6,0x8817e194
	if (!ctx.cr6.lt) goto loc_8817E194;
	// lbz r6,10(r11)
	ctx.current_instruction = 0x8817E178;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lbz r31,11(r11)
	ctx.current_instruction = 0x8817E180;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// rlwimi r31,r6,2,28,29
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC) | (ctx.r31.u64 & 0xFFFFFFFFFFFFFFF3);
	// clrlwi r6,r31,28
	ctx.r6.u64 = ctx.r31.u32 & 0xF;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_8817E194:
	// stb r8,0(r29)
	ctx.current_instruction = 0x8817E194;
	REX_STORE_U8(ctx.r29.u32 + 0, ctx.r8.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stbu r9,1(r29)
	ctx.current_instruction = 0x8817E19C;
	ea = 1 + ctx.r29.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r29.u32 = ea;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stbu r10,1(r27)
	ctx.current_instruction = 0x8817E1A4;
	ea = 1 + ctx.r27.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r27.u32 = ea;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bdnz 0x8817e038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817E038;
loc_8817E1B0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8817e024
	if (ctx.cr6.lt) goto loc_8817E024;
loc_8817E1BC:
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88183CF0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88183CF0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88183CF0;
	ctx.current_instruction = 0x88183CF0;
	// std r31,-8(r1)
	ctx.current_instruction = 0x88183CF0;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r9,3392(r3)
	ctx.current_instruction = 0x88183CF4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3392);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,140(r3)
	ctx.current_instruction = 0x88183CFC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r7,188(r3)
	ctx.current_instruction = 0x88183D00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r5,200(r3)
	ctx.current_instruction = 0x88183D08;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// divwu r4,r8,r9
	ctx.r4.u64 = uint32_t(ctx.r9.u32 ? ctx.r8.u32 / ctx.r9.u32 : 0);
	// lwz r31,136(r3)
	ctx.current_instruction = 0x88183D10;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// divwu r7,r7,r9
	ctx.r7.u64 = uint32_t(ctx.r9.u32 ? ctx.r7.u32 / ctx.r9.u32 : 0);
	// lwz r10,220(r3)
	ctx.current_instruction = 0x88183D18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// divwu r5,r5,r9
	ctx.r5.u64 = uint32_t(ctx.r9.u32 ? ctx.r5.u32 / ctx.r9.u32 : 0);
	// lwz r11,224(r3)
	ctx.current_instruction = 0x88183D20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// divwu r31,r31,r9
	ctx.r31.u64 = uint32_t(ctx.r9.u32 ? ctx.r31.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r6,3876(r3)
	ctx.current_instruction = 0x88183D2C;
	REX_STORE_U32(ctx.r3.u32 + 3876, ctx.r6.u32);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r7,3880(r3)
	ctx.current_instruction = 0x88183D34;
	REX_STORE_U32(ctx.r3.u32 + 3880, ctx.r7.u32);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r9,3788(r3)
	ctx.current_instruction = 0x88183D3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3788);
	// stw r6,3884(r3)
	ctx.current_instruction = 0x88183D40;
	REX_STORE_U32(ctx.r3.u32 + 3884, ctx.r6.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r5,3888(r3)
	ctx.current_instruction = 0x88183D48;
	REX_STORE_U32(ctx.r3.u32 + 3888, ctx.r5.u32);
	// stw r4,3868(r3)
	ctx.current_instruction = 0x88183D4C;
	REX_STORE_U32(ctx.r3.u32 + 3868, ctx.r4.u32);
	// stw r31,3872(r3)
	ctx.current_instruction = 0x88183D50;
	REX_STORE_U32(ctx.r3.u32 + 3872, ctx.r31.u32);
	// stw r10,3892(r3)
	ctx.current_instruction = 0x88183D54;
	REX_STORE_U32(ctx.r3.u32 + 3892, ctx.r10.u32);
	// stw r11,3896(r3)
	ctx.current_instruction = 0x88183D58;
	REX_STORE_U32(ctx.r3.u32 + 3896, ctx.r11.u32);
	// stw r8,3904(r3)
	ctx.current_instruction = 0x88183D5C;
	REX_STORE_U32(ctx.r3.u32 + 3904, ctx.r8.u32);
	// beq cr6,0x88183d68
	if (ctx.cr6.eq) goto loc_88183D68;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_88183D68:
	// lwz r8,3776(r3)
	ctx.current_instruction = 0x88183D68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// lwz r7,3780(r3)
	ctx.current_instruction = 0x88183D6C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3780);
	// lwz r9,3784(r3)
	ctx.current_instruction = 0x88183D70;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3784);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r6,3812(r3)
	ctx.current_instruction = 0x88183D7C;
	REX_STORE_U32(ctx.r3.u32 + 3812, ctx.r6.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,3856(r3)
	ctx.current_instruction = 0x88183D84;
	REX_STORE_U32(ctx.r3.u32 + 3856, ctx.r10.u32);
	// stw r8,3860(r3)
	ctx.current_instruction = 0x88183D88;
	REX_STORE_U32(ctx.r3.u32 + 3860, ctx.r8.u32);
	// stw r7,3864(r3)
	ctx.current_instruction = 0x88183D8C;
	REX_STORE_U32(ctx.r3.u32 + 3864, ctx.r7.u32);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88183D90;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88187B10) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88187B10;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88187B10) {
			switch (rex_dispatch_address) {
				case 0x88187B78:
				case 0x88187B80:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88187B10;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88187B78: goto loc_88187B78;
		case 0x88187B80: goto loc_88187B80;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88187B14;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88187B18;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88187B1C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// stw r11,0(r31)
	ctx.current_instruction = 0x88187B2C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,304(r31)
	ctx.current_instruction = 0x88187B30;
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r11,308(r31)
	ctx.current_instruction = 0x88187B34;
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r11,4(r31)
	ctx.current_instruction = 0x88187B38;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	ctx.current_instruction = 0x88187B3C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	ctx.current_instruction = 0x88187B40;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	ctx.current_instruction = 0x88187B44;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	ctx.current_instruction = 0x88187B48;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	ctx.current_instruction = 0x88187B4C;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	ctx.current_instruction = 0x88187B50;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	ctx.current_instruction = 0x88187B54;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	ctx.current_instruction = 0x88187B58;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	ctx.current_instruction = 0x88187B5C;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	ctx.current_instruction = 0x88187B60;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	ctx.current_instruction = 0x88187B64;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,300(r31)
	ctx.current_instruction = 0x88187B68;
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r11,292(r31)
	ctx.current_instruction = 0x88187B6C;
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stw r11,296(r31)
	ctx.current_instruction = 0x88187B70;
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// bl 0x881cea68
	ctx.lr = 0x88187B78;
	sub_881CEA68(ctx, base);
loc_88187B78:
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x881ce998
	ctx.lr = 0x88187B80;
	sub_881CE998(ctx, base);
loc_88187B80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88187B84;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88187B8C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881887C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881887C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881887C0) {
			switch (rex_dispatch_address) {
				case 0x881887C8:
				case 0x88188818:
				case 0x881888C8:
				case 0x881888D8:
				case 0x881888E4:
				case 0x881888F8:
				case 0x88188900:
				case 0x88188968:
				case 0x88188984:
				case 0x88188A98:
				case 0x88188AA8:
				case 0x88188AC4:
				case 0x88188ADC:
				case 0x88188AF4:
				case 0x88188B0C:
				case 0x88188B1C:
				case 0x88188B7C:
				case 0x88188B98:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881887C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881887C8: goto loc_881887C8;
		case 0x88188818: goto loc_88188818;
		case 0x881888C8: goto loc_881888C8;
		case 0x881888D8: goto loc_881888D8;
		case 0x881888E4: goto loc_881888E4;
		case 0x881888F8: goto loc_881888F8;
		case 0x88188900: goto loc_88188900;
		case 0x88188968: goto loc_88188968;
		case 0x88188984: goto loc_88188984;
		case 0x88188A98: goto loc_88188A98;
		case 0x88188AA8: goto loc_88188AA8;
		case 0x88188AC4: goto loc_88188AC4;
		case 0x88188ADC: goto loc_88188ADC;
		case 0x88188AF4: goto loc_88188AF4;
		case 0x88188B0C: goto loc_88188B0C;
		case 0x88188B1C: goto loc_88188B1C;
		case 0x88188B7C: goto loc_88188B7C;
		case 0x88188B98: goto loc_88188B98;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x881887C8;
	__savegprlr_24(ctx, base);
loc_881887C8:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x881887C8;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x881887f4
	if (!ctx.cr6.eq) goto loc_881887F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_881887F4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x88188838
	if (ctx.cr6.eq) goto loc_88188838;
	// lwz r30,16(r28)
	ctx.current_instruction = 0x881887FC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lhz r29,14(r28)
	ctx.current_instruction = 0x88188808;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r28.u32 + 14);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88188368
	ctx.lr = 0x88188818;
	sub_88188368(ctx, base);
loc_88188818:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88188838
	if (!ctx.cr6.eq) goto loc_88188838;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x881889ac
	if (ctx.cr6.eq) goto loc_881889AC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8818884c
	if (!ctx.cr6.eq) goto loc_8818884C;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// beq cr6,0x881888bc
	if (ctx.cr6.eq) goto loc_881888BC;
loc_88188838:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r24)
	ctx.current_instruction = 0x88188840;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8818884C:
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x881888bc
	if (ctx.cr6.eq) goto loc_881888BC;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x881888bc
	if (ctx.cr6.eq) goto loc_881888BC;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x881888bc
	if (ctx.cr6.eq) goto loc_881888BC;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x881888bc
	if (ctx.cr6.eq) goto loc_881888BC;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x881888bc
	if (ctx.cr6.eq) goto loc_881888BC;
	// lis r11,12850
	ctx.r11.s64 = 842137600;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x881888bc
	if (ctx.cr6.eq) goto loc_881888BC;
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x88188900
	if (!ctx.cr6.eq) goto loc_88188900;
loc_881888BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,312
	ctx.r3.s64 = 312;
	// bl 0x8815b9f8
	ctx.lr = 0x881888C8;
	sub_8815B9F8(ctx, base);
loc_881888C8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88188838
	if (ctx.cr6.eq) goto loc_88188838;
	// bl 0x88187b10
	ctx.lr = 0x881888D8;
	sub_88187B10(ctx, base);
loc_881888D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8815b9f8
	ctx.lr = 0x881888E4;
	sub_8815B9F8(ctx, base);
loc_881888E4:
	// stw r3,0(r31)
	ctx.current_instruction = 0x881888E4;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88188914
	if (!ctx.cr6.eq) goto loc_88188914;
loc_881888F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88187b98
	ctx.lr = 0x881888F8;
	sub_88187B98(ctx, base);
loc_881888F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8815ba70
	ctx.lr = 0x88188900;
	sub_8815BA70(ctx, base);
loc_88188900:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r24)
	ctx.current_instruction = 0x88188908;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88188914:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88188924:
	// lwzu r9,4(r11)
	ctx.current_instruction = 0x88188924;
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ctx.current_instruction = 0x88188928;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x88188924
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88188924;
	// lwz r10,0(r31)
	ctx.current_instruction = 0x88188930;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r10)
	ctx.current_instruction = 0x88188934;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x88188944
	if (ctx.cr6.gt) goto loc_88188944;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_88188944:
	// stw r11,8(r10)
	ctx.current_instruction = 0x88188944;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r30,0(r31)
	ctx.current_instruction = 0x88188948;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r30)
	ctx.current_instruction = 0x8818894C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8818896c
	if (!ctx.cr6.eq) goto loc_8818896C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r28)
	ctx.current_instruction = 0x8818895C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r4,4(r28)
	ctx.current_instruction = 0x88188960;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x88188600
	ctx.lr = 0x88188968;
	sub_88188600(ctx, base);
loc_88188968:
	// stw r3,20(r30)
	ctx.current_instruction = 0x88188968;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
loc_8818896C:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r5,8(r28)
	ctx.current_instruction = 0x88188970;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,4(r28)
	ctx.current_instruction = 0x88188978;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x881cea20
	ctx.lr = 0x88188984;
	sub_881CEA20(ctx, base);
loc_88188984:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r26,28(r31)
	ctx.current_instruction = 0x88188988;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,32(r31)
	ctx.current_instruction = 0x88188990;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// stw r11,20(r31)
	ctx.current_instruction = 0x88188994;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	ctx.current_instruction = 0x88188998;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r27,292(r31)
	ctx.current_instruction = 0x8818899C;
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r27.u32);
	// stw r31,0(r24)
	ctx.current_instruction = 0x881889A0;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_881889AC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x88188a6c
	if (ctx.cr6.eq) goto loc_88188A6C;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x881889e8
	if (!ctx.cr6.eq) goto loc_881889E8;
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// beq cr6,0x88188a8c
	if (ctx.cr6.eq) goto loc_88188A8C;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// beq cr6,0x88188a8c
	if (ctx.cr6.eq) goto loc_88188A8C;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 32, ctx.xer);
	// beq cr6,0x88188a8c
	if (ctx.cr6.eq) goto loc_88188A8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r24)
	ctx.current_instruction = 0x881889DC;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_881889E8:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x88188a8c
	if (ctx.cr6.eq) goto loc_88188A8C;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x88188a8c
	if (ctx.cr6.eq) goto loc_88188A8C;
	// lis r11,14677
	ctx.r11.s64 = 961871872;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x88188a8c
	if (ctx.cr6.eq) goto loc_88188A8C;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x88188a8c
	if (ctx.cr6.eq) goto loc_88188A8C;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x88188a8c
	if (ctx.cr6.eq) goto loc_88188A8C;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x88188a8c
	if (ctx.cr6.eq) goto loc_88188A8C;
	// lis r11,12850
	ctx.r11.s64 = 842137600;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x88188a8c
	if (ctx.cr6.eq) goto loc_88188A8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r24)
	ctx.current_instruction = 0x88188A60;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88188A6C:
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// beq cr6,0x88188a8c
	if (ctx.cr6.eq) goto loc_88188A8C;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// beq cr6,0x88188a8c
	if (ctx.cr6.eq) goto loc_88188A8C;
	// cmpwi cr6,r29,24
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 24, ctx.xer);
	// beq cr6,0x88188a8c
	if (ctx.cr6.eq) goto loc_88188A8C;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 32, ctx.xer);
	// bne cr6,0x88188838
	if (!ctx.cr6.eq) goto loc_88188838;
loc_88188A8C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,312
	ctx.r3.s64 = 312;
	// bl 0x8815b9f8
	ctx.lr = 0x88188A98;
	sub_8815B9F8(ctx, base);
loc_88188A98:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88188838
	if (ctx.cr6.eq) goto loc_88188838;
	// bl 0x88187b10
	ctx.lr = 0x88188AA8;
	sub_88187B10(ctx, base);
loc_88188AA8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x88188ae0
	if (!ctx.cr6.eq) goto loc_88188AE0;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// bne cr6,0x88188b10
	if (!ctx.cr6.eq) goto loc_88188B10;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1064
	ctx.r3.s64 = 1064;
	// bl 0x8815b9f8
	ctx.lr = 0x88188AC4;
	sub_8815B9F8(ctx, base);
loc_88188AC4:
	// stw r3,0(r31)
	ctx.current_instruction = 0x88188AC4;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881888f0
	if (ctx.cr6.eq) goto loc_881888F0;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x881ece80
	ctx.lr = 0x88188ADC;
	sub_881ECE80(ctx, base);
loc_88188ADC:
	// b 0x88188b44
	goto loc_88188B44;
loc_88188AE0:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x88188b10
	if (!ctx.cr6.eq) goto loc_88188B10;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x8815b9f8
	ctx.lr = 0x88188AF4;
	sub_8815B9F8(ctx, base);
loc_88188AF4:
	// stw r3,0(r31)
	ctx.current_instruction = 0x88188AF4;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881888f0
	if (ctx.cr6.eq) goto loc_881888F0;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x880547a0
	ctx.lr = 0x88188B0C;
	sub_880547A0(ctx, base);
loc_88188B0C:
	// b 0x88188b44
	goto loc_88188B44;
loc_88188B10:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8815b9f8
	ctx.lr = 0x88188B1C;
	sub_8815B9F8(ctx, base);
loc_88188B1C:
	// stw r3,0(r31)
	ctx.current_instruction = 0x88188B1C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881888f0
	if (ctx.cr6.eq) goto loc_881888F0;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88188B38:
	// lwzu r9,4(r11)
	ctx.current_instruction = 0x88188B38;
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ctx.current_instruction = 0x88188B3C;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x88188b38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88188B38;
loc_88188B44:
	// lwz r10,0(r31)
	ctx.current_instruction = 0x88188B44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r10)
	ctx.current_instruction = 0x88188B48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x88188b58
	if (ctx.cr6.gt) goto loc_88188B58;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_88188B58:
	// stw r11,8(r10)
	ctx.current_instruction = 0x88188B58;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r30,0(r31)
	ctx.current_instruction = 0x88188B5C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r30)
	ctx.current_instruction = 0x88188B60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88188b80
	if (!ctx.cr6.eq) goto loc_88188B80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r28)
	ctx.current_instruction = 0x88188B70;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r4,4(r28)
	ctx.current_instruction = 0x88188B74;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x88188600
	ctx.lr = 0x88188B7C;
	sub_88188600(ctx, base);
loc_88188B7C:
	// stw r3,20(r30)
	ctx.current_instruction = 0x88188B7C;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
loc_88188B80:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r5,8(r28)
	ctx.current_instruction = 0x88188B84;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,4(r28)
	ctx.current_instruction = 0x88188B8C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x881ceaf0
	ctx.lr = 0x88188B98;
	sub_881CEAF0(ctx, base);
loc_88188B98:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r26,28(r31)
	ctx.current_instruction = 0x88188BA0;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r25,32(r31)
	ctx.current_instruction = 0x88188BA4;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,20(r31)
	ctx.current_instruction = 0x88188BAC;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,24(r31)
	ctx.current_instruction = 0x88188BB4;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,292(r31)
	ctx.current_instruction = 0x88188BB8;
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// stw r31,0(r24)
	ctx.current_instruction = 0x88188BBC;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// beq cr6,0x88188bc8
	if (ctx.cr6.eq) goto loc_88188BC8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_88188BC8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881966B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881966B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881966B0) {
			switch (rex_dispatch_address) {
				case 0x881966B8:
				case 0x88196954:
				case 0x88196964:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881966B0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881966B8: goto loc_881966B8;
		case 0x88196954: goto loc_88196954;
		case 0x88196964: goto loc_88196964;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881966B8;
	__savegprlr_14(ctx, base);
loc_881966B8:
	// stwu r1,-320(r1)
	ctx.current_instruction = 0x881966B8;
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r3,404(r1)
	ctx.current_instruction = 0x881966C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// add r30,r5,r8
	ctx.r30.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stw r10,396(r1)
	ctx.current_instruction = 0x881966C8;
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r10.u32);
	// neg r31,r3
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// lwz r10,428(r1)
	ctx.current_instruction = 0x881966D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lwz r19,420(r1)
	ctx.current_instruction = 0x881966D8;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// clrlwi r26,r31,29
	ctx.r26.u64 = ctx.r31.u32 & 0x7;
	// lwz r11,24536(r11)
	ctx.current_instruction = 0x881966E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24536);
	// add r29,r8,r3
	ctx.r29.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r28,r30,r3
	ctx.r28.u64 = ctx.r30.u64 + ctx.r3.u64;
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r21,r11,r8
	ctx.r21.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r8,r27,r26
	ctx.r8.u64 = ctx.r27.u64 + ctx.r26.u64;
	// subf r24,r11,r30
	ctx.r24.u64 = ctx.r30.u64 - ctx.r11.u64;
	// add r18,r8,r3
	ctx.r18.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r29,-1
	ctx.r8.s64 = ctx.r29.s64 + -1;
	// srawi r17,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r17.s64 = ctx.r18.s32 >> 2;
	// subfic r3,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r3.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// li r31,16
	ctx.r31.s64 = 16;
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r28,-1
	ctx.r3.s64 = ctx.r28.s64 + -1;
	// rlwinm r29,r10,0,28,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE;
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// rlwinm r29,r29,0,30,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// addi r10,r29,10
	ctx.r10.s64 = ctx.r29.s64 + 10;
	// subf r25,r11,r18
	ctx.r25.u64 = ctx.r18.u64 - ctx.r11.u64;
	// stw r10,80(r1)
	ctx.current_instruction = 0x88196730;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x88196830
	if (!ctx.cr6.lt) goto loc_88196830;
	// subf r23,r5,r4
	ctx.r23.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r22,r24,r21
	ctx.r22.u64 = ctx.r21.u64 - ctx.r24.u64;
	// subf r28,r6,r7
	ctx.r28.u64 = ctx.r7.u64 - ctx.r6.u64;
loc_88196748:
	// lbz r6,0(r3)
	ctx.current_instruction = 0x88196748;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lbzx r4,r23,r30
	ctx.current_instruction = 0x88196750;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r30.u32);
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// lbz r16,0(r30)
	ctx.current_instruction = 0x88196758;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// addi r15,r1,112
	ctx.r15.s64 = ctx.r1.s64 + 112;
	// addi r14,r1,96
	ctx.r14.s64 = ctx.r1.s64 + 96;
	// lbz r11,0(r8)
	ctx.current_instruction = 0x88196764;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r6,144(r1)
	ctx.current_instruction = 0x8819676C;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// lvx128 v11,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r4,96(r1)
	ctx.current_instruction = 0x88196774;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lvx128 v10,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r16,112(r1)
	ctx.current_instruction = 0x8819677C;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r16.u32);
	// lvx128 v9,r0,r15
	ea = (ctx.r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,128(r1)
	ctx.current_instruction = 0x88196784;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltb v12,v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi8(char(0xC))));
	// vspltb v13,v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_set1_epi8(char(0xC))));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// vspltb v0,v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_set1_epi8(char(0xC))));
	// addi r29,r1,144
	ctx.r29.s64 = ctx.r1.s64 + 144;
	// vspltb v11,v11,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_set1_epi8(char(0xC))));
	// add r6,r25,r27
	ctx.r6.u64 = ctx.r25.u64 + ctx.r27.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stvx128 v12,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r22,r6
	ctx.r5.u64 = ctx.r22.u64 + ctx.r6.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r14
	ea = (ctx.r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x881967f0
	if (!ctx.cr6.gt) goto loc_881967F0;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// addi r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 1;
loc_881967D8:
	// lbz r10,0(r8)
	ctx.current_instruction = 0x881967D8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// stbx r10,r4,r11
	ctx.current_instruction = 0x881967DC;
	REX_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r10.u8);
	// lbz r10,0(r3)
	ctx.current_instruction = 0x881967E0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// stbx r10,r29,r11
	ctx.current_instruction = 0x881967E4;
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881967d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881967D8;
loc_881967F0:
	// stvlx v0,0,r20
	ctx.current_instruction = 0x881967F0;
	ea = ctx.r20.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stvrx v0,r20,r31
	ctx.current_instruction = 0x881967F8;
	ea = ctx.r20.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// add r30,r30,r19
	ctx.r30.u64 = ctx.r30.u64 + ctx.r19.u64;
	// stvlx v13,0,r27
	ctx.current_instruction = 0x88196800;
	ea = ctx.r27.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// add r8,r8,r19
	ctx.r8.u64 = ctx.r8.u64 + ctx.r19.u64;
	// stvrx v13,r27,r31
	ctx.current_instruction = 0x88196808;
	ea = ctx.r27.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + ctx.r19.u64;
	// stvlx v12,0,r5
	ctx.current_instruction = 0x88196810;
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// add r20,r20,r19
	ctx.r20.u64 = ctx.r20.u64 + ctx.r19.u64;
	// stvrx v12,r5,r31
	ctx.current_instruction = 0x88196818;
	ea = ctx.r5.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// add r27,r27,r19
	ctx.r27.u64 = ctx.r27.u64 + ctx.r19.u64;
	// stvlx v11,0,r6
	ctx.current_instruction = 0x88196820;
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvrx v11,r6,r31
	ctx.current_instruction = 0x88196824;
	ea = ctx.r6.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v11.u8[i]);
	// bne 0x88196748
	if (!ctx.cr0.eq) goto loc_88196748;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8819682C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88196830:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88196904
	if (ctx.cr6.eq) goto loc_88196904;
	// mullw r11,r10,r19
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r19.s32);
	// addi r8,r17,-4
	ctx.r8.s64 = ctx.r17.s64 + -4;
	// subf r9,r11,r21
	ctx.r9.u64 = ctx.r21.u64 - ctx.r11.u64;
	// rlwinm r22,r17,2,0,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFF0;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88196904
	if (!ctx.cr6.gt) goto loc_88196904;
	// subf r9,r21,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r21.u64;
	// add r29,r11,r24
	ctx.r29.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r28,r11,r21
	ctx.r28.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_88196864:
	// add r25,r28,r9
	ctx.r25.u64 = ctx.r28.u64 + ctx.r9.u64;
	// add r23,r29,r9
	ctx.r23.u64 = ctx.r29.u64 + ctx.r9.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x881968d0
	if (!ctx.cr6.gt) goto loc_881968D0;
	// addi r11,r22,-1
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// subf r8,r24,r21
	ctx.r8.u64 = ctx.r21.u64 - ctx.r24.u64;
	// rlwinm r6,r11,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_88196894:
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvlx128 v63,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// vor128 v60,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvrx128 v59,r31,r5
	temp.u32 = ctx.r31.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v58,v63,v59
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// stvlx128 v58,r6,r11
	ctx.current_instruction = 0x881968B8;
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvrx128 v58,r4,r31
	ctx.current_instruction = 0x881968BC;
	ea = ctx.r4.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v58.u8[i]);
	// stvlx128 v60,r9,r11
	ctx.current_instruction = 0x881968C0;
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v60,r3,r31
	ctx.current_instruction = 0x881968C8;
	ea = ctx.r3.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// bdnz 0x88196894
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88196894;
loc_881968D0:
	// lvlx128 v57,r0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lvrx128 v56,r31,r28
	temp.u32 = ctx.r31.u32 + ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 + ctx.r19.u64;
	// lvlx128 v55,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v54,v57,v56
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// lvrx128 v53,r31,r29
	temp.u32 = ctx.r31.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v52,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// stvlx128 v54,r0,r25
	ctx.current_instruction = 0x881968F0;
	ea = ctx.r25.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvrx128 v54,r25,r31
	ctx.current_instruction = 0x881968F4;
	ea = ctx.r25.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v54.u8[i]);
	// stvlx128 v52,r0,r23
	ctx.current_instruction = 0x881968F8;
	ea = ctx.r23.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvrx128 v52,r23,r31
	ctx.current_instruction = 0x881968FC;
	ea = ctx.r23.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v52.u8[i]);
	// bne 0x88196864
	if (!ctx.cr0.eq) goto loc_88196864;
loc_88196904:
	// lwz r11,396(r1)
	ctx.current_instruction = 0x88196904;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88196a2c
	if (ctx.cr6.eq) goto loc_88196A2C;
	// lwz r11,428(r1)
	ctx.current_instruction = 0x88196910;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// addi r9,r17,-4
	ctx.r9.s64 = ctx.r17.s64 + -4;
	// subf r24,r19,r20
	ctx.r24.u64 = ctx.r20.u64 - ctx.r19.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r28,r19,r27
	ctx.r28.u64 = ctx.r27.u64 - ctx.r19.u64;
	// rlwinm r23,r17,2,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFF0;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r7
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// beq cr6,0x8819693c
	if (ctx.cr6.eq) goto loc_8819693C;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x88196940
	goto loc_88196940;
loc_8819693C:
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
loc_88196940:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x881ece80
	ctx.lr = 0x88196954;
	sub_881ECE80(ctx, base);
loc_88196954:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881ece80
	ctx.lr = 0x88196964;
	sub_881ECE80(ctx, base);
loc_88196964:
	// add r11,r20,r19
	ctx.r11.u64 = ctx.r20.u64 + ctx.r19.u64;
	// add r9,r27,r19
	ctx.r9.u64 = ctx.r27.u64 + ctx.r19.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x88196a2c
	if (!ctx.cr6.gt) goto loc_88196A2C;
	// add r25,r29,r24
	ctx.r25.u64 = ctx.r29.u64 + ctx.r24.u64;
	// subf r10,r28,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r28.u64;
	// subf r9,r28,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r28.u64;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_88196988:
	// add r27,r10,r29
	ctx.r27.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r26,r9,r29
	ctx.r26.u64 = ctx.r9.u64 + ctx.r29.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x881969f4
	if (!ctx.cr6.gt) goto loc_881969F4;
	// addi r8,r23,-1
	ctx.r8.s64 = ctx.r23.s64 + -1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwinm r7,r8,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// subf r8,r28,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r28.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881969B8:
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvlx128 v51,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v50,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lvlx128 v49,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// vor128 v48,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvrx128 v47,r4,r7
	temp.u32 = ctx.r4.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v46,v51,v47
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// stvlx128 v46,r10,r11
	ctx.current_instruction = 0x881969DC;
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvrx128 v46,r6,r31
	ctx.current_instruction = 0x881969E0;
	ea = ctx.r6.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v46.u8[i]);
	// stvlx128 v48,r9,r11
	ctx.current_instruction = 0x881969E4;
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v48,r5,r31
	ctx.current_instruction = 0x881969EC;
	ea = ctx.r5.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v48.u8[i]);
	// bdnz 0x881969b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881969B8;
loc_881969F4:
	// lvlx128 v45,r0,r25
	temp.u32 = ctx.r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lvrx128 v44,r31,r25
	temp.u32 = ctx.r31.u32 + ctx.r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + ctx.r19.u64;
	// lvlx128 v43,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v42,v45,v44
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// lvrx128 v41,r31,r29
	temp.u32 = ctx.r31.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 + ctx.r19.u64;
	// vor128 v40,v43,v41
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// stvlx128 v42,r0,r27
	ctx.current_instruction = 0x88196A18;
	ea = ctx.r27.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvrx128 v42,r27,r31
	ctx.current_instruction = 0x88196A1C;
	ea = ctx.r27.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v42.u8[i]);
	// stvlx128 v40,r0,r26
	ctx.current_instruction = 0x88196A20;
	ea = ctx.r26.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// stvrx128 v40,r26,r31
	ctx.current_instruction = 0x88196A24;
	ea = ctx.r26.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v40.u8[i]);
	// bne 0x88196988
	if (!ctx.cr0.eq) goto loc_88196988;
loc_88196A2C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A3CC8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881A3CC8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881A3CC8) {
			switch (rex_dispatch_address) {
				case 0x881A3CD0:
				case 0x881A3D64:
				case 0x881A4B78:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881A3CC8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881A3CD0: goto loc_881A3CD0;
		case 0x881A3D64: goto loc_881A3D64;
		case 0x881A4B78: goto loc_881A4B78;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x881A3CD0;
	__savegprlr_23(ctx, base);
loc_881A3CD0:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x881A3CD0;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3792(r3)
	ctx.current_instruction = 0x881A3CD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,3812(r3)
	ctx.current_instruction = 0x881A3CDC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 3812);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a3cfc
	if (ctx.cr6.eq) goto loc_881A3CFC;
	// lwz r10,224(r3)
	ctx.current_instruction = 0x881A3CF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a3d00
	goto loc_881A3D00;
loc_881A3CFC:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_881A3D00:
	// lwz r11,3796(r30)
	ctx.current_instruction = 0x881A3D00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a3d18
	if (ctx.cr6.eq) goto loc_881A3D18;
	// lwz r10,224(r30)
	ctx.current_instruction = 0x881A3D0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a3d1c
	goto loc_881A3D1C;
loc_881A3D18:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_881A3D1C:
	// lwz r11,3820(r30)
	ctx.current_instruction = 0x881A3D1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3820);
	// lwz r26,3828(r30)
	ctx.current_instruction = 0x881A3D20;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 3828);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a3d38
	if (ctx.cr6.eq) goto loc_881A3D38;
	// lwz r10,224(r30)
	ctx.current_instruction = 0x881A3D2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a3d3c
	goto loc_881A3D3C;
loc_881A3D38:
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_881A3D3C:
	// lwz r11,3824(r30)
	ctx.current_instruction = 0x881A3D3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3824);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a3d54
	if (ctx.cr6.eq) goto loc_881A3D54;
	// lwz r10,224(r30)
	ctx.current_instruction = 0x881A3D48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a3d58
	goto loc_881A3D58;
loc_881A3D54:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_881A3D58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881a35f8
	ctx.lr = 0x881A3D64;
	sub_881A35F8(ctx, base);
loc_881A3D64:
	// lwz r11,20688(r30)
	ctx.current_instruction = 0x881A3D64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// lwz r9,368(r30)
	ctx.current_instruction = 0x881A3D68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 368);
	// addi r8,r30,2940
	ctx.r8.s64 = ctx.r30.s64 + 2940;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r30,2952
	ctx.r7.s64 = ctx.r30.s64 + 2952;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,12(r31)
	ctx.current_instruction = 0x881A3D84;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// lwz r9,372(r30)
	ctx.current_instruction = 0x881A3D88;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// lwz r11,20688(r30)
	ctx.current_instruction = 0x881A3D8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r3,16(r31)
	ctx.current_instruction = 0x881A3DA0;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r11,376(r30)
	ctx.current_instruction = 0x881A3DA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 376);
	// lwz r10,20688(r30)
	ctx.current_instruction = 0x881A3DA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// mulli r10,r10,504
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(504));
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,20(r31)
	ctx.current_instruction = 0x881A3DB4;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r6,364(r30)
	ctx.current_instruction = 0x881A3DB8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 364);
	// stw r6,8(r31)
	ctx.current_instruction = 0x881A3DBC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lwz r11,252(r30)
	ctx.current_instruction = 0x881A3DC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 252);
	// lwz r5,248(r30)
	ctx.current_instruction = 0x881A3DC4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 248);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,255
	ctx.r4.s64 = ctx.r11.s64 + 255;
	// stb r4,24(r31)
	ctx.current_instruction = 0x881A3DD4;
	REX_STORE_U8(ctx.r31.u32 + 24, ctx.r4.u8);
	// lwz r11,352(r30)
	ctx.current_instruction = 0x881A3DD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 352);
	// stb r11,25(r31)
	ctx.current_instruction = 0x881A3DDC;
	REX_STORE_U8(ctx.r31.u32 + 25, ctx.r11.u8);
	// lwz r9,348(r30)
	ctx.current_instruction = 0x881A3DE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 348);
	// stb r9,26(r31)
	ctx.current_instruction = 0x881A3DE4;
	REX_STORE_U8(ctx.r31.u32 + 26, ctx.r9.u8);
	// lwz r5,2380(r30)
	ctx.current_instruction = 0x881A3DE8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 2380);
	// stw r5,336(r31)
	ctx.current_instruction = 0x881A3DEC;
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r5.u32);
	// lwz r4,284(r30)
	ctx.current_instruction = 0x881A3DF0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 284);
	// stb r4,27(r31)
	ctx.current_instruction = 0x881A3DF4;
	REX_STORE_U8(ctx.r31.u32 + 27, ctx.r4.u8);
	// lwz r11,396(r30)
	ctx.current_instruction = 0x881A3DF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 396);
	// stb r11,28(r31)
	ctx.current_instruction = 0x881A3DFC;
	REX_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// lwz r9,332(r30)
	ctx.current_instruction = 0x881A3E00;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 332);
	// stb r9,29(r31)
	ctx.current_instruction = 0x881A3E04;
	REX_STORE_U8(ctx.r31.u32 + 29, ctx.r9.u8);
	// lwz r11,4016(r30)
	ctx.current_instruction = 0x881A3E08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4016);
	// addi r5,r11,-3
	ctx.r5.s64 = ctx.r11.s64 + -3;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r10,r3,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r6,30(r31)
	ctx.current_instruction = 0x881A3E28;
	REX_STORE_U8(ctx.r31.u32 + 30, ctx.r6.u8);
	// lwz r5,2144(r30)
	ctx.current_instruction = 0x881A3E2C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 2144);
	// stw r5,356(r31)
	ctx.current_instruction = 0x881A3E30;
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r5.u32);
	// lwz r4,2520(r30)
	ctx.current_instruction = 0x881A3E34;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 2520);
	// stw r4,360(r31)
	ctx.current_instruction = 0x881A3E38;
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r4.u32);
	// lwz r3,20968(r30)
	ctx.current_instruction = 0x881A3E3C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 20968);
	// stw r3,340(r31)
	ctx.current_instruction = 0x881A3E40;
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
	// lwz r11,20988(r30)
	ctx.current_instruction = 0x881A3E44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20988);
	// stw r11,344(r31)
	ctx.current_instruction = 0x881A3E48;
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// sth r23,46(r31)
	ctx.current_instruction = 0x881A3E4C;
	REX_STORE_U16(ctx.r31.u32 + 46, ctx.r23.u16);
	// sth r23,44(r31)
	ctx.current_instruction = 0x881A3E50;
	REX_STORE_U16(ctx.r31.u32 + 44, ctx.r23.u16);
	// lwz r10,420(r30)
	ctx.current_instruction = 0x881A3E54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 420);
	// sth r10,62(r31)
	ctx.current_instruction = 0x881A3E58;
	REX_STORE_U16(ctx.r31.u32 + 62, ctx.r10.u16);
	// lwz r6,424(r30)
	ctx.current_instruction = 0x881A3E5C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 424);
	// sth r6,64(r31)
	ctx.current_instruction = 0x881A3E60;
	REX_STORE_U16(ctx.r31.u32 + 64, ctx.r6.u16);
	// lwz r4,428(r30)
	ctx.current_instruction = 0x881A3E64;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 428);
	// sth r4,66(r31)
	ctx.current_instruction = 0x881A3E68;
	REX_STORE_U16(ctx.r31.u32 + 66, ctx.r4.u16);
	// lwz r11,432(r30)
	ctx.current_instruction = 0x881A3E6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 432);
	// sth r11,68(r31)
	ctx.current_instruction = 0x881A3E70;
	REX_STORE_U16(ctx.r31.u32 + 68, ctx.r11.u16);
	// lwz r9,412(r30)
	ctx.current_instruction = 0x881A3E74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 412);
	// sth r9,70(r31)
	ctx.current_instruction = 0x881A3E78;
	REX_STORE_U16(ctx.r31.u32 + 70, ctx.r9.u16);
	// lwz r5,416(r30)
	ctx.current_instruction = 0x881A3E7C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 416);
	// sth r5,72(r31)
	ctx.current_instruction = 0x881A3E80;
	REX_STORE_U16(ctx.r31.u32 + 72, ctx.r5.u16);
	// lwz r3,14836(r30)
	ctx.current_instruction = 0x881A3E84;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 14836);
	// stb r3,32(r31)
	ctx.current_instruction = 0x881A3E88;
	REX_STORE_U8(ctx.r31.u32 + 32, ctx.r3.u8);
	// lwz r10,1796(r30)
	ctx.current_instruction = 0x881A3E8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1796);
	// stb r10,31(r31)
	ctx.current_instruction = 0x881A3E90;
	REX_STORE_U8(ctx.r31.u32 + 31, ctx.r10.u8);
	// lwz r6,340(r30)
	ctx.current_instruction = 0x881A3E94;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 340);
	// stb r6,34(r31)
	ctx.current_instruction = 0x881A3E98;
	REX_STORE_U8(ctx.r31.u32 + 34, ctx.r6.u8);
	// lwz r4,6608(r30)
	ctx.current_instruction = 0x881A3E9C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 6608);
	// stw r4,388(r31)
	ctx.current_instruction = 0x881A3EA0;
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r4.u32);
	// lwz r3,14816(r30)
	ctx.current_instruction = 0x881A3EA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 14816);
	// stw r8,396(r31)
	ctx.current_instruction = 0x881A3EA8;
	REX_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r3,392(r31)
	ctx.current_instruction = 0x881A3EAC;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r3.u32);
	// stw r7,400(r31)
	ctx.current_instruction = 0x881A3EB0;
	REX_STORE_U32(ctx.r31.u32 + 400, ctx.r7.u32);
	// lwz r11,2916(r30)
	ctx.current_instruction = 0x881A3EB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2916);
	// stw r11,404(r31)
	ctx.current_instruction = 0x881A3EB8;
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// lwz r10,2920(r30)
	ctx.current_instruction = 0x881A3EBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2920);
	// stw r10,408(r31)
	ctx.current_instruction = 0x881A3EC0;
	REX_STORE_U32(ctx.r31.u32 + 408, ctx.r10.u32);
	// lwz r9,2924(r30)
	ctx.current_instruction = 0x881A3EC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 2924);
	// stw r9,412(r31)
	ctx.current_instruction = 0x881A3EC8;
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r9.u32);
	// lwz r8,2928(r30)
	ctx.current_instruction = 0x881A3ECC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 2928);
	// stw r8,416(r31)
	ctx.current_instruction = 0x881A3ED0;
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r8.u32);
	// lwz r7,2932(r30)
	ctx.current_instruction = 0x881A3ED4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 2932);
	// stw r7,420(r31)
	ctx.current_instruction = 0x881A3ED8;
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r7.u32);
	// lwz r6,2936(r30)
	ctx.current_instruction = 0x881A3EDC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 2936);
	// stw r6,424(r31)
	ctx.current_instruction = 0x881A3EE0;
	REX_STORE_U32(ctx.r31.u32 + 424, ctx.r6.u32);
	// lwz r5,1944(r30)
	ctx.current_instruction = 0x881A3EE4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 1944);
	// stw r5,96(r31)
	ctx.current_instruction = 0x881A3EE8;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// lwz r4,3004(r30)
	ctx.current_instruction = 0x881A3EEC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 3004);
	// stb r4,33(r31)
	ctx.current_instruction = 0x881A3EF0;
	REX_STORE_U8(ctx.r31.u32 + 33, ctx.r4.u8);
	// lwz r11,1836(r30)
	ctx.current_instruction = 0x881A3EF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1836);
	// stw r11,444(r31)
	ctx.current_instruction = 0x881A3EF8;
	REX_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// lwz r10,460(r30)
	ctx.current_instruction = 0x881A3EFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 460);
	// stb r10,48(r31)
	ctx.current_instruction = 0x881A3F00;
	REX_STORE_U8(ctx.r31.u32 + 48, ctx.r10.u8);
	// stb r23,49(r31)
	ctx.current_instruction = 0x881A3F04;
	REX_STORE_U8(ctx.r31.u32 + 49, ctx.r23.u8);
	// lwz r8,3960(r30)
	ctx.current_instruction = 0x881A3F08;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 3960);
	// stb r8,35(r31)
	ctx.current_instruction = 0x881A3F0C;
	REX_STORE_U8(ctx.r31.u32 + 35, ctx.r8.u8);
	// lwz r6,136(r30)
	ctx.current_instruction = 0x881A3F10;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// mulli r5,r6,-6
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(-6));
	// sth r5,368(r31)
	ctx.current_instruction = 0x881A3F18;
	REX_STORE_U16(ctx.r31.u32 + 368, ctx.r5.u16);
	// lwz r3,136(r30)
	ctx.current_instruction = 0x881A3F1C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r11,370(r31)
	ctx.current_instruction = 0x881A3F24;
	REX_STORE_U16(ctx.r31.u32 + 370, ctx.r11.u16);
	// lwz r9,136(r30)
	ctx.current_instruction = 0x881A3F28;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r8,372(r31)
	ctx.current_instruction = 0x881A3F30;
	REX_STORE_U16(ctx.r31.u32 + 372, ctx.r8.u16);
	// lwz r6,136(r30)
	ctx.current_instruction = 0x881A3F34;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r5,374(r31)
	ctx.current_instruction = 0x881A3F3C;
	REX_STORE_U16(ctx.r31.u32 + 374, ctx.r5.u16);
	// lwz r3,136(r30)
	ctx.current_instruction = 0x881A3F40;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// neg r11,r3
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// sth r11,364(r31)
	ctx.current_instruction = 0x881A3F48;
	REX_STORE_U16(ctx.r31.u32 + 364, ctx.r11.u16);
	// lwz r9,136(r30)
	ctx.current_instruction = 0x881A3F4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// sth r9,366(r31)
	ctx.current_instruction = 0x881A3F50;
	REX_STORE_U16(ctx.r31.u32 + 366, ctx.r9.u16);
	// stw r24,484(r31)
	ctx.current_instruction = 0x881A3F54;
	REX_STORE_U32(ctx.r31.u32 + 484, ctx.r24.u32);
	// stw r29,464(r31)
	ctx.current_instruction = 0x881A3F58;
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r29.u32);
	// stw r26,468(r31)
	ctx.current_instruction = 0x881A3F5C;
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r26.u32);
	// stw r28,472(r31)
	ctx.current_instruction = 0x881A3F60;
	REX_STORE_U32(ctx.r31.u32 + 472, ctx.r28.u32);
	// stw r25,476(r31)
	ctx.current_instruction = 0x881A3F64;
	REX_STORE_U32(ctx.r31.u32 + 476, ctx.r25.u32);
	// stw r27,480(r31)
	ctx.current_instruction = 0x881A3F68;
	REX_STORE_U32(ctx.r31.u32 + 480, ctx.r27.u32);
	// lwz r7,22140(r30)
	ctx.current_instruction = 0x881A3F6C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 22140);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x881a40bc
	if (!ctx.cr6.eq) goto loc_881A40BC;
	// lwz r11,15964(r30)
	ctx.current_instruction = 0x881A3F78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15964);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a400c
	if (ctx.cr6.eq) goto loc_881A400C;
	// lwz r11,15968(r30)
	ctx.current_instruction = 0x881A3F84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15968);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a400c
	if (ctx.cr6.eq) goto loc_881A400C;
	// lwz r11,15972(r30)
	ctx.current_instruction = 0x881A3F90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15972);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881a400c
	if (!ctx.cr6.eq) goto loc_881A400C;
	// lwz r11,15976(r30)
	ctx.current_instruction = 0x881A3F9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15976);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881A3FA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881a3fbc
	if (ctx.cr6.eq) goto loc_881A3FBC;
	// lwz r10,220(r30)
	ctx.current_instruction = 0x881A3FAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r11,0(r11)
	ctx.current_instruction = 0x881A3FB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a3fc0
	goto loc_881A3FC0;
loc_881A3FBC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A3FC0:
	// stw r11,464(r31)
	ctx.current_instruction = 0x881A3FC0;
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// lwz r11,15976(r30)
	ctx.current_instruction = 0x881A3FC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15976);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x881A3FC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a3fe0
	if (ctx.cr6.eq) goto loc_881A3FE0;
	// lwz r10,224(r30)
	ctx.current_instruction = 0x881A3FD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a3fe4
	goto loc_881A3FE4;
loc_881A3FE0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A3FE4:
	// stw r11,472(r31)
	ctx.current_instruction = 0x881A3FE4;
	REX_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// lwz r11,15976(r30)
	ctx.current_instruction = 0x881A3FE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15976);
	// lwz r11,8(r11)
	ctx.current_instruction = 0x881A3FEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a4004
	if (ctx.cr6.eq) goto loc_881A4004;
	// lwz r10,224(r30)
	ctx.current_instruction = 0x881A3FF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a4008
	goto loc_881A4008;
loc_881A4004:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A4008:
	// stw r11,480(r31)
	ctx.current_instruction = 0x881A4008;
	REX_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
loc_881A400C:
	// lwz r11,3776(r30)
	ctx.current_instruction = 0x881A400C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3776);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a4024
	if (ctx.cr6.eq) goto loc_881A4024;
	// lwz r10,220(r30)
	ctx.current_instruction = 0x881A4018;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 220);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a4028
	goto loc_881A4028;
loc_881A4024:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A4028:
	// stw r11,560(r31)
	ctx.current_instruction = 0x881A4028;
	REX_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x881a403c
	if (!ctx.cr6.eq) goto loc_881A403C;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881A403C:
	// stw r10,564(r31)
	ctx.current_instruction = 0x881A403C;
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a4058
	if (ctx.cr6.eq) goto loc_881A4058;
	// lwz r10,204(r30)
	ctx.current_instruction = 0x881A4048;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a405c
	goto loc_881A405C;
loc_881A4058:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881A405C:
	// stw r10,568(r31)
	ctx.current_instruction = 0x881A405C;
	REX_STORE_U32(ctx.r31.u32 + 568, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a407c
	if (ctx.cr6.eq) goto loc_881A407C;
	// lwz r10,204(r30)
	ctx.current_instruction = 0x881A4068;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a4080
	goto loc_881A4080;
loc_881A407C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A4080:
	// stw r11,572(r31)
	ctx.current_instruction = 0x881A4080;
	REX_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// lwz r11,3780(r30)
	ctx.current_instruction = 0x881A4084;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a409c
	if (ctx.cr6.eq) goto loc_881A409C;
	// lwz r10,224(r30)
	ctx.current_instruction = 0x881A4090;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a40a0
	goto loc_881A40A0;
loc_881A409C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A40A0:
	// stw r11,576(r31)
	ctx.current_instruction = 0x881A40A0;
	REX_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// lwz r11,3784(r30)
	ctx.current_instruction = 0x881A40A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a465c
	if (ctx.cr6.eq) goto loc_881A465C;
	// lwz r10,224(r30)
	ctx.current_instruction = 0x881A40B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a4660
	goto loc_881A4660;
loc_881A40BC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x881a40dc
	if (ctx.cr6.eq) goto loc_881A40DC;
	// lwz r11,204(r30)
	ctx.current_instruction = 0x881A40C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// lwz r10,20688(r30)
	ctx.current_instruction = 0x881A40C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x881a40e0
	goto loc_881A40E0;
loc_881A40DC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A40E0:
	// stw r11,464(r31)
	ctx.current_instruction = 0x881A40E0;
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x881a40f4
	if (!ctx.cr6.eq) goto loc_881A40F4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881A40F4:
	// stw r10,468(r31)
	ctx.current_instruction = 0x881A40F4;
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a4110
	if (ctx.cr6.eq) goto loc_881A4110;
	// lwz r10,204(r30)
	ctx.current_instruction = 0x881A4100;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a4114
	goto loc_881A4114;
loc_881A4110:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881A4114:
	// stw r10,472(r31)
	ctx.current_instruction = 0x881A4114;
	REX_STORE_U32(ctx.r31.u32 + 472, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a4134
	if (ctx.cr6.eq) goto loc_881A4134;
	// lwz r10,204(r30)
	ctx.current_instruction = 0x881A4120;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a4138
	goto loc_881A4138;
loc_881A4134:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A4138:
	// stw r11,476(r31)
	ctx.current_instruction = 0x881A4138;
	REX_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x881a415c
	if (ctx.cr6.eq) goto loc_881A415C;
	// lwz r11,208(r30)
	ctx.current_instruction = 0x881A4144;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r10,20688(r30)
	ctx.current_instruction = 0x881A4148;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x881a4160
	goto loc_881A4160;
loc_881A415C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A4160:
	// stw r11,480(r31)
	ctx.current_instruction = 0x881A4160;
	REX_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x881a4184
	if (ctx.cr6.eq) goto loc_881A4184;
	// lwz r11,208(r30)
	ctx.current_instruction = 0x881A416C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r10,20688(r30)
	ctx.current_instruction = 0x881A4170;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x881a4188
	goto loc_881A4188;
loc_881A4184:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A4188:
	// stw r11,484(r31)
	ctx.current_instruction = 0x881A4188;
	REX_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x881a41ac
	if (ctx.cr6.eq) goto loc_881A41AC;
	// lwz r11,204(r30)
	ctx.current_instruction = 0x881A4194;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// lwz r10,20688(r30)
	ctx.current_instruction = 0x881A4198;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x881a41b0
	goto loc_881A41B0;
loc_881A41AC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A41B0:
	// stw r11,512(r31)
	ctx.current_instruction = 0x881A41B0;
	REX_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x881a41c4
	if (!ctx.cr6.eq) goto loc_881A41C4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881A41C4:
	// stw r10,516(r31)
	ctx.current_instruction = 0x881A41C4;
	REX_STORE_U32(ctx.r31.u32 + 516, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a41e0
	if (ctx.cr6.eq) goto loc_881A41E0;
	// lwz r10,204(r30)
	ctx.current_instruction = 0x881A41D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a41e4
	goto loc_881A41E4;
loc_881A41E0:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881A41E4:
	// stw r10,520(r31)
	ctx.current_instruction = 0x881A41E4;
	REX_STORE_U32(ctx.r31.u32 + 520, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a4204
	if (ctx.cr6.eq) goto loc_881A4204;
	// lwz r10,204(r30)
	ctx.current_instruction = 0x881A41F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a4208
	goto loc_881A4208;
loc_881A4204:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A4208:
	// stw r11,524(r31)
	ctx.current_instruction = 0x881A4208;
	REX_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x881a422c
	if (ctx.cr6.eq) goto loc_881A422C;
	// lwz r11,208(r30)
	ctx.current_instruction = 0x881A4214;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r10,20688(r30)
	ctx.current_instruction = 0x881A4218;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x881a4230
	goto loc_881A4230;
loc_881A422C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A4230:
	// stw r11,528(r31)
	ctx.current_instruction = 0x881A4230;
	REX_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x881a4254
	if (ctx.cr6.eq) goto loc_881A4254;
	// lwz r11,208(r30)
	ctx.current_instruction = 0x881A423C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r10,20688(r30)
	ctx.current_instruction = 0x881A4240;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// b 0x881a4258
	goto loc_881A4258;
loc_881A4254:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A4258:
	// stw r11,532(r31)
	ctx.current_instruction = 0x881A4258;
	REX_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
	// lwz r11,21704(r30)
	ctx.current_instruction = 0x881A425C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881a4338
	if (!ctx.cr6.eq) goto loc_881A4338;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x881a4288
	if (ctx.cr6.eq) goto loc_881A4288;
	// lwz r11,204(r30)
	ctx.current_instruction = 0x881A4270;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// lwz r10,20688(r30)
	ctx.current_instruction = 0x881A4274;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x881a428c
	goto loc_881A428C;
loc_881A4288:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A428C:
	// stw r11,488(r31)
	ctx.current_instruction = 0x881A428C;
	REX_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x881a42a0
	if (!ctx.cr6.eq) goto loc_881A42A0;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881A42A0:
	// stw r10,492(r31)
	ctx.current_instruction = 0x881A42A0;
	REX_STORE_U32(ctx.r31.u32 + 492, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a42bc
	if (ctx.cr6.eq) goto loc_881A42BC;
	// lwz r10,204(r30)
	ctx.current_instruction = 0x881A42AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a42c0
	goto loc_881A42C0;
loc_881A42BC:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881A42C0:
	// stw r10,496(r31)
	ctx.current_instruction = 0x881A42C0;
	REX_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a42e0
	if (ctx.cr6.eq) goto loc_881A42E0;
	// lwz r10,204(r30)
	ctx.current_instruction = 0x881A42CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a42e4
	goto loc_881A42E4;
loc_881A42E0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A42E4:
	// stw r11,500(r31)
	ctx.current_instruction = 0x881A42E4;
	REX_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x881a430c
	if (ctx.cr6.eq) goto loc_881A430C;
	// lwz r11,208(r30)
	ctx.current_instruction = 0x881A42F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r10,20688(r30)
	ctx.current_instruction = 0x881A42F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x881a4310
	goto loc_881A4310;
loc_881A430C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A4310:
	// stw r11,504(r31)
	ctx.current_instruction = 0x881A4310;
	REX_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x881a4490
	if (ctx.cr6.eq) goto loc_881A4490;
	// lwz r11,208(r30)
	ctx.current_instruction = 0x881A431C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r10,20688(r30)
	ctx.current_instruction = 0x881A4320;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x881a4494
	goto loc_881A4494;
loc_881A4338:
	// lwz r11,288(r30)
	ctx.current_instruction = 0x881A4338;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x881a439c
	if (!ctx.cr6.eq) goto loc_881A439C;
	// lwz r11,20728(r30)
	ctx.current_instruction = 0x881A4344;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a439c
	if (ctx.cr6.eq) goto loc_881A439C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x881a4368
	if (ctx.cr6.eq) goto loc_881A4368;
	// lwz r11,204(r30)
	ctx.current_instruction = 0x881A4358;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x881a436c
	goto loc_881A436C;
loc_881A4368:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A436C:
	// stw r11,488(r31)
	ctx.current_instruction = 0x881A436C;
	REX_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x881a4380
	if (!ctx.cr6.eq) goto loc_881A4380;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881A4380:
	// stw r10,492(r31)
	ctx.current_instruction = 0x881A4380;
	REX_STORE_U32(ctx.r31.u32 + 492, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a42bc
	if (ctx.cr6.eq) goto loc_881A42BC;
	// lwz r10,204(r30)
	ctx.current_instruction = 0x881A438C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a42c0
	goto loc_881A42C0;
loc_881A439C:
	// lwz r9,3776(r30)
	ctx.current_instruction = 0x881A439C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 3776);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881a43c8
	if (ctx.cr6.eq) goto loc_881A43C8;
	// lwz r11,204(r30)
	ctx.current_instruction = 0x881A43A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// lwz r10,20688(r30)
	ctx.current_instruction = 0x881A43AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// lwz r11,220(r30)
	ctx.current_instruction = 0x881A43B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 220);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x881a43cc
	goto loc_881A43CC;
loc_881A43C8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A43CC:
	// stw r11,488(r31)
	ctx.current_instruction = 0x881A43CC;
	REX_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x881a43e0
	if (!ctx.cr6.eq) goto loc_881A43E0;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881A43E0:
	// stw r10,492(r31)
	ctx.current_instruction = 0x881A43E0;
	REX_STORE_U32(ctx.r31.u32 + 492, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a43fc
	if (ctx.cr6.eq) goto loc_881A43FC;
	// lwz r10,204(r30)
	ctx.current_instruction = 0x881A43EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a4400
	goto loc_881A4400;
loc_881A43FC:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881A4400:
	// stw r10,496(r31)
	ctx.current_instruction = 0x881A4400;
	REX_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a4420
	if (ctx.cr6.eq) goto loc_881A4420;
	// lwz r10,204(r30)
	ctx.current_instruction = 0x881A440C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a4424
	goto loc_881A4424;
loc_881A4420:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A4424:
	// stw r11,500(r31)
	ctx.current_instruction = 0x881A4424;
	REX_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
	// lwz r11,3780(r30)
	ctx.current_instruction = 0x881A4428;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a4458
	if (ctx.cr6.eq) goto loc_881A4458;
	// lwz r10,208(r30)
	ctx.current_instruction = 0x881A4434;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r9,20688(r30)
	ctx.current_instruction = 0x881A4438;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r10,224(r30)
	ctx.current_instruction = 0x881A4440;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// xori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 ^ 1;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a445c
	goto loc_881A445C;
loc_881A4458:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A445C:
	// stw r11,504(r31)
	ctx.current_instruction = 0x881A445C;
	REX_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// lwz r11,3784(r30)
	ctx.current_instruction = 0x881A4460;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a4490
	if (ctx.cr6.eq) goto loc_881A4490;
	// lwz r10,208(r30)
	ctx.current_instruction = 0x881A446C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r9,20688(r30)
	ctx.current_instruction = 0x881A4470;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r10,224(r30)
	ctx.current_instruction = 0x881A4478;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// xori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 ^ 1;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a4494
	goto loc_881A4494;
loc_881A4490:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A4494:
	// stw r11,508(r31)
	ctx.current_instruction = 0x881A4494;
	REX_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x881a44b8
	if (ctx.cr6.eq) goto loc_881A44B8;
	// lwz r11,204(r30)
	ctx.current_instruction = 0x881A44A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// lwz r10,20688(r30)
	ctx.current_instruction = 0x881A44A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x881a44bc
	goto loc_881A44BC;
loc_881A44B8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A44BC:
	// stw r11,536(r31)
	ctx.current_instruction = 0x881A44BC;
	REX_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x881a44d0
	if (!ctx.cr6.eq) goto loc_881A44D0;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881A44D0:
	// stw r10,540(r31)
	ctx.current_instruction = 0x881A44D0;
	REX_STORE_U32(ctx.r31.u32 + 540, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a44ec
	if (ctx.cr6.eq) goto loc_881A44EC;
	// lwz r10,204(r30)
	ctx.current_instruction = 0x881A44DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a44f0
	goto loc_881A44F0;
loc_881A44EC:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881A44F0:
	// stw r10,544(r31)
	ctx.current_instruction = 0x881A44F0;
	REX_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a4510
	if (ctx.cr6.eq) goto loc_881A4510;
	// lwz r10,204(r30)
	ctx.current_instruction = 0x881A44FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a4514
	goto loc_881A4514;
loc_881A4510:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A4514:
	// stw r11,548(r31)
	ctx.current_instruction = 0x881A4514;
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x881a453c
	if (ctx.cr6.eq) goto loc_881A453C;
	// lwz r11,208(r30)
	ctx.current_instruction = 0x881A4520;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r10,20688(r30)
	ctx.current_instruction = 0x881A4524;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x881a4540
	goto loc_881A4540;
loc_881A453C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A4540:
	// stw r11,552(r31)
	ctx.current_instruction = 0x881A4540;
	REX_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x881a4568
	if (ctx.cr6.eq) goto loc_881A4568;
	// lwz r11,208(r30)
	ctx.current_instruction = 0x881A454C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r10,20688(r30)
	ctx.current_instruction = 0x881A4550;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// b 0x881a456c
	goto loc_881A456C;
loc_881A4568:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A456C:
	// stw r11,556(r31)
	ctx.current_instruction = 0x881A456C;
	REX_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// lwz r11,3776(r30)
	ctx.current_instruction = 0x881A4570;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3776);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a459c
	if (ctx.cr6.eq) goto loc_881A459C;
	// lwz r10,204(r30)
	ctx.current_instruction = 0x881A457C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// lwz r9,20688(r30)
	ctx.current_instruction = 0x881A4580;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r10,220(r30)
	ctx.current_instruction = 0x881A4588;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 220);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a45a0
	goto loc_881A45A0;
loc_881A459C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A45A0:
	// stw r11,560(r31)
	ctx.current_instruction = 0x881A45A0;
	REX_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x881a45b4
	if (!ctx.cr6.eq) goto loc_881A45B4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881A45B4:
	// stw r10,564(r31)
	ctx.current_instruction = 0x881A45B4;
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a45d0
	if (ctx.cr6.eq) goto loc_881A45D0;
	// lwz r10,204(r30)
	ctx.current_instruction = 0x881A45C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a45d4
	goto loc_881A45D4;
loc_881A45D0:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881A45D4:
	// stw r10,568(r31)
	ctx.current_instruction = 0x881A45D4;
	REX_STORE_U32(ctx.r31.u32 + 568, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a45f4
	if (ctx.cr6.eq) goto loc_881A45F4;
	// lwz r10,204(r30)
	ctx.current_instruction = 0x881A45E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a45f8
	goto loc_881A45F8;
loc_881A45F4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A45F8:
	// stw r11,572(r31)
	ctx.current_instruction = 0x881A45F8;
	REX_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// lwz r11,3780(r30)
	ctx.current_instruction = 0x881A45FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a4628
	if (ctx.cr6.eq) goto loc_881A4628;
	// lwz r10,208(r30)
	ctx.current_instruction = 0x881A4608;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r9,20688(r30)
	ctx.current_instruction = 0x881A460C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r10,224(r30)
	ctx.current_instruction = 0x881A4614;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a462c
	goto loc_881A462C;
loc_881A4628:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A462C:
	// stw r11,576(r31)
	ctx.current_instruction = 0x881A462C;
	REX_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// lwz r11,3784(r30)
	ctx.current_instruction = 0x881A4630;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a465c
	if (ctx.cr6.eq) goto loc_881A465C;
	// lwz r10,208(r30)
	ctx.current_instruction = 0x881A463C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r8,20688(r30)
	ctx.current_instruction = 0x881A4640;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// lwz r9,224(r30)
	ctx.current_instruction = 0x881A4648;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881a4660
	goto loc_881A4660;
loc_881A465C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881A4660:
	// stw r11,580(r31)
	ctx.current_instruction = 0x881A4660;
	REX_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// lwz r11,20900(r30)
	ctx.current_instruction = 0x881A4664;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20900);
	// stw r11,1404(r31)
	ctx.current_instruction = 0x881A4668;
	REX_STORE_U32(ctx.r31.u32 + 1404, ctx.r11.u32);
	// lwz r11,4016(r30)
	ctx.current_instruction = 0x881A466C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4016);
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,2188(r31)
	ctx.current_instruction = 0x881A467C;
	REX_STORE_U32(ctx.r31.u32 + 2188, ctx.r8.u32);
	// lwz r7,14868(r30)
	ctx.current_instruction = 0x881A4680;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 14868);
	// stw r7,1696(r31)
	ctx.current_instruction = 0x881A4684;
	REX_STORE_U32(ctx.r31.u32 + 1696, ctx.r7.u32);
	// lwz r6,14844(r30)
	ctx.current_instruction = 0x881A4688;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 14844);
	// stw r6,1700(r31)
	ctx.current_instruction = 0x881A468C;
	REX_STORE_U32(ctx.r31.u32 + 1700, ctx.r6.u32);
	// lwz r5,14848(r30)
	ctx.current_instruction = 0x881A4690;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 14848);
	// stw r5,1704(r31)
	ctx.current_instruction = 0x881A4694;
	REX_STORE_U32(ctx.r31.u32 + 1704, ctx.r5.u32);
	// lwz r4,14840(r30)
	ctx.current_instruction = 0x881A4698;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 14840);
	// lwz r3,3428(r30)
	ctx.current_instruction = 0x881A469C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 3428);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// stw r11,1596(r31)
	ctx.current_instruction = 0x881A46A4;
	REX_STORE_U32(ctx.r31.u32 + 1596, ctx.r11.u32);
	// lwz r10,15340(r30)
	ctx.current_instruction = 0x881A46A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 15340);
	// stw r10,1708(r31)
	ctx.current_instruction = 0x881A46AC;
	REX_STORE_U32(ctx.r31.u32 + 1708, ctx.r10.u32);
	// lwz r9,15344(r30)
	ctx.current_instruction = 0x881A46B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 15344);
	// stw r9,1712(r31)
	ctx.current_instruction = 0x881A46B4;
	REX_STORE_U32(ctx.r31.u32 + 1712, ctx.r9.u32);
	// lwz r8,15348(r30)
	ctx.current_instruction = 0x881A46B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 15348);
	// stw r8,1716(r31)
	ctx.current_instruction = 0x881A46BC;
	REX_STORE_U32(ctx.r31.u32 + 1716, ctx.r8.u32);
	// lwz r7,15352(r30)
	ctx.current_instruction = 0x881A46C0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 15352);
	// stw r7,1720(r31)
	ctx.current_instruction = 0x881A46C4;
	REX_STORE_U32(ctx.r31.u32 + 1720, ctx.r7.u32);
	// lwz r6,21700(r30)
	ctx.current_instruction = 0x881A46C8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 21700);
	// stw r6,1396(r31)
	ctx.current_instruction = 0x881A46CC;
	REX_STORE_U32(ctx.r31.u32 + 1396, ctx.r6.u32);
	// lwz r5,21696(r30)
	ctx.current_instruction = 0x881A46D0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 21696);
	// stw r5,1400(r31)
	ctx.current_instruction = 0x881A46D4;
	REX_STORE_U32(ctx.r31.u32 + 1400, ctx.r5.u32);
	// lwz r4,20688(r30)
	ctx.current_instruction = 0x881A46D8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// stw r4,1368(r31)
	ctx.current_instruction = 0x881A46DC;
	REX_STORE_U32(ctx.r31.u32 + 1368, ctx.r4.u32);
	// lwz r3,21704(r30)
	ctx.current_instruction = 0x881A46E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 21704);
	// stw r3,1372(r31)
	ctx.current_instruction = 0x881A46E4;
	REX_STORE_U32(ctx.r31.u32 + 1372, ctx.r3.u32);
	// lwz r11,4020(r30)
	ctx.current_instruction = 0x881A46E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4020);
	// stw r11,1560(r31)
	ctx.current_instruction = 0x881A46EC;
	REX_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// lwz r10,20728(r30)
	ctx.current_instruction = 0x881A46F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20728);
	// stw r10,1564(r31)
	ctx.current_instruction = 0x881A46F4;
	REX_STORE_U32(ctx.r31.u32 + 1564, ctx.r10.u32);
	// lwz r9,20732(r30)
	ctx.current_instruction = 0x881A46F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20732);
	// stw r9,1568(r31)
	ctx.current_instruction = 0x881A46FC;
	REX_STORE_U32(ctx.r31.u32 + 1568, ctx.r9.u32);
	// lwz r8,20736(r30)
	ctx.current_instruction = 0x881A4700;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20736);
	// stw r8,1572(r31)
	ctx.current_instruction = 0x881A4704;
	REX_STORE_U32(ctx.r31.u32 + 1572, ctx.r8.u32);
	// lwz r7,20740(r30)
	ctx.current_instruction = 0x881A4708;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 20740);
	// stw r7,1576(r31)
	ctx.current_instruction = 0x881A470C;
	REX_STORE_U32(ctx.r31.u32 + 1576, ctx.r7.u32);
	// lwz r6,20744(r30)
	ctx.current_instruction = 0x881A4710;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 20744);
	// stw r6,1580(r31)
	ctx.current_instruction = 0x881A4714;
	REX_STORE_U32(ctx.r31.u32 + 1580, ctx.r6.u32);
	// lwz r5,20748(r30)
	ctx.current_instruction = 0x881A4718;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 20748);
	// stw r5,1584(r31)
	ctx.current_instruction = 0x881A471C;
	REX_STORE_U32(ctx.r31.u32 + 1584, ctx.r5.u32);
	// lwz r4,22140(r30)
	ctx.current_instruction = 0x881A4720;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 22140);
	// stw r4,1588(r31)
	ctx.current_instruction = 0x881A4724;
	REX_STORE_U32(ctx.r31.u32 + 1588, ctx.r4.u32);
	// lwz r3,22140(r30)
	ctx.current_instruction = 0x881A4728;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 22140);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x881a47b0
	if (!ctx.cr6.eq) goto loc_881A47B0;
	// lwz r11,21816(r30)
	ctx.current_instruction = 0x881A4734;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21816);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,45788
	ctx.r8.u64 = ctx.r10.u64 | 45788;
	// ori r7,r9,45792
	ctx.r7.u64 = ctx.r9.u64 | 45792;
	// lis r6,0
	ctx.r6.s64 = 0;
	// stw r11,1456(r31)
	ctx.current_instruction = 0x881A474C;
	REX_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// addis r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 65536;
	// ori r4,r6,45780
	ctx.r4.u64 = ctx.r6.u64 | 45780;
	// addi r5,r5,-19752
	ctx.r5.s64 = ctx.r5.s64 + -19752;
	// lwz r3,22172(r30)
	ctx.current_instruction = 0x881A475C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 22172);
	// stw r3,1460(r31)
	ctx.current_instruction = 0x881A4760;
	REX_STORE_U32(ctx.r31.u32 + 1460, ctx.r3.u32);
	// lwz r11,21844(r30)
	ctx.current_instruction = 0x881A4764;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21844);
	// stw r11,1464(r31)
	ctx.current_instruction = 0x881A4768;
	REX_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// lwzx r10,r30,r8
	ctx.current_instruction = 0x881A476C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// stw r10,1484(r31)
	ctx.current_instruction = 0x881A4770;
	REX_STORE_U32(ctx.r31.u32 + 1484, ctx.r10.u32);
	// lwzx r9,r30,r7
	ctx.current_instruction = 0x881A4774;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// stw r9,1480(r31)
	ctx.current_instruction = 0x881A4778;
	REX_STORE_U32(ctx.r31.u32 + 1480, ctx.r9.u32);
	// lwzx r8,r30,r4
	ctx.current_instruction = 0x881A477C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// stw r8,1476(r31)
	ctx.current_instruction = 0x881A4780;
	REX_STORE_U32(ctx.r31.u32 + 1476, ctx.r8.u32);
	// lwz r7,0(r5)
	ctx.current_instruction = 0x881A4784;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r7,1468(r31)
	ctx.current_instruction = 0x881A4788;
	REX_STORE_U32(ctx.r31.u32 + 1468, ctx.r7.u32);
	// lwz r10,0(r5)
	ctx.current_instruction = 0x881A478C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,20688(r30)
	ctx.current_instruction = 0x881A4790;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// subfic r5,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r6.u64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r4,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,1472(r31)
	ctx.current_instruction = 0x881A47AC;
	REX_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
loc_881A47B0:
	// lwz r10,3016(r30)
	ctx.current_instruction = 0x881A47B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 3016);
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r9,32
	ctx.r9.s64 = 2097152;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// ori r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 | 32;
	// lis r5,64
	ctx.r5.s64 = 4194304;
	// stw r10,588(r31)
	ctx.current_instruction = 0x881A47CC;
	REX_STORE_U32(ctx.r31.u32 + 588, ctx.r10.u32);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// stw r10,584(r31)
	ctx.current_instruction = 0x881A47D4;
	REX_STORE_U32(ctx.r31.u32 + 584, ctx.r10.u32);
	// ori r3,r5,64
	ctx.r3.u64 = ctx.r5.u64 | 64;
	// ori r9,r4,8
	ctx.r9.u64 = ctx.r4.u64 | 8;
	// addi r10,r31,1120
	ctx.r10.s64 = ctx.r31.s64 + 1120;
	// li r5,1104
	ctx.r5.s64 = 1104;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r8,r31,1190
	ctx.r8.s64 = ctx.r31.s64 + 1190;
	// lwz r29,3024(r30)
	ctx.current_instruction = 0x881A47F0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 3024);
	// stw r29,596(r31)
	ctx.current_instruction = 0x881A47F4;
	REX_STORE_U32(ctx.r31.u32 + 596, ctx.r29.u32);
	// stw r29,592(r31)
	ctx.current_instruction = 0x881A47F8;
	REX_STORE_U32(ctx.r31.u32 + 592, ctx.r29.u32);
	// lwz r29,3028(r30)
	ctx.current_instruction = 0x881A47FC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 3028);
	// stw r29,600(r31)
	ctx.current_instruction = 0x881A4800;
	REX_STORE_U32(ctx.r31.u32 + 600, ctx.r29.u32);
	// lwz r29,3036(r30)
	ctx.current_instruction = 0x881A4804;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 3036);
	// stw r29,604(r31)
	ctx.current_instruction = 0x881A4808;
	REX_STORE_U32(ctx.r31.u32 + 604, ctx.r29.u32);
	// lwz r29,2560(r30)
	ctx.current_instruction = 0x881A480C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 2560);
	// stw r29,608(r31)
	ctx.current_instruction = 0x881A4810;
	REX_STORE_U32(ctx.r31.u32 + 608, ctx.r29.u32);
	// lwz r29,2480(r30)
	ctx.current_instruction = 0x881A4814;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 2480);
	// stw r29,612(r31)
	ctx.current_instruction = 0x881A4818;
	REX_STORE_U32(ctx.r31.u32 + 612, ctx.r29.u32);
	// lwz r29,15536(r30)
	ctx.current_instruction = 0x881A481C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 15536);
	// stw r29,1168(r31)
	ctx.current_instruction = 0x881A4820;
	REX_STORE_U32(ctx.r31.u32 + 1168, ctx.r29.u32);
	// lwz r29,15536(r30)
	ctx.current_instruction = 0x881A4824;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 15536);
	// srawi r28,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r29.s32 >> 31;
	// subfc r11,r11,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r29.u64 - ctx.r11.u64;
	// adde r11,r7,r28
	temp.u8 = (ctx.r7.u32 + ctx.r28.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r7.u64 + ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,2192(r31)
	ctx.current_instruction = 0x881A4834;
	REX_STORE_U32(ctx.r31.u32 + 2192, ctx.r11.u32);
	// lwz r7,22184(r30)
	ctx.current_instruction = 0x881A4838;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 22184);
	// stw r7,1172(r31)
	ctx.current_instruction = 0x881A483C;
	REX_STORE_U32(ctx.r31.u32 + 1172, ctx.r7.u32);
	// lwz r11,1856(r30)
	ctx.current_instruction = 0x881A4840;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1856);
	// stw r11,620(r31)
	ctx.current_instruction = 0x881A4844;
	REX_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// lwz r7,1860(r30)
	ctx.current_instruction = 0x881A4848;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 1860);
	// stw r7,624(r31)
	ctx.current_instruction = 0x881A484C;
	REX_STORE_U32(ctx.r31.u32 + 624, ctx.r7.u32);
	// lwz r11,1864(r30)
	ctx.current_instruction = 0x881A4850;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1864);
	// stw r11,632(r31)
	ctx.current_instruction = 0x881A4854;
	REX_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
	// lbz r7,35(r31)
	ctx.current_instruction = 0x881A4858;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// addis r11,r7,31
	ctx.r11.s64 = ctx.r7.s64 + 2031616;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// stw r11,1136(r31)
	ctx.current_instruction = 0x881A4864;
	REX_STORE_U32(ctx.r31.u32 + 1136, ctx.r11.u32);
	// lbz r7,35(r31)
	ctx.current_instruction = 0x881A4868;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// addis r11,r7,15
	ctx.r11.s64 = ctx.r7.s64 + 983040;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// stw r11,1140(r31)
	ctx.current_instruction = 0x881A4874;
	REX_STORE_U32(ctx.r31.u32 + 1140, ctx.r11.u32);
	// lbz r7,35(r31)
	ctx.current_instruction = 0x881A4878;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// addis r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 458752;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// stw r11,1144(r31)
	ctx.current_instruction = 0x881A4884;
	REX_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// lbz r7,35(r31)
	ctx.current_instruction = 0x881A4888;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// addis r11,r7,3
	ctx.r11.s64 = ctx.r7.s64 + 196608;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,1148(r31)
	ctx.current_instruction = 0x881A4894;
	REX_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// lbz r7,35(r31)
	ctx.current_instruction = 0x881A4898;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// subf r6,r7,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r7.u64;
	// stw r6,1152(r31)
	ctx.current_instruction = 0x881A48A0;
	REX_STORE_U32(ctx.r31.u32 + 1152, ctx.r6.u32);
	// lbz r11,35(r31)
	ctx.current_instruction = 0x881A48A4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// subf r7,r11,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r7,1156(r31)
	ctx.current_instruction = 0x881A48AC;
	REX_STORE_U32(ctx.r31.u32 + 1156, ctx.r7.u32);
	// lbz r6,35(r31)
	ctx.current_instruction = 0x881A48B0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// subf r3,r6,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r3,1160(r31)
	ctx.current_instruction = 0x881A48B8;
	REX_STORE_U32(ctx.r31.u32 + 1160, ctx.r3.u32);
	// lbz r11,35(r31)
	ctx.current_instruction = 0x881A48BC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// sth r11,1134(r31)
	ctx.current_instruction = 0x881A48C0;
	REX_STORE_U16(ctx.r31.u32 + 1134, ctx.r11.u16);
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v0,v12,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0x100))));
	// vsubshs v11,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stvx128 v11,r31,r5
	ea = (ctx.r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r4,1176(r31)
	ctx.current_instruction = 0x881A48DC;
	REX_STORE_U16(ctx.r31.u32 + 1176, ctx.r4.u16);
	// lwz r11,204(r30)
	ctx.current_instruction = 0x881A48E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,16
	ctx.r11.s64 = 16;
	// srawi r6,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 6;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// sth r6,1178(r31)
	ctx.current_instruction = 0x881A48F8;
	REX_STORE_U16(ctx.r31.u32 + 1178, ctx.r6.u16);
	// lwz r11,204(r30)
	ctx.current_instruction = 0x881A48FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r11,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 6;
	// sth r11,1180(r31)
	ctx.current_instruction = 0x881A490C;
	REX_STORE_U16(ctx.r31.u32 + 1180, ctx.r11.u16);
	// lwz r11,204(r30)
	ctx.current_instruction = 0x881A4910;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// srawi r5,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 6;
	// sth r5,1182(r31)
	ctx.current_instruction = 0x881A4928;
	REX_STORE_U16(ctx.r31.u32 + 1182, ctx.r5.u16);
	// lwz r11,204(r30)
	ctx.current_instruction = 0x881A492C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// sth r9,1184(r31)
	ctx.current_instruction = 0x881A493C;
	REX_STORE_U16(ctx.r31.u32 + 1184, ctx.r9.u16);
	// lwz r11,204(r30)
	ctx.current_instruction = 0x881A4940;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// srawi r4,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 6;
	// sth r4,1186(r31)
	ctx.current_instruction = 0x881A4958;
	REX_STORE_U16(ctx.r31.u32 + 1186, ctx.r4.u16);
	// lwz r11,204(r30)
	ctx.current_instruction = 0x881A495C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// srawi r7,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 6;
	// sth r7,1188(r31)
	ctx.current_instruction = 0x881A4974;
	REX_STORE_U16(ctx.r31.u32 + 1188, ctx.r7.u16);
	// lwz r5,204(r30)
	ctx.current_instruction = 0x881A4978;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// mulli r11,r5,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(28));
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// srawi r3,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 6;
	// sth r3,1190(r31)
	ctx.current_instruction = 0x881A4988;
	REX_STORE_U16(ctx.r31.u32 + 1190, ctx.r3.u16);
loc_881A498C:
	// lwz r11,208(r30)
	ctx.current_instruction = 0x881A498C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r7,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 6;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sthu r6,2(r8)
	ctx.current_instruction = 0x881A49A4;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881a498c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A498C;
	// lwz r11,2096(r30)
	ctx.current_instruction = 0x881A49AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2096);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r30,23984
	ctx.r9.s64 = ctx.r30.s64 + 23984;
	// addi r8,r30,2120
	ctx.r8.s64 = ctx.r30.s64 + 2120;
	// addi r7,r30,24240
	ctx.r7.s64 = ctx.r30.s64 + 24240;
	// stw r11,1224(r31)
	ctx.current_instruction = 0x881A49C0;
	REX_STORE_U32(ctx.r31.u32 + 1224, ctx.r11.u32);
	// lwz r6,2100(r30)
	ctx.current_instruction = 0x881A49C4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 2100);
	// stw r6,1228(r31)
	ctx.current_instruction = 0x881A49C8;
	REX_STORE_U32(ctx.r31.u32 + 1228, ctx.r6.u32);
	// lwz r5,21712(r30)
	ctx.current_instruction = 0x881A49CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 21712);
	// stw r5,1236(r31)
	ctx.current_instruction = 0x881A49D0;
	REX_STORE_U32(ctx.r31.u32 + 1236, ctx.r5.u32);
	// lwz r4,21716(r30)
	ctx.current_instruction = 0x881A49D4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 21716);
	// stw r4,1240(r31)
	ctx.current_instruction = 0x881A49D8;
	REX_STORE_U32(ctx.r31.u32 + 1240, ctx.r4.u32);
	// lwz r3,20692(r30)
	ctx.current_instruction = 0x881A49DC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 20692);
	// stw r3,1380(r31)
	ctx.current_instruction = 0x881A49E0;
	REX_STORE_U32(ctx.r31.u32 + 1380, ctx.r3.u32);
	// lwz r11,15284(r30)
	ctx.current_instruction = 0x881A49E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15284);
	// stw r11,1384(r31)
	ctx.current_instruction = 0x881A49E8;
	REX_STORE_U32(ctx.r31.u32 + 1384, ctx.r11.u32);
	// lwz r11,15536(r30)
	ctx.current_instruction = 0x881A49EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15536);
	// addi r6,r11,-7
	ctx.r6.s64 = ctx.r11.s64 + -7;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 & ctx.r10.u64;
	// stb r11,1324(r31)
	ctx.current_instruction = 0x881A4A00;
	REX_STORE_U8(ctx.r31.u32 + 1324, ctx.r11.u8);
	// lwz r10,20768(r30)
	ctx.current_instruction = 0x881A4A04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20768);
	// stw r10,1388(r31)
	ctx.current_instruction = 0x881A4A08;
	REX_STORE_U32(ctx.r31.u32 + 1388, ctx.r10.u32);
	// lwz r6,4016(r30)
	ctx.current_instruction = 0x881A4A0C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 4016);
	// stw r6,1392(r31)
	ctx.current_instruction = 0x881A4A10;
	REX_STORE_U32(ctx.r31.u32 + 1392, ctx.r6.u32);
	// lwz r5,248(r30)
	ctx.current_instruction = 0x881A4A14;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 248);
	// stb r5,1244(r31)
	ctx.current_instruction = 0x881A4A18;
	REX_STORE_U8(ctx.r31.u32 + 1244, ctx.r5.u8);
	// lwz r3,4036(r30)
	ctx.current_instruction = 0x881A4A1C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4036);
	// stb r3,1245(r31)
	ctx.current_instruction = 0x881A4A20;
	REX_STORE_U8(ctx.r31.u32 + 1245, ctx.r3.u8);
	// lwz r10,4044(r30)
	ctx.current_instruction = 0x881A4A24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4044);
	// stb r10,1246(r31)
	ctx.current_instruction = 0x881A4A28;
	REX_STORE_U8(ctx.r31.u32 + 1246, ctx.r10.u8);
	// lwz r5,252(r30)
	ctx.current_instruction = 0x881A4A2C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 252);
	// stb r5,1249(r31)
	ctx.current_instruction = 0x881A4A30;
	REX_STORE_U8(ctx.r31.u32 + 1249, ctx.r5.u8);
	// lwz r3,476(r30)
	ctx.current_instruction = 0x881A4A34;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 476);
	// stb r3,1250(r31)
	ctx.current_instruction = 0x881A4A38;
	REX_STORE_U8(ctx.r31.u32 + 1250, ctx.r3.u8);
	// lwz r10,21968(r30)
	ctx.current_instruction = 0x881A4A3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 21968);
	// stw r10,1304(r31)
	ctx.current_instruction = 0x881A4A40;
	REX_STORE_U32(ctx.r31.u32 + 1304, ctx.r10.u32);
	// lwz r6,288(r30)
	ctx.current_instruction = 0x881A4A44;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 288);
	// stw r6,1308(r31)
	ctx.current_instruction = 0x881A4A48;
	REX_STORE_U32(ctx.r31.u32 + 1308, ctx.r6.u32);
	// lwz r5,1952(r30)
	ctx.current_instruction = 0x881A4A4C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 1952);
	// stb r5,1247(r31)
	ctx.current_instruction = 0x881A4A50;
	REX_STORE_U8(ctx.r31.u32 + 1247, ctx.r5.u8);
	// lwz r3,1956(r30)
	ctx.current_instruction = 0x881A4A54;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1956);
	// stb r3,1248(r31)
	ctx.current_instruction = 0x881A4A58;
	REX_STORE_U8(ctx.r31.u32 + 1248, ctx.r3.u8);
	// lwz r10,1948(r30)
	ctx.current_instruction = 0x881A4A5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1948);
	// stb r10,1251(r31)
	ctx.current_instruction = 0x881A4A60;
	REX_STORE_U8(ctx.r31.u32 + 1251, ctx.r10.u8);
	// lwz r5,22284(r30)
	ctx.current_instruction = 0x881A4A64;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 22284);
	// stw r5,1312(r31)
	ctx.current_instruction = 0x881A4A68;
	REX_STORE_U32(ctx.r31.u32 + 1312, ctx.r5.u32);
	// lwz r4,3972(r30)
	ctx.current_instruction = 0x881A4A6C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 3972);
	// stw r4,1316(r31)
	ctx.current_instruction = 0x881A4A70;
	REX_STORE_U32(ctx.r31.u32 + 1316, ctx.r4.u32);
	// stw r9,1260(r31)
	ctx.current_instruction = 0x881A4A74;
	REX_STORE_U32(ctx.r31.u32 + 1260, ctx.r9.u32);
	// stw r8,1232(r31)
	ctx.current_instruction = 0x881A4A78;
	REX_STORE_U32(ctx.r31.u32 + 1232, ctx.r8.u32);
	// lwz r3,20708(r30)
	ctx.current_instruction = 0x881A4A7C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 20708);
	// stb r3,1254(r31)
	ctx.current_instruction = 0x881A4A80;
	REX_STORE_U8(ctx.r31.u32 + 1254, ctx.r3.u8);
	// lwz r10,21644(r30)
	ctx.current_instruction = 0x881A4A84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 21644);
	// stb r10,1255(r31)
	ctx.current_instruction = 0x881A4A88;
	REX_STORE_U8(ctx.r31.u32 + 1255, ctx.r10.u8);
	// stw r7,1264(r31)
	ctx.current_instruction = 0x881A4A8C;
	REX_STORE_U32(ctx.r31.u32 + 1264, ctx.r7.u32);
	// lwz r8,20680(r30)
	ctx.current_instruction = 0x881A4A90;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20680);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x881a4ac4
	if (ctx.cr6.eq) goto loc_881A4AC4;
	// lwz r11,20684(r30)
	ctx.current_instruction = 0x881A4A9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881a4ac4
	if (!ctx.cr6.eq) goto loc_881A4AC4;
	// lwz r11,1836(r30)
	ctx.current_instruction = 0x881A4AA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1836);
	// stw r11,1268(r31)
	ctx.current_instruction = 0x881A4AAC;
	REX_STORE_U32(ctx.r31.u32 + 1268, ctx.r11.u32);
	// lwz r10,20752(r30)
	ctx.current_instruction = 0x881A4AB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20752);
	// stw r10,1272(r31)
	ctx.current_instruction = 0x881A4AB4;
	REX_STORE_U32(ctx.r31.u32 + 1272, ctx.r10.u32);
	// lwz r9,20756(r30)
	ctx.current_instruction = 0x881A4AB8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20756);
	// stw r9,1300(r31)
	ctx.current_instruction = 0x881A4ABC;
	REX_STORE_U32(ctx.r31.u32 + 1300, ctx.r9.u32);
	// b 0x881a4b44
	goto loc_881A4B44;
loc_881A4AC4:
	// lwz r11,15536(r30)
	ctx.current_instruction = 0x881A4AC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x881a4b14
	if (!ctx.cr6.eq) goto loc_881A4B14;
	// lwz r11,1816(r30)
	ctx.current_instruction = 0x881A4AD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1816);
	// stw r11,1268(r31)
	ctx.current_instruction = 0x881A4AD4;
	REX_STORE_U32(ctx.r31.u32 + 1268, ctx.r11.u32);
	// lwz r10,1816(r30)
	ctx.current_instruction = 0x881A4AD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1816);
	// stw r10,1272(r31)
	ctx.current_instruction = 0x881A4ADC;
	REX_STORE_U32(ctx.r31.u32 + 1272, ctx.r10.u32);
	// lwz r9,1824(r30)
	ctx.current_instruction = 0x881A4AE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1824);
	// stw r9,1276(r31)
	ctx.current_instruction = 0x881A4AE4;
	REX_STORE_U32(ctx.r31.u32 + 1276, ctx.r9.u32);
	// lwz r8,1820(r30)
	ctx.current_instruction = 0x881A4AE8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 1820);
	// stw r8,1280(r31)
	ctx.current_instruction = 0x881A4AEC;
	REX_STORE_U32(ctx.r31.u32 + 1280, ctx.r8.u32);
	// lwz r7,1824(r30)
	ctx.current_instruction = 0x881A4AF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 1824);
	// stw r7,1284(r31)
	ctx.current_instruction = 0x881A4AF4;
	REX_STORE_U32(ctx.r31.u32 + 1284, ctx.r7.u32);
	// lwz r6,1820(r30)
	ctx.current_instruction = 0x881A4AF8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 1820);
	// stw r6,1288(r31)
	ctx.current_instruction = 0x881A4AFC;
	REX_STORE_U32(ctx.r31.u32 + 1288, ctx.r6.u32);
	// lwz r5,1824(r30)
	ctx.current_instruction = 0x881A4B00;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 1824);
	// stw r5,1292(r31)
	ctx.current_instruction = 0x881A4B04;
	REX_STORE_U32(ctx.r31.u32 + 1292, ctx.r5.u32);
	// lwz r4,1820(r30)
	ctx.current_instruction = 0x881A4B08;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 1820);
	// stw r4,1296(r31)
	ctx.current_instruction = 0x881A4B0C;
	REX_STORE_U32(ctx.r31.u32 + 1296, ctx.r4.u32);
	// b 0x881a4b44
	goto loc_881A4B44;
loc_881A4B14:
	// lwz r11,1812(r30)
	ctx.current_instruction = 0x881A4B14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1812);
	// stw r11,1268(r31)
	ctx.current_instruction = 0x881A4B18;
	REX_STORE_U32(ctx.r31.u32 + 1268, ctx.r11.u32);
	// lwz r10,1824(r30)
	ctx.current_instruction = 0x881A4B1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1824);
	// stw r10,1272(r31)
	ctx.current_instruction = 0x881A4B20;
	REX_STORE_U32(ctx.r31.u32 + 1272, ctx.r10.u32);
	// lwz r9,1808(r30)
	ctx.current_instruction = 0x881A4B24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1808);
	// stw r9,1276(r31)
	ctx.current_instruction = 0x881A4B28;
	REX_STORE_U32(ctx.r31.u32 + 1276, ctx.r9.u32);
	// lwz r8,1820(r30)
	ctx.current_instruction = 0x881A4B2C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 1820);
	// stw r8,1280(r31)
	ctx.current_instruction = 0x881A4B30;
	REX_STORE_U32(ctx.r31.u32 + 1280, ctx.r8.u32);
	// lwz r7,1804(r30)
	ctx.current_instruction = 0x881A4B34;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 1804);
	// stw r7,1284(r31)
	ctx.current_instruction = 0x881A4B38;
	REX_STORE_U32(ctx.r31.u32 + 1284, ctx.r7.u32);
	// lwz r6,1816(r30)
	ctx.current_instruction = 0x881A4B3C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 1816);
	// stw r6,1288(r31)
	ctx.current_instruction = 0x881A4B40;
	REX_STORE_U32(ctx.r31.u32 + 1288, ctx.r6.u32);
loc_881A4B44:
	// sth r23,1256(r31)
	ctx.current_instruction = 0x881A4B44;
	REX_STORE_U16(ctx.r31.u32 + 1256, ctx.r23.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1800(r30)
	ctx.current_instruction = 0x881A4B4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1800);
	// stb r11,1252(r31)
	ctx.current_instruction = 0x881A4B50;
	REX_STORE_U8(ctx.r31.u32 + 1252, ctx.r11.u8);
	// lwz r9,1940(r30)
	ctx.current_instruction = 0x881A4B54;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1940);
	// stb r9,1253(r31)
	ctx.current_instruction = 0x881A4B58;
	REX_STORE_U8(ctx.r31.u32 + 1253, ctx.r9.u8);
	// lwz r7,22284(r30)
	ctx.current_instruction = 0x881A4B5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 22284);
	// stw r7,1312(r31)
	ctx.current_instruction = 0x881A4B60;
	REX_STORE_U32(ctx.r31.u32 + 1312, ctx.r7.u32);
	// lwz r6,3972(r30)
	ctx.current_instruction = 0x881A4B64;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 3972);
	// stw r6,1316(r31)
	ctx.current_instruction = 0x881A4B68;
	REX_STORE_U32(ctx.r31.u32 + 1316, ctx.r6.u32);
	// lwz r5,3976(r30)
	ctx.current_instruction = 0x881A4B6C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 3976);
	// stw r5,1320(r31)
	ctx.current_instruction = 0x881A4B70;
	REX_STORE_U32(ctx.r31.u32 + 1320, ctx.r5.u32);
	// bl 0x88171708
	ctx.lr = 0x881A4B78;
	sub_88171708(ctx, base);
loc_881A4B78:
	// stw r3,380(r31)
	ctx.current_instruction = 0x881A4B78;
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r3.u32);
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// addi r4,r30,24304
	ctx.r4.s64 = ctx.r30.s64 + 24304;
	// addi r6,r10,26424
	ctx.r6.s64 = ctx.r10.s64 + 26424;
	// addi r9,r30,24496
	ctx.r9.s64 = ctx.r30.s64 + 24496;
	// li r11,4
	ctx.r11.s64 = 4;
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r8,r6,4
	ctx.r8.s64 = ctx.r6.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lhz r7,52(r31)
	ctx.current_instruction = 0x881A4B9C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 52);
	// rlwinm r5,r7,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// divw r10,r5,r3
	ctx.r10.u64 = uint32_t((ctx.r3.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r5.s32 / ctx.r3.s32 : 0);
	// rotlwi r11,r5,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// stw r10,384(r31)
	ctx.current_instruction = 0x881A4BAC;
	REX_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
	// stw r4,1356(r31)
	ctx.current_instruction = 0x881A4BB0;
	REX_STORE_U32(ctx.r31.u32 + 1356, ctx.r4.u32);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r9,1360(r31)
	ctx.current_instruction = 0x881A4BB8;
	REX_STORE_U32(ctx.r31.u32 + 1360, ctx.r9.u32);
	// andc r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 & ~ctx.r7.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r4,1768(r30)
	ctx.current_instruction = 0x881A4BC8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 1768);
	// stw r4,616(r31)
	ctx.current_instruction = 0x881A4BCC;
	REX_STORE_U32(ctx.r31.u32 + 616, ctx.r4.u32);
	// lwz r3,15904(r30)
	ctx.current_instruction = 0x881A4BD0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 15904);
	// stw r3,960(r31)
	ctx.current_instruction = 0x881A4BD4;
	REX_STORE_U32(ctx.r31.u32 + 960, ctx.r3.u32);
	// lwz r11,1356(r31)
	ctx.current_instruction = 0x881A4BD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1356);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,204(r30)
	ctx.current_instruction = 0x881A4BE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
loc_881A4BE4:
	// lwz r9,-4(r8)
	ctx.current_instruction = 0x881A4BE4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// stb r7,0(r11)
	ctx.current_instruction = 0x881A4BE8;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,-1(r11)
	ctx.current_instruction = 0x881A4BF8;
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r4.u8);
	// stw r3,3(r11)
	ctx.current_instruction = 0x881A4BFC;
	REX_STORE_U32(ctx.r11.u32 + 3, ctx.r3.u32);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x881a4c24
	if (ctx.cr6.eq) goto loc_881A4C24;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,0(r11)
	ctx.current_instruction = 0x881A4C1C;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// stw r3,7(r11)
	ctx.current_instruction = 0x881A4C20;
	REX_STORE_U32(ctx.r11.u32 + 7, ctx.r3.u32);
loc_881A4C24:
	// lwz r9,0(r8)
	ctx.current_instruction = 0x881A4C24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stb r7,12(r11)
	ctx.current_instruction = 0x881A4C28;
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,11(r11)
	ctx.current_instruction = 0x881A4C38;
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r4.u8);
	// stw r3,15(r11)
	ctx.current_instruction = 0x881A4C3C;
	REX_STORE_U32(ctx.r11.u32 + 15, ctx.r3.u32);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x881a4c64
	if (ctx.cr6.eq) goto loc_881A4C64;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,12(r11)
	ctx.current_instruction = 0x881A4C5C;
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r4.u8);
	// stw r3,19(r11)
	ctx.current_instruction = 0x881A4C60;
	REX_STORE_U32(ctx.r11.u32 + 19, ctx.r3.u32);
loc_881A4C64:
	// lwz r9,4(r8)
	ctx.current_instruction = 0x881A4C64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stb r7,24(r11)
	ctx.current_instruction = 0x881A4C68;
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,23(r11)
	ctx.current_instruction = 0x881A4C78;
	REX_STORE_U8(ctx.r11.u32 + 23, ctx.r4.u8);
	// stw r3,27(r11)
	ctx.current_instruction = 0x881A4C7C;
	REX_STORE_U32(ctx.r11.u32 + 27, ctx.r3.u32);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x881a4ca4
	if (ctx.cr6.eq) goto loc_881A4CA4;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,24(r11)
	ctx.current_instruction = 0x881A4C9C;
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r4.u8);
	// stw r3,31(r11)
	ctx.current_instruction = 0x881A4CA0;
	REX_STORE_U32(ctx.r11.u32 + 31, ctx.r3.u32);
loc_881A4CA4:
	// lwz r9,8(r8)
	ctx.current_instruction = 0x881A4CA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stb r7,36(r11)
	ctx.current_instruction = 0x881A4CA8;
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r7.u8);
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,35(r11)
	ctx.current_instruction = 0x881A4CB8;
	REX_STORE_U8(ctx.r11.u32 + 35, ctx.r4.u8);
	// stw r3,39(r11)
	ctx.current_instruction = 0x881A4CBC;
	REX_STORE_U32(ctx.r11.u32 + 39, ctx.r3.u32);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x881a4ce4
	if (ctx.cr6.eq) goto loc_881A4CE4;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,36(r11)
	ctx.current_instruction = 0x881A4CDC;
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r4.u8);
	// stw r3,43(r11)
	ctx.current_instruction = 0x881A4CE0;
	REX_STORE_U32(ctx.r11.u32 + 43, ctx.r3.u32);
loc_881A4CE4:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x881a4be4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A4BE4;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r11,1360(r31)
	ctx.current_instruction = 0x881A4CF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// lwz r10,208(r30)
	ctx.current_instruction = 0x881A4CF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// addi r8,r6,4
	ctx.r8.s64 = ctx.r6.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881A4D08:
	// lwz r9,-4(r8)
	ctx.current_instruction = 0x881A4D08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// stb r7,0(r11)
	ctx.current_instruction = 0x881A4D0C;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,-1(r11)
	ctx.current_instruction = 0x881A4D1C;
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r5.u8);
	// stw r4,3(r11)
	ctx.current_instruction = 0x881A4D20;
	REX_STORE_U32(ctx.r11.u32 + 3, ctx.r4.u32);
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881a4d48
	if (ctx.cr6.eq) goto loc_881A4D48;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,0(r11)
	ctx.current_instruction = 0x881A4D40;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// stw r4,7(r11)
	ctx.current_instruction = 0x881A4D44;
	REX_STORE_U32(ctx.r11.u32 + 7, ctx.r4.u32);
loc_881A4D48:
	// lwz r9,0(r8)
	ctx.current_instruction = 0x881A4D48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stb r7,12(r11)
	ctx.current_instruction = 0x881A4D4C;
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,11(r11)
	ctx.current_instruction = 0x881A4D5C;
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r5.u8);
	// stw r4,15(r11)
	ctx.current_instruction = 0x881A4D60;
	REX_STORE_U32(ctx.r11.u32 + 15, ctx.r4.u32);
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881a4d88
	if (ctx.cr6.eq) goto loc_881A4D88;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,12(r11)
	ctx.current_instruction = 0x881A4D80;
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r5.u8);
	// stw r4,19(r11)
	ctx.current_instruction = 0x881A4D84;
	REX_STORE_U32(ctx.r11.u32 + 19, ctx.r4.u32);
loc_881A4D88:
	// lwz r9,4(r8)
	ctx.current_instruction = 0x881A4D88;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stb r7,24(r11)
	ctx.current_instruction = 0x881A4D8C;
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,23(r11)
	ctx.current_instruction = 0x881A4D9C;
	REX_STORE_U8(ctx.r11.u32 + 23, ctx.r5.u8);
	// stw r4,27(r11)
	ctx.current_instruction = 0x881A4DA0;
	REX_STORE_U32(ctx.r11.u32 + 27, ctx.r4.u32);
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881a4dc8
	if (ctx.cr6.eq) goto loc_881A4DC8;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,24(r11)
	ctx.current_instruction = 0x881A4DC0;
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r5.u8);
	// stw r4,31(r11)
	ctx.current_instruction = 0x881A4DC4;
	REX_STORE_U32(ctx.r11.u32 + 31, ctx.r4.u32);
loc_881A4DC8:
	// lwz r9,8(r8)
	ctx.current_instruction = 0x881A4DC8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stb r7,36(r11)
	ctx.current_instruction = 0x881A4DCC;
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r7.u8);
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,35(r11)
	ctx.current_instruction = 0x881A4DDC;
	REX_STORE_U8(ctx.r11.u32 + 35, ctx.r5.u8);
	// stw r4,39(r11)
	ctx.current_instruction = 0x881A4DE0;
	REX_STORE_U32(ctx.r11.u32 + 39, ctx.r4.u32);
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881a4e08
	if (ctx.cr6.eq) goto loc_881A4E08;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,36(r11)
	ctx.current_instruction = 0x881A4E00;
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r5.u8);
	// stw r4,43(r11)
	ctx.current_instruction = 0x881A4E04;
	REX_STORE_U32(ctx.r11.u32 + 43, ctx.r4.u32);
loc_881A4E08:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x881a4d08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A4D08;
	// lwz r11,1600(r31)
	ctx.current_instruction = 0x881A4E14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1600);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a50ac
	if (ctx.cr6.eq) goto loc_881A50AC;
	// lwz r11,12(r11)
	ctx.current_instruction = 0x881A4E20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x881a50ac
	if (!ctx.cr6.eq) goto loc_881A50AC;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,620(r31)
	ctx.current_instruction = 0x881A4E30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 620);
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r9,r9,-19972
	ctx.r9.s64 = ctx.r9.s64 + -19972;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// stw r9,1604(r31)
	ctx.current_instruction = 0x881A4E48;
	REX_STORE_U32(ctx.r31.u32 + 1604, ctx.r9.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r29,r10,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_881A4E64:
	// lbzx r28,r11,r10
	ctx.current_instruction = 0x881A4E64;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r28,4,26,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0x30;
	// rlwinm r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// or r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 | ctx.r28.u64;
	// rlwinm r28,r28,0,25,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x7E;
	// stbx r28,r29,r9
	ctx.current_instruction = 0x881A4E7C;
	REX_STORE_U8(ctx.r29.u32 + ctx.r9.u32, ctx.r28.u8);
	// lbzx r9,r8,r11
	ctx.current_instruction = 0x881A4E80;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r28,r9,4,26,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x30;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r7,r11
	ctx.current_instruction = 0x881A4E94;
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r6,r11
	ctx.current_instruction = 0x881A4E98;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r28,r9,4,26,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x30;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r5,r11
	ctx.current_instruction = 0x881A4EAC;
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.current_instruction = 0x881A4EB0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r28,r9,4,26,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x30;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r3,r11
	ctx.current_instruction = 0x881A4EC4;
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881a4e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A4E64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,624(r31)
	ctx.current_instruction = 0x881A4ED4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 624);
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r9,r9,-19940
	ctx.r9.s64 = ctx.r9.s64 + -19940;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// stw r9,1608(r31)
	ctx.current_instruction = 0x881A4EEC;
	REX_STORE_U32(ctx.r31.u32 + 1608, ctx.r9.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r29,r10,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_881A4F08:
	// lbzx r28,r11,r10
	ctx.current_instruction = 0x881A4F08;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r28,3,24,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xF8;
	// rlwinm r28,r28,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// or r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 | ctx.r28.u64;
	// rlwinm r28,r28,0,26,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x3E;
	// stbx r28,r29,r9
	ctx.current_instruction = 0x881A4F20;
	REX_STORE_U8(ctx.r29.u32 + ctx.r9.u32, ctx.r28.u8);
	// lbzx r9,r8,r11
	ctx.current_instruction = 0x881A4F24;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,24,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,26,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3E;
	// stbx r9,r7,r11
	ctx.current_instruction = 0x881A4F38;
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r6,r11
	ctx.current_instruction = 0x881A4F3C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,24,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,26,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3E;
	// stbx r9,r5,r11
	ctx.current_instruction = 0x881A4F50;
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.current_instruction = 0x881A4F54;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,24,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,26,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3E;
	// stbx r9,r3,r11
	ctx.current_instruction = 0x881A4F68;
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881a4f08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A4F08;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,632(r31)
	ctx.current_instruction = 0x881A4F78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 632);
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r9,r9,-19908
	ctx.r9.s64 = ctx.r9.s64 + -19908;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// stw r9,1616(r31)
	ctx.current_instruction = 0x881A4F90;
	REX_STORE_U32(ctx.r31.u32 + 1616, ctx.r9.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r29,r10,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_881A4FAC:
	// lbzx r28,r11,r10
	ctx.current_instruction = 0x881A4FAC;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r28,3,27,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0x18;
	// rlwinm r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// or r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 | ctx.r28.u64;
	// rlwinm r28,r28,0,25,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x7E;
	// stbx r28,r29,r9
	ctx.current_instruction = 0x881A4FC4;
	REX_STORE_U8(ctx.r29.u32 + ctx.r9.u32, ctx.r28.u8);
	// lbzx r9,r8,r11
	ctx.current_instruction = 0x881A4FC8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,27,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x18;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r7,r11
	ctx.current_instruction = 0x881A4FDC;
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r6,r11
	ctx.current_instruction = 0x881A4FE0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,27,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x18;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r5,r11
	ctx.current_instruction = 0x881A4FF4;
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.current_instruction = 0x881A4FF8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,27,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x18;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r3,r11
	ctx.current_instruction = 0x881A500C;
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881a4fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A4FAC;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,444(r31)
	ctx.current_instruction = 0x881A501C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 444);
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r9,r9,-20036
	ctx.r9.s64 = ctx.r9.s64 + -20036;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r9,1620(r31)
	ctx.current_instruction = 0x881A5030;
	REX_STORE_U32(ctx.r31.u32 + 1620, ctx.r9.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r31,r10,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_881A5050:
	// lbzx r30,r11,r10
	ctx.current_instruction = 0x881A5050;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r30,30,2,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r30,r30,4,25,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0x70;
	// or r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 | ctx.r30.u64;
	// stbx r30,r31,r9
	ctx.current_instruction = 0x881A5064;
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u8);
	// lbzx r9,r8,r11
	ctx.current_instruction = 0x881A5068;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 | ctx.r9.u64;
	// stbx r9,r7,r11
	ctx.current_instruction = 0x881A5078;
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r6,r11
	ctx.current_instruction = 0x881A507C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 | ctx.r9.u64;
	// stbx r9,r5,r11
	ctx.current_instruction = 0x881A508C;
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.current_instruction = 0x881A5090;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 | ctx.r9.u64;
	// stbx r9,r3,r11
	ctx.current_instruction = 0x881A50A0;
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881a5050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A5050;
loc_881A50AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DDB78) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881DDB78);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DDB78;
	ctx.current_instruction = 0x881DDB78;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// stw r11,0(r5)
	ctx.current_instruction = 0x881DDB80;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	ctx.current_instruction = 0x881DDB84;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bne cr6,0x881ddba8
	if (!ctx.cr6.eq) goto loc_881DDBA8;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x881ddbf4
	if (!ctx.cr6.eq) goto loc_881DDBF4;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,31
	ctx.r3.s64 = 31;
	// stw r11,0(r5)
	ctx.current_instruction = 0x881DDB9C;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	ctx.current_instruction = 0x881DDBA0;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881DDBA8:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x881ddbcc
	if (!ctx.cr6.eq) goto loc_881DDBCC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x881ddc3c
	if (!ctx.cr6.eq) goto loc_881DDC3C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,13
	ctx.r3.s64 = 13;
	// stw r11,0(r5)
	ctx.current_instruction = 0x881DDBC0;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	ctx.current_instruction = 0x881DDBC4;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881DDBCC:
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x881ddc14
	if (!ctx.cr6.eq) goto loc_881DDC14;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x881ddc5c
	if (!ctx.cr6.eq) goto loc_881DDC5C;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r5)
	ctx.current_instruction = 0x881DDBE4;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,53
	ctx.r3.s64 = 53;
	// stw r10,0(r6)
	ctx.current_instruction = 0x881DDBEC;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881DDBF4:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x881ddc5c
	if (!ctx.cr6.eq) goto loc_881DDC5C;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r5)
	ctx.current_instruction = 0x881DDC04;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,35
	ctx.r3.s64 = 35;
	// stw r10,0(r6)
	ctx.current_instruction = 0x881DDC0C;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881DDC14:
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x881ddc5c
	if (!ctx.cr6.eq) goto loc_881DDC5C;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x881ddc5c
	if (!ctx.cr6.eq) goto loc_881DDC5C;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r5)
	ctx.current_instruction = 0x881DDC2C;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,71
	ctx.r3.s64 = 71;
	// stw r10,0(r6)
	ctx.current_instruction = 0x881DDC34;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881DDC3C:
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// bne cr6,0x881ddc5c
	if (!ctx.cr6.eq) goto loc_881DDC5C;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r5)
	ctx.current_instruction = 0x881DDC4C;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,17
	ctx.r3.s64 = 17;
	// stw r10,0(r6)
	ctx.current_instruction = 0x881DDC54;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881DDC5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881DEEC8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DEEC8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DEEC8) {
			switch (rex_dispatch_address) {
				case 0x881DEED0:
				case 0x881DEFF8:
				case 0x881DF01C:
				case 0x881DF130:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DEEC8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881DEED0: goto loc_881DEED0;
		case 0x881DEFF8: goto loc_881DEFF8;
		case 0x881DF01C: goto loc_881DF01C;
		case 0x881DF130: goto loc_881DF130;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881DEED0;
	__savegprlr_14(ctx, base);
loc_881DEED0:
	// stwu r1,-272(r1)
	ctx.current_instruction = 0x881DEED0;
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,372(r1)
	ctx.current_instruction = 0x881DEED4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r4,300(r1)
	ctx.current_instruction = 0x881DEEDC;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// srawi r11,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 31;
	// stw r9,340(r1)
	ctx.current_instruction = 0x881DEEE8;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r3,292(r1)
	ctx.current_instruction = 0x881DEEF0;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// xor r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 ^ ctx.r11.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x881def20
	if (!ctx.cr6.eq) goto loc_881DEF20;
	// stw r27,112(r1)
	ctx.current_instruction = 0x881DEF18;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// b 0x881def28
	goto loc_881DEF28;
loc_881DEF20:
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// stw r11,112(r1)
	ctx.current_instruction = 0x881DEF24;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_881DEF28:
	// lwz r14,380(r1)
	ctx.current_instruction = 0x881DEF28;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// srawi r11,r14,31
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r14.s32 >> 31;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// xor r10,r14,r11
	ctx.r10.u64 = ctx.r14.u64 ^ ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x881def48
	if (ctx.cr6.eq) goto loc_881DEF48;
	// srawi r6,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r14.s32 >> 1;
loc_881DEF48:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r16,356(r1)
	ctx.current_instruction = 0x881DEF4C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// rlwinm r10,r22,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000;
	// lwz r29,364(r1)
	ctx.current_instruction = 0x881DEF54;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rlwinm r11,r21,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 16) & 0xFFFF0000;
	// lwz r3,396(r1)
	ctx.current_instruction = 0x881DEF5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r31,r9,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r8,r31,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// addi r30,r16,-1
	ctx.r30.s64 = ctx.r16.s64 + -1;
	// addi r24,r29,-1
	ctx.r24.s64 = ctx.r29.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lis r26,0
	ctx.r26.s64 = 0;
	// andc r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 & ~ctx.r9.u64;
	// andc r8,r24,r8
	ctx.r8.u64 = ctx.r24.u64 & ~ctx.r8.u64;
	// clrlwi r19,r3,30
	ctx.r19.u64 = ctx.r3.u32 & 0x3;
	// ori r26,r26,32768
	ctx.r26.u64 = ctx.r26.u64 | 32768;
	// divw r25,r7,r30
	ctx.r25.u64 = uint32_t((ctx.r30.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r30.s32 == -1)) ? ctx.r7.s32 / ctx.r30.s32 : 0);
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r15,r31,r24
	ctx.r15.u64 = uint32_t((ctx.r24.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r31.s32 / ctx.r24.s32 : 0);
	// twllei r24,0
	if (ctx.r24.s32 == 0 || ctx.r24.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x881df024
	if (!ctx.cr6.eq) goto loc_881DF024;
	// srawi r9,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 1;
	// addze r31,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r31.s64 = temp.s64;
	// clrlwi r8,r31,30
	ctx.r8.u64 = ctx.r31.u32 & 0x3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x881df024
	if (!ctx.cr6.eq) goto loc_881DF024;
	// srawi r11,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r16.s32 >> 1;
	// li r30,17
	ctx.r30.s64 = 17;
	// rlwinm r24,r15,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r25,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,100(r1)
	ctx.current_instruction = 0x881DEFD8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// stw r24,92(r1)
	ctx.current_instruction = 0x881DEFE0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r19,84(r1)
	ctx.current_instruction = 0x881DEFE8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// bl 0x881de768
	ctx.lr = 0x881DEFF8;
	sub_881DE768(ctx, base);
loc_881DEFF8:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// lwz r3,404(r1)
	ctx.current_instruction = 0x881DF000;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// stw r24,92(r1)
	ctx.current_instruction = 0x881DF008;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// stw r30,100(r1)
	ctx.current_instruction = 0x881DF010;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r19,84(r1)
	ctx.current_instruction = 0x881DF014;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x881de768
	ctx.lr = 0x881DF01C;
	sub_881DE768(ctx, base);
loc_881DF01C:
	// lwz r17,116(r1)
	ctx.current_instruction = 0x881DF01C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x881df0e4
	goto loc_881DF0E4;
loc_881DF024:
	// srawi r9,r15,4
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r15.s32 >> 4;
	// stw r11,116(r1)
	ctx.current_instruction = 0x881DF028;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r19,r26,r8
	ctx.r19.u64 = ctx.r8.u64 - ctx.r26.u64;
	// cmpw cr6,r19,r26
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x881df0e4
	if (ctx.cr6.lt) goto loc_881DF0E4;
	// srawi r11,r25,4
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 4;
	// lwz r23,404(r1)
	ctx.current_instruction = 0x881DF04C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// rlwinm r20,r15,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r27,r26,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r26.u64;
loc_881DF064:
	// srawi r9,r24,17
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r24.s32 >> 17;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x881df0c4
	if (ctx.cr6.lt) goto loc_881DF0C4;
	// mullw r31,r9,r5
	ctx.r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r30,r31,r18
	ctx.r30.u64 = ctx.r31.u64 + ctx.r18.u64;
	// add r29,r7,r23
	ctx.r29.u64 = ctx.r7.u64 + ctx.r23.u64;
	// rlwinm r28,r25,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
loc_881DF08C:
	// srawi r9,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 17;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r14,r31,r9
	ctx.r14.u64 = ctx.r31.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// lbzx r9,r30,r9
	ctx.current_instruction = 0x881DF09C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// lbzx r14,r14,r4
	ctx.current_instruction = 0x881DF0A0;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r14.u32 + ctx.r4.u32);
	// stbx r14,r8,r3
	ctx.current_instruction = 0x881DF0A4;
	REX_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r14.u8);
	// stbx r9,r29,r11
	ctx.current_instruction = 0x881DF0A8;
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r9.u8);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// ble cr6,0x881df08c
	if (!ctx.cr6.gt) goto loc_881DF08C;
	// lwz r14,380(r1)
	ctx.current_instruction = 0x881DF0B8;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r29,364(r1)
	ctx.current_instruction = 0x881DF0BC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r28,292(r1)
	ctx.current_instruction = 0x881DF0C0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
loc_881DF0C4:
	// lwz r11,112(r1)
	ctx.current_instruction = 0x881DF0C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r24,r20,r24
	ctx.r24.u64 = ctx.r20.u64 + ctx.r24.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r24,r19
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r19.s32, ctx.xer);
	// ble cr6,0x881df064
	if (!ctx.cr6.gt) goto loc_881DF064;
	// lwz r23,300(r1)
	ctx.current_instruction = 0x881DF0D8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r20,340(r1)
	ctx.current_instruction = 0x881DF0DC;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r27,372(r1)
	ctx.current_instruction = 0x881DF0E0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
loc_881DF0E4:
	// clrlwi r11,r28,30
	ctx.r11.u64 = ctx.r28.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881df138
	if (!ctx.cr6.eq) goto loc_881DF138;
	// clrlwi r11,r29,30
	ctx.r11.u64 = ctx.r29.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881df138
	if (!ctx.cr6.eq) goto loc_881DF138;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r25,84(r1)
	ctx.current_instruction = 0x881DF100;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r15,92(r1)
	ctx.current_instruction = 0x881DF108;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r15.u32);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// stw r11,100(r1)
	ctx.current_instruction = 0x881DF110;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881de768
	ctx.lr = 0x881DF130;
	sub_881DE768(ctx, base);
loc_881DF130:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881DF138:
	// srawi r11,r15,4
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r15.s32 >> 4;
	// lwz r10,116(r1)
	ctx.current_instruction = 0x881DF13C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r29,r26,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r26.u64;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x881df1d8
	if (ctx.cr6.lt) goto loc_881DF1D8;
	// srawi r11,r25,4
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 4;
	// rlwinm r31,r15,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r30,r27,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r17
	ctx.r10.u64 = ctx.r11.u64 + ctx.r17.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// subf r4,r26,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r26.u64;
loc_881DF174:
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
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpw cr6,r4,r26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x881df1c8
	if (ctx.cr6.lt) goto loc_881DF1C8;
	// mullw r7,r9,r20
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r20.s32);
	// mullw r9,r6,r20
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r20.s32);
	// add r7,r7,r23
	ctx.r7.u64 = ctx.r7.u64 + ctx.r23.u64;
	// add r6,r9,r23
	ctx.r6.u64 = ctx.r9.u64 + ctx.r23.u64;
	// add r5,r8,r27
	ctx.r5.u64 = ctx.r8.u64 + ctx.r27.u64;
loc_881DF1A4:
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// lbzx r28,r7,r9
	ctx.current_instruction = 0x881DF1B0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r9,r6,r9
	ctx.current_instruction = 0x881DF1B4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// stbx r28,r8,r10
	ctx.current_instruction = 0x881DF1B8;
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r28.u8);
	// stbx r9,r5,r10
	ctx.current_instruction = 0x881DF1BC;
	REX_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r9.u8);
	// add r10,r10,r14
	ctx.r10.u64 = ctx.r10.u64 + ctx.r14.u64;
	// ble cr6,0x881df1a4
	if (!ctx.cr6.gt) goto loc_881DF1A4;
loc_881DF1C8:
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x881df174
	if (!ctx.cr6.gt) goto loc_881DF174;
loc_881DF1D8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E6750) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E6750;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E6750) {
			switch (rex_dispatch_address) {
				case 0x881E6758:
				case 0x881E6968:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E6750;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E6758: goto loc_881E6758;
		case 0x881E6968: goto loc_881E6968;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x881E6758;
	__savegprlr_18(ctx, base);
loc_881E6758:
	// stwu r1,-304(r1)
	ctx.current_instruction = 0x881E6758;
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30717
	ctx.r11.s64 = -2013069312;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// vspltish v4,3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x3)));
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// addi r9,r11,-25568
	ctx.r9.s64 = ctx.r11.s64 + -25568;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v7,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v12,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,160
	ctx.r28.s64 = ctx.r1.s64 + 160;
	// lvx128 v11,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r24,r22,0,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFF0;
	// lvx128 v10,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stvx128 v13,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,16
	ctx.r30.s64 = 16;
	// stvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r5,r23
	ctx.r31.u64 = ctx.r5.u64 + ctx.r23.u64;
	// stvx128 v10,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x881e68a4
	if (!ctx.cr6.gt) goto loc_881E68A4;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881E6818:
	// lvrx128 v63,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// vor128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvrx128 v61,r4,r8
	temp.u32 = ctx.r4.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v9,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vmrghb v6,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v8,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v3,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v2,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v5,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v25,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v24,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubshs v23,v27,v30
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v22,v26,v24
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vaddshs v21,v25,v23
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vsrah v20,v22,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v21,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v59,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// stvlx128 v59,r0,r9
	ctx.current_instruction = 0x881E6894;
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r9,r30
	ctx.current_instruction = 0x881E6898;
	ea = ctx.r9.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x881e6818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E6818;
loc_881E68A4:
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x881e68fc
	if (!ctx.cr6.lt) goto loc_881E68FC;
	// subf r9,r11,r22
	ctx.r9.u64 = ctx.r22.u64 - ctx.r11.u64;
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881E68C4:
	// srawi r9,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 7;
	// clrlwi r6,r10,25
	ctx.r6.u64 = ctx.r10.u32 & 0x7F;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// subfic r4,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r4.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r8,r9,r3
	ctx.current_instruction = 0x881E68D4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// lbzx r9,r7,r9
	ctx.current_instruction = 0x881E68D8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r6,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 7;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// stbx r4,r11,r5
	ctx.current_instruction = 0x881E68F0;
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881e68c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E68C4;
loc_881E68FC:
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x881e6924
	if (!ctx.cr6.lt) goto loc_881E6924;
	// subf r9,r11,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881E690C:
	// srawi r9,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 7;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// lbzx r8,r9,r3
	ctx.current_instruction = 0x881E6914;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// stbx r8,r11,r5
	ctx.current_instruction = 0x881E6918;
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881e690c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E690C;
loc_881E6924:
	// add r28,r3,r21
	ctx.r28.u64 = ctx.r3.u64 + ctx.r21.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x881e6f80
	if (!ctx.cr6.gt) goto loc_881E6F80;
	// addi r26,r28,1
	ctx.r26.s64 = ctx.r28.s64 + 1;
loc_881E6938:
	// clrlwi r11,r20,30
	ctx.r11.u64 = ctx.r20.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x881e6f70
	if (ctx.cr6.gt) goto loc_881E6F70;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x881e6994
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_881E6994;
	// bdzf 4*cr6+eq,0x881e6b8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_881E6B8C;
	// bne cr6,0x881e6d68
	if (!ctx.cr6.eq) goto loc_881E6D68;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880547a0
	ctx.lr = 0x881E6968;
	sub_880547A0(ctx, base);
loc_881E6968:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x881e6f70
	goto loc_881E6F70;
loc_881E6994:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x881e6ac4
	if (!ctx.cr6.gt) goto loc_881E6AC4;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r31,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r31.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// subf r6,r31,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881E69D0:
	// lvrx128 v58,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lvlx128 v57,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// vor128 v63,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvlx128 v56,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lvlx128 v55,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v54,r30,r8
	temp.u32 = ctx.r30.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v8,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvrx128 v53,r3,r5
	temp.u32 = ctx.r3.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v56,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v9,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v5,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v28,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v0,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x3)));
	// vslh v25,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v22,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubshs v21,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vslh v20,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v18,v23,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vaddshs v17,v24,v21
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsrah v6,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v17,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v16,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v52,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v14,v8,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v9,v6,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v8,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vaddshs v6,v9,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// stvlx128 v52,r0,r11
	ctx.current_instruction = 0x881E6A98;
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvrx128 v52,r11,r30
	ctx.current_instruction = 0x881E6A9C;
	ea = ctx.r11.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v52.u8[i]);
	// vaddshs v5,v8,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v4,v6,v20
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vsrah v3,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v4,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v51,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvlx128 v51,r6,r11
	ctx.current_instruction = 0x881E6AB4;
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v51,r4,r30
	ctx.current_instruction = 0x881E6ABC;
	ea = ctx.r4.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// bdnz 0x881e69d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E69D0;
loc_881E6AC4:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r22.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x881e6b1c
	if (!ctx.cr6.lt) goto loc_881E6B1C;
	// subf r10,r9,r22
	ctx.r10.u64 = ctx.r22.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881E6AE4:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// clrlwi r6,r11,25
	ctx.r6.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r4,r10,r28
	ctx.current_instruction = 0x881E6AF4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// lbzx r3,r26,r10
	ctx.current_instruction = 0x881E6AF8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r10.u32);
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r8,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 7;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stbx r6,r9,r31
	ctx.current_instruction = 0x881E6B10;
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r6.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x881e6ae4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E6AE4;
loc_881E6B1C:
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x881e6b44
	if (!ctx.cr6.lt) goto loc_881E6B44;
	// subf r10,r9,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881E6B2C:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r8,r10,r28
	ctx.current_instruction = 0x881E6B34;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// stbx r8,r9,r31
	ctx.current_instruction = 0x881E6B38;
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x881e6b2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E6B2C;
loc_881E6B44:
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x881e6f5c
	if (!ctx.cr6.lt) goto loc_881E6F5C;
	// subf r10,r7,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r7.u64;
	// add r11,r7,r27
	ctx.r11.u64 = ctx.r7.u64 + ctx.r27.u64;
	// subf r7,r27,r31
	ctx.r7.u64 = ctx.r31.u64 - ctx.r27.u64;
	// subf r6,r27,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881E6B60:
	// lbzx r10,r7,r11
	ctx.current_instruction = 0x881E6B60;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.current_instruction = 0x881E6B64;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r6,r11
	ctx.current_instruction = 0x881E6B7C;
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881e6b60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E6B60;
	// b 0x881e6f5c
	goto loc_881E6F5C;
loc_881E6B8C:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x881e6ca8
	if (!ctx.cr6.gt) goto loc_881E6CA8;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r31,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r31.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// subf r6,r31,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881E6BC8:
	// lvrx128 v50,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lvlx128 v49,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// vor128 v63,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvlx128 v48,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lvlx128 v47,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v46,r30,r8
	temp.u32 = ctx.r30.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v8,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v47,v46
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// lvrx128 v45,r3,r5
	temp.u32 = ctx.r3.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v48,v45
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v9,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v28,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v0,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x3)));
	// vslh v25,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v22,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubshs v21,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vslh v20,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v18,v23,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vaddshs v17,v24,v21
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsrah v6,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v17,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v16,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v44,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v14,v20,v16
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v9,v19,v15
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vsrah v8,v14,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v44,r0,r11
	ctx.current_instruction = 0x881E6C88;
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// vsrah v6,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvrx128 v44,r11,r30
	ctx.current_instruction = 0x881E6C90;
	ea = ctx.r11.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v44.u8[i]);
	// vpkshus128 v43,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvlx128 v43,r11,r6
	ctx.current_instruction = 0x881E6C98;
	ea = ctx.r11.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v43,r4,r30
	ctx.current_instruction = 0x881E6CA0;
	ea = ctx.r4.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v43.u8[i]);
	// bdnz 0x881e6bc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E6BC8;
loc_881E6CA8:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r22.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x881e6d00
	if (!ctx.cr6.lt) goto loc_881E6D00;
	// subf r10,r9,r22
	ctx.r10.u64 = ctx.r22.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881E6CC8:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// clrlwi r6,r11,25
	ctx.r6.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r4,r10,r28
	ctx.current_instruction = 0x881E6CD8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// lbzx r3,r26,r10
	ctx.current_instruction = 0x881E6CDC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r10.u32);
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r8,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 7;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stbx r6,r9,r31
	ctx.current_instruction = 0x881E6CF4;
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r6.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x881e6cc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E6CC8;
loc_881E6D00:
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x881e6d28
	if (!ctx.cr6.lt) goto loc_881E6D28;
	// subf r10,r9,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881E6D10:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r8,r10,r28
	ctx.current_instruction = 0x881E6D18;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// stbx r8,r9,r31
	ctx.current_instruction = 0x881E6D1C;
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x881e6d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E6D10;
loc_881E6D28:
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x881e6f5c
	if (!ctx.cr6.lt) goto loc_881E6F5C;
	// subf r10,r7,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r7.u64;
	// add r11,r7,r27
	ctx.r11.u64 = ctx.r7.u64 + ctx.r27.u64;
	// subf r8,r27,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r27.u64;
	// subf r7,r27,r25
	ctx.r7.u64 = ctx.r25.u64 - ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881E6D44:
	// lbzx r9,r8,r11
	ctx.current_instruction = 0x881E6D44;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.current_instruction = 0x881E6D48;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// stbx r6,r7,r11
	ctx.current_instruction = 0x881E6D58;
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881e6d44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E6D44;
	// b 0x881e6f5c
	goto loc_881E6F5C;
loc_881E6D68:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x881e6e98
	if (!ctx.cr6.gt) goto loc_881E6E98;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r31,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r31.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// subf r6,r31,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881E6DA4:
	// lvrx128 v42,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lvlx128 v41,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vor128 v63,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lvlx128 v40,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lvlx128 v39,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v38,r30,r8
	temp.u32 = ctx.r30.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v8,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// lvrx128 v37,r3,r5
	temp.u32 = ctx.r3.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v40,v37
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vmrghb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v2,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v8,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v29,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v6,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v24,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v23,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsubshs v22,v26,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vslh v21,v9,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x3)));
	// vaddshs v19,v24,v23
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v18,v25,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vslh v17,v5,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v6,v19,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v18,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v15,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vaddshs v14,v17,v16
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vslh v5,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v36,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v3,v15,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v2,v14,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsrah v1,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v36,r0,r11
	ctx.current_instruction = 0x881E6E78;
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// vsrah v31,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvrx128 v36,r11,r30
	ctx.current_instruction = 0x881E6E80;
	ea = ctx.r11.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v36.u8[i]);
	// vpkshus128 v35,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// stvlx128 v35,r6,r11
	ctx.current_instruction = 0x881E6E88;
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v35,r4,r30
	ctx.current_instruction = 0x881E6E90;
	ea = ctx.r4.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v35.u8[i]);
	// bdnz 0x881e6da4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E6DA4;
loc_881E6E98:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r22.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x881e6ef0
	if (!ctx.cr6.lt) goto loc_881E6EF0;
	// subf r10,r9,r22
	ctx.r10.u64 = ctx.r22.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881E6EB8:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// clrlwi r6,r11,25
	ctx.r6.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r4,r10,r28
	ctx.current_instruction = 0x881E6EC8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// lbzx r3,r26,r10
	ctx.current_instruction = 0x881E6ECC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r10.u32);
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r8,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 7;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stbx r6,r9,r31
	ctx.current_instruction = 0x881E6EE4;
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r6.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x881e6eb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E6EB8;
loc_881E6EF0:
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x881e6f18
	if (!ctx.cr6.lt) goto loc_881E6F18;
	// subf r10,r9,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881E6F00:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r8,r10,r28
	ctx.current_instruction = 0x881E6F08;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// stbx r8,r9,r31
	ctx.current_instruction = 0x881E6F0C;
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x881e6f00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E6F00;
loc_881E6F18:
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x881e6f5c
	if (!ctx.cr6.lt) goto loc_881E6F5C;
	// subf r10,r7,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r7.u64;
	// add r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 + ctx.r31.u64;
	// subf r7,r31,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r31.u64;
	// subf r6,r31,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881E6F34:
	// lbzx r10,r7,r11
	ctx.current_instruction = 0x881E6F34;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.current_instruction = 0x881E6F38;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r6,r11
	ctx.current_instruction = 0x881E6F50;
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881e6f34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E6F34;
loc_881E6F5C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// add r28,r28,r21
	ctx.r28.u64 = ctx.r28.u64 + ctx.r21.u64;
	// add r26,r26,r21
	ctx.r26.u64 = ctx.r26.u64 + ctx.r21.u64;
loc_881E6F70:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// add r25,r25,r18
	ctx.r25.u64 = ctx.r25.u64 + ctx.r18.u64;
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x881e6938
	if (ctx.cr6.lt) goto loc_881E6938;
loc_881E6F80:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(__restvmx_97) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF114);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF114;
	ctx.current_instruction = 0x881EF114;
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_881F0BC8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F0BC8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F0BC8) {
			switch (rex_dispatch_address) {
				case 0x881F0BE8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F0BC8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F0BE8: goto loc_881F0BE8;
		default: break;
	}
	// std r31,-8(r1)
	ctx.current_instruction = 0x881F0BC8;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	ctx.current_instruction = 0x881F0BD0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	ctx.current_instruction = 0x881F0BD8;
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881F0BDC;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881f1c20
	ctx.lr = 0x881F0BE8;
	sub_881F1C20(ctx, base);
loc_881F0BE8:
	// lwz r1,0(r1)
	ctx.current_instruction = 0x881F0BE8;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881F0BEC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881F0BF0;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.current_instruction = 0x881F0BF4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F1590) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F1590;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F1590) {
			switch (rex_dispatch_address) {
				case 0x881F1598:
				case 0x881F15BC:
				case 0x881F15C8:
				case 0x881F15F8:
				case 0x881F1604:
				case 0x881F1610:
				case 0x881F164C:
				case 0x881F1674:
				case 0x881F1680:
				case 0x881F168C:
				case 0x881F16A8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F1590;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F1598: goto loc_881F1598;
		case 0x881F15BC: goto loc_881F15BC;
		case 0x881F15C8: goto loc_881F15C8;
		case 0x881F15F8: goto loc_881F15F8;
		case 0x881F1604: goto loc_881F1604;
		case 0x881F1610: goto loc_881F1610;
		case 0x881F164C: goto loc_881F164C;
		case 0x881F1674: goto loc_881F1674;
		case 0x881F1680: goto loc_881F1680;
		case 0x881F168C: goto loc_881F168C;
		case 0x881F16A8: goto loc_881F16A8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881F1598;
	__savegprlr_25(ctx, base);
loc_881F1598:
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x881F159C;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	ctx.current_instruction = 0x881F15A4;
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x881f15dc
	if (!ctx.cr6.eq) goto loc_881F15DC;
	// bl 0x88052a00
	ctx.lr = 0x881F15BC;
	sub_88052A00(ctx, base);
loc_881F15BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881F15C0;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880529c8
	ctx.lr = 0x881F15C8;
	sub_880529C8(ctx, base);
loc_881F15C8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	ctx.current_instruction = 0x881F15D4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x881f16ac
	goto loc_881F16AC;
loc_881F15DC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881f15f4
	if (ctx.cr6.lt) goto loc_881F15F4;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,24036(r11)
	ctx.current_instruction = 0x881F15E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24036);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x881f1618
	if (ctx.cr6.lt) goto loc_881F1618;
loc_881F15F4:
	// bl 0x88052a00
	ctx.lr = 0x881F15F8;
	sub_88052A00(ctx, base);
loc_881F15F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881F15FC;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880529c8
	ctx.lr = 0x881F1604;
	sub_880529C8(ctx, base);
loc_881F1604:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881F1608;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880523e8
	ctx.lr = 0x881F1610;
	sub_880523E8(ctx, base);
loc_881F1610:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x881f16ac
	goto loc_881F16AC;
loc_881F1618:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,24064
	ctx.r28.s64 = ctx.r10.s64 + 24064;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r27,r28
	ctx.current_instruction = 0x881F1630;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.current_instruction = 0x881F1638;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f15f4
	if (ctx.cr0.eq) goto loc_881F15F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881f1b20
	ctx.lr = 0x881F164C;
	sub_881F1B20(ctx, base);
loc_881F164C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.current_instruction = 0x881F1650;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.current_instruction = 0x881F1658;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f167c
	if (ctx.cr0.eq) goto loc_881F167C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881f1348
	ctx.lr = 0x881F1674;
	sub_881F1348(ctx, base);
loc_881F1674:
	// stw r3,80(r31)
	ctx.current_instruction = 0x881F1674;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x881f169c
	goto loc_881F169C;
loc_881F167C:
	// bl 0x880529c8
	ctx.lr = 0x881F1680;
	sub_880529C8(ctx, base);
loc_881F1680:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881F1684;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x88052a00
	ctx.lr = 0x881F168C;
	sub_88052A00(ctx, base);
loc_881F168C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881F1694;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	ctx.current_instruction = 0x881F1698;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_881F169C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x881f16d4
	ctx.lr = 0x881F16A8;
	sub_881F16D4(ctx, base);
loc_881F16A8:
	// lwz r3,80(r31)
	ctx.current_instruction = 0x881F16A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
loc_881F16AC:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88202498) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88202498);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88202498;
	ctx.current_instruction = 0x88202498;
	// lwz r11,1368(r3)
	ctx.current_instruction = 0x88202498;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// lwz r7,1464(r3)
	ctx.current_instruction = 0x882024A4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1464);
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r11,r9,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF00;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r3,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 8;
	// addi r4,r11,-256
	ctx.r4.s64 = ctx.r11.s64 + -256;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r11,r4,0,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFE00;
	// mullw r9,r11,r7
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// rlwinm r8,r9,0,0,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFE0000;
	// or r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 | ctx.r10.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88203378) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88203378;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88203378) {
			switch (rex_dispatch_address) {
				case 0x88203380:
				case 0x8820340C:
				case 0x88203498:
				case 0x882034B8:
				case 0x88203548:
				case 0x88203590:
				case 0x8820360C:
				case 0x88203654:
				case 0x882036F4:
				case 0x8820373C:
				case 0x88203830:
				case 0x88203878:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88203378;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88203380: goto loc_88203380;
		case 0x8820340C: goto loc_8820340C;
		case 0x88203498: goto loc_88203498;
		case 0x882034B8: goto loc_882034B8;
		case 0x88203548: goto loc_88203548;
		case 0x88203590: goto loc_88203590;
		case 0x8820360C: goto loc_8820360C;
		case 0x88203654: goto loc_88203654;
		case 0x882036F4: goto loc_882036F4;
		case 0x8820373C: goto loc_8820373C;
		case 0x88203830: goto loc_88203830;
		case 0x88203878: goto loc_88203878;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88203380;
	__savegprlr_25(ctx, base);
loc_88203380:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88203380;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.current_instruction = 0x88203384;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x882033a4
	if (!ctx.cr6.eq) goto loc_882033A4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r31)
	ctx.current_instruction = 0x8820339C;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x882034d8
	goto loc_882034D8;
loc_882033A4:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x882033A4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.current_instruction = 0x882033A8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.current_instruction = 0x882033B0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.current_instruction = 0x882033C0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88203490
	if (ctx.cr6.lt) goto loc_88203490;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x882033D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x882033E0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x882033E8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x88203488
	if (!ctx.cr6.lt) goto loc_88203488;
loc_882033F0:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x882033F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x882033F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8820341c
	if (ctx.cr6.lt) goto loc_8820341C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x8820340C;
	sub_88156440(ctx, base);
loc_8820340C:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x882033f0
	if (ctx.cr6.eq) goto loc_882033F0;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x882034d0
	goto loc_882034D0;
loc_8820341C:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x8820341C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x88203424;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x8820342C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x88203430;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x88203438;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x8820343C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88203444;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x88203448;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x88203450;
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
	ctx.current_instruction = 0x8820346C;
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
	ctx.current_instruction = 0x88203484;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_88203488:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x882034d0
	goto loc_882034D0;
loc_88203490:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88203498;
	sub_88156500(ctx, base);
loc_88203498:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
loc_882034A0:
	// ld r11,0(r31)
	ctx.current_instruction = 0x882034A0;
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
	ctx.lr = 0x882034B8;
	sub_88156500(ctx, base);
loc_882034B8:
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x882034C0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x882034a0
	if (ctx.cr6.lt) goto loc_882034A0;
loc_882034D0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8820366c
	if (!ctx.cr6.eq) goto loc_8820366C;
loc_882034D8:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x882034D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x882034E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x882034E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x882035b8
	if (ctx.cr6.eq) goto loc_882035B8;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x88203558
	if (!ctx.cr6.lt) goto loc_88203558;
loc_88203500:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88203558
	if (ctx.cr6.eq) goto loc_88203558;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8820350C;
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
	ctx.current_instruction = 0x88203530;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88203538;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88203548
	if (!ctx.cr0.lt) goto loc_88203548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88203548;
	sub_88156678(ctx, base);
loc_88203548:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88203548;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88203500
	if (ctx.cr6.gt) goto loc_88203500;
loc_88203558:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8820355C;
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
	ctx.current_instruction = 0x88203574;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88203580;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88203590
	if (!ctx.cr0.lt) goto loc_88203590;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88203590;
	sub_88156678(ctx, base);
loc_88203590:
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r3,r9,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r9.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_882035B8:
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8820361c
	if (!ctx.cr6.lt) goto loc_8820361C;
loc_882035C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8820361c
	if (ctx.cr6.eq) goto loc_8820361C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x882035D0;
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
	ctx.current_instruction = 0x882035F4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x882035FC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8820360c
	if (!ctx.cr0.lt) goto loc_8820360C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8820360C;
	sub_88156678(ctx, base);
loc_8820360C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8820360C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x882035c4
	if (ctx.cr6.gt) goto loc_882035C4;
loc_8820361C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88203620;
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
	ctx.current_instruction = 0x88203638;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88203644;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88203654
	if (!ctx.cr0.lt) goto loc_88203654;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88203654;
	sub_88156678(ctx, base);
loc_88203654:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r3,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8820366C:
	// cmpwi cr6,r30,125
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 125, ctx.xer);
	// bne cr6,0x88203764
	if (!ctx.cr6.eq) goto loc_88203764;
	// lhz r11,72(r27)
	ctx.current_instruction = 0x88203674;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 72);
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r9,70(r27)
	ctx.current_instruction = 0x8820367C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r27.u32 + 70);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88203680;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// ble cr6,0x8820369c
	if (!ctx.cr6.gt) goto loc_8820369C;
loc_88203694:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x88203740
	goto loc_88203740;
loc_8820369C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88203694
	if (ctx.cr6.eq) goto loc_88203694;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x88203704
	if (!ctx.cr6.gt) goto loc_88203704;
loc_882036AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88203704
	if (ctx.cr6.eq) goto loc_88203704;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x882036B8;
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
	ctx.current_instruction = 0x882036DC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x882036E4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x882036f4
	if (!ctx.cr0.lt) goto loc_882036F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x882036F4;
	sub_88156678(ctx, base);
loc_882036F4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x882036F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x882036ac
	if (ctx.cr6.gt) goto loc_882036AC;
loc_88203704:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88203708;
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
	ctx.current_instruction = 0x88203720;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8820372C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8820373c
	if (!ctx.cr0.lt) goto loc_8820373C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8820373C;
	sub_88156678(ctx, base);
loc_8820373C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_88203740:
	// lhz r9,72(r27)
	ctx.current_instruction = 0x88203740;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r27.u32 + 72);
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// sraw r3,r11,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r3.s64 = ctx.r11.s32 >> temp.u32;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88203764:
	// cmpwi cr6,r30,251
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 251, ctx.xer);
	// ble cr6,0x88203788
	if (!ctx.cr6.gt) goto loc_88203788;
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8820376C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88203774;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,20(r31)
	ctx.current_instruction = 0x88203778;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88203788:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88203788;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88203790;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r8,r9,r11
	ctx.current_instruction = 0x88203798;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// clrlwi r28,r7,28
	ctx.r28.u64 = ctx.r7.u32 & 0xF;
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// srawi r5,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 16;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// srawi r4,r8,24
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 24;
	// clrlwi r27,r6,24
	ctx.r27.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r26,r5,24
	ctx.r26.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r25,r4,24
	ctx.r25.u64 = ctx.r4.u32 & 0xFF;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// ble cr6,0x882037d8
	if (!ctx.cr6.gt) goto loc_882037D8;
loc_882037D0:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8820387c
	goto loc_8820387C;
loc_882037D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x882037d0
	if (ctx.cr6.eq) goto loc_882037D0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x88203840
	if (!ctx.cr6.gt) goto loc_88203840;
loc_882037E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88203840
	if (ctx.cr6.eq) goto loc_88203840;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x882037F4;
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
	ctx.current_instruction = 0x88203818;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88203820;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88203830
	if (!ctx.cr0.lt) goto loc_88203830;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88203830;
	sub_88156678(ctx, base);
loc_88203830:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88203830;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x882037e8
	if (ctx.cr6.gt) goto loc_882037E8;
loc_88203840:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88203844;
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
	ctx.current_instruction = 0x8820385C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88203868;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88203878
	if (!ctx.cr0.lt) goto loc_88203878;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88203878;
	sub_88156678(ctx, base);
loc_88203878:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8820387C:
	// li r9,1
	ctx.r9.s64 = 1;
	// sraw r11,r10,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// slw r9,r9,r28
	ctx.r9.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r28.u8 & 0x3F));
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// neg r3,r5
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// neg r11,r6
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// xor r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// subf r8,r3,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// xor r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r11,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r11,r25,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r25.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821A9C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821A9C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821A9C8) {
			switch (rex_dispatch_address) {
				case 0x8821A9D0:
				case 0x8821AA18:
				case 0x8821AA30:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821A9C8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821A9D0: goto loc_8821A9D0;
		case 0x8821AA18: goto loc_8821AA18;
		case 0x8821AA30: goto loc_8821AA30;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8821A9D0;
	__savegprlr_29(ctx, base);
loc_8821A9D0:
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8821A9D8;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// li r10,1120
	ctx.r10.s64 = 1120;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// vslh v12,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r7,0
	ctx.r7.s64 = 0;
	// lvx128 v11,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// vsubshs v0,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v0,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x882186f8
	ctx.lr = 0x8821AA18;
	sub_882186F8(ctx, base);
loc_8821AA18:
	// li r5,0
	ctx.r5.s64 = 0;
	// lvx128 v2,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// vspltish v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x6)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88219500
	ctx.lr = 0x8821AA30;
	sub_88219500(ctx, base);
loc_8821AA30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821B8C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821B8C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821B8C0) {
			switch (rex_dispatch_address) {
				case 0x8821B8C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821B8C0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821B8C8: goto loc_8821B8C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x8821B8C8;
	__savegprlr_21(ctx, base);
loc_8821B8C8:
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r7,16
	ctx.r7.s64 = 16;
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r11,r5,96
	ctx.r11.s64 = ctx.r5.s64 + 96;
	// li r28,-96
	ctx.r28.s64 = -96;
	// vsrah v11,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// li r29,-48
	ctx.r29.s64 = -48;
	// li r30,48
	ctx.r30.s64 = 48;
	// bne cr6,0x8821b9ec
	if (!ctx.cr6.eq) goto loc_8821B9EC;
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8821B900:
	// add r10,r6,r3
	ctx.r10.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lvx128 v63,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v61,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v62,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v59,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v58,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v2,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v3,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v60,v58,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v8,v61,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vor v10,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vperm128 v7,v59,v56,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v1,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v29,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v28,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmrglb v27,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v8,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// vor v7,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vsldoi v26,v10,v2,2
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 14));
	// vsldoi v25,v9,v29,2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), 14));
	// vsldoi v24,v8,v28,2
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), 14));
	// vsldoi v23,v7,v27,2
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8), 14));
	// vaddshs v22,v10,v26
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v21,v9,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vaddshs v20,v8,v24
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vaddshs v19,v7,v23
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vslh v18,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v14,v18,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v10,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v9,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v8,v15,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v7,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v6,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v7,r11,r28
	ea = (ctx.r11.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r11,r29
	ea = (ctx.r11.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v4,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// bdnz 0x8821b900
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821B900;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_8821B9EC:
	// li r10,4
	ctx.r10.s64 = 4;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r24,r4,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r25,-80
	ctx.r25.s64 = -80;
	// li r26,-32
	ctx.r26.s64 = -32;
	// li r27,64
	ctx.r27.s64 = 64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8821BA08:
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r5,16(r3)
	ctx.current_instruction = 0x8821BA0C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// add r10,r24,r3
	ctx.r10.u64 = ctx.r24.u64 + ctx.r3.u64;
	// lvx128 v55,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r23,r1,-160
	ctx.r23.s64 = ctx.r1.s64 + -160;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r6,r3,16
	ctx.r6.s64 = ctx.r3.s64 + 16;
	// lbz r22,16(r8)
	ctx.current_instruction = 0x8821BA24;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r8.u32 + 16);
	// addi r21,r1,-144
	ctx.r21.s64 = ctx.r1.s64 + -144;
	// sth r5,-160(r1)
	ctx.current_instruction = 0x8821BA2C;
	REX_STORE_U16(ctx.r1.u32 + -160, ctx.r5.u16);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// addi r5,r8,16
	ctx.r5.s64 = ctx.r8.s64 + 16;
	// lvx128 v54,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r9,16
	ctx.r31.s64 = ctx.r9.s64 + 16;
	// lvx128 v53,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r10,16(r10)
	ctx.current_instruction = 0x8821BA48;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// sth r22,-144(r1)
	ctx.current_instruction = 0x8821BA4C;
	REX_STORE_U16(ctx.r1.u32 + -144, ctx.r22.u16);
	// lvx128 v51,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r8,16(r9)
	ctx.current_instruction = 0x8821BA58;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 16);
	// lvx128 v49,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v55,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v48,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v54,v50,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v4,v53,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// sth r10,-128(r1)
	ctx.current_instruction = 0x8821BA70;
	REX_STORE_U16(ctx.r1.u32 + -128, ctx.r10.u16);
	// vperm128 v2,v52,v48,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// addi r6,r1,-128
	ctx.r6.s64 = ctx.r1.s64 + -128;
	// vmrglb v10,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// sth r8,-112(r1)
	ctx.current_instruction = 0x8821BA80;
	REX_STORE_U16(ctx.r1.u32 + -112, ctx.r8.u16);
	// vmrglb v8,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r5,r1,-112
	ctx.r5.s64 = ctx.r1.s64 + -112;
	// vmrglb v9,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vmrglb v6,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v1,v5,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// vsldoi v31,v4,v9,2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 14));
	// lvx128 v47,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v30,v3,v8,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), 14));
	// vsldoi v29,v2,v6,2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), 14));
	// vsldoi128 v28,v10,v47,2
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), 14));
	// vaddshs v27,v5,v1
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v26,v4,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// lvx128 v46,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v3,v30
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v24,v2,v29
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v23,v10,v28
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsldoi128 v22,v9,v46,2
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), 14));
	// vslh v21,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v45,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v15,v9,v22
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// lvx128 v44,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v18,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v16,v8,v45,2
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), 14));
	// vslh v17,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v14,v6,v44,2
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 14));
	// vaddshs v10,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v9,v20,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v5,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v4,v18,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v3,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v2,v15,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v1,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
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
	// vsrah v29,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v1,r11,r28
	ea = (ctx.r11.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v27,v2,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v31,r11,r29
	ea = (ctx.r11.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v28,r11,r25
	ea = (ctx.r11.u32 + ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v26,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v25,v8,v16
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// stvx128 v26,r11,r26
	ea = (ctx.r11.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v24,v6,v14
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vslh v23,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v23,v11
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v20,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v19,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v19,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r11,r27
	ea = (ctx.r11.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// bdnz 0x8821ba08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821BA08;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88222340) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88222340;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88222340) {
			switch (rex_dispatch_address) {
				case 0x88222348:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88222340;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88222348: goto loc_88222348;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88222348;
	__savegprlr_27(ctx, base);
loc_88222348:
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r30,r1,-80
	ctx.r30.s64 = ctx.r1.s64 + -80;
	// lvx128 v60,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-64
	ctx.r29.s64 = ctx.r1.s64 + -64;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v12,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v59,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v63,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lvx128 v58,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lvx128 v57,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v62,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v56,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v4,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v2,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r31,r6,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v9,v61,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v8,v58,v56,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vor v11,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmrghb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r31,r5
	ctx.r10.u64 = ctx.r31.u64 + ctx.r5.u64;
	// vmrglb v31,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vmrghb v29,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmrglb v28,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v27,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vsldoi v26,v11,v2,2
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 14));
	// vor v8,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// vsldoi v25,v10,v31,2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), 14));
	// vsldoi v24,v9,v28,2
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), 14));
	// vsubshs v23,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi v22,v8,v27,2
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8), 14));
	// vsubshs v21,v25,v10
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v20,v24,v9
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v19,v22,v8
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v18,v23,v12
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v17,v21,v12
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v16,v20,v12
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v15,v19,v12
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v14,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v7,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v6,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v4,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v2,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v1,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus128 v55,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vpkshus128 v54,v2,v1
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// stvx128 v55,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r30,-72(r1)
	ctx.current_instruction = 0x88222450;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r28,-80(r1)
	ctx.current_instruction = 0x88222454;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// stvx128 v54,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r29,-64(r1)
	ctx.current_instruction = 0x8822245C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r27,-56(r1)
	ctx.current_instruction = 0x88222460;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// stw r28,0(r5)
	ctx.current_instruction = 0x88222464;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// stwx r30,r5,r6
	ctx.current_instruction = 0x88222468;
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r30.u32);
	// stwx r29,r31,r5
	ctx.current_instruction = 0x8822246C;
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r29.u32);
	// stwx r27,r10,r6
	ctx.current_instruction = 0x88222470;
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r27.u32);
	// bne cr6,0x88222498
	if (!ctx.cr6.eq) goto loc_88222498;
	// lwz r30,-76(r1)
	ctx.current_instruction = 0x88222478;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r29,-68(r1)
	ctx.current_instruction = 0x8822247C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// lwz r28,-60(r1)
	ctx.current_instruction = 0x88222480;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r27,-52(r1)
	ctx.current_instruction = 0x88222484;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// stw r30,4(r5)
	ctx.current_instruction = 0x88222488;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// stw r29,4(r9)
	ctx.current_instruction = 0x8822248C;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// stw r28,4(r10)
	ctx.current_instruction = 0x88222490;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// stw r27,4(r7)
	ctx.current_instruction = 0x88222494;
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r27.u32);
loc_88222498:
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x882225d8
	if (!ctx.cr6.eq) goto loc_882225D8;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,-80
	ctx.r30.s64 = ctx.r1.s64 + -80;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r29,r1,-64
	ctx.r29.s64 = ctx.r1.s64 + -64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v53,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvx128 v50,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v49,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v52,v53,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v48,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v50,v51,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v4,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v2,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v9,v47,v49,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v8,v46,v48,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v1,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmrglb v31,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vmrghb v30,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v29,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v28,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v27,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v0,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vsldoi v26,v11,v1,2
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 14));
	// vor v9,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// vsldoi v25,v10,v31,2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), 14));
	// vsldoi v24,v0,v28,2
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), 14));
	// vsubshs v23,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi v22,v9,v27,2
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8), 14));
	// vsubshs v21,v25,v10
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v20,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsubshs v19,v22,v9
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v18,v23,v12
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v17,v21,v12
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v16,v20,v12
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v15,v19,v12
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v14,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v12,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v7,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v6,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v5,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v4,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v3,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus128 v45,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vpkshus128 v44,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvx128 v45,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,-76(r1)
	ctx.current_instruction = 0x8822258C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r8,-72(r1)
	ctx.current_instruction = 0x88222590;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r7,-68(r1)
	ctx.current_instruction = 0x88222594;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stvx128 v44,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,-64(r1)
	ctx.current_instruction = 0x8822259C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r3,-60(r1)
	ctx.current_instruction = 0x882225A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r30,-56(r1)
	ctx.current_instruction = 0x882225A4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r29,-52(r1)
	ctx.current_instruction = 0x882225A8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r11,-80(r1)
	ctx.current_instruction = 0x882225AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// stwux r11,r5,r31
	ctx.current_instruction = 0x882225B0;
	ea = ctx.r5.u32 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r9,4(r5)
	ctx.current_instruction = 0x882225B8;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stwx r8,r5,r6
	ctx.current_instruction = 0x882225BC;
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r8.u32);
	// stw r7,4(r11)
	ctx.current_instruction = 0x882225C0;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stwux r4,r10,r31
	ctx.current_instruction = 0x882225C4;
	ea = ctx.r10.u32 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r3,4(r10)
	ctx.current_instruction = 0x882225CC;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stwx r30,r10,r6
	ctx.current_instruction = 0x882225D0;
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r30.u32);
	// stw r29,4(r11)
	ctx.current_instruction = 0x882225D4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_882225D8:
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88227C28) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88227C28;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88227C28) {
			switch (rex_dispatch_address) {
				case 0x88227C30:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88227C28;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88227C30: goto loc_88227C30;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88227C30;
	__savegprlr_26(ctx, base);
loc_88227C30:
	// lwz r11,1140(r7)
	ctx.current_instruction = 0x88227C30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1140);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// lwz r30,1156(r7)
	ctx.current_instruction = 0x88227C38;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 1156);
	// addi r26,r1,-80
	ctx.r26.s64 = ctx.r1.s64 + -80;
	// lwz r28,84(r1)
	ctx.current_instruction = 0x88227C40;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,1164(r7)
	ctx.current_instruction = 0x88227C48;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// cntlzw r7,r28
	ctx.r7.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// vspltish v12,5
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x5)));
	// stw r11,-96(r1)
	ctx.current_instruction = 0x88227C58;
	REX_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// stw r30,-80(r1)
	ctx.current_instruction = 0x88227C60;
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r30.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r7,1
	ctx.r7.s64 = 1;
	// vspltish v27,7
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_set1_epi16(short(0x7)));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// vspltish v4,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r27,-32
	ctx.r27.s64 = -32;
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// slw r8,r7,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lvx128 v10,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,-16
	ctx.r28.s64 = -16;
	// lvx128 v9,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// vsplth v3,v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_set1_epi16(short(0xD0C))));
	// li r31,16
	ctx.r31.s64 = 16;
	// vsplth v26,v9,1
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_set1_epi16(short(0xD0C))));
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// bne cr6,0x88227e00
	if (!ctx.cr6.eq) goto loc_88227E00;
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
	// lvx128 v62,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v59,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v7,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v8,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88227fd4
	if (!ctx.cr6.gt) goto loc_88227FD4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_88227D18:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v2,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v1,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vor v7,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvx128 v57,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v30,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// vperm128 v6,v56,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v28,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v30,v5
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglb v23,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v20,v29,v10
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v17,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v24,v9
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v22,v8,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v7,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v5,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v23.u8));
	// vslh v31,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vslh v15,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v28,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v31,v22,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vslh v25,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v2,v15
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vsubshs v21,v1,v14
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vadduhm v20,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vsubshs v19,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v18,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v17,v22,v3
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v16,v20,v3
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v15,v23,v19
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v14,v21,v18
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v2,v17,v15
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v1,v16,v14
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vsrah v31,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v31,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r7,r31
	ea = (ctx.r7.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// blt cr6,0x88227d18
	if (ctx.cr6.lt) goto loc_88227D18;
	// b 0x88227fd4
	goto loc_88227FD4;
loc_88227E00:
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
	// lvrx128 v53,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v8,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v1,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v5,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v8,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v2,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v1,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88227fd4
	if (!ctx.cr6.gt) goto loc_88227FD4;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r29,32
	ctx.r9.s64 = ctx.r29.s64 + 32;
loc_88227E84:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v30,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v29,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// vor v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// vor v6,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v28,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v43,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vslh v25,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v22,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v20,v63,v42,v5
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vadduhm v15,v24,v10
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrglb v19,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v25,v31
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vmrghb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vslh v18,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v5,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v14,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v6,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v8,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vmrghb v2,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v31,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v19.u8));
	// vslh v22,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v19,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v18,v25,v14
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vadduhm v17,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vslh v16,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v30,v22
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vadduhm v22,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v20,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vslh v21,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v24,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v14,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v19,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v5,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v15,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v21,v29,v21
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsubshs v14,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v30,v22,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v29,v20,v3
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v22,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vslh v24,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vslh v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v23,v15
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v18,v21,v14
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vsubshs v16,v28,v24
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vsubshs v17,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vadduhm v15,v20,v22
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v14,v30,v19
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v30,v29,v18
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v29,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v28,v15,v3
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsrah v25,v14,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v23,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// stvx128 v25,r9,r27
	ea = (ctx.r9.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r9,r28
	ea = (ctx.r9.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v22,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v22,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// blt cr6,0x88227e84
	if (ctx.cr6.lt) goto loc_88227E84;
loc_88227FD4:
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltish v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// vspltish v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vslh v2,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x88228084
	if (!ctx.cr6.eq) goto loc_88228084;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8822816c
	if (!ctx.cr6.gt) goto loc_8822816C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_88228008:
	// lvx128 v10,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v41,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v7,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// vsldoi128 v9,v10,v41,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 14));
	// vsldoi128 v8,v10,v41,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 12));
	// vsldoi128 v10,v10,v41,6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 10));
	// vsubshs v5,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v3,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v25,v31,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v22,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsubshs v21,v10,v24
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v20,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v19,v21,v5
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v18,v20,v26
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v17,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vsrah v16,v17,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v40,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vor v6,v6,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// stvewx128 v40,r0,r11
	ctx.current_instruction = 0x88228070;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r11,r10
	ctx.current_instruction = 0x88228074;
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x88228008
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88228008;
	// b 0x8822816c
	goto loc_8822816C;
loc_88228084:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8822816c
	if (!ctx.cr6.gt) goto loc_8822816C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_8822809C:
	// lvx128 v10,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v39,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v8,v9,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v7,v10,v39,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 14));
	// vsubshs v31,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v5,v9,v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 12));
	// vsldoi128 v3,v10,v39,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 12));
	// vsubshs v30,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v9,v9,v10,6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 10));
	// vslh v28,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v10,v10,v39,6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 10));
	// vslh v25,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v25,v29
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v18,v24,v8
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v15,v23,v28
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vslh v21,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v5,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v3,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v14,v22,v7
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v7,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vadduhm v5,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v1,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v29,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v8,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v5,v7
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v23,v29,v1
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsubshs v28,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v24,v10,v3
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v21,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v19,v23,v26
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v22,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v20,v24,v31
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v17,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsrah v16,v18,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v17,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v38,v6,v16
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// vpkshus128 v37,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vor128 v6,v38,v15
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// stvx128 v37,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x8822809c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822809C;
loc_8822816C:
	// vand v13,v6,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
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

