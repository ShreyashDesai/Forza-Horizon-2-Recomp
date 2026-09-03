#include "forzahorizon2_funcs.9.h"

DEFINE_REX_FUNC(sub_880500D0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880500D0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880500D0;
	ctx.current_instruction = 0x880500D0;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,44(r11)
	ctx.current_instruction = 0x880500D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__savegprlr_18) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050820);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050820;
	ctx.current_instruction = 0x88050820;
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

DEFINE_REX_FUNC(sub_88052050) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88052050;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88052050) {
			switch (rex_dispatch_address) {
				case 0x88052058:
				case 0x88052094:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88052050;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88052058: goto loc_88052058;
		case 0x88052094: goto loc_88052094;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88052058;
	__savegprlr_28(ctx, base);
loc_88052058:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88052058;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r30,r10,152
	ctx.r30.s64 = ctx.r10.s64 + 152;
	// addi r28,r11,17928
	ctx.r28.s64 = ctx.r11.s64 + 17928;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88052074:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88052074;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8805209c
	if (!ctx.cr6.eq) goto loc_8805209C;
	// stw r28,0(r31)
	ctx.current_instruction = 0x88052080;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// rotlwi r3,r28,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// bl 0x88051fb8
	ctx.lr = 0x88052094;
	sub_88051FB8(ctx, base);
loc_88052094:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x880520bc
	if (ctx.cr0.eq) goto loc_880520BC;
loc_8805209C:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,288
	ctx.r11.s64 = ctx.r30.s64 + 288;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88052074
	if (ctx.cr6.lt) goto loc_88052074;
	// li r3,1
	ctx.r3.s64 = 1;
loc_880520B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_880520BC:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r11,r30
	ctx.current_instruction = 0x880520C8;
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// b 0x880520b4
	goto loc_880520B4;
}

DEFINE_REX_FUNC(sub_88055B90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88055B90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88055B90) {
			switch (rex_dispatch_address) {
				case 0x88055B98:
				case 0x88055BD4:
				case 0x88055C0C:
				case 0x88055C40:
				case 0x88055C64:
				case 0x88055C70:
				case 0x88055C7C:
				case 0x88055C88:
				case 0x88055CB0:
				case 0x88055CD4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88055B90;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88055B98: goto loc_88055B98;
		case 0x88055BD4: goto loc_88055BD4;
		case 0x88055C0C: goto loc_88055C0C;
		case 0x88055C40: goto loc_88055C40;
		case 0x88055C64: goto loc_88055C64;
		case 0x88055C70: goto loc_88055C70;
		case 0x88055C7C: goto loc_88055C7C;
		case 0x88055C88: goto loc_88055C88;
		case 0x88055CB0: goto loc_88055CB0;
		case 0x88055CD4: goto loc_88055CD4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88055B98;
	__savegprlr_29(ctx, base);
loc_88055B98:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88055B98;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r30,84(r1)
	ctx.current_instruction = 0x88055BA8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,80(r1)
	ctx.current_instruction = 0x88055BAC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,0(r31)
	ctx.current_instruction = 0x88055BB0;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	ctx.current_instruction = 0x88055BB4;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	ctx.current_instruction = 0x88055BB8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	ctx.current_instruction = 0x88055BBC;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,88(r1)
	ctx.current_instruction = 0x88055BC0;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88055BC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,116(r11)
	ctx.current_instruction = 0x88055BC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88055BD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88055BD4:
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88055BD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88055c90
	if (ctx.cr6.lt) goto loc_88055C90;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88055c14
	if (ctx.cr6.eq) goto loc_88055C14;
	// lwz r11,0(r10)
	ctx.current_instruction = 0x88055BEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,60(r11)
	ctx.current_instruction = 0x88055C00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88055C0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88055C0C:
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88055C0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_88055C14:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88055C14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x88055c94
	if (ctx.cr6.lt) goto loc_88055C94;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88055c4c
	if (ctx.cr6.eq) goto loc_88055C4C;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88055C28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,92(r10)
	ctx.current_instruction = 0x88055C34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88055C40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88055C40:
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88055C40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88055C48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88055C4C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x88055c94
	if (ctx.cr6.lt) goto loc_88055C94;
	// lwz r3,88(r1)
	ctx.current_instruction = 0x88055C54;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88055c94
	if (ctx.cr6.eq) goto loc_88055C94;
	// bl 0x88057ae0
	ctx.lr = 0x88055C64;
	sub_88057AE0(ctx, base);
loc_88055C64:
	// stw r3,0(r31)
	ctx.current_instruction = 0x88055C64;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r3,88(r1)
	ctx.current_instruction = 0x88055C68;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x88057ae8
	ctx.lr = 0x88055C70;
	sub_88057AE8(ctx, base);
loc_88055C70:
	// stw r3,4(r31)
	ctx.current_instruction = 0x88055C70;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r3,88(r1)
	ctx.current_instruction = 0x88055C74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x88057968
	ctx.lr = 0x88055C7C;
	sub_88057968(ctx, base);
loc_88055C7C:
	// stfs f1,8(r31)
	ctx.current_instruction = 0x88055C7C;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r3,88(r1)
	ctx.current_instruction = 0x88055C80;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x88057960
	ctx.lr = 0x88055C88;
	sub_88057960(ctx, base);
loc_88055C88:
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88055C88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,12(r31)
	ctx.current_instruction = 0x88055C8C;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_88055C90:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88055C90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88055C94:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88055cb8
	if (ctx.cr6.eq) goto loc_88055CB8;
	// lwz r11,0(r10)
	ctx.current_instruction = 0x88055C9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88055CA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88055CB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88055CB0:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88055CB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,84(r1)
	ctx.current_instruction = 0x88055CB4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_88055CB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88055cd4
	if (ctx.cr6.eq) goto loc_88055CD4;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88055CC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.current_instruction = 0x88055CC8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88055CD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88055CD4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805A7AC) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805A7AC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805A7AC;
	ctx.current_instruction = 0x8805A7AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805A8B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805A8B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805A8B8) {
			switch (rex_dispatch_address) {
				case 0x8805A8C0:
				case 0x8805A8F8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805A8B8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805A8C0: goto loc_8805A8C0;
		case 0x8805A8F8: goto loc_8805A8F8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8805A8C0;
	__savegprlr_28(ctx, base);
loc_8805A8C0:
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8805A8C4;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	ctx.current_instruction = 0x8805A8D0;
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,80(r31)
	ctx.current_instruction = 0x8805A8D8;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r29,664(r30)
	ctx.current_instruction = 0x8805A8E4;
	REX_STORE_U32(ctx.r30.u32 + 664, ctx.r29.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// stw r29,668(r30)
	ctx.current_instruction = 0x8805A8EC;
	REX_STORE_U32(ctx.r30.u32 + 668, ctx.r29.u32);
	// lwz r3,672(r30)
	ctx.current_instruction = 0x8805A8F0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// bl 0x880672e8
	ctx.lr = 0x8805A8F8;
	sub_880672E8(ctx, base);
loc_8805A8F8:
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// ori r7,r10,16389
	ctx.r7.u64 = ctx.r10.u64 | 16389;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 & ctx.r7.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r31)
	ctx.current_instruction = 0x8805A918;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// blt cr6,0x8805a924
	if (ctx.cr6.lt) goto loc_8805A924;
	// stw r29,676(r30)
	ctx.current_instruction = 0x8805A920;
	REX_STORE_U32(ctx.r30.u32 + 676, ctx.r29.u32);
loc_8805A924:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8805a944
	goto loc_8805A944;
loc_8805A944:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8805a954
	if (ctx.cr6.eq) goto loc_8805A954;
	// lwz r11,80(r31)
	ctx.current_instruction = 0x8805A94C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,0(r28)
	ctx.current_instruction = 0x8805A950;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8805A954:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805BDC0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805BDC0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805BDC0;
	ctx.current_instruction = 0x8805BDC0;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32819
	ctx.r4.u64 = ctx.r4.u64 | 32819;
	// b 0x88050340
	sub_88050340(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805BE78) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805BE78);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805BE78;
	ctx.current_instruction = 0x8805BE78;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// b 0x88050340
	sub_88050340(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805BF78) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805BF78;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805BF78) {
			switch (rex_dispatch_address) {
				case 0x8805BF80:
				case 0x8805BFB0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805BF78;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805BF80: goto loc_8805BF80;
		case 0x8805BFB0: goto loc_8805BFB0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8805BF80;
	__savegprlr_29(ctx, base);
loc_8805BF80:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8805BF80;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.current_instruction = 0x8805BF84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,60(r3)
	ctx.current_instruction = 0x8805BF90;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ld r4,48(r31)
	ctx.current_instruction = 0x8805BFA4;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8805BFB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805BFB0:
	// lwz r10,0(r30)
	ctx.current_instruction = 0x8805BFB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8805bfc4
	if (ctx.cr6.lt) goto loc_8805BFC4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8805bfcc
	if (!ctx.cr6.lt) goto loc_8805BFCC;
loc_8805BFC4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,44(r31)
	ctx.current_instruction = 0x8805BFC8;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_8805BFCC:
	// lwz r10,0(r30)
	ctx.current_instruction = 0x8805BFCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// ld r11,48(r31)
	ctx.current_instruction = 0x8805BFD0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 48);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,48(r31)
	ctx.current_instruction = 0x8805BFD8;
	REX_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805D9D8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805D9D8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805D9D8;
	ctx.current_instruction = 0x8805D9D8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8805da10
	if (ctx.cr6.eq) goto loc_8805DA10;
	// lwz r11,0(r5)
	ctx.current_instruction = 0x8805D9E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805da10
	if (ctx.cr6.eq) goto loc_8805DA10;
	// lwz r11,208(r5)
	ctx.current_instruction = 0x8805D9EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805da08
	if (ctx.cr6.eq) goto loc_8805DA08;
	// lwz r11,60(r5)
	ctx.current_instruction = 0x8805D9F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	ctx.current_instruction = 0x8805DA00;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8805DA08:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8805DA10:
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// stw r11,0(r4)
	ctx.current_instruction = 0x8805DA1C;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r9,9584
	ctx.r4.s64 = ctx.r9.s64 + 9584;
	// lwz r3,2840(r10)
	ctx.current_instruction = 0x8805DA28;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 2840);
	// b 0x8806c290
	sub_8806C290(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805F8F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805F8F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805F8F0) {
			switch (rex_dispatch_address) {
				case 0x8805F8F8:
				case 0x8805F924:
				case 0x8805F948:
				case 0x8805F96C:
				case 0x8805F988:
				case 0x8805F99C:
				case 0x8805F9BC:
				case 0x8805F9C8:
				case 0x8805F9E0:
				case 0x8805F9EC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805F8F0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805F8F8: goto loc_8805F8F8;
		case 0x8805F924: goto loc_8805F924;
		case 0x8805F948: goto loc_8805F948;
		case 0x8805F96C: goto loc_8805F96C;
		case 0x8805F988: goto loc_8805F988;
		case 0x8805F99C: goto loc_8805F99C;
		case 0x8805F9BC: goto loc_8805F9BC;
		case 0x8805F9C8: goto loc_8805F9C8;
		case 0x8805F9E0: goto loc_8805F9E0;
		case 0x8805F9EC: goto loc_8805F9EC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8805F8F8;
	__savegprlr_28(ctx, base);
loc_8805F8F8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8805F8F8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,560(r3)
	ctx.current_instruction = 0x8805F900;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 560);
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805f9cc
	if (ctx.cr6.eq) goto loc_8805F9CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8807c1b8
	ctx.lr = 0x8805F924;
	sub_8807C1B8(ctx, base);
loc_8805F924:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8805F924;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805f9a8
	if (ctx.cr6.eq) goto loc_8805F9A8;
loc_8805F930:
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805F930;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805f954
	if (ctx.cr6.eq) goto loc_8805F954;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x88050358
	ctx.lr = 0x8805F948;
	sub_88050358(ctx, base);
loc_8805F948:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8805F948;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,0(r11)
	ctx.current_instruction = 0x8805F94C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8805F950;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8805F954:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8805F954;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805f978
	if (ctx.cr6.eq) goto loc_8805F978;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x88050358
	ctx.lr = 0x8805F96C;
	sub_88050358(ctx, base);
loc_8805F96C:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8805F96C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,4(r11)
	ctx.current_instruction = 0x8805F970;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8805F974;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8805F978:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805f98c
	if (ctx.cr6.eq) goto loc_8805F98C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88050358
	ctx.lr = 0x8805F988;
	sub_88050358(ctx, base);
loc_8805F988:
	// stw r30,80(r1)
	ctx.current_instruction = 0x8805F988;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_8805F98C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,560(r28)
	ctx.current_instruction = 0x8805F990;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 560);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8807c1b8
	ctx.lr = 0x8805F99C;
	sub_8807C1B8(ctx, base);
loc_8805F99C:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8805F99C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8805f930
	if (!ctx.cr6.eq) goto loc_8805F930;
loc_8805F9A8:
	// lwz r31,560(r28)
	ctx.current_instruction = 0x8805F9A8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 560);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8805f9cc
	if (ctx.cr6.eq) goto loc_8805F9CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807c510
	ctx.lr = 0x8805F9BC;
	sub_8807C510(ctx, base);
loc_8805F9BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88050358
	ctx.lr = 0x8805F9C8;
	sub_88050358(ctx, base);
loc_8805F9C8:
	// stw r30,560(r28)
	ctx.current_instruction = 0x8805F9C8;
	REX_STORE_U32(ctx.r28.u32 + 560, ctx.r30.u32);
loc_8805F9CC:
	// lwz r31,564(r28)
	ctx.current_instruction = 0x8805F9CC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 564);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8805f9f0
	if (ctx.cr6.eq) goto loc_8805F9F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807d9e0
	ctx.lr = 0x8805F9E0;
	sub_8807D9E0(ctx, base);
loc_8805F9E0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88050358
	ctx.lr = 0x8805F9EC;
	sub_88050358(ctx, base);
loc_8805F9EC:
	// stw r30,564(r28)
	ctx.current_instruction = 0x8805F9EC;
	REX_STORE_U32(ctx.r28.u32 + 564, ctx.r30.u32);
loc_8805F9F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88063BC0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88063BC0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88063BC0;
	ctx.current_instruction = 0x88063BC0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,0(r6)
	ctx.current_instruction = 0x88063BC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,72(r9)
	ctx.current_instruction = 0x88063BD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r11,r11,96
	ctx.r11.u64 = ctx.r11.u64 | 96;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x88063c4c
	if (ctx.cr6.gt) goto loc_88063C4C;
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x88063c38
	if (ctx.cr6.gt) goto loc_88063C38;
	// beq cr6,0x88063c30
	if (ctx.cr6.eq) goto loc_88063C30;
	// addis r11,r4,-9
	ctx.r11.s64 = ctx.r4.s64 + -589824;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x88063c24
	if (ctx.cr6.eq) goto loc_88063C24;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x88063cbc
	if (!ctx.cr6.eq) goto loc_88063CBC;
	// stw r5,48(r9)
	ctx.current_instruction = 0x88063C1C;
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r5.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88063C24:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r5)
	ctx.current_instruction = 0x88063C28;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88063C30:
	// sth r5,54(r9)
	ctx.current_instruction = 0x88063C30;
	REX_STORE_U16(ctx.r9.u32 + 54, ctx.r5.u16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88063C38:
	// addis r11,r4,-9
	ctx.r11.s64 = ctx.r4.s64 + -589824;
	// addic. r11,r11,-64
	ctx.xer.ca = ctx.r11.u32 > 63;
	ctx.r11.s64 = ctx.r11.s64 + -64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88063cb4
	if (!ctx.cr0.eq) goto loc_88063CB4;
	// sth r5,52(r9)
	ctx.current_instruction = 0x88063C44;
	REX_STORE_U16(ctx.r9.u32 + 52, ctx.r5.u16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88063C4C:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r11,r11,144
	ctx.r11.u64 = ctx.r11.u64 | 144;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x88063ca8
	if (ctx.cr6.gt) goto loc_88063CA8;
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// addis r11,r4,-9
	ctx.r11.s64 = ctx.r4.s64 + -589824;
	// addic. r11,r11,-112
	ctx.xer.ca = ctx.r11.u32 > 111;
	ctx.r11.s64 = ctx.r11.s64 + -112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x88063c94
	if (ctx.cr0.eq) goto loc_88063C94;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x88063cbc
	if (!ctx.cr6.eq) goto loc_88063CBC;
	// lwz r11,552(r10)
	ctx.current_instruction = 0x88063C74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 552);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x88063c8c
	if (ctx.cr6.eq) goto loc_88063C8C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,183
	ctx.r3.u64 = ctx.r3.u64 | 183;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88063C8C:
	// stw r5,44(r9)
	ctx.current_instruction = 0x88063C8C;
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r5.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88063C94:
	// lwz r11,8(r5)
	ctx.current_instruction = 0x88063C94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,4(r5)
	ctx.current_instruction = 0x88063C98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r8,40(r9)
	ctx.current_instruction = 0x88063CA0;
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88063CA8:
	// addis r11,r4,-9
	ctx.r11.s64 = ctx.r4.s64 + -589824;
	// addic. r11,r11,-160
	ctx.xer.ca = ctx.r11.u32 > 159;
	ctx.r11.s64 = ctx.r11.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_88063CB4:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_88063CBC:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,178
	ctx.r3.u64 = ctx.r3.u64 | 178;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88067658) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88067658);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88067658;
	ctx.current_instruction = 0x88067658;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r11,10640
	ctx.r10.s64 = ctx.r11.s64 + 10640;
	// stw r10,0(r3)
	ctx.current_instruction = 0x88067660;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x880cd4f8
	sub_880CD4F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880676F0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880676F0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880676F0;
	ctx.current_instruction = 0x880676F0;
	// stw r4,444(r3)
	ctx.current_instruction = 0x880676F0;
	REX_STORE_U32(ctx.r3.u32 + 444, ctx.r4.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88067758) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88067758);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88067758;
	ctx.current_instruction = 0x88067758;
	// addi r3,r3,204
	ctx.r3.s64 = ctx.r3.s64 + 204;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880678B8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880678B8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880678B8;
	ctx.current_instruction = 0x880678B8;
	// lwz r10,64(r3)
	ctx.current_instruction = 0x880678B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r11,48(r3)
	ctx.current_instruction = 0x880678BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r10,r10,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// lwzx r9,r10,r11
	ctx.current_instruction = 0x880678C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,52(r9)
	ctx.current_instruction = 0x880678CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88067C60) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88067C60;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88067C60) {
			switch (rex_dispatch_address) {
				case 0x88067C84:
				case 0x88067C8C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88067C60;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88067C84: goto loc_88067C84;
		case 0x88067C8C: goto loc_88067C8C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88067C64;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88067C68;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88067C6C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,10744
	ctx.r10.s64 = ctx.r11.s64 + 10744;
	// stw r10,0(r3)
	ctx.current_instruction = 0x88067C7C;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x88067818
	ctx.lr = 0x88067C84;
	sub_88067818(ctx, base);
loc_88067C84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88062000
	ctx.lr = 0x88067C8C;
	sub_88062000(ctx, base);
loc_88067C8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88067C90;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88067C98;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880684A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880684A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880684A0) {
			switch (rex_dispatch_address) {
				case 0x880684C4:
				case 0x880684DC:
				case 0x880684F4:
				case 0x8806850C:
				case 0x88068524:
				case 0x88068538:
				case 0x8806854C:
				case 0x88068560:
				case 0x88068574:
				case 0x88068588:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880684A0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880684C4: goto loc_880684C4;
		case 0x880684DC: goto loc_880684DC;
		case 0x880684F4: goto loc_880684F4;
		case 0x8806850C: goto loc_8806850C;
		case 0x88068524: goto loc_88068524;
		case 0x88068538: goto loc_88068538;
		case 0x8806854C: goto loc_8806854C;
		case 0x88068560: goto loc_88068560;
		case 0x88068574: goto loc_88068574;
		case 0x88068588: goto loc_88068588;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880684A4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880684A8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880684AC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880684B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x880684B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880684C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880684C4:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x880684C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,288(r9)
	ctx.current_instruction = 0x880684D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 288);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x880684DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880684DC:
	// lwz r7,0(r31)
	ctx.current_instruction = 0x880684DC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,292(r7)
	ctx.current_instruction = 0x880684E8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 292);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x880684F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880684F4:
	// lwz r5,0(r31)
	ctx.current_instruction = 0x880684F4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,276(r5)
	ctx.current_instruction = 0x88068500;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8806850C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806850C:
	// lwz r10,0(r31)
	ctx.current_instruction = 0x8806850C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r9,280(r10)
	ctx.current_instruction = 0x88068518;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 280);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88068524;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068524:
	// lwz r8,0(r31)
	ctx.current_instruction = 0x88068524;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,196(r8)
	ctx.current_instruction = 0x8806852C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 196);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x88068538;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068538:
	// lwz r6,0(r31)
	ctx.current_instruction = 0x88068538;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,200(r6)
	ctx.current_instruction = 0x88068540;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 200);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8806854C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806854C:
	// lwz r4,0(r31)
	ctx.current_instruction = 0x8806854C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,204(r4)
	ctx.current_instruction = 0x88068554;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88068560;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068560:
	// lwz r10,0(r31)
	ctx.current_instruction = 0x88068560;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,208(r10)
	ctx.current_instruction = 0x88068568;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 208);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88068574;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068574:
	// lwz r8,0(r31)
	ctx.current_instruction = 0x88068574;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,20(r8)
	ctx.current_instruction = 0x8806857C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x88068588;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068588:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88068590;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88068598;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806C510) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806C510);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806C510;
	ctx.current_instruction = 0x8806C510;
	// lwz r11,2824(r3)
	ctx.current_instruction = 0x8806C510;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2824);
	// lis r6,-30680
	ctx.r6.s64 = -2010644480;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806c534
	if (ctx.cr6.eq) goto loc_8806C534;
	// lwz r11,31532(r3)
	ctx.current_instruction = 0x8806C524;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31532);
	// ori r10,r11,10
	ctx.r10.u64 = ctx.r11.u64 | 10;
	// stw r10,31532(r3)
	ctx.current_instruction = 0x8806C52C;
	REX_STORE_U32(ctx.r3.u32 + 31532, ctx.r10.u32);
	// b 0x8806c62c
	goto loc_8806C62C;
loc_8806C534:
	// lwz r11,8176(r3)
	ctx.current_instruction = 0x8806C534;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806c558
	if (ctx.cr6.eq) goto loc_8806C558;
	// lwz r11,8180(r3)
	ctx.current_instruction = 0x8806C540;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8180);
	// lwz r10,172(r11)
	ctx.current_instruction = 0x8806C544;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8806c558
	if (ctx.cr6.eq) goto loc_8806C558;
	// lwz r11,64(r11)
	ctx.current_instruction = 0x8806C550;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x8806c55c
	goto loc_8806C55C;
loc_8806C558:
	// lwz r11,31092(r3)
	ctx.current_instruction = 0x8806C558;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31092);
loc_8806C55C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8806c584
	if (!ctx.cr6.lt) goto loc_8806C584;
	// lwz r11,31532(r3)
	ctx.current_instruction = 0x8806C564;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31532);
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r7,7980(r3)
	ctx.current_instruction = 0x8806C56C;
	REX_STORE_U32(ctx.r3.u32 + 7980, ctx.r7.u32);
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r10,31536(r3)
	ctx.current_instruction = 0x8806C574;
	REX_STORE_U8(ctx.r3.u32 + 31536, ctx.r10.u8);
	// rlwinm r9,r9,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r9,31532(r3)
	ctx.current_instruction = 0x8806C57C;
	REX_STORE_U32(ctx.r3.u32 + 31532, ctx.r9.u32);
	// b 0x8806c62c
	goto loc_8806C62C;
loc_8806C584:
	// rlwinm r8,r11,0,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8806c5d8
	if (ctx.cr6.eq) goto loc_8806C5D8;
	// lwz r8,18412(r6)
	ctx.current_instruction = 0x8806C598;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 18412);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8806c5d8
	if (!ctx.cr6.eq) goto loc_8806C5D8;
	// lis r8,-30680
	ctx.r8.s64 = -2010644480;
	// lwz r8,18416(r8)
	ctx.current_instruction = 0x8806C5A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 18416);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8806c5d8
	if (!ctx.cr6.eq) goto loc_8806C5D8;
	// lwz r8,4(r3)
	ctx.current_instruction = 0x8806C5B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x8806c5d8
	if (!ctx.cr6.eq) goto loc_8806C5D8;
	// rlwinm r8,r11,28,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// stw r10,30992(r3)
	ctx.current_instruction = 0x8806C5C4;
	REX_STORE_U32(ctx.r3.u32 + 30992, ctx.r10.u32);
	// rlwinm r5,r11,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// stw r9,30996(r3)
	ctx.current_instruction = 0x8806C5CC;
	REX_STORE_U32(ctx.r3.u32 + 30996, ctx.r9.u32);
	// stb r8,31536(r3)
	ctx.current_instruction = 0x8806C5D0;
	REX_STORE_U8(ctx.r3.u32 + 31536, ctx.r8.u8);
	// stb r5,31537(r3)
	ctx.current_instruction = 0x8806C5D4;
	REX_STORE_U8(ctx.r3.u32 + 31537, ctx.r5.u8);
loc_8806C5D8:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8806c5fc
	if (!ctx.cr6.eq) goto loc_8806C5FC;
	// lwz r11,31532(r3)
	ctx.current_instruction = 0x8806C5E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31532);
	// stw r7,7980(r3)
	ctx.current_instruction = 0x8806C5E8;
	REX_STORE_U32(ctx.r3.u32 + 7980, ctx.r7.u32);
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,31532(r3)
	ctx.current_instruction = 0x8806C5F4;
	REX_STORE_U32(ctx.r3.u32 + 31532, ctx.r10.u32);
	// b 0x8806c62c
	goto loc_8806C62C;
loc_8806C5FC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8806c614
	if (ctx.cr6.eq) goto loc_8806C614;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8806c614
	if (ctx.cr6.eq) goto loc_8806C614;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8806c62c
	if (!ctx.cr6.eq) goto loc_8806C62C;
loc_8806C614:
	// lwz r11,31532(r3)
	ctx.current_instruction = 0x8806C614;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31532);
	// stw r10,7980(r3)
	ctx.current_instruction = 0x8806C618;
	REX_STORE_U32(ctx.r3.u32 + 7980, ctx.r10.u32);
	// ori r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 | 32;
	// stw r10,30992(r3)
	ctx.current_instruction = 0x8806C620;
	REX_STORE_U32(ctx.r3.u32 + 30992, ctx.r10.u32);
	// stw r9,30996(r3)
	ctx.current_instruction = 0x8806C624;
	REX_STORE_U32(ctx.r3.u32 + 30996, ctx.r9.u32);
	// stw r8,31532(r3)
	ctx.current_instruction = 0x8806C628;
	REX_STORE_U32(ctx.r3.u32 + 31532, ctx.r8.u32);
loc_8806C62C:
	// lwz r11,18412(r6)
	ctx.current_instruction = 0x8806C62C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 18412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// stw r7,31532(r3)
	ctx.current_instruction = 0x8806C638;
	REX_STORE_U32(ctx.r3.u32 + 31532, ctx.r7.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806FF40) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806FF40);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806FF40;
	ctx.current_instruction = 0x8806FF40;
	// lwz r10,1416(r3)
	ctx.current_instruction = 0x8806FF40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1416);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2428(r3)
	ctx.current_instruction = 0x8806FF48;
	REX_STORE_U32(ctx.r3.u32 + 2428, ctx.r11.u32);
	// stb r11,2432(r3)
	ctx.current_instruction = 0x8806FF4C;
	REX_STORE_U8(ctx.r3.u32 + 2432, ctx.r11.u8);
	// stw r11,2436(r3)
	ctx.current_instruction = 0x8806FF50;
	REX_STORE_U32(ctx.r3.u32 + 2436, ctx.r11.u32);
	// stb r10,2433(r3)
	ctx.current_instruction = 0x8806FF54;
	REX_STORE_U8(ctx.r3.u32 + 2433, ctx.r10.u8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88070518) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88070518);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88070518;
	ctx.current_instruction = 0x88070518;
	// lwz r11,31544(r3)
	ctx.current_instruction = 0x88070518;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88070544
	if (ctx.cr6.eq) goto loc_88070544;
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// addi r11,r11,31168
	ctx.r11.s64 = ctx.r11.s64 + 31168;
	// addi r9,r11,8192
	ctx.r9.s64 = ctx.r11.s64 + 8192;
	// lbzx r8,r4,r9
	ctx.current_instruction = 0x88070534;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88070544:
	// srawi r11,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 31;
	// lwz r10,31548(r3)
	ctx.current_instruction = 0x88070548;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 31548);
	// xor r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// beq cr6,0x88070578
	if (ctx.cr6.eq) goto loc_88070578;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// ble cr6,0x88070568
	if (!ctx.cr6.gt) goto loc_88070568;
	// li r11,95
	ctx.r11.s64 = 95;
loc_88070568:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r10,r10,11944
	ctx.r10.s64 = ctx.r10.s64 + 11944;
	// addi r9,r10,-96
	ctx.r9.s64 = ctx.r10.s64 + -96;
	// b 0x8807058c
	goto loc_8807058C;
loc_88070578:
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x88070584
	if (!ctx.cr6.gt) goto loc_88070584;
	// li r11,31
	ctx.r11.s64 = 31;
loc_88070584:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r9,r10,11944
	ctx.r9.s64 = ctx.r10.s64 + 11944;
loc_8807058C:
	// lbzx r11,r11,r9
	ctx.current_instruction = 0x8807058C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88071948) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88071948;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88071948) {
			switch (rex_dispatch_address) {
				case 0x88071978:
				case 0x880719C8:
				case 0x88071A2C:
				case 0x88071A54:
				case 0x88071AA8:
				case 0x88071AD0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88071948;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88071978: goto loc_88071978;
		case 0x880719C8: goto loc_880719C8;
		case 0x88071A2C: goto loc_88071A2C;
		case 0x88071A54: goto loc_88071A54;
		case 0x88071AA8: goto loc_88071AA8;
		case 0x88071AD0: goto loc_88071AD0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8807194C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88071950;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88071954;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2424(r3)
	ctx.current_instruction = 0x88071958;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2424);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88071ac4
	if (ctx.cr6.eq) goto loc_88071AC4;
	// lwz r4,2428(r3)
	ctx.current_instruction = 0x8807196C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 2428);
	// lwz r3,7868(r3)
	ctx.current_instruction = 0x88071970;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x88071978;
	sub_880E6960(ctx, base);
loc_88071978:
	// lwz r11,2428(r31)
	ctx.current_instruction = 0x88071978;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88071ad0
	if (ctx.cr6.eq) goto loc_88071AD0;
	// lwz r11,2436(r31)
	ctx.current_instruction = 0x88071984;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2436);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x88071998
	if (!ctx.cr6.eq) goto loc_88071998;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x88071a9c
	goto loc_88071A9C;
loc_88071998:
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88071a0c
	if (ctx.cr6.eq) goto loc_88071A0C;
	// rlwinm r9,r11,0,28,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88071a04
	if (ctx.cr6.eq) goto loc_88071A04;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880719BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x880719C8;
	sub_880E6960(ctx, base);
loc_880719C8:
	// lwz r11,2436(r31)
	ctx.current_instruction = 0x880719C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2436);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x880719dc
	if (!ctx.cr6.eq) goto loc_880719DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x88071a9c
	goto loc_88071A9C;
loc_880719DC:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x880719ec
	if (!ctx.cr6.eq) goto loc_880719EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x88071a9c
	goto loc_88071A9C;
loc_880719EC:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x880719fc
	if (!ctx.cr6.eq) goto loc_880719FC;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x88071a9c
	goto loc_88071A9C;
loc_880719FC:
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// b 0x88071a8c
	goto loc_88071A8C;
loc_88071A04:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88071a44
	if (!ctx.cr6.eq) goto loc_88071A44;
loc_88071A0C:
	// rlwinm r11,r11,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88071a44
	if (!ctx.cr6.eq) goto loc_88071A44;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88071A20;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x880e6960
	ctx.lr = 0x88071A2C;
	sub_880E6960(ctx, base);
loc_88071A2C:
	// lbz r11,2432(r31)
	ctx.current_instruction = 0x88071A2C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2432);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x88071aa0
	goto loc_88071AA0;
loc_88071A44:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88071A48;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x880e6960
	ctx.lr = 0x88071A54;
	sub_880E6960(ctx, base);
loc_88071A54:
	// lwz r11,2436(r31)
	ctx.current_instruction = 0x88071A54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2436);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88071a68
	if (!ctx.cr6.eq) goto loc_88071A68;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x88071a9c
	goto loc_88071A9C;
loc_88071A68:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88071a78
	if (!ctx.cr6.eq) goto loc_88071A78;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x88071a9c
	goto loc_88071A9C;
loc_88071A78:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88071a88
	if (!ctx.cr6.eq) goto loc_88071A88;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x88071a9c
	goto loc_88071A9C;
loc_88071A88:
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_88071A8C:
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r10,3
	ctx.r10.s64 = 3;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_88071A9C:
	// li r5,2
	ctx.r5.s64 = 2;
loc_88071AA0:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88071AA0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x88071AA8;
	sub_880E6960(ctx, base);
loc_88071AA8:
	// lbz r11,2432(r31)
	ctx.current_instruction = 0x88071AA8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2432);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x88071ac0
	if (ctx.cr6.eq) goto loc_88071AC0;
	// lwz r11,2436(r31)
	ctx.current_instruction = 0x88071AB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88071ad0
	if (ctx.cr6.eq) goto loc_88071AD0;
loc_88071AC0:
	// li r5,1
	ctx.r5.s64 = 1;
loc_88071AC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,2433(r31)
	ctx.current_instruction = 0x88071AC8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 2433);
	// bl 0x880fa1f8
	ctx.lr = 0x88071AD0;
	sub_880FA1F8(ctx, base);
loc_88071AD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88071AD4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88071ADC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8807C1B8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8807C1B8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807C1B8;
	ctx.current_instruction = 0x8807C1B8;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r4)
	ctx.current_instruction = 0x8807C1C0;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r10,16(r3)
	ctx.current_instruction = 0x8807C1C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8807c280
	if (!ctx.cr6.lt) goto loc_8807C280;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8807c1ec
	if (!ctx.cr6.eq) goto loc_8807C1EC;
	// lwz r10,0(r3)
	ctx.current_instruction = 0x8807C1D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r10)
	ctx.current_instruction = 0x8807C1DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r8,0(r3)
	ctx.current_instruction = 0x8807C1E4;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// b 0x8807c240
	goto loc_8807C240;
loc_8807C1EC:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x8807c208
	if (!ctx.cr6.eq) goto loc_8807C208;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8807c208
	if (!ctx.cr6.eq) goto loc_8807C208;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8807C1FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r11)
	ctx.current_instruction = 0x8807C200;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x8807c248
	goto loc_8807C248;
loc_8807C208:
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x8807c218
	if (!ctx.cr6.eq) goto loc_8807C218;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
loc_8807C218:
	// addic. r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,0(r11)
	ctx.current_instruction = 0x8807C21C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ble 0x8807c230
	if (!ctx.cr0.gt) goto loc_8807C230;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8807C228:
	// lwz r9,0(r9)
	ctx.current_instruction = 0x8807C228;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// bdnz 0x8807c228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8807C228;
loc_8807C230:
	// lwz r10,0(r9)
	ctx.current_instruction = 0x8807C230;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r8,0(r10)
	ctx.current_instruction = 0x8807C238;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r9)
	ctx.current_instruction = 0x8807C23C;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_8807C240:
	// bne cr6,0x8807c248
	if (!ctx.cr6.eq) goto loc_8807C248;
	// stw r9,4(r11)
	ctx.current_instruction = 0x8807C244;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_8807C248:
	// lwz r9,4(r10)
	ctx.current_instruction = 0x8807C248;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r4)
	ctx.current_instruction = 0x8807C24C;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.current_instruction = 0x8807C250;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,0(r10)
	ctx.current_instruction = 0x8807C254;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.current_instruction = 0x8807C258;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r10,8(r11)
	ctx.current_instruction = 0x8807C260;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bne cr6,0x8807c26c
	if (!ctx.cr6.eq) goto loc_8807C26C;
	// stw r10,12(r11)
	ctx.current_instruction = 0x8807C268;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_8807C26C:
	// lwz r10,16(r11)
	ctx.current_instruction = 0x8807C26C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r11)
	ctx.current_instruction = 0x8807C278;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8807C280:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8807D258) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8807D258);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807D258;
	ctx.current_instruction = 0x8807D258;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8807d26c
	if (ctx.cr6.eq) goto loc_8807D26C;
	// lwz r11,172(r3)
	ctx.current_instruction = 0x8807D260;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_8807D26C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,172(r3)
	ctx.current_instruction = 0x8807D270;
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8807D510) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807D510;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807D510) {
			switch (rex_dispatch_address) {
				case 0x8807D57C:
				case 0x8807D77C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807D510;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807D57C: goto loc_8807D57C;
		case 0x8807D77C: goto loc_8807D77C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8807D514;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8807D518;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.current_instruction = 0x8807D51C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8807d77c
	if (!ctx.cr6.gt) goto loc_8807D77C;
	// lis r10,12483
	ctx.r10.s64 = 818085888;
	// lwz r11,124(r3)
	ctx.current_instruction = 0x8807D52C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// fabs f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// ori r9,r10,3121
	ctx.r9.u64 = ctx.r10.u64 | 3121;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mulhw r7,r11,r9
	ctx.r7.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// stw r8,124(r3)
	ctx.current_instruction = 0x8807D540;
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r8.u32);
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r5,r6,21
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(21));
	// subf r4,r5,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,132(r3)
	ctx.current_instruction = 0x8807D55C;
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r4.u32);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r10,r3
	ctx.current_instruction = 0x8807D568;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// lwz r9,4(r3)
	ctx.current_instruction = 0x8807D56C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8807d57c
	if (!ctx.cr6.eq) goto loc_8807D57C;
	// bl 0x8807cc18
	ctx.lr = 0x8807D57C;
	sub_8807CC18(ctx, base);
loc_8807D57C:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8807D57C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807d5b8
	if (!ctx.cr6.eq) goto loc_8807D5B8;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,12472(r11)
	ctx.current_instruction = 0x8807D58C;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12472);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x8807d77c
	if (!ctx.cr6.lt) goto loc_8807D77C;
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f2,16(r3)
	ctx.current_instruction = 0x8807D59C;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r8,4(r3)
	ctx.current_instruction = 0x8807D5A0;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r8,32(r3)
	ctx.current_instruction = 0x8807D5A4;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8807D5AC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8807D5B8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,16(r3)
	ctx.current_instruction = 0x8807D5BC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	ctx.current_instruction = 0x8807D5CC;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bge cr6,0x8807d62c
	if (!ctx.cr6.lt) goto loc_8807D62C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807d600
	if (!ctx.cr6.eq) goto loc_8807D600;
	// fsubs f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,12180(r11)
	ctx.current_instruction = 0x8807D5E4;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8807d604
	if (!ctx.cr6.gt) goto loc_8807D604;
	// lwz r11,32(r3)
	ctx.current_instruction = 0x8807D5F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r3)
	ctx.current_instruction = 0x8807D5F8;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// b 0x8807d604
	goto loc_8807D604;
loc_8807D600:
	// stw r8,32(r3)
	ctx.current_instruction = 0x8807D600;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
loc_8807D604:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stfs f2,16(r3)
	ctx.current_instruction = 0x8807D608;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r8,4(r3)
	ctx.current_instruction = 0x8807D60C;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r10,20(r3)
	ctx.current_instruction = 0x8807D610;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r10,24(r3)
	ctx.current_instruction = 0x8807D614;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r10,28(r3)
	ctx.current_instruction = 0x8807D618;
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lfs f0,6732(r11)
	ctx.current_instruction = 0x8807D61C;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,36(r3)
	ctx.current_instruction = 0x8807D620;
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stfs f0,12(r3)
	ctx.current_instruction = 0x8807D624;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x8807d6cc
	goto loc_8807D6CC;
loc_8807D62C:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,6732(r11)
	ctx.current_instruction = 0x8807D630;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x8807d644
	if (!ctx.cr6.gt) goto loc_8807D644;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// blt cr6,0x8807d654
	if (ctx.cr6.lt) goto loc_8807D654;
loc_8807D644:
	// fcmpu cr6,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x8807d660
	if (!ctx.cr6.lt) goto loc_8807D660;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// ble cr6,0x8807d660
	if (!ctx.cr6.gt) goto loc_8807D660;
loc_8807D654:
	// lwz r11,28(r3)
	ctx.current_instruction = 0x8807D654;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r3)
	ctx.current_instruction = 0x8807D65C;
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
loc_8807D660:
	// lwz r11,28(r3)
	ctx.current_instruction = 0x8807D660;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8807d778
	if (ctx.cr6.gt) goto loc_8807D778;
	// lwz r11,20(r3)
	ctx.current_instruction = 0x8807D66C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fcmpu cr6,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// ble cr6,0x8807d6b8
	if (!ctx.cr6.gt) goto loc_8807D6B8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8807d778
	if (ctx.cr6.gt) goto loc_8807D778;
	// lfs f0,12(r3)
	ctx.current_instruction = 0x8807D680;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bge cr6,0x8807d690
	if (!ctx.cr6.lt) goto loc_8807D690;
	// stfs f2,12(r3)
	ctx.current_instruction = 0x8807D68C;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
loc_8807D690:
	// fsubs f13,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stw r10,24(r3)
	ctx.current_instruction = 0x8807D698;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lfs f0,12180(r11)
	ctx.current_instruction = 0x8807D69C;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8807d6cc
	if (!ctx.cr6.gt) goto loc_8807D6CC;
	// lwz r11,36(r3)
	ctx.current_instruction = 0x8807D6A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r3)
	ctx.current_instruction = 0x8807D6B0;
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// b 0x8807d6cc
	goto loc_8807D6CC;
loc_8807D6B8:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,24(r3)
	ctx.current_instruction = 0x8807D6BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r9,20(r3)
	ctx.current_instruction = 0x8807D6C4;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r7,24(r3)
	ctx.current_instruction = 0x8807D6C8;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
loc_8807D6CC:
	// lfs f13,16(r3)
	ctx.current_instruction = 0x8807D6CC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,12(r3)
	ctx.current_instruction = 0x8807D6D8;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lfs f12,12464(r11)
	ctx.current_instruction = 0x8807D6E0;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12464);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8807d724
	if (!ctx.cr6.lt) goto loc_8807D724;
	// lwz r11,32(r3)
	ctx.current_instruction = 0x8807D6EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8807d720
	if (!ctx.cr6.lt) goto loc_8807D720;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// std r11,80(r1)
	ctx.current_instruction = 0x8807D700;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.current_instruction = 0x8807D704;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fdivs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f6,f12
	ctx.cr6.compare(ctx.f6.f64, ctx.f12.f64);
	// bgt cr6,0x8807d724
	if (ctx.cr6.gt) goto loc_8807D724;
loc_8807D720:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8807D724:
	// lwz r11,36(r3)
	ctx.current_instruction = 0x8807D724;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8807d758
	if (!ctx.cr6.lt) goto loc_8807D758;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// std r11,80(r1)
	ctx.current_instruction = 0x8807D738;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.current_instruction = 0x8807D73C;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fdivs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// fcmpu cr6,f7,f12
	ctx.cr6.compare(ctx.f7.f64, ctx.f12.f64);
	// ble cr6,0x8807d758
	if (!ctx.cr6.gt) goto loc_8807D758;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8807D758:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8807D758;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,8(r3)
	ctx.current_instruction = 0x8807D75C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8807d78c
	if (ctx.cr6.lt) goto loc_8807D78C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,12456(r11)
	ctx.current_instruction = 0x8807D76C;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12456);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8807d7b0
	if (!ctx.cr6.lt) goto loc_8807D7B0;
loc_8807D778:
	// bl 0x8807d4b0
	ctx.lr = 0x8807D77C;
	sub_8807D4B0(ctx, base);
loc_8807D77C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8807D780;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8807D78C:
	// lwz r7,24(r3)
	ctx.current_instruction = 0x8807D78C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x8807d77c
	if (ctx.cr6.lt) goto loc_8807D77C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8807d778
	if (ctx.cr6.lt) goto loc_8807D778;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,12456(r11)
	ctx.current_instruction = 0x8807D7A4;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12456);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8807d778
	if (!ctx.cr6.gt) goto loc_8807D778;
loc_8807D7B0:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x8807d7bc
	if (!ctx.cr6.lt) goto loc_8807D7BC;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8807D7BC:
	// lfs f13,128(r3)
	ctx.current_instruction = 0x8807D7BC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8807d778
	if (ctx.cr6.lt) goto loc_8807D778;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8807d778
	if (!ctx.cr6.eq) goto loc_8807D778;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8807d778
	if (!ctx.cr6.eq) goto loc_8807D778;
	// stw r8,0(r3)
	ctx.current_instruction = 0x8807D7D8;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8807D7E0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88085FA0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88085FA0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88085FA0) {
			switch (rex_dispatch_address) {
				case 0x88085FA8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88085FA0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88085FA8: goto loc_88085FA8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88085FA8;
	__savegprlr_14(ctx, base);
loc_88085FA8:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r4,6792(r3)
	ctx.current_instruction = 0x88085FAC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 6792);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,20(r1)
	ctx.current_instruction = 0x88085FB4;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// addi r29,r11,8532
	ctx.r29.s64 = ctx.r11.s64 + 8532;
	// lwz r11,728(r3)
	ctx.current_instruction = 0x88085FBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r29,-232(r1)
	ctx.current_instruction = 0x88085FC4;
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,-216(r1)
	ctx.current_instruction = 0x88085FCC;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r24.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r9,8(r29)
	ctx.current_instruction = 0x88085FD8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,12(r29)
	ctx.current_instruction = 0x88085FDC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// addi r14,r9,1
	ctx.r14.s64 = ctx.r9.s64 + 1;
	// lwz r9,16(r29)
	ctx.current_instruction = 0x88085FE4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// addi r27,r8,1
	ctx.r27.s64 = ctx.r8.s64 + 1;
	// lwz r8,0(r29)
	ctx.current_instruction = 0x88085FEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.current_instruction = 0x88085FF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r17,r9,1
	ctx.r17.s64 = ctx.r9.s64 + 1;
	// lwz r7,20(r29)
	ctx.current_instruction = 0x88085FF8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// add r15,r11,r8
	ctx.r15.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,24(r29)
	ctx.current_instruction = 0x88086000;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// addi r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 1;
	// lwz r10,6796(r30)
	ctx.current_instruction = 0x8808600C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 6796);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r27,-248(r1)
	ctx.current_instruction = 0x88086014;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r27.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r17,-244(r1)
	ctx.current_instruction = 0x8808601C;
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r17.u32);
	// stw r15,-236(r1)
	ctx.current_instruction = 0x88086020;
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r15.u32);
	// stw r8,-184(r1)
	ctx.current_instruction = 0x88086024;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r8.u32);
	// stw r7,-180(r1)
	ctx.current_instruction = 0x88086028;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r7.u32);
	// ble cr6,0x88086084
	if (!ctx.cr6.gt) goto loc_88086084;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// subf r7,r10,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r10.u64;
loc_88086038:
	// lbzx r11,r7,r9
	ctx.current_instruction = 0x88086038;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8808605c
	if (ctx.cr6.eq) goto loc_8808605C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8808605c
	if (ctx.cr6.eq) goto loc_8808605C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bne cr6,0x88086060
	if (!ctx.cr6.eq) goto loc_88086060;
loc_8808605C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_88086060:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stb r11,0(r9)
	ctx.current_instruction = 0x8808606C;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lwz r11,728(r30)
	ctx.current_instruction = 0x88086070;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 728);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88086038
	if (ctx.cr6.lt) goto loc_88086038;
loc_88086084:
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,724(r30)
	ctx.current_instruction = 0x88086088;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 724);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// subfc r6,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r9.u64;
	// eqv r5,r9,r11
	ctx.r5.u64 = ~(ctx.r9.u64 ^ ctx.r11.u64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// stw r6,-176(r1)
	ctx.current_instruction = 0x880860A8;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r6.u32);
	// ble cr6,0x88086154
	if (!ctx.cr6.gt) goto loc_88086154;
	// lwz r11,720(r30)
	ctx.current_instruction = 0x880860B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// addi r8,r31,-1
	ctx.r8.s64 = ctx.r31.s64 + -1;
loc_880860B8:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88086144
	if (!ctx.cr6.gt) goto loc_88086144;
loc_880860C4:
	// add. r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x88086114
	if (ctx.cr0.eq) goto loc_88086114;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x880860e0
	if (!ctx.cr6.eq) goto loc_880860E0;
	// lbz r11,-1(r10)
	ctx.current_instruction = 0x880860D4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x88086118
	goto loc_88086118;
loc_880860E0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880860f8
	if (!ctx.cr6.eq) goto loc_880860F8;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lbz r5,0(r11)
	ctx.current_instruction = 0x880860EC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// b 0x88086118
	goto loc_88086118;
loc_880860F8:
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lbz r4,-1(r10)
	ctx.current_instruction = 0x880860FC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// lbz r5,0(r5)
	ctx.current_instruction = 0x88086104;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x88086118
	if (ctx.cr6.eq) goto loc_88086118;
loc_88086114:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_88086118:
	// lbz r5,0(r10)
	ctx.current_instruction = 0x88086118;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// xor r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// addic r5,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// subfe r11,r5,r11
	temp.u8 = (~ctx.r5.u32 + ctx.r11.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stbu r11,1(r8)
	ctx.current_instruction = 0x88086134;
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// lwz r11,720(r30)
	ctx.current_instruction = 0x88086138;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880860c4
	if (ctx.cr6.lt) goto loc_880860C4;
loc_88086144:
	// lwz r9,724(r30)
	ctx.current_instruction = 0x88086144;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 724);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880860b8
	if (ctx.cr6.lt) goto loc_880860B8;
loc_88086154:
	// lwz r5,728(r30)
	ctx.current_instruction = 0x88086154;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 728);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// subf r11,r5,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,-240(r1)
	ctx.current_instruction = 0x88086164;
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r5.u32);
	// ble cr6,0x8808619c
	if (!ctx.cr6.gt) goto loc_8808619C;
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
loc_88086170:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r5,0(r8)
	ctx.current_instruction = 0x8808617C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// xor r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// stb r6,0(r8)
	ctx.current_instruction = 0x88086188;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// lwz r5,728(r30)
	ctx.current_instruction = 0x8808618C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 728);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// stw r5,-240(r1)
	ctx.current_instruction = 0x88086194;
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r5.u32);
	// blt cr6,0x88086170
	if (ctx.cr6.lt) goto loc_88086170;
loc_8808619C:
	// clrlwi r9,r5,31
	ctx.r9.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880861b0
	if (ctx.cr6.eq) goto loc_880861B0;
	// li r14,2
	ctx.r14.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
loc_880861B0:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88086320
	if (!ctx.cr6.lt) goto loc_88086320;
	// subf r8,r9,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r9.u64;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// addi r8,r7,23344
	ctx.r8.s64 = ctx.r7.s64 + 23344;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x880862a4
	if (ctx.cr6.lt) goto loc_880862A4;
	// lwz r7,-240(r1)
	ctx.current_instruction = 0x880861E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
	// addi r21,r10,1
	ctx.r21.s64 = ctx.r10.s64 + 1;
	// addi r16,r7,-2
	ctx.r16.s64 = ctx.r7.s64 + -2;
	// addi r20,r11,3
	ctx.r20.s64 = ctx.r11.s64 + 3;
	// addi r19,r11,2
	ctx.r19.s64 = ctx.r11.s64 + 2;
	// addi r18,r10,3
	ctx.r18.s64 = ctx.r10.s64 + 3;
	// addi r17,r10,2
	ctx.r17.s64 = ctx.r10.s64 + 2;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r15,r10,r11
	ctx.r15.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8808620C:
	// lbzx r6,r22,r9
	ctx.current_instruction = 0x8808620C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r9.u32);
	// lbzx r4,r15,r7
	ctx.current_instruction = 0x88086210;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r7.u32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// lbzx r29,r18,r9
	ctx.current_instruction = 0x88086218;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r9.u32);
	// extsb r6,r4
	ctx.r6.s64 = ctx.r4.s8;
	// lbzx r30,r19,r9
	ctx.current_instruction = 0x88086220;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r9.u32);
	// lbzx r28,r20,r9
	ctx.current_instruction = 0x88086224;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r9.u32);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lbzx r5,r17,r9
	ctx.current_instruction = 0x8808622C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r9.u32);
	// lbzx r31,r21,r9
	ctx.current_instruction = 0x88086230;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r9.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lbz r4,0(r7)
	ctx.current_instruction = 0x88086238;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r27,r5
	ctx.r27.s64 = ctx.r5.s8;
	// stb r29,-256(r1)
	ctx.current_instruction = 0x88086240;
	REX_STORE_U8(ctx.r1.u32 + -256, ctx.r29.u8);
	// extsb r29,r30
	ctx.r29.s64 = ctx.r30.s8;
	// lbz r5,-256(r1)
	ctx.current_instruction = 0x88086248;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + -256);
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// extsb r30,r28
	ctx.r30.s64 = ctx.r28.s8;
	// extsb r28,r5
	ctx.r28.s64 = ctx.r5.s8;
	// add r5,r31,r4
	ctx.r5.u64 = ctx.r31.u64 + ctx.r4.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r31,r27,r28
	ctx.r31.u64 = ctx.r27.u64 + ctx.r28.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r8
	ctx.current_instruction = 0x88086278;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// add r26,r6,r26
	ctx.r26.u64 = ctx.r6.u64 + ctx.r26.u64;
	// lwzx r4,r5,r8
	ctx.current_instruction = 0x88086284;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// cmpw cr6,r9,r16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r16.s32, ctx.xer);
	// lwzx r5,r30,r8
	ctx.current_instruction = 0x8808628C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lwzx r6,r31,r8
	ctx.current_instruction = 0x88086290;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// add r25,r4,r25
	ctx.r25.u64 = ctx.r4.u64 + ctx.r25.u64;
	// add r24,r5,r24
	ctx.r24.u64 = ctx.r5.u64 + ctx.r24.u64;
	// add r23,r6,r23
	ctx.r23.u64 = ctx.r6.u64 + ctx.r23.u64;
	// blt cr6,0x8808620c
	if (ctx.cr6.lt) goto loc_8808620C;
loc_880862A4:
	// lwz r7,-240(r1)
	ctx.current_instruction = 0x880862A4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880862f8
	if (!ctx.cr6.lt) goto loc_880862F8;
	// lbzx r6,r9,r10
	ctx.current_instruction = 0x880862B0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r5,0(r7)
	ctx.current_instruction = 0x880862C0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r4,1(r7)
	ctx.current_instruction = 0x880862C4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// lbz r9,1(r9)
	ctx.current_instruction = 0x880862C8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// extsb r7,r4
	ctx.r7.s64 = ctx.r4.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r5,r8
	ctx.current_instruction = 0x880862E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwzx r9,r4,r8
	ctx.current_instruction = 0x880862EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r14,r9,r14
	ctx.r14.u64 = ctx.r9.u64 + ctx.r14.u64;
loc_880862F8:
	// add r8,r25,r23
	ctx.r8.u64 = ctx.r25.u64 + ctx.r23.u64;
	// lwz r30,20(r1)
	ctx.current_instruction = 0x880862FC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// add r9,r26,r24
	ctx.r9.u64 = ctx.r26.u64 + ctx.r24.u64;
	// lwz r27,-248(r1)
	ctx.current_instruction = 0x88086304;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r17,-244(r1)
	ctx.current_instruction = 0x88086308;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// add r14,r8,r14
	ctx.r14.u64 = ctx.r8.u64 + ctx.r14.u64;
	// lwz r15,-236(r1)
	ctx.current_instruction = 0x88086310;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r5,-240(r1)
	ctx.current_instruction = 0x88086318;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// lwz r29,-232(r1)
	ctx.current_instruction = 0x8808631C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
loc_88086320:
	// cmpw cr6,r3,r15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x88086338
	if (!ctx.cr6.lt) goto loc_88086338;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,-236(r1)
	ctx.current_instruction = 0x8808632C;
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r3.u32);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// stw r9,-216(r1)
	ctx.current_instruction = 0x88086334;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r9.u32);
loc_88086338:
	// cmpw cr6,r14,r15
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x88086350
	if (!ctx.cr6.lt) goto loc_88086350;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r14,-236(r1)
	ctx.current_instruction = 0x88086344;
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r14.u32);
	// mr r15,r14
	ctx.r15.u64 = ctx.r14.u64;
	// stw r9,-216(r1)
	ctx.current_instruction = 0x8808634C;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r9.u32);
loc_88086350:
	// lis r9,-21846
	ctx.r9.s64 = -1431699456;
	// lwz r14,724(r30)
	ctx.current_instruction = 0x88086354;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r30.u32 + 724);
	// li r24,0
	ctx.r24.s64 = 0;
	// ori r9,r9,43691
	ctx.r9.u64 = ctx.r9.u64 | 43691;
	// stw r24,-228(r1)
	ctx.current_instruction = 0x88086360;
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r24.u32);
	// mulhwu r8,r14,r9
	ctx.r8.u64 = (uint64_t(ctx.r14.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// stw r14,-200(r1)
	ctx.current_instruction = 0x88086368;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r14.u32);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf. r8,r7,r14
	ctx.r8.u64 = ctx.r14.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r8,-172(r1)
	ctx.current_instruction = 0x8808637C;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r8.u32);
	// bne 0x880866d0
	if (!ctx.cr0.eq) goto loc_880866D0;
	// lwz r16,720(r30)
	ctx.current_instruction = 0x88086384;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// mulhwu r8,r16,r9
	ctx.r8.u64 = (uint64_t(ctx.r16.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf. r26,r7,r16
	ctx.r26.u64 = ctx.r16.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r26,-220(r1)
	ctx.current_instruction = 0x8808639C;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r26.u32);
	// beq 0x880866d0
	if (ctx.cr0.eq) goto loc_880866D0;
	// clrlwi r3,r16,31
	ctx.r3.u64 = ctx.r16.u32 & 0x1;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x88086a64
	if (!ctx.cr6.gt) goto loc_88086A64;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// addi r4,r9,13320
	ctx.r4.s64 = ctx.r9.s64 + 13320;
loc_880863BC:
	// li r21,0
	ctx.r21.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x880866c0
	if (!ctx.cr6.lt) goto loc_880866C0;
	// subf r9,r3,r16
	ctx.r9.u64 = ctx.r16.u64 - ctx.r3.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x880865b0
	if (ctx.cr6.lt) goto loc_880865B0;
	// lwz r9,20(r1)
	ctx.current_instruction = 0x880863F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r17,r16,-2
	ctx.r17.s64 = ctx.r16.s64 + -2;
	// lwz r5,720(r9)
	ctx.current_instruction = 0x88086400;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 720);
loc_88086404:
	// mullw r9,r5,r18
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r18.s32);
	// std r3,-192(r1)
	ctx.current_instruction = 0x88086408;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r6,r5,r9
	ctx.r6.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lbzx r29,r9,r11
	ctx.current_instruction = 0x88086414;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r28,r7,r9
	ctx.current_instruction = 0x88086418;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r27,r9,r10
	ctx.current_instruction = 0x8808641C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r23,r29
	ctx.r23.s64 = ctx.r29.s8;
	// lbzx r30,r8,r9
	ctx.current_instruction = 0x88086424;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lbzx r29,r6,r11
	ctx.current_instruction = 0x8808642C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// extsb r24,r27
	ctx.r24.s64 = ctx.r27.s8;
	// lbzx r27,r7,r6
	ctx.current_instruction = 0x88086434;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// extsb r25,r29
	ctx.r25.s64 = ctx.r29.s8;
	// lbzx r15,r6,r10
	ctx.current_instruction = 0x88086440;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// lbzx r26,r8,r6
	ctx.current_instruction = 0x88086444;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lbzx r29,r9,r11
	ctx.current_instruction = 0x8808644C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// add r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 + ctx.r23.u64;
	// lbzx r14,r8,r9
	ctx.current_instruction = 0x88086454;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// extsb r26,r26
	ctx.r26.s64 = ctx.r26.s8;
	// lbzx r3,r6,r11
	ctx.current_instruction = 0x8808645C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// stb r29,-255(r1)
	ctx.current_instruction = 0x88086460;
	REX_STORE_U8(ctx.r1.u32 + -255, ctx.r29.u8);
	// extsb r29,r28
	ctx.r29.s64 = ctx.r28.s8;
	// lbzx r28,r7,r9
	ctx.current_instruction = 0x88086468;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r23,r7,r6
	ctx.current_instruction = 0x8808646C;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// add r29,r29,r24
	ctx.r29.u64 = ctx.r29.u64 + ctx.r24.u64;
	// stb r28,-254(r1)
	ctx.current_instruction = 0x88086474;
	REX_STORE_U8(ctx.r1.u32 + -254, ctx.r28.u8);
	// extsb r28,r27
	ctx.r28.s64 = ctx.r27.s8;
	// lbzx r27,r9,r10
	ctx.current_instruction = 0x8808647C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stb r27,-253(r1)
	ctx.current_instruction = 0x88086484;
	REX_STORE_U8(ctx.r1.u32 + -253, ctx.r27.u8);
	// extsb r27,r15
	ctx.r27.s64 = ctx.r15.s8;
	// lbzx r15,r8,r6
	ctx.current_instruction = 0x8808648C;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// lbzx r6,r6,r10
	ctx.current_instruction = 0x88086490;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// add r24,r28,r27
	ctx.r24.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lbzx r28,r8,r9
	ctx.current_instruction = 0x88086498;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// extsb r27,r23
	ctx.r27.s64 = ctx.r23.s8;
	// stb r6,-256(r1)
	ctx.current_instruction = 0x880864A0;
	REX_STORE_U8(ctx.r1.u32 + -256, ctx.r6.u8);
	// add r6,r26,r25
	ctx.r6.u64 = ctx.r26.u64 + ctx.r25.u64;
	// lbzx r26,r7,r9
	ctx.current_instruction = 0x880864A8;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// extsb r25,r3
	ctx.r25.s64 = ctx.r3.s8;
	// lbz r23,-256(r1)
	ctx.current_instruction = 0x880864B0;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r1.u32 + -256);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// stb r28,-256(r1)
	ctx.current_instruction = 0x880864B8;
	REX_STORE_U8(ctx.r1.u32 + -256, ctx.r28.u8);
	// extsb r28,r15
	ctx.r28.s64 = ctx.r15.s8;
	// stb r26,-252(r1)
	ctx.current_instruction = 0x880864C0;
	REX_STORE_U8(ctx.r1.u32 + -252, ctx.r26.u8);
	// extsb r26,r23
	ctx.r26.s64 = ctx.r23.s8;
	// add r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 + ctx.r25.u64;
	// lbzx r3,r9,r11
	ctx.current_instruction = 0x880864CC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// add r30,r24,r29
	ctx.r30.u64 = ctx.r24.u64 + ctx.r29.u64;
	// lbzx r23,r9,r10
	ctx.current_instruction = 0x880864D4;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r29,r27,r26
	ctx.r29.u64 = ctx.r27.u64 + ctx.r26.u64;
	// lbz r15,-255(r1)
	ctx.current_instruction = 0x880864DC;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + -255);
	// add r26,r28,r6
	ctx.r26.u64 = ctx.r28.u64 + ctx.r6.u64;
	// extsb r6,r14
	ctx.r6.s64 = ctx.r14.s8;
	// lbz r14,-256(r1)
	ctx.current_instruction = 0x880864E8;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + -256);
	// add r27,r29,r30
	ctx.r27.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stb r23,-255(r1)
	ctx.current_instruction = 0x880864F4;
	REX_STORE_U8(ctx.r1.u32 + -255, ctx.r23.u8);
	// extsb r28,r15
	ctx.r28.s64 = ctx.r15.s8;
	// lbzx r25,r8,r9
	ctx.current_instruction = 0x880864FC;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// extsb r29,r3
	ctx.r29.s64 = ctx.r3.s8;
	// lbzx r24,r9,r11
	ctx.current_instruction = 0x88086504;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r30,r14
	ctx.r30.s64 = ctx.r14.s8;
	// lbzx r15,r7,r9
	ctx.current_instruction = 0x8808650C;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// lbzx r14,r9,r10
	ctx.current_instruction = 0x88086514;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r29,r26,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r30,r6
	ctx.r9.u64 = ctx.r30.u64 + ctx.r6.u64;
	// lbz r6,-254(r1)
	ctx.current_instruction = 0x88086524;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + -254);
	// rlwinm r26,r27,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r27,r25
	ctx.r27.s64 = ctx.r25.s8;
	// extsb r25,r6
	ctx.r25.s64 = ctx.r6.s8;
	// lbz r6,-253(r1)
	ctx.current_instruction = 0x88086534;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + -253);
	// lwzx r28,r29,r4
	ctx.current_instruction = 0x88086538;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// extsb r23,r24
	ctx.r23.s64 = ctx.r24.s8;
	// extsb r24,r6
	ctx.r24.s64 = ctx.r6.s8;
	// lwzx r29,r26,r4
	ctx.current_instruction = 0x88086544;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r4.u32);
	// lbz r6,-252(r1)
	ctx.current_instruction = 0x88086548;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + -252);
	// add r27,r27,r23
	ctx.r27.u64 = ctx.r27.u64 + ctx.r23.u64;
	// add r21,r29,r21
	ctx.r21.u64 = ctx.r29.u64 + ctx.r21.u64;
	// ld r3,-192(r1)
	ctx.current_instruction = 0x88086554;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// extsb r30,r6
	ctx.r30.s64 = ctx.r6.s8;
	// lbz r6,-255(r1)
	ctx.current_instruction = 0x8808655C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + -255);
	// add r27,r27,r9
	ctx.r27.u64 = ctx.r27.u64 + ctx.r9.u64;
	// extsb r26,r6
	ctx.r26.s64 = ctx.r6.s8;
	// add r6,r25,r24
	ctx.r6.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r29,r27,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r30,r6
	ctx.r9.u64 = ctx.r30.u64 + ctx.r6.u64;
	// extsb r6,r15
	ctx.r6.s64 = ctx.r15.s8;
	// extsb r30,r14
	ctx.r30.s64 = ctx.r14.s8;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// add r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 + ctx.r30.u64;
	// lwzx r6,r29,r4
	ctx.current_instruction = 0x88086588;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// add r22,r28,r22
	ctx.r22.u64 = ctx.r28.u64 + ctx.r22.u64;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// cmpw cr6,r31,r17
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r17.s32, ctx.xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r20,r6,r20
	ctx.r20.u64 = ctx.r6.u64 + ctx.r20.u64;
	// lwzx r9,r9,r4
	ctx.current_instruction = 0x880865A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// add r19,r9,r19
	ctx.r19.u64 = ctx.r9.u64 + ctx.r19.u64;
	// blt cr6,0x88086404
	if (ctx.cr6.lt) goto loc_88086404;
	// lwz r14,-200(r1)
	ctx.current_instruction = 0x880865AC;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
loc_880865B0:
	// cmpw cr6,r31,r16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88086684
	if (!ctx.cr6.lt) goto loc_88086684;
	// lwz r9,20(r1)
	ctx.current_instruction = 0x880865B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r27,-248(r1)
	ctx.current_instruction = 0x880865C4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r26,-244(r1)
	ctx.current_instruction = 0x880865C8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// lwz r6,720(r9)
	ctx.current_instruction = 0x880865CC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 720);
	// mullw r9,r6,r18
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r18.s32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lbzx r5,r7,r9
	ctx.current_instruction = 0x880865D8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r30,r9,r11
	ctx.current_instruction = 0x880865DC;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r31,r5
	ctx.r31.s64 = ctx.r5.s8;
	// lbzx r5,r9,r10
	ctx.current_instruction = 0x880865E4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r28,r8,r9
	ctx.current_instruction = 0x880865E8;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// extsb r29,r30
	ctx.r29.s64 = ctx.r30.s8;
	// extsb r30,r5
	ctx.r30.s64 = ctx.r5.s8;
	// extsb r5,r28
	ctx.r5.s64 = ctx.r28.s8;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// lbzx r29,r8,r9
	ctx.current_instruction = 0x88086604;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbzx r25,r9,r11
	ctx.current_instruction = 0x88086608;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r30,r7,r9
	ctx.current_instruction = 0x8808660C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// extsb r28,r29
	ctx.r28.s64 = ctx.r29.s8;
	// lbzx r24,r9,r10
	ctx.current_instruction = 0x88086614;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// extsb r6,r25
	ctx.r6.s64 = ctx.r25.s8;
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// add r6,r28,r6
	ctx.r6.u64 = ctx.r28.u64 + ctx.r6.u64;
	// extsb r29,r24
	ctx.r29.s64 = ctx.r24.s8;
	// lbzx r28,r8,r9
	ctx.current_instruction = 0x8808662C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// add r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lbzx r7,r7,r9
	ctx.current_instruction = 0x88086634;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbzx r5,r9,r11
	ctx.current_instruction = 0x8808663C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r6,r28
	ctx.r6.s64 = ctx.r28.s8;
	// lbzx r9,r9,r10
	ctx.current_instruction = 0x88086644;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// extsb r30,r5
	ctx.r30.s64 = ctx.r5.s8;
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r9,r29,r31
	ctx.r9.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r6,r4
	ctx.current_instruction = 0x88086670;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// lwzx r9,r5,r4
	ctx.current_instruction = 0x88086674;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// add r6,r8,r27
	ctx.r6.u64 = ctx.r8.u64 + ctx.r27.u64;
	// add r7,r9,r26
	ctx.r7.u64 = ctx.r9.u64 + ctx.r26.u64;
	// b 0x8808668c
	goto loc_8808668C;
loc_88086684:
	// lwz r6,-248(r1)
	ctx.current_instruction = 0x88086684;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r7,-244(r1)
	ctx.current_instruction = 0x88086688;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
loc_8808668C:
	// add r8,r19,r21
	ctx.r8.u64 = ctx.r19.u64 + ctx.r21.u64;
	// lwz r30,20(r1)
	ctx.current_instruction = 0x88086690;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// add r9,r20,r22
	ctx.r9.u64 = ctx.r20.u64 + ctx.r22.u64;
	// lwz r15,-236(r1)
	ctx.current_instruction = 0x88086698;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r5,-240(r1)
	ctx.current_instruction = 0x880866A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r29,-232(r1)
	ctx.current_instruction = 0x880866A8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r24,-228(r1)
	ctx.current_instruction = 0x880866AC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// rotlwi r17,r8,0
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,-244(r1)
	ctx.current_instruction = 0x880866B4;
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r8.u32);
	// rotlwi r27,r7,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,-248(r1)
	ctx.current_instruction = 0x880866BC;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r7.u32);
loc_880866C0:
	// addi r18,r18,3
	ctx.r18.s64 = ctx.r18.s64 + 3;
	// cmpw cr6,r18,r14
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x880863bc
	if (ctx.cr6.lt) goto loc_880863BC;
	// b 0x88086a60
	goto loc_88086A60;
loc_880866D0:
	// lwz r16,720(r30)
	ctx.current_instruction = 0x880866D0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// clrlwi r24,r14,31
	ctx.r24.u64 = ctx.r14.u32 & 0x1;
	// mulhwu r9,r16,r9
	ctx.r9.u64 = (uint64_t(ctx.r16.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// stw r24,-228(r1)
	ctx.current_instruction = 0x880866DC;
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r24.u32);
	// stw r24,-224(r1)
	ctx.current_instruction = 0x880866E0;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r24.u32);
	// stw r16,-196(r1)
	ctx.current_instruction = 0x880866E4;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r16.u32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r24,r14
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r14.s32, ctx.xer);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r26,r7,r16
	ctx.r26.u64 = ctx.r16.u64 - ctx.r7.u64;
	// stw r26,-220(r1)
	ctx.current_instruction = 0x88086700;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r26.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r26,-192(r1)
	ctx.current_instruction = 0x88086708;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r26.u32);
	// bge cr6,0x88086a64
	if (!ctx.cr6.lt) goto loc_88086A64;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// addi r7,r9,13320
	ctx.r7.s64 = ctx.r9.s64 + 13320;
loc_88086718:
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r25,-212(r1)
	ctx.current_instruction = 0x88086724;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r25.u32);
	// stw r28,-204(r1)
	ctx.current_instruction = 0x88086728;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r28.u32);
	// li r18,0
	ctx.r18.s64 = 0;
	// stw r26,-208(r1)
	ctx.current_instruction = 0x88086730;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r26.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88086a50
	if (!ctx.cr6.lt) goto loc_88086A50;
	// subf r9,r3,r16
	ctx.r9.u64 = ctx.r16.u64 - ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// divw r9,r4,r5
	ctx.r9.u64 = uint32_t((ctx.r5.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r4.s32 / ctx.r5.s32 : 0);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x8808693c
	if (ctx.cr6.lt) goto loc_8808693C;
	// lwz r9,20(r1)
	ctx.current_instruction = 0x88086758;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r31,r10,2
	ctx.r31.s64 = ctx.r10.s64 + 2;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// lwz r29,720(r9)
	ctx.current_instruction = 0x8808676C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 720);
loc_88086770:
	// mullw r9,r29,r8
	ctx.r9.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r8.s32);
	// std r29,-168(r1)
	ctx.current_instruction = 0x88086774;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r29.u64);
	// lwz r3,-212(r1)
	ctx.current_instruction = 0x88086778;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// lwz r17,-208(r1)
	ctx.current_instruction = 0x8808677C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r8,r29,r9
	ctx.r8.u64 = ctx.r29.u64 + ctx.r9.u64;
	// lbzx r28,r4,r9
	ctx.current_instruction = 0x88086788;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// lbzx r27,r5,r9
	ctx.current_instruction = 0x8808678C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// extsb r26,r28
	ctx.r26.s64 = ctx.r28.s8;
	// lbzx r24,r4,r8
	ctx.current_instruction = 0x88086794;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// lbzx r23,r5,r8
	ctx.current_instruction = 0x88086798;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// extsb r25,r27
	ctx.r25.s64 = ctx.r27.s8;
	// extsb r28,r24
	ctx.r28.s64 = ctx.r24.s8;
	// lbzx r24,r30,r8
	ctx.current_instruction = 0x880867A4;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// add r20,r26,r25
	ctx.r20.u64 = ctx.r26.u64 + ctx.r25.u64;
	// lbzx r16,r31,r8
	ctx.current_instruction = 0x880867AC;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// extsb r27,r23
	ctx.r27.s64 = ctx.r23.s8;
	// lbzx r25,r8,r10
	ctx.current_instruction = 0x880867B4;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// lbzx r21,r8,r11
	ctx.current_instruction = 0x880867B8;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r8,r9,3
	ctx.r8.s64 = ctx.r9.s64 + 3;
	// add r22,r28,r27
	ctx.r22.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lbzx r26,r9,r11
	ctx.current_instruction = 0x880867C4;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r28,r30,r9
	ctx.current_instruction = 0x880867C8;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// extsb r21,r21
	ctx.r21.s64 = ctx.r21.s8;
	// lbzx r27,r31,r9
	ctx.current_instruction = 0x880867D0;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r19,r26
	ctx.r19.s64 = ctx.r26.s8;
	// extsb r26,r28
	ctx.r26.s64 = ctx.r28.s8;
	// lbzx r15,r9,r10
	ctx.current_instruction = 0x880867DC;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r23,r27
	ctx.r23.s64 = ctx.r27.s8;
	// lbzx r28,r5,r8
	ctx.current_instruction = 0x880867E4;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// lbzx r27,r8,r11
	ctx.current_instruction = 0x880867E8;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// add r9,r29,r8
	ctx.r9.u64 = ctx.r29.u64 + ctx.r8.u64;
	// lbzx r14,r4,r8
	ctx.current_instruction = 0x880867F0;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// stb r28,-252(r1)
	ctx.current_instruction = 0x880867F4;
	REX_STORE_U8(ctx.r1.u32 + -252, ctx.r28.u8);
	// extsb r28,r24
	ctx.r28.s64 = ctx.r24.s8;
	// stb r27,-253(r1)
	ctx.current_instruction = 0x880867FC;
	REX_STORE_U8(ctx.r1.u32 + -253, ctx.r27.u8);
	// extsb r27,r16
	ctx.r27.s64 = ctx.r16.s8;
	// lbzx r24,r30,r8
	ctx.current_instruction = 0x88086804;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// lbzx r16,r8,r10
	ctx.current_instruction = 0x88086808;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// add r27,r28,r27
	ctx.r27.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lbzx r8,r31,r8
	ctx.current_instruction = 0x88086810;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lbzx r28,r9,r11
	ctx.current_instruction = 0x88086814;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r29,-252(r1)
	ctx.current_instruction = 0x88086818;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r1.u32 + -252);
	// stb r24,-255(r1)
	ctx.current_instruction = 0x8808681C;
	REX_STORE_U8(ctx.r1.u32 + -255, ctx.r24.u8);
	// extsb r24,r29
	ctx.r24.s64 = ctx.r29.s8;
	// stb r8,-254(r1)
	ctx.current_instruction = 0x88086824;
	REX_STORE_U8(ctx.r1.u32 + -254, ctx.r8.u8);
	// add r8,r20,r19
	ctx.r8.u64 = ctx.r20.u64 + ctx.r19.u64;
	// lbzx r19,r4,r9
	ctx.current_instruction = 0x8808682C;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// add r20,r22,r21
	ctx.r20.u64 = ctx.r22.u64 + ctx.r21.u64;
	// stb r28,-252(r1)
	ctx.current_instruction = 0x88086834;
	REX_STORE_U8(ctx.r1.u32 + -252, ctx.r28.u8);
	// add r22,r26,r23
	ctx.r22.u64 = ctx.r26.u64 + ctx.r23.u64;
	// extsb r28,r19
	ctx.r28.s64 = ctx.r19.s8;
	// lbz r19,-252(r1)
	ctx.current_instruction = 0x88086840;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r1.u32 + -252);
	// extsb r21,r15
	ctx.r21.s64 = ctx.r15.s8;
	// lbzx r26,r31,r9
	ctx.current_instruction = 0x88086848;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r29,r5,r9
	ctx.current_instruction = 0x8808684C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// extsb r23,r25
	ctx.r23.s64 = ctx.r25.s8;
	// lbzx r15,r30,r9
	ctx.current_instruction = 0x88086854;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// extsb r25,r14
	ctx.r25.s64 = ctx.r14.s8;
	// lbzx r9,r9,r10
	ctx.current_instruction = 0x8808685C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r27,r27,r23
	ctx.r27.u64 = ctx.r27.u64 + ctx.r23.u64;
	// lbz r14,-253(r1)
	ctx.current_instruction = 0x88086864;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + -253);
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// stb r26,-256(r1)
	ctx.current_instruction = 0x8808686C;
	REX_STORE_U8(ctx.r1.u32 + -256, ctx.r26.u8);
	// extsb r26,r29
	ctx.r26.s64 = ctx.r29.s8;
	// extsb r24,r14
	ctx.r24.s64 = ctx.r14.s8;
	// lbz r14,-254(r1)
	ctx.current_instruction = 0x88086878;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + -254);
	// stb r9,-251(r1)
	ctx.current_instruction = 0x8808687C;
	REX_STORE_U8(ctx.r1.u32 + -251, ctx.r9.u8);
	// add r9,r22,r21
	ctx.r9.u64 = ctx.r22.u64 + ctx.r21.u64;
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// add r9,r27,r9
	ctx.r9.u64 = ctx.r27.u64 + ctx.r9.u64;
	// extsb r26,r19
	ctx.r26.s64 = ctx.r19.s8;
	// add r27,r20,r8
	ctx.r27.u64 = ctx.r20.u64 + ctx.r8.u64;
	// add r8,r25,r24
	ctx.r8.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r28,r8
	ctx.r28.u64 = ctx.r28.u64 + ctx.r8.u64;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r8,r14
	ctx.r8.s64 = ctx.r14.s8;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r9,r7
	ctx.current_instruction = 0x880868B0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lbz r14,-255(r1)
	ctx.current_instruction = 0x880868B4;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + -255);
	// add r25,r25,r3
	ctx.r25.u64 = ctx.r25.u64 + ctx.r3.u64;
	// lbz r3,-256(r1)
	ctx.current_instruction = 0x880868BC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + -256);
	// extsb r26,r16
	ctx.r26.s64 = ctx.r16.s8;
	// extsb r9,r14
	ctx.r9.s64 = ctx.r14.s8;
	// lwzx r24,r27,r7
	ctx.current_instruction = 0x880868C8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r7.u32);
	// lwzx r28,r28,r7
	ctx.current_instruction = 0x880868CC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// extsb r27,r3
	ctx.r27.s64 = ctx.r3.s8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r3,-251(r1)
	ctx.current_instruction = 0x880868D8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + -251);
	// extsb r8,r15
	ctx.r8.s64 = ctx.r15.s8;
	// lwz r16,-196(r1)
	ctx.current_instruction = 0x880868E0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// ld r29,-168(r1)
	ctx.current_instruction = 0x880868E8;
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// add r26,r28,r17
	ctx.r26.u64 = ctx.r28.u64 + ctx.r17.u64;
	// stw r25,-212(r1)
	ctx.current_instruction = 0x880868F0;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r25.u32);
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// extsb r28,r3
	ctx.r28.s64 = ctx.r3.s8;
	// lwz r3,-204(r1)
	ctx.current_instruction = 0x880868FC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// addi r6,r6,6
	ctx.r6.s64 = ctx.r6.s64 + 6;
	// stw r26,-208(r1)
	ctx.current_instruction = 0x88086904;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r26.u32);
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r18,r24,r18
	ctx.r18.u64 = ctx.r24.u64 + ctx.r18.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r16,-3
	ctx.r9.s64 = ctx.r16.s64 + -3;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// lwzx r9,r8,r7
	ctx.current_instruction = 0x88086920;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r8,-224(r1)
	ctx.current_instruction = 0x88086924;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// add r28,r9,r3
	ctx.r28.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r28,-204(r1)
	ctx.current_instruction = 0x8808692C;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r28.u32);
	// blt cr6,0x88086770
	if (ctx.cr6.lt) goto loc_88086770;
	// lwz r14,-200(r1)
	ctx.current_instruction = 0x88086934;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r3,-192(r1)
	ctx.current_instruction = 0x88086938;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
loc_8808693C:
	// cmpw cr6,r6,r16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88086a14
	if (!ctx.cr6.lt) goto loc_88086A14;
	// lwz r9,20(r1)
	ctx.current_instruction = 0x88086944;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// lwz r21,-248(r1)
	ctx.current_instruction = 0x88086950;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// lwz r20,-244(r1)
	ctx.current_instruction = 0x88086958;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// lwz r30,720(r9)
	ctx.current_instruction = 0x8808695C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 720);
	// mullw r9,r30,r8
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// lbzx r29,r4,r9
	ctx.current_instruction = 0x8808696C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// lbzx r24,r5,r9
	ctx.current_instruction = 0x88086970;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// extsb r23,r29
	ctx.r23.s64 = ctx.r29.s8;
	// lbzx r27,r6,r9
	ctx.current_instruction = 0x88086978;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// lbzx r29,r31,r9
	ctx.current_instruction = 0x8808697C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r22,r24
	ctx.r22.s64 = ctx.r24.s8;
	// lbzx r19,r9,r11
	ctx.current_instruction = 0x88086984;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
	// lbzx r17,r9,r10
	ctx.current_instruction = 0x8808698C;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// add r30,r23,r22
	ctx.r30.u64 = ctx.r23.u64 + ctx.r22.u64;
	// extsb r24,r19
	ctx.r24.s64 = ctx.r19.s8;
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// lbzx r27,r5,r9
	ctx.current_instruction = 0x880869A4;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// add r5,r30,r24
	ctx.r5.u64 = ctx.r30.u64 + ctx.r24.u64;
	// lbzx r4,r4,r9
	ctx.current_instruction = 0x880869AC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// lbzx r6,r6,r9
	ctx.current_instruction = 0x880869B0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// lbzx r30,r31,r9
	ctx.current_instruction = 0x880869B4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// lbzx r24,r9,r11
	ctx.current_instruction = 0x880869BC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r31,r27
	ctx.r31.s64 = ctx.r27.s8;
	// lbzx r23,r9,r10
	ctx.current_instruction = 0x880869C4;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// extsb r6,r30
	ctx.r6.s64 = ctx.r30.s8;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// extsb r30,r24
	ctx.r30.s64 = ctx.r24.s8;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// extsb r27,r17
	ctx.r27.s64 = ctx.r17.s8;
	// extsb r31,r23
	ctx.r31.s64 = ctx.r23.s8;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// add r9,r29,r27
	ctx.r9.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r7
	ctx.current_instruction = 0x88086A00;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r9,r5,r7
	ctx.current_instruction = 0x88086A04;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// add r4,r6,r21
	ctx.r4.u64 = ctx.r6.u64 + ctx.r21.u64;
	// add r5,r9,r20
	ctx.r5.u64 = ctx.r9.u64 + ctx.r20.u64;
	// b 0x88086a1c
	goto loc_88086A1C;
loc_88086A14:
	// lwz r4,-248(r1)
	ctx.current_instruction = 0x88086A14;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r5,-244(r1)
	ctx.current_instruction = 0x88086A18;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
loc_88086A1C:
	// add r6,r28,r25
	ctx.r6.u64 = ctx.r28.u64 + ctx.r25.u64;
	// lwz r30,20(r1)
	ctx.current_instruction = 0x88086A20;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// add r9,r26,r18
	ctx.r9.u64 = ctx.r26.u64 + ctx.r18.u64;
	// lwz r15,-236(r1)
	ctx.current_instruction = 0x88086A28;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwz r5,-240(r1)
	ctx.current_instruction = 0x88086A30;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r29,-232(r1)
	ctx.current_instruction = 0x88086A38;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r24,-228(r1)
	ctx.current_instruction = 0x88086A3C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// rotlwi r17,r6,0
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,-244(r1)
	ctx.current_instruction = 0x88086A44;
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r6.u32);
	// rotlwi r27,r4,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,-248(r1)
	ctx.current_instruction = 0x88086A4C;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
loc_88086A50:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stw r8,-224(r1)
	ctx.current_instruction = 0x88086A54;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r8.u32);
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x88086718
	if (ctx.cr6.lt) goto loc_88086718;
loc_88086A60:
	// lwz r26,-220(r1)
	ctx.current_instruction = 0x88086A60;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
loc_88086A64:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x88086aec
	if (!ctx.cr6.gt) goto loc_88086AEC;
loc_88086A70:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x88086aa4
	if (!ctx.cr6.gt) goto loc_88086AA4;
loc_88086A7C:
	// mullw r8,r16,r9
	ctx.r8.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r6,r8,r11
	ctx.current_instruction = 0x88086A84;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x88086aa0
	if (!ctx.cr6.eq) goto loc_88086AA0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r14
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x88086a7c
	if (ctx.cr6.lt) goto loc_88086A7C;
	// b 0x88086aa4
	goto loc_88086AA4;
loc_88086AA0:
	// add r27,r14,r27
	ctx.r27.u64 = ctx.r14.u64 + ctx.r27.u64;
loc_88086AA4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x88086ad8
	if (!ctx.cr6.gt) goto loc_88086AD8;
loc_88086AB0:
	// mullw r8,r16,r9
	ctx.r8.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r6,r8,r10
	ctx.current_instruction = 0x88086AB8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x88086ad4
	if (!ctx.cr6.eq) goto loc_88086AD4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r14
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x88086ab0
	if (ctx.cr6.lt) goto loc_88086AB0;
	// b 0x88086ad8
	goto loc_88086AD8;
loc_88086AD4:
	// add r17,r14,r17
	ctx.r17.u64 = ctx.r14.u64 + ctx.r17.u64;
loc_88086AD8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x88086a70
	if (ctx.cr6.lt) goto loc_88086A70;
loc_88086AEC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x88086b54
	if (ctx.cr6.eq) goto loc_88086B54;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88086b24
	if (!ctx.cr6.lt) goto loc_88086B24;
loc_88086B00:
	// lbzx r8,r9,r11
	ctx.current_instruction = 0x88086B00;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x88086b1c
	if (!ctx.cr6.eq) goto loc_88086B1C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x88086b00
	if (ctx.cr6.lt) goto loc_88086B00;
	// b 0x88086b24
	goto loc_88086B24;
loc_88086B1C:
	// subf r9,r3,r16
	ctx.r9.u64 = ctx.r16.u64 - ctx.r3.u64;
	// add r27,r9,r27
	ctx.r27.u64 = ctx.r9.u64 + ctx.r27.u64;
loc_88086B24:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88086b54
	if (!ctx.cr6.lt) goto loc_88086B54;
loc_88086B30:
	// lbzx r8,r9,r10
	ctx.current_instruction = 0x88086B30;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x88086b4c
	if (!ctx.cr6.eq) goto loc_88086B4C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x88086b30
	if (ctx.cr6.lt) goto loc_88086B30;
	// b 0x88086b54
	goto loc_88086B54;
loc_88086B4C:
	// subf r9,r3,r16
	ctx.r9.u64 = ctx.r16.u64 - ctx.r3.u64;
	// add r17,r9,r17
	ctx.r17.u64 = ctx.r9.u64 + ctx.r17.u64;
loc_88086B54:
	// cmpw cr6,r27,r15
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x88086b68
	if (!ctx.cr6.lt) goto loc_88086B68;
	// mr r15,r27
	ctx.r15.u64 = ctx.r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x88086b6c
	goto loc_88086B6C;
loc_88086B68:
	// lwz r4,-216(r1)
	ctx.current_instruction = 0x88086B68;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
loc_88086B6C:
	// cmpw cr6,r17,r15
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x88086b7c
	if (!ctx.cr6.lt) goto loc_88086B7C;
	// mr r15,r17
	ctx.r15.u64 = ctx.r17.u64;
	// li r4,4
	ctx.r4.s64 = 4;
loc_88086B7C:
	// lwz r9,-184(r1)
	ctx.current_instruction = 0x88086B7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// add r6,r14,r9
	ctx.r6.u64 = ctx.r14.u64 + ctx.r9.u64;
	// ble cr6,0x88086bd0
	if (!ctx.cr6.gt) goto loc_88086BD0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r14
	ctx.ctr.u64 = ctx.r14.u64;
loc_88086B94:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x88086bc8
	if (!ctx.cr6.gt) goto loc_88086BC8;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
loc_88086BA4:
	// lbzx r8,r8,r11
	ctx.current_instruction = 0x88086BA4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x88086bc4
	if (!ctx.cr6.eq) goto loc_88086BC4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r16.s32, ctx.xer);
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// blt cr6,0x88086ba4
	if (ctx.cr6.lt) goto loc_88086BA4;
	// b 0x88086bc8
	goto loc_88086BC8;
loc_88086BC4:
	// add r6,r16,r6
	ctx.r6.u64 = ctx.r16.u64 + ctx.r6.u64;
loc_88086BC8:
	// add r7,r7,r16
	ctx.r7.u64 = ctx.r7.u64 + ctx.r16.u64;
	// bdnz 0x88086b94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88086B94;
loc_88086BD0:
	// cmpw cr6,r6,r15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x88086be0
	if (!ctx.cr6.lt) goto loc_88086BE0;
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// li r4,5
	ctx.r4.s64 = 5;
loc_88086BE0:
	// lwz r9,-180(r1)
	ctx.current_instruction = 0x88086BE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// add r6,r16,r9
	ctx.r6.u64 = ctx.r16.u64 + ctx.r9.u64;
	// ble cr6,0x88086c34
	if (!ctx.cr6.gt) goto loc_88086C34;
loc_88086BF4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x88086c28
	if (!ctx.cr6.gt) goto loc_88086C28;
loc_88086C00:
	// mullw r8,r16,r9
	ctx.r8.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r3,r8,r11
	ctx.current_instruction = 0x88086C08;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88086c24
	if (!ctx.cr6.eq) goto loc_88086C24;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r14
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x88086c00
	if (ctx.cr6.lt) goto loc_88086C00;
	// b 0x88086c28
	goto loc_88086C28;
loc_88086C24:
	// add r6,r14,r6
	ctx.r6.u64 = ctx.r14.u64 + ctx.r6.u64;
loc_88086C28:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x88086bf4
	if (ctx.cr6.lt) goto loc_88086BF4;
loc_88086C34:
	// cmpw cr6,r6,r15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x88086c40
	if (!ctx.cr6.lt) goto loc_88086C40;
	// li r4,6
	ctx.r4.s64 = 6;
loc_88086C40:
	// lwz r11,2260(r30)
	ctx.current_instruction = 0x88086C40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88086c54
	if (ctx.cr6.eq) goto loc_88086C54;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x88086c68
	goto loc_88086C68;
loc_88086C54:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88086c68
	if (ctx.cr6.eq) goto loc_88086C68;
	// lwz r11,-176(r1)
	ctx.current_instruction = 0x88086C5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// or r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_88086C68:
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// lwz r9,6796(r30)
	ctx.current_instruction = 0x88086C6C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 6796);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// lwzx r8,r8,r29
	ctx.current_instruction = 0x88086C7C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// bgt cr6,0x8808716c
	if (ctx.cr6.gt) goto loc_8808716C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88086cac
	if (ctx.cr6.eq) goto loc_88086CAC;
	// bdz 0x88086ca8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88086CA8;
	// bdz 0x88086e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88086E64;
	// bdz 0x88086e60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88086E60;
	// bdz 0x88086d98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88086D98;
	// b 0x88086dfc
	goto loc_88086DFC;
loc_88086CA8:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_88086CAC:
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88086cbc
	if (ctx.cr6.eq) goto loc_88086CBC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_88086CBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8808716c
	if (!ctx.cr6.lt) goto loc_8808716C;
	// subf r8,r11,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,13216
	ctx.r10.s64 = ctx.r10.s64 + 13216;
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// blt cr6,0x88086d54
	if (ctx.cr6.lt) goto loc_88086D54;
	// lwz r8,-240(r1)
	ctx.current_instruction = 0x88086CEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
	// addi r29,r9,3
	ctx.r29.s64 = ctx.r9.s64 + 3;
	// addi r28,r9,2
	ctx.r28.s64 = ctx.r9.s64 + 2;
	// addi r27,r8,-2
	ctx.r27.s64 = ctx.r8.s64 + -2;
loc_88086D00:
	// lbzx r8,r30,r11
	ctx.current_instruction = 0x88086D00;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r6,r29,r11
	ctx.current_instruction = 0x88086D04;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// lbzx r26,r28,r11
	ctx.current_instruction = 0x88086D0C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbzx r4,r11,r9
	ctx.current_instruction = 0x88086D14;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r6,r26
	ctx.r6.s64 = ctx.r26.s8;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// lwzx r8,r5,r10
	ctx.current_instruction = 0x88086D40;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwzx r6,r4,r10
	ctx.current_instruction = 0x88086D44;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 + ctx.r3.u64;
	// blt cr6,0x88086d00
	if (ctx.cr6.lt) goto loc_88086D00;
loc_88086D54:
	// lwz r8,-240(r1)
	ctx.current_instruction = 0x88086D54;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88086d88
	if (!ctx.cr6.lt) goto loc_88086D88;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x88086D64;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.current_instruction = 0x88086D68;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r10
	ctx.current_instruction = 0x88086D80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_88086D88:
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88086D98:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x8808716c
	if (!ctx.cr6.gt) goto loc_8808716C;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r14
	ctx.ctr.u64 = ctx.r14.u64;
loc_88086DA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x88086dd4
	if (!ctx.cr6.gt) goto loc_88086DD4;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_88086DB8:
	// lbzx r10,r10,r9
	ctx.current_instruction = 0x88086DB8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88086dd4
	if (!ctx.cr6.eq) goto loc_88086DD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// blt cr6,0x88086db8
	if (ctx.cr6.lt) goto loc_88086DB8;
loc_88086DD4:
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// beq cr6,0x88086dec
	if (ctx.cr6.eq) goto loc_88086DEC;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x88086dec
	if (!ctx.cr6.gt) goto loc_88086DEC;
	// add r7,r16,r7
	ctx.r7.u64 = ctx.r16.u64 + ctx.r7.u64;
loc_88086DEC:
	// add r8,r16,r8
	ctx.r8.u64 = ctx.r16.u64 + ctx.r8.u64;
	// bdnz 0x88086da8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88086DA8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88086DFC:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x8808716c
	if (!ctx.cr6.gt) goto loc_8808716C;
loc_88086E08:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x88086e34
	if (!ctx.cr6.gt) goto loc_88086E34;
loc_88086E14:
	// mullw r10,r16,r11
	ctx.r10.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r6,r10,r9
	ctx.current_instruction = 0x88086E1C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x88086e34
	if (!ctx.cr6.eq) goto loc_88086E34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x88086e14
	if (ctx.cr6.lt) goto loc_88086E14;
loc_88086E34:
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r14.s32, ctx.xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// beq cr6,0x88086e4c
	if (ctx.cr6.eq) goto loc_88086E4C;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x88086e4c
	if (!ctx.cr6.gt) goto loc_88086E4C;
	// add r7,r14,r7
	ctx.r7.u64 = ctx.r14.u64 + ctx.r7.u64;
loc_88086E4C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x88086e08
	if (ctx.cr6.lt) goto loc_88086E08;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88086E60:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_88086E64:
	// lwz r11,-172(r1)
	ctx.current_instruction = 0x88086E64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88086fa0
	if (!ctx.cr6.eq) goto loc_88086FA0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x88086fa0
	if (ctx.cr6.eq) goto loc_88086FA0;
	// clrlwi r26,r16,31
	ctx.r26.u64 = ctx.r16.u32 & 0x1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x880870c8
	if (!ctx.cr6.gt) goto loc_880870C8;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r3,20(r1)
	ctx.current_instruction = 0x88086E8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r28,r10,23356
	ctx.r28.s64 = ctx.r10.s64 + 23356;
	// addi r31,r11,12704
	ctx.r31.s64 = ctx.r11.s64 + 12704;
loc_88086E9C:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r16
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88086f90
	if (!ctx.cr6.lt) goto loc_88086F90;
	// subf r11,r26,r16
	ctx.r11.u64 = ctx.r16.u64 - ctx.r26.u64;
	// lwz r10,720(r3)
	ctx.current_instruction = 0x88086EAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88086EC4:
	// mullw r11,r10,r29
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// lbzx r6,r8,r11
	ctx.current_instruction = 0x88086ED0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbzx r5,r11,r9
	ctx.current_instruction = 0x88086ED4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r8,r11
	ctx.current_instruction = 0x88086EE8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lbzx r5,r11,r9
	ctx.current_instruction = 0x88086EF0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r25,r4
	ctx.r25.s64 = ctx.r4.s8;
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// rlwinm r5,r25,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r25,r8,r11
	ctx.current_instruction = 0x88086F04;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// add r23,r5,r4
	ctx.r23.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbzx r4,r11,r9
	ctx.current_instruction = 0x88086F0C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r11,r25
	ctx.r11.s64 = ctx.r25.s8;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r6,r5,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.current_instruction = 0x88086F38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x88086f88
	if (!ctx.cr6.eq) goto loc_88086F88;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// rlwinm r5,r11,2,27,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r5,r28
	ctx.current_instruction = 0x88086F58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	// lwzx r5,r4,r28
	ctx.current_instruction = 0x88086F5C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x88086f74
	if (!ctx.cr6.eq) goto loc_88086F74;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// b 0x88086f88
	goto loc_88086F88;
loc_88086F74:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// xori r5,r11,504
	ctx.r5.u64 = ctx.r11.u64 ^ 504;
	// lwzx r11,r5,r6
	ctx.current_instruction = 0x88086F80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_88086F88:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bdnz 0x88086ec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88086EC4;
loc_88086F90:
	// addi r29,r29,3
	ctx.r29.s64 = ctx.r29.s64 + 3;
	// cmpw cr6,r29,r14
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x88086e9c
	if (ctx.cr6.lt) goto loc_88086E9C;
	// b 0x880870c8
	goto loc_880870C8;
loc_88086FA0:
	// clrlwi r24,r14,31
	ctx.r24.u64 = ctx.r14.u32 & 0x1;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmpw cr6,r24,r14
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x880870c8
	if (!ctx.cr6.lt) goto loc_880870C8;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r3,20(r1)
	ctx.current_instruction = 0x88086FB4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r27,r10,23356
	ctx.r27.s64 = ctx.r10.s64 + 23356;
	// addi r30,r11,12704
	ctx.r30.s64 = ctx.r11.s64 + 12704;
	// li r25,3
	ctx.r25.s64 = 3;
loc_88086FC8:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r16
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x880870bc
	if (!ctx.cr6.lt) goto loc_880870BC;
	// subf r11,r26,r16
	ctx.r11.u64 = ctx.r16.u64 - ctx.r26.u64;
	// lwz r5,720(r3)
	ctx.current_instruction = 0x88086FD8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r31,r9,1
	ctx.r31.s64 = ctx.r9.s64 + 1;
	// divwu r11,r11,r25
	ctx.r11.u64 = uint32_t(ctx.r25.u32 ? ctx.r11.u32 / ctx.r25.u32 : 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88086FF4:
	// mullw r11,r5,r28
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r23,r30,4
	ctx.r23.s64 = ctx.r30.s64 + 4;
	// lbzx r10,r11,r4
	ctx.current_instruction = 0x88087000;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r8,r31,r11
	ctx.current_instruction = 0x88087004;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r6,r11,r9
	ctx.current_instruction = 0x88087008;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbzx r22,r11,r4
	ctx.current_instruction = 0x88087020;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// add r21,r10,r8
	ctx.r21.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r8,r31,r11
	ctx.current_instruction = 0x88087028;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r22,r22
	ctx.r22.s64 = ctx.r22.s8;
	// lbzx r20,r11,r9
	ctx.current_instruction = 0x88087030;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r8,r20
	ctx.r8.s64 = ctx.r20.s8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r23
	ctx.current_instruction = 0x88087064;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x880870b4
	if (!ctx.cr6.eq) goto loc_880870B4;
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// rlwinm r8,r11,2,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r27
	ctx.current_instruction = 0x88087084;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// lwzx r8,r6,r27
	ctx.current_instruction = 0x88087088;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x880870a0
	if (!ctx.cr6.eq) goto loc_880870A0;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// b 0x880870b4
	goto loc_880870B4;
loc_880870A0:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// xori r8,r11,504
	ctx.r8.u64 = ctx.r11.u64 ^ 504;
	// lwzx r11,r8,r10
	ctx.current_instruction = 0x880870AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_880870B4:
	// addi r29,r29,3
	ctx.r29.s64 = ctx.r29.s64 + 3;
	// bdnz 0x88086ff4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88086FF4;
loc_880870BC:
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r28,r14
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x88086fc8
	if (ctx.cr6.lt) goto loc_88086FC8;
loc_880870C8:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x88087124
	if (!ctx.cr6.gt) goto loc_88087124;
loc_880870D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x88087100
	if (!ctx.cr6.gt) goto loc_88087100;
loc_880870E0:
	// mullw r10,r16,r11
	ctx.r10.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r6,r10,r9
	ctx.current_instruction = 0x880870E8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x88087100
	if (!ctx.cr6.eq) goto loc_88087100;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x880870e0
	if (ctx.cr6.lt) goto loc_880870E0;
loc_88087100:
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r14.s32, ctx.xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// beq cr6,0x88087118
	if (ctx.cr6.eq) goto loc_88087118;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x88087118
	if (!ctx.cr6.gt) goto loc_88087118;
	// add r7,r14,r7
	ctx.r7.u64 = ctx.r14.u64 + ctx.r7.u64;
loc_88087118:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r26
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x880870d4
	if (ctx.cr6.lt) goto loc_880870D4;
loc_88087124:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8808716c
	if (ctx.cr6.eq) goto loc_8808716C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r16
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88087150
	if (!ctx.cr6.lt) goto loc_88087150;
loc_88087138:
	// lbzx r10,r11,r9
	ctx.current_instruction = 0x88087138;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88087150
	if (!ctx.cr6.eq) goto loc_88087150;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x88087138
	if (ctx.cr6.lt) goto loc_88087138;
loc_88087150:
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// beq cr6,0x8808716c
	if (ctx.cr6.eq) goto loc_8808716C;
	// cmpw cr6,r26,r16
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x8808716c
	if (!ctx.cr6.lt) goto loc_8808716C;
	// subf r11,r26,r16
	ctx.r11.u64 = ctx.r16.u64 - ctx.r26.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_8808716C:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CA078) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880CA078);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CA078;
	ctx.current_instruction = 0x880CA078;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14552(r3)
	ctx.current_instruction = 0x880CA07C;
	REX_STORE_U32(ctx.r3.u32 + 14552, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880CA198) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CA198;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CA198) {
			switch (rex_dispatch_address) {
				case 0x880CA1A0:
				case 0x880CA22C:
				case 0x880CA268:
				case 0x880CA2A4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CA198;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CA1A0: goto loc_880CA1A0;
		case 0x880CA22C: goto loc_880CA22C;
		case 0x880CA268: goto loc_880CA268;
		case 0x880CA2A4: goto loc_880CA2A4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x880CA1A0;
	__savegprlr_22(ctx, base);
loc_880CA1A0:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x880CA1A0;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,260(r1)
	ctx.current_instruction = 0x880CA1A4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// subf. r22,r9,r10
	ctx.r22.u64 = ctx.r10.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwz r11,14620(r31)
	ctx.current_instruction = 0x880CA1AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14620);
	// lwz r24,14628(r31)
	ctx.current_instruction = 0x880CA1B0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 14628);
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r30,14536(r31)
	ctx.current_instruction = 0x880CA1B8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 14536);
	// lwz r29,14540(r31)
	ctx.current_instruction = 0x880CA1BC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 14540);
	// lwz r27,14500(r31)
	ctx.current_instruction = 0x880CA1C0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 14500);
	// lwz r28,14544(r31)
	ctx.current_instruction = 0x880CA1C4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 14544);
	// lwz r25,14508(r31)
	ctx.current_instruction = 0x880CA1C8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 14508);
	// lwz r26,14504(r31)
	ctx.current_instruction = 0x880CA1CC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 14504);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// mullw r9,r24,r9
	ctx.r9.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r9.s32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r23,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r9.s32 >> 2;
	// add r24,r30,r10
	ctx.r24.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addze r10,r23
	temp.s64 = ctx.r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r23.u32;
	ctx.r10.s64 = temp.s64;
	// add r23,r29,r11
	ctx.r23.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r30,r27,r9
	ctx.r30.u64 = ctx.r27.u64 + ctx.r9.u64;
	// add r9,r26,r10
	ctx.r9.u64 = ctx.r26.u64 + ctx.r10.u64;
	// add r11,r25,r10
	ctx.r11.u64 = ctx.r25.u64 + ctx.r10.u64;
	// add r29,r24,r3
	ctx.r29.u64 = ctx.r24.u64 + ctx.r3.u64;
	// add r24,r28,r5
	ctx.r24.u64 = ctx.r28.u64 + ctx.r5.u64;
	// add r27,r23,r4
	ctx.r27.u64 = ctx.r23.u64 + ctx.r4.u64;
	// add r30,r30,r6
	ctx.r30.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r28,r9,r7
	ctx.r28.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r25,r11,r8
	ctx.r25.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ble 0x880ca244
	if (!ctx.cr0.gt) goto loc_880CA244;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_880CA21C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,14476(r31)
	ctx.current_instruction = 0x880CA220;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14476);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x880CA22C;
	sub_880547A0(ctx, base);
loc_880CA22C:
	// lwz r10,14628(r31)
	ctx.current_instruction = 0x880CA22C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14628);
	// lwz r11,14620(r31)
	ctx.current_instruction = 0x880CA230;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14620);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne 0x880ca21c
	if (!ctx.cr0.eq) goto loc_880CA21C;
loc_880CA244:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x880ca2bc
	if (!ctx.cr6.gt) goto loc_880CA2BC;
	// addi r11,r22,-1
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_880CA258:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,14484(r31)
	ctx.current_instruction = 0x880CA25C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14484);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880547a0
	ctx.lr = 0x880CA268;
	sub_880547A0(ctx, base);
loc_880CA268:
	// lwz r10,14680(r31)
	ctx.current_instruction = 0x880CA268;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14680);
	// lwz r11,14676(r31)
	ctx.current_instruction = 0x880CA26C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14676);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bne 0x880ca258
	if (!ctx.cr0.eq) goto loc_880CA258;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x880ca2bc
	if (!ctx.cr6.gt) goto loc_880CA2BC;
	// addi r11,r22,-1
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_880CA294:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r5,14484(r31)
	ctx.current_instruction = 0x880CA298;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14484);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880547a0
	ctx.lr = 0x880CA2A4;
	sub_880547A0(ctx, base);
loc_880CA2A4:
	// lwz r10,14680(r31)
	ctx.current_instruction = 0x880CA2A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14680);
	// lwz r11,14676(r31)
	ctx.current_instruction = 0x880CA2A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14676);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r25,r10,r25
	ctx.r25.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bne 0x880ca294
	if (!ctx.cr0.eq) goto loc_880CA294;
loc_880CA2BC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CB398) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CB398;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CB398) {
			switch (rex_dispatch_address) {
				case 0x880CB3A0:
				case 0x880CB428:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CB398;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CB3A0: goto loc_880CB3A0;
		case 0x880CB428: goto loc_880CB428;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x880CB3A0;
	__savegprlr_24(ctx, base);
loc_880CB3A0:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x880CB3A0;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1524(r3)
	ctx.current_instruction = 0x880CB3A4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1524);
	// lis r24,80
	ctx.r24.s64 = 5242880;
	// lwz r26,1528(r3)
	ctx.current_instruction = 0x880CB3AC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 1528);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r24,r24,14
	ctx.r24.u64 = ctx.r24.u64 | 14;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x880cb48c
	if (ctx.cr6.eq) goto loc_880CB48C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x880cb48c
	if (ctx.cr6.eq) goto loc_880CB48C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r5)
	ctx.current_instruction = 0x880CB3DC;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x880cb448
	if (!ctx.cr6.gt) goto loc_880CB448;
	// addi r29,r26,4
	ctx.r29.s64 = ctx.r26.s64 + 4;
loc_880CB3F0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880cb40c
	if (ctx.cr6.lt) goto loc_880CB40C;
	// bne cr6,0x880cb454
	if (!ctx.cr6.eq) goto loc_880CB454;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x880cb464
	if (!ctx.cr6.eq) goto loc_880CB464;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x880cb438
	goto loc_880CB438;
loc_880CB40C:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x880CB40C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r10,0(r11)
	ctx.current_instruction = 0x880CB410;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,45
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 45, ctx.xer);
	// bne cr6,0x880cb47c
	if (!ctx.cr6.eq) goto loc_880CB47C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x880cb150
	ctx.lr = 0x880CB428;
	sub_880CB150(ctx, base);
loc_880CB428:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cb434
	if (!ctx.cr6.eq) goto loc_880CB434;
	// li r27,1
	ctx.r27.s64 = 1;
loc_880CB434:
	// li r11,1
	ctx.r11.s64 = 1;
loc_880CB438:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x880cb3f0
	if (ctx.cr6.lt) goto loc_880CB3F0;
loc_880CB448:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_880CB454:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,179
	ctx.r3.u64 = ctx.r3.u64 | 179;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_880CB464:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r10,r11,r26
	ctx.current_instruction = 0x880CB46C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// stw r10,0(r28)
	ctx.current_instruction = 0x880CB470;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_880CB47C:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,190
	ctx.r3.u64 = ctx.r3.u64 | 190;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_880CB48C:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,191
	ctx.r3.u64 = ctx.r3.u64 | 191;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CCAE8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CCAE8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CCAE8) {
			switch (rex_dispatch_address) {
				case 0x880CCAF0:
				case 0x880CCB2C:
				case 0x880CCBF0:
				case 0x880CCC18:
				case 0x880CCC64:
				case 0x880CCC78:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CCAE8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CCAF0: goto loc_880CCAF0;
		case 0x880CCB2C: goto loc_880CCB2C;
		case 0x880CCBF0: goto loc_880CCBF0;
		case 0x880CCC18: goto loc_880CCC18;
		case 0x880CCC64: goto loc_880CCC64;
		case 0x880CCC78: goto loc_880CCC78;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x880CCAF0;
	__savegprlr_24(ctx, base);
loc_880CCAF0:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x880CCAF0;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stb r27,0(r4)
	ctx.current_instruction = 0x880CCAFC;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r27.u8);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r27,88(r1)
	ctx.current_instruction = 0x880CCB04;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r27,84(r1)
	ctx.current_instruction = 0x880CCB0C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r27,92(r1)
	ctx.current_instruction = 0x880CCB18;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.current_instruction = 0x880CCB20;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bl 0x880cb758
	ctx.lr = 0x880CCB2C;
	sub_880CB758(ctx, base);
loc_880CCB2C:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r26,r11,22
	ctx.r26.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x880ccc6c
	if (ctx.cr6.eq) goto loc_880CCC6C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880ccc78
	if (ctx.cr6.lt) goto loc_880CCC78;
	// li r28,1
	ctx.r28.s64 = 1;
loc_880CCB48:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880ccc78
	if (ctx.cr6.lt) goto loc_880CCC78;
	// lwz r31,84(r1)
	ctx.current_instruction = 0x880CCB50;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lbz r8,80(r1)
	ctx.current_instruction = 0x880CCB58;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_880CCB5C:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r31
	ctx.current_instruction = 0x880CCB64;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// ble cr6,0x880ccbc4
	if (!ctx.cr6.gt) goto loc_880CCBC4;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r6,r9,20
	ctx.r6.s64 = ctx.r9.s64 + 20;
	// srawi r5,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 5;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r3,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r3.s64 = temp.s64;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwzx r6,r4,r30
	ctx.current_instruction = 0x880CCB90;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// subf r5,r10,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// and r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 & ctx.r7.u64;
	// slw r10,r28,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r5.u8 & 0x3F));
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x880ccc28
	if (!ctx.cr6.eq) goto loc_880CCC28;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r30
	ctx.current_instruction = 0x880CCBB4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880ccc28
	if (ctx.cr6.eq) goto loc_880CCC28;
loc_880CCBC4:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x880ccb5c
	if (ctx.cr6.lt) goto loc_880CCB5C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x880ccc40
	if (ctx.cr6.eq) goto loc_880CCC40;
loc_880CCBDC:
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880cc988
	ctx.lr = 0x880CCBF0;
	sub_880CC988(ctx, base);
loc_880CCBF0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880ccc3c
	if (!ctx.cr6.eq) goto loc_880CCC3C;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x880CCBF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x880ccc30
	if (ctx.cr6.eq) goto loc_880CCC30;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880ccc3c
	if (!ctx.cr6.eq) goto loc_880CCC3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880cc698
	ctx.lr = 0x880CCC18;
	sub_880CC698(ctx, base);
loc_880CCC18:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880ccc3c
	if (!ctx.cr6.eq) goto loc_880CCC3C;
	// lwz r31,84(r1)
	ctx.current_instruction = 0x880CCC20;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x880ccbdc
	goto loc_880CCBDC;
loc_880CCC28:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// b 0x880ccc40
	goto loc_880CCC40;
loc_880CCC30:
	// lbz r8,80(r1)
	ctx.current_instruction = 0x880CCC30;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r8,0(r24)
	ctx.current_instruction = 0x880CCC34;
	REX_STORE_U8(ctx.r24.u32 + 0, ctx.r8.u8);
	// b 0x880ccc40
	goto loc_880CCC40;
loc_880CCC3C:
	// lbz r8,80(r1)
	ctx.current_instruction = 0x880CCC3C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_880CCC40:
	// lbz r11,0(r24)
	ctx.current_instruction = 0x880CCC40;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880ccc6c
	if (ctx.cr6.eq) goto loc_880CCC6C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r30)
	ctx.current_instruction = 0x880CCC54;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.current_instruction = 0x880CCC5C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x880cb7c0
	ctx.lr = 0x880CCC64;
	sub_880CB7C0(ctx, base);
loc_880CCC64:
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x880ccb48
	if (!ctx.cr6.eq) goto loc_880CCB48;
loc_880CCC6C:
	// lwz r4,88(r1)
	ctx.current_instruction = 0x880CCC6C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,72(r30)
	ctx.current_instruction = 0x880CCC70;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x880cb828
	ctx.lr = 0x880CCC78;
	sub_880CB828(ctx, base);
loc_880CCC78:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D13A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D13A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D13A8) {
			switch (rex_dispatch_address) {
				case 0x880D13B0:
				case 0x880D13D8:
				case 0x880D1414:
				case 0x880D1440:
				case 0x880D147C:
				case 0x880D14A8:
				case 0x880D14BC:
				case 0x880D14D0:
				case 0x880D14E4:
				case 0x880D14F4:
				case 0x880D1508:
				case 0x880D151C:
				case 0x880D1524:
				case 0x880D1534:
				case 0x880D1544:
				case 0x880D1554:
				case 0x880D1568:
				case 0x880D157C:
				case 0x880D1590:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D13A8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D13B0: goto loc_880D13B0;
		case 0x880D13D8: goto loc_880D13D8;
		case 0x880D1414: goto loc_880D1414;
		case 0x880D1440: goto loc_880D1440;
		case 0x880D147C: goto loc_880D147C;
		case 0x880D14A8: goto loc_880D14A8;
		case 0x880D14BC: goto loc_880D14BC;
		case 0x880D14D0: goto loc_880D14D0;
		case 0x880D14E4: goto loc_880D14E4;
		case 0x880D14F4: goto loc_880D14F4;
		case 0x880D1508: goto loc_880D1508;
		case 0x880D151C: goto loc_880D151C;
		case 0x880D1524: goto loc_880D1524;
		case 0x880D1534: goto loc_880D1534;
		case 0x880D1544: goto loc_880D1544;
		case 0x880D1554: goto loc_880D1554;
		case 0x880D1568: goto loc_880D1568;
		case 0x880D157C: goto loc_880D157C;
		case 0x880D1590: goto loc_880D1590;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880D13B0;
	__savegprlr_27(ctx, base);
loc_880D13B0:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880D13B0;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d1594
	if (ctx.cr6.eq) goto loc_880D1594;
	// lwz r27,0(r3)
	ctx.current_instruction = 0x880D13C0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x880d13d8
	if (ctx.cr6.eq) goto loc_880D13D8;
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// lhz r4,34(r27)
	ctx.current_instruction = 0x880D13D0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r27.u32 + 34);
	// bl 0x8812a538
	ctx.lr = 0x880D13D8;
	sub_8812A538(ctx, base);
loc_880D13D8:
	// lwz r11,372(r31)
	ctx.current_instruction = 0x880D13D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d1430
	if (ctx.cr6.eq) goto loc_880D1430;
	// lwz r11,360(r31)
	ctx.current_instruction = 0x880D13E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880d1430
	if (!ctx.cr6.gt) goto loc_880D1430;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_880D13FC:
	// lwz r11,372(r31)
	ctx.current_instruction = 0x880D13FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// lwzx r10,r30,r11
	ctx.current_instruction = 0x880D1400;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880d141c
	if (ctx.cr6.eq) goto loc_880D141C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x88125e70
	ctx.lr = 0x880D1414;
	sub_88125E70(ctx, base);
loc_880D1414:
	// lwz r11,372(r31)
	ctx.current_instruction = 0x880D1414;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// stwx r28,r30,r11
	ctx.current_instruction = 0x880D1418;
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
loc_880D141C:
	// lwz r11,360(r31)
	ctx.current_instruction = 0x880D141C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880d13fc
	if (ctx.cr6.lt) goto loc_880D13FC;
loc_880D1430:
	// lwz r3,372(r31)
	ctx.current_instruction = 0x880D1430;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d1444
	if (ctx.cr6.eq) goto loc_880D1444;
	// bl 0x88125e70
	ctx.lr = 0x880D1440;
	sub_88125E70(ctx, base);
loc_880D1440:
	// stw r28,372(r31)
	ctx.current_instruction = 0x880D1440;
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r28.u32);
loc_880D1444:
	// lwz r11,376(r31)
	ctx.current_instruction = 0x880D1444;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d1498
	if (ctx.cr6.eq) goto loc_880D1498;
	// lwz r11,360(r31)
	ctx.current_instruction = 0x880D1450;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880d1498
	if (!ctx.cr6.gt) goto loc_880D1498;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_880D1464:
	// lwz r11,376(r31)
	ctx.current_instruction = 0x880D1464;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// lwzx r10,r30,r11
	ctx.current_instruction = 0x880D1468;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880d1484
	if (ctx.cr6.eq) goto loc_880D1484;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x88125e70
	ctx.lr = 0x880D147C;
	sub_88125E70(ctx, base);
loc_880D147C:
	// lwz r11,376(r31)
	ctx.current_instruction = 0x880D147C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// stwx r28,r30,r11
	ctx.current_instruction = 0x880D1480;
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
loc_880D1484:
	// lwz r11,360(r31)
	ctx.current_instruction = 0x880D1484;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880d1464
	if (ctx.cr6.lt) goto loc_880D1464;
loc_880D1498:
	// lwz r3,376(r31)
	ctx.current_instruction = 0x880D1498;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d14ac
	if (ctx.cr6.eq) goto loc_880D14AC;
	// bl 0x88125e70
	ctx.lr = 0x880D14A8;
	sub_88125E70(ctx, base);
loc_880D14A8:
	// stw r28,376(r31)
	ctx.current_instruction = 0x880D14A8;
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r28.u32);
loc_880D14AC:
	// lwz r3,192(r31)
	ctx.current_instruction = 0x880D14AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d14c0
	if (ctx.cr6.eq) goto loc_880D14C0;
	// bl 0x88125e70
	ctx.lr = 0x880D14BC;
	sub_88125E70(ctx, base);
loc_880D14BC:
	// stw r28,192(r31)
	ctx.current_instruction = 0x880D14BC;
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r28.u32);
loc_880D14C0:
	// lwz r3,380(r31)
	ctx.current_instruction = 0x880D14C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d14d4
	if (ctx.cr6.eq) goto loc_880D14D4;
	// bl 0x88125e70
	ctx.lr = 0x880D14D0;
	sub_88125E70(ctx, base);
loc_880D14D0:
	// stw r28,380(r31)
	ctx.current_instruction = 0x880D14D0;
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r28.u32);
loc_880D14D4:
	// lwz r3,388(r31)
	ctx.current_instruction = 0x880D14D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d14e8
	if (ctx.cr6.eq) goto loc_880D14E8;
	// bl 0x88125e70
	ctx.lr = 0x880D14E4;
	sub_88125E70(ctx, base);
loc_880D14E4:
	// stw r28,388(r31)
	ctx.current_instruction = 0x880D14E4;
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r28.u32);
loc_880D14E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.current_instruction = 0x880D14EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880d12f0
	ctx.lr = 0x880D14F4;
	sub_880D12F0(ctx, base);
loc_880D14F4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x880d150c
	if (ctx.cr6.eq) goto loc_880D150C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,4(r31)
	ctx.current_instruction = 0x880D1500;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88126188
	ctx.lr = 0x880D1508;
	sub_88126188(ctx, base);
loc_880D1508:
	// stw r28,4(r31)
	ctx.current_instruction = 0x880D1508;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_880D150C:
	// lwz r3,428(r31)
	ctx.current_instruction = 0x880D150C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d1524
	if (ctx.cr6.eq) goto loc_880D1524;
	// bl 0x88128c58
	ctx.lr = 0x880D151C;
	sub_88128C58(ctx, base);
loc_880D151C:
	// lwz r3,428(r31)
	ctx.current_instruction = 0x880D151C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// bl 0x88125e70
	ctx.lr = 0x880D1524;
	sub_88125E70(ctx, base);
loc_880D1524:
	// lwz r3,348(r31)
	ctx.current_instruction = 0x880D1524;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d1534
	if (ctx.cr6.eq) goto loc_880D1534;
	// bl 0x88125e70
	ctx.lr = 0x880D1534;
	sub_88125E70(ctx, base);
loc_880D1534:
	// lwz r3,344(r31)
	ctx.current_instruction = 0x880D1534;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d1544
	if (ctx.cr6.eq) goto loc_880D1544;
	// bl 0x88125e70
	ctx.lr = 0x880D1544;
	sub_88125E70(ctx, base);
loc_880D1544:
	// lwz r3,448(r31)
	ctx.current_instruction = 0x880D1544;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d1558
	if (ctx.cr6.eq) goto loc_880D1558;
	// bl 0x88125e70
	ctx.lr = 0x880D1554;
	sub_88125E70(ctx, base);
loc_880D1554:
	// stw r28,448(r31)
	ctx.current_instruction = 0x880D1554;
	REX_STORE_U32(ctx.r31.u32 + 448, ctx.r28.u32);
loc_880D1558:
	// lwz r3,464(r31)
	ctx.current_instruction = 0x880D1558;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d156c
	if (ctx.cr6.eq) goto loc_880D156C;
	// bl 0x88125e70
	ctx.lr = 0x880D1568;
	sub_88125E70(ctx, base);
loc_880D1568:
	// stw r28,464(r31)
	ctx.current_instruction = 0x880D1568;
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r28.u32);
loc_880D156C:
	// lwz r3,468(r31)
	ctx.current_instruction = 0x880D156C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d1580
	if (ctx.cr6.eq) goto loc_880D1580;
	// bl 0x88125e70
	ctx.lr = 0x880D157C;
	sub_88125E70(ctx, base);
loc_880D157C:
	// stw r28,468(r31)
	ctx.current_instruction = 0x880D157C;
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r28.u32);
loc_880D1580:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x880d1594
	if (ctx.cr6.eq) goto loc_880D1594;
	// lwz r3,0(r31)
	ctx.current_instruction = 0x880D1588;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88125f58
	ctx.lr = 0x880D1590;
	sub_88125F58(ctx, base);
loc_880D1590:
	// stw r28,0(r31)
	ctx.current_instruction = 0x880D1590;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_880D1594:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D56A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D56A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D56A0) {
			switch (rex_dispatch_address) {
				case 0x880D56A8:
				case 0x880D5740:
				case 0x880D5760:
				case 0x880D57A8:
				case 0x880D5814:
				case 0x880D5840:
				case 0x880D5870:
				case 0x880D5944:
				case 0x880D594C:
				case 0x880D5960:
				case 0x880D5984:
				case 0x880D5A08:
				case 0x880D5AE8:
				case 0x880D5B10:
				case 0x880D5B58:
				case 0x880D5B88:
				case 0x880D5BB0:
				case 0x880D5C68:
				case 0x880D5C84:
				case 0x880D5D18:
				case 0x880D5D30:
				case 0x880D5D3C:
				case 0x880D5DB8:
				case 0x880D5DD4:
				case 0x880D5F34:
				case 0x880D5F7C:
				case 0x880D5FB8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D56A0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D56A8: goto loc_880D56A8;
		case 0x880D5740: goto loc_880D5740;
		case 0x880D5760: goto loc_880D5760;
		case 0x880D57A8: goto loc_880D57A8;
		case 0x880D5814: goto loc_880D5814;
		case 0x880D5840: goto loc_880D5840;
		case 0x880D5870: goto loc_880D5870;
		case 0x880D5944: goto loc_880D5944;
		case 0x880D594C: goto loc_880D594C;
		case 0x880D5960: goto loc_880D5960;
		case 0x880D5984: goto loc_880D5984;
		case 0x880D5A08: goto loc_880D5A08;
		case 0x880D5AE8: goto loc_880D5AE8;
		case 0x880D5B10: goto loc_880D5B10;
		case 0x880D5B58: goto loc_880D5B58;
		case 0x880D5B88: goto loc_880D5B88;
		case 0x880D5BB0: goto loc_880D5BB0;
		case 0x880D5C68: goto loc_880D5C68;
		case 0x880D5C84: goto loc_880D5C84;
		case 0x880D5D18: goto loc_880D5D18;
		case 0x880D5D30: goto loc_880D5D30;
		case 0x880D5D3C: goto loc_880D5D3C;
		case 0x880D5DB8: goto loc_880D5DB8;
		case 0x880D5DD4: goto loc_880D5DD4;
		case 0x880D5F34: goto loc_880D5F34;
		case 0x880D5F7C: goto loc_880D5F7C;
		case 0x880D5FB8: goto loc_880D5FB8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x880D56A8;
	__savegprlr_16(ctx, base);
loc_880D56A8:
	// stfd f29,-160(r1)
	ctx.current_instruction = 0x880D56A8;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f29.u64);
	// stfd f30,-152(r1)
	ctx.current_instruction = 0x880D56AC;
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.f30.u64);
	// stfd f31,-144(r1)
	ctx.current_instruction = 0x880D56B0;
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-272(r1)
	ctx.current_instruction = 0x880D56B4;
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.current_instruction = 0x880D56B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r31,0(r3)
	ctx.current_instruction = 0x880D56C0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r17,r25
	ctx.r17.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x880d5ff8
	if (ctx.cr6.eq) goto loc_880D5FF8;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r30,96(r1)
	ctx.current_instruction = 0x880D56DC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-32764
	ctx.r9.s64 = -2147221504;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r23,4
	ctx.r23.s64 = 4;
	// lfs f31,6732(r11)
	ctx.current_instruction = 0x880D56F0;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f31.f64 = double(temp.f32);
	// li r18,2
	ctx.r18.s64 = 2;
	// lfs f29,12180(r10)
	ctx.current_instruction = 0x880D56F8;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12180);
	ctx.f29.f64 = double(temp.f32);
	// li r24,6
	ctx.r24.s64 = 6;
	// ori r20,r9,4
	ctx.r20.u64 = ctx.r9.u64 | 4;
	// li r16,5
	ctx.r16.s64 = 5;
	// li r19,8
	ctx.r19.s64 = 8;
	// li r21,-1
	ctx.r21.s64 = -1;
loc_880D5710:
	// lwz r11,36(r29)
	ctx.current_instruction = 0x880D5710;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x880d5fc8
	if (ctx.cr6.gt) goto loc_880D5FC8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880d58a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880D58A8;
	// bdzf 4*cr6+eq,0x880d5a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880D5A90;
	// bdzf 4*cr6+eq,0x880d5fc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880D5FC8;
	// bdzf 4*cr6+eq,0x880d5fb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880D5FB0;
	// bne cr6,0x880d5c04
	if (!ctx.cr6.eq) goto loc_880D5C04;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812f2f0
	ctx.lr = 0x880D5740;
	sub_8812F2F0(ctx, base);
loc_880D5740:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d5fd4
	if (ctx.cr6.lt) goto loc_880D5FD4;
	// lwz r11,132(r31)
	ctx.current_instruction = 0x880D574C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d5818
	if (!ctx.cr6.eq) goto loc_880D5818;
	// lwz r3,296(r31)
	ctx.current_instruction = 0x880D5758;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x8812dca8
	ctx.lr = 0x880D5760;
	sub_8812DCA8(ctx, base);
loc_880D5760:
	// lhz r11,580(r31)
	ctx.current_instruction = 0x880D5760;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// stfs f1,0(r31)
	ctx.current_instruction = 0x880D5764;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880d57c8
	if (!ctx.cr6.gt) goto loc_880D57C8;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_880D577C:
	// lwz r9,584(r31)
	ctx.current_instruction = 0x880D577C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,320(r31)
	ctx.current_instruction = 0x880D5784;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r8,472(r31)
	ctx.current_instruction = 0x880D5788;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 472);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r7,r11,r9
	ctx.current_instruction = 0x880D5790;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,56(r30)
	ctx.current_instruction = 0x880D57A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x88052d90
	ctx.lr = 0x880D57A8;
	sub_88052D90(ctx, base);
loc_880D57A8:
	// lhz r3,580(r31)
	ctx.current_instruction = 0x880D57A8;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880d577c
	if (ctx.cr6.lt) goto loc_880D577C;
loc_880D57C8:
	// lwz r10,0(r29)
	ctx.current_instruction = 0x880D57C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r22,36(r29)
	ctx.current_instruction = 0x880D57CC;
	REX_STORE_U32(ctx.r29.u32 + 36, ctx.r22.u32);
	// lwz r11,264(r31)
	ctx.current_instruction = 0x880D57D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,202(r10)
	ctx.current_instruction = 0x880D57D8;
	REX_STORE_U16(ctx.r10.u32 + 202, ctx.r11.u16);
	// lwz r8,0(r29)
	ctx.current_instruction = 0x880D57DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// sth r25,150(r29)
	ctx.current_instruction = 0x880D57E0;
	REX_STORE_U16(ctx.r29.u32 + 150, ctx.r25.u16);
	// lwz r7,60(r8)
	ctx.current_instruction = 0x880D57E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bgt cr6,0x880d57f8
	if (ctx.cr6.gt) goto loc_880D57F8;
	// stw r25,56(r29)
	ctx.current_instruction = 0x880D57F0;
	REX_STORE_U32(ctx.r29.u32 + 56, ctx.r25.u32);
	// b 0x880d5fc8
	goto loc_880D5FC8;
loc_880D57F8:
	// lwz r11,512(r29)
	ctx.current_instruction = 0x880D57F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 512);
	// stw r23,56(r29)
	ctx.current_instruction = 0x880D57FC;
	REX_STORE_U32(ctx.r29.u32 + 56, ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d5fc8
	if (ctx.cr6.eq) goto loc_880D5FC8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D5814;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D5814:
	// b 0x880d5fc8
	goto loc_880D5FC8;
loc_880D5818:
	// lwz r10,268(r31)
	ctx.current_instruction = 0x880D5818;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// sth r10,730(r31)
	ctx.current_instruction = 0x880D5820;
	REX_STORE_U16(ctx.r31.u32 + 730, ctx.r10.u16);
	// bne cr6,0x880d584c
	if (!ctx.cr6.eq) goto loc_880D584C;
	// lwz r11,140(r31)
	ctx.current_instruction = 0x880D5828;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x880d584c
	if (ctx.cr6.eq) goto loc_880D584C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,320(r31)
	ctx.current_instruction = 0x880D5838;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// bl 0x8812a9a0
	ctx.lr = 0x880D5840;
	sub_8812A9A0(ctx, base);
loc_880D5840:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d5fd4
	if (ctx.cr6.lt) goto loc_880D5FD4;
loc_880D584C:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x880D584C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880d587c
	if (!ctx.cr6.eq) goto loc_880D587C;
	// lwz r11,192(r31)
	ctx.current_instruction = 0x880D5858;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880d587c
	if (!ctx.cr6.eq) goto loc_880D587C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,320(r31)
	ctx.current_instruction = 0x880D5868;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// bl 0x8812a9a0
	ctx.lr = 0x880D5870;
	sub_8812A9A0(ctx, base);
loc_880D5870:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d5fd4
	if (ctx.cr6.lt) goto loc_880D5FD4;
loc_880D587C:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x880D587C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r18,36(r29)
	ctx.current_instruction = 0x880D5880;
	REX_STORE_U32(ctx.r29.u32 + 36, ctx.r18.u32);
	// sth r25,150(r29)
	ctx.current_instruction = 0x880D5884;
	REX_STORE_U16(ctx.r29.u32 + 150, ctx.r25.u16);
	// stb r25,145(r29)
	ctx.current_instruction = 0x880D5888;
	REX_STORE_U8(ctx.r29.u32 + 145, ctx.r25.u8);
	// stw r24,72(r29)
	ctx.current_instruction = 0x880D588C;
	REX_STORE_U32(ctx.r29.u32 + 72, ctx.r24.u32);
	// sth r25,148(r29)
	ctx.current_instruction = 0x880D5890;
	REX_STORE_U16(ctx.r29.u32 + 148, ctx.r25.u16);
	// sth r25,202(r11)
	ctx.current_instruction = 0x880D5894;
	REX_STORE_U16(ctx.r11.u32 + 202, ctx.r25.u16);
	// stw r25,76(r29)
	ctx.current_instruction = 0x880D5898;
	REX_STORE_U32(ctx.r29.u32 + 76, ctx.r25.u32);
	// stw r25,200(r29)
	ctx.current_instruction = 0x880D589C;
	REX_STORE_U32(ctx.r29.u32 + 200, ctx.r25.u32);
	// stw r25,208(r29)
	ctx.current_instruction = 0x880D58A0;
	REX_STORE_U32(ctx.r29.u32 + 208, ctx.r25.u32);
	// b 0x880d5fc8
	goto loc_880D5FC8;
loc_880D58A8:
	// lhz r11,580(r31)
	ctx.current_instruction = 0x880D58A8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// lhz r10,150(r29)
	ctx.current_instruction = 0x880D58AC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880d5a34
	if (!ctx.cr6.lt) goto loc_880D5A34;
loc_880D58C0:
	// lhz r10,150(r29)
	ctx.current_instruction = 0x880D58C0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 150);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r9,584(r31)
	ctx.current_instruction = 0x880D58C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r10,320(r31)
	ctx.current_instruction = 0x880D58D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r9
	ctx.current_instruction = 0x880D58D8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// mulli r9,r6,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,36(r30)
	ctx.current_instruction = 0x880D58E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x880d5908
	if (!ctx.cr6.gt) goto loc_880D5908;
loc_880D58F8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x880d58f8
	if (ctx.cr6.gt) goto loc_880D58F8;
loc_880D5908:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,312(r29)
	ctx.current_instruction = 0x880D590C;
	REX_STORE_U16(ctx.r29.u32 + 312, ctx.r11.u16);
	// lwz r9,40(r30)
	ctx.current_instruction = 0x880D5910;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d5990
	if (ctx.cr6.eq) goto loc_880D5990;
	// lwz r11,60(r31)
	ctx.current_instruction = 0x880D591C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x880d597c
	if (ctx.cr6.lt) goto loc_880D597C;
	// lwz r11,444(r31)
	ctx.current_instruction = 0x880D5930;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 444);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d5948
	if (!ctx.cr6.eq) goto loc_880D5948;
	// bl 0x880d5310
	ctx.lr = 0x880D5944;
	sub_880D5310(ctx, base);
loc_880D5944:
	// b 0x880d594c
	goto loc_880D594C;
loc_880D5948:
	// bl 0x880d54c0
	ctx.lr = 0x880D594C;
	sub_880D54C0(ctx, base);
loc_880D594C:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x880d5988
	if (!ctx.cr6.eq) goto loc_880D5988;
	// addi r3,r29,224
	ctx.r3.s64 = ctx.r29.s64 + 224;
	// bl 0x8812be50
	ctx.lr = 0x880D5960;
	sub_8812BE50(ctx, base);
loc_880D5960:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880d5fd4
	if (ctx.cr6.eq) goto loc_880D5FD4;
	// lwz r11,704(r29)
	ctx.current_instruction = 0x880D5968;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d5fd4
	if (ctx.cr6.eq) goto loc_880D5FD4;
	// mr r17,r22
	ctx.r17.u64 = ctx.r22.u64;
	// b 0x880d5990
	goto loc_880D5990;
loc_880D597C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d4e20
	ctx.lr = 0x880D5984;
	sub_880D4E20(ctx, base);
loc_880D5984:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_880D5988:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x880d5fd4
	if (ctx.cr6.lt) goto loc_880D5FD4;
loc_880D5990:
	// lhz r11,490(r30)
	ctx.current_instruction = 0x880D5990;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 490);
	// lhz r10,730(r31)
	ctx.current_instruction = 0x880D5994;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 730);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x880d59a4
	if (!ctx.cr6.gt) goto loc_880D59A4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_880D59A4:
	// lwz r10,60(r31)
	ctx.current_instruction = 0x880D59A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// sth r11,730(r31)
	ctx.current_instruction = 0x880D59A8;
	REX_STORE_U16(ctx.r31.u32 + 730, ctx.r11.u16);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880d59c8
	if (!ctx.cr6.eq) goto loc_880D59C8;
	// lwz r10,264(r29)
	ctx.current_instruction = 0x880D59B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 264);
	// addi r11,r29,224
	ctx.r11.s64 = ctx.r29.s64 + 224;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,264(r29)
	ctx.current_instruction = 0x880D59C4;
	REX_STORE_U32(ctx.r29.u32 + 264, ctx.r8.u32);
loc_880D59C8:
	// lwz r11,264(r31)
	ctx.current_instruction = 0x880D59C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,202(r31)
	ctx.current_instruction = 0x880D59D0;
	REX_STORE_U16(ctx.r31.u32 + 202, ctx.r11.u16);
	// lwz r9,0(r29)
	ctx.current_instruction = 0x880D59D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,60(r9)
	ctx.current_instruction = 0x880D59D8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bgt cr6,0x880d59ec
	if (ctx.cr6.gt) goto loc_880D59EC;
	// stw r25,56(r29)
	ctx.current_instruction = 0x880D59E4;
	REX_STORE_U32(ctx.r29.u32 + 56, ctx.r25.u32);
	// b 0x880d5a08
	goto loc_880D5A08;
loc_880D59EC:
	// lwz r11,512(r29)
	ctx.current_instruction = 0x880D59EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 512);
	// stw r23,56(r29)
	ctx.current_instruction = 0x880D59F0;
	REX_STORE_U32(ctx.r29.u32 + 56, ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d5a08
	if (ctx.cr6.eq) goto loc_880D5A08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D5A08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D5A08:
	// lhz r11,150(r29)
	ctx.current_instruction = 0x880D5A08;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r29)
	ctx.current_instruction = 0x880D5A1C;
	REX_STORE_U16(ctx.r29.u32 + 150, ctx.r9.u16);
	// lhz r8,580(r31)
	ctx.current_instruction = 0x880D5A20;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880d58c0
	if (ctx.cr6.lt) goto loc_880D58C0;
loc_880D5A34:
	// lwz r11,444(r31)
	ctx.current_instruction = 0x880D5A34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d5a88
	if (ctx.cr6.eq) goto loc_880D5A88;
	// lwz r11,60(r31)
	ctx.current_instruction = 0x880D5A40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880d5a88
	if (!ctx.cr6.gt) goto loc_880D5A88;
	// lwz r9,584(r31)
	ctx.current_instruction = 0x880D5A4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.current_instruction = 0x880D5A50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lhz r11,730(r31)
	ctx.current_instruction = 0x880D5A54;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 730);
	// lhz r8,0(r9)
	ctx.current_instruction = 0x880D5A58;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r9,r7,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r5,118(r6)
	ctx.current_instruction = 0x880D5A68;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + 118);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880d5a84
	if (ctx.cr6.lt) goto loc_880D5A84;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_880D5A84:
	// sth r11,730(r31)
	ctx.current_instruction = 0x880D5A84;
	REX_STORE_U16(ctx.r31.u32 + 730, ctx.r11.u16);
loc_880D5A88:
	// stw r16,36(r29)
	ctx.current_instruction = 0x880D5A88;
	REX_STORE_U32(ctx.r29.u32 + 36, ctx.r16.u32);
	// b 0x880d5fc8
	goto loc_880D5FC8;
loc_880D5A90:
	// lhz r11,580(r31)
	ctx.current_instruction = 0x880D5A90;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// lhz r10,150(r29)
	ctx.current_instruction = 0x880D5A94;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880d5bfc
	if (!ctx.cr6.lt) goto loc_880D5BFC;
loc_880D5AA8:
	// lhz r11,150(r29)
	ctx.current_instruction = 0x880D5AA8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 150);
	// lwz r10,584(r31)
	ctx.current_instruction = 0x880D5AAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,320(r31)
	ctx.current_instruction = 0x880D5AB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r10
	ctx.current_instruction = 0x880D5ABC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r10,r6,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,40(r30)
	ctx.current_instruction = 0x880D5ACC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880d5af4
	if (ctx.cr6.eq) goto loc_880D5AF4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.current_instruction = 0x880D5ADC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88133680
	ctx.lr = 0x880D5AE8;
	sub_88133680(ctx, base);
loc_880D5AE8:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d5fd4
	if (ctx.cr6.lt) goto loc_880D5FD4;
loc_880D5AF4:
	// lwz r11,40(r30)
	ctx.current_instruction = 0x880D5AF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d5b5c
	if (ctx.cr6.eq) goto loc_880D5B5C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.current_instruction = 0x880D5B04;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88133d98
	ctx.lr = 0x880D5B10;
	sub_88133D98(ctx, base);
loc_880D5B10:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d5fd4
	if (ctx.cr6.lt) goto loc_880D5FD4;
	// stw r25,48(r30)
	ctx.current_instruction = 0x880D5B1C;
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r25.u32);
	// lwz r11,72(r31)
	ctx.current_instruction = 0x880D5B20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x880d5b8c
	if (!ctx.cr6.eq) goto loc_880D5B8C;
	// lwz r11,460(r31)
	ctx.current_instruction = 0x880D5B2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d5b40
	if (ctx.cr6.eq) goto loc_880D5B40;
	// lwz r3,328(r31)
	ctx.current_instruction = 0x880D5B38;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// b 0x880d5b44
	goto loc_880D5B44;
loc_880D5B40:
	// lwz r3,56(r30)
	ctx.current_instruction = 0x880D5B40;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
loc_880D5B44:
	// lhz r11,120(r30)
	ctx.current_instruction = 0x880D5B44;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 120);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x88127c30
	ctx.lr = 0x880D5B58;
	sub_88127C30(ctx, base);
loc_880D5B58:
	// b 0x880d5b8c
	goto loc_880D5B8C;
loc_880D5B5C:
	// lwz r11,460(r31)
	ctx.current_instruction = 0x880D5B5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d5b70
	if (ctx.cr6.eq) goto loc_880D5B70;
	// lwz r3,328(r31)
	ctx.current_instruction = 0x880D5B68;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// b 0x880d5b74
	goto loc_880D5B74;
loc_880D5B70:
	// lwz r3,56(r30)
	ctx.current_instruction = 0x880D5B70;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
loc_880D5B74:
	// lhz r11,120(r30)
	ctx.current_instruction = 0x880D5B74;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x880D5B88;
	sub_88052D90(ctx, base);
loc_880D5B88:
	// stw r25,48(r30)
	ctx.current_instruction = 0x880D5B88;
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r25.u32);
loc_880D5B8C:
	// lwz r11,460(r31)
	ctx.current_instruction = 0x880D5B8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d5bb0
	if (ctx.cr6.eq) goto loc_880D5BB0;
	// lhz r11,120(r30)
	ctx.current_instruction = 0x880D5B98;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 120);
	// lwz r4,328(r31)
	ctx.current_instruction = 0x880D5B9C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwz r3,56(r30)
	ctx.current_instruction = 0x880D5BA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x880547a0
	ctx.lr = 0x880D5BB0;
	sub_880547A0(ctx, base);
loc_880D5BB0:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x880D5BB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stb r25,145(r29)
	ctx.current_instruction = 0x880D5BB4;
	REX_STORE_U8(ctx.r29.u32 + 145, ctx.r25.u8);
	// stw r24,72(r29)
	ctx.current_instruction = 0x880D5BB8;
	REX_STORE_U32(ctx.r29.u32 + 72, ctx.r24.u32);
	// sth r25,148(r29)
	ctx.current_instruction = 0x880D5BBC;
	REX_STORE_U16(ctx.r29.u32 + 148, ctx.r25.u16);
	// sth r25,202(r11)
	ctx.current_instruction = 0x880D5BC0;
	REX_STORE_U16(ctx.r11.u32 + 202, ctx.r25.u16);
	// stw r25,76(r29)
	ctx.current_instruction = 0x880D5BC4;
	REX_STORE_U32(ctx.r29.u32 + 76, ctx.r25.u32);
	// stw r25,200(r29)
	ctx.current_instruction = 0x880D5BC8;
	REX_STORE_U32(ctx.r29.u32 + 200, ctx.r25.u32);
	// stw r25,208(r29)
	ctx.current_instruction = 0x880D5BCC;
	REX_STORE_U32(ctx.r29.u32 + 208, ctx.r25.u32);
	// lhz r10,150(r29)
	ctx.current_instruction = 0x880D5BD0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 150);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r8,150(r29)
	ctx.current_instruction = 0x880D5BE4;
	REX_STORE_U16(ctx.r29.u32 + 150, ctx.r8.u16);
	// lhz r7,580(r31)
	ctx.current_instruction = 0x880D5BE8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x880d5aa8
	if (ctx.cr6.lt) goto loc_880D5AA8;
loc_880D5BFC:
	// stw r23,36(r29)
	ctx.current_instruction = 0x880D5BFC;
	REX_STORE_U32(ctx.r29.u32 + 36, ctx.r23.u32);
	// b 0x880d5fc8
	goto loc_880D5FC8;
loc_880D5C04:
	// lhz r11,580(r31)
	ctx.current_instruction = 0x880D5C04;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880d5ca8
	if (!ctx.cr6.gt) goto loc_880D5CA8;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_880D5C1C:
	// lwz r9,584(r31)
	ctx.current_instruction = 0x880D5C1C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r11,320(r31)
	ctx.current_instruction = 0x880D5C20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lhzx r8,r10,r9
	ctx.current_instruction = 0x880D5C24;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,40(r30)
	ctx.current_instruction = 0x880D5C34;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x880d5c6c
	if (ctx.cr6.eq) goto loc_880D5C6C;
	// stw r25,48(r30)
	ctx.current_instruction = 0x880D5C40;
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r25.u32);
	// lwz r11,72(r31)
	ctx.current_instruction = 0x880D5C44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x880d5c88
	if (!ctx.cr6.eq) goto loc_880D5C88;
	// lhz r11,118(r30)
	ctx.current_instruction = 0x880D5C50;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 118);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,56(r30)
	ctx.current_instruction = 0x880D5C5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x88127c30
	ctx.lr = 0x880D5C68;
	sub_88127C30(ctx, base);
loc_880D5C68:
	// b 0x880d5c88
	goto loc_880D5C88;
loc_880D5C6C:
	// lhz r11,120(r30)
	ctx.current_instruction = 0x880D5C6C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r30)
	ctx.current_instruction = 0x880D5C74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x880D5C84;
	sub_88052D90(ctx, base);
loc_880D5C84:
	// stw r25,48(r30)
	ctx.current_instruction = 0x880D5C84;
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r25.u32);
loc_880D5C88:
	// lhz r10,580(r31)
	ctx.current_instruction = 0x880D5C88;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x880d5c1c
	if (ctx.cr6.lt) goto loc_880D5C1C;
loc_880D5CA8:
	// lhz r11,580(r31)
	ctx.current_instruction = 0x880D5CA8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880d5d10
	if (!ctx.cr6.gt) goto loc_880D5D10;
	// lwz r9,584(r31)
	ctx.current_instruction = 0x880D5CBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r8,320(r31)
	ctx.current_instruction = 0x880D5CC4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_880D5CCC:
	// lhzx r10,r10,r9
	ctx.current_instruction = 0x880D5CCC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r5,40(r6)
	ctx.current_instruction = 0x880D5CDC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x880d5d0c
	if (!ctx.cr6.eq) goto loc_880D5D0C;
	// lhz r10,580(r31)
	ctx.current_instruction = 0x880D5CE8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x880d5ccc
	if (ctx.cr6.lt) goto loc_880D5CCC;
	// b 0x880d5d10
	goto loc_880D5D10;
loc_880D5D0C:
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_880D5D10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880d4450
	ctx.lr = 0x880D5D18;
	sub_880D4450(ctx, base);
loc_880D5D18:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d5fd4
	if (ctx.cr6.lt) goto loc_880D5FD4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812e108
	ctx.lr = 0x880D5D30;
	sub_8812E108(ctx, base);
loc_880D5D30:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812e108
	ctx.lr = 0x880D5D3C;
	sub_8812E108(ctx, base);
loc_880D5D3C:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x880D5D3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880d5e04
	if (!ctx.cr6.gt) goto loc_880D5E04;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x880d5e0c
	if (!ctx.cr6.eq) goto loc_880D5E0C;
	// lhz r11,580(r31)
	ctx.current_instruction = 0x880D5D50;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880d5e18
	if (!ctx.cr6.gt) goto loc_880D5E18;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_880D5D68:
	// lwz r9,584(r31)
	ctx.current_instruction = 0x880D5D68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// lhz r8,108(r31)
	ctx.current_instruction = 0x880D5D6C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 108);
	// lwz r10,320(r31)
	ctx.current_instruction = 0x880D5D70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhzx r6,r11,r9
	ctx.current_instruction = 0x880D5D78;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r11,r5,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x880d5db8
	if (!ctx.cr6.eq) goto loc_880D5DB8;
	// lhz r11,120(r30)
	ctx.current_instruction = 0x880D5D90;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,312(r31)
	ctx.current_instruction = 0x880D5D98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r10,56(r30)
	ctx.current_instruction = 0x880D5DA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x880D5DB8;
	sub_88052D90(ctx, base);
loc_880D5DB8:
	// sth r21,202(r31)
	ctx.current_instruction = 0x880D5DB8;
	REX_STORE_U16(ctx.r31.u32 + 202, ctx.r21.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,424(r30)
	ctx.current_instruction = 0x880D5DC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 424);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.current_instruction = 0x880D5DC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r5,0(r10)
	ctx.current_instruction = 0x880D5DCC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x881299b8
	ctx.lr = 0x880D5DD4;
	sub_881299B8(ctx, base);
loc_880D5DD4:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d5fd4
	if (ctx.cr6.lt) goto loc_880D5FD4;
	// lhz r10,580(r31)
	ctx.current_instruction = 0x880D5DE0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x880d5d68
	if (ctx.cr6.lt) goto loc_880D5D68;
	// b 0x880d5e18
	goto loc_880D5E18;
loc_880D5E04:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x880d5e18
	if (ctx.cr6.eq) goto loc_880D5E18;
loc_880D5E0C:
	// lwz r11,784(r31)
	ctx.current_instruction = 0x880D5E0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d5f9c
	if (ctx.cr6.eq) goto loc_880D5F9C;
loc_880D5E18:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x880D5E18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880d5e2c
	if (!ctx.cr6.eq) goto loc_880D5E2C;
	// lfs f30,300(r31)
	ctx.current_instruction = 0x880D5E24;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f30.f64 = double(temp.f32);
	// b 0x880d5e48
	goto loc_880D5E48;
loc_880D5E2C:
	// lhz r11,118(r30)
	ctx.current_instruction = 0x880D5E2C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,96(r1)
	ctx.current_instruction = 0x880D5E34;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.current_instruction = 0x880D5E38;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f30,f29,f12
	ctx.f30.f64 = double(float(ctx.f29.f64 / ctx.f12.f64));
loc_880D5E48:
	// lhz r11,580(r31)
	ctx.current_instruction = 0x880D5E48;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880d5f9c
	if (!ctx.cr6.gt) goto loc_880D5F9C;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_880D5E60:
	// lwz r9,584(r31)
	ctx.current_instruction = 0x880D5E60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.current_instruction = 0x880D5E64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r8,320(r29)
	ctx.current_instruction = 0x880D5E68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 320);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lhzx r7,r11,r9
	ctx.current_instruction = 0x880D5E70;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x880d5ee0
	if (ctx.cr6.eq) goto loc_880D5EE0;
	// lhz r11,118(r30)
	ctx.current_instruction = 0x880D5E84;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 118);
	// lwz r10,332(r29)
	ctx.current_instruction = 0x880D5E88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 332);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r7,328(r29)
	ctx.current_instruction = 0x880D5E90;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 328);
	// lwz r9,56(r30)
	ctx.current_instruction = 0x880D5E94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r4,r5,r7
	ctx.r4.u64 = uint32_t((ctx.r7.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r5.s32 / ctx.r7.s32 : 0);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// andc r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r3.u64;
	// subf. r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble 0x880d5ee0
	if (!ctx.cr0.gt) goto loc_880D5EE0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880D5ED0:
	// stfs f31,0(r10)
	ctx.current_instruction = 0x880D5ED0;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfsu f31,4(r10)
	ctx.current_instruction = 0x880D5ED4;
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x880d5ed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D5ED0;
loc_880D5EE0:
	// lwz r11,40(r30)
	ctx.current_instruction = 0x880D5EE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d5ef8
	if (!ctx.cr6.eq) goto loc_880D5EF8;
	// lwz r11,60(r31)
	ctx.current_instruction = 0x880D5EEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880d5f7c
	if (!ctx.cr6.gt) goto loc_880D5F7C;
loc_880D5EF8:
	// lhz r11,120(r30)
	ctx.current_instruction = 0x880D5EF8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 120);
	// lhz r10,118(r30)
	ctx.current_instruction = 0x880D5EFC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880d5f34
	if (!ctx.cr6.gt) goto loc_880D5F34;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,56(r30)
	ctx.current_instruction = 0x880D5F14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x88052d90
	ctx.lr = 0x880D5F34;
	sub_88052D90(ctx, base);
loc_880D5F34:
	// lwz r9,464(r31)
	ctx.current_instruction = 0x880D5F34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,496(r31)
	ctx.current_instruction = 0x880D5F3C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 496);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,140(r30)
	ctx.current_instruction = 0x880D5F44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// lhz r6,114(r30)
	ctx.current_instruction = 0x880D5F48;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 114);
	// lhz r4,120(r30)
	ctx.current_instruction = 0x880D5F4C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 120);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// stw r9,84(r1)
	ctx.current_instruction = 0x880D5F58;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// stw r8,92(r1)
	ctx.current_instruction = 0x880D5F60;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwz r9,440(r31)
	ctx.current_instruction = 0x880D5F68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r8,532(r31)
	ctx.current_instruction = 0x880D5F6C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 532);
	// lwz r7,516(r31)
	ctx.current_instruction = 0x880D5F70;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 516);
	// lwz r3,56(r30)
	ctx.current_instruction = 0x880D5F74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// bctrl 
	ctx.lr = 0x880D5F7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D5F7C:
	// lhz r10,580(r31)
	ctx.current_instruction = 0x880D5F7C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x880d5e60
	if (ctx.cr6.lt) goto loc_880D5E60;
loc_880D5F9C:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x880D5F9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880d5fbc
	if (!ctx.cr6.gt) goto loc_880D5FBC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x880d5fbc
	if (!ctx.cr6.eq) goto loc_880D5FBC;
loc_880D5FB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806c290
	ctx.lr = 0x880D5FB8;
	sub_8806C290(ctx, base);
loc_880D5FB8:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_880D5FBC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x880d5fd4
	if (ctx.cr6.lt) goto loc_880D5FD4;
	// stw r19,36(r29)
	ctx.current_instruction = 0x880D5FC4;
	REX_STORE_U32(ctx.r29.u32 + 36, ctx.r19.u32);
loc_880D5FC8:
	// lwz r11,36(r29)
	ctx.current_instruction = 0x880D5FC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880d5710
	if (!ctx.cr6.eq) goto loc_880D5710;
loc_880D5FD4:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x880d5ff8
	if (ctx.cr6.eq) goto loc_880D5FF8;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-160(r1)
	ctx.current_instruction = 0x880D5FE8;
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	ctx.current_instruction = 0x880D5FEC;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.current_instruction = 0x880D5FF0;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
loc_880D5FF8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-160(r1)
	ctx.current_instruction = 0x880D6000;
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	ctx.current_instruction = 0x880D6004;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.current_instruction = 0x880D6008;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EBE58) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880EBE58);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EBE58;
	ctx.current_instruction = 0x880EBE58;
	// lhz r11,0(r5)
	ctx.current_instruction = 0x880EBE58;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x880ebea8
	if (!ctx.cr6.gt) goto loc_880EBEA8;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_880EBE80:
	// lhz r3,0(r11)
	ctx.current_instruction = 0x880EBE80;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880ebe90
	if (ctx.cr6.eq) goto loc_880EBE90;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_880EBE90:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x880ebea8
	if (ctx.cr6.eq) goto loc_880EBEA8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880ebe80
	if (ctx.cr6.lt) goto loc_880EBE80;
loc_880EBEA8:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880ebee4
	if (!ctx.cr6.lt) goto loc_880EBEE4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_880EBEC0:
	// lhz r3,0(r10)
	ctx.current_instruction = 0x880EBEC0;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880ebee0
	if (!ctx.cr6.eq) goto loc_880EBEE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880ebec0
	if (ctx.cr6.lt) goto loc_880EBEC0;
	// b 0x880ebee4
	goto loc_880EBEE4;
loc_880EBEE0:
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
loc_880EBEE4:
	// srawi r10,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 5;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r6
	ctx.current_instruction = 0x880EBEEC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r4
	ctx.current_instruction = 0x880EBEFC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// li r10,0
	ctx.r10.s64 = 0;
	// sthx r10,r11,r4
	ctx.current_instruction = 0x880EBF1C;
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u16);
	// lhz r11,0(r5)
	ctx.current_instruction = 0x880EBF20;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// sth r8,0(r5)
	ctx.current_instruction = 0x880EBF28;
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r8.u16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880ED8B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880ED8B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880ED8B0) {
			switch (rex_dispatch_address) {
				case 0x880ED8E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880ED8B0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880ED8E0: goto loc_880ED8E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880ED8B4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880ED8B8;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880ED8BC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x880ED8C0;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x880ee138
	ctx.lr = 0x880ED8E0;
	sub_880EE138(ctx, base);
loc_880ED8E0:
	// li r8,0
	ctx.r8.s64 = 0;
loc_880ED8E4:
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880ED8F4:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r10
	ctx.current_instruction = 0x880ED8FC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x880ed914
	if (!ctx.cr6.lt) goto loc_880ED914;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880ed920
	goto loc_880ED920;
loc_880ED914:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880ed920
	if (!ctx.cr6.gt) goto loc_880ED920;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880ED920:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stbx r9,r11,r31
	ctx.current_instruction = 0x880ED928;
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x880ed8f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880ED8F4;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmpwi cr6,r8,64
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 64, ctx.xer);
	// blt cr6,0x880ed8e4
	if (ctx.cr6.lt) goto loc_880ED8E4;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880ED948;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880ED950;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880ED954;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880F00D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F00D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F00D0) {
			switch (rex_dispatch_address) {
				case 0x880F00D8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F00D0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F00D8: goto loc_880F00D8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880F00D8;
	__savegprlr_14(ctx, base);
loc_880F00D8:
	// stwu r1,-704(r1)
	ctx.current_instruction = 0x880F00D8;
	ea = -704 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,8
	ctx.r10.s64 = 8;
	// rlwinm r7,r4,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r6,r4,r9
	ctx.r6.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r8,r4,r7
	ctx.r8.u64 = ctx.r4.u64 + ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r1,40
	ctx.r9.s64 = ctx.r1.s64 + 40;
	// rlwinm r22,r4,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r4,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r6,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r4,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r18,r3,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r8,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r16,r4,14
	ctx.r16.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(14));
	// addi r10,r9,-12
	ctx.r10.s64 = ctx.r9.s64 + -12;
loc_880F0124:
	// lhzx r9,r22,r11
	ctx.current_instruction = 0x880F0124;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r11.u32);
	// lhzx r8,r21,r11
	ctx.current_instruction = 0x880F0128;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r11.u32);
	// lhzx r7,r18,r11
	ctx.current_instruction = 0x880F012C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r18.u32 + ctx.r11.u32);
	// extsh r26,r9
	ctx.r26.s64 = ctx.r9.s16;
	// lhzx r6,r17,r11
	ctx.current_instruction = 0x880F0134;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r17.u32 + ctx.r11.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// lhzx r9,r20,r11
	ctx.current_instruction = 0x880F0140;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r11.u32);
	// extsh r25,r6
	ctx.r25.s64 = ctx.r6.s16;
	// lhzx r8,r19,r11
	ctx.current_instruction = 0x880F0148;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r19.u32 + ctx.r11.u32);
	// lhzx r6,r16,r11
	ctx.current_instruction = 0x880F014C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r16.u32 + ctx.r11.u32);
	// subf r7,r29,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r29.u64;
	// lhz r3,0(r11)
	ctx.current_instruction = 0x880F0154;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// subf r4,r26,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r26.u64;
	// extsh r31,r6
	ctx.r31.s64 = ctx.r6.s16;
	// extsh r28,r9
	ctx.r28.s64 = ctx.r9.s16;
	// extsh r27,r8
	ctx.r27.s64 = ctx.r8.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// subf r8,r4,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r9,r31,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r31.u64;
	// subf r6,r28,r27
	ctx.r6.u64 = ctx.r27.u64 - ctx.r28.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r30,r25,r26
	ctx.r30.u64 = ctx.r25.u64 + ctx.r26.u64;
	// add r31,r27,r28
	ctx.r31.u64 = ctx.r27.u64 + ctx.r28.u64;
	// rlwinm r27,r6,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r9,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r8,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r31,r3
	ctx.r29.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r28,r30,r4
	ctx.r28.u64 = ctx.r30.u64 + ctx.r4.u64;
	// add r24,r6,r27
	ctx.r24.u64 = ctx.r6.u64 + ctx.r27.u64;
	// add r23,r9,r26
	ctx.r23.u64 = ctx.r9.u64 + ctx.r26.u64;
	// subf r3,r3,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r3.u64;
	// add r26,r8,r25
	ctx.r26.u64 = ctx.r8.u64 + ctx.r25.u64;
	// rlwinm r27,r9,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r28,r29
	ctx.r31.u64 = ctx.r28.u64 + ctx.r29.u64;
	// subf r4,r30,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r30.u64;
	// rlwinm r15,r7,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r7,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r26,r27
	ctx.r30.u64 = ctx.r26.u64 + ctx.r27.u64;
	// rlwinm r26,r31,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r24,r15
	ctx.r8.u64 = ctx.r15.u64 - ctx.r24.u64;
	// rlwinm r27,r4,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r25,r7,r25
	ctx.r25.u64 = ctx.r7.u64 + ctx.r25.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r15,r3
	ctx.r15.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// add r6,r31,r26
	ctx.r6.u64 = ctx.r31.u64 + ctx.r26.u64;
	// subf r9,r9,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r9.u64;
	// add r31,r4,r27
	ctx.r31.u64 = ctx.r4.u64 + ctx.r27.u64;
	// addi r14,r30,1
	ctx.r14.s64 = ctx.r30.s64 + 1;
	// rlwinm r27,r15,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r24,r9,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r8,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r25,r7
	ctx.r7.u64 = ctx.r25.u64 + ctx.r7.u64;
	// rlwinm r26,r14,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r31,r27
	ctx.r31.u64 = ctx.r27.u64 - ctx.r31.u64;
	// add r25,r9,r24
	ctx.r25.u64 = ctx.r9.u64 + ctx.r24.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r27,r8,r23
	ctx.r27.u64 = ctx.r8.u64 + ctx.r23.u64;
	// subf r26,r7,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r7.u64;
	// addi r24,r31,2
	ctx.r24.s64 = ctx.r31.s64 + 2;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// subf r27,r27,r25
	ctx.r27.u64 = ctx.r25.u64 - ctx.r27.u64;
	// srawi r31,r26,3
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r26.s32 >> 3;
	// stw r6,4(r10)
	ctx.current_instruction = 0x880F022C;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r26,r27,4
	ctx.r26.s64 = ctx.r27.s64 + 4;
	// stw r31,8(r10)
	ctx.current_instruction = 0x880F0234;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// srawi r27,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r24.s32 >> 2;
	// subf r6,r28,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r28.u64;
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r27,12(r10)
	ctx.current_instruction = 0x880F0244;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r27.u32);
	// srawi r26,r26,3
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 3;
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r26,16(r10)
	ctx.current_instruction = 0x880F0254;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r26.u32);
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r6,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r29
	ctx.r9.u64 = ctx.r8.u64 + ctx.r29.u64;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r6,r27
	ctx.r8.u64 = ctx.r6.u64 + ctx.r27.u64;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// addi r31,r8,1
	ctx.r31.s64 = ctx.r8.s64 + 1;
	// subf r7,r3,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r3.u64;
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r9,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 1;
	// addi r3,r7,2
	ctx.r3.s64 = ctx.r7.s64 + 2;
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r9,20(r10)
	ctx.current_instruction = 0x880F0294;
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// srawi r8,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 3;
	// srawi r9,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// stw r8,24(r10)
	ctx.current_instruction = 0x880F02A4;
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r8.u32);
	// stw r9,28(r10)
	ctx.current_instruction = 0x880F02A8;
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stwu r7,32(r10)
	ctx.current_instruction = 0x880F02B0;
	ea = 32 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x880f0124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F0124;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r5,110
	ctx.r9.s64 = ctx.r5.s64 + 110;
	// addi r10,r1,252
	ctx.r10.s64 = ctx.r1.s64 + 252;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r15,r11,18448
	ctx.r15.s64 = ctx.r11.s64 + 18448;
loc_880F02D4:
	// rlwinm r11,r31,6,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xC0;
	// lwz r5,-188(r10)
	ctx.current_instruction = 0x880F02D8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -188);
	// lwz r26,-156(r10)
	ctx.current_instruction = 0x880F02DC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + -156);
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// lwz r23,-124(r10)
	ctx.current_instruction = 0x880F02E4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r10.u32 + -124);
	// lwz r24,-92(r10)
	ctx.current_instruction = 0x880F02E8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r10.u32 + -92);
	// lwz r4,-60(r10)
	ctx.current_instruction = 0x880F02EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -60);
	// lwz r8,-28(r10)
	ctx.current_instruction = 0x880F02F0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -28);
	// add r30,r24,r23
	ctx.r30.u64 = ctx.r24.u64 + ctx.r23.u64;
	// lwz r6,-220(r10)
	ctx.current_instruction = 0x880F02F8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + -220);
	// add r29,r4,r26
	ctx.r29.u64 = ctx.r4.u64 + ctx.r26.u64;
	// lwzu r7,4(r10)
	ctx.current_instruction = 0x880F0300;
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r28,r8,r5
	ctx.r28.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r25,r4,r26
	ctx.r25.u64 = ctx.r26.u64 - ctx.r4.u64;
	// lwz r16,24(r11)
	ctx.current_instruction = 0x880F030C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// add r27,r7,r6
	ctx.r27.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r17,28(r11)
	ctx.current_instruction = 0x880F0314;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// subf r6,r7,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lwz r7,4(r11)
	ctx.current_instruction = 0x880F031C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r26,r5,r8
	ctx.r26.u64 = ctx.r8.u64 - ctx.r5.u64;
	// lwz r19,36(r11)
	ctx.current_instruction = 0x880F0324;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// subf r3,r28,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r28.u64;
	// lwz r18,32(r11)
	ctx.current_instruction = 0x880F032C;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// subf r4,r27,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r27.u64;
	// lwz r20,40(r11)
	ctx.current_instruction = 0x880F0334;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// subf r5,r23,r24
	ctx.r5.u64 = ctx.r24.u64 - ctx.r23.u64;
	// lwz r21,44(r11)
	ctx.current_instruction = 0x880F033C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// add r8,r26,r25
	ctx.r8.u64 = ctx.r26.u64 + ctx.r25.u64;
	// stw r7,16(r1)
	ctx.current_instruction = 0x880F0344;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r7.u32);
	// add r16,r16,r3
	ctx.r16.u64 = ctx.r16.u64 + ctx.r3.u64;
	// lwz r24,56(r11)
	ctx.current_instruction = 0x880F034C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// subf r7,r26,r25
	ctx.r7.u64 = ctx.r25.u64 - ctx.r26.u64;
	// lwz r22,48(r11)
	ctx.current_instruction = 0x880F0354;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// add r17,r17,r4
	ctx.r17.u64 = ctx.r17.u64 + ctx.r4.u64;
	// lwz r14,60(r11)
	ctx.current_instruction = 0x880F035C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// add r18,r18,r5
	ctx.r18.u64 = ctx.r18.u64 + ctx.r5.u64;
	// lwz r23,52(r11)
	ctx.current_instruction = 0x880F0364;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// add r26,r19,r8
	ctx.r26.u64 = ctx.r19.u64 + ctx.r8.u64;
	// srawi r19,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r19.s64 = ctx.r16.s32 >> 2;
	// add r20,r20,r6
	ctx.r20.u64 = ctx.r20.u64 + ctx.r6.u64;
	// srawi r25,r17,2
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r17.s32 >> 2;
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// add r21,r21,r7
	ctx.r21.u64 = ctx.r21.u64 + ctx.r7.u64;
	// srawi r26,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 2;
	// srawi r20,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 1;
	// srawi r17,r21,2
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x3) != 0);
	ctx.r17.s64 = ctx.r21.s32 >> 2;
	// subf r18,r18,r8
	ctx.r18.u64 = ctx.r8.u64 - ctx.r18.u64;
	// subf r20,r7,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r7.u64;
	// subf r21,r26,r8
	ctx.r21.u64 = ctx.r8.u64 - ctx.r26.u64;
	// subf r26,r17,r7
	ctx.r26.u64 = ctx.r7.u64 - ctx.r17.u64;
	// subf r7,r5,r18
	ctx.r7.u64 = ctx.r18.u64 - ctx.r5.u64;
	// add r8,r20,r6
	ctx.r8.u64 = ctx.r20.u64 + ctx.r6.u64;
	// add r5,r21,r5
	ctx.r5.u64 = ctx.r21.u64 + ctx.r5.u64;
	// add r6,r26,r6
	ctx.r6.u64 = ctx.r26.u64 + ctx.r6.u64;
	// add r24,r24,r8
	ctx.r24.u64 = ctx.r24.u64 + ctx.r8.u64;
	// add r22,r22,r5
	ctx.r22.u64 = ctx.r22.u64 + ctx.r5.u64;
	// subf r26,r7,r14
	ctx.r26.u64 = ctx.r14.u64 - ctx.r7.u64;
	// add r23,r23,r6
	ctx.r23.u64 = ctx.r23.u64 + ctx.r6.u64;
	// add r24,r24,r7
	ctx.r24.u64 = ctx.r24.u64 + ctx.r7.u64;
	// add r21,r26,r8
	ctx.r21.u64 = ctx.r26.u64 + ctx.r8.u64;
	// srawi r22,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 1;
	// srawi r26,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r23.s32 >> 1;
	// srawi r23,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r24.s32 >> 2;
	// rlwinm r20,r4,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r3,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// subf r27,r7,r23
	ctx.r27.u64 = ctx.r23.u64 - ctx.r7.u64;
	// srawi r21,r21,2
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x3) != 0);
	ctx.r21.s64 = ctx.r21.s32 >> 2;
	// rlwinm r18,r6,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r23,r20,r19
	ctx.r23.u64 = ctx.r19.u64 - ctx.r20.u64;
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r29,r30
	ctx.r6.u64 = ctx.r29.u64 + ctx.r30.u64;
	// subf r28,r21,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r21.u64;
	// subf r29,r29,r30
	ctx.r29.u64 = ctx.r30.u64 - ctx.r29.u64;
	// subf r3,r3,r23
	ctx.r3.u64 = ctx.r23.u64 - ctx.r3.u64;
	// subf r4,r4,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r4.u64;
	// subf r30,r22,r18
	ctx.r30.u64 = ctx.r18.u64 - ctx.r22.u64;
	// add r5,r26,r5
	ctx.r5.u64 = ctx.r26.u64 + ctx.r5.u64;
	// add r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 + ctx.r8.u64;
	// lwz r27,20(r11)
	ctx.current_instruction = 0x880F0418;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r7,r28,r7
	ctx.r7.u64 = ctx.r28.u64 + ctx.r7.u64;
	// lwz r18,16(r1)
	ctx.current_instruction = 0x880F0420;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r25,8(r11)
	ctx.current_instruction = 0x880F0428;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r27,r27,r29
	ctx.r27.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lwz r21,12(r11)
	ctx.current_instruction = 0x880F0430;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mullw r26,r18,r30
	ctx.r26.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r30.s32);
	// lwz r20,0(r11)
	ctx.current_instruction = 0x880F0438;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,16(r11)
	ctx.current_instruction = 0x880F043C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mullw r24,r25,r3
	ctx.r24.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r3.s32);
	// mullw r23,r21,r8
	ctx.r23.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r8.s32);
	// srawi r11,r26,16
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 16;
	// mullw r27,r27,r20
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r20.s32);
	// srawi r22,r24,16
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFFFF) != 0);
	ctx.r22.s64 = ctx.r24.s32 >> 16;
	// add r28,r28,r6
	ctx.r28.u64 = ctx.r28.u64 + ctx.r6.u64;
	// mullw r26,r18,r7
	ctx.r26.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r7.s32);
	// srawi r23,r23,16
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xFFFF) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 16;
	// srawi r24,r27,16
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFF) != 0);
	ctx.r24.s64 = ctx.r27.s32 >> 16;
	// mullw r19,r25,r4
	ctx.r19.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r4.s32);
	// mullw r27,r21,r5
	ctx.r27.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r5.s32);
	// srawi r25,r26,16
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFFFF) != 0);
	ctx.r25.s64 = ctx.r26.s32 >> 16;
	// mullw r21,r28,r20
	ctx.r21.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r20.s32);
	// srawi r26,r19,16
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0xFFFF) != 0);
	ctx.r26.s64 = ctx.r19.s32 >> 16;
	// srawi r28,r27,16
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFF) != 0);
	ctx.r28.s64 = ctx.r27.s32 >> 16;
	// srawi r27,r21,16
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFFFF) != 0);
	ctx.r27.s64 = ctx.r21.s32 >> 16;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r3,r22,r3
	ctx.r3.u64 = ctx.r22.u64 + ctx.r3.u64;
	// add r27,r27,r6
	ctx.r27.u64 = ctx.r27.u64 + ctx.r6.u64;
	// sth r11,-94(r9)
	ctx.current_instruction = 0x880F048C;
	REX_STORE_U16(ctx.r9.u32 + -94, ctx.r11.u16);
	// add r8,r23,r8
	ctx.r8.u64 = ctx.r23.u64 + ctx.r8.u64;
	// sth r3,-78(r9)
	ctx.current_instruction = 0x880F0494;
	REX_STORE_U16(ctx.r9.u32 + -78, ctx.r3.u16);
	// add r30,r24,r29
	ctx.r30.u64 = ctx.r24.u64 + ctx.r29.u64;
	// sth r27,-110(r9)
	ctx.current_instruction = 0x880F049C;
	REX_STORE_U16(ctx.r9.u32 + -110, ctx.r27.u16);
	// add r7,r25,r7
	ctx.r7.u64 = ctx.r25.u64 + ctx.r7.u64;
	// sth r8,-62(r9)
	ctx.current_instruction = 0x880F04A4;
	REX_STORE_U16(ctx.r9.u32 + -62, ctx.r8.u16);
	// add r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 + ctx.r4.u64;
	// add r6,r28,r5
	ctx.r6.u64 = ctx.r28.u64 + ctx.r5.u64;
	// extsh r5,r30
	ctx.r5.s64 = ctx.r30.s16;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// sth r5,-46(r9)
	ctx.current_instruction = 0x880F04BC;
	REX_STORE_U16(ctx.r9.u32 + -46, ctx.r5.u16);
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// sth r3,-30(r9)
	ctx.current_instruction = 0x880F04C4;
	REX_STORE_U16(ctx.r9.u32 + -30, ctx.r3.u16);
	// sth r11,-14(r9)
	ctx.current_instruction = 0x880F04C8;
	REX_STORE_U16(ctx.r9.u32 + -14, ctx.r11.u16);
	// sthu r8,2(r9)
	ctx.current_instruction = 0x880F04CC;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x880f02d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F02D4;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F94F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F94F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F94F8) {
			switch (rex_dispatch_address) {
				case 0x880F952C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F94F8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F952C: goto loc_880F952C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880F94FC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880F9500;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880F9504;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.current_instruction = 0x880F9508;
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
	ctx.current_instruction = 0x880F9520;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzx r3,r8,r3
	ctx.current_instruction = 0x880F9524;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// bl 0x880f91d0
	ctx.lr = 0x880F952C;
	sub_880F91D0(ctx, base);
loc_880F952C:
	// lwz r11,88(r31)
	ctx.current_instruction = 0x880F952C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r3,0(r11)
	ctx.current_instruction = 0x880F9534;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,88(r31)
	ctx.current_instruction = 0x880F9538;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880F9540;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880F9548;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880FA088) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FA088;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FA088) {
			switch (rex_dispatch_address) {
				case 0x880FA090:
				case 0x880FA0E8:
				case 0x880FA140:
				case 0x880FA174:
				case 0x880FA18C:
				case 0x880FA19C:
				case 0x880FA1D0:
				case 0x880FA1EC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FA088;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FA090: goto loc_880FA090;
		case 0x880FA0E8: goto loc_880FA0E8;
		case 0x880FA140: goto loc_880FA140;
		case 0x880FA174: goto loc_880FA174;
		case 0x880FA18C: goto loc_880FA18C;
		case 0x880FA19C: goto loc_880FA19C;
		case 0x880FA1D0: goto loc_880FA1D0;
		case 0x880FA1EC: goto loc_880FA1EC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880FA090;
	__savegprlr_26(ctx, base);
loc_880FA090:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880FA090;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,30728(r3)
	ctx.current_instruction = 0x880FA094;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30728);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fa0bc
	if (ctx.cr6.eq) goto loc_880FA0BC;
	// lwz r30,30784(r3)
	ctx.current_instruction = 0x880FA0B0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 30784);
	// lwz r29,30788(r3)
	ctx.current_instruction = 0x880FA0B4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 30788);
	// b 0x880fa0c4
	goto loc_880FA0C4;
loc_880FA0BC:
	// lwz r30,30752(r31)
	ctx.current_instruction = 0x880FA0BC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 30752);
	// lwz r29,30756(r31)
	ctx.current_instruction = 0x880FA0C0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 30756);
loc_880FA0C4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x880fa0d4
	if (ctx.cr6.gt) goto loc_880FA0D4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x880fa0d8
	if (!ctx.cr6.gt) goto loc_880FA0D8;
loc_880FA0D4:
	// li r28,1
	ctx.r28.s64 = 1;
loc_880FA0D8:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FA0DC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FA0E8;
	sub_880E6960(ctx, base);
loc_880FA0E8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x880fa140
	if (ctx.cr6.eq) goto loc_880FA140;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x880fa100
	if (!ctx.cr6.eq) goto loc_880FA100;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// b 0x880fa130
	goto loc_880FA130;
loc_880FA100:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x880fa130
	if (!ctx.cr6.gt) goto loc_880FA130;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bge cr6,0x880fa120
	if (!ctx.cr6.lt) goto loc_880FA120;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x880fa12c
	if (ctx.cr6.eq) goto loc_880FA12C;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
loc_880FA120:
	// bne cr6,0x880fa130
	if (!ctx.cr6.eq) goto loc_880FA130;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// bne cr6,0x880fa130
	if (!ctx.cr6.eq) goto loc_880FA130;
loc_880FA12C:
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
loc_880FA130:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FA134;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FA140;
	sub_880E6960(ctx, base);
loc_880FA140:
	// lwz r11,30648(r31)
	ctx.current_instruction = 0x880FA140;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30648);
	// lwz r10,796(r31)
	ctx.current_instruction = 0x880FA144;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880fa160
	if (!ctx.cr6.eq) goto loc_880FA160;
	// lwz r11,800(r31)
	ctx.current_instruction = 0x880FA150;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r10,30652(r31)
	ctx.current_instruction = 0x880FA154;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30652);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880fa164
	if (ctx.cr6.eq) goto loc_880FA164;
loc_880FA160:
	// li r26,1
	ctx.r26.s64 = 1;
loc_880FA164:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FA168;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FA174;
	sub_880E6960(ctx, base);
loc_880FA174:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x880fa1ec
	if (ctx.cr6.eq) goto loc_880FA1EC;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,30708(r31)
	ctx.current_instruction = 0x880FA180;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 30708);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FA184;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x880FA18C;
	sub_880E6960(ctx, base);
loc_880FA18C:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FA190;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r4,30712(r31)
	ctx.current_instruction = 0x880FA194;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 30712);
	// bl 0x880e6960
	ctx.lr = 0x880FA19C;
	sub_880E6960(ctx, base);
loc_880FA19C:
	// lwz r11,30708(r31)
	ctx.current_instruction = 0x880FA19C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fa1ec
	if (!ctx.cr6.eq) goto loc_880FA1EC;
	// lwz r11,30712(r31)
	ctx.current_instruction = 0x880FA1A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fa1ec
	if (!ctx.cr6.eq) goto loc_880FA1EC;
	// lwz r11,796(r31)
	ctx.current_instruction = 0x880FA1B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FA1BC;
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
	ctx.lr = 0x880FA1D0;
	sub_880E6960(ctx, base);
loc_880FA1D0:
	// lwz r9,800(r31)
	ctx.current_instruction = 0x880FA1D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FA1D8;
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
	ctx.lr = 0x880FA1EC;
	sub_880E6960(ctx, base);
loc_880FA1EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FFBE8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FFBE8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FFBE8) {
			switch (rex_dispatch_address) {
				case 0x880FFBF0:
				case 0x880FFCBC:
				case 0x880FFDC8:
				case 0x880FFE58:
				case 0x880FFE90:
				case 0x880FFEC4:
				case 0x880FFF00:
				case 0x880FFF48:
				case 0x880FFF7C:
				case 0x880FFFB8:
				case 0x88100000:
				case 0x88100034:
				case 0x88100070:
				case 0x881000B8:
				case 0x881000EC:
				case 0x88100138:
				case 0x8810016C:
				case 0x88100218:
				case 0x8810024C:
				case 0x88100280:
				case 0x881002BC:
				case 0x881002F0:
				case 0x88100324:
				case 0x88100360:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FFBE8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FFBF0: goto loc_880FFBF0;
		case 0x880FFCBC: goto loc_880FFCBC;
		case 0x880FFDC8: goto loc_880FFDC8;
		case 0x880FFE58: goto loc_880FFE58;
		case 0x880FFE90: goto loc_880FFE90;
		case 0x880FFEC4: goto loc_880FFEC4;
		case 0x880FFF00: goto loc_880FFF00;
		case 0x880FFF48: goto loc_880FFF48;
		case 0x880FFF7C: goto loc_880FFF7C;
		case 0x880FFFB8: goto loc_880FFFB8;
		case 0x88100000: goto loc_88100000;
		case 0x88100034: goto loc_88100034;
		case 0x88100070: goto loc_88100070;
		case 0x881000B8: goto loc_881000B8;
		case 0x881000EC: goto loc_881000EC;
		case 0x88100138: goto loc_88100138;
		case 0x8810016C: goto loc_8810016C;
		case 0x88100218: goto loc_88100218;
		case 0x8810024C: goto loc_8810024C;
		case 0x88100280: goto loc_88100280;
		case 0x881002BC: goto loc_881002BC;
		case 0x881002F0: goto loc_881002F0;
		case 0x88100324: goto loc_88100324;
		case 0x88100360: goto loc_88100360;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880FFBF0;
	__savegprlr_14(ctx, base);
loc_880FFBF0:
	// stwu r1,-272(r1)
	ctx.current_instruction = 0x880FFBF0;
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,356(r1)
	ctx.current_instruction = 0x880FFBF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// lwz r7,364(r1)
	ctx.current_instruction = 0x880FFC00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// stw r5,308(r1)
	ctx.current_instruction = 0x880FFC04;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// lwz r8,1564(r3)
	ctx.current_instruction = 0x880FFC0C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1564);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r5,380(r1)
	ctx.current_instruction = 0x880FFC14;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,316(r1)
	ctx.current_instruction = 0x880FFC1C;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// subf r6,r11,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r9,r17,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r17.u64;
	// lwz r3,396(r1)
	ctx.current_instruction = 0x880FFC28;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cntlzw r4,r8
	ctx.r4.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r8,372(r1)
	ctx.current_instruction = 0x880FFC30;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// subf r7,r17,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r17.u64;
	// lwz r5,388(r1)
	ctx.current_instruction = 0x880FFC38;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// lwz r30,404(r1)
	ctx.current_instruction = 0x880FFC40;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lwz r22,412(r1)
	ctx.current_instruction = 0x880FFC48;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// stw r10,84(r1)
	ctx.current_instruction = 0x880FFC50;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// stw r9,88(r1)
	ctx.current_instruction = 0x880FFC58;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// subf r3,r17,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r17.u64;
	// stw r7,100(r1)
	ctx.current_instruction = 0x880FFC60;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r11,r11,23304
	ctx.r11.s64 = ctx.r11.s64 + 23304;
	// stw r6,80(r1)
	ctx.current_instruction = 0x880FFC68;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// li r14,32
	ctx.r14.s64 = 32;
	// stw r3,104(r1)
	ctx.current_instruction = 0x880FFC70;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r8,92(r1)
	ctx.current_instruction = 0x880FFC78;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// rlwinm r29,r4,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stw r5,96(r1)
	ctx.current_instruction = 0x880FFC80;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// stw r11,108(r1)
	ctx.current_instruction = 0x880FFC88;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
	// subf r15,r16,r30
	ctx.r15.u64 = ctx.r30.u64 - ctx.r16.u64;
loc_880FFC94:
	// addi r11,r21,74
	ctx.r11.s64 = ctx.r21.s64 + 74;
	// lbzx r11,r11,r23
	ctx.current_instruction = 0x880FFC98;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880ffcc0
	if (ctx.cr6.eq) goto loc_880FFCC0;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881103e8
	ctx.lr = 0x880FFCBC;
	sub_881103E8(ctx, base);
loc_880FFCBC:
	// b 0x88100364
	goto loc_88100364;
loc_880FFCC0:
	// lbz r11,147(r21)
	ctx.current_instruction = 0x880FFCC0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 147);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// and r9,r10,r14
	ctx.r9.u64 = ctx.r10.u64 & ctx.r14.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880ffd24
	if (ctx.cr6.eq) goto loc_880FFD24;
	// lbz r11,88(r21)
	ctx.current_instruction = 0x880FFCD4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x880ffd24
	if (!ctx.cr6.eq) goto loc_880FFD24;
	// lwz r11,316(r1)
	ctx.current_instruction = 0x880FFCE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// srawi r10,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r23.s32 >> 1;
	// lwz r8,720(r31)
	ctx.current_instruction = 0x880FFCE8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// clrlwi r9,r23,31
	ctx.r9.u64 = ctx.r23.u32 & 0x1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,308(r1)
	ctx.current_instruction = 0x880FFCF4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r6,2324(r31)
	ctx.current_instruction = 0x880FFCF8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r5,r8
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r6
	ctx.current_instruction = 0x880FFD14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88100364
	if (ctx.cr6.eq) goto loc_88100364;
loc_880FFD24:
	// lbz r11,146(r21)
	ctx.current_instruction = 0x880FFD24;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 146);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// and r9,r10,r14
	ctx.r9.u64 = ctx.r10.u64 & ctx.r14.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88100364
	if (ctx.cr6.eq) goto loc_88100364;
	// lwz r11,0(r21)
	ctx.current_instruction = 0x880FFD38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880ffde0
	if (ctx.cr6.eq) goto loc_880FFDE0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x880ffde0
	if (ctx.cr6.eq) goto loc_880FFDE0;
	// add r10,r23,r21
	ctx.r10.u64 = ctx.r23.u64 + ctx.r21.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r9,56(r10)
	ctx.current_instruction = 0x880FFD58;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 56);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880ffda8
	if (ctx.cr6.eq) goto loc_880FFDA8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880ffd80
	if (!ctx.cr6.eq) goto loc_880FFD80;
	// add r11,r23,r21
	ctx.r11.u64 = ctx.r23.u64 + ctx.r21.u64;
	// lbz r10,128(r11)
	ctx.current_instruction = 0x880FFD74;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 128);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// b 0x880ffda8
	goto loc_880FFDA8;
loc_880FFD80:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x880ffd9c
	if (!ctx.cr6.eq) goto loc_880FFD9C;
	// add r11,r23,r21
	ctx.r11.u64 = ctx.r23.u64 + ctx.r21.u64;
	// lbz r10,134(r11)
	ctx.current_instruction = 0x880FFD8C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 134);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x880ffda8
	goto loc_880FFDA8;
loc_880FFD9C:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x880ffda8
	if (!ctx.cr6.eq) goto loc_880FFDA8;
	// li r11,7
	ctx.r11.s64 = 7;
loc_880FFDA8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,30212(r31)
	ctx.current_instruction = 0x880FFDAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30212);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FFDB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// rlwinm r30,r10,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880FFDBC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880FFDC0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x880FFDC8;
	sub_880E6960(ctx, base);
loc_880FFDC8:
	// lwz r11,30212(r31)
	ctx.current_instruction = 0x880FFDC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30212);
	// lwz r10,30180(r31)
	ctx.current_instruction = 0x880FFDCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30180);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.current_instruction = 0x880FFDD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,30180(r31)
	ctx.current_instruction = 0x880FFDDC;
	REX_STORE_U32(ctx.r31.u32 + 30180, ctx.r8.u32);
loc_880FFDE0:
	// add r11,r23,r21
	ctx.r11.u64 = ctx.r23.u64 + ctx.r21.u64;
	// lbz r11,56(r11)
	ctx.current_instruction = 0x880FFDE4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x88100360
	if (ctx.cr6.gt) goto loc_88100360;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88100110
	if (ctx.cr6.eq) goto loc_88100110;
	// bdz 0x88100190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88100190;
	// bdz 0x881001b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_881001B8;
	// bdz 0x88100360
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88100360;
	// add r27,r23,r21
	ctx.r27.u64 = ctx.r23.u64 + ctx.r21.u64;
	// lwz r11,30216(r31)
	ctx.current_instruction = 0x880FFE0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30216);
	// lwz r9,30180(r31)
	ctx.current_instruction = 0x880FFE10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 30180);
	// add r29,r15,r18
	ctx.r29.u64 = ctx.r15.u64 + ctx.r18.u64;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FFE18;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lbz r10,140(r27)
	ctx.current_instruction = 0x880FFE20;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + 140);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r7)
	ctx.current_instruction = 0x880FFE30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,30180(r31)
	ctx.current_instruction = 0x880FFE38;
	REX_STORE_U32(ctx.r31.u32 + 30180, ctx.r6.u32);
	// lbz r5,140(r27)
	ctx.current_instruction = 0x880FFE3C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r27.u32 + 140);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880FFE4C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880FFE50;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x880FFE58;
	sub_880E6960(ctx, base);
loc_880FFE58:
	// lbz r3,140(r27)
	ctx.current_instruction = 0x880FFE58;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r27.u32 + 140);
	// rlwinm r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fff10
	if (ctx.cr6.eq) goto loc_880FFF10;
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880FFE68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ffe90
	if (ctx.cr6.eq) goto loc_880FFE90;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ff798
	ctx.lr = 0x880FFE90;
	sub_880FF798(ctx, base);
loc_880FFE90:
	// lhz r11,0(r22)
	ctx.current_instruction = 0x880FFE90;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r22.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r9.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x880ffedc
	if (!ctx.cr0.gt) goto loc_880FFEDC;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_880FFEA8:
	// lhz r10,6(r29)
	ctx.current_instruction = 0x880FFEA8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzu r11,4(r29)
	ctx.current_instruction = 0x880FFEB0;
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lwz r4,7868(r31)
	ctx.current_instruction = 0x880FFEB8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x8810e9e0
	ctx.lr = 0x880FFEC4;
	sub_8810E9E0(ctx, base);
loc_880FFEC4:
	// lhz r9,0(r22)
	ctx.current_instruction = 0x880FFEC4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r22.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880ffea8
	if (ctx.cr6.lt) goto loc_880FFEA8;
loc_880FFEDC:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,7868(r31)
	ctx.current_instruction = 0x880FFEE0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x880FFEEC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.current_instruction = 0x880FFEF0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// bl 0x8810ebb0
	ctx.lr = 0x880FFF00;
	sub_8810EBB0(ctx, base);
loc_880FFF00:
	// lhz r8,0(r22)
	ctx.current_instruction = 0x880FFF00;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r22.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_880FFF10:
	// lbz r11,140(r27)
	ctx.current_instruction = 0x880FFF10;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 140);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880fffc8
	if (ctx.cr6.eq) goto loc_880FFFC8;
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880FFF20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fff48
	if (ctx.cr6.eq) goto loc_880FFF48;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r22,2
	ctx.r5.s64 = ctx.r22.s64 + 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ff798
	ctx.lr = 0x880FFF48;
	sub_880FF798(ctx, base);
loc_880FFF48:
	// lhz r11,2(r22)
	ctx.current_instruction = 0x880FFF48;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r22.u32 + 2);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r9.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x880fff94
	if (!ctx.cr0.gt) goto loc_880FFF94;
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
loc_880FFF60:
	// lhz r10,6(r29)
	ctx.current_instruction = 0x880FFF60;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzu r11,4(r29)
	ctx.current_instruction = 0x880FFF68;
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lwz r4,7868(r31)
	ctx.current_instruction = 0x880FFF70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x8810e9e0
	ctx.lr = 0x880FFF7C;
	sub_8810E9E0(ctx, base);
loc_880FFF7C:
	// lhz r9,2(r22)
	ctx.current_instruction = 0x880FFF7C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r22.u32 + 2);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880fff60
	if (ctx.cr6.lt) goto loc_880FFF60;
loc_880FFF94:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,7868(r31)
	ctx.current_instruction = 0x880FFF98;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x880FFFA4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.current_instruction = 0x880FFFA8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// bl 0x8810ebb0
	ctx.lr = 0x880FFFB8;
	sub_8810EBB0(ctx, base);
loc_880FFFB8:
	// lhz r8,2(r22)
	ctx.current_instruction = 0x880FFFB8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r22.u32 + 2);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_880FFFC8:
	// lbz r11,140(r27)
	ctx.current_instruction = 0x880FFFC8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 140);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88100080
	if (ctx.cr6.eq) goto loc_88100080;
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880FFFD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88100000
	if (ctx.cr6.eq) goto loc_88100000;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r22,4
	ctx.r5.s64 = ctx.r22.s64 + 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ff798
	ctx.lr = 0x88100000;
	sub_880FF798(ctx, base);
loc_88100000:
	// lhz r11,4(r22)
	ctx.current_instruction = 0x88100000;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r22.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r9.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8810004c
	if (!ctx.cr0.gt) goto loc_8810004C;
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
loc_88100018:
	// lhz r10,6(r29)
	ctx.current_instruction = 0x88100018;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzu r11,4(r29)
	ctx.current_instruction = 0x88100020;
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lwz r4,7868(r31)
	ctx.current_instruction = 0x88100028;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x8810e9e0
	ctx.lr = 0x88100034;
	sub_8810E9E0(ctx, base);
loc_88100034:
	// lhz r9,4(r22)
	ctx.current_instruction = 0x88100034;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r22.u32 + 4);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88100018
	if (ctx.cr6.lt) goto loc_88100018;
loc_8810004C:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,7868(r31)
	ctx.current_instruction = 0x88100050;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x8810005C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.current_instruction = 0x88100060;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// bl 0x8810ebb0
	ctx.lr = 0x88100070;
	sub_8810EBB0(ctx, base);
loc_88100070:
	// lhz r8,4(r22)
	ctx.current_instruction = 0x88100070;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r22.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_88100080:
	// lbz r11,140(r27)
	ctx.current_instruction = 0x88100080;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 140);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88100360
	if (ctx.cr6.eq) goto loc_88100360;
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x88100090;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881000b8
	if (ctx.cr6.eq) goto loc_881000B8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r22,6
	ctx.r5.s64 = ctx.r22.s64 + 6;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ff798
	ctx.lr = 0x881000B8;
	sub_880FF798(ctx, base);
loc_881000B8:
	// lhz r11,6(r22)
	ctx.current_instruction = 0x881000B8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r22.u32 + 6);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r9.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x88100104
	if (!ctx.cr0.gt) goto loc_88100104;
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
loc_881000D0:
	// lhz r10,6(r29)
	ctx.current_instruction = 0x881000D0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzu r11,4(r29)
	ctx.current_instruction = 0x881000D8;
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lwz r4,7868(r31)
	ctx.current_instruction = 0x881000E0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x8810e9e0
	ctx.lr = 0x881000EC;
	sub_8810E9E0(ctx, base);
loc_881000EC:
	// lhz r9,6(r22)
	ctx.current_instruction = 0x881000EC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r22.u32 + 6);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x881000d0
	if (ctx.cr6.lt) goto loc_881000D0;
loc_88100104:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x88100344
	goto loc_88100344;
loc_88100110:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x88100110;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88100138
	if (ctx.cr6.eq) goto loc_88100138;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ff798
	ctx.lr = 0x88100138;
	sub_880FF798(ctx, base);
loc_88100138:
	// lhz r11,0(r20)
	ctx.current_instruction = 0x88100138;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r9.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x88100184
	if (!ctx.cr0.gt) goto loc_88100184;
	// addi r29,r18,-4
	ctx.r29.s64 = ctx.r18.s64 + -4;
loc_88100150:
	// lhz r10,6(r29)
	ctx.current_instruction = 0x88100150;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzu r11,4(r29)
	ctx.current_instruction = 0x88100158;
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lwz r4,7868(r31)
	ctx.current_instruction = 0x88100160;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x8810e9e0
	ctx.lr = 0x8810016C;
	sub_8810E9E0(ctx, base);
loc_8810016C:
	// lhz r9,0(r20)
	ctx.current_instruction = 0x8810016C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88100150
	if (ctx.cr6.lt) goto loc_88100150;
loc_88100184:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// b 0x88100344
	goto loc_88100344;
loc_88100190:
	// add r11,r23,r21
	ctx.r11.u64 = ctx.r23.u64 + ctx.r21.u64;
	// lwz r9,84(r1)
	ctx.current_instruction = 0x88100194;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.current_instruction = 0x88100198;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x881001A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r28,r9,r20
	ctx.r28.u64 = ctx.r9.u64 + ctx.r20.u64;
	// add r26,r8,r20
	ctx.r26.u64 = ctx.r8.u64 + ctx.r20.u64;
	// lbz r7,128(r11)
	ctx.current_instruction = 0x881001AC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 128);
	// extsb r25,r7
	ctx.r25.s64 = ctx.r7.s8;
	// b 0x881001e0
	goto loc_881001E0;
loc_881001B8:
	// add r11,r23,r21
	ctx.r11.u64 = ctx.r23.u64 + ctx.r21.u64;
	// lwz r9,96(r1)
	ctx.current_instruction = 0x881001BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,100(r1)
	ctx.current_instruction = 0x881001C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,104(r1)
	ctx.current_instruction = 0x881001C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r24,r9,r19
	ctx.r24.u64 = ctx.r9.u64 + ctx.r19.u64;
	// lwz r10,92(r1)
	ctx.current_instruction = 0x881001CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r28,r8,r20
	ctx.r28.u64 = ctx.r8.u64 + ctx.r20.u64;
	// add r26,r7,r20
	ctx.r26.u64 = ctx.r7.u64 + ctx.r20.u64;
	// lbz r6,134(r11)
	ctx.current_instruction = 0x881001D8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 134);
	// extsb r25,r6
	ctx.r25.s64 = ctx.r6.s8;
loc_881001E0:
	// add r27,r10,r19
	ctx.r27.u64 = ctx.r10.u64 + ctx.r19.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x88100218
	if (ctx.cr6.eq) goto loc_88100218;
	// lwz r11,0(r21)
	ctx.current_instruction = 0x881001EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88100218
	if (!ctx.cr6.eq) goto loc_88100218;
	// lwz r11,108(r1)
	ctx.current_instruction = 0x881001FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r10,r25,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88100204;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r4,r10,r11
	ctx.current_instruction = 0x8810020C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r10,r9
	ctx.current_instruction = 0x88100210;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x880e6960
	ctx.lr = 0x88100218;
	sub_880E6960(ctx, base);
loc_88100218:
	// rlwinm r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881002bc
	if (ctx.cr6.eq) goto loc_881002BC;
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x88100224;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8810024c
	if (ctx.cr6.eq) goto loc_8810024C;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ff798
	ctx.lr = 0x8810024C;
	sub_880FF798(ctx, base);
loc_8810024C:
	// lhz r11,0(r28)
	ctx.current_instruction = 0x8810024C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r9.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x88100298
	if (!ctx.cr0.gt) goto loc_88100298;
	// addi r29,r27,-4
	ctx.r29.s64 = ctx.r27.s64 + -4;
loc_88100264:
	// lhz r10,6(r29)
	ctx.current_instruction = 0x88100264;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzu r11,4(r29)
	ctx.current_instruction = 0x8810026C;
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lwz r4,7868(r31)
	ctx.current_instruction = 0x88100274;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x8810e9e0
	ctx.lr = 0x88100280;
	sub_8810E9E0(ctx, base);
loc_88100280:
	// lhz r9,0(r28)
	ctx.current_instruction = 0x88100280;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88100264
	if (ctx.cr6.lt) goto loc_88100264;
loc_88100298:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,7868(r31)
	ctx.current_instruction = 0x8810029C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x881002A8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.current_instruction = 0x881002AC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// bl 0x8810ebb0
	ctx.lr = 0x881002BC;
	sub_8810EBB0(ctx, base);
loc_881002BC:
	// clrlwi r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88100360
	if (ctx.cr6.eq) goto loc_88100360;
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x881002C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881002f0
	if (ctx.cr6.eq) goto loc_881002F0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ff798
	ctx.lr = 0x881002F0;
	sub_880FF798(ctx, base);
loc_881002F0:
	// lhz r11,0(r26)
	ctx.current_instruction = 0x881002F0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r9.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8810033c
	if (!ctx.cr0.gt) goto loc_8810033C;
	// addi r29,r24,-4
	ctx.r29.s64 = ctx.r24.s64 + -4;
loc_88100308:
	// lhz r10,6(r29)
	ctx.current_instruction = 0x88100308;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzu r11,4(r29)
	ctx.current_instruction = 0x88100310;
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lwz r4,7868(r31)
	ctx.current_instruction = 0x88100318;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x8810e9e0
	ctx.lr = 0x88100324;
	sub_8810E9E0(ctx, base);
loc_88100324:
	// lhz r9,0(r26)
	ctx.current_instruction = 0x88100324;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88100308
	if (ctx.cr6.lt) goto loc_88100308;
loc_8810033C:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_88100344:
	// lhz r10,0(r11)
	ctx.current_instruction = 0x88100344;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r9,2(r11)
	ctx.current_instruction = 0x8810034C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// lwz r4,7868(r31)
	ctx.current_instruction = 0x88100354;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// bl 0x8810ebb0
	ctx.lr = 0x88100360;
	sub_8810EBB0(ctx, base);
loc_88100360:
	// li r29,1
	ctx.r29.s64 = 1;
loc_88100364:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r22,r22,8
	ctx.r22.s64 = ctx.r22.s64 + 8;
	// addi r18,r18,256
	ctx.r18.s64 = ctx.r18.s64 + 256;
	// addi r19,r19,128
	ctx.r19.s64 = ctx.r19.s64 + 128;
	// addi r20,r20,2
	ctx.r20.s64 = ctx.r20.s64 + 2;
	// srawi r14,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r14.s32 >> 1;
	// cmpwi cr6,r23,6
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 6, ctx.xer);
	// blt cr6,0x880ffc94
	if (ctx.cr6.lt) goto loc_880FFC94;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88111038) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88111038);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88111038;
	ctx.current_instruction = 0x88111038;
	uint32_t ea{};
	// lvx128 v127,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v126,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v125,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v124,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v123,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v122,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v121,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v120,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v119,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v118,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v117,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v116,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v115,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v114,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v113,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v112,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v111,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v110,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v109,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v108,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v107,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v106,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v105,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v104,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v103,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v102,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v101,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v100,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v99,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v99.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v98,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v98.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v97,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v97.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v96,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v96.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v95,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v95.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v94,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v94.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v93,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v93.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v92,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v92.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v91,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v91.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v90,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v90.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v89,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v89.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v88,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v88.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v87,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v87.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v86,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v86.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v85,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v85.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v84,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v84.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v83,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v83.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v82,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v82.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v81,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v81.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v80,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v80.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v79,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v79.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v78,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v78.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v77,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v77.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v76,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v76.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v75,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v75.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v74,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v74.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v73,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v73.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v72,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v72.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v71,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v71.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v70,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v70.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v69,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v69.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v68,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v68.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v67,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v67.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v66,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v66.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v65,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v64,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v61,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v60,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v58,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v57,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v56,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v55,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v54,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v53,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v52,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v51,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v50,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v49,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v48,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v47,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v46,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v44,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v43,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v42,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v41,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v40,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v39,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v38,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v37,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v36,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v35,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v34,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v33,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v32,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8811F4C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811F4C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811F4C0) {
			switch (rex_dispatch_address) {
				case 0x8811F4C8:
				case 0x8811F520:
				case 0x8811F540:
				case 0x8811F560:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811F4C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811F4C8: goto loc_8811F4C8;
		case 0x8811F520: goto loc_8811F520;
		case 0x8811F540: goto loc_8811F540;
		case 0x8811F560: goto loc_8811F560;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8811F4C8;
	__savegprlr_28(ctx, base);
loc_8811F4C8:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8811F4C8;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,88(r1)
	ctx.current_instruction = 0x8811F4D8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8811F4E0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8811f4fc
	if (!ctx.cr6.eq) goto loc_8811F4FC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_8811F4FC:
	// lwz r30,28(r31)
	ctx.current_instruction = 0x8811F4FC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,24
	ctx.r11.s64 = 24;
	// li r4,24
	ctx.r4.s64 = 24;
	// stw r11,80(r1)
	ctx.current_instruction = 0x8811F508;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.current_instruction = 0x8811F50C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,12(r10)
	ctx.current_instruction = 0x8811F514;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8811F520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811F520:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811f598
	if (ctx.cr6.lt) goto loc_8811F598;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881196f8
	ctx.lr = 0x8811F540;
	sub_881196F8(ctx, base);
loc_8811F540:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811f598
	if (ctx.cr6.lt) goto loc_8811F598;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88119528
	ctx.lr = 0x8811F560;
	sub_88119528(ctx, base);
loc_8811F560:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811f598
	if (ctx.cr6.lt) goto loc_8811F598;
	// ld r11,0(r28)
	ctx.current_instruction = 0x8811F568;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + 0);
	// cmpldi cr6,r11,24
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 24, ctx.xer);
	// blt cr6,0x8811f590
	if (ctx.cr6.lt) goto loc_8811F590;
	// ld r10,8(r30)
	ctx.current_instruction = 0x8811F574;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.current_instruction = 0x8811F578;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,-24
	ctx.r8.s64 = ctx.r11.s64 + -24;
	// lwz r7,4(r9)
	ctx.current_instruction = 0x8811F584;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// ble cr6,0x8811f598
	if (!ctx.cr6.gt) goto loc_8811F598;
loc_8811F590:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
loc_8811F598:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881224B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881224B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881224B8) {
			switch (rex_dispatch_address) {
				case 0x881224C0:
				case 0x88122534:
				case 0x881225B0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881224B8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881224C0: goto loc_881224C0;
		case 0x88122534: goto loc_88122534;
		case 0x881225B0: goto loc_881225B0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881224C0;
	__savegprlr_28(ctx, base);
loc_881224C0:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881224C0;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x881224C4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	ctx.current_instruction = 0x881224D0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,24(r31)
	ctx.current_instruction = 0x881224D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881224ec
	if (!ctx.cr6.eq) goto loc_881224EC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_881224EC:
	// lwz r11,16(r31)
	ctx.current_instruction = 0x881224EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r11)
	ctx.current_instruction = 0x881224F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	ctx.current_instruction = 0x881224F8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x881225c8
	if (ctx.cr6.eq) goto loc_881225C8;
loc_88122500:
	// lwz r4,0(r11)
	ctx.current_instruction = 0x88122500;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,8(r4)
	ctx.current_instruction = 0x88122504;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// cmpld cr6,r10,r29
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r29.u64, ctx.xer);
	// bgt cr6,0x881225c8
	if (ctx.cr6.gt) goto loc_881225C8;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88122510;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	ctx.current_instruction = 0x88122514;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881225b8
	if (!ctx.cr6.eq) goto loc_881225B8;
	// lwz r11,76(r31)
	ctx.current_instruction = 0x88122520;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88122528;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88122534;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88122534:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881225c8
	if (ctx.cr6.lt) goto loc_881225C8;
	// lwz r11,144(r31)
	ctx.current_instruction = 0x8812253C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,140(r31)
	ctx.current_instruction = 0x88122540;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,144(r31)
	ctx.current_instruction = 0x88122548;
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812254C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,12(r11)
	ctx.current_instruction = 0x88122550;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,8(r11)
	ctx.current_instruction = 0x88122554;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r8)
	ctx.current_instruction = 0x88122558;
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812255C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,8(r11)
	ctx.current_instruction = 0x88122560;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8812257c
	if (ctx.cr6.eq) goto loc_8812257C;
	// lwz r9,12(r11)
	ctx.current_instruction = 0x8812256C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,12(r10)
	ctx.current_instruction = 0x88122574;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// b 0x88122584
	goto loc_88122584;
loc_8812257C:
	// lwz r11,12(r11)
	ctx.current_instruction = 0x8812257C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,20(r31)
	ctx.current_instruction = 0x88122580;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_88122584:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x88122584;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	ctx.current_instruction = 0x8812258C;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bne 0x881225a0
	if (!ctx.cr0.eq) goto loc_881225A0;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x88122594;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r28,8(r11)
	ctx.current_instruction = 0x88122598;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,20(r31)
	ctx.current_instruction = 0x8812259C;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_881225A0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r31)
	ctx.current_instruction = 0x881225A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x880cb318
	ctx.lr = 0x881225B0;
	sub_880CB318(ctx, base);
loc_881225B0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881225c8
	if (ctx.cr6.lt) goto loc_881225C8;
loc_881225B8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,80(r1)
	ctx.current_instruction = 0x881225BC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x88122500
	if (!ctx.cr6.eq) goto loc_88122500;
loc_881225C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88123BB0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88123BB0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88123BB0;
	ctx.current_instruction = 0x88123BB0;
	// lwz r9,44(r3)
	ctx.current_instruction = 0x88123BB0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r4)
	ctx.current_instruction = 0x88123BB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,8(r4)
	ctx.current_instruction = 0x88123BBC;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r8,12(r4)
	ctx.current_instruction = 0x88123BC0;
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// lwz r10,16(r9)
	ctx.current_instruction = 0x88123BC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// ld r7,8(r11)
	ctx.current_instruction = 0x88123BC8;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r11,8(r10)
	ctx.current_instruction = 0x88123BCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88123bfc
	if (!ctx.cr6.eq) goto loc_88123BFC;
	// stw r4,8(r10)
	ctx.current_instruction = 0x88123BD8;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r4)
	ctx.current_instruction = 0x88123BE0;
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r11,8(r10)
	ctx.current_instruction = 0x88123BE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,20(r9)
	ctx.current_instruction = 0x88123BE8;
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r9)
	ctx.current_instruction = 0x88123BEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r9)
	ctx.current_instruction = 0x88123BF4;
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88123BFC:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88123BFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r6,8(r10)
	ctx.current_instruction = 0x88123C00;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r7,r6
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r6.u64, ctx.xer);
	// bge cr6,0x88123c48
	if (!ctx.cr6.lt) goto loc_88123C48;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88123C0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88123c28
	if (!ctx.cr6.eq) goto loc_88123C28;
	// stw r11,12(r4)
	ctx.current_instruction = 0x88123C18;
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r8,8(r4)
	ctx.current_instruction = 0x88123C1C;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r4,8(r11)
	ctx.current_instruction = 0x88123C20;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r4,20(r9)
	ctx.current_instruction = 0x88123C24;
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r4.u32);
loc_88123C28:
	// lwz r11,8(r11)
	ctx.current_instruction = 0x88123C28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88123bfc
	if (!ctx.cr6.eq) goto loc_88123BFC;
	// lwz r11,24(r9)
	ctx.current_instruction = 0x88123C34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r9)
	ctx.current_instruction = 0x88123C40;
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88123C48:
	// stw r11,8(r4)
	ctx.current_instruction = 0x88123C48;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88123C4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,12(r4)
	ctx.current_instruction = 0x88123C50;
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88123C54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88123c64
	if (ctx.cr6.eq) goto loc_88123C64;
	// stw r4,8(r10)
	ctx.current_instruction = 0x88123C60;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
loc_88123C64:
	// stw r4,12(r11)
	ctx.current_instruction = 0x88123C64;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,24(r9)
	ctx.current_instruction = 0x88123C6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r9)
	ctx.current_instruction = 0x88123C74;
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88125320) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88125320;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88125320) {
			switch (rex_dispatch_address) {
				case 0x88125328:
				case 0x88125424:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88125320;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88125328: goto loc_88125328;
		case 0x88125424: goto loc_88125424;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88125328;
	__savegprlr_27(ctx, base);
loc_88125328:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88125328;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,44(r3)
	ctx.current_instruction = 0x8812532C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,16(r27)
	ctx.current_instruction = 0x88125338;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r11,4(r8)
	ctx.current_instruction = 0x8812533C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88125454
	if (ctx.cr6.eq) goto loc_88125454;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8812534C:
	// lwz r11,0(r28)
	ctx.current_instruction = 0x8812534C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88125350;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ld r11,8(r11)
	ctx.current_instruction = 0x88125354;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// blt cr6,0x8812539c
	if (ctx.cr6.lt) goto loc_8812539C;
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// bgt cr6,0x88125374
	if (ctx.cr6.gt) goto loc_88125374;
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// bgt cr6,0x88125390
	if (ctx.cr6.gt) goto loc_88125390;
loc_88125374:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r28,4(r28)
	ctx.current_instruction = 0x88125378;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// bne cr6,0x8812534c
	if (!ctx.cr6.eq) goto loc_8812534C;
	// b 0x8812539c
	goto loc_8812539C;
loc_88125390:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
loc_8812539C:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88125454
	if (ctx.cr6.eq) goto loc_88125454;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88125454
	if (ctx.cr6.eq) goto loc_88125454;
loc_881253B4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x88125454
	if (ctx.cr6.eq) goto loc_88125454;
	// lwz r7,0(r28)
	ctx.current_instruction = 0x881253BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// ld r11,8(r7)
	ctx.current_instruction = 0x881253C0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// lwz r10,4(r7)
	ctx.current_instruction = 0x881253C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpld cr6,r11,r30
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, ctx.xer);
	// bgt cr6,0x88125444
	if (ctx.cr6.gt) goto loc_88125444;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpld cr6,r9,r30
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r30.u64, ctx.xer);
	// ble cr6,0x88125444
	if (!ctx.cr6.gt) goto loc_88125444;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r8,28(r29)
	ctx.current_instruction = 0x881253E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// rotlwi r6,r30,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwz r11,24(r29)
	ctx.current_instruction = 0x881253EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r8,r31,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r31.u64;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8812540c
	if (!ctx.cr6.gt) goto loc_8812540C;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_8812540C:
	// lwz r9,0(r7)
	ctx.current_instruction = 0x8812540C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,44(r29)
	ctx.current_instruction = 0x88125414;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x880547a0
	ctx.lr = 0x88125424;
	sub_880547A0(ctx, base);
loc_88125424:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lwz r10,28(r29)
	ctx.current_instruction = 0x88125428;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,24(r29)
	ctx.current_instruction = 0x88125430;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,24(r29)
	ctx.current_instruction = 0x88125438;
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x88125454
	if (ctx.cr6.eq) goto loc_88125454;
loc_88125444:
	// lwz r28,8(r28)
	ctx.current_instruction = 0x88125444;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,16(r27)
	ctx.current_instruction = 0x88125448;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881253b4
	if (!ctx.cr6.eq) goto loc_881253B4;
loc_88125454:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881293A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881293A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881293A8) {
			switch (rex_dispatch_address) {
				case 0x881293B0:
				case 0x881294E0:
				case 0x881294FC:
				case 0x88129518:
				case 0x88129534:
				case 0x88129550:
				case 0x881295C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881293A8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881293B0: goto loc_881293B0;
		case 0x881294E0: goto loc_881294E0;
		case 0x881294FC: goto loc_881294FC;
		case 0x88129518: goto loc_88129518;
		case 0x88129534: goto loc_88129534;
		case 0x88129550: goto loc_88129550;
		case 0x881295C8: goto loc_881295C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x881293B0;
	__savegprlr_22(ctx, base);
loc_881293B0:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x881293B0;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.current_instruction = 0x881293B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lwz r30,148(r3)
	ctx.current_instruction = 0x881293BC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f0,6728(r6)
	ctx.current_instruction = 0x881293D4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 6728);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r31,r11,r7
	ctx.r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r8,r30
	ctx.r4.u64 = ctx.r8.u64 + ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// add r24,r7,r30
	ctx.r24.u64 = ctx.r7.u64 + ctx.r30.u64;
	// add r27,r6,r30
	ctx.r27.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r26,r5,r30
	ctx.r26.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt cr6,0x88129494
	if (ctx.cr6.lt) goto loc_88129494;
	// addi r7,r29,-3
	ctx.r7.s64 = ctx.r29.s64 + -3;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// subf r6,r4,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r4.u64;
loc_88129434:
	// lfs f13,4(r9)
	ctx.current_instruction = 0x88129434;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f12,-4(r11)
	ctx.current_instruction = 0x8812943C;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f10,0(r11)
	ctx.current_instruction = 0x88129444;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	ctx.current_instruction = 0x88129448;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// lfs f8,8(r11)
	ctx.current_instruction = 0x88129450;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f7,-4(r11)
	ctx.current_instruction = 0x88129458;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f6,r6,r11
	ctx.current_instruction = 0x8812945C;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,0(r11)
	ctx.current_instruction = 0x88129468;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f3,12(r9)
	ctx.current_instruction = 0x8812946C;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,4(r11)
	ctx.current_instruction = 0x88129478;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f13,16(r9)
	ctx.current_instruction = 0x8812947C;
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,8(r11)
	ctx.current_instruction = 0x88129488;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x88129434
	if (ctx.cr6.lt) goto loc_88129434;
loc_88129494:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x881294cc
	if (!ctx.cr6.lt) goto loc_881294CC;
	// subf r9,r10,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881294B0:
	// lfsx f13,r11,r10
	ctx.current_instruction = 0x881294B0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	ctx.current_instruction = 0x881294B4;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r11)
	ctx.current_instruction = 0x881294C0;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881294b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881294B0;
loc_881294CC:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88148558
	ctx.lr = 0x881294E0;
	sub_88148558(ctx, base);
loc_881294E0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88129610
	if (ctx.cr6.lt) goto loc_88129610;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x88148868
	ctx.lr = 0x881294FC;
	sub_88148868(ctx, base);
loc_881294FC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88129610
	if (ctx.cr6.lt) goto loc_88129610;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r28,44
	ctx.r3.s64 = ctx.r28.s64 + 44;
	// bl 0x88148868
	ctx.lr = 0x88129518;
	sub_88148868(ctx, base);
loc_88129518:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88129610
	if (ctx.cr6.lt) goto loc_88129610;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// bl 0x88148868
	ctx.lr = 0x88129534;
	sub_88148868(ctx, base);
loc_88129534:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88129610
	if (ctx.cr6.lt) goto loc_88129610;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r28,84
	ctx.r3.s64 = ctx.r28.s64 + 84;
	// bl 0x88148868
	ctx.lr = 0x88129550;
	sub_88148868(ctx, base);
loc_88129550:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812960c
	if (ctx.cr6.lt) goto loc_8812960C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812955C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881295f4
	if (!ctx.cr6.gt) goto loc_881295F4;
	// subf r27,r31,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r31.u64;
	// subf r26,r31,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r31.u64;
	// subf r30,r31,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r31.u64;
	// subf r29,r31,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r31.u64;
loc_8812957C:
	// lfsx f0,r31,r26
	ctx.current_instruction = 0x8812957C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfsx f13,r31,r27
	ctx.current_instruction = 0x88129584;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,0(r31)
	ctx.current_instruction = 0x8812958C;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r31,r30
	ctx.current_instruction = 0x88129590;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfsx f8,r31,r30
	ctx.current_instruction = 0x8812959C;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, temp.u32);
	// lfs f7,0(r31)
	ctx.current_instruction = 0x881295A0;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f6,r31,r26
	ctx.current_instruction = 0x881295A4;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r31,r29
	ctx.current_instruction = 0x881295A8;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r31,r27
	ctx.current_instruction = 0x881295AC;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fsubs f2,f3,f7
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// fadds f2,f2,f6
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfsx f2,r31,r29
	ctx.current_instruction = 0x881295BC;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, temp.u32);
	// lfsx f1,r31,r30
	ctx.current_instruction = 0x881295C0;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x881292a0
	ctx.lr = 0x881295C8;
	sub_881292A0(ctx, base);
loc_881295C8:
	// lfsx f0,r31,r30
	ctx.current_instruction = 0x881295C8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfsx f13,r31,r30
	ctx.current_instruction = 0x881295D4;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, temp.u32);
	// lfsx f12,r31,r29
	ctx.current_instruction = 0x881295D8;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfsx f11,r31,r29
	ctx.current_instruction = 0x881295E0;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, temp.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881295E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8812957c
	if (ctx.cr6.lt) goto loc_8812957C;
loc_881295F4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// beq cr6,0x88129610
	if (ctx.cr6.eq) goto loc_88129610;
	// stw r11,0(r22)
	ctx.current_instruction = 0x88129600;
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_8812960C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_88129610:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881342C8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881342C8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881342C8;
	ctx.current_instruction = 0x881342C8;
	uint32_t ea{};
	// li r9,6
	ctx.r9.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881342D8:
	// stdu r11,8(r10)
	ctx.current_instruction = 0x881342D8;
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x881342d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881342D8;
	// stw r11,4(r3)
	ctx.current_instruction = 0x881342E0;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	ctx.current_instruction = 0x881342E4;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// std r11,8(r3)
	ctx.current_instruction = 0x881342E8;
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	ctx.current_instruction = 0x881342EC;
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// stw r11,24(r3)
	ctx.current_instruction = 0x881342F0;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	ctx.current_instruction = 0x881342F4;
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	ctx.current_instruction = 0x881342F8;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	ctx.current_instruction = 0x881342FC;
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	ctx.current_instruction = 0x88134300;
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	ctx.current_instruction = 0x88134304;
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88135CC8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88135CC8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88135CC8) {
			switch (rex_dispatch_address) {
				case 0x88135CD0:
				case 0x881360AC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88135CC8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88135CD0: goto loc_88135CD0;
		case 0x881360AC: goto loc_881360AC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x88135CD0;
	__savegprlr_19(ctx, base);
loc_88135CD0:
	// stfd f29,-136(r1)
	ctx.current_instruction = 0x88135CD0;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.f29.u64);
	// stfd f30,-128(r1)
	ctx.current_instruction = 0x88135CD4;
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	ctx.current_instruction = 0x88135CD8;
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-304(r1)
	ctx.current_instruction = 0x88135CDC;
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,284(r3)
	ctx.current_instruction = 0x88135CE0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x881361d8
	if (ctx.cr6.lt) goto loc_881361D8;
	// beq cr6,0x88135d28
	if (ctx.cr6.eq) goto loc_88135D28;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// blt cr6,0x88135d20
	if (ctx.cr6.lt) goto loc_88135D20;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f29,-136(r1)
	ctx.current_instruction = 0x88135D10;
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.current_instruction = 0x88135D14;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.current_instruction = 0x88135D18;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88135D20:
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x88135d2c
	goto loc_88135D2C;
loc_88135D28:
	// li r20,0
	ctx.r20.s64 = 0;
loc_88135D2C:
	// lwz r11,8(r27)
	ctx.current_instruction = 0x88135D2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88135d44
	if (!ctx.cr6.eq) goto loc_88135D44;
	// lwz r11,36(r27)
	ctx.current_instruction = 0x88135D38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881361d8
	if (ctx.cr6.eq) goto loc_881361D8;
loc_88135D44:
	// lwz r11,36(r27)
	ctx.current_instruction = 0x88135D44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88135d58
	if (!ctx.cr6.eq) goto loc_88135D58;
	// lis r23,16
	ctx.r23.s64 = 1048576;
	// b 0x88135d68
	goto loc_88135D68;
loc_88135D58:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// rlwinm r10,r5,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FC;
	// addi r9,r11,24736
	ctx.r9.s64 = ctx.r11.s64 + 24736;
	// lwzx r23,r10,r9
	ctx.current_instruction = 0x88135D64;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_88135D68:
	// lwz r25,120(r27)
	ctx.current_instruction = 0x88135D68;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r27.u32 + 120);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x88135da0
	if (!ctx.cr6.gt) goto loc_88135DA0;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_88135D80:
	// lwz r9,320(r8)
	ctx.current_instruction = 0x88135D80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// lwz r6,388(r21)
	ctx.current_instruction = 0x88135D84;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r21.u32 + 388);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// lwz r4,60(r5)
	ctx.current_instruction = 0x88135D90;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// stwx r4,r10,r6
	ctx.current_instruction = 0x88135D94;
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x88135d80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88135D80;
loc_88135DA0:
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x88135db8
	if (!ctx.cr6.lt) goto loc_88135DB8;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x88135dc4
	goto loc_88135DC4;
loc_88135DB8:
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// ble cr6,0x88135dc4
	if (!ctx.cr6.gt) goto loc_88135DC4;
	// li r10,16
	ctx.r10.s64 = 16;
loc_88135DC4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x881361d8
	if (ctx.cr6.lt) goto loc_881361D8;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88135DDC:
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r6,r11,r10
	ctx.r6.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stwu r6,4(r9)
	ctx.current_instruction = 0x88135DEC;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// andc r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bdnz 0x88135ddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88135DDC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881361d8
	if (!ctx.cr6.gt) goto loc_881361D8;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,127
	ctx.r8.s64 = 8323072;
	// addi r26,r1,100
	ctx.r26.s64 = ctx.r1.s64 + 100;
	// lfs f29,32704(r11)
	ctx.current_instruction = 0x88135E20;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32704);
	ctx.f29.f64 = double(temp.f32);
	// ori r22,r8,65535
	ctx.r22.u64 = ctx.r8.u64 | 65535;
	// lfs f30,6728(r10)
	ctx.current_instruction = 0x88135E28;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6728);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,6732(r9)
	ctx.current_instruction = 0x88135E2C;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6732);
	ctx.f31.f64 = double(temp.f32);
loc_88135E30:
	// lwz r28,-4(r26)
	ctx.current_instruction = 0x88135E30;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + -4);
	// fmr f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f31.f64;
	// lwz r29,0(r26)
	ctx.current_instruction = 0x88135E38;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x88135f44
	if (!ctx.cr6.gt) goto loc_88135F44;
	// lwz r8,388(r21)
	ctx.current_instruction = 0x88135E44;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r21.u32 + 388);
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
loc_88135E50:
	// lwz r11,0(r8)
	ctx.current_instruction = 0x88135E50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x88135f2c
	if (!ctx.cr6.lt) goto loc_88135F2C;
	// subf r9,r28,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r28.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x88135ef8
	if (ctx.cr6.lt) goto loc_88135EF8;
	// addi r9,r29,-3
	ctx.r9.s64 = ctx.r29.s64 + -3;
loc_88135E78:
	// lfs f0,0(r11)
	ctx.current_instruction = 0x88135E78;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x88135e88
	if (ctx.cr6.gt) goto loc_88135E88;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_88135E88:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x88135e94
	if (!ctx.cr6.gt) goto loc_88135E94;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_88135E94:
	// lfs f0,4(r11)
	ctx.current_instruction = 0x88135E94;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x88135ea4
	if (ctx.cr6.gt) goto loc_88135EA4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_88135EA4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x88135eb0
	if (!ctx.cr6.gt) goto loc_88135EB0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_88135EB0:
	// lfs f0,8(r11)
	ctx.current_instruction = 0x88135EB0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x88135ec0
	if (ctx.cr6.gt) goto loc_88135EC0;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_88135EC0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x88135ecc
	if (!ctx.cr6.gt) goto loc_88135ECC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_88135ECC:
	// lfs f0,12(r11)
	ctx.current_instruction = 0x88135ECC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x88135edc
	if (ctx.cr6.gt) goto loc_88135EDC;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_88135EDC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x88135ee8
	if (!ctx.cr6.gt) goto loc_88135EE8;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_88135EE8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88135e78
	if (ctx.cr6.lt) goto loc_88135E78;
loc_88135EF8:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x88135f2c
	if (!ctx.cr6.lt) goto loc_88135F2C;
	// subf r10,r10,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r10.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88135F08:
	// lfs f0,0(r11)
	ctx.current_instruction = 0x88135F08;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x88135f18
	if (ctx.cr6.gt) goto loc_88135F18;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_88135F18:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x88135f24
	if (!ctx.cr6.gt) goto loc_88135F24;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_88135F24:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88135f08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88135F08;
loc_88135F2C:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x88135f38
	if (!ctx.cr6.gt) goto loc_88135F38;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
loc_88135F38:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x88135e50
	if (!ctx.cr0.eq) goto loc_88135E50;
loc_88135F44:
	// lfs f0,128(r27)
	ctx.current_instruction = 0x88135F44;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x88135f68
	if (!ctx.cr6.lt) goto loc_88135F68;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	ctx.current_instruction = 0x88135F5C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88135F60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x88135f78
	goto loc_88135F78;
loc_88135F68:
	// fadds f13,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	ctx.current_instruction = 0x88135F70;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88135F74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_88135F78:
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x88135fb0
	if (!ctx.cr6.lt) goto loc_88135FB0;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x88135f9c
	if (!ctx.cr6.lt) goto loc_88135F9C;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	ctx.current_instruction = 0x88135F90;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88135F94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x88135fb4
	goto loc_88135FB4;
loc_88135F9C:
	// fadds f13,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	ctx.current_instruction = 0x88135FA4;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88135FA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x88135fb4
	goto loc_88135FB4;
loc_88135FB0:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_88135FB4:
	// lwz r11,8(r27)
	ctx.current_instruction = 0x88135FB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88136060
	if (ctx.cr6.eq) goto loc_88136060;
	// lwz r9,196(r27)
	ctx.current_instruction = 0x88135FC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 196);
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.current_instruction = 0x88135FC8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// extsw r9,r23
	ctx.r9.s64 = ctx.r23.s32;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8813603c
	if (ctx.cr6.eq) goto loc_8813603C;
	// lwz r5,296(r27)
	ctx.current_instruction = 0x88135FD8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 296);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r8,264(r27)
	ctx.current_instruction = 0x88135FE0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 264);
	// mulld r4,r7,r9
	ctx.r4.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r9.u64);
	// lwz r6,260(r27)
	ctx.current_instruction = 0x88135FE8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 260);
	// lwz r3,280(r27)
	ctx.current_instruction = 0x88135FEC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 280);
	// lwzx r7,r5,r11
	ctx.current_instruction = 0x88135FF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r10,r8,r11
	ctx.current_instruction = 0x88135FF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r8,r6,r11
	ctx.current_instruction = 0x88135FF8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r6,r3,r11
	ctx.current_instruction = 0x88135FFC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// sradi r5,r4,20
	ctx.xer.ca = (ctx.r4.s64 < 0) & ((ctx.r4.u64 & 0xFFFFF) != 0);
	ctx.r5.s64 = ctx.r4.s64 >> 20;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// srawi r11,r4,13
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1FFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 13;
	// clrlwi r3,r4,19
	ctx.r3.u64 = ctx.r4.u32 & 0x1FFF;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.current_instruction = 0x88136014;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r8,r11
	ctx.current_instruction = 0x88136018;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// sraw r10,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// mulld r4,r5,r9
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r9.u64);
	// sradi r3,r4,20
	ctx.xer.ca = (ctx.r4.s64 < 0) & ((ctx.r4.u64 & 0xFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s64 >> 20;
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// b 0x8813606c
	goto loc_8813606C;
loc_8813603C:
	// lwz r10,192(r27)
	ctx.current_instruction = 0x8813603C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 192);
	// lwz r8,280(r27)
	ctx.current_instruction = 0x88136040;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 280);
	// lwzx r7,r10,r11
	ctx.current_instruction = 0x88136044;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.current_instruction = 0x88136048;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// mulld r4,r5,r9
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r9.u64);
	// sradi r3,r4,20
	ctx.xer.ca = (ctx.r4.s64 < 0) & ((ctx.r4.u64 & 0xFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s64 >> 20;
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// b 0x8813606c
	goto loc_8813606C;
loc_88136060:
	// lis r6,127
	ctx.r6.s64 = 8323072;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// ori r6,r6,65534
	ctx.r6.u64 = ctx.r6.u64 | 65534;
loc_8813606C:
	// lwz r31,172(r27)
	ctx.current_instruction = 0x8813606C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 172);
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8813608c
	if (!ctx.cr6.lt) goto loc_8813608C;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	ctx.current_instruction = 0x88136080;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.current_instruction = 0x88136084;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8813609c
	goto loc_8813609C;
loc_8813608C:
	// fadds f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	ctx.current_instruction = 0x88136094;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.current_instruction = 0x88136098;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8813609C:
	// subf r30,r28,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x88135678
	ctx.lr = 0x881360AC;
	sub_88135678(ctx, base);
loc_881360AC:
	// srawi. r11,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881360d0
	if (ctx.cr0.eq) goto loc_881360D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x881360d0
	if (!ctx.cr6.gt) goto loc_881360D0;
loc_881360C0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x881360c0
	if (ctx.cr6.gt) goto loc_881360C0;
loc_881360D0:
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bgt cr6,0x881360e0
	if (ctx.cr6.gt) goto loc_881360E0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_881360E0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x881360ec
	if (ctx.cr6.gt) goto loc_881360EC;
	// li r11,2
	ctx.r11.s64 = 2;
loc_881360EC:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8813610c
	if (!ctx.cr6.gt) goto loc_8813610C;
loc_881360FC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x881360fc
	if (ctx.cr6.gt) goto loc_881360FC;
loc_8813610C:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// std r11,88(r1)
	ctx.current_instruction = 0x88136114;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.current_instruction = 0x88136118;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// ble cr6,0x881361c8
	if (!ctx.cr6.gt) goto loc_881361C8;
	// lwz r8,388(r21)
	ctx.current_instruction = 0x8813612C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r21.u32 + 388);
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
loc_88136138:
	// lwz r11,0(r8)
	ctx.current_instruction = 0x88136138;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bge cr6,0x881361bc
	if (!ctx.cr6.lt) goto loc_881361BC;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x88136198
	if (ctx.cr6.lt) goto loc_88136198;
	// addi r9,r29,-3
	ctx.r9.s64 = ctx.r29.s64 + -3;
loc_88136158:
	// lfs f13,0(r11)
	ctx.current_instruction = 0x88136158;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f12,4(r11)
	ctx.current_instruction = 0x88136160;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,8(r11)
	ctx.current_instruction = 0x88136168;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,12(r11)
	ctx.current_instruction = 0x88136170;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f11,0(r11)
	ctx.current_instruction = 0x8813617C;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f9,4(r11)
	ctx.current_instruction = 0x88136180;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stfs f7,8(r11)
	ctx.current_instruction = 0x88136188;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f6,12(r11)
	ctx.current_instruction = 0x8813618C;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x88136158
	if (ctx.cr6.lt) goto loc_88136158;
loc_88136198:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x881361bc
	if (!ctx.cr6.lt) goto loc_881361BC;
	// subf r10,r10,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881361AC:
	// lfs f13,4(r11)
	ctx.current_instruction = 0x881361AC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,4(r11)
	ctx.current_instruction = 0x881361B4;
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x881361ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881361AC;
loc_881361BC:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x88136138
	if (!ctx.cr0.eq) goto loc_88136138;
loc_881361C8:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r3,172(r27)
	ctx.current_instruction = 0x881361CC;
	REX_STORE_U32(ctx.r27.u32 + 172, ctx.r3.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x88135e30
	if (!ctx.cr0.eq) goto loc_88135E30;
loc_881361D8:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f29,-136(r1)
	ctx.current_instruction = 0x881361E0;
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.current_instruction = 0x881361E4;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.current_instruction = 0x881361E8;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88141D38) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88141D38;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88141D38) {
			switch (rex_dispatch_address) {
				case 0x88141D7C:
				case 0x88141DD0:
				case 0x88141DE0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88141D38;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88141D7C: goto loc_88141D7C;
		case 0x88141DD0: goto loc_88141DD0;
		case 0x88141DE0: goto loc_88141DE0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88141D3C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88141D40;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88141D44;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88141D48;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.current_instruction = 0x88141D4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.current_instruction = 0x88141D68;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stw r10,8(r31)
	ctx.current_instruction = 0x88141D6C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	ctx.current_instruction = 0x88141D70;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,32(r31)
	ctx.current_instruction = 0x88141D74;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x88052d90
	ctx.lr = 0x88141D7C;
	sub_88052D90(ctx, base);
loc_88141D7C:
	// lwz r8,716(r30)
	ctx.current_instruction = 0x88141D7C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 716);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x88141dc0
	if (!ctx.cr6.eq) goto loc_88141DC0;
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88141D88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88141dc0
	if (!ctx.cr6.gt) goto loc_88141DC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_88141D9C:
	// lwz r9,52(r31)
	ctx.current_instruction = 0x88141D9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,48(r31)
	ctx.current_instruction = 0x88141DA4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lhzx r7,r9,r11
	ctx.current_instruction = 0x88141DA8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// sthx r7,r8,r11
	ctx.current_instruction = 0x88141DAC;
	REX_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r6,12(r31)
	ctx.current_instruction = 0x88141DB4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88141d9c
	if (ctx.cr6.lt) goto loc_88141D9C;
loc_88141DC0:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r3,36(r31)
	ctx.current_instruction = 0x88141DC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x88141DD0;
	sub_88052D90(ctx, base);
loc_88141DD0:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r31)
	ctx.current_instruction = 0x88141DD8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x88052d90
	ctx.lr = 0x88141DE0;
	sub_88052D90(ctx, base);
loc_88141DE0:
	// lwz r11,20(r31)
	ctx.current_instruction = 0x88141DE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,8
	ctx.r9.s64 = 8;
	// sth r10,28(r31)
	ctx.current_instruction = 0x88141DF0;
	REX_STORE_U16(ctx.r31.u32 + 28, ctx.r10.u16);
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r9,30(r31)
	ctx.current_instruction = 0x88141DFC;
	REX_STORE_U16(ctx.r31.u32 + 30, ctx.r9.u16);
	// stw r8,24(r31)
	ctx.current_instruction = 0x88141E00;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88141E08;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88141E10;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88141E14;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881442C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881442C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881442C0) {
			switch (rex_dispatch_address) {
				case 0x881442C8:
				case 0x881442D0:
				case 0x881443CC:
				case 0x881443DC:
				case 0x88144404:
				case 0x88144414:
				case 0x88144430:
				case 0x88144448:
				case 0x88144720:
				case 0x88144958:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881442C0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881442C8: goto loc_881442C8;
		case 0x881442D0: goto loc_881442D0;
		case 0x881443CC: goto loc_881443CC;
		case 0x881443DC: goto loc_881443DC;
		case 0x88144404: goto loc_88144404;
		case 0x88144414: goto loc_88144414;
		case 0x88144430: goto loc_88144430;
		case 0x88144448: goto loc_88144448;
		case 0x88144720: goto loc_88144720;
		case 0x88144958: goto loc_88144958;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x881442C8;
	__savegprlr_20(ctx, base);
loc_881442C8:
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x881ef27c
	ctx.lr = 0x881442D0;
	__savefpr_25(ctx, base);
loc_881442D0:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x881442D0;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// addze r25,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r25.s64 = temp.s64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x8814430c
	if (!ctx.cr6.gt) goto loc_8814430C;
loc_881442FC:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// srw r11,r28,r23
	ctx.r11.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r23.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x881442fc
	if (ctx.cr6.gt) goto loc_881442FC;
loc_8814430C:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r10,r25,-1
	ctx.r10.s64 = ctx.r25.s64 + -1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// and r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 & ctx.r25.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// rlwinm r24,r8,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r28,64
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 64, ctx.xer);
	// blt cr6,0x8814439c
	if (ctx.cr6.lt) goto loc_8814439C;
	// cmpwi cr6,r28,2048
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2048, ctx.xer);
	// bgt cr6,0x8814439c
	if (ctx.cr6.gt) goto loc_8814439C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8814439c
	if (ctx.cr6.eq) goto loc_8814439C;
	// srawi r11,r28,7
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 7;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,17104
	ctx.r8.s64 = ctx.r10.s64 + 17104;
	// lwzx r7,r9,r8
	ctx.current_instruction = 0x88144360;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f13,0(r7)
	ctx.current_instruction = 0x88144364;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,4(r7)
	ctx.current_instruction = 0x8814436C;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r7)
	ctx.current_instruction = 0x88144370;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f30,f11,f0
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,8(r7)
	ctx.current_instruction = 0x88144378;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f28,f10,f0
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,40(r7)
	ctx.current_instruction = 0x88144380;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f27,f9,f0
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f26,20(r7)
	ctx.current_instruction = 0x88144388;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f26.f64 = double(temp.f32);
	// fneg f31,f8
	ctx.f31.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lfs f25,16(r7)
	ctx.current_instruction = 0x88144390;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f25.f64 = double(temp.f32);
	// fneg f29,f12
	ctx.f29.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// b 0x88144458
	goto loc_88144458;
loc_8814439C:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r11,80(r1)
	ctx.current_instruction = 0x881443A4;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x881443A8;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f29,f0
	ctx.f29.f64 = double(ctx.f0.s64);
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// lfd f0,12544(r10)
	ctx.current_instruction = 0x881443B4;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12544);
	// fdiv f13,f0,f29
	ctx.f13.f64 = ctx.f0.f64 / ctx.f29.f64;
	// lfd f0,7016(r9)
	ctx.current_instruction = 0x881443BC;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 7016);
	// fmul f30,f13,f0
	ctx.f30.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x881eff80
	ctx.lr = 0x881443CC;
	sub_881EFF80(ctx, base);
loc_881443CC:
	// fmul f12,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64 * ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// frsp f30,f12
	ctx.f30.f64 = double(float(ctx.f12.f64));
	// bl 0x881efea0
	ctx.lr = 0x881443DC;
	sub_881EFEA0(ctx, base);
loc_881443DC:
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// fmul f11,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64 * ctx.f31.f64;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// lfd f0,8624(r8)
	ctx.current_instruction = 0x881443E8;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 8624);
	// fdiv f27,f0,f29
	ctx.f27.f64 = ctx.f0.f64 / ctx.f29.f64;
	// lfd f0,7008(r7)
	ctx.current_instruction = 0x881443F0;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 7008);
	// frsp f29,f11
	ctx.f29.f64 = double(float(ctx.f11.f64));
	// fmul f28,f27,f0
	ctx.f28.f64 = ctx.f27.f64 * ctx.f0.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x881eff80
	ctx.lr = 0x88144404;
	sub_881EFF80(ctx, base);
loc_88144404:
	// fmul f10,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64 * ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// frsp f28,f10
	ctx.f28.f64 = double(float(ctx.f10.f64));
	// bl 0x881efea0
	ctx.lr = 0x88144414;
	sub_881EFEA0(ctx, base);
loc_88144414:
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// fmul f9,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f1.f64 * ctx.f31.f64;
	// lfd f0,6992(r6)
	ctx.current_instruction = 0x8814441C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r6.u32 + 6992);
	// fmul f31,f27,f0
	ctx.f31.f64 = ctx.f27.f64 * ctx.f0.f64;
	// frsp f27,f9
	ctx.f27.f64 = double(float(ctx.f9.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x881efea0
	ctx.lr = 0x88144430;
	sub_881EFEA0(ctx, base);
loc_88144430:
	// lis r5,-30720
	ctx.r5.s64 = -2013265920;
	// lfd f0,12296(r5)
	ctx.current_instruction = 0x88144434;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 12296);
	// fmul f8,f1,f0
	ctx.f8.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f31,f8
	ctx.f31.f64 = double(float(ctx.f8.f64));
	// bl 0x881eff80
	ctx.lr = 0x88144448;
	sub_881EFF80(ctx, base);
loc_88144448:
	// lis r4,-30719
	ctx.r4.s64 = -2013200384;
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// lfs f0,7000(r4)
	ctx.current_instruction = 0x88144450;
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 7000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f25,f31,f0
	ctx.f25.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_88144458:
	// srawi r11,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 1;
	// addze r26,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r26.s64 = temp.s64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x88144568
	if (ctx.cr6.lt) goto loc_88144568;
	// addi r10,r26,-4
	ctx.r10.s64 = ctx.r26.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88144484:
	// lfs f13,0(r30)
	ctx.current_instruction = 0x88144484;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f31,f30,f27
	ctx.f0.f64 = double(float(std::fma(ctx.f31.f64, ctx.f30.f64, ctx.f27.f64)));
	// lfs f12,4(r31)
	ctx.current_instruction = 0x8814448C;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// stfs f12,0(r29)
	ctx.current_instruction = 0x88144494;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f9,12(r31)
	ctx.current_instruction = 0x8814449C;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f13,f31,f29,f28
	ctx.f13.f64 = double(float(-std::fma(ctx.f31.f64, ctx.f29.f64, -ctx.f28.f64)));
	// lfs f8,0(r31)
	ctx.current_instruction = 0x881444A4;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fnmsubs f12,f0,f31,f30
	ctx.f12.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f31.f64, -ctx.f30.f64)));
	// fmsubs f7,f8,f30,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f30.f64, -ctx.f11.f64)));
	// stfs f7,0(r31)
	ctx.current_instruction = 0x881444B0;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f6,f8,f29,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f29.f64, ctx.f10.f64)));
	// stfs f6,4(r31)
	ctx.current_instruction = 0x881444B8;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f5,-8(r30)
	ctx.current_instruction = 0x881444BC;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f9,-8(r29)
	ctx.current_instruction = 0x881444C4;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r29.u32 + -8, temp.u32);
	// fmuls f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f2,8(r31)
	ctx.current_instruction = 0x881444CC;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f1,f13,f2,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, -ctx.f4.f64)));
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// stfs f1,8(r31)
	ctx.current_instruction = 0x881444D8;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f13,f31,f13,f29
	ctx.f13.f64 = double(float(std::fma(ctx.f31.f64, ctx.f13.f64, ctx.f29.f64)));
	// lfs f10,20(r31)
	ctx.current_instruction = 0x881444E0;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f0,f2,f3
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, ctx.f3.f64)));
	// stfs f9,12(r31)
	ctx.current_instruction = 0x881444E8;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f8,-16(r30)
	ctx.current_instruction = 0x881444EC;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f4,f13,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f10,-16(r29)
	ctx.current_instruction = 0x881444F8;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r29.u32 + -16, temp.u32);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// lfs f5,16(r31)
	ctx.current_instruction = 0x88144500;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f2,f13,f5,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f7.f64)));
	// stfs f2,20(r31)
	ctx.current_instruction = 0x88144508;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmsubs f1,f12,f5,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, -ctx.f4.f64)));
	// stfs f1,16(r31)
	ctx.current_instruction = 0x88144510;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f10,-24(r30)
	ctx.current_instruction = 0x88144514;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + -24);
	ctx.f10.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// lfs f3,28(r31)
	ctx.current_instruction = 0x8814451C;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fnmsubs f13,f13,f31,f6
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f31.f64, -ctx.f6.f64)));
	// stfs f3,-24(r29)
	ctx.current_instruction = 0x88144524;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r29.u32 + -24, temp.u32);
	// fmadds f0,f31,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f31.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f9,24(r31)
	ctx.current_instruction = 0x88144530;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
	// addi r29,r29,-32
	ctx.r29.s64 = ctx.r29.s64 + -32;
	// fnmsubs f30,f0,f31,f12
	ctx.f30.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f31.f64, -ctx.f12.f64)));
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// fmadds f29,f31,f13,f11
	ctx.f29.f64 = double(float(std::fma(ctx.f31.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmsubs f6,f13,f9,f8
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, -ctx.f8.f64)));
	// stfs f6,24(r31)
	ctx.current_instruction = 0x88144554;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmadds f5,f0,f9,f7
	ctx.f5.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f7.f64)));
	// stfs f5,28(r31)
	ctx.current_instruction = 0x8814455C;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bdnz 0x88144484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88144484;
loc_88144568:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881445c4
	if (!ctx.cr6.gt) goto loc_881445C4;
	// subf r10,r30,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88144578:
	// lfs f13,0(r30)
	ctx.current_instruction = 0x88144578;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f31,f29,f28
	ctx.f0.f64 = double(float(-std::fma(ctx.f31.f64, ctx.f29.f64, -ctx.f28.f64)));
	// fmuls f12,f13,f29
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f11,4(r31)
	ctx.current_instruction = 0x88144584;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfsx f11,r10,r30
	ctx.current_instruction = 0x8814458C;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
	// fmadds f13,f31,f30,f27
	ctx.f13.f64 = double(float(std::fma(ctx.f31.f64, ctx.f30.f64, ctx.f27.f64)));
	// lfs f9,0(r31)
	ctx.current_instruction = 0x88144594;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmr f28,f30
	ctx.f28.f64 = ctx.f30.f64;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// fmr f27,f29
	ctx.f27.f64 = ctx.f29.f64;
	// fmsubs f8,f9,f30,f12
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f30.f64, -ctx.f12.f64)));
	// stfs f8,0(r31)
	ctx.current_instruction = 0x881445A8;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f7,f9,f29,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f29.f64, ctx.f10.f64)));
	// stfs f7,4(r31)
	ctx.current_instruction = 0x881445B0;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
	// bdnz 0x88144578
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88144578;
loc_881445C4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x881446b0
	if (ctx.cr6.lt) goto loc_881446B0;
	// addi r10,r26,-4
	ctx.r10.s64 = ctx.r26.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881445E8:
	// fmadds f0,f31,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f31.f64, ctx.f30.f64, ctx.f27.f64)));
	// lfs f6,0(r31)
	ctx.current_instruction = 0x881445EC;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fnmsubs f13,f31,f29,f28
	ctx.f13.f64 = double(float(-std::fma(ctx.f31.f64, ctx.f29.f64, -ctx.f28.f64)));
	// lfs f5,4(r31)
	ctx.current_instruction = 0x881445F4;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,12(r31)
	ctx.current_instruction = 0x881445F8;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f6,f29
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f29.f64));
	// lfs f9,8(r31)
	ctx.current_instruction = 0x88144600;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f5,f29
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// lfs f8,16(r31)
	ctx.current_instruction = 0x88144608;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r31)
	ctx.current_instruction = 0x8814460C;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f2,24(r31)
	ctx.current_instruction = 0x88144610;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r31)
	ctx.current_instruction = 0x88144614;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f28,f10,f0
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f27,f0,f9
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmadds f5,f5,f30,f4
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f30.f64, ctx.f4.f64)));
	// stfs f5,4(r31)
	ctx.current_instruction = 0x88144628;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmsubs f4,f6,f30,f3
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f30.f64, -ctx.f3.f64)));
	// stfs f4,0(r31)
	ctx.current_instruction = 0x88144630;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmsubs f3,f13,f9,f28
	ctx.f3.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, -ctx.f28.f64)));
	// stfs f3,8(r31)
	ctx.current_instruction = 0x8814463C;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f13,f10,f13,f27
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f27.f64)));
	// stfs f13,12(r31)
	ctx.current_instruction = 0x88144644;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fnmsubs f13,f0,f31,f30
	ctx.f13.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f31.f64, -ctx.f30.f64)));
	// fmadds f0,f31,f12,f29
	ctx.f0.f64 = double(float(std::fma(ctx.f31.f64, ctx.f12.f64, ctx.f29.f64)));
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmsubs f4,f13,f8,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, -ctx.f6.f64)));
	// stfs f4,16(r31)
	ctx.current_instruction = 0x8814466C;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmadds f3,f7,f13,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f5.f64)));
	// stfs f3,20(r31)
	ctx.current_instruction = 0x88144674;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fnmsubs f13,f0,f31,f10
	ctx.f13.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f31.f64, -ctx.f10.f64)));
	// fmadds f0,f31,f12,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f31.f64, ctx.f12.f64, ctx.f9.f64)));
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f9,f0,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// fnmsubs f30,f0,f31,f12
	ctx.f30.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f31.f64, -ctx.f12.f64)));
	// fmadds f29,f31,f13,f11
	ctx.f29.f64 = double(float(std::fma(ctx.f31.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmsubs f8,f13,f2,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, -ctx.f10.f64)));
	// stfs f8,24(r31)
	ctx.current_instruction = 0x8814469C;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmadds f7,f1,f13,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f7,28(r31)
	ctx.current_instruction = 0x881446A4;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bdnz 0x881445e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881445E8;
loc_881446B0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881446fc
	if (!ctx.cr6.gt) goto loc_881446FC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
loc_881446C0:
	// lfs f12,8(r11)
	ctx.current_instruction = 0x881446C0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f31,f29,f28
	ctx.f0.f64 = double(float(-std::fma(ctx.f31.f64, ctx.f29.f64, -ctx.f28.f64)));
	// lfs f11,4(r11)
	ctx.current_instruction = 0x881446C8;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f9,f11,f29
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmadds f13,f31,f30,f27
	ctx.f13.f64 = double(float(std::fma(ctx.f31.f64, ctx.f30.f64, ctx.f27.f64)));
	// fmr f28,f30
	ctx.f28.f64 = ctx.f30.f64;
	// fmr f27,f29
	ctx.f27.f64 = ctx.f29.f64;
	// fmsubs f8,f11,f30,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f30.f64, -ctx.f10.f64)));
	// stfs f8,4(r11)
	ctx.current_instruction = 0x881446E4;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f7,f12,f30,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f12.f64, ctx.f30.f64, ctx.f9.f64)));
	// stfsu f7,8(r11)
	ctx.current_instruction = 0x881446EC;
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
	// bdnz 0x881446c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881446C0;
loc_881446FC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r5,r23,-1
	ctx.r5.s64 = ctx.r23.s64 + -1;
	// bne cr6,0x8814470c
	if (!ctx.cr6.eq) goto loc_8814470C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_8814470C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x88144720;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88144720:
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// addi r7,r28,-2
	ctx.r7.s64 = ctx.r28.s64 + -2;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,6708(r9)
	ctx.current_instruction = 0x88144734;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lfs f13,6732(r8)
	ctx.current_instruction = 0x8814473C;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 6732);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x881448c0
	if (ctx.cr6.lt) goto loc_881448C0;
	// addi r8,r26,-4
	ctx.r8.s64 = ctx.r26.s64 + -4;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88144764:
	// fmadds f12,f31,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(std::fma(ctx.f31.f64, ctx.f0.f64, ctx.f25.f64)));
	// lfs f10,4(r11)
	ctx.current_instruction = 0x88144768;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f11,f31,f13,f26
	ctx.f11.f64 = double(float(-std::fma(ctx.f31.f64, ctx.f13.f64, -ctx.f26.f64)));
	// lfs f9,4(r10)
	ctx.current_instruction = 0x88144770;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,0(r11)
	ctx.current_instruction = 0x88144778;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f5,0(r10)
	ctx.current_instruction = 0x88144780;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fneg f4,f13
	ctx.f4.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f2,f12,f9
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f3,f11,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmsubs f10,f7,f0,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, -ctx.f8.f64)));
	// stfs f10,0(r11)
	ctx.current_instruction = 0x88144798;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmsubs f9,f4,f7,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f4.f64, ctx.f7.f64, -ctx.f6.f64)));
	// stfs f9,4(r10)
	ctx.current_instruction = 0x881447A0;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f13,f31,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f31.f64, ctx.f11.f64, ctx.f13.f64)));
	// fnmsubs f0,f12,f31,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f31.f64, -ctx.f0.f64)));
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmadds f8,f5,f11,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f2.f64)));
	// stfs f8,4(r11)
	ctx.current_instruction = 0x881447B4;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f7,f1,f5,f3
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f5.f64, ctx.f3.f64)));
	// lfs f5,-8(r10)
	ctx.current_instruction = 0x881447BC;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// stfs f7,0(r10)
	ctx.current_instruction = 0x881447C0;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f4,12(r11)
	ctx.current_instruction = 0x881447C4;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lfs f2,-4(r10)
	ctx.current_instruction = 0x881447CC;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f4,f11
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f8,f13,f2
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// lfs f6,8(r11)
	ctx.current_instruction = 0x881447D8;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f0,f2
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fneg f4,f13
	ctx.f4.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmsubs f3,f11,f6,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f11.f64, ctx.f6.f64, -ctx.f3.f64)));
	// stfs f3,8(r11)
	ctx.current_instruction = 0x881447E8;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmsubs f1,f1,f6,f9
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, -ctx.f9.f64)));
	// stfs f1,-4(r10)
	ctx.current_instruction = 0x881447F0;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmadds f9,f5,f0,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f8.f64)));
	// stfs f9,12(r11)
	ctx.current_instruction = 0x881447F8;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmadds f7,f4,f5,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f5.f64, ctx.f7.f64)));
	// stfs f7,-8(r10)
	ctx.current_instruction = 0x88144800;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f6,16(r11)
	ctx.current_instruction = 0x88144804;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// lfs f5,-16(r10)
	ctx.current_instruction = 0x8814480C;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f5.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f1,20(r11)
	ctx.current_instruction = 0x88144814;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f1,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f8,-12(r10)
	ctx.current_instruction = 0x88144820;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f1,f0,f6,f9
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, -ctx.f9.f64)));
	// stfs f1,16(r11)
	ctx.current_instruction = 0x88144828;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fnmsubs f0,f13,f31,f11
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f31.f64, -ctx.f11.f64)));
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// fmadds f13,f31,f3,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f31.f64, ctx.f3.f64, ctx.f10.f64)));
	// fmsubs f12,f4,f6,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, -ctx.f7.f64)));
	// stfs f12,-12(r10)
	ctx.current_instruction = 0x8814483C;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// fmuls f10,f0,f8
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fmuls f9,f13,f8
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fneg f8,f13
	ctx.f8.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmr f25,f13
	ctx.f25.f64 = ctx.f13.f64;
	// fmr f26,f12
	ctx.f26.f64 = ctx.f12.f64;
	// fmadds f7,f5,f0,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f7,20(r11)
	ctx.current_instruction = 0x8814485C;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmadds f6,f8,f5,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f5.f64, ctx.f10.f64)));
	// stfs f6,-16(r10)
	ctx.current_instruction = 0x88144864;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + -16, temp.u32);
	// lfs f5,24(r11)
	ctx.current_instruction = 0x88144868;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-20(r10)
	ctx.current_instruction = 0x8814486C;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,-24(r10)
	ctx.current_instruction = 0x88144870;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,28(r11)
	ctx.current_instruction = 0x88144874;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmsubs f7,f0,f5,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f5.f64, -ctx.f11.f64)));
	// stfs f7,24(r11)
	ctx.current_instruction = 0x88144880;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fnmsubs f0,f13,f31,f3
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f31.f64, -ctx.f3.f64)));
	// fmadds f13,f31,f12,f2
	ctx.f13.f64 = double(float(std::fma(ctx.f31.f64, ctx.f12.f64, ctx.f2.f64)));
	// fmsubs f6,f8,f5,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f5.f64, -ctx.f10.f64)));
	// stfs f6,-20(r10)
	ctx.current_instruction = 0x88144894;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + -20, temp.u32);
	// fmuls f5,f0,f4
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f4,f13,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fneg f3,f13
	ctx.f3.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmadds f2,f9,f0,f4
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f4.f64)));
	// stfs f2,28(r11)
	ctx.current_instruction = 0x881448A8;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmadds f1,f3,f9,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f9.f64, ctx.f5.f64)));
	// stfs f1,-24(r10)
	ctx.current_instruction = 0x881448B0;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + -24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// bdnz 0x88144764
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88144764;
loc_881448C0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88144938
	if (!ctx.cr6.gt) goto loc_88144938;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_881448D4:
	// fmadds f12,f31,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(std::fma(ctx.f31.f64, ctx.f0.f64, ctx.f25.f64)));
	// lfs f10,8(r11)
	ctx.current_instruction = 0x881448D8;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f11,f31,f13,f26
	ctx.f11.f64 = double(float(-std::fma(ctx.f31.f64, ctx.f13.f64, -ctx.f26.f64)));
	// lfs f9,-4(r10)
	ctx.current_instruction = 0x881448E0;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,4(r11)
	ctx.current_instruction = 0x881448E8;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f5,-8(r10)
	ctx.current_instruction = 0x881448F0;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// fneg f6,f13
	ctx.f6.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmr f26,f0
	ctx.f26.f64 = ctx.f0.f64;
	// fmr f25,f13
	ctx.f25.f64 = ctx.f13.f64;
	// fmuls f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fneg f2,f12
	ctx.f2.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmuls f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmsubs f0,f7,f0,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, -ctx.f8.f64)));
	// stfs f0,4(r11)
	ctx.current_instruction = 0x88144910;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmsubs f13,f6,f7,f4
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f7.f64, -ctx.f4.f64)));
	// stfs f13,-4(r10)
	ctx.current_instruction = 0x88144918;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// fmadds f12,f5,f11,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f3.f64)));
	// stfsu f12,8(r11)
	ctx.current_instruction = 0x88144928;
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f11,f2,f5,f1
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f1.f64)));
	// stfsu f11,-8(r10)
	ctx.current_instruction = 0x88144930;
	ea = -8 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x881448d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881448D4;
loc_88144938:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8814494c
	if (ctx.cr6.eq) goto loc_8814494C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r20)
	ctx.current_instruction = 0x88144948;
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_8814494C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x881ef2c8
	ctx.lr = 0x88144958;
	__restfpr_25(ctx, base);
loc_88144958:
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881513A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881513A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881513A0) {
			switch (rex_dispatch_address) {
				case 0x88151438:
				case 0x88151468:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881513A0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88151438: goto loc_88151438;
		case 0x88151468: goto loc_88151468;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881513A4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881513A8;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881513AC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x881513B0;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881513c8
	if (!ctx.cr6.eq) goto loc_881513C8;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x88151468
	goto loc_88151468;
loc_881513C8:
	// lwz r30,24688(r31)
	ctx.current_instruction = 0x881513C8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 24688);
	// lwz r11,712(r30)
	ctx.current_instruction = 0x881513CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881513e0
	if (ctx.cr6.eq) goto loc_881513E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88151468
	goto loc_88151468;
loc_881513E0:
	// lwz r11,22036(r31)
	ctx.current_instruction = 0x881513E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22036);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88151408
	if (!ctx.cr6.eq) goto loc_88151408;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x881513F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,-7
	ctx.r10.s64 = -7;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// b 0x88151468
	goto loc_88151468;
loc_88151408:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,22032(r31)
	ctx.current_instruction = 0x8815140C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22032);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,84(r1)
	ctx.current_instruction = 0x88151414;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// ori r8,r11,45384
	ctx.r8.u64 = ctx.r11.u64 | 45384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,92(r1)
	ctx.current_instruction = 0x88151420;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r5,92
	ctx.r5.s64 = 92;
	// stw r10,80(r1)
	ctx.current_instruction = 0x88151428;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwzx r7,r31,r8
	ctx.current_instruction = 0x8815142C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stw r7,88(r1)
	ctx.current_instruction = 0x88151430;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x880547a0
	ctx.lr = 0x88151438;
	sub_880547A0(ctx, base);
loc_88151438:
	// lwz r6,21888(r31)
	ctx.current_instruction = 0x88151438;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 21888);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,22056(r31)
	ctx.current_instruction = 0x88151440;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 22056);
	// lwz r4,22060(r31)
	ctx.current_instruction = 0x88151444;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22060);
	// addic r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// subfe r10,r11,r6
	temp.u8 = (~ctx.r11.u32 + ctx.r6.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r5,100(r1)
	ctx.current_instruction = 0x88151450;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r4,104(r1)
	ctx.current_instruction = 0x88151454;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r10,96(r1)
	ctx.current_instruction = 0x88151458;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r9,192(r30)
	ctx.current_instruction = 0x8815145C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 192);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88151468;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88151468:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8815146C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88151474;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88151478;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88156188) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88156188;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88156188) {
			switch (rex_dispatch_address) {
				case 0x881561C0:
				case 0x881561F8:
				case 0x88156228:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88156188;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881561C0: goto loc_881561C0;
		case 0x881561F8: goto loc_881561F8;
		case 0x88156228: goto loc_88156228;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8815618C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88156190;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88156194;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88156198;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.current_instruction = 0x881561B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// bl 0x88185458
	ctx.lr = 0x881561C0;
	sub_88185458(ctx, base);
loc_881561C0:
	// lwz r3,40(r31)
	ctx.current_instruction = 0x881561C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,15536(r3)
	ctx.current_instruction = 0x881561C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8815622c
	if (!ctx.cr6.eq) goto loc_8815622C;
	// lwz r11,32(r31)
	ctx.current_instruction = 0x881561D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815622c
	if (ctx.cr6.eq) goto loc_8815622C;
	// lwz r4,88(r1)
	ctx.current_instruction = 0x881561DC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r8,0(r30)
	ctx.current_instruction = 0x881561E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,80(r1)
	ctx.current_instruction = 0x881561EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,84(r1)
	ctx.current_instruction = 0x881561F0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bl 0x88184cb0
	ctx.lr = 0x881561F8;
	sub_88184CB0(ctx, base);
loc_881561F8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88156208
	if (ctx.cr6.eq) goto loc_88156208;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r31)
	ctx.current_instruction = 0x88156204;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_88156208:
	// lwz r11,28(r31)
	ctx.current_instruction = 0x88156208;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88156244
	if (ctx.cr6.eq) goto loc_88156244;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r1)
	ctx.current_instruction = 0x88156218;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r30)
	ctx.current_instruction = 0x88156220;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x88155ec8
	ctx.lr = 0x88156228;
	sub_88155EC8(ctx, base);
loc_88156228:
	// b 0x88156244
	goto loc_88156244;
loc_8815622C:
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8815622C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88156230;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r31)
	ctx.current_instruction = 0x88156234;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	ctx.current_instruction = 0x88156240;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_88156244:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88156248;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88156250;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88156254;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8815AF68) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815AF68;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815AF68) {
			switch (rex_dispatch_address) {
				case 0x8815AF70:
				case 0x8815B1E4:
				case 0x8815B220:
				case 0x8815B234:
				case 0x8815B248:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815AF68;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815AF70: goto loc_8815AF70;
		case 0x8815B1E4: goto loc_8815B1E4;
		case 0x8815B220: goto loc_8815B220;
		case 0x8815B234: goto loc_8815B234;
		case 0x8815B248: goto loc_8815B248;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8815AF70;
	__savegprlr_29(ctx, base);
loc_8815AF70:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8815AF70;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r3)
	ctx.current_instruction = 0x8815AF74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r5,192(r3)
	ctx.current_instruction = 0x8815AF7C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r4,200(r3)
	ctx.current_instruction = 0x8815AF84;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r6,188(r3)
	ctx.current_instruction = 0x8815AF8C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r10,15536(r3)
	ctx.current_instruction = 0x8815AF90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// stw r11,164(r3)
	ctx.current_instruction = 0x8815AF94;
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r9,20400(r3)
	ctx.current_instruction = 0x8815AF98;
	REX_STORE_U32(ctx.r3.u32 + 20400, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,20404(r3)
	ctx.current_instruction = 0x8815AFA0;
	REX_STORE_U32(ctx.r3.u32 + 20404, ctx.r8.u32);
	// stw r5,168(r3)
	ctx.current_instruction = 0x8815AFA4;
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r5.u32);
	// stw r6,172(r3)
	ctx.current_instruction = 0x8815AFA8;
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r6.u32);
	// stw r4,176(r3)
	ctx.current_instruction = 0x8815AFAC;
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r4.u32);
	// beq cr6,0x8815afcc
	if (ctx.cr6.eq) goto loc_8815AFCC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8815afcc
	if (ctx.cr6.eq) goto loc_8815AFCC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8815afcc
	if (ctx.cr6.eq) goto loc_8815AFCC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8815b024
	if (!ctx.cr6.eq) goto loc_8815B024;
loc_8815AFCC:
	// lwz r9,156(r31)
	ctx.current_instruction = 0x8815AFCC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r8,160(r31)
	ctx.current_instruction = 0x8815AFD0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// clrlwi r3,r9,30
	ctx.r3.u64 = ctx.r9.u32 & 0x3;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// stw r9,164(r31)
	ctx.current_instruction = 0x8815AFE4;
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r10,168(r31)
	ctx.current_instruction = 0x8815AFEC;
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// addze r3,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r3.s64 = temp.s64;
	// stw r8,172(r31)
	ctx.current_instruction = 0x8815AFF4;
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r8.u32);
	// stw r3,176(r31)
	ctx.current_instruction = 0x8815AFF8;
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// beq cr6,0x8815b00c
	if (ctx.cr6.eq) goto loc_8815B00C;
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// addi r8,r9,-28696
	ctx.r8.s64 = ctx.r9.s64 + -28696;
	// stw r8,15920(r31)
	ctx.current_instruction = 0x8815B008;
	REX_STORE_U32(ctx.r31.u32 + 15920, ctx.r8.u32);
loc_8815B00C:
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8815b024
	if (ctx.cr6.eq) goto loc_8815B024;
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// addi r9,r10,-28320
	ctx.r9.s64 = ctx.r10.s64 + -28320;
	// stw r9,15916(r31)
	ctx.current_instruction = 0x8815B020;
	REX_STORE_U32(ctx.r31.u32 + 15916, ctx.r9.u32);
loc_8815B024:
	// lwz r10,20760(r31)
	ctx.current_instruction = 0x8815B024;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20760);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8815b060
	if (ctx.cr6.eq) goto loc_8815B060;
	// lwz r10,156(r31)
	ctx.current_instruction = 0x8815B030;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r9,160(r31)
	ctx.current_instruction = 0x8815B034;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,168(r31)
	ctx.current_instruction = 0x8815B04C;
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,176(r31)
	ctx.current_instruction = 0x8815B054;
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// stw r8,164(r31)
	ctx.current_instruction = 0x8815B058;
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r8.u32);
	// stw r7,172(r31)
	ctx.current_instruction = 0x8815B05C;
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r7.u32);
loc_8815B060:
	// lwz r10,164(r31)
	ctx.current_instruction = 0x8815B060;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r9,168(r31)
	ctx.current_instruction = 0x8815B064;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r8,156(r31)
	ctx.current_instruction = 0x8815B068;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// addi r7,r10,32
	ctx.r7.s64 = ctx.r10.s64 + 32;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// stw r7,184(r31)
	ctx.current_instruction = 0x8815B074;
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r7.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stw r3,196(r31)
	ctx.current_instruction = 0x8815B07C;
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// bne cr6,0x8815b094
	if (!ctx.cr6.eq) goto loc_8815B094;
	// lwz r10,160(r31)
	ctx.current_instruction = 0x8815B084;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8815b098
	if (ctx.cr6.eq) goto loc_8815B098;
loc_8815B094:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8815B098:
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// stw r7,152(r31)
	ctx.current_instruction = 0x8815B09C;
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r7.u32);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// lwz r8,3788(r31)
	ctx.current_instruction = 0x8815B0A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3788);
	// srawi r7,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 4;
	// stw r10,204(r31)
	ctx.current_instruction = 0x8815B0AC;
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// addi r9,r5,32
	ctx.r9.s64 = ctx.r5.s64 + 32;
	// stw r11,136(r31)
	ctx.current_instruction = 0x8815B0B4;
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// mullw r5,r7,r11
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// stw r7,140(r31)
	ctx.current_instruction = 0x8815B0BC;
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r7.u32);
	// stw r9,208(r31)
	ctx.current_instruction = 0x8815B0C0;
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// stw r5,144(r31)
	ctx.current_instruction = 0x8815B0C4;
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r5.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r11,148(r31)
	ctx.current_instruction = 0x8815B0D4;
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// addi r5,r4,32
	ctx.r5.s64 = ctx.r4.s64 + 32;
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r5,216(r31)
	ctx.current_instruction = 0x8815B0E4;
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// addi r6,r6,64
	ctx.r6.s64 = ctx.r6.s64 + 64;
	// stw r4,224(r31)
	ctx.current_instruction = 0x8815B0EC;
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r4.u32);
	// stw r11,220(r31)
	ctx.current_instruction = 0x8815B0F0;
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r6,212(r31)
	ctx.current_instruction = 0x8815B0F8;
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r6.u32);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bne cr6,0x8815b108
	if (!ctx.cr6.eq) goto loc_8815B108;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8815B108:
	// lwz r8,3816(r31)
	ctx.current_instruction = 0x8815B108;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3816);
	// stw r4,3812(r31)
	ctx.current_instruction = 0x8815B10C;
	REX_STORE_U32(ctx.r31.u32 + 3812, ctx.r4.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bne cr6,0x8815b120
	if (!ctx.cr6.eq) goto loc_8815B120;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8815B120:
	// lwz r8,21888(r31)
	ctx.current_instruction = 0x8815B120;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21888);
	// rlwinm r4,r10,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,3828(r31)
	ctx.current_instruction = 0x8815B12C;
	REX_STORE_U32(ctx.r31.u32 + 3828, ctx.r11.u32);
	// stw r4,228(r31)
	ctx.current_instruction = 0x8815B130;
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r4.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stw r3,232(r31)
	ctx.current_instruction = 0x8815B138;
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r3.u32);
	// bne cr6,0x8815b158
	if (!ctx.cr6.eq) goto loc_8815B158;
	// lwz r11,14836(r31)
	ctx.current_instruction = 0x8815B140;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8815b158
	if (!ctx.cr6.gt) goto loc_8815B158;
	// ld r11,3632(r31)
	ctx.current_instruction = 0x8815B14C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 3632);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// bgt cr6,0x8815b178
	if (ctx.cr6.gt) goto loc_8815B178;
loc_8815B158:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,96(r31)
	ctx.current_instruction = 0x8815B15C;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,108(r31)
	ctx.current_instruction = 0x8815B164;
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r6,104(r31)
	ctx.current_instruction = 0x8815B168;
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r6.u32);
	// stw r5,116(r31)
	ctx.current_instruction = 0x8815B16C;
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r5.u32);
	// stw r11,100(r31)
	ctx.current_instruction = 0x8815B170;
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,112(r31)
	ctx.current_instruction = 0x8815B174;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
loc_8815B178:
	// lwz r11,3392(r31)
	ctx.current_instruction = 0x8815B178;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3392);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8815b1a4
	if (!ctx.cr6.eq) goto loc_8815B1A4;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bge cr6,0x8815b1bc
	if (!ctx.cr6.lt) goto loc_8815B1BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// subfc r10,r11,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,3392(r31)
	ctx.current_instruction = 0x8815B19C;
	REX_STORE_U32(ctx.r31.u32 + 3392, ctx.r9.u32);
	// b 0x8815b1bc
	goto loc_8815B1BC;
loc_8815B1A4:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8815b1bc
	if (!ctx.cr6.eq) goto loc_8815B1BC;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x8815b1bc
	if (!ctx.cr6.eq) goto loc_8815B1BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3392(r31)
	ctx.current_instruction = 0x8815B1B8;
	REX_STORE_U32(ctx.r31.u32 + 3392, ctx.r11.u32);
loc_8815B1BC:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r11,2268(r31)
	ctx.current_instruction = 0x8815B1C8;
	REX_STORE_U32(ctx.r31.u32 + 2268, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,2272(r31)
	ctx.current_instruction = 0x8815B1D0;
	REX_STORE_U32(ctx.r31.u32 + 2272, ctx.r10.u32);
	// stw r9,2276(r31)
	ctx.current_instruction = 0x8815B1D4;
	REX_STORE_U32(ctx.r31.u32 + 2276, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,2280(r31)
	ctx.current_instruction = 0x8815B1DC;
	REX_STORE_U32(ctx.r31.u32 + 2280, ctx.r8.u32);
	// bl 0x881b04b8
	ctx.lr = 0x8815B1E4;
	sub_881B04B8(ctx, base);
loc_8815B1E4:
	// lwz r7,188(r31)
	ctx.current_instruction = 0x8815B1E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r11,21980(r31)
	ctx.current_instruction = 0x8815B1E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21980);
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,21980(r31)
	ctx.current_instruction = 0x8815B1F4;
	REX_STORE_U32(ctx.r31.u32 + 21980, ctx.r10.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8815b248
	if (!ctx.cr6.lt) goto loc_8815B248;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r10,21944(r31)
	ctx.current_instruction = 0x8815B204;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21944);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x88052d90
	ctx.lr = 0x8815B220;
	sub_88052D90(ctx, base);
loc_8815B220:
	// lwz r11,21956(r31)
	ctx.current_instruction = 0x8815B220;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21956);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88052d90
	ctx.lr = 0x8815B234;
	sub_88052D90(ctx, base);
loc_8815B234:
	// lwz r11,21972(r31)
	ctx.current_instruction = 0x8815B234;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21972);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88052d90
	ctx.lr = 0x8815B248;
	sub_88052D90(ctx, base);
loc_8815B248:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88165A70) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88165A70;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88165A70) {
			switch (rex_dispatch_address) {
				case 0x88165A78:
				case 0x88165AFC:
				case 0x88165B44:
				case 0x88165BA0:
				case 0x88165BE8:
				case 0x88165C2C:
				case 0x88165CA8:
				case 0x88165CF0:
				case 0x88165D5C:
				case 0x88165DA4:
				case 0x88165E10:
				case 0x88165E58:
				case 0x88165ECC:
				case 0x88165F14:
				case 0x88165F74:
				case 0x88165FBC:
				case 0x88166030:
				case 0x88166078:
				case 0x881660FC:
				case 0x88166144:
				case 0x8816617C:
				case 0x881661B0:
				case 0x881661EC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88165A70;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88165A78: goto loc_88165A78;
		case 0x88165AFC: goto loc_88165AFC;
		case 0x88165B44: goto loc_88165B44;
		case 0x88165BA0: goto loc_88165BA0;
		case 0x88165BE8: goto loc_88165BE8;
		case 0x88165C2C: goto loc_88165C2C;
		case 0x88165CA8: goto loc_88165CA8;
		case 0x88165CF0: goto loc_88165CF0;
		case 0x88165D5C: goto loc_88165D5C;
		case 0x88165DA4: goto loc_88165DA4;
		case 0x88165E10: goto loc_88165E10;
		case 0x88165E58: goto loc_88165E58;
		case 0x88165ECC: goto loc_88165ECC;
		case 0x88165F14: goto loc_88165F14;
		case 0x88165F74: goto loc_88165F74;
		case 0x88165FBC: goto loc_88165FBC;
		case 0x88166030: goto loc_88166030;
		case 0x88166078: goto loc_88166078;
		case 0x881660FC: goto loc_881660FC;
		case 0x88166144: goto loc_88166144;
		case 0x8816617C: goto loc_8816617C;
		case 0x881661B0: goto loc_881661B0;
		case 0x881661EC: goto loc_881661EC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88165A78;
	__savegprlr_25(ctx, base);
loc_88165A78:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88165A78;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x88165A7C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,436(r3)
	ctx.current_instruction = 0x88165A84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 436);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r25,2
	ctx.r25.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165A98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x88165b4c
	if (!ctx.cr6.eq) goto loc_88165B4C;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bge cr6,0x88165b0c
	if (!ctx.cr6.lt) goto loc_88165B0C;
loc_88165AB4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88165b0c
	if (ctx.cr6.eq) goto loc_88165B0C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88165AC0;
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
	ctx.current_instruction = 0x88165AE4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88165AEC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88165afc
	if (!ctx.cr0.lt) goto loc_88165AFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165AFC;
	sub_88156678(ctx, base);
loc_88165AFC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165AFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88165ab4
	if (ctx.cr6.gt) goto loc_88165AB4;
loc_88165B0C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88165B10;
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
	ctx.current_instruction = 0x88165B28;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88165B34;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88165b44
	if (!ctx.cr0.lt) goto loc_88165B44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165B44;
	sub_88156678(ctx, base);
loc_88165B44:
	// stw r30,452(r28)
	ctx.current_instruction = 0x88165B44;
	REX_STORE_U32(ctx.r28.u32 + 452, ctx.r30.u32);
	// b 0x88165c2c
	goto loc_88165C2C;
loc_88165B4C:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x88165bb0
	if (!ctx.cr6.lt) goto loc_88165BB0;
loc_88165B58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88165bb0
	if (ctx.cr6.eq) goto loc_88165BB0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88165B64;
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
	ctx.current_instruction = 0x88165B88;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88165B90;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88165ba0
	if (!ctx.cr0.lt) goto loc_88165BA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165BA0;
	sub_88156678(ctx, base);
loc_88165BA0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165BA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88165b58
	if (ctx.cr6.gt) goto loc_88165B58;
loc_88165BB0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88165BB4;
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
	ctx.current_instruction = 0x88165BCC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88165BD8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88165be8
	if (!ctx.cr0.lt) goto loc_88165BE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165BE8;
	sub_88156678(ctx, base);
loc_88165BE8:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r27,452(r28)
	ctx.current_instruction = 0x88165BF0;
	REX_STORE_U32(ctx.r28.u32 + 452, ctx.r27.u32);
	// bne cr6,0x88165c00
	if (!ctx.cr6.eq) goto loc_88165C00;
	// stw r26,452(r28)
	ctx.current_instruction = 0x88165BF8;
	REX_STORE_U32(ctx.r28.u32 + 452, ctx.r26.u32);
	// b 0x88165c2c
	goto loc_88165C2C;
loc_88165C00:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x88165c10
	if (!ctx.cr6.eq) goto loc_88165C10;
	// stw r26,4000(r28)
	ctx.current_instruction = 0x88165C08;
	REX_STORE_U32(ctx.r28.u32 + 4000, ctx.r26.u32);
	// b 0x88165c24
	goto loc_88165C24;
loc_88165C10:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x88165c20
	if (!ctx.cr6.eq) goto loc_88165C20;
	// stw r27,4000(r28)
	ctx.current_instruction = 0x88165C18;
	REX_STORE_U32(ctx.r28.u32 + 4000, ctx.r27.u32);
	// b 0x88165c24
	goto loc_88165C24;
loc_88165C20:
	// stw r25,4000(r28)
	ctx.current_instruction = 0x88165C20;
	REX_STORE_U32(ctx.r28.u32 + 4000, ctx.r25.u32);
loc_88165C24:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88160b60
	ctx.lr = 0x88165C2C;
	sub_88160B60(ctx, base);
loc_88165C2C:
	// lwz r11,444(r28)
	ctx.current_instruction = 0x88165C2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816608c
	if (ctx.cr6.eq) goto loc_8816608C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88165C38;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwz r11,248(r28)
	ctx.current_instruction = 0x88165C40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 248);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165C4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bgt cr6,0x88165db4
	if (ctx.cr6.gt) goto loc_88165DB4;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88165cb8
	if (!ctx.cr6.lt) goto loc_88165CB8;
loc_88165C60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88165cb8
	if (ctx.cr6.eq) goto loc_88165CB8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88165C6C;
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
	ctx.current_instruction = 0x88165C90;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88165C98;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88165ca8
	if (!ctx.cr0.lt) goto loc_88165CA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165CA8;
	sub_88156678(ctx, base);
loc_88165CA8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165CA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88165c60
	if (ctx.cr6.gt) goto loc_88165C60;
loc_88165CB8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88165CBC;
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
	ctx.current_instruction = 0x88165CD4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88165CE0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88165cf0
	if (!ctx.cr0.lt) goto loc_88165CF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165CF0;
	sub_88156678(ctx, base);
loc_88165CF0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88166084
	if (ctx.cr6.eq) goto loc_88166084;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88165CF8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165D04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88165d6c
	if (!ctx.cr6.lt) goto loc_88165D6C;
loc_88165D14:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88165d6c
	if (ctx.cr6.eq) goto loc_88165D6C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88165D20;
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
	ctx.current_instruction = 0x88165D44;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88165D4C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88165d5c
	if (!ctx.cr0.lt) goto loc_88165D5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165D5C;
	sub_88156678(ctx, base);
loc_88165D5C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165D5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88165d14
	if (ctx.cr6.gt) goto loc_88165D14;
loc_88165D6C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88165D70;
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
	ctx.current_instruction = 0x88165D88;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88165D94;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88165da4
	if (!ctx.cr0.lt) goto loc_88165DA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165DA4;
	sub_88156678(ctx, base);
loc_88165DA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x88165e60
	if (!ctx.cr6.eq) goto loc_88165E60;
	// addi r11,r28,2172
	ctx.r11.s64 = ctx.r28.s64 + 2172;
	// b 0x88166088
	goto loc_88166088;
loc_88165DB4:
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x88165f24
	if (ctx.cr6.gt) goto loc_88165F24;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88165e20
	if (!ctx.cr6.lt) goto loc_88165E20;
loc_88165DC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88165e20
	if (ctx.cr6.eq) goto loc_88165E20;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88165DD4;
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
	ctx.current_instruction = 0x88165DF8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88165E00;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88165e10
	if (!ctx.cr0.lt) goto loc_88165E10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165E10;
	sub_88156678(ctx, base);
loc_88165E10:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165E10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88165dc8
	if (ctx.cr6.gt) goto loc_88165DC8;
loc_88165E20:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88165E24;
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
	ctx.current_instruction = 0x88165E3C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88165E48;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88165e58
	if (!ctx.cr0.lt) goto loc_88165E58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165E58;
	sub_88156678(ctx, base);
loc_88165E58:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x88165e68
	if (!ctx.cr6.eq) goto loc_88165E68;
loc_88165E60:
	// addi r11,r28,2160
	ctx.r11.s64 = ctx.r28.s64 + 2160;
	// b 0x88166088
	goto loc_88166088;
loc_88165E68:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88165E68;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165E74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88165edc
	if (!ctx.cr6.lt) goto loc_88165EDC;
loc_88165E84:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88165edc
	if (ctx.cr6.eq) goto loc_88165EDC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88165E90;
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
	ctx.current_instruction = 0x88165EB4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88165EBC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88165ecc
	if (!ctx.cr0.lt) goto loc_88165ECC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165ECC;
	sub_88156678(ctx, base);
loc_88165ECC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165ECC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88165e84
	if (ctx.cr6.gt) goto loc_88165E84;
loc_88165EDC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88165EE0;
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
	ctx.current_instruction = 0x88165EF8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88165F04;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88165f14
	if (!ctx.cr0.lt) goto loc_88165F14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165F14;
	sub_88156678(ctx, base);
loc_88165F14:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88166084
	if (ctx.cr6.eq) goto loc_88166084;
	// addi r11,r28,2172
	ctx.r11.s64 = ctx.r28.s64 + 2172;
	// b 0x88166088
	goto loc_88166088;
loc_88165F24:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88165f84
	if (!ctx.cr6.lt) goto loc_88165F84;
loc_88165F2C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88165f84
	if (ctx.cr6.eq) goto loc_88165F84;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88165F38;
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
	ctx.current_instruction = 0x88165F5C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88165F64;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88165f74
	if (!ctx.cr0.lt) goto loc_88165F74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165F74;
	sub_88156678(ctx, base);
loc_88165F74:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165F74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88165f2c
	if (ctx.cr6.gt) goto loc_88165F2C;
loc_88165F84:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88165F88;
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
	ctx.current_instruction = 0x88165FA0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88165FAC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88165fbc
	if (!ctx.cr0.lt) goto loc_88165FBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165FBC;
	sub_88156678(ctx, base);
loc_88165FBC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x88165fcc
	if (!ctx.cr6.eq) goto loc_88165FCC;
	// addi r11,r28,2172
	ctx.r11.s64 = ctx.r28.s64 + 2172;
	// b 0x88166088
	goto loc_88166088;
loc_88165FCC:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88165FCC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165FD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88166040
	if (!ctx.cr6.lt) goto loc_88166040;
loc_88165FE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88166040
	if (ctx.cr6.eq) goto loc_88166040;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88165FF4;
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
	ctx.current_instruction = 0x88166018;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88166020;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88166030
	if (!ctx.cr0.lt) goto loc_88166030;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88166030;
	sub_88156678(ctx, base);
loc_88166030:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88166030;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88165fe8
	if (ctx.cr6.gt) goto loc_88165FE8;
loc_88166040:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88166044;
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
	ctx.current_instruction = 0x8816605C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88166068;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88166078
	if (!ctx.cr0.lt) goto loc_88166078;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88166078;
	sub_88156678(ctx, base);
loc_88166078:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r28,2160
	ctx.r11.s64 = ctx.r28.s64 + 2160;
	// beq cr6,0x88166088
	if (ctx.cr6.eq) goto loc_88166088;
loc_88166084:
	// addi r11,r28,2148
	ctx.r11.s64 = ctx.r28.s64 + 2148;
loc_88166088:
	// stw r11,2144(r28)
	ctx.current_instruction = 0x88166088;
	REX_STORE_U32(ctx.r28.u32 + 2144, ctx.r11.u32);
loc_8816608C:
	// lwz r11,3944(r28)
	ctx.current_instruction = 0x8816608C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 3944);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88166148
	if (ctx.cr6.eq) goto loc_88166148;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88166098;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881660A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816610c
	if (!ctx.cr6.lt) goto loc_8816610C;
loc_881660B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816610c
	if (ctx.cr6.eq) goto loc_8816610C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881660C0;
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
	ctx.current_instruction = 0x881660E4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881660EC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881660fc
	if (!ctx.cr0.lt) goto loc_881660FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881660FC;
	sub_88156678(ctx, base);
loc_881660FC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881660FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881660b4
	if (ctx.cr6.gt) goto loc_881660B4;
loc_8816610C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88166110;
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
	ctx.current_instruction = 0x88166128;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88166134;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88166144
	if (!ctx.cr0.lt) goto loc_88166144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88166144;
	sub_88156678(ctx, base);
loc_88166144:
	// stw r30,456(r28)
	ctx.current_instruction = 0x88166144;
	REX_STORE_U32(ctx.r28.u32 + 456, ctx.r30.u32);
loc_88166148:
	// lwz r11,440(r28)
	ctx.current_instruction = 0x88166148;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88166210
	if (ctx.cr6.eq) goto loc_88166210;
	// lwz r3,84(r28)
	ctx.current_instruction = 0x88166154;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88166158;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x8816615C;
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
	ctx.current_instruction = 0x8816616C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88166170;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8816617c
	if (!ctx.cr0.lt) goto loc_8816617C;
	// bl 0x88156678
	ctx.lr = 0x8816617C;
	sub_88156678(ctx, base);
loc_8816617C:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x8816620c
	if (!ctx.cr6.eq) goto loc_8816620C;
	// lwz r3,84(r28)
	ctx.current_instruction = 0x88166184;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r26,332(r28)
	ctx.current_instruction = 0x88166188;
	REX_STORE_U32(ctx.r28.u32 + 332, ctx.r26.u32);
	// lwz r11,8(r3)
	ctx.current_instruction = 0x8816618C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88166190;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r9,r10,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,0(r3)
	ctx.current_instruction = 0x8816619C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	ctx.current_instruction = 0x881661A4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881661b0
	if (!ctx.cr0.lt) goto loc_881661B0;
	// bl 0x88156678
	ctx.lr = 0x881661B0;
	sub_88156678(ctx, base);
loc_881661B0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881661c4
	if (!ctx.cr6.eq) goto loc_881661C4;
	// stw r26,340(r28)
	ctx.current_instruction = 0x881661B8;
	REX_STORE_U32(ctx.r28.u32 + 340, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_881661C4:
	// lwz r3,84(r28)
	ctx.current_instruction = 0x881661C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881661C8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881661CC;
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
	ctx.current_instruction = 0x881661DC;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881661E0;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881661ec
	if (!ctx.cr0.lt) goto loc_881661EC;
	// bl 0x88156678
	ctx.lr = 0x881661EC;
	sub_88156678(ctx, base);
loc_881661EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x88166200
	if (!ctx.cr6.eq) goto loc_88166200;
	// stw r27,340(r28)
	ctx.current_instruction = 0x881661F4;
	REX_STORE_U32(ctx.r28.u32 + 340, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88166200:
	// stw r25,340(r28)
	ctx.current_instruction = 0x88166200;
	REX_STORE_U32(ctx.r28.u32 + 340, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8816620C:
	// stw r27,332(r28)
	ctx.current_instruction = 0x8816620C;
	REX_STORE_U32(ctx.r28.u32 + 332, ctx.r27.u32);
loc_88166210:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8817CE50) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8817CE50;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8817CE50) {
			switch (rex_dispatch_address) {
				case 0x8817CE58:
				case 0x8817CF3C:
				case 0x8817CF58:
				case 0x8817CF74:
				case 0x8817CF90:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817CE50;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8817CE58: goto loc_8817CE58;
		case 0x8817CF3C: goto loc_8817CF3C;
		case 0x8817CF58: goto loc_8817CF58;
		case 0x8817CF74: goto loc_8817CF74;
		case 0x8817CF90: goto loc_8817CF90;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8817CE58;
	__savegprlr_24(ctx, base);
loc_8817CE58:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8817CE58;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,3744(r3)
	ctx.current_instruction = 0x8817CE5C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,3760(r3)
	ctx.current_instruction = 0x8817CE64;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3760);
	// lwz r30,616(r8)
	ctx.current_instruction = 0x8817CE68;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 616);
	// lwz r10,220(r31)
	ctx.current_instruction = 0x8817CE6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r9,3776(r31)
	ctx.current_instruction = 0x8817CE70;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// lwz r6,3832(r31)
	ctx.current_instruction = 0x8817CE74;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
	// lwz r11,224(r31)
	ctx.current_instruction = 0x8817CE78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// add r25,r9,r10
	ctx.r25.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,3780(r31)
	ctx.current_instruction = 0x8817CE80;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// add r26,r6,r10
	ctx.r26.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwz r7,3784(r31)
	ctx.current_instruction = 0x8817CE88;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r5,3836(r31)
	ctx.current_instruction = 0x8817CE8C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3836);
	// add r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r4,3840(r31)
	ctx.current_instruction = 0x8817CE94;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3840);
	// add r27,r7,r11
	ctx.r27.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r30,616(r3)
	ctx.current_instruction = 0x8817CE9C;
	REX_STORE_U32(ctx.r3.u32 + 616, ctx.r30.u32);
	// add r30,r5,r11
	ctx.r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r10,15964(r31)
	ctx.current_instruction = 0x8817CEA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15964);
	// add r28,r4,r11
	ctx.r28.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8817cf1c
	if (ctx.cr6.eq) goto loc_8817CF1C;
	// lwz r11,20416(r31)
	ctx.current_instruction = 0x8817CEB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8817cf1c
	if (!ctx.cr6.eq) goto loc_8817CF1C;
	// lwz r10,3760(r31)
	ctx.current_instruction = 0x8817CEC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3760);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r9,592(r10)
	ctx.current_instruction = 0x8817CEC8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 592);
	// mulli r11,r9,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// stw r7,592(r10)
	ctx.current_instruction = 0x8817CEDC;
	REX_STORE_U32(ctx.r10.u32 + 592, ctx.r7.u32);
	// stw r8,48(r11)
	ctx.current_instruction = 0x8817CEE0;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lwz r6,3744(r31)
	ctx.current_instruction = 0x8817CEE4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3744);
	// stw r6,52(r11)
	ctx.current_instruction = 0x8817CEE8;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r5,204(r31)
	ctx.current_instruction = 0x8817CEEC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// stw r5,60(r11)
	ctx.current_instruction = 0x8817CEF0;
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// lwz r4,208(r31)
	ctx.current_instruction = 0x8817CEF4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// stw r4,64(r11)
	ctx.current_instruction = 0x8817CEF8;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// lwz r3,140(r31)
	ctx.current_instruction = 0x8817CEFC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// stw r3,56(r11)
	ctx.current_instruction = 0x8817CF00;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// lwz r10,220(r31)
	ctx.current_instruction = 0x8817CF04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// stw r10,68(r11)
	ctx.current_instruction = 0x8817CF08;
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r9,224(r31)
	ctx.current_instruction = 0x8817CF0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// stw r9,72(r11)
	ctx.current_instruction = 0x8817CF10;
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8817CF1C:
	// lwz r11,200(r31)
	ctx.current_instruction = 0x8817CF1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8817cfac
	if (!ctx.cr6.gt) goto loc_8817CFAC;
loc_8817CF2C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,208(r31)
	ctx.current_instruction = 0x8817CF30;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x8817CF3C;
	sub_880547A0(ctx, base);
loc_8817CF3C:
	// lwz r11,208(r31)
	ctx.current_instruction = 0x8817CF3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x8817CF58;
	sub_880547A0(ctx, base);
loc_8817CF58:
	// lwz r11,208(r31)
	ctx.current_instruction = 0x8817CF58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,204(r31)
	ctx.current_instruction = 0x8817CF64;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x880547a0
	ctx.lr = 0x8817CF74;
	sub_880547A0(ctx, base);
loc_8817CF74:
	// lwz r11,204(r31)
	ctx.current_instruction = 0x8817CF74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x880547a0
	ctx.lr = 0x8817CF90;
	sub_880547A0(ctx, base);
loc_8817CF90:
	// lwz r11,204(r31)
	ctx.current_instruction = 0x8817CF90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r11,200(r31)
	ctx.current_instruction = 0x8817CFA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8817cf2c
	if (ctx.cr6.lt) goto loc_8817CF2C;
loc_8817CFAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881809D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881809D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881809D0) {
			switch (rex_dispatch_address) {
				case 0x881809D8:
				case 0x88180A14:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881809D0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881809D8: goto loc_881809D8;
		case 0x88180A14: goto loc_88180A14;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x881809D8;
	__savegprlr_24(ctx, base);
loc_881809D8:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x881809D8;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,1600(r4)
	ctx.current_instruction = 0x881809E4;
	REX_STORE_U32(ctx.r4.u32 + 1600, ctx.r29.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,24688(r3)
	ctx.current_instruction = 0x881809EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// lwz r10,712(r11)
	ctx.current_instruction = 0x881809F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88180a04
	if (ctx.cr6.eq) goto loc_88180A04;
	// lwz r11,18464(r11)
	ctx.current_instruction = 0x881809FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18464);
	// b 0x88180a08
	goto loc_88180A08;
loc_88180A04:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_88180A08:
	// stw r11,1600(r31)
	ctx.current_instruction = 0x88180A08;
	REX_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8817fbc0
	ctx.lr = 0x88180A14;
	sub_8817FBC0(ctx, base);
loc_88180A14:
	// lwz r10,15536(r30)
	ctx.current_instruction = 0x88180A14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 15536);
	// addi r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 + 104;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r10,1168(r31)
	ctx.current_instruction = 0x88180A24;
	REX_STORE_U32(ctx.r31.u32 + 1168, ctx.r10.u32);
	// lwz r9,22184(r30)
	ctx.current_instruction = 0x88180A28;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 22184);
	// stw r9,1172(r31)
	ctx.current_instruction = 0x88180A2C;
	REX_STORE_U32(ctx.r31.u32 + 1172, ctx.r9.u32);
	// lwz r7,360(r30)
	ctx.current_instruction = 0x88180A30;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 360);
	// stw r7,4(r31)
	ctx.current_instruction = 0x88180A34;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lwz r6,84(r30)
	ctx.current_instruction = 0x88180A38;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// stw r6,0(r31)
	ctx.current_instruction = 0x88180A3C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r5,84(r30)
	ctx.current_instruction = 0x88180A40;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// ld r3,0(r5)
	ctx.current_instruction = 0x88180A44;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// std r3,104(r31)
	ctx.current_instruction = 0x88180A48;
	REX_STORE_U64(ctx.r31.u32 + 104, ctx.r3.u64);
	// lwz r10,84(r30)
	ctx.current_instruction = 0x88180A4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r9,8(r10)
	ctx.current_instruction = 0x88180A50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,112(r31)
	ctx.current_instruction = 0x88180A54;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// lwz r7,84(r30)
	ctx.current_instruction = 0x88180A58;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r6,12(r7)
	ctx.current_instruction = 0x88180A5C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r6,116(r31)
	ctx.current_instruction = 0x88180A60;
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// lwz r5,84(r30)
	ctx.current_instruction = 0x88180A64;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r3,16(r5)
	ctx.current_instruction = 0x88180A68;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// stw r3,120(r31)
	ctx.current_instruction = 0x88180A6C;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// lwz r10,84(r30)
	ctx.current_instruction = 0x88180A70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r9,20(r10)
	ctx.current_instruction = 0x88180A74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// stw r9,124(r31)
	ctx.current_instruction = 0x88180A78;
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// lwz r7,84(r30)
	ctx.current_instruction = 0x88180A7C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r6,24(r7)
	ctx.current_instruction = 0x88180A80;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// stw r6,128(r31)
	ctx.current_instruction = 0x88180A84;
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r6.u32);
	// lwz r5,84(r30)
	ctx.current_instruction = 0x88180A88;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r3,28(r5)
	ctx.current_instruction = 0x88180A8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// stw r3,132(r31)
	ctx.current_instruction = 0x88180A90;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lwz r10,84(r30)
	ctx.current_instruction = 0x88180A94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r9,32(r10)
	ctx.current_instruction = 0x88180A98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,136(r31)
	ctx.current_instruction = 0x88180A9C;
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// lwz r7,84(r30)
	ctx.current_instruction = 0x88180AA0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r6,36(r7)
	ctx.current_instruction = 0x88180AA4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// stw r6,140(r31)
	ctx.current_instruction = 0x88180AA8;
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r6.u32);
	// lwz r5,84(r30)
	ctx.current_instruction = 0x88180AAC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r3,40(r5)
	ctx.current_instruction = 0x88180AB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// stw r3,144(r31)
	ctx.current_instruction = 0x88180AB4;
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// lwz r10,84(r30)
	ctx.current_instruction = 0x88180AB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r9,44(r10)
	ctx.current_instruction = 0x88180ABC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// stw r9,148(r31)
	ctx.current_instruction = 0x88180AC0;
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// lwz r7,84(r30)
	ctx.current_instruction = 0x88180AC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r6,48(r7)
	ctx.current_instruction = 0x88180AC8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// stw r11,0(r31)
	ctx.current_instruction = 0x88180ACC;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r6,152(r31)
	ctx.current_instruction = 0x88180AD0;
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r6.u32);
	// lwz r5,380(r30)
	ctx.current_instruction = 0x88180AD4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 380);
	// stw r5,348(r31)
	ctx.current_instruction = 0x88180AD8;
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r5.u32);
	// lwz r3,384(r30)
	ctx.current_instruction = 0x88180ADC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 384);
	// stw r3,352(r31)
	ctx.current_instruction = 0x88180AE0;
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
	// lwz r11,136(r30)
	ctx.current_instruction = 0x88180AE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r10,r11,1,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFE;
	// sth r10,50(r31)
	ctx.current_instruction = 0x88180AEC;
	REX_STORE_U16(ctx.r31.u32 + 50, ctx.r10.u16);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r7,140(r30)
	ctx.current_instruction = 0x88180AF4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// rlwinm r6,r7,1,16,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFE;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r6,52(r31)
	ctx.current_instruction = 0x88180B00;
	REX_STORE_U16(ctx.r31.u32 + 52, ctx.r6.u16);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// sth r9,40(r31)
	ctx.current_instruction = 0x88180B08;
	REX_STORE_U16(ctx.r31.u32 + 40, ctx.r9.u16);
	// rlwinm r10,r5,3,16,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// sth r29,36(r31)
	ctx.current_instruction = 0x88180B10;
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r29.u16);
	// rlwinm r3,r9,3,16,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFF8;
	// sth r4,38(r31)
	ctx.current_instruction = 0x88180B18;
	REX_STORE_U16(ctx.r31.u32 + 38, ctx.r4.u16);
	// rlwinm r6,r9,2,16,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// sth r10,56(r31)
	ctx.current_instruction = 0x88180B20;
	REX_STORE_U16(ctx.r31.u32 + 56, ctx.r10.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r3,54(r31)
	ctx.current_instruction = 0x88180B28;
	REX_STORE_U16(ctx.r31.u32 + 54, ctx.r3.u16);
	// rlwinm r5,r5,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFC;
	// sth r6,58(r31)
	ctx.current_instruction = 0x88180B30;
	REX_STORE_U16(ctx.r31.u32 + 58, ctx.r6.u16);
	// sth r11,42(r31)
	ctx.current_instruction = 0x88180B34;
	REX_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// sth r5,60(r31)
	ctx.current_instruction = 0x88180B38;
	REX_STORE_U16(ctx.r31.u32 + 60, ctx.r5.u16);
	// lwz r3,204(r30)
	ctx.current_instruction = 0x88180B3C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,74(r31)
	ctx.current_instruction = 0x88180B44;
	REX_STORE_U16(ctx.r31.u32 + 74, ctx.r3.u16);
	// lwz r10,208(r30)
	ctx.current_instruction = 0x88180B48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// sth r10,76(r31)
	ctx.current_instruction = 0x88180B4C;
	REX_STORE_U16(ctx.r31.u32 + 76, ctx.r10.u16);
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r6,212(r30)
	ctx.current_instruction = 0x88180B54;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 212);
	// sth r6,78(r31)
	ctx.current_instruction = 0x88180B58;
	REX_STORE_U16(ctx.r31.u32 + 78, ctx.r6.u16);
	// lwz r11,216(r30)
	ctx.current_instruction = 0x88180B5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 216);
	// sth r11,80(r31)
	ctx.current_instruction = 0x88180B60;
	REX_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// lwz r7,228(r30)
	ctx.current_instruction = 0x88180B64;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 228);
	// sth r7,82(r31)
	ctx.current_instruction = 0x88180B68;
	REX_STORE_U16(ctx.r31.u32 + 82, ctx.r7.u16);
	// lwz r3,232(r30)
	ctx.current_instruction = 0x88180B6C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 232);
	// sth r3,84(r31)
	ctx.current_instruction = 0x88180B70;
	REX_STORE_U16(ctx.r31.u32 + 84, ctx.r3.u16);
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r10,172(r30)
	ctx.current_instruction = 0x88180B78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 172);
	// sth r10,86(r31)
	ctx.current_instruction = 0x88180B7C;
	REX_STORE_U16(ctx.r31.u32 + 86, ctx.r10.u16);
	// lwz r6,176(r30)
	ctx.current_instruction = 0x88180B80;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 176);
	// sth r9,90(r31)
	ctx.current_instruction = 0x88180B84;
	REX_STORE_U16(ctx.r31.u32 + 90, ctx.r9.u16);
	// sth r5,92(r31)
	ctx.current_instruction = 0x88180B88;
	REX_STORE_U16(ctx.r31.u32 + 92, ctx.r5.u16);
	// sth r6,88(r31)
	ctx.current_instruction = 0x88180B8C;
	REX_STORE_U16(ctx.r31.u32 + 88, ctx.r6.u16);
	// lwz r11,1880(r30)
	ctx.current_instruction = 0x88180B90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1880);
	// stw r11,1164(r31)
	ctx.current_instruction = 0x88180B94;
	REX_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,1772(r30)
	ctx.current_instruction = 0x88180B9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1772);
	// stw r10,428(r31)
	ctx.current_instruction = 0x88180BA0;
	REX_STORE_U32(ctx.r31.u32 + 428, ctx.r10.u32);
	// lwz r9,464(r30)
	ctx.current_instruction = 0x88180BA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 464);
	// stw r9,432(r31)
	ctx.current_instruction = 0x88180BA8;
	REX_STORE_U32(ctx.r31.u32 + 432, ctx.r9.u32);
	// lwz r7,468(r30)
	ctx.current_instruction = 0x88180BAC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 468);
	// stw r7,436(r31)
	ctx.current_instruction = 0x88180BB0;
	REX_STORE_U32(ctx.r31.u32 + 436, ctx.r7.u32);
	// lwz r6,472(r30)
	ctx.current_instruction = 0x88180BB4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 472);
	// stw r6,440(r31)
	ctx.current_instruction = 0x88180BB8;
	REX_STORE_U32(ctx.r31.u32 + 440, ctx.r6.u32);
	// lwz r5,3088(r30)
	ctx.current_instruction = 0x88180BBC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 3088);
	// stw r5,376(r31)
	ctx.current_instruction = 0x88180BC0;
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r5.u32);
loc_88180BC4:
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_88180BD0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_88180BDC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x88180c68
	if (!ctx.cr6.eq) goto loc_88180C68;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// add. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x88180c50
	if (ctx.cr0.eq) goto loc_88180C50;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88180c30
	if (ctx.cr6.eq) goto loc_88180C30;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x88180c30
	if (ctx.cr6.eq) goto loc_88180C30;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x88180c10
	if (!ctx.cr6.eq) goto loc_88180C10;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x88180c30
	if (ctx.cr6.eq) goto loc_88180C30;
loc_88180C10:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r9,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r9.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r9,264(r10)
	ctx.current_instruction = 0x88180C28;
	REX_STORE_U8(ctx.r10.u32 + 264, ctx.r9.u8);
	// b 0x88180c90
	goto loc_88180C90;
loc_88180C30:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r9,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r9.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r9,264(r10)
	ctx.current_instruction = 0x88180C48;
	REX_STORE_U8(ctx.r10.u32 + 264, ctx.r9.u8);
	// b 0x88180c90
	goto loc_88180C90;
loc_88180C50:
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// stb r9,264(r10)
	ctx.current_instruction = 0x88180C60;
	REX_STORE_U8(ctx.r10.u32 + 264, ctx.r9.u8);
	// b 0x88180c90
	goto loc_88180C90;
loc_88180C68:
	// subfc r10,r11,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// eqv r9,r11,r8
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r8.u64);
	// add r28,r6,r31
	ctx.r28.u64 = ctx.r6.u64 + ctx.r31.u64;
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r10,268(r28)
	ctx.current_instruction = 0x88180C8C;
	REX_STORE_U8(ctx.r28.u32 + 268, ctx.r10.u8);
loc_88180C90:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bdnz 0x88180bdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88180BDC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// blt cr6,0x88180bd0
	if (ctx.cr6.lt) goto loc_88180BD0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// blt cr6,0x88180bc4
	if (ctx.cr6.lt) goto loc_88180BC4;
	// lwz r10,22140(r30)
	ctx.current_instruction = 0x88180CB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 22140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88180d00
	if (!ctx.cr6.eq) goto loc_88180D00;
	// lhz r8,52(r31)
	ctx.current_instruction = 0x88180CBC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 52);
	// lhz r9,50(r31)
	ctx.current_instruction = 0x88180CC0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// rotlwi r10,r8,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r7,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r6,r10,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,300(r31)
	ctx.current_instruction = 0x88180CE4;
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r6.u32);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r9,316(r31)
	ctx.current_instruction = 0x88180CEC;
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,284(r31)
	ctx.current_instruction = 0x88180CF4;
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r10.u32);
	// stw r10,292(r31)
	ctx.current_instruction = 0x88180CF8;
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// b 0x88180d68
	goto loc_88180D68;
loc_88180D00:
	// lhz r7,52(r31)
	ctx.current_instruction = 0x88180D00;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 52);
	// lhz r10,50(r31)
	ctx.current_instruction = 0x88180D04;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// rotlwi r8,r7,6
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 6);
	// rotlwi r9,r7,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// addi r6,r8,-8
	ctx.r6.s64 = ctx.r8.s64 + -8;
	// addi r5,r9,-8
	ctx.r5.s64 = ctx.r9.s64 + -8;
	// rotlwi r9,r7,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// rlwinm r7,r6,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r8,r5,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFFFF000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r5,r9,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r7,r5,51
	ctx.r7.s64 = ctx.r5.s64 + 3342336;
	// addis r6,r8,27
	ctx.r6.s64 = ctx.r8.s64 + 1769472;
	// addi r7,r7,51
	ctx.r7.s64 = ctx.r7.s64 + 51;
	// addi r6,r6,27
	ctx.r6.s64 = ctx.r6.s64 + 27;
	// addi r5,r9,-12
	ctx.r5.s64 = ctx.r9.s64 + -12;
	// stw r7,284(r31)
	ctx.current_instruction = 0x88180D54;
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r7.u32);
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// stw r6,292(r31)
	ctx.current_instruction = 0x88180D5C;
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r6.u32);
	// stw r5,300(r31)
	ctx.current_instruction = 0x88180D60;
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r5.u32);
	// stw r10,316(r31)
	ctx.current_instruction = 0x88180D64;
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
loc_88180D68:
	// lwz r10,1768(r30)
	ctx.current_instruction = 0x88180D68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1768);
	// lis r28,-30685
	ctx.r28.s64 = -2010972160;
	// lis r27,-30685
	ctx.r27.s64 = -2010972160;
	// lis r26,-30685
	ctx.r26.s64 = -2010972160;
	// lis r8,-30685
	ctx.r8.s64 = -2010972160;
	// lis r7,-30685
	ctx.r7.s64 = -2010972160;
	// stw r10,616(r31)
	ctx.current_instruction = 0x88180D80;
	REX_STORE_U32(ctx.r31.u32 + 616, ctx.r10.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// lis r9,-30685
	ctx.r9.s64 = -2010972160;
	// lis r6,-30685
	ctx.r6.s64 = -2010972160;
	// lis r5,-30685
	ctx.r5.s64 = -2010972160;
	// addi r25,r8,-24504
	ctx.r25.s64 = ctx.r8.s64 + -24504;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r28,-22560
	ctx.r10.s64 = ctx.r28.s64 + -22560;
	// addi r28,r27,-21864
	ctx.r28.s64 = ctx.r27.s64 + -21864;
	// addi r27,r26,-20848
	ctx.r27.s64 = ctx.r26.s64 + -20848;
	// addi r24,r7,-23896
	ctx.r24.s64 = ctx.r7.s64 + -23896;
	// addi r9,r9,-24840
	ctx.r9.s64 = ctx.r9.s64 + -24840;
	// addi r6,r6,-23552
	ctx.r6.s64 = ctx.r6.s64 + -23552;
	// addi r5,r5,-22920
	ctx.r5.s64 = ctx.r5.s64 + -22920;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r7,r31,668
	ctx.r7.s64 = ctx.r31.s64 + 668;
	// lwz r26,15904(r30)
	ctx.current_instruction = 0x88180DC0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 15904);
	// stw r9,636(r31)
	ctx.current_instruction = 0x88180DC4;
	REX_STORE_U32(ctx.r31.u32 + 636, ctx.r9.u32);
	// stw r25,640(r31)
	ctx.current_instruction = 0x88180DC8;
	REX_STORE_U32(ctx.r31.u32 + 640, ctx.r25.u32);
	// stw r24,644(r31)
	ctx.current_instruction = 0x88180DCC;
	REX_STORE_U32(ctx.r31.u32 + 644, ctx.r24.u32);
	// stw r6,648(r31)
	ctx.current_instruction = 0x88180DD0;
	REX_STORE_U32(ctx.r31.u32 + 648, ctx.r6.u32);
	// stw r26,960(r31)
	ctx.current_instruction = 0x88180DD4;
	REX_STORE_U32(ctx.r31.u32 + 960, ctx.r26.u32);
	// stw r5,652(r31)
	ctx.current_instruction = 0x88180DD8;
	REX_STORE_U32(ctx.r31.u32 + 652, ctx.r5.u32);
	// stw r10,656(r31)
	ctx.current_instruction = 0x88180DDC;
	REX_STORE_U32(ctx.r31.u32 + 656, ctx.r10.u32);
	// stw r28,660(r31)
	ctx.current_instruction = 0x88180DE0;
	REX_STORE_U32(ctx.r31.u32 + 660, ctx.r28.u32);
	// stw r27,664(r31)
	ctx.current_instruction = 0x88180DE4;
	REX_STORE_U32(ctx.r31.u32 + 664, ctx.r27.u32);
loc_88180DE8:
	// rlwinm r6,r8,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x88180e00
	if (ctx.cr6.eq) goto loc_88180E00;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_88180E00:
	// rlwinm r6,r8,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x88180e14
	if (ctx.cr6.eq) goto loc_88180E14;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_88180E14:
	// rlwinm r6,r8,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x88180e2c
	if (ctx.cr6.eq) goto loc_88180E2C;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 8;
loc_88180E2C:
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x88180e44
	if (ctx.cr6.eq) goto loc_88180E44;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r9,r9,12
	ctx.r9.u64 = ctx.r9.u64 | 12;
loc_88180E44:
	// subfic r10,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r10.u64 = static_cast<uint64_t>(4) - ctx.r10.u64;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r5,r9,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// rlwinm r9,r5,30,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xC;
	// rlwimi r10,r5,4,0,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// rlwinm r6,r5,26,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x3;
	// rlwinm r5,r10,2,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFF0;
	// or r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 | ctx.r9.u64;
	// or r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 | ctx.r6.u64;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// stbx r6,r7,r8
	ctx.current_instruction = 0x88180E74;
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x88180de8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88180DE8;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r6,64
	ctx.r6.s64 = 4194304;
	// addi r7,r10,20368
	ctx.r7.s64 = ctx.r10.s64 + 20368;
	// lis r9,32
	ctx.r9.s64 = 2097152;
	// lis r5,28
	ctx.r5.s64 = 1835008;
	// lwz r8,20368(r10)
	ctx.current_instruction = 0x88180E94;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20368);
	// ori r10,r6,64
	ctx.r10.u64 = ctx.r6.u64 | 64;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// lis r28,60
	ctx.r28.s64 = 3932160;
	// ori r6,r5,28
	ctx.r6.u64 = ctx.r5.u64 | 28;
	// ori r5,r28,60
	ctx.r5.u64 = ctx.r28.u64 | 60;
	// stw r8,320(r31)
	ctx.current_instruction = 0x88180EAC;
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r8.u32);
	// addi r8,r31,320
	ctx.r8.s64 = ctx.r31.s64 + 320;
	// lwz r8,4(r7)
	ctx.current_instruction = 0x88180EB4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r8,324(r31)
	ctx.current_instruction = 0x88180EB8;
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r8.u32);
	// lwz r8,8(r7)
	ctx.current_instruction = 0x88180EBC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r8,328(r31)
	ctx.current_instruction = 0x88180EC0;
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r8.u32);
	// lwz r7,12(r7)
	ctx.current_instruction = 0x88180EC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r7,332(r31)
	ctx.current_instruction = 0x88180EC8;
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r7.u32);
	// lwz r7,316(r31)
	ctx.current_instruction = 0x88180ECC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// stw r7,1724(r31)
	ctx.current_instruction = 0x88180ED0;
	REX_STORE_U32(ctx.r31.u32 + 1724, ctx.r7.u32);
	// lwz r8,300(r31)
	ctx.current_instruction = 0x88180ED4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// stw r9,312(r31)
	ctx.current_instruction = 0x88180ED8;
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r9.u32);
	// stw r8,1716(r31)
	ctx.current_instruction = 0x88180EDC;
	REX_STORE_U32(ctx.r31.u32 + 1716, ctx.r8.u32);
	// stw r10,1712(r31)
	ctx.current_instruction = 0x88180EE0;
	REX_STORE_U32(ctx.r31.u32 + 1712, ctx.r10.u32);
	// stw r9,1720(r31)
	ctx.current_instruction = 0x88180EE4;
	REX_STORE_U32(ctx.r31.u32 + 1720, ctx.r9.u32);
	// stw r6,280(r31)
	ctx.current_instruction = 0x88180EE8;
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r6.u32);
	// stw r5,288(r31)
	ctx.current_instruction = 0x88180EEC;
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r5.u32);
	// stw r10,296(r31)
	ctx.current_instruction = 0x88180EF0;
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// lwz r6,15536(r30)
	ctx.current_instruction = 0x88180EF4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 15536);
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// bne cr6,0x88180f2c
	if (!ctx.cr6.eq) goto loc_88180F2C;
	// lhz r7,52(r31)
	ctx.current_instruction = 0x88180F00;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 52);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lhz r8,50(r31)
	ctx.current_instruction = 0x88180F08;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// rotlwi r10,r7,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// stw r6,1712(r31)
	ctx.current_instruction = 0x88180F10;
	REX_STORE_U32(ctx.r31.u32 + 1712, ctx.r6.u32);
	// stw r9,1720(r31)
	ctx.current_instruction = 0x88180F14;
	REX_STORE_U32(ctx.r31.u32 + 1720, ctx.r9.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r5,r10,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r5,1716(r31)
	ctx.current_instruction = 0x88180F24;
	REX_STORE_U32(ctx.r31.u32 + 1716, ctx.r5.u32);
	// stw r10,1724(r31)
	ctx.current_instruction = 0x88180F28;
	REX_STORE_U32(ctx.r31.u32 + 1724, ctx.r10.u32);
loc_88180F2C:
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r29,308(r31)
	ctx.current_instruction = 0x88180F30;
	REX_STORE_U8(ctx.r31.u32 + 308, ctx.r29.u8);
	// li r7,96
	ctx.r7.s64 = 96;
	// stb r29,309(r31)
	ctx.current_instruction = 0x88180F38;
	REX_STORE_U8(ctx.r31.u32 + 309, ctx.r29.u8);
	// li r6,100
	ctx.r6.s64 = 100;
	// stb r9,695(r31)
	ctx.current_instruction = 0x88180F40;
	REX_STORE_U8(ctx.r31.u32 + 695, ctx.r9.u8);
	// stb r9,698(r31)
	ctx.current_instruction = 0x88180F44;
	REX_STORE_U8(ctx.r31.u32 + 698, ctx.r9.u8);
	// li r8,64
	ctx.r8.s64 = 64;
	// stb r29,310(r31)
	ctx.current_instruction = 0x88180F4C;
	REX_STORE_U8(ctx.r31.u32 + 310, ctx.r29.u8);
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r4,311(r31)
	ctx.current_instruction = 0x88180F54;
	REX_STORE_U8(ctx.r31.u32 + 311, ctx.r4.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r29,684(r31)
	ctx.current_instruction = 0x88180F5C;
	REX_STORE_U8(ctx.r31.u32 + 684, ctx.r29.u8);
	// addi r9,r31,168
	ctx.r9.s64 = ctx.r31.s64 + 168;
	// stb r4,687(r31)
	ctx.current_instruction = 0x88180F64;
	REX_STORE_U8(ctx.r31.u32 + 687, ctx.r4.u8);
	// stb r4,686(r31)
	ctx.current_instruction = 0x88180F68;
	REX_STORE_U8(ctx.r31.u32 + 686, ctx.r4.u8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stb r4,685(r31)
	ctx.current_instruction = 0x88180F70;
	REX_STORE_U8(ctx.r31.u32 + 685, ctx.r4.u8);
	// stb r11,690(r31)
	ctx.current_instruction = 0x88180F74;
	REX_STORE_U8(ctx.r31.u32 + 690, ctx.r11.u8);
	// stb r11,689(r31)
	ctx.current_instruction = 0x88180F78;
	REX_STORE_U8(ctx.r31.u32 + 689, ctx.r11.u8);
	// stb r11,688(r31)
	ctx.current_instruction = 0x88180F7C;
	REX_STORE_U8(ctx.r31.u32 + 688, ctx.r11.u8);
	// stb r3,691(r31)
	ctx.current_instruction = 0x88180F80;
	REX_STORE_U8(ctx.r31.u32 + 691, ctx.r3.u8);
	// stb r29,692(r31)
	ctx.current_instruction = 0x88180F84;
	REX_STORE_U8(ctx.r31.u32 + 692, ctx.r29.u8);
	// stb r4,693(r31)
	ctx.current_instruction = 0x88180F88;
	REX_STORE_U8(ctx.r31.u32 + 693, ctx.r4.u8);
	// stb r11,694(r31)
	ctx.current_instruction = 0x88180F8C;
	REX_STORE_U8(ctx.r31.u32 + 694, ctx.r11.u8);
	// stb r4,696(r31)
	ctx.current_instruction = 0x88180F90;
	REX_STORE_U8(ctx.r31.u32 + 696, ctx.r4.u8);
	// stb r11,697(r31)
	ctx.current_instruction = 0x88180F94;
	REX_STORE_U8(ctx.r31.u32 + 697, ctx.r11.u8);
	// stb r29,699(r31)
	ctx.current_instruction = 0x88180F98;
	REX_STORE_U8(ctx.r31.u32 + 699, ctx.r29.u8);
	// stb r29,1728(r31)
	ctx.current_instruction = 0x88180F9C;
	REX_STORE_U8(ctx.r31.u32 + 1728, ctx.r29.u8);
	// stb r3,1729(r31)
	ctx.current_instruction = 0x88180FA0;
	REX_STORE_U8(ctx.r31.u32 + 1729, ctx.r3.u8);
	// stb r7,1730(r31)
	ctx.current_instruction = 0x88180FA4;
	REX_STORE_U8(ctx.r31.u32 + 1730, ctx.r7.u8);
	// stb r6,1731(r31)
	ctx.current_instruction = 0x88180FA8;
	REX_STORE_U8(ctx.r31.u32 + 1731, ctx.r6.u8);
	// stb r29,1732(r31)
	ctx.current_instruction = 0x88180FAC;
	REX_STORE_U8(ctx.r31.u32 + 1732, ctx.r29.u8);
	// stb r29,1733(r31)
	ctx.current_instruction = 0x88180FB0;
	REX_STORE_U8(ctx.r31.u32 + 1733, ctx.r29.u8);
	// stb r29,1734(r31)
	ctx.current_instruction = 0x88180FB4;
	REX_STORE_U8(ctx.r31.u32 + 1734, ctx.r29.u8);
	// stb r29,1735(r31)
	ctx.current_instruction = 0x88180FB8;
	REX_STORE_U8(ctx.r31.u32 + 1735, ctx.r29.u8);
	// stb r29,1736(r31)
	ctx.current_instruction = 0x88180FBC;
	REX_STORE_U8(ctx.r31.u32 + 1736, ctx.r29.u8);
	// stb r29,1737(r31)
	ctx.current_instruction = 0x88180FC0;
	REX_STORE_U8(ctx.r31.u32 + 1737, ctx.r29.u8);
	// stb r29,1738(r31)
	ctx.current_instruction = 0x88180FC4;
	REX_STORE_U8(ctx.r31.u32 + 1738, ctx.r29.u8);
	// stb r29,1739(r31)
	ctx.current_instruction = 0x88180FC8;
	REX_STORE_U8(ctx.r31.u32 + 1739, ctx.r29.u8);
	// stb r8,160(r31)
	ctx.current_instruction = 0x88180FCC;
	REX_STORE_U8(ctx.r31.u32 + 160, ctx.r8.u8);
	// stb r10,161(r31)
	ctx.current_instruction = 0x88180FD0;
	REX_STORE_U8(ctx.r31.u32 + 161, ctx.r10.u8);
	// stb r10,162(r31)
	ctx.current_instruction = 0x88180FD4;
	REX_STORE_U8(ctx.r31.u32 + 162, ctx.r10.u8);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stb r29,163(r31)
	ctx.current_instruction = 0x88180FDC;
	REX_STORE_U8(ctx.r31.u32 + 163, ctx.r29.u8);
	// stb r5,164(r31)
	ctx.current_instruction = 0x88180FE0;
	REX_STORE_U8(ctx.r31.u32 + 164, ctx.r5.u8);
loc_88180FE4:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bge cr6,0x88180ff4
	if (!ctx.cr6.lt) goto loc_88180FF4;
	// stbx r29,r9,r10
	ctx.current_instruction = 0x88180FEC;
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u8);
	// b 0x88181000
	goto loc_88181000;
loc_88180FF4:
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// slw r7,r4,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r8.u8 & 0x3F));
	// stbx r7,r9,r10
	ctx.current_instruction = 0x88180FFC;
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
loc_88181000:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x88180fe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88180FE4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8818100C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8818101c
	if (!ctx.cr6.eq) goto loc_8818101C;
	// stb r29,0(r9)
	ctx.current_instruction = 0x88181014;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r29.u8);
	// b 0x88181044
	goto loc_88181044;
loc_8818101C:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bge cr6,0x8818102c
	if (!ctx.cr6.lt) goto loc_8818102C;
	// stbx r4,r9,r10
	ctx.current_instruction = 0x88181024;
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u8);
	// b 0x88181044
	goto loc_88181044;
loc_8818102C:
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x88181040
	if (!ctx.cr6.eq) goto loc_88181040;
	// stbx r11,r9,r10
	ctx.current_instruction = 0x88181038;
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x88181044
	goto loc_88181044;
loc_88181040:
	// stbx r3,r9,r10
	ctx.current_instruction = 0x88181040;
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u8);
loc_88181044:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// blt cr6,0x8818100c
	if (ctx.cr6.lt) goto loc_8818100C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r9,r31,232
	ctx.r9.s64 = ctx.r31.s64 + 232;
loc_88181058:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88181068
	if (!ctx.cr6.eq) goto loc_88181068;
	// stb r29,0(r9)
	ctx.current_instruction = 0x88181060;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r29.u8);
	// b 0x88181090
	goto loc_88181090;
loc_88181068:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bge cr6,0x88181078
	if (!ctx.cr6.lt) goto loc_88181078;
	// stbx r4,r9,r10
	ctx.current_instruction = 0x88181070;
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u8);
	// b 0x88181090
	goto loc_88181090;
loc_88181078:
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8818108c
	if (!ctx.cr6.eq) goto loc_8818108C;
	// stbx r11,r9,r10
	ctx.current_instruction = 0x88181084;
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x88181090
	goto loc_88181090;
loc_8818108C:
	// stbx r3,r9,r10
	ctx.current_instruction = 0x8818108C;
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u8);
loc_88181090:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x88181058
	if (ctx.cr6.lt) goto loc_88181058;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r10,r11,6888
	ctx.r10.s64 = ctx.r11.s64 + 6888;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r31,448
	ctx.r9.s64 = ctx.r31.s64 + 448;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881810B8:
	// lhzu r8,2(r10)
	ctx.current_instruction = 0x881810B8;
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// stbx r8,r9,r11
	ctx.current_instruction = 0x881810C0;
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881810b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881810B8;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// stw r10,0(r9)
	ctx.current_instruction = 0x881810D4;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88197108) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88197108);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88197108;
	ctx.current_instruction = 0x88197108;
	uint32_t ea{};
	// vspltisb v0,15
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0xF)));
	// srawi. r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vspltisb v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x1)));
	// vslb v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// blelr 
	if (!ctx.cr0.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// li r7,-32
	ctx.r7.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r9,16
	ctx.r9.s64 = 16;
loc_88197134:
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v10,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v9,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v8,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v7,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v6,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v5,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v4,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v3,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v2,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsububm v1,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsrab v31,v10,v13
	ctx.v31.s8[0] = ctx.v10.s8[0] >> (ctx.v13.u8[0] & 0x7);
	ctx.v31.s8[1] = ctx.v10.s8[1] >> (ctx.v13.u8[1] & 0x7);
	ctx.v31.s8[2] = ctx.v10.s8[2] >> (ctx.v13.u8[2] & 0x7);
	ctx.v31.s8[3] = ctx.v10.s8[3] >> (ctx.v13.u8[3] & 0x7);
	ctx.v31.s8[4] = ctx.v10.s8[4] >> (ctx.v13.u8[4] & 0x7);
	ctx.v31.s8[5] = ctx.v10.s8[5] >> (ctx.v13.u8[5] & 0x7);
	ctx.v31.s8[6] = ctx.v10.s8[6] >> (ctx.v13.u8[6] & 0x7);
	ctx.v31.s8[7] = ctx.v10.s8[7] >> (ctx.v13.u8[7] & 0x7);
	ctx.v31.s8[8] = ctx.v10.s8[8] >> (ctx.v13.u8[8] & 0x7);
	ctx.v31.s8[9] = ctx.v10.s8[9] >> (ctx.v13.u8[9] & 0x7);
	ctx.v31.s8[10] = ctx.v10.s8[10] >> (ctx.v13.u8[10] & 0x7);
	ctx.v31.s8[11] = ctx.v10.s8[11] >> (ctx.v13.u8[11] & 0x7);
	ctx.v31.s8[12] = ctx.v10.s8[12] >> (ctx.v13.u8[12] & 0x7);
	ctx.v31.s8[13] = ctx.v10.s8[13] >> (ctx.v13.u8[13] & 0x7);
	ctx.v31.s8[14] = ctx.v10.s8[14] >> (ctx.v13.u8[14] & 0x7);
	ctx.v31.s8[15] = ctx.v10.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v30,v8,v13
	ctx.v30.s8[0] = ctx.v8.s8[0] >> (ctx.v13.u8[0] & 0x7);
	ctx.v30.s8[1] = ctx.v8.s8[1] >> (ctx.v13.u8[1] & 0x7);
	ctx.v30.s8[2] = ctx.v8.s8[2] >> (ctx.v13.u8[2] & 0x7);
	ctx.v30.s8[3] = ctx.v8.s8[3] >> (ctx.v13.u8[3] & 0x7);
	ctx.v30.s8[4] = ctx.v8.s8[4] >> (ctx.v13.u8[4] & 0x7);
	ctx.v30.s8[5] = ctx.v8.s8[5] >> (ctx.v13.u8[5] & 0x7);
	ctx.v30.s8[6] = ctx.v8.s8[6] >> (ctx.v13.u8[6] & 0x7);
	ctx.v30.s8[7] = ctx.v8.s8[7] >> (ctx.v13.u8[7] & 0x7);
	ctx.v30.s8[8] = ctx.v8.s8[8] >> (ctx.v13.u8[8] & 0x7);
	ctx.v30.s8[9] = ctx.v8.s8[9] >> (ctx.v13.u8[9] & 0x7);
	ctx.v30.s8[10] = ctx.v8.s8[10] >> (ctx.v13.u8[10] & 0x7);
	ctx.v30.s8[11] = ctx.v8.s8[11] >> (ctx.v13.u8[11] & 0x7);
	ctx.v30.s8[12] = ctx.v8.s8[12] >> (ctx.v13.u8[12] & 0x7);
	ctx.v30.s8[13] = ctx.v8.s8[13] >> (ctx.v13.u8[13] & 0x7);
	ctx.v30.s8[14] = ctx.v8.s8[14] >> (ctx.v13.u8[14] & 0x7);
	ctx.v30.s8[15] = ctx.v8.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v29,v6,v13
	ctx.v29.s8[0] = ctx.v6.s8[0] >> (ctx.v13.u8[0] & 0x7);
	ctx.v29.s8[1] = ctx.v6.s8[1] >> (ctx.v13.u8[1] & 0x7);
	ctx.v29.s8[2] = ctx.v6.s8[2] >> (ctx.v13.u8[2] & 0x7);
	ctx.v29.s8[3] = ctx.v6.s8[3] >> (ctx.v13.u8[3] & 0x7);
	ctx.v29.s8[4] = ctx.v6.s8[4] >> (ctx.v13.u8[4] & 0x7);
	ctx.v29.s8[5] = ctx.v6.s8[5] >> (ctx.v13.u8[5] & 0x7);
	ctx.v29.s8[6] = ctx.v6.s8[6] >> (ctx.v13.u8[6] & 0x7);
	ctx.v29.s8[7] = ctx.v6.s8[7] >> (ctx.v13.u8[7] & 0x7);
	ctx.v29.s8[8] = ctx.v6.s8[8] >> (ctx.v13.u8[8] & 0x7);
	ctx.v29.s8[9] = ctx.v6.s8[9] >> (ctx.v13.u8[9] & 0x7);
	ctx.v29.s8[10] = ctx.v6.s8[10] >> (ctx.v13.u8[10] & 0x7);
	ctx.v29.s8[11] = ctx.v6.s8[11] >> (ctx.v13.u8[11] & 0x7);
	ctx.v29.s8[12] = ctx.v6.s8[12] >> (ctx.v13.u8[12] & 0x7);
	ctx.v29.s8[13] = ctx.v6.s8[13] >> (ctx.v13.u8[13] & 0x7);
	ctx.v29.s8[14] = ctx.v6.s8[14] >> (ctx.v13.u8[14] & 0x7);
	ctx.v29.s8[15] = ctx.v6.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v28,v4,v13
	ctx.v28.s8[0] = ctx.v4.s8[0] >> (ctx.v13.u8[0] & 0x7);
	ctx.v28.s8[1] = ctx.v4.s8[1] >> (ctx.v13.u8[1] & 0x7);
	ctx.v28.s8[2] = ctx.v4.s8[2] >> (ctx.v13.u8[2] & 0x7);
	ctx.v28.s8[3] = ctx.v4.s8[3] >> (ctx.v13.u8[3] & 0x7);
	ctx.v28.s8[4] = ctx.v4.s8[4] >> (ctx.v13.u8[4] & 0x7);
	ctx.v28.s8[5] = ctx.v4.s8[5] >> (ctx.v13.u8[5] & 0x7);
	ctx.v28.s8[6] = ctx.v4.s8[6] >> (ctx.v13.u8[6] & 0x7);
	ctx.v28.s8[7] = ctx.v4.s8[7] >> (ctx.v13.u8[7] & 0x7);
	ctx.v28.s8[8] = ctx.v4.s8[8] >> (ctx.v13.u8[8] & 0x7);
	ctx.v28.s8[9] = ctx.v4.s8[9] >> (ctx.v13.u8[9] & 0x7);
	ctx.v28.s8[10] = ctx.v4.s8[10] >> (ctx.v13.u8[10] & 0x7);
	ctx.v28.s8[11] = ctx.v4.s8[11] >> (ctx.v13.u8[11] & 0x7);
	ctx.v28.s8[12] = ctx.v4.s8[12] >> (ctx.v13.u8[12] & 0x7);
	ctx.v28.s8[13] = ctx.v4.s8[13] >> (ctx.v13.u8[13] & 0x7);
	ctx.v28.s8[14] = ctx.v4.s8[14] >> (ctx.v13.u8[14] & 0x7);
	ctx.v28.s8[15] = ctx.v4.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v27,v2,v13
	ctx.v27.s8[0] = ctx.v2.s8[0] >> (ctx.v13.u8[0] & 0x7);
	ctx.v27.s8[1] = ctx.v2.s8[1] >> (ctx.v13.u8[1] & 0x7);
	ctx.v27.s8[2] = ctx.v2.s8[2] >> (ctx.v13.u8[2] & 0x7);
	ctx.v27.s8[3] = ctx.v2.s8[3] >> (ctx.v13.u8[3] & 0x7);
	ctx.v27.s8[4] = ctx.v2.s8[4] >> (ctx.v13.u8[4] & 0x7);
	ctx.v27.s8[5] = ctx.v2.s8[5] >> (ctx.v13.u8[5] & 0x7);
	ctx.v27.s8[6] = ctx.v2.s8[6] >> (ctx.v13.u8[6] & 0x7);
	ctx.v27.s8[7] = ctx.v2.s8[7] >> (ctx.v13.u8[7] & 0x7);
	ctx.v27.s8[8] = ctx.v2.s8[8] >> (ctx.v13.u8[8] & 0x7);
	ctx.v27.s8[9] = ctx.v2.s8[9] >> (ctx.v13.u8[9] & 0x7);
	ctx.v27.s8[10] = ctx.v2.s8[10] >> (ctx.v13.u8[10] & 0x7);
	ctx.v27.s8[11] = ctx.v2.s8[11] >> (ctx.v13.u8[11] & 0x7);
	ctx.v27.s8[12] = ctx.v2.s8[12] >> (ctx.v13.u8[12] & 0x7);
	ctx.v27.s8[13] = ctx.v2.s8[13] >> (ctx.v13.u8[13] & 0x7);
	ctx.v27.s8[14] = ctx.v2.s8[14] >> (ctx.v13.u8[14] & 0x7);
	ctx.v27.s8[15] = ctx.v2.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v26,v1,v13
	ctx.v26.s8[0] = ctx.v1.s8[0] >> (ctx.v13.u8[0] & 0x7);
	ctx.v26.s8[1] = ctx.v1.s8[1] >> (ctx.v13.u8[1] & 0x7);
	ctx.v26.s8[2] = ctx.v1.s8[2] >> (ctx.v13.u8[2] & 0x7);
	ctx.v26.s8[3] = ctx.v1.s8[3] >> (ctx.v13.u8[3] & 0x7);
	ctx.v26.s8[4] = ctx.v1.s8[4] >> (ctx.v13.u8[4] & 0x7);
	ctx.v26.s8[5] = ctx.v1.s8[5] >> (ctx.v13.u8[5] & 0x7);
	ctx.v26.s8[6] = ctx.v1.s8[6] >> (ctx.v13.u8[6] & 0x7);
	ctx.v26.s8[7] = ctx.v1.s8[7] >> (ctx.v13.u8[7] & 0x7);
	ctx.v26.s8[8] = ctx.v1.s8[8] >> (ctx.v13.u8[8] & 0x7);
	ctx.v26.s8[9] = ctx.v1.s8[9] >> (ctx.v13.u8[9] & 0x7);
	ctx.v26.s8[10] = ctx.v1.s8[10] >> (ctx.v13.u8[10] & 0x7);
	ctx.v26.s8[11] = ctx.v1.s8[11] >> (ctx.v13.u8[11] & 0x7);
	ctx.v26.s8[12] = ctx.v1.s8[12] >> (ctx.v13.u8[12] & 0x7);
	ctx.v26.s8[13] = ctx.v1.s8[13] >> (ctx.v13.u8[13] & 0x7);
	ctx.v26.s8[14] = ctx.v1.s8[14] >> (ctx.v13.u8[14] & 0x7);
	ctx.v26.s8[15] = ctx.v1.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vaddubm v25,v30,v0
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddubm v24,v29,v0
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddubm v23,v31,v0
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddubm v22,v28,v0
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddubm v21,v27,v0
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v25,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddubm v20,v26,v0
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v24,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stvx128 v21,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// bdnz 0x88197134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88197134;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8819B8E0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8819B8E0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8819B8E0) {
			switch (rex_dispatch_address) {
				case 0x8819B8E8:
				case 0x8819BA18:
				case 0x8819BA4C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8819B8E0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8819B8E8: goto loc_8819B8E8;
		case 0x8819BA18: goto loc_8819BA18;
		case 0x8819BA4C: goto loc_8819BA4C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8819B8E8;
	__savegprlr_25(ctx, base);
loc_8819B8E8:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x8819B8E8;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,136(r3)
	ctx.current_instruction = 0x8819B8EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,1780(r3)
	ctx.current_instruction = 0x8819B8F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r30,1776(r3)
	ctx.current_instruction = 0x8819B900;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mullw r10,r7,r5
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r29,r11
	ctx.r28.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhzx r9,r29,r11
	ctx.current_instruction = 0x8819B920;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// sthx r9,r29,r11
	ctx.current_instruction = 0x8819B924;
	REX_STORE_U16(ctx.r29.u32 + ctx.r11.u32, ctx.r9.u16);
	// beq cr6,0x8819b978
	if (ctx.cr6.eq) goto loc_8819B978;
	// or r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 | ctx.r5.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8819b978
	if (ctx.cr6.eq) goto loc_8819B978;
	// rlwinm r9,r5,0,16,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFE;
	// rlwinm r10,r4,0,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFE;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r30
	ctx.current_instruction = 0x8819B950;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r30.u32);
	// sthx r7,r29,r30
	ctx.current_instruction = 0x8819B954;
	REX_STORE_U16(ctx.r29.u32 + ctx.r30.u32, ctx.r7.u16);
	// lhzx r6,r8,r11
	ctx.current_instruction = 0x8819B958;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// sth r6,0(r28)
	ctx.current_instruction = 0x8819B95C;
	REX_STORE_U16(ctx.r28.u32 + 0, ctx.r6.u16);
	// lhzx r11,r29,r30
	ctx.current_instruction = 0x8819B960;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r30.u32);
	// addi r5,r11,-16384
	ctx.r5.s64 = ctx.r11.s64 + -16384;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8819B978:
	// lwz r9,0(r27)
	ctx.current_instruction = 0x8819B978;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8819b9a0
	if (ctx.cr6.eq) goto loc_8819B9A0;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// li r26,1
	ctx.r26.s64 = 1;
	// sthx r11,r29,r30
	ctx.current_instruction = 0x8819B990;
	REX_STORE_U16(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8819B9A0:
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8819ba54
	if (!ctx.cr6.eq) goto loc_8819BA54;
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8819b9e4
	if (!ctx.cr6.eq) goto loc_8819B9E4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8819b9e0
	if (ctx.cr6.eq) goto loc_8819B9E0;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// lwz r10,21968(r31)
	ctx.current_instruction = 0x8819B9C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21968);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwzx r8,r9,r10
	ctx.current_instruction = 0x8819B9D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8819b9e4
	if (ctx.cr6.eq) goto loc_8819B9E4;
loc_8819B9E0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8819B9E4:
	// lwz r10,20684(r31)
	ctx.current_instruction = 0x8819B9E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20684);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8819ba20
	if (ctx.cr6.eq) goto loc_8819BA20;
	// stw r4,112(r1)
	ctx.current_instruction = 0x8819B9F0;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stw r5,116(r1)
	ctx.current_instruction = 0x8819B9F8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lwz r7,1780(r31)
	ctx.current_instruction = 0x8819BA04;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r6,1776(r31)
	ctx.current_instruction = 0x8819BA0C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8818bee0
	ctx.lr = 0x8819BA18;
	sub_8818BEE0(ctx, base);
loc_8819BA18:
	// lwz r9,112(r1)
	ctx.current_instruction = 0x8819BA18;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8819baac
	goto loc_8819BAAC;
loc_8819BA20:
	// addi r25,r1,112
	ctx.r25.s64 = ctx.r1.s64 + 112;
	// lwz r9,140(r31)
	ctx.current_instruction = 0x8819BA24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r10,1780(r31)
	ctx.current_instruction = 0x8819BA2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// stw r25,84(r1)
	ctx.current_instruction = 0x8819BA30;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,92(r1)
	ctx.current_instruction = 0x8819BA38;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,1776(r31)
	ctx.current_instruction = 0x8819BA40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// stw r11,100(r1)
	ctx.current_instruction = 0x8819BA44;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x881c1d18
	ctx.lr = 0x8819BA4C;
	sub_881C1D18(ctx, base);
loc_8819BA4C:
	// lwz r9,112(r1)
	ctx.current_instruction = 0x8819BA4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8819baac
	goto loc_8819BAAC;
loc_8819BA54:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8819ba7c
	if (!ctx.cr6.eq) goto loc_8819BA7C;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lhz r10,-2(r11)
	ctx.current_instruction = 0x8819BA60;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,112(r1)
	ctx.current_instruction = 0x8819BA68;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lhz r8,-2(r28)
	ctx.current_instruction = 0x8819BA6C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r28.u32 + -2);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r7,116(r1)
	ctx.current_instruction = 0x8819BA74;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// b 0x8819ba9c
	goto loc_8819BA9C;
loc_8819BA7C:
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r30
	ctx.current_instruction = 0x8819BA84;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r30.u32);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// stw r9,112(r1)
	ctx.current_instruction = 0x8819BA8C;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lhzx r6,r8,r11
	ctx.current_instruction = 0x8819BA90;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// stw r5,116(r1)
	ctx.current_instruction = 0x8819BA98;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
loc_8819BA9C:
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// bne cr6,0x8819baac
	if (!ctx.cr6.eq) goto loc_8819BAAC;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r26,116(r1)
	ctx.current_instruction = 0x8819BAA8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
loc_8819BAAC:
	// lwz r11,4016(r31)
	ctx.current_instruction = 0x8819BAAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4016);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8819bac0
	if (ctx.cr6.eq) goto loc_8819BAC0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8819bae4
	if (!ctx.cr6.eq) goto loc_8819BAE4;
loc_8819BAC0:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x8819BAC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// srawi r10,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 15;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r8,0(r27)
	ctx.current_instruction = 0x8819BACC;
	REX_STORE_U16(ctx.r27.u32 + 0, ctx.r8.u16);
	// lwz r6,0(r27)
	ctx.current_instruction = 0x8819BAD0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwimi r5,r6,1,16,26
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFE0) | (ctx.r5.u64 & 0xFFFFFFFFFFFF001F);
	// rlwinm r4,r5,0,28,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r4,0(r27)
	ctx.current_instruction = 0x8819BAE0;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r4.u32);
loc_8819BAE4:
	// lhz r10,0(r27)
	ctx.current_instruction = 0x8819BAE4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// lwz r11,420(r31)
	ctx.current_instruction = 0x8819BAE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r8,428(r31)
	ctx.current_instruction = 0x8819BAF0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// subf r5,r11,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r11.u64;
	// sthx r5,r29,r30
	ctx.current_instruction = 0x8819BB04;
	REX_STORE_U16(ctx.r29.u32 + ctx.r30.u32, ctx.r5.u16);
	// lwz r11,424(r31)
	ctx.current_instruction = 0x8819BB08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r3,432(r31)
	ctx.current_instruction = 0x8819BB0C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 432);
	// lwz r10,0(r27)
	ctx.current_instruction = 0x8819BB10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// srawi r10,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 20;
	// lwz r9,116(r1)
	ctx.current_instruction = 0x8819BB1C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 & ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// subf r5,r11,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r11.u64;
	// sth r5,0(r28)
	ctx.current_instruction = 0x8819BB34;
	REX_STORE_U16(ctx.r28.u32 + 0, ctx.r5.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A5238) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881A5238;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881A5238) {
			switch (rex_dispatch_address) {
				case 0x881A5240:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881A5238;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881A5240: goto loc_881A5240;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x881A5240;
	__savegprlr_21(ctx, base);
loc_881A5240:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x881a53b0
	if (!ctx.cr6.gt) goto loc_881A53B0;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r27,r3,5
	ctx.r27.s64 = ctx.r3.s64 + 5;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// addi r29,r3,7
	ctx.r29.s64 = ctx.r3.s64 + 7;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// addi r6,r3,2
	ctx.r6.s64 = ctx.r3.s64 + 2;
	// addi r26,r3,6
	ctx.r26.s64 = ctx.r3.s64 + 6;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
loc_881A526C:
	// lbz r25,0(r28)
	ctx.current_instruction = 0x881A526C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// lbz r24,0(r27)
	ctx.current_instruction = 0x881A5270;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// subf r9,r24,r25
	ctx.r9.u64 = ctx.r25.u64 - ctx.r24.u64;
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// addze. r23,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r23.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq 0x881a538c
	if (ctx.cr0.eq) goto loc_881A538C;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r11,0(r3)
	ctx.current_instruction = 0x881A5288;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r26)
	ctx.current_instruction = 0x881A528C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	// srawi r9,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 3;
	// xor r7,r9,r23
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r23.u64;
	// rlwinm r8,r7,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x881a538c
	if (ctx.cr6.eq) goto loc_881A538C;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r22,r8,r7
	ctx.r22.u64 = ctx.r7.u64 - ctx.r8.u64;
	// cmpw cr6,r22,r5
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x881a538c
	if (!ctx.cr6.lt) goto loc_881A538C;
	// lbz r9,0(r6)
	ctx.current_instruction = 0x881A52CC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// lbz r8,0(r31)
	ctx.current_instruction = 0x881A52D0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r7,0(r30)
	ctx.current_instruction = 0x881A52D4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lbz r21,0(r29)
	ctx.current_instruction = 0x881A52DC;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// subf r9,r25,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r25.u64;
	// subf r8,r7,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r7.u64;
	// subf r10,r10,r21
	ctx.r10.u64 = ctx.r21.u64 - ctx.r10.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r21,r8,2
	ctx.r21.s64 = ctx.r8.s64 + 2;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
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
	// bge cr6,0x881a5340
	if (!ctx.cr6.lt) goto loc_881A5340;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_881A5340:
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x881a538c
	if (!ctx.cr6.lt) goto loc_881A538C;
	// subf r11,r11,r22
	ctx.r11.u64 = ctx.r22.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// srawi r10,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r23.s32 >> 31;
	// xor r9,r23,r10
	ctx.r9.u64 = ctx.r23.u64 ^ ctx.r10.u64;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881a5370
	if (ctx.cr6.lt) goto loc_881A5370;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_881A5370:
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x881a537c
	if (!ctx.cr6.lt) goto loc_881A537C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_881A537C:
	// subf r10,r11,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r11.u64;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stb r10,0(r28)
	ctx.current_instruction = 0x881A5384;
	REX_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// stb r9,0(r27)
	ctx.current_instruction = 0x881A5388;
	REX_STORE_U8(ctx.r27.u32 + 0, ctx.r9.u8);
loc_881A538C:
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r26,r26,r4
	ctx.r26.u64 = ctx.r26.u64 + ctx.r4.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r30,r30,r4
	ctx.r30.u64 = ctx.r30.u64 + ctx.r4.u64;
	// add r29,r29,r4
	ctx.r29.u64 = ctx.r29.u64 + ctx.r4.u64;
	// add r28,r28,r4
	ctx.r28.u64 = ctx.r28.u64 + ctx.r4.u64;
	// add r27,r27,r4
	ctx.r27.u64 = ctx.r27.u64 + ctx.r4.u64;
	// bdnz 0x881a526c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A526C;
loc_881A53B0:
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A8DE8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881A8DE8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881A8DE8;
	ctx.current_instruction = 0x881A8DE8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
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
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r10,-10072(r10)
	ctx.current_instruction = 0x881A8E0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -10072);
	// ble cr6,0x881a8e34
	if (!ctx.cr6.gt) goto loc_881A8E34;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881A8E18:
	// lbzx r9,r11,r4
	ctx.current_instruction = 0x881A8E18;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r3,r7,r10
	ctx.current_instruction = 0x881A8E24;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stbx r3,r11,r4
	ctx.current_instruction = 0x881A8E28;
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881a8e18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A8E18;
loc_881A8E34:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x881a8e60
	if (!ctx.cr6.gt) goto loc_881A8E60;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881A8E44:
	// lbzx r9,r11,r5
	ctx.current_instruction = 0x881A8E44;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r7,r10
	ctx.current_instruction = 0x881A8E50;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stbx r4,r11,r5
	ctx.current_instruction = 0x881A8E54;
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881a8e44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A8E44;
loc_881A8E60:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881A8E70:
	// lbzx r9,r11,r6
	ctx.current_instruction = 0x881A8E70;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r8,r10
	ctx.current_instruction = 0x881A8E7C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stbx r7,r11,r6
	ctx.current_instruction = 0x881A8E80;
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881a8e70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A8E70;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881A8FE8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881A8FE8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881A8FE8) {
			switch (rex_dispatch_address) {
				case 0x881A8FF0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881A8FE8;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x881A8FF0: goto loc_881A8FF0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x881A8FF0;
	__savegprlr_22(ctx, base);
loc_881A8FF0:
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lwz r25,92(r1)
	ctx.current_instruction = 0x881A8FF4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r31,-30678
	ctx.r31.s64 = -2010513408;
	// lwz r23,84(r1)
	ctx.current_instruction = 0x881A8FFC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// lwz r10,24540(r31)
	ctx.current_instruction = 0x881A9010;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24540);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// subf r26,r10,r11
	ctx.r26.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// bge cr6,0x881a90a4
	if (!ctx.cr6.lt) goto loc_881A90A4;
	// subf r7,r5,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r5.u64;
	// add r29,r26,r23
	ctx.r29.u64 = ctx.r26.u64 + ctx.r23.u64;
	// subf r27,r26,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r26.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881A9038:
	// lbz r6,0(r30)
	ctx.current_instruction = 0x881A9038;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbzx r11,r27,r28
	ctx.current_instruction = 0x881A9040;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// rotlwi r5,r11,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// or r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 | ctx.r3.u64;
	// rlwinm r11,r5,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r6,r3,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// or r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 | ctx.r5.u64;
	// or r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 | ctx.r3.u64;
	// ble cr6,0x881a9094
	if (!ctx.cr6.gt) goto loc_881A9094;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// subf r6,r29,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r29.u64;
loc_881A9078:
	// stwx r5,r6,r11
	ctx.current_instruction = 0x881A9078;
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r3,0(r11)
	ctx.current_instruction = 0x881A9080;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,24540(r31)
	ctx.current_instruction = 0x881A9088;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24540);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881a9078
	if (ctx.cr6.lt) goto loc_881A9078;
loc_881A9094:
	// add r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 + ctx.r25.u64;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// bdnz 0x881a9038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A9038;
loc_881A90A4:
	// lwz r11,100(r1)
	ctx.current_instruction = 0x881A90A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881a90d0
	if (!ctx.cr6.eq) goto loc_881A90D0;
	// subf r11,r23,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r23.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x881a90d0
	if (ctx.cr6.eq) goto loc_881A90D0;
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// srawi r24,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r25.s32 >> 1;
	// subf r4,r10,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r10.u64;
loc_881A90D0:
	// srawi r7,r24,3
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r24.s32 >> 3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x881a9118
	if (ctx.cr6.eq) goto loc_881A9118;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x881a9118
	if (!ctx.cr6.gt) goto loc_881A9118;
	// subf r10,r26,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r26.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_881A90EC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x881a910c
	if (!ctx.cr6.gt) goto loc_881A910C;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881A90FC:
	// ld r6,0(r11)
	ctx.current_instruction = 0x881A90FC;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// stdx r6,r10,r11
	ctx.current_instruction = 0x881A9100;
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x881a90fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A90FC;
loc_881A910C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bne 0x881a90ec
	if (!ctx.cr0.eq) goto loc_881A90EC;
loc_881A9118:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x881a915c
	if (ctx.cr6.eq) goto loc_881A915C;
	// subf r8,r25,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r25.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x881a915c
	if (!ctx.cr6.gt) goto loc_881A915C;
	// subf r10,r8,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r8.u64;
loc_881A9130:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x881a9150
	if (!ctx.cr6.gt) goto loc_881A9150;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881A9140:
	// ld r6,0(r11)
	ctx.current_instruction = 0x881A9140;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// stdx r6,r10,r11
	ctx.current_instruction = 0x881A9144;
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x881a9140
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A9140;
loc_881A9150:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bne 0x881a9130
	if (!ctx.cr0.eq) goto loc_881A9130;
loc_881A915C:
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881ABD70) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881ABD70);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ABD70;
	ctx.current_instruction = 0x881ABD70;
	// lwz r11,15632(r3)
	ctx.current_instruction = 0x881ABD70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881abd90
	if (ctx.cr6.eq) goto loc_881ABD90;
	// lwz r11,24(r3)
	ctx.current_instruction = 0x881ABD7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881abd8c
	if (ctx.cr6.eq) goto loc_881ABD8C;
	// b 0x881aaec8
	sub_881AAEC8(ctx, base);
	return;
loc_881ABD8C:
	// b 0x881ab9f0
	sub_881AB9F0(ctx, base);
	return;
loc_881ABD90:
	// lwz r11,3980(r3)
	ctx.current_instruction = 0x881ABD90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881abda0
	if (ctx.cr6.eq) goto loc_881ABDA0;
	// b 0x881ab868
	sub_881AB868(ctx, base);
	return;
loc_881ABDA0:
	// lwz r11,24(r3)
	ctx.current_instruction = 0x881ABDA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881abdb0
	if (ctx.cr6.eq) goto loc_881ABDB0;
	// b 0x881aaec8
	sub_881AAEC8(ctx, base);
	return;
loc_881ABDB0:
	// b 0x881ab5e8
	sub_881AB5E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AC200) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881AC200;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881AC200) {
			switch (rex_dispatch_address) {
				case 0x881AC208:
				case 0x881AC284:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881AC200;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881AC208: goto loc_881AC208;
		case 0x881AC284: goto loc_881AC284;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881AC208;
	__savegprlr_25(ctx, base);
loc_881AC208:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881AC208;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x881ac228
	if (ctx.cr6.lt) goto loc_881AC228;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_881AC228:
	// srawi r28,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r6.s32 >> 3;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r26,r11,r6
	ctx.r26.u64 = ctx.r6.u64 - ctx.r11.u64;
	// ble cr6,0x881ac294
	if (!ctx.cr6.gt) goto loc_881AC294;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
loc_881AC240:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x881ac27c
	if (!ctx.cr6.gt) goto loc_881AC27C;
	// subf r10,r31,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r31.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_881AC25C:
	// lwz r9,0(r4)
	ctx.current_instruction = 0x881AC25C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r9,0(r3)
	ctx.current_instruction = 0x881AC264;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.current_instruction = 0x881AC268;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r3)
	ctx.current_instruction = 0x881AC26C;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bdnz 0x881ac25c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881AC25C;
loc_881AC27C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC284;
	sub_880547A0(ctx, base);
loc_881AC284:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// bne 0x881ac240
	if (!ctx.cr0.eq) goto loc_881AC240;
loc_881AC294:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881ACEB8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881ACEB8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881ACEB8) {
			switch (rex_dispatch_address) {
				case 0x881ACEC0:
				case 0x881ACEE4:
				case 0x881ACEFC:
				case 0x881ACF20:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ACEB8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881ACEC0: goto loc_881ACEC0;
		case 0x881ACEE4: goto loc_881ACEE4;
		case 0x881ACEFC: goto loc_881ACEFC;
		case 0x881ACF20: goto loc_881ACF20;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881ACEC0;
	__savegprlr_27(ctx, base);
loc_881ACEC0:
	// stwu r1,-640(r1)
	ctx.current_instruction = 0x881ACEC0;
	ea = -640 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.current_instruction = 0x881ACEC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r27,r10,0,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881aceec
	if (ctx.cr6.eq) goto loc_881ACEEC;
	// lwz r10,15684(r3)
	ctx.current_instruction = 0x881ACEDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15684);
	// bl 0x881abdb8
	ctx.lr = 0x881ACEE4;
	sub_881ABDB8(ctx, base);
loc_881ACEE4:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881ACEEC:
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881abdb8
	ctx.lr = 0x881ACEFC;
	sub_881ABDB8(ctx, base);
loc_881ACEFC:
	// lwz r30,724(r1)
	ctx.current_instruction = 0x881ACEFC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 724);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x881acf34
	if (!ctx.cr6.gt) goto loc_881ACF34;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_881ACF10:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880547a0
	ctx.lr = 0x881ACF20;
	sub_880547A0(ctx, base);
loc_881ACF20:
	// lwz r11,15684(r31)
	ctx.current_instruction = 0x881ACF20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15684);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bne 0x881acf10
	if (!ctx.cr0.eq) goto loc_881ACF10;
loc_881ACF34:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AE400) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881AE400;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881AE400) {
			switch (rex_dispatch_address) {
				case 0x881AE408:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881AE400;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x881AE408: goto loc_881AE408;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881AE408;
	__savegprlr_25(ctx, base);
loc_881AE408:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x881ae424
	if (ctx.cr6.eq) goto loc_881AE424;
	// stb r10,-79(r1)
	ctx.current_instruction = 0x881AE414;
	REX_STORE_U8(ctx.r1.u32 + -79, ctx.r10.u8);
	// stb r10,-80(r1)
	ctx.current_instruction = 0x881AE418;
	REX_STORE_U8(ctx.r1.u32 + -80, ctx.r10.u8);
	// lhz r31,-80(r1)
	ctx.current_instruction = 0x881AE41C;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r1.u32 + -80);
	// b 0x881ae42c
	goto loc_881AE42C;
loc_881AE424:
	// lhz r31,-2(r5)
	ctx.current_instruction = 0x881AE424;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r5.u32 + -2);
	// sth r31,-80(r1)
	ctx.current_instruction = 0x881AE428;
	REX_STORE_U16(ctx.r1.u32 + -80, ctx.r31.u16);
loc_881AE42C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881ae43c
	if (ctx.cr6.eq) goto loc_881AE43C;
	// sth r31,0(r4)
	ctx.current_instruction = 0x881AE434;
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r31.u16);
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_881AE43C:
	// lwz r11,344(r3)
	ctx.current_instruction = 0x881AE43C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 344);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r9.u64;
	// lhz r7,0(r11)
	ctx.current_instruction = 0x881AE44C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r7,-76(r1)
	ctx.current_instruction = 0x881AE450;
	REX_STORE_U16(ctx.r1.u32 + -76, ctx.r7.u16);
	// beq cr6,0x881ae460
	if (ctx.cr6.eq) goto loc_881AE460;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x881ae470
	goto loc_881AE470;
loc_881AE460:
	// lhz r11,2(r11)
	ctx.current_instruction = 0x881AE460;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// sth r11,-78(r1)
	ctx.current_instruction = 0x881AE464;
	REX_STORE_U16(ctx.r1.u32 + -78, ctx.r11.u16);
	// lbz r11,-77(r1)
	ctx.current_instruction = 0x881AE468;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + -77);
	// lbz r10,-78(r1)
	ctx.current_instruction = 0x881AE46C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + -78);
loc_881AE470:
	// lbz r9,-76(r1)
	ctx.current_instruction = 0x881AE470;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + -76);
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// lbz r3,-80(r1)
	ctx.current_instruction = 0x881AE478;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + -80);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// lbz r11,-75(r1)
	ctx.current_instruction = 0x881AE480;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + -75);
	// extsb r29,r9
	ctx.r29.s64 = ctx.r9.s8;
	// lbz r10,-79(r1)
	ctx.current_instruction = 0x881AE488;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + -79);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// extsb r27,r10
	ctx.r27.s64 = ctx.r10.s8;
	// subf r11,r3,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r3.u64;
	// subf r10,r5,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r5.u64;
	// subf r9,r3,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r3.u64;
	// subf r8,r27,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r27.u64;
	// subf r26,r30,r28
	ctx.r26.u64 = ctx.r28.u64 - ctx.r30.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r25,r27,r30
	ctx.r25.u64 = ctx.r30.u64 - ctx.r27.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r26,r26,r8
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r25,r8
	ctx.r8.u64 = ctx.r25.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r26.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r25,r9,r8
	ctx.r25.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 & ctx.r3.u64;
	// andc r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 & ~ctx.r26.u64;
	// andc r10,r30,r25
	ctx.r10.u64 = ctx.r30.u64 & ~ctx.r25.u64;
	// and r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 & ctx.r28.u64;
	// or r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 | ctx.r3.u64;
	// or r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 | ctx.r9.u64;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// and r10,r8,r27
	ctx.r10.u64 = ctx.r8.u64 & ctx.r27.u64;
	// or r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 | ctx.r11.u64;
	// or r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 | ctx.r10.u64;
	// stb r9,0(r4)
	ctx.current_instruction = 0x881AE500;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// stb r8,1(r4)
	ctx.current_instruction = 0x881AE504;
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r8.u8);
	// lwz r11,0(r6)
	ctx.current_instruction = 0x881AE508;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r11,14,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x881ae52c
	if (ctx.cr6.eq) goto loc_881AE52C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// beq cr6,0x881ae528
	if (ctx.cr6.eq) goto loc_881AE528;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_881AE528:
	// sth r11,0(r4)
	ctx.current_instruction = 0x881AE528;
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
loc_881AE52C:
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B0B68) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B0B68;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B0B68) {
			switch (rex_dispatch_address) {
				case 0x881B0B70:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B0B68;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B0B70: goto loc_881B0B70;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881B0B70;
	__savegprlr_28(ctx, base);
loc_881B0B70:
	// addi r28,r6,-1
	ctx.r28.s64 = ctx.r6.s64 + -1;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// ble cr6,0x881b0bc4
	if (!ctx.cr6.gt) goto loc_881B0BC4;
	// addi r10,r28,-2
	ctx.r10.s64 = ctx.r28.s64 + -2;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881B0B98:
	// lbz r8,0(r11)
	ctx.current_instruction = 0x881B0B98;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r31,r9,r11
	ctx.current_instruction = 0x881B0B9C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r30,r11,r7
	ctx.current_instruction = 0x881B0BA0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// rotlwi r8,r30,4
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r30.u32, 4);
	// mulli r31,r31,-406
	ctx.r31.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(-406));
	// srawi r31,r31,4
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 4;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// stwu r8,8(r10)
	ctx.current_instruction = 0x881B0BBC;
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x881b0b98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B0B98;
loc_881B0BC4:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881B0BC4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r8,r11,r7
	ctx.current_instruction = 0x881B0BCC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// addi r30,r5,4
	ctx.r30.s64 = ctx.r5.s64 + 4;
	// mulli r11,r9,-406
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(-406));
	// add r29,r10,r5
	ctx.r29.u64 = ctx.r10.u64 + ctx.r5.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// rotlwi r10,r8,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,-4(r29)
	ctx.current_instruction = 0x881B0BEC;
	REX_STORE_U32(ctx.r29.u32 + -4, ctx.r10.u32);
	// lbz r9,0(r4)
	ctx.current_instruction = 0x881B0BF0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lwz r8,4(r5)
	ctx.current_instruction = 0x881B0BF4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mulli r11,r8,-217
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(-217));
	// srawi r11,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 10;
	// rotlwi r10,r9,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,0(r5)
	ctx.current_instruction = 0x881B0C08;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// ble cr6,0x881b0c50
	if (!ctx.cr6.gt) goto loc_881B0C50;
	// addi r11,r6,-3
	ctx.r11.s64 = ctx.r6.s64 + -3;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881B0C28:
	// lwz r9,12(r11)
	ctx.current_instruction = 0x881B0C28;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,4(r11)
	ctx.current_instruction = 0x881B0C2C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbzux r10,r4,r31
	ctx.current_instruction = 0x881B0C30;
	ea = ctx.r4.u32 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rotlwi r9,r10,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// mulli r10,r8,-217
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(-217));
	// srawi r10,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 11;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwu r10,8(r11)
	ctx.current_instruction = 0x881B0C48;
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x881b0c28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B0C28;
loc_881B0C50:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// ble cr6,0x881b0c94
	if (!ctx.cr6.gt) goto loc_881B0C94;
	// addi r10,r28,-2
	ctx.r10.s64 = ctx.r28.s64 + -2;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881B0C6C:
	// lwz r8,4(r11)
	ctx.current_instruction = 0x881B0C6C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,-4(r11)
	ctx.current_instruction = 0x881B0C70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r9,0(r11)
	ctx.current_instruction = 0x881B0C74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r8,r10,226
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(226));
	// srawi r10,r8,9
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 9;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,0(r11)
	ctx.current_instruction = 0x881B0C88;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x881b0c6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B0C6C;
loc_881B0C94:
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// lwz r10,-4(r29)
	ctx.current_instruction = 0x881B0C98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + -4);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwzx r5,r8,r5
	ctx.current_instruction = 0x881B0CA8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// mulli r4,r5,226
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(226));
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,-4(r29)
	ctx.current_instruction = 0x881B0CB8;
	REX_STORE_U32(ctx.r29.u32 + -4, ctx.r3.u32);
	// lwz r10,0(r30)
	ctx.current_instruction = 0x881B0CBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// ble cr6,0x881b0d30
	if (!ctx.cr6.gt) goto loc_881B0D30;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// li r3,255
	ctx.r3.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881B0CE4:
	// lwz r6,8(r11)
	ctx.current_instruction = 0x881B0CE4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.current_instruction = 0x881B0CE8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// mulli r6,r10,227
	ctx.r6.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(227));
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// mulli r8,r10,26
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(26));
	// srawi r10,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 10;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x881b0d1c
	if (!ctx.cr6.gt) goto loc_881B0D1C;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 & ctx.r3.u64;
loc_881B0D1C:
	// stb r10,0(r9)
	ctx.current_instruction = 0x881B0D1C;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stbx r4,r9,r7
	ctx.current_instruction = 0x881B0D20;
	REX_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r4.u8);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwzu r10,8(r11)
	ctx.current_instruction = 0x881B0D28;
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// bdnz 0x881b0ce4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B0CE4;
loc_881B0D30:
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B36F0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881B36F0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B36F0;
	ctx.current_instruction = 0x881B36F0;
	// lwz r11,12(r3)
	ctx.current_instruction = 0x881B36F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881b3770
	if (ctx.cr6.eq) goto loc_881B3770;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881b3770
	if (ctx.cr6.eq) goto loc_881B3770;
	// lwz r10,16(r11)
	ctx.current_instruction = 0x881B3708;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x881b3770
	if (ctx.cr6.lt) goto loc_881B3770;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x881B3714;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,0(r10)
	ctx.current_instruction = 0x881B3718;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r8,8(r11)
	ctx.current_instruction = 0x881B3720;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// bne cr6,0x881b3730
	if (!ctx.cr6.eq) goto loc_881B3730;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,12(r11)
	ctx.current_instruction = 0x881B372C;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_881B3730:
	// stw r4,4(r10)
	ctx.current_instruction = 0x881B3730;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x881B3734;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	ctx.current_instruction = 0x881B3738;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.current_instruction = 0x881B373C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r10,0(r11)
	ctx.current_instruction = 0x881B3744;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x881b3750
	if (!ctx.cr6.eq) goto loc_881B3750;
	// stw r10,4(r11)
	ctx.current_instruction = 0x881B374C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_881B3750:
	// lwz r10,16(r11)
	ctx.current_instruction = 0x881B3750;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	ctx.current_instruction = 0x881B375C;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.current_instruction = 0x881B3760;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r9)
	ctx.current_instruction = 0x881B3768;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881B3770:
	// li r3,-100
	ctx.r3.s64 = -100;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881B4370) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B4370;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B4370) {
			switch (rex_dispatch_address) {
				case 0x881B4378:
				case 0x881B43A8:
				case 0x881B43BC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B4370;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B4378: goto loc_881B4378;
		case 0x881B43A8: goto loc_881B43A8;
		case 0x881B43BC: goto loc_881B43BC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881B4378;
	__savegprlr_29(ctx, base);
loc_881B4378:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881B4378;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881b43c0
	if (ctx.cr6.eq) goto loc_881B43C0;
	// lwz r31,0(r3)
	ctx.current_instruction = 0x881B4388;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881b43c0
	if (ctx.cr6.eq) goto loc_881B43C0;
	// lwz r3,12(r31)
	ctx.current_instruction = 0x881B4394;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881b43ac
	if (ctx.cr6.eq) goto loc_881B43AC;
	// bl 0x8815ba70
	ctx.lr = 0x881B43A8;
	sub_8815BA70(ctx, base);
loc_881B43A8:
	// stw r30,12(r31)
	ctx.current_instruction = 0x881B43A8;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_881B43AC:
	// lwz r3,0(r29)
	ctx.current_instruction = 0x881B43AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881b43c0
	if (ctx.cr6.eq) goto loc_881B43C0;
	// bl 0x8815ba70
	ctx.lr = 0x881B43BC;
	sub_8815BA70(ctx, base);
loc_881B43BC:
	// stw r30,0(r29)
	ctx.current_instruction = 0x881B43BC;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_881B43C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B5830) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B5830;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B5830) {
			switch (rex_dispatch_address) {
				case 0x881B5838:
				case 0x881B5888:
				case 0x881B589C:
				case 0x881B58B0:
				case 0x881B58C4:
				case 0x881B58D0:
				case 0x881B58F0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B5830;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B5838: goto loc_881B5838;
		case 0x881B5888: goto loc_881B5888;
		case 0x881B589C: goto loc_881B589C;
		case 0x881B58B0: goto loc_881B58B0;
		case 0x881B58C4: goto loc_881B58C4;
		case 0x881B58D0: goto loc_881B58D0;
		case 0x881B58F0: goto loc_881B58F0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881B5838;
	__savegprlr_25(ctx, base);
loc_881B5838:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881B5838;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24688(r3)
	ctx.current_instruction = 0x881B583C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r25,r11,8
	ctx.r25.s64 = ctx.r11.s64 + 8;
	// beq cr6,0x881b58f0
	if (ctx.cr6.eq) goto loc_881B58F0;
	// lwz r11,64(r4)
	ctx.current_instruction = 0x881B5854;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881b58e4
	if (!ctx.cr6.gt) goto loc_881B58E4;
	// addi r29,r4,12
	ctx.r29.s64 = ctx.r4.s64 + 12;
loc_881B5868:
	// lwz r31,0(r29)
	ctx.current_instruction = 0x881B5868;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,24688(r28)
	ctx.current_instruction = 0x881B586C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 24688);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// beq cr6,0x881b58d0
	if (ctx.cr6.eq) goto loc_881B58D0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,44(r31)
	ctx.current_instruction = 0x881B5880;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x881b5a88
	ctx.lr = 0x881B5888;
	sub_881B5A88(ctx, base);
loc_881B5888:
	// lwz r4,44(r31)
	ctx.current_instruction = 0x881B5888;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881b589c
	if (ctx.cr6.eq) goto loc_881B589C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x881B589C;
	sub_8815E528(ctx, base);
loc_881B589C:
	// lwz r4,48(r31)
	ctx.current_instruction = 0x881B589C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881b58b0
	if (ctx.cr6.eq) goto loc_881B58B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x881B58B0;
	sub_8815E528(ctx, base);
loc_881B58B0:
	// lwz r4,40(r31)
	ctx.current_instruction = 0x881B58B0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881b58c4
	if (ctx.cr6.eq) goto loc_881B58C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x881B58C4;
	sub_8815E528(ctx, base);
loc_881B58C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x881B58D0;
	sub_8815E528(ctx, base);
loc_881B58D0:
	// lwz r11,64(r27)
	ctx.current_instruction = 0x881B58D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 64);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881b5868
	if (ctx.cr6.lt) goto loc_881B5868;
loc_881B58E4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8815e528
	ctx.lr = 0x881B58F0;
	sub_8815E528(ctx, base);
loc_881B58F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B7FD8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881B7FD8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B7FD8;
	ctx.current_instruction = 0x881B7FD8;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// lwz r10,1940(r3)
	ctx.current_instruction = 0x881B7FDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1940);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r6,2
	ctx.r7.s64 = ctx.r6.s64 + 2;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r4
	ctx.current_instruction = 0x881B7FF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// lwzx r9,r6,r4
	ctx.current_instruction = 0x881B7FF4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// lwzx r3,r5,r4
	ctx.current_instruction = 0x881B7FF8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lhz r7,0(r11)
	ctx.current_instruction = 0x881B7FFC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r6,0(r9)
	ctx.current_instruction = 0x881B8000;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// lhz r4,0(r3)
	ctx.current_instruction = 0x881B8008;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// subf r6,r5,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r5,r7,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r7.u64;
	// srawi r4,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// srawi r7,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 31;
	// xor r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// xor r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r7.u64;
	// subf r9,r4,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subf r4,r7,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r7.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881b8050
	if (!ctx.cr6.lt) goto loc_881B8050;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,0(r8)
	ctx.current_instruction = 0x881B8048;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881B8050:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r8)
	ctx.current_instruction = 0x881B8054;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881C02F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C02F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C02F8) {
			switch (rex_dispatch_address) {
				case 0x881C0300:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C02F8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881C0300: goto loc_881C0300;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x881C0300;
	__savegprlr_22(ctx, base);
loc_881C0300:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x881c05c8
	if (ctx.cr6.eq) goto loc_881C05C8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x881c0330
	if (ctx.cr6.eq) goto loc_881C0330;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881C031C:
	// ld r10,0(r5)
	ctx.current_instruction = 0x881C031C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// stdx r10,r11,r5
	ctx.current_instruction = 0x881C0320;
	REX_STORE_U64(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u64);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x881c031c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C031C;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881C0330:
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 + ctx.r10.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r31,r5
	ctx.r29.u64 = ctx.r31.u64 + ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r30,r9,r5
	ctx.r30.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 1;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// add r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 + ctx.r4.u64;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// addi r27,r6,-1
	ctx.r27.s64 = ctx.r6.s64 + -1;
	// subfic r31,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r31.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
loc_881C0380:
	// lwz r30,0(r8)
	ctx.current_instruction = 0x881C0380;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// lwz r28,-1(r8)
	ctx.current_instruction = 0x881C0388;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r8.u32 + -1);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r29,r30,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 & ctx.r28.u64;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// rlwinm r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r30,r30,r12
	ctx.r30.u64 = ctx.r30.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stw r30,0(r7)
	ctx.current_instruction = 0x881C03C8;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// lwzx r30,r8,r6
	ctx.current_instruction = 0x881C03CC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwzx r29,r31,r10
	ctx.current_instruction = 0x881C03D4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r28,r29,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// and r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 & ctx.r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	ctx.r30.u64 = ctx.r30.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stwx r30,r7,r6
	ctx.current_instruction = 0x881C0410;
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r30.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r29,0(r10)
	ctx.current_instruction = 0x881C0418;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r28,-1(r10)
	ctx.current_instruction = 0x881C041C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + -1);
	// rlwinm r30,r28,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	ctx.r30.u64 = ctx.r30.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// and r26,r28,r29
	ctx.r26.u64 = ctx.r28.u64 & ctx.r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r28,r29,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r26,r12
	ctx.r29.u64 = ctx.r26.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stw r30,0(r5)
	ctx.current_instruction = 0x881C0458;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// lwzx r30,r10,r6
	ctx.current_instruction = 0x881C045C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwzx r29,r31,r9
	ctx.current_instruction = 0x881C0464;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r28,r29,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// and r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 & ctx.r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	ctx.r30.u64 = ctx.r30.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stwx r30,r5,r6
	ctx.current_instruction = 0x881C04A0;
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r30.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// lwz r30,0(r9)
	ctx.current_instruction = 0x881C04A8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r29,-1(r9)
	ctx.current_instruction = 0x881C04AC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + -1);
	// rlwinm r28,r29,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// and r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 & ctx.r29.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r30,r30,r12
	ctx.r30.u64 = ctx.r30.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stw r30,0(r3)
	ctx.current_instruction = 0x881C04E8;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwzx r28,r9,r6
	ctx.current_instruction = 0x881C04EC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwzx r26,r31,r11
	ctx.current_instruction = 0x881C04F4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r30,r26,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	ctx.r30.u64 = ctx.r30.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// rlwinm r29,r28,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 & ctx.r26.u64;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r30,r28,r12
	ctx.r30.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// stwx r30,r3,r6
	ctx.current_instruction = 0x881C0530;
	REX_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r30.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r29,0(r11)
	ctx.current_instruction = 0x881C0538;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,-1(r11)
	ctx.current_instruction = 0x881C053C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + -1);
	// rlwinm r30,r28,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	ctx.r30.u64 = ctx.r30.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// and r26,r28,r29
	ctx.r26.u64 = ctx.r28.u64 & ctx.r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r28,r29,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r26,r12
	ctx.r29.u64 = ctx.r26.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stw r30,0(r4)
	ctx.current_instruction = 0x881C0578;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// lwzx r29,r11,r6
	ctx.current_instruction = 0x881C057C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r28,r27,r11
	ctx.current_instruction = 0x881C0580;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r30,r28,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	ctx.r30.u64 = ctx.r30.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// and r26,r28,r29
	ctx.r26.u64 = ctx.r28.u64 & ctx.r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r28,r29,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r26,r12
	ctx.r29.u64 = ctx.r26.u64 & ctx.r12.u64;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stwx r30,r4,r6
	ctx.current_instruction = 0x881C05B8;
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r30.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x881c0380
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C0380;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881C05C8:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x881c086c
	if (ctx.cr6.eq) goto loc_881C086C;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r31,r6,r9
	ctx.r31.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r6,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r6.u64;
	// rlwinm r30,r7,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
loc_881C0624:
	// lwz r29,0(r9)
	ctx.current_instruction = 0x881C0624;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// lwz r28,0(r5)
	ctx.current_instruction = 0x881C062C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r4,r29,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 & ctx.r28.u64;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// rlwinm r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 + ctx.r4.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// stwx r4,r11,r5
	ctx.current_instruction = 0x881C066C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r4.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// lwz r27,0(r8)
	ctx.current_instruction = 0x881C0674;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r28,0(r9)
	ctx.current_instruction = 0x881C0678;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r4,r28,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// rlwinm r29,r27,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 & ctx.r28.u64;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// add r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 + ctx.r4.u64;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// stwx r4,r11,r9
	ctx.current_instruction = 0x881C06B4;
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r29,0(r8)
	ctx.current_instruction = 0x881C06BC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r27,0(r7)
	ctx.current_instruction = 0x881C06C0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r4,r27,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// rlwinm r28,r29,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r29,r27,r29
	ctx.r29.u64 = ctx.r27.u64 & ctx.r29.u64;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// stwx r4,r11,r8
	ctx.current_instruction = 0x881C06FC;
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r27,0(r7)
	ctx.current_instruction = 0x881C0704;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r29,0(r3)
	ctx.current_instruction = 0x881C0708;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r4,r29,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// rlwinm r28,r27,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 & ctx.r27.u64;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// stwx r4,r11,r7
	ctx.current_instruction = 0x881C0744;
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r4.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r28,0(r3)
	ctx.current_instruction = 0x881C074C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,0(r31)
	ctx.current_instruction = 0x881C0750;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r4,r29,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// and r27,r29,r28
	ctx.r27.u64 = ctx.r29.u64 & ctx.r28.u64;
	// rlwinm r29,r28,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r28,r27,r12
	ctx.r28.u64 = ctx.r27.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// stwx r4,r11,r3
	ctx.current_instruction = 0x881C078C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r29,0(r31)
	ctx.current_instruction = 0x881C0794;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r30)
	ctx.current_instruction = 0x881C0798;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r28,r4,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// and r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 & ctx.r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r29,r29,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// stwx r4,r11,r31
	ctx.current_instruction = 0x881C07D4;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r4.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r29,0(r30)
	ctx.current_instruction = 0x881C07DC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r10)
	ctx.current_instruction = 0x881C07E0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r28,r4,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// and r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 & ctx.r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r29,r29,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// stwx r4,r11,r30
	ctx.current_instruction = 0x881C081C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r4.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwzx r28,r10,r6
	ctx.current_instruction = 0x881C0824;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r27,0(r10)
	ctx.current_instruction = 0x881C0828;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r29,r27,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// rlwinm r4,r28,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 & ctx.r27.u64;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r28,r12
	ctx.r29.u64 = ctx.r28.u64 & ctx.r12.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// stwx r4,r11,r10
	ctx.current_instruction = 0x881C085C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x881c0624
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C0624;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881C086C:
	// lis r11,257
	ctx.r11.s64 = 16842752;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r25,r5,r6
	ctx.r25.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subfic r24,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	ctx.r24.u64 = static_cast<uint64_t>(1) - ctx.r4.u64;
	// ori r8,r11,257
	ctx.r8.u64 = ctx.r11.u64 | 257;
loc_881C0880:
	// li r31,2
	ctx.r31.s64 = 2;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// add r9,r24,r11
	ctx.r9.u64 = ctx.r24.u64 + ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_881C0898:
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// lwzx r28,r3,r9
	ctx.current_instruction = 0x881C089C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwzx r26,r9,r7
	ctx.current_instruction = 0x881C08A0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// lwzx r23,r3,r10
	ctx.current_instruction = 0x881C08A8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwzx r22,r10,r7
	ctx.current_instruction = 0x881C08AC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r27,r28,30,2,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// and r31,r28,r12
	ctx.r31.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r28,r26,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// and r30,r26,r12
	ctx.r30.u64 = ctx.r26.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// and r29,r23,r12
	ctx.r29.u64 = ctx.r23.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r29,r23,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3FFFFFFF;
	// and r30,r22,r12
	ctx.r30.u64 = ctx.r22.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// and r27,r27,r12
	ctx.r27.u64 = ctx.r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r31,r31,30,6,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r30,r22,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3FFFFFFF;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,-253
	ctx.r12.s64 = -16580608;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r31,r31,r12
	ctx.r31.u64 = ctx.r31.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// and r30,r30,r12
	ctx.r30.u64 = ctx.r30.u64 & ctx.r12.u64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// stw r31,0(r11)
	ctx.current_instruction = 0x881C0958;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwzx r28,r9,r7
	ctx.current_instruction = 0x881C095C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r23,r10,r7
	ctx.current_instruction = 0x881C0960;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r27,r3,r9
	ctx.current_instruction = 0x881C0964;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// and r31,r27,r12
	ctx.r31.u64 = ctx.r27.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// lwzx r26,r3,r10
	ctx.current_instruction = 0x881C0970;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r27,r27,30,2,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r30,r28,r12
	ctx.r30.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r28,r28,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// and r29,r26,r12
	ctx.r29.u64 = ctx.r26.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r29,r26,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
	// and r30,r23,r12
	ctx.r30.u64 = ctx.r23.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// and r27,r27,r12
	ctx.r27.u64 = ctx.r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r31,r31,30,6,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,-253
	ctx.r12.s64 = -16580608;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r30,r23,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3FFFFFFF;
	// and r31,r31,r12
	ctx.r31.u64 = ctx.r31.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// and r30,r30,r12
	ctx.r30.u64 = ctx.r30.u64 & ctx.r12.u64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stwux r31,r11,r6
	ctx.current_instruction = 0x881C0A0C;
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// lwzx r29,r9,r7
	ctx.current_instruction = 0x881C0A14;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// lwzx r22,r10,r7
	ctx.current_instruction = 0x881C0A1C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwzx r23,r3,r10
	ctx.current_instruction = 0x881C0A24;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwzx r27,r3,r9
	ctx.current_instruction = 0x881C0A28;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// and r31,r27,r12
	ctx.r31.u64 = ctx.r27.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r27,r27,30,2,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// and r28,r29,r12
	ctx.r28.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r28,r29,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// and r30,r23,r12
	ctx.r30.u64 = ctx.r23.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r29,r23,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3FFFFFFF;
	// and r26,r22,r12
	ctx.r26.u64 = ctx.r22.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r26
	ctx.r31.u64 = ctx.r31.u64 + ctx.r26.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// and r27,r27,r12
	ctx.r27.u64 = ctx.r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r31,r31,30,6,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r30,r22,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3FFFFFFF;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,-253
	ctx.r12.s64 = -16580608;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r31,r31,r12
	ctx.r31.u64 = ctx.r31.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// and r30,r30,r12
	ctx.r30.u64 = ctx.r30.u64 & ctx.r12.u64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// stwux r31,r11,r6
	ctx.current_instruction = 0x881C0AD0;
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// lwzx r28,r9,r7
	ctx.current_instruction = 0x881C0AD4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r26,r3,r10
	ctx.current_instruction = 0x881C0AD8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwzx r23,r10,r7
	ctx.current_instruction = 0x881C0ADC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r27,r3,r9
	ctx.current_instruction = 0x881C0AE0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// and r31,r27,r12
	ctx.r31.u64 = ctx.r27.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r27,r27,30,2,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r30,r28,r12
	ctx.r30.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r29,r26,r12
	ctx.r29.u64 = ctx.r26.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r30,r23,r12
	ctx.r30.u64 = ctx.r23.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// and r27,r27,r12
	ctx.r27.u64 = ctx.r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r28,r28,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r29,r26,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// lis r12,-253
	ctx.r12.s64 = -16580608;
	// rlwinm r31,r31,30,6,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r30,r23,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3FFFFFFF;
	// and r31,r31,r12
	ctx.r31.u64 = ctx.r31.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// and r30,r30,r12
	ctx.r30.u64 = ctx.r30.u64 & ctx.r12.u64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stwux r31,r11,r6
	ctx.current_instruction = 0x881C0B84;
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x881c0898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C0898;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x881c0880
	if (ctx.cr6.lt) goto loc_881C0880;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881D7B78) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881D7B78;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881D7B78) {
			switch (rex_dispatch_address) {
				case 0x881D7B80:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881D7B78;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881D7B80: goto loc_881D7B80;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881D7B80;
	__savegprlr_14(ctx, base);
loc_881D7B80:
	// lis r10,-30717
	ctx.r10.s64 = -2013069312;
	// li r11,16
	ctx.r11.s64 = 16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r26,r10,-26144
	ctx.r26.s64 = ctx.r10.s64 + -26144;
	// beq cr6,0x881d807c
	if (ctx.cr6.eq) goto loc_881D807C;
	// stw r7,-192(r1)
	ctx.current_instruction = 0x881D7B94;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// subf r10,r8,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r8.u64;
	// addi r29,r1,-192
	ctx.r29.s64 = ctx.r1.s64 + -192;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r31,r4,r8
	ctx.r31.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lvlx128 v62,r4,r8
	temp.u32 = ctx.r4.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// subf r3,r8,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r8.u64;
	// lvrx128 v61,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 + ctx.r8.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// subf r6,r8,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r8.u64;
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lvrx128 v59,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// subf r28,r8,r6
	ctx.r28.u64 = ctx.r6.u64 - ctx.r8.u64;
	// lvlx128 v58,r31,r8
	temp.u32 = ctx.r31.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v57,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v22,v60,v59
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvlx128 v56,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v21,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvlx128 v55,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v20,v62,v57
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// lvlx128 v54,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r31,r10,r8
	ctx.r31.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvlx128 v53,r0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisb v14,-1
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_set1_epi8(char(0xFF)));
	// lvrx128 v52,r11,r28
	temp.u32 = ctx.r11.u32 + ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// lvrx128 v51,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v25,v53,v52
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v50,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v24,v55,v51
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvrx128 v49,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v23,v56,v50
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvrx128 v48,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v19,v58,v49
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vor128 v18,v54,v48
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// lvx128 v1,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v26,4
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_set1_epi16(short(0x4)));
	// li r25,0
	ctx.r25.s64 = 0;
	// lvx128 v11,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v6,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v12,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// vsplth v27,v11,1
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_set1_epi16(short(0xD0C))));
	// addi r27,r8,-4
	ctx.r27.s64 = ctx.r8.s64 + -4;
	// vmrghb v9,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v16,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vmrghb v8,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vspltisw v17,4
	simde_mm_store_si128((simde__m128i*)ctx.v17.u32, simde_mm_set1_epi32(int(0x4)));
	// vupkhsh v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v15.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16))));
loc_881D7C70:
	// vsubshs v3,v6,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r30,r1,-192
	ctx.r30.s64 = ctx.r1.s64 + -192;
	// vsubshs v2,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v29,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v28,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v4,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v31,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v30,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vor128 v47,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// stvx128 v4,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v45,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor128 v43,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vsubshs v12,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubshs v10,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsubshs v8,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vor128 v46,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor128 v44,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vsubshs v4,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubshs v11,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vor128 v42,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vmaxsh v29,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vmaxsh v28,v10,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vmaxsh v2,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmaxsh v30,v11,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vmaxsh v31,v9,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v12,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vcmpgtuh v29,v13,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vcmpgtuh v28,v13,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vcmpgtuh v2,v13,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// lvx128 v7,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtuh v30,v13,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmaxsh v3,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcmpgtuh v31,v13,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vmaxsh v12,v12,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v29,v29,v28
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vcmpgtuh v3,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vaddshs v28,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v3,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtuh v2,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vaddshs v31,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v30,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v29,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v3,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vperm v3,v3,v3,v1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vcmpgtsh. v29,v3,v26
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), 0xFFFF);
	// mfocrf r24,2
	ctx.r24.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r30,r24,0,26,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x20;
	// vor128 v12,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// vor128 v11,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// vor128 v10,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// vor128 v9,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// vor128 v8,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// vor128 v7,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// beq cr6,0x881d7fa4
	if (ctx.cr6.eq) goto loc_881D7FA4;
	// vminsh v31,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vminsh v2,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmaxsh v28,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmaxsh v30,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vor128 v41,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vminsh v2,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vminsh v0,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmaxsh v30,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vmaxsh v31,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vminsh v28,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmaxsh v2,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v2,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vcmpgtsh. v30,v16,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), 0xFFFF);
	// vupkhsh v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16))));
	// vcmpgtsw. v28,v15,v31
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v15.u32), simde_mm_load_si128((simde__m128i*)ctx.v31.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v28.u32)), 0xF);
	// vand128 v63,v30,v29
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// mfocrf r30,2
	ctx.r30.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtsw. v31,v15,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v15.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v31.u32)), 0xF);
	// mfocrf r28,2
	ctx.r28.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupkhsh v30,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16))));
	// vcmpgtsw. v28,v30,v17
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v30.u32), simde_mm_load_si128((simde__m128i*)ctx.v17.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v28.u32)), 0xF);
	// mfocrf r29,2
	ctx.r29.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcmpgtsw. v2,v3,v17
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v17.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v2.u32)), 0xF);
	// mfocrf r23,2
	ctx.r23.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r22,r29,0,26,26
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// vor128 v0,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r22,32
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 32, ctx.xer);
	// beq cr6,0x881d7dd8
	if (ctx.cr6.eq) goto loc_881D7DD8;
	// rlwinm r30,r30,0,26,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// bne cr6,0x881d7df0
	if (!ctx.cr6.eq) goto loc_881D7DF0;
loc_881D7DD8:
	// rlwinm r30,r29,0,26,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// beq cr6,0x881d7fa4
	if (ctx.cr6.eq) goto loc_881D7FA4;
	// rlwinm r30,r28,0,26,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// beq cr6,0x881d7fa4
	if (ctx.cr6.eq) goto loc_881D7FA4;
loc_881D7DF0:
	// vsubshs v31,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// addi r23,r1,-208
	ctx.r23.s64 = ctx.r1.s64 + -208;
	// vsubshs v3,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// addi r22,r1,-224
	ctx.r22.s64 = ctx.r1.s64 + -224;
	// vaddshs v30,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r21,r1,-176
	ctx.r21.s64 = ctx.r1.s64 + -176;
	// vaddshs v2,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// addi r30,r1,-256
	ctx.r30.s64 = ctx.r1.s64 + -256;
	// vmaxsh v4,v31,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// addi r29,r1,-240
	ctx.r29.s64 = ctx.r1.s64 + -240;
	// vsubshs v28,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// addi r28,r1,-272
	ctx.r28.s64 = ctx.r1.s64 + -272;
	// vaddshs v31,v30,v26
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vandc128 v39,v12,v63
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vcmpgtsh v30,v27,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmaxsh v3,v28,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vor128 v60,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor128 v61,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vandc128 v37,v7,v30
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vand128 v36,v5,v30
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vcmpgtsh v4,v27,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vaddshs v3,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v28,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vxor128 v5,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vandc128 v34,v12,v4
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vand128 v33,v6,v4
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// stvx128 v3,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vandc128 v38,v11,v63
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vaddshs v30,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v3,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vxor128 v6,v33,v34
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// vsubshs v4,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stvx128 v30,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v59,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vandc128 v40,v9,v63
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vaddshs v30,v6,v12
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v12,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v4,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v0,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v3,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v11,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stvx128 v4,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v31,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v30,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v3,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vandc128 v35,v10,v63
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vandc128 v32,v7,v63
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vandc128 v62,v8,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vaddshs v30,v30,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v0,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v31,v11,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v2,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v0,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v0,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsrah v31,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v12,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v30,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v28,v28,v3
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v4,v12,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vand128 v58,v31,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v57,v30,v63
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vsrah v3,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor128 v56,v58,v40
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vxor128 v55,v57,v39
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vand128 v54,v3,v63
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v53,v2,v63
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v51,v31,v63
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v50,v30,v63
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vpkshus128 v52,v55,v56
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v56.s16), simde_mm_load_si128((simde__m128i*)ctx.v55.s16)));
	// vxor128 v3,v54,v35
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vxor128 v49,v53,v32
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// vxor128 v48,v51,v62
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vxor128 v4,v50,v38
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// stvx128 v52,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r30,-248(r1)
	ctx.current_instruction = 0x881D7F24;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r23,-256(r1)
	ctx.current_instruction = 0x881D7F28;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// vpkshus128 v47,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v49.s16), simde_mm_load_si128((simde__m128i*)ctx.v48.s16)));
	// vpkshus128 v46,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvx128 v47,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r23,0(r6)
	ctx.current_instruction = 0x881D7F38;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r23.u32);
	// stvx128 v46,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r28,-232(r1)
	ctx.current_instruction = 0x881D7F40;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r23,-272(r1)
	ctx.current_instruction = 0x881D7F44;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// vor128 v0,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// lwz r22,-264(r1)
	ctx.current_instruction = 0x881D7F4C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// vor128 v12,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// stw r30,0(r3)
	ctx.current_instruction = 0x881D7F54;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// vor128 v11,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// lwz r29,-240(r1)
	ctx.current_instruction = 0x881D7F5C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// stw r29,0(r10)
	ctx.current_instruction = 0x881D7F60;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r28,-4(r31)
	ctx.current_instruction = 0x881D7F64;
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// stwx r23,r27,r31
	ctx.current_instruction = 0x881D7F68;
	REX_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r23.u32);
	// lwz r28,-268(r1)
	ctx.current_instruction = 0x881D7F6C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r23,-260(r1)
	ctx.current_instruction = 0x881D7F70;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// lwz r21,-252(r1)
	ctx.current_instruction = 0x881D7F74;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// lwz r20,-244(r1)
	ctx.current_instruction = 0x881D7F78;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// stw r22,0(r9)
	ctx.current_instruction = 0x881D7F7C;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r22.u32);
	// lwz r30,-236(r1)
	ctx.current_instruction = 0x881D7F80;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// lwz r29,-228(r1)
	ctx.current_instruction = 0x881D7F84;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// stw r21,4(r6)
	ctx.current_instruction = 0x881D7F88;
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r21.u32);
	// stw r20,4(r3)
	ctx.current_instruction = 0x881D7F8C;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r20.u32);
	// stw r30,4(r10)
	ctx.current_instruction = 0x881D7F90;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stw r29,0(r31)
	ctx.current_instruction = 0x881D7F94;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stwx r28,r31,r8
	ctx.current_instruction = 0x881D7F98;
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r28.u32);
	// stw r23,4(r9)
	ctx.current_instruction = 0x881D7F9C;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r23.u32);
	// b 0x881d7fac
	goto loc_881D7FAC;
loc_881D7FA4:
	// vor v3,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v4,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
loc_881D7FAC:
	// rlwinm r30,r24,0,24,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// beq cr6,0x881d8034
	if (ctx.cr6.eq) goto loc_881D8034;
	// vsubshs v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vxor128 v45,v14,v29
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// vsubshs v31,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmaxsh v31,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtsh v30,v27,v31
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vcmpgtsh v29,v31,v13
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vand128 v44,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vand128 v30,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vcmpequh. v28,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), 0xFFFF);
	// blt cr6,0x881d8034
	if (ctx.cr6.lt) goto loc_881D8034;
	// vspltish v29,2
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_set1_epi16(short(0x2)));
	// addi r30,r1,-272
	ctx.r30.s64 = ctx.r1.s64 + -272;
	// vspltish v28,15
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_set1_epi16(short(0xF)));
	// vsrah v31,v31,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v2,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v29,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vand v28,v2,v29
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// vsubshs v2,v31,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vand v2,v2,v30
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vsubshs v31,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v30,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vpkshus128 v43,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// stvx128 v43,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r24,-268(r1)
	ctx.current_instruction = 0x881D8014;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r29,-264(r1)
	ctx.current_instruction = 0x881D8018;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// lwz r28,-260(r1)
	ctx.current_instruction = 0x881D801C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// lwz r30,-272(r1)
	ctx.current_instruction = 0x881D8020;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// stw r30,0(r10)
	ctx.current_instruction = 0x881D8024;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r24,4(r10)
	ctx.current_instruction = 0x881D8028;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
	// stw r29,-4(r31)
	ctx.current_instruction = 0x881D802C;
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// stw r28,0(r31)
	ctx.current_instruction = 0x881D8030;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_881D8034:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x881d8070
	if (!ctx.cr6.eq) goto loc_881D8070;
	// vmrglb v6,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// vmrglb v12,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// vmrglb v9,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// vmrglb v11,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// vmrglb v10,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// vmrglb v8,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_881D8070:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// blt cr6,0x881d7c70
	if (ctx.cr6.lt) goto loc_881D7C70;
loc_881D807C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x881d86ac
	if (ctx.cr6.eq) goto loc_881D86AC;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// stw r7,-192(r1)
	ctx.current_instruction = 0x881D8088;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvx128 v1,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,0
	ctx.r26.s64 = 0;
	// vspltisb v21,-1
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_set1_epi8(char(0xFF)));
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// vspltish v20,2
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_set1_epi16(short(0x2)));
	// lvlx128 v42,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// add r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lvlx128 v41,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v40,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltish v25,4
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_set1_epi16(short(0x4)));
	// add r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lvrx128 v39,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v38,r6,r8
	temp.u32 = ctx.r6.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v41,v39
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lvrx128 v37,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v36,r5,r8
	temp.u32 = ctx.r5.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v11,v42,v37
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// add r31,r3,r8
	ctx.r31.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lvrx128 v35,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v34,r4,r8
	temp.u32 = ctx.r4.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v10,v40,v35
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// add r30,r31,r8
	ctx.r30.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lvrx128 v33,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v32,r3,r8
	temp.u32 = ctx.r3.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v38,v33
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// lvrx128 v63,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v62,r31,r8
	temp.u32 = ctx.r31.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v8,v36,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvrx128 v61,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v60,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v7,v34,v61
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvrx128 v59,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v32,v60
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vor128 v5,v62,v59
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v30,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r26,-288(r1)
	ctx.current_instruction = 0x881D8148;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r26.u32);
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghh v4,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrghh v3,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghh v2,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrghh v31,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vmrglh v12,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglh v11,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrglh v10,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrglh v9,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsplth v27,v30,1
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vmrghh v8,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrghh v7,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglh v6,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrglh v5,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vaddshs v24,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vmrghh v4,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglh v3,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglh v31,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghh v2,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghh v12,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vmrglh v11,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vmrghh v7,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vmrglh v10,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vspltisw v23,4
	simde_mm_store_si128((simde__m128i*)ctx.v23.u32, simde_mm_set1_epi32(int(0x4)));
	// vmrghh v9,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrglh v6,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrghh v5,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglh v8,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vupkhsh v22,v24
	simde_mm_store_si128((simde__m128i*)ctx.v22.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16))));
loc_881D81C4:
	// vsubshs v3,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v28,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubshs v30,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v29,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v2,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v31,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v26,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v17,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsubshs v19,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v18,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubshs v16,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v15,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v4,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vmaxsh v14,v26,v3
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmaxsh v3,v17,v28
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vmaxsh v28,v19,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vmaxsh v29,v18,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vmaxsh v26,v16,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vmaxsh v19,v15,v2
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v18,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vcmpgtuh v17,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vcmpgtuh v3,v13,v26
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vcmpgtuh v16,v13,v29
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vcmpgtuh v2,v13,v19
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vmaxsh v30,v18,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vcmpgtuh v15,v13,v28
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vcmpgtuh v31,v13,v14
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vaddshs v29,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vcmpgtuh v19,v13,v30
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vaddshs v28,v3,v15
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vaddshs v26,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v18,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v17,v19,v26
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v16,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v3,v0,v16
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vperm v3,v3,v3,v1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vcmpgtsh. v26,v3,v25
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), 0xFFFF);
	// mfocrf r27,2
	ctx.r27.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r7,r27,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// beq cr6,0x881d84d0
	if (ctx.cr6.eq) goto loc_881D84D0;
	// vminsh v2,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vminsh v31,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmaxsh v30,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmaxsh v29,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vminsh v28,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vminsh v19,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmaxsh v18,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmaxsh v17,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vminsh v16,v28,v19
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vmaxsh v15,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vsubshs v2,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vcmpgtsh. v31,v24,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), 0xFFFF);
	// vupkhsh v14,v2
	simde_mm_store_si128((simde__m128i*)ctx.v14.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16))));
	// vcmpgtsw. v30,v22,v14
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v22.u32), simde_mm_load_si128((simde__m128i*)ctx.v14.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v30.u32)), 0xF);
	// vand128 v63,v31,v26
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8)));
	// mfocrf r7,2
	ctx.r7.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v29,v2
	simde_mm_store_si128((simde__m128i*)ctx.v29.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtsw. v28,v22,v29
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v22.u32), simde_mm_load_si128((simde__m128i*)ctx.v29.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v28.u32)), 0xF);
	// mfocrf r28,2
	ctx.r28.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupkhsh v19,v3
	simde_mm_store_si128((simde__m128i*)ctx.v19.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16))));
	// vcmpgtsw. v18,v19,v23
	simde_mm_store_si128((simde__m128i*)ctx.v18.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v19.u32), simde_mm_load_si128((simde__m128i*)ctx.v23.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v18.u32)), 0xF);
	// mfocrf r29,2
	ctx.r29.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v17,v3
	simde_mm_store_si128((simde__m128i*)ctx.v17.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcmpgtsw. v16,v17,v23
	simde_mm_store_si128((simde__m128i*)ctx.v16.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v17.u32), simde_mm_load_si128((simde__m128i*)ctx.v23.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v16.u32)), 0xF);
	// mfocrf r25,2
	ctx.r25.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r24,r29,0,26,26
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 32, ctx.xer);
	// beq cr6,0x881d82e8
	if (ctx.cr6.eq) goto loc_881D82E8;
	// rlwinm r7,r7,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// bne cr6,0x881d8300
	if (!ctx.cr6.eq) goto loc_881D8300;
loc_881D82E8:
	// rlwinm r7,r29,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// beq cr6,0x881d84d0
	if (ctx.cr6.eq) goto loc_881D84D0;
	// rlwinm r7,r28,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// beq cr6,0x881d84d0
	if (ctx.cr6.eq) goto loc_881D84D0;
loc_881D8300:
	// vsubshs v3,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r7,r1,-272
	ctx.r7.s64 = ctx.r1.s64 + -272;
	// vsubshs v2,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// addi r29,r1,-224
	ctx.r29.s64 = ctx.r1.s64 + -224;
	// vor128 v58,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// addi r28,r1,-240
	ctx.r28.s64 = ctx.r1.s64 + -240;
	// vaddshs v31,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r26,r1,-256
	ctx.r26.s64 = ctx.r1.s64 + -256;
	// vsubshs v30,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmaxsh v29,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vor128 v57,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vaddshs v2,v31,v25
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vmaxsh v28,v30,v3
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcmpgtsh v19,v27,v29
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vaddshs v31,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v18,v10,v5
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vcmpgtsh v17,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vandc128 v55,v5,v19
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vand128 v54,v8,v19
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8)));
	// vaddshs v16,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vandc128 v52,v11,v17
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vand128 v51,v12,v17
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v17.u8)));
	// vxor128 v8,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vandc128 v56,v10,v63
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vandc128 v53,v11,v63
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vxor128 v12,v51,v52
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vaddshs v3,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v15,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v14,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v30,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v4,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v29,v31,v3
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v28,v15,v3
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v19,v30,v2
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v17,v4,v30
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v15,v12,v7
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v4,v2,v29
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v3,v19,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vandc128 v50,v7,v63
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vandc128 v49,v9,v63
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vaddshs v2,v16,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v31,v18,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v30,v17,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v29,v15,v3
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v19,v14,v4
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsrah v18,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v15,v28,v4
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vand128 v46,v18,v63
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v45,v17,v63
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v44,v16,v63
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vsrah v14,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v3,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor128 v29,v46,v56
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vxor128 v43,v45,v53
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vxor128 v42,v44,v50
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vand128 v40,v4,v63
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v39,v3,v63
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vandc128 v48,v6,v63
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vpkshus128 v4,v58,v43
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v43.s16), simde_mm_load_si128((simde__m128i*)ctx.v58.s16)));
	// vandc128 v47,v5,v63
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vpkshus128 v3,v42,v29
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v42.s16)));
	// vand128 v41,v14,v63
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v38,v40,v48
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vxor128 v37,v39,v47
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vmrghb v30,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vxor128 v28,v41,v49
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrglb v4,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vpkshus128 v31,v37,v57
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v57.s16), simde_mm_load_si128((simde__m128i*)ctx.v37.s16)));
	// vpkshus128 v2,v28,v38
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v38.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vmrghb v19,v30,v4
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vmrglb v18,v30,v4
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vmrghb v3,v2,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrglb v2,v2,v31
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// stvx128 v19,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,-220(r1)
	ctx.current_instruction = 0x881D8438;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// vmrghb v17,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v16,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// stvx128 v16,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r22,-256(r1)
	ctx.current_instruction = 0x881D8448;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r21,-252(r1)
	ctx.current_instruction = 0x881D844C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// stvx128 v17,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r20,-248(r1)
	ctx.current_instruction = 0x881D8454;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r18,-272(r1)
	ctx.current_instruction = 0x881D8458;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// lwz r17,-268(r1)
	ctx.current_instruction = 0x881D845C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r16,-264(r1)
	ctx.current_instruction = 0x881D8460;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// lwz r15,-260(r1)
	ctx.current_instruction = 0x881D8464;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// lwz r14,-224(r1)
	ctx.current_instruction = 0x881D8468;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// stw r18,0(r10)
	ctx.current_instruction = 0x881D846C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r18.u32);
	// lwz r29,-216(r1)
	ctx.current_instruction = 0x881D8470;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// stw r17,0(r9)
	ctx.current_instruction = 0x881D8474;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r17.u32);
	// lwz r28,-212(r1)
	ctx.current_instruction = 0x881D8478;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// stw r16,0(r6)
	ctx.current_instruction = 0x881D847C;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r16.u32);
	// stw r15,0(r5)
	ctx.current_instruction = 0x881D8480;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r15.u32);
	// stw r14,0(r4)
	ctx.current_instruction = 0x881D8484;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r14.u32);
	// stw r7,0(r3)
	ctx.current_instruction = 0x881D8488;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r29,0(r31)
	ctx.current_instruction = 0x881D848C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r28,0(r30)
	ctx.current_instruction = 0x881D8490;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r23,-228(r1)
	ctx.current_instruction = 0x881D8494;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// lwz r19,-244(r1)
	ctx.current_instruction = 0x881D8498;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// lwz r26,-240(r1)
	ctx.current_instruction = 0x881D849C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// lwz r25,-236(r1)
	ctx.current_instruction = 0x881D84A0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// lwz r24,-232(r1)
	ctx.current_instruction = 0x881D84A4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// stw r26,4(r10)
	ctx.current_instruction = 0x881D84A8;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r26.u32);
	// stw r25,4(r9)
	ctx.current_instruction = 0x881D84AC;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r25.u32);
	// stw r24,4(r6)
	ctx.current_instruction = 0x881D84B0;
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r24.u32);
	// stw r23,4(r5)
	ctx.current_instruction = 0x881D84B4;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r23.u32);
	// stw r22,4(r4)
	ctx.current_instruction = 0x881D84B8;
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r22.u32);
	// stw r21,4(r3)
	ctx.current_instruction = 0x881D84BC;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r21.u32);
	// stw r20,4(r31)
	ctx.current_instruction = 0x881D84C0;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r20.u32);
	// lwz r26,-288(r1)
	ctx.current_instruction = 0x881D84C4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// stw r19,4(r30)
	ctx.current_instruction = 0x881D84C8;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r19.u32);
	// b 0x881d84d8
	goto loc_881D84D8;
loc_881D84D0:
	// vor v28,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v29,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
loc_881D84D8:
	// rlwinm r7,r27,0,24,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r7,128
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 128, ctx.xer);
	// beq cr6,0x881d8594
	if (ctx.cr6.eq) goto loc_881D8594;
	// vsubshs v3,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vxor128 v36,v21,v26
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8)));
	// vsubshs v4,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmaxsh v4,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcmpgtsh v2,v27,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vcmpgtsh v31,v4,v13
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vand128 v35,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vand128 v2,v35,v36
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// vcmpequh. v30,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), 0xFFFF);
	// blt cr6,0x881d8594
	if (ctx.cr6.lt) goto loc_881D8594;
	// vsrah v4,v4,v20
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vspltish v31,15
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_set1_epi16(short(0xF)));
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r29,r1,-208
	ctx.r29.s64 = ctx.r1.s64 + -208;
	// vaddshs v30,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsrah v26,v3,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand v19,v26,v30
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vsubshs v18,v4,v19
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vand v4,v18,v2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vaddshs v17,v29,v4
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v16,v28,v4
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vpkshus v15,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vpkshus v14,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vmrghb v4,v15,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vmrghh v3,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglh v2,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// stvx128 v3,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r22,-192(r1)
	ctx.current_instruction = 0x881D8550;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stvx128 v2,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r29,-180(r1)
	ctx.current_instruction = 0x881D8558;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// lwz r27,-208(r1)
	ctx.current_instruction = 0x881D855C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// lwz r25,-204(r1)
	ctx.current_instruction = 0x881D8560;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r24,-200(r1)
	ctx.current_instruction = 0x881D8564;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r23,-196(r1)
	ctx.current_instruction = 0x881D8568;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// sth r22,3(r10)
	ctx.current_instruction = 0x881D856C;
	REX_STORE_U16(ctx.r10.u32 + 3, ctx.r22.u16);
	// lwz r7,-188(r1)
	ctx.current_instruction = 0x881D8570;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r28,-184(r1)
	ctx.current_instruction = 0x881D8574;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// sth r7,3(r9)
	ctx.current_instruction = 0x881D8578;
	REX_STORE_U16(ctx.r9.u32 + 3, ctx.r7.u16);
	// sth r28,3(r6)
	ctx.current_instruction = 0x881D857C;
	REX_STORE_U16(ctx.r6.u32 + 3, ctx.r28.u16);
	// sth r29,3(r5)
	ctx.current_instruction = 0x881D8580;
	REX_STORE_U16(ctx.r5.u32 + 3, ctx.r29.u16);
	// sth r27,3(r4)
	ctx.current_instruction = 0x881D8584;
	REX_STORE_U16(ctx.r4.u32 + 3, ctx.r27.u16);
	// sth r25,3(r3)
	ctx.current_instruction = 0x881D8588;
	REX_STORE_U16(ctx.r3.u32 + 3, ctx.r25.u16);
	// sth r24,3(r31)
	ctx.current_instruction = 0x881D858C;
	REX_STORE_U16(ctx.r31.u32 + 3, ctx.r24.u16);
	// sth r23,3(r30)
	ctx.current_instruction = 0x881D8590;
	REX_STORE_U16(ctx.r30.u32 + 3, ctx.r23.u16);
loc_881D8594:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x881d869c
	if (!ctx.cr6.eq) goto loc_881D869C;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lvlx128 v34,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lvlx128 v33,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 + ctx.r8.u64;
	// lvlx128 v32,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v58,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v57,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v12,v34,v58
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvrx128 v56,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v11,v33,v57
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// lvrx128 v55,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v32,v56
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// lvrx128 v54,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v63,v55
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// lvrx128 v53,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v62,v54
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvrx128 v52,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v7,v61,v53
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v60,v52
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v5,v59,v51
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vmrghb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghh v4,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrghh v3,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghh v2,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrghh v31,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vmrglh v12,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglh v11,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrglh v10,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrglh v9,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vmrghh v8,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrghh v7,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglh v6,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrglh v5,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrghh v4,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglh v3,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglh v31,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghh v2,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghh v12,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vmrglh v11,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vmrghh v7,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vmrglh v10,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vmrghh v9,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrglh v6,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrghh v5,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglh v8,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
loc_881D869C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r26,-288(r1)
	ctx.current_instruction = 0x881D86A0;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r26.u32);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// blt cr6,0x881d81c4
	if (ctx.cr6.lt) goto loc_881D81C4;
loc_881D86AC:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881F1B20) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F1B20;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F1B20) {
			switch (rex_dispatch_address) {
				case 0x881F1B28:
				case 0x881F1B70:
				case 0x881F1B8C:
				case 0x881F1BB4:
				case 0x881F1BDC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F1B20;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F1B28: goto loc_881F1B28;
		case 0x881F1B70: goto loc_881F1B70;
		case 0x881F1B8C: goto loc_881F1B8C;
		case 0x881F1BB4: goto loc_881F1BB4;
		case 0x881F1BDC: goto loc_881F1BDC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881F1B28;
	__savegprlr_29(ctx, base);
loc_881F1B28:
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881F1B2C;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	ctx.current_instruction = 0x881F1B30;
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// addi r11,r11,24064
	ctx.r11.s64 = ctx.r11.s64 + 24064;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// li r29,1
	ctx.r29.s64 = 1;
	// mulli r9,r9,72
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// stw r29,80(r31)
	ctx.current_instruction = 0x881F1B50;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lwzx r10,r10,r11
	ctx.current_instruction = 0x881F1B54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881F1B5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881f1bb4
	if (!ctx.cr6.eq) goto loc_881F1BB4;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x88052218
	ctx.lr = 0x881F1B70;
	sub_88052218(ctx, base);
loc_881F1B70:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x881F1B74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881f1ba8
	if (!ctx.cr6.eq) goto loc_881F1BA8;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x88051fb8
	ctx.lr = 0x881F1B8C;
	sub_88051FB8(ctx, base);
loc_881F1B8C:
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// stw r11,80(r31)
	ctx.current_instruction = 0x881F1B98;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.current_instruction = 0x881F1B9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	ctx.current_instruction = 0x881F1BA4;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_881F1BA8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x881f1be8
	ctx.lr = 0x881F1BB4;
	sub_881F1BE8(ctx, base);
loc_881F1BB4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x881f1bdc
	if (ctx.cr6.eq) goto loc_881F1BDC;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r8,r11
	ctx.current_instruction = 0x881F1BCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x88243680
	ctx.lr = 0x881F1BDC;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_881F1BDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_882024D8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x882024D8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882024D8;
	ctx.current_instruction = 0x882024D8;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// lwz r10,1464(r3)
	ctx.current_instruction = 0x882024DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1464);
	// lwz r8,1368(r3)
	ctx.current_instruction = 0x882024E0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// rlwinm r7,r11,0,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// rlwinm r3,r8,17,0,14
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFE0000;
	// mullw r5,r7,r10
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r6,r10
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r4,r5,0,0,14
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFE0000;
	// srawi r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// addis r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 65536;
	// or r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 | ctx.r6.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88202E58) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88202E58;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88202E58) {
			switch (rex_dispatch_address) {
				case 0x88202E60:
				case 0x88202EEC:
				case 0x88202F78:
				case 0x88202F98:
				case 0x88203028:
				case 0x88203070:
				case 0x882030EC:
				case 0x88203134:
				case 0x882031D4:
				case 0x8820321C:
				case 0x882032E4:
				case 0x8820332C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88202E58;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88202E60: goto loc_88202E60;
		case 0x88202EEC: goto loc_88202EEC;
		case 0x88202F78: goto loc_88202F78;
		case 0x88202F98: goto loc_88202F98;
		case 0x88203028: goto loc_88203028;
		case 0x88203070: goto loc_88203070;
		case 0x882030EC: goto loc_882030EC;
		case 0x88203134: goto loc_88203134;
		case 0x882031D4: goto loc_882031D4;
		case 0x8820321C: goto loc_8820321C;
		case 0x882032E4: goto loc_882032E4;
		case 0x8820332C: goto loc_8820332C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88202E60;
	__savegprlr_25(ctx, base);
loc_88202E60:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88202E60;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.current_instruction = 0x88202E64;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x88202e84
	if (!ctx.cr6.eq) goto loc_88202E84;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r31)
	ctx.current_instruction = 0x88202E7C;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x88202fb8
	goto loc_88202FB8;
loc_88202E84:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x88202E84;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.current_instruction = 0x88202E88;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.current_instruction = 0x88202E90;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.current_instruction = 0x88202EA0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88202f70
	if (ctx.cr6.lt) goto loc_88202F70;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88202EB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x88202EC0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x88202EC8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x88202f68
	if (!ctx.cr6.lt) goto loc_88202F68;
loc_88202ED0:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x88202ED0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88202ED4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88202efc
	if (ctx.cr6.lt) goto loc_88202EFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x88202EEC;
	sub_88156440(ctx, base);
loc_88202EEC:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x88202ed0
	if (ctx.cr6.eq) goto loc_88202ED0;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88202fb0
	goto loc_88202FB0;
loc_88202EFC:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x88202EFC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x88202F04;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x88202F0C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x88202F10;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x88202F18;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x88202F1C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88202F24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x88202F28;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x88202F30;
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
	ctx.current_instruction = 0x88202F4C;
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
	ctx.current_instruction = 0x88202F64;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_88202F68:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88202fb0
	goto loc_88202FB0;
loc_88202F70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88202F78;
	sub_88156500(ctx, base);
loc_88202F78:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
loc_88202F80:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88202F80;
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
	ctx.lr = 0x88202F98;
	sub_88156500(ctx, base);
loc_88202F98:
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x88202FA0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88202f80
	if (ctx.cr6.lt) goto loc_88202F80;
loc_88202FB0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8820314c
	if (!ctx.cr6.eq) goto loc_8820314C;
loc_88202FB8:
	// lwz r11,16(r27)
	ctx.current_instruction = 0x88202FB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88202FC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88202FC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x88203098
	if (ctx.cr6.eq) goto loc_88203098;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x88203038
	if (!ctx.cr6.lt) goto loc_88203038;
loc_88202FE0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88203038
	if (ctx.cr6.eq) goto loc_88203038;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88202FEC;
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
	ctx.current_instruction = 0x88203010;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88203018;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88203028
	if (!ctx.cr0.lt) goto loc_88203028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88203028;
	sub_88156678(ctx, base);
loc_88203028:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88203028;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88202fe0
	if (ctx.cr6.gt) goto loc_88202FE0;
loc_88203038:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8820303C;
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
	ctx.current_instruction = 0x88203054;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88203060;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88203070
	if (!ctx.cr0.lt) goto loc_88203070;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88203070;
	sub_88156678(ctx, base);
loc_88203070:
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88203098:
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x882030fc
	if (!ctx.cr6.lt) goto loc_882030FC;
loc_882030A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x882030fc
	if (ctx.cr6.eq) goto loc_882030FC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x882030B0;
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
	ctx.current_instruction = 0x882030D4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x882030DC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x882030ec
	if (!ctx.cr0.lt) goto loc_882030EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x882030EC;
	sub_88156678(ctx, base);
loc_882030EC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x882030EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x882030a4
	if (ctx.cr6.gt) goto loc_882030A4;
loc_882030FC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88203100;
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
	ctx.current_instruction = 0x88203118;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88203124;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88203134
	if (!ctx.cr0.lt) goto loc_88203134;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88203134;
	sub_88156678(ctx, base);
loc_88203134:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r3,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8820314C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8820314C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r30,71
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 71, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// bne cr6,0x88203244
	if (!ctx.cr6.eq) goto loc_88203244;
	// lhz r11,72(r27)
	ctx.current_instruction = 0x8820315C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 72);
	// lhz r9,70(r27)
	ctx.current_instruction = 0x88203160;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r27.u32 + 70);
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// ble cr6,0x8820317c
	if (!ctx.cr6.gt) goto loc_8820317C;
loc_88203174:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x88203220
	goto loc_88203220;
loc_8820317C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88203174
	if (ctx.cr6.eq) goto loc_88203174;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x882031e4
	if (!ctx.cr6.gt) goto loc_882031E4;
loc_8820318C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x882031e4
	if (ctx.cr6.eq) goto loc_882031E4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88203198;
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
	ctx.current_instruction = 0x882031BC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x882031C4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x882031d4
	if (!ctx.cr0.lt) goto loc_882031D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x882031D4;
	sub_88156678(ctx, base);
loc_882031D4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x882031D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8820318c
	if (ctx.cr6.gt) goto loc_8820318C;
loc_882031E4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x882031E8;
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
	ctx.current_instruction = 0x88203200;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8820320C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8820321c
	if (!ctx.cr0.lt) goto loc_8820321C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8820321C;
	sub_88156678(ctx, base);
loc_8820321C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_88203220:
	// lhz r9,72(r27)
	ctx.current_instruction = 0x88203220;
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88203244:
	// lwz r11,16(r27)
	ctx.current_instruction = 0x88203244;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.current_instruction = 0x8820324C;
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
	// ble cr6,0x8820328c
	if (!ctx.cr6.gt) goto loc_8820328C;
loc_88203284:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x88203330
	goto loc_88203330;
loc_8820328C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88203284
	if (ctx.cr6.eq) goto loc_88203284;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x882032f4
	if (!ctx.cr6.gt) goto loc_882032F4;
loc_8820329C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x882032f4
	if (ctx.cr6.eq) goto loc_882032F4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x882032A8;
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
	ctx.current_instruction = 0x882032CC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x882032D4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x882032e4
	if (!ctx.cr0.lt) goto loc_882032E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x882032E4;
	sub_88156678(ctx, base);
loc_882032E4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x882032E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8820329c
	if (ctx.cr6.gt) goto loc_8820329C;
loc_882032F4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x882032F8;
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
	ctx.current_instruction = 0x88203310;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8820331C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8820332c
	if (!ctx.cr0.lt) goto loc_8820332C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8820332C;
	sub_88156678(ctx, base);
loc_8820332C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_88203330:
	// sraw r11,r10,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// and r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 & ctx.r25.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// neg r6,r8
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// neg r5,r7
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + ctx.r27.u64;
	// xor r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// xor r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r3,r6,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r6.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821A608) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821A608;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821A608) {
			switch (rex_dispatch_address) {
				case 0x8821A610:
				case 0x8821A9BC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821A608;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821A610: goto loc_8821A610;
		case 0x8821A9BC: goto loc_8821A9BC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8821A610;
	__savegprlr_29(ctx, base);
loc_8821A610:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8821A610;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,1120
	ctx.r5.s64 = 1120;
	// vspltish v8,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x3)));
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v1,7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x7)));
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vrlh v10,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, result);
	}
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// vspltish v3,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// lvx128 v11,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r3,1
	ctx.r3.s64 = 1;
	// vaddshs v4,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// vspltish v31,5
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_set1_epi16(short(0x5)));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// vsubshs v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// slw r5,r3,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne cr6,0x8821a7c4
	if (!ctx.cr6.eq) goto loc_8821A7C4;
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lvx128 v62,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v59,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v7,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x8821a9ac
	if (!ctx.cr6.gt) goto loc_8821A9AC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8821A6D8:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v30,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vor v11,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v29,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// vor v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v57,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v11,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v27,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// vperm128 v6,v56,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v25,v10,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// vslh v23,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglb v22,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v19,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v18,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v23,v10
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v5,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v22.u8));
	// vadduhm v26,v21,v28
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vslh v14,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v24,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v23,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v22,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v20,v30,v14
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vadduhm v19,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vsubshs v18,v29,v27
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vadduhm v17,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsubshs v16,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubshs v15,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vadduhm v14,v19,v4
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v30,v17,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v29,v20,v16
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v28,v18,v15
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v27,v14,v29
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v26,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsrah v25,v27,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v26,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v25,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// blt cr6,0x8821a6d8
	if (ctx.cr6.lt) goto loc_8821A6D8;
	// b 0x8821a9ac
	goto loc_8821A9AC;
loc_8821A7C4:
	// li r3,32
	ctx.r3.s64 = 32;
	// lvrx128 v52,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lvlx128 v55,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvrx128 v49,r3,r9
	temp.u32 = ctx.r3.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v29,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v10,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v5,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v9,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v28,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v30,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v29,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v28,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x8821a9ac
	if (!ctx.cr6.gt) goto loc_8821A9AC;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// li r30,-32
	ctx.r30.s64 = -32;
	// li r31,-16
	ctx.r31.s64 = -16;
loc_8821A850:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v27,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v26,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor128 v42,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// vor v11,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v10,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v28.u8));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v25,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vslh v28,v11,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v41,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v29,v43,v63,v2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vslh v24,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v21,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v10,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v19,v63,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v20,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v18,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v17,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v29,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v24,v28
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v14,v23,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v22,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vor v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v24,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v6,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v9,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vmrghb v30,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v20,v10
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v28,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v18.u8));
	// vadduhm v18,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v17,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v16,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vslh v19,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vslh v20,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v9,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vslh v22,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v17,v26,v19
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vslh v21,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v26,v24,v14
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vsubshs v20,v27,v20
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vadduhm v24,v23,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v27,v5,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubshs v22,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vadduhm v19,v16,v4
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v21,v18,v4
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v14,v24,v26
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v15,v27,v15
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v18,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v20,v23
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v26,v17,v22
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v22,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vsubshs v24,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v23,v25,v16
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vadduhm v20,v19,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v21,v21,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v18,v22,v4
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v19,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsrah v16,v20,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v15,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// stvx128 v16,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r10,r30
	ea = (ctx.r10.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v14,v15,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v14,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// vor128 v2,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x8821a850
	if (ctx.cr6.lt) goto loc_8821A850;
loc_8821A9AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x882193c8
	ctx.lr = 0x8821A9BC;
	sub_882193C8(ctx, base);
loc_8821A9BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_882232D8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x882232D8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882232D8;
	ctx.current_instruction = 0x882232D8;
	uint32_t ea{};
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// li r9,1104
	ctx.r9.s64 = 1104;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lvx128 v1,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x88221e10
	sub_88221E10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88223338) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88223338;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88223338) {
			switch (rex_dispatch_address) {
				case 0x88223340:
				case 0x88223578:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88223338;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88223340: goto loc_88223340;
		case 0x88223578: goto loc_88223578;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88223340;
	__savegprlr_26(ctx, base);
loc_88223340:
	// stwu r1,-912(r1)
	ctx.current_instruction = 0x88223340;
	ea = -912 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lvx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v60,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// lvx128 v59,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// lvx128 v57,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,176
	ctx.r29.s64 = ctx.r1.s64 + 176;
	// lvx128 v56,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,224
	ctx.r28.s64 = ctx.r1.s64 + 224;
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lvsl v4,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v62,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v1,v60,v57,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v55,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v58,v56,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lvx128 v54,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// vmrghb v10,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v55,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v5,v30,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v4,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// vslh v3,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v1,v5,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v31,v4,v12
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v30,v3,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v29,v2,v10
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v1,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v27,v30,v10
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v26,v29,v9
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v28,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v27,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x882234e8
	if (!ctx.cr6.eq) goto loc_882234E8;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// vslh v12,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r31,r9,r4
	ctx.r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v52,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v9,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// lvx128 v51,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// lvx128 v50,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,320
	ctx.r30.s64 = ctx.r1.s64 + 320;
	// lvx128 v49,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,368
	ctx.r29.s64 = ctx.r1.s64 + 368;
	// lvx128 v48,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,416
	ctx.r28.s64 = ctx.r1.s64 + 416;
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v3,v52,v49,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v50,v48,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v46,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v1,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v31,v46,v47,v1
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vslh v30,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v27,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v25,v30,v12
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v24,v29,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v23,v28,v10
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v26,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v21,v24,v10
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v20,v23,v27
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// stvx128 v22,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x882234ec
	goto loc_882234EC;
loc_882234E8:
	// blt cr6,0x88223564
	if (ctx.cr6.lt) goto loc_88223564;
loc_882234EC:
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88223564
	if (!ctx.cr6.gt) goto loc_88223564;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r3,r9,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r27,r9,r4
	ctx.r27.u64 = ctx.r4.u64 - ctx.r9.u64;
	// addi r10,r31,-48
	ctx.r10.s64 = ctx.r31.s64 + -48;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88223520:
	// lbzux r8,r3,r9
	ctx.current_instruction = 0x88223520;
	ea = ctx.r3.u32 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbzx r6,r27,r11
	ctx.current_instruction = 0x88223524;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// rotlwi r30,r8,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbz r31,0(r11)
	ctx.current_instruction = 0x8822352C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r29,r6,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 + ctx.r30.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// add r8,r6,r29
	ctx.r8.u64 = ctx.r6.u64 + ctx.r29.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sth r6,48(r10)
	ctx.current_instruction = 0x88223554;
	REX_STORE_U16(ctx.r10.u32 + 48, ctx.r6.u16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sthu r8,96(r10)
	ctx.current_instruction = 0x8822355C;
	ea = 96 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x88223520
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88223520;
loc_88223564:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r26,r11
	ea = (ctx.r26.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x88222bc8
	ctx.lr = 0x88223578;
	sub_88222BC8(ctx, base);
loc_88223578:
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_882291C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x882291C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x882291C0) {
			switch (rex_dispatch_address) {
				case 0x882291C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882291C0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x882291C8: goto loc_882291C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x882291C8;
	__savegprlr_26(ctx, base);
loc_882291C8:
	// lwz r11,1140(r7)
	ctx.current_instruction = 0x882291C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1140);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// lwz r30,1156(r7)
	ctx.current_instruction = 0x882291D0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 1156);
	// addi r26,r1,-80
	ctx.r26.s64 = ctx.r1.s64 + -80;
	// lwz r28,84(r1)
	ctx.current_instruction = 0x882291D8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,1164(r7)
	ctx.current_instruction = 0x882291E0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// cntlzw r7,r28
	ctx.r7.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// vspltish v12,5
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x5)));
	// stw r11,-96(r1)
	ctx.current_instruction = 0x882291F0;
	REX_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// stw r30,-80(r1)
	ctx.current_instruction = 0x882291F8;
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
	// vspltish v7,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x1)));
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
	// vsplth v31,v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_set1_epi16(short(0xD0C))));
	// li r31,16
	ctx.r31.s64 = 16;
	// vsplth v26,v9,1
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_set1_epi16(short(0xD0C))));
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// bne cr6,0x8822938c
	if (!ctx.cr6.eq) goto loc_8822938C;
	// lvx128 v60,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
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
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v63,v61,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v62,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v58,v59,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrghb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88229564
	if (!ctx.cr6.gt) goto loc_88229564;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_882292B0:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v5,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vslh v2,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vadduhm v23,v5,v10
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// lvx128 v57,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v28,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// vperm128 v5,v56,v57,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v22,v2,v9
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v4,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v3,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v21,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v6,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v10,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vmrghb v8,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vmrglb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v30,v1
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v16,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v5,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vadduhm v1,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v2,v23,v17
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v30,v22,v16
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v15,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
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
	// vsubshs v29,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v25,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v28,v2,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v24,v30,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsubshs v23,v8,v15
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vsubshs v22,v6,v14
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vadduhm v21,v28,v31
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v20,v24,v31
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v19,v23,v29
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v18,v22,v25
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v5,v21,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v2,v20,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsrah v17,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v17,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r7,r31
	ea = (ctx.r7.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// blt cr6,0x882292b0
	if (ctx.cr6.lt) goto loc_882292B0;
	// b 0x88229564
	goto loc_88229564;
loc_8822938C:
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
	// vor128 v5,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v51,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v4,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v8,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v1,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v3,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88229564
	if (!ctx.cr6.gt) goto loc_88229564;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r29,32
	ctx.r9.s64 = ctx.r29.s64 + 32;
loc_88229410:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v30,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// vor v6,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vor v29,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v5,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor128 v41,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v43,v63,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v3,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v23,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v20,v63,v42,v3
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v19,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v18,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v6,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v25,v1
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v14,v24,v10
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrghb v3,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v23,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v22,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v28,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v25,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v5,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v8,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vor v1,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v19.u8));
	// vadduhm v19,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vslh v21,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v14,v16
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v20,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v16,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vor128 v4,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vslh v14,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vsubshs v23,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsubshs v21,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vadduhm v22,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v20,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vslh v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v30,v14
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vadduhm v16,v29,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v19,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v15,v2,v25
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v14,v1,v24
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v30,v22,v31
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v24,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vslh v28,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v29,v20,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v20,v15,v23
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v19,v14,v21
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vsubshs v18,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsubshs v17,v3,v25
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vadduhm v16,v22,v24
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v15,v30,v20
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v14,v29,v19
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v30,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v29,v16,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vsrah v28,v15,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v14,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v24,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// stvx128 v28,r9,r27
	ea = (ctx.r9.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r9,r28
	ea = (ctx.r9.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v23,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v23,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// blt cr6,0x88229410
	if (ctx.cr6.lt) goto loc_88229410;
loc_88229564:
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltish v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// vspltish v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x0)));
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
	// bne cr6,0x88229614
	if (!ctx.cr6.eq) goto loc_88229614;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x882296fc
	if (!ctx.cr6.gt) goto loc_882296FC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_88229598:
	// lvx128 v10,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v6,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// vsldoi128 v9,v10,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// vsldoi128 v8,v10,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 14));
	// vsldoi128 v4,v10,v40,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 10));
	// vsubshs v3,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v1,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v24,v30,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v21,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vsubshs v20,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vadduhm v19,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v18,v3,v20
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v17,v19,v26
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v16,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsrah v15,v16,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v39,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vor v5,v5,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// stvewx128 v39,r0,r11
	ctx.current_instruction = 0x88229600;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r11,r10
	ctx.current_instruction = 0x88229604;
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x88229598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88229598;
	// b 0x882296fc
	goto loc_882296FC;
loc_88229614:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x882296fc
	if (!ctx.cr6.gt) goto loc_882296FC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_8822962C:
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
	// lvx128 v38,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v8,v9,v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 12));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v6,v10,v38,4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 12));
	// vsubshs v31,v10,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v9,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// vsldoi128 v3,v10,v38,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 14));
	// vsubshs v30,v9,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v28,v9,v10,6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 10));
	// vslh v25,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v24,v10,v38,6
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 10));
	// vslh v23,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v23,v29
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v16,v22,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v15,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v10,v21,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v9,v20,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vslh v19,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v3,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vslh v6,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v1,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v8,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubshs v25,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vadduhm v24,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsubshs v28,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vadduhm v23,v29,v1
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v21,v31,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v20,v24,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v22,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v19,v23,v26
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v18,v20,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v17,v19,v21
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
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
	// vor128 v37,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// vpkshus128 v36,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vor128 v5,v37,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// stvx128 v36,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x8822962c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822962C;
loc_882296FC:
	// vand v13,v5,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
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

