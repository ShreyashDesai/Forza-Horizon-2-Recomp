#include "forzahorizon2_funcs.33.h"

DEFINE_REX_FUNC(sub_88050310) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050310);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050310;
	ctx.current_instruction = 0x88050310;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,196(r11)
	ctx.current_instruction = 0x88050318;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__restgprlr_24) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050888);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x88050888;
	ctx.current_instruction = 0x88050888;
	// ld r24,-72(r1)
	ctx.current_instruction = 0x88050888;
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.current_instruction = 0x8805088C;
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.current_instruction = 0x88050890;
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.current_instruction = 0x88050894;
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.current_instruction = 0x88050898;
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.current_instruction = 0x8805089C;
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880508A0;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880508A4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880508A8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88051300) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88051300;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88051300) {
			switch (rex_dispatch_address) {
				case 0x8805132C:
				case 0x88051340:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88051300;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805132C: goto loc_8805132C;
		case 0x88051340: goto loc_88051340;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88051304;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88051308;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8805130C;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88051338
	if (ctx.cr6.eq) goto loc_88051338;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x88052690
	ctx.lr = 0x8805132C;
	sub_88052690(ctx, base);
loc_8805132C:
	// ld r11,88(r1)
	ctx.current_instruction = 0x8805132C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r31)
	ctx.current_instruction = 0x88051330;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x88051348
	goto loc_88051348;
loc_88051338:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x88052738
	ctx.lr = 0x88051340;
	sub_88052738(ctx, base);
loc_88051340:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88051340;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	ctx.current_instruction = 0x88051344;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_88051348:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805134C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88051354;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88052E38) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88052E38;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88052E38) {
			switch (rex_dispatch_address) {
				case 0x88052E40:
				case 0x88052E5C:
				case 0x88052E68:
				case 0x88052E70:
				case 0x88052E78:
				case 0x88052E8C:
				case 0x88052E98:
				case 0x88052EB8:
				case 0x88052EC8:
				case 0x88052ED0:
				case 0x88052EE4:
				case 0x88052EE8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88052E38;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88052E40: goto loc_88052E40;
		case 0x88052E5C: goto loc_88052E5C;
		case 0x88052E68: goto loc_88052E68;
		case 0x88052E70: goto loc_88052E70;
		case 0x88052E78: goto loc_88052E78;
		case 0x88052E8C: goto loc_88052E8C;
		case 0x88052E98: goto loc_88052E98;
		case 0x88052EB8: goto loc_88052EB8;
		case 0x88052EC8: goto loc_88052EC8;
		case 0x88052ED0: goto loc_88052ED0;
		case 0x88052EE4: goto loc_88052EE4;
		case 0x88052EE8: goto loc_88052EE8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88052E40;
	__savegprlr_28(ctx, base);
loc_88052E40:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88052E40;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-4096
	ctx.r11.s64 = -4096;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88052edc
	if (ctx.cr6.gt) goto loc_88052EDC;
	// lis r28,-30680
	ctx.r28.s64 = -2010644480;
loc_88052E58:
	// bl 0x881e9150
	ctx.lr = 0x88052E5C;
	sub_881E9150(ctx, base);
loc_88052E5C:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x88052e78
	if (!ctx.cr0.eq) goto loc_88052E78;
	// bl 0x880525b8
	ctx.lr = 0x88052E68;
	sub_880525B8(ctx, base);
loc_88052E68:
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x88052588
	ctx.lr = 0x88052E70;
	sub_88052588(ctx, base);
loc_88052E70:
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x88050cc8
	ctx.lr = 0x88052E78;
	sub_88050CC8(ctx, base);
loc_88052E78:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bne cr6,0x88052e88
	if (!ctx.cr6.eq) goto loc_88052E88;
	// li r31,1
	ctx.r31.s64 = 1;
loc_88052E88:
	// bl 0x881e9150
	ctx.lr = 0x88052E8C;
	sub_881E9150(ctx, base);
loc_88052E8C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x881eb0a0
	ctx.lr = 0x88052E98;
	sub_881EB0A0(ctx, base);
loc_88052E98:
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x88052ed4
	if (!ctx.cr0.eq) goto loc_88052ED4;
	// lwz r11,18376(r28)
	ctx.current_instruction = 0x88052EA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 18376);
	// li r31,12
	ctx.r31.s64 = 12;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88052ec4
	if (ctx.cr6.eq) goto loc_88052EC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880524f8
	ctx.lr = 0x88052EB8;
	sub_880524F8(ctx, base);
loc_88052EB8:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x88052e58
	if (!ctx.cr0.eq) goto loc_88052E58;
	// b 0x88052ecc
	goto loc_88052ECC;
loc_88052EC4:
	// bl 0x880529c8
	ctx.lr = 0x88052EC8;
	sub_880529C8(ctx, base);
loc_88052EC8:
	// stw r31,0(r3)
	ctx.current_instruction = 0x88052EC8;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_88052ECC:
	// bl 0x880529c8
	ctx.lr = 0x88052ED0;
	sub_880529C8(ctx, base);
loc_88052ED0:
	// stw r31,0(r3)
	ctx.current_instruction = 0x88052ED0;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_88052ED4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x88052ef8
	goto loc_88052EF8;
loc_88052EDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880524f8
	ctx.lr = 0x88052EE4;
	sub_880524F8(ctx, base);
loc_88052EE4:
	// bl 0x880529c8
	ctx.lr = 0x88052EE8;
	sub_880529C8(ctx, base);
loc_88052EE8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	ctx.current_instruction = 0x88052EF4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_88052EF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88058750) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88058750;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88058750) {
			switch (rex_dispatch_address) {
				case 0x88058778:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88058750;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88058778: goto loc_88058778;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88058754;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88058758;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8805875C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,368(r3)
	ctx.current_instruction = 0x88058760;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 368);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88058784
	if (ctx.cr6.eq) goto loc_88058784;
loc_88058770:
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x881ec8a8
	ctx.lr = 0x88058778;
	sub_881EC8A8(ctx, base);
loc_88058778:
	// lwz r11,368(r31)
	ctx.current_instruction = 0x88058778;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88058770
	if (!ctx.cr6.eq) goto loc_88058770;
loc_88058784:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805878C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88058794;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88059418) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88059418);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88059418;
	ctx.current_instruction = 0x88059418;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88059C08) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88059C08);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88059C08;
	ctx.current_instruction = 0x88059C08;
	// lwz r3,120(r3)
	ctx.current_instruction = 0x88059C08;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88059E38) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88059E38);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88059E38;
	ctx.current_instruction = 0x88059E38;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805A310) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805A310;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805A310) {
			switch (rex_dispatch_address) {
				case 0x8805A318:
				case 0x8805A334:
				case 0x8805A378:
				case 0x8805A3B0:
				case 0x8805A3DC:
				case 0x8805A3FC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805A310;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805A318: goto loc_8805A318;
		case 0x8805A334: goto loc_8805A334;
		case 0x8805A378: goto loc_8805A378;
		case 0x8805A3B0: goto loc_8805A3B0;
		case 0x8805A3DC: goto loc_8805A3DC;
		case 0x8805A3FC: goto loc_8805A3FC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8805A318;
	__savegprlr_29(ctx, base);
loc_8805A318:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8805A318;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805A31C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,60(r11)
	ctx.current_instruction = 0x8805A328;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A334;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805A334:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8805a3e8
	if (ctx.cr6.lt) goto loc_8805A3E8;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x8805A340;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,112(r31)
	ctx.current_instruction = 0x8805A344;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.current_instruction = 0x8805A348;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,116(r31)
	ctx.current_instruction = 0x8805A34C;
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// lwz r9,20(r30)
	ctx.current_instruction = 0x8805A350;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// stw r9,120(r31)
	ctx.current_instruction = 0x8805A354;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// lwz r11,24(r30)
	ctx.current_instruction = 0x8805A358;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805a368
	if (ctx.cr6.eq) goto loc_8805A368;
	// stw r11,660(r31)
	ctx.current_instruction = 0x8805A364;
	REX_STORE_U32(ctx.r31.u32 + 660, ctx.r11.u32);
loc_8805A368:
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r4,r4,32791
	ctx.r4.u64 = ctx.r4.u64 | 32791;
	// bl 0x88050340
	ctx.lr = 0x8805A378;
	sub_88050340(ctx, base);
loc_8805A378:
	// stw r3,44(r31)
	ctx.current_instruction = 0x8805A378;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8805a390
	if (!ctx.cr6.eq) goto loc_8805A390;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x8805a3e8
	goto loc_8805A3E8;
loc_8805A390:
	// lwz r4,0(r30)
	ctx.current_instruction = 0x8805A390;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8805a3b4
	if (ctx.cr6.eq) goto loc_8805A3B4;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805A39C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.current_instruction = 0x8805A3A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A3B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805A3B0:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8805A3B4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8805a3e8
	if (ctx.cr6.lt) goto loc_8805A3E8;
	// lwz r4,4(r30)
	ctx.current_instruction = 0x8805A3BC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8805a3e0
	if (ctx.cr6.eq) goto loc_8805A3E0;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805A3C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.current_instruction = 0x8805A3D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A3DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805A3DC:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8805A3E0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8805a3fc
	if (!ctx.cr6.lt) goto loc_8805A3FC;
loc_8805A3E8:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805A3E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.current_instruction = 0x8805A3F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A3FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805A3FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805BFE8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805BFE8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805BFE8;
	ctx.current_instruction = 0x8805BFE8;
	// lwz r3,44(r3)
	ctx.current_instruction = 0x8805BFE8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805C0E0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805C0E0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805C0E0;
	ctx.current_instruction = 0x8805C0E0;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805C390) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805C390;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805C390) {
			switch (rex_dispatch_address) {
				case 0x8805C3CC:
				case 0x8805C3E8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805C390;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805C3CC: goto loc_8805C3CC;
		case 0x8805C3E8: goto loc_8805C3E8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805C394;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805C398;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8805C39C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,56(r3)
	ctx.current_instruction = 0x8805C3A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,9296
	ctx.r9.s64 = ctx.r11.s64 + 9296;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r3)
	ctx.current_instruction = 0x8805C3B4;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8805c3cc
	if (ctx.cr6.eq) goto loc_8805C3CC;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// lwz r3,44(r3)
	ctx.current_instruction = 0x8805C3C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// bl 0x88050358
	ctx.lr = 0x8805C3CC;
	sub_88050358(ctx, base);
loc_8805C3CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,44(r31)
	ctx.current_instruction = 0x8805C3D4;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	ctx.current_instruction = 0x8805C3D8;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	ctx.current_instruction = 0x8805C3DC;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	ctx.current_instruction = 0x8805C3E0;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x88062000
	ctx.lr = 0x8805C3E8;
	sub_88062000(ctx, base);
loc_8805C3E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805C3EC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805C3F4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805E048) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805E048);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805E048;
	ctx.current_instruction = 0x8805E048;
	// lwz r11,12(r3)
	ctx.current_instruction = 0x8805E048;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r4,31104(r11)
	ctx.current_instruction = 0x8805E04C;
	REX_STORE_U32(ctx.r11.u32 + 31104, ctx.r4.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805FAB0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805FAB0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805FAB0) {
			switch (rex_dispatch_address) {
				case 0x8805FAB8:
				case 0x8805FAEC:
				case 0x8805FB00:
				case 0x8805FB48:
				case 0x8805FB60:
				case 0x8805FB7C:
				case 0x8805FB98:
				case 0x8805FBB8:
				case 0x8805FBC4:
				case 0x8805FBD8:
				case 0x8805FBEC:
				case 0x8805FBF4:
				case 0x8805FC1C:
				case 0x8805FC30:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805FAB0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805FAB8: goto loc_8805FAB8;
		case 0x8805FAEC: goto loc_8805FAEC;
		case 0x8805FB00: goto loc_8805FB00;
		case 0x8805FB48: goto loc_8805FB48;
		case 0x8805FB60: goto loc_8805FB60;
		case 0x8805FB7C: goto loc_8805FB7C;
		case 0x8805FB98: goto loc_8805FB98;
		case 0x8805FBB8: goto loc_8805FBB8;
		case 0x8805FBC4: goto loc_8805FBC4;
		case 0x8805FBD8: goto loc_8805FBD8;
		case 0x8805FBEC: goto loc_8805FBEC;
		case 0x8805FBF4: goto loc_8805FBF4;
		case 0x8805FC1C: goto loc_8805FC1C;
		case 0x8805FC30: goto loc_8805FC30;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8805FAB8;
	__savegprlr_25(ctx, base);
loc_8805FAB8:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8805FAB8;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// stw r26,568(r3)
	ctx.current_instruction = 0x8805FAC8;
	REX_STORE_U32(ctx.r3.u32 + 568, ctx.r26.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// ori r28,r11,32768
	ctx.r28.u64 = ctx.r11.u64 | 32768;
	// stw r26,572(r30)
	ctx.current_instruction = 0x8805FAD4;
	REX_STORE_U32(ctx.r30.u32 + 572, ctx.r26.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r26,576(r30)
	ctx.current_instruction = 0x8805FADC;
	REX_STORE_U32(ctx.r30.u32 + 576, ctx.r26.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x88050340
	ctx.lr = 0x8805FAEC;
	sub_88050340(ctx, base);
loc_8805FAEC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805fb04
	if (ctx.cr6.eq) goto loc_8805FB04;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8807c410
	ctx.lr = 0x8805FB00;
	sub_8807C410(ctx, base);
loc_8805FB00:
	// b 0x8805fb08
	goto loc_8805FB08;
loc_8805FB04:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8805FB08:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,560(r30)
	ctx.current_instruction = 0x8805FB0C;
	REX_STORE_U32(ctx.r30.u32 + 560, ctx.r3.u32);
	// bne cr6,0x8805fb24
	if (!ctx.cr6.eq) goto loc_8805FB24;
	// li r11,-3
	ctx.r11.s64 = -3;
	// stw r11,0(r25)
	ctx.current_instruction = 0x8805FB18;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8805FB24:
	// lwz r11,0(r25)
	ctx.current_instruction = 0x8805FB24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8805fbd0
	if (!ctx.cr6.eq) goto loc_8805FBD0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x8805fc30
	if (!ctx.cr6.gt) goto loc_8805FC30;
loc_8805FB3C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x88050340
	ctx.lr = 0x8805FB48;
	sub_88050340(ctx, base);
loc_8805FB48:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805fbc8
	if (ctx.cr6.eq) goto loc_8805FBC8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,272(r30)
	ctx.current_instruction = 0x8805FB58;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 272);
	// bl 0x88050340
	ctx.lr = 0x8805FB60;
	sub_88050340(ctx, base);
loc_8805FB60:
	// stw r3,0(r31)
	ctx.current_instruction = 0x8805FB60;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x8805fbe4
	if (ctx.cr6.eq) goto loc_8805FBE4;
	// lwz r11,272(r30)
	ctx.current_instruction = 0x8805FB70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 272);
	// srawi r3,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 4;
	// bl 0x88050340
	ctx.lr = 0x8805FB7C;
	sub_88050340(ctx, base);
loc_8805FB7C:
	// stw r3,4(r31)
	ctx.current_instruction = 0x8805FB7C;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805fbe0
	if (ctx.cr6.eq) goto loc_8805FBE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,560(r30)
	ctx.current_instruction = 0x8805FB8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 560);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8807c0d8
	ctx.lr = 0x8805FB98;
	sub_8807C0D8(ctx, base);
loc_8805FB98:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8805fb3c
	if (ctx.cr6.lt) goto loc_8805FB3C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x8805fc30
	if (!ctx.cr6.gt) goto loc_8805FC30;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x88050340
	ctx.lr = 0x8805FBB8;
	sub_88050340(ctx, base);
loc_8805FBB8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805fbfc
	if (ctx.cr6.eq) goto loc_8805FBFC;
	// bl 0x8807cce0
	ctx.lr = 0x8805FBC4;
	sub_8807CCE0(ctx, base);
loc_8805FBC4:
	// b 0x8805fc00
	goto loc_8805FC00;
loc_8805FBC8:
	// li r11,-3
	ctx.r11.s64 = -3;
	// stw r11,0(r25)
	ctx.current_instruction = 0x8805FBCC;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_8805FBD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8805f8f0
	ctx.lr = 0x8805FBD8;
	sub_8805F8F0(ctx, base);
loc_8805FBD8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8805FBE0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8805FBE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88050358
	ctx.lr = 0x8805FBEC;
	sub_88050358(ctx, base);
loc_8805FBEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8805f8f0
	ctx.lr = 0x8805FBF4;
	sub_8805F8F0(ctx, base);
loc_8805FBF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8805FBFC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8805FC00:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,564(r30)
	ctx.current_instruction = 0x8805FC04;
	REX_STORE_U32(ctx.r30.u32 + 564, ctx.r3.u32);
	// beq cr6,0x8805fbd0
	if (ctx.cr6.eq) goto loc_8805FBD0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,28(r30)
	ctx.current_instruction = 0x8805FC10;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r5,32(r30)
	ctx.current_instruction = 0x8805FC14;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x8807d7f0
	ctx.lr = 0x8805FC1C;
	sub_8807D7F0(ctx, base);
loc_8805FC1C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805fbd0
	if (!ctx.cr6.eq) goto loc_8805FBD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,564(r30)
	ctx.current_instruction = 0x8805FC28;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 564);
	// bl 0x8807d258
	ctx.lr = 0x8805FC30;
	sub_8807D258(ctx, base);
loc_8805FC30:
	// stw r26,0(r25)
	ctx.current_instruction = 0x8805FC30;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88065158) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88065158;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88065158) {
			switch (rex_dispatch_address) {
				case 0x88065160:
				case 0x880651C8:
				case 0x880651F4:
				case 0x8806521C:
				case 0x88065248:
				case 0x880652A8:
				case 0x880652E8:
				case 0x88065348:
				case 0x88065384:
				case 0x8806538C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88065158;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88065160: goto loc_88065160;
		case 0x880651C8: goto loc_880651C8;
		case 0x880651F4: goto loc_880651F4;
		case 0x8806521C: goto loc_8806521C;
		case 0x88065248: goto loc_88065248;
		case 0x880652A8: goto loc_880652A8;
		case 0x880652E8: goto loc_880652E8;
		case 0x88065348: goto loc_88065348;
		case 0x88065384: goto loc_88065384;
		case 0x8806538C: goto loc_8806538C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x88065160;
	__savegprlr_23(ctx, base);
loc_88065160:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x88065160;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r28,88(r1)
	ctx.current_instruction = 0x88065170;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r28,84(r1)
	ctx.current_instruction = 0x88065178;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,100(r1)
	ctx.current_instruction = 0x88065180;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r28,96(r1)
	ctx.current_instruction = 0x88065184;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// sth r28,80(r1)
	ctx.current_instruction = 0x88065188;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// stw r28,108(r1)
	ctx.current_instruction = 0x8806518C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r28,92(r1)
	ctx.current_instruction = 0x88065190;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,104(r1)
	ctx.current_instruction = 0x88065194;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// beq cr6,0x88065394
	if (ctx.cr6.eq) goto loc_88065394;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88065394
	if (ctx.cr6.eq) goto loc_88065394;
	// lwz r11,528(r3)
	ctx.current_instruction = 0x880651A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88065394
	if (ctx.cr6.eq) goto loc_88065394;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x880651B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x880651B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x88065394
	if (ctx.cr6.gt) goto loc_88065394;
	// std r28,0(r5)
	ctx.current_instruction = 0x880651C0;
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r28.u64);
	// bl 0x88062f38
	ctx.lr = 0x880651C8;
	sub_88062F38(ctx, base);
loc_880651C8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88065368
	if (ctx.cr6.lt) goto loc_88065368;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// li r23,4096
	ctx.r23.s64 = 4096;
	// ori r25,r11,168
	ctx.r25.u64 = ctx.r11.u64 | 168;
loc_880651E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88064fe8
	ctx.lr = 0x880651F4;
	sub_88064FE8(ctx, base);
loc_880651F4:
	// lwz r11,96(r1)
	ctx.current_instruction = 0x880651F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88065354
	if (ctx.cr6.eq) goto loc_88065354;
	// lwz r11,4(r30)
	ctx.current_instruction = 0x88065204;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r10,100(r1)
	ctx.current_instruction = 0x8806520C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,124(r11)
	ctx.current_instruction = 0x88065214;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb730
	ctx.lr = 0x8806521C;
	sub_880CB730(ctx, base);
loc_8806521C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88065368
	if (ctx.cr6.lt) goto loc_88065368;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x88065228;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x8806522C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88065284
	if (!ctx.cr6.eq) goto loc_88065284;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88063590
	ctx.lr = 0x88065248;
	sub_88063590(ctx, base);
loc_88065248:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88065368
	if (ctx.cr6.lt) goto loc_88065368;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x88065254;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r9,80(r1)
	ctx.current_instruction = 0x88065258;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r8,8(r11)
	ctx.current_instruction = 0x8806525C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,8(r8)
	ctx.current_instruction = 0x88065260;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,12(r8)
	ctx.current_instruction = 0x88065264;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// mullw r5,r7,r9
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r5,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// rlwinm r3,r4,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r11,r3,r6
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x88065294
	goto loc_88065294;
loc_88065284:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r8,r23
	ctx.r29.u64 = ctx.r8.u64 & ctx.r23.u64;
loc_88065294:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r30)
	ctx.current_instruction = 0x88065298;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 608);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x880cb2c0
	ctx.lr = 0x880652A8;
	sub_880CB2C0(ctx, base);
loc_880652A8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88065368
	if (ctx.cr6.lt) goto loc_88065368;
loc_880652B4:
	// lwz r3,536(r30)
	ctx.current_instruction = 0x880652B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880652c8
	if (!ctx.cr6.eq) goto loc_880652C8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x88065300
	goto loc_88065300;
loc_880652C8:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,84(r1)
	ctx.current_instruction = 0x880652CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x880cbc90
	ctx.lr = 0x880652E8;
	sub_880CBC90(ctx, base);
loc_880652E8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88065300
	if (ctx.cr6.lt) goto loc_88065300;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x880652F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88065300
	if (!ctx.cr6.eq) goto loc_88065300;
	// stw r28,536(r30)
	ctx.current_instruction = 0x880652FC;
	REX_STORE_U32(ctx.r30.u32 + 536, ctx.r28.u32);
loc_88065300:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88065368
	if (ctx.cr6.lt) goto loc_88065368;
	// ld r11,112(r1)
	ctx.current_instruction = 0x8806530C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// cmpd cr6,r11,r27
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r27.s64, ctx.xer);
	// blt cr6,0x8806532c
	if (ctx.cr6.lt) goto loc_8806532C;
	// lwz r10,556(r30)
	ctx.current_instruction = 0x88065318;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 556);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88065328
	if (ctx.cr6.eq) goto loc_88065328;
	// std r11,0(r26)
	ctx.current_instruction = 0x88065324;
	REX_STORE_U64(ctx.r26.u32 + 0, ctx.r11.u64);
loc_88065328:
	// stw r28,556(r30)
	ctx.current_instruction = 0x88065328;
	REX_STORE_U32(ctx.r30.u32 + 556, ctx.r28.u32);
loc_8806532C:
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8806532C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880652b4
	if (!ctx.cr6.eq) goto loc_880652B4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r30)
	ctx.current_instruction = 0x8806533C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x880cb318
	ctx.lr = 0x88065348;
	sub_880CB318(ctx, base);
loc_88065348:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88065368
	if (ctx.cr6.lt) goto loc_88065368;
loc_88065354:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x88065368
	if (!ctx.cr6.eq) goto loc_88065368;
	// lwz r11,556(r30)
	ctx.current_instruction = 0x8806535C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880651e0
	if (!ctx.cr6.eq) goto loc_880651E0;
loc_88065368:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88065368;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88065384
	if (ctx.cr6.eq) goto loc_88065384;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r30)
	ctx.current_instruction = 0x88065378;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x880cb318
	ctx.lr = 0x88065384;
	sub_880CB318(ctx, base);
loc_88065384:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880638b8
	ctx.lr = 0x8806538C;
	sub_880638B8(ctx, base);
loc_8806538C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_88065394:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88069540) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88069540);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88069540;
	ctx.current_instruction = 0x88069540;
	// lwz r11,216(r3)
	ctx.current_instruction = 0x88069540;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// stw r4,216(r3)
	ctx.current_instruction = 0x88069544;
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r4.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,64(r3)
	ctx.current_instruction = 0x88069550;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r3,80(r3)
	ctx.current_instruction = 0x8806955C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8806C010) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806C010;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806C010) {
			switch (rex_dispatch_address) {
				case 0x8806C028:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806C010;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806C028: goto loc_8806C028;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806C014;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8806C018;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8806C01C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88061fb8
	ctx.lr = 0x8806C028;
	sub_88061FB8(ctx, base);
loc_8806C028:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,11232
	ctx.r9.s64 = ctx.r10.s64 + 11232;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,44(r31)
	ctx.current_instruction = 0x8806C038;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r9,0(r31)
	ctx.current_instruction = 0x8806C03C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	ctx.current_instruction = 0x8806C044;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	ctx.current_instruction = 0x8806C048;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// std r11,56(r31)
	ctx.current_instruction = 0x8806C04C;
	REX_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// std r11,64(r31)
	ctx.current_instruction = 0x8806C050;
	REX_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// stw r8,92(r31)
	ctx.current_instruction = 0x8806C054;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// std r11,72(r31)
	ctx.current_instruction = 0x8806C058;
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// std r11,80(r31)
	ctx.current_instruction = 0x8806C05C;
	REX_STORE_U64(ctx.r31.u32 + 80, ctx.r11.u64);
	// stw r11,88(r31)
	ctx.current_instruction = 0x8806C060;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8806C068;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8806C070;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806D430) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806D430;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806D430) {
			switch (rex_dispatch_address) {
				case 0x8806D438:
				case 0x8806D454:
				case 0x8806D490:
				case 0x8806D4A0:
				case 0x8806D4B0:
				case 0x8806D510:
				case 0x8806D520:
				case 0x8806D530:
				case 0x8806D540:
				case 0x8806D550:
				case 0x8806D560:
				case 0x8806D570:
				case 0x8806D580:
				case 0x8806D590:
				case 0x8806D5A0:
				case 0x8806D5B0:
				case 0x8806D5C0:
				case 0x8806D5D0:
				case 0x8806D5E0:
				case 0x8806D5F4:
				case 0x8806D610:
				case 0x8806D620:
				case 0x8806D630:
				case 0x8806D640:
				case 0x8806D65C:
				case 0x8806D674:
				case 0x8806D684:
				case 0x8806D694:
				case 0x8806D69C:
				case 0x8806D6C0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806D430;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806D438: goto loc_8806D438;
		case 0x8806D454: goto loc_8806D454;
		case 0x8806D490: goto loc_8806D490;
		case 0x8806D4A0: goto loc_8806D4A0;
		case 0x8806D4B0: goto loc_8806D4B0;
		case 0x8806D510: goto loc_8806D510;
		case 0x8806D520: goto loc_8806D520;
		case 0x8806D530: goto loc_8806D530;
		case 0x8806D540: goto loc_8806D540;
		case 0x8806D550: goto loc_8806D550;
		case 0x8806D560: goto loc_8806D560;
		case 0x8806D570: goto loc_8806D570;
		case 0x8806D580: goto loc_8806D580;
		case 0x8806D590: goto loc_8806D590;
		case 0x8806D5A0: goto loc_8806D5A0;
		case 0x8806D5B0: goto loc_8806D5B0;
		case 0x8806D5C0: goto loc_8806D5C0;
		case 0x8806D5D0: goto loc_8806D5D0;
		case 0x8806D5E0: goto loc_8806D5E0;
		case 0x8806D5F4: goto loc_8806D5F4;
		case 0x8806D610: goto loc_8806D610;
		case 0x8806D620: goto loc_8806D620;
		case 0x8806D630: goto loc_8806D630;
		case 0x8806D640: goto loc_8806D640;
		case 0x8806D65C: goto loc_8806D65C;
		case 0x8806D674: goto loc_8806D674;
		case 0x8806D684: goto loc_8806D684;
		case 0x8806D694: goto loc_8806D694;
		case 0x8806D69C: goto loc_8806D69C;
		case 0x8806D6C0: goto loc_8806D6C0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8806D438;
	__savegprlr_29(ctx, base);
loc_8806D438:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8806D438;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,7868(r3)
	ctx.current_instruction = 0x8806D44C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// bl 0x880e68e0
	ctx.lr = 0x8806D454;
	sub_880E68E0(ctx, base);
loc_8806D454:
	// lwz r11,2184(r31)
	ctx.current_instruction = 0x8806D454;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806d468
	if (!ctx.cr6.eq) goto loc_8806D468;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8806d484
	goto loc_8806D484;
loc_8806D468:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8806d478
	if (!ctx.cr6.eq) goto loc_8806D478;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8806d484
	goto loc_8806D484;
loc_8806D478:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8806d490
	if (!ctx.cr6.eq) goto loc_8806D490;
	// li r4,2
	ctx.r4.s64 = 2;
loc_8806D484:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D488;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806D490;
	sub_880E6960(ctx, base);
loc_8806D490:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D494;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x8806D4A0;
	sub_880E6960(ctx, base);
loc_8806D4A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D4A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r4,2824(r31)
	ctx.current_instruction = 0x8806D4A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2824);
	// bl 0x880e6960
	ctx.lr = 0x8806D4B0;
	sub_880E6960(ctx, base);
loc_8806D4B0:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,7688(r31)
	ctx.current_instruction = 0x8806D4B4;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lfd f13,12016(r11)
	ctx.current_instruction = 0x8806D4B8;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12016);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8806d4cc
	if (ctx.cr6.lt) goto loc_8806D4CC;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x8806d4d8
	goto loc_8806D4D8;
loc_8806D4CC:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	ctx.current_instruction = 0x8806D4D0;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8806D4D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8806D4D8:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f0,7888(r31)
	ctx.current_instruction = 0x8806D4DC;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// lfd f13,12008(r10)
	ctx.current_instruction = 0x8806D4E0;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12008);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8806d4f4
	if (ctx.cr6.lt) goto loc_8806D4F4;
	// li r30,2047
	ctx.r30.s64 = 2047;
	// b 0x8806d500
	goto loc_8806D500;
loc_8806D4F4:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	ctx.current_instruction = 0x8806D4F8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.current_instruction = 0x8806D4FC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8806D500:
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D504;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// bl 0x880e6960
	ctx.lr = 0x8806D510;
	sub_880E6960(ctx, base);
loc_8806D510:
	// li r5,5
	ctx.r5.s64 = 5;
	// srawi r4,r30,6
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r30.s32 >> 6;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D518;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806D520;
	sub_880E6960(ctx, base);
loc_8806D520:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1604(r31)
	ctx.current_instruction = 0x8806D524;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1604);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D528;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806D530;
	sub_880E6960(ctx, base);
loc_8806D530:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1580(r31)
	ctx.current_instruction = 0x8806D534;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1580);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D538;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806D540;
	sub_880E6960(ctx, base);
loc_8806D540:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1612(r31)
	ctx.current_instruction = 0x8806D544;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1612);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D548;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806D550;
	sub_880E6960(ctx, base);
loc_8806D550:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1576(r31)
	ctx.current_instruction = 0x8806D554;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1576);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D558;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806D560;
	sub_880E6960(ctx, base);
loc_8806D560:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,788(r31)
	ctx.current_instruction = 0x8806D564;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 788);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D568;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806D570;
	sub_880E6960(ctx, base);
loc_8806D570:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2564(r31)
	ctx.current_instruction = 0x8806D574;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2564);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D578;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806D580;
	sub_880E6960(ctx, base);
loc_8806D580:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,2424(r31)
	ctx.current_instruction = 0x8806D584;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2424);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D588;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806D590;
	sub_880E6960(ctx, base);
loc_8806D590:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1608(r31)
	ctx.current_instruction = 0x8806D594;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D598;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806D5A0;
	sub_880E6960(ctx, base);
loc_8806D5A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1540(r31)
	ctx.current_instruction = 0x8806D5A4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1540);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D5A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806D5B0;
	sub_880E6960(ctx, base);
loc_8806D5B0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2336(r31)
	ctx.current_instruction = 0x8806D5B4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2336);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D5B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806D5C0;
	sub_880E6960(ctx, base);
loc_8806D5C0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2260(r31)
	ctx.current_instruction = 0x8806D5C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2260);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D5C8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806D5D0;
	sub_880E6960(ctx, base);
loc_8806D5D0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2812(r31)
	ctx.current_instruction = 0x8806D5D4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2812);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D5D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806D5E0;
	sub_880E6960(ctx, base);
loc_8806D5E0:
	// lwz r4,2124(r31)
	ctx.current_instruction = 0x8806D5E0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D5E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// stw r4,2120(r31)
	ctx.current_instruction = 0x8806D5EC;
	REX_STORE_U32(ctx.r31.u32 + 2120, ctx.r4.u32);
	// bl 0x880e6960
	ctx.lr = 0x8806D5F4;
	sub_880E6960(ctx, base);
loc_8806D5F4:
	// lwz r11,1436(r31)
	ctx.current_instruction = 0x8806D5F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1436);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D5F8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806d618
	if (ctx.cr6.eq) goto loc_8806D618;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x8806D610;
	sub_880E6960(ctx, base);
loc_8806D610:
	// lwz r4,1428(r31)
	ctx.current_instruction = 0x8806D610;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1428);
	// b 0x8806d624
	goto loc_8806D624;
loc_8806D618:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x8806D620;
	sub_880E6960(ctx, base);
loc_8806D620:
	// lwz r4,1440(r31)
	ctx.current_instruction = 0x8806D620;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1440);
loc_8806D624:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D628;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806D630;
	sub_880E6960(ctx, base);
loc_8806D630:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1444(r31)
	ctx.current_instruction = 0x8806D634;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1444);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D638;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806D640;
	sub_880E6960(ctx, base);
loc_8806D640:
	// lwz r11,2824(r31)
	ctx.current_instruction = 0x8806D640;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806d664
	if (ctx.cr6.eq) goto loc_8806D664;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88077788
	ctx.lr = 0x8806D65C;
	sub_88077788(ctx, base);
loc_8806D65C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_8806D664:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D668;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x8806D674;
	sub_880E6960(ctx, base);
loc_8806D674:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2176(r31)
	ctx.current_instruction = 0x8806D678;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2176);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D67C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806D684;
	sub_880E6960(ctx, base);
loc_8806D684:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D688;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x8806D694;
	sub_880E6960(ctx, base);
loc_8806D694:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D694;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6b40
	ctx.lr = 0x8806D69C;
	sub_880E6B40(ctx, base);
loc_8806D69C:
	// lwz r11,7868(r31)
	ctx.current_instruction = 0x8806D69C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x8806D6A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// subfic r9,r10,39
	ctx.xer.ca = ctx.r10.u32 <= 39;
	ctx.r9.u64 = static_cast<uint64_t>(39) - ctx.r10.u64;
	// rlwinm r10,r9,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r11,4(r11)
	ctx.current_instruction = 0x8806D6AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r29)
	ctx.current_instruction = 0x8806D6B4;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8806D6B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6900
	ctx.lr = 0x8806D6C0;
	sub_880E6900(ctx, base);
loc_8806D6C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880785D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880785D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880785D8) {
			switch (rex_dispatch_address) {
				case 0x880785E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880785D8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x880785E0: goto loc_880785E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x880785E0;
	__savegprlr_16(ctx, base);
loc_880785E0:
	// lwz r10,28044(r3)
	ctx.current_instruction = 0x880785E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28044);
	// li r21,0
	ctx.r21.s64 = 0;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// lwz r11,7764(r3)
	ctx.current_instruction = 0x880785EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r21,-156(r1)
	ctx.current_instruction = 0x880785F4;
	REX_STORE_U32(ctx.r1.u32 + -156, ctx.r21.u32);
	// stw r9,-160(r1)
	ctx.current_instruction = 0x880785F8;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r9.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// stw r21,-152(r1)
	ctx.current_instruction = 0x88078600;
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r21.u32);
	// bne cr6,0x88078648
	if (!ctx.cr6.eq) goto loc_88078648;
	// lwz r10,31552(r3)
	ctx.current_instruction = 0x88078608;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// addi r9,r1,-160
	ctx.r9.s64 = ctx.r1.s64 + -160;
	// lwz r8,24(r10)
	ctx.current_instruction = 0x88078610;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r7,0(r8)
	ctx.current_instruction = 0x88078614;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,12(r8)
	ctx.current_instruction = 0x88078618;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lbz r5,0(r7)
	ctx.current_instruction = 0x8807861C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lwz r10,0(r6)
	ctx.current_instruction = 0x88078620;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rotlwi r4,r5,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r9,r4,r9
	ctx.current_instruction = 0x88078628;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// ble cr6,0x88078640
	if (!ctx.cr6.gt) goto loc_88078640;
	// stw r22,148(r11)
	ctx.current_instruction = 0x88078638;
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r22.u32);
	// b 0x8807864c
	goto loc_8807864C;
loc_88078640:
	// stw r21,148(r11)
	ctx.current_instruction = 0x88078640;
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r21.u32);
	// b 0x8807864c
	goto loc_8807864C;
loc_88078648:
	// stw r10,148(r11)
	ctx.current_instruction = 0x88078648;
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
loc_8807864C:
	// lwz r10,720(r3)
	ctx.current_instruction = 0x8807864C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r7,r11,276
	ctx.r7.s64 = ctx.r11.s64 + 276;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8807874c
	if (!ctx.cr6.gt) goto loc_8807874C;
	// li r10,4
	ctx.r10.s64 = 4;
loc_88078668:
	// lwz r9,28044(r3)
	ctx.current_instruction = 0x88078668;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28044);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8807872c
	if (!ctx.cr6.eq) goto loc_8807872C;
	// lwz r9,31552(r3)
	ctx.current_instruction = 0x88078674;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// lwz r6,24(r9)
	ctx.current_instruction = 0x8807867C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r5,0(r6)
	ctx.current_instruction = 0x88078680;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r4,12(r6)
	ctx.current_instruction = 0x88078684;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// lbzx r6,r5,r11
	ctx.current_instruction = 0x88078688;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r9,r4,r10
	ctx.current_instruction = 0x8807868C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// rotlwi r5,r6,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lwzx r8,r5,r8
	ctx.current_instruction = 0x88078694;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// ble cr6,0x880786ac
	if (!ctx.cr6.gt) goto loc_880786AC;
	// stw r22,148(r7)
	ctx.current_instruction = 0x880786A4;
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r22.u32);
	// b 0x88078730
	goto loc_88078730;
loc_880786AC:
	// lwz r9,31552(r3)
	ctx.current_instruction = 0x880786AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// addi r6,r1,-160
	ctx.r6.s64 = ctx.r1.s64 + -160;
	// lwz r5,24(r9)
	ctx.current_instruction = 0x880786B4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r9,0(r5)
	ctx.current_instruction = 0x880786B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,12(r5)
	ctx.current_instruction = 0x880786BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r8,-1(r4)
	ctx.current_instruction = 0x880786C8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// lwz r9,-4(r9)
	ctx.current_instruction = 0x880786CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// rotlwi r5,r8,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r8,r5,r6
	ctx.current_instruction = 0x880786D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// ble cr6,0x88078724
	if (!ctx.cr6.gt) goto loc_88078724;
	// lwz r9,31552(r3)
	ctx.current_instruction = 0x880786E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// addi r6,r1,-160
	ctx.r6.s64 = ctx.r1.s64 + -160;
	// lwz r5,24(r9)
	ctx.current_instruction = 0x880786EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r9,0(r5)
	ctx.current_instruction = 0x880786F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,12(r5)
	ctx.current_instruction = 0x880786F4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r8,1(r4)
	ctx.current_instruction = 0x88078700;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// lwz r9,4(r9)
	ctx.current_instruction = 0x88078704;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rotlwi r5,r8,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r8,r5,r6
	ctx.current_instruction = 0x8807870C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// ble cr6,0x88078724
	if (!ctx.cr6.gt) goto loc_88078724;
	// stw r22,148(r7)
	ctx.current_instruction = 0x8807871C;
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r22.u32);
	// b 0x88078730
	goto loc_88078730;
loc_88078724:
	// stw r21,148(r7)
	ctx.current_instruction = 0x88078724;
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r21.u32);
	// b 0x88078730
	goto loc_88078730;
loc_8807872C:
	// stw r9,148(r7)
	ctx.current_instruction = 0x8807872C;
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r9.u32);
loc_88078730:
	// lwz r9,720(r3)
	ctx.current_instruction = 0x88078730;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,276
	ctx.r7.s64 = ctx.r7.s64 + 276;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88078668
	if (ctx.cr6.lt) goto loc_88078668;
loc_8807874C:
	// lwz r11,28044(r3)
	ctx.current_instruction = 0x8807874C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28044);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880787a8
	if (!ctx.cr6.eq) goto loc_880787A8;
	// lwz r10,31552(r3)
	ctx.current_instruction = 0x88078758;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// addi r6,r1,-160
	ctx.r6.s64 = ctx.r1.s64 + -160;
	// lwz r11,720(r3)
	ctx.current_instruction = 0x88078760;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,24(r10)
	ctx.current_instruction = 0x88078768;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,0(r5)
	ctx.current_instruction = 0x8807876C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,12(r5)
	ctx.current_instruction = 0x88078770;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r9,-1(r4)
	ctx.current_instruction = 0x8807877C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// lwz r10,-4(r11)
	ctx.current_instruction = 0x88078780;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r11,r8,r6
	ctx.current_instruction = 0x88078788;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// ble cr6,0x880787a0
	if (!ctx.cr6.gt) goto loc_880787A0;
	// stw r22,148(r7)
	ctx.current_instruction = 0x88078798;
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r22.u32);
	// b 0x880787ac
	goto loc_880787AC;
loc_880787A0:
	// stw r21,148(r7)
	ctx.current_instruction = 0x880787A0;
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r21.u32);
	// b 0x880787ac
	goto loc_880787AC;
loc_880787A8:
	// stw r11,148(r7)
	ctx.current_instruction = 0x880787A8;
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r11.u32);
loc_880787AC:
	// lwz r10,724(r3)
	ctx.current_instruction = 0x880787AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// addi r11,r7,276
	ctx.r11.s64 = ctx.r7.s64 + 276;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x88078e64
	if (!ctx.cr6.gt) goto loc_88078E64;
loc_880787C4:
	// lwz r10,28044(r3)
	ctx.current_instruction = 0x880787C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28044);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8807881c
	if (!ctx.cr6.eq) goto loc_8807881C;
	// lwz r10,31552(r3)
	ctx.current_instruction = 0x880787D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// addi r7,r1,-160
	ctx.r7.s64 = ctx.r1.s64 + -160;
	// lwz r6,720(r3)
	ctx.current_instruction = 0x880787D8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r5,r9,r6
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// lwz r4,24(r10)
	ctx.current_instruction = 0x880787E0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,0(r4)
	ctx.current_instruction = 0x880787E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,12(r4)
	ctx.current_instruction = 0x880787E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r5,r5,r10
	ctx.current_instruction = 0x880787F0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// rotlwi r4,r5,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r8,r6,r8
	ctx.current_instruction = 0x880787F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwzx r10,r4,r7
	ctx.current_instruction = 0x880787FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// ble cr6,0x88078814
	if (!ctx.cr6.gt) goto loc_88078814;
	// stw r22,148(r11)
	ctx.current_instruction = 0x8807880C;
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r22.u32);
	// b 0x88078820
	goto loc_88078820;
loc_88078814:
	// stw r21,148(r11)
	ctx.current_instruction = 0x88078814;
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r21.u32);
	// b 0x88078820
	goto loc_88078820;
loc_8807881C:
	// stw r10,148(r11)
	ctx.current_instruction = 0x8807881C;
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
loc_88078820:
	// lwz r10,720(r3)
	ctx.current_instruction = 0x88078820;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r23,r11,276
	ctx.r23.s64 = ctx.r11.s64 + 276;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x88078ddc
	if (!ctx.cr6.gt) goto loc_88078DDC;
loc_88078838:
	// lwz r10,28044(r3)
	ctx.current_instruction = 0x88078838;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28044);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88078dc0
	if (!ctx.cr6.eq) goto loc_88078DC0;
	// lwz r10,27988(r3)
	ctx.current_instruction = 0x88078844;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 27988);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88078bec
	if (ctx.cr6.eq) goto loc_88078BEC;
	// lwz r10,31544(r3)
	ctx.current_instruction = 0x88078850;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88078bec
	if (ctx.cr6.eq) goto loc_88078BEC;
	// lwz r10,31552(r3)
	ctx.current_instruction = 0x8807885C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// addi r7,r1,-160
	ctx.r7.s64 = ctx.r1.s64 + -160;
	// lwz r6,720(r3)
	ctx.current_instruction = 0x88078864;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r5,r9,r6
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// lwz r4,24(r10)
	ctx.current_instruction = 0x8807886C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r8,0(r4)
	ctx.current_instruction = 0x88078870;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,12(r4)
	ctx.current_instruction = 0x88078874;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r8,r5,r11
	ctx.current_instruction = 0x88078888;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// rotlwi r5,r8,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r8,r10,r6
	ctx.current_instruction = 0x88078890;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r10,r5,r7
	ctx.current_instruction = 0x88078894;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bgt cr6,0x88078db0
	if (ctx.cr6.gt) goto loc_88078DB0;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,31552(r3)
	ctx.current_instruction = 0x880788A8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// lwz r6,720(r3)
	ctx.current_instruction = 0x880788AC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r4,r1,-160
	ctx.r4.s64 = ctx.r1.s64 + -160;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// mullw r8,r5,r6
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lwz r6,24(r7)
	ctx.current_instruction = 0x880788BC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r7,0(r6)
	ctx.current_instruction = 0x880788C0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r6,12(r6)
	ctx.current_instruction = 0x880788C4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r7,r7,r11
	ctx.current_instruction = 0x880788D4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// rotlwi r31,r7,2
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r7,r8,r6
	ctx.current_instruction = 0x880788DC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwzx r8,r31,r4
	ctx.current_instruction = 0x880788E0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bgt cr6,0x88078db0
	if (ctx.cr6.gt) goto loc_88078DB0;
	// lwz r8,31552(r3)
	ctx.current_instruction = 0x880788F0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
	// lwz r7,720(r3)
	ctx.current_instruction = 0x880788F8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r25,r1,-160
	ctx.r25.s64 = ctx.r1.s64 + -160;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rotlwi r27,r31,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// lwz r8,24(r8)
	ctx.current_instruction = 0x8807890C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// mullw r4,r9,r7
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwz r29,24(r31)
	ctx.current_instruction = 0x88078914;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r19,24(r31)
	ctx.current_instruction = 0x88078918;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,0(r8)
	ctx.current_instruction = 0x8807891C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r30,12(r8)
	ctx.current_instruction = 0x88078920;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r31,0(r29)
	ctx.current_instruction = 0x88078924;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r28,12(r29)
	ctx.current_instruction = 0x88078928;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r29,0(r19)
	ctx.current_instruction = 0x8807892C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,24(r27)
	ctx.current_instruction = 0x88078934;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// lwz r19,12(r19)
	ctx.current_instruction = 0x8807893C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + 12);
	// add r16,r8,r11
	ctx.r16.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mullw r7,r5,r7
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// lwz r27,0(r4)
	ctx.current_instruction = 0x88078948;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r17,12(r4)
	ctx.current_instruction = 0x8807894C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r6,r16,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r30,r7,r11
	ctx.r30.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r31,-1(r4)
	ctx.current_instruction = 0x8807896C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// mullw r7,r26,r20
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r20.s32);
	// lbz r26,-1(r8)
	ctx.current_instruction = 0x88078974;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
	// lwz r4,-4(r6)
	ctx.current_instruction = 0x88078978;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + -4);
	// rotlwi r6,r31,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r7,r29
	ctx.r31.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r30,r8,r28
	ctx.r30.u64 = ctx.r8.u64 + ctx.r28.u64;
	// rotlwi r29,r26,2
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r26.u32, 2);
	// lwzx r6,r6,r25
	ctx.current_instruction = 0x88078990;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// addi r24,r1,-160
	ctx.r24.s64 = ctx.r1.s64 + -160;
	// add r28,r7,r11
	ctx.r28.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r7,r4,r6
	ctx.r7.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lbzx r31,r31,r11
	ctx.current_instruction = 0x880789A0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r4,-4(r30)
	ctx.current_instruction = 0x880789A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subfc r28,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r28.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwzx r6,r29,r24
	ctx.current_instruction = 0x880789B4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r24.u32);
	// eqv r8,r7,r8
	ctx.r8.u64 = ~(ctx.r7.u64 ^ ctx.r8.u64);
	// rotlwi r29,r31,2
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// addi r26,r1,-160
	ctx.r26.s64 = ctx.r1.s64 + -160;
	// rlwinm r28,r8,1,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// lwzx r31,r30,r19
	ctx.current_instruction = 0x880789C8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r19.u32);
	// add r8,r4,r6
	ctx.r8.u64 = ctx.r4.u64 + ctx.r6.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addze r4,r28
	temp.s64 = ctx.r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r28.u32;
	ctx.r4.s64 = temp.s64;
	// subfc r30,r8,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r8.u32;
	ctx.r30.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lwzx r6,r29,r26
	ctx.current_instruction = 0x880789DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// eqv r7,r8,r7
	ctx.r7.u64 = ~(ctx.r8.u64 ^ ctx.r7.u64);
	// add r8,r31,r6
	ctx.r8.u64 = ctx.r31.u64 + ctx.r6.u64;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addi r31,r10,-2
	ctx.r31.s64 = ctx.r10.s64 + -2;
	// rotlwi r18,r20,0
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// addze r30,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r30.s64 = temp.s64;
	// mullw r6,r31,r18
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r18.s32);
	// subfc r29,r8,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r8.u32;
	ctx.r29.u64 = ctx.r7.u64 - ctx.r8.u64;
	// eqv r8,r8,r7
	ctx.r8.u64 = ~(ctx.r8.u64 ^ ctx.r7.u64);
	// add r7,r6,r27
	ctx.r7.u64 = ctx.r6.u64 + ctx.r27.u64;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r31,r30,31
	ctx.r31.u64 = ctx.r30.u32 & 0x1;
	// lbzx r7,r7,r11
	ctx.current_instruction = 0x88078A1C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// clrlwi r30,r8,31
	ctx.r30.u64 = ctx.r8.u32 & 0x1;
	// lwz r8,31552(r3)
	ctx.current_instruction = 0x88078A24;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// clrlwi r4,r4,31
	ctx.r4.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// rotlwi r29,r20,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// lwzx r24,r6,r17
	ctx.current_instruction = 0x88078A38;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r17.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r19,720(r3)
	ctx.current_instruction = 0x88078A40;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r26,r9,r29
	ctx.r26.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// lwz r27,24(r27)
	ctx.current_instruction = 0x88078A48;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r8,24(r8)
	ctx.current_instruction = 0x88078A50;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// addi r28,r1,-160
	ctx.r28.s64 = ctx.r1.s64 + -160;
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// addi r20,r10,2
	ctx.r20.s64 = ctx.r10.s64 + 2;
	// lwz r6,0(r8)
	ctx.current_instruction = 0x88078A60;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwzx r25,r7,r28
	ctx.current_instruction = 0x88078A64;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// mullw r7,r5,r19
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r19.s32);
	// lwz r28,12(r8)
	ctx.current_instruction = 0x88078A6C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r18,24(r29)
	ctx.current_instruction = 0x88078A70;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r29,0(r27)
	ctx.current_instruction = 0x88078A74;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r27,12(r27)
	ctx.current_instruction = 0x88078A78;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r19,12(r18)
	ctx.current_instruction = 0x88078A7C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r18.u32 + 12);
	// rlwinm r8,r26,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r26,0(r18)
	ctx.current_instruction = 0x88078A84;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r18,r6,r11
	ctx.r18.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r8,r29,r7
	ctx.r8.u64 = ctx.r29.u64 + ctx.r7.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// lbz r8,1(r18)
	ctx.current_instruction = 0x88078AA4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r18.u32 + 1);
	// add r28,r7,r11
	ctx.r28.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r29,r1,-160
	ctx.r29.s64 = ctx.r1.s64 + -160;
	// rotlwi r18,r8,2
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r8,r24,r25
	ctx.r8.u64 = ctx.r24.u64 + ctx.r25.u64;
	// lbz r25,1(r5)
	ctx.current_instruction = 0x88078AB8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// lwz r5,4(r6)
	ctx.current_instruction = 0x88078ABC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mullw r6,r20,r17
	ctx.r6.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r17.s32);
	// lwzx r29,r18,r29
	ctx.current_instruction = 0x88078AC4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r29.u32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,-1
	ctx.r7.s64 = -1;
	// add r26,r26,r6
	ctx.r26.u64 = ctx.r26.u64 + ctx.r6.u64;
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// subfc r24,r8,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r8.u32;
	ctx.r24.u64 = ctx.r7.u64 - ctx.r8.u64;
	// rotlwi r27,r25,2
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r25.u32, 2);
	// eqv r7,r8,r7
	ctx.r7.u64 = ~(ctx.r8.u64 ^ ctx.r7.u64);
	// addi r25,r1,-160
	ctx.r25.s64 = ctx.r1.s64 + -160;
	// add r8,r5,r29
	ctx.r8.u64 = ctx.r5.u64 + ctx.r29.u64;
	// lbzx r29,r26,r11
	ctx.current_instruction = 0x88078AEC;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// rlwinm r24,r7,1,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// lwz r5,4(r28)
	ctx.current_instruction = 0x88078AF4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// li r7,-1
	ctx.r7.s64 = -1;
	// add r26,r6,r11
	ctx.r26.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwzx r6,r27,r25
	ctx.current_instruction = 0x88078B00;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r25.u32);
	// addze r28,r24
	temp.s64 = ctx.r24.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r24.u32;
	ctx.r28.s64 = temp.s64;
	// subfc r27,r8,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r8.u32;
	ctx.r27.u64 = ctx.r7.u64 - ctx.r8.u64;
	// eqv r8,r8,r7
	ctx.r8.u64 = ~(ctx.r8.u64 ^ ctx.r7.u64);
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r29,r29,2
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// addi r25,r1,-160
	ctx.r25.s64 = ctx.r1.s64 + -160;
	// rlwinm r27,r8,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwzx r6,r26,r19
	ctx.current_instruction = 0x88078B24;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r19.u32);
	// addze r27,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r27.s64 = temp.s64;
	// subfc r26,r8,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r8.u32;
	ctx.r26.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lwzx r5,r29,r25
	ctx.current_instruction = 0x88078B30;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r25.u32);
	// eqv r7,r8,r7
	ctx.r7.u64 = ~(ctx.r8.u64 ^ ctx.r7.u64);
	// add r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// subfc r6,r8,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r8.u32;
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// eqv r8,r8,r7
	ctx.r8.u64 = ~(ctx.r8.u64 ^ ctx.r7.u64);
	// clrlwi r7,r28,31
	ctx.r7.u64 = ctx.r28.u32 & 0x1;
	// lwz r28,31552(r3)
	ctx.current_instruction = 0x88078B54;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// clrlwi r6,r27,31
	ctx.r6.u64 = ctx.r27.u32 & 0x1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// clrlwi r29,r8,31
	ctx.r29.u64 = ctx.r8.u32 & 0x1;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// addi r27,r1,-160
	ctx.r27.s64 = ctx.r1.s64 + -160;
	// rotlwi r26,r17,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r17.u32, 0);
	// lwz r28,24(r28)
	ctx.current_instruction = 0x88078B78;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// mullw r8,r8,r26
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r26.s32);
	// lwz r26,0(r28)
	ctx.current_instruction = 0x88078B80;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r28,12(r28)
	ctx.current_instruction = 0x88078B84;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// add r25,r8,r11
	ctx.r25.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r26,r25,r26
	ctx.current_instruction = 0x88078B98;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r26.u32);
	// rotlwi r26,r26,2
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 2);
	// lwzx r8,r8,r28
	ctx.current_instruction = 0x88078BA0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// lwzx r28,r26,r27
	ctx.current_instruction = 0x88078BA4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// subfc r28,r8,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r28.u64 = ctx.r10.u64 - ctx.r8.u64;
	// eqv r10,r8,r10
	ctx.r10.u64 = ~(ctx.r8.u64 ^ ctx.r10.u64);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x88078db8
	if (ctx.cr6.lt) goto loc_88078DB8;
	// stw r22,148(r23)
	ctx.current_instruction = 0x88078BE4;
	REX_STORE_U32(ctx.r23.u32 + 148, ctx.r22.u32);
	// b 0x88078dc4
	goto loc_88078DC4;
loc_88078BEC:
	// lwz r8,31552(r3)
	ctx.current_instruction = 0x88078BEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// addi r7,r1,-160
	ctx.r7.s64 = ctx.r1.s64 + -160;
	// lwz r6,720(r3)
	ctx.current_instruction = 0x88078BF4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r10,r9,r6
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// lwz r5,24(r8)
	ctx.current_instruction = 0x88078BFC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r8,0(r5)
	ctx.current_instruction = 0x88078C00;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r4,12(r5)
	ctx.current_instruction = 0x88078C04;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r10,r8,r11
	ctx.current_instruction = 0x88078C14;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r10,r5,r4
	ctx.current_instruction = 0x88078C1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lwzx r8,r8,r7
	ctx.current_instruction = 0x88078C20;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// ble cr6,0x88078c38
	if (!ctx.cr6.gt) goto loc_88078C38;
	// stw r22,148(r23)
	ctx.current_instruction = 0x88078C30;
	REX_STORE_U32(ctx.r23.u32 + 148, ctx.r22.u32);
	// b 0x88078dc4
	goto loc_88078DC4;
loc_88078C38:
	// lwz r8,31552(r3)
	ctx.current_instruction = 0x88078C38;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// addi r30,r9,-1
	ctx.r30.s64 = ctx.r9.s64 + -1;
	// lwz r7,720(r3)
	ctx.current_instruction = 0x88078C40;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r29,r1,-160
	ctx.r29.s64 = ctx.r1.s64 + -160;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwz r4,24(r8)
	ctx.current_instruction = 0x88078C50;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r25,24(r8)
	ctx.current_instruction = 0x88078C54;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r31,0(r25)
	ctx.current_instruction = 0x88078C58;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lwz r6,0(r4)
	ctx.current_instruction = 0x88078C60;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r5,12(r4)
	ctx.current_instruction = 0x88078C68;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r8,r30,r26
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r26.s32);
	// lwz r30,24(r20)
	ctx.current_instruction = 0x88078C84;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r20.u32 + 24);
	// lwz r4,12(r24)
	ctx.current_instruction = 0x88078C88;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 12);
	// lbz r24,-1(r6)
	ctx.current_instruction = 0x88078C8C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r6.u32 + -1);
	// lwz r20,0(r30)
	ctx.current_instruction = 0x88078C90;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r30,12(r30)
	ctx.current_instruction = 0x88078C94;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r7,0(r25)
	ctx.current_instruction = 0x88078CA0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwz r25,12(r25)
	ctx.current_instruction = 0x88078CA8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + 12);
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// mullw r10,r9,r26
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r26.s32);
	// lbzx r31,r31,r11
	ctx.current_instruction = 0x88078CB4;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r6,r24,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r24.u32, 2);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rotlwi r27,r26,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// add r26,r8,r11
	ctx.r26.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r8,-4(r5)
	ctx.current_instruction = 0x88078CC8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + -4);
	// add r24,r7,r11
	ctx.r24.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwzx r7,r6,r29
	ctx.current_instruction = 0x88078CD0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// rlwinm r6,r26,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r31,r31,2
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// addi r28,r1,-160
	ctx.r28.s64 = ctx.r1.s64 + -160;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r29,1(r24)
	ctx.current_instruction = 0x88078CE8;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r24.u32 + 1);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwzx r7,r6,r25
	ctx.current_instruction = 0x88078CF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subfc r26,r10,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r26.u64 = ctx.r8.u64 - ctx.r10.u64;
	// lwzx r6,r31,r28
	ctx.current_instruction = 0x88078CFC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// eqv r10,r10,r8
	ctx.r10.u64 = ~(ctx.r10.u64 ^ ctx.r8.u64);
	// rotlwi r4,r29,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// rlwinm r29,r10,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r7,4(r5)
	ctx.current_instruction = 0x88078D18;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// addze r5,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r5.s64 = temp.s64;
	// addi r29,r1,-160
	ctx.r29.s64 = ctx.r1.s64 + -160;
	// lwzx r6,r4,r31
	ctx.current_instruction = 0x88078D24;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// subfc r4,r10,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r4.u64 = ctx.r8.u64 - ctx.r10.u64;
	// eqv r8,r10,r8
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r8.u64);
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r6,r8,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// addi r31,r9,1
	ctx.r31.s64 = ctx.r9.s64 + 1;
	// subfc r6,r10,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r8.u64 - ctx.r10.u64;
	// eqv r10,r10,r8
	ctx.r10.u64 = ~(ctx.r10.u64 ^ ctx.r8.u64);
	// mullw r7,r31,r27
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r27.s32);
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r31,r7,r11
	ctx.r31.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// clrlwi r7,r5,31
	ctx.r7.u64 = ctx.r5.u32 & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r6,r4,31
	ctx.r6.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r10,r31,r20
	ctx.current_instruction = 0x88078D6C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r20.u32);
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// rotlwi r31,r10,2
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r8,r4,r30
	ctx.current_instruction = 0x88078D78;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// lwzx r4,r31,r29
	ctx.current_instruction = 0x88078D7C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// subfc r4,r8,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r4.u64 = ctx.r10.u64 - ctx.r8.u64;
	// eqv r10,r8,r10
	ctx.r10.u64 = ~(ctx.r8.u64 ^ ctx.r10.u64);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r4,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x88078db8
	if (ctx.cr6.lt) goto loc_88078DB8;
loc_88078DB0:
	// stw r22,148(r23)
	ctx.current_instruction = 0x88078DB0;
	REX_STORE_U32(ctx.r23.u32 + 148, ctx.r22.u32);
	// b 0x88078dc4
	goto loc_88078DC4;
loc_88078DB8:
	// stw r21,148(r23)
	ctx.current_instruction = 0x88078DB8;
	REX_STORE_U32(ctx.r23.u32 + 148, ctx.r21.u32);
	// b 0x88078dc4
	goto loc_88078DC4;
loc_88078DC0:
	// stw r10,148(r23)
	ctx.current_instruction = 0x88078DC0;
	REX_STORE_U32(ctx.r23.u32 + 148, ctx.r10.u32);
loc_88078DC4:
	// lwz r10,720(r3)
	ctx.current_instruction = 0x88078DC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r23,r23,276
	ctx.r23.s64 = ctx.r23.s64 + 276;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88078838
	if (ctx.cr6.lt) goto loc_88078838;
loc_88078DDC:
	// lwz r11,28044(r3)
	ctx.current_instruction = 0x88078DDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28044);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88078e48
	if (!ctx.cr6.eq) goto loc_88078E48;
	// lwz r10,31552(r3)
	ctx.current_instruction = 0x88078DE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// lwz r7,720(r3)
	ctx.current_instruction = 0x88078DF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lwz r4,24(r10)
	ctx.current_instruction = 0x88078E00;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r8,0(r4)
	ctx.current_instruction = 0x88078E04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r4)
	ctx.current_instruction = 0x88078E08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mullw r8,r6,r7
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lbz r7,-1(r11)
	ctx.current_instruction = 0x88078E14;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r6,r7,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r6,r5
	ctx.current_instruction = 0x88078E24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwz r11,-4(r4)
	ctx.current_instruction = 0x88078E28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x88078e40
	if (!ctx.cr6.gt) goto loc_88078E40;
	// stw r22,148(r23)
	ctx.current_instruction = 0x88078E38;
	REX_STORE_U32(ctx.r23.u32 + 148, ctx.r22.u32);
	// b 0x88078e4c
	goto loc_88078E4C;
loc_88078E40:
	// stw r21,148(r23)
	ctx.current_instruction = 0x88078E40;
	REX_STORE_U32(ctx.r23.u32 + 148, ctx.r21.u32);
	// b 0x88078e4c
	goto loc_88078E4C;
loc_88078E48:
	// stw r11,148(r23)
	ctx.current_instruction = 0x88078E48;
	REX_STORE_U32(ctx.r23.u32 + 148, ctx.r11.u32);
loc_88078E4C:
	// lwz r10,724(r3)
	ctx.current_instruction = 0x88078E4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r23,276
	ctx.r11.s64 = ctx.r23.s64 + 276;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x880787c4
	if (ctx.cr6.lt) goto loc_880787C4;
loc_88078E64:
	// lwz r10,28044(r3)
	ctx.current_instruction = 0x88078E64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28044);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88078ec4
	if (!ctx.cr6.eq) goto loc_88078EC4;
	// lwz r9,31552(r3)
	ctx.current_instruction = 0x88078E70;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// lwz r10,724(r3)
	ctx.current_instruction = 0x88078E78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// lwz r7,720(r3)
	ctx.current_instruction = 0x88078E7C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// lwz r5,24(r9)
	ctx.current_instruction = 0x88078E84;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// mullw r4,r6,r7
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r10,0(r5)
	ctx.current_instruction = 0x88078E8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,12(r5)
	ctx.current_instruction = 0x88078E90;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lbzx r7,r4,r10
	ctx.current_instruction = 0x88078E94;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r5,r7,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r10,r9,r6
	ctx.current_instruction = 0x88078EA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwzx r9,r5,r8
	ctx.current_instruction = 0x88078EA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// ble cr6,0x88078ebc
	if (!ctx.cr6.gt) goto loc_88078EBC;
	// stw r22,148(r11)
	ctx.current_instruction = 0x88078EB4;
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r22.u32);
	// b 0x88078ec8
	goto loc_88078EC8;
loc_88078EBC:
	// stw r21,148(r11)
	ctx.current_instruction = 0x88078EBC;
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r21.u32);
	// b 0x88078ec8
	goto loc_88078EC8;
loc_88078EC4:
	// stw r10,148(r11)
	ctx.current_instruction = 0x88078EC4;
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
loc_88078EC8:
	// lwz r10,720(r3)
	ctx.current_instruction = 0x88078EC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r7,r11,276
	ctx.r7.s64 = ctx.r11.s64 + 276;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x88079014
	if (!ctx.cr6.gt) goto loc_88079014;
loc_88078EE0:
	// lwz r10,28044(r3)
	ctx.current_instruction = 0x88078EE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28044);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88078ff8
	if (!ctx.cr6.eq) goto loc_88078FF8;
	// lwz r9,31552(r3)
	ctx.current_instruction = 0x88078EEC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// lwz r10,724(r3)
	ctx.current_instruction = 0x88078EF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// lwz r6,720(r3)
	ctx.current_instruction = 0x88078EF8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// lwz r4,24(r9)
	ctx.current_instruction = 0x88078F00;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// mullw r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lwz r9,0(r4)
	ctx.current_instruction = 0x88078F08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,12(r4)
	ctx.current_instruction = 0x88078F0C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r9,r5,r11
	ctx.current_instruction = 0x88078F1C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r10,r10,r6
	ctx.current_instruction = 0x88078F24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r9,r5,r8
	ctx.current_instruction = 0x88078F28;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// ble cr6,0x88078f40
	if (!ctx.cr6.gt) goto loc_88078F40;
	// stw r22,148(r7)
	ctx.current_instruction = 0x88078F38;
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r22.u32);
	// b 0x88078ffc
	goto loc_88078FFC;
loc_88078F40:
	// lwz r9,31552(r3)
	ctx.current_instruction = 0x88078F40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// addi r6,r1,-160
	ctx.r6.s64 = ctx.r1.s64 + -160;
	// lwz r10,724(r3)
	ctx.current_instruction = 0x88078F48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// lwz r5,720(r3)
	ctx.current_instruction = 0x88078F4C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// lwz r9,24(r9)
	ctx.current_instruction = 0x88078F54;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// mullw r10,r4,r5
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lwz r8,0(r9)
	ctx.current_instruction = 0x88078F5C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,12(r9)
	ctx.current_instruction = 0x88078F60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,-1(r4)
	ctx.current_instruction = 0x88078F78;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r10,-4(r10)
	ctx.current_instruction = 0x88078F80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// lwzx r9,r8,r6
	ctx.current_instruction = 0x88078F84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// ble cr6,0x88078ff0
	if (!ctx.cr6.gt) goto loc_88078FF0;
	// lwz r9,31552(r3)
	ctx.current_instruction = 0x88078F94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// lwz r10,724(r3)
	ctx.current_instruction = 0x88078F9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// lwz r6,720(r3)
	ctx.current_instruction = 0x88078FA0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// lwz r4,24(r9)
	ctx.current_instruction = 0x88078FA8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// mullw r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lwz r9,0(r4)
	ctx.current_instruction = 0x88078FB0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,12(r4)
	ctx.current_instruction = 0x88078FB4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,1(r5)
	ctx.current_instruction = 0x88078FCC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r10,r10,r6
	ctx.current_instruction = 0x88078FD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r9,r5,r8
	ctx.current_instruction = 0x88078FD8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// ble cr6,0x88078ff0
	if (!ctx.cr6.gt) goto loc_88078FF0;
	// stw r22,148(r7)
	ctx.current_instruction = 0x88078FE8;
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r22.u32);
	// b 0x88078ffc
	goto loc_88078FFC;
loc_88078FF0:
	// stw r21,148(r7)
	ctx.current_instruction = 0x88078FF0;
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r21.u32);
	// b 0x88078ffc
	goto loc_88078FFC;
loc_88078FF8:
	// stw r10,148(r7)
	ctx.current_instruction = 0x88078FF8;
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r10.u32);
loc_88078FFC:
	// lwz r10,720(r3)
	ctx.current_instruction = 0x88078FFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,276
	ctx.r7.s64 = ctx.r7.s64 + 276;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88078ee0
	if (ctx.cr6.lt) goto loc_88078EE0;
loc_88079014:
	// lwz r11,28044(r3)
	ctx.current_instruction = 0x88079014;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28044);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807907c
	if (!ctx.cr6.eq) goto loc_8807907C;
	// lwz r10,31552(r3)
	ctx.current_instruction = 0x88079020;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// lwz r6,724(r3)
	ctx.current_instruction = 0x88079028;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// lwz r5,720(r3)
	ctx.current_instruction = 0x8807902C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r5,r6
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lwz r4,24(r10)
	ctx.current_instruction = 0x88079034;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r9,0(r4)
	ctx.current_instruction = 0x88079038;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r4)
	ctx.current_instruction = 0x8807903C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r11,r5,r6
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lbz r9,-1(r3)
	ctx.current_instruction = 0x88079048;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + -1);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r6,r9,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r6,r8
	ctx.current_instruction = 0x88079058;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwz r11,-4(r5)
	ctx.current_instruction = 0x8807905C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + -4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// ble cr6,0x88079074
	if (!ctx.cr6.gt) goto loc_88079074;
	// stw r22,148(r7)
	ctx.current_instruction = 0x8807906C;
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r22.u32);
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
loc_88079074:
	// stw r21,148(r7)
	ctx.current_instruction = 0x88079074;
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r21.u32);
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
loc_8807907C:
	// stw r11,148(r7)
	ctx.current_instruction = 0x8807907C;
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r11.u32);
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B3BF0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880B3BF0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880B3BF0) {
			switch (rex_dispatch_address) {
				case 0x880B3BF8:
				case 0x880B3CE8:
				case 0x880B3D40:
				case 0x880B3D8C:
				case 0x880B3DD8:
				case 0x880B3E48:
				case 0x880B3E90:
				case 0x880B3EEC:
				case 0x880B3F38:
				case 0x880B3F7C:
				case 0x880B3FC0:
				case 0x880B4024:
				case 0x880B4058:
				case 0x880B40A8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880B3BF0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880B3BF8: goto loc_880B3BF8;
		case 0x880B3CE8: goto loc_880B3CE8;
		case 0x880B3D40: goto loc_880B3D40;
		case 0x880B3D8C: goto loc_880B3D8C;
		case 0x880B3DD8: goto loc_880B3DD8;
		case 0x880B3E48: goto loc_880B3E48;
		case 0x880B3E90: goto loc_880B3E90;
		case 0x880B3EEC: goto loc_880B3EEC;
		case 0x880B3F38: goto loc_880B3F38;
		case 0x880B3F7C: goto loc_880B3F7C;
		case 0x880B3FC0: goto loc_880B3FC0;
		case 0x880B4024: goto loc_880B4024;
		case 0x880B4058: goto loc_880B4058;
		case 0x880B40A8: goto loc_880B40A8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880B3BF8;
	__savegprlr_14(ctx, base);
loc_880B3BF8:
	// stwu r1,-1152(r1)
	ctx.current_instruction = 0x880B3BF8;
	ea = -1152 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1300(r1)
	ctx.current_instruction = 0x880B3C00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1300);
	// stw r9,1220(r1)
	ctx.current_instruction = 0x880B3C04;
	REX_STORE_U32(ctx.r1.u32 + 1220, ctx.r9.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// addi r9,r1,276
	ctx.r9.s64 = ctx.r1.s64 + 276;
	// lwz r7,1292(r1)
	ctx.current_instruction = 0x880B3C10;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1292);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r20,1284(r1)
	ctx.current_instruction = 0x880B3C18;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 1284);
	// lwz r19,1276(r1)
	ctx.current_instruction = 0x880B3C1C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1276);
	// addi r29,r1,300
	ctx.r29.s64 = ctx.r1.s64 + 300;
	// lwz r24,28116(r31)
	ctx.current_instruction = 0x880B3C24;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 28116);
	// stw r9,260(r1)
	ctx.current_instruction = 0x880B3C28;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// addi r9,r1,280
	ctx.r9.s64 = ctx.r1.s64 + 280;
	// stw r3,252(r1)
	ctx.current_instruction = 0x880B3C30;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// stw r11,212(r1)
	ctx.current_instruction = 0x880B3C38;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// addi r11,r1,308
	ctx.r11.s64 = ctx.r1.s64 + 308;
	// stw r29,244(r1)
	ctx.current_instruction = 0x880B3C40;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// stw r7,204(r1)
	ctx.current_instruction = 0x880B3C44;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r9,236(r1)
	ctx.current_instruction = 0x880B3C4C;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// stw r3,228(r1)
	ctx.current_instruction = 0x880B3C50;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,220(r1)
	ctx.current_instruction = 0x880B3C58;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// stw r20,196(r1)
	ctx.current_instruction = 0x880B3C5C;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r20.u32);
	// stw r19,188(r1)
	ctx.current_instruction = 0x880B3C60;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r19.u32);
	// stw r24,180(r1)
	ctx.current_instruction = 0x880B3C64;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// lwz r29,0(r8)
	ctx.current_instruction = 0x880B3C68;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r28,20(r8)
	ctx.current_instruction = 0x880B3C6C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r27,16(r8)
	ctx.current_instruction = 0x880B3C70;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r26,12(r8)
	ctx.current_instruction = 0x880B3C74;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r25,8(r8)
	ctx.current_instruction = 0x880B3C78;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r23,0(r30)
	ctx.current_instruction = 0x880B3C7C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r22,20(r30)
	ctx.current_instruction = 0x880B3C80;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r21,16(r30)
	ctx.current_instruction = 0x880B3C84;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r18,1268(r1)
	ctx.current_instruction = 0x880B3C88;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1268);
	// lwz r17,1260(r1)
	ctx.current_instruction = 0x880B3C8C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1260);
	// lwz r16,1252(r1)
	ctx.current_instruction = 0x880B3C90;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1252);
	// lwz r15,1244(r1)
	ctx.current_instruction = 0x880B3C94;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// stw r8,1212(r1)
	ctx.current_instruction = 0x880B3C98;
	REX_STORE_U32(ctx.r1.u32 + 1212, ctx.r8.u32);
	// stw r10,1228(r1)
	ctx.current_instruction = 0x880B3C9C;
	REX_STORE_U32(ctx.r1.u32 + 1228, ctx.r10.u32);
	// lwz r8,1236(r1)
	ctx.current_instruction = 0x880B3CA0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// lwz r10,12(r30)
	ctx.current_instruction = 0x880B3CA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,8(r30)
	ctx.current_instruction = 0x880B3CA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r4,1180(r1)
	ctx.current_instruction = 0x880B3CAC;
	REX_STORE_U32(ctx.r1.u32 + 1180, ctx.r4.u32);
	// stw r5,1188(r1)
	ctx.current_instruction = 0x880B3CB0;
	REX_STORE_U32(ctx.r1.u32 + 1188, ctx.r5.u32);
	// stw r29,172(r1)
	ctx.current_instruction = 0x880B3CB4;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// stw r23,164(r1)
	ctx.current_instruction = 0x880B3CB8;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// stw r18,156(r1)
	ctx.current_instruction = 0x880B3CBC;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r18.u32);
	// stw r17,148(r1)
	ctx.current_instruction = 0x880B3CC0;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// stw r16,140(r1)
	ctx.current_instruction = 0x880B3CC4;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r16.u32);
	// stw r15,132(r1)
	ctx.current_instruction = 0x880B3CC8;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r15.u32);
	// stw r28,124(r1)
	ctx.current_instruction = 0x880B3CCC;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r27,116(r1)
	ctx.current_instruction = 0x880B3CD0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r26,108(r1)
	ctx.current_instruction = 0x880B3CD4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r25,100(r1)
	ctx.current_instruction = 0x880B3CD8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r22,92(r1)
	ctx.current_instruction = 0x880B3CDC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// stw r21,84(r1)
	ctx.current_instruction = 0x880B3CE0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// bl 0x880991e0
	ctx.lr = 0x880B3CE8;
	sub_880991E0(ctx, base);
loc_880B3CE8:
	// lwz r10,28020(r31)
	ctx.current_instruction = 0x880B3CE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r24,304(r1)
	ctx.current_instruction = 0x880B3CF0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r17,300(r1)
	ctx.current_instruction = 0x880B3CF4;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r16,312(r1)
	ctx.current_instruction = 0x880B3CF8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r15,308(r1)
	ctx.current_instruction = 0x880B3CFC;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// beq cr6,0x880b40d0
	if (ctx.cr6.eq) goto loc_880B40D0;
	// lwz r11,28036(r31)
	ctx.current_instruction = 0x880B3D04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28036);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b40d0
	if (!ctx.cr6.eq) goto loc_880B40D0;
	// stw r15,272(r1)
	ctx.current_instruction = 0x880B3D10;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r15.u32);
	// addi r11,r1,351
	ctx.r11.s64 = ctx.r1.s64 + 351;
	// stw r16,284(r1)
	ctx.current_instruction = 0x880B3D18;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r16.u32);
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// lwz r27,1236(r1)
	ctx.current_instruction = 0x880B3D20;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r28,1228(r1)
	ctx.current_instruction = 0x880B3D28;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rlwinm r29,r11,0,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bl 0x8810aa38
	ctx.lr = 0x880B3D40;
	sub_8810AA38(ctx, base);
loc_880B3D40:
	// lwz r8,284(r1)
	ctx.current_instruction = 0x880B3D40;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r3,1380(r31)
	ctx.current_instruction = 0x880B3D44;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r19,16
	ctx.r19.s64 = 16;
	// lwz r7,272(r1)
	ctx.current_instruction = 0x880B3D4C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// lwz r20,1188(r1)
	ctx.current_instruction = 0x880B3D54;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 1188);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880B3D60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// stw r19,84(r1)
	ctx.current_instruction = 0x880B3D64;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// add r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lwz r26,2488(r31)
	ctx.current_instruction = 0x880B3D80;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x880B3D8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B3D8C:
	// addi r8,r1,296
	ctx.r8.s64 = ctx.r1.s64 + 296;
	// lwz r18,1220(r1)
	ctx.current_instruction = 0x880B3D90;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1220);
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// lwz r21,1180(r1)
	ctx.current_instruction = 0x880B3D98;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1180);
	// addi r11,r1,292
	ctx.r11.s64 = ctx.r1.s64 + 292;
	// stw r8,92(r1)
	ctx.current_instruction = 0x880B3DA0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x880B3DA4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r27,116(r1)
	ctx.current_instruction = 0x880B3DB0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r28,108(r1)
	ctx.current_instruction = 0x880B3DB8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880B3DC0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B3DD8;
	sub_88085938(ctx, base);
loc_880B3DD8:
	// lwz r22,0(r30)
	ctx.current_instruction = 0x880B3DD8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r23,292(r1)
	ctx.current_instruction = 0x880B3DDC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r26,12(r30)
	ctx.current_instruction = 0x880B3DE0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwz r25,8(r30)
	ctx.current_instruction = 0x880B3DE8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// beq cr6,0x880b3eac
	if (ctx.cr6.eq) goto loc_880B3EAC;
	// lwz r10,2616(r31)
	ctx.current_instruction = 0x880B3DF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r17,2608(r31)
	ctx.current_instruction = 0x880B3DF8;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r14,2604(r31)
	ctx.current_instruction = 0x880B3E00;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r26,r17
	ctx.r11.u64 = ctx.r17.u64 - ctx.r26.u64;
	// lwz r9,2612(r31)
	ctx.current_instruction = 0x880B3E0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// lwz r24,20(r30)
	ctx.current_instruction = 0x880B3E10;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,280(r1)
	ctx.current_instruction = 0x880B3E14;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// subf r10,r25,r14
	ctx.r10.u64 = ctx.r14.u64 - ctx.r25.u64;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// lwz r8,280(r1)
	ctx.current_instruction = 0x880B3E20;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// add r10,r10,r15
	ctx.r10.u64 = ctx.r10.u64 + ctx.r15.u64;
	// lwz r30,16(r30)
	ctx.current_instruction = 0x880B3E28;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// and r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stw r8,280(r1)
	ctx.current_instruction = 0x880B3E30;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r8.u32);
	// and r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 & ctx.r9.u64;
	// stw r9,276(r1)
	ctx.current_instruction = 0x880B3E38;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r9.u32);
	// subf r5,r17,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r17.u64;
	// subf r4,r14,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r14.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B3E48;
	sub_88085E60(ctx, base);
loc_880B3E48:
	// rotlwi r16,r16,0
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r16.u32, 0);
	// subf r11,r24,r17
	ctx.r11.u64 = ctx.r17.u64 - ctx.r24.u64;
	// lwz r9,280(r1)
	ctx.current_instruction = 0x880B3E50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// rotlwi r15,r15,0
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// subf r10,r30,r14
	ctx.r10.u64 = ctx.r14.u64 - ctx.r30.u64;
	// and r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ctx.r9.u64;
	// lwz r11,276(r1)
	ctx.current_instruction = 0x880B3E64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// add r10,r10,r15
	ctx.r10.u64 = ctx.r10.u64 + ctx.r15.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// and r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// subf r5,r17,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r17.u64;
	// stw r11,276(r1)
	ctx.current_instruction = 0x880B3E80;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// subf r4,r14,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B3E90;
	sub_88085E60(ctx, base);
loc_880B3E90:
	// lwz r17,276(r1)
	ctx.current_instruction = 0x880B3E90;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpw cr6,r17,r3
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r3.s32, ctx.xer);
	// lwz r17,300(r1)
	ctx.current_instruction = 0x880B3E98;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// blt cr6,0x880b3ea8
	if (ctx.cr6.lt) goto loc_880B3EA8;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_880B3EA8:
	// lwz r24,304(r1)
	ctx.current_instruction = 0x880B3EA8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
loc_880B3EAC:
	// lwz r9,2608(r31)
	ctx.current_instruction = 0x880B3EAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,2604(r31)
	ctx.current_instruction = 0x880B3EB4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// subf r11,r26,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r26.u64;
	// lwz r5,2616(r31)
	ctx.current_instruction = 0x880B3EC0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// subf r10,r25,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r25.u64;
	// lwz r4,2612(r31)
	ctx.current_instruction = 0x880B3EC8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// add r3,r11,r16
	ctx.r3.u64 = ctx.r11.u64 + ctx.r16.u64;
	// add r11,r10,r15
	ctx.r11.u64 = ctx.r10.u64 + ctx.r15.u64;
	// and r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 & ctx.r5.u64;
	// and r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 & ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r9,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r4,r8,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r8.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B3EEC;
	sub_88085E60(ctx, base);
loc_880B3EEC:
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880B3EEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// beq cr6,0x880b3f00
	if (ctx.cr6.eq) goto loc_880B3F00;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_880B3F00:
	// stw r17,272(r1)
	ctx.current_instruction = 0x880B3F00;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r17.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r24,284(r1)
	ctx.current_instruction = 0x880B3F08;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r24.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r9,108(r18)
	ctx.current_instruction = 0x880B3F10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r18.u32 + 108);
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// lwz r11,296(r1)
	ctx.current_instruction = 0x880B3F18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,288(r1)
	ctx.current_instruction = 0x880B3F2C;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// bl 0x8810aa38
	ctx.lr = 0x880B3F38;
	sub_8810AA38(ctx, base);
loc_880B3F38:
	// stw r19,84(r1)
	ctx.current_instruction = 0x880B3F38;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// lwz r8,284(r1)
	ctx.current_instruction = 0x880B3F3C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r3,1380(r31)
	ctx.current_instruction = 0x880B3F44;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,272(r1)
	ctx.current_instruction = 0x880B3F4C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880B3F58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lwz r30,2488(r31)
	ctx.current_instruction = 0x880B3F70;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B3F7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B3F7C:
	// addi r8,r1,296
	ctx.r8.s64 = ctx.r1.s64 + 296;
	// stw r27,116(r1)
	ctx.current_instruction = 0x880B3F80;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// stw r28,108(r1)
	ctx.current_instruction = 0x880B3F88;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r11,r1,292
	ctx.r11.s64 = ctx.r1.s64 + 292;
	// stw r8,92(r1)
	ctx.current_instruction = 0x880B3F90;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x880B3F94;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880B3FA0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B3FC0;
	sub_88085938(ctx, base);
loc_880B3FC0:
	// lwz r11,1212(r1)
	ctx.current_instruction = 0x880B3FC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1212);
	// lwz r30,0(r11)
	ctx.current_instruction = 0x880B3FC4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r25,292(r1)
	ctx.current_instruction = 0x880B3FC8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r29,12(r11)
	ctx.current_instruction = 0x880B3FCC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r28,8(r11)
	ctx.current_instruction = 0x880B3FD4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x880b4068
	if (ctx.cr6.eq) goto loc_880B4068;
	// lwz r22,2608(r31)
	ctx.current_instruction = 0x880B3FDC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r21,2604(r31)
	ctx.current_instruction = 0x880B3FE4;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// subf r9,r29,r22
	ctx.r9.u64 = ctx.r22.u64 - ctx.r29.u64;
	// lwz r20,2616(r31)
	ctx.current_instruction = 0x880B3FF0;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// subf r10,r28,r21
	ctx.r10.u64 = ctx.r21.u64 - ctx.r28.u64;
	// lwz r19,2612(r31)
	ctx.current_instruction = 0x880B3FF8;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// lwz r27,20(r11)
	ctx.current_instruction = 0x880B4000;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r8,r10,r17
	ctx.r8.u64 = ctx.r10.u64 + ctx.r17.u64;
	// lwz r26,16(r11)
	ctx.current_instruction = 0x880B4008;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// and r5,r9,r20
	ctx.r5.u64 = ctx.r9.u64 & ctx.r20.u64;
	// and r4,r8,r19
	ctx.r4.u64 = ctx.r8.u64 & ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r22,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r22.u64;
	// subf r4,r21,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r21.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B4024;
	sub_88085E60(ctx, base);
loc_880B4024:
	// subf r11,r26,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r26.u64;
	// subf r10,r27,r22
	ctx.r10.u64 = ctx.r22.u64 - ctx.r27.u64;
	// add r9,r11,r17
	ctx.r9.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// and r4,r9,r19
	ctx.r4.u64 = ctx.r9.u64 & ctx.r19.u64;
	// and r8,r10,r20
	ctx.r8.u64 = ctx.r10.u64 & ctx.r20.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// subf r5,r22,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r22.u64;
	// subf r4,r21,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B4058;
	sub_88085E60(ctx, base);
loc_880B4058:
	// cmpw cr6,r20,r3
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x880b4068
	if (ctx.cr6.lt) goto loc_880B4068;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_880B4068:
	// lwz r9,2608(r31)
	ctx.current_instruction = 0x880B4068;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,2604(r31)
	ctx.current_instruction = 0x880B4070;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// subf r10,r29,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r29.u64;
	// lwz r5,2616(r31)
	ctx.current_instruction = 0x880B407C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// subf r11,r28,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r28.u64;
	// lwz r4,2612(r31)
	ctx.current_instruction = 0x880B4084;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// add r3,r10,r24
	ctx.r3.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// and r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 & ctx.r5.u64;
	// and r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 & ctx.r4.u64;
	// subf r5,r9,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r4,r8,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B40A8;
	sub_88085E60(ctx, base);
loc_880B40A8:
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880B40A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// beq cr6,0x880b40bc
	if (ctx.cr6.eq) goto loc_880B40BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880B40BC:
	// lwz r9,108(r18)
	ctx.current_instruction = 0x880B40BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r18.u32 + 108);
	// lwz r10,296(r1)
	ctx.current_instruction = 0x880B40C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b40d8
	goto loc_880B40D8;
loc_880B40D0:
	// lwz r11,276(r1)
	ctx.current_instruction = 0x880B40D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r23,280(r1)
	ctx.current_instruction = 0x880B40D4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
loc_880B40D8:
	// lwz r10,1308(r1)
	ctx.current_instruction = 0x880B40D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1308);
	// lwz r9,1316(r1)
	ctx.current_instruction = 0x880B40DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r8,1324(r1)
	ctx.current_instruction = 0x880B40E0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// lwz r7,1332(r1)
	ctx.current_instruction = 0x880B40E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1332);
	// lwz r6,1340(r1)
	ctx.current_instruction = 0x880B40E8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1340);
	// lwz r5,1348(r1)
	ctx.current_instruction = 0x880B40EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1348);
	// stw r15,0(r10)
	ctx.current_instruction = 0x880B40F0;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r15.u32);
	// stw r16,0(r9)
	ctx.current_instruction = 0x880B40F4;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r16.u32);
	// stw r23,0(r8)
	ctx.current_instruction = 0x880B40F8;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r23.u32);
	// stw r17,0(r7)
	ctx.current_instruction = 0x880B40FC;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r17.u32);
	// stw r24,0(r6)
	ctx.current_instruction = 0x880B4100;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r24.u32);
	// stw r11,0(r5)
	ctx.current_instruction = 0x880B4104;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C04F0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880C04F0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C04F0;
	ctx.current_instruction = 0x880C04F0;
	uint32_t ea{};
	// li r10,10
	ctx.r10.s64 = 10;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,19116
	ctx.r9.s64 = ctx.r3.s64 + 19116;
	// sth r11,19130(r3)
	ctx.current_instruction = 0x880C04FC;
	REX_STORE_U16(ctx.r3.u32 + 19130, ctx.r11.u16);
	// stw r11,19152(r3)
	ctx.current_instruction = 0x880C0500;
	REX_STORE_U32(ctx.r3.u32 + 19152, ctx.r11.u32);
	// stw r11,19148(r3)
	ctx.current_instruction = 0x880C0504;
	REX_STORE_U32(ctx.r3.u32 + 19148, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,19132(r3)
	ctx.current_instruction = 0x880C050C;
	REX_STORE_U32(ctx.r3.u32 + 19132, ctx.r11.u32);
	// addi r10,r3,19152
	ctx.r10.s64 = ctx.r3.s64 + 19152;
	// stw r11,19124(r3)
	ctx.current_instruction = 0x880C0514;
	REX_STORE_U32(ctx.r3.u32 + 19124, ctx.r11.u32);
	// sth r11,19128(r3)
	ctx.current_instruction = 0x880C0518;
	REX_STORE_U16(ctx.r3.u32 + 19128, ctx.r11.u16);
	// stw r11,19116(r3)
	ctx.current_instruction = 0x880C051C;
	REX_STORE_U32(ctx.r3.u32 + 19116, ctx.r11.u32);
	// stw r11,19136(r3)
	ctx.current_instruction = 0x880C0520;
	REX_STORE_U32(ctx.r3.u32 + 19136, ctx.r11.u32);
	// stw r11,19120(r3)
	ctx.current_instruction = 0x880C0524;
	REX_STORE_U32(ctx.r3.u32 + 19120, ctx.r11.u32);
	// stw r11,19140(r3)
	ctx.current_instruction = 0x880C0528;
	REX_STORE_U32(ctx.r3.u32 + 19140, ctx.r11.u32);
	// stw r11,19144(r3)
	ctx.current_instruction = 0x880C052C;
	REX_STORE_U32(ctx.r3.u32 + 19144, ctx.r11.u32);
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_880C0534:
	// lwzu r9,4(r11)
	ctx.current_instruction = 0x880C0534;
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ctx.current_instruction = 0x880C0538;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x880c0534
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C0534;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880C0C18) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C0C18;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C0C18) {
			switch (rex_dispatch_address) {
				case 0x880C0C20:
				case 0x880C0C6C:
				case 0x880C0C84:
				case 0x880C0CA4:
				case 0x880C0CCC:
				case 0x880C0CE4:
				case 0x880C0D04:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C0C18;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C0C20: goto loc_880C0C20;
		case 0x880C0C6C: goto loc_880C0C6C;
		case 0x880C0C84: goto loc_880C0C84;
		case 0x880C0CA4: goto loc_880C0CA4;
		case 0x880C0CCC: goto loc_880C0CCC;
		case 0x880C0CE4: goto loc_880C0CE4;
		case 0x880C0D04: goto loc_880C0D04;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x880C0C20;
	__savegprlr_23(ctx, base);
loc_880C0C20:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x880C0C20;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,247(r1)
	ctx.current_instruction = 0x880C0C24;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 247);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r27,260(r1)
	ctx.current_instruction = 0x880C0C30;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lwz r26,252(r1)
	ctx.current_instruction = 0x880C0C38;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// extsb r23,r11
	ctx.r23.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c0ca4
	if (ctx.cr6.eq) goto loc_880C0CA4;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r7,8248(r3)
	ctx.current_instruction = 0x880C0C64;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8248);
	// bl 0x880ec360
	ctx.lr = 0x880C0C6C;
	sub_880EC360(ctx, base);
loc_880C0C6C:
	// lwz r11,8096(r31)
	ctx.current_instruction = 0x880C0C6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8096);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880C0C84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880C0C84:
	// lwz r10,8124(r31)
	ctx.current_instruction = 0x880C0C84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8124);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880C0CA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880C0CA4:
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c0d04
	if (ctx.cr6.eq) goto loc_880C0D04;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r7,8248(r31)
	ctx.current_instruction = 0x880C0CB4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8248);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec360
	ctx.lr = 0x880C0CCC;
	sub_880EC360(ctx, base);
loc_880C0CCC:
	// lwz r11,8096(r31)
	ctx.current_instruction = 0x880C0CCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8096);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880C0CE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880C0CE4:
	// lwz r10,8124(r31)
	ctx.current_instruction = 0x880C0CE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8124);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880C0D04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880C0D04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C2E48) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C2E48;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C2E48) {
			switch (rex_dispatch_address) {
				case 0x880C2E50:
				case 0x880C2F84:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C2E48;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C2E50: goto loc_880C2E50;
		case 0x880C2F84: goto loc_880C2F84;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880C2E50;
	__savegprlr_14(ctx, base);
loc_880C2E50:
	// stwu r1,-352(r1)
	ctx.current_instruction = 0x880C2E50;
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// lwz r10,7764(r3)
	ctx.current_instruction = 0x880C2E58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// mulli r11,r6,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(276));
	// stw r5,388(r1)
	ctx.current_instruction = 0x880C2E60;
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r5.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x880c30b0
	if (!ctx.cr6.lt) goto loc_880C30B0;
	// lwz r17,556(r1)
	ctx.current_instruction = 0x880C2E84;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r16,548(r1)
	ctx.current_instruction = 0x880C2E8C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r19,540(r1)
	ctx.current_instruction = 0x880C2E90;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// lwz r15,508(r1)
	ctx.current_instruction = 0x880C2E94;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r29,460(r1)
	ctx.current_instruction = 0x880C2E98;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r28,452(r1)
	ctx.current_instruction = 0x880C2E9C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r27,444(r1)
	ctx.current_instruction = 0x880C2EA0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r26,436(r1)
	ctx.current_instruction = 0x880C2EA4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
loc_880C2EA8:
	// lwz r11,720(r22)
	ctx.current_instruction = 0x880C2EA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 720);
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x880c30a4
	if (!ctx.cr6.gt) goto loc_880C30A4;
loc_880C2EB8:
	// lwz r9,4(r31)
	ctx.current_instruction = 0x880C2EB8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// lwz r8,8(r31)
	ctx.current_instruction = 0x880C2EC0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// lwz r6,12(r31)
	ctx.current_instruction = 0x880C2EC8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// or r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lwz r4,16(r31)
	ctx.current_instruction = 0x880C2ED4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,24(r31)
	ctx.current_instruction = 0x880C2ED8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r14,r1,160
	ctx.r14.s64 = ctx.r1.s64 + 160;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// lwz r8,500(r1)
	ctx.current_instruction = 0x880C2EE4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r5,20(r31)
	ctx.current_instruction = 0x880C2EE8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// or r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 | ctx.r4.u64;
	// stw r10,180(r1)
	ctx.current_instruction = 0x880C2EF4;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r11,108(r1)
	ctx.current_instruction = 0x880C2EF8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// or r6,r4,r3
	ctx.r6.u64 = ctx.r4.u64 | ctx.r3.u64;
	// std r31,192(r1)
	ctx.current_instruction = 0x880C2F04;
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r31.u64);
	// stw r8,164(r1)
	ctx.current_instruction = 0x880C2F08;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// stw r6,168(r1)
	ctx.current_instruction = 0x880C2F10;
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,164(r1)
	ctx.current_instruction = 0x880C2F18;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r31,168(r1)
	ctx.current_instruction = 0x880C2F20;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,180(r1)
	ctx.current_instruction = 0x880C2F24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stw r5,176(r1)
	ctx.current_instruction = 0x880C2F28;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// stw r30,144(r1)
	ctx.current_instruction = 0x880C2F30;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,152(r1)
	ctx.current_instruction = 0x880C2F34;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r30,156(r1)
	ctx.current_instruction = 0x880C2F38;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stw r30,148(r1)
	ctx.current_instruction = 0x880C2F3C;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r30,160(r1)
	ctx.current_instruction = 0x880C2F40;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r30,164(r1)
	ctx.current_instruction = 0x880C2F44;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// std r30,168(r1)
	ctx.current_instruction = 0x880C2F48;
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r30.u64);
	// lwz r30,176(r1)
	ctx.current_instruction = 0x880C2F4C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r7,184(r1)
	ctx.current_instruction = 0x880C2F50;
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// stw r3,116(r1)
	ctx.current_instruction = 0x880C2F58;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r17,140(r1)
	ctx.current_instruction = 0x880C2F60;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r17.u32);
	// stw r11,92(r1)
	ctx.current_instruction = 0x880C2F64;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,184(r1)
	ctx.current_instruction = 0x880C2F68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r16,132(r1)
	ctx.current_instruction = 0x880C2F6C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r16.u32);
	// stw r15,124(r1)
	ctx.current_instruction = 0x880C2F70;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r15.u32);
	// stw r14,100(r1)
	ctx.current_instruction = 0x880C2F74;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r14.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880C2F78;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// or r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 | ctx.r30.u64;
	// bl 0x8810f7b0
	ctx.lr = 0x880C2F84;
	sub_8810F7B0(ctx, base);
loc_880C2F84:
	// lwz r5,0(r25)
	ctx.current_instruction = 0x880C2F84;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r11,144(r1)
	ctx.current_instruction = 0x880C2F8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,148(r1)
	ctx.current_instruction = 0x880C2F90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// add r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r7,156(r1)
	ctx.current_instruction = 0x880C2F98;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r9,0(r25)
	ctx.current_instruction = 0x880C2F9C;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,152(r1)
	ctx.current_instruction = 0x880C2FA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,0(r24)
	ctx.current_instruction = 0x880C2FA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,160(r1)
	ctx.current_instruction = 0x880C2FB0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r5,0(r24)
	ctx.current_instruction = 0x880C2FB4;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r5.u32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r11,0(r26)
	ctx.current_instruction = 0x880C2FBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r3,0(r26)
	ctx.current_instruction = 0x880C2FC4;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r27)
	ctx.current_instruction = 0x880C2FC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r27)
	ctx.current_instruction = 0x880C2FD0;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.current_instruction = 0x880C2FD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r6,164(r1)
	ctx.current_instruction = 0x880C2FDC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stw r10,0(r28)
	ctx.current_instruction = 0x880C2FE0;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.current_instruction = 0x880C2FE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// ld r31,192(r1)
	ctx.current_instruction = 0x880C2FEC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ld r30,168(r1)
	ctx.current_instruction = 0x880C2FF4;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// stw r8,0(r29)
	ctx.current_instruction = 0x880C2FF8;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// beq cr6,0x880c3078
	if (ctx.cr6.eq) goto loc_880C3078;
	// lwz r11,0(r19)
	ctx.current_instruction = 0x880C3000;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x880c3050
	if (ctx.cr6.gt) goto loc_880C3050;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x880c3030
	if (ctx.cr6.gt) goto loc_880C3030;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r19)
	ctx.current_instruction = 0x880C301C;
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.current_instruction = 0x880C3020;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r10,0,10,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// stw r9,0(r31)
	ctx.current_instruction = 0x880C3028;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x880c3084
	goto loc_880C3084;
loc_880C3030:
	// li r10,1
	ctx.r10.s64 = 1;
loc_880C3034:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,0(r19)
	ctx.current_instruction = 0x880C303C;
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.current_instruction = 0x880C3040;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r8,r10,23,8,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0xC00000) | (ctx.r8.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r8,0(r31)
	ctx.current_instruction = 0x880C3048;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// b 0x880c3084
	goto loc_880C3084;
loc_880C3050:
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bgt cr6,0x880c3034
	if (ctx.cr6.gt) goto loc_880C3034;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,0(r19)
	ctx.current_instruction = 0x880C3064;
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.current_instruction = 0x880C3068;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r8,r10,22,8,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0xC00000) | (ctx.r8.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r8,0(r31)
	ctx.current_instruction = 0x880C3070;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// b 0x880c3084
	goto loc_880C3084;
loc_880C3078:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880C3078;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,10,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// stw r10,0(r31)
	ctx.current_instruction = 0x880C3080;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_880C3084:
	// lwz r11,720(r22)
	ctx.current_instruction = 0x880C3084;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 720);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r31,r31,276
	ctx.r31.s64 = ctx.r31.s64 + 276;
	// addi r21,r21,1536
	ctx.r21.s64 = ctx.r21.s64 + 1536;
	// addi r20,r20,12
	ctx.r20.s64 = ctx.r20.s64 + 12;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880c2eb8
	if (ctx.cr6.lt) goto loc_880C2EB8;
	// lwz r5,388(r1)
	ctx.current_instruction = 0x880C30A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
loc_880C30A4:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmplw cr6,r18,r5
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x880c2ea8
	if (ctx.cr6.lt) goto loc_880C2EA8;
loc_880C30B0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C83E0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C83E0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C83E0) {
			switch (rex_dispatch_address) {
				case 0x880C83E8:
				case 0x880C858C:
				case 0x880C85A4:
				case 0x880C85BC:
				case 0x880C85D4:
				case 0x880C85EC:
				case 0x880C8604:
				case 0x880C8690:
				case 0x880C86F0:
				case 0x880C8730:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C83E0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C83E8: goto loc_880C83E8;
		case 0x880C858C: goto loc_880C858C;
		case 0x880C85A4: goto loc_880C85A4;
		case 0x880C85BC: goto loc_880C85BC;
		case 0x880C85D4: goto loc_880C85D4;
		case 0x880C85EC: goto loc_880C85EC;
		case 0x880C8604: goto loc_880C8604;
		case 0x880C8690: goto loc_880C8690;
		case 0x880C86F0: goto loc_880C86F0;
		case 0x880C8730: goto loc_880C8730;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880C83E8;
	__savegprlr_14(ctx, base);
loc_880C83E8:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x880C83E8;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r7
	ctx.r14.u64 = ctx.r7.u64;
	// lwz r7,16(r3)
	ctx.current_instruction = 0x880C83F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r8,300(r1)
	ctx.current_instruction = 0x880C83F8;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// stw r9,308(r1)
	ctx.current_instruction = 0x880C8400;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stw r10,316(r1)
	ctx.current_instruction = 0x880C8408;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// ble cr6,0x880c8424
	if (!ctx.cr6.gt) goto loc_880C8424;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// xor r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// subf r21,r11,r6
	ctx.r21.u64 = ctx.r6.u64 - ctx.r11.u64;
loc_880C8424:
	// lis r11,16729
	ctx.r11.s64 = 1096351744;
	// lis r6,22870
	ctx.r6.s64 = 1498808320;
	// lis r5,12889
	ctx.r5.s64 = 844693504;
	// lis r4,22101
	ctx.r4.s64 = 1448411136;
	// lis r3,12338
	ctx.r3.s64 = 808583168;
	// lis r31,12849
	ctx.r31.s64 = 842072064;
	// lis r30,20532
	ctx.r30.s64 = 1345585152;
	// ori r16,r11,21846
	ctx.r16.u64 = ctx.r11.u64 | 21846;
	// ori r19,r6,22869
	ctx.r19.u64 = ctx.r6.u64 | 22869;
	// ori r18,r5,21849
	ctx.r18.u64 = ctx.r5.u64 | 21849;
	// ori r25,r4,22857
	ctx.r25.u64 = ctx.r4.u64 | 22857;
	// ori r22,r3,13385
	ctx.r22.u64 = ctx.r3.u64 | 13385;
	// ori r20,r31,22105
	ctx.r20.u64 = ctx.r31.u64 | 22105;
	// ori r15,r30,12850
	ctx.r15.u64 = ctx.r30.u64 | 12850;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880c84b4
	if (ctx.cr6.eq) goto loc_880C84B4;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x880c84b4
	if (ctx.cr6.eq) goto loc_880C84B4;
	// cmplw cr6,r7,r16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x880c84b4
	if (ctx.cr6.eq) goto loc_880C84B4;
	// cmpw cr6,r7,r19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r19.s32, ctx.xer);
	// beq cr6,0x880c84b4
	if (ctx.cr6.eq) goto loc_880C84B4;
	// cmpw cr6,r7,r18
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r18.s32, ctx.xer);
	// beq cr6,0x880c84b4
	if (ctx.cr6.eq) goto loc_880C84B4;
	// lis r11,22066
	ctx.r11.s64 = 1446117376;
	// ori r6,r11,12598
	ctx.r6.u64 = ctx.r11.u64 | 12598;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x880c84b4
	if (ctx.cr6.eq) goto loc_880C84B4;
	// cmpw cr6,r7,r25
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x880c84b4
	if (ctx.cr6.eq) goto loc_880C84B4;
	// cmpw cr6,r7,r22
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x880c84b4
	if (ctx.cr6.eq) goto loc_880C84B4;
	// cmpw cr6,r7,r20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x880c84b4
	if (ctx.cr6.eq) goto loc_880C84B4;
	// cmplw cr6,r7,r15
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x880c8740
	if (!ctx.cr6.eq) goto loc_880C8740;
loc_880C84B4:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x880c8748
	if (ctx.cr6.eq) goto loc_880C8748;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt cr6,0x880c8740
	if (ctx.cr6.lt) goto loc_880C8740;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// blt cr6,0x880c8740
	if (ctx.cr6.lt) goto loc_880C8740;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x880c8740
	if (ctx.cr6.lt) goto loc_880C8740;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x880c8740
	if (ctx.cr6.lt) goto loc_880C8740;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x880c8740
	if (ctx.cr6.lt) goto loc_880C8740;
	// lwz r24,324(r1)
	ctx.current_instruction = 0x880C84E4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x880c8740
	if (ctx.cr6.lt) goto loc_880C8740;
	// lwz r26,332(r1)
	ctx.current_instruction = 0x880C84F0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x880c8740
	if (ctx.cr6.lt) goto loc_880C8740;
	// lwz r27,340(r1)
	ctx.current_instruction = 0x880C84FC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// blt cr6,0x880c8740
	if (ctx.cr6.lt) goto loc_880C8740;
	// lwz r28,348(r1)
	ctx.current_instruction = 0x880C8508;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x880c8740
	if (ctx.cr6.lt) goto loc_880C8740;
	// lwz r4,4(r29)
	ctx.current_instruction = 0x880C8514;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bgt cr6,0x880c8528
	if (ctx.cr6.gt) goto loc_880C8528;
	// neg r11,r4
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r4.u64);
loc_880C8528:
	// add r9,r14,r9
	ctx.r9.u64 = ctx.r14.u64 + ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880c8740
	if (ctx.cr6.gt) goto loc_880C8740;
	// lwz r5,8(r29)
	ctx.current_instruction = 0x880C8534;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// bgt cr6,0x880c8548
	if (ctx.cr6.gt) goto loc_880C8548;
	// neg r11,r5
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r5.u64);
loc_880C8548:
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880c8740
	if (ctx.cr6.gt) goto loc_880C8740;
	// add r11,r24,r27
	ctx.r11.u64 = ctx.r24.u64 + ctx.r27.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bgt cr6,0x880c8740
	if (ctx.cr6.gt) goto loc_880C8740;
	// srawi r11,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 31;
	// add r10,r26,r28
	ctx.r10.u64 = ctx.r26.u64 + ctx.r28.u64;
	// xor r9,r21,r11
	ctx.r9.u64 = ctx.r21.u64 ^ ctx.r11.u64;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x880c8740
	if (ctx.cr6.gt) goto loc_880C8740;
	// lwz r30,364(r1)
	ctx.current_instruction = 0x880C8578;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lhz r31,14(r29)
	ctx.current_instruction = 0x880C8580;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r29.u32 + 14);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x880c6ab0
	ctx.lr = 0x880C858C;
	sub_880C6AB0(ctx, base);
loc_880C858C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c8740
	if (!ctx.cr6.eq) goto loc_880C8740;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x880c6ab0
	ctx.lr = 0x880C85A4;
	sub_880C6AB0(ctx, base);
loc_880C85A4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c8740
	if (!ctx.cr6.eq) goto loc_880C8740;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,316(r1)
	ctx.current_instruction = 0x880C85B0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r4,308(r1)
	ctx.current_instruction = 0x880C85B4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x880c6ab0
	ctx.lr = 0x880C85BC;
	sub_880C6AB0(ctx, base);
loc_880C85BC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c8740
	if (!ctx.cr6.eq) goto loc_880C8740;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x880c6ab0
	ctx.lr = 0x880C85D4;
	sub_880C6AB0(ctx, base);
loc_880C85D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c8740
	if (!ctx.cr6.eq) goto loc_880C8740;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lwz r5,300(r1)
	ctx.current_instruction = 0x880C85E0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x880c6ab0
	ctx.lr = 0x880C85EC;
	sub_880C6AB0(ctx, base);
loc_880C85EC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c8740
	if (!ctx.cr6.eq) goto loc_880C8740;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x880c6ab0
	ctx.lr = 0x880C8604;
	sub_880C6AB0(ctx, base);
loc_880C8604:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c8740
	if (!ctx.cr6.eq) goto loc_880C8740;
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880c8624
	if (!ctx.cr6.eq) goto loc_880C8624;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x880c8674
	goto loc_880C8674;
loc_880C8624:
	// cmpw cr6,r7,r25
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x880c8670
	if (ctx.cr6.eq) goto loc_880C8670;
	// cmpw cr6,r7,r22
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x880c8670
	if (ctx.cr6.eq) goto loc_880C8670;
	// cmpw cr6,r7,r20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x880c8670
	if (ctx.cr6.eq) goto loc_880C8670;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x880c864c
	if (!ctx.cr6.eq) goto loc_880C864C;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// b 0x880c8668
	goto loc_880C8668;
loc_880C864C:
	// cmpw cr6,r7,r19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r19.s32, ctx.xer);
	// beq cr6,0x880c8670
	if (ctx.cr6.eq) goto loc_880C8670;
	// cmpw cr6,r7,r18
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r18.s32, ctx.xer);
	// beq cr6,0x880c8670
	if (ctx.cr6.eq) goto loc_880C8670;
	// cmplw cr6,r7,r16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x880c8670
	if (ctx.cr6.eq) goto loc_880C8670;
	// cmplw cr6,r7,r15
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r15.u32, ctx.xer);
loc_880C8668:
	// li r31,0
	ctx.r31.s64 = 0;
	// bne cr6,0x880c8674
	if (!ctx.cr6.eq) goto loc_880C8674;
loc_880C8670:
	// lwz r31,356(r1)
	ctx.current_instruction = 0x880C8670;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
loc_880C8674:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880c6fa0
	ctx.lr = 0x880C8690;
	sub_880C6FA0(ctx, base);
loc_880C8690:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c874c
	if (!ctx.cr6.eq) goto loc_880C874C;
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880C8698;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,0(r17)
	ctx.current_instruction = 0x880C869C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r8,40(r3)
	ctx.current_instruction = 0x880C86AC;
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// lwz r7,16(r29)
	ctx.current_instruction = 0x880C86B0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// lwz r11,8(r29)
	ctx.current_instruction = 0x880C86B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// ble cr6,0x880c86cc
	if (!ctx.cr6.gt) goto loc_880C86CC;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_880C86CC:
	// srawi r10,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r23.s32 >> 31;
	// stw r11,44(r3)
	ctx.current_instruction = 0x880C86D0;
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r21,52(r3)
	ctx.current_instruction = 0x880C86D4;
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r21.u32);
	// xor r9,r23,r10
	ctx.r9.u64 = ctx.r23.u64 ^ ctx.r10.u64;
	// stw r31,340(r3)
	ctx.current_instruction = 0x880C86DC;
	REX_STORE_U32(ctx.r3.u32 + 340, ctx.r31.u32);
	// stw r30,344(r3)
	ctx.current_instruction = 0x880C86E0;
	REX_STORE_U32(ctx.r3.u32 + 344, ctx.r30.u32);
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r8,48(r3)
	ctx.current_instruction = 0x880C86E8;
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// bl 0x880c7e20
	ctx.lr = 0x880C86F0;
	sub_880C7E20(ctx, base);
loc_880C86F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c8708
	if (!ctx.cr6.eq) goto loc_880C8708;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880C8708:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r7,316(r1)
	ctx.current_instruction = 0x880C870C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r6,308(r1)
	ctx.current_instruction = 0x880C8714;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r5,300(r1)
	ctx.current_instruction = 0x880C871C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r28,84(r1)
	ctx.current_instruction = 0x880C8724;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x880c7ed8
	ctx.lr = 0x880C8730;
	sub_880C7ED8(ctx, base);
loc_880C8730:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880C8740:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r17)
	ctx.current_instruction = 0x880C8744;
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
loc_880C8748:
	// li r3,1
	ctx.r3.s64 = 1;
loc_880C874C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CC2D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CC2D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CC2D0) {
			switch (rex_dispatch_address) {
				case 0x880CC2D8:
				case 0x880CC308:
				case 0x880CC324:
				case 0x880CC340:
				case 0x880CC3BC:
				case 0x880CC3D8:
				case 0x880CC3F0:
				case 0x880CC45C:
				case 0x880CC470:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CC2D0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CC2D8: goto loc_880CC2D8;
		case 0x880CC308: goto loc_880CC308;
		case 0x880CC324: goto loc_880CC324;
		case 0x880CC340: goto loc_880CC340;
		case 0x880CC3BC: goto loc_880CC3BC;
		case 0x880CC3D8: goto loc_880CC3D8;
		case 0x880CC3F0: goto loc_880CC3F0;
		case 0x880CC45C: goto loc_880CC45C;
		case 0x880CC470: goto loc_880CC470;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880CC2D8;
	__savegprlr_28(ctx, base);
loc_880CC2D8:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880CC2D8;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x880CC2E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	ctx.current_instruction = 0x880CC2E8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r31,92(r1)
	ctx.current_instruction = 0x880CC2F0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,84(r1)
	ctx.current_instruction = 0x880CC2F4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stb r31,80(r1)
	ctx.current_instruction = 0x880CC2F8;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x880CC2FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880CC308;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880CC308:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc480
	if (ctx.cr6.lt) goto loc_880CC480;
	// lwz r11,24(r30)
	ctx.current_instruction = 0x880CC310;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,40(r11)
	ctx.current_instruction = 0x880CC318;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880CC324;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880CC324:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc480
	if (ctx.cr6.lt) goto loc_880CC480;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r30)
	ctx.current_instruction = 0x880CC330;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x880cb758
	ctx.lr = 0x880CC340;
	sub_880CB758(ctx, base);
loc_880CC340:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r29,r11,22
	ctx.r29.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x880cc464
	if (ctx.cr6.eq) goto loc_880CC464;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc480
	if (ctx.cr6.lt) goto loc_880CC480;
	// li r28,1
	ctx.r28.s64 = 1;
loc_880CC35C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc480
	if (ctx.cr6.lt) goto loc_880CC480;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x880CC364;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,24(r10)
	ctx.current_instruction = 0x880CC368;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r1)
	ctx.current_instruction = 0x880CC370;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x880cc41c
	if (ctx.cr6.eq) goto loc_880CC41C;
loc_880CC378:
	// lwz r9,60(r11)
	ctx.current_instruction = 0x880CC378;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880cc394
	if (ctx.cr6.eq) goto loc_880CC394;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r31,56(r11)
	ctx.current_instruction = 0x880CC388;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.current_instruction = 0x880CC38C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x880CC390;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_880CC394:
	// lwz r11,60(r11)
	ctx.current_instruction = 0x880CC394;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// stw r11,24(r10)
	ctx.current_instruction = 0x880CC398;
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.current_instruction = 0x880CC39C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,44(r11)
	ctx.current_instruction = 0x880CC3A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880cc3e0
	if (ctx.cr6.eq) goto loc_880CC3E0;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r30)
	ctx.current_instruction = 0x880CC3B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x880cb318
	ctx.lr = 0x880CC3BC;
	sub_880CB318(ctx, base);
loc_880CC3BC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc480
	if (ctx.cr6.lt) goto loc_880CC480;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x880CC3C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r30)
	ctx.current_instruction = 0x880CC3CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,44
	ctx.r5.s64 = ctx.r11.s64 + 44;
	// bl 0x880cb318
	ctx.lr = 0x880CC3D8;
	sub_880CB318(ctx, base);
loc_880CC3D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc480
	if (ctx.cr6.lt) goto loc_880CC480;
loc_880CC3E0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r30)
	ctx.current_instruction = 0x880CC3E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x880cb318
	ctx.lr = 0x880CC3F0;
	sub_880CB318(ctx, base);
loc_880CC3F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc480
	if (ctx.cr6.lt) goto loc_880CC480;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880CC3F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x880CC3FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r11)
	ctx.current_instruction = 0x880CC404;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x880CC408;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,24(r10)
	ctx.current_instruction = 0x880CC40C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r1)
	ctx.current_instruction = 0x880CC414;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bne cr6,0x880cc378
	if (!ctx.cr6.eq) goto loc_880CC378;
loc_880CC41C:
	// stw r31,20(r10)
	ctx.current_instruction = 0x880CC41C;
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880CC428;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,32(r11)
	ctx.current_instruction = 0x880CC42C;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x880CC430;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,32(r10)
	ctx.current_instruction = 0x880CC434;
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r31.u32);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x880CC438;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r28,36(r9)
	ctx.current_instruction = 0x880CC43C;
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r28.u32);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x880CC440;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r8)
	ctx.current_instruction = 0x880CC444;
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r31.u32);
	// lwz r7,84(r1)
	ctx.current_instruction = 0x880CC448;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,24(r7)
	ctx.current_instruction = 0x880CC44C;
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r31.u32);
	// lwz r3,72(r30)
	ctx.current_instruction = 0x880CC450;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r4,92(r1)
	ctx.current_instruction = 0x880CC454;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x880cb7c0
	ctx.lr = 0x880CC45C;
	sub_880CB7C0(ctx, base);
loc_880CC45C:
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x880cc35c
	if (!ctx.cr6.eq) goto loc_880CC35C;
loc_880CC464:
	// lwz r4,92(r1)
	ctx.current_instruction = 0x880CC464;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,72(r30)
	ctx.current_instruction = 0x880CC468;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x880cb828
	ctx.lr = 0x880CC470;
	sub_880CB828(ctx, base);
loc_880CC470:
	// std r31,32(r30)
	ctx.current_instruction = 0x880CC470;
	REX_STORE_U64(ctx.r30.u32 + 32, ctx.r31.u64);
	// stw r31,48(r30)
	ctx.current_instruction = 0x880CC474;
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
	// std r31,56(r30)
	ctx.current_instruction = 0x880CC478;
	REX_STORE_U64(ctx.r30.u32 + 56, ctx.r31.u64);
	// stb r31,96(r30)
	ctx.current_instruction = 0x880CC47C;
	REX_STORE_U8(ctx.r30.u32 + 96, ctx.r31.u8);
loc_880CC480:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D15F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D15F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D15F0) {
			switch (rex_dispatch_address) {
				case 0x880D160C:
				case 0x880D1628:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D15F0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D160C: goto loc_880D160C;
		case 0x880D1628: goto loc_880D1628;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880D15F4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880D15F8;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880D15FC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880D1600;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x880d13a8
	ctx.lr = 0x880D160C;
	sub_880D13A8(ctx, base);
loc_880D160C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d1660
	if (ctx.cr6.lt) goto loc_880D1660;
	// li r5,720
	ctx.r5.s64 = 720;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88052d90
	ctx.lr = 0x880D1628;
	sub_88052D90(ctx, base);
loc_880D1628:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,20(r31)
	ctx.current_instruction = 0x880D1634;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,12(r31)
	ctx.current_instruction = 0x880D1638;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,32(r31)
	ctx.current_instruction = 0x880D163C;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	ctx.current_instruction = 0x880D1640;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	ctx.current_instruction = 0x880D1644;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r9,52(r31)
	ctx.current_instruction = 0x880D1648;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// stw r11,56(r31)
	ctx.current_instruction = 0x880D164C;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,216(r31)
	ctx.current_instruction = 0x880D1650;
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// stw r9,164(r31)
	ctx.current_instruction = 0x880D1654;
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// stw r11,692(r31)
	ctx.current_instruction = 0x880D1658;
	REX_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// stw r10,696(r31)
	ctx.current_instruction = 0x880D165C;
	REX_STORE_U32(ctx.r31.u32 + 696, ctx.r10.u32);
loc_880D1660:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880D1668;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880D1670;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880D1674;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880D1BB0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D1BB0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D1BB0) {
			switch (rex_dispatch_address) {
				case 0x880D1BB8:
				case 0x880D1BDC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D1BB0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D1BB8: goto loc_880D1BB8;
		case 0x880D1BDC: goto loc_880D1BDC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880D1BB8;
	__savegprlr_28(ctx, base);
loc_880D1BB8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880D1BB8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.current_instruction = 0x880D1BBC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r3)
	ctx.current_instruction = 0x880D1BC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,34(r31)
	ctx.current_instruction = 0x880D1BC8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r10,468(r31)
	ctx.current_instruction = 0x880D1BCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// rotlwi r5,r11,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// bl 0x88052d90
	ctx.lr = 0x880D1BDC;
	sub_88052D90(ctx, base);
loc_880D1BDC:
	// lhz r9,34(r31)
	ctx.current_instruction = 0x880D1BDC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880d1de4
	if (ctx.cr6.eq) goto loc_880D1DE4;
	// extsh r4,r30
	ctx.r4.s64 = ctx.r30.s16;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// li r30,32767
	ctx.r30.s64 = 32767;
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f0,6732(r11)
	ctx.current_instruction = 0x880D1C08;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
loc_880D1C0C:
	// lwz r11,320(r31)
	ctx.current_instruction = 0x880D1C0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r7,r9,1776
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1776));
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mulli r8,r9,112
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// stw r10,0(r11)
	ctx.current_instruction = 0x880D1C1C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,332(r31)
	ctx.current_instruction = 0x880D1C20;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// stw r5,4(r11)
	ctx.current_instruction = 0x880D1C30;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r5,336(r31)
	ctx.current_instruction = 0x880D1C34;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// stw r5,8(r11)
	ctx.current_instruction = 0x880D1C40;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r10,24(r11)
	ctx.current_instruction = 0x880D1C44;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// addze r8,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r8.s64 = temp.s64;
	// stw r10,28(r11)
	ctx.current_instruction = 0x880D1C4C;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	ctx.current_instruction = 0x880D1C50;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r8,264(r31)
	ctx.current_instruction = 0x880D1C58;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r5,268(r31)
	ctx.current_instruction = 0x880D1C5C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
	// stw r10,40(r11)
	ctx.current_instruction = 0x880D1C60;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,48(r11)
	ctx.current_instruction = 0x880D1C64;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// subf r5,r8,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r8.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,36(r11)
	ctx.current_instruction = 0x880D1C74;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// lwz r8,324(r31)
	ctx.current_instruction = 0x880D1C78;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// stfs f0,72(r11)
	ctx.current_instruction = 0x880D1C7C;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stfs f0,76(r11)
	ctx.current_instruction = 0x880D1C84;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f0,80(r11)
	ctx.current_instruction = 0x880D1C88;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stw r8,56(r11)
	ctx.current_instruction = 0x880D1C8C;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r8.u32);
	// stfs f0,84(r11)
	ctx.current_instruction = 0x880D1C90;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stw r8,144(r11)
	ctx.current_instruction = 0x880D1C94;
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r8.u32);
	// stfs f0,88(r11)
	ctx.current_instruction = 0x880D1C98;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stw r10,64(r11)
	ctx.current_instruction = 0x880D1C9C;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stfs f0,92(r11)
	ctx.current_instruction = 0x880D1CA0;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// sth r30,112(r11)
	ctx.current_instruction = 0x880D1CA4;
	REX_STORE_U16(ctx.r11.u32 + 112, ctx.r30.u16);
	// stfs f0,96(r11)
	ctx.current_instruction = 0x880D1CA8;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// sth r10,122(r11)
	ctx.current_instruction = 0x880D1CAC;
	REX_STORE_U16(ctx.r11.u32 + 122, ctx.r10.u16);
	// stfs f0,100(r11)
	ctx.current_instruction = 0x880D1CB0;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// sth r10,124(r11)
	ctx.current_instruction = 0x880D1CB4;
	REX_STORE_U16(ctx.r11.u32 + 124, ctx.r10.u16);
	// stfs f0,104(r11)
	ctx.current_instruction = 0x880D1CB8;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// sth r10,126(r11)
	ctx.current_instruction = 0x880D1CBC;
	REX_STORE_U16(ctx.r11.u32 + 126, ctx.r10.u16);
	// stfs f0,108(r11)
	ctx.current_instruction = 0x880D1CC0;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// sth r10,128(r11)
	ctx.current_instruction = 0x880D1CC4;
	REX_STORE_U16(ctx.r11.u32 + 128, ctx.r10.u16);
	// stfs f0,156(r11)
	ctx.current_instruction = 0x880D1CC8;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// sth r10,130(r11)
	ctx.current_instruction = 0x880D1CCC;
	REX_STORE_U16(ctx.r11.u32 + 130, ctx.r10.u16);
	// sth r10,132(r11)
	ctx.current_instruction = 0x880D1CD0;
	REX_STORE_U16(ctx.r11.u32 + 132, ctx.r10.u16);
	// sth r10,134(r11)
	ctx.current_instruction = 0x880D1CD4;
	REX_STORE_U16(ctx.r11.u32 + 134, ctx.r10.u16);
	// sth r10,114(r11)
	ctx.current_instruction = 0x880D1CD8;
	REX_STORE_U16(ctx.r11.u32 + 114, ctx.r10.u16);
	// sth r10,118(r11)
	ctx.current_instruction = 0x880D1CDC;
	REX_STORE_U16(ctx.r11.u32 + 118, ctx.r10.u16);
	// lwz r8,280(r31)
	ctx.current_instruction = 0x880D1CE0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x880d1d20
	if (!ctx.cr6.eq) goto loc_880D1D20;
	// lwz r8,256(r31)
	ctx.current_instruction = 0x880D1CEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r6,436(r31)
	ctx.current_instruction = 0x880D1CF0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 436);
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r8,52(r11)
	ctx.current_instruction = 0x880D1D00;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// lwz r6,436(r31)
	ctx.current_instruction = 0x880D1D04;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 436);
	// lwz r5,256(r31)
	ctx.current_instruction = 0x880D1D08;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// mullw r8,r5,r9
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r6,148(r11)
	ctx.current_instruction = 0x880D1D18;
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r6.u32);
	// b 0x880d1d40
	goto loc_880D1D40;
loc_880D1D20:
	// lwz r8,320(r31)
	ctx.current_instruction = 0x880D1D20;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r6,4(r8)
	ctx.current_instruction = 0x880D1D28;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,52(r11)
	ctx.current_instruction = 0x880D1D2C;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r8,320(r31)
	ctx.current_instruction = 0x880D1D30;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r8,4(r5)
	ctx.current_instruction = 0x880D1D38;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r8,148(r11)
	ctx.current_instruction = 0x880D1D3C;
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r8.u32);
loc_880D1D40:
	// stw r10,16(r11)
	ctx.current_instruction = 0x880D1D40;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stw r10,20(r11)
	ctx.current_instruction = 0x880D1D48;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,12(r11)
	ctx.current_instruction = 0x880D1D4C;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r8,304(r31)
	ctx.current_instruction = 0x880D1D50;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r6,416(r31)
	ctx.current_instruction = 0x880D1D58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r6,12(r11)
	ctx.current_instruction = 0x880D1D60;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r6,420(r31)
	ctx.current_instruction = 0x880D1D64;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// lwz r8,304(r31)
	ctx.current_instruction = 0x880D1D68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,424(r11)
	ctx.current_instruction = 0x880D1D74;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r6,16(r11)
	ctx.current_instruction = 0x880D1D7C;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lwz r6,424(r31)
	ctx.current_instruction = 0x880D1D80;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r8,304(r31)
	ctx.current_instruction = 0x880D1D84;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r8,20(r11)
	ctx.current_instruction = 0x880D1D98;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// sth r29,0(r28)
	ctx.current_instruction = 0x880D1D9C;
	REX_STORE_U16(ctx.r28.u32 + 0, ctx.r29.u16);
	// lwz r5,256(r31)
	ctx.current_instruction = 0x880D1DA0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r6,424(r11)
	ctx.current_instruction = 0x880D1DA4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r6,8(r6)
	ctx.current_instruction = 0x880D1DA8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// sth r5,0(r6)
	ctx.current_instruction = 0x880D1DAC;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r5.u16);
	// lwz r5,424(r11)
	ctx.current_instruction = 0x880D1DB0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r8,256(r31)
	ctx.current_instruction = 0x880D1DB4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r5,8(r5)
	ctx.current_instruction = 0x880D1DB8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// sth r8,-2(r5)
	ctx.current_instruction = 0x880D1DBC;
	REX_STORE_U16(ctx.r5.u32 + -2, ctx.r8.u16);
	// lwz r11,424(r11)
	ctx.current_instruction = 0x880D1DC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r8,12(r11)
	ctx.current_instruction = 0x880D1DC4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// sth r10,0(r8)
	ctx.current_instruction = 0x880D1DC8;
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
	// lwz r11,320(r31)
	ctx.current_instruction = 0x880D1DCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r10,172(r7)
	ctx.current_instruction = 0x880D1DD4;
	REX_STORE_U32(ctx.r7.u32 + 172, ctx.r10.u32);
	// lhz r6,34(r31)
	ctx.current_instruction = 0x880D1DD8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x880d1c0c
	if (ctx.cr6.lt) goto loc_880D1C0C;
loc_880D1DE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D8090) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D8090;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D8090) {
			switch (rex_dispatch_address) {
				case 0x880D8098:
				case 0x880D8140:
				case 0x880D8148:
				case 0x880D8170:
				case 0x880D81A8:
				case 0x880D81E0:
				case 0x880D8208:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D8090;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D8098: goto loc_880D8098;
		case 0x880D8140: goto loc_880D8140;
		case 0x880D8148: goto loc_880D8148;
		case 0x880D8170: goto loc_880D8170;
		case 0x880D81A8: goto loc_880D81A8;
		case 0x880D81E0: goto loc_880D81E0;
		case 0x880D8208: goto loc_880D8208;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880D8098;
	__savegprlr_27(ctx, base);
loc_880D8098:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880D8098;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x880d80c4
	if (ctx.cr6.eq) goto loc_880D80C4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x880d80d0
	if (!ctx.cr6.eq) goto loc_880D80D0;
loc_880D80C4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x880d8210
	goto loc_880D8210;
loc_880D80D0:
	// lwz r10,368(r31)
	ctx.current_instruction = 0x880D80D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r9,360(r31)
	ctx.current_instruction = 0x880D80D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// lhz r29,0(r27)
	ctx.current_instruction = 0x880D80D8;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880D80E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// sth r29,80(r1)
	ctx.current_instruction = 0x880D80E4;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// mullw r7,r8,r29
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmpw cr6,r7,r28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x880d8224
	if (ctx.cr6.gt) goto loc_880D8224;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x880d8224
	if (ctx.cr6.gt) goto loc_880D8224;
	// lwz r10,352(r31)
	ctx.current_instruction = 0x880D8100;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880d817c
	if (!ctx.cr6.eq) goto loc_880D817C;
	// lwz r10,420(r31)
	ctx.current_instruction = 0x880D810C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880d8124
	if (ctx.cr6.eq) goto loc_880D8124;
	// lwz r10,424(r31)
	ctx.current_instruction = 0x880D8118;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880d8150
	if (!ctx.cr6.eq) goto loc_880D8150;
loc_880D8124:
	// lwz r11,100(r11)
	ctx.current_instruction = 0x880D8124;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x880d8144
	if (!ctx.cr6.eq) goto loc_880D8144;
	// bl 0x880d3c40
	ctx.lr = 0x880D8140;
	sub_880D3C40(ctx, base);
loc_880D8140:
	// b 0x880d8148
	goto loc_880D8148;
loc_880D8144:
	// bl 0x880d35f0
	ctx.lr = 0x880D8148;
	sub_880D35F0(ctx, base);
loc_880D8148:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d8210
	if (ctx.cr6.lt) goto loc_880D8210;
loc_880D8150:
	// lwz r11,420(r31)
	ctx.current_instruction = 0x880D8150;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880d817c
	if (!ctx.cr6.eq) goto loc_880D817C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d4238
	ctx.lr = 0x880D8170;
	sub_880D4238(ctx, base);
loc_880D8170:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d820c
	if (ctx.cr6.lt) goto loc_880D820C;
	// lhz r29,80(r1)
	ctx.current_instruction = 0x880D8178;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_880D817C:
	// lwz r11,316(r31)
	ctx.current_instruction = 0x880D817C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d81b4
	if (ctx.cr6.eq) goto loc_880D81B4;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d81b4
	if (ctx.cr6.eq) goto loc_880D81B4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d3030
	ctx.lr = 0x880D81A8;
	sub_880D3030(ctx, base);
loc_880D81A8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d820c
	if (ctx.cr6.lt) goto loc_880D820C;
	// lhz r29,80(r1)
	ctx.current_instruction = 0x880D81B0;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_880D81B4:
	// lwz r11,324(r31)
	ctx.current_instruction = 0x880D81B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d81ec
	if (ctx.cr6.eq) goto loc_880D81EC;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d81ec
	if (ctx.cr6.eq) goto loc_880D81EC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d3200
	ctx.lr = 0x880D81E0;
	sub_880D3200(ctx, base);
loc_880D81E0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d820c
	if (ctx.cr6.lt) goto loc_880D820C;
	// lhz r29,80(r1)
	ctx.current_instruction = 0x880D81E8;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_880D81EC:
	// lwz r11,356(r31)
	ctx.current_instruction = 0x880D81EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880d8210
	if (!ctx.cr6.eq) goto loc_880D8210;
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d76e8
	ctx.lr = 0x880D8208;
	sub_880D76E8(ctx, base);
loc_880D8208:
	// b 0x880d8210
	goto loc_880D8210;
loc_880D820C:
	// lhz r29,80(r1)
	ctx.current_instruction = 0x880D820C;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_880D8210:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x880d822c
	if (ctx.cr6.eq) goto loc_880D822C;
	// sth r29,0(r27)
	ctx.current_instruction = 0x880D8218;
	REX_STORE_U16(ctx.r27.u32 + 0, ctx.r29.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_880D8224:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_880D822C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DC3D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880DC3D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880DC3D8) {
			switch (rex_dispatch_address) {
				case 0x880DC3E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880DC3D8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x880DC3E0: goto loc_880DC3E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x880DC3E0;
	__savegprlr_15(ctx, base);
loc_880DC3E0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r4,28(r1)
	ctx.current_instruction = 0x880DC3E4;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r6,44(r1)
	ctx.current_instruction = 0x880DC3E8;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,52(r1)
	ctx.current_instruction = 0x880DC3F0;
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// bge cr6,0x880dc400
	if (!ctx.cr6.lt) goto loc_880DC400;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_880DC400:
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r7,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r7.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r3,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 6;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r11,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r11.s64 = temp.s64;
	// add r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,-160(r1)
	ctx.current_instruction = 0x880DC424;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r11,r10,14
	ctx.r11.s64 = ctx.r10.s64 + 14;
	// addi r10,r8,14
	ctx.r10.s64 = ctx.r8.s64 + 14;
	// li r31,8
	ctx.r31.s64 = 8;
	// subf r29,r4,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r4.u64;
	// addi r9,r5,14
	ctx.r9.s64 = ctx.r5.s64 + 14;
	// addi r8,r6,14
	ctx.r8.s64 = ctx.r6.s64 + 14;
loc_880DC448:
	// lbz r6,-14(r11)
	ctx.current_instruction = 0x880DC448;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -14);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lbz r7,-14(r9)
	ctx.current_instruction = 0x880DC450;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + -14);
	// lbz r4,-13(r11)
	ctx.current_instruction = 0x880DC454;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -13);
	// lbz r5,-13(r9)
	ctx.current_instruction = 0x880DC458;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + -13);
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lbz r6,-12(r9)
	ctx.current_instruction = 0x880DC460;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + -12);
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lbz r4,-12(r11)
	ctx.current_instruction = 0x880DC468;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -12);
	// srawi r28,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 31;
	// lbz r30,-11(r9)
	ctx.current_instruction = 0x880DC470;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + -11);
	// srawi r27,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r5.s32 >> 31;
	// lbz r26,-11(r11)
	ctx.current_instruction = 0x880DC478;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + -11);
	// subf r6,r6,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r6.u64;
	// lbz r25,-10(r11)
	ctx.current_instruction = 0x880DC480;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + -10);
	// xor r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r27.u64;
	// lbz r4,-10(r9)
	ctx.current_instruction = 0x880DC488;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + -10);
	// xor r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// lbz r22,-9(r11)
	ctx.current_instruction = 0x880DC490;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + -9);
	// subf r26,r30,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r30.u64;
	// lbz r24,-9(r9)
	ctx.current_instruction = 0x880DC498;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + -9);
	// srawi r23,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r6.s32 >> 31;
	// lbz r21,-8(r9)
	ctx.current_instruction = 0x880DC4A0;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r9.u32 + -8);
	// subf r30,r27,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r27.u64;
	// lbz r27,-8(r11)
	ctx.current_instruction = 0x880DC4A8;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + -8);
	// subf r5,r28,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r28.u64;
	// lbz r28,-7(r11)
	ctx.current_instruction = 0x880DC4B0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + -7);
	// xor r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r23.u64;
	// lbz r7,-7(r9)
	ctx.current_instruction = 0x880DC4B8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + -7);
	// srawi r20,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r26.s32 >> 31;
	// lbz r19,-6(r9)
	ctx.current_instruction = 0x880DC4C0;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r9.u32 + -6);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lbz r18,-6(r11)
	ctx.current_instruction = 0x880DC4C8;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// subf r4,r4,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r4.u64;
	// lbz r25,-5(r9)
	ctx.current_instruction = 0x880DC4D0;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + -5);
	// subf r30,r23,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r23.u64;
	// lbz r6,-5(r11)
	ctx.current_instruction = 0x880DC4D8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -5);
	// xor r26,r26,r20
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r20.u64;
	// lbz r23,-4(r9)
	ctx.current_instruction = 0x880DC4E0;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r9.u32 + -4);
	// srawi r17,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r4.s32 >> 31;
	// lbz r16,-4(r11)
	ctx.current_instruction = 0x880DC4E8;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lbz r15,-3(r9)
	ctx.current_instruction = 0x880DC4F0;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r9.u32 + -3);
	// subf r24,r24,r22
	ctx.r24.u64 = ctx.r22.u64 - ctx.r24.u64;
	// lbz r22,-3(r11)
	ctx.current_instruction = 0x880DC4F8;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// subf r30,r20,r26
	ctx.r30.u64 = ctx.r26.u64 - ctx.r20.u64;
	// xor r4,r4,r17
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r17.u64;
	// srawi r26,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r24.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r27,r21,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r21.u64;
	// subf r30,r17,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r17.u64;
	// xor r4,r24,r26
	ctx.r4.u64 = ctx.r24.u64 ^ ctx.r26.u64;
	// srawi r24,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r27.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r7,r7,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r7.u64;
	// subf r30,r26,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r26.u64;
	// xor r4,r27,r24
	ctx.r4.u64 = ctx.r27.u64 ^ ctx.r24.u64;
	// srawi r28,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r27,r19,r18
	ctx.r27.u64 = ctx.r18.u64 - ctx.r19.u64;
	// subf r30,r24,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r24.u64;
	// xor r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// srawi r4,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r6,r25,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r25.u64;
	// subf r30,r28,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r28.u64;
	// xor r7,r27,r4
	ctx.r7.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// srawi r28,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r6.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r27,r23,r16
	ctx.r27.u64 = ctx.r16.u64 - ctx.r23.u64;
	// subf r30,r4,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r4.u64;
	// xor r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r28.u64;
	// srawi r4,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r30,r28,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r28.u64;
	// xor r7,r27,r4
	ctx.r7.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r30,r4,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r6,r15,r22
	ctx.r6.u64 = ctx.r22.u64 - ctx.r15.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// srawi r4,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// xor r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// lbz r7,-2(r9)
	ctx.current_instruction = 0x880DC590;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + -2);
	// lbz r28,-2(r11)
	ctx.current_instruction = 0x880DC594;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// subf r30,r4,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r4.u64;
	// lbz r27,-1(r9)
	ctx.current_instruction = 0x880DC59C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// subf r4,r7,r28
	ctx.r4.u64 = ctx.r28.u64 - ctx.r7.u64;
	// lbz r7,-1(r11)
	ctx.current_instruction = 0x880DC5A4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lbz r28,1(r11)
	ctx.current_instruction = 0x880DC5AC;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srawi r30,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r4.s32 >> 31;
	// lbz r6,1(r9)
	ctx.current_instruction = 0x880DC5B4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// subf r7,r27,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r27.u64;
	// lbz r26,-14(r10)
	ctx.current_instruction = 0x880DC5BC;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + -14);
	// xor r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r30.u64;
	// lbz r27,-14(r8)
	ctx.current_instruction = 0x880DC5C4;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r8.u32 + -14);
	// srawi r25,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r7.s32 >> 31;
	// lbz r24,-13(r8)
	ctx.current_instruction = 0x880DC5CC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r8.u32 + -13);
	// subf r6,r6,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r6.u64;
	// lbz r28,-13(r10)
	ctx.current_instruction = 0x880DC5D4;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + -13);
	// subf r30,r30,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r30.u64;
	// lbz r23,-12(r10)
	ctx.current_instruction = 0x880DC5DC;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + -12);
	// xor r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r25.u64;
	// lbz r4,-12(r8)
	ctx.current_instruction = 0x880DC5E4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + -12);
	// srawi r22,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r6.s32 >> 31;
	// lbz r21,-11(r8)
	ctx.current_instruction = 0x880DC5EC;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r8.u32 + -11);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lbz r20,-11(r10)
	ctx.current_instruction = 0x880DC5F4;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + -11);
	// subf r27,r27,r26
	ctx.r27.u64 = ctx.r26.u64 - ctx.r27.u64;
	// lbz r26,-10(r8)
	ctx.current_instruction = 0x880DC5FC;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r8.u32 + -10);
	// subf r30,r25,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r25.u64;
	// lbz r7,-10(r10)
	ctx.current_instruction = 0x880DC604;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + -10);
	// xor r6,r6,r22
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r22.u64;
	// lbz r25,-9(r8)
	ctx.current_instruction = 0x880DC60C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r8.u32 + -9);
	// srawi r19,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r19.s64 = ctx.r27.s32 >> 31;
	// lbz r18,-9(r10)
	ctx.current_instruction = 0x880DC614;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + -9);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lbz r17,-8(r8)
	ctx.current_instruction = 0x880DC61C;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r8.u32 + -8);
	// subf r28,r24,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r24.u64;
	// lbz r24,-8(r10)
	ctx.current_instruction = 0x880DC624;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + -8);
	// subf r30,r22,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r22.u64;
	// lbz r6,-7(r8)
	ctx.current_instruction = 0x880DC62C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + -7);
	// xor r27,r27,r19
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r19.u64;
	// lbz r22,-7(r10)
	ctx.current_instruction = 0x880DC634;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + -7);
	// srawi r16,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r28.s32 >> 31;
	// lbz r15,-6(r8)
	ctx.current_instruction = 0x880DC63C;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r8.u32 + -6);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r4,r4,r23
	ctx.r4.u64 = ctx.r23.u64 - ctx.r4.u64;
	// subf r30,r19,r27
	ctx.r30.u64 = ctx.r27.u64 - ctx.r19.u64;
	// xor r28,r28,r16
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r16.u64;
	// srawi r27,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r4.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r23,r21,r20
	ctx.r23.u64 = ctx.r20.u64 - ctx.r21.u64;
	// subf r30,r16,r28
	ctx.r30.u64 = ctx.r28.u64 - ctx.r16.u64;
	// xor r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r27.u64;
	// srawi r28,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r23.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r7,r26,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r26.u64;
	// subf r30,r27,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r27.u64;
	// xor r4,r23,r28
	ctx.r4.u64 = ctx.r23.u64 ^ ctx.r28.u64;
	// srawi r27,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r7.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r26,r25,r18
	ctx.r26.u64 = ctx.r18.u64 - ctx.r25.u64;
	// subf r30,r28,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r28.u64;
	// xor r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r27.u64;
	// srawi r4,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r26.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r28,r17,r24
	ctx.r28.u64 = ctx.r24.u64 - ctx.r17.u64;
	// subf r30,r27,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r27.u64;
	// xor r7,r26,r4
	ctx.r7.u64 = ctx.r26.u64 ^ ctx.r4.u64;
	// srawi r27,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r28.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r6,r6,r22
	ctx.r6.u64 = ctx.r22.u64 - ctx.r6.u64;
	// subf r30,r4,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r4.u64;
	// xor r4,r28,r27
	ctx.r4.u64 = ctx.r28.u64 ^ ctx.r27.u64;
	// srawi r7,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r30,r27,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r27.u64;
	// xor r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r30,r7,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r7.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lbz r4,-6(r10)
	ctx.current_instruction = 0x880DC6D0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + -6);
	// lbz r7,-5(r8)
	ctx.current_instruction = 0x880DC6D4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + -5);
	// subf r6,r15,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r15.u64;
	// lbz r4,-5(r10)
	ctx.current_instruction = 0x880DC6DC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + -5);
	// lbz r30,-4(r8)
	ctx.current_instruction = 0x880DC6E0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r8.u32 + -4);
	// srawi r28,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r6.s32 >> 31;
	// lbz r27,-4(r10)
	ctx.current_instruction = 0x880DC6E8;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + -4);
	// subf r7,r7,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r7.u64;
	// lbz r26,-3(r10)
	ctx.current_instruction = 0x880DC6F0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// xor r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r28.u64;
	// lbz r4,-3(r8)
	ctx.current_instruction = 0x880DC6F8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + -3);
	// srawi r25,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r7.s32 >> 31;
	// lbz r24,-2(r8)
	ctx.current_instruction = 0x880DC700;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r8.u32 + -2);
	// subf r27,r30,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r30.u64;
	// lbz r23,-2(r10)
	ctx.current_instruction = 0x880DC708;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// subf r30,r28,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r28.u64;
	// lbz r28,-1(r10)
	ctx.current_instruction = 0x880DC710;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// xor r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r25.u64;
	// lbz r6,-1(r8)
	ctx.current_instruction = 0x880DC718;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
	// srawi r22,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r27.s32 >> 31;
	// lbz r21,1(r8)
	ctx.current_instruction = 0x880DC720;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lbz r20,1(r10)
	ctx.current_instruction = 0x880DC728;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r4,r4,r26
	ctx.r4.u64 = ctx.r26.u64 - ctx.r4.u64;
	// lbz r26,0(r8)
	ctx.current_instruction = 0x880DC730;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// subf r30,r25,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r25.u64;
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880DC738;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// xor r27,r27,r22
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r22.u64;
	// lbz r25,0(r9)
	ctx.current_instruction = 0x880DC740;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// srawi r19,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r19.s64 = ctx.r4.s32 >> 31;
	// lbz r18,0(r11)
	ctx.current_instruction = 0x880DC748;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r24,r24,r23
	ctx.r24.u64 = ctx.r23.u64 - ctx.r24.u64;
	// subf r30,r22,r27
	ctx.r30.u64 = ctx.r27.u64 - ctx.r22.u64;
	// xor r4,r4,r19
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r19.u64;
	// srawi r27,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r24.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r6,r6,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r6.u64;
	// subf r30,r19,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r19.u64;
	// xor r4,r24,r27
	ctx.r4.u64 = ctx.r24.u64 ^ ctx.r27.u64;
	// srawi r28,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r6.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r24,r21,r20
	ctx.r24.u64 = ctx.r20.u64 - ctx.r21.u64;
	// subf r30,r27,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r27.u64;
	// xor r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r28.u64;
	// srawi r4,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r24.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r7,r26,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r26.u64;
	// subf r30,r28,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r28.u64;
	// xor r6,r24,r4
	ctx.r6.u64 = ctx.r24.u64 ^ ctx.r4.u64;
	// srawi r28,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r27,r25,r18
	ctx.r27.u64 = ctx.r18.u64 - ctx.r25.u64;
	// subf r30,r4,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r4.u64;
	// xor r4,r7,r28
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// srawi r7,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r27.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r30,r28,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r28.u64;
	// xor r6,r27,r7
	ctx.r6.u64 = ctx.r27.u64 ^ ctx.r7.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r30,r7,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r7.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 + ctx.r3.u64;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x880dc834
	if (!ctx.cr6.lt) goto loc_880DC834;
	// lwz r7,28(r1)
	ctx.current_instruction = 0x880DC7D4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r6,-160(r1)
	ctx.current_instruction = 0x880DC7DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r7,44(r1)
	ctx.current_instruction = 0x880DC7E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// add r29,r29,r6
	ctx.r29.u64 = ctx.r29.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// bne cr6,0x880dc448
	if (!ctx.cr6.eq) goto loc_880DC448;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_880DC800:
	// subfic r11,r31,8
	ctx.xer.ca = ctx.r31.u32 <= 8;
	ctx.r11.u64 = static_cast<uint64_t>(8) - ctx.r31.u64;
	// lis r10,-30679
	ctx.r10.s64 = -2010578944;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// std r9,-160(r1)
	ctx.current_instruction = 0x880DC810;
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r9.u64);
	// lfd f0,-160(r1)
	ctx.current_instruction = 0x880DC814;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-28372(r10)
	ctx.current_instruction = 0x880DC820;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -28372);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,14504(r8)
	ctx.current_instruction = 0x880DC824;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 14504);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,-28372(r10)
	ctx.current_instruction = 0x880DC82C;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -28372, temp.u32);
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_880DC834:
	// lwz r3,52(r1)
	ctx.current_instruction = 0x880DC834;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// b 0x880dc800
	goto loc_880DC800;
}

DEFINE_REX_FUNC(sub_880E5A70) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880E5A70;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880E5A70) {
			switch (rex_dispatch_address) {
				case 0x880E5C08:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E5A70;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880E5C08: goto loc_880E5C08;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880E5A74;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880E5A78;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880E5A7C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r5,4096
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4096, ctx.xer);
	// bgt cr6,0x880e5c08
	if (ctx.cr6.gt) goto loc_880E5C08;
	// ld r11,736(r3)
	ctx.current_instruction = 0x880E5A88;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 736);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// beq cr6,0x880e5c08
	if (ctx.cr6.eq) goto loc_880E5C08;
	// cmpwi cr6,r5,12
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 12, ctx.xer);
	// blt cr6,0x880e5c08
	if (ctx.cr6.lt) goto loc_880E5C08;
	// lwz r11,30304(r3)
	ctx.current_instruction = 0x880E5A9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30304);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e5b08
	if (ctx.cr6.eq) goto loc_880E5B08;
	// lwz r11,30224(r3)
	ctx.current_instruction = 0x880E5AAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30224);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x880e5b08
	if (!ctx.cr6.gt) goto loc_880E5B08;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880e5ac8
	if (!ctx.cr6.eq) goto loc_880E5AC8;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x880e5ad4
	goto loc_880E5AD4;
loc_880E5AC8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x880e5ad4
	if (!ctx.cr6.eq) goto loc_880E5AD4;
	// li r10,2
	ctx.r10.s64 = 2;
loc_880E5AD4:
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,5024
	ctx.r11.s64 = ctx.r11.s64 + 5024;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// lwzx r9,r8,r11
	ctx.current_instruction = 0x880E5AF0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880e5be0
	goto loc_880E5BE0;
loc_880E5B08:
	// lwz r11,30904(r3)
	ctx.current_instruction = 0x880E5B08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// addi r11,r11,5024
	ctx.r11.s64 = ctx.r11.s64 + 5024;
	// beq cr6,0x880e5b24
	if (ctx.cr6.eq) goto loc_880E5B24;
	// lwz r10,30960(r3)
	ctx.current_instruction = 0x880E5B1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30960);
	// b 0x880e5bb8
	goto loc_880E5BB8;
loc_880E5B24:
	// lwz r9,16(r3)
	ctx.current_instruction = 0x880E5B24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r8,r11,96
	ctx.r8.s64 = ctx.r11.s64 + 96;
	// lwz r10,1416(r3)
	ctx.current_instruction = 0x880E5B2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1416);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r8
	ctx.current_instruction = 0x880E5B34;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x880e5c08
	if (!ctx.cr6.gt) goto loc_880E5C08;
	// addi r8,r11,112
	ctx.r8.s64 = ctx.r11.s64 + 112;
	// lwzx r7,r9,r8
	ctx.current_instruction = 0x880E5B44;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880e5b58
	if (!ctx.cr6.lt) goto loc_880E5B58;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880e5bb8
	goto loc_880E5BB8;
loc_880E5B58:
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// lwzx r7,r9,r8
	ctx.current_instruction = 0x880E5B5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880e5b70
	if (!ctx.cr6.lt) goto loc_880E5B70;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x880e5bb8
	goto loc_880E5BB8;
loc_880E5B70:
	// addi r8,r11,144
	ctx.r8.s64 = ctx.r11.s64 + 144;
	// lwzx r7,r9,r8
	ctx.current_instruction = 0x880E5B74;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880e5b88
	if (!ctx.cr6.lt) goto loc_880E5B88;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x880e5bb8
	goto loc_880E5BB8;
loc_880E5B88:
	// addi r8,r11,160
	ctx.r8.s64 = ctx.r11.s64 + 160;
	// lwzx r7,r9,r8
	ctx.current_instruction = 0x880E5B8C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880e5ba0
	if (!ctx.cr6.lt) goto loc_880E5BA0;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x880e5bb8
	goto loc_880E5BB8;
loc_880E5BA0:
	// addi r8,r11,176
	ctx.r8.s64 = ctx.r11.s64 + 176;
	// lwzx r7,r9,r8
	ctx.current_instruction = 0x880E5BA4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// li r10,4
	ctx.r10.s64 = 4;
	// blt cr6,0x880e5bb8
	if (ctx.cr6.lt) goto loc_880E5BB8;
	// li r10,5
	ctx.r10.s64 = 5;
loc_880E5BB8:
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r11,192
	ctx.r10.s64 = ctx.r11.s64 + 192;
	// lwzx r9,r8,r11
	ctx.current_instruction = 0x880E5BCC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_880E5BE0:
	// stw r9,21260(r3)
	ctx.current_instruction = 0x880E5BE0;
	REX_STORE_U32(ctx.r3.u32 + 21260, ctx.r9.u32);
	// li r4,22
	ctx.r4.s64 = 22;
	// lwzx r11,r8,r7
	ctx.current_instruction = 0x880E5BE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r11,21264(r3)
	ctx.current_instruction = 0x880E5BEC;
	REX_STORE_U32(ctx.r3.u32 + 21264, ctx.r11.u32);
	// lwzx r10,r8,r6
	ctx.current_instruction = 0x880E5BF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// stw r10,21268(r3)
	ctx.current_instruction = 0x880E5BF4;
	REX_STORE_U32(ctx.r3.u32 + 21268, ctx.r10.u32);
	// lwzx r9,r8,r31
	ctx.current_instruction = 0x880E5BF8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r9,21272(r3)
	ctx.current_instruction = 0x880E5BFC;
	REX_STORE_U32(ctx.r3.u32 + 21272, ctx.r9.u32);
	// stw r5,21276(r3)
	ctx.current_instruction = 0x880E5C00;
	REX_STORE_U32(ctx.r3.u32 + 21276, ctx.r5.u32);
	// bl 0x880f40c0
	ctx.lr = 0x880E5C08;
	sub_880F40C0(ctx, base);
loc_880E5C08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880E5C0C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880E5C14;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E9748) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880E9748;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880E9748) {
			switch (rex_dispatch_address) {
				case 0x880E9750:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E9748;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x880E9750: goto loc_880E9750;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880E9750;
	__savegprlr_14(ctx, base);
loc_880E9750:
	// lwz r25,796(r3)
	ctx.current_instruction = 0x880E9750;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// lwz r10,6844(r3)
	ctx.current_instruction = 0x880E9754;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6844);
	// rlwinm r31,r25,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,20(r1)
	ctx.current_instruction = 0x880E975C;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// srawi. r16,r25,4
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xF) != 0);
	ctx.r16.s64 = ctx.r25.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// stw r31,-312(r1)
	ctx.current_instruction = 0x880E9764;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r31.u32);
	// add r18,r31,r10
	ctx.r18.u64 = ctx.r31.u64 + ctx.r10.u64;
	// beq 0x880eb11c
	if (ctx.cr0.eq) goto loc_880EB11C;
	// rlwinm r11,r16,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 4) & 0xFFFFFFF0;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r19,r11,-2
	ctx.r19.s64 = ctx.r11.s64 + -2;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// stw r29,7208(r3)
	ctx.current_instruction = 0x880E9780;
	REX_STORE_U32(ctx.r3.u32 + 7208, ctx.r29.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// mr r15,r29
	ctx.r15.u64 = ctx.r29.u64;
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// ble cr6,0x880e98d8
	if (!ctx.cr6.gt) goto loc_880E98D8;
	// addi r9,r19,-2
	ctx.r9.s64 = ctx.r19.s64 + -2;
	// li r30,64
	ctx.r30.s64 = 64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x880e9874
	if (ctx.cr6.lt) goto loc_880E9874;
	// addi r24,r18,-2
	ctx.r24.s64 = ctx.r18.s64 + -2;
	// addi r23,r18,2
	ctx.r23.s64 = ctx.r18.s64 + 2;
	// addi r22,r18,-1
	ctx.r22.s64 = ctx.r18.s64 + -1;
	// addi r21,r18,3
	ctx.r21.s64 = ctx.r18.s64 + 3;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r20,r19,-1
	ctx.r20.s64 = ctx.r19.s64 + -1;
loc_880E97C8:
	// lbzx r6,r11,r10
	ctx.current_instruction = 0x880E97C8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r5,r24,r11
	ctx.current_instruction = 0x880E97CC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// lbzx r4,r23,r11
	ctx.current_instruction = 0x880E97D0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// subf r8,r5,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r5.u64;
	// lbzx r3,r9,r11
	ctx.current_instruction = 0x880E97D8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// subf r5,r4,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r4.u64;
	// lbzx r4,r22,r11
	ctx.current_instruction = 0x880E97E0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lbzx r31,r21,r11
	ctx.current_instruction = 0x880E97E8;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// subf r7,r4,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r4.u64;
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// srawi r14,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r14.s64 = ctx.r8.s32 >> 15;
	// subfic r6,r6,192
	ctx.xer.ca = ctx.r6.u32 <= 192;
	ctx.r6.u64 = static_cast<uint64_t>(192) - ctx.r6.u64;
	// subf r6,r31,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r31.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subfe r31,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r4,r30,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r30.u32;
	ctx.r4.u64 = ctx.r4.u64 - ctx.r30.u64;
	// xor r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// srawi r4,r7,15
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 15;
	// subfic r3,r3,192
	ctx.xer.ca = ctx.r3.u32 <= 192;
	ctx.r3.u64 = static_cast<uint64_t>(192) - ctx.r3.u64;
	// clrlwi r8,r6,31
	ctx.r8.u64 = ctx.r6.u32 & 0x1;
	// subfe r3,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r7,r30,r5
	ctx.xer.ca = ctx.r5.u32 >= ctx.r30.u32;
	ctx.r7.u64 = ctx.r5.u64 - ctx.r30.u64;
	// clrlwi r7,r31,31
	ctx.r7.u64 = ctx.r31.u32 & 0x1;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r14,31
	ctx.r5.u64 = ctx.r14.u32 & 0x1;
	// clrlwi r6,r6,31
	ctx.r6.u64 = ctx.r6.u32 & 0x1;
	// add r8,r29,r8
	ctx.r8.u64 = ctx.r29.u64 + ctx.r8.u64;
	// clrlwi r4,r4,31
	ctx.r4.u64 = ctx.r4.u32 & 0x1;
	// clrlwi r31,r3,31
	ctx.r31.u64 = ctx.r3.u32 & 0x1;
	// add r6,r26,r6
	ctx.r6.u64 = ctx.r26.u64 + ctx.r6.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r29,r8,r7
	ctx.r29.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r28,r5,r28
	ctx.r28.u64 = ctx.r5.u64 + ctx.r28.u64;
	// add r27,r4,r27
	ctx.r27.u64 = ctx.r4.u64 + ctx.r27.u64;
	// add r26,r6,r31
	ctx.r26.u64 = ctx.r6.u64 + ctx.r31.u64;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x880e97c8
	if (ctx.cr6.lt) goto loc_880E97C8;
	// lwz r3,20(r1)
	ctx.current_instruction = 0x880E986C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r31,-312(r1)
	ctx.current_instruction = 0x880E9870;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
loc_880E9874:
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x880e98c4
	if (!ctx.cr6.lt) goto loc_880E98C4;
	// add r9,r11,r18
	ctx.r9.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lbzx r8,r11,r10
	ctx.current_instruction = 0x880E9880;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lbz r6,-2(r9)
	ctx.current_instruction = 0x880E9888;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + -2);
	// lbz r5,2(r9)
	ctx.current_instruction = 0x880E988C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// subf r9,r6,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r4,r5,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r5.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// xor r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// srawi r6,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 15;
	// subfic r5,r8,192
	ctx.xer.ca = ctx.r8.u32 <= 192;
	ctx.r5.u64 = static_cast<uint64_t>(192) - ctx.r8.u64;
	// clrlwi r15,r6,31
	ctx.r15.u64 = ctx.r6.u32 & 0x1;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r9,r30,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r30.u32;
	ctx.r9.u64 = ctx.r8.u64 - ctx.r30.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	// add r17,r9,r11
	ctx.r17.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_880E98C4:
	// add r11,r26,r29
	ctx.r11.u64 = ctx.r26.u64 + ctx.r29.u64;
	// add r9,r27,r28
	ctx.r9.u64 = ctx.r27.u64 + ctx.r28.u64;
	// add r17,r11,r17
	ctx.r17.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r15,r9,r15
	ctx.r15.u64 = ctx.r9.u64 + ctx.r15.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_880E98D8:
	// rlwinm r11,r16,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880eb11c
	if (!ctx.cr6.gt) goto loc_880EB11C;
	// rlwinm r11,r16,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r16,r11
	ctx.r11.u64 = ctx.r16.u64 + ctx.r11.u64;
	// cmpw cr6,r15,r11
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880eb11c
	if (!ctx.cr6.lt) goto loc_880EB11C;
	// rlwinm r8,r25,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,7204(r3)
	ctx.current_instruction = 0x880E98F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 7204);
	// rlwinm r7,r25,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r25,r8
	ctx.r6.u64 = ctx.r25.u64 + ctx.r8.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r5,r25,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r25.u64;
	// addi r4,r1,-416
	ctx.r4.s64 = ctx.r1.s64 + -416;
	// addi r30,r1,-368
	ctx.r30.s64 = ctx.r1.s64 + -368;
	// addi r28,r1,-384
	ctx.r28.s64 = ctx.r1.s64 + -384;
	// add r21,r6,r10
	ctx.r21.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r8,r25,r10
	ctx.r8.u64 = ctx.r25.u64 + ctx.r10.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r29,0(r4)
	ctx.current_instruction = 0x880E9924;
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r29.u64);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// std r29,0(r30)
	ctx.current_instruction = 0x880E992C;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// addi r18,r8,8
	ctx.r18.s64 = ctx.r8.s64 + 8;
	// std r29,0(r28)
	ctx.current_instruction = 0x880E9934;
	REX_STORE_U64(ctx.r28.u32 + 0, ctx.r29.u64);
	// addi r8,r7,8
	ctx.r8.s64 = ctx.r7.s64 + 8;
	// std r29,8(r4)
	ctx.current_instruction = 0x880E993C;
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r29.u64);
	// addi r20,r10,8
	ctx.r20.s64 = ctx.r10.s64 + 8;
	// std r29,8(r30)
	ctx.current_instruction = 0x880E9944;
	REX_STORE_U64(ctx.r30.u32 + 8, ctx.r29.u64);
	// std r29,8(r28)
	ctx.current_instruction = 0x880E9948;
	REX_STORE_U64(ctx.r28.u32 + 8, ctx.r29.u64);
	// addi r4,r21,8
	ctx.r4.s64 = ctx.r21.s64 + 8;
	// stw r21,-260(r1)
	ctx.current_instruction = 0x880E9950;
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r21.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// stw r18,-248(r1)
	ctx.current_instruction = 0x880E9958;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r18.u32);
	// stw r8,-252(r1)
	ctx.current_instruction = 0x880E995C;
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r8.u32);
	// stw r20,-264(r1)
	ctx.current_instruction = 0x880E9960;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r20.u32);
	// bne cr6,0x880ea490
	if (!ctx.cr6.eq) goto loc_880EA490;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x880eafb8
	if (!ctx.cr6.gt) goto loc_880EAFB8;
	// subfic r10,r25,3
	ctx.xer.ca = ctx.r25.u32 <= 3;
	ctx.r10.u64 = static_cast<uint64_t>(3) - ctx.r25.u64;
	// lwz r29,-404(r1)
	ctx.current_instruction = 0x880E9974;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -404);
	// subf r8,r25,r21
	ctx.r8.u64 = ctx.r21.u64 - ctx.r25.u64;
	// stw r16,-272(r1)
	ctx.current_instruction = 0x880E997C;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r16.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r11,r21
	ctx.r7.u64 = ctx.r21.u64 - ctx.r11.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r31,r21
	ctx.r11.u64 = ctx.r31.u64 + ctx.r21.u64;
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r6,-244(r1)
	ctx.current_instruction = 0x880E999C;
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r6.u32);
	// add r8,r9,r21
	ctx.r8.u64 = ctx.r9.u64 + ctx.r21.u64;
	// stw r7,-232(r1)
	ctx.current_instruction = 0x880E99A4;
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r7.u32);
	// stw r10,-292(r1)
	ctx.current_instruction = 0x880E99A8;
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r10.u32);
	// stw r8,-312(r1)
	ctx.current_instruction = 0x880E99AC;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r8.u32);
loc_880E99B0:
	// li r11,2
	ctx.r11.s64 = 2;
	// subf r9,r4,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r4.u64;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// subf r7,r4,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r6,r4,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r3,r10,-2
	ctx.r3.s64 = ctx.r10.s64 + -2;
	// addi r31,r9,-9
	ctx.r31.s64 = ctx.r9.s64 + -9;
	// addi r30,r8,-1
	ctx.r30.s64 = ctx.r8.s64 + -1;
	// stw r3,-168(r1)
	ctx.current_instruction = 0x880E99D8;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// addi r27,r7,-2
	ctx.r27.s64 = ctx.r7.s64 + -2;
	// stw r31,-180(r1)
	ctx.current_instruction = 0x880E99E0;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r31.u32);
	// addi r26,r6,-2
	ctx.r26.s64 = ctx.r6.s64 + -2;
	// stw r30,-176(r1)
	ctx.current_instruction = 0x880E99E8;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,-172(r1)
	ctx.current_instruction = 0x880E99F0;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r27.u32);
	// stw r26,-184(r1)
	ctx.current_instruction = 0x880E99F4;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r26.u32);
	// b 0x880e9a18
	goto loc_880E9A18;
loc_880E99FC:
	// lwz r31,-180(r1)
	ctx.current_instruction = 0x880E99FC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// lwz r30,-176(r1)
	ctx.current_instruction = 0x880E9A00;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r3,-168(r1)
	ctx.current_instruction = 0x880E9A04;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r27,-172(r1)
	ctx.current_instruction = 0x880E9A08;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r26,-184(r1)
	ctx.current_instruction = 0x880E9A0C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r20,-264(r1)
	ctx.current_instruction = 0x880E9A10;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// lwz r21,-260(r1)
	ctx.current_instruction = 0x880E9A14;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
loc_880E9A18:
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r6,-252(r1)
	ctx.current_instruction = 0x880E9A1C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// std r4,-320(r1)
	ctx.current_instruction = 0x880E9A24;
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.r4.u64);
	// subf r5,r4,r20
	ctx.r5.u64 = ctx.r20.u64 - ctx.r4.u64;
	// std r11,-344(r1)
	ctx.current_instruction = 0x880E9A2C;
	REX_STORE_U64(ctx.r1.u32 + -344, ctx.r11.u64);
	// subf r8,r4,r21
	ctx.r8.u64 = ctx.r21.u64 - ctx.r4.u64;
	// lwz r25,-412(r1)
	ctx.current_instruction = 0x880E9A34;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -412);
	// lwz r16,-416(r1)
	ctx.current_instruction = 0x880E9A38;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -416);
	// lbzx r24,r10,r3
	ctx.current_instruction = 0x880E9A3C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// subf r3,r4,r18
	ctx.r3.u64 = ctx.r18.u64 - ctx.r4.u64;
	// lbzx r7,r11,r9
	ctx.current_instruction = 0x880E9A44;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r9,r21,1
	ctx.r9.s64 = ctx.r21.s64 + 1;
	// lbzx r23,r10,r5
	ctx.current_instruction = 0x880E9A4C;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lbzx r5,r10,r30
	ctx.current_instruction = 0x880E9A50;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// lbzx r8,r10,r8
	ctx.current_instruction = 0x880E9A54;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// lbzx r30,r10,r3
	ctx.current_instruction = 0x880E9A58;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// subf r3,r4,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r4.u64;
	// lbzx r6,r9,r11
	ctx.current_instruction = 0x880E9A60;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// mullw r28,r5,r5
	ctx.r28.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// lbzx r9,r11,r4
	ctx.current_instruction = 0x880E9A68;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stw r28,-424(r1)
	ctx.current_instruction = 0x880E9A6C;
	REX_STORE_U32(ctx.r1.u32 + -424, ctx.r28.u32);
	// lbzx r31,r10,r31
	ctx.current_instruction = 0x880E9A70;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// lbzx r3,r10,r3
	ctx.current_instruction = 0x880E9A74;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// std r7,-280(r1)
	ctx.current_instruction = 0x880E9A78;
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.r7.u64);
	// std r6,-328(r1)
	ctx.current_instruction = 0x880E9A7C;
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.r6.u64);
	// stw r3,-396(r1)
	ctx.current_instruction = 0x880E9A80;
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r3.u32);
	// add r28,r29,r9
	ctx.r28.u64 = ctx.r29.u64 + ctx.r9.u64;
	// lbzx r29,r10,r27
	ctx.current_instruction = 0x880E9A88;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// lbzx r10,r10,r26
	ctx.current_instruction = 0x880E9A8C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r26.u32);
	// mullw r27,r30,r30
	ctx.r27.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r30.s32);
	// stw r27,-288(r1)
	ctx.current_instruction = 0x880E9A94;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r27.u32);
	// stw r10,-308(r1)
	ctx.current_instruction = 0x880E9A98;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r10.u32);
	// subf r27,r23,r9
	ctx.r27.u64 = ctx.r9.u64 - ctx.r23.u64;
	// subf r26,r24,r8
	ctx.r26.u64 = ctx.r8.u64 - ctx.r24.u64;
	// lwz r15,-424(r1)
	ctx.current_instruction = 0x880E9AA4;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -424);
	// subf r24,r9,r5
	ctx.r24.u64 = ctx.r5.u64 - ctx.r9.u64;
	// srawi r22,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r27.s32 >> 31;
	// subf r23,r8,r31
	ctx.r23.u64 = ctx.r31.u64 - ctx.r8.u64;
	// subf r21,r9,r30
	ctx.r21.u64 = ctx.r30.u64 - ctx.r9.u64;
	// srawi r20,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r26.s32 >> 31;
	// srawi r18,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r24.s32 >> 31;
	// add r28,r28,r8
	ctx.r28.u64 = ctx.r28.u64 + ctx.r8.u64;
	// subf r19,r8,r29
	ctx.r19.u64 = ctx.r29.u64 - ctx.r8.u64;
	// subf r14,r9,r3
	ctx.r14.u64 = ctx.r3.u64 - ctx.r9.u64;
	// stw r28,-404(r1)
	ctx.current_instruction = 0x880E9ACC;
	REX_STORE_U32(ctx.r1.u32 + -404, ctx.r28.u32);
	// srawi r17,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r23.s32 >> 31;
	// srawi r3,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r21.s32 >> 31;
	// lwz r4,-288(r1)
	ctx.current_instruction = 0x880E9AD8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// srawi r7,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r19.s32 >> 31;
	// srawi r28,r14,31
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r14.s32 >> 31;
	// stw r10,-288(r1)
	ctx.current_instruction = 0x880E9AE8;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r10.u32);
	// lwz r10,-308(r1)
	ctx.current_instruction = 0x880E9AEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// xor r26,r26,r20
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r20.u64;
	// stw r28,-308(r1)
	ctx.current_instruction = 0x880E9AF4;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r28.u32);
	// mullw r28,r9,r9
	ctx.r28.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// lwz r9,-396(r1)
	ctx.current_instruction = 0x880E9AFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// stw r26,-396(r1)
	ctx.current_instruction = 0x880E9B00;
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r26.u32);
	// xor r27,r27,r22
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r22.u64;
	// xor r24,r24,r18
	ctx.r24.u64 = ctx.r24.u64 ^ ctx.r18.u64;
	// subf r26,r22,r27
	ctx.r26.u64 = ctx.r27.u64 - ctx.r22.u64;
	// xor r23,r23,r17
	ctx.r23.u64 = ctx.r23.u64 ^ ctx.r17.u64;
	// subf r24,r18,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r18.u64;
	// xor r21,r21,r3
	ctx.r21.u64 = ctx.r21.u64 ^ ctx.r3.u64;
	// mullw r8,r8,r8
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// lwz r11,-288(r1)
	ctx.current_instruction = 0x880E9B20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// lwz r18,-308(r1)
	ctx.current_instruction = 0x880E9B24;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lwz r27,-396(r1)
	ctx.current_instruction = 0x880E9B28;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// stw r3,-396(r1)
	ctx.current_instruction = 0x880E9B2C;
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r3.u32);
	// add r3,r25,r30
	ctx.r3.u64 = ctx.r25.u64 + ctx.r30.u64;
	// srawi r6,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 31;
	// subf r25,r17,r23
	ctx.r25.u64 = ctx.r23.u64 - ctx.r17.u64;
	// xor r17,r14,r18
	ctx.r17.u64 = ctx.r14.u64 ^ ctx.r18.u64;
	// xor r19,r19,r7
	ctx.r19.u64 = ctx.r19.u64 ^ ctx.r7.u64;
	// subf r27,r20,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r20.u64;
	// add r30,r28,r8
	ctx.r30.u64 = ctx.r28.u64 + ctx.r8.u64;
	// xor r14,r11,r6
	ctx.r14.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// mullw r23,r29,r29
	ctx.r23.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r29.s32);
	// lwz r22,-396(r1)
	ctx.current_instruction = 0x880E9B54;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// subf r21,r22,r21
	ctx.r21.u64 = ctx.r21.u64 - ctx.r22.u64;
	// add r28,r26,r27
	ctx.r28.u64 = ctx.r26.u64 + ctx.r27.u64;
	// lwz r11,-244(r1)
	ctx.current_instruction = 0x880E9B60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// add r5,r16,r5
	ctx.r5.u64 = ctx.r16.u64 + ctx.r5.u64;
	// lwz r16,-356(r1)
	ctx.current_instruction = 0x880E9B68;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// mullw r8,r31,r31
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r31.s32);
	// stw r11,-288(r1)
	ctx.current_instruction = 0x880E9B70;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r11.u32);
	// ld r11,-344(r1)
	ctx.current_instruction = 0x880E9B74;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -344);
	// add r27,r24,r25
	ctx.r27.u64 = ctx.r24.u64 + ctx.r25.u64;
	// lwz r24,-408(r1)
	ctx.current_instruction = 0x880E9B7C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -408);
	// add r26,r4,r23
	ctx.r26.u64 = ctx.r4.u64 + ctx.r23.u64;
	// lwz r4,-260(r1)
	ctx.current_instruction = 0x880E9B84;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// add r23,r3,r29
	ctx.r23.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r3,-368(r1)
	ctx.current_instruction = 0x880E9B8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// add r8,r15,r8
	ctx.r8.u64 = ctx.r15.u64 + ctx.r8.u64;
	// lwz r29,-292(r1)
	ctx.current_instruction = 0x880E9B94;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lwz r31,-248(r1)
	ctx.current_instruction = 0x880E9B9C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// subf r22,r7,r19
	ctx.r22.u64 = ctx.r19.u64 - ctx.r7.u64;
	// lwz r7,-384(r1)
	ctx.current_instruction = 0x880E9BA4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// mullw r19,r9,r9
	ctx.r19.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// stw r5,-416(r1)
	ctx.current_instruction = 0x880E9BAC;
	REX_STORE_U32(ctx.r1.u32 + -416, ctx.r5.u32);
	// lwz r15,-252(r1)
	ctx.current_instruction = 0x880E9BB0;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// stw r23,-412(r1)
	ctx.current_instruction = 0x880E9BB4;
	REX_STORE_U32(ctx.r1.u32 + -412, ctx.r23.u32);
	// stw r7,-396(r1)
	ctx.current_instruction = 0x880E9BB8;
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r7.u32);
	// ld r7,-280(r1)
	ctx.current_instruction = 0x880E9BBC;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// lwz r23,-288(r1)
	ctx.current_instruction = 0x880E9BC0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// add r9,r24,r9
	ctx.r9.u64 = ctx.r24.u64 + ctx.r9.u64;
	// add r24,r8,r3
	ctx.r24.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lwz r3,-312(r1)
	ctx.current_instruction = 0x880E9BCC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// add r25,r21,r22
	ctx.r25.u64 = ctx.r21.u64 + ctx.r22.u64;
	// lwz r21,-232(r1)
	ctx.current_instruction = 0x880E9BD8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// add r22,r9,r10
	ctx.r22.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r24,-368(r1)
	ctx.current_instruction = 0x880E9BE0;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r24.u32);
	// mullw r20,r10,r10
	ctx.r20.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// std r25,-344(r1)
	ctx.current_instruction = 0x880E9BE8;
	REX_STORE_U64(ctx.r1.u32 + -344, ctx.r25.u64);
	// stw r22,-408(r1)
	ctx.current_instruction = 0x880E9BEC;
	REX_STORE_U32(ctx.r1.u32 + -408, ctx.r22.u32);
	// lbzx r31,r8,r11
	ctx.current_instruction = 0x880E9BF0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lwz r8,-264(r1)
	ctx.current_instruction = 0x880E9BF4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// lwz r25,-364(r1)
	ctx.current_instruction = 0x880E9BF8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// std r31,-432(r1)
	ctx.current_instruction = 0x880E9BFC;
	REX_STORE_U64(ctx.r1.u32 + -432, ctx.r31.u64);
	// stw r8,-308(r1)
	ctx.current_instruction = 0x880E9C00;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r8.u32);
	// lwz r24,-396(r1)
	ctx.current_instruction = 0x880E9C04;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// lwz r31,-404(r1)
	ctx.current_instruction = 0x880E9C0C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -404);
	// subf r17,r18,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r18.u64;
	// lbzx r29,r29,r11
	ctx.current_instruction = 0x880E9C14;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// subf r18,r6,r14
	ctx.r18.u64 = ctx.r14.u64 - ctx.r6.u64;
	// ld r6,-328(r1)
	ctx.current_instruction = 0x880E9C1C;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
	// add r5,r30,r16
	ctx.r5.u64 = ctx.r30.u64 + ctx.r16.u64;
	// std r26,-328(r1)
	ctx.current_instruction = 0x880E9C24;
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.r26.u64);
	// mullw r9,r6,r6
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// lwz r26,-380(r1)
	ctx.current_instruction = 0x880E9C2C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// lbzx r10,r10,r11
	ctx.current_instruction = 0x880E9C30;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lwz r14,-372(r1)
	ctx.current_instruction = 0x880E9C34;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// stw r26,-268(r1)
	ctx.current_instruction = 0x880E9C38;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r26.u32);
	// stw r10,-296(r1)
	ctx.current_instruction = 0x880E9C3C;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r10.u32);
	// lwz r26,-360(r1)
	ctx.current_instruction = 0x880E9C40;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// mullw r10,r7,r7
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// stw r26,-256(r1)
	ctx.current_instruction = 0x880E9C48;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r26.u32);
	// lwz r26,-376(r1)
	ctx.current_instruction = 0x880E9C4C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// addi r8,r21,-1
	ctx.r8.s64 = ctx.r21.s64 + -1;
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r28,r14
	ctx.r10.u64 = ctx.r28.u64 + ctx.r14.u64;
	// add r9,r30,r5
	ctx.r9.u64 = ctx.r30.u64 + ctx.r5.u64;
	// add r5,r27,r24
	ctx.r5.u64 = ctx.r27.u64 + ctx.r24.u64;
	// lwz r24,-308(r1)
	ctx.current_instruction = 0x880E9C64;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lbzx r30,r8,r11
	ctx.current_instruction = 0x880E9C68;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r8,r15,1
	ctx.r8.s64 = ctx.r15.s64 + 1;
	// stw r10,-372(r1)
	ctx.current_instruction = 0x880E9C70;
	REX_STORE_U32(ctx.r1.u32 + -372, ctx.r10.u32);
	// addi r10,r24,1
	ctx.r10.s64 = ctx.r24.s64 + 1;
	// stw r9,-356(r1)
	ctx.current_instruction = 0x880E9C78;
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r9.u32);
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// stw r5,-384(r1)
	ctx.current_instruction = 0x880E9C80;
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r5.u32);
	// add r24,r19,r20
	ctx.r24.u64 = ctx.r19.u64 + ctx.r20.u64;
	// add r22,r31,r7
	ctx.r22.u64 = ctx.r31.u64 + ctx.r7.u64;
	// lbzx r28,r8,r11
	ctx.current_instruction = 0x880E9C8C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r8,r23,-1
	ctx.r8.s64 = ctx.r23.s64 + -1;
	// lbzx r5,r11,r10
	ctx.current_instruction = 0x880E9C94;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r23,r17,r18
	ctx.r23.u64 = ctx.r17.u64 + ctx.r18.u64;
	// stw r30,-424(r1)
	ctx.current_instruction = 0x880E9C9C;
	REX_STORE_U32(ctx.r1.u32 + -424, ctx.r30.u32);
	// lwz r21,-296(r1)
	ctx.current_instruction = 0x880E9CA0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// subf r20,r5,r7
	ctx.r20.u64 = ctx.r7.u64 - ctx.r5.u64;
	// stw r26,-296(r1)
	ctx.current_instruction = 0x880E9CA8;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r26.u32);
	// subf r30,r6,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r6.u64;
	// ld r26,-328(r1)
	ctx.current_instruction = 0x880E9CB0;
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
	// subf r21,r21,r6
	ctx.r21.u64 = ctx.r6.u64 - ctx.r21.u64;
	// lwz r16,-268(r1)
	ctx.current_instruction = 0x880E9CB8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// add r5,r26,r25
	ctx.r5.u64 = ctx.r26.u64 + ctx.r25.u64;
	// ld r25,-344(r1)
	ctx.current_instruction = 0x880E9CC0;
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -344);
	// lbzx r27,r8,r11
	ctx.current_instruction = 0x880E9CC4;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r8,r4,2
	ctx.r8.s64 = ctx.r4.s64 + 2;
	// add r26,r25,r16
	ctx.r26.u64 = ctx.r25.u64 + ctx.r16.u64;
	// lwz r16,-256(r1)
	ctx.current_instruction = 0x880E9CD0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// ld r31,-432(r1)
	ctx.current_instruction = 0x880E9CD4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -432);
	// add r25,r24,r16
	ctx.r25.u64 = ctx.r24.u64 + ctx.r16.u64;
	// lwz r16,-296(r1)
	ctx.current_instruction = 0x880E9CDC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// add r24,r23,r16
	ctx.r24.u64 = ctx.r23.u64 + ctx.r16.u64;
	// stw r26,-380(r1)
	ctx.current_instruction = 0x880E9CE4;
	REX_STORE_U32(ctx.r1.u32 + -380, ctx.r26.u32);
	// add r26,r22,r6
	ctx.r26.u64 = ctx.r22.u64 + ctx.r6.u64;
	// lbzx r10,r3,r11
	ctx.current_instruction = 0x880E9CEC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stw r24,-376(r1)
	ctx.current_instruction = 0x880E9CF0;
	REX_STORE_U32(ctx.r1.u32 + -376, ctx.r24.u32);
	// srawi r24,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r21.s32 >> 31;
	// stw r28,-396(r1)
	ctx.current_instruction = 0x880E9CF8;
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r28.u32);
	// subf r28,r7,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r7.u64;
	// stw r26,-404(r1)
	ctx.current_instruction = 0x880E9D00;
	REX_STORE_U32(ctx.r1.u32 + -404, ctx.r26.u32);
	// srawi r26,r20,31
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r20.s32 >> 31;
	// stw r25,-360(r1)
	ctx.current_instruction = 0x880E9D08;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r25.u32);
	// subf r25,r7,r10
	ctx.r25.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subf r22,r7,r31
	ctx.r22.u64 = ctx.r31.u64 - ctx.r7.u64;
	// stw r27,-256(r1)
	ctx.current_instruction = 0x880E9D14;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r27.u32);
	// xor r7,r21,r24
	ctx.r7.u64 = ctx.r21.u64 ^ ctx.r24.u64;
	// stw r26,-296(r1)
	ctx.current_instruction = 0x880E9D1C;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r26.u32);
	// stw r24,-268(r1)
	ctx.current_instruction = 0x880E9D20;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r24.u32);
	// xor r26,r20,r26
	ctx.r26.u64 = ctx.r20.u64 ^ ctx.r26.u64;
	// stw r7,-308(r1)
	ctx.current_instruction = 0x880E9D28;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r7.u32);
	// srawi r19,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r19.s64 = ctx.r25.s32 >> 31;
	// lbzx r9,r9,r11
	ctx.current_instruction = 0x880E9D30;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// subf r27,r6,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r6.u64;
	// stw r26,-288(r1)
	ctx.current_instruction = 0x880E9D38;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r26.u32);
	// xor r25,r25,r19
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r19.u64;
	// subf r23,r6,r9
	ctx.r23.u64 = ctx.r9.u64 - ctx.r6.u64;
	// ld r4,-320(r1)
	ctx.current_instruction = 0x880E9D44;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// stw r5,-364(r1)
	ctx.current_instruction = 0x880E9D48;
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r5.u32);
	// mullw r6,r10,r10
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// lbzx r5,r8,r11
	ctx.current_instruction = 0x880E9D50;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lwz r24,-424(r1)
	ctx.current_instruction = 0x880E9D54;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -424);
	// stw r19,-208(r1)
	ctx.current_instruction = 0x880E9D58;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r19.u32);
	// stw r6,-320(r1)
	ctx.current_instruction = 0x880E9D5C;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r6.u32);
	// lwz r15,-416(r1)
	ctx.current_instruction = 0x880E9D60;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -416);
	// lwz r14,-412(r1)
	ctx.current_instruction = 0x880E9D64;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -412);
	// srawi r18,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r23.s32 >> 31;
	// lwz r7,-396(r1)
	ctx.current_instruction = 0x880E9D6C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// srawi r21,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r22.s32 >> 31;
	// srawi r26,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r30.s32 >> 31;
	// stw r18,-224(r1)
	ctx.current_instruction = 0x880E9D78;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r18.u32);
	// srawi r17,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r28.s32 >> 31;
	// lwz r6,-256(r1)
	ctx.current_instruction = 0x880E9D80;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// srawi r16,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r27.s32 >> 31;
	// stw r21,-400(r1)
	ctx.current_instruction = 0x880E9D88;
	REX_STORE_U32(ctx.r1.u32 + -400, ctx.r21.u32);
	// addi r8,r4,2
	ctx.r8.s64 = ctx.r4.s64 + 2;
	// lwz r19,-268(r1)
	ctx.current_instruction = 0x880E9D90;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// xor r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r26.u64;
	// stw r26,-304(r1)
	ctx.current_instruction = 0x880E9D98;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r26.u32);
	// xor r28,r28,r17
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r17.u64;
	// stw r17,-352(r1)
	ctx.current_instruction = 0x880E9DA0;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r17.u32);
	// xor r27,r27,r16
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r16.u64;
	// stw r30,-396(r1)
	ctx.current_instruction = 0x880E9DA8;
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r30.u32);
	// xor r23,r23,r18
	ctx.r23.u64 = ctx.r23.u64 ^ ctx.r18.u64;
	// lwz r18,-296(r1)
	ctx.current_instruction = 0x880E9DB0;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// xor r22,r22,r21
	ctx.r22.u64 = ctx.r22.u64 ^ ctx.r21.u64;
	// stw r28,-280(r1)
	ctx.current_instruction = 0x880E9DB8;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r28.u32);
	// stw r27,-344(r1)
	ctx.current_instruction = 0x880E9DBC;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r27.u32);
	// rotlwi r20,r24,0
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r24.u32, 0);
	// lbzx r8,r8,r11
	ctx.current_instruction = 0x880E9DC4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// subf r28,r29,r5
	ctx.r28.u64 = ctx.r5.u64 - ctx.r29.u64;
	// lwz r30,-308(r1)
	ctx.current_instruction = 0x880E9DCC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// mullw r27,r31,r31
	ctx.r27.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r31.s32);
	// stw r16,-432(r1)
	ctx.current_instruction = 0x880E9DD4;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r16.u32);
	// stw r25,-256(r1)
	ctx.current_instruction = 0x880E9DD8;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r25.u32);
	// stw r23,-268(r1)
	ctx.current_instruction = 0x880E9DDC;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r23.u32);
	// stw r22,-296(r1)
	ctx.current_instruction = 0x880E9DE0;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r22.u32);
	// lwz r29,-320(r1)
	ctx.current_instruction = 0x880E9DE4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// rotlwi r22,r21,0
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r21.u32, 0);
	// stw r27,-432(r1)
	ctx.current_instruction = 0x880E9DEC;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r27.u32);
	// rotlwi r17,r17,0
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r17.u32, 0);
	// lwz r26,-288(r1)
	ctx.current_instruction = 0x880E9DF4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// rotlwi r16,r16,0
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r16.u32, 0);
	// lwz r27,-396(r1)
	ctx.current_instruction = 0x880E9DFC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// add r10,r15,r10
	ctx.r10.u64 = ctx.r15.u64 + ctx.r10.u64;
	// std r4,-328(r1)
	ctx.current_instruction = 0x880E9E04;
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.r4.u64);
	// add r31,r14,r31
	ctx.r31.u64 = ctx.r14.u64 + ctx.r31.u64;
	// stw r29,-320(r1)
	ctx.current_instruction = 0x880E9E0C;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r29.u32);
	// subf r29,r19,r30
	ctx.r29.u64 = ctx.r30.u64 - ctx.r19.u64;
	// subf r30,r18,r26
	ctx.r30.u64 = ctx.r26.u64 - ctx.r18.u64;
	// lwz r26,-280(r1)
	ctx.current_instruction = 0x880E9E18;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// lwz r4,-344(r1)
	ctx.current_instruction = 0x880E9E1C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// stw r27,-344(r1)
	ctx.current_instruction = 0x880E9E20;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r27.u32);
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r21,-304(r1)
	ctx.current_instruction = 0x880E9E28;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// mullw r29,r9,r9
	ctx.r29.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// stw r28,-304(r1)
	ctx.current_instruction = 0x880E9E30;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r28.u32);
	// stw r26,-280(r1)
	ctx.current_instruction = 0x880E9E34;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r26.u32);
	// lwz r25,-208(r1)
	ctx.current_instruction = 0x880E9E38;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// lwz r18,-296(r1)
	ctx.current_instruction = 0x880E9E3C;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// lwz r23,-224(r1)
	ctx.current_instruction = 0x880E9E40;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// lwz r19,-268(r1)
	ctx.current_instruction = 0x880E9E44;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r14,-248(r1)
	ctx.current_instruction = 0x880E9E48;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// srawi r28,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 31;
	// mullw r26,r24,r20
	ctx.r26.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r20.s32);
	// stw r28,-352(r1)
	ctx.current_instruction = 0x880E9E54;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r28.u32);
	// lwz r28,-256(r1)
	ctx.current_instruction = 0x880E9E58;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// subf r27,r25,r28
	ctx.r27.u64 = ctx.r28.u64 - ctx.r25.u64;
	// lwz r25,-344(r1)
	ctx.current_instruction = 0x880E9E60;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r24,r22,r18
	ctx.r24.u64 = ctx.r18.u64 - ctx.r22.u64;
	// subf r25,r21,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r21.u64;
	// lwz r21,-280(r1)
	ctx.current_instruction = 0x880E9E6C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// subf r28,r23,r19
	ctx.r28.u64 = ctx.r19.u64 - ctx.r23.u64;
	// subf r20,r17,r21
	ctx.r20.u64 = ctx.r21.u64 - ctx.r17.u64;
	// lwz r17,-320(r1)
	ctx.current_instruction = 0x880E9E78;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// add r25,r24,r25
	ctx.r25.u64 = ctx.r24.u64 + ctx.r25.u64;
	// add r29,r17,r29
	ctx.r29.u64 = ctx.r17.u64 + ctx.r29.u64;
	// lwz r17,-380(r1)
	ctx.current_instruction = 0x880E9E84;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// subf r21,r16,r4
	ctx.r21.u64 = ctx.r4.u64 - ctx.r16.u64;
	// add r16,r10,r9
	ctx.r16.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,-424(r1)
	ctx.current_instruction = 0x880E9E90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -424);
	// add r17,r25,r17
	ctx.r17.u64 = ctx.r25.u64 + ctx.r17.u64;
	// lwz r9,-372(r1)
	ctx.current_instruction = 0x880E9E98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// lwz r25,-264(r1)
	ctx.current_instruction = 0x880E9E9C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// mullw r22,r7,r7
	ctx.r22.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// mullw r23,r6,r6
	ctx.r23.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// add r15,r31,r10
	ctx.r15.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r31,-368(r1)
	ctx.current_instruction = 0x880E9EAC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// add r27,r30,r9
	ctx.r27.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lwz r9,-360(r1)
	ctx.current_instruction = 0x880E9EB8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// addi r10,r25,2
	ctx.r10.s64 = ctx.r25.s64 + 2;
	// lwz r30,-408(r1)
	ctx.current_instruction = 0x880E9EC0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -408);
	// add r24,r22,r23
	ctx.r24.u64 = ctx.r22.u64 + ctx.r23.u64;
	// lwz r22,-404(r1)
	ctx.current_instruction = 0x880E9EC8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -404);
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwz r31,-252(r1)
	ctx.current_instruction = 0x880E9ED0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// add r9,r24,r9
	ctx.r9.u64 = ctx.r24.u64 + ctx.r9.u64;
	// lwz r24,-292(r1)
	ctx.current_instruction = 0x880E9ED8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// add r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 + ctx.r7.u64;
	// lwz r30,-432(r1)
	ctx.current_instruction = 0x880E9EE0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// lbzx r29,r10,r11
	ctx.current_instruction = 0x880E9EE4;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r9,-400(r1)
	ctx.current_instruction = 0x880E9EEC;
	REX_STORE_U32(ctx.r1.u32 + -400, ctx.r9.u32);
	// addi r9,r24,1
	ctx.r9.s64 = ctx.r24.s64 + 1;
	// subf r29,r29,r8
	ctx.r29.u64 = ctx.r8.u64 - ctx.r29.u64;
	// stw r31,-280(r1)
	ctx.current_instruction = 0x880E9EF8;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r31.u32);
	// add r23,r20,r21
	ctx.r23.u64 = ctx.r20.u64 + ctx.r21.u64;
	// lwz r24,-352(r1)
	ctx.current_instruction = 0x880E9F00;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r6,-260(r1)
	ctx.current_instruction = 0x880E9F08;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// lbzx r31,r10,r11
	ctx.current_instruction = 0x880E9F0C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mullw r18,r8,r8
	ctx.r18.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// lwz r20,-384(r1)
	ctx.current_instruction = 0x880E9F14;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// lbzx r9,r9,r11
	ctx.current_instruction = 0x880E9F18;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// mullw r19,r5,r5
	ctx.r19.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// addi r10,r3,-7
	ctx.r10.s64 = ctx.r3.s64 + -7;
	// srawi r21,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r29.s32 >> 31;
	// stw r4,-344(r1)
	ctx.current_instruction = 0x880E9F28;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r4.u32);
	// add r26,r30,r26
	ctx.r26.u64 = ctx.r30.u64 + ctx.r26.u64;
	// stw r21,-320(r1)
	ctx.current_instruction = 0x880E9F30;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r21.u32);
	// add r21,r18,r19
	ctx.r21.u64 = ctx.r18.u64 + ctx.r19.u64;
	// stw r29,-432(r1)
	ctx.current_instruction = 0x880E9F38;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r29.u32);
	// add r28,r28,r20
	ctx.r28.u64 = ctx.r28.u64 + ctx.r20.u64;
	// lbzx r30,r10,r11
	ctx.current_instruction = 0x880E9F40;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r14,2
	ctx.r10.s64 = ctx.r14.s64 + 2;
	// stw r16,-416(r1)
	ctx.current_instruction = 0x880E9F48;
	REX_STORE_U32(ctx.r1.u32 + -416, ctx.r16.u32);
	// add r22,r22,r8
	ctx.r22.u64 = ctx.r22.u64 + ctx.r8.u64;
	// lwz r19,-304(r1)
	ctx.current_instruction = 0x880E9F50;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// stw r9,-352(r1)
	ctx.current_instruction = 0x880E9F54;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r9.u32);
	// add r22,r22,r5
	ctx.r22.u64 = ctx.r22.u64 + ctx.r5.u64;
	// xor r20,r19,r24
	ctx.r20.u64 = ctx.r19.u64 ^ ctx.r24.u64;
	// std r3,-192(r1)
	ctx.current_instruction = 0x880E9F60;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// lbzx r29,r10,r11
	ctx.current_instruction = 0x880E9F64;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// subf r19,r8,r31
	ctx.r19.u64 = ctx.r31.u64 - ctx.r8.u64;
	// lwz r10,-232(r1)
	ctx.current_instruction = 0x880E9F6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r3,-364(r1)
	ctx.current_instruction = 0x880E9F70;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// subf r18,r8,r29
	ctx.r18.u64 = ctx.r29.u64 - ctx.r8.u64;
	// stw r15,-412(r1)
	ctx.current_instruction = 0x880E9F78;
	REX_STORE_U32(ctx.r1.u32 + -412, ctx.r15.u32);
	// stw r17,-380(r1)
	ctx.current_instruction = 0x880E9F7C;
	REX_STORE_U32(ctx.r1.u32 + -380, ctx.r17.u32);
	// add r26,r26,r3
	ctx.r26.u64 = ctx.r26.u64 + ctx.r3.u64;
	// stw r28,-384(r1)
	ctx.current_instruction = 0x880E9F84;
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r28.u32);
	// stw r26,-364(r1)
	ctx.current_instruction = 0x880E9F88;
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r26.u32);
	// stw r7,-408(r1)
	ctx.current_instruction = 0x880E9F8C;
	REX_STORE_U32(ctx.r1.u32 + -408, ctx.r7.u32);
	// ld r4,-328(r1)
	ctx.current_instruction = 0x880E9F90;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
	// std r27,-200(r1)
	ctx.current_instruction = 0x880E9F94;
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r27.u64);
	// lwz r14,-376(r1)
	ctx.current_instruction = 0x880E9F98;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// addi r9,r4,3
	ctx.r9.s64 = ctx.r4.s64 + 3;
	// lwz r27,-356(r1)
	ctx.current_instruction = 0x880E9FA0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// lwz r16,-344(r1)
	ctx.current_instruction = 0x880E9FA4;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r23,r23,r14
	ctx.r23.u64 = ctx.r23.u64 + ctx.r14.u64;
	// stw r24,-344(r1)
	ctx.current_instruction = 0x880E9FAC;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r24.u32);
	// add r21,r21,r27
	ctx.r21.u64 = ctx.r21.u64 + ctx.r27.u64;
	// lbzx r24,r10,r11
	ctx.current_instruction = 0x880E9FB4;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lwz r17,-344(r1)
	ctx.current_instruction = 0x880E9FB8;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r26,r17,r20
	ctx.r26.u64 = ctx.r20.u64 - ctx.r17.u64;
	// stw r16,-368(r1)
	ctx.current_instruction = 0x880E9FC0;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r16.u32);
	// subf r20,r5,r30
	ctx.r20.u64 = ctx.r30.u64 - ctx.r5.u64;
	// lwz r16,-280(r1)
	ctx.current_instruction = 0x880E9FC8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// lwz r15,-432(r1)
	ctx.current_instruction = 0x880E9FCC;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// addi r10,r16,2
	ctx.r10.s64 = ctx.r16.s64 + 2;
	// lwz r16,-320(r1)
	ctx.current_instruction = 0x880E9FD4;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// stw r6,-344(r1)
	ctx.current_instruction = 0x880E9FD8;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r6.u32);
	// xor r28,r15,r16
	ctx.r28.u64 = ctx.r15.u64 ^ ctx.r16.u64;
	// lwz r17,-400(r1)
	ctx.current_instruction = 0x880E9FE0;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// stw r24,-424(r1)
	ctx.current_instruction = 0x880E9FE4;
	REX_STORE_U32(ctx.r1.u32 + -424, ctx.r24.u32);
	// subf r28,r16,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r16.u64;
	// lwz r16,-344(r1)
	ctx.current_instruction = 0x880E9FEC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// lbzx r6,r10,r11
	ctx.current_instruction = 0x880E9FF0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-244(r1)
	ctx.current_instruction = 0x880E9FF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
	// addi r28,r25,3
	ctx.r28.s64 = ctx.r25.s64 + 3;
	// stw r17,-360(r1)
	ctx.current_instruction = 0x880EA000;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r17.u32);
	// rotlwi r25,r24,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r24.u32, 0);
	// stw r22,-404(r1)
	ctx.current_instruction = 0x880EA008;
	REX_STORE_U32(ctx.r1.u32 + -404, ctx.r22.u32);
	// srawi r17,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r19.s32 >> 31;
	// lwz r3,-352(r1)
	ctx.current_instruction = 0x880EA010;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// subf r24,r5,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r5.u64;
	// stw r23,-376(r1)
	ctx.current_instruction = 0x880EA018;
	REX_STORE_U32(ctx.r1.u32 + -376, ctx.r23.u32);
	// lbzx r7,r10,r11
	ctx.current_instruction = 0x880EA01C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r16,3
	ctx.r10.s64 = ctx.r16.s64 + 3;
	// srawi r22,r20,31
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r20.s32 >> 31;
	// lbzx r10,r10,r11
	ctx.current_instruction = 0x880EA028;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// srawi r16,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r18.s32 >> 31;
	// stw r21,-356(r1)
	ctx.current_instruction = 0x880EA030;
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r21.u32);
	// srawi r14,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r14.s64 = ctx.r24.s32 >> 31;
	// lbzx r9,r9,r11
	ctx.current_instruction = 0x880EA038;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// subf r8,r8,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r8.u64;
	// lwz r23,-424(r1)
	ctx.current_instruction = 0x880EA040;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -424);
	// lwz r21,-416(r1)
	ctx.current_instruction = 0x880EA044;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -416);
	// subf r5,r5,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r5.u64;
	// lwz r15,-412(r1)
	ctx.current_instruction = 0x880EA04C;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -412);
	// subf r3,r3,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r3.u64;
	// lbzx r28,r28,r11
	ctx.current_instruction = 0x880EA054;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// srawi r27,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r8.s32 >> 31;
	// stw r17,-344(r1)
	ctx.current_instruction = 0x880EA05C;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r17.u32);
	// stw r22,-280(r1)
	ctx.current_instruction = 0x880EA060;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r22.u32);
	// stw r16,-320(r1)
	ctx.current_instruction = 0x880EA064;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r16.u32);
	// stw r14,-432(r1)
	ctx.current_instruction = 0x880EA068;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r14.u32);
	// subf r28,r28,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r28.u64;
	// std r4,-336(r1)
	ctx.current_instruction = 0x880EA070;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r4.u64);
	// srawi r4,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// std r11,-240(r1)
	ctx.current_instruction = 0x880EA078;
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r11.u64);
	// xor r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r27.u64;
	// std r30,-216(r1)
	ctx.current_instruction = 0x880EA080;
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r30.u64);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// stw r27,-352(r1)
	ctx.current_instruction = 0x880EA088;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r27.u32);
	// srawi r30,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r28.s32 >> 31;
	// stw r8,-396(r1)
	ctx.current_instruction = 0x880EA090;
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r8.u32);
	// xor r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// ld r27,-200(r1)
	ctx.current_instruction = 0x880EA098;
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// xor r8,r28,r30
	ctx.r8.u64 = ctx.r28.u64 ^ ctx.r30.u64;
	// stw r11,-400(r1)
	ctx.current_instruction = 0x880EA0A0;
	REX_STORE_U32(ctx.r1.u32 + -400, ctx.r11.u32);
	// xor r24,r24,r14
	ctx.r24.u64 = ctx.r24.u64 ^ ctx.r14.u64;
	// stw r5,-308(r1)
	ctx.current_instruction = 0x880EA0A8;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r5.u32);
	// stw r8,-328(r1)
	ctx.current_instruction = 0x880EA0AC;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r8.u32);
	// add r5,r26,r27
	ctx.r5.u64 = ctx.r26.u64 + ctx.r27.u64;
	// mullw r26,r25,r23
	ctx.r26.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r23.s32);
	// stw r24,-296(r1)
	ctx.current_instruction = 0x880EA0B8;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r24.u32);
	// stw r5,-372(r1)
	ctx.current_instruction = 0x880EA0BC;
	REX_STORE_U32(ctx.r1.u32 + -372, ctx.r5.u32);
	// stw r30,-224(r1)
	ctx.current_instruction = 0x880EA0C0;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r30.u32);
	// lwz r27,-280(r1)
	ctx.current_instruction = 0x880EA0C4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// stw r26,-280(r1)
	ctx.current_instruction = 0x880EA0C8;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r26.u32);
	// stw r4,-304(r1)
	ctx.current_instruction = 0x880EA0CC;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r4.u32);
	// xor r24,r3,r11
	ctx.r24.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// xor r22,r20,r22
	ctx.r22.u64 = ctx.r20.u64 ^ ctx.r22.u64;
	// stw r24,-288(r1)
	ctx.current_instruction = 0x880EA0D8;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r24.u32);
	// xor r20,r18,r16
	ctx.r20.u64 = ctx.r18.u64 ^ ctx.r16.u64;
	// mullw r8,r31,r31
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r31.s32);
	// stw r22,-256(r1)
	ctx.current_instruction = 0x880EA0E4;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r22.u32);
	// stw r20,-268(r1)
	ctx.current_instruction = 0x880EA0E8;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r20.u32);
	// stw r8,-344(r1)
	ctx.current_instruction = 0x880EA0EC;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r8.u32);
	// lwz r22,-352(r1)
	ctx.current_instruction = 0x880EA0F0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r3,-308(r1)
	ctx.current_instruction = 0x880EA0F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lwz r25,-328(r1)
	ctx.current_instruction = 0x880EA0F8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// xor r19,r19,r17
	ctx.r19.u64 = ctx.r19.u64 ^ ctx.r17.u64;
	// stw r25,-328(r1)
	ctx.current_instruction = 0x880EA100;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r25.u32);
	// rotlwi r8,r14,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// rotlwi r23,r11,0
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,-296(r1)
	ctx.current_instruction = 0x880EA10C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// rotlwi r14,r30,0
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r19,-208(r1)
	ctx.current_instruction = 0x880EA114;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r19.u32);
	// rotlwi r28,r17,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r17.u32, 0);
	// rotlwi r24,r19,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// subf r26,r8,r11
	ctx.r26.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subf r24,r28,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r28.u64;
	// rotlwi r5,r16,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r16.u32, 0);
	// lwz r30,-288(r1)
	ctx.current_instruction = 0x880EA12C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// rotlwi r20,r4,0
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r19,-256(r1)
	ctx.current_instruction = 0x880EA134;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// add r16,r21,r31
	ctx.r16.u64 = ctx.r21.u64 + ctx.r31.u64;
	// subf r8,r23,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r23.u64;
	// ld r30,-216(r1)
	ctx.current_instruction = 0x880EA140;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// lwz r18,-268(r1)
	ctx.current_instruction = 0x880EA144;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// mullw r25,r29,r29
	ctx.r25.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r29.s32);
	// lwz r4,-396(r1)
	ctx.current_instruction = 0x880EA14C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// lwz r28,-328(r1)
	ctx.current_instruction = 0x880EA150;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// add r15,r15,r29
	ctx.r15.u64 = ctx.r15.u64 + ctx.r29.u64;
	// lwz r29,-344(r1)
	ctx.current_instruction = 0x880EA158;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r28,r14,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r14.u64;
	// lwz r14,-368(r1)
	ctx.current_instruction = 0x880EA160;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// mullw r31,r30,r30
	ctx.r31.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r30.s32);
	// subf r17,r27,r19
	ctx.r17.u64 = ctx.r19.u64 - ctx.r27.u64;
	// subf r27,r5,r18
	ctx.r27.u64 = ctx.r18.u64 - ctx.r5.u64;
	// subf r5,r22,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r22.u64;
	// subf r20,r20,r3
	ctx.r20.u64 = ctx.r3.u64 - ctx.r20.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r28,r16,r30
	ctx.r28.u64 = ctx.r16.u64 + ctx.r30.u64;
	// lwz r30,-372(r1)
	ctx.current_instruction = 0x880EA180;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// add r23,r29,r31
	ctx.r23.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwz r16,-376(r1)
	ctx.current_instruction = 0x880EA188;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// add r31,r5,r20
	ctx.r31.u64 = ctx.r5.u64 + ctx.r20.u64;
	// lwz r5,-404(r1)
	ctx.current_instruction = 0x880EA190;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -404);
	// add r20,r23,r14
	ctx.r20.u64 = ctx.r23.u64 + ctx.r14.u64;
	// add r23,r8,r30
	ctx.r23.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lwz r30,-360(r1)
	ctx.current_instruction = 0x880EA19C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// mullw r19,r6,r6
	ctx.r19.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// mullw r18,r7,r7
	ctx.r18.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// mullw r22,r9,r9
	ctx.r22.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// mullw r21,r10,r10
	ctx.r21.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// add r29,r19,r18
	ctx.r29.u64 = ctx.r19.u64 + ctx.r18.u64;
	// ld r3,-192(r1)
	ctx.current_instruction = 0x880EA1B4;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// add r26,r27,r26
	ctx.r26.u64 = ctx.r27.u64 + ctx.r26.u64;
	// lwz r27,-252(r1)
	ctx.current_instruction = 0x880EA1BC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r18,-248(r1)
	ctx.current_instruction = 0x880EA1C4;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// addi r8,r3,2
	ctx.r8.s64 = ctx.r3.s64 + 2;
	// lwz r4,-364(r1)
	ctx.current_instruction = 0x880EA1CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// stw r11,-328(r1)
	ctx.current_instruction = 0x880EA1D0;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r11.u32);
	// add r19,r31,r16
	ctx.r19.u64 = ctx.r31.u64 + ctx.r16.u64;
	// ld r11,-240(r1)
	ctx.current_instruction = 0x880EA1D8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwz r31,-408(r1)
	ctx.current_instruction = 0x880EA1E0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -408);
	// add r24,r24,r17
	ctx.r24.u64 = ctx.r24.u64 + ctx.r17.u64;
	// stw r27,-344(r1)
	ctx.current_instruction = 0x880EA1E8;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r27.u32);
	// add r29,r5,r10
	ctx.r29.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r27,r31,r6
	ctx.r27.u64 = ctx.r31.u64 + ctx.r6.u64;
	// lwz r6,-244(r1)
	ctx.current_instruction = 0x880EA1F4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// lwz r16,-280(r1)
	ctx.current_instruction = 0x880EA1F8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// lbzx r30,r8,r11
	ctx.current_instruction = 0x880EA1FC;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r8,r3,-6
	ctx.r8.s64 = ctx.r3.s64 + -6;
	// add r25,r25,r16
	ctx.r25.u64 = ctx.r25.u64 + ctx.r16.u64;
	// lwz r5,-356(r1)
	ctx.current_instruction = 0x880EA208;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// lwz r14,-232(r1)
	ctx.current_instruction = 0x880EA20C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// add r7,r27,r7
	ctx.r7.u64 = ctx.r27.u64 + ctx.r7.u64;
	// stw r6,-280(r1)
	ctx.current_instruction = 0x880EA214;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r6.u32);
	// add r6,r22,r21
	ctx.r6.u64 = ctx.r22.u64 + ctx.r21.u64;
	// add r21,r25,r4
	ctx.r21.u64 = ctx.r25.u64 + ctx.r4.u64;
	// stw r7,-408(r1)
	ctx.current_instruction = 0x880EA220;
	REX_STORE_U32(ctx.r1.u32 + -408, ctx.r7.u32);
	// lbzx r31,r8,r11
	ctx.current_instruction = 0x880EA224;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r8,r18,3
	ctx.r8.s64 = ctx.r18.s64 + 3;
	// add r25,r6,r5
	ctx.r25.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r20,-368(r1)
	ctx.current_instruction = 0x880EA230;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r20.u32);
	// lwz r16,-384(r1)
	ctx.current_instruction = 0x880EA234;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// subf r27,r9,r30
	ctx.r27.u64 = ctx.r30.u64 - ctx.r9.u64;
	// stw r21,-364(r1)
	ctx.current_instruction = 0x880EA23C;
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r21.u32);
	// subf r21,r10,r31
	ctx.r21.u64 = ctx.r31.u64 - ctx.r10.u64;
	// lwz r22,-380(r1)
	ctx.current_instruction = 0x880EA244;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// add r24,r24,r16
	ctx.r24.u64 = ctx.r24.u64 + ctx.r16.u64;
	// lbzx r5,r8,r11
	ctx.current_instruction = 0x880EA24C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r8,r14,1
	ctx.r8.s64 = ctx.r14.s64 + 1;
	// stw r19,-376(r1)
	ctx.current_instruction = 0x880EA254;
	REX_STORE_U32(ctx.r1.u32 + -376, ctx.r19.u32);
	// srawi r19,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r19.s64 = ctx.r27.s32 >> 31;
	// lwz r4,-424(r1)
	ctx.current_instruction = 0x880EA25C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -424);
	// add r26,r26,r22
	ctx.r26.u64 = ctx.r26.u64 + ctx.r22.u64;
	// std r3,-192(r1)
	ctx.current_instruction = 0x880EA264;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// xor r27,r27,r19
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r19.u64;
	// lwz r20,-328(r1)
	ctx.current_instruction = 0x880EA26C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// add r15,r15,r4
	ctx.r15.u64 = ctx.r15.u64 + ctx.r4.u64;
	// lbzx r6,r8,r11
	ctx.current_instruction = 0x880EA274;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// std r29,-216(r1)
	ctx.current_instruction = 0x880EA278;
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r29.u64);
	// lwz r14,-344(r1)
	ctx.current_instruction = 0x880EA27C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r7,r10,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r10.u64;
	// stw r24,-384(r1)
	ctx.current_instruction = 0x880EA284;
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r24.u32);
	// mullw r24,r30,r30
	ctx.r24.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r30.s32);
	// stw r7,-328(r1)
	ctx.current_instruction = 0x880EA28C;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r7.u32);
	// stw r20,-360(r1)
	ctx.current_instruction = 0x880EA290;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r20.u32);
	// lwz r17,-328(r1)
	ctx.current_instruction = 0x880EA294;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// stw r26,-380(r1)
	ctx.current_instruction = 0x880EA298;
	REX_STORE_U32(ctx.r1.u32 + -380, ctx.r26.u32);
	// stw r15,-412(r1)
	ctx.current_instruction = 0x880EA29C;
	REX_STORE_U32(ctx.r1.u32 + -412, ctx.r15.u32);
	// stw r24,-328(r1)
	ctx.current_instruction = 0x880EA2A0;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r24.u32);
	// stw r25,-356(r1)
	ctx.current_instruction = 0x880EA2A4;
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r25.u32);
	// stw r23,-372(r1)
	ctx.current_instruction = 0x880EA2A8;
	REX_STORE_U32(ctx.r1.u32 + -372, ctx.r23.u32);
	// addi r8,r14,3
	ctx.r8.s64 = ctx.r14.s64 + 3;
	// subf r20,r9,r5
	ctx.r20.u64 = ctx.r5.u64 - ctx.r9.u64;
	// srawi r14,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r14.s64 = ctx.r21.s32 >> 31;
	// srawi r3,r20,31
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r20.s32 >> 31;
	// srawi r29,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r17.s32 >> 31;
	// lbzx r7,r8,r11
	ctx.current_instruction = 0x880EA2C0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// xor r21,r21,r14
	ctx.r21.u64 = ctx.r21.u64 ^ ctx.r14.u64;
	// lwz r8,-280(r1)
	ctx.current_instruction = 0x880EA2C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// xor r24,r20,r3
	ctx.r24.u64 = ctx.r20.u64 ^ ctx.r3.u64;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r4,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 31;
	// xor r15,r17,r29
	ctx.r15.u64 = ctx.r17.u64 ^ ctx.r29.u64;
	// xor r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r4.u64;
	// lbzx r8,r8,r11
	ctx.current_instruction = 0x880EA2E4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// srawi r26,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r10.s32 >> 31;
	// xor r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r26.u64;
	// mullw r22,r5,r5
	ctx.r22.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// lwz r17,-328(r1)
	ctx.current_instruction = 0x880EA2F8;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// lwz r16,-368(r1)
	ctx.current_instruction = 0x880EA2FC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// stw r22,-328(r1)
	ctx.current_instruction = 0x880EA300;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r22.u32);
	// lwz r22,-408(r1)
	ctx.current_instruction = 0x880EA304;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -408);
	// std r11,-240(r1)
	ctx.current_instruction = 0x880EA308;
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r11.u64);
	// stw r17,-344(r1)
	ctx.current_instruction = 0x880EA30C;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r17.u32);
	// lwz r11,-360(r1)
	ctx.current_instruction = 0x880EA310;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// stw r16,-320(r1)
	ctx.current_instruction = 0x880EA314;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r16.u32);
	// stw r22,-280(r1)
	ctx.current_instruction = 0x880EA318;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r22.u32);
	// lwz r20,-412(r1)
	ctx.current_instruction = 0x880EA31C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -412);
	// subf r19,r19,r27
	ctx.r19.u64 = ctx.r27.u64 - ctx.r19.u64;
	// std r25,-200(r1)
	ctx.current_instruction = 0x880EA324;
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r25.u64);
	// subf r26,r26,r10
	ctx.r26.u64 = ctx.r10.u64 - ctx.r26.u64;
	// stw r11,-432(r1)
	ctx.current_instruction = 0x880EA32C;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r11.u32);
	// subf r17,r14,r21
	ctx.r17.u64 = ctx.r21.u64 - ctx.r14.u64;
	// std r23,-352(r1)
	ctx.current_instruction = 0x880EA334;
	REX_STORE_U64(ctx.r1.u32 + -352, ctx.r23.u64);
	// add r16,r20,r5
	ctx.r16.u64 = ctx.r20.u64 + ctx.r5.u64;
	// std r18,-304(r1)
	ctx.current_instruction = 0x880EA33C;
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r18.u64);
	// mullw r5,r31,r31
	ctx.r5.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r31.s32);
	// lwz r23,-364(r1)
	ctx.current_instruction = 0x880EA344;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// lwz r11,-376(r1)
	ctx.current_instruction = 0x880EA348;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// lwz r25,-384(r1)
	ctx.current_instruction = 0x880EA34C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// lwz r18,-380(r1)
	ctx.current_instruction = 0x880EA350;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// lwz r27,-328(r1)
	ctx.current_instruction = 0x880EA354;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// stw r9,-328(r1)
	ctx.current_instruction = 0x880EA358;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r9.u32);
	// mullw r20,r6,r6
	ctx.r20.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// lwz r14,-344(r1)
	ctx.current_instruction = 0x880EA360;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r21,r29,r15
	ctx.r21.u64 = ctx.r15.u64 - ctx.r29.u64;
	// ld r29,-216(r1)
	ctx.current_instruction = 0x880EA368;
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// add r15,r28,r30
	ctx.r15.u64 = ctx.r28.u64 + ctx.r30.u64;
	// subf r22,r3,r24
	ctx.r22.u64 = ctx.r24.u64 - ctx.r3.u64;
	// ld r3,-192(r1)
	ctx.current_instruction = 0x880EA374;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// mullw r9,r7,r7
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// lwz r10,-328(r1)
	ctx.current_instruction = 0x880EA37C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// stw r27,-328(r1)
	ctx.current_instruction = 0x880EA380;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r27.u32);
	// add r27,r14,r5
	ctx.r27.u64 = ctx.r14.u64 + ctx.r5.u64;
	// mullw r24,r8,r8
	ctx.r24.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// ld r4,-336(r1)
	ctx.current_instruction = 0x880EA390;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// add r28,r19,r17
	ctx.r28.u64 = ctx.r19.u64 + ctx.r17.u64;
	// add r19,r16,r6
	ctx.r19.u64 = ctx.r16.u64 + ctx.r6.u64;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stw r19,-412(r1)
	ctx.current_instruction = 0x880EA3A4;
	REX_STORE_U32(ctx.r1.u32 + -412, ctx.r19.u32);
	// add r5,r22,r21
	ctx.r5.u64 = ctx.r22.u64 + ctx.r21.u64;
	// lwz r14,-328(r1)
	ctx.current_instruction = 0x880EA3AC;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// add r22,r28,r25
	ctx.r22.u64 = ctx.r28.u64 + ctx.r25.u64;
	// add r5,r5,r18
	ctx.r5.u64 = ctx.r5.u64 + ctx.r18.u64;
	// ld r25,-200(r1)
	ctx.current_instruction = 0x880EA3B8;
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// add r30,r14,r20
	ctx.r30.u64 = ctx.r14.u64 + ctx.r20.u64;
	// lwz r14,-280(r1)
	ctx.current_instruction = 0x880EA3C0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r26,r15,r31
	ctx.r26.u64 = ctx.r15.u64 + ctx.r31.u64;
	// ld r18,-304(r1)
	ctx.current_instruction = 0x880EA3C8;
	ctx.r18.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// add r7,r14,r7
	ctx.r7.u64 = ctx.r14.u64 + ctx.r7.u64;
	// lwz r14,-320(r1)
	ctx.current_instruction = 0x880EA3D0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// add r6,r30,r23
	ctx.r6.u64 = ctx.r30.u64 + ctx.r23.u64;
	// ld r23,-352(r1)
	ctx.current_instruction = 0x880EA3D8;
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -352);
	// add r24,r27,r14
	ctx.r24.u64 = ctx.r27.u64 + ctx.r14.u64;
	// lwz r14,-432(r1)
	ctx.current_instruction = 0x880EA3E0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// stw r6,-364(r1)
	ctx.current_instruction = 0x880EA3E4;
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r6.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// ld r11,-240(r1)
	ctx.current_instruction = 0x880EA3F0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// add r7,r9,r14
	ctx.r7.u64 = ctx.r9.u64 + ctx.r14.u64;
	// stw r26,-416(r1)
	ctx.current_instruction = 0x880EA3F8;
	REX_STORE_U32(ctx.r1.u32 + -416, ctx.r26.u32);
	// stw r24,-368(r1)
	ctx.current_instruction = 0x880EA3FC;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r24.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r22,-384(r1)
	ctx.current_instruction = 0x880EA404;
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r22.u32);
	// stw r5,-380(r1)
	ctx.current_instruction = 0x880EA408;
	REX_STORE_U32(ctx.r1.u32 + -380, ctx.r5.u32);
	// stw r8,-408(r1)
	ctx.current_instruction = 0x880EA40C;
	REX_STORE_U32(ctx.r1.u32 + -408, ctx.r8.u32);
	// stw r7,-360(r1)
	ctx.current_instruction = 0x880EA410;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r7.u32);
	// stw r6,-376(r1)
	ctx.current_instruction = 0x880EA414;
	REX_STORE_U32(ctx.r1.u32 + -376, ctx.r6.u32);
	// bdnz 0x880e99fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E99FC;
	// lwz r9,-260(r1)
	ctx.current_instruction = 0x880EA41C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// lwz r10,-252(r1)
	ctx.current_instruction = 0x880EA424;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// addi r18,r18,16
	ctx.r18.s64 = ctx.r18.s64 + 16;
	// lwz r7,-292(r1)
	ctx.current_instruction = 0x880EA42C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// addi r21,r9,16
	ctx.r21.s64 = ctx.r9.s64 + 16;
	// lwz r11,-272(r1)
	ctx.current_instruction = 0x880EA434;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// lwz r3,-232(r1)
	ctx.current_instruction = 0x880EA43C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// addi r10,r7,16
	ctx.r10.s64 = ctx.r7.s64 + 16;
	// lwz r9,-244(r1)
	ctx.current_instruction = 0x880EA444;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r31,-264(r1)
	ctx.current_instruction = 0x880EA44C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// addi r7,r3,16
	ctx.r7.s64 = ctx.r3.s64 + 16;
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// stw r11,-272(r1)
	ctx.current_instruction = 0x880EA458;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r11.u32);
	// addi r20,r31,16
	ctx.r20.s64 = ctx.r31.s64 + 16;
	// stw r18,-248(r1)
	ctx.current_instruction = 0x880EA460;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r18.u32);
	// stw r5,-252(r1)
	ctx.current_instruction = 0x880EA464;
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r5.u32);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stw r21,-260(r1)
	ctx.current_instruction = 0x880EA46C;
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r21.u32);
	// stw r10,-292(r1)
	ctx.current_instruction = 0x880EA470;
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r10.u32);
	// stw r8,-312(r1)
	ctx.current_instruction = 0x880EA474;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r8.u32);
	// stw r7,-232(r1)
	ctx.current_instruction = 0x880EA478;
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r7.u32);
	// stw r6,-244(r1)
	ctx.current_instruction = 0x880EA47C;
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r6.u32);
	// stw r20,-264(r1)
	ctx.current_instruction = 0x880EA480;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r20.u32);
	// bne 0x880e99b0
	if (!ctx.cr0.eq) goto loc_880E99B0;
	// lwz r3,20(r1)
	ctx.current_instruction = 0x880EA488;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// b 0x880eafd4
	goto loc_880EAFD4;
loc_880EA490:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x880eabac
	if (!ctx.cr6.eq) goto loc_880EABAC;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x880eafb8
	if (!ctx.cr6.gt) goto loc_880EAFB8;
	// subfic r10,r25,3
	ctx.xer.ca = ctx.r25.u32 <= 3;
	ctx.r10.u64 = static_cast<uint64_t>(3) - ctx.r25.u64;
	// lwz r29,-404(r1)
	ctx.current_instruction = 0x880EA4A4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -404);
	// subf r11,r11,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r11.u64;
	// lwz r19,-412(r1)
	ctx.current_instruction = 0x880EA4AC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -412);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r26,-416(r1)
	ctx.current_instruction = 0x880EA4B4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -416);
	// add r9,r31,r21
	ctx.r9.u64 = ctx.r31.u64 + ctx.r21.u64;
	// lwz r25,-356(r1)
	ctx.current_instruction = 0x880EA4BC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r24,-368(r1)
	ctx.current_instruction = 0x880EA4C4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r23,-372(r1)
	ctx.current_instruction = 0x880EA4CC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// addi r17,r9,2
	ctx.r17.s64 = ctx.r9.s64 + 2;
	// lwz r22,-384(r1)
	ctx.current_instruction = 0x880EA4D4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// add r3,r10,r21
	ctx.r3.u64 = ctx.r10.u64 + ctx.r21.u64;
	// stw r16,-272(r1)
	ctx.current_instruction = 0x880EA4DC;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r16.u32);
	// stw r11,-292(r1)
	ctx.current_instruction = 0x880EA4E0;
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r11.u32);
	// stw r17,-312(r1)
	ctx.current_instruction = 0x880EA4E4;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r17.u32);
	// stw r3,-424(r1)
	ctx.current_instruction = 0x880EA4E8;
	REX_STORE_U32(ctx.r1.u32 + -424, ctx.r3.u32);
loc_880EA4EC:
	// subf r9,r4,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r4.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subf r6,r4,r17
	ctx.r6.u64 = ctx.r17.u64 - ctx.r4.u64;
	// subf r7,r4,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r4.u64;
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// addi r31,r6,-2
	ctx.r31.s64 = ctx.r6.s64 + -2;
	// addi r30,r7,-9
	ctx.r30.s64 = ctx.r7.s64 + -9;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r28,r8,-1
	ctx.r28.s64 = ctx.r8.s64 + -1;
	// stw r31,-344(r1)
	ctx.current_instruction = 0x880EA510;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r31.u32);
	// addi r27,r9,-2
	ctx.r27.s64 = ctx.r9.s64 + -2;
	// stw r30,-320(r1)
	ctx.current_instruction = 0x880EA518;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,-280(r1)
	ctx.current_instruction = 0x880EA520;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r28.u32);
	// stw r27,-328(r1)
	ctx.current_instruction = 0x880EA524;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r27.u32);
	// b 0x880ea53c
	goto loc_880EA53C;
loc_880EA52C:
	// lwz r27,-328(r1)
	ctx.current_instruction = 0x880EA52C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// lwz r31,-344(r1)
	ctx.current_instruction = 0x880EA530;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// lwz r28,-280(r1)
	ctx.current_instruction = 0x880EA534;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// lwz r30,-320(r1)
	ctx.current_instruction = 0x880EA538;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
loc_880EA53C:
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbzx r6,r11,r4
	ctx.current_instruction = 0x880EA540;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r9,r21,1
	ctx.r9.s64 = ctx.r21.s64 + 1;
	// lbzx r5,r3,r11
	ctx.current_instruction = 0x880EA548;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// add r8,r29,r6
	ctx.r8.u64 = ctx.r29.u64 + ctx.r6.u64;
	// std r4,-216(r1)
	ctx.current_instruction = 0x880EA550;
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r4.u64);
	// mullw r29,r6,r6
	ctx.r29.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// std r21,-192(r1)
	ctx.current_instruction = 0x880EA558;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r21.u64);
	// stw r8,-432(r1)
	ctx.current_instruction = 0x880EA55C;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r8.u32);
	// lbzx r28,r10,r28
	ctx.current_instruction = 0x880EA560;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// lbzx r8,r9,r11
	ctx.current_instruction = 0x880EA564;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r30,r10,r30
	ctx.current_instruction = 0x880EA568;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// lbzx r16,r10,r31
	ctx.current_instruction = 0x880EA56C;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// std r22,-240(r1)
	ctx.current_instruction = 0x880EA570;
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r22.u64);
	// std r8,-336(r1)
	ctx.current_instruction = 0x880EA574;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r8.u64);
	// add r7,r26,r28
	ctx.r7.u64 = ctx.r26.u64 + ctx.r28.u64;
	// addi r9,r17,-1
	ctx.r9.s64 = ctx.r17.s64 + -1;
	// stw r7,-352(r1)
	ctx.current_instruction = 0x880EA580;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// mullw r7,r30,r30
	ctx.r7.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r30.s32);
	// stw r7,-224(r1)
	ctx.current_instruction = 0x880EA588;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r7.u32);
	// lbzx r26,r9,r11
	ctx.current_instruction = 0x880EA58C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lwz r15,-432(r1)
	ctx.current_instruction = 0x880EA590;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// subf r17,r6,r28
	ctx.r17.u64 = ctx.r28.u64 - ctx.r6.u64;
	// subf r7,r26,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r26.u64;
	// mullw r28,r28,r28
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r28.s32);
	// stw r7,-304(r1)
	ctx.current_instruction = 0x880EA5A4;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r7.u32);
	// stw r28,-400(r1)
	ctx.current_instruction = 0x880EA5A8;
	REX_STORE_U32(ctx.r1.u32 + -400, ctx.r28.u32);
	// lbzx r7,r11,r9
	ctx.current_instruction = 0x880EA5AC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lwz r28,-352(r1)
	ctx.current_instruction = 0x880EA5B0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// addi r9,r20,1
	ctx.r9.s64 = ctx.r20.s64 + 1;
	// add r28,r28,r30
	ctx.r28.u64 = ctx.r28.u64 + ctx.r30.u64;
	// subf r31,r4,r18
	ctx.r31.u64 = ctx.r18.u64 - ctx.r4.u64;
	// stw r28,-416(r1)
	ctx.current_instruction = 0x880EA5C0;
	REX_STORE_U32(ctx.r1.u32 + -416, ctx.r28.u32);
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// lbzx r28,r11,r9
	ctx.current_instruction = 0x880EA5C8;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// subf r9,r4,r20
	ctx.r9.u64 = ctx.r20.u64 - ctx.r4.u64;
	// lbzx r31,r10,r31
	ctx.current_instruction = 0x880EA5D0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// subf r28,r28,r7
	ctx.r28.u64 = ctx.r7.u64 - ctx.r28.u64;
	// subf r14,r6,r31
	ctx.r14.u64 = ctx.r31.u64 - ctx.r6.u64;
	// lbzx r26,r10,r9
	ctx.current_instruction = 0x880EA5DC;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// subf r9,r4,r21
	ctx.r9.u64 = ctx.r21.u64 - ctx.r4.u64;
	// add r19,r19,r31
	ctx.r19.u64 = ctx.r19.u64 + ctx.r31.u64;
	// subf r6,r26,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r26.u64;
	// srawi r26,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r6.s32 >> 31;
	// lbzx r9,r10,r9
	ctx.current_instruction = 0x880EA5F0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lbzx r10,r10,r27
	ctx.current_instruction = 0x880EA5F4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// xor r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r26.u64;
	// subf r18,r16,r9
	ctx.r18.u64 = ctx.r9.u64 - ctx.r16.u64;
	// lbzx r27,r3,r11
	ctx.current_instruction = 0x880EA600;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// subf r30,r9,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r9.u64;
	// srawi r16,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r18.s32 >> 31;
	// srawi r3,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r17.s32 >> 31;
	// stw r3,-352(r1)
	ctx.current_instruction = 0x880EA610;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r3.u32);
	// xor r18,r18,r16
	ctx.r18.u64 = ctx.r18.u64 ^ ctx.r16.u64;
	// stw r18,-432(r1)
	ctx.current_instruction = 0x880EA618;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r18.u32);
	// subf r3,r26,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r26.u64;
	// mullw r18,r9,r9
	ctx.r18.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi r21,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r30.s32 >> 31;
	// add r29,r29,r18
	ctx.r29.u64 = ctx.r29.u64 + ctx.r18.u64;
	// add r9,r15,r9
	ctx.r9.u64 = ctx.r15.u64 + ctx.r9.u64;
	// srawi r22,r14,31
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r14.s32 >> 31;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// stw r9,-404(r1)
	ctx.current_instruction = 0x880EA63C;
	REX_STORE_U32(ctx.r1.u32 + -404, ctx.r9.u32);
	// xor r9,r14,r22
	ctx.r9.u64 = ctx.r14.u64 ^ ctx.r22.u64;
	// lwz r15,-352(r1)
	ctx.current_instruction = 0x880EA644;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r6,-432(r1)
	ctx.current_instruction = 0x880EA648;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// xor r25,r17,r15
	ctx.r25.u64 = ctx.r17.u64 ^ ctx.r15.u64;
	// stw r29,-356(r1)
	ctx.current_instruction = 0x880EA650;
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r29.u32);
	// subf r26,r16,r6
	ctx.r26.u64 = ctx.r6.u64 - ctx.r16.u64;
	// lwz r16,-304(r1)
	ctx.current_instruction = 0x880EA658;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// srawi r6,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 31;
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + ctx.r26.u64;
	// srawi r8,r16,31
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r16.s32 >> 31;
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// srawi r26,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r28.s32 >> 31;
	// stw r3,-372(r1)
	ctx.current_instruction = 0x880EA670;
	REX_STORE_U32(ctx.r1.u32 + -372, ctx.r3.u32);
	// xor r3,r30,r21
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r21.u64;
	// xor r30,r4,r6
	ctx.r30.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// xor r17,r16,r8
	ctx.r17.u64 = ctx.r16.u64 ^ ctx.r8.u64;
	// xor r16,r28,r26
	ctx.r16.u64 = ctx.r28.u64 ^ ctx.r26.u64;
	// lwz r14,-380(r1)
	ctx.current_instruction = 0x880EA684;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// subf r30,r6,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r6.u64;
	// subf r18,r21,r3
	ctx.r18.u64 = ctx.r3.u64 - ctx.r21.u64;
	// subf r6,r8,r17
	ctx.r6.u64 = ctx.r17.u64 - ctx.r8.u64;
	// lwz r17,-364(r1)
	ctx.current_instruction = 0x880EA694;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// subf r3,r26,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r26.u64;
	// lwz r26,-400(r1)
	ctx.current_instruction = 0x880EA69C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// mullw r29,r31,r31
	ctx.r29.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r31.s32);
	// lwz r31,-372(r1)
	ctx.current_instruction = 0x880EA6A4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// lwz r16,-404(r1)
	ctx.current_instruction = 0x880EA6A8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -404);
	// add r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 + ctx.r3.u64;
	// mullw r28,r10,r10
	ctx.r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// add r6,r19,r10
	ctx.r6.u64 = ctx.r19.u64 + ctx.r10.u64;
	// lwz r19,-224(r1)
	ctx.current_instruction = 0x880EA6B8;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mullw r29,r27,r27
	ctx.r29.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r27.s32);
	// stw r29,-432(r1)
	ctx.current_instruction = 0x880EA6C4;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r29.u32);
	// add r26,r26,r19
	ctx.r26.u64 = ctx.r26.u64 + ctx.r19.u64;
	// lwz r19,-356(r1)
	ctx.current_instruction = 0x880EA6CC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// subf r25,r15,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r15.u64;
	// lwz r15,-416(r1)
	ctx.current_instruction = 0x880EA6D4;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -416);
	// add r26,r26,r24
	ctx.r26.u64 = ctx.r26.u64 + ctx.r24.u64;
	// add r25,r25,r18
	ctx.r25.u64 = ctx.r25.u64 + ctx.r18.u64;
	// lwz r18,-248(r1)
	ctx.current_instruction = 0x880EA6E0;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// add r24,r28,r17
	ctx.r24.u64 = ctx.r28.u64 + ctx.r17.u64;
	// lwz r17,-312(r1)
	ctx.current_instruction = 0x880EA6E8;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// addi r10,r18,1
	ctx.r10.s64 = ctx.r18.s64 + 1;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// subf r9,r22,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r22.u64;
	// stw r31,-372(r1)
	ctx.current_instruction = 0x880EA6F8;
	REX_STORE_U32(ctx.r1.u32 + -372, ctx.r31.u32);
	// mullw r31,r5,r5
	ctx.r31.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// lbzx r8,r17,r11
	ctx.current_instruction = 0x880EA700;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r11.u32);
	// lbzx r28,r10,r11
	ctx.current_instruction = 0x880EA704;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stw r31,-352(r1)
	ctx.current_instruction = 0x880EA708;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r31.u32);
	// std r18,-200(r1)
	ctx.current_instruction = 0x880EA70C;
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r18.u64);
	// stw r8,-400(r1)
	ctx.current_instruction = 0x880EA710;
	REX_STORE_U32(ctx.r1.u32 + -400, ctx.r8.u32);
	// ld r8,-336(r1)
	ctx.current_instruction = 0x880EA714;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// add r31,r6,r28
	ctx.r31.u64 = ctx.r6.u64 + ctx.r28.u64;
	// add r29,r9,r30
	ctx.r29.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r30,r16,r7
	ctx.r30.u64 = ctx.r16.u64 + ctx.r7.u64;
	// stw r31,-304(r1)
	ctx.current_instruction = 0x880EA724;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r31.u32);
	// mullw r23,r7,r7
	ctx.r23.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// lwz r16,-432(r1)
	ctx.current_instruction = 0x880EA72C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// add r31,r30,r8
	ctx.r31.u64 = ctx.r30.u64 + ctx.r8.u64;
	// lwz r4,-352(r1)
	ctx.current_instruction = 0x880EA734;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// mullw r9,r8,r8
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// stw r31,-432(r1)
	ctx.current_instruction = 0x880EA73C;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r31.u32);
	// lwz r22,-432(r1)
	ctx.current_instruction = 0x880EA740;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// stw r22,-404(r1)
	ctx.current_instruction = 0x880EA744;
	REX_STORE_U32(ctx.r1.u32 + -404, ctx.r22.u32);
	// add r31,r23,r9
	ctx.r31.u64 = ctx.r23.u64 + ctx.r9.u64;
	// lwz r23,-292(r1)
	ctx.current_instruction = 0x880EA74C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// addi r3,r20,2
	ctx.r3.s64 = ctx.r20.s64 + 2;
	// add r19,r31,r19
	ctx.r19.u64 = ctx.r31.u64 + ctx.r19.u64;
	// subf r31,r8,r27
	ctx.r31.u64 = ctx.r27.u64 - ctx.r8.u64;
	// stw r19,-356(r1)
	ctx.current_instruction = 0x880EA75C;
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r19.u32);
	// subf r9,r7,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r7.u64;
	// stw r31,-432(r1)
	ctx.current_instruction = 0x880EA764;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r31.u32);
	// lwz r19,-432(r1)
	ctx.current_instruction = 0x880EA768;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// srawi r22,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r9.s32 >> 31;
	// lbzx r10,r3,r11
	ctx.current_instruction = 0x880EA770;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// lwz r3,-424(r1)
	ctx.current_instruction = 0x880EA774;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -424);
	// stw r9,-432(r1)
	ctx.current_instruction = 0x880EA778;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r9.u32);
	// add r9,r15,r5
	ctx.r9.u64 = ctx.r15.u64 + ctx.r5.u64;
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// lwz r15,-432(r1)
	ctx.current_instruction = 0x880EA784;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// xor r15,r15,r22
	ctx.r15.u64 = ctx.r15.u64 ^ ctx.r22.u64;
	// lbzx r30,r6,r11
	ctx.current_instruction = 0x880EA78C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// addi r6,r3,-7
	ctx.r6.s64 = ctx.r3.s64 + -7;
	// srawi r21,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r19.s32 >> 31;
	// stw r10,-352(r1)
	ctx.current_instruction = 0x880EA798;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r10.u32);
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// xor r19,r19,r21
	ctx.r19.u64 = ctx.r19.u64 ^ ctx.r21.u64;
	// lbzx r31,r6,r11
	ctx.current_instruction = 0x880EA7A4;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// addi r6,r18,2
	ctx.r6.s64 = ctx.r18.s64 + 2;
	// lwz r18,-304(r1)
	ctx.current_instruction = 0x880EA7AC;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// subf r19,r21,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r21.u64;
	// lbzx r5,r6,r11
	ctx.current_instruction = 0x880EA7B4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbzx r6,r23,r11
	ctx.current_instruction = 0x880EA7B8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// subf r23,r22,r15
	ctx.r23.u64 = ctx.r15.u64 - ctx.r22.u64;
	// add r15,r29,r14
	ctx.r15.u64 = ctx.r29.u64 + ctx.r14.u64;
	// stw r4,-432(r1)
	ctx.current_instruction = 0x880EA7C4;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r4.u32);
	// add r23,r23,r19
	ctx.r23.u64 = ctx.r23.u64 + ctx.r19.u64;
	// ld r22,-240(r1)
	ctx.current_instruction = 0x880EA7CC;
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// mullw r19,r28,r28
	ctx.r19.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r28.s32);
	// stw r15,-380(r1)
	ctx.current_instruction = 0x880EA7D4;
	REX_STORE_U32(ctx.r1.u32 + -380, ctx.r15.u32);
	// lbzx r29,r10,r11
	ctx.current_instruction = 0x880EA7D8;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// ld r21,-192(r1)
	ctx.current_instruction = 0x880EA7DC;
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// ld r4,-216(r1)
	ctx.current_instruction = 0x880EA7E0;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// std r3,-336(r1)
	ctx.current_instruction = 0x880EA7E4;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r3.u64);
	// lwz r14,-356(r1)
	ctx.current_instruction = 0x880EA7E8;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// add r25,r25,r22
	ctx.r25.u64 = ctx.r25.u64 + ctx.r22.u64;
	// add r10,r9,r27
	ctx.r10.u64 = ctx.r9.u64 + ctx.r27.u64;
	// mullw r27,r29,r29
	ctx.r27.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r29.s32);
	// stw r10,-416(r1)
	ctx.current_instruction = 0x880EA7F8;
	REX_STORE_U32(ctx.r1.u32 + -416, ctx.r10.u32);
	// lwz r15,-432(r1)
	ctx.current_instruction = 0x880EA7FC;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// add r22,r15,r16
	ctx.r22.u64 = ctx.r15.u64 + ctx.r16.u64;
	// addi r10,r21,2
	ctx.r10.s64 = ctx.r21.s64 + 2;
	// add r26,r22,r26
	ctx.r26.u64 = ctx.r22.u64 + ctx.r26.u64;
	// lwz r22,-380(r1)
	ctx.current_instruction = 0x880EA80C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// add r16,r18,r29
	ctx.r16.u64 = ctx.r18.u64 + ctx.r29.u64;
	// stw r26,-368(r1)
	ctx.current_instruction = 0x880EA814;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r26.u32);
	// mullw r26,r30,r30
	ctx.r26.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r30.s32);
	// stw r16,-412(r1)
	ctx.current_instruction = 0x880EA81C;
	REX_STORE_U32(ctx.r1.u32 + -412, ctx.r16.u32);
	// lbzx r10,r10,r11
	ctx.current_instruction = 0x880EA820;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stw r26,-432(r1)
	ctx.current_instruction = 0x880EA824;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r26.u32);
	// rotlwi r15,r16,0
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r16.u32, 0);
	// lwz r16,-400(r1)
	ctx.current_instruction = 0x880EA82C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// add r25,r23,r25
	ctx.r25.u64 = ctx.r23.u64 + ctx.r25.u64;
	// lwz r23,-404(r1)
	ctx.current_instruction = 0x880EA834;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -404);
	// add r27,r19,r27
	ctx.r27.u64 = ctx.r19.u64 + ctx.r27.u64;
	// subf r19,r16,r10
	ctx.r19.u64 = ctx.r10.u64 - ctx.r16.u64;
	// stw r25,-384(r1)
	ctx.current_instruction = 0x880EA840;
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r25.u32);
	// subf r7,r7,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r7.u64;
	// lwz r16,-352(r1)
	ctx.current_instruction = 0x880EA848;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// stw r19,-304(r1)
	ctx.current_instruction = 0x880EA84C;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r19.u32);
	// subf r8,r8,r29
	ctx.r8.u64 = ctx.r29.u64 - ctx.r8.u64;
	// addi r9,r4,2
	ctx.r9.s64 = ctx.r4.s64 + 2;
	// lwz r25,-416(r1)
	ctx.current_instruction = 0x880EA858;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -416);
	// add r27,r27,r24
	ctx.r27.u64 = ctx.r27.u64 + ctx.r24.u64;
	// srawi r29,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r7.s32 >> 31;
	// srawi r28,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r8.s32 >> 31;
	// stw r27,-364(r1)
	ctx.current_instruction = 0x880EA868;
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r27.u32);
	// lwz r26,-368(r1)
	ctx.current_instruction = 0x880EA86C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// xor r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r29.u64;
	// lbzx r9,r9,r11
	ctx.current_instruction = 0x880EA874;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// xor r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r28.u64;
	// lwz r27,-372(r1)
	ctx.current_instruction = 0x880EA87C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// subf r19,r28,r8
	ctx.r19.u64 = ctx.r8.u64 - ctx.r28.u64;
	// subf r8,r9,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r9.u64;
	// stw r26,-400(r1)
	ctx.current_instruction = 0x880EA888;
	REX_STORE_U32(ctx.r1.u32 + -400, ctx.r26.u32);
	// subf r26,r29,r7
	ctx.r26.u64 = ctx.r7.u64 - ctx.r29.u64;
	// subf r7,r16,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r16.u64;
	// add r16,r25,r30
	ctx.r16.u64 = ctx.r25.u64 + ctx.r30.u64;
	// lwz r30,-432(r1)
	ctx.current_instruction = 0x880EA898;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// mullw r25,r5,r5
	ctx.r25.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// stw r30,-352(r1)
	ctx.current_instruction = 0x880EA8A0;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r30.u32);
	// lwz r24,-384(r1)
	ctx.current_instruction = 0x880EA8A4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// lwz r18,-304(r1)
	ctx.current_instruction = 0x880EA8A8;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// stw r27,-304(r1)
	ctx.current_instruction = 0x880EA8AC;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r27.u32);
	// add r30,r26,r19
	ctx.r30.u64 = ctx.r26.u64 + ctx.r19.u64;
	// stw r24,-224(r1)
	ctx.current_instruction = 0x880EA8B4;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r24.u32);
	// add r26,r23,r9
	ctx.r26.u64 = ctx.r23.u64 + ctx.r9.u64;
	// lwz r29,-364(r1)
	ctx.current_instruction = 0x880EA8BC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// srawi r3,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r18.s32 >> 31;
	// subf r19,r9,r5
	ctx.r19.u64 = ctx.r5.u64 - ctx.r9.u64;
	// mullw r27,r9,r9
	ctx.r27.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// srawi r23,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r7.s32 >> 31;
	// srawi r9,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// mullw r24,r6,r6
	ctx.r24.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// stw r9,-432(r1)
	ctx.current_instruction = 0x880EA8D8;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r9.u32);
	// add r9,r25,r24
	ctx.r9.u64 = ctx.r25.u64 + ctx.r24.u64;
	// lwz r24,-432(r1)
	ctx.current_instruction = 0x880EA8E0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// subf r28,r10,r31
	ctx.r28.u64 = ctx.r31.u64 - ctx.r10.u64;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
	// srawi r25,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r28.s32 >> 31;
	// stw r29,-364(r1)
	ctx.current_instruction = 0x880EA8F0;
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r29.u32);
	// addi r9,r17,1
	ctx.r9.s64 = ctx.r17.s64 + 1;
	// xor r29,r28,r25
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r25.u64;
	// xor r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r24.u64;
	// xor r28,r18,r3
	ctx.r28.u64 = ctx.r18.u64 ^ ctx.r3.u64;
	// xor r7,r7,r23
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r23.u64;
	// stw r7,-432(r1)
	ctx.current_instruction = 0x880EA908;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r7.u32);
	// subf r8,r24,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r24.u64;
	// lbzx r24,r9,r11
	ctx.current_instruction = 0x880EA910;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// subf r7,r25,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r25.u64;
	// add r9,r26,r10
	ctx.r9.u64 = ctx.r26.u64 + ctx.r10.u64;
	// stw r22,-208(r1)
	ctx.current_instruction = 0x880EA91C;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r22.u32);
	// subf r26,r10,r6
	ctx.r26.u64 = ctx.r6.u64 - ctx.r10.u64;
	// ld r18,-200(r1)
	ctx.current_instruction = 0x880EA924;
	ctx.r18.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// mullw r22,r10,r10
	ctx.r22.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// lwz r10,-352(r1)
	ctx.current_instruction = 0x880EA92C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// stw r9,-404(r1)
	ctx.current_instruction = 0x880EA930;
	REX_STORE_U32(ctx.r1.u32 + -404, ctx.r9.u32);
	// std r4,-240(r1)
	ctx.current_instruction = 0x880EA934;
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r4.u64);
	// mullw r29,r31,r31
	ctx.r29.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r31.s32);
	// lwz r25,-432(r1)
	ctx.current_instruction = 0x880EA93C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r15,r5
	ctx.r8.u64 = ctx.r15.u64 + ctx.r5.u64;
	// lwz r15,-400(r1)
	ctx.current_instruction = 0x880EA948;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subf r28,r3,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r3.u64;
	// ld r3,-336(r1)
	ctx.current_instruction = 0x880EA954;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// subf r23,r23,r25
	ctx.r23.u64 = ctx.r25.u64 - ctx.r23.u64;
	// add r5,r29,r15
	ctx.r5.u64 = ctx.r29.u64 + ctx.r15.u64;
	// lwz r15,-304(r1)
	ctx.current_instruction = 0x880EA960;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// stw r5,-368(r1)
	ctx.current_instruction = 0x880EA968;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r5.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r5,r28,r15
	ctx.r5.u64 = ctx.r28.u64 + ctx.r15.u64;
	// lwz r15,-224(r1)
	ctx.current_instruction = 0x880EA974;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// stw r8,-412(r1)
	ctx.current_instruction = 0x880EA978;
	REX_STORE_U32(ctx.r1.u32 + -412, ctx.r8.u32);
	// addi r8,r20,3
	ctx.r8.s64 = ctx.r20.s64 + 3;
	// stw r5,-372(r1)
	ctx.current_instruction = 0x880EA980;
	REX_STORE_U32(ctx.r1.u32 + -372, ctx.r5.u32);
	// addi r9,r4,3
	ctx.r9.s64 = ctx.r4.s64 + 3;
	// add r7,r7,r15
	ctx.r7.u64 = ctx.r7.u64 + ctx.r15.u64;
	// lwz r15,-208(r1)
	ctx.current_instruction = 0x880EA98C;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// add r27,r27,r22
	ctx.r27.u64 = ctx.r27.u64 + ctx.r22.u64;
	// stw r7,-384(r1)
	ctx.current_instruction = 0x880EA994;
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r7.u32);
	// srawi r25,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r19.s32 >> 31;
	// lbzx r7,r8,r11
	ctx.current_instruction = 0x880EA99C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r8,r3,2
	ctx.r8.s64 = ctx.r3.s64 + 2;
	// lbzx r9,r9,r11
	ctx.current_instruction = 0x880EA9A4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// add r6,r27,r14
	ctx.r6.u64 = ctx.r27.u64 + ctx.r14.u64;
	// xor r29,r19,r25
	ctx.r29.u64 = ctx.r19.u64 ^ ctx.r25.u64;
	// lwz r27,-292(r1)
	ctx.current_instruction = 0x880EA9B0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// mullw r5,r9,r9
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// stw r6,-356(r1)
	ctx.current_instruction = 0x880EA9B8;
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r6.u32);
	// stw r5,-432(r1)
	ctx.current_instruction = 0x880EA9BC;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r5.u32);
	// lbzx r5,r8,r11
	ctx.current_instruction = 0x880EA9C0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// srawi r6,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r26.s32 >> 31;
	// subf r29,r25,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r25.u64;
	// lwz r25,-368(r1)
	ctx.current_instruction = 0x880EA9CC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// xor r28,r26,r6
	ctx.r28.u64 = ctx.r26.u64 ^ ctx.r6.u64;
	// lwz r26,-404(r1)
	ctx.current_instruction = 0x880EA9D4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -404);
	// lwz r8,-372(r1)
	ctx.current_instruction = 0x880EA9D8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// add r30,r30,r15
	ctx.r30.u64 = ctx.r30.u64 + ctx.r15.u64;
	// subf r28,r6,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r6.u64;
	// lwz r22,-412(r1)
	ctx.current_instruction = 0x880EA9E4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -412);
	// mullw r6,r5,r5
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// lwz r15,-364(r1)
	ctx.current_instruction = 0x880EA9EC;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// lwz r23,-384(r1)
	ctx.current_instruction = 0x880EA9F0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// stw r6,-352(r1)
	ctx.current_instruction = 0x880EA9F4;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r6.u32);
	// stw r8,-304(r1)
	ctx.current_instruction = 0x880EA9F8;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r8.u32);
	// lwz r14,-356(r1)
	ctx.current_instruction = 0x880EA9FC;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// lwz r19,-432(r1)
	ctx.current_instruction = 0x880EAA00;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// addi r8,r3,-6
	ctx.r8.s64 = ctx.r3.s64 + -6;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r10,r21,3
	ctx.r10.s64 = ctx.r21.s64 + 3;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// subf r29,r7,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r7.u64;
	// lbzx r6,r8,r11
	ctx.current_instruction = 0x880EAA18;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r8,r18,3
	ctx.r8.s64 = ctx.r18.s64 + 3;
	// add r31,r16,r31
	ctx.r31.u64 = ctx.r16.u64 + ctx.r31.u64;
	// stw r30,-380(r1)
	ctx.current_instruction = 0x880EAA24;
	REX_STORE_U32(ctx.r1.u32 + -380, ctx.r30.u32);
	// lbzx r10,r10,r11
	ctx.current_instruction = 0x880EAA28;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// subf r28,r24,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r24.u64;
	// lbzx r7,r8,r11
	ctx.current_instruction = 0x880EAA30;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r8,r27,1
	ctx.r8.s64 = ctx.r27.s64 + 1;
	// subf r27,r9,r5
	ctx.r27.u64 = ctx.r5.u64 - ctx.r9.u64;
	// srawi r30,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r28.s32 >> 31;
	// subf r16,r10,r6
	ctx.r16.u64 = ctx.r6.u64 - ctx.r10.u64;
	// subf r24,r9,r7
	ctx.r24.u64 = ctx.r7.u64 - ctx.r9.u64;
	// lbzx r8,r8,r11
	ctx.current_instruction = 0x880EAA48;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// srawi r4,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r29.s32 >> 31;
	// std r3,-192(r1)
	ctx.current_instruction = 0x880EAA50;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// srawi r3,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r27.s32 >> 31;
	// std r18,-224(r1)
	ctx.current_instruction = 0x880EAA58;
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r18.u64);
	// xor r29,r29,r4
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r4.u64;
	// std r17,-208(r1)
	ctx.current_instruction = 0x880EAA60;
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r17.u64);
	// srawi r18,r16,31
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r16.s32 >> 31;
	// std r20,-200(r1)
	ctx.current_instruction = 0x880EAA68;
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r20.u64);
	// stw r29,-432(r1)
	ctx.current_instruction = 0x880EAA6C;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r29.u32);
	// srawi r17,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r24.s32 >> 31;
	// xor r28,r28,r30
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r30.u64;
	// lwz r20,-352(r1)
	ctx.current_instruction = 0x880EAA78;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// xor r24,r24,r17
	ctx.r24.u64 = ctx.r24.u64 ^ ctx.r17.u64;
	// std r21,-216(r1)
	ctx.current_instruction = 0x880EAA80;
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r21.u64);
	// subf r30,r30,r28
	ctx.r30.u64 = ctx.r28.u64 - ctx.r30.u64;
	// stw r25,-352(r1)
	ctx.current_instruction = 0x880EAA88;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r25.u32);
	// add r29,r26,r9
	ctx.r29.u64 = ctx.r26.u64 + ctx.r9.u64;
	// std r11,-336(r1)
	ctx.current_instruction = 0x880EAA90;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r11.u64);
	// subf r21,r10,r8
	ctx.r21.u64 = ctx.r8.u64 - ctx.r10.u64;
	// stw r23,-400(r1)
	ctx.current_instruction = 0x880EAA98;
	REX_STORE_U32(ctx.r1.u32 + -400, ctx.r23.u32);
	// mullw r23,r8,r8
	ctx.r23.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// srawi r11,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 31;
	// xor r27,r27,r3
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r3.u64;
	// xor r21,r21,r11
	ctx.r21.u64 = ctx.r21.u64 ^ ctx.r11.u64;
	// mullw r9,r6,r6
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// lwz r28,-432(r1)
	ctx.current_instruction = 0x880EAAB0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// stw r24,-432(r1)
	ctx.current_instruction = 0x880EAAB4;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r24.u32);
	// subf r25,r11,r21
	ctx.r25.u64 = ctx.r21.u64 - ctx.r11.u64;
	// ld r21,-216(r1)
	ctx.current_instruction = 0x880EAABC;
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// xor r11,r16,r18
	ctx.r11.u64 = ctx.r16.u64 ^ ctx.r18.u64;
	// mullw r24,r7,r7
	ctx.r24.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// lwz r26,-432(r1)
	ctx.current_instruction = 0x880EAAC8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// add r16,r31,r5
	ctx.r16.u64 = ctx.r31.u64 + ctx.r5.u64;
	// stw r19,-432(r1)
	ctx.current_instruction = 0x880EAAD0;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r19.u32);
	// add r5,r22,r7
	ctx.r5.u64 = ctx.r22.u64 + ctx.r7.u64;
	// add r7,r24,r23
	ctx.r7.u64 = ctx.r24.u64 + ctx.r23.u64;
	// subf r28,r4,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r4.u64;
	// lwz r4,-380(r1)
	ctx.current_instruction = 0x880EAAE0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// add r7,r7,r15
	ctx.r7.u64 = ctx.r7.u64 + ctx.r15.u64;
	// lwz r15,-304(r1)
	ctx.current_instruction = 0x880EAAE8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// subf r26,r17,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r17.u64;
	// ld r17,-208(r1)
	ctx.current_instruction = 0x880EAAF4;
	ctx.r17.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// subf r19,r18,r11
	ctx.r19.u64 = ctx.r11.u64 - ctx.r18.u64;
	// ld r18,-224(r1)
	ctx.current_instruction = 0x880EAAFC;
	ctx.r18.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// subf r22,r3,r27
	ctx.r22.u64 = ctx.r27.u64 - ctx.r3.u64;
	// ld r3,-192(r1)
	ctx.current_instruction = 0x880EAB04;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// add r23,r28,r15
	ctx.r23.u64 = ctx.r28.u64 + ctx.r15.u64;
	// lwz r15,-352(r1)
	ctx.current_instruction = 0x880EAB0C;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r30,r20,r9
	ctx.r30.u64 = ctx.r20.u64 + ctx.r9.u64;
	// ld r20,-200(r1)
	ctx.current_instruction = 0x880EAB14;
	ctx.r20.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// mullw r27,r10,r10
	ctx.r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// stw r7,-364(r1)
	ctx.current_instruction = 0x880EAB1C;
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r7.u32);
	// lwz r11,-432(r1)
	ctx.current_instruction = 0x880EAB20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// add r9,r26,r25
	ctx.r9.u64 = ctx.r26.u64 + ctx.r25.u64;
	// add r24,r30,r15
	ctx.r24.u64 = ctx.r30.u64 + ctx.r15.u64;
	// lwz r15,-400(r1)
	ctx.current_instruction = 0x880EAB2C;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// ld r11,-336(r1)
	ctx.current_instruction = 0x880EAB34;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// add r31,r22,r19
	ctx.r31.u64 = ctx.r22.u64 + ctx.r19.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// ld r4,-240(r1)
	ctx.current_instruction = 0x880EAB40;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// add r26,r16,r6
	ctx.r26.u64 = ctx.r16.u64 + ctx.r6.u64;
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r9,-380(r1)
	ctx.current_instruction = 0x880EAB4C;
	REX_STORE_U32(ctx.r1.u32 + -380, ctx.r9.u32);
	// add r25,r27,r14
	ctx.r25.u64 = ctx.r27.u64 + ctx.r14.u64;
	// add r22,r31,r15
	ctx.r22.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r19,r5,r8
	ctx.r19.u64 = ctx.r5.u64 + ctx.r8.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880ea52c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EA52C;
	// lwz r11,-272(r1)
	ctx.current_instruction = 0x880EAB64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// addi r18,r18,16
	ctx.r18.s64 = ctx.r18.s64 + 16;
	// lwz r9,-292(r1)
	ctx.current_instruction = 0x880EAB6C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// addi r17,r17,16
	ctx.r17.s64 = ctx.r17.s64 + 16;
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r18,-248(r1)
	ctx.current_instruction = 0x880EAB78;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r18.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r17,-312(r1)
	ctx.current_instruction = 0x880EAB80;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r17.u32);
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// stw r10,-272(r1)
	ctx.current_instruction = 0x880EAB88;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r10.u32);
	// addi r21,r21,16
	ctx.r21.s64 = ctx.r21.s64 + 16;
	// stw r3,-424(r1)
	ctx.current_instruction = 0x880EAB90;
	REX_STORE_U32(ctx.r1.u32 + -424, ctx.r3.u32);
	// stw r11,-292(r1)
	ctx.current_instruction = 0x880EAB94;
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r11.u32);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r20,r20,16
	ctx.r20.s64 = ctx.r20.s64 + 16;
	// bne 0x880ea4ec
	if (!ctx.cr0.eq) goto loc_880EA4EC;
	// lwz r3,20(r1)
	ctx.current_instruction = 0x880EABA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// b 0x880eafd4
	goto loc_880EAFD4;
loc_880EABAC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x880eafb8
	if (!ctx.cr6.gt) goto loc_880EAFB8;
	// subfic r11,r25,3
	ctx.xer.ca = ctx.r25.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r25.u64;
	// lwz r29,-404(r1)
	ctx.current_instruction = 0x880EABB8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -404);
	// add r10,r31,r21
	ctx.r10.u64 = ctx.r31.u64 + ctx.r21.u64;
	// lwz r26,-416(r1)
	ctx.current_instruction = 0x880EABC0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -416);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r25,-356(r1)
	ctx.current_instruction = 0x880EABC8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// addi r28,r10,2
	ctx.r28.s64 = ctx.r10.s64 + 2;
	// lwz r24,-368(r1)
	ctx.current_instruction = 0x880EABD0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r23,-372(r1)
	ctx.current_instruction = 0x880EABD8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// lwz r22,-384(r1)
	ctx.current_instruction = 0x880EABDC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// stw r16,-272(r1)
	ctx.current_instruction = 0x880EABE4;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r16.u32);
	// stw r28,-312(r1)
	ctx.current_instruction = 0x880EABE8;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r28.u32);
	// stw r3,-424(r1)
	ctx.current_instruction = 0x880EABEC;
	REX_STORE_U32(ctx.r1.u32 + -424, ctx.r3.u32);
loc_880EABF0:
	// li r10,2
	ctx.r10.s64 = 2;
	// subf r7,r4,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r4.u64;
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// addi r19,r8,-9
	ctx.r19.s64 = ctx.r8.s64 + -9;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r27,r9,-1
	ctx.r27.s64 = ctx.r9.s64 + -1;
	// stw r7,-328(r1)
	ctx.current_instruction = 0x880EAC10;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r19,-280(r1)
	ctx.current_instruction = 0x880EAC18;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r19.u32);
	// stw r27,-344(r1)
	ctx.current_instruction = 0x880EAC1C;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r27.u32);
	// b 0x880eac30
	goto loc_880EAC30;
loc_880EAC24:
	// lwz r7,-328(r1)
	ctx.current_instruction = 0x880EAC24;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// lwz r27,-344(r1)
	ctx.current_instruction = 0x880EAC28;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// lwz r19,-280(r1)
	ctx.current_instruction = 0x880EAC2C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
loc_880EAC30:
	// addi r8,r28,-1
	ctx.r8.s64 = ctx.r28.s64 + -1;
	// lbzx r31,r11,r4
	ctx.current_instruction = 0x880EAC34;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbzx r30,r3,r11
	ctx.current_instruction = 0x880EAC3C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// std r4,-336(r1)
	ctx.current_instruction = 0x880EAC44;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r4.u64);
	// lbzx r18,r8,r11
	ctx.current_instruction = 0x880EAC48;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r8,r20,1
	ctx.r8.s64 = ctx.r20.s64 + 1;
	// lbzx r27,r10,r27
	ctx.current_instruction = 0x880EAC50;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// lbzx r6,r11,r9
	ctx.current_instruction = 0x880EAC54;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r9,r21,1
	ctx.r9.s64 = ctx.r21.s64 + 1;
	// add r5,r26,r27
	ctx.r5.u64 = ctx.r26.u64 + ctx.r27.u64;
	// lbzx r28,r10,r19
	ctx.current_instruction = 0x880EAC60;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r19.u32);
	// lbzx r7,r10,r7
	ctx.current_instruction = 0x880EAC64;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// subf r19,r31,r27
	ctx.r19.u64 = ctx.r27.u64 - ctx.r31.u64;
	// lbzx r26,r11,r8
	ctx.current_instruction = 0x880EAC6C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// subf r8,r4,r21
	ctx.r8.u64 = ctx.r21.u64 - ctx.r4.u64;
	// stw r5,-320(r1)
	ctx.current_instruction = 0x880EAC74;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r5.u32);
	// subf r16,r6,r30
	ctx.r16.u64 = ctx.r30.u64 - ctx.r6.u64;
	// subf r17,r26,r6
	ctx.r17.u64 = ctx.r6.u64 - ctx.r26.u64;
	// lbzx r9,r9,r11
	ctx.current_instruction = 0x880EAC80;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// mullw r26,r6,r6
	ctx.r26.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// lbzx r5,r10,r8
	ctx.current_instruction = 0x880EAC88;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stw r26,-304(r1)
	ctx.current_instruction = 0x880EAC8C;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r26.u32);
	// subf r8,r4,r20
	ctx.r8.u64 = ctx.r20.u64 - ctx.r4.u64;
	// subf r26,r7,r5
	ctx.r26.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r15,r18,r9
	ctx.r15.u64 = ctx.r9.u64 - ctx.r18.u64;
	// subf r20,r5,r28
	ctx.r20.u64 = ctx.r28.u64 - ctx.r5.u64;
	// mullw r18,r5,r5
	ctx.r18.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// lbzx r8,r10,r8
	ctx.current_instruction = 0x880EACA4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// lwz r14,-320(r1)
	ctx.current_instruction = 0x880EACA8;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// subf r29,r8,r31
	ctx.r29.u64 = ctx.r31.u64 - ctx.r8.u64;
	// add r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 + ctx.r5.u64;
	// srawi r5,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r29.s32 >> 31;
	// srawi r3,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r26.s32 >> 31;
	// stw r7,-404(r1)
	ctx.current_instruction = 0x880EACC4;
	REX_STORE_U32(ctx.r1.u32 + -404, ctx.r7.u32);
	// srawi r7,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r19.s32 >> 31;
	// lbzx r10,r10,r11
	ctx.current_instruction = 0x880EACCC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r4,2
	ctx.r8.s64 = ctx.r4.s64 + 2;
	// stw r7,-320(r1)
	ctx.current_instruction = 0x880EACD4;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r7.u32);
	// xor r19,r19,r7
	ctx.r19.u64 = ctx.r19.u64 ^ ctx.r7.u64;
	// srawi r4,r20,31
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r20.s32 >> 31;
	// xor r26,r26,r3
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r3.u64;
	// xor r20,r20,r4
	ctx.r20.u64 = ctx.r20.u64 ^ ctx.r4.u64;
	// lbzx r7,r8,r11
	ctx.current_instruction = 0x880EACE8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r8,r21,2
	ctx.r8.s64 = ctx.r21.s64 + 2;
	// mullw r21,r27,r27
	ctx.r21.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r27.s32);
	// stw r26,-432(r1)
	ctx.current_instruction = 0x880EACF4;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r26.u32);
	// lbzx r8,r8,r11
	ctx.current_instruction = 0x880EACF8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// std r8,-240(r1)
	ctx.current_instruction = 0x880EACFC;
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r8.u64);
	// srawi r27,r15,31
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r15.s32 >> 31;
	// subf r26,r4,r20
	ctx.r26.u64 = ctx.r20.u64 - ctx.r4.u64;
	// lwz r8,-404(r1)
	ctx.current_instruction = 0x880EAD08;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -404);
	// xor r29,r29,r5
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r5.u64;
	// mullw r31,r31,r31
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r31.s32);
	// lwz r20,-320(r1)
	ctx.current_instruction = 0x880EAD14;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// stw r27,-320(r1)
	ctx.current_instruction = 0x880EAD18;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r27.u32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r29,r5,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r5.u64;
	// lwz r5,-432(r1)
	ctx.current_instruction = 0x880EAD24;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// stw r6,-352(r1)
	ctx.current_instruction = 0x880EAD28;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r6.u32);
	// subf r27,r20,r19
	ctx.r27.u64 = ctx.r19.u64 - ctx.r20.u64;
	// subf r19,r3,r5
	ctx.r19.u64 = ctx.r5.u64 - ctx.r3.u64;
	// mullw r20,r28,r28
	ctx.r20.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r28.s32);
	// lwz r4,-320(r1)
	ctx.current_instruction = 0x880EAD38;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// srawi r6,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r17.s32 >> 31;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r31,r31,r18
	ctx.r31.u64 = ctx.r31.u64 + ctx.r18.u64;
	// add r5,r14,r28
	ctx.r5.u64 = ctx.r14.u64 + ctx.r28.u64;
	// add r28,r21,r20
	ctx.r28.u64 = ctx.r21.u64 + ctx.r20.u64;
	// srawi r14,r16,31
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x7FFFFFFF) != 0);
	ctx.r14.s64 = ctx.r16.s32 >> 31;
	// add r29,r29,r19
	ctx.r29.u64 = ctx.r29.u64 + ctx.r19.u64;
	// lwz r3,-352(r1)
	ctx.current_instruction = 0x880EAD5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// srawi r19,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r19.s64 = ctx.r8.s32 >> 31;
	// xor r21,r15,r4
	ctx.r21.u64 = ctx.r15.u64 ^ ctx.r4.u64;
	// xor r20,r17,r6
	ctx.r20.u64 = ctx.r17.u64 ^ ctx.r6.u64;
	// add r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 + ctx.r25.u64;
	// add r27,r27,r22
	ctx.r27.u64 = ctx.r27.u64 + ctx.r22.u64;
	// subf r22,r6,r20
	ctx.r22.u64 = ctx.r20.u64 - ctx.r6.u64;
	// lwz r20,-264(r1)
	ctx.current_instruction = 0x880EAD78;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// subf r25,r4,r21
	ctx.r25.u64 = ctx.r21.u64 - ctx.r4.u64;
	// ld r4,-336(r1)
	ctx.current_instruction = 0x880EAD80;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// add r28,r28,r24
	ctx.r28.u64 = ctx.r28.u64 + ctx.r24.u64;
	// lwz r21,-260(r1)
	ctx.current_instruction = 0x880EAD88;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// add r25,r25,r22
	ctx.r25.u64 = ctx.r25.u64 + ctx.r22.u64;
	// mullw r24,r30,r30
	ctx.r24.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r30.s32);
	// std r4,-336(r1)
	ctx.current_instruction = 0x880EAD94;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r4.u64);
	// add r29,r29,r23
	ctx.r29.u64 = ctx.r29.u64 + ctx.r23.u64;
	// add r30,r5,r30
	ctx.r30.u64 = ctx.r5.u64 + ctx.r30.u64;
	// xor r18,r16,r14
	ctx.r18.u64 = ctx.r16.u64 ^ ctx.r14.u64;
	// lwz r16,-304(r1)
	ctx.current_instruction = 0x880EADA4;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// xor r17,r8,r19
	ctx.r17.u64 = ctx.r8.u64 ^ ctx.r19.u64;
	// ld r8,-240(r1)
	ctx.current_instruction = 0x880EADAC;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mullw r26,r9,r9
	ctx.r26.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// add r29,r25,r29
	ctx.r29.u64 = ctx.r25.u64 + ctx.r29.u64;
	// add r25,r30,r10
	ctx.r25.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mullw r23,r10,r10
	ctx.r23.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// subf r9,r14,r18
	ctx.r9.u64 = ctx.r18.u64 - ctx.r14.u64;
	// subf r6,r19,r17
	ctx.r6.u64 = ctx.r17.u64 - ctx.r19.u64;
	// addi r10,r20,2
	ctx.r10.s64 = ctx.r20.s64 + 2;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r3,-424(r1)
	ctx.current_instruction = 0x880EADD8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -424);
	// mullw r5,r7,r7
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// lbzx r22,r10,r11
	ctx.current_instruction = 0x880EADE0;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stw r5,-320(r1)
	ctx.current_instruction = 0x880EADE4;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r5.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// add r5,r24,r23
	ctx.r5.u64 = ctx.r24.u64 + ctx.r23.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// add r24,r5,r28
	ctx.r24.u64 = ctx.r5.u64 + ctx.r28.u64;
	// lwz r28,-312(r1)
	ctx.current_instruction = 0x880EADF8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// add r26,r16,r26
	ctx.r26.u64 = ctx.r16.u64 + ctx.r26.u64;
	// stw r6,-384(r1)
	ctx.current_instruction = 0x880EAE00;
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r6.u32);
	// lbzx r30,r10,r11
	ctx.current_instruction = 0x880EAE04;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r3,-7
	ctx.r10.s64 = ctx.r3.s64 + -7;
	// add r26,r26,r31
	ctx.r26.u64 = ctx.r26.u64 + ctx.r31.u64;
	// add r5,r25,r30
	ctx.r5.u64 = ctx.r25.u64 + ctx.r30.u64;
	// lbzx r27,r28,r11
	ctx.current_instruction = 0x880EAE14;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// add r25,r9,r8
	ctx.r25.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r5,-432(r1)
	ctx.current_instruction = 0x880EAE1C;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r5.u32);
	// subf r5,r22,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r22.u64;
	// subf r27,r27,r8
	ctx.r27.u64 = ctx.r8.u64 - ctx.r27.u64;
	// stw r25,-404(r1)
	ctx.current_instruction = 0x880EAE28;
	REX_STORE_U32(ctx.r1.u32 + -404, ctx.r25.u32);
	// subf r7,r7,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r7.u64;
	// lbzx r31,r10,r11
	ctx.current_instruction = 0x880EAE30;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// srawi r22,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r5.s32 >> 31;
	// std r28,-240(r1)
	ctx.current_instruction = 0x880EAE38;
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r28.u64);
	// srawi r25,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r27.s32 >> 31;
	// lwz r17,-320(r1)
	ctx.current_instruction = 0x880EAE40;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// srawi r16,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r7.s32 >> 31;
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// xor r7,r7,r16
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r16.u64;
	// addi r6,r28,1
	ctx.r6.s64 = ctx.r28.s64 + 1;
	// stw r7,-320(r1)
	ctx.current_instruction = 0x880EAE54;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r7.u32);
	// subf r23,r8,r31
	ctx.r23.u64 = ctx.r31.u64 - ctx.r8.u64;
	// xor r19,r5,r22
	ctx.r19.u64 = ctx.r5.u64 ^ ctx.r22.u64;
	// lbzx r9,r10,r11
	ctx.current_instruction = 0x880EAE60;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r20,3
	ctx.r10.s64 = ctx.r20.s64 + 3;
	// xor r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r25.u64;
	// lbzx r18,r6,r11
	ctx.current_instruction = 0x880EAE6C;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// addi r6,r3,2
	ctx.r6.s64 = ctx.r3.s64 + 2;
	// srawi r15,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r23.s32 >> 31;
	// subf r22,r22,r19
	ctx.r22.u64 = ctx.r19.u64 - ctx.r22.u64;
	// lwz r4,-384(r1)
	ctx.current_instruction = 0x880EAE7C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// lbzx r14,r10,r11
	ctx.current_instruction = 0x880EAE80;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r21,3
	ctx.r10.s64 = ctx.r21.s64 + 3;
	// subf r19,r25,r27
	ctx.r19.u64 = ctx.r27.u64 - ctx.r25.u64;
	// lbzx r5,r6,r11
	ctx.current_instruction = 0x880EAE8C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// xor r6,r23,r15
	ctx.r6.u64 = ctx.r23.u64 ^ ctx.r15.u64;
	// mullw r23,r31,r31
	ctx.r23.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r31.s32);
	// lwz r28,-432(r1)
	ctx.current_instruction = 0x880EAE98;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// stw r6,-432(r1)
	ctx.current_instruction = 0x880EAE9C;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r6.u32);
	// lbzx r10,r10,r11
	ctx.current_instruction = 0x880EAEA0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lwz r27,-320(r1)
	ctx.current_instruction = 0x880EAEA4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// mullw r7,r8,r8
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// mullw r30,r30,r30
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r30.s32);
	// addi r6,r3,-6
	ctx.r6.s64 = ctx.r3.s64 + -6;
	// subf r27,r16,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r16.u64;
	// lwz r25,-432(r1)
	ctx.current_instruction = 0x880EAEB8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// add r8,r28,r31
	ctx.r8.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r31,r22,r19
	ctx.r31.u64 = ctx.r22.u64 + ctx.r19.u64;
	// lbzx r6,r6,r11
	ctx.current_instruction = 0x880EAEC4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// subf r25,r15,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r15.u64;
	// lwz r16,-404(r1)
	ctx.current_instruction = 0x880EAECC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -404);
	// add r7,r17,r7
	ctx.r7.u64 = ctx.r17.u64 + ctx.r7.u64;
	// ld r28,-240(r1)
	ctx.current_instruction = 0x880EAED4;
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// add r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 + ctx.r23.u64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// subf r25,r14,r9
	ctx.r25.u64 = ctx.r9.u64 - ctx.r14.u64;
	// add r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 + ctx.r26.u64;
	// subf r29,r18,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r18.u64;
	// subf r26,r9,r5
	ctx.r26.u64 = ctx.r5.u64 - ctx.r9.u64;
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// srawi r24,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r25.s32 >> 31;
	// subf r23,r10,r6
	ctx.r23.u64 = ctx.r6.u64 - ctx.r10.u64;
	// srawi r22,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r29.s32 >> 31;
	// srawi r19,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r19.s64 = ctx.r26.s32 >> 31;
	// srawi r17,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r23.s32 >> 31;
	// xor r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r24.u64;
	// xor r29,r29,r22
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r22.u64;
	// xor r15,r26,r19
	ctx.r15.u64 = ctx.r26.u64 ^ ctx.r19.u64;
	// xor r23,r23,r17
	ctx.r23.u64 = ctx.r23.u64 ^ ctx.r17.u64;
	// subf r26,r24,r25
	ctx.r26.u64 = ctx.r25.u64 - ctx.r24.u64;
	// subf r18,r22,r29
	ctx.r18.u64 = ctx.r29.u64 - ctx.r22.u64;
	// subf r24,r19,r15
	ctx.r24.u64 = ctx.r15.u64 - ctx.r19.u64;
	// subf r23,r17,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r17.u64;
	// mullw r22,r5,r5
	ctx.r22.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// mullw r25,r9,r9
	ctx.r25.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// mullw r17,r10,r10
	ctx.r17.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// mullw r19,r6,r6
	ctx.r19.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// add r29,r16,r9
	ctx.r29.u64 = ctx.r16.u64 + ctx.r9.u64;
	// add r26,r26,r18
	ctx.r26.u64 = ctx.r26.u64 + ctx.r18.u64;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r9,r24,r23
	ctx.r9.u64 = ctx.r24.u64 + ctx.r23.u64;
	// add r27,r27,r4
	ctx.r27.u64 = ctx.r27.u64 + ctx.r4.u64;
	// ld r4,-336(r1)
	ctx.current_instruction = 0x880EAF50;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// add r8,r22,r19
	ctx.r8.u64 = ctx.r22.u64 + ctx.r19.u64;
	// add r25,r25,r17
	ctx.r25.u64 = ctx.r25.u64 + ctx.r17.u64;
	// add r23,r26,r31
	ctx.r23.u64 = ctx.r26.u64 + ctx.r31.u64;
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r25,r25,r7
	ctx.r25.u64 = ctx.r25.u64 + ctx.r7.u64;
	// add r26,r5,r6
	ctx.r26.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r24,r8,r30
	ctx.r24.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r22,r9,r27
	ctx.r22.u64 = ctx.r9.u64 + ctx.r27.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880eac24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EAC24;
	// lwz r11,-272(r1)
	ctx.current_instruction = 0x880EAF7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// addi r21,r21,16
	ctx.r21.s64 = ctx.r21.s64 + 16;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,-260(r1)
	ctx.current_instruction = 0x880EAF8C;
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r21.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r28,-312(r1)
	ctx.current_instruction = 0x880EAF94;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r28.u32);
	// addi r20,r20,16
	ctx.r20.s64 = ctx.r20.s64 + 16;
	// stw r11,-272(r1)
	ctx.current_instruction = 0x880EAF9C;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r11.u32);
	// stw r3,-424(r1)
	ctx.current_instruction = 0x880EAFA0;
	REX_STORE_U32(ctx.r1.u32 + -424, ctx.r3.u32);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stw r20,-264(r1)
	ctx.current_instruction = 0x880EAFA8;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r20.u32);
	// bne 0x880eabf0
	if (!ctx.cr0.eq) goto loc_880EABF0;
	// lwz r3,20(r1)
	ctx.current_instruction = 0x880EAFB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// b 0x880eafd0
	goto loc_880EAFD0;
loc_880EAFB8:
	// lwz r29,-404(r1)
	ctx.current_instruction = 0x880EAFB8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -404);
	// lwz r26,-416(r1)
	ctx.current_instruction = 0x880EAFBC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -416);
	// lwz r25,-356(r1)
	ctx.current_instruction = 0x880EAFC0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// lwz r24,-368(r1)
	ctx.current_instruction = 0x880EAFC4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// lwz r23,-372(r1)
	ctx.current_instruction = 0x880EAFC8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// lwz r22,-384(r1)
	ctx.current_instruction = 0x880EAFCC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
loc_880EAFD0:
	// lwz r19,-412(r1)
	ctx.current_instruction = 0x880EAFD0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -412);
loc_880EAFD4:
	// lwz r11,720(r3)
	ctx.current_instruction = 0x880EAFD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// extsw r10,r25
	ctx.r10.s64 = ctx.r25.s32;
	// extsw r9,r19
	ctx.r9.s64 = ctx.r19.s32;
	// lwz r8,-364(r1)
	ctx.current_instruction = 0x880EAFE0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// std r10,-336(r1)
	ctx.current_instruction = 0x880EAFE8;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r10.u64);
	// lfd f0,-336(r1)
	ctx.current_instruction = 0x880EAFEC;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// extsw r6,r26
	ctx.r6.s64 = ctx.r26.s32;
	// std r7,-336(r1)
	ctx.current_instruction = 0x880EAFF4;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r7.u64);
	// lfd f13,-336(r1)
	ctx.current_instruction = 0x880EAFF8;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// std r9,-336(r1)
	ctx.current_instruction = 0x880EAFFC;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r9.u64);
	// lfd f11,-336(r1)
	ctx.current_instruction = 0x880EB000;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// extsw r4,r29
	ctx.r4.s64 = ctx.r29.s32;
	// std r6,-336(r1)
	ctx.current_instruction = 0x880EB008;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r6.u64);
	// lfd f10,-336(r1)
	ctx.current_instruction = 0x880EB00C;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// std r4,-336(r1)
	ctx.current_instruction = 0x880EB014;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r4.u64);
	// lfd f9,-336(r1)
	ctx.current_instruction = 0x880EB018;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// extsw r9,r24
	ctx.r9.s64 = ctx.r24.s32;
	// std r11,-336(r1)
	ctx.current_instruction = 0x880EB020;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r11.u64);
	// lfd f6,-336(r1)
	ctx.current_instruction = 0x880EB024;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// lis r5,-30720
	ctx.r5.s64 = -2013265920;
	// std r9,-336(r1)
	ctx.current_instruction = 0x880EB02C;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r9.u64);
	// lfd f1,-336(r1)
	ctx.current_instruction = 0x880EB030;
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// fcfid f4,f0
	ctx.f4.f64 = double(ctx.f0.s64);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// lfs f13,17640(r5)
	ctx.current_instruction = 0x880EB040;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17640);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6708(r10)
	ctx.current_instruction = 0x880EB044;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6708);
	ctx.f12.f64 = double(temp.f32);
	// fcfid f2,f11
	ctx.f2.f64 = double(ctx.f11.s64);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// fcfid f3,f10
	ctx.f3.f64 = double(ctx.f10.s64);
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// cmpw cr6,r22,r23
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r23.s32, ctx.xer);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// lfs f11,17636(r8)
	ctx.current_instruction = 0x880EB068;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 17636);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,17632(r7)
	ctx.current_instruction = 0x880EB06C;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 17632);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f7
	ctx.f9.f64 = double(float(ctx.f7.f64));
	// frsp f7,f3
	ctx.f7.f64 = double(float(ctx.f3.f64));
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f8,f4
	ctx.f8.f64 = double(float(ctx.f4.f64));
	// frsp f4,f2
	ctx.f4.f64 = double(float(ctx.f2.f64));
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
	// lfs f0,12444(r6)
	ctx.current_instruction = 0x880EB08C;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12444);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f9,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// frsp f9,f3
	ctx.f9.f64 = double(float(ctx.f3.f64));
	// fdivs f6,f12,f1
	ctx.f6.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// fmuls f5,f5,f6
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f3,f7,f6
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f1,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f13,f5,f5
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmuls f12,f3,f3
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmuls f7,f1,f1
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmsubs f5,f8,f6,f13
	ctx.f5.f64 = double(float(std::fma(ctx.f8.f64, ctx.f6.f64, -ctx.f13.f64)));
	// fmsubs f13,f2,f6,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f2.f64, ctx.f6.f64, -ctx.f12.f64)));
	// fmsubs f12,f9,f6,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f6.f64, -ctx.f7.f64)));
	// fmuls f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f3,f5,f10
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// bgt cr6,0x880eb0e4
	if (ctx.cr6.gt) goto loc_880EB0E4;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x880eb0e4
	if (ctx.cr6.lt) goto loc_880EB0E4;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x880eb11c
	if (!ctx.cr6.gt) goto loc_880EB11C;
loc_880EB0E4:
	// lwz r11,7204(r3)
	ctx.current_instruction = 0x880EB0E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7204);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,7208(r3)
	ctx.current_instruction = 0x880EB0F0;
	REX_STORE_U32(ctx.r3.u32 + 7208, ctx.r10.u32);
	// ble cr6,0x880eb11c
	if (!ctx.cr6.gt) goto loc_880EB11C;
	// lwz r11,-380(r1)
	ctx.current_instruction = 0x880EB0F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bgt cr6,0x880eb114
	if (ctx.cr6.gt) goto loc_880EB114;
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x880eb114
	if (ctx.cr6.lt) goto loc_880EB114;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x880eb11c
	if (!ctx.cr6.gt) goto loc_880EB11C;
loc_880EB114:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,7208(r3)
	ctx.current_instruction = 0x880EB118;
	REX_STORE_U32(ctx.r3.u32 + 7208, ctx.r11.u32);
loc_880EB11C:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88132948) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88132948;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88132948) {
			switch (rex_dispatch_address) {
				case 0x88132950:
				case 0x88132A5C:
				case 0x88132AC0:
				case 0x88132AF4:
				case 0x88132B64:
				case 0x88132B8C:
				case 0x88132BEC:
				case 0x88132C70:
				case 0x88132C9C:
				case 0x88132CE0:
				case 0x88132D00:
				case 0x88132D30:
				case 0x88132D9C:
				case 0x88132DC0:
				case 0x88132DDC:
				case 0x88132E00:
				case 0x88132EC4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88132948;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88132950: goto loc_88132950;
		case 0x88132A5C: goto loc_88132A5C;
		case 0x88132AC0: goto loc_88132AC0;
		case 0x88132AF4: goto loc_88132AF4;
		case 0x88132B64: goto loc_88132B64;
		case 0x88132B8C: goto loc_88132B8C;
		case 0x88132BEC: goto loc_88132BEC;
		case 0x88132C70: goto loc_88132C70;
		case 0x88132C9C: goto loc_88132C9C;
		case 0x88132CE0: goto loc_88132CE0;
		case 0x88132D00: goto loc_88132D00;
		case 0x88132D30: goto loc_88132D30;
		case 0x88132D9C: goto loc_88132D9C;
		case 0x88132DC0: goto loc_88132DC0;
		case 0x88132DDC: goto loc_88132DDC;
		case 0x88132E00: goto loc_88132E00;
		case 0x88132EC4: goto loc_88132EC4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x88132950;
	__savegprlr_16(ctx, base);
loc_88132950:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x88132950;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,424(r5)
	ctx.current_instruction = 0x88132954;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 424);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lhz r7,118(r5)
	ctx.current_instruction = 0x8813295C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r8,56(r5)
	ctx.current_instruction = 0x88132964;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lhz r23,728(r3)
	ctx.current_instruction = 0x8813296C;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r3.u32 + 728);
	// extsh r22,r7
	ctx.r22.s64 = ctx.r7.s16;
	// lwz r11,256(r3)
	ctx.current_instruction = 0x88132974;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r5,12(r10)
	ctx.current_instruction = 0x8813297C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// extsh r6,r23
	ctx.r6.s64 = ctx.r23.s16;
	// addi r4,r23,1
	ctx.r4.s64 = ctx.r23.s64 + 1;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lhz r3,0(r5)
	ctx.current_instruction = 0x88132994;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// slw r19,r21,r6
	ctx.r19.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r18,r4
	ctx.r18.s64 = ctx.r4.s16;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// add r20,r9,r8
	ctx.r20.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bge cr6,0x88132ed0
	if (!ctx.cr6.lt) goto loc_88132ED0;
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lhz r9,0(r10)
	ctx.current_instruction = 0x881329C0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// add r8,r10,r22
	ctx.r8.u64 = ctx.r10.u64 + ctx.r22.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x88132ed0
	if (ctx.cr6.gt) goto loc_88132ED0;
	// lhz r11,182(r26)
	ctx.current_instruction = 0x881329D4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 182);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x88132ed0
	if (ctx.cr6.gt) goto loc_88132ED0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x88132ed0
	if (ctx.cr6.lt) goto loc_88132ED0;
	// lwz r11,72(r31)
	ctx.current_instruction = 0x881329EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x88132e94
	if (ctx.cr6.gt) goto loc_88132E94;
	// li r16,2
	ctx.r16.s64 = 2;
	// li r17,3
	ctx.r17.s64 = 3;
	// li r29,9
	ctx.r29.s64 = 9;
	// lis r12,-30701
	ctx.r12.s64 = -2012020736;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,10780
	ctx.r12.s64 = ctx.r12.s64 + 10780;
	// lwzx r0,r12,r0
	ctx.current_instruction = 0x88132A10;
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_88132A48;
	case 1:
		goto loc_88132E94;
	case 2:
		goto loc_88132A4C;
	case 3:
		goto loc_88132A8C;
	case 4:
		goto loc_88132E94;
	case 5:
		goto loc_88132E94;
	case 6:
		goto loc_88132E94;
	case 7:
		goto loc_88132E94;
	case 8:
		goto loc_88132E94;
	case 9:
		goto loc_88132AD8;
	case 10:
		goto loc_88132B1C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_88132A48:
	// stw r16,72(r31)
	ctx.current_instruction = 0x88132A48;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r16.u32);
loc_88132A4C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88132A5C;
	sub_8812C528(ctx, base);
loc_88132A5C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132ed8
	if (ctx.cr6.lt) goto loc_88132ED8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88132A68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132a80
	if (!ctx.cr6.eq) goto loc_88132A80;
	// stw r17,72(r31)
	ctx.current_instruction = 0x88132A74;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r17.u32);
	// stw r24,456(r26)
	ctx.current_instruction = 0x88132A78;
	REX_STORE_U32(ctx.r26.u32 + 456, ctx.r24.u32);
	// b 0x88132a8c
	goto loc_88132A8C;
loc_88132A80:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,72(r31)
	ctx.current_instruction = 0x88132A84;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r11,456(r26)
	ctx.current_instruction = 0x88132A88;
	REX_STORE_U32(ctx.r26.u32 + 456, ctx.r11.u32);
loc_88132A8C:
	// lwz r11,456(r26)
	ctx.current_instruction = 0x88132A8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 456);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x88132ad4
	if (ctx.cr6.eq) goto loc_88132AD4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// ble cr6,0x88132ab4
	if (!ctx.cr6.gt) goto loc_88132AB4;
loc_88132AA4:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// srw r11,r22,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r22.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x88132aa4
	if (ctx.cr6.gt) goto loc_88132AA4;
loc_88132AB4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88132AC0;
	sub_8812C528(ctx, base);
loc_88132AC0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132ed8
	if (ctx.cr6.lt) goto loc_88132ED8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88132ACC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,456(r26)
	ctx.current_instruction = 0x88132AD0;
	REX_STORE_U32(ctx.r26.u32 + 456, ctx.r11.u32);
loc_88132AD4:
	// stw r29,72(r31)
	ctx.current_instruction = 0x88132AD4;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
loc_88132AD8:
	// lwz r11,192(r25)
	ctx.current_instruction = 0x88132AD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132b0c
	if (!ctx.cr6.eq) goto loc_88132B0C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,110(r25)
	ctx.current_instruction = 0x88132AE8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + 110);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88132AF4;
	sub_8812C528(ctx, base);
loc_88132AF4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132ed8
	if (ctx.cr6.lt) goto loc_88132ED8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88132B00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r10,188(r26)
	ctx.current_instruction = 0x88132B08;
	REX_STORE_U32(ctx.r26.u32 + 188, ctx.r10.u32);
loc_88132B0C:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r24,80(r31)
	ctx.current_instruction = 0x88132B10;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// stw r11,72(r31)
	ctx.current_instruction = 0x88132B14;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// sth r24,202(r25)
	ctx.current_instruction = 0x88132B18;
	REX_STORE_U16(ctx.r25.u32 + 202, ctx.r24.u16);
loc_88132B1C:
	// lwz r11,192(r25)
	ctx.current_instruction = 0x88132B1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132c30
	if (!ctx.cr6.eq) goto loc_88132C30;
	// lhz r11,202(r25)
	ctx.current_instruction = 0x88132B28;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 202);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88132c30
	if (!ctx.cr6.eq) goto loc_88132C30;
	// lwz r11,184(r25)
	ctx.current_instruction = 0x88132B34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 184);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132bd4
	if (!ctx.cr6.eq) goto loc_88132BD4;
	// lwz r11,80(r31)
	ctx.current_instruction = 0x88132B40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88132b54
	if (ctx.cr6.lt) goto loc_88132B54;
	// beq cr6,0x88132b7c
	if (ctx.cr6.eq) goto loc_88132B7C;
	// b 0x88132c24
	goto loc_88132C24;
loc_88132B54:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88132B64;
	sub_8812C528(ctx, base);
loc_88132B64:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132ed8
	if (ctx.cr6.lt) goto loc_88132ED8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88132B70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r21,80(r31)
	ctx.current_instruction = 0x88132B74;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r21.u32);
	// stw r11,84(r31)
	ctx.current_instruction = 0x88132B78;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_88132B7C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,110(r25)
	ctx.current_instruction = 0x88132B80;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + 110);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88132B8C;
	sub_8812C528(ctx, base);
loc_88132B8C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132ed8
	if (ctx.cr6.lt) goto loc_88132ED8;
	// lhz r11,110(r25)
	ctx.current_instruction = 0x88132B98;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 110);
	// lwz r9,84(r31)
	ctx.current_instruction = 0x88132B9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x88132BA0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// slw r10,r21,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// and r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x88132BB4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x88132bcc
	if (ctx.cr6.eq) goto loc_88132BCC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// orc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ~ctx.r10.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x88132BC8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_88132BCC:
	// stw r11,0(r20)
	ctx.current_instruction = 0x88132BCC;
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// b 0x88132c24
	goto loc_88132C24;
loc_88132BD4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88132c24
	if (!ctx.cr6.eq) goto loc_88132C24;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,110(r25)
	ctx.current_instruction = 0x88132BE0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + 110);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88132BEC;
	sub_8812C528(ctx, base);
loc_88132BEC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132ed8
	if (ctx.cr6.lt) goto loc_88132ED8;
	// lhz r11,110(r25)
	ctx.current_instruction = 0x88132BF8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 110);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88132BFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88132c20
	if (ctx.cr6.eq) goto loc_88132C20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// orc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ~ctx.r11.u64;
	// stw r10,80(r1)
	ctx.current_instruction = 0x88132C1C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_88132C20:
	// stw r10,0(r20)
	ctx.current_instruction = 0x88132C20;
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r10.u32);
loc_88132C24:
	// lhz r11,202(r25)
	ctx.current_instruction = 0x88132C24;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 202);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,202(r25)
	ctx.current_instruction = 0x88132C2C;
	REX_STORE_U16(ctx.r25.u32 + 202, ctx.r10.u16);
loc_88132C30:
	// lhz r11,202(r25)
	ctx.current_instruction = 0x88132C30;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x88132e8c
	if (!ctx.cr6.lt) goto loc_88132E8C;
loc_88132C40:
	// lwz r11,76(r31)
	ctx.current_instruction = 0x88132C40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x88132e14
	if (ctx.cr6.gt) goto loc_88132E14;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88132c8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88132C8C;
	// bdzf 4*cr6+eq,0x88132cc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88132CC0;
	// bne cr6,0x88132d50
	if (!ctx.cr6.eq) goto loc_88132D50;
	// addi r29,r31,200
	ctx.r29.s64 = ctx.r31.s64 + 200;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8812c698
	ctx.lr = 0x88132C70;
	sub_8812C698(ctx, base);
loc_88132C70:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132ed8
	if (ctx.cr6.lt) goto loc_88132ED8;
	// lwz r11,0(r29)
	ctx.current_instruction = 0x88132C7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x88132d4c
	if (ctx.cr6.lt) goto loc_88132D4C;
	// stw r21,76(r31)
	ctx.current_instruction = 0x88132C88;
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r21.u32);
loc_88132C8C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88132C9C;
	sub_8812C528(ctx, base);
loc_88132C9C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132ed8
	if (ctx.cr6.lt) goto loc_88132ED8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88132CA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x88132ed0
	if (ctx.cr6.gt) goto loc_88132ED0;
	// stw r11,204(r31)
	ctx.current_instruction = 0x88132CB8;
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r16,76(r31)
	ctx.current_instruction = 0x88132CBC;
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r16.u32);
loc_88132CC0:
	// lwz r4,204(r31)
	ctx.current_instruction = 0x88132CC0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r4,24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24, ctx.xer);
	// bgt cr6,0x88132cd4
	if (ctx.cr6.gt) goto loc_88132CD4;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// b 0x88132d28
	goto loc_88132D28;
loc_88132CD4:
	// addi r29,r31,224
	ctx.r29.s64 = ctx.r31.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88139190
	ctx.lr = 0x88132CE0;
	sub_88139190(ctx, base);
loc_88132CE0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132ed8
	if (ctx.cr6.lt) goto loc_88132ED8;
	// lwz r11,204(r31)
	ctx.current_instruction = 0x88132CEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x8812c528
	ctx.lr = 0x88132D00;
	sub_8812C528(ctx, base);
loc_88132D00:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132ed8
	if (ctx.cr6.lt) goto loc_88132ED8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88132D0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r10,200(r31)
	ctx.current_instruction = 0x88132D14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,200(r31)
	ctx.current_instruction = 0x88132D24;
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
loc_88132D28:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8812c528
	ctx.lr = 0x88132D30;
	sub_8812C528(ctx, base);
loc_88132D30:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132ed8
	if (ctx.cr6.lt) goto loc_88132ED8;
	// lwz r11,200(r31)
	ctx.current_instruction = 0x88132D3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88132D40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,200(r31)
	ctx.current_instruction = 0x88132D48;
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
loc_88132D4C:
	// stw r17,76(r31)
	ctx.current_instruction = 0x88132D4C;
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r17.u32);
loc_88132D50:
	// lwz r11,188(r26)
	ctx.current_instruction = 0x88132D50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 188);
	// extsh r10,r18
	ctx.r10.s64 = ctx.r18.s16;
	// stw r24,80(r1)
	ctx.current_instruction = 0x88132D58;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// add r9,r11,r19
	ctx.r9.u64 = ctx.r11.u64 + ctx.r19.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x88132d8c
	if (!ctx.cr6.gt) goto loc_88132D8C;
loc_88132D74:
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88132d74
	if (ctx.cr6.lt) goto loc_88132D74;
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 24, ctx.xer);
	// bgt cr6,0x88132db0
	if (ctx.cr6.gt) goto loc_88132DB0;
loc_88132D8C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88132D9C;
	sub_8812C528(ctx, base);
loc_88132D9C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132ed8
	if (ctx.cr6.lt) goto loc_88132ED8;
	// lwz r27,80(r1)
	ctx.current_instruction = 0x88132DA8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x88132e14
	goto loc_88132E14;
loc_88132DB0:
	// addi r29,r31,224
	ctx.r29.s64 = ctx.r31.s64 + 224;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88139190
	ctx.lr = 0x88132DC0;
	sub_88139190(ctx, base);
loc_88132DC0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132ed8
	if (ctx.cr6.lt) goto loc_88132ED8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r28,-24
	ctx.r4.s64 = ctx.r28.s64 + -24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812c528
	ctx.lr = 0x88132DDC;
	sub_8812C528(ctx, base);
loc_88132DDC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132ed8
	if (ctx.cr6.lt) goto loc_88132ED8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88132DE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,24
	ctx.r4.s64 = 24;
	// rlwinm r29,r11,24,0,7
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// bl 0x8812c528
	ctx.lr = 0x88132E00;
	sub_8812C528(ctx, base);
loc_88132E00:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132ed8
	if (ctx.cr6.lt) goto loc_88132ED8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88132E0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_88132E14:
	// lwz r10,188(r26)
	ctx.current_instruction = 0x88132E14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 188);
	// extsh r9,r23
	ctx.r9.s64 = ctx.r23.s16;
	// lwz r8,200(r31)
	ctx.current_instruction = 0x88132E1C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// srw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// slw r11,r8,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r28.u8 & 0x3F));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r5,188(r26)
	ctx.current_instruction = 0x88132E3C;
	REX_STORE_U32(ctx.r26.u32 + 188, ctx.r5.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x88132e4c
	if (ctx.cr6.eq) goto loc_88132E4C;
	// subfic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r11.u64 = static_cast<uint64_t>(-1) - ctx.r11.u64;
loc_88132E4C:
	// lhz r10,202(r25)
	ctx.current_instruction = 0x88132E4C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 202);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r20
	ctx.current_instruction = 0x88132E58;
	REX_STORE_U32(ctx.r8.u32 + ctx.r20.u32, ctx.r11.u32);
	// stw r24,76(r31)
	ctx.current_instruction = 0x88132E5C;
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r24.u32);
	// stw r24,200(r31)
	ctx.current_instruction = 0x88132E60;
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r24.u32);
	// stw r24,208(r31)
	ctx.current_instruction = 0x88132E64;
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r24.u32);
	// lhz r7,202(r25)
	ctx.current_instruction = 0x88132E68;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r25.u32 + 202);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r5,202(r25)
	ctx.current_instruction = 0x88132E7C;
	REX_STORE_U16(ctx.r25.u32 + 202, ctx.r5.u16);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpw cr6,r3,r22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x88132c40
	if (ctx.cr6.lt) goto loc_88132C40;
loc_88132E8C:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,72(r31)
	ctx.current_instruction = 0x88132E90;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_88132E94:
	// lwz r11,192(r25)
	ctx.current_instruction = 0x88132E94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132eac
	if (!ctx.cr6.eq) goto loc_88132EAC;
	// lhz r11,118(r26)
	ctx.current_instruction = 0x88132EA0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 118);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r10,452(r26)
	ctx.current_instruction = 0x88132EA8;
	REX_STORE_U32(ctx.r26.u32 + 452, ctx.r10.u32);
loc_88132EAC:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88132778
	ctx.lr = 0x88132EC4;
	sub_88132778(ctx, base);
loc_88132EC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
loc_88132ED0:
	// lis r30,-32764
	ctx.r30.s64 = -2147221504;
	// ori r30,r30,2
	ctx.r30.u64 = ctx.r30.u64 | 2;
loc_88132ED8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813FDE0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8813FDE0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813FDE0;
	ctx.current_instruction = 0x8813FDE0;
	// lwz r9,0(r6)
	ctx.current_instruction = 0x8813FDE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8813fe14
	if (!ctx.cr6.eq) goto loc_8813FE14;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8813fe0c
	if (ctx.cr6.eq) goto loc_8813FE0C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,178
	ctx.r3.u64 = ctx.r3.u64 | 178;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813FE0C:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8813fcd0
	sub_8813FCD0(ctx, base);
	return;
loc_8813FE14:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88140D50) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88140D50;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88140D50) {
			switch (rex_dispatch_address) {
				case 0x88140D58:
				case 0x88141010:
				case 0x88141034:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88140D50;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88140D58: goto loc_88140D58;
		case 0x88141010: goto loc_88141010;
		case 0x88141034: goto loc_88141034;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x88140D58;
	__savegprlr_24(ctx, base);
loc_88140D58:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88140D58;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,20(r4)
	ctx.current_instruction = 0x88140D5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,44(r4)
	ctx.current_instruction = 0x88140D64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// li r25,0
	ctx.r25.s64 = 0;
	// lhz r11,34(r3)
	ctx.current_instruction = 0x88140D6C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,28(r4)
	ctx.current_instruction = 0x88140D78;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r29,36(r31)
	ctx.current_instruction = 0x88140D80;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// add r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r26,24(r31)
	ctx.current_instruction = 0x88140D88;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88140f24
	if (!ctx.cr6.gt) goto loc_88140F24;
	// subf r27,r6,r5
	ctx.r27.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_88140D98:
	// lwzx r10,r27,r6
	ctx.current_instruction = 0x88140D98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r6.u32);
	// lwz r9,0(r6)
	ctx.current_instruction = 0x88140D9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// subf. r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x88140e50
	if (!ctx.cr0.gt) goto loc_88140E50;
	// lwz r9,0(r31)
	ctx.current_instruction = 0x88140DA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mullw. r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x88140dec
	if (!ctx.cr0.gt) goto loc_88140DEC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r7,r3,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r3.u64;
loc_88140DC0:
	// lhzx r8,r7,r11
	ctx.current_instruction = 0x88140DC0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhz r24,0(r11)
	ctx.current_instruction = 0x88140DC8;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + ctx.r24.u64;
	// sth r8,0(r11)
	ctx.current_instruction = 0x88140DD0;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r8,34(r30)
	ctx.current_instruction = 0x88140DD8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 34);
	// lwz r9,0(r31)
	ctx.current_instruction = 0x88140DDC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88140dc0
	if (ctx.cr6.lt) goto loc_88140DC0;
loc_88140DEC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x88140efc
	if (!ctx.cr6.gt) goto loc_88140EFC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_88140E00:
	// lwz r10,0(r8)
	ctx.current_instruction = 0x88140E00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88140e2c
	if (!ctx.cr6.gt) goto loc_88140E2C;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x88140E0C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,48(r31)
	ctx.current_instruction = 0x88140E10;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 48);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// sth r10,0(r11)
	ctx.current_instruction = 0x88140E24;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x88140e40
	goto loc_88140E40;
loc_88140E2C:
	// bge cr6,0x88140e40
	if (!ctx.cr6.lt) goto loc_88140E40;
	// lhz r7,0(r11)
	ctx.current_instruction = 0x88140E30;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,48(r31)
	ctx.current_instruction = 0x88140E34;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 48);
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// sth r9,0(r11)
	ctx.current_instruction = 0x88140E3C;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
loc_88140E40:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x88140e00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88140E00;
	// b 0x88140efc
	goto loc_88140EFC;
loc_88140E50:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x88140efc
	if (!ctx.cr6.lt) goto loc_88140EFC;
	// lwz r9,0(r31)
	ctx.current_instruction = 0x88140E58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mullw. r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x88140e9c
	if (!ctx.cr0.gt) goto loc_88140E9C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r9,r3,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r3.u64;
loc_88140E70:
	// lhz r7,0(r11)
	ctx.current_instruction = 0x88140E70;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhzx r8,r9,r11
	ctx.current_instruction = 0x88140E78;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// sth r8,0(r11)
	ctx.current_instruction = 0x88140E80;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r8,34(r30)
	ctx.current_instruction = 0x88140E88;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 34);
	// lwz r7,0(r31)
	ctx.current_instruction = 0x88140E8C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88140e70
	if (ctx.cr6.lt) goto loc_88140E70;
loc_88140E9C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x88140efc
	if (!ctx.cr6.gt) goto loc_88140EFC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_88140EB0:
	// lwz r10,0(r8)
	ctx.current_instruction = 0x88140EB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88140edc
	if (!ctx.cr6.gt) goto loc_88140EDC;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x88140EBC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,48(r31)
	ctx.current_instruction = 0x88140EC0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 48);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// subf r9,r10,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r10.u64;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// sth r7,0(r11)
	ctx.current_instruction = 0x88140ED4;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// b 0x88140ef0
	goto loc_88140EF0;
loc_88140EDC:
	// bge cr6,0x88140ef0
	if (!ctx.cr6.lt) goto loc_88140EF0;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x88140EE0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,48(r31)
	ctx.current_instruction = 0x88140EE4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 48);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r7,0(r11)
	ctx.current_instruction = 0x88140EEC;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
loc_88140EF0:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x88140eb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88140EB0;
loc_88140EFC:
	// lhz r11,34(r30)
	ctx.current_instruction = 0x88140EFC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 34);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r9,4(r31)
	ctx.current_instruction = 0x88140F04;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88140d98
	if (ctx.cr6.lt) goto loc_88140D98;
loc_88140F24:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x88140fe0
	if (ctx.cr0.lt) goto loc_88140FE0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88140F3C:
	// lwz r11,20(r31)
	ctx.current_instruction = 0x88140F3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	ctx.current_instruction = 0x88140F44;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r8)
	ctx.current_instruction = 0x88140F4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,720(r30)
	ctx.current_instruction = 0x88140F50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x88140f64
	if (!ctx.cr6.gt) goto loc_88140F64;
	// stwx r9,r11,r26
	ctx.current_instruction = 0x88140F5C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r9.u32);
	// b 0x88140f7c
	goto loc_88140F7C;
loc_88140F64:
	// lwz r9,724(r30)
	ctx.current_instruction = 0x88140F64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 724);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88140f78
	if (!ctx.cr6.lt) goto loc_88140F78;
	// stwx r9,r11,r26
	ctx.current_instruction = 0x88140F70;
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r9.u32);
	// b 0x88140f7c
	goto loc_88140F7C;
loc_88140F78:
	// stwx r10,r11,r26
	ctx.current_instruction = 0x88140F78;
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u32);
loc_88140F7C:
	// lwz r11,0(r8)
	ctx.current_instruction = 0x88140F7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88140fa0
	if (!ctx.cr6.gt) goto loc_88140FA0;
	// lwz r11,20(r31)
	ctx.current_instruction = 0x88140F88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,44(r31)
	ctx.current_instruction = 0x88140F8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lhz r9,48(r31)
	ctx.current_instruction = 0x88140F90;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 48);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r7,r10
	ctx.current_instruction = 0x88140F98;
	REX_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u16);
	// b 0x88140fd8
	goto loc_88140FD8;
loc_88140FA0:
	// bge cr6,0x88140fc8
	if (!ctx.cr6.lt) goto loc_88140FC8;
	// lhz r11,48(r31)
	ctx.current_instruction = 0x88140FA4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 48);
	// lwz r10,20(r31)
	ctx.current_instruction = 0x88140FA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r7,44(r31)
	ctx.current_instruction = 0x88140FB0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r5,r9
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sthx r4,r6,r7
	ctx.current_instruction = 0x88140FC0;
	REX_STORE_U16(ctx.r6.u32 + ctx.r7.u32, ctx.r4.u16);
	// b 0x88140fd8
	goto loc_88140FD8;
loc_88140FC8:
	// lwz r11,20(r31)
	ctx.current_instruction = 0x88140FC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,44(r31)
	ctx.current_instruction = 0x88140FCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r9,r10
	ctx.current_instruction = 0x88140FD4;
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r25.u16);
loc_88140FD8:
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// bdnz 0x88140f3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88140F3C;
loc_88140FE0:
	// lwz r11,20(r31)
	ctx.current_instruction = 0x88140FE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8814103c
	if (!ctx.cr6.eq) goto loc_8814103C;
	// lhz r11,34(r30)
	ctx.current_instruction = 0x88140FEC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 34);
	// lwz r10,0(r31)
	ctx.current_instruction = 0x88140FF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,24(r31)
	ctx.current_instruction = 0x88140FF4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,4(r31)
	ctx.current_instruction = 0x88140FFC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x880547a0
	ctx.lr = 0x88141010;
	sub_880547A0(ctx, base);
loc_88141010:
	// lhz r7,34(r30)
	ctx.current_instruction = 0x88141010;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + 34);
	// lwz r6,0(r31)
	ctx.current_instruction = 0x88141014;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,44(r31)
	ctx.current_instruction = 0x88141018;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mullw r3,r7,r6
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// lwz r5,4(r31)
	ctx.current_instruction = 0x88141020;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x880547a0
	ctx.lr = 0x88141034;
	sub_880547A0(ctx, base);
loc_88141034:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88141034;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,20(r31)
	ctx.current_instruction = 0x88141038;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8814103C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88148790) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88148790;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88148790) {
			switch (rex_dispatch_address) {
				case 0x88148798:
				case 0x881487CC:
				case 0x881487E0:
				case 0x88148810:
				case 0x8814881C:
				case 0x88148838:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88148790;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88148798: goto loc_88148798;
		case 0x881487CC: goto loc_881487CC;
		case 0x881487E0: goto loc_881487E0;
		case 0x88148810: goto loc_88148810;
		case 0x8814881C: goto loc_8814881C;
		case 0x88148838: goto loc_88148838;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88148798;
	__savegprlr_29(ctx, base);
loc_88148798:
	// stfd f31,-40(r1)
	ctx.current_instruction = 0x88148798;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8814879C;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x88148850
	if (ctx.cr6.lt) goto loc_88148850;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,34464
	ctx.r10.u64 = ctx.r11.u64 | 34464;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x88148850
	if (ctx.cr6.gt) goto loc_88148850;
	// bl 0x88148720
	ctx.lr = 0x881487CC;
	sub_88148720(ctx, base);
loc_881487CC:
	// frsp f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64));
	// stfs f0,0(r31)
	ctx.current_instruction = 0x881487D0;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stw r30,4(r31)
	ctx.current_instruction = 0x881487D4;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x881487E0;
	sub_88125E60(ctx, base);
loc_881487E0:
	// stw r3,8(r31)
	ctx.current_instruction = 0x881487E0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88148800
	if (!ctx.cr6.eq) goto loc_88148800;
loc_881487EC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.current_instruction = 0x881487F8;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88148800:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88148800;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88148810;
	sub_88052D90(ctx, base);
loc_88148810:
	// lwz r10,4(r31)
	ctx.current_instruction = 0x88148810;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x8814881C;
	sub_88125E60(ctx, base);
loc_8814881C:
	// stw r3,12(r31)
	ctx.current_instruction = 0x8814881C;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881487ec
	if (ctx.cr6.eq) goto loc_881487EC;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88148828;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88148838;
	sub_88052D90(ctx, base);
loc_88148838:
	// lwz r10,4(r31)
	ctx.current_instruction = 0x88148838;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,16(r31)
	ctx.current_instruction = 0x88148840;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.current_instruction = 0x88148848;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88148850:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.current_instruction = 0x8814885C;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A0E0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8814A0E0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814A0E0;
	ctx.current_instruction = 0x8814A0E0;
	uint32_t ea{};
	// std r31,-8(r1)
	ctx.current_instruction = 0x8814A0E0;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// subfic r31,r8,64
	ctx.xer.ca = ctx.r8.u32 <= 64;
	ctx.r31.u64 = static_cast<uint64_t>(64) - ctx.r8.u64;
	// vspltish v0,11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0xB)));
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// vspltish v9,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x4)));
	// li r10,16
	ctx.r10.s64 = 16;
	// vspltish v6,5
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x5)));
	// sth r31,-18(r1)
	ctx.current_instruction = 0x8814A104;
	REX_STORE_U16(ctx.r1.u32 + -18, ctx.r31.u16);
	// vspltisb v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_set1_epi8(char(0x0)));
	// vrlh v2,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, result);
	}
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r11,25792(r8)
	ctx.current_instruction = 0x8814A114;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 25792);
	// vspltish v5,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x1)));
	// lvx128 v11,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlh v3,v9,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, result);
	}
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// vspltish v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x2)));
	// vspltish v4,7
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x7)));
	// vsplth v1,v11,7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_set1_epi16(short(0x100))));
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
loc_8814A13C:
	// lvx128 v13,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v31,v13,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v11,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vperm128 v10,v13,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v7,v11,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v63,v63,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v29,v13,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v28,v11,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vslh v27,v7,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v11,v7,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v13,v10,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v10,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v63,v63,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v24,v7,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v11,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v21,v11,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v22,v13,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vperm128 v19,v13,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vslh v17,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v13,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v11,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v10,v29,v20
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v7,v28,v18
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v31,v17,v22
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v30,v16,v13
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v28,v15,v23
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v27,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v29,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v25,v10,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubuhm v24,v7,v2
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v23,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vsubshs v22,v8,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vadduhm v21,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsubshs v20,v8,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vadduhm v19,v23,v1
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v18,v25,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v17,v21,v1
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v16,v24,v20
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v15,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v14,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vsrah v13,v15,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v11,v14,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v10,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v7,v11,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vpkshus128 v62,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvx128 v62,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x8814a13c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8814A13C;
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8814A21C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8814CD70) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814CD70;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814CD70) {
			switch (rex_dispatch_address) {
				case 0x8814CDA0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814CD70;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814CDA0: goto loc_8814CDA0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8814CD74;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8814CD78;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8814CD7C;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814cdb8
	if (ctx.cr6.eq) goto loc_8814CDB8;
	// lwz r11,20476(r3)
	ctx.current_instruction = 0x8814CD8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8814cdb8
	if (!ctx.cr6.eq) goto loc_8814CDB8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x881ec8b0
	ctx.lr = 0x8814CDA0;
	sub_881EC8B0(ctx, base);
loc_8814CDA0:
	// ld r11,80(r1)
	ctx.current_instruction = 0x8814CDA0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,20476(r31)
	ctx.current_instruction = 0x8814CDAC;
	REX_STORE_U32(ctx.r31.u32 + 20476, ctx.r10.u32);
	// std r9,20456(r31)
	ctx.current_instruction = 0x8814CDB0;
	REX_STORE_U64(ctx.r31.u32 + 20456, ctx.r9.u64);
	// std r11,20464(r31)
	ctx.current_instruction = 0x8814CDB4;
	REX_STORE_U64(ctx.r31.u32 + 20464, ctx.r11.u64);
loc_8814CDB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8814CDBC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8814CDC4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8814D328) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8814D328);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814D328;
	ctx.current_instruction = 0x8814D328;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8814d334
	if (!ctx.cr6.eq) goto loc_8814D334;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8814D334:
	// lwz r11,15364(r3)
	ctx.current_instruction = 0x8814D334;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8814d350
	if (!ctx.cr6.eq) goto loc_8814D350;
	// lwz r11,15432(r3)
	ctx.current_instruction = 0x8814D340;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15432);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_8814D350:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8814F688) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814F688;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814F688) {
			switch (rex_dispatch_address) {
				case 0x8814F6E0:
				case 0x8814F714:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814F688;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814F6E0: goto loc_8814F6E0;
		case 0x8814F714: goto loc_8814F714;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8814F68C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8814F690;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8814F694;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8814F698;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.current_instruction = 0x8814F69C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,24(r11)
	ctx.current_instruction = 0x8814F6A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8814f720
	if (ctx.cr6.eq) goto loc_8814F720;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	ctx.current_instruction = 0x8814F6B8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8814f720
	if (ctx.cr6.eq) goto loc_8814F720;
loc_8814F6C0:
	// lwz r30,80(r31)
	ctx.current_instruction = 0x8814F6C0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r30)
	ctx.current_instruction = 0x8814F6D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x88185458
	ctx.lr = 0x8814F6E0;
	sub_88185458(ctx, base);
loc_8814F6E0:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8814F6E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,40(r30)
	ctx.current_instruction = 0x8814F6E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,24(r30)
	ctx.current_instruction = 0x8814F6E8;
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r10,15536(r3)
	ctx.current_instruction = 0x8814F6EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x8814f714
	if (!ctx.cr6.eq) goto loc_8814F714;
	// lwz r4,88(r1)
	ctx.current_instruction = 0x8814F6F8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r8,80(r1)
	ctx.current_instruction = 0x8814F704;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.current_instruction = 0x8814F708;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,92(r1)
	ctx.current_instruction = 0x8814F70C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// bl 0x88184cb0
	ctx.lr = 0x8814F714;
	sub_88184CB0(ctx, base);
loc_8814F714:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8814F714;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8814f6c0
	if (!ctx.cr6.eq) goto loc_8814F6C0;
loc_8814F720:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8814F728;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8814F730;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8814F734;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88151118) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88151118;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88151118) {
			switch (rex_dispatch_address) {
				case 0x881511BC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88151118;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881511BC: goto loc_881511BC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8815111C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88151120;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88151124;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88151128;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20680(r4)
	ctx.current_instruction = 0x8815112C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20680);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88151180
	if (ctx.cr6.eq) goto loc_88151180;
	// lwz r11,20684(r4)
	ctx.current_instruction = 0x88151144;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88151180
	if (ctx.cr6.eq) goto loc_88151180;
	// lwz r11,21780(r4)
	ctx.current_instruction = 0x88151150;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 21780);
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// lwz r10,21776(r4)
	ctx.current_instruction = 0x88151158;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 21776);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r7,17880
	ctx.r5.s64 = ctx.r7.s64 + 17880;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r5
	ctx.current_instruction = 0x88151174;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// stw r10,0(r30)
	ctx.current_instruction = 0x88151178;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x88151188
	goto loc_88151188;
loc_88151180:
	// lwz r11,288(r31)
	ctx.current_instruction = 0x88151180;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// stw r11,0(r30)
	ctx.current_instruction = 0x88151184;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_88151188:
	// lwz r11,21864(r31)
	ctx.current_instruction = 0x88151188;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21864);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stw r11,4(r30)
	ctx.current_instruction = 0x88151198;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,21540(r31)
	ctx.current_instruction = 0x8815119C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21540);
	// stw r10,8(r30)
	ctx.current_instruction = 0x881511A0;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r9,21544(r31)
	ctx.current_instruction = 0x881511A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21544);
	// stw r9,12(r30)
	ctx.current_instruction = 0x881511A8;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// lwz r7,21868(r31)
	ctx.current_instruction = 0x881511AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21868);
	// stw r7,16(r30)
	ctx.current_instruction = 0x881511B0;
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r7.u32);
	// stw r8,20(r30)
	ctx.current_instruction = 0x881511B4;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r8.u32);
	// bl 0x880547a0
	ctx.lr = 0x881511BC;
	sub_880547A0(ctx, base);
loc_881511BC:
	// lwz r6,21680(r31)
	ctx.current_instruction = 0x881511BC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 21680);
	// stw r6,88(r30)
	ctx.current_instruction = 0x881511C0;
	REX_STORE_U32(ctx.r30.u32 + 88, ctx.r6.u32);
	// lwz r5,3484(r31)
	ctx.current_instruction = 0x881511C4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3484);
	// stw r5,92(r30)
	ctx.current_instruction = 0x881511C8;
	REX_STORE_U32(ctx.r30.u32 + 92, ctx.r5.u32);
	// lwz r4,3488(r31)
	ctx.current_instruction = 0x881511CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3488);
	// stw r4,96(r30)
	ctx.current_instruction = 0x881511D0;
	REX_STORE_U32(ctx.r30.u32 + 96, ctx.r4.u32);
	// lwz r3,21572(r31)
	ctx.current_instruction = 0x881511D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21572);
	// stw r3,100(r30)
	ctx.current_instruction = 0x881511D8;
	REX_STORE_U32(ctx.r30.u32 + 100, ctx.r3.u32);
	// lwz r11,21576(r31)
	ctx.current_instruction = 0x881511DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21576);
	// stw r11,104(r30)
	ctx.current_instruction = 0x881511E0;
	REX_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// lwz r10,22140(r31)
	ctx.current_instruction = 0x881511E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22140);
	// stw r10,108(r30)
	ctx.current_instruction = 0x881511E8;
	REX_STORE_U32(ctx.r30.u32 + 108, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881511F0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881511F8;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881511FC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88155920) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88155920;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88155920) {
			switch (rex_dispatch_address) {
				case 0x88155928:
				case 0x88155990:
				case 0x881559E8:
				case 0x88155A00:
				case 0x88155A30:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88155920;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88155928: goto loc_88155928;
		case 0x88155990: goto loc_88155990;
		case 0x881559E8: goto loc_881559E8;
		case 0x88155A00: goto loc_88155A00;
		case 0x88155A30: goto loc_88155A30;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88155928;
	__savegprlr_27(ctx, base);
loc_88155928:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88155928;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8815594c
	if (!ctx.cr6.eq) goto loc_8815594C;
loc_88155940:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8815594C:
	// lis r11,6553
	ctx.r11.s64 = 429457408;
	// ld r10,0(r29)
	ctx.current_instruction = 0x88155950;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// lis r9,6550
	ctx.r9.s64 = 429260800;
	// ori r8,r11,4643
	ctx.r8.u64 = ctx.r11.u64 | 4643;
	// ori r7,r9,276
	ctx.r7.u64 = ctx.r9.u64 | 276;
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r10,r8
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x88155940
	if (!ctx.cr6.eq) goto loc_88155940;
	// lwz r31,736(r29)
	ctx.current_instruction = 0x8815596C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 736);
	// lwz r11,16(r31)
	ctx.current_instruction = 0x88155970;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88155988
	if (ctx.cr6.eq) goto loc_88155988;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88155988:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814ccb0
	ctx.lr = 0x88155990;
	sub_8814CCB0(ctx, base);
loc_88155990:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x881559a0
	if (ctx.cr6.eq) goto loc_881559A0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x881559a8
	if (!ctx.cr6.eq) goto loc_881559A8;
loc_881559A0:
	// rlwinm r11,r30,0,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0;
	// ori r30,r11,15
	ctx.r30.u64 = ctx.r11.u64 | 15;
loc_881559A8:
	// lwz r11,15364(r31)
	ctx.current_instruction = 0x881559A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15364);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,15620(r31)
	ctx.current_instruction = 0x881559B0;
	REX_STORE_U32(ctx.r31.u32 + 15620, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881559c8
	if (!ctx.cr6.eq) goto loc_881559C8;
	// lwz r11,15432(r31)
	ctx.current_instruction = 0x881559BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881559f0
	if (ctx.cr6.eq) goto loc_881559F0;
loc_881559C8:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,15376(r31)
	ctx.current_instruction = 0x881559CC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 15376);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r6,15372(r31)
	ctx.current_instruction = 0x881559D4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 15372);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8814ee38
	ctx.lr = 0x881559E8;
	sub_8814EE38(ctx, base);
loc_881559E8:
	// sth r28,0(r27)
	ctx.current_instruction = 0x881559E8;
	REX_STORE_U16(ctx.r27.u32 + 0, ctx.r28.u16);
	// b 0x88155a00
	goto loc_88155A00;
loc_881559F0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88155498
	ctx.lr = 0x88155A00;
	sub_88155498(ctx, base);
loc_88155A00:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -9, ctx.xer);
	// bne cr6,0x88155a10
	if (!ctx.cr6.eq) goto loc_88155A10;
	// stw r28,3732(r31)
	ctx.current_instruction = 0x88155A0C;
	REX_STORE_U32(ctx.r31.u32 + 3732, ctx.r28.u32);
loc_88155A10:
	// lwz r11,3736(r31)
	ctx.current_instruction = 0x88155A10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88155a28
	if (ctx.cr6.eq) goto loc_88155A28;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,3732(r31)
	ctx.current_instruction = 0x88155A20;
	REX_STORE_U32(ctx.r31.u32 + 3732, ctx.r28.u32);
	// stw r11,3736(r31)
	ctx.current_instruction = 0x88155A24;
	REX_STORE_U32(ctx.r31.u32 + 3736, ctx.r11.u32);
loc_88155A28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814cd10
	ctx.lr = 0x88155A30;
	sub_8814CD10(ctx, base);
loc_88155A30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815AD90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815AD90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815AD90) {
			switch (rex_dispatch_address) {
				case 0x8815AE14:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815AD90;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815AE14: goto loc_8815AE14;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8815AD94;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8815AD98;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8815AD9C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8815ADA0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,21660(r3)
	ctx.current_instruction = 0x8815ADB0;
	REX_STORE_U32(ctx.r3.u32 + 21660, ctx.r30.u32);
	// stw r30,3468(r3)
	ctx.current_instruction = 0x8815ADB4;
	REX_STORE_U32(ctx.r3.u32 + 3468, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,3480(r3)
	ctx.current_instruction = 0x8815ADBC;
	REX_STORE_U32(ctx.r3.u32 + 3480, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,3476(r3)
	ctx.current_instruction = 0x8815ADC4;
	REX_STORE_U32(ctx.r3.u32 + 3476, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,21544(r3)
	ctx.current_instruction = 0x8815ADCC;
	REX_STORE_U32(ctx.r3.u32 + 21544, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,21868(r3)
	ctx.current_instruction = 0x8815ADD4;
	REX_STORE_U32(ctx.r3.u32 + 21868, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,21676(r3)
	ctx.current_instruction = 0x8815ADDC;
	REX_STORE_U32(ctx.r3.u32 + 21676, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,3488(r3)
	ctx.current_instruction = 0x8815ADE4;
	REX_STORE_U32(ctx.r3.u32 + 3488, ctx.r30.u32);
	// stw r10,21576(r3)
	ctx.current_instruction = 0x8815ADE8;
	REX_STORE_U32(ctx.r3.u32 + 21576, ctx.r10.u32);
	// stw r30,408(r3)
	ctx.current_instruction = 0x8815ADEC;
	REX_STORE_U32(ctx.r3.u32 + 408, ctx.r30.u32);
	// stw r30,21664(r3)
	ctx.current_instruction = 0x8815ADF0;
	REX_STORE_U32(ctx.r3.u32 + 21664, ctx.r30.u32);
	// stw r30,21672(r3)
	ctx.current_instruction = 0x8815ADF4;
	REX_STORE_U32(ctx.r3.u32 + 21672, ctx.r30.u32);
	// stw r30,21668(r3)
	ctx.current_instruction = 0x8815ADF8;
	REX_STORE_U32(ctx.r3.u32 + 21668, ctx.r30.u32);
	// stw r30,4020(r3)
	ctx.current_instruction = 0x8815ADFC;
	REX_STORE_U32(ctx.r3.u32 + 4020, ctx.r30.u32);
	// stw r30,21784(r3)
	ctx.current_instruction = 0x8815AE00;
	REX_STORE_U32(ctx.r3.u32 + 21784, ctx.r30.u32);
	// stw r30,340(r3)
	ctx.current_instruction = 0x8815AE04;
	REX_STORE_U32(ctx.r3.u32 + 340, ctx.r30.u32);
	// stw r30,332(r3)
	ctx.current_instruction = 0x8815AE08;
	REX_STORE_U32(ctx.r3.u32 + 332, ctx.r30.u32);
	// stw r30,3728(r3)
	ctx.current_instruction = 0x8815AE0C;
	REX_STORE_U32(ctx.r3.u32 + 3728, ctx.r30.u32);
	// bl 0x88161898
	ctx.lr = 0x8815AE14;
	sub_88161898(ctx, base);
loc_8815AE14:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ae60
	if (!ctx.cr6.eq) goto loc_8815AE60;
	// lwz r10,22060(r31)
	ctx.current_instruction = 0x8815AE1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22060);
	// lwz r11,22056(r31)
	ctx.current_instruction = 0x8815AE20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22056);
	// lwz r9,21880(r31)
	ctx.current_instruction = 0x8815AE24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21880);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r30,3732(r31)
	ctx.current_instruction = 0x8815AE2C;
	REX_STORE_U32(ctx.r31.u32 + 3732, ctx.r30.u32);
	// stw r30,21940(r31)
	ctx.current_instruction = 0x8815AE30;
	REX_STORE_U32(ctx.r31.u32 + 21940, ctx.r30.u32);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8815ae5c
	if (ctx.cr6.gt) goto loc_8815AE5C;
	// lwz r9,21896(r31)
	ctx.current_instruction = 0x8815AE3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21896);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8815ae5c
	if (ctx.cr6.gt) goto loc_8815AE5C;
	// lwz r11,21900(r31)
	ctx.current_instruction = 0x8815AE48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21900);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8815ae5c
	if (ctx.cr6.gt) goto loc_8815AE5C;
	// stw r30,21884(r31)
	ctx.current_instruction = 0x8815AE54;
	REX_STORE_U32(ctx.r31.u32 + 21884, ctx.r30.u32);
	// b 0x8815ae60
	goto loc_8815AE60;
loc_8815AE5C:
	// li r3,-8
	ctx.r3.s64 = -8;
loc_8815AE60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8815AE64;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8815AE6C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8815AE70;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8815D980) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815D980;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815D980) {
			switch (rex_dispatch_address) {
				case 0x8815D988:
				case 0x8815D9A0:
				case 0x8815D9D8:
				case 0x8815D9F0:
				case 0x8815DA04:
				case 0x8815DA1C:
				case 0x8815DA30:
				case 0x8815DA54:
				case 0x8815DA6C:
				case 0x8815DA78:
				case 0x8815DA80:
				case 0x8815DA88:
				case 0x8815DABC:
				case 0x8815DAD4:
				case 0x8815DAF4:
				case 0x8815DB10:
				case 0x8815DB38:
				case 0x8815DBC8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815D980;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815D988: goto loc_8815D988;
		case 0x8815D9A0: goto loc_8815D9A0;
		case 0x8815D9D8: goto loc_8815D9D8;
		case 0x8815D9F0: goto loc_8815D9F0;
		case 0x8815DA04: goto loc_8815DA04;
		case 0x8815DA1C: goto loc_8815DA1C;
		case 0x8815DA30: goto loc_8815DA30;
		case 0x8815DA54: goto loc_8815DA54;
		case 0x8815DA6C: goto loc_8815DA6C;
		case 0x8815DA78: goto loc_8815DA78;
		case 0x8815DA80: goto loc_8815DA80;
		case 0x8815DA88: goto loc_8815DA88;
		case 0x8815DABC: goto loc_8815DABC;
		case 0x8815DAD4: goto loc_8815DAD4;
		case 0x8815DAF4: goto loc_8815DAF4;
		case 0x8815DB10: goto loc_8815DB10;
		case 0x8815DB38: goto loc_8815DB38;
		case 0x8815DBC8: goto loc_8815DBC8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x8815D988;
	__savegprlr_22(ctx, base);
loc_8815D988:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x8815D988;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88052e38
	ctx.lr = 0x8815D9A0;
	sub_88052E38(ctx, base);
loc_8815D9A0:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815da88
	if (ctx.cr6.eq) goto loc_8815DA88;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8815D9C0:
	// stwu r9,4(r11)
	ctx.current_instruction = 0x8815D9C0;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8815d9c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8815D9C0;
	// addi r27,r29,4
	ctx.r27.s64 = ctx.r29.s64 + 4;
	// lwz r4,132(r30)
	ctx.current_instruction = 0x8815D9CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881c4640
	ctx.lr = 0x8815D9D8;
	sub_881C4640(ctx, base);
loc_8815D9D8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815da80
	if (ctx.cr6.eq) goto loc_8815DA80;
	// addi r26,r29,16
	ctx.r26.s64 = ctx.r29.s64 + 16;
	// lwz r4,132(r30)
	ctx.current_instruction = 0x8815D9E4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881c4640
	ctx.lr = 0x8815D9F0;
	sub_881C4640(ctx, base);
loc_8815D9F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815da78
	if (ctx.cr6.eq) goto loc_8815DA78;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8815b9f8
	ctx.lr = 0x8815DA04;
	sub_8815B9F8(ctx, base);
loc_8815DA04:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815da1c
	if (ctx.cr6.eq) goto loc_8815DA1C;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8815DA1C;
	sub_88052D90(ctx, base);
loc_8815DA1C:
	// stw r31,0(r29)
	ctx.current_instruction = 0x8815DA1C;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8815da70
	if (ctx.cr6.eq) goto loc_8815DA70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x882436a0
	ctx.lr = 0x8815DA30;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_8815DA30:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x8815DA30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815da70
	if (ctx.cr6.eq) goto loc_8815DA70;
	// lis r11,-30698
	ctx.r11.s64 = -2011824128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11728
	ctx.r5.s64 = ctx.r11.s64 + -11728;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8815e360
	ctx.lr = 0x8815DA54;
	sub_8815E360(ctx, base);
loc_8815DA54:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815da94
	if (!ctx.cr6.eq) goto loc_8815DA94;
	// lwz r3,0(r29)
	ctx.current_instruction = 0x8815DA5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815da70
	if (ctx.cr6.eq) goto loc_8815DA70;
	// bl 0x8815ba70
	ctx.lr = 0x8815DA6C;
	sub_8815BA70(ctx, base);
loc_8815DA6C:
	// stw r23,0(r29)
	ctx.current_instruction = 0x8815DA6C;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
loc_8815DA70:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881c4560
	ctx.lr = 0x8815DA78;
	sub_881C4560(ctx, base);
loc_8815DA78:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881c4560
	ctx.lr = 0x8815DA80;
	sub_881C4560(ctx, base);
loc_8815DA80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88052278
	ctx.lr = 0x8815DA88;
	sub_88052278(ctx, base);
loc_8815DA88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_8815DA94:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// stw r30,36(r29)
	ctx.current_instruction = 0x8815DA98;
	REX_STORE_U32(ctx.r29.u32 + 36, ctx.r30.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r28,32(r29)
	ctx.current_instruction = 0x8815DAA0;
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r28.u32);
	// ble cr6,0x8815dbb0
	if (!ctx.cr6.gt) goto loc_8815DBB0;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r25,r11,18168
	ctx.r25.s64 = ctx.r11.s64 + 18168;
loc_8815DAB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8815d000
	ctx.lr = 0x8815DABC;
	sub_8815D000(ctx, base);
loc_8815DABC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8815dba0
	if (ctx.cr6.lt) goto loc_8815DBA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8815d000
	ctx.lr = 0x8815DAD4;
	sub_8815D000(ctx, base);
loc_8815DAD4:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8815db80
	if (ctx.cr6.lt) goto loc_8815DB80;
	// lwz r11,36(r29)
	ctx.current_instruction = 0x8815DAE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,32(r29)
	ctx.current_instruction = 0x8815DAE8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8815e510
	ctx.lr = 0x8815DAF4;
	sub_8815E510(ctx, base);
loc_8815DAF4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815db60
	if (ctx.cr6.eq) goto loc_8815DB60;
	// lwz r11,8(r27)
	ctx.current_instruction = 0x8815DB00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8815db10
	if (ctx.cr6.lt) goto loc_8815DB10;
	// bl 0x881ed228
	ctx.lr = 0x8815DB10;
	sub_881ED228(ctx, base);
loc_8815DB10:
	// lwz r11,8(r27)
	ctx.current_instruction = 0x8815DB10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8815db28
	if (!ctx.cr6.lt) goto loc_8815DB28;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x8815DB1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	ctx.current_instruction = 0x8815DB24;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
loc_8815DB28:
	// lwz r11,8(r26)
	ctx.current_instruction = 0x8815DB28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8815db38
	if (ctx.cr6.lt) goto loc_8815DB38;
	// bl 0x881ed228
	ctx.lr = 0x8815DB38;
	sub_881ED228(ctx, base);
loc_8815DB38:
	// lwz r11,8(r26)
	ctx.current_instruction = 0x8815DB38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8815db50
	if (!ctx.cr6.lt) goto loc_8815DB50;
	// lwz r11,0(r26)
	ctx.current_instruction = 0x8815DB44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r10,r11
	ctx.current_instruction = 0x8815DB4C;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r23.u32);
loc_8815DB50:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x8815dab0
	if (ctx.cr6.lt) goto loc_8815DAB0;
	// b 0x8815dba0
	goto loc_8815DBA0;
loc_8815DB60:
	// lwz r11,8(r26)
	ctx.current_instruction = 0x8815DB60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815db80
	if (ctx.cr6.eq) goto loc_8815DB80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r26)
	ctx.current_instruction = 0x8815DB70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r26)
	ctx.current_instruction = 0x8815DB78;
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// stwx r23,r9,r10
	ctx.current_instruction = 0x8815DB7C;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r23.u32);
loc_8815DB80:
	// lwz r11,8(r27)
	ctx.current_instruction = 0x8815DB80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815dba0
	if (ctx.cr6.eq) goto loc_8815DBA0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r27)
	ctx.current_instruction = 0x8815DB94;
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r27)
	ctx.current_instruction = 0x8815DB98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// stwx r23,r9,r10
	ctx.current_instruction = 0x8815DB9C;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r23.u32);
loc_8815DBA0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x8815dbb0
	if (!ctx.cr6.gt) goto loc_8815DBB0;
	// stw r23,28(r29)
	ctx.current_instruction = 0x8815DBA8;
	REX_STORE_U32(ctx.r29.u32 + 28, ctx.r23.u32);
	// b 0x8815dbb8
	goto loc_8815DBB8;
loc_8815DBB0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,28(r29)
	ctx.current_instruction = 0x8815DBB4;
	REX_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
loc_8815DBB8:
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x8815dbcc
	if (!ctx.cr6.lt) goto loc_8815DBCC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815d398
	ctx.lr = 0x8815DBC8;
	sub_8815D398(ctx, base);
loc_8815DBC8:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_8815DBCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88166490) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88166490);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88166490;
	ctx.current_instruction = 0x88166490;
	// lwz r10,3724(r3)
	ctx.current_instruction = 0x88166490;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3724);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881664a8
	if (!ctx.cr6.eq) goto loc_881664A8;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881664A8:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,288(r11)
	ctx.current_instruction = 0x881664B0;
	REX_STORE_U32(ctx.r11.u32 + 288, ctx.r10.u32);
	// stw r10,3420(r11)
	ctx.current_instruction = 0x881664B4;
	REX_STORE_U32(ctx.r11.u32 + 3420, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88167A68) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88167A68;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88167A68) {
			switch (rex_dispatch_address) {
				case 0x88167A98:
				case 0x88167ADC:
				case 0x88167AF0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88167A68;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88167A98: goto loc_88167A98;
		case 0x88167ADC: goto loc_88167ADC;
		case 0x88167AF0: goto loc_88167AF0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88167A6C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88167A70;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88167A74;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3720(r3)
	ctx.current_instruction = 0x88167A78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3720);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88167b2c
	if (!ctx.cr6.eq) goto loc_88167B2C;
	// lwz r11,15536(r3)
	ctx.current_instruction = 0x88167A88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x88167ac4
	if (ctx.cr6.lt) goto loc_88167AC4;
	// bl 0x88166218
	ctx.lr = 0x88167A98;
	sub_88166218(ctx, base);
loc_88167A98:
	// lwz r11,15536(r3)
	ctx.current_instruction = 0x88167A98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x88167b00
	if (!ctx.cr6.eq) goto loc_88167B00;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x88167ae8
	if (!ctx.cr6.eq) goto loc_88167AE8;
loc_88167AAC:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88167AB4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88167ABC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88167AC4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88167af8
	if (ctx.cr6.eq) goto loc_88167AF8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88167adc
	if (!ctx.cr6.eq) goto loc_88167ADC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88166218
	ctx.lr = 0x88167ADC;
	sub_88166218(ctx, base);
loc_88167ADC:
	// cmpwi cr6,r4,22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 22, ctx.xer);
	// ble cr6,0x88167aac
	if (!ctx.cr6.gt) goto loc_88167AAC;
	// addi r4,r4,-22
	ctx.r4.s64 = ctx.r4.s64 + -22;
loc_88167AE8:
	// lwz r3,140(r31)
	ctx.current_instruction = 0x88167AE8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x881aea88
	ctx.lr = 0x88167AF0;
	sub_881AEA88(ctx, base);
loc_88167AF0:
	// stw r3,15532(r31)
	ctx.current_instruction = 0x88167AF0;
	REX_STORE_U32(ctx.r31.u32 + 15532, ctx.r3.u32);
	// b 0x88167b00
	goto loc_88167B00;
loc_88167AF8:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x88167AF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// stw r11,15532(r31)
	ctx.current_instruction = 0x88167AFC;
	REX_STORE_U32(ctx.r31.u32 + 15532, ctx.r11.u32);
loc_88167B00:
	// lwz r11,15572(r31)
	ctx.current_instruction = 0x88167B00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88167b1c
	if (!ctx.cr6.eq) goto loc_88167B1C;
	// lwz r11,152(r31)
	ctx.current_instruction = 0x88167B0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x88167b20
	if (!ctx.cr6.eq) goto loc_88167B20;
loc_88167B1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_88167B20:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,15540(r31)
	ctx.current_instruction = 0x88167B24;
	REX_STORE_U32(ctx.r31.u32 + 15540, ctx.r11.u32);
	// stw r10,3720(r31)
	ctx.current_instruction = 0x88167B28;
	REX_STORE_U32(ctx.r31.u32 + 3720, ctx.r10.u32);
loc_88167B2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88167B34;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88167B3C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8816D6F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8816D6F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8816D6F8) {
			switch (rex_dispatch_address) {
				case 0x8816D700:
				case 0x8816D734:
				case 0x8816D7B0:
				case 0x8816D834:
				case 0x8816D874:
				case 0x8816D8C0:
				case 0x8816D930:
				case 0x8816D940:
				case 0x8816D958:
				case 0x8816D96C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8816D6F8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8816D700: goto loc_8816D700;
		case 0x8816D734: goto loc_8816D734;
		case 0x8816D7B0: goto loc_8816D7B0;
		case 0x8816D834: goto loc_8816D834;
		case 0x8816D874: goto loc_8816D874;
		case 0x8816D8C0: goto loc_8816D8C0;
		case 0x8816D930: goto loc_8816D930;
		case 0x8816D940: goto loc_8816D940;
		case 0x8816D958: goto loc_8816D958;
		case 0x8816D96C: goto loc_8816D96C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8816D700;
	__savegprlr_25(ctx, base);
loc_8816D700:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8816D700;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.current_instruction = 0x8816D708;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ld r10,0(r3)
	ctx.current_instruction = 0x8816D710;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x8816D714;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x8816D724;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x8816D728;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8816d734
	if (!ctx.cr0.lt) goto loc_8816D734;
	// bl 0x88156678
	ctx.lr = 0x8816D734;
	sub_88156678(ctx, base);
loc_8816D734:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8816D734;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r30,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r31)
	ctx.current_instruction = 0x8816D73C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,84(r27)
	ctx.current_instruction = 0x8816D740;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r9,20(r10)
	ctx.current_instruction = 0x8816D744;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8816d988
	if (!ctx.cr6.eq) goto loc_8816D988;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8816d784
	if (ctx.cr6.eq) goto loc_8816D784;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,14(r31)
	ctx.current_instruction = 0x8816D764;
	REX_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// sth r11,16(r31)
	ctx.current_instruction = 0x8816D768;
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// sth r11,18(r31)
	ctx.current_instruction = 0x8816D76C;
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8816D770;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// oris r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 131072;
	// stw r10,0(r31)
	ctx.current_instruction = 0x8816D778;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8816D784:
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// lis r10,-30718
	ctx.r10.s64 = -2013134848;
	// stw r11,0(r31)
	ctx.current_instruction = 0x8816D78C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r29,84(r27)
	ctx.current_instruction = 0x8816D790;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// addi r28,r10,8432
	ctx.r28.s64 = ctx.r10.s64 + 8432;
	// ld r9,0(r29)
	ctx.current_instruction = 0x8816D798;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rldicl r8,r9,9,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 9) & 0x1FF;
	// rlwinm r26,r8,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r26,r28
	ctx.current_instruction = 0x8816D7A8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r28.u32);
	// bl 0x88156500
	ctx.lr = 0x8816D7B0;
	sub_88156500(ctx, base);
loc_8816D7B0:
	// addi r7,r28,1
	ctx.r7.s64 = ctx.r28.s64 + 1;
	// li r30,3
	ctx.r30.s64 = 3;
	// lbzx r11,r26,r7
	ctx.current_instruction = 0x8816D7B8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8816d7c8
	if (!ctx.cr6.eq) goto loc_8816D7C8;
	// stw r30,20(r29)
	ctx.current_instruction = 0x8816D7C4;
	REX_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
loc_8816D7C8:
	// lwz r10,84(r27)
	ctx.current_instruction = 0x8816D7C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,20(r10)
	ctx.current_instruction = 0x8816D7D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8816d988
	if (!ctx.cr6.eq) goto loc_8816D988;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8816d988
	if (ctx.cr6.lt) goto loc_8816D988;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bgt cr6,0x8816d988
	if (ctx.cr6.gt) goto loc_8816D988;
	// srawi. r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r26,r11,30
	ctx.r26.u64 = ctx.r11.u32 & 0x3;
	// beq 0x8816d890
	if (ctx.cr0.eq) goto loc_8816D890;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8816d988
	if (!ctx.cr6.eq) goto loc_8816D988;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8816D800;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,15,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r10,0(r31)
	ctx.current_instruction = 0x8816D808;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,84(r27)
	ctx.current_instruction = 0x8816D80C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x8816D810;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ld r8,0(r3)
	ctx.current_instruction = 0x8816D814;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r7,r8,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r7,0(r3)
	ctx.current_instruction = 0x8816D820;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// rldicl r29,r8,1,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0x1;
	// stw r11,8(r3)
	ctx.current_instruction = 0x8816D828;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8816d834
	if (!ctx.cr0.lt) goto loc_8816D834;
	// bl 0x88156678
	ctx.lr = 0x8816D834;
	sub_88156678(ctx, base);
loc_8816D834:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8816D834;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r31)
	ctx.current_instruction = 0x8816D840;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r29,84(r27)
	ctx.current_instruction = 0x8816D844;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r9,20(r29)
	ctx.current_instruction = 0x8816D848;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8816d988
	if (!ctx.cr6.eq) goto loc_8816D988;
	// ld r11,0(r29)
	ctx.current_instruction = 0x8816D854;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// lis r10,-30718
	ctx.r10.s64 = -2013134848;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rldicl r9,r11,6,58
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0x3F;
	// addi r28,r10,7008
	ctx.r28.s64 = ctx.r10.s64 + 7008;
	// rlwinm r25,r9,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r25,r28
	ctx.current_instruction = 0x8816D86C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r28.u32);
	// bl 0x88156500
	ctx.lr = 0x8816D874;
	sub_88156500(ctx, base);
loc_8816D874:
	// addi r8,r28,1
	ctx.r8.s64 = ctx.r28.s64 + 1;
	// lbzx r11,r25,r8
	ctx.current_instruction = 0x8816D878;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8816d888
	if (!ctx.cr6.eq) goto loc_8816D888;
	// stw r30,20(r29)
	ctx.current_instruction = 0x8816D884;
	REX_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
loc_8816D888:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8816d900
	goto loc_8816D900;
loc_8816D890:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8816D890;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-30718
	ctx.r10.s64 = -2013134848;
	// oris r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 131072;
	// addi r28,r10,7008
	ctx.r28.s64 = ctx.r10.s64 + 7008;
	// stw r9,0(r31)
	ctx.current_instruction = 0x8816D8A0;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r29,84(r27)
	ctx.current_instruction = 0x8816D8A4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r8,0(r29)
	ctx.current_instruction = 0x8816D8AC;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// rldicl r7,r8,6,58
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 6) & 0x3F;
	// rlwinm r25,r7,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r25,r28
	ctx.current_instruction = 0x8816D8B8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r28.u32);
	// bl 0x88156500
	ctx.lr = 0x8816D8C0;
	sub_88156500(ctx, base);
loc_8816D8C0:
	// addi r6,r28,1
	ctx.r6.s64 = ctx.r28.s64 + 1;
	// lbzx r11,r25,r6
	ctx.current_instruction = 0x8816D8C4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8816d8d4
	if (!ctx.cr6.eq) goto loc_8816D8D4;
	// stw r30,20(r29)
	ctx.current_instruction = 0x8816D8D0;
	REX_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
loc_8816D8D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// subfic r28,r11,15
	ctx.xer.ca = ctx.r11.u32 <= 15;
	ctx.r28.u64 = static_cast<uint64_t>(15) - ctx.r11.u64;
	// bne cr6,0x8816d8f0
	if (!ctx.cr6.eq) goto loc_8816D8F0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8816d8f4
	if (ctx.cr6.eq) goto loc_8816D8F4;
loc_8816D8F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8816D8F4:
	// lwz r10,0(r31)
	ctx.current_instruction = 0x8816D8F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r10,r11,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,0(r31)
	ctx.current_instruction = 0x8816D8FC;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8816D900:
	// lwz r11,84(r27)
	ctx.current_instruction = 0x8816D900;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8816D904;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8816d988
	if (!ctx.cr6.eq) goto loc_8816D988;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8816d988
	if (ctx.cr6.lt) goto loc_8816D988;
	// cmpwi cr6,r28,15
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 15, ctx.xer);
	// bgt cr6,0x8816d988
	if (ctx.cr6.gt) goto loc_8816D988;
	// srawi r5,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r26.s32 >> 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881ad268
	ctx.lr = 0x8816D930;
	sub_881AD268(ctx, base);
loc_8816D930:
	// clrlwi r5,r26,31
	ctx.r5.u64 = ctx.r26.u32 & 0x1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881ad268
	ctx.lr = 0x8816D940;
	sub_881AD268(ctx, base);
loc_8816D940:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8816D944:
	// sraw r11,r28,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r28.s32 < 0) & (((ctx.r28.s32 >> temp.u32) << temp.u32) != ctx.r28.s32);
	ctx.r11.s64 = ctx.r28.s32 >> temp.u32;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881ad268
	ctx.lr = 0x8816D958;
	sub_881AD268(ctx, base);
loc_8816D958:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bge 0x8816d944
	if (!ctx.cr0.lt) goto loc_8816D944;
	// addi r3,r31,14
	ctx.r3.s64 = ctx.r31.s64 + 14;
	// bl 0x8815e6f0
	ctx.lr = 0x8816D96C;
	sub_8815E6F0(ctx, base);
loc_8816D96C:
	// lwz r10,0(r31)
	ctx.current_instruction = 0x8816D96C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwimi r10,r11,19,12,13
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xC0000) | (ctx.r10.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r10,0(r31)
	ctx.current_instruction = 0x8816D97C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8816D988:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88177350) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88177350;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88177350) {
			switch (rex_dispatch_address) {
				case 0x881773F8:
				case 0x88177414:
				case 0x8817743C:
				case 0x88177458:
				case 0x88177484:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88177350;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881773F8: goto loc_881773F8;
		case 0x88177414: goto loc_88177414;
		case 0x8817743C: goto loc_8817743C;
		case 0x88177458: goto loc_88177458;
		case 0x88177484: goto loc_88177484;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88177354;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88177358;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f3.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// beq cr6,0x88177498
	if (ctx.cr6.eq) goto loc_88177498;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88177498
	if (ctx.cr6.eq) goto loc_88177498;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88177498
	if (ctx.cr6.eq) goto loc_88177498;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x88177498
	if (ctx.cr6.eq) goto loc_88177498;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x88177498
	if (ctx.cr6.eq) goto loc_88177498;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88177498
	if (ctx.cr6.eq) goto loc_88177498;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88177498
	if (ctx.cr6.eq) goto loc_88177498;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stw r7,15416(r3)
	ctx.current_instruction = 0x881773A0;
	REX_STORE_U32(ctx.r3.u32 + 15416, ctx.r7.u32);
	// stw r8,15420(r3)
	ctx.current_instruction = 0x881773A4;
	REX_STORE_U32(ctx.r3.u32 + 15420, ctx.r8.u32);
	// stw r9,15424(r3)
	ctx.current_instruction = 0x881773A8;
	REX_STORE_U32(ctx.r3.u32 + 15424, ctx.r9.u32);
	// stw r4,15404(r3)
	ctx.current_instruction = 0x881773AC;
	REX_STORE_U32(ctx.r3.u32 + 15404, ctx.r4.u32);
	// stw r5,15408(r3)
	ctx.current_instruction = 0x881773B0;
	REX_STORE_U32(ctx.r3.u32 + 15408, ctx.r5.u32);
	// lfd f13,1488(r11)
	ctx.current_instruction = 0x881773B4;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
	// stw r6,15412(r3)
	ctx.current_instruction = 0x881773B8;
	REX_STORE_U32(ctx.r3.u32 + 15412, ctx.r6.u32);
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bne cr6,0x8817746c
	if (!ctx.cr6.eq) goto loc_8817746C;
	// fcmpu cr6,f4,f13
	ctx.cr6.compare(ctx.f4.f64, ctx.f13.f64);
	// bne cr6,0x8817746c
	if (!ctx.cr6.eq) goto loc_8817746C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// fcmpu cr6,f1,f5
	ctx.cr6.compare(ctx.f1.f64, ctx.f5.f64);
	// lfd f13,8624(r11)
	ctx.current_instruction = 0x881773D4;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// bne cr6,0x88177428
	if (!ctx.cr6.eq) goto loc_88177428;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bne cr6,0x88177428
	if (!ctx.cr6.eq) goto loc_88177428;
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bne cr6,0x8817740c
	if (!ctx.cr6.eq) goto loc_8817740C;
	// bl 0x88171838
	ctx.lr = 0x881773F8;
	sub_88171838(ctx, base);
loc_881773F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88177400;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8817740C:
	// fmr f3,f7
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f7.f64;
	// bl 0x88172548
	ctx.lr = 0x88177414;
	sub_88172548(ctx, base);
loc_88177414:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8817741C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88177428:
	// fcmpu cr6,f7,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// bne cr6,0x88177450
	if (!ctx.cr6.eq) goto loc_88177450;
	// bl 0x88173fd0
	ctx.lr = 0x8817743C;
	sub_88173FD0(ctx, base);
loc_8817743C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88177444;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88177450:
	// fmr f5,f7
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f7.f64;
	// bl 0x88175308
	ctx.lr = 0x88177458;
	sub_88175308(ctx, base);
loc_88177458:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88177460;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8817746C:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// fmr f5,f3
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f3.f64;
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// lfd f13,8624(r11)
	ctx.current_instruction = 0x88177478;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// bl 0x88176ed8
	ctx.lr = 0x88177484;
	sub_88176ED8(ctx, base);
loc_88177484:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8817748C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88177498:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881774A0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88179A88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88179A88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88179A88) {
			switch (rex_dispatch_address) {
				case 0x88179A90:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88179A88;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x88179A90: goto loc_88179A90;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88179A90;
	__savegprlr_29(ctx, base);
loc_88179A90:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,6732(r11)
	ctx.current_instruction = 0x88179A94;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x88179fcc
	if (!ctx.cr6.gt) goto loc_88179FCC;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// ble cr6,0x88179fcc
	if (!ctx.cr6.gt) goto loc_88179FCC;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x88179AA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,-64(r1)
	ctx.current_instruction = 0x88179AB8;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r8.u64);
	// lfd f13,-64(r1)
	ctx.current_instruction = 0x88179ABC;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfs f0,6728(r10)
	ctx.current_instruction = 0x88179AC0;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6728);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmuls f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f0,7000(r9)
	ctx.current_instruction = 0x88179ACC;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 7000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f2,f11
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fadds f11,f10,f1
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fsubs f10,f2,f9
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// bgt cr6,0x88179af4
	if (ctx.cr6.gt) goto loc_88179AF4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_88179AF4:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// stfd f0,-64(r1)
	ctx.current_instruction = 0x88179B00;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f0.u64);
	// lwz r5,-60(r1)
	ctx.current_instruction = 0x88179B04;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfd f0,12088(r10)
	ctx.current_instruction = 0x88179B10;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12088);
	// lfs f9,6708(r9)
	ctx.current_instruction = 0x88179B14;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f9.f64 = double(temp.f32);
	// blt cr6,0x88179b74
	if (ctx.cr6.lt) goto loc_88179B74;
	// fadds f12,f1,f9
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fadd f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-64(r1)
	ctx.current_instruction = 0x88179B30;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f7.u64);
	// lwz r9,-60(r1)
	ctx.current_instruction = 0x88179B34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
loc_88179B38:
	// lwz r7,20(r3)
	ctx.current_instruction = 0x88179B38;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	ctx.current_instruction = 0x88179B48;
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.current_instruction = 0x88179B4C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r4)
	ctx.current_instruction = 0x88179B58;
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.current_instruction = 0x88179B5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	ctx.current_instruction = 0x88179B64;
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r4,20(r3)
	ctx.current_instruction = 0x88179B68;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r8,r4
	ctx.current_instruction = 0x88179B6C;
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r9.u32);
	// blt cr6,0x88179b38
	if (ctx.cr6.lt) goto loc_88179B38;
loc_88179B74:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88179bb0
	if (!ctx.cr6.lt) goto loc_88179BB0;
	// fadds f12,f1,f9
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fadd f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-64(r1)
	ctx.current_instruction = 0x88179B98;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f7.u64);
	// lwz r9,-60(r1)
	ctx.current_instruction = 0x88179B9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
loc_88179BA0:
	// lwz r8,20(r3)
	ctx.current_instruction = 0x88179BA0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r10,r8
	ctx.current_instruction = 0x88179BA4;
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x88179ba0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88179BA0;
loc_88179BB0:
	// lwz r10,4(r3)
	ctx.current_instruction = 0x88179BB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-64(r1)
	ctx.current_instruction = 0x88179BB8;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r9.u64);
	// lfd f12,-64(r1)
	ctx.current_instruction = 0x88179BBC;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// frsp f12,f8
	ctx.f12.f64 = double(float(ctx.f8.f64));
	// fcmpu cr6,f2,f12
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// bgt cr6,0x88179bd4
	if (ctx.cr6.gt) goto loc_88179BD4;
	// fmr f12,f2
	ctx.f12.f64 = ctx.f2.f64;
loc_88179BD4:
	// fsubs f8,f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// li r4,4
	ctx.r4.s64 = 4;
	// fsubs f7,f2,f13
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// li r5,-4
	ctx.r5.s64 = -4;
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-64(r1)
	ctx.current_instruction = 0x88179BE8;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f12.u64);
	// lwz r31,-60(r1)
	ctx.current_instruction = 0x88179BEC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// fdivs f12,f8,f7
	ctx.f12.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// bge cr6,0x88179d38
	if (!ctx.cr6.lt) goto loc_88179D38;
	// subf r10,r11,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x88179cec
	if (ctx.cr6.lt) goto loc_88179CEC;
	// addi r6,r31,-3
	ctx.r6.s64 = ctx.r31.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_88179C14:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r7,20(r3)
	ctx.current_instruction = 0x88179C18;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// std r8,-56(r1)
	ctx.current_instruction = 0x88179C28;
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r8.u64);
	// extsw r8,r30
	ctx.r8.s64 = ctx.r30.s32;
	// extsw r30,r11
	ctx.r30.s64 = ctx.r11.s32;
	// lfd f6,-56(r1)
	ctx.current_instruction = 0x88179C34;
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// std r8,-40(r1)
	ctx.current_instruction = 0x88179C38;
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r8.u64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// std r30,-64(r1)
	ctx.current_instruction = 0x88179C40;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r30.u64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r29,-48(r1)
	ctx.current_instruction = 0x88179C48;
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r29.u64);
	// lfd f3,-48(r1)
	ctx.current_instruction = 0x88179C4C;
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lfd f8,-64(r1)
	ctx.current_instruction = 0x88179C58;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f8,-40(r1)
	ctx.current_instruction = 0x88179C60;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fcfid f7,f3
	ctx.f7.f64 = double(ctx.f3.s64);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// fsubs f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// frsp f8,f6
	ctx.f8.f64 = double(float(ctx.f6.f64));
	// fmadds f7,f5,f12,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f1.f64)));
	// fsubs f5,f3,f13
	ctx.f5.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fsubs f6,f4,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsubs f4,f8,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fadd f3,f7,f0
	ctx.f3.f64 = ctx.f7.f64 + ctx.f0.f64;
	// fmadds f7,f5,f12,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f1.f64)));
	// fmadds f8,f6,f12,f1
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f1.f64)));
	// fmadds f6,f4,f12,f1
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f1.f64)));
	// fctiwz f5,f3
	ctx.f5.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f5,r7,r9
	ctx.current_instruction = 0x88179CA8;
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f5.u32);
	// lwz r7,20(r3)
	ctx.current_instruction = 0x88179CAC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// fadd f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 + ctx.f0.f64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fadd f3,f7,f0
	ctx.f3.f64 = ctx.f7.f64 + ctx.f0.f64;
	// fadd f8,f6,f0
	ctx.f8.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fctiwz f7,f4
	ctx.f7.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfiwx f7,r7,r4
	ctx.current_instruction = 0x88179CC8;
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f7.u32);
	// lwz r7,20(r3)
	ctx.current_instruction = 0x88179CCC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// fctiwz f6,f3
	ctx.f6.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f6,r7,r5
	ctx.current_instruction = 0x88179CD8;
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.f6.u32);
	// lwz r7,20(r3)
	ctx.current_instruction = 0x88179CDC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f5,r7,r8
	ctx.current_instruction = 0x88179CE4;
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.f5.u32);
	// blt cr6,0x88179c14
	if (ctx.cr6.lt) goto loc_88179C14;
loc_88179CEC:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x88179d38
	if (!ctx.cr6.lt) goto loc_88179D38;
	// subf r9,r11,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88179D00:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r3)
	ctx.current_instruction = 0x88179D04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-40(r1)
	ctx.current_instruction = 0x88179D0C;
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r9.u64);
	// lfd f8,-40(r1)
	ctx.current_instruction = 0x88179D10;
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmadds f4,f5,f12,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f1.f64)));
	// fadd f3,f4,f0
	ctx.f3.f64 = ctx.f4.f64 + ctx.f0.f64;
	// fctiwz f8,f3
	ctx.f8.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f8,r8,r10
	ctx.current_instruction = 0x88179D2C;
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.f8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x88179d00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88179D00;
loc_88179D38:
	// lwz r10,4(r3)
	ctx.current_instruction = 0x88179D38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-40(r1)
	ctx.current_instruction = 0x88179D40;
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r9.u64);
	// lfd f13,-40(r1)
	ctx.current_instruction = 0x88179D44;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bgt cr6,0x88179d5c
	if (ctx.cr6.gt) goto loc_88179D5C;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
loc_88179D5C:
	// fctiwz f8,f13
	ctx.fpscr.disableFlushMode();
	ctx.f8.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f8,-40(r1)
	ctx.current_instruction = 0x88179D60;
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f8.u64);
	// fsubs f12,f1,f11
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fsubs f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fdivs f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// lwz r31,-36(r1)
	ctx.current_instruction = 0x88179D70;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x88179eb8
	if (!ctx.cr6.lt) goto loc_88179EB8;
	// subf r10,r11,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x88179e6c
	if (ctx.cr6.lt) goto loc_88179E6C;
	// addi r6,r31,-3
	ctx.r6.s64 = ctx.r31.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_88179D94:
	// extsw r30,r11
	ctx.r30.s64 = ctx.r11.s32;
	// lwz r7,20(r3)
	ctx.current_instruction = 0x88179D98;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// std r30,-64(r1)
	ctx.current_instruction = 0x88179DA0;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r30.u64);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r8,-40(r1)
	ctx.current_instruction = 0x88179DB0;
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r8.u64);
	// extsw r8,r30
	ctx.r8.s64 = ctx.r30.s32;
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// std r8,-48(r1)
	ctx.current_instruction = 0x88179DBC;
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r8.u64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// std r30,-56(r1)
	ctx.current_instruction = 0x88179DC4;
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r30.u64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lfd f6,-64(r1)
	ctx.current_instruction = 0x88179DD0;
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// lfd f12,-40(r1)
	ctx.current_instruction = 0x88179DD8;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// lfd f10,-48(r1)
	ctx.current_instruction = 0x88179DE0;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f8,-56(r1)
	ctx.current_instruction = 0x88179DE4;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f12,f10
	ctx.f12.f64 = double(ctx.f10.s64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f8,f4
	ctx.f8.f64 = double(float(ctx.f4.f64));
	// frsp f10,f5
	ctx.f10.f64 = double(float(ctx.f5.f64));
	// frsp f6,f12
	ctx.f6.f64 = double(float(ctx.f12.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fsubs f4,f8,f2
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fsubs f5,f10,f2
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fsubs f12,f6,f2
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// fsubs f7,f3,f2
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fmadds f8,f4,f13,f11
	ctx.f8.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f10,f5,f13,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f6,f12,f13,f11
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f3,f7,f13,f11
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f11.f64)));
	// fadd f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fadd f5,f10,f0
	ctx.f5.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fadd f12,f6,f0
	ctx.f12.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fadd f7,f3,f0
	ctx.f7.f64 = ctx.f3.f64 + ctx.f0.f64;
	// fctiwz f8,f4
	ctx.f8.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfiwx f8,r7,r9
	ctx.current_instruction = 0x88179E34;
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f8.u32);
	// fctiwz f10,f5
	ctx.f10.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// fctiwz f3,f7
	ctx.f3.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// fctiwz f7,f12
	ctx.f7.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// lwz r7,20(r3)
	ctx.current_instruction = 0x88179E44;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stfiwx f10,r7,r4
	ctx.current_instruction = 0x88179E50;
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f10.u32);
	// lwz r7,20(r3)
	ctx.current_instruction = 0x88179E54;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stfiwx f3,r7,r5
	ctx.current_instruction = 0x88179E5C;
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.f3.u32);
	// lwz r7,20(r3)
	ctx.current_instruction = 0x88179E60;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stfiwx f7,r7,r8
	ctx.current_instruction = 0x88179E64;
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.f7.u32);
	// blt cr6,0x88179d94
	if (ctx.cr6.lt) goto loc_88179D94;
loc_88179E6C:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x88179eb8
	if (!ctx.cr6.lt) goto loc_88179EB8;
	// subf r9,r11,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88179E80:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r3)
	ctx.current_instruction = 0x88179E84;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-40(r1)
	ctx.current_instruction = 0x88179E8C;
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r9.u64);
	// lfd f12,-40(r1)
	ctx.current_instruction = 0x88179E90;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fsubs f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fmadds f6,f7,f13,f11
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f11.f64)));
	// fadd f5,f6,f0
	ctx.f5.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fctiwz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,r8,r10
	ctx.current_instruction = 0x88179EAC;
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.f4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x88179e80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88179E80;
loc_88179EB8:
	// lwz r10,4(r3)
	ctx.current_instruction = 0x88179EB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88179ef8
	if (!ctx.cr6.lt) goto loc_88179EF8;
	// fadds f13,f1,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-40(r1)
	ctx.current_instruction = 0x88179ED4;
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f11.u64);
	// lwz r8,-36(r1)
	ctx.current_instruction = 0x88179ED8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
loc_88179EDC:
	// lwz r10,20(r3)
	ctx.current_instruction = 0x88179EDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	ctx.current_instruction = 0x88179EE4;
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,4(r3)
	ctx.current_instruction = 0x88179EEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88179edc
	if (ctx.cr6.lt) goto loc_88179EDC;
loc_88179EF8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88179f34
	if (!ctx.cr6.gt) goto loc_88179F34;
	// fadd f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64 + ctx.f0.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-40(r1)
	ctx.current_instruction = 0x88179F10;
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f12.u64);
	// lwz r8,-36(r1)
	ctx.current_instruction = 0x88179F14;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
loc_88179F18:
	// lwz r10,24(r3)
	ctx.current_instruction = 0x88179F18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r8,r11,r10
	ctx.current_instruction = 0x88179F20;
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r3)
	ctx.current_instruction = 0x88179F28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88179f18
	if (ctx.cr6.lt) goto loc_88179F18;
loc_88179F34:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8817a05c
	if (!ctx.cr6.gt) goto loc_8817A05C;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,12180(r10)
	ctx.current_instruction = 0x88179F48;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12180);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
loc_88179F50:
	// lwz r10,20(r3)
	ctx.current_instruction = 0x88179F50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,28(r3)
	ctx.current_instruction = 0x88179F58;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r7,r10,r11
	ctx.current_instruction = 0x88179F5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-40(r1)
	ctx.current_instruction = 0x88179F64;
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r6.u64);
	// lfd f12,-40(r1)
	ctx.current_instruction = 0x88179F68;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fadd f8,f9,f0
	ctx.f8.f64 = ctx.f9.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r11,r8
	ctx.current_instruction = 0x88179F80;
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.f7.u32);
	// lwz r4,32(r3)
	ctx.current_instruction = 0x88179F84;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r5,24(r3)
	ctx.current_instruction = 0x88179F88;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwzx r10,r11,r5
	ctx.current_instruction = 0x88179F8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,-48(r1)
	ctx.current_instruction = 0x88179F94;
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r8.u64);
	// lfd f6,-48(r1)
	ctx.current_instruction = 0x88179F98;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fsubs f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fadd f2,f3,f0
	ctx.f2.f64 = ctx.f3.f64 + ctx.f0.f64;
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfiwx f1,r11,r4
	ctx.current_instruction = 0x88179FB0;
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.f1.u32);
	// lwz r7,4(r3)
	ctx.current_instruction = 0x88179FB4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x88179f50
	if (ctx.cr6.lt) goto loc_88179F50;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88179FCC:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x88179FCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8817a05c
	if (!ctx.cr6.gt) goto loc_8817A05C;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,6708(r8)
	ctx.current_instruction = 0x88179FE8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// lfd f0,12088(r9)
	ctx.current_instruction = 0x88179FF0;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 12088);
	// fadd f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fsubs f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fadd f8,f11,f0
	ctx.f8.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,-56(r1)
	ctx.current_instruction = 0x8817A004;
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f9.u64);
	// fadd f7,f10,f0
	ctx.f7.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fctiwz f6,f8
	ctx.f6.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,-48(r1)
	ctx.current_instruction = 0x8817A010;
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f6.u64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,-40(r1)
	ctx.current_instruction = 0x8817A018;
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f5.u64);
	// lwz r8,-36(r1)
	ctx.current_instruction = 0x8817A01C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lwz r9,-52(r1)
	ctx.current_instruction = 0x8817A020;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r7,-44(r1)
	ctx.current_instruction = 0x8817A024;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
loc_8817A028:
	// lwz r6,20(r3)
	ctx.current_instruction = 0x8817A028;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r7,r6,r11
	ctx.current_instruction = 0x8817A030;
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r5,24(r3)
	ctx.current_instruction = 0x8817A034;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r11,r5
	ctx.current_instruction = 0x8817A038;
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r4,28(r3)
	ctx.current_instruction = 0x8817A03C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stwx r8,r11,r4
	ctx.current_instruction = 0x8817A040;
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r6,32(r3)
	ctx.current_instruction = 0x8817A044;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stwx r9,r11,r6
	ctx.current_instruction = 0x8817A048;
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,4(r3)
	ctx.current_instruction = 0x8817A050;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8817a028
	if (ctx.cr6.lt) goto loc_8817A028;
loc_8817A05C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88185468) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88185468;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88185468) {
			switch (rex_dispatch_address) {
				case 0x88185470:
				case 0x881854FC:
				case 0x88185508:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88185468;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88185470: goto loc_88185470;
		case 0x881854FC: goto loc_881854FC;
		case 0x88185508: goto loc_88185508;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88185470;
	__savegprlr_29(ctx, base);
loc_88185470:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88185470;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22300(r3)
	ctx.current_instruction = 0x88185474;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22300);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881854b8
	if (ctx.cr6.eq) goto loc_881854B8;
	// lwz r11,22292(r3)
	ctx.current_instruction = 0x88185488;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,15264(r3)
	ctx.current_instruction = 0x88185490;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15264);
	// beq cr6,0x881854ac
	if (ctx.cr6.eq) goto loc_881854AC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881854b8
	if (!ctx.cr6.eq) goto loc_881854B8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,15264(r3)
	ctx.current_instruction = 0x881854A4;
	REX_STORE_U32(ctx.r3.u32 + 15264, ctx.r11.u32);
	// b 0x881854b4
	goto loc_881854B4;
loc_881854AC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881854b8
	if (ctx.cr6.eq) goto loc_881854B8;
loc_881854B4:
	// stw r30,22300(r31)
	ctx.current_instruction = 0x881854B4;
	REX_STORE_U32(ctx.r31.u32 + 22300, ctx.r30.u32);
loc_881854B8:
	// lwz r10,15264(r31)
	ctx.current_instruction = 0x881854B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15264);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8818551c
	if (ctx.cr6.eq) goto loc_8818551C;
	// lwz r11,288(r31)
	ctx.current_instruction = 0x881854C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x881854d8
	if (ctx.cr6.eq) goto loc_881854D8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8818551c
	if (!ctx.cr6.eq) goto loc_8818551C;
loc_881854D8:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,15264(r31)
	ctx.current_instruction = 0x881854E0;
	REX_STORE_U32(ctx.r31.u32 + 15264, ctx.r11.u32);
	// bne cr6,0x8818551c
	if (!ctx.cr6.eq) goto loc_8818551C;
	// addi r4,r31,3752
	ctx.r4.s64 = ctx.r31.s64 + 3752;
	// lwz r29,3752(r31)
	ctx.current_instruction = 0x881854EC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 3752);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,15268(r31)
	ctx.current_instruction = 0x881854F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// bl 0x881b36a0
	ctx.lr = 0x881854FC;
	sub_881B36A0(ctx, base);
loc_881854FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,15268(r31)
	ctx.current_instruction = 0x88185500;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// bl 0x881b36f0
	ctx.lr = 0x88185508;
	sub_881B36F0(ctx, base);
loc_88185508:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8818551c
	if (ctx.cr6.eq) goto loc_8818551C;
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_8818551C:
	// lwz r11,288(r31)
	ctx.current_instruction = 0x8818551C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88185534
	if (ctx.cr6.eq) goto loc_88185534;
	// lwz r10,22292(r31)
	ctx.current_instruction = 0x88185528;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22292);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8818554c
	if (ctx.cr6.eq) goto loc_8818554C;
loc_88185534:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,22292(r31)
	ctx.current_instruction = 0x88185538;
	REX_STORE_U32(ctx.r31.u32 + 22292, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,15264(r31)
	ctx.current_instruction = 0x88185540;
	REX_STORE_U32(ctx.r31.u32 + 15264, ctx.r10.u32);
	// bne cr6,0x8818554c
	if (!ctx.cr6.eq) goto loc_8818554C;
	// stw r10,22296(r31)
	ctx.current_instruction = 0x88185548;
	REX_STORE_U32(ctx.r31.u32 + 22296, ctx.r10.u32);
loc_8818554C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88189798) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88189798;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88189798) {
			switch (rex_dispatch_address) {
				case 0x881897A0:
				case 0x881897BC:
				case 0x881897D0:
				case 0x881897E4:
				case 0x881897F8:
				case 0x88189808:
				case 0x88189828:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88189798;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881897A0: goto loc_881897A0;
		case 0x881897BC: goto loc_881897BC;
		case 0x881897D0: goto loc_881897D0;
		case 0x881897E4: goto loc_881897E4;
		case 0x881897F8: goto loc_881897F8;
		case 0x88189808: goto loc_88189808;
		case 0x88189828: goto loc_88189828;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881897A0;
	__savegprlr_29(ctx, base);
loc_881897A0:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881897A0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,304(r3)
	ctx.current_instruction = 0x881897A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881897c0
	if (ctx.cr6.eq) goto loc_881897C0;
	// bl 0x8815ba70
	ctx.lr = 0x881897BC;
	sub_8815BA70(ctx, base);
loc_881897BC:
	// stw r30,304(r31)
	ctx.current_instruction = 0x881897BC;
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
loc_881897C0:
	// lwz r3,308(r31)
	ctx.current_instruction = 0x881897C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881897d4
	if (ctx.cr6.eq) goto loc_881897D4;
	// bl 0x8815ba70
	ctx.lr = 0x881897D0;
	sub_8815BA70(ctx, base);
loc_881897D0:
	// stw r30,308(r31)
	ctx.current_instruction = 0x881897D0;
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
loc_881897D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,40(r31)
	ctx.current_instruction = 0x881897D8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r4,36(r31)
	ctx.current_instruction = 0x881897DC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x88188600
	ctx.lr = 0x881897E4;
	sub_88188600(ctx, base);
loc_881897E4:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,48(r31)
	ctx.current_instruction = 0x881897EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r4,44(r31)
	ctx.current_instruction = 0x881897F0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x88188600
	ctx.lr = 0x881897F8;
	sub_88188600(ctx, base);
loc_881897F8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815b9f8
	ctx.lr = 0x88189808;
	sub_8815B9F8(ctx, base);
loc_88189808:
	// stw r3,304(r31)
	ctx.current_instruction = 0x88189808;
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8818981c
	if (!ctx.cr6.eq) goto loc_8818981C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_8818981C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815b9f8
	ctx.lr = 0x88189828;
	sub_8815B9F8(ctx, base);
loc_88189828:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,308(r31)
	ctx.current_instruction = 0x8818982C;
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r3.u32);
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8818C320) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8818C320;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8818C320) {
			switch (rex_dispatch_address) {
				case 0x8818C328:
				case 0x8818C350:
				case 0x8818C358:
				case 0x8818C494:
				case 0x8818C49C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8818C320;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8818C328: goto loc_8818C328;
		case 0x8818C350: goto loc_8818C350;
		case 0x8818C358: goto loc_8818C358;
		case 0x8818C494: goto loc_8818C494;
		case 0x8818C49C: goto loc_8818C49C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8818C328;
	__savegprlr_29(ctx, base);
loc_8818C328:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8818C328;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8818c48c
	if (ctx.cr6.eq) goto loc_8818C48C;
	// lwz r11,212(r3)
	ctx.current_instruction = 0x8818C338;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,216(r3)
	ctx.current_instruction = 0x8818C340;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// srawi r30,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 1;
	// srawi r29,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 1;
	// bl 0x881b07b8
	ctx.lr = 0x8818C350;
	sub_881B07B8(ctx, base);
loc_8818C350:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b31b0
	ctx.lr = 0x8818C358;
	sub_881B31B0(ctx, base);
loc_8818C358:
	// lwz r9,204(r31)
	ctx.current_instruction = 0x8818C358;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r8,208(r31)
	ctx.current_instruction = 0x8818C35C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,20680(r31)
	ctx.current_instruction = 0x8818C364;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// rlwinm r6,r9,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r30,212(r31)
	ctx.current_instruction = 0x8818C36C;
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// stw r29,216(r31)
	ctx.current_instruction = 0x8818C374;
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r29.u32);
	// rlwinm r4,r8,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,228(r31)
	ctx.current_instruction = 0x8818C37C;
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r6.u32);
	// rlwinm r3,r9,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,236(r31)
	ctx.current_instruction = 0x8818C384;
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r5.u32);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,232(r31)
	ctx.current_instruction = 0x8818C38C;
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r4.u32);
	// stw r3,204(r31)
	ctx.current_instruction = 0x8818C390;
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,208(r31)
	ctx.current_instruction = 0x8818C398;
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// beq cr6,0x8818c49c
	if (ctx.cr6.eq) goto loc_8818C49C;
	// lwz r11,20684(r31)
	ctx.current_instruction = 0x8818C3A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818c49c
	if (ctx.cr6.eq) goto loc_8818C49C;
	// lwz r11,140(r31)
	ctx.current_instruction = 0x8818C3AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,136(r31)
	ctx.current_instruction = 0x8818C3B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r8,272(r31)
	ctx.current_instruction = 0x8818C3C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// beq cr6,0x8818c49c
	if (ctx.cr6.eq) goto loc_8818C49C;
loc_8818C3DC:
	// lwz r10,136(r31)
	ctx.current_instruction = 0x8818C3DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8818c474
	if (!ctx.cr6.gt) goto loc_8818C474;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r8,r6
	ctx.r8.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r5,r8,28,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x2;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
loc_8818C408:
	// lwz r7,140(r31)
	ctx.current_instruction = 0x8818C408;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r8,136(r31)
	ctx.current_instruction = 0x8818C410;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lwz r30,24(r10)
	ctx.current_instruction = 0x8818C41C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,28,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x2;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 | ctx.r5.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r7,28
	ctx.r8.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r7,r30,0,20,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 | ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r3,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFFFF000;
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwu r7,24(r10)
	ctx.current_instruction = 0x8818C464;
	ea = 24 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// lwz r3,136(r31)
	ctx.current_instruction = 0x8818C468;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8818c408
	if (ctx.cr6.lt) goto loc_8818C408;
loc_8818C474:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x8818C474;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8818c3dc
	if (ctx.cr6.lt) goto loc_8818C3DC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_8818C48C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x881b07b8
	ctx.lr = 0x8818C494;
	sub_881B07B8(ctx, base);
loc_8818C494:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b31b0
	ctx.lr = 0x8818C49C;
	sub_881B31B0(ctx, base);
loc_8818C49C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881930B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881930B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881930B0) {
			switch (rex_dispatch_address) {
				case 0x881930B8:
				case 0x88193154:
				case 0x8819319C:
				case 0x881931C0:
				case 0x881931F4:
				case 0x88193274:
				case 0x88193370:
				case 0x881933A4:
				case 0x881933C8:
				case 0x88193434:
				case 0x88193460:
				case 0x881934A0:
				case 0x881934E8:
				case 0x88193520:
				case 0x88193568:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881930B0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881930B8: goto loc_881930B8;
		case 0x88193154: goto loc_88193154;
		case 0x8819319C: goto loc_8819319C;
		case 0x881931C0: goto loc_881931C0;
		case 0x881931F4: goto loc_881931F4;
		case 0x88193274: goto loc_88193274;
		case 0x88193370: goto loc_88193370;
		case 0x881933A4: goto loc_881933A4;
		case 0x881933C8: goto loc_881933C8;
		case 0x88193434: goto loc_88193434;
		case 0x88193460: goto loc_88193460;
		case 0x881934A0: goto loc_881934A0;
		case 0x881934E8: goto loc_881934E8;
		case 0x88193520: goto loc_88193520;
		case 0x88193568: goto loc_88193568;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881930B8;
	__savegprlr_14(ctx, base);
loc_881930B8:
	// stwu r1,-336(r1)
	ctx.current_instruction = 0x881930B8;
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,220(r3)
	ctx.current_instruction = 0x881930BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r9,3776(r3)
	ctx.current_instruction = 0x881930C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r30,84(r3)
	ctx.current_instruction = 0x881930CC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r15,r9,r10
	ctx.r15.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,224(r3)
	ctx.current_instruction = 0x881930D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r10,3784(r3)
	ctx.current_instruction = 0x881930DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3784);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r8,3780(r3)
	ctx.current_instruction = 0x881930E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3780);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,144(r1)
	ctx.current_instruction = 0x881930F0;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881930F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// add r14,r8,r11
	ctx.r14.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// stw r9,164(r1)
	ctx.current_instruction = 0x88193100;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88193164
	if (!ctx.cr6.lt) goto loc_88193164;
loc_8819310C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88193164
	if (ctx.cr6.eq) goto loc_88193164;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x88193118;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
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
	// stw r3,8(r30)
	ctx.current_instruction = 0x8819313C;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x88193144;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x88193154
	if (!ctx.cr0.lt) goto loc_88193154;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x88193154;
	sub_88156678(ctx, base);
loc_88193154:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x88193154;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8819310c
	if (ctx.cr6.gt) goto loc_8819310C;
loc_88193164:
	// subfic r11,r29,64
	ctx.xer.ca = ctx.r29.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r29.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x88193168;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
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
	// stw r6,8(r30)
	ctx.current_instruction = 0x88193180;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x8819318C;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x8819319c
	if (!ctx.cr0.lt) goto loc_8819319C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x8819319C;
	sub_88156678(ctx, base);
loc_8819319C:
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,15536(r31)
	ctx.current_instruction = 0x881931A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// subf r9,r29,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r29.u64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// stw r9,1964(r31)
	ctx.current_instruction = 0x881931AC;
	REX_STORE_U32(ctx.r31.u32 + 1964, ctx.r9.u32);
	// blt cr6,0x881931c4
	if (ctx.cr6.lt) goto loc_881931C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,248(r31)
	ctx.current_instruction = 0x881931B8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x8815e728
	ctx.lr = 0x881931C0;
	sub_8815E728(ctx, base);
loc_881931C0:
	// b 0x881931e4
	goto loc_881931E4;
loc_881931C4:
	// lwz r11,248(r31)
	ctx.current_instruction = 0x881931C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// stw r9,316(r31)
	ctx.current_instruction = 0x881931D4;
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r8,324(r31)
	ctx.current_instruction = 0x881931DC;
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r8.u32);
	// stw r7,320(r31)
	ctx.current_instruction = 0x881931E0;
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r7.u32);
loc_881931E4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,248(r31)
	ctx.current_instruction = 0x881931E8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r3,1976(r31)
	ctx.current_instruction = 0x881931EC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// bl 0x881b58f8
	ctx.lr = 0x881931F4;
	sub_881B58F8(ctx, base);
loc_881931F4:
	// lwz r11,316(r31)
	ctx.current_instruction = 0x881931F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r11,304(r31)
	ctx.current_instruction = 0x881931FC;
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stw r11,300(r31)
	ctx.current_instruction = 0x88193204;
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// ble cr6,0x8819321c
	if (!ctx.cr6.gt) goto loc_8819321C;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,304(r31)
	ctx.current_instruction = 0x88193218;
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
loc_8819321C:
	// lwz r8,304(r31)
	ctx.current_instruction = 0x8819321C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r3,1772(r31)
	ctx.current_instruction = 0x88193228;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r9,r6,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// andc r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// andc r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r4.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// divw r16,r7,r11
	ctx.r16.u64 = uint32_t((ctx.r11.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r7.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r17,r6,r8
	ctx.r17.u64 = uint32_t((ctx.r8.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r6.s32 / ctx.r8.s32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x88052d90
	ctx.lr = 0x88193274;
	sub_88052D90(ctx, base);
loc_88193274:
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// lwz r11,-11676(r8)
	ctx.current_instruction = 0x88193278;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -11676);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r11,r11,-10108
	ctx.r11.s64 = ctx.r11.s64 + -10108;
	// beq cr6,0x881932a4
	if (ctx.cr6.eq) goto loc_881932A4;
	// lwz r10,1828(r31)
	ctx.current_instruction = 0x8819328C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1828);
	// stw r10,0(r11)
	ctx.current_instruction = 0x88193290;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,1820(r31)
	ctx.current_instruction = 0x88193294;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1820);
	// stw r10,4(r11)
	ctx.current_instruction = 0x88193298;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,1824(r31)
	ctx.current_instruction = 0x8819329C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1824);
	// b 0x881932b8
	goto loc_881932B8;
loc_881932A4:
	// lwz r10,1832(r31)
	ctx.current_instruction = 0x881932A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1832);
	// stw r10,0(r11)
	ctx.current_instruction = 0x881932A8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,1808(r31)
	ctx.current_instruction = 0x881932AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1808);
	// stw r10,4(r11)
	ctx.current_instruction = 0x881932B0;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,1812(r31)
	ctx.current_instruction = 0x881932B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1812);
loc_881932B8:
	// stw r10,8(r11)
	ctx.current_instruction = 0x881932B8;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,1792(r31)
	ctx.current_instruction = 0x881932BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1792);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881932e0
	if (ctx.cr6.eq) goto loc_881932E0;
	// lwz r10,1832(r31)
	ctx.current_instruction = 0x881932C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1832);
	// stw r10,0(r11)
	ctx.current_instruction = 0x881932CC;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,1808(r31)
	ctx.current_instruction = 0x881932D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1808);
	// stw r10,4(r11)
	ctx.current_instruction = 0x881932D4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,1812(r31)
	ctx.current_instruction = 0x881932D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1812);
	// stw r10,8(r11)
	ctx.current_instruction = 0x881932DC;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_881932E0:
	// lwz r11,256(r31)
	ctx.current_instruction = 0x881932E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,1968(r31)
	ctx.current_instruction = 0x881932E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r11,0(r10)
	ctx.current_instruction = 0x881932EC;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r24,1772(r31)
	ctx.current_instruction = 0x881932F0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// lwz r27,84(r31)
	ctx.current_instruction = 0x881932F4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,140(r31)
	ctx.current_instruction = 0x881932F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,1976(r31)
	ctx.current_instruction = 0x881932FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r11,12
	ctx.r26.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x881935a0
	if (!ctx.cr6.gt) goto loc_881935A0;
	// li r18,255
	ctx.r18.s64 = 255;
loc_88193314:
	// lwz r11,204(r31)
	ctx.current_instruction = 0x88193314;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// srawi r23,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r29.s32 >> 1;
	// lwz r10,208(r31)
	ctx.current_instruction = 0x8819331C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwz r9,136(r31)
	ctx.current_instruction = 0x88193324;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mullw r8,r11,r29
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lwz r7,164(r1)
	ctx.current_instruction = 0x8819332C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r11,r6,r23
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r23.s32);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r10,r15
	ctx.r19.u64 = ctx.r10.u64 + ctx.r15.u64;
	// add r21,r11,r14
	ctx.r21.u64 = ctx.r11.u64 + ctx.r14.u64;
	// add r20,r11,r7
	ctx.r20.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8819358c
	if (!ctx.cr6.gt) goto loc_8819358C;
loc_88193354:
	// addi r8,r1,168
	ctx.r8.s64 = ctx.r1.s64 + 168;
	// lwz r6,248(r31)
	ctx.current_instruction = 0x88193358;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// lwz r3,1972(r31)
	ctx.current_instruction = 0x88193360;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1972);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x881b43c8
	ctx.lr = 0x88193370;
	sub_881B43C8(ctx, base);
loc_88193370:
	// lwz r11,300(r31)
	ctx.current_instruction = 0x88193370;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// lwz r8,136(r31)
	ctx.current_instruction = 0x88193374;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// lwz r5,204(r31)
	ctx.current_instruction = 0x88193380;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,1968(r31)
	ctx.current_instruction = 0x88193388;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1968);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r25,92(r1)
	ctx.current_instruction = 0x88193390;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x88193398;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88190eb0
	ctx.lr = 0x881933A4;
	sub_88190EB0(ctx, base);
loc_881933A4:
	// lwz r10,152(r1)
	ctx.current_instruction = 0x881933A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881933e4
	if (ctx.cr6.eq) goto loc_881933E4;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r4,16(r26)
	ctx.current_instruction = 0x881933B8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5248
	ctx.lr = 0x881933C8;
	sub_881B5248(ctx, base);
loc_881933C8:
	// lwz r10,144(r1)
	ctx.current_instruction = 0x881933C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881935d0
	if (!ctx.cr6.eq) goto loc_881935D0;
	// lwz r10,148(r1)
	ctx.current_instruction = 0x881933D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.current_instruction = 0x881933E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_881933E4:
	// lwz r9,168(r1)
	ctx.current_instruction = 0x881933E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// stw r10,108(r1)
	ctx.current_instruction = 0x881933EC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r28,132(r1)
	ctx.current_instruction = 0x881933F4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r8,300(r31)
	ctx.current_instruction = 0x88193400;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r7,204(r31)
	ctx.current_instruction = 0x88193408;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// stw r9,160(r1)
	ctx.current_instruction = 0x8819340C;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,160(r1)
	ctx.current_instruction = 0x88193418;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r16,116(r1)
	ctx.current_instruction = 0x8819341C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r16.u32);
	// stw r25,124(r1)
	ctx.current_instruction = 0x88193420;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r11,100(r1)
	ctx.current_instruction = 0x88193424;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r28,92(r1)
	ctx.current_instruction = 0x88193428;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r19,84(r1)
	ctx.current_instruction = 0x8819342C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x88192c68
	ctx.lr = 0x88193434;
	sub_88192C68(ctx, base);
loc_88193434:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881935c4
	if (!ctx.cr6.eq) goto loc_881935C4;
	// and r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 & ctx.r29.u64;
	// addi r19,r19,8
	ctx.r19.s64 = ctx.r19.s64 + 8;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88193578
	if (ctx.cr6.eq) goto loc_88193578;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1972(r31)
	ctx.current_instruction = 0x88193454;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1972);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x881b45d0
	ctx.lr = 0x88193460;
	sub_881B45D0(ctx, base);
loc_88193460:
	// lwz r4,304(r31)
	ctx.current_instruction = 0x88193460;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// srawi r28,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r30.s32 >> 1;
	// lwz r8,136(r31)
	ctx.current_instruction = 0x88193468;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r5,208(r31)
	ctx.current_instruction = 0x88193470;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// lwz r3,1968(r31)
	ctx.current_instruction = 0x88193478;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1968);
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// stw r11,156(r1)
	ctx.current_instruction = 0x88193480;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r4,84(r1)
	ctx.current_instruction = 0x88193484;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r22,92(r1)
	ctx.current_instruction = 0x88193490;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r11,160(r1)
	ctx.current_instruction = 0x88193498;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x88190eb0
	ctx.lr = 0x881934A0;
	sub_88190EB0(ctx, base);
loc_881934A0:
	// lwz r11,156(r1)
	ctx.current_instruction = 0x881934A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r8,304(r31)
	ctx.current_instruction = 0x881934A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r17,116(r1)
	ctx.current_instruction = 0x881934B0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// stw r3,132(r1)
	ctx.current_instruction = 0x881934B4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r22,124(r1)
	ctx.current_instruction = 0x881934C0;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r25,100(r1)
	ctx.current_instruction = 0x881934C8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r18,92(r1)
	ctx.current_instruction = 0x881934D0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,84(r1)
	ctx.current_instruction = 0x881934D8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// stw r11,108(r1)
	ctx.current_instruction = 0x881934DC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r7,208(r31)
	ctx.current_instruction = 0x881934E0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x88192c68
	ctx.lr = 0x881934E8;
	sub_88192C68(ctx, base);
loc_881934E8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881935c4
	if (!ctx.cr6.eq) goto loc_881935C4;
	// stw r22,92(r1)
	ctx.current_instruction = 0x881934F0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// lwz r11,304(r31)
	ctx.current_instruction = 0x881934F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r8,136(r31)
	ctx.current_instruction = 0x88193504;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,208(r31)
	ctx.current_instruction = 0x8819350C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,1968(r31)
	ctx.current_instruction = 0x88193514;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88193518;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x88190eb0
	ctx.lr = 0x88193520;
	sub_88190EB0(ctx, base);
loc_88193520:
	// lwz r11,160(r1)
	ctx.current_instruction = 0x88193520;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r8,304(r31)
	ctx.current_instruction = 0x88193528;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r22,124(r1)
	ctx.current_instruction = 0x88193530;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r7,132(r1)
	ctx.current_instruction = 0x88193538;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r17,116(r1)
	ctx.current_instruction = 0x88193540;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r25,100(r1)
	ctx.current_instruction = 0x88193548;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r18,92(r1)
	ctx.current_instruction = 0x88193550;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r20,84(r1)
	ctx.current_instruction = 0x88193558;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// stw r11,108(r1)
	ctx.current_instruction = 0x8819355C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r7,208(r31)
	ctx.current_instruction = 0x88193560;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x88192c68
	ctx.lr = 0x88193568;
	sub_88192C68(ctx, base);
loc_88193568:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881935c4
	if (!ctx.cr6.eq) goto loc_881935C4;
	// addi r21,r21,8
	ctx.r21.s64 = ctx.r21.s64 + 8;
	// addi r20,r20,8
	ctx.r20.s64 = ctx.r20.s64 + 8;
loc_88193578:
	// lwz r11,136(r31)
	ctx.current_instruction = 0x88193578;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88193354
	if (ctx.cr6.lt) goto loc_88193354;
loc_8819358C:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x8819358C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88193314
	if (ctx.cr6.lt) goto loc_88193314;
loc_881935A0:
	// lwz r11,15572(r31)
	ctx.current_instruction = 0x881935A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881935e8
	if (ctx.cr6.eq) goto loc_881935E8;
	// stw r25,15592(r31)
	ctx.current_instruction = 0x881935AC;
	REX_STORE_U32(ctx.r31.u32 + 15592, ctx.r25.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,15600(r31)
	ctx.current_instruction = 0x881935B4;
	REX_STORE_U32(ctx.r31.u32 + 15600, ctx.r25.u32);
	// stw r25,15628(r31)
	ctx.current_instruction = 0x881935B8;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r25.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881935C4:
	// lwz r10,144(r1)
	ctx.current_instruction = 0x881935C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881935dc
	if (ctx.cr6.eq) goto loc_881935DC;
loc_881935D0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881935DC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881935E8:
	// stw r22,15600(r31)
	ctx.current_instruction = 0x881935E8;
	REX_STORE_U32(ctx.r31.u32 + 15600, ctx.r22.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,15628(r31)
	ctx.current_instruction = 0x881935F0;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r25.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A2A18) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881A2A18;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881A2A18) {
			switch (rex_dispatch_address) {
				case 0x881A2A20:
				case 0x881A2BC4:
				case 0x881A2BF8:
				case 0x881A2D74:
				case 0x881A2DA8:
				case 0x881A2DB8:
				case 0x881A2DC4:
				case 0x881A2E08:
				case 0x881A2E9C:
				case 0x881A2F3C:
				case 0x881A2F70:
				case 0x881A3080:
				case 0x881A30D4:
				case 0x881A3128:
				case 0x881A316C:
				case 0x881A31A0:
				case 0x881A3210:
				case 0x881A3264:
				case 0x881A3310:
				case 0x881A3350:
				case 0x881A337C:
				case 0x881A3408:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881A2A18;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881A2A20: goto loc_881A2A20;
		case 0x881A2BC4: goto loc_881A2BC4;
		case 0x881A2BF8: goto loc_881A2BF8;
		case 0x881A2D74: goto loc_881A2D74;
		case 0x881A2DA8: goto loc_881A2DA8;
		case 0x881A2DB8: goto loc_881A2DB8;
		case 0x881A2DC4: goto loc_881A2DC4;
		case 0x881A2E08: goto loc_881A2E08;
		case 0x881A2E9C: goto loc_881A2E9C;
		case 0x881A2F3C: goto loc_881A2F3C;
		case 0x881A2F70: goto loc_881A2F70;
		case 0x881A3080: goto loc_881A3080;
		case 0x881A30D4: goto loc_881A30D4;
		case 0x881A3128: goto loc_881A3128;
		case 0x881A316C: goto loc_881A316C;
		case 0x881A31A0: goto loc_881A31A0;
		case 0x881A3210: goto loc_881A3210;
		case 0x881A3264: goto loc_881A3264;
		case 0x881A3310: goto loc_881A3310;
		case 0x881A3350: goto loc_881A3350;
		case 0x881A337C: goto loc_881A337C;
		case 0x881A3408: goto loc_881A3408;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881A2A20;
	__savegprlr_14(ctx, base);
loc_881A2A20:
	// stwu r1,-544(r1)
	ctx.current_instruction = 0x881A2A20;
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,3776(r3)
	ctx.current_instruction = 0x881A2A28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// lwz r9,220(r3)
	ctx.current_instruction = 0x881A2A2C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// lwz r6,228(r3)
	ctx.current_instruction = 0x881A2A34;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// lwz r11,224(r3)
	ctx.current_instruction = 0x881A2A3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,232(r3)
	ctx.current_instruction = 0x881A2A48;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// lwz r10,3784(r31)
	ctx.current_instruction = 0x881A2A4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// addi r9,r1,260
	ctx.r9.s64 = ctx.r1.s64 + 260;
	// lwz r8,3780(r31)
	ctx.current_instruction = 0x881A2A54;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// addi r30,r1,192
	ctx.r30.s64 = ctx.r1.s64 + 192;
	// stw r5,224(r1)
	ctx.current_instruction = 0x881A2A5C;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r5.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,228(r1)
	ctx.current_instruction = 0x881A2A64;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r6,236(r1)
	ctx.current_instruction = 0x881A2A6C;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// addi r28,r1,280
	ctx.r28.s64 = ctx.r1.s64 + 280;
	// stw r29,232(r1)
	ctx.current_instruction = 0x881A2A74;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r29.u32);
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// stw r29,0(r7)
	ctx.current_instruction = 0x881A2A7C;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// lwz r10,3792(r31)
	ctx.current_instruction = 0x881A2A80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// addi r27,r1,300
	ctx.r27.s64 = ctx.r1.s64 + 300;
	// stw r8,248(r1)
	ctx.current_instruction = 0x881A2A88;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r8.u32);
	// addi r7,r1,200
	ctx.r7.s64 = ctx.r1.s64 + 200;
	// stw r30,244(r1)
	ctx.current_instruction = 0x881A2A90;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,252(r1)
	ctx.current_instruction = 0x881A2A98;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r29.u32);
	// addi r26,r1,320
	ctx.r26.s64 = ctx.r1.s64 + 320;
	// stw r3,256(r1)
	ctx.current_instruction = 0x881A2AA0;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// addi r30,r1,208
	ctx.r30.s64 = ctx.r1.s64 + 208;
	// lwz r23,3812(r31)
	ctx.current_instruction = 0x881A2AA8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 3812);
	// addi r25,r1,340
	ctx.r25.s64 = ctx.r1.s64 + 340;
	// stw r29,0(r9)
	ctx.current_instruction = 0x881A2AB0;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// lwz r10,2964(r31)
	ctx.current_instruction = 0x881A2AB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2964);
	// addi r24,r1,204
	ctx.r24.s64 = ctx.r1.s64 + 204;
	// stw r5,268(r1)
	ctx.current_instruction = 0x881A2ABC;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r5.u32);
	// addi r22,r1,176
	ctx.r22.s64 = ctx.r1.s64 + 176;
	// stw r4,264(r1)
	ctx.current_instruction = 0x881A2AC4;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r4.u32);
	// addi r5,r10,735
	ctx.r5.s64 = ctx.r10.s64 + 735;
	// stw r29,272(r1)
	ctx.current_instruction = 0x881A2ACC;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// addi r10,r10,738
	ctx.r10.s64 = ctx.r10.s64 + 738;
	// stw r3,276(r1)
	ctx.current_instruction = 0x881A2AD4;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// li r21,24
	ctx.r21.s64 = 24;
	// stw r29,0(r28)
	ctx.current_instruction = 0x881A2ADC;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// lwz r9,3796(r31)
	ctx.current_instruction = 0x881A2AE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// stw r7,284(r1)
	ctx.current_instruction = 0x881A2AE8;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r7.u32);
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,296(r1)
	ctx.current_instruction = 0x881A2AF0;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r6.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r23,288(r1)
	ctx.current_instruction = 0x881A2AF8;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r23.u32);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,292(r1)
	ctx.current_instruction = 0x881A2B00;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r29,0(r27)
	ctx.current_instruction = 0x881A2B04;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// lwz r11,2092(r31)
	ctx.current_instruction = 0x881A2B08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2092);
	// lwz r5,272(r31)
	ctx.current_instruction = 0x881A2B0C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// stw r8,308(r1)
	ctx.current_instruction = 0x881A2B10;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r8.u32);
	// addi r10,r11,263
	ctx.r10.s64 = ctx.r11.s64 + 263;
	// stw r30,304(r1)
	ctx.current_instruction = 0x881A2B18;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r29,312(r1)
	ctx.current_instruction = 0x881A2B20;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r29.u32);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r3,316(r1)
	ctx.current_instruction = 0x881A2B28;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r3.u32);
	// stw r29,0(r26)
	ctx.current_instruction = 0x881A2B2C;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// stw r24,324(r1)
	ctx.current_instruction = 0x881A2B30;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r24.u32);
	// stw r9,328(r1)
	ctx.current_instruction = 0x881A2B34;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r9.u32);
	// stw r29,332(r1)
	ctx.current_instruction = 0x881A2B38;
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r29.u32);
	// stw r3,336(r1)
	ctx.current_instruction = 0x881A2B3C;
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r3.u32);
	// stw r29,0(r25)
	ctx.current_instruction = 0x881A2B40;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// lwzx r7,r7,r31
	ctx.current_instruction = 0x881A2B44;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stw r5,348(r1)
	ctx.current_instruction = 0x881A2B48;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r5.u32);
	// stw r22,344(r1)
	ctx.current_instruction = 0x881A2B4C;
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r22.u32);
	// stw r7,2916(r31)
	ctx.current_instruction = 0x881A2B50;
	REX_STORE_U32(ctx.r31.u32 + 2916, ctx.r7.u32);
	// addi r5,r1,376
	ctx.r5.s64 = ctx.r1.s64 + 376;
	// lwzx r3,r6,r31
	ctx.current_instruction = 0x881A2B58;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,2928(r31)
	ctx.current_instruction = 0x881A2B60;
	REX_STORE_U32(ctx.r31.u32 + 2928, ctx.r3.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwzx r10,r8,r31
	ctx.current_instruction = 0x881A2B68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// mr r16,r28
	ctx.r16.u64 = ctx.r28.u64;
	// stw r10,2096(r31)
	ctx.current_instruction = 0x881A2B70;
	REX_STORE_U32(ctx.r31.u32 + 2096, ctx.r10.u32);
	// mr r17,r28
	ctx.r17.u64 = ctx.r28.u64;
	// stw r21,352(r1)
	ctx.current_instruction = 0x881A2B78;
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r21.u32);
	// mr r15,r29
	ctx.r15.u64 = ctx.r29.u64;
	// stw r29,356(r1)
	ctx.current_instruction = 0x881A2B80;
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r29.u32);
	// stw r29,0(r4)
	ctx.current_instruction = 0x881A2B84;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// lwz r9,4016(r31)
	ctx.current_instruction = 0x881A2B88;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4016);
	// stw r29,364(r1)
	ctx.current_instruction = 0x881A2B8C;
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r29.u32);
	// stw r29,368(r1)
	ctx.current_instruction = 0x881A2B90;
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r29.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// stw r29,372(r1)
	ctx.current_instruction = 0x881A2B98;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r29.u32);
	// lwz r8,2108(r11)
	ctx.current_instruction = 0x881A2B9C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 2108);
	// std r29,0(r5)
	ctx.current_instruction = 0x881A2BA0;
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r29.u64);
	// stw r8,2100(r31)
	ctx.current_instruction = 0x881A2BA4;
	REX_STORE_U32(ctx.r31.u32 + 2100, ctx.r8.u32);
	// bne cr6,0x881a2bb4
	if (!ctx.cr6.eq) goto loc_881A2BB4;
	// stw r29,460(r31)
	ctx.current_instruction = 0x881A2BAC;
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r29.u32);
	// b 0x881a2bb8
	goto loc_881A2BB8;
loc_881A2BB4:
	// stw r28,460(r31)
	ctx.current_instruction = 0x881A2BB4;
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r28.u32);
loc_881A2BB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,248(r31)
	ctx.current_instruction = 0x881A2BBC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x8815e728
	ctx.lr = 0x881A2BC4;
	sub_8815E728(ctx, base);
loc_881A2BC4:
	// lwz r11,4016(r31)
	ctx.current_instruction = 0x881A2BC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4016);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x881a2bdc
	if (ctx.cr6.eq) goto loc_881A2BDC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x881a2be0
	if (!ctx.cr6.eq) goto loc_881A2BE0;
loc_881A2BDC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_881A2BE0:
	// lwz r10,1976(r31)
	ctx.current_instruction = 0x881A2BE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,76(r10)
	ctx.current_instruction = 0x881A2BE8;
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// lwz r4,248(r31)
	ctx.current_instruction = 0x881A2BEC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r3,1976(r31)
	ctx.current_instruction = 0x881A2BF0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// bl 0x881b58f8
	ctx.lr = 0x881A2BF8;
	sub_881B58F8(ctx, base);
loc_881A2BF8:
	// lwz r11,248(r31)
	ctx.current_instruction = 0x881A2BF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x881a2c14
	if (!ctx.cr6.lt) goto loc_881A2C14;
	// addi r11,r31,2468
	ctx.r11.s64 = ctx.r31.s64 + 2468;
	// addi r10,r31,2484
	ctx.r10.s64 = ctx.r31.s64 + 2484;
	// addi r9,r31,2524
	ctx.r9.s64 = ctx.r31.s64 + 2524;
	// b 0x881a2c38
	goto loc_881A2C38;
loc_881A2C14:
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bge cr6,0x881a2c2c
	if (!ctx.cr6.lt) goto loc_881A2C2C;
	// addi r11,r31,2456
	ctx.r11.s64 = ctx.r31.s64 + 2456;
	// addi r10,r31,2496
	ctx.r10.s64 = ctx.r31.s64 + 2496;
	// addi r9,r31,2536
	ctx.r9.s64 = ctx.r31.s64 + 2536;
	// b 0x881a2c38
	goto loc_881A2C38;
loc_881A2C2C:
	// addi r11,r31,2444
	ctx.r11.s64 = ctx.r31.s64 + 2444;
	// addi r10,r31,2508
	ctx.r10.s64 = ctx.r31.s64 + 2508;
	// addi r9,r31,2548
	ctx.r9.s64 = ctx.r31.s64 + 2548;
loc_881A2C38:
	// stw r10,2520(r31)
	ctx.current_instruction = 0x881A2C38;
	REX_STORE_U32(ctx.r31.u32 + 2520, ctx.r10.u32);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// stw r9,2560(r31)
	ctx.current_instruction = 0x881A2C40;
	REX_STORE_U32(ctx.r31.u32 + 2560, ctx.r9.u32);
	// mr r19,r29
	ctx.r19.u64 = ctx.r29.u64;
	// lwz r9,220(r31)
	ctx.current_instruction = 0x881A2C48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r10,3776(r31)
	ctx.current_instruction = 0x881A2C4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// stw r11,2480(r31)
	ctx.current_instruction = 0x881A2C50;
	REX_STORE_U32(ctx.r31.u32 + 2480, ctx.r11.u32);
	// lwz r11,224(r31)
	ctx.current_instruction = 0x881A2C54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,3784(r31)
	ctx.current_instruction = 0x881A2C5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r8,3780(r31)
	ctx.current_instruction = 0x881A2C60;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r10,3792(r31)
	ctx.current_instruction = 0x881A2C64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,3796(r31)
	ctx.current_instruction = 0x881A2C6C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,136(r31)
	ctx.current_instruction = 0x881A2C78;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r8,3812(r31)
	ctx.current_instruction = 0x881A2C7C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3812);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,272(r31)
	ctx.current_instruction = 0x881A2C84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r11,140(r31)
	ctx.current_instruction = 0x881A2C88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// stw r29,180(r1)
	ctx.current_instruction = 0x881A2C8C;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r6,188(r1)
	ctx.current_instruction = 0x881A2C90;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r4,192(r1)
	ctx.current_instruction = 0x881A2C98;
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// stw r3,196(r1)
	ctx.current_instruction = 0x881A2C9C;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// stw r29,184(r1)
	ctx.current_instruction = 0x881A2CA0;
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// stw r7,208(r1)
	ctx.current_instruction = 0x881A2CA4;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// stw r8,200(r1)
	ctx.current_instruction = 0x881A2CA8;
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// stw r9,204(r1)
	ctx.current_instruction = 0x881A2CAC;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// stw r10,176(r1)
	ctx.current_instruction = 0x881A2CB0;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stw r5,344(r31)
	ctx.current_instruction = 0x881A2CB4;
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r5.u32);
	// ble cr6,0x881a3330
	if (!ctx.cr6.gt) goto loc_881A3330;
	// lis r14,16384
	ctx.r14.s64 = 1073741824;
loc_881A2CC0:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x881A2CC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,344(r31)
	ctx.current_instruction = 0x881A2CC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r8,21940(r31)
	ctx.current_instruction = 0x881A2CCC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21940);
	// neg r7,r10
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lwz r22,188(r1)
	ctx.current_instruction = 0x881A2CD4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// subf r6,r26,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r26.u64;
	// lwz r23,192(r1)
	ctx.current_instruction = 0x881A2CDC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r25,196(r1)
	ctx.current_instruction = 0x881A2CE0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lwz r24,200(r1)
	ctx.current_instruction = 0x881A2CEC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r21,208(r1)
	ctx.current_instruction = 0x881A2CF0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r20,204(r1)
	ctx.current_instruction = 0x881A2CF4;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// rlwinm r18,r5,27,31,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stw r7,344(r31)
	ctx.current_instruction = 0x881A2CFC;
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r7.u32);
	// beq cr6,0x881a2e84
	if (ctx.cr6.eq) goto loc_881A2E84;
	// lwz r11,21968(r31)
	ctx.current_instruction = 0x881A2D04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21968);
	// rlwinm r27,r26,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.current_instruction = 0x881A2D0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881a2e70
	if (ctx.cr6.eq) goto loc_881A2E70;
	// lwz r11,21976(r31)
	ctx.current_instruction = 0x881A2D18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21976);
	// lwz r30,84(r31)
	ctx.current_instruction = 0x881A2D1C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,21976(r31)
	ctx.current_instruction = 0x881A2D24;
	REX_STORE_U32(ctx.r31.u32 + 21976, ctx.r11.u32);
	// lwz r10,28(r30)
	ctx.current_instruction = 0x881A2D28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881a2da8
	if (ctx.cr6.eq) goto loc_881A2DA8;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881A2D34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881a2d84
	if (!ctx.cr6.lt) goto loc_881A2D84;
loc_881A2D44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a2d84
	if (ctx.cr6.eq) goto loc_881A2D84;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881A2D4C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r28,r11,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r11.u64;
	// std r6,0(r30)
	ctx.current_instruction = 0x881A2D60;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r6.u64);
	// stw r7,8(r30)
	ctx.current_instruction = 0x881A2D64;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bge 0x881a2d74
	if (!ctx.cr0.lt) goto loc_881A2D74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881A2D74;
	sub_88156678(ctx, base);
loc_881A2D74:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881A2D74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881a2d44
	if (ctx.cr6.gt) goto loc_881A2D44;
loc_881A2D84:
	// ld r11,0(r30)
	ctx.current_instruction = 0x881A2D84;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r9,r28,32
	ctx.r9.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// subf. r8,r28,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r30)
	ctx.current_instruction = 0x881A2D94;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r7.u64);
	// stw r8,8(r30)
	ctx.current_instruction = 0x881A2D98;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// bge 0x881a2da8
	if (!ctx.cr0.lt) goto loc_881A2DA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881A2DA8;
	sub_88156678(ctx, base);
loc_881A2DA8:
	// lwz r11,8(r30)
	ctx.current_instruction = 0x881A2DA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// bl 0x88156500
	ctx.lr = 0x881A2DB8;
	sub_88156500(ctx, base);
loc_881A2DB8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881adb80
	ctx.lr = 0x881A2DC4;
	sub_881ADB80(ctx, base);
loc_881A2DC4:
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,1948(r31)
	ctx.current_instruction = 0x881A2DD0;
	REX_STORE_U32(ctx.r31.u32 + 1948, ctx.r28.u32);
	// beq cr6,0x881a2e48
	if (ctx.cr6.eq) goto loc_881A2E48;
	// stw r29,20680(r31)
	ctx.current_instruction = 0x881A2DD8;
	REX_STORE_U32(ctx.r31.u32 + 20680, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,20684(r31)
	ctx.current_instruction = 0x881A2DE0;
	REX_STORE_U32(ctx.r31.u32 + 20684, ctx.r29.u32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stw r28,288(r31)
	ctx.current_instruction = 0x881A2DE8;
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
	// addi r7,r1,180
	ctx.r7.s64 = ctx.r1.s64 + 180;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819b310
	ctx.lr = 0x881A2E08;
	sub_8819B310(ctx, base);
loc_881A2E08:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a3354
	if (!ctx.cr6.eq) goto loc_881A3354;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x881a2e20
	if (ctx.cr6.eq) goto loc_881A2E20;
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bne cr6,0x881a2e24
	if (!ctx.cr6.eq) goto loc_881A2E24;
loc_881A2E20:
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
loc_881A2E24:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x881a3330
	if (ctx.cr6.eq) goto loc_881A3330;
	// lwz r11,21976(r31)
	ctx.current_instruction = 0x881A2E2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21976);
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
	// lwz r26,180(r1)
	ctx.current_instruction = 0x881A2E34;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r19,184(r1)
	ctx.current_instruction = 0x881A2E3C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,21976(r31)
	ctx.current_instruction = 0x881A2E40;
	REX_STORE_U32(ctx.r31.u32 + 21976, ctx.r11.u32);
	// b 0x881a3310
	goto loc_881A3310;
loc_881A2E48:
	// lwz r11,20680(r31)
	ctx.current_instruction = 0x881A2E48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881a30a4
	if (!ctx.cr6.eq) goto loc_881A30A4;
	// lwz r11,20684(r31)
	ctx.current_instruction = 0x881A2E54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881a30a4
	if (!ctx.cr6.eq) goto loc_881A30A4;
	// lwz r11,288(r31)
	ctx.current_instruction = 0x881A2E60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881a30a4
	if (!ctx.cr6.eq) goto loc_881A30A4;
	// mr r17,r28
	ctx.r17.u64 = ctx.r28.u64;
loc_881A2E70:
	// lwz r11,21968(r31)
	ctx.current_instruction = 0x881A2E70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21968);
	// lwzx r10,r11,r27
	ctx.current_instruction = 0x881A2E74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881a2e84
	if (ctx.cr6.eq) goto loc_881A2E84;
	// mr r16,r28
	ctx.r16.u64 = ctx.r28.u64;
loc_881A2E84:
	// lwz r11,3988(r31)
	ctx.current_instruction = 0x881A2E84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a2ea4
	if (ctx.cr6.eq) goto loc_881A2EA4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881adf70
	ctx.lr = 0x881A2E9C;
	sub_881ADF70(ctx, base);
loc_881A2E9C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a34c8
	if (!ctx.cr6.eq) goto loc_881A34C8;
loc_881A2EA4:
	// lwz r11,136(r31)
	ctx.current_instruction = 0x881A2EA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x881a3234
	if (!ctx.cr6.gt) goto loc_881A3234;
	// lwz r4,176(r1)
	ctx.current_instruction = 0x881A2EB8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// subf r21,r25,r21
	ctx.r21.u64 = ctx.r21.u64 - ctx.r25.u64;
loc_881A2EC0:
	// lwz r9,204(r31)
	ctx.current_instruction = 0x881A2EC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// clrlwi r8,r30,29
	ctx.r8.u64 = ctx.r30.u32 & 0x7;
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r6,r24
	// rlwinm r11,r30,2,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x1C;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// dcbt r3,r24
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r8,r10,128
	ctx.r8.s64 = ctx.r10.s64 + 128;
	// dcbt r8,r24
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// dcbt r6,r24
	// lwz r5,208(r31)
	ctx.current_instruction = 0x881A2F0C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// clrlwi r3,r30,28
	ctx.r3.u64 = ctx.r30.u32 & 0xF;
	// add r10,r21,r25
	ctx.r10.u64 = ctx.r21.u64 + ctx.r25.u64;
	// mullw r11,r3,r5
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r10
	// dcbt r11,r20
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r29,328(r31)
	ctx.current_instruction = 0x881A2F2C;
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881aec30
	ctx.lr = 0x881A2F3C;
	sub_881AEC30(ctx, base);
loc_881A2F3C:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x881a31e4
	if (!ctx.cr6.eq) goto loc_881A31E4;
	// lwz r11,176(r1)
	ctx.current_instruction = 0x881A2F4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881A2F58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r27,r8,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x881c22a0
	ctx.lr = 0x881A2F70;
	sub_881C22A0(ctx, base);
loc_881A2F70:
	// lwz r4,176(r1)
	ctx.current_instruction = 0x881A2F70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x881a3170
	if (ctx.cr6.eq) goto loc_881A3170;
	// lwz r11,0(r4)
	ctx.current_instruction = 0x881A2F7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x881a313c
	if (!ctx.cr6.eq) goto loc_881A313C;
	// lwz r11,136(r31)
	ctx.current_instruction = 0x881A2F8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r10,1784(r31)
	ctx.current_instruction = 0x881A2F90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r10
	ctx.current_instruction = 0x881A2FA0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,16384
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16384, ctx.xer);
	// beq cr6,0x881a313c
	if (ctx.cr6.eq) goto loc_881A313C;
	// sth r29,14(r4)
	ctx.current_instruction = 0x881A2FAC;
	REX_STORE_U16(ctx.r4.u32 + 14, ctx.r29.u16);
	// addi r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 + 14;
	// sth r29,16(r4)
	ctx.current_instruction = 0x881A2FB4;
	REX_STORE_U16(ctx.r4.u32 + 16, ctx.r29.u16);
	// srawi r8,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r19.s32 >> 1;
	// sth r29,18(r4)
	ctx.current_instruction = 0x881A2FBC;
	REX_STORE_U16(ctx.r4.u32 + 18, ctx.r29.u16);
	// srawi r7,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 1;
	// lwz r10,176(r1)
	ctx.current_instruction = 0x881A2FC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stb r29,8(r10)
	ctx.current_instruction = 0x881A2FC8;
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r29.u8);
	// lwz r9,176(r1)
	ctx.current_instruction = 0x881A2FCC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stb r29,9(r9)
	ctx.current_instruction = 0x881A2FD0;
	REX_STORE_U8(ctx.r9.u32 + 9, ctx.r29.u8);
	// lwz r6,176(r1)
	ctx.current_instruction = 0x881A2FD4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stb r29,10(r6)
	ctx.current_instruction = 0x881A2FD8;
	REX_STORE_U8(ctx.r6.u32 + 10, ctx.r29.u8);
	// lwz r5,176(r1)
	ctx.current_instruction = 0x881A2FDC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stb r29,11(r5)
	ctx.current_instruction = 0x881A2FE0;
	REX_STORE_U8(ctx.r5.u32 + 11, ctx.r29.u8);
	// lwz r4,176(r1)
	ctx.current_instruction = 0x881A2FE4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stb r29,12(r4)
	ctx.current_instruction = 0x881A2FE8;
	REX_STORE_U8(ctx.r4.u32 + 12, ctx.r29.u8);
	// lwz r3,176(r1)
	ctx.current_instruction = 0x881A2FEC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stb r29,13(r3)
	ctx.current_instruction = 0x881A2FF0;
	REX_STORE_U8(ctx.r3.u32 + 13, ctx.r29.u8);
	// lwz r11,20404(r31)
	ctx.current_instruction = 0x881A2FF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20404);
	// lwz r10,208(r31)
	ctx.current_instruction = 0x881A2FF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r6,1776(r31)
	ctx.current_instruction = 0x881A2FFC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// lwz r5,136(r31)
	ctx.current_instruction = 0x881A3000;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mullw r4,r5,r26
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r26.s32);
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// mullw r8,r3,r10
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lhzx r4,r6,r9
	ctx.current_instruction = 0x881A3024;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x881a310c
	if (!ctx.cr6.eq) goto loc_881A310C;
	// lwz r8,1780(r31)
	ctx.current_instruction = 0x881A3030;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// lhzx r7,r8,r9
	ctx.current_instruction = 0x881A3034;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881a310c
	if (!ctx.cr6.eq) goto loc_881A310C;
	// lwz r6,3156(r31)
	ctx.current_instruction = 0x881A3040;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3156);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,204(r31)
	ctx.current_instruction = 0x881A3048;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r4,3812(r31)
	ctx.current_instruction = 0x881A304C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3812);
	// mullw r9,r3,r19
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r19.s32);
	// lwz r8,3796(r31)
	ctx.current_instruction = 0x881A3054;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// lwz r7,3792(r31)
	ctx.current_instruction = 0x881A3058;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// add r6,r9,r28
	ctx.r6.u64 = ctx.r9.u64 + ctx.r28.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x881A3080;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A3080:
	// lwz r11,176(r1)
	ctx.current_instruction = 0x881A3080;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,0(r11)
	ctx.current_instruction = 0x881A3084;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// oris r4,r5,32768
	ctx.r4.u64 = ctx.r5.u64 | 2147483648;
	// stw r4,0(r11)
	ctx.current_instruction = 0x881A308C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r11,176(r1)
	ctx.current_instruction = 0x881A3090;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r3,0(r11)
	ctx.current_instruction = 0x881A3094;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// oris r10,r3,2
	ctx.r10.u64 = ctx.r3.u64 | 131072;
	// stw r10,0(r11)
	ctx.current_instruction = 0x881A309C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x881a31ac
	goto loc_881A31AC;
loc_881A30A4:
	// stw r29,20680(r31)
	ctx.current_instruction = 0x881A30A4;
	REX_STORE_U32(ctx.r31.u32 + 20680, ctx.r29.u32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stw r29,20684(r31)
	ctx.current_instruction = 0x881A30AC;
	REX_STORE_U32(ctx.r31.u32 + 20684, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,288(r31)
	ctx.current_instruction = 0x881A30B4;
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r28.u32);
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
	// addi r7,r1,180
	ctx.r7.s64 = ctx.r1.s64 + 180;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819b310
	ctx.lr = 0x881A30D4;
	sub_8819B310(ctx, base);
loc_881A30D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a3360
	if (!ctx.cr6.eq) goto loc_881A3360;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x881a30e8
	if (!ctx.cr6.eq) goto loc_881A30E8;
	// mr r15,r28
	ctx.r15.u64 = ctx.r28.u64;
loc_881A30E8:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x881a3330
	if (ctx.cr6.eq) goto loc_881A3330;
	// lwz r11,21976(r31)
	ctx.current_instruction = 0x881A30F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21976);
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
	// lwz r26,180(r1)
	ctx.current_instruction = 0x881A30F8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r19,184(r1)
	ctx.current_instruction = 0x881A3100;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,21976(r31)
	ctx.current_instruction = 0x881A3104;
	REX_STORE_U32(ctx.r31.u32 + 21976, ctx.r11.u32);
	// b 0x881a3310
	goto loc_881A3310;
loc_881A310C:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819be08
	ctx.lr = 0x881A3128;
	sub_8819BE08(ctx, base);
loc_881A3128:
	// lwz r11,176(r1)
	ctx.current_instruction = 0x881A3128;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881A312C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r9,0(r11)
	ctx.current_instruction = 0x881A3134;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x881a31ac
	goto loc_881A31AC;
loc_881A313C:
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r19,100(r1)
	ctx.current_instruction = 0x881A3140;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,92(r1)
	ctx.current_instruction = 0x881A3148;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x881A314C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881a0640
	ctx.lr = 0x881A316C;
	sub_881A0640(ctx, base);
loc_881A316C:
	// b 0x881a31a0
	goto loc_881A31A0;
loc_881A3170:
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r19,100(r1)
	ctx.current_instruction = 0x881A3174;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,92(r1)
	ctx.current_instruction = 0x881A317C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x881A3180;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819d7f8
	ctx.lr = 0x881A31A0;
	sub_8819D7F8(ctx, base);
loc_881A31A0:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a31ec
	if (!ctx.cr6.eq) goto loc_881A31EC;
loc_881A31AC:
	// lwz r11,176(r1)
	ctx.current_instruction = 0x881A31AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,136(r31)
	ctx.current_instruction = 0x881A31B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r22,r22,16
	ctx.r22.s64 = ctx.r22.s64 + 16;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r4,176(r1)
	ctx.current_instruction = 0x881A31C4;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// addi r20,r20,8
	ctx.r20.s64 = ctx.r20.s64 + 8;
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881a2ec0
	if (ctx.cr6.lt) goto loc_881A2EC0;
	// b 0x881a3234
	goto loc_881A3234;
loc_881A31E4:
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x881a31f4
	goto loc_881A31F4;
loc_881A31EC:
	// li r5,-2
	ctx.r5.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_881A31F4:
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
	// addi r7,r1,180
	ctx.r7.s64 = ctx.r1.s64 + 180;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8819b310
	ctx.lr = 0x881A3210;
	sub_8819B310(ctx, base);
loc_881A3210:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a336c
	if (!ctx.cr6.eq) goto loc_881A336C;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x881a3228
	if (ctx.cr6.eq) goto loc_881A3228;
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bne cr6,0x881a322c
	if (!ctx.cr6.eq) goto loc_881A322C;
loc_881A3228:
	// mr r15,r27
	ctx.r15.u64 = ctx.r27.u64;
loc_881A322C:
	// lwz r26,180(r1)
	ctx.current_instruction = 0x881A322C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r19,184(r1)
	ctx.current_instruction = 0x881A3230;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
loc_881A3234:
	// lwz r11,3004(r31)
	ctx.current_instruction = 0x881A3234;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881a3264
	if (ctx.cr6.eq) goto loc_881A3264;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,196(r1)
	ctx.current_instruction = 0x881A3248;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// lwz r6,192(r1)
	ctx.current_instruction = 0x881A3250;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,188(r1)
	ctx.current_instruction = 0x881A3258;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c3e50
	ctx.lr = 0x881A3264;
	sub_881C3E50(ctx, base);
loc_881A3264:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x881A3264;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x881a3294
	if (!ctx.cr6.lt) goto loc_881A3294;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// lwz r10,21968(r31)
	ctx.current_instruction = 0x881A327C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21968);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.current_instruction = 0x881A3284;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x881a3294
	if (ctx.cr6.eq) goto loc_881A3294;
	// li r18,1
	ctx.r18.s64 = 1;
loc_881A3294:
	// lwz r11,232(r31)
	ctx.current_instruction = 0x881A3294;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lwz r9,192(r1)
	ctx.current_instruction = 0x881A329C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r8,188(r1)
	ctx.current_instruction = 0x881A32A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r10,228(r31)
	ctx.current_instruction = 0x881A32A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,200(r1)
	ctx.current_instruction = 0x881A32AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r3,208(r1)
	ctx.current_instruction = 0x881A32B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,196(r1)
	ctx.current_instruction = 0x881A32B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r9,204(r1)
	ctx.current_instruction = 0x881A32C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r6,192(r1)
	ctx.current_instruction = 0x881A32CC;
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r5,188(r1)
	ctx.current_instruction = 0x881A32D4;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// stw r7,196(r1)
	ctx.current_instruction = 0x881A32D8;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// stw r8,200(r1)
	ctx.current_instruction = 0x881A32DC;
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// stw r4,208(r1)
	ctx.current_instruction = 0x881A32E0;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r4.u32);
	// stw r3,204(r1)
	ctx.current_instruction = 0x881A32E4;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// beq cr6,0x881a3310
	if (ctx.cr6.eq) goto loc_881A3310;
	// lwz r11,3004(r31)
	ctx.current_instruction = 0x881A32EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881a3310
	if (ctx.cr6.eq) goto loc_881A3310;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c3e50
	ctx.lr = 0x881A3310;
	sub_881C3E50(ctx, base);
loc_881A3310:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x881A3310;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r19,r19,16
	ctx.r19.s64 = ctx.r19.s64 + 16;
	// stw r26,180(r1)
	ctx.current_instruction = 0x881A331C;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// stw r19,184(r1)
	ctx.current_instruction = 0x881A3324;
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r19.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// blt cr6,0x881a2cc0
	if (ctx.cr6.lt) goto loc_881A2CC0;
loc_881A3330:
	// lwz r11,3948(r31)
	ctx.current_instruction = 0x881A3330;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a3408
	if (ctx.cr6.eq) goto loc_881A3408;
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x881A333C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x881a3378
	if (!ctx.cr6.eq) goto loc_881A3378;
	// bl 0x8819d640
	ctx.lr = 0x881A3350;
	sub_8819D640(ctx, base);
loc_881A3350:
	// b 0x881a337c
	goto loc_881A337C;
loc_881A3354:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881A3360:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881A336C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881A3378:
	// bl 0x8819d578
	ctx.lr = 0x881A337C;
	sub_8819D578(ctx, base);
loc_881A337C:
	// lwz r10,3868(r31)
	ctx.current_instruction = 0x881A337C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3868);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,15760(r31)
	ctx.current_instruction = 0x881A3384;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15760);
	// lwz r11,224(r31)
	ctx.current_instruction = 0x881A3388;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r8,3784(r31)
	ctx.current_instruction = 0x881A338C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r30,3972(r31)
	ctx.current_instruction = 0x881A3390;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 3972);
	// stw r10,164(r1)
	ctx.current_instruction = 0x881A3394;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r9,84(r1)
	ctx.current_instruction = 0x881A339C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r27,15824(r31)
	ctx.current_instruction = 0x881A33A0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 15824);
	// lwz r26,15808(r31)
	ctx.current_instruction = 0x881A33A4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 15808);
	// lwz r25,15816(r31)
	ctx.current_instruction = 0x881A33A8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 15816);
	// lwz r24,15776(r31)
	ctx.current_instruction = 0x881A33AC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 15776);
	// lwz r23,15792(r31)
	ctx.current_instruction = 0x881A33B0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 15792);
	// lwz r22,15800(r31)
	ctx.current_instruction = 0x881A33B4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 15800);
	// lwz r21,15784(r31)
	ctx.current_instruction = 0x881A33B8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 15784);
	// lwz r10,3780(r31)
	ctx.current_instruction = 0x881A33BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r9,220(r31)
	ctx.current_instruction = 0x881A33C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r8,3776(r31)
	ctx.current_instruction = 0x881A33C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,15744(r31)
	ctx.current_instruction = 0x881A33CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15744);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,15768(r31)
	ctx.current_instruction = 0x881A33D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15768);
	// lwz r8,15752(r31)
	ctx.current_instruction = 0x881A33D8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15752);
	// lwz r7,15736(r31)
	ctx.current_instruction = 0x881A33DC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 15736);
	// stw r30,148(r1)
	ctx.current_instruction = 0x881A33E0;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r27,140(r1)
	ctx.current_instruction = 0x881A33E4;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stw r26,132(r1)
	ctx.current_instruction = 0x881A33E8;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r25,116(r1)
	ctx.current_instruction = 0x881A33EC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r24,92(r1)
	ctx.current_instruction = 0x881A33F0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// stw r29,156(r1)
	ctx.current_instruction = 0x881A33F4;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stw r23,124(r1)
	ctx.current_instruction = 0x881A33F8;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// stw r22,108(r1)
	ctx.current_instruction = 0x881A33FC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// stw r21,100(r1)
	ctx.current_instruction = 0x881A3400;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// bl 0x881aa218
	ctx.lr = 0x881A3408;
	sub_881AA218(ctx, base);
loc_881A3408:
	// lwz r11,14852(r31)
	ctx.current_instruction = 0x881A3408;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a348c
	if (ctx.cr6.eq) goto loc_881A348C;
	// lwz r11,140(r31)
	ctx.current_instruction = 0x881A3414;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r9,280(r31)
	ctx.current_instruction = 0x881A341C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881a348c
	if (!ctx.cr6.gt) goto loc_881A348C;
loc_881A3428:
	// lwz r10,136(r31)
	ctx.current_instruction = 0x881A3428;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881a347c
	if (!ctx.cr6.gt) goto loc_881A347C;
loc_881A3438:
	// lwz r10,136(r31)
	ctx.current_instruction = 0x881A3438;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r7,1784(r31)
	ctx.current_instruction = 0x881A343C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r9)
	ctx.current_instruction = 0x881A3448;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r5,r7
	ctx.current_instruction = 0x881A3450;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// rlwinm r7,r10,0,15,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// cmplwi cr6,r4,16384
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16384, ctx.xer);
	// beq cr6,0x881a3464
	if (ctx.cr6.eq) goto loc_881A3464;
	// oris r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 131072;
loc_881A3464:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r9)
	ctx.current_instruction = 0x881A3468;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r10,136(r31)
	ctx.current_instruction = 0x881A346C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881a3438
	if (ctx.cr6.lt) goto loc_881A3438;
loc_881A347C:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x881A347C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881a3428
	if (ctx.cr6.lt) goto loc_881A3428;
loc_881A348C:
	// lwz r11,3948(r31)
	ctx.current_instruction = 0x881A348C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881a34b4
	if (!ctx.cr6.eq) goto loc_881A34B4;
	// lwz r11,14888(r31)
	ctx.current_instruction = 0x881A3498;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881a34b4
	if (!ctx.cr6.eq) goto loc_881A34B4;
	// lwz r11,15260(r31)
	ctx.current_instruction = 0x881A34A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15260);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x881a34b8
	if (ctx.cr6.eq) goto loc_881A34B8;
loc_881A34B4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_881A34B8:
	// stw r11,15624(r31)
	ctx.current_instruction = 0x881A34B8;
	REX_STORE_U32(ctx.r31.u32 + 15624, ctx.r11.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r29,15628(r31)
	ctx.current_instruction = 0x881A34C0;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r29.u32);
	// stw r28,15600(r31)
	ctx.current_instruction = 0x881A34C4;
	REX_STORE_U32(ctx.r31.u32 + 15600, ctx.r28.u32);
loc_881A34C8:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B6FC8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B6FC8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B6FC8) {
			switch (rex_dispatch_address) {
				case 0x881B6FD0:
				case 0x881B73D0:
				case 0x881B73E0:
				case 0x881B73F0:
				case 0x881B7400:
				case 0x881B7410:
				case 0x881B7420:
				case 0x881B7430:
				case 0x881B7440:
				case 0x881B7450:
				case 0x881B7494:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B6FC8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B6FD0: goto loc_881B6FD0;
		case 0x881B73D0: goto loc_881B73D0;
		case 0x881B73E0: goto loc_881B73E0;
		case 0x881B73F0: goto loc_881B73F0;
		case 0x881B7400: goto loc_881B7400;
		case 0x881B7410: goto loc_881B7410;
		case 0x881B7420: goto loc_881B7420;
		case 0x881B7430: goto loc_881B7430;
		case 0x881B7440: goto loc_881B7440;
		case 0x881B7450: goto loc_881B7450;
		case 0x881B7494: goto loc_881B7494;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881B6FD0;
	__savegprlr_14(ctx, base);
loc_881B6FD0:
	// stwu r1,-416(r1)
	ctx.current_instruction = 0x881B6FD0;
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// stb r11,160(r1)
	ctx.current_instruction = 0x881B6FE0;
	REX_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r31,161(r1)
	ctx.current_instruction = 0x881B6FE8;
	REX_STORE_U8(ctx.r1.u32 + 161, ctx.r31.u8);
	// li r23,1
	ctx.r23.s64 = 1;
	// stb r11,162(r1)
	ctx.current_instruction = 0x881B6FF0;
	REX_STORE_U8(ctx.r1.u32 + 162, ctx.r11.u8);
	// li r29,2
	ctx.r29.s64 = 2;
	// stb r11,164(r1)
	ctx.current_instruction = 0x881B6FF8;
	REX_STORE_U8(ctx.r1.u32 + 164, ctx.r11.u8);
	// li r30,5
	ctx.r30.s64 = 5;
	// stb r23,163(r1)
	ctx.current_instruction = 0x881B7000;
	REX_STORE_U8(ctx.r1.u32 + 163, ctx.r23.u8);
	// li r3,6
	ctx.r3.s64 = 6;
	// stb r29,165(r1)
	ctx.current_instruction = 0x881B7008;
	REX_STORE_U8(ctx.r1.u32 + 165, ctx.r29.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r11,166(r1)
	ctx.current_instruction = 0x881B7010;
	REX_STORE_U8(ctx.r1.u32 + 166, ctx.r11.u8);
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r11,168(r1)
	ctx.current_instruction = 0x881B7018;
	REX_STORE_U8(ctx.r1.u32 + 168, ctx.r11.u8);
	// li r7,14
	ctx.r7.s64 = 14;
	// stb r8,169(r1)
	ctx.current_instruction = 0x881B7020;
	REX_STORE_U8(ctx.r1.u32 + 169, ctx.r8.u8);
	// li r24,3
	ctx.r24.s64 = 3;
	// stb r11,170(r1)
	ctx.current_instruction = 0x881B7028;
	REX_STORE_U8(ctx.r1.u32 + 170, ctx.r11.u8);
	// li r25,7
	ctx.r25.s64 = 7;
	// stb r30,171(r1)
	ctx.current_instruction = 0x881B7030;
	REX_STORE_U8(ctx.r1.u32 + 171, ctx.r30.u8);
	// li r4,9
	ctx.r4.s64 = 9;
	// stb r24,167(r1)
	ctx.current_instruction = 0x881B7038;
	REX_STORE_U8(ctx.r1.u32 + 167, ctx.r24.u8);
	// li r26,11
	ctx.r26.s64 = 11;
	// stb r11,172(r1)
	ctx.current_instruction = 0x881B7040;
	REX_STORE_U8(ctx.r1.u32 + 172, ctx.r11.u8);
	// li r6,13
	ctx.r6.s64 = 13;
	// stb r3,173(r1)
	ctx.current_instruction = 0x881B7048;
	REX_STORE_U8(ctx.r1.u32 + 173, ctx.r3.u8);
	// li r27,15
	ctx.r27.s64 = 15;
	// stb r11,174(r1)
	ctx.current_instruction = 0x881B7050;
	REX_STORE_U8(ctx.r1.u32 + 174, ctx.r11.u8);
	// li r28,17
	ctx.r28.s64 = 17;
	// stb r25,175(r1)
	ctx.current_instruction = 0x881B7058;
	REX_STORE_U8(ctx.r1.u32 + 175, ctx.r25.u8);
	// li r17,20
	ctx.r17.s64 = 20;
	// stb r11,128(r1)
	ctx.current_instruction = 0x881B7060;
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// li r18,21
	ctx.r18.s64 = 21;
	// stb r9,129(r1)
	ctx.current_instruction = 0x881B7068;
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r9.u8);
	// stb r11,130(r1)
	ctx.current_instruction = 0x881B706C;
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r11.u8);
	// li r19,24
	ctx.r19.s64 = 24;
	// stb r4,131(r1)
	ctx.current_instruction = 0x881B7074;
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r4.u8);
	// li r20,25
	ctx.r20.s64 = 25;
	// stb r11,132(r1)
	ctx.current_instruction = 0x881B707C;
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// li r21,28
	ctx.r21.s64 = 28;
	// stb r5,133(r1)
	ctx.current_instruction = 0x881B7084;
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r5.u8);
	// li r22,29
	ctx.r22.s64 = 29;
	// stb r11,134(r1)
	ctx.current_instruction = 0x881B708C;
	REX_STORE_U8(ctx.r1.u32 + 134, ctx.r11.u8);
	// stb r26,135(r1)
	ctx.current_instruction = 0x881B7090;
	REX_STORE_U8(ctx.r1.u32 + 135, ctx.r26.u8);
	// stb r11,136(r1)
	ctx.current_instruction = 0x881B7094;
	REX_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// stb r10,137(r1)
	ctx.current_instruction = 0x881B7098;
	REX_STORE_U8(ctx.r1.u32 + 137, ctx.r10.u8);
	// stb r11,138(r1)
	ctx.current_instruction = 0x881B709C;
	REX_STORE_U8(ctx.r1.u32 + 138, ctx.r11.u8);
	// stb r6,139(r1)
	ctx.current_instruction = 0x881B70A0;
	REX_STORE_U8(ctx.r1.u32 + 139, ctx.r6.u8);
	// stb r11,140(r1)
	ctx.current_instruction = 0x881B70A4;
	REX_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// stb r7,141(r1)
	ctx.current_instruction = 0x881B70A8;
	REX_STORE_U8(ctx.r1.u32 + 141, ctx.r7.u8);
	// stb r11,142(r1)
	ctx.current_instruction = 0x881B70AC;
	REX_STORE_U8(ctx.r1.u32 + 142, ctx.r11.u8);
	// stb r27,143(r1)
	ctx.current_instruction = 0x881B70B0;
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r27.u8);
	// stb r11,224(r1)
	ctx.current_instruction = 0x881B70B4;
	REX_STORE_U8(ctx.r1.u32 + 224, ctx.r11.u8);
	// stb r31,225(r1)
	ctx.current_instruction = 0x881B70B8;
	REX_STORE_U8(ctx.r1.u32 + 225, ctx.r31.u8);
	// stb r11,226(r1)
	ctx.current_instruction = 0x881B70BC;
	REX_STORE_U8(ctx.r1.u32 + 226, ctx.r11.u8);
	// stb r29,227(r1)
	ctx.current_instruction = 0x881B70C0;
	REX_STORE_U8(ctx.r1.u32 + 227, ctx.r29.u8);
	// stb r11,228(r1)
	ctx.current_instruction = 0x881B70C4;
	REX_STORE_U8(ctx.r1.u32 + 228, ctx.r11.u8);
	// stb r8,229(r1)
	ctx.current_instruction = 0x881B70C8;
	REX_STORE_U8(ctx.r1.u32 + 229, ctx.r8.u8);
	// stb r11,230(r1)
	ctx.current_instruction = 0x881B70CC;
	REX_STORE_U8(ctx.r1.u32 + 230, ctx.r11.u8);
	// stb r3,231(r1)
	ctx.current_instruction = 0x881B70D0;
	REX_STORE_U8(ctx.r1.u32 + 231, ctx.r3.u8);
	// stb r11,232(r1)
	ctx.current_instruction = 0x881B70D4;
	REX_STORE_U8(ctx.r1.u32 + 232, ctx.r11.u8);
	// stb r9,233(r1)
	ctx.current_instruction = 0x881B70D8;
	REX_STORE_U8(ctx.r1.u32 + 233, ctx.r9.u8);
	// stb r11,234(r1)
	ctx.current_instruction = 0x881B70DC;
	REX_STORE_U8(ctx.r1.u32 + 234, ctx.r11.u8);
	// stb r5,235(r1)
	ctx.current_instruction = 0x881B70E0;
	REX_STORE_U8(ctx.r1.u32 + 235, ctx.r5.u8);
	// stb r11,236(r1)
	ctx.current_instruction = 0x881B70E4;
	REX_STORE_U8(ctx.r1.u32 + 236, ctx.r11.u8);
	// stb r10,237(r1)
	ctx.current_instruction = 0x881B70E8;
	REX_STORE_U8(ctx.r1.u32 + 237, ctx.r10.u8);
	// stb r11,238(r1)
	ctx.current_instruction = 0x881B70EC;
	REX_STORE_U8(ctx.r1.u32 + 238, ctx.r11.u8);
	// stb r7,239(r1)
	ctx.current_instruction = 0x881B70F0;
	REX_STORE_U8(ctx.r1.u32 + 239, ctx.r7.u8);
	// stb r31,192(r1)
	ctx.current_instruction = 0x881B70F4;
	REX_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// stb r23,193(r1)
	ctx.current_instruction = 0x881B70F8;
	REX_STORE_U8(ctx.r1.u32 + 193, ctx.r23.u8);
	// stb r11,194(r1)
	ctx.current_instruction = 0x881B70FC;
	REX_STORE_U8(ctx.r1.u32 + 194, ctx.r11.u8);
	// stb r28,195(r1)
	ctx.current_instruction = 0x881B7100;
	REX_STORE_U8(ctx.r1.u32 + 195, ctx.r28.u8);
	// stb r8,196(r1)
	ctx.current_instruction = 0x881B7104;
	REX_STORE_U8(ctx.r1.u32 + 196, ctx.r8.u8);
	// stb r30,197(r1)
	ctx.current_instruction = 0x881B7108;
	REX_STORE_U8(ctx.r1.u32 + 197, ctx.r30.u8);
	// stb r17,198(r1)
	ctx.current_instruction = 0x881B710C;
	REX_STORE_U8(ctx.r1.u32 + 198, ctx.r17.u8);
	// stb r18,199(r1)
	ctx.current_instruction = 0x881B7110;
	REX_STORE_U8(ctx.r1.u32 + 199, ctx.r18.u8);
	// stb r9,200(r1)
	ctx.current_instruction = 0x881B7114;
	REX_STORE_U8(ctx.r1.u32 + 200, ctx.r9.u8);
	// stb r23,177(r1)
	ctx.current_instruction = 0x881B7118;
	REX_STORE_U8(ctx.r1.u32 + 177, ctx.r23.u8);
	// lis r14,-30678
	ctx.r14.s64 = -2010513408;
	// stb r23,209(r1)
	ctx.current_instruction = 0x881B7120;
	REX_STORE_U8(ctx.r1.u32 + 209, ctx.r23.u8);
	// li r23,18
	ctx.r23.s64 = 18;
	// stb r28,159(r1)
	ctx.current_instruction = 0x881B7128;
	REX_STORE_U8(ctx.r1.u32 + 159, ctx.r28.u8);
	// li r15,22
	ctx.r15.s64 = 22;
	// stb r23,81(r1)
	ctx.current_instruction = 0x881B7130;
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r23.u8);
	// li r23,26
	ctx.r23.s64 = 26;
	// stb r28,185(r1)
	ctx.current_instruction = 0x881B7138;
	REX_STORE_U8(ctx.r1.u32 + 185, ctx.r28.u8);
	// li r16,23
	ctx.r16.s64 = 23;
	// stb r28,217(r1)
	ctx.current_instruction = 0x881B7140;
	REX_STORE_U8(ctx.r1.u32 + 217, ctx.r28.u8);
	// li r28,19
	ctx.r28.s64 = 19;
	// stb r8,146(r1)
	ctx.current_instruction = 0x881B7148;
	REX_STORE_U8(ctx.r1.u32 + 146, ctx.r8.u8);
	// stb r28,80(r1)
	ctx.current_instruction = 0x881B714C;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r28,27
	ctx.r28.s64 = 27;
	// stb r8,180(r1)
	ctx.current_instruction = 0x881B7154;
	REX_STORE_U8(ctx.r1.u32 + 180, ctx.r8.u8);
	// stb r8,210(r1)
	ctx.current_instruction = 0x881B7158;
	REX_STORE_U8(ctx.r1.u32 + 210, ctx.r8.u8);
	// addi r8,r14,200
	ctx.r8.s64 = ctx.r14.s64 + 200;
	// stb r30,147(r1)
	ctx.current_instruction = 0x881B7160;
	REX_STORE_U8(ctx.r1.u32 + 147, ctx.r30.u8);
	// std r28,112(r1)
	ctx.current_instruction = 0x881B7164;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r28.u64);
	// li r28,18
	ctx.r28.s64 = 18;
	// stb r11,158(r1)
	ctx.current_instruction = 0x881B716C;
	REX_STORE_U8(ctx.r1.u32 + 158, ctx.r11.u8);
	// std r23,96(r1)
	ctx.current_instruction = 0x881B7170;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r23.u64);
	// li r23,19
	ctx.r23.s64 = 19;
	// stb r30,181(r1)
	ctx.current_instruction = 0x881B7178;
	REX_STORE_U8(ctx.r1.u32 + 181, ctx.r30.u8);
	// stb r11,184(r1)
	ctx.current_instruction = 0x881B717C;
	REX_STORE_U8(ctx.r1.u32 + 184, ctx.r11.u8);
	// stb r30,211(r1)
	ctx.current_instruction = 0x881B7180;
	REX_STORE_U8(ctx.r1.u32 + 211, ctx.r30.u8);
	// li r30,30
	ctx.r30.s64 = 30;
	// stb r11,216(r1)
	ctx.current_instruction = 0x881B7188;
	REX_STORE_U8(ctx.r1.u32 + 216, ctx.r11.u8);
	// li r11,31
	ctx.r11.s64 = 31;
	// stb r4,201(r1)
	ctx.current_instruction = 0x881B7190;
	REX_STORE_U8(ctx.r1.u32 + 201, ctx.r4.u8);
	// stb r19,202(r1)
	ctx.current_instruction = 0x881B7194;
	REX_STORE_U8(ctx.r1.u32 + 202, ctx.r19.u8);
	// stb r20,203(r1)
	ctx.current_instruction = 0x881B7198;
	REX_STORE_U8(ctx.r1.u32 + 203, ctx.r20.u8);
	// stb r10,204(r1)
	ctx.current_instruction = 0x881B719C;
	REX_STORE_U8(ctx.r1.u32 + 204, ctx.r10.u8);
	// stb r6,205(r1)
	ctx.current_instruction = 0x881B71A0;
	REX_STORE_U8(ctx.r1.u32 + 205, ctx.r6.u8);
	// lbz r14,81(r1)
	ctx.current_instruction = 0x881B71A4;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// stb r21,206(r1)
	ctx.current_instruction = 0x881B71A8;
	REX_STORE_U8(ctx.r1.u32 + 206, ctx.r21.u8);
	// stb r22,207(r1)
	ctx.current_instruction = 0x881B71AC;
	REX_STORE_U8(ctx.r1.u32 + 207, ctx.r22.u8);
	// stb r29,144(r1)
	ctx.current_instruction = 0x881B71B0;
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// stb r24,145(r1)
	ctx.current_instruction = 0x881B71B4;
	REX_STORE_U8(ctx.r1.u32 + 145, ctx.r24.u8);
	// stb r14,186(r1)
	ctx.current_instruction = 0x881B71B8;
	REX_STORE_U8(ctx.r1.u32 + 186, ctx.r14.u8);
	// lbz r14,80(r1)
	ctx.current_instruction = 0x881B71BC;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r3,148(r1)
	ctx.current_instruction = 0x881B71C0;
	REX_STORE_U8(ctx.r1.u32 + 148, ctx.r3.u8);
	// stb r25,149(r1)
	ctx.current_instruction = 0x881B71C4;
	REX_STORE_U8(ctx.r1.u32 + 149, ctx.r25.u8);
	// stb r9,150(r1)
	ctx.current_instruction = 0x881B71C8;
	REX_STORE_U8(ctx.r1.u32 + 150, ctx.r9.u8);
	// stb r4,151(r1)
	ctx.current_instruction = 0x881B71CC;
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r4.u8);
	// stb r5,152(r1)
	ctx.current_instruction = 0x881B71D0;
	REX_STORE_U8(ctx.r1.u32 + 152, ctx.r5.u8);
	// stb r26,153(r1)
	ctx.current_instruction = 0x881B71D4;
	REX_STORE_U8(ctx.r1.u32 + 153, ctx.r26.u8);
	// stb r10,154(r1)
	ctx.current_instruction = 0x881B71D8;
	REX_STORE_U8(ctx.r1.u32 + 154, ctx.r10.u8);
	// stb r6,155(r1)
	ctx.current_instruction = 0x881B71DC;
	REX_STORE_U8(ctx.r1.u32 + 155, ctx.r6.u8);
	// stb r7,156(r1)
	ctx.current_instruction = 0x881B71E0;
	REX_STORE_U8(ctx.r1.u32 + 156, ctx.r7.u8);
	// stb r27,157(r1)
	ctx.current_instruction = 0x881B71E4;
	REX_STORE_U8(ctx.r1.u32 + 157, ctx.r27.u8);
	// stb r31,176(r1)
	ctx.current_instruction = 0x881B71E8;
	REX_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// stb r29,178(r1)
	ctx.current_instruction = 0x881B71EC;
	REX_STORE_U8(ctx.r1.u32 + 178, ctx.r29.u8);
	// stb r24,179(r1)
	ctx.current_instruction = 0x881B71F0;
	REX_STORE_U8(ctx.r1.u32 + 179, ctx.r24.u8);
	// stb r3,182(r1)
	ctx.current_instruction = 0x881B71F4;
	REX_STORE_U8(ctx.r1.u32 + 182, ctx.r3.u8);
	// stb r25,183(r1)
	ctx.current_instruction = 0x881B71F8;
	REX_STORE_U8(ctx.r1.u32 + 183, ctx.r25.u8);
	// stb r14,187(r1)
	ctx.current_instruction = 0x881B71FC;
	REX_STORE_U8(ctx.r1.u32 + 187, ctx.r14.u8);
	// stb r17,188(r1)
	ctx.current_instruction = 0x881B7200;
	REX_STORE_U8(ctx.r1.u32 + 188, ctx.r17.u8);
	// stb r18,189(r1)
	ctx.current_instruction = 0x881B7204;
	REX_STORE_U8(ctx.r1.u32 + 189, ctx.r18.u8);
	// stb r15,190(r1)
	ctx.current_instruction = 0x881B7208;
	REX_STORE_U8(ctx.r1.u32 + 190, ctx.r15.u8);
	// stb r16,191(r1)
	ctx.current_instruction = 0x881B720C;
	REX_STORE_U8(ctx.r1.u32 + 191, ctx.r16.u8);
	// stb r31,208(r1)
	ctx.current_instruction = 0x881B7210;
	REX_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// stb r9,212(r1)
	ctx.current_instruction = 0x881B7214;
	REX_STORE_U8(ctx.r1.u32 + 212, ctx.r9.u8);
	// stb r4,213(r1)
	ctx.current_instruction = 0x881B7218;
	REX_STORE_U8(ctx.r1.u32 + 213, ctx.r4.u8);
	// stb r10,214(r1)
	ctx.current_instruction = 0x881B721C;
	REX_STORE_U8(ctx.r1.u32 + 214, ctx.r10.u8);
	// stb r6,215(r1)
	ctx.current_instruction = 0x881B7220;
	REX_STORE_U8(ctx.r1.u32 + 215, ctx.r6.u8);
	// stb r17,218(r1)
	ctx.current_instruction = 0x881B7224;
	REX_STORE_U8(ctx.r1.u32 + 218, ctx.r17.u8);
	// stb r18,219(r1)
	ctx.current_instruction = 0x881B7228;
	REX_STORE_U8(ctx.r1.u32 + 219, ctx.r18.u8);
	// stb r19,220(r1)
	ctx.current_instruction = 0x881B722C;
	REX_STORE_U8(ctx.r1.u32 + 220, ctx.r19.u8);
	// stb r20,221(r1)
	ctx.current_instruction = 0x881B7230;
	REX_STORE_U8(ctx.r1.u32 + 221, ctx.r20.u8);
	// stb r21,222(r1)
	ctx.current_instruction = 0x881B7234;
	REX_STORE_U8(ctx.r1.u32 + 222, ctx.r21.u8);
	// stb r22,223(r1)
	ctx.current_instruction = 0x881B7238;
	REX_STORE_U8(ctx.r1.u32 + 223, ctx.r22.u8);
	// stb r29,240(r1)
	ctx.current_instruction = 0x881B723C;
	REX_STORE_U8(ctx.r1.u32 + 240, ctx.r29.u8);
	// stb r24,241(r1)
	ctx.current_instruction = 0x881B7240;
	REX_STORE_U8(ctx.r1.u32 + 241, ctx.r24.u8);
	// stb r3,242(r1)
	ctx.current_instruction = 0x881B7244;
	REX_STORE_U8(ctx.r1.u32 + 242, ctx.r3.u8);
	// stb r25,243(r1)
	ctx.current_instruction = 0x881B7248;
	REX_STORE_U8(ctx.r1.u32 + 243, ctx.r25.u8);
	// stb r5,244(r1)
	ctx.current_instruction = 0x881B724C;
	REX_STORE_U8(ctx.r1.u32 + 244, ctx.r5.u8);
	// stb r26,245(r1)
	ctx.current_instruction = 0x881B7250;
	REX_STORE_U8(ctx.r1.u32 + 245, ctx.r26.u8);
	// stb r7,246(r1)
	ctx.current_instruction = 0x881B7254;
	REX_STORE_U8(ctx.r1.u32 + 246, ctx.r7.u8);
	// stb r27,247(r1)
	ctx.current_instruction = 0x881B7258;
	REX_STORE_U8(ctx.r1.u32 + 247, ctx.r27.u8);
	// stb r28,248(r1)
	ctx.current_instruction = 0x881B725C;
	REX_STORE_U8(ctx.r1.u32 + 248, ctx.r28.u8);
	// addi r8,r8,15
	ctx.r8.s64 = ctx.r8.s64 + 15;
	// ld r28,112(r1)
	ctx.current_instruction = 0x881B7264;
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lis r29,-30678
	ctx.r29.s64 = -2010513408;
	// stb r10,116(r1)
	ctx.current_instruction = 0x881B726C;
	REX_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// rlwinm r10,r8,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// stb r9,112(r1)
	ctx.current_instruction = 0x881B7274;
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// lis r25,-30678
	ctx.r25.s64 = -2010513408;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stb r26,115(r1)
	ctx.current_instruction = 0x881B7280;
	REX_STORE_U8(ctx.r1.u32 + 115, ctx.r26.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r27,119(r1)
	ctx.current_instruction = 0x881B7288;
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r27.u8);
	// lis r24,-30678
	ctx.r24.s64 = -2010513408;
	// stb r20,121(r1)
	ctx.current_instruction = 0x881B7290;
	REX_STORE_U8(ctx.r1.u32 + 121, ctx.r20.u8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r23,249(r1)
	ctx.current_instruction = 0x881B7298;
	REX_STORE_U8(ctx.r1.u32 + 249, ctx.r23.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// ld r23,96(r1)
	ctx.current_instruction = 0x881B72A0;
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// stw r9,24360(r29)
	ctx.current_instruction = 0x881B72A4;
	REX_STORE_U32(ctx.r29.u32 + 24360, ctx.r9.u32);
	// lis r26,-30678
	ctx.r26.s64 = -2010513408;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r28,253(r1)
	ctx.current_instruction = 0x881B72B0;
	REX_STORE_U8(ctx.r1.u32 + 253, ctx.r28.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r28,123(r1)
	ctx.current_instruction = 0x881B72B8;
	REX_STORE_U8(ctx.r1.u32 + 123, ctx.r28.u8);
	// stw r9,25768(r25)
	ctx.current_instruction = 0x881B72BC;
	REX_STORE_U32(ctx.r25.u32 + 25768, ctx.r9.u32);
	// lis r27,-30678
	ctx.r27.s64 = -2010513408;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r23,252(r1)
	ctx.current_instruction = 0x881B72C8;
	REX_STORE_U8(ctx.r1.u32 + 252, ctx.r23.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r23,122(r1)
	ctx.current_instruction = 0x881B72D0;
	REX_STORE_U8(ctx.r1.u32 + 122, ctx.r23.u8);
	// stw r9,25772(r24)
	ctx.current_instruction = 0x881B72D4;
	REX_STORE_U32(ctx.r24.u32 + 25772, ctx.r9.u32);
	// lis r20,-30678
	ctx.r20.s64 = -2010513408;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r30,254(r1)
	ctx.current_instruction = 0x881B72E0;
	REX_STORE_U8(ctx.r1.u32 + 254, ctx.r30.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r7,118(r1)
	ctx.current_instruction = 0x881B72E8;
	REX_STORE_U8(ctx.r1.u32 + 118, ctx.r7.u8);
	// stw r9,25792(r26)
	ctx.current_instruction = 0x881B72EC;
	REX_STORE_U32(ctx.r26.u32 + 25792, ctx.r9.u32);
	// lis r28,-30678
	ctx.r28.s64 = -2010513408;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r30,126(r1)
	ctx.current_instruction = 0x881B72F8;
	REX_STORE_U8(ctx.r1.u32 + 126, ctx.r30.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r11,255(r1)
	ctx.current_instruction = 0x881B7300;
	REX_STORE_U8(ctx.r1.u32 + 255, ctx.r11.u8);
	// stw r9,25784(r27)
	ctx.current_instruction = 0x881B7304;
	REX_STORE_U32(ctx.r27.u32 + 25784, ctx.r9.u32);
	// lis r23,-30678
	ctx.r23.s64 = -2010513408;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r11,127(r1)
	ctx.current_instruction = 0x881B7310;
	REX_STORE_U8(ctx.r1.u32 + 127, ctx.r11.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r4,113(r1)
	ctx.current_instruction = 0x881B7318;
	REX_STORE_U8(ctx.r1.u32 + 113, ctx.r4.u8);
	// stw r9,25760(r20)
	ctx.current_instruction = 0x881B731C;
	REX_STORE_U32(ctx.r20.u32 + 25760, ctx.r9.u32);
	// lis r7,-30678
	ctx.r7.s64 = -2010513408;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r5,114(r1)
	ctx.current_instruction = 0x881B7328;
	REX_STORE_U8(ctx.r1.u32 + 114, ctx.r5.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r22,125(r1)
	ctx.current_instruction = 0x881B7330;
	REX_STORE_U8(ctx.r1.u32 + 125, ctx.r22.u8);
	// stw r9,25776(r28)
	ctx.current_instruction = 0x881B7334;
	REX_STORE_U32(ctx.r28.u32 + 25776, ctx.r9.u32);
	// lis r30,-30678
	ctx.r30.s64 = -2010513408;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r15,250(r1)
	ctx.current_instruction = 0x881B7340;
	REX_STORE_U8(ctx.r1.u32 + 250, ctx.r15.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r16,251(r1)
	ctx.current_instruction = 0x881B7348;
	REX_STORE_U8(ctx.r1.u32 + 251, ctx.r16.u8);
	// stw r9,25764(r23)
	ctx.current_instruction = 0x881B734C;
	REX_STORE_U32(ctx.r23.u32 + 25764, ctx.r9.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r6,117(r1)
	ctx.current_instruction = 0x881B7358;
	REX_STORE_U8(ctx.r1.u32 + 117, ctx.r6.u8);
	// stb r19,120(r1)
	ctx.current_instruction = 0x881B735C;
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r19.u8);
	// lis r22,-30678
	ctx.r22.s64 = -2010513408;
	// stb r21,124(r1)
	ctx.current_instruction = 0x881B7364;
	REX_STORE_U8(ctx.r1.u32 + 124, ctx.r21.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r31,96(r1)
	ctx.current_instruction = 0x881B736C;
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stb r31,97(r1)
	ctx.current_instruction = 0x881B7374;
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r31.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r3,24352(r7)
	ctx.current_instruction = 0x881B737C;
	REX_STORE_U32(ctx.r7.u32 + 24352, ctx.r3.u32);
	// stw r9,25780(r30)
	ctx.current_instruction = 0x881B7380;
	REX_STORE_U32(ctx.r30.u32 + 25780, ctx.r9.u32);
	// stb r11,98(r1)
	ctx.current_instruction = 0x881B7384;
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// stb r11,99(r1)
	ctx.current_instruction = 0x881B7388;
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
	// stb r11,100(r1)
	ctx.current_instruction = 0x881B738C;
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// stb r11,101(r1)
	ctx.current_instruction = 0x881B7390;
	REX_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// stb r11,102(r1)
	ctx.current_instruction = 0x881B7394;
	REX_STORE_U8(ctx.r1.u32 + 102, ctx.r11.u8);
	// stb r11,103(r1)
	ctx.current_instruction = 0x881B7398;
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// stb r11,104(r1)
	ctx.current_instruction = 0x881B739C;
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// lis r21,-30678
	ctx.r21.s64 = -2010513408;
	// stb r11,105(r1)
	ctx.current_instruction = 0x881B73A4;
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// stb r11,106(r1)
	ctx.current_instruction = 0x881B73A8;
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r11.u8);
	// stb r11,107(r1)
	ctx.current_instruction = 0x881B73AC;
	REX_STORE_U8(ctx.r1.u32 + 107, ctx.r11.u8);
	// stb r11,108(r1)
	ctx.current_instruction = 0x881B73B0;
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// stb r11,109(r1)
	ctx.current_instruction = 0x881B73B4;
	REX_STORE_U8(ctx.r1.u32 + 109, ctx.r11.u8);
	// stb r11,110(r1)
	ctx.current_instruction = 0x881B73B8;
	REX_STORE_U8(ctx.r1.u32 + 110, ctx.r11.u8);
	// stb r11,111(r1)
	ctx.current_instruction = 0x881B73BC;
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// stw r10,24364(r22)
	ctx.current_instruction = 0x881B73C4;
	REX_STORE_U32(ctx.r22.u32 + 24364, ctx.r10.u32);
	// stw r11,24356(r21)
	ctx.current_instruction = 0x881B73C8;
	REX_STORE_U32(ctx.r21.u32 + 24356, ctx.r11.u32);
	// bl 0x880547a0
	ctx.lr = 0x881B73D0;
	sub_880547A0(ctx, base);
loc_881B73D0:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,24360(r29)
	ctx.current_instruction = 0x881B73D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 24360);
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x880547a0
	ctx.lr = 0x881B73E0;
	sub_880547A0(ctx, base);
loc_881B73E0:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25768(r25)
	ctx.current_instruction = 0x881B73E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 25768);
	// bl 0x880547a0
	ctx.lr = 0x881B73F0;
	sub_880547A0(ctx, base);
loc_881B73F0:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25772(r24)
	ctx.current_instruction = 0x881B73F8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 25772);
	// bl 0x880547a0
	ctx.lr = 0x881B7400;
	sub_880547A0(ctx, base);
loc_881B7400:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25792(r26)
	ctx.current_instruction = 0x881B7408;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 25792);
	// bl 0x880547a0
	ctx.lr = 0x881B7410;
	sub_880547A0(ctx, base);
loc_881B7410:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25784(r27)
	ctx.current_instruction = 0x881B7418;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 25784);
	// bl 0x880547a0
	ctx.lr = 0x881B7420;
	sub_880547A0(ctx, base);
loc_881B7420:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25760(r20)
	ctx.current_instruction = 0x881B7428;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r20.u32 + 25760);
	// bl 0x880547a0
	ctx.lr = 0x881B7430;
	sub_880547A0(ctx, base);
loc_881B7430:
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25776(r28)
	ctx.current_instruction = 0x881B7438;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 25776);
	// bl 0x880547a0
	ctx.lr = 0x881B7440;
	sub_880547A0(ctx, base);
loc_881B7440:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25764(r23)
	ctx.current_instruction = 0x881B7448;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 25764);
	// bl 0x880547a0
	ctx.lr = 0x881B7450;
	sub_880547A0(ctx, base);
loc_881B7450:
	// lis r6,128
	ctx.r6.s64 = 8388608;
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// lwz r11,24364(r22)
	ctx.current_instruction = 0x881B7458;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 24364);
	// ori r4,r6,128
	ctx.r4.u64 = ctx.r6.u64 | 128;
	// ori r3,r5,128
	ctx.r3.u64 = ctx.r5.u64 | 128;
	// rldimi r4,r4,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// rldimi r3,r3,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// std r31,8(r11)
	ctx.current_instruction = 0x881B7470;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r31,0(r11)
	ctx.current_instruction = 0x881B7474;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r11,24356(r21)
	ctx.current_instruction = 0x881B7480;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 24356);
	// std r10,8(r11)
	ctx.current_instruction = 0x881B7484;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r3,0(r11)
	ctx.current_instruction = 0x881B7488;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// lwz r3,25780(r30)
	ctx.current_instruction = 0x881B748C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 25780);
	// bl 0x880547a0
	ctx.lr = 0x881B7494;
	sub_880547A0(ctx, base);
loc_881B7494:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881CBAD0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881CBAD0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881CBAD0) {
			switch (rex_dispatch_address) {
				case 0x881CBAD8:
				case 0x881CBAE0:
				case 0x881CBBF4:
				case 0x881CBC30:
				case 0x881CBCA0:
				case 0x881CBCB4:
				case 0x881CBD00:
				case 0x881CBD14:
				case 0x881CBDA8:
				case 0x881CBE58:
				case 0x881CBEEC:
				case 0x881CBF34:
				case 0x881CBFB4:
				case 0x881CC060:
				case 0x881CC1BC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CBAD0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881CBAD8: goto loc_881CBAD8;
		case 0x881CBAE0: goto loc_881CBAE0;
		case 0x881CBBF4: goto loc_881CBBF4;
		case 0x881CBC30: goto loc_881CBC30;
		case 0x881CBCA0: goto loc_881CBCA0;
		case 0x881CBCB4: goto loc_881CBCB4;
		case 0x881CBD00: goto loc_881CBD00;
		case 0x881CBD14: goto loc_881CBD14;
		case 0x881CBDA8: goto loc_881CBDA8;
		case 0x881CBE58: goto loc_881CBE58;
		case 0x881CBEEC: goto loc_881CBEEC;
		case 0x881CBF34: goto loc_881CBF34;
		case 0x881CBFB4: goto loc_881CBFB4;
		case 0x881CC060: goto loc_881CC060;
		case 0x881CC1BC: goto loc_881CC1BC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881CBAD8;
	__savegprlr_14(ctx, base);
loc_881CBAD8:
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef278
	ctx.lr = 0x881CBAE0;
	__savefpr_24(ctx, base);
loc_881CBAE0:
	// stwu r1,-368(r1)
	ctx.current_instruction = 0x881CBAE0;
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// stw r4,396(r1)
	ctx.current_instruction = 0x881CBAE8;
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// stw r10,444(r1)
	ctx.current_instruction = 0x881CBAF0;
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// stw r6,412(r1)
	ctx.current_instruction = 0x881CBAF8;
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r6.u32);
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// lwz r10,484(r1)
	ctx.current_instruction = 0x881CBB00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// std r7,120(r1)
	ctx.current_instruction = 0x881CBB04;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f12,120(r1)
	ctx.current_instruction = 0x881CBB08;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// stw r5,404(r1)
	ctx.current_instruction = 0x881CBB10;
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r5.u32);
	// stw r9,436(r1)
	ctx.current_instruction = 0x881CBB14;
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r9.u32);
	// lis r9,-30717
	ctx.r9.s64 = -2013069312;
	// std r6,128(r1)
	ctx.current_instruction = 0x881CBB1C;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f0,128(r1)
	ctx.current_instruction = 0x881CBB20;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// lfd f31,-26256(r9)
	ctx.current_instruction = 0x881CBB2C;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r9.u32 + -26256);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmul f27,f10,f31
	ctx.f27.f64 = ctx.f10.f64 * ctx.f31.f64;
	// lwz r8,476(r1)
	ctx.current_instruction = 0x881CBB38;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// std r5,128(r1)
	ctx.current_instruction = 0x881CBB48;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfd f13,128(r1)
	ctx.current_instruction = 0x881CBB4C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f30,f13
	ctx.f30.f64 = double(ctx.f13.s64);
	// lis r3,-30717
	ctx.r3.s64 = -2013069312;
	// fsub f26,f11,f27
	ctx.f26.f64 = ctx.f11.f64 - ctx.f27.f64;
	// lfd f0,-26248(r3)
	ctx.current_instruction = 0x881CBB5C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + -26248);
	// fmul f9,f30,f0
	ctx.f9.f64 = ctx.f30.f64 * ctx.f0.f64;
	// srawi r16,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r16.s64 = ctx.r20.s32 >> 1;
	// srawi r22,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r4.s32 >> 1;
	// fsub f8,f27,f26
	ctx.f8.f64 = ctx.f27.f64 - ctx.f26.f64;
	// fsub f7,f8,f9
	ctx.f7.f64 = ctx.f8.f64 - ctx.f9.f64;
	// fadd f6,f8,f9
	ctx.f6.f64 = ctx.f8.f64 + ctx.f9.f64;
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,128(r1)
	ctx.current_instruction = 0x881CBB7C;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f5.u64);
	// lwz r14,132(r1)
	ctx.current_instruction = 0x881CBB80;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,128(r1)
	ctx.current_instruction = 0x881CBB88;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f4.u64);
	// lwz r15,132(r1)
	ctx.current_instruction = 0x881CBB8C;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bge cr6,0x881cbb9c
	if (!ctx.cr6.lt) goto loc_881CBB9C;
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
loc_881CBB9C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bge cr6,0x881cbba8
	if (!ctx.cr6.lt) goto loc_881CBBA8;
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
loc_881CBBA8:
	// lwz r25,452(r1)
	ctx.current_instruction = 0x881CBBA8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881cbc4c
	if (!ctx.cr6.gt) goto loc_881CBC4C;
	// addi r27,r14,1
	ctx.r27.s64 = ctx.r14.s64 + 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// subf r28,r15,r20
	ctx.r28.u64 = ctx.r20.u64 - ctx.r15.u64;
	// subf r26,r25,r24
	ctx.r26.u64 = ctx.r24.u64 - ctx.r25.u64;
loc_881CBBCC:
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881cbbdc
	if (!ctx.cr6.lt) goto loc_881CBBDC;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_881CBBDC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881cbbf4
	if (!ctx.cr6.gt) goto loc_881CBBF4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r4,r26,r29
	ctx.r4.u64 = ctx.r26.u64 + ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CBBF4;
	sub_880547A0(ctx, base);
loc_881CBBF4:
	// cmpw cr6,r20,r28
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r28.s32, ctx.xer);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// blt cr6,0x881cbc04
	if (ctx.cr6.lt) goto loc_881CBC04;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_881CBC04:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x881cbc30
	if (!ctx.cr6.gt) goto loc_881CBC30;
	// add r11,r31,r15
	ctx.r11.u64 = ctx.r31.u64 + ctx.r15.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r8,r9
	temp.u8 = (ctx.r9.u32 + 0xFFFFFFFFu < ctx.r9.u32) | (ctx.r9.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r9.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CBC30;
	sub_880547A0(ctx, base);
loc_881CBC30:
	// lwz r4,396(r1)
	ctx.current_instruction = 0x881CBC30;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// add r30,r30,r20
	ctx.r30.u64 = ctx.r30.u64 + ctx.r20.u64;
	// add r29,r29,r20
	ctx.r29.u64 = ctx.r29.u64 + ctx.r20.u64;
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x881cbbcc
	if (ctx.cr6.lt) goto loc_881CBBCC;
loc_881CBC4C:
	// lwz r18,460(r1)
	ctx.current_instruction = 0x881CBC4C;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881cbd28
	if (!ctx.cr6.gt) goto loc_881CBD28;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// subf r27,r15,r14
	ctx.r27.u64 = ctx.r14.u64 - ctx.r15.u64;
loc_881CBC64:
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r30,r16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x881cbc7c
	if (ctx.cr6.lt) goto loc_881CBC7C;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_881CBC7C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x881cbcb4
	if (!ctx.cr6.gt) goto loc_881CBCB4;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r10,436(r1)
	ctx.current_instruction = 0x881CBC88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r31,r11,r16
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r16.s32);
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r3,r31,r18
	ctx.r3.u64 = ctx.r31.u64 + ctx.r18.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CBCA0;
	sub_880547A0(ctx, base);
loc_881CBCA0:
	// lwz r9,468(r1)
	ctx.current_instruction = 0x881CBCA0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r21
	ctx.r4.u64 = ctx.r31.u64 + ctx.r21.u64;
	// add r3,r31,r9
	ctx.r3.u64 = ctx.r31.u64 + ctx.r9.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CBCB4;
	sub_880547A0(ctx, base);
loc_881CBCB4:
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// subf r30,r11,r16
	ctx.r30.u64 = ctx.r16.u64 - ctx.r11.u64;
	// cmpw cr6,r30,r16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x881cbcc8
	if (ctx.cr6.lt) goto loc_881CBCC8;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_881CBCC8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x881cbd14
	if (!ctx.cr6.gt) goto loc_881CBD14;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r9,412(r1)
	ctx.current_instruction = 0x881CBCD4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addme r7,r8
	temp.u8 = (ctx.r8.u32 + 0xFFFFFFFFu < ctx.r8.u32) | (ctx.r8.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r8.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// srawi r6,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 1;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// mullw r10,r6,r16
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r16.s32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r31,r9
	ctx.r4.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r3,r31,r18
	ctx.r3.u64 = ctx.r31.u64 + ctx.r18.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CBD00;
	sub_880547A0(ctx, base);
loc_881CBD00:
	// lwz r3,468(r1)
	ctx.current_instruction = 0x881CBD00;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r19
	ctx.r4.u64 = ctx.r31.u64 + ctx.r19.u64;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CBD14;
	sub_880547A0(ctx, base);
loc_881CBD14:
	// lwz r11,396(r1)
	ctx.current_instruction = 0x881CBD14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881cbc64
	if (ctx.cr6.lt) goto loc_881CBC64;
loc_881CBD28:
	// addi r11,r14,1
	ctx.r11.s64 = ctx.r14.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r9,r23,r25
	ctx.r9.u64 = ctx.r25.u64 - ctx.r23.u64;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// xoris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 ^ 2147483648;
	// stw r9,116(r1)
	ctx.current_instruction = 0x881CBD3C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addc r5,r7,r8
	ctx.xer.ca = ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32;
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r6,r23,r24
	ctx.r6.u64 = ctx.r24.u64 - ctx.r23.u64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r17,r16,1
	ctx.r17.s64 = ctx.r16.s64 + 1;
	// stw r6,112(r1)
	ctx.current_instruction = 0x881CBD54;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// and r30,r3,r11
	ctx.r30.u64 = ctx.r3.u64 & ctx.r11.u64;
	// lfd f28,12088(r10)
	ctx.current_instruction = 0x881CBD5C;
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = REX_LOAD_U64(ctx.r10.u32 + 12088);
	// lis r11,-30717
	ctx.r11.s64 = -2013069312;
	// subf r21,r30,r20
	ctx.r21.u64 = ctx.r20.u64 - ctx.r30.u64;
	// lfd f25,-26264(r11)
	ctx.current_instruction = 0x881CBD68;
	ctx.f25.u64 = REX_LOAD_U64(ctx.r11.u32 + -26264);
loc_881CBD6C:
	// cmpw cr6,r15,r20
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r20.s32, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// blt cr6,0x881cbd7c
	if (ctx.cr6.lt) goto loc_881CBD7C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_881CBD7C:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881cbf44
	if (!ctx.cr6.lt) goto loc_881CBF44;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,128(r1)
	ctx.current_instruction = 0x881CBD88;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.current_instruction = 0x881CBD8C;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f12,f27,f13
	ctx.f12.f64 = ctx.f27.f64 - ctx.f13.f64;
	// fsub f11,f12,f26
	ctx.f11.f64 = ctx.f12.f64 - ctx.f26.f64;
	// fmul f29,f11,f31
	ctx.f29.f64 = ctx.f11.f64 * ctx.f31.f64;
	// fdiv f1,f29,f30
	ctx.f1.f64 = ctx.f29.f64 / ctx.f30.f64;
	// bl 0x881f0340
	ctx.lr = 0x881CBDA8;
	sub_881F0340(ctx, base);
loc_881CBDA8:
	// fsub f10,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f25.f64 - ctx.f1.f64;
	// lwz r9,396(r1)
	ctx.current_instruction = 0x881CBDAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// fmsub f9,f1,f30,f29
	ctx.f9.f64 = std::fma(ctx.f1.f64, ctx.f30.f64, -ctx.f29.f64);
	// cmpw cr6,r21,r9
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r9.s32, ctx.xer);
	// fmsub f8,f10,f30,f29
	ctx.f8.f64 = std::fma(ctx.f10.f64, ctx.f30.f64, -ctx.f29.f64);
	// fmadd f7,f9,f31,f28
	ctx.f7.f64 = std::fma(ctx.f9.f64, ctx.f31.f64, ctx.f28.f64);
	// fmadd f6,f8,f31,f28
	ctx.f6.f64 = std::fma(ctx.f8.f64, ctx.f31.f64, ctx.f28.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,120(r1)
	ctx.current_instruction = 0x881CBDC8;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f5.u64);
	// lwz r10,124(r1)
	ctx.current_instruction = 0x881CBDCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// neg r29,r10
	ctx.r29.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,120(r1)
	ctx.current_instruction = 0x881CBDD8;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f4.u64);
	// lwz r8,124(r1)
	ctx.current_instruction = 0x881CBDDC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mullw r11,r10,r20
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r20.s32);
	// neg r28,r8
	ctx.r28.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// mullw r10,r8,r20
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r20.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r5,r10,r23
	ctx.r5.u64 = ctx.r10.u64 + ctx.r23.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// blt cr6,0x881cbe10
	if (ctx.cr6.lt) goto loc_881CBE10;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_881CBE10:
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r8,112(r1)
	ctx.current_instruction = 0x881CBE14;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r6,r30,r23
	ctx.r6.u64 = ctx.r30.u64 + ctx.r23.u64;
	// stw r11,108(r1)
	ctx.current_instruction = 0x881CBE1C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lwz r3,116(r1)
	ctx.current_instruction = 0x881CBE24;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// stw r10,92(r1)
	ctx.current_instruction = 0x881CBE30;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// add r31,r28,r9
	ctx.r31.u64 = ctx.r28.u64 + ctx.r9.u64;
	// add r7,r6,r8
	ctx.r7.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stw r31,100(r1)
	ctx.current_instruction = 0x881CBE40;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r8,r20,1
	ctx.r8.s64 = ctx.r20.s64 + 1;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r9,84(r1)
	ctx.current_instruction = 0x881CBE4C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// add r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 + ctx.r3.u64;
	// bl 0x881ca338
	ctx.lr = 0x881CBE58;
	sub_881CA338(ctx, base);
loc_881CBE58:
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x881cbf38
	if (!ctx.cr6.eq) goto loc_881CBF38;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// lwz r7,436(r1)
	ctx.current_instruction = 0x881CBE68;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// srawi r10,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 1;
	// subfic r9,r16,1
	ctx.xer.ca = ctx.r16.u32 <= 1;
	ctx.r9.u64 = static_cast<uint64_t>(1) - ctx.r16.u64;
	// subf r29,r31,r16
	ctx.r29.u64 = ctx.r16.u64 - ctx.r31.u64;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r27,r9,r31
	ctx.r27.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r9,412(r1)
	ctx.current_instruction = 0x881CBE88;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// add r28,r8,r31
	ctx.r28.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r5,r27,r9
	ctx.r5.u64 = ctx.r27.u64 + ctx.r9.u64;
	// add r4,r28,r9
	ctx.r4.u64 = ctx.r28.u64 + ctx.r9.u64;
	// add r6,r31,r9
	ctx.r6.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r3,r31,r18
	ctx.r3.u64 = ctx.r31.u64 + ctx.r18.u64;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// blt cr6,0x881cbeb4
	if (ctx.cr6.lt) goto loc_881CBEB4;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_881CBEB4:
	// add r23,r11,r22
	ctx.r23.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stw r9,108(r1)
	ctx.current_instruction = 0x881CBEB8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r23,84(r1)
	ctx.current_instruction = 0x881CBEC8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// neg r26,r11
	ctx.r26.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// add r25,r10,r22
	ctx.r25.u64 = ctx.r10.u64 + ctx.r22.u64;
	// neg r24,r8
	ctx.r24.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// stw r25,100(r1)
	ctx.current_instruction = 0x881CBEDC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r24,92(r1)
	ctx.current_instruction = 0x881CBEE4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// bl 0x881ca338
	ctx.lr = 0x881CBEEC;
	sub_881CA338(ctx, base);
loc_881CBEEC:
	// lwz r10,468(r1)
	ctx.current_instruction = 0x881CBEEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r9,444(r1)
	ctx.current_instruction = 0x881CBEF0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// add r4,r28,r19
	ctx.r4.u64 = ctx.r28.u64 + ctx.r19.u64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r5,r27,r19
	ctx.r5.u64 = ctx.r27.u64 + ctx.r19.u64;
	// add r6,r31,r19
	ctx.r6.u64 = ctx.r31.u64 + ctx.r19.u64;
	// add r7,r31,r9
	ctx.r7.u64 = ctx.r31.u64 + ctx.r9.u64;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x881cbf14
	if (ctx.cr6.lt) goto loc_881CBF14;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_881CBF14:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r29,108(r1)
	ctx.current_instruction = 0x881CBF18;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// stw r25,100(r1)
	ctx.current_instruction = 0x881CBF20;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r24,92(r1)
	ctx.current_instruction = 0x881CBF24;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// stw r23,84(r1)
	ctx.current_instruction = 0x881CBF2C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x881ca338
	ctx.lr = 0x881CBF34;
	sub_881CA338(ctx, base);
loc_881CBF34:
	// lwz r23,404(r1)
	ctx.current_instruction = 0x881CBF34;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
loc_881CBF38:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
	// b 0x881cbd6c
	goto loc_881CBD6C;
loc_881CBF44:
	// subfic r27,r15,1
	ctx.xer.ca = ctx.r15.u32 <= 1;
	ctx.r27.u64 = static_cast<uint64_t>(1) - ctx.r15.u64;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bgt cr6,0x881cbf54
	if (ctx.cr6.gt) goto loc_881CBF54;
	// li r27,1
	ctx.r27.s64 = 1;
loc_881CBF54:
	// neg r21,r14
	ctx.r21.s64 = static_cast<int64_t>(-ctx.r14.u64);
	// lwz r14,404(r1)
	ctx.current_instruction = 0x881CBF58;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mullw r11,r27,r20
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r20.s32);
	// lwz r15,396(r1)
	ctx.current_instruction = 0x881CBF60;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// add r24,r11,r14
	ctx.r24.u64 = ctx.r11.u64 + ctx.r14.u64;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// subf r22,r27,r15
	ctx.r22.u64 = ctx.r15.u64 - ctx.r27.u64;
	// lfd f24,1488(r11)
	ctx.current_instruction = 0x881CBF74;
	ctx.fpscr.disableFlushMode();
	ctx.f24.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
loc_881CBF78:
	// cmpw cr6,r21,r15
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r15.s32, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// blt cr6,0x881cbf88
	if (ctx.cr6.lt) goto loc_881CBF88;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_881CBF88:
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881cc1b0
	if (!ctx.cr6.lt) goto loc_881CC1B0;
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// std r11,136(r1)
	ctx.current_instruction = 0x881CBF94;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.current_instruction = 0x881CBF98;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fadd f12,f13,f27
	ctx.f12.f64 = ctx.f13.f64 + ctx.f27.f64;
	// fsub f11,f12,f26
	ctx.f11.f64 = ctx.f12.f64 - ctx.f26.f64;
	// fmul f29,f11,f31
	ctx.f29.f64 = ctx.f11.f64 * ctx.f31.f64;
	// fdiv f1,f29,f30
	ctx.f1.f64 = ctx.f29.f64 / ctx.f30.f64;
	// bl 0x881f0340
	ctx.lr = 0x881CBFB4;
	sub_881F0340(ctx, base);
loc_881CBFB4:
	// fmsub f9,f1,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = std::fma(ctx.f1.f64, ctx.f30.f64, -ctx.f29.f64);
	// cmpw cr6,r20,r22
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r22.s32, ctx.xer);
	// fsub f10,f25,f1
	ctx.f10.f64 = ctx.f25.f64 - ctx.f1.f64;
	// fmadd f7,f9,f31,f28
	ctx.f7.f64 = std::fma(ctx.f9.f64, ctx.f31.f64, ctx.f28.f64);
	// fmsub f8,f10,f30,f29
	ctx.f8.f64 = std::fma(ctx.f10.f64, ctx.f30.f64, -ctx.f29.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,128(r1)
	ctx.current_instruction = 0x881CBFCC;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f5.u64);
	// fmadd f6,f8,f31,f28
	ctx.f6.f64 = std::fma(ctx.f8.f64, ctx.f31.f64, ctx.f28.f64);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// lwz r30,132(r1)
	ctx.current_instruction = 0x881CBFD8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stfd f4,128(r1)
	ctx.current_instruction = 0x881CBFDC;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f4.u64);
	// lwz r28,132(r1)
	ctx.current_instruction = 0x881CBFE0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mullw r10,r28,r20
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r20.s32);
	// mullw r11,r30,r20
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r20.s32);
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + ctx.r23.u64;
	// neg r31,r30
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r30.u64);
	// add r11,r10,r23
	ctx.r11.u64 = ctx.r10.u64 + ctx.r23.u64;
	// neg r29,r28
	ctx.r29.s64 = static_cast<int64_t>(-ctx.r28.u64);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r4,r10,r14
	ctx.r4.u64 = ctx.r10.u64 + ctx.r14.u64;
	// add r5,r11,r14
	ctx.r5.u64 = ctx.r11.u64 + ctx.r14.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// blt cr6,0x881cc018
	if (ctx.cr6.lt) goto loc_881CC018;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_881CC018:
	// stw r10,108(r1)
	ctx.current_instruction = 0x881CC018;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// neg r9,r29
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r29.u64);
	// subf r11,r27,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r27.u64;
	// lwz r7,112(r1)
	ctx.current_instruction = 0x881CC024;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// subf r10,r27,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r27.u64;
	// stw r9,92(r1)
	ctx.current_instruction = 0x881CC02C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// add r6,r11,r15
	ctx.r6.u64 = ctx.r11.u64 + ctx.r15.u64;
	// lwz r3,116(r1)
	ctx.current_instruction = 0x881CC034;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r9,r10,r15
	ctx.r9.u64 = ctx.r10.u64 + ctx.r15.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// stw r6,84(r1)
	ctx.current_instruction = 0x881CC040;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r8,r20,1
	ctx.r8.s64 = ctx.r20.s64 + 1;
	// stw r9,100(r1)
	ctx.current_instruction = 0x881CC048;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// neg r10,r31
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// add r7,r24,r7
	ctx.r7.u64 = ctx.r24.u64 + ctx.r7.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// add r3,r24,r3
	ctx.r3.u64 = ctx.r24.u64 + ctx.r3.u64;
	// bl 0x881ca338
	ctx.lr = 0x881CC060;
	sub_881CA338(ctx, base);
loc_881CC060:
	// clrlwi r5,r27,31
	ctx.r5.u64 = ctx.r27.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x881cc19c
	if (!ctx.cr6.eq) goto loc_881CC19C;
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// srawi r10,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 1;
	// srawi r7,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r31.s32 >> 1;
	// srawi r9,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 1;
	// mullw r10,r10,r16
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r16.s32);
	// mullw r9,r9,r16
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r16.s32);
	// srawi r8,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 1;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r16.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x881cc19c
	if (!ctx.cr6.gt) goto loc_881CC19C;
	// lwz r4,468(r1)
	ctx.current_instruction = 0x881CC0A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// subf r25,r31,r29
	ctx.r25.u64 = ctx.r29.u64 - ctx.r31.u64;
	// lwz r5,436(r1)
	ctx.current_instruction = 0x881CC0B0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// subf r29,r31,r27
	ctx.r29.u64 = ctx.r27.u64 - ctx.r31.u64;
	// lwz r6,444(r1)
	ctx.current_instruction = 0x881CC0BC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// subf r31,r19,r5
	ctx.r31.u64 = ctx.r5.u64 - ctx.r19.u64;
	// lwz r7,412(r1)
	ctx.current_instruction = 0x881CC0C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// subf r28,r30,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r30.u64;
	// stw r4,128(r1)
	ctx.current_instruction = 0x881CC0CC;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// subf r4,r19,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r19.u64;
	// lwz r5,128(r1)
	ctx.current_instruction = 0x881CC0D4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// stw r6,120(r1)
	ctx.current_instruction = 0x881CC0DC;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// add r6,r30,r27
	ctx.r6.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwz r7,120(r1)
	ctx.current_instruction = 0x881CC0E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r30,r18,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r18.u64;
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + ctx.r19.u64;
	// add r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 + ctx.r19.u64;
	// subf r3,r18,r19
	ctx.r3.u64 = ctx.r19.u64 - ctx.r18.u64;
	// subf r7,r18,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r18.u64;
loc_881CC0FC:
	// add r5,r29,r8
	ctx.r5.u64 = ctx.r29.u64 + ctx.r8.u64;
	// cmpw cr6,r5,r15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x881cc19c
	if (!ctx.cr6.lt) goto loc_881CC19C;
	// add. r5,r25,r8
	ctx.r5.u64 = ctx.r25.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x881cc12c
	if (ctx.cr0.lt) goto loc_881CC12C;
	// add r5,r28,r6
	ctx.r5.u64 = ctx.r28.u64 + ctx.r6.u64;
	// cmpw cr6,r5,r15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x881cc12c
	if (!ctx.cr6.lt) goto loc_881CC12C;
	// lbzx r5,r4,r9
	ctx.current_instruction = 0x881CC11C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// stb r5,0(r11)
	ctx.current_instruction = 0x881CC120;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// lbz r5,0(r9)
	ctx.current_instruction = 0x881CC124;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// b 0x881cc178
	goto loc_881CC178;
loc_881CC12C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x881cc168
	if (ctx.cr6.lt) goto loc_881CC168;
	// cmpw cr6,r6,r15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x881cc168
	if (!ctx.cr6.lt) goto loc_881CC168;
	// fcmpu cr6,f29,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f24.f64);
	// blt cr6,0x881cc154
	if (ctx.cr6.lt) goto loc_881CC154;
	// lbzx r5,r4,r10
	ctx.current_instruction = 0x881CC144;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// stb r5,0(r11)
	ctx.current_instruction = 0x881CC148;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// lbz r5,0(r10)
	ctx.current_instruction = 0x881CC14C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// b 0x881cc178
	goto loc_881CC178;
loc_881CC154:
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbzx r5,r5,r4
	ctx.current_instruction = 0x881CC158;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// stb r5,0(r11)
	ctx.current_instruction = 0x881CC15C;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// lbzx r5,r3,r11
	ctx.current_instruction = 0x881CC160;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// b 0x881cc178
	goto loc_881CC178;
loc_881CC168:
	// add r5,r3,r31
	ctx.r5.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbzx r5,r5,r11
	ctx.current_instruction = 0x881CC16C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r5,0(r11)
	ctx.current_instruction = 0x881CC170;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// lbzx r5,r30,r11
	ctx.current_instruction = 0x881CC174;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
loc_881CC178:
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// stbx r5,r7,r11
	ctx.current_instruction = 0x881CC17C;
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u8);
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + ctx.r17.u64;
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + ctx.r17.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// cmpw cr6,r26,r20
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x881cc0fc
	if (ctx.cr6.lt) goto loc_881CC0FC;
loc_881CC19C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r23,r23,r20
	ctx.r23.u64 = ctx.r23.u64 + ctx.r20.u64;
	// add r24,r24,r20
	ctx.r24.u64 = ctx.r24.u64 + ctx.r20.u64;
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
	// b 0x881cbf78
	goto loc_881CBF78;
loc_881CC1B0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2c4
	ctx.lr = 0x881CC1BC;
	__restfpr_24(ctx, base);
loc_881CC1BC:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DE698) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DE698;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DE698) {
			switch (rex_dispatch_address) {
				case 0x881DE6A0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DE698;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881DE6A0: goto loc_881DE6A0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x881DE6A0;
	__savegprlr_23(ctx, base);
loc_881DE6A0:
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// lis r31,0
	ctx.r31.s64 = 0;
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r30.s64 = temp.s64;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// ori r31,r31,32768
	ctx.r31.u64 = ctx.r31.u64 | 32768;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// subf r27,r31,r8
	ctx.r27.u64 = ctx.r8.u64 - ctx.r31.u64;
	// subf r29,r31,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r31.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpw cr6,r27,r31
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x881de760
	if (!ctx.cr6.gt) goto loc_881DE760;
	// lwz r7,84(r1)
	ctx.current_instruction = 0x881DE6DC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_881DE6E0:
	// sraw r11,r28,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r28.s32 < 0) & (((ctx.r28.s32 >> temp.u32) << temp.u32) != ctx.r28.s32);
	ctx.r11.s64 = ctx.r28.s32 >> temp.u32;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x881de750
	if (!ctx.cr6.gt) goto loc_881DE750;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
loc_881DE6FC:
	// sraw r26,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r26.s64 = ctx.r11.s32 >> temp.u32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r26,r26,r8
	ctx.current_instruction = 0x881DE704;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r8.u32);
	// sraw r25,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r25.s64 = ctx.r11.s32 >> temp.u32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r25,r25,r8
	ctx.current_instruction = 0x881DE710;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r8.u32);
	// rotlwi r26,r26,24
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 24);
	// sraw r24,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r24.s64 = ctx.r11.s32 >> temp.u32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r24,r24,r8
	ctx.current_instruction = 0x881DE720;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r8.u32);
	// rotlwi r25,r25,16
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r25.u32, 16);
	// sraw r23,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r23.s64 = ctx.r11.s32 >> temp.u32;
	// or r26,r25,r26
	ctx.r26.u64 = ctx.r25.u64 | ctx.r26.u64;
	// lbzx r25,r23,r8
	ctx.current_instruction = 0x881DE730;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r8.u32);
	// rotlwi r24,r24,8
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r24.u32, 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// or r26,r24,r26
	ctx.r26.u64 = ctx.r24.u64 | ctx.r26.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// or r26,r25,r26
	ctx.r26.u64 = ctx.r25.u64 | ctx.r26.u64;
	// stwu r26,-4(r30)
	ctx.current_instruction = 0x881DE748;
	ea = -4 + ctx.r30.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r30.u32 = ea;
	// blt cr6,0x881de6fc
	if (ctx.cr6.lt) goto loc_881DE6FC;
loc_881DE750:
	// add r28,r28,r10
	ctx.r28.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x881de6e0
	if (ctx.cr6.lt) goto loc_881DE6E0;
loc_881DE760:
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E0568) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E0568;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E0568) {
			switch (rex_dispatch_address) {
				case 0x881E0570:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E0568;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x881E0570: goto loc_881E0570;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x881E0570;
	__savegprlr_15(ctx, base);
loc_881E0570:
	// lwz r31,108(r1)
	ctx.current_instruction = 0x881E0570;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// srawi r11,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 31;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// xor r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// subf r11,r11,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x881e0590
	if (ctx.cr6.eq) goto loc_881E0590;
	// srawi r21,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r31.s32 >> 1;
loc_881E0590:
	// lwz r17,100(r1)
	ctx.current_instruction = 0x881E0590;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// srawi r30,r17,1
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r17.s32 >> 1;
	// srawi r20,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r20.s64 = ctx.r7.s32 >> 1;
	// srawi. r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x881e0610
	if (!ctx.cr0.gt) goto loc_881E0610;
	// lwz r19,132(r1)
	ctx.current_instruction = 0x881E05A4;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r22,124(r1)
	ctx.current_instruction = 0x881E05AC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
loc_881E05B8:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x881e0600
	if (!ctx.cr6.gt) goto loc_881E0600;
	// add r24,r26,r6
	ctx.r24.u64 = ctx.r26.u64 + ctx.r6.u64;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// add r23,r25,r19
	ctx.r23.u64 = ctx.r25.u64 + ctx.r19.u64;
	// add r28,r26,r11
	ctx.r28.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r27,r25,r29
	ctx.r27.u64 = ctx.r25.u64 + ctx.r29.u64;
loc_881E05DC:
	// lbzx r16,r28,r5
	ctx.current_instruction = 0x881E05DC;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r5.u32);
	// lbzx r15,r24,r11
	ctx.current_instruction = 0x881E05E0;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r28,r26,r11
	ctx.r28.u64 = ctx.r26.u64 + ctx.r11.u64;
	// stbx r16,r27,r22
	ctx.current_instruction = 0x881E05EC;
	REX_STORE_U8(ctx.r27.u32 + ctx.r22.u32, ctx.r16.u8);
	// stbx r15,r23,r29
	ctx.current_instruction = 0x881E05F0;
	REX_STORE_U8(ctx.r23.u32 + ctx.r29.u32, ctx.r15.u8);
	// add r29,r29,r21
	ctx.r29.u64 = ctx.r29.u64 + ctx.r21.u64;
	// add r27,r25,r29
	ctx.r27.u64 = ctx.r25.u64 + ctx.r29.u64;
	// bdnz 0x881e05dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E05DC;
loc_881E0600:
	// addic. r18,r18,-1
	ctx.xer.ca = ctx.r18.u32 > 0;
	ctx.r18.s64 = ctx.r18.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// add r26,r26,r10
	ctx.r26.u64 = ctx.r26.u64 + ctx.r10.u64;
	// add r25,r25,r30
	ctx.r25.u64 = ctx.r25.u64 + ctx.r30.u64;
	// bne 0x881e05b8
	if (!ctx.cr0.eq) goto loc_881E05B8;
loc_881E0610:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x881e082c
	if (!ctx.cr6.gt) goto loc_881E082C;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r7,-16
	ctx.r29.s64 = ctx.r7.s64 + -16;
	// rlwinm r27,r17,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r9,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// subf r3,r9,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r9.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_881E063C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x881e07e0
	if (!ctx.cr6.gt) goto loc_881E07E0;
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r8,r10,r17
	ctx.r8.u64 = ctx.r10.u64 + ctx.r17.u64;
loc_881E0654:
	// add r11,r30,r4
	ctx.r11.u64 = ctx.r30.u64 + ctx.r4.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0658;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E065C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0664;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0668;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0670;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E0674;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E067C;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0680;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0688;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E068C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0694;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0698;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E06A0;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E06A4;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E06AC;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E06B0;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E06B8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E06BC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E06C4;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E06C8;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E06D0;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E06D4;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E06DC;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E06E0;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E06E8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E06EC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E06F4;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E06F8;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0700;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E0704;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E070C;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0710;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0718;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E071C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0724;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0728;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0730;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E0734;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E073C;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0740;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0748;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E074C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0754;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0758;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0760;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E0764;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E076C;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0770;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0778;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E077C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0784;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0788;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E0790;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E0794;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// lbzx r25,r11,r6
	ctx.current_instruction = 0x881E0798;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r8,r5
	ctx.current_instruction = 0x881E07A0;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r25.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E07A8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	ctx.current_instruction = 0x881E07AC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E07B4;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E07B8;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E07C0;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r11,r11,r6
	ctx.current_instruction = 0x881E07C4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E07D0;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r11,r8,r5
	ctx.current_instruction = 0x881E07D4;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r11.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// blt cr6,0x881e0654
	if (ctx.cr6.lt) goto loc_881E0654;
loc_881E07E0:
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881e081c
	if (!ctx.cr6.lt) goto loc_881E081C;
	// subf r25,r6,r7
	ctx.r25.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r8,r10,r17
	ctx.r8.u64 = ctx.r10.u64 + ctx.r17.u64;
	// add r11,r30,r6
	ctx.r11.u64 = ctx.r30.u64 + ctx.r6.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_881E07FC:
	// lbzx r25,r9,r6
	ctx.current_instruction = 0x881E07FC;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lbzx r24,r11,r4
	ctx.current_instruction = 0x881E0804;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// add r11,r30,r6
	ctx.r11.u64 = ctx.r30.u64 + ctx.r6.u64;
	// stbx r25,r10,r5
	ctx.current_instruction = 0x881E080C;
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r25.u8);
	// stbx r24,r8,r5
	ctx.current_instruction = 0x881E0810;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// bdnz 0x881e07fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E07FC;
loc_881E081C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r30,r26,r30
	ctx.r30.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// bne 0x881e063c
	if (!ctx.cr0.eq) goto loc_881E063C;
loc_881E082C:
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E8EE0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E8EE0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E8EE0) {
			switch (rex_dispatch_address) {
				case 0x881E8F04:
				case 0x881E8F20:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E8EE0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E8F04: goto loc_881E8F04;
		case 0x881E8F20: goto loc_881E8F20;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881E8EE4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881E8EE8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881E8EEC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-30678
	ctx.r31.s64 = -2010513408;
	// lwz r3,24020(r31)
	ctx.current_instruction = 0x881E8EF4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24020);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881e8f0c
	if (ctx.cr6.eq) goto loc_881E8F0C;
	// bl 0x881e9c80
	ctx.lr = 0x881E8F04;
	sub_881E9C80(ctx, base);
loc_881E8F04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24020(r31)
	ctx.current_instruction = 0x881E8F08;
	REX_STORE_U32(ctx.r31.u32 + 24020, ctx.r11.u32);
loc_881E8F0C:
	// lis r31,-30678
	ctx.r31.s64 = -2010513408;
	// lwz r3,24016(r31)
	ctx.current_instruction = 0x881E8F10;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881e8f28
	if (ctx.cr6.eq) goto loc_881E8F28;
	// bl 0x881e9c80
	ctx.lr = 0x881E8F20;
	sub_881E9C80(ctx, base);
loc_881E8F20:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24016(r31)
	ctx.current_instruction = 0x881E8F24;
	REX_STORE_U32(ctx.r31.u32 + 24016, ctx.r11.u32);
loc_881E8F28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881E8F2C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881E8F34;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881E9338) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E9338;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E9338) {
			switch (rex_dispatch_address) {
				case 0x881E9340:
				case 0x881E93E4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E9338;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E9340: goto loc_881E9340;
		case 0x881E93E4: goto loc_881E93E4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881E9340;
	__savegprlr_28(ctx, base);
loc_881E9340:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881E9340;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.current_instruction = 0x881E9344;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r28,r3,56
	ctx.r28.s64 = ctx.r3.s64 + 56;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881e93dc
	if (ctx.cr6.eq) goto loc_881E93DC;
	// li r8,0
	ctx.r8.s64 = 0;
loc_881E9364:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x881E9364;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x881e9424
	if (ctx.cr6.gt) goto loc_881E9424;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x881E9370;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x881e93cc
	if (!ctx.cr6.eq) goto loc_881E93CC;
	// lwz r7,0(r11)
	ctx.current_instruction = 0x881E9380;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r7,0(r28)
	ctx.current_instruction = 0x881E938C;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// lwz r10,24(r31)
	ctx.current_instruction = 0x881E9390;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,76(r10)
	ctx.current_instruction = 0x881E9394;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// stw r10,0(r11)
	ctx.current_instruction = 0x881E9398;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r31)
	ctx.current_instruction = 0x881E939C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,76(r10)
	ctx.current_instruction = 0x881E93A0;
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// stw r8,4(r11)
	ctx.current_instruction = 0x881E93A4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r8,8(r11)
	ctx.current_instruction = 0x881E93A8;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r10,28(r31)
	ctx.current_instruction = 0x881E93AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,52(r31)
	ctx.current_instruction = 0x881E93B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// stw r11,52(r31)
	ctx.current_instruction = 0x881E93BC;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// ble cr6,0x881e93d0
	if (!ctx.cr6.gt) goto loc_881E93D0;
	// stw r30,28(r31)
	ctx.current_instruction = 0x881E93C4;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// b 0x881e93d0
	goto loc_881E93D0;
loc_881E93CC:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_881E93D0:
	// lwz r11,0(r28)
	ctx.current_instruction = 0x881E93D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881e9364
	if (!ctx.cr6.eq) goto loc_881E9364;
loc_881E93DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881e9160
	ctx.lr = 0x881E93E4;
	sub_881E9160(ctx, base);
loc_881E93E4:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x881e941c
	if (ctx.cr0.eq) goto loc_881E941C;
	// stw r30,8(r3)
	ctx.current_instruction = 0x881E93EC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r29,4(r3)
	ctx.current_instruction = 0x881E93F0;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// lwz r11,0(r28)
	ctx.current_instruction = 0x881E93F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,0(r3)
	ctx.current_instruction = 0x881E93F8;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,0(r28)
	ctx.current_instruction = 0x881E93FC;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// lwz r10,28(r31)
	ctx.current_instruction = 0x881E9400;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,52(r31)
	ctx.current_instruction = 0x881E9404;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// stw r11,52(r31)
	ctx.current_instruction = 0x881E9410;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// blt cr6,0x881e941c
	if (ctx.cr6.lt) goto loc_881E941C;
	// stw r30,28(r31)
	ctx.current_instruction = 0x881E9418;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_881E941C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_881E9424:
	// add r9,r29,r30
	ctx.r9.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881e93dc
	if (!ctx.cr6.eq) goto loc_881E93DC;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x881E9430;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r29,4(r11)
	ctx.current_instruction = 0x881E9434;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	ctx.current_instruction = 0x881E943C;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.current_instruction = 0x881E9440;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881e941c
	if (!ctx.cr6.gt) goto loc_881E941C;
	// stw r10,28(r31)
	ctx.current_instruction = 0x881E944C;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// b 0x881e941c
	goto loc_881E941C;
}

DEFINE_REX_FUNC(sub_881EB948) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EB948;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EB948) {
			switch (rex_dispatch_address) {
				case 0x881EB974:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EB948;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EB974: goto loc_881EB974;
		default: break;
	}
	// std r31,-8(r1)
	ctx.current_instruction = 0x881EB948;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r28,-16(r1)
	ctx.current_instruction = 0x881EB950;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// std r22,-24(r1)
	ctx.current_instruction = 0x881EB954;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r22.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	ctx.current_instruction = 0x881EB95C;
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881EB960;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x881eb974
	if (ctx.cr6.eq) goto loc_881EB974;
	// lwz r3,1408(r28)
	ctx.current_instruction = 0x881EB96C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 1408);
	// bl 0x88243660
	ctx.lr = 0x881EB974;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_881EB974:
	// lwz r1,0(r1)
	ctx.current_instruction = 0x881EB974;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881EB978;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.current_instruction = 0x881EB97C;
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r22,-24(r1)
	ctx.current_instruction = 0x881EB980;
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.current_instruction = 0x881EB984;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EC53C) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EC53C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EC53C;
	ctx.current_instruction = 0x881EC53C;
	PPCRegister temp{};
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.current_instruction = 0x881EC544;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.current_instruction = 0x881EC548;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EC648) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EC648);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EC648;
	ctx.current_instruction = 0x881EC648;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,24028(r10)
	ctx.current_instruction = 0x881EC650;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 24028);
	// stw r11,24028(r10)
	ctx.current_instruction = 0x881EC654;
	REX_STORE_U32(ctx.r10.u32 + 24028, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EC8D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EC8D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EC8D0) {
			switch (rex_dispatch_address) {
				case 0x881EC8E8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EC8D0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EC8E8: goto loc_881EC8E8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881EC8D4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881EC8D8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881EC8DC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88243830
	ctx.lr = 0x881EC8E8;
	__imp__KeQueryPerformanceFrequency(ctx, base);
loc_881EC8E8:
	// std r3,0(r31)
	ctx.current_instruction = 0x881EC8E8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881EC8F4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881EC8FC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881ECE40) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881ECE40;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881ECE40) {
			switch (rex_dispatch_address) {
				case 0x881ECE54:
				case 0x881ECE68:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ECE40;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881ECE54: goto loc_881ECE54;
		case 0x881ECE68: goto loc_881ECE68;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881ECE44;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881ECE48;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88243860
	ctx.lr = 0x881ECE54;
	__imp__NtSetEvent(ctx, base);
loc_881ECE54:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x881ece64
	if (ctx.cr0.lt) goto loc_881ECE64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x881ece6c
	goto loc_881ECE6C;
loc_881ECE64:
	// bl 0x881ed488
	ctx.lr = 0x881ECE68;
	sub_881ED488(ctx, base);
loc_881ECE68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_881ECE6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881ECE70;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881ED3D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881ED3D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881ED3D0) {
			switch (rex_dispatch_address) {
				case 0x881ED444:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ED3D0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881ED444: goto loc_881ED444;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881ED3D4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881ED3D8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881ED3DC;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r31,-30678
	ctx.r31.s64 = -2010513408;
	// lwz r11,1216(r11)
	ctx.current_instruction = 0x881ED3E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1216);
	// lwz r11,0(r11)
	ctx.current_instruction = 0x881ED3EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ed44c
	if (ctx.cr0.eq) goto loc_881ED44C;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881ED408:
	// stdu r9,8(r11)
	ctx.current_instruction = 0x881ED408;
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x881ed408
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881ED408;
	// lwz r3,24016(r31)
	ctx.current_instruction = 0x881ED410;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24016);
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,80(r1)
	ctx.current_instruction = 0x881ED418;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881ed450
	if (!ctx.cr6.eq) goto loc_881ED450;
	// lis r3,12
	ctx.r3.s64 = 786432;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,4098
	ctx.r3.u64 = ctx.r3.u64 | 4098;
	// bl 0x881eaad0
	ctx.lr = 0x881ED444;
	sub_881EAAD0(ctx, base);
loc_881ED444:
	// stw r3,24016(r31)
	ctx.current_instruction = 0x881ED444;
	REX_STORE_U32(ctx.r31.u32 + 24016, ctx.r3.u32);
	// b 0x881ed450
	goto loc_881ED450;
loc_881ED44C:
	// lwz r3,24016(r31)
	ctx.current_instruction = 0x881ED44C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24016);
loc_881ED450:
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881ED460;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881ED468;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EE81C) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EE81C;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EE81C) {
			switch (rex_dispatch_address) {
				case 0x881EE82C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EE81C;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EE82C: goto loc_881EE82C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881EE820;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881EE824;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x881ec718
	ctx.lr = 0x881EE82C;
	sub_881EC718(ctx, base);
loc_881EE82C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.current_instruction = 0x881EE830;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881EE834;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EE930) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EE930);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EE930;
	ctx.current_instruction = 0x881EE930;
	// cntlzd r5,r3
	ctx.r5.u64 = ctx.r3.u64 == 0 ? 64 : __builtin_clzll(ctx.r3.u64);
	// sld r3,r3,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r3.u64 << (ctx.r5.u8 & 0x7F));
	// cmpdi r3,0
	ctx.cr0.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// beq 0x881ee94c
	if (ctx.cr0.eq) goto loc_881EE94C;
	// subfic r5,r5,1086
	ctx.xer.ca = ctx.r5.u32 <= 1086;
	ctx.r5.u64 = static_cast<uint64_t>(1086) - ctx.r5.u64;
	// rldicl r3,r3,53,12
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 53) & 0xFFFFFFFFFFFFF;
	// rldimi r3,r5,52,1
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r5.u64, 52) & 0x7FF0000000000000) | (ctx.r3.u64 & 0x800FFFFFFFFFFFFF);
loc_881EE94C:
	// std r3,-8(r1)
	ctx.current_instruction = 0x881EE94C;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r3.u64);
	// lfd f1,-8(r1)
	ctx.current_instruction = 0x881EE950;
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EEAD8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EEAD8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EEAD8) {
			switch (rex_dispatch_address) {
				case 0x881EEB04:
				case 0x881EEB14:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEAD8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EEB04: goto loc_881EEB04;
		case 0x881EEB14: goto loc_881EEB14;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881EEADC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881EEAE0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881EEAE4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881EEAE8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30715
	ctx.r11.s64 = -2012938240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30736
	ctx.r11.s64 = ctx.r11.s64 + -30736;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881EEAFC;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x881eea70
	ctx.lr = 0x881EEB04;
	sub_881EEA70(ctx, base);
loc_881EEB04:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881eeb14
	if (ctx.cr0.eq) goto loc_881EEB14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881ee958
	ctx.lr = 0x881EEB14;
	sub_881EE958(ctx, base);
loc_881EEB14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881EEB1C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881EEB24;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881EEB28;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(__savevmx_19) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EED08);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EED08;
	ctx.current_instruction = 0x881EED08;
	uint32_t ea{};
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx v19,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx v20,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx v21,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx v22,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx v23,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx v25,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx v26,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx v27,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(__savevmx_64) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EED74);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EED74;
	ctx.current_instruction = 0x881EED74;
	uint32_t ea{};
	// li r11,-1024
	ctx.r11.s64 = -1024;
	// stvx128 v64,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v64.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-1008
	ctx.r11.s64 = -1008;
	// stvx128 v65,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v65.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-992
	ctx.r11.s64 = -992;
	// stvx128 v66,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v66.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-976
	ctx.r11.s64 = -976;
	// stvx128 v67,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v67.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-960
	ctx.r11.s64 = -960;
	// stvx128 v68,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v68.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-944
	ctx.r11.s64 = -944;
	// stvx128 v69,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v69.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-928
	ctx.r11.s64 = -928;
	// stvx128 v70,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v70.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-912
	ctx.r11.s64 = -912;
	// stvx128 v71,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v71.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-896
	ctx.r11.s64 = -896;
	// stvx128 v72,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v72.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-880
	ctx.r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v73.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-864
	ctx.r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v74.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-848
	ctx.r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v75.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-832
	ctx.r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v76.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-816
	ctx.r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v77.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v78.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v79.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v80.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v81.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v82.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v83.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v84.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v85.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v86.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v87.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v88.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v89.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v90.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v91.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v92.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v93.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v94.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v95.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v96.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v97.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v98.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v99.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v100.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v101.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v102.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v103.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v104.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v105.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v106.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v107.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v108.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v109.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v110.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v111.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v112.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v113.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v114.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v115.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v116.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v117.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v118.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__savevmx_111) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEEEC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEEEC;
	ctx.current_instruction = 0x881EEEEC;
	uint32_t ea{};
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v111.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v112.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v113.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v114.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v115.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v116.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v117.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v118.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__savevmx_117) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEF1C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEF1C;
	ctx.current_instruction = 0x881EEF1C;
	uint32_t ea{};
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v117.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v118.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_77) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF074);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF074;
	ctx.current_instruction = 0x881EF074;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_117) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF1B4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF1B4;
	ctx.current_instruction = 0x881EF1B4;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savefpr_29) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF28C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EF28C;
	ctx.current_instruction = 0x881EF28C;
	// stfd f29,-24(r12)
	ctx.current_instruction = 0x881EF28C;
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(__restfpr_19) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF2B0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF2B0;
	ctx.current_instruction = 0x881EF2B0;
	// lfd f19,-104(r12)
	ctx.current_instruction = 0x881EF2B0;
	ctx.fpscr.disableFlushMode();
	ctx.f19.u64 = REX_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.current_instruction = 0x881EF2B4;
	ctx.f20.u64 = REX_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.current_instruction = 0x881EF2B8;
	ctx.f21.u64 = REX_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.current_instruction = 0x881EF2BC;
	ctx.f22.u64 = REX_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.current_instruction = 0x881EF2C0;
	ctx.f23.u64 = REX_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.current_instruction = 0x881EF2C4;
	ctx.f24.u64 = REX_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.current_instruction = 0x881EF2C8;
	ctx.f25.u64 = REX_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.current_instruction = 0x881EF2CC;
	ctx.f26.u64 = REX_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.current_instruction = 0x881EF2D0;
	ctx.f27.u64 = REX_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.current_instruction = 0x881EF2D4;
	ctx.f28.u64 = REX_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.current_instruction = 0x881EF2D8;
	ctx.f29.u64 = REX_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.current_instruction = 0x881EF2DC;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.current_instruction = 0x881EF2E0;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F06F4) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F06F4;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F06F4) {
			switch (rex_dispatch_address) {
				case 0x881F0704:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F06F4;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F0704: goto loc_881F0704;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881F06F8;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881F06FC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x88050cd8
	ctx.lr = 0x881F0704;
	sub_88050CD8(ctx, base);
loc_881F0704:
	// lwz r1,0(r1)
	ctx.current_instruction = 0x881F0704;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881F0708;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F0F88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F0F88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F0F88) {
			switch (rex_dispatch_address) {
				case 0x881F0F90:
				case 0x881F0FCC:
				case 0x881F0FD8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F0F88;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F0F90: goto loc_881F0F90;
		case 0x881F0FCC: goto loc_881F0FCC;
		case 0x881F0FD8: goto loc_881F0FD8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881F0F90;
	__savegprlr_28(ctx, base);
loc_881F0F90:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881F0F90;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.current_instruction = 0x881F0F94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x881f1000
	if (!ctx.cr6.eq) goto loc_881F1000;
	// andi. r11,r11,264
	ctx.r11.u64 = ctx.r11.u64 & 264;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f1000
	if (ctx.cr0.eq) goto loc_881F1000;
	// lwz r29,8(r3)
	ctx.current_instruction = 0x881F0FB8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x881F0FBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subf. r30,r29,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x881f1000
	if (!ctx.cr0.gt) goto loc_881F1000;
	// bl 0x881f1308
	ctx.lr = 0x881F0FCC;
	sub_881F1308(ctx, base);
loc_881F0FCC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x881f1590
	ctx.lr = 0x881F0FD8;
	sub_881F1590(ctx, base);
loc_881F0FD8:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881F0FD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x881f0ff4
	if (!ctx.cr6.eq) goto loc_881F0FF4;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881f1000
	if (ctx.cr0.eq) goto loc_881F1000;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// b 0x881f0ffc
	goto loc_881F0FFC;
loc_881F0FF4:
	// li r28,-1
	ctx.r28.s64 = -1;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_881F0FFC:
	// stw r11,12(r31)
	ctx.current_instruction = 0x881F0FFC;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_881F1000:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x881F1000;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,4(r31)
	ctx.current_instruction = 0x881F100C;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	ctx.current_instruction = 0x881F1010;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881F4F60) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881F4F60);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F4F60;
	ctx.current_instruction = 0x881F4F60;
	uint32_t ea{};
	// std r31,-8(r1)
	ctx.current_instruction = 0x881F4F60;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r10,52(r4)
	ctx.current_instruction = 0x881F4F64;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lhz r9,50(r4)
	ctx.current_instruction = 0x881F4F6C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r10,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r9,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,1316(r11)
	ctx.current_instruction = 0x881F4F80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1316);
	// beq cr6,0x881f501c
	if (ctx.cr6.eq) goto loc_881F501C;
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,11272
	ctx.r7.s64 = ctx.r10.s64 + 11272;
loc_881F4F94:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881f5010
	if (ctx.cr6.eq) goto loc_881F5010;
	// cntlzw r9,r5
	ctx.r9.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r8,r9,28,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x2;
loc_881F4FAC:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r12,3855
	ctx.r12.s64 = 3855;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// oris r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 252641280;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ldx r3,r9,r7
	ctx.current_instruction = 0x881F4FD0;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r7.u32);
	// and r9,r3,r12
	ctx.r9.u64 = ctx.r3.u64 & ctx.r12.u64;
	// rldicl r3,r9,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r9,1(r11)
	ctx.current_instruction = 0x881F4FDC;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// rldicl r31,r3,56,8
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r3,2(r11)
	ctx.current_instruction = 0x881F4FE4;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// rldicl r9,r31,56,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r31,3(r11)
	ctx.current_instruction = 0x881F4FEC;
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r31.u8);
	// rldicl r3,r9,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r9,4(r11)
	ctx.current_instruction = 0x881F4FF4;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// rldicl r31,r3,56,8
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// stb r3,5(r11)
	ctx.current_instruction = 0x881F5004;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r3.u8);
	// stbu r9,6(r11)
	ctx.current_instruction = 0x881F5008;
	ea = 6 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x881f4fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F4FAC;
loc_881F5010:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x881f4f94
	if (ctx.cr6.lt) goto loc_881F4F94;
loc_881F501C:
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881F501C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88202630) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88202630);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88202630;
	ctx.current_instruction = 0x88202630;
	// lwz r7,1368(r3)
	ctx.current_instruction = 0x88202630;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r10,256
	ctx.r9.s64 = ctx.r10.s64 + 256;
	// subfic r4,r5,1
	ctx.xer.ca = ctx.r5.u32 <= 1;
	ctx.r4.u64 = static_cast<uint64_t>(1) - ctx.r5.u64;
	// srawi r6,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 17;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r3,r9,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r5,r6,64
	ctx.r5.s64 = ctx.r6.s64 + 64;
	// or r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 | ctx.r5.u64;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x88202720
	if (ctx.cr6.lt) goto loc_88202720;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// blt cr6,0x882026a8
	if (ctx.cr6.lt) goto loc_882026A8;
	// lhz r8,62(r11)
	ctx.current_instruction = 0x8820266C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 62);
	// neg r3,r8
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// subf r7,r3,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r3.u64;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// srawi r7,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 31;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// andc r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// or r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 | ctx.r7.u64;
	// or r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 | ctx.r10.u64;
	// b 0x882026b8
	goto loc_882026B8;
loc_882026A8:
	// lwz r10,1476(r11)
	ctx.current_instruction = 0x882026A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1476);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r9
	ctx.current_instruction = 0x882026B0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
loc_882026B8:
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// blt cr6,0x88202708
	if (ctx.cr6.lt) goto loc_88202708;
	// lhz r9,64(r11)
	ctx.current_instruction = 0x882026C0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r10,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r9.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r6,r9,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r9.u64;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// srawi r8,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 31;
	// srawi r7,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 31;
	// and r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 & ctx.r11.u64;
	// or r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// andc r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 | ctx.r4.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88202708:
	// lwz r11,1472(r11)
	ctx.current_instruction = 0x88202708;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1472);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r10
	ctx.current_instruction = 0x88202710;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88202720:
	// lwz r10,1476(r11)
	ctx.current_instruction = 0x88202720;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1476);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1472(r11)
	ctx.current_instruction = 0x88202728;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1472);
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r10,r9
	ctx.current_instruction = 0x88202730;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// lhzx r5,r8,r7
	ctx.current_instruction = 0x88202734;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88214F38) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88214F38;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88214F38) {
			switch (rex_dispatch_address) {
				case 0x88214F68:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88214F38;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88214F68: goto loc_88214F68;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88214F3C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88214F40;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88214F44;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_88214F4C:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x88214F4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88214F50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88214f84
	if (ctx.cr6.lt) goto loc_88214F84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x88214F68;
	sub_88156440(ctx, base);
loc_88214F68:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x88214f4c
	if (ctx.cr6.eq) goto loc_88214F4C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88214F74;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88214F7C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88214F84:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x88214F84;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x88214F8C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x88214F94;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x88214F98;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x88214FA0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x88214FA4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88214FAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x88214FB0;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88214FB8;
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
	ctx.current_instruction = 0x88214FD4;
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
	ctx.current_instruction = 0x88214FEC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88214FF4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88214FFC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88217CC0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88217CC0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88217CC0;
	ctx.current_instruction = 0x88217CC0;
	uint32_t ea{};
	// li r12,64
	ctx.r12.s64 = 64;
	// vspltish v30,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_set1_epi16(short(0x2)));
	// li r9,16
	ctx.r9.s64 = 16;
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// li r7,112
	ctx.r7.s64 = 112;
	// vspltish v31,4
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v29,1
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_set1_epi16(short(0x1)));
	// lvx v1,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v1,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx v2,r12,r3
	ea = (ctx.r12.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx v5,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx v6,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v12,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// li r6,80
	ctx.r6.s64 = 80;
	// vslh v26,v5,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx v8,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v11,v5,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r10,32
	ctx.r10.s64 = 32;
	// vaddshs v2,v2,v24
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// li r8,96
	ctx.r8.s64 = 96;
	// vslh v24,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v28,0
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_set1_epi16(short(0x0)));
	// vslh v10,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx v7,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v11,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v1,v1,v25
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// lvx v4,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubuhm v9,v24,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvx v3,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v5,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v6,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v11,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v9,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v12,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v26,v7,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vslh v27,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v10,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubuhm v6,v6,v24
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vslh v9,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v8,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vslh v25,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubuhm v24,v9,v24
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vaddshs v26,v9,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vslh v27,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v14,v69,v69
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_load_si128((simde__m128i*)ctx.v69.u8));
	// vsubuhm v24,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vsubuhm v10,v10,v26
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vslh v26,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v7,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v11,v24
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vslh v24,v7,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v26,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v26,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v15,v72,v72
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_load_si128((simde__m128i*)ctx.v72.u8));
	// vaddshs v24,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vslh v25,v4,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v26,v9,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vsubuhm v24,v9,v24
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vaddshs v9,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubuhm v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vor v2,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vaddshs v5,v5,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vslh v24,v4,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v26,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vslh v3,v3,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vaddshs v6,v6,v26
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubuhm v3,v24,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vslh v26,v2,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v4,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vaddshs v4,v26,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v8,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubuhm v9,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v4,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubuhm v1,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vaddshs v24,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v27,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vaddshs v25,v4,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubuhm v30,v4,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v31,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsrah v24,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrglh v20,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsrah v30,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v16,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsrah v31,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v17,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vmrglh v21,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vmrglh v22,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrghh v18,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrghh v19,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrglh v23,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrghw v24,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v24.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v17.u32), simde_mm_load_si128((simde__m128i*)ctx.v16.u32)));
	// vmrglw v27,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v27.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v21.u32), simde_mm_load_si128((simde__m128i*)ctx.v20.u32)));
	// vmrghw v28,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v19.u32), simde_mm_load_si128((simde__m128i*)ctx.v18.u32)));
	// vmrglw v31,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v23.u32), simde_mm_load_si128((simde__m128i*)ctx.v22.u32)));
	// vmrglw v29,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v19.u32), simde_mm_load_si128((simde__m128i*)ctx.v18.u32)));
	// vmrglw v25,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v25.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v17.u32), simde_mm_load_si128((simde__m128i*)ctx.v16.u32)));
	// vperm v5,v24,v28,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vperm v6,v27,v31,v15
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vmrghw v26,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v21.u32), simde_mm_load_si128((simde__m128i*)ctx.v20.u32)));
	// vmrghw v30,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v23.u32), simde_mm_load_si128((simde__m128i*)ctx.v22.u32)));
	// vperm v3,v27,v31,v14
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vaddshs v13,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vspltish v27,3
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_set1_epi16(short(0x3)));
	// vperm v4,v25,v29,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vperm v8,v25,v29,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vspltish v25,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_set1_epi16(short(0x1)));
	// vperm v1,v24,v28,v14
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vslh v9,v13,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v2,v26,v30,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vslh v10,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v7,v26,v30,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vspltish v26,2
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v20,v6,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v1,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v17,8
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v19,v2,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v21,6
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_set1_epi16(short(0x6)));
	// vsubuhm v9,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vspltish v24,0
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_set1_epi16(short(0x0)));
	// vslh v1,v1,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v28,4
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_set1_epi16(short(0x4)));
	// vslh v2,v2,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v17,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v11,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vaddshs v1,v1,v18
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vaddshs v2,v2,v19
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vslh v17,v6,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vsubuhm v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v6,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v5,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v9,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v29
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubuhm v10,v10,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vaddshs v5,v5,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsubuhm v11,v11,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
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
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v9,v12,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v8,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubuhm v6,v6,v20
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vslh v20,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v19,v9,v19
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vaddshs v17,v9,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
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
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsubuhm v10,v10,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vslh v17,v7,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vaddshs v11,v11,v19
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vslh v19,v8,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v17,v7
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v7,v3,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v19,v9,v19
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vsubuhm v17,v9,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
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
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsrah v23,v12,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v7,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vsubuhm v2,v2,v17
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vaddshs v6,v6,v19
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v5,v5,v23
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v8,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubuhm v2,v2,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsubuhm v9,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v10,v10,v22
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vaddshs v11,v11,v22
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubuhm v2,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v6,v6,v23
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v24,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubuhm v31,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsubuhm v7,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v27,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v25,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v24,v24,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsubuhm v30,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v25,v25,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v26,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v24,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v27,v27,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v28,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v29,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v25,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v30,v30,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v26,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v31,v31,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v27,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v28,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v29,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v30,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v31,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_882220C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x882220C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x882220C0) {
			switch (rex_dispatch_address) {
				case 0x882220C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882220C0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x882220C8: goto loc_882220C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x882220C8;
	__savegprlr_26(ctx, base);
loc_882220C8:
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r3,r4
	ctx.r31.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vsrah v11,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r30,r10,r4
	ctx.r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-96
	ctx.r29.s64 = ctx.r1.s64 + -96;
	// lvx128 v60,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-80
	ctx.r28.s64 = ctx.r1.s64 + -80;
	// lvx128 v59,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lvsl v6,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r5,r6
	ctx.r31.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v58,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v63,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v57,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v56,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v2,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v9,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v31,v58,v57,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v54,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v55,v56,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// rlwinm r30,r6,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v29,v62,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v28,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r10,r30,r5
	ctx.r10.u64 = ctx.r30.u64 + ctx.r5.u64;
	// vmrghb v8,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vaddshs v25,v28,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmrghb v26,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v24,v27,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v23,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v20,v24,v10
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v19,v23,v8
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v18,v22,v7
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v17,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v16,v20,v11
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v15,v19,v9
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v14,v18,v8
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsrah v10,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v9,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v8,v15,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v6,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vpkshus128 v53,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v5,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v52,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v53,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r29,-88(r1)
	ctx.current_instruction = 0x882221D0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// lwz r27,-96(r1)
	ctx.current_instruction = 0x882221D4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// stw r27,0(r5)
	ctx.current_instruction = 0x882221D8;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r27.u32);
	// stvx128 v52,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r28,-72(r1)
	ctx.current_instruction = 0x882221E0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r27,-80(r1)
	ctx.current_instruction = 0x882221E4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// stwx r29,r5,r6
	ctx.current_instruction = 0x882221E8;
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r29.u32);
	// stwx r27,r30,r5
	ctx.current_instruction = 0x882221EC;
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r27.u32);
	// stwx r28,r10,r6
	ctx.current_instruction = 0x882221F0;
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r28.u32);
	// bne cr6,0x88222218
	if (!ctx.cr6.eq) goto loc_88222218;
	// lwz r29,-92(r1)
	ctx.current_instruction = 0x882221F8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r28,-84(r1)
	ctx.current_instruction = 0x882221FC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// lwz r27,-76(r1)
	ctx.current_instruction = 0x88222200;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r26,-68(r1)
	ctx.current_instruction = 0x88222204;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stw r29,4(r5)
	ctx.current_instruction = 0x88222208;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r29.u32);
	// stw r28,4(r31)
	ctx.current_instruction = 0x8822220C;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r27,4(r10)
	ctx.current_instruction = 0x88222210;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// stw r26,4(r7)
	ctx.current_instruction = 0x88222214;
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r26.u32);
loc_88222218:
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x88222338
	if (!ctx.cr6.eq) goto loc_88222338;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v51,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r31,r9,r4
	ctx.r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v50,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,-80
	ctx.r3.s64 = ctx.r1.s64 + -80;
	// lvx128 v49,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-80
	ctx.r29.s64 = ctx.r1.s64 + -80;
	// lvx128 v48,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v47,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v51,v50,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v46,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v49,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v2,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v45,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v44,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v46,v47,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvsl v1,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v30,v44,v45,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v8,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v0,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v25,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v28,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v27,v29,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v24,v0,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v25,v8
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v22,v26,v7
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v23,v27,v10
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v20,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v17,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v18,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v19,v23,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v16,v20,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v0,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v14,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v12,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v11,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v43,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vsrah v10,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v42,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v43,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,-76(r1)
	ctx.current_instruction = 0x882222EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r3,-80(r1)
	ctx.current_instruction = 0x882222F0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r7,-72(r1)
	ctx.current_instruction = 0x882222F4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r4,-68(r1)
	ctx.current_instruction = 0x882222F8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stwux r3,r5,r11
	ctx.current_instruction = 0x882222FC;
	ea = ctx.r5.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r5.u32 = ea;
	// stvx128 v42,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-76(r1)
	ctx.current_instruction = 0x88222304;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r31,-72(r1)
	ctx.current_instruction = 0x88222308;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r30,-68(r1)
	ctx.current_instruction = 0x88222310;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stw r8,4(r5)
	ctx.current_instruction = 0x88222314;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lwz r8,-80(r1)
	ctx.current_instruction = 0x88222318;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// stwx r7,r5,r6
	ctx.current_instruction = 0x8822231C;
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u32);
	// stw r4,4(r9)
	ctx.current_instruction = 0x88222320;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// stwux r8,r10,r11
	ctx.current_instruction = 0x88222324;
	ea = ctx.r10.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r3,4(r10)
	ctx.current_instruction = 0x8822232C;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stwx r31,r10,r6
	ctx.current_instruction = 0x88222330;
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r31.u32);
	// stw r30,4(r11)
	ctx.current_instruction = 0x88222334;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_88222338:
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88227190) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88227190;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88227190) {
			switch (rex_dispatch_address) {
				case 0x882271D4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88227190;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x882271D4: goto loc_882271D4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88227194;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88227198;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r9,1136(r7)
	ctx.current_instruction = 0x882271A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 1136);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,112(r1)
	ctx.current_instruction = 0x882271A8;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r9,228(r1)
	ctx.current_instruction = 0x882271B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// vspltish v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x6)));
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// vsplth v2,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x8821ec08
	ctx.lr = 0x882271D4;
	sub_8821EC08(ctx, base);
loc_882271D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x882271DC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88228A60) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88228A60;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88228A60) {
			switch (rex_dispatch_address) {
				case 0x88228A68:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88228A60;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88228A68: goto loc_88228A68;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88228A68;
	__savegprlr_26(ctx, base);
loc_88228A68:
	// lwz r11,1148(r7)
	ctx.current_instruction = 0x88228A68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1148);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// lwz r30,1156(r7)
	ctx.current_instruction = 0x88228A70;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 1156);
	// addi r26,r1,-80
	ctx.r26.s64 = ctx.r1.s64 + -80;
	// lwz r28,84(r1)
	ctx.current_instruction = 0x88228A78;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,1164(r7)
	ctx.current_instruction = 0x88228A80;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// cntlzw r7,r28
	ctx.r7.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// vspltish v5,3
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x3)));
	// stw r11,-96(r1)
	ctx.current_instruction = 0x88228A90;
	REX_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// stw r30,-80(r1)
	ctx.current_instruction = 0x88228A98;
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
	// vspltish v3,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x1)));
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
	// vspltish v2,5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_set1_epi16(short(0x5)));
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
	// vsplth v4,v11,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_set1_epi16(short(0xD0C))));
	// li r31,16
	ctx.r31.s64 = 16;
	// vsplth v25,v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_set1_epi16(short(0xD0C))));
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// bne cr6,0x88228c3c
	if (!ctx.cr6.eq) goto loc_88228C3C;
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
	// lvx128 v62,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v58,v59,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v9,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88228e18
	if (!ctx.cr6.gt) goto loc_88228E18;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_88228B54:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v1,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vor v11,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v31,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v57,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v6,v11,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v29,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// vperm128 v7,v56,v57,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v27,v10,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v29,v6
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vmrglb v22,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v19,v28,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v18,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v8,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v23,v10
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v6,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v22.u8));
	// vadduhm v28,v21,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vslh v14,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v24,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v23,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v22,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v20,v1,v14
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vadduhm v19,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsubshs v18,v31,v29
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vadduhm v17,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsubshs v16,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubshs v15,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vadduhm v14,v19,v4
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v1,v17,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v31,v20,v16
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v30,v18,v15
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v29,v14,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v28,v1,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vsrah v27,v29,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v28,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v27,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r7,r31
	ea = (ctx.r7.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// blt cr6,0x88228b54
	if (ctx.cr6.lt) goto loc_88228B54;
	// b 0x88228e18
	goto loc_88228E18;
loc_88228C3C:
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
	// vor128 v9,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v10,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v6,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v8,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v30,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v1,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v30,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88228e18
	if (!ctx.cr6.gt) goto loc_88228E18;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r29,32
	ctx.r9.s64 = ctx.r29.s64 + 32;
loc_88228CC0:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v29,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v28,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// vor v8,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor128 v42,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vor v11,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v10,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v27,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vslh v30,v11,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v41,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v43,v63,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
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
	// lvsl v6,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v21,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v10,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v19,v63,v41,v6
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v20,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v18,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v17,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v8,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v24,v30
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v14,v23,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v22,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vor v6,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v24,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v9,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmrghb v1,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v20,v10
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v30,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v18.u8));
	// vadduhm v18,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v17,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v16,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vslh v19,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vslh v20,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v9,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
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
	// vslh v22,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v17,v28,v19
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vslh v21,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v28,v24,v14
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vsubshs v20,v29,v20
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vadduhm v24,v23,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v29,v6,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
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
	// vadduhm v14,v24,v28
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v15,v29,v15
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v18,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v20,v23
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v28,v17,v22
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v22,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vsubshs v24,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v23,v27,v16
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vadduhm v20,v19,v28
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vor128 v5,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// vadduhm v21,v21,v29
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v19,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v18,v22,v4
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v16,v20,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v15,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// stvx128 v16,r9,r28
	ea = (ctx.r9.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r9,r27
	ea = (ctx.r9.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v14,v15,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// stvx128 v14,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88228cc0
	if (ctx.cr6.lt) goto loc_88228CC0;
loc_88228E18:
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
	// bne cr6,0x88228ea0
	if (!ctx.cr6.eq) goto loc_88228EA0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88228f3c
	if (!ctx.cr6.gt) goto loc_88228F3C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_88228E4C:
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
	// vsldoi128 v8,v13,v40,6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 10));
	// vadduhm v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v7,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v6,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v4,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vadduhm v3,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
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
	ctx.current_instruction = 0x88228E8C;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r11,r10
	ctx.current_instruction = 0x88228E90;
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x88228e4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88228E4C;
	// b 0x88228f3c
	goto loc_88228F3C;
loc_88228EA0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88228f3c
	if (!ctx.cr6.gt) goto loc_88228F3C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_88228EB8:
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
	// vsldoi128 v8,v13,v38,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 14));
	// vsldoi128 v7,v13,v38,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 10));
	// vsldoi v6,v12,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vsldoi v4,v12,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 14));
	// vadduhm v3,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsldoi v2,v12,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 10));
	// vadduhm v1,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v10,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vor v13,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v31,v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v30,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v13,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
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
	// bdnz 0x88228eb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88228EB8;
loc_88228F3C:
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

