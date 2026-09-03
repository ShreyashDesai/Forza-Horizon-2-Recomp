#include "forzahorizon2_funcs.36.h"

DEFINE_REX_FUNC(sub_88050358) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050358);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050358;
	ctx.current_instruction = 0x88050358;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,240(r11)
	ctx.current_instruction = 0x88050360;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__restgprlr_27) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050894);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x88050894;
	ctx.current_instruction = 0x88050894;
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

DEFINE_REX_FUNC(sub_88050EE4) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88050EE4;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88050EE4) {
			switch (rex_dispatch_address) {
				case 0x88050F2C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050EE4;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88050F2C: goto loc_88050F2C;
		default: break;
	}
	// std r31,-8(r1)
	ctx.current_instruction = 0x88050EE4;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r24,-16(r1)
	ctx.current_instruction = 0x88050EEC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r24.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	ctx.current_instruction = 0x88050EF4;
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88050EF8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,204(r31)
	ctx.current_instruction = 0x88050EFC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// b 0x88050f1c
	goto loc_88050F1C;
loc_88050F1C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x88050f2c
	if (ctx.cr6.eq) goto loc_88050F2C;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x88051f98
	ctx.lr = 0x88050F2C;
	sub_88051F98(ctx, base);
loc_88050F2C:
	// lwz r1,0(r1)
	ctx.current_instruction = 0x88050F2C;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88050F30;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r24,-16(r1)
	ctx.current_instruction = 0x88050F34;
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.current_instruction = 0x88050F38;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88052A00) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88052A00;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88052A00) {
			switch (rex_dispatch_address) {
				case 0x88052A10:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88052A00;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88052A10: goto loc_88052A10;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88052A04;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88052A08;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x880509a8
	ctx.lr = 0x88052A10;
	sub_880509A8(ctx, base);
loc_88052A10:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x88052a24
	if (!ctx.cr0.eq) goto loc_88052A24;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r3,r11,1404
	ctx.r3.s64 = ctx.r11.s64 + 1404;
	// b 0x88052a28
	goto loc_88052A28;
loc_88052A24:
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
loc_88052A28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88052A2C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880569D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880569D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880569D8) {
			switch (rex_dispatch_address) {
				case 0x88056A48:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880569D8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88056A48: goto loc_88056A48;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880569DC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x880569E0;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88056a00
	if (!ctx.cr6.eq) goto loc_88056A00;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880569F4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88056A00:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,143(r1)
	ctx.current_instruction = 0x88056A0C;
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r10.u8);
	// stb r10,135(r1)
	ctx.current_instruction = 0x88056A10;
	REX_STORE_U8(ctx.r1.u32 + 135, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r8,151(r1)
	ctx.current_instruction = 0x88056A18;
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r8.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,124(r1)
	ctx.current_instruction = 0x88056A24;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,116(r1)
	ctx.current_instruction = 0x88056A2C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,108(r1)
	ctx.current_instruction = 0x88056A34;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,100(r1)
	ctx.current_instruction = 0x88056A38;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,92(r1)
	ctx.current_instruction = 0x88056A3C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88056A40;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8805e260
	ctx.lr = 0x88056A48;
	sub_8805E260(ctx, base);
loc_88056A48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88056A50;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88057D38) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88057D38;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88057D38) {
			switch (rex_dispatch_address) {
				case 0x88057D70:
				case 0x88057D84:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88057D38;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88057D70: goto loc_88057D70;
		case 0x88057D84: goto loc_88057D84;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88057D3C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88057D40;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88057D44;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88057D48;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88057d70
	if (ctx.cr6.eq) goto loc_88057D70;
	// lwz r11,0(r4)
	ctx.current_instruction = 0x88057D5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88057D64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88057D70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88057D70:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88057D70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,60(r11)
	ctx.current_instruction = 0x88057D78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88057D84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88057D84:
	// stw r31,44(r30)
	ctx.current_instruction = 0x88057D84;
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88057D90;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88057D98;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88057D9C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880597C8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880597C8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880597C8;
	ctx.current_instruction = 0x880597C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88059CC4) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88059CC4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88059CC4;
	ctx.current_instruction = 0x88059CC4;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805A214) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805A214);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805A214;
	ctx.current_instruction = 0x8805A214;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805A408) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805A408;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805A408) {
			switch (rex_dispatch_address) {
				case 0x8805A434:
				case 0x8805A450:
				case 0x8805A464:
				case 0x8805A478:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805A408;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805A434: goto loc_8805A434;
		case 0x8805A450: goto loc_8805A450;
		case 0x8805A464: goto loc_8805A464;
		case 0x8805A478: goto loc_8805A478;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805A40C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805A410;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8805A414;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.current_instruction = 0x8805A41C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805a43c
	if (ctx.cr6.eq) goto loc_8805A43C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32791
	ctx.r4.u64 = ctx.r4.u64 | 32791;
	// bl 0x88050358
	ctx.lr = 0x8805A434;
	sub_88050358(ctx, base);
loc_8805A434:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	ctx.current_instruction = 0x8805A438;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_8805A43C:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805A43C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.current_instruction = 0x8805A444;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A450;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805A450:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x8805A450;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,80(r9)
	ctx.current_instruction = 0x8805A458;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8805A464;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805A464:
	// lwz r7,0(r31)
	ctx.current_instruction = 0x8805A464;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,132(r7)
	ctx.current_instruction = 0x8805A46C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 132);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8805A478;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805A478:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805A480;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805A488;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805BC48) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805BC48);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805BC48;
	ctx.current_instruction = 0x8805BC48;
	// lwz r11,320(r3)
	ctx.current_instruction = 0x8805BC48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,320(r10)
	ctx.current_instruction = 0x8805BC58;
	REX_STORE_U32(ctx.r10.u32 + 320, ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805BDD0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805BDD0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805BDD0) {
			switch (rex_dispatch_address) {
				case 0x8805BDE8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805BDD0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805BDE8: goto loc_8805BDE8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805BDD4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805BDD8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8805BDDC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88069348
	ctx.lr = 0x8805BDE8;
	sub_88069348(ctx, base);
loc_8805BDE8:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,8896
	ctx.r10.s64 = ctx.r11.s64 + 8896;
	// stw r10,0(r31)
	ctx.current_instruction = 0x8805BDF4;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805BDFC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805BE04;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805C270) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805C270;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805C270) {
			switch (rex_dispatch_address) {
				case 0x8805C278:
				case 0x8805C29C:
				case 0x8805C2E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805C270;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805C278: goto loc_8805C278;
		case 0x8805C29C: goto loc_8805C29C;
		case 0x8805C2E0: goto loc_8805C2E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8805C278;
	__savegprlr_28(ctx, base);
loc_8805C278:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8805C278;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805C27C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,92(r11)
	ctx.current_instruction = 0x8805C290;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805C29C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805C29C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8805c2b0
	if (ctx.cr6.eq) goto loc_8805C2B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8805C2A8:
	// stw r11,0(r30)
	ctx.current_instruction = 0x8805C2A8;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8805c2c8
	goto loc_8805C2C8;
loc_8805C2B0:
	// lwz r11,48(r31)
	ctx.current_instruction = 0x8805C2B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.current_instruction = 0x8805C2B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8805c2a8
	if (ctx.cr6.gt) goto loc_8805C2A8;
	// stw r29,0(r30)
	ctx.current_instruction = 0x8805C2C4;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_8805C2C8:
	// lwz r11,44(r31)
	ctx.current_instruction = 0x8805C2C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,52(r31)
	ctx.current_instruction = 0x8805C2D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,0(r30)
	ctx.current_instruction = 0x8805C2D4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880547a0
	ctx.lr = 0x8805C2E0;
	sub_880547A0(ctx, base);
loc_8805C2E0:
	// lwz r11,52(r31)
	ctx.current_instruction = 0x8805C2E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,0(r30)
	ctx.current_instruction = 0x8805C2E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,52(r31)
	ctx.current_instruction = 0x8805C2F0;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805E260) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805E260;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805E260) {
			switch (rex_dispatch_address) {
				case 0x8805E268:
				case 0x8805E2E8:
				case 0x8805E3B4:
				case 0x8805E418:
				case 0x8805E44C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805E260;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805E268: goto loc_8805E268;
		case 0x8805E2E8: goto loc_8805E2E8;
		case 0x8805E3B4: goto loc_8805E3B4;
		case 0x8805E418: goto loc_8805E418;
		case 0x8805E44C: goto loc_8805E44C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x8805E268;
	__savegprlr_20(ctx, base);
loc_8805E268:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x8805E268;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8805e290
	if (!ctx.cr6.eq) goto loc_8805E290;
	// lwz r11,512(r3)
	ctx.current_instruction = 0x8805E280;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805e290
	if (ctx.cr6.eq) goto loc_8805E290;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8805E290:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8805e2a8
	if (!ctx.cr6.eq) goto loc_8805E2A8;
	// lwz r11,512(r31)
	ctx.current_instruction = 0x8805E298;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805e2a8
	if (ctx.cr6.eq) goto loc_8805E2A8;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8805E2A8:
	// lis r5,22349
	ctx.r5.s64 = 1464664064;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x8805E2AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// ori r4,r5,22081
	ctx.r4.u64 = ctx.r5.u64 | 22081;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8805e2f4
	if (ctx.cr6.eq) goto loc_8805E2F4;
	// lis r5,30573
	ctx.r5.s64 = 2003632128;
	// ori r4,r5,30305
	ctx.r4.u64 = ctx.r5.u64 | 30305;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8805e2f4
	if (ctx.cr6.eq) goto loc_8805E2F4;
	// lwz r11,60(r31)
	ctx.current_instruction = 0x8805E2CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8805e2f4
	if (!ctx.cr6.eq) goto loc_8805E2F4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.current_instruction = 0x8805E2DC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8806d430
	ctx.lr = 0x8805E2E8;
	sub_8806D430(ctx, base);
loc_8805E2E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_8805E2F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r28)
	ctx.current_instruction = 0x8805E2F8;
	REX_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// lwz r5,540(r31)
	ctx.current_instruction = 0x8805E2FC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 540);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8805e358
	if (!ctx.cr6.eq) goto loc_8805E358;
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8805E308;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,2124(r11)
	ctx.current_instruction = 0x8805E30C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 2124);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8805e320
	if (!ctx.cr6.eq) goto loc_8805E320;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,0(r28)
	ctx.current_instruction = 0x8805E31C;
	REX_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
loc_8805E320:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8805E320;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,2272(r11)
	ctx.current_instruction = 0x8805E324;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 2272);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8805e33c
	if (!ctx.cr6.eq) goto loc_8805E33C;
	// lbz r11,0(r28)
	ctx.current_instruction = 0x8805E330;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// ori r5,r11,4
	ctx.r5.u64 = ctx.r11.u64 | 4;
	// stb r5,0(r28)
	ctx.current_instruction = 0x8805E338;
	REX_STORE_U8(ctx.r28.u32 + 0, ctx.r5.u8);
loc_8805E33C:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8805E33C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,28492(r11)
	ctx.current_instruction = 0x8805E340;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28492);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8805e358
	if (!ctx.cr6.eq) goto loc_8805E358;
	// lbz r11,0(r28)
	ctx.current_instruction = 0x8805E34C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// ori r5,r11,32
	ctx.r5.u64 = ctx.r11.u64 | 32;
	// stb r5,0(r28)
	ctx.current_instruction = 0x8805E354;
	REX_STORE_U8(ctx.r28.u32 + 0, ctx.r5.u8);
loc_8805E358:
	// lbz r11,407(r1)
	ctx.current_instruction = 0x8805E358;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 407);
	// addi r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 1;
	// lbz r27,399(r1)
	ctx.current_instruction = 0x8805E360;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r1.u32 + 399);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r26,391(r1)
	ctx.current_instruction = 0x8805E368;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r1.u32 + 391);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r25,380(r1)
	ctx.current_instruction = 0x8805E370;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r24,372(r1)
	ctx.current_instruction = 0x8805E374;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r23,364(r1)
	ctx.current_instruction = 0x8805E378;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r22,356(r1)
	ctx.current_instruction = 0x8805E37C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r21,348(r1)
	ctx.current_instruction = 0x8805E380;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r20,340(r1)
	ctx.current_instruction = 0x8805E384;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r3,12(r31)
	ctx.current_instruction = 0x8805E388;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stb r11,151(r1)
	ctx.current_instruction = 0x8805E38C;
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r11.u8);
	// stb r27,143(r1)
	ctx.current_instruction = 0x8805E390;
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r27.u8);
	// stb r26,135(r1)
	ctx.current_instruction = 0x8805E394;
	REX_STORE_U8(ctx.r1.u32 + 135, ctx.r26.u8);
	// stw r25,124(r1)
	ctx.current_instruction = 0x8805E398;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r24,116(r1)
	ctx.current_instruction = 0x8805E39C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r23,108(r1)
	ctx.current_instruction = 0x8805E3A0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r22,100(r1)
	ctx.current_instruction = 0x8805E3A4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r21,92(r1)
	ctx.current_instruction = 0x8805E3A8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r20,84(r1)
	ctx.current_instruction = 0x8805E3AC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// bl 0x88071540
	ctx.lr = 0x8805E3B4;
	sub_88071540(ctx, base);
loc_8805E3B4:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8805E3B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	ctx.current_instruction = 0x8805E3BC;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.current_instruction = 0x8805E3C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,2112(r10)
	ctx.current_instruction = 0x8805E3C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 2112);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8805e3f8
	if (!ctx.cr6.eq) goto loc_8805E3F8;
	// lwz r9,2104(r10)
	ctx.current_instruction = 0x8805E3D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 2104);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8805e3f8
	if (ctx.cr6.eq) goto loc_8805E3F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8805e3f8
	if (!ctx.cr6.gt) goto loc_8805E3F8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8805E3EC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8805e3ec
	if (ctx.cr6.lt) goto loc_8805E3EC;
loc_8805E3F8:
	// lwz r11,2100(r10)
	ctx.current_instruction = 0x8805E3F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 2100);
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// stw r10,80(r31)
	ctx.current_instruction = 0x8805E408;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,48(r31)
	ctx.current_instruction = 0x8805E410;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x88050340
	ctx.lr = 0x8805E418;
	sub_88050340(ctx, base);
loc_8805E418:
	// stw r3,76(r31)
	ctx.current_instruction = 0x8805E418;
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8805e430
	if (!ctx.cr6.eq) goto loc_8805E430;
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_8805E430:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x8805E430;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,48(r31)
	ctx.current_instruction = 0x8805E438;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8805e448
	if (!ctx.cr6.eq) goto loc_8805E448;
	// addi r4,r28,5
	ctx.r4.s64 = ctx.r28.s64 + 5;
loc_8805E448:
	// bl 0x880547a0
	ctx.lr = 0x8805E44C;
	sub_880547A0(ctx, base);
loc_8805E44C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880657E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880657E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880657E8) {
			switch (rex_dispatch_address) {
				case 0x880657F0:
				case 0x88065834:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880657E8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880657F0: goto loc_880657F0;
		case 0x88065834: goto loc_88065834;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x880657F0;
	__savegprlr_25(ctx, base);
loc_880657F0:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880657F0;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x88065820
	if (!ctx.cr6.eq) goto loc_88065820;
loc_88065814:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88065820:
	// rlwinm r5,r6,2,14,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r25,r6,16
	ctx.r25.u64 = ctx.r6.u32 & 0xFFFF;
	// bl 0x88052d90
	ctx.lr = 0x88065834;
	sub_88052D90(ctx, base);
loc_88065834:
	// rlwinm r6,r29,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8806592c
	if (ctx.cr6.eq) goto loc_8806592C;
loc_88065844:
	// lbz r8,0(r26)
	ctx.current_instruction = 0x88065844;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r8,44
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 44, ctx.xer);
	// bne cr6,0x88065890
	if (!ctx.cr6.eq) goto loc_88065890;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x88065870
	if (!ctx.cr6.eq) goto loc_88065870;
	// rlwinm r11,r30,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwzx r10,r11,r31
	ctx.current_instruction = 0x88065864;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stwx r9,r11,r31
	ctx.current_instruction = 0x8806586C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
loc_88065870:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r10,r25,-1
	ctx.r10.s64 = ctx.r25.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88065814
	if (!ctx.cr6.lt) goto loc_88065814;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x88065914
	goto loc_88065914;
loc_88065890:
	// cmplwi cr6,r8,45
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 45, ctx.xer);
	// bne cr6,0x880658ac
	if (!ctx.cr6.eq) goto loc_880658AC;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88065814
	if (!ctx.cr6.eq) goto loc_88065814;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x88065914
	goto loc_88065914;
loc_880658AC:
	// cmplwi cr6,r8,48
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 48, ctx.xer);
	// blt cr6,0x880658ec
	if (ctx.cr6.lt) goto loc_880658EC;
	// cmplwi cr6,r8,57
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 57, ctx.xer);
	// bgt cr6,0x880658ec
	if (ctx.cr6.gt) goto loc_880658EC;
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwzx r11,r10,r31
	ctx.current_instruction = 0x880658C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// clrlwi r28,r9,16
	ctx.r28.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// stwx r4,r10,r31
	ctx.current_instruction = 0x880658E4;
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r4.u32);
	// b 0x88065914
	goto loc_88065914;
loc_880658EC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x88065814
	if (!ctx.cr6.eq) goto loc_88065814;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x88065914
	if (!ctx.cr6.eq) goto loc_88065914;
	// rlwinm r11,r30,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwzx r10,r11,r31
	ctx.current_instruction = 0x88065908;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stwx r9,r11,r31
	ctx.current_instruction = 0x88065910;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
loc_88065914:
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x88065844
	if (ctx.cr6.lt) goto loc_88065844;
loc_8806592C:
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88068D88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88068D88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88068D88) {
			switch (rex_dispatch_address) {
				case 0x88068D90:
				case 0x88068DB4:
				case 0x88068DD0:
				case 0x88068DF0:
				case 0x88068E08:
				case 0x88068E28:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88068D88;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88068D90: goto loc_88068D90;
		case 0x88068DB4: goto loc_88068DB4;
		case 0x88068DD0: goto loc_88068DD0;
		case 0x88068DF0: goto loc_88068DF0;
		case 0x88068E08: goto loc_88068E08;
		case 0x88068E28: goto loc_88068E28;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88068D90;
	__savegprlr_28(ctx, base);
loc_88068D90:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88068D90;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88068D94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88068DA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068DB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068DB4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88068dd4
	if (ctx.cr6.eq) goto loc_88068DD4;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88068DBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,244(r11)
	ctx.current_instruction = 0x88068DC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068DD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068DD0:
	// stw r3,0(r30)
	ctx.current_instruction = 0x88068DD0;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_88068DD4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x88068df4
	if (ctx.cr6.eq) goto loc_88068DF4;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88068DDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,248(r11)
	ctx.current_instruction = 0x88068DE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068DF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068DF0:
	// stw r3,0(r29)
	ctx.current_instruction = 0x88068DF0;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_88068DF4:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88068DF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88068DFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068E08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068E08:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x88068e30
	if (ctx.cr6.eq) goto loc_88068E30;
	// lwz r3,44(r31)
	ctx.current_instruction = 0x88068E10;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88068E18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.current_instruction = 0x88068E1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068E28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068E28:
	// ld r9,80(r1)
	ctx.current_instruction = 0x88068E28;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stw r9,0(r28)
	ctx.current_instruction = 0x88068E2C;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
loc_88068E30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806C078) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806C078);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806C078;
	ctx.current_instruction = 0x8806C078;
	// lwz r3,48(r3)
	ctx.current_instruction = 0x8806C078;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806C098) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806C098);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806C098;
	ctx.current_instruction = 0x8806C098;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r3)
	ctx.current_instruction = 0x8806C09C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// stw r4,92(r11)
	ctx.current_instruction = 0x8806C0A0;
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r4.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806C360) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806C360);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806C360;
	ctx.current_instruction = 0x8806C360;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,7868(r3)
	ctx.current_instruction = 0x8806C364;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// li r10,10
	ctx.r10.s64 = 10;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// divw r7,r8,r10
	ctx.r7.u64 = uint32_t((ctx.r10.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r8.s32 / ctx.r10.s32 : 0);
	// rlwinm r6,r7,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r6,52(r9)
	ctx.current_instruction = 0x8806C378;
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r6.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806D1E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806D1E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806D1E8) {
			switch (rex_dispatch_address) {
				case 0x8806D228:
				case 0x8806D23C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806D1E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806D228: goto loc_8806D228;
		case 0x8806D23C: goto loc_8806D23C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806D1EC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8806D1F0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8806D1F4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8806D1F8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,7596(r3)
	ctx.current_instruction = 0x8806D1FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7596);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806d22c
	if (ctx.cr6.eq) goto loc_8806D22C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8806d22c
	if (ctx.cr6.eq) goto loc_8806D22C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8806d23c
	if (!ctx.cr6.eq) goto loc_8806D23C;
	// stw r30,7600(r3)
	ctx.current_instruction = 0x8806D220;
	REX_STORE_U32(ctx.r3.u32 + 7600, ctx.r30.u32);
	// bl 0x880e4530
	ctx.lr = 0x8806D228;
	sub_880E4530(ctx, base);
loc_8806D228:
	// b 0x8806d23c
	goto loc_8806D23C;
loc_8806D22C:
	// stw r30,7600(r31)
	ctx.current_instruction = 0x8806D22C;
	REX_STORE_U32(ctx.r31.u32 + 7600, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7936(r31)
	ctx.current_instruction = 0x8806D234;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7936);
	// bl 0x880e3ad0
	ctx.lr = 0x8806D23C;
	sub_880E3AD0(ctx, base);
loc_8806D23C:
	// lwz r11,7596(r31)
	ctx.current_instruction = 0x8806D23C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8806d250
	if (ctx.cr6.eq) goto loc_8806D250;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8806d274
	if (!ctx.cr6.eq) goto loc_8806D274;
loc_8806D250:
	// lwz r11,7592(r31)
	ctx.current_instruction = 0x8806D250;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7592);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8806d270
	if (ctx.cr6.eq) goto loc_8806D270;
	// lbz r10,0(r11)
	ctx.current_instruction = 0x8806D25C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// bne cr6,0x8806d270
	if (!ctx.cr6.eq) goto loc_8806D270;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7592(r31)
	ctx.current_instruction = 0x8806D26C;
	REX_STORE_U32(ctx.r31.u32 + 7592, ctx.r11.u32);
loc_8806D270:
	// stw r30,7624(r31)
	ctx.current_instruction = 0x8806D270;
	REX_STORE_U32(ctx.r31.u32 + 7624, ctx.r30.u32);
loc_8806D274:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8806D27C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8806D284;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8806D288;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806F7A8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806F7A8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806F7A8;
	ctx.current_instruction = 0x8806F7A8;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// lwz r10,1608(r3)
	ctx.current_instruction = 0x8806F7AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1608);
	// addi r9,r11,5216
	ctx.r9.s64 = ctx.r11.s64 + 5216;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,8080(r3)
	ctx.current_instruction = 0x8806F7B8;
	REX_STORE_U32(ctx.r3.u32 + 8080, ctx.r9.u32);
	// beq cr6,0x8806f7e8
	if (ctx.cr6.eq) goto loc_8806F7E8;
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// lis r10,-30705
	ctx.r10.s64 = -2012282880;
	// lis r9,-30705
	ctx.r9.s64 = -2012282880;
	// addi r8,r11,-3456
	ctx.r8.s64 = ctx.r11.s64 + -3456;
	// addi r7,r10,1248
	ctx.r7.s64 = ctx.r10.s64 + 1248;
	// addi r6,r9,4720
	ctx.r6.s64 = ctx.r9.s64 + 4720;
	// stw r8,8068(r3)
	ctx.current_instruction = 0x8806F7D8;
	REX_STORE_U32(ctx.r3.u32 + 8068, ctx.r8.u32);
	// stw r7,8076(r3)
	ctx.current_instruction = 0x8806F7DC;
	REX_STORE_U32(ctx.r3.u32 + 8076, ctx.r7.u32);
	// stw r6,8080(r3)
	ctx.current_instruction = 0x8806F7E0;
	REX_STORE_U32(ctx.r3.u32 + 8080, ctx.r6.u32);
	// b 0x8806f7fc
	goto loc_8806F7FC;
loc_8806F7E8:
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8068(r3)
	ctx.current_instruction = 0x8806F7F4;
	REX_STORE_U32(ctx.r3.u32 + 8068, ctx.r10.u32);
	// stw r9,8076(r3)
	ctx.current_instruction = 0x8806F7F8;
	REX_STORE_U32(ctx.r3.u32 + 8076, ctx.r9.u32);
loc_8806F7FC:
	// lis r10,-30705
	ctx.r10.s64 = -2012282880;
	// lwz r11,8068(r3)
	ctx.current_instruction = 0x8806F800;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8068);
	// addi r9,r10,-5696
	ctx.r9.s64 = ctx.r10.s64 + -5696;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8806f820
	if (!ctx.cr6.eq) goto loc_8806F820;
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// addi r10,r11,-6944
	ctx.r10.s64 = ctx.r11.s64 + -6944;
	// stw r10,8072(r3)
	ctx.current_instruction = 0x8806F818;
	REX_STORE_U32(ctx.r3.u32 + 8072, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8806F820:
	// stw r11,8072(r3)
	ctx.current_instruction = 0x8806F820;
	REX_STORE_U32(ctx.r3.u32 + 8072, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880704B8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880704B8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880704B8;
	ctx.current_instruction = 0x880704B8;
	// srawi r11,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 31;
	// lwz r10,31548(r3)
	ctx.current_instruction = 0x880704BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 31548);
	// xor r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// beq cr6,0x880704ec
	if (ctx.cr6.eq) goto loc_880704EC;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// ble cr6,0x880704dc
	if (!ctx.cr6.gt) goto loc_880704DC;
	// li r11,95
	ctx.r11.s64 = 95;
loc_880704DC:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r10,r10,11944
	ctx.r10.s64 = ctx.r10.s64 + 11944;
	// addi r9,r10,-96
	ctx.r9.s64 = ctx.r10.s64 + -96;
	// b 0x88070500
	goto loc_88070500;
loc_880704EC:
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x880704f8
	if (!ctx.cr6.gt) goto loc_880704F8;
	// li r11,31
	ctx.r11.s64 = 31;
loc_880704F8:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r9,r10,11944
	ctx.r9.s64 = ctx.r10.s64 + 11944;
loc_88070500:
	// lbzx r11,r11,r9
	ctx.current_instruction = 0x88070500;
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

DEFINE_REX_FUNC(sub_880714E0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880714E0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880714E0;
	ctx.current_instruction = 0x880714E0;
	// stw r4,31144(r3)
	ctx.current_instruction = 0x880714E0;
	REX_STORE_U32(ctx.r3.u32 + 31144, ctx.r4.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88071708) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88071708;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88071708) {
			switch (rex_dispatch_address) {
				case 0x88071738:
				case 0x8807176C:
				case 0x880717A0:
				case 0x880717BC:
				case 0x880717D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88071708;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88071738: goto loc_88071738;
		case 0x8807176C: goto loc_8807176C;
		case 0x880717A0: goto loc_880717A0;
		case 0x880717BC: goto loc_880717BC;
		case 0x880717D0: goto loc_880717D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8807170C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88071710;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88071714;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28492(r3)
	ctx.current_instruction = 0x88071718;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28492);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88071738
	if (ctx.cr6.eq) goto loc_88071738;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r3)
	ctx.current_instruction = 0x8807172C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x88071738;
	sub_880E6960(ctx, base);
loc_88071738:
	// lwz r11,30408(r31)
	ctx.current_instruction = 0x88071738;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807175c
	if (ctx.cr6.eq) goto loc_8807175C;
	// lwz r11,30432(r31)
	ctx.current_instruction = 0x88071744;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807175c
	if (!ctx.cr6.eq) goto loc_8807175C;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x88071764
	goto loc_88071764;
loc_8807175C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,15
	ctx.r4.s64 = 15;
loc_88071764:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88071764;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8807176C;
	sub_880E6960(ctx, base);
loc_8807176C:
	// lwz r11,28488(r31)
	ctx.current_instruction = 0x8807176C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880717bc
	if (ctx.cr6.eq) goto loc_880717BC;
	// lwz r11,28492(r31)
	ctx.current_instruction = 0x88071778;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880717ac
	if (ctx.cr6.eq) goto loc_880717AC;
	// lwz r11,28540(r31)
	ctx.current_instruction = 0x88071784;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880717ac
	if (!ctx.cr6.eq) goto loc_880717AC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28496(r31)
	ctx.current_instruction = 0x88071794;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28496);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88071798;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x880717A0;
	sub_880E6960(ctx, base);
loc_880717A0:
	// lwz r4,28500(r31)
	ctx.current_instruction = 0x880717A0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28500);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x880717b4
	goto loc_880717B4;
loc_880717AC:
	// lwz r4,28512(r31)
	ctx.current_instruction = 0x880717AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28512);
	// li r5,2
	ctx.r5.s64 = 2;
loc_880717B4:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880717B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x880717BC;
	sub_880E6960(ctx, base);
loc_880717BC:
	// lwz r11,1276(r31)
	ctx.current_instruction = 0x880717BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880717d0
	if (ctx.cr6.eq) goto loc_880717D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88070410
	ctx.lr = 0x880717D0;
	sub_88070410(ctx, base);
loc_880717D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880717D4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880717DC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88078368) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88078368);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88078368;
	ctx.current_instruction = 0x88078368;
	uint32_t ea{};
	// li r9,7
	ctx.r9.s64 = 7;
	// std r4,32(r1)
	ctx.current_instruction = 0x8807836C;
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// addi r11,r1,28
	ctx.r11.s64 = ctx.r1.s64 + 28;
	// std r5,40(r1)
	ctx.current_instruction = 0x88078374;
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// std r6,48(r1)
	ctx.current_instruction = 0x88078378;
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r6.u64);
	// addi r10,r3,836
	ctx.r10.s64 = ctx.r3.s64 + 836;
	// std r7,56(r1)
	ctx.current_instruction = 0x88078380;
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r7.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88078388:
	// lwzu r9,4(r11)
	ctx.current_instruction = 0x88078388;
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ctx.current_instruction = 0x8807838C;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x88078388
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88078388;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88079088) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88079088;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88079088) {
			switch (rex_dispatch_address) {
				case 0x88079090:
				case 0x8807909C:
				case 0x880790A4:
				case 0x880790DC:
				case 0x880790FC:
				case 0x88079144:
				case 0x88079158:
				case 0x88079164:
				case 0x8807916C:
				case 0x88079174:
				case 0x88079248:
				case 0x88079254:
				case 0x8807945C:
				case 0x88079478:
				case 0x88079494:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88079088;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88079090: goto loc_88079090;
		case 0x8807909C: goto loc_8807909C;
		case 0x880790A4: goto loc_880790A4;
		case 0x880790DC: goto loc_880790DC;
		case 0x880790FC: goto loc_880790FC;
		case 0x88079144: goto loc_88079144;
		case 0x88079158: goto loc_88079158;
		case 0x88079164: goto loc_88079164;
		case 0x8807916C: goto loc_8807916C;
		case 0x88079174: goto loc_88079174;
		case 0x88079248: goto loc_88079248;
		case 0x88079254: goto loc_88079254;
		case 0x8807945C: goto loc_8807945C;
		case 0x88079478: goto loc_88079478;
		case 0x88079494: goto loc_88079494;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88079090;
	__savegprlr_26(ctx, base);
loc_88079090:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88079090;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88078478
	ctx.lr = 0x8807909C;
	sub_88078478(ctx, base);
loc_8807909C:
	// lwz r4,672(r3)
	ctx.current_instruction = 0x8807909C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// bl 0x8806eb88
	ctx.lr = 0x880790A4;
	sub_8806EB88(ctx, base);
loc_880790A4:
	// lwz r11,1580(r31)
	ctx.current_instruction = 0x880790A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1580);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880790c8
	if (ctx.cr6.eq) goto loc_880790C8;
	// lwz r11,1416(r31)
	ctx.current_instruction = 0x880790B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bgt cr6,0x880790cc
	if (ctx.cr6.gt) goto loc_880790CC;
loc_880790C8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_880790CC:
	// stw r11,1584(r31)
	ctx.current_instruction = 0x880790CC;
	REX_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1416(r31)
	ctx.current_instruction = 0x880790D4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// bl 0x88102570
	ctx.lr = 0x880790DC;
	sub_88102570(ctx, base);
loc_880790DC:
	// lwz r11,2572(r31)
	ctx.current_instruction = 0x880790DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880790fc
	if (ctx.cr6.eq) goto loc_880790FC;
	// lwz r11,2424(r31)
	ctx.current_instruction = 0x880790E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880790fc
	if (ctx.cr6.eq) goto loc_880790FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb798
	ctx.lr = 0x880790FC;
	sub_880EB798(ctx, base);
loc_880790FC:
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x880790FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079124
	if (ctx.cr6.eq) goto loc_88079124;
	// lwz r11,28132(r31)
	ctx.current_instruction = 0x88079108;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807911c
	if (!ctx.cr6.eq) goto loc_8807911C;
	// stw r26,2632(r31)
	ctx.current_instruction = 0x88079114;
	REX_STORE_U32(ctx.r31.u32 + 2632, ctx.r26.u32);
	// b 0x88079128
	goto loc_88079128;
loc_8807911C:
	// stw r26,2636(r31)
	ctx.current_instruction = 0x8807911C;
	REX_STORE_U32(ctx.r31.u32 + 2636, ctx.r26.u32);
	// b 0x88079128
	goto loc_88079128;
loc_88079124:
	// stw r26,2628(r31)
	ctx.current_instruction = 0x88079124;
	REX_STORE_U32(ctx.r31.u32 + 2628, ctx.r26.u32);
loc_88079128:
	// lwz r11,6772(r31)
	ctx.current_instruction = 0x88079128;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6772);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079174
	if (ctx.cr6.eq) goto loc_88079174;
	// lwz r11,1612(r31)
	ctx.current_instruction = 0x88079134;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079174
	if (ctx.cr6.eq) goto loc_88079174;
	// bl 0x881ee8e8
	ctx.lr = 0x88079144;
	sub_881EE8E8(ctx, base);
loc_88079144:
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// stw r26,7212(r31)
	ctx.current_instruction = 0x88079148;
	REX_STORE_U32(ctx.r31.u32 + 7212, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	ctx.current_instruction = 0x88079150;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x880e7578
	ctx.lr = 0x88079158;
	sub_880E7578(ctx, base);
loc_88079158:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r31)
	ctx.current_instruction = 0x8807915C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x880e6fe8
	ctx.lr = 0x88079164;
	sub_880E6FE8(ctx, base);
loc_88079164:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e7798
	ctx.lr = 0x8807916C;
	sub_880E7798(ctx, base);
loc_8807916C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e8350
	ctx.lr = 0x88079174;
	sub_880E8350(ctx, base);
loc_88079174:
	// lwz r11,27988(r31)
	ctx.current_instruction = 0x88079174;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// li r27,3
	ctx.r27.s64 = 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807923c
	if (ctx.cr6.eq) goto loc_8807923C;
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x88079184;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807923c
	if (!ctx.cr6.eq) goto loc_8807923C;
	// lwz r11,2340(r31)
	ctx.current_instruction = 0x88079190;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2340);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x880791a4
	if (!ctx.cr6.eq) goto loc_880791A4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,2340(r31)
	ctx.current_instruction = 0x880791A0;
	REX_STORE_U32(ctx.r31.u32 + 2340, ctx.r11.u32);
loc_880791A4:
	// lwz r11,2340(r31)
	ctx.current_instruction = 0x880791A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880791fc
	if (ctx.cr6.eq) goto loc_880791FC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x880791fc
	if (ctx.cr6.eq) goto loc_880791FC;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880791B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8807923c
	if (!ctx.cr6.gt) goto loc_8807923C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_880791CC:
	// lwz r9,7764(r31)
	ctx.current_instruction = 0x880791CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r27,84(r9)
	ctx.current_instruction = 0x880791D8;
	REX_STORE_U32(ctx.r9.u32 + 84, ctx.r27.u32);
	// lwz r9,7764(r31)
	ctx.current_instruction = 0x880791DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,124(r8)
	ctx.current_instruction = 0x880791E4;
	REX_STORE_U32(ctx.r8.u32 + 124, ctx.r30.u32);
	// addi r11,r11,276
	ctx.r11.s64 = ctx.r11.s64 + 276;
	// lwz r7,728(r31)
	ctx.current_instruction = 0x880791EC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x880791cc
	if (ctx.cr6.lt) goto loc_880791CC;
	// b 0x8807923c
	goto loc_8807923C;
loc_880791FC:
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880791FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8807923c
	if (!ctx.cr6.gt) goto loc_8807923C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_88079210:
	// lwz r9,7764(r31)
	ctx.current_instruction = 0x88079210;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r27,84(r9)
	ctx.current_instruction = 0x8807921C;
	REX_STORE_U32(ctx.r9.u32 + 84, ctx.r27.u32);
	// lwz r9,7764(r31)
	ctx.current_instruction = 0x88079220;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r26,124(r8)
	ctx.current_instruction = 0x88079228;
	REX_STORE_U32(ctx.r8.u32 + 124, ctx.r26.u32);
	// addi r11,r11,276
	ctx.r11.s64 = ctx.r11.s64 + 276;
	// lwz r7,728(r31)
	ctx.current_instruction = 0x88079230;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x88079210
	if (ctx.cr6.lt) goto loc_88079210;
loc_8807923C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f40c0
	ctx.lr = 0x88079248;
	sub_880F40C0(ctx, base);
loc_88079248:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,672(r31)
	ctx.current_instruction = 0x8807924C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// bl 0x88074338
	ctx.lr = 0x88079254;
	sub_88074338(ctx, base);
loc_88079254:
	// lwz r11,28560(r31)
	ctx.current_instruction = 0x88079254;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880792ac
	if (ctx.cr6.eq) goto loc_880792AC;
	// lwz r7,728(r31)
	ctx.current_instruction = 0x88079260;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r9,28564
	ctx.r9.s64 = 28564;
	// lwz r8,30200(r31)
	ctx.current_instruction = 0x88079268;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 30200);
	// lwz r6,1416(r31)
	ctx.current_instruction = 0x8807926C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lwz r11,30204(r31)
	ctx.current_instruction = 0x88079274;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30204);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// std r7,80(r1)
	ctx.current_instruction = 0x8807927C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x88079280;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	ctx.current_instruction = 0x88079284;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x88079288;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f10,-8(r4)
	ctx.current_instruction = 0x88079298;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r4.u32 + -8);
	// fmul f9,f10,f12
	ctx.f9.f64 = ctx.f10.f64 * ctx.f12.f64;
	// fdiv f8,f9,f11
	ctx.f8.f64 = ctx.f9.f64 / ctx.f11.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r31,r9
	ctx.current_instruction = 0x880792A8;
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.f7.u32);
loc_880792AC:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880792AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x880793c0
	if (ctx.cr6.lt) goto loc_880793C0;
	// lwz r11,2124(r31)
	ctx.current_instruction = 0x880792B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880793c0
	if (!ctx.cr6.gt) goto loc_880793C0;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880792C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x880793c0
	if (ctx.cr6.eq) goto loc_880793C0;
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x880792D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880792e4
	if (ctx.cr6.eq) goto loc_880792E4;
	// lwz r6,7848(r31)
	ctx.current_instruction = 0x880792DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 7848);
	// b 0x880792e8
	goto loc_880792E8;
loc_880792E4:
	// lwz r6,2448(r31)
	ctx.current_instruction = 0x880792E4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2448);
loc_880792E8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880792f8
	if (ctx.cr6.eq) goto loc_880792F8;
	// lwz r7,7852(r31)
	ctx.current_instruction = 0x880792F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7852);
	// b 0x880792fc
	goto loc_880792FC;
loc_880792F8:
	// lwz r7,2452(r31)
	ctx.current_instruction = 0x880792F8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2452);
loc_880792FC:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079324
	if (ctx.cr6.eq) goto loc_88079324;
	// lwz r11,28132(r31)
	ctx.current_instruction = 0x88079308;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88079324
	if (!ctx.cr6.eq) goto loc_88079324;
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88079314;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88079318;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r28,r9,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_88079324:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88079324;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x880793c0
	if (!ctx.cr6.gt) goto loc_880793C0;
	// li r11,16384
	ctx.r11.s64 = 16384;
loc_88079338:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88079338;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x880793b0
	if (!ctx.cr6.gt) goto loc_880793B0;
loc_88079348:
	// lwz r9,720(r31)
	ctx.current_instruction = 0x88079348;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r5,r9,r29
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r30,r10,r7
	ctx.r30.u64 = ctx.r10.u64 + ctx.r7.u64;
	// sthx r11,r9,r6
	ctx.current_instruction = 0x88079384;
	REX_STORE_U16(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u16);
	// sth r11,2(r5)
	ctx.current_instruction = 0x88079388;
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
	// sthx r11,r10,r6
	ctx.current_instruction = 0x8807938C;
	REX_STORE_U16(ctx.r10.u32 + ctx.r6.u32, ctx.r11.u16);
	// sth r11,2(r4)
	ctx.current_instruction = 0x88079390;
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// sthx r11,r9,r7
	ctx.current_instruction = 0x88079394;
	REX_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u16);
	// sth r11,2(r3)
	ctx.current_instruction = 0x88079398;
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// sthx r11,r10,r7
	ctx.current_instruction = 0x8807939C;
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u16);
	// sth r11,2(r30)
	ctx.current_instruction = 0x880793A0;
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// lwz r3,720(r31)
	ctx.current_instruction = 0x880793A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x88079348
	if (ctx.cr6.lt) goto loc_88079348;
loc_880793B0:
	// lwz r10,724(r31)
	ctx.current_instruction = 0x880793B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88079338
	if (ctx.cr6.lt) goto loc_88079338;
loc_880793C0:
	// lwz r11,2124(r31)
	ctx.current_instruction = 0x880793C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88079434
	if (!ctx.cr6.gt) goto loc_88079434;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880793CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x88079434
	if (ctx.cr6.eq) goto loc_88079434;
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880793D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x88079434
	if (!ctx.cr6.gt) goto loc_88079434;
loc_880793E8:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880793E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x88079424
	if (!ctx.cr6.gt) goto loc_88079424;
loc_880793F8:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880793F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r9,7788(r31)
	ctx.current_instruction = 0x880793FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7788);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r7,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(276));
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r27,84(r6)
	ctx.current_instruction = 0x88079414;
	REX_STORE_U32(ctx.r6.u32 + 84, ctx.r27.u32);
	// lwz r5,720(r31)
	ctx.current_instruction = 0x88079418;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x880793f8
	if (ctx.cr6.lt) goto loc_880793F8;
loc_88079424:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88079424;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880793e8
	if (ctx.cr6.lt) goto loc_880793E8;
loc_88079434:
	// lwz r11,1480(r31)
	ctx.current_instruction = 0x88079434;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079494
	if (ctx.cr6.eq) goto loc_88079494;
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88079440;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88079448;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r3,1500(r31)
	ctx.current_instruction = 0x8807944C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1500);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88052d90
	ctx.lr = 0x8807945C;
	sub_88052D90(ctx, base);
loc_8807945C:
	// lwz r8,720(r31)
	ctx.current_instruction = 0x8807945C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r7,724(r31)
	ctx.current_instruction = 0x88079460;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r3,1504(r31)
	ctx.current_instruction = 0x88079468;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1504);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88052d90
	ctx.lr = 0x88079478;
	sub_88052D90(ctx, base);
loc_88079478:
	// lwz r5,720(r31)
	ctx.current_instruction = 0x88079478;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r11,724(r31)
	ctx.current_instruction = 0x8807947C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r3,1508(r31)
	ctx.current_instruction = 0x88079484;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1508);
	// mullw r10,r5,r11
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88052d90
	ctx.lr = 0x88079494;
	sub_88052D90(ctx, base);
loc_88079494:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88085650) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88085650);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88085650;
	ctx.current_instruction = 0x88085650;
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x88085668
	if (!ctx.cr6.gt) goto loc_88085668;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x88085670
	goto loc_88085670;
loc_88085668:
	// bge cr6,0x88085670
	if (!ctx.cr6.lt) goto loc_88085670;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_88085670:
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88085680
	if (!ctx.cr6.gt) goto loc_88085680;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x8808568c
	goto loc_8808568C;
loc_88085680:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8808568c
	if (!ctx.cr6.lt) goto loc_8808568C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8808568C:
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8808569c
	if (!ctx.cr6.gt) goto loc_8808569C;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x880856a8
	goto loc_880856A8;
loc_8808569C:
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880856a8
	if (!ctx.cr6.lt) goto loc_880856A8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_880856A8:
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r3,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r3.s64 = temp.s64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88087178) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88087178;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88087178) {
			switch (rex_dispatch_address) {
				case 0x88087180:
				case 0x88087348:
				case 0x88087360:
				case 0x8808737C:
				case 0x88087444:
				case 0x8808745C:
				case 0x88087478:
				case 0x88087518:
				case 0x88087534:
				case 0x88087550:
				case 0x880875E0:
				case 0x880875F8:
				case 0x88087614:
				case 0x880876DC:
				case 0x880876F4:
				case 0x88087710:
				case 0x880877AC:
				case 0x880877C4:
				case 0x880877E0:
				case 0x88087884:
				case 0x8808789C:
				case 0x880878B8:
				case 0x88087980:
				case 0x88087998:
				case 0x880879B4:
				case 0x88087A50:
				case 0x88087A68:
				case 0x88087A84:
				case 0x88087B10:
				case 0x88087B28:
				case 0x88087B44:
				case 0x88087C0C:
				case 0x88087C24:
				case 0x88087C40:
				case 0x88087CDC:
				case 0x88087CF4:
				case 0x88087D10:
				case 0x88087DDC:
				case 0x88087DF8:
				case 0x88087E14:
				case 0x88087EC8:
				case 0x88087EE0:
				case 0x88087EFC:
				case 0x88087FA8:
				case 0x88087FC0:
				case 0x88087FDC:
				case 0x88088098:
				case 0x880880B0:
				case 0x880880CC:
				case 0x8808817C:
				case 0x88088194:
				case 0x880881B0:
				case 0x8808825C:
				case 0x88088274:
				case 0x88088290:
				case 0x88088340:
				case 0x8808835C:
				case 0x88088378:
				case 0x8808842C:
				case 0x88088444:
				case 0x88088460:
				case 0x88088510:
				case 0x88088528:
				case 0x88088544:
				case 0x880885E8:
				case 0x88088600:
				case 0x8808861C:
				case 0x880886CC:
				case 0x880886E4:
				case 0x88088700:
				case 0x880887AC:
				case 0x880887C4:
				case 0x880887E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88087178;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88087180: goto loc_88087180;
		case 0x88087348: goto loc_88087348;
		case 0x88087360: goto loc_88087360;
		case 0x8808737C: goto loc_8808737C;
		case 0x88087444: goto loc_88087444;
		case 0x8808745C: goto loc_8808745C;
		case 0x88087478: goto loc_88087478;
		case 0x88087518: goto loc_88087518;
		case 0x88087534: goto loc_88087534;
		case 0x88087550: goto loc_88087550;
		case 0x880875E0: goto loc_880875E0;
		case 0x880875F8: goto loc_880875F8;
		case 0x88087614: goto loc_88087614;
		case 0x880876DC: goto loc_880876DC;
		case 0x880876F4: goto loc_880876F4;
		case 0x88087710: goto loc_88087710;
		case 0x880877AC: goto loc_880877AC;
		case 0x880877C4: goto loc_880877C4;
		case 0x880877E0: goto loc_880877E0;
		case 0x88087884: goto loc_88087884;
		case 0x8808789C: goto loc_8808789C;
		case 0x880878B8: goto loc_880878B8;
		case 0x88087980: goto loc_88087980;
		case 0x88087998: goto loc_88087998;
		case 0x880879B4: goto loc_880879B4;
		case 0x88087A50: goto loc_88087A50;
		case 0x88087A68: goto loc_88087A68;
		case 0x88087A84: goto loc_88087A84;
		case 0x88087B10: goto loc_88087B10;
		case 0x88087B28: goto loc_88087B28;
		case 0x88087B44: goto loc_88087B44;
		case 0x88087C0C: goto loc_88087C0C;
		case 0x88087C24: goto loc_88087C24;
		case 0x88087C40: goto loc_88087C40;
		case 0x88087CDC: goto loc_88087CDC;
		case 0x88087CF4: goto loc_88087CF4;
		case 0x88087D10: goto loc_88087D10;
		case 0x88087DDC: goto loc_88087DDC;
		case 0x88087DF8: goto loc_88087DF8;
		case 0x88087E14: goto loc_88087E14;
		case 0x88087EC8: goto loc_88087EC8;
		case 0x88087EE0: goto loc_88087EE0;
		case 0x88087EFC: goto loc_88087EFC;
		case 0x88087FA8: goto loc_88087FA8;
		case 0x88087FC0: goto loc_88087FC0;
		case 0x88087FDC: goto loc_88087FDC;
		case 0x88088098: goto loc_88088098;
		case 0x880880B0: goto loc_880880B0;
		case 0x880880CC: goto loc_880880CC;
		case 0x8808817C: goto loc_8808817C;
		case 0x88088194: goto loc_88088194;
		case 0x880881B0: goto loc_880881B0;
		case 0x8808825C: goto loc_8808825C;
		case 0x88088274: goto loc_88088274;
		case 0x88088290: goto loc_88088290;
		case 0x88088340: goto loc_88088340;
		case 0x8808835C: goto loc_8808835C;
		case 0x88088378: goto loc_88088378;
		case 0x8808842C: goto loc_8808842C;
		case 0x88088444: goto loc_88088444;
		case 0x88088460: goto loc_88088460;
		case 0x88088510: goto loc_88088510;
		case 0x88088528: goto loc_88088528;
		case 0x88088544: goto loc_88088544;
		case 0x880885E8: goto loc_880885E8;
		case 0x88088600: goto loc_88088600;
		case 0x8808861C: goto loc_8808861C;
		case 0x880886CC: goto loc_880886CC;
		case 0x880886E4: goto loc_880886E4;
		case 0x88088700: goto loc_88088700;
		case 0x880887AC: goto loc_880887AC;
		case 0x880887C4: goto loc_880887C4;
		case 0x880887E0: goto loc_880887E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x88087180;
	__savegprlr_15(ctx, base);
loc_88087180:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x88087180;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// lwz r8,388(r1)
	ctx.current_instruction = 0x88087188;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r24,324(r1)
	ctx.current_instruction = 0x8808718C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,340(r1)
	ctx.current_instruction = 0x88087198;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r28,332(r1)
	ctx.current_instruction = 0x8808719C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// lwz r18,12(r8)
	ctx.current_instruction = 0x880871A8;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r15,0
	ctx.r15.s64 = 0;
	// neg r3,r24
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r24.u64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8808721c
	if (ctx.cr6.eq) goto loc_8808721C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x8808721c
	if (ctx.cr6.gt) goto loc_8808721C;
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r3,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r3.u64;
	// subf r4,r7,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r7.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// addi r4,r4,-7
	ctx.r4.s64 = ctx.r4.s64 + -7;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_880871F4:
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r27
	ctx.current_instruction = 0x880871FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88087214
	if (!ctx.cr6.lt) goto loc_88087214;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_88087214:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bdnz 0x880871f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880871F4;
loc_8808721C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x88087250
	if (ctx.cr6.eq) goto loc_88087250;
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r27
	ctx.r4.u64 = ctx.r8.u64 + ctx.r27.u64;
	// lwz r8,-4(r4)
	ctx.current_instruction = 0x88087238;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88087250
	if (!ctx.cr6.lt) goto loc_88087250;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88087250:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x88087284
	if (ctx.cr6.eq) goto loc_88087284;
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r4,r27
	ctx.current_instruction = 0x8808726C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r27.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88087284
	if (!ctx.cr6.lt) goto loc_88087284;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88087284:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880872dc
	if (ctx.cr6.eq) goto loc_880872DC;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x880872dc
	if (ctx.cr6.gt) goto loc_880872DC;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// subf r7,r3,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r3.u64;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_880872B4:
	// add r10,r8,r6
	ctx.r10.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x880872BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880872d4
	if (!ctx.cr6.lt) goto loc_880872D4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// li r29,1
	ctx.r29.s64 = 1;
loc_880872D4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x880872b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880872B4;
loc_880872DC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r21,16
	ctx.r21.s64 = 16;
	// beq cr6,0x880882d8
	if (ctx.cr6.eq) goto loc_880882D8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x88087d74
	if (ctx.cr6.eq) goto loc_88087D74;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880872F0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880872F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// bne cr6,0x88087844
	if (!ctx.cr6.eq) goto loc_88087844;
	// lwz r30,348(r1)
	ctx.current_instruction = 0x88087304;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// li r7,-2
	ctx.r7.s64 = -2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x880875b4
	if (!ctx.cr6.eq) goto loc_880875B4;
	// subf r11,r4,r20
	ctx.r11.u64 = ctx.r20.u64 - ctx.r4.u64;
	// lwz r23,372(r1)
	ctx.current_instruction = 0x8808731C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// li r8,-2
	ctx.r8.s64 = -2;
	// addi r25,r11,-1
	ctx.r25.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x8808734c
	if (!ctx.cr6.eq) goto loc_8808734C;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88087334;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r21,84(r1)
	ctx.current_instruction = 0x8808733C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88087348;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087348:
	// b 0x88087360
	goto loc_88087360;
loc_8808734C:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x8808734C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087354;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88087360;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087360:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8808737C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808737C:
	// lwz r28,396(r1)
	ctx.current_instruction = 0x8808737C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r22,404(r1)
	ctx.current_instruction = 0x88087380;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r24,r8,r6
	ctx.r24.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r29,r7,r5
	ctx.r29.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpwi cr6,r24,158
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 158, ctx.xer);
	// addi r26,r11,6848
	ctx.r26.s64 = ctx.r11.s64 + 6848;
	// bgt cr6,0x880873e8
	if (ctx.cr6.gt) goto loc_880873E8;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x880873e8
	if (ctx.cr6.gt) goto loc_880873E8;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,380(r1)
	ctx.current_instruction = 0x880873C0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x880873C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x880873CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x880873D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x880873DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880873f4
	goto loc_880873F4;
loc_880873E8:
	// lwz r27,380(r1)
	ctx.current_instruction = 0x880873E8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r11,20(r27)
	ctx.current_instruction = 0x880873EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880873F4:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8808740c
	if (!ctx.cr6.lt) goto loc_8808740C;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,-2
	ctx.r16.s64 = -2;
	// li r15,-2
	ctx.r15.s64 = -2;
loc_8808740C:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808740C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88087414;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,-2
	ctx.r8.s64 = -2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r25,1
	ctx.r3.s64 = ctx.r25.s64 + 1;
	// bne cr6,0x88087448
	if (!ctx.cr6.eq) goto loc_88087448;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88087430;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087438;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88087444;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087444:
	// b 0x8808745c
	goto loc_8808745C;
loc_88087448:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88087448;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087450;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808745C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808745C:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x88087478;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087478:
	// srawi r11,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 31;
	// xor r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 ^ ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880874bc
	if (ctx.cr6.gt) goto loc_880874BC;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x880874bc
	if (ctx.cr6.gt) goto loc_880874BC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x8808749C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x880874A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r27
	ctx.current_instruction = 0x880874AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r10,r6,r27
	ctx.current_instruction = 0x880874B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880874c4
	goto loc_880874C4;
loc_880874BC:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x880874BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880874C4:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x880874dc
	if (!ctx.cr6.lt) goto loc_880874DC;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r15,-2
	ctx.r15.s64 = -2;
loc_880874DC:
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880874DC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880874E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-2
	ctx.r7.s64 = -2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r11,r4,r25
	ctx.r11.u64 = ctx.r4.u64 + ctx.r25.u64;
	// bne cr6,0x8808751c
	if (!ctx.cr6.eq) goto loc_8808751C;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x88087500;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087508;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bctrl 
	ctx.lr = 0x88087518;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087518:
	// b 0x88087534
	goto loc_88087534;
loc_8808751C:
	// lwz r29,2496(r31)
	ctx.current_instruction = 0x8808751C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087528;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x88087534;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087534:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x88087550;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087550:
	// srawi r11,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 31;
	// cmpwi cr6,r24,158
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 158, ctx.xer);
	// xor r10,r22,r11
	ctx.r10.u64 = ctx.r22.u64 ^ ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bgt cr6,0x88087594
	if (ctx.cr6.gt) goto loc_88087594;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88087594
	if (ctx.cr6.gt) goto loc_88087594;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x88087574;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x88087578;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r27
	ctx.current_instruction = 0x88087584;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r10,r6,r27
	ctx.current_instruction = 0x88087588;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808759c
	goto loc_8808759C;
loc_88087594:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88087594;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808759C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88088848
	if (!ctx.cr6.lt) goto loc_88088848;
	// li r16,-2
	ctx.r16.s64 = -2;
	// li r15,0
	ctx.r15.s64 = 0;
	// b 0x88088844
	goto loc_88088844;
loc_880875B4:
	// lwz r22,372(r1)
	ctx.current_instruction = 0x880875B4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r24,r20,-1
	ctx.r24.s64 = ctx.r20.s64 + -1;
	// li r8,2
	ctx.r8.s64 = 2;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bne cr6,0x880875e4
	if (!ctx.cr6.eq) goto loc_880875E4;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x880875CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r21,84(r1)
	ctx.current_instruction = 0x880875D4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880875E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880875E0:
	// b 0x880875f8
	goto loc_880875F8;
loc_880875E4:
	// stw r21,84(r1)
	ctx.current_instruction = 0x880875E4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x880875EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880875F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880875F8:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x88087614;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087614:
	// lwz r27,396(r1)
	ctx.current_instruction = 0x88087614;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r23,404(r1)
	ctx.current_instruction = 0x88087618;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r10,r27,-1
	ctx.r10.s64 = ctx.r27.s64 + -1;
	// addi r9,r23,1
	ctx.r9.s64 = ctx.r23.s64 + 1;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r25,r8,r6
	ctx.r25.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r29,r7,r5
	ctx.r29.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpwi cr6,r25,158
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 158, ctx.xer);
	// addi r26,r11,6848
	ctx.r26.s64 = ctx.r11.s64 + 6848;
	// bgt cr6,0x88087680
	if (ctx.cr6.gt) goto loc_88087680;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x88087680
	if (ctx.cr6.gt) goto loc_88087680;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,380(r1)
	ctx.current_instruction = 0x88087658;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x88087660;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x88087664;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r28
	ctx.current_instruction = 0x88087670;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// lwzx r10,r6,r28
	ctx.current_instruction = 0x88087674;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808768c
	goto loc_8808768C;
loc_88087680:
	// lwz r28,380(r1)
	ctx.current_instruction = 0x88087680;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r11,20(r28)
	ctx.current_instruction = 0x88087684;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808768C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x880876a4
	if (!ctx.cr6.lt) goto loc_880876A4;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,-2
	ctx.r16.s64 = -2;
	// li r15,2
	ctx.r15.s64 = 2;
loc_880876A4:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880876A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880876AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r24,1
	ctx.r3.s64 = ctx.r24.s64 + 1;
	// bne cr6,0x880876e0
	if (!ctx.cr6.eq) goto loc_880876E0;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x880876C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r21,84(r1)
	ctx.current_instruction = 0x880876D0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880876DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880876DC:
	// b 0x880876f4
	goto loc_880876F4;
loc_880876E0:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x880876E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// stw r21,84(r1)
	ctx.current_instruction = 0x880876E8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880876F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880876F4:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x88087710;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087710:
	// srawi r11,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 31;
	// xor r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 ^ ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88087754
	if (ctx.cr6.gt) goto loc_88087754;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x88087754
	if (ctx.cr6.gt) goto loc_88087754;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x88087734;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x88087738;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r28
	ctx.current_instruction = 0x88087744;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// lwzx r11,r6,r28
	ctx.current_instruction = 0x88087748;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808775c
	goto loc_8808775C;
loc_88087754:
	// lwz r11,20(r28)
	ctx.current_instruction = 0x88087754;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808775C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88087774
	if (!ctx.cr6.lt) goto loc_88087774;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r15,2
	ctx.r15.s64 = 2;
loc_88087774:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88087774;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808777C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-2
	ctx.r7.s64 = -2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bne cr6,0x880877b0
	if (!ctx.cr6.eq) goto loc_880877B0;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087798;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x880877A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880877AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880877AC:
	// b 0x880877c4
	goto loc_880877C4;
loc_880877B0:
	// stw r21,84(r1)
	ctx.current_instruction = 0x880877B0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x880877B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880877C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880877C4:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x880877E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880877E0:
	// srawi r11,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 31;
	// cmpwi cr6,r25,158
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 158, ctx.xer);
	// xor r10,r23,r11
	ctx.r10.u64 = ctx.r23.u64 ^ ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bgt cr6,0x88087824
	if (ctx.cr6.gt) goto loc_88087824;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88087824
	if (ctx.cr6.gt) goto loc_88087824;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x88087804;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x88087808;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r28
	ctx.current_instruction = 0x88087814;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// lwzx r10,r6,r28
	ctx.current_instruction = 0x88087818;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808782c
	goto loc_8808782C;
loc_88087824:
	// lwz r11,20(r28)
	ctx.current_instruction = 0x88087824;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808782C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88088848
	if (!ctx.cr6.lt) goto loc_88088848;
	// li r16,-2
	ctx.r16.s64 = -2;
	// li r15,0
	ctx.r15.s64 = 0;
	// b 0x88088844
	goto loc_88088844;
loc_88087844:
	// lwz r23,372(r1)
	ctx.current_instruction = 0x88087844;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// li r7,2
	ctx.r7.s64 = 2;
	// bne cr6,0x88087ae4
	if (!ctx.cr6.eq) goto loc_88087AE4;
	// lwz r30,348(r1)
	ctx.current_instruction = 0x88087854;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// subf r24,r4,r20
	ctx.r24.u64 = ctx.r20.u64 - ctx.r4.u64;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// li r8,-2
	ctx.r8.s64 = -2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x88087888
	if (!ctx.cr6.eq) goto loc_88087888;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087870;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88087878;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88087884;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087884:
	// b 0x8808789c
	goto loc_8808789C;
loc_88087888:
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087888;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88087890;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808789C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808789C:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x880878B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880878B8:
	// lwz r28,396(r1)
	ctx.current_instruction = 0x880878B8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r22,404(r1)
	ctx.current_instruction = 0x880878BC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r25,r8,r6
	ctx.r25.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r29,r7,r5
	ctx.r29.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpwi cr6,r25,158
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 158, ctx.xer);
	// addi r26,r11,6848
	ctx.r26.s64 = ctx.r11.s64 + 6848;
	// bgt cr6,0x88087924
	if (ctx.cr6.gt) goto loc_88087924;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x88087924
	if (ctx.cr6.gt) goto loc_88087924;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,380(r1)
	ctx.current_instruction = 0x880878FC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x88087904;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x88087908;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r27
	ctx.current_instruction = 0x88087914;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r10,r6,r27
	ctx.current_instruction = 0x88087918;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88087930
	goto loc_88087930;
loc_88087924:
	// lwz r27,380(r1)
	ctx.current_instruction = 0x88087924;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88087928;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88087930:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88087948
	if (!ctx.cr6.lt) goto loc_88087948;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,2
	ctx.r16.s64 = 2;
	// li r15,-2
	ctx.r15.s64 = -2;
loc_88087948:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88087948;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88087950;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,-2
	ctx.r8.s64 = -2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bne cr6,0x88087984
	if (!ctx.cr6.eq) goto loc_88087984;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808796C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087974;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88087980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087980:
	// b 0x88087998
	goto loc_88087998;
loc_88087984:
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087984;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x8808798C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88087998;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087998:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x880879B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880879B4:
	// srawi r11,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 31;
	// xor r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 ^ ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880879f8
	if (ctx.cr6.gt) goto loc_880879F8;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x880879f8
	if (ctx.cr6.gt) goto loc_880879F8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x880879D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x880879DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x880879E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x880879EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88087a00
	goto loc_88087A00;
loc_880879F8:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x880879F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88087A00:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88087a18
	if (!ctx.cr6.lt) goto loc_88087A18;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r15,-2
	ctx.r15.s64 = -2;
loc_88087A18:
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88087A18;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88087A20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r3,r4,r24
	ctx.r3.u64 = ctx.r4.u64 + ctx.r24.u64;
	// bne cr6,0x88087a54
	if (!ctx.cr6.eq) goto loc_88087A54;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087A3C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88087A44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88087A50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087A50:
	// b 0x88087a68
	goto loc_88087A68;
loc_88087A54:
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087A54;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88087A5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88087A68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087A68:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x88087A84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087A84:
	// srawi r11,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 31;
	// cmpwi cr6,r25,158
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 158, ctx.xer);
	// xor r10,r22,r11
	ctx.r10.u64 = ctx.r22.u64 ^ ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bgt cr6,0x88087ac8
	if (ctx.cr6.gt) goto loc_88087AC8;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88087ac8
	if (ctx.cr6.gt) goto loc_88087AC8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x88087AA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x88087AAC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r27
	ctx.current_instruction = 0x88087AB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r10,r6,r27
	ctx.current_instruction = 0x88087ABC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88087ad0
	goto loc_88087AD0;
loc_88087AC8:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88087AC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88087AD0:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88088848
	if (!ctx.cr6.lt) goto loc_88088848;
	// li r15,0
	ctx.r15.s64 = 0;
	// b 0x88088840
	goto loc_88088840;
loc_88087AE4:
	// lwz r29,348(r1)
	ctx.current_instruction = 0x88087AE4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne cr6,0x88087b14
	if (!ctx.cr6.eq) goto loc_88087B14;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88087AFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087B04;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88087B10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087B10:
	// b 0x88087b28
	goto loc_88087B28;
loc_88087B14:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88087B14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087B1C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88087B28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087B28:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x88087B44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087B44:
	// lwz r24,396(r1)
	ctx.current_instruction = 0x88087B44;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r28,404(r1)
	ctx.current_instruction = 0x88087B48;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r10,r24,1
	ctx.r10.s64 = ctx.r24.s64 + 1;
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r30,r8,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r25,r7,r5
	ctx.r25.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpwi cr6,r30,158
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 158, ctx.xer);
	// addi r26,r11,6848
	ctx.r26.s64 = ctx.r11.s64 + 6848;
	// bgt cr6,0x88087bb0
	if (ctx.cr6.gt) goto loc_88087BB0;
	// cmpwi cr6,r25,158
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 158, ctx.xer);
	// bgt cr6,0x88087bb0
	if (ctx.cr6.gt) goto loc_88087BB0;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,380(r1)
	ctx.current_instruction = 0x88087B88;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x88087B90;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x88087B94;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r27
	ctx.current_instruction = 0x88087BA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r10,r6,r27
	ctx.current_instruction = 0x88087BA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88087bbc
	goto loc_88087BBC;
loc_88087BB0:
	// lwz r27,380(r1)
	ctx.current_instruction = 0x88087BB0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88087BB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88087BBC:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88087bd4
	if (!ctx.cr6.lt) goto loc_88087BD4;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,2
	ctx.r16.s64 = 2;
	// li r15,2
	ctx.r15.s64 = 2;
loc_88087BD4:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88087BD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88087BDC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bne cr6,0x88087c10
	if (!ctx.cr6.eq) goto loc_88087C10;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087BF8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88087C00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88087C0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087C0C:
	// b 0x88087c24
	goto loc_88087C24;
loc_88087C10:
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087C10;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88087C18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88087C24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087C24:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x88087C40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087C40:
	// srawi r11,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 31;
	// cmpwi cr6,r30,158
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 158, ctx.xer);
	// xor r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 ^ ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bgt cr6,0x88087c84
	if (ctx.cr6.gt) goto loc_88087C84;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88087c84
	if (ctx.cr6.gt) goto loc_88087C84;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x88087C64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x88087C68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r27
	ctx.current_instruction = 0x88087C74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r10,r6,r27
	ctx.current_instruction = 0x88087C78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88087c8c
	goto loc_88087C8C;
loc_88087C84:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88087C84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88087C8C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88087ca4
	if (!ctx.cr6.lt) goto loc_88087CA4;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,2
	ctx.r16.s64 = 2;
	// li r15,0
	ctx.r15.s64 = 0;
loc_88087CA4:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88087CA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88087CAC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bne cr6,0x88087ce0
	if (!ctx.cr6.eq) goto loc_88087CE0;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087CC8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88087CD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88087CDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087CDC:
	// b 0x88087cf4
	goto loc_88087CF4;
loc_88087CE0:
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087CE0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88087CE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88087CF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087CF4:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x88087D10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087D10:
	// srawi r11,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 31;
	// xor r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 ^ ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88087d54
	if (ctx.cr6.gt) goto loc_88087D54;
	// cmpwi cr6,r25,158
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 158, ctx.xer);
	// bgt cr6,0x88087d54
	if (ctx.cr6.gt) goto loc_88087D54;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x88087D34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x88087D38;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x88087D44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x88087D48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88087d5c
	goto loc_88087D5C;
loc_88087D54:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88087D54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88087D5C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88088848
	if (!ctx.cr6.lt) goto loc_88088848;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r15,2
	ctx.r15.s64 = 2;
	// b 0x88088844
	goto loc_88088844;
loc_88087D74:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// lwz r30,396(r1)
	ctx.current_instruction = 0x88087D78;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r29,348(r1)
	ctx.current_instruction = 0x88087D7C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// bne cr6,0x88088044
	if (!ctx.cr6.eq) goto loc_88088044;
	// lwz r25,404(r1)
	ctx.current_instruction = 0x88087D88;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r26,380(r1)
	ctx.current_instruction = 0x88087D90;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// addi r27,r11,6848
	ctx.r27.s64 = ctx.r11.s64 + 6848;
	// lwz r24,372(r1)
	ctx.current_instruction = 0x88087D98;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// beq cr6,0x88087e8c
	if (ctx.cr6.eq) goto loc_88087E8C;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88087DA0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88087DA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r8,-2
	ctx.r8.s64 = -2;
	// li r7,-2
	ctx.r7.s64 = -2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// subf r11,r4,r20
	ctx.r11.u64 = ctx.r20.u64 - ctx.r4.u64;
	// bne cr6,0x88087de0
	if (!ctx.cr6.eq) goto loc_88087DE0;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x88087DC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087DCC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x88087DDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087DDC:
	// b 0x88087df8
	goto loc_88087DF8;
loc_88087DE0:
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087DE0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r28,2496(r31)
	ctx.current_instruction = 0x88087DE8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x88087DF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087DF8:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x88087E14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087E14:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// addi r10,r25,-1
	ctx.r10.s64 = ctx.r25.s64 + -1;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r10,r8,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r8.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88087e6c
	if (ctx.cr6.gt) goto loc_88087E6C;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88087e6c
	if (ctx.cr6.gt) goto loc_88087E6C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.current_instruction = 0x88087E4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwzx r8,r10,r27
	ctx.current_instruction = 0x88087E50;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r26
	ctx.current_instruction = 0x88087E5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r11,r6,r26
	ctx.current_instruction = 0x88087E60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88087e74
	goto loc_88087E74;
loc_88087E6C:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88087E6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88087E74:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88087e8c
	if (!ctx.cr6.lt) goto loc_88087E8C;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,-2
	ctx.r16.s64 = -2;
	// li r15,-2
	ctx.r15.s64 = -2;
loc_88087E8C:
	// addi r28,r20,-1
	ctx.r28.s64 = ctx.r20.s64 + -1;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88087E90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88087E94;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-2
	ctx.r7.s64 = -2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x88087ecc
	if (!ctx.cr6.eq) goto loc_88087ECC;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087EB4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88087EBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88087EC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087EC8:
	// b 0x88087ee0
	goto loc_88087EE0;
loc_88087ECC:
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087ECC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88087ED4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88087EE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087EE0:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x88087EFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087EFC:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// srawi r9,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r25.s32 >> 31;
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// xor r7,r25,r9
	ctx.r7.u64 = ctx.r25.u64 ^ ctx.r9.u64;
	// subf r30,r10,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpwi cr6,r30,158
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 158, ctx.xer);
	// bgt cr6,0x88087f50
	if (ctx.cr6.gt) goto loc_88087F50;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88087f50
	if (ctx.cr6.gt) goto loc_88087F50;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.current_instruction = 0x88087F30;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwzx r8,r10,r27
	ctx.current_instruction = 0x88087F34;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r26
	ctx.current_instruction = 0x88087F40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r10,r6,r26
	ctx.current_instruction = 0x88087F44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88087f58
	goto loc_88087F58;
loc_88087F50:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88087F50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88087F58:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88087f70
	if (!ctx.cr6.lt) goto loc_88087F70;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,-2
	ctx.r16.s64 = -2;
	// li r15,0
	ctx.r15.s64 = 0;
loc_88087F70:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88087F70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88087F78;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,-2
	ctx.r7.s64 = -2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x88087fac
	if (!ctx.cr6.eq) goto loc_88087FAC;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88087F94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087F9C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88087FA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087FA8:
	// b 0x88087fc0
	goto loc_88087FC0;
loc_88087FAC:
	// stw r21,84(r1)
	ctx.current_instruction = 0x88087FAC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88087FB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88087FC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087FC0:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x88087FDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88087FDC:
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r30,158
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 158, ctx.xer);
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// bgt cr6,0x88088024
	if (ctx.cr6.gt) goto loc_88088024;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88088024
	if (ctx.cr6.gt) goto loc_88088024;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.current_instruction = 0x88088004;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwzx r8,r10,r27
	ctx.current_instruction = 0x88088008;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r26
	ctx.current_instruction = 0x88088014;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r10,r6,r26
	ctx.current_instruction = 0x88088018;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808802c
	goto loc_8808802C;
loc_88088024:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88088024;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808802C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88088848
	if (!ctx.cr6.lt) goto loc_88088848;
	// li r16,-2
	ctx.r16.s64 = -2;
	// li r15,2
	ctx.r15.s64 = 2;
	// b 0x88088844
	goto loc_88088844;
loc_88088044:
	// lwz r26,404(r1)
	ctx.current_instruction = 0x88088044;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r27,380(r1)
	ctx.current_instruction = 0x8808804C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// addi r28,r11,6848
	ctx.r28.s64 = ctx.r11.s64 + 6848;
	// lwz r25,372(r1)
	ctx.current_instruction = 0x88088054;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// beq cr6,0x88088144
	if (ctx.cr6.eq) goto loc_88088144;
	// lwz r3,1380(r31)
	ctx.current_instruction = 0x8808805C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88088064;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r8,-2
	ctx.r8.s64 = -2;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// subf r3,r3,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r3.u64;
	// bne cr6,0x8808809c
	if (!ctx.cr6.eq) goto loc_8808809C;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88088084;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808808C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88088098;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088098:
	// b 0x880880b0
	goto loc_880880B0;
loc_8808809C:
	// stw r21,84(r1)
	ctx.current_instruction = 0x8808809C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x880880A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880880B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880880B0:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x880880CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880880CC:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// addi r10,r26,-1
	ctx.r10.s64 = ctx.r26.s64 + -1;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r10,r8,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r8.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88088124
	if (ctx.cr6.gt) goto loc_88088124;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88088124
	if (ctx.cr6.gt) goto loc_88088124;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r28
	ctx.current_instruction = 0x88088104;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r8,r10,r28
	ctx.current_instruction = 0x88088108;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x88088114;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x88088118;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808812c
	goto loc_8808812C;
loc_88088124:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88088124;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808812C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88088144
	if (!ctx.cr6.lt) goto loc_88088144;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,2
	ctx.r16.s64 = 2;
	// li r15,-2
	ctx.r15.s64 = -2;
loc_88088144:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88088144;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808814C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bne cr6,0x88088180
	if (!ctx.cr6.eq) goto loc_88088180;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88088168;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88088170;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808817C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808817C:
	// b 0x88088194
	goto loc_88088194;
loc_88088180:
	// stw r21,84(r1)
	ctx.current_instruction = 0x88088180;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88088188;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88088194;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088194:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x880881B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880881B0:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// srawi r9,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r26.s32 >> 31;
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// xor r7,r26,r9
	ctx.r7.u64 = ctx.r26.u64 ^ ctx.r9.u64;
	// subf r30,r10,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpwi cr6,r30,158
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 158, ctx.xer);
	// bgt cr6,0x88088204
	if (ctx.cr6.gt) goto loc_88088204;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88088204
	if (ctx.cr6.gt) goto loc_88088204;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r28
	ctx.current_instruction = 0x880881E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r8,r10,r28
	ctx.current_instruction = 0x880881E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r27
	ctx.current_instruction = 0x880881F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r10,r6,r27
	ctx.current_instruction = 0x880881F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808820c
	goto loc_8808820C;
loc_88088204:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88088204;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808820C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88088224
	if (!ctx.cr6.lt) goto loc_88088224;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,2
	ctx.r16.s64 = 2;
	// li r15,0
	ctx.r15.s64 = 0;
loc_88088224:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88088224;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808822C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bne cr6,0x88088260
	if (!ctx.cr6.eq) goto loc_88088260;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88088248;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88088250;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808825C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808825C:
	// b 0x88088274
	goto loc_88088274;
loc_88088260:
	// stw r21,84(r1)
	ctx.current_instruction = 0x88088260;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88088268;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88088274;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088274:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x88088290;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088290:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r30,158
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 158, ctx.xer);
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// bgt cr6,0x88088828
	if (ctx.cr6.gt) goto loc_88088828;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88088828
	if (ctx.cr6.gt) goto loc_88088828;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r28
	ctx.current_instruction = 0x880882B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r8,r10,r28
	ctx.current_instruction = 0x880882BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r27
	ctx.current_instruction = 0x880882C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r10,r6,r27
	ctx.current_instruction = 0x880882CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88088830
	goto loc_88088830;
loc_880882D8:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r26,396(r1)
	ctx.current_instruction = 0x880882DC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// lwz r29,404(r1)
	ctx.current_instruction = 0x880882E4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r27,380(r1)
	ctx.current_instruction = 0x880882E8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// addi r28,r11,6848
	ctx.r28.s64 = ctx.r11.s64 + 6848;
	// lwz r25,372(r1)
	ctx.current_instruction = 0x880882F0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r30,348(r1)
	ctx.current_instruction = 0x880882F4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// bne cr6,0x880885a8
	if (!ctx.cr6.eq) goto loc_880885A8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x880883f0
	if (ctx.cr6.eq) goto loc_880883F0;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88088304;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808830C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r8,-2
	ctx.r8.s64 = -2;
	// li r7,-2
	ctx.r7.s64 = -2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subf r11,r4,r20
	ctx.r11.u64 = ctx.r20.u64 - ctx.r4.u64;
	// bne cr6,0x88088344
	if (!ctx.cr6.eq) goto loc_88088344;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88088328;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x88088330;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x88088340;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088340:
	// b 0x8808835c
	goto loc_8808835C;
loc_88088344:
	// stw r21,84(r1)
	ctx.current_instruction = 0x88088344;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r24,2496(r31)
	ctx.current_instruction = 0x8808834C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x8808835C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808835C:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x88088378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088378:
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r10,r8,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r8.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880883d0
	if (ctx.cr6.gt) goto loc_880883D0;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880883d0
	if (ctx.cr6.gt) goto loc_880883D0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r28
	ctx.current_instruction = 0x880883B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r8,r10,r28
	ctx.current_instruction = 0x880883B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x880883C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x880883C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880883d8
	goto loc_880883D8;
loc_880883D0:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x880883D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880883D8:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x880883f0
	if (!ctx.cr6.lt) goto loc_880883F0;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,-2
	ctx.r16.s64 = -2;
	// li r15,-2
	ctx.r15.s64 = -2;
loc_880883F0:
	// lwz r3,1380(r31)
	ctx.current_instruction = 0x880883F0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880883F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r8,-2
	ctx.r8.s64 = -2;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subf r3,r3,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r3.u64;
	// bne cr6,0x88088430
	if (!ctx.cr6.eq) goto loc_88088430;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88088418;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88088420;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808842C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808842C:
	// b 0x88088444
	goto loc_88088444;
loc_88088430:
	// stw r21,84(r1)
	ctx.current_instruction = 0x88088430;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88088438;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88088444;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088444:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x88088460;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088460:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// srawi r10,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 31;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r26,r10
	ctx.r8.u64 = ctx.r26.u64 ^ ctx.r10.u64;
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r29,r9,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880884b4
	if (ctx.cr6.gt) goto loc_880884B4;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x880884b4
	if (ctx.cr6.gt) goto loc_880884B4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r28
	ctx.current_instruction = 0x88088494;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r8,r10,r28
	ctx.current_instruction = 0x88088498;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x880884A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x880884A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880884bc
	goto loc_880884BC;
loc_880884B4:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x880884B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880884BC:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x880884d4
	if (!ctx.cr6.lt) goto loc_880884D4;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r15,-2
	ctx.r15.s64 = -2;
loc_880884D4:
	// lwz r3,1380(r31)
	ctx.current_instruction = 0x880884D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880884DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r8,-2
	ctx.r8.s64 = -2;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subf r3,r3,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r3.u64;
	// bne cr6,0x88088514
	if (!ctx.cr6.eq) goto loc_88088514;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x880884FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r21,84(r1)
	ctx.current_instruction = 0x88088504;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88088510;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088510:
	// b 0x88088528
	goto loc_88088528;
loc_88088514:
	// stw r21,84(r1)
	ctx.current_instruction = 0x88088514;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x8808851C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88088528;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088528:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x88088544;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088544:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8808858c
	if (ctx.cr6.gt) goto loc_8808858C;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x8808858c
	if (ctx.cr6.gt) goto loc_8808858C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r28
	ctx.current_instruction = 0x8808856C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r8,r10,r28
	ctx.current_instruction = 0x88088570;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x8808857C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x88088580;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88088594
	goto loc_88088594;
loc_8808858C:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x8808858C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88088594:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88088848
	if (!ctx.cr6.lt) goto loc_88088848;
	// li r15,-2
	ctx.r15.s64 = -2;
	// b 0x88088840
	goto loc_88088840;
loc_880885A8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x88088694
	if (ctx.cr6.eq) goto loc_88088694;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880885B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880885B8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,-2
	ctx.r7.s64 = -2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r20,-1
	ctx.r3.s64 = ctx.r20.s64 + -1;
	// bne cr6,0x880885ec
	if (!ctx.cr6.eq) goto loc_880885EC;
	// stw r21,84(r1)
	ctx.current_instruction = 0x880885D4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x880885DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880885E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880885E8:
	// b 0x88088600
	goto loc_88088600;
loc_880885EC:
	// stw r21,84(r1)
	ctx.current_instruction = 0x880885EC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x880885F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88088600;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088600:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8808861C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808861C:
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r10,r8,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r8.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88088674
	if (ctx.cr6.gt) goto loc_88088674;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88088674
	if (ctx.cr6.gt) goto loc_88088674;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r28
	ctx.current_instruction = 0x88088654;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r8,r10,r28
	ctx.current_instruction = 0x88088658;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x88088664;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x88088668;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808867c
	goto loc_8808867C;
loc_88088674:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88088674;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808867C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88088694
	if (!ctx.cr6.lt) goto loc_88088694;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,-2
	ctx.r16.s64 = -2;
	// li r15,2
	ctx.r15.s64 = 2;
loc_88088694:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88088694;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808869C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bne cr6,0x880886d0
	if (!ctx.cr6.eq) goto loc_880886D0;
	// stw r21,84(r1)
	ctx.current_instruction = 0x880886B8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x880886C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880886CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880886CC:
	// b 0x880886e4
	goto loc_880886E4;
loc_880886D0:
	// stw r21,84(r1)
	ctx.current_instruction = 0x880886D0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x880886D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880886E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880886E4:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x88088700;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088700:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// srawi r10,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 31;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r26,r10
	ctx.r8.u64 = ctx.r26.u64 ^ ctx.r10.u64;
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r29,r9,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88088754
	if (ctx.cr6.gt) goto loc_88088754;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x88088754
	if (ctx.cr6.gt) goto loc_88088754;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r28
	ctx.current_instruction = 0x88088734;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r8,r10,r28
	ctx.current_instruction = 0x88088738;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x88088744;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x88088748;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808875c
	goto loc_8808875C;
loc_88088754:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88088754;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808875C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88088774
	if (!ctx.cr6.lt) goto loc_88088774;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r15,2
	ctx.r15.s64 = 2;
loc_88088774:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88088774;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808877C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bne cr6,0x880887b0
	if (!ctx.cr6.eq) goto loc_880887B0;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88088798;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r21,84(r1)
	ctx.current_instruction = 0x880887A0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880887AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880887AC:
	// b 0x880887c4
	goto loc_880887C4;
loc_880887B0:
	// stw r21,84(r1)
	ctx.current_instruction = 0x880887B0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x880887B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880887C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880887C4:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x880887E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880887E0:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88088828
	if (ctx.cr6.gt) goto loc_88088828;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x88088828
	if (ctx.cr6.gt) goto loc_88088828;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r28
	ctx.current_instruction = 0x88088808;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r8,r10,r28
	ctx.current_instruction = 0x8808880C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x88088818;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x8808881C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88088830
	goto loc_88088830;
loc_88088828:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88088828;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88088830:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x88088848
	if (!ctx.cr6.lt) goto loc_88088848;
	// li r15,2
	ctx.r15.s64 = 2;
loc_88088840:
	// li r16,2
	ctx.r16.s64 = 2;
loc_88088844:
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
loc_88088848:
	// lwz r11,412(r1)
	ctx.current_instruction = 0x88088848;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r10,420(r1)
	ctx.current_instruction = 0x8808884C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r9,428(r1)
	ctx.current_instruction = 0x88088850;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// stw r16,0(r11)
	ctx.current_instruction = 0x88088854;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// stw r15,0(r10)
	ctx.current_instruction = 0x88088858;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r15.u32);
	// stw r17,0(r9)
	ctx.current_instruction = 0x8808885C;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r17.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D1F50) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D1F50;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D1F50) {
			switch (rex_dispatch_address) {
				case 0x880D203C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D1F50;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D203C: goto loc_880D203C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880D1F54;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880D1F58;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880D1F5C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880D1F60;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// beq cr6,0x880d2060
	if (ctx.cr6.eq) goto loc_880D2060;
	// lwz r10,0(r31)
	ctx.current_instruction = 0x880D1F7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880d2060
	if (ctx.cr6.eq) goto loc_880D2060;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x880d1f98
	if (!ctx.cr6.eq) goto loc_880D1F98;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x880d2060
	if (!ctx.cr6.eq) goto loc_880D2060;
loc_880D1F98:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x880d2060
	if (ctx.cr6.eq) goto loc_880D2060;
	// lwz r10,704(r31)
	ctx.current_instruction = 0x880D1FA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880d1fd8
	if (ctx.cr6.eq) goto loc_880D1FD8;
	// lwz r10,696(r31)
	ctx.current_instruction = 0x880D1FAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 696);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880d1fd8
	if (ctx.cr6.eq) goto loc_880D1FD8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x880d1fd8
	if (!ctx.cr6.eq) goto loc_880D1FD8;
	// lwz r11,224(r31)
	ctx.current_instruction = 0x880D1FC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880d2068
	if (!ctx.cr6.eq) goto loc_880D2068;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,692(r31)
	ctx.current_instruction = 0x880D1FD0;
	REX_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// b 0x880d2068
	goto loc_880D2068;
loc_880D1FD8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,228(r1)
	ctx.current_instruction = 0x880D1FDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// stw r11,692(r31)
	ctx.current_instruction = 0x880D1FE0;
	REX_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r11,0(r3)
	ctx.current_instruction = 0x880D1FE8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	ctx.current_instruction = 0x880D1FEC;
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	ctx.current_instruction = 0x880D1FF0;
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	ctx.current_instruction = 0x880D1FF4;
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,32(r3)
	ctx.current_instruction = 0x880D1FF8;
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// stw r4,80(r1)
	ctx.current_instruction = 0x880D1FFC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	ctx.current_instruction = 0x880D2000;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r8,96(r1)
	ctx.current_instruction = 0x880D2004;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// std r9,104(r1)
	ctx.current_instruction = 0x880D2008;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// stw r6,88(r1)
	ctx.current_instruction = 0x880D200C;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,92(r1)
	ctx.current_instruction = 0x880D2010;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// beq cr6,0x880d2028
	if (ctx.cr6.eq) goto loc_880D2028;
	// lwz r11,4(r10)
	ctx.current_instruction = 0x880D2018;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.current_instruction = 0x880D201C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,116(r1)
	ctx.current_instruction = 0x880D2020;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,112(r1)
	ctx.current_instruction = 0x880D2024;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_880D2028:
	// lwz r11,712(r31)
	ctx.current_instruction = 0x880D2028;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 712);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D203C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D203C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d2068
	if (ctx.cr6.lt) goto loc_880D2068;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880D2044;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,820(r11)
	ctx.current_instruction = 0x880D2048;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 820);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880d2068
	if (!ctx.cr6.eq) goto loc_880D2068;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,692(r31)
	ctx.current_instruction = 0x880D2058;
	REX_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// b 0x880d2068
	goto loc_880D2068;
loc_880D2060:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_880D2068:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x880d2080
	if (ctx.cr6.eq) goto loc_880D2080;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x880d2080
	if (ctx.cr6.eq) goto loc_880D2080;
	// lwz r11,692(r31)
	ctx.current_instruction = 0x880D2078;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 692);
	// stw r11,0(r30)
	ctx.current_instruction = 0x880D207C;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_880D2080:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880D2084;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880D208C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880D2090;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880D60F8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880D60F8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D60F8;
	ctx.current_instruction = 0x880D60F8;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880D60F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,280(r11)
	ctx.current_instruction = 0x880D60FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880d6120
	if (ctx.cr6.eq) goto loc_880D6120;
	// lwz r10,40(r11)
	ctx.current_instruction = 0x880D6108;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880d6120
	if (!ctx.cr6.eq) goto loc_880D6120;
	// lis r10,-30707
	ctx.r10.s64 = -2012413952;
	// addi r9,r10,22176
	ctx.r9.s64 = ctx.r10.s64 + 22176;
	// b 0x880d6128
	goto loc_880D6128;
loc_880D6120:
	// lis r10,-30707
	ctx.r10.s64 = -2012413952;
	// addi r9,r10,17696
	ctx.r9.s64 = ctx.r10.s64 + 17696;
loc_880D6128:
	// stw r9,504(r3)
	ctx.current_instruction = 0x880D6128;
	REX_STORE_U32(ctx.r3.u32 + 504, ctx.r9.u32);
	// lhz r10,34(r11)
	ctx.current_instruction = 0x880D612C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880d61f0
	if (ctx.cr6.eq) goto loc_880D61F0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_880D613C:
	// lwz r9,320(r11)
	ctx.current_instruction = 0x880D613C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// lwz r8,280(r11)
	ctx.current_instruction = 0x880D6144;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x880d61b8
	if (!ctx.cr6.eq) goto loc_880D61B8;
	// lwz r10,448(r11)
	ctx.current_instruction = 0x880D6154;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880d6170
	if (ctx.cr6.eq) goto loc_880D6170;
	// lwz r10,456(r11)
	ctx.current_instruction = 0x880D6160;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 456);
	// lwz r8,256(r11)
	ctx.current_instruction = 0x880D6164;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x880d6174
	goto loc_880D6174;
loc_880D6170:
	// lwz r10,256(r11)
	ctx.current_instruction = 0x880D6170;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
loc_880D6174:
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// lwz r8,436(r11)
	ctx.current_instruction = 0x880D6178;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 436);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,52(r9)
	ctx.current_instruction = 0x880D6184;
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r8.u32);
	// lwz r6,448(r11)
	ctx.current_instruction = 0x880D6188;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 448);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,256(r11)
	ctx.current_instruction = 0x880D6190;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// beq cr6,0x880d61a0
	if (ctx.cr6.eq) goto loc_880D61A0;
	// lwz r8,456(r11)
	ctx.current_instruction = 0x880D6198;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 456);
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
loc_880D61A0:
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// lwz r8,436(r11)
	ctx.current_instruction = 0x880D61A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 436);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,148(r9)
	ctx.current_instruction = 0x880D61B0;
	REX_STORE_U32(ctx.r9.u32 + 148, ctx.r8.u32);
	// b 0x880d61d8
	goto loc_880D61D8;
loc_880D61B8:
	// lwz r8,320(r11)
	ctx.current_instruction = 0x880D61B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r6,4(r8)
	ctx.current_instruction = 0x880D61C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,52(r9)
	ctx.current_instruction = 0x880D61C4;
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r6.u32);
	// lwz r8,320(r11)
	ctx.current_instruction = 0x880D61C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r4,4(r5)
	ctx.current_instruction = 0x880D61D0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r4,148(r9)
	ctx.current_instruction = 0x880D61D4;
	REX_STORE_U32(ctx.r9.u32 + 148, ctx.r4.u32);
loc_880D61D8:
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// lhz r9,34(r11)
	ctx.current_instruction = 0x880D61DC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880d613c
	if (ctx.cr6.lt) goto loc_880D613C;
loc_880D61F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880D7FC8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D7FC8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D7FC8) {
			switch (rex_dispatch_address) {
				case 0x880D7FD0:
				case 0x880D8020:
				case 0x880D8034:
				case 0x880D8074:
				case 0x880D8084:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D7FC8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D7FD0: goto loc_880D7FD0;
		case 0x880D8020: goto loc_880D8020;
		case 0x880D8034: goto loc_880D8034;
		case 0x880D8074: goto loc_880D8074;
		case 0x880D8084: goto loc_880D8084;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880D7FD0;
	__savegprlr_27(ctx, base);
loc_880D7FD0:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880D7FD0;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,500(r3)
	ctx.current_instruction = 0x880D7FD4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 500);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// bne cr6,0x880d8000
	if (!ctx.cr6.eq) goto loc_880D8000;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_880D8000:
	// lwz r11,440(r31)
	ctx.current_instruction = 0x880D8000;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r30,0(r31)
	ctx.current_instruction = 0x880D8004;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r29,0(r27)
	ctx.current_instruction = 0x880D8008;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d8028
	if (ctx.cr6.eq) goto loc_880D8028;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d7850
	ctx.lr = 0x880D8020;
	sub_880D7850(ctx, base);
loc_880D8020:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d8084
	if (ctx.cr6.lt) goto loc_880D8084;
loc_880D8028:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d7bb0
	ctx.lr = 0x880D8034;
	sub_880D7BB0(ctx, base);
loc_880D8034:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d8084
	if (ctx.cr6.lt) goto loc_880D8084;
	// lwz r11,472(r31)
	ctx.current_instruction = 0x880D803C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 472);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880d8084
	if (!ctx.cr6.eq) goto loc_880D8084;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x880d8084
	if (ctx.cr6.eq) goto loc_880D8084;
	// lwz r11,176(r30)
	ctx.current_instruction = 0x880D8050;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 176);
	// clrlwi r7,r29,16
	ctx.r7.u64 = ctx.r29.u32 & 0xFFFF;
	// lbz r5,201(r30)
	ctx.current_instruction = 0x880D8058;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 201);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,568(r30)
	ctx.current_instruction = 0x880D8060;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x880d8080
	if (!ctx.cr6.eq) goto loc_880D8080;
	// bl 0x88135cc8
	ctx.lr = 0x880D8074;
	sub_88135CC8(ctx, base);
loc_880D8074:
	// sth r29,0(r27)
	ctx.current_instruction = 0x880D8074;
	REX_STORE_U16(ctx.r27.u32 + 0, ctx.r29.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_880D8080:
	// bl 0x88135760
	ctx.lr = 0x880D8084;
	sub_88135760(ctx, base);
loc_880D8084:
	// sth r29,0(r27)
	ctx.current_instruction = 0x880D8084;
	REX_STORE_U16(ctx.r27.u32 + 0, ctx.r29.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DAED0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880DAED0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880DAED0;
	ctx.current_instruction = 0x880DAED0;
	// srawi. r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr 
	if (ctx.cr0.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_880DAEDC:
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x880daedc
	if (!ctx.cr0.eq) goto loc_880DAEDC;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880DB910) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880DB910);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880DB910;
	ctx.current_instruction = 0x880DB910;
	uint32_t ea{};
	// lwz r10,0(r4)
	ctx.current_instruction = 0x880DB910;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r10,8(r3)
	ctx.current_instruction = 0x880DB918;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,0(r3)
	ctx.current_instruction = 0x880DB91C;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.current_instruction = 0x880DB920;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,12(r3)
	ctx.current_instruction = 0x880DB924;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r9,4(r3)
	ctx.current_instruction = 0x880DB928;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwzx r8,r4,r5
	ctx.current_instruction = 0x880DB92C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// stw r8,24(r3)
	ctx.current_instruction = 0x880DB930;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stw r8,16(r3)
	ctx.current_instruction = 0x880DB934;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.current_instruction = 0x880DB938;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,28(r3)
	ctx.current_instruction = 0x880DB93C;
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stw r7,20(r3)
	ctx.current_instruction = 0x880DB940;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lwzux r10,r11,r5
	ctx.current_instruction = 0x880DB944;
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r10,40(r3)
	ctx.current_instruction = 0x880DB948;
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r10,32(r3)
	ctx.current_instruction = 0x880DB94C;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lwz r6,4(r11)
	ctx.current_instruction = 0x880DB950;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,44(r3)
	ctx.current_instruction = 0x880DB954;
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// stw r6,36(r3)
	ctx.current_instruction = 0x880DB958;
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// lwzux r10,r11,r5
	ctx.current_instruction = 0x880DB95C;
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r10,56(r3)
	ctx.current_instruction = 0x880DB960;
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// stw r10,48(r3)
	ctx.current_instruction = 0x880DB964;
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// lwz r4,4(r11)
	ctx.current_instruction = 0x880DB968;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,60(r3)
	ctx.current_instruction = 0x880DB96C;
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// stw r4,52(r3)
	ctx.current_instruction = 0x880DB970;
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// lwzux r10,r11,r5
	ctx.current_instruction = 0x880DB974;
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r10,72(r3)
	ctx.current_instruction = 0x880DB978;
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// stw r10,64(r3)
	ctx.current_instruction = 0x880DB97C;
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x880DB980;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,76(r3)
	ctx.current_instruction = 0x880DB984;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stw r10,68(r3)
	ctx.current_instruction = 0x880DB988;
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// lwzux r10,r11,r5
	ctx.current_instruction = 0x880DB98C;
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r10,88(r3)
	ctx.current_instruction = 0x880DB990;
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r10,80(r3)
	ctx.current_instruction = 0x880DB994;
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x880DB998;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,92(r3)
	ctx.current_instruction = 0x880DB99C;
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// stw r9,84(r3)
	ctx.current_instruction = 0x880DB9A0;
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// lwzux r10,r11,r5
	ctx.current_instruction = 0x880DB9A4;
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r10,104(r3)
	ctx.current_instruction = 0x880DB9A8;
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r10,96(r3)
	ctx.current_instruction = 0x880DB9AC;
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.current_instruction = 0x880DB9B0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,108(r3)
	ctx.current_instruction = 0x880DB9B4;
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r8.u32);
	// stw r8,100(r3)
	ctx.current_instruction = 0x880DB9B8;
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r8.u32);
	// lwzux r10,r11,r5
	ctx.current_instruction = 0x880DB9BC;
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r10,120(r3)
	ctx.current_instruction = 0x880DB9C0;
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// stw r10,112(r3)
	ctx.current_instruction = 0x880DB9C4;
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// lwz r7,4(r11)
	ctx.current_instruction = 0x880DB9C8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,124(r3)
	ctx.current_instruction = 0x880DB9CC;
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r7.u32);
	// stw r7,116(r3)
	ctx.current_instruction = 0x880DB9D0;
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r7.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880DCAA8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880DCAA8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880DCAA8) {
			switch (rex_dispatch_address) {
				case 0x880DCAB0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880DCAA8;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x880DCAB0: goto loc_880DCAB0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880DCAB0;
	__savegprlr_14(ctx, base);
loc_880DCAB0:
	// stw r7,52(r1)
	ctx.current_instruction = 0x880DCAB0;
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x880dccac
	if (ctx.cr6.lt) goto loc_880DCCAC;
	// addi r28,r7,-1
	ctx.r28.s64 = ctx.r7.s64 + -1;
loc_880DCACC:
	// lbz r30,7(r3)
	ctx.current_instruction = 0x880DCACC;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r3.u32 + 7);
	// add r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lbz r7,7(r5)
	ctx.current_instruction = 0x880DCAD4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + 7);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r27,6(r3)
	ctx.current_instruction = 0x880DCADC;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r3.u32 + 6);
	// lbz r29,6(r5)
	ctx.current_instruction = 0x880DCAE0;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 6);
	// subf r7,r7,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r7.u64;
	// lbz r30,5(r5)
	ctx.current_instruction = 0x880DCAE8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r5.u32 + 5);
	// subf r29,r29,r27
	ctx.r29.u64 = ctx.r27.u64 - ctx.r29.u64;
	// lbz r27,5(r3)
	ctx.current_instruction = 0x880DCAF0;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// srawi r26,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r7.s32 >> 31;
	// lbz r23,4(r3)
	ctx.current_instruction = 0x880DCAF8;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// srawi r24,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r29.s32 >> 31;
	// lbz r25,4(r5)
	ctx.current_instruction = 0x880DCB00;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// subf r30,r30,r27
	ctx.r30.u64 = ctx.r27.u64 - ctx.r30.u64;
	// lbz r22,2(r5)
	ctx.current_instruction = 0x880DCB08;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// xor r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r26.u64;
	// lbz r21,1(r5)
	ctx.current_instruction = 0x880DCB10;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r27,3(r5)
	ctx.current_instruction = 0x880DCB14;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// xor r29,r29,r24
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r24.u64;
	// lbz r19,0(r5)
	ctx.current_instruction = 0x880DCB1C;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// subf r5,r26,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r26.u64;
	// srawi r20,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r30.s32 >> 31;
	// lbz r18,3(r3)
	ctx.current_instruction = 0x880DCB28;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// subf r25,r25,r23
	ctx.r25.u64 = ctx.r23.u64 - ctx.r25.u64;
	// lbz r26,0(r3)
	ctx.current_instruction = 0x880DCB30;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r23,2(r3)
	ctx.current_instruction = 0x880DCB34;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// xor r30,r30,r20
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r20.u64;
	// lbz r7,1(r3)
	ctx.current_instruction = 0x880DCB3C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// subf r3,r24,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r24.u64;
	// srawi r29,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r25.s32 >> 31;
	// lbz r24,7(r11)
	ctx.current_instruction = 0x880DCB48;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lbz r17,7(r10)
	ctx.current_instruction = 0x880DCB50;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// subf r27,r27,r18
	ctx.r27.u64 = ctx.r18.u64 - ctx.r27.u64;
	// lbz r18,6(r11)
	ctx.current_instruction = 0x880DCB58;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// subf r3,r20,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r20.u64;
	// lbz r30,6(r10)
	ctx.current_instruction = 0x880DCB60;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// xor r25,r25,r29
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r29.u64;
	// lbz r20,5(r11)
	ctx.current_instruction = 0x880DCB68;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// srawi r16,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r27.s32 >> 31;
	// lbz r15,5(r10)
	ctx.current_instruction = 0x880DCB70;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lbz r14,4(r11)
	ctx.current_instruction = 0x880DCB78;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r3,r29,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r29.u64;
	// subf r23,r22,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r22.u64;
	// lbz r22,4(r10)
	ctx.current_instruction = 0x880DCB84;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// xor r29,r27,r16
	ctx.r29.u64 = ctx.r27.u64 ^ ctx.r16.u64;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// srawi r27,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r23.s32 >> 31;
	// subf r7,r21,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r21.u64;
	// subf r3,r16,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r16.u64;
	// subf r29,r19,r26
	ctx.r29.u64 = ctx.r26.u64 - ctx.r19.u64;
	// xor r26,r23,r27
	ctx.r26.u64 = ctx.r23.u64 ^ ctx.r27.u64;
	// srawi r25,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r7.s32 >> 31;
	// subf r24,r17,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r17.u64;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// subf r30,r30,r18
	ctx.r30.u64 = ctx.r18.u64 - ctx.r30.u64;
	// subf r3,r27,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r27.u64;
	// srawi r23,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r29.s32 >> 31;
	// srawi r27,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r24.s32 >> 31;
	// xor r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r25.u64;
	// srawi r26,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r30.s32 >> 31;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// subf r21,r15,r20
	ctx.r21.u64 = ctx.r20.u64 - ctx.r15.u64;
	// subf r3,r25,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r25.u64;
	// xor r7,r24,r27
	ctx.r7.u64 = ctx.r24.u64 ^ ctx.r27.u64;
	// xor r25,r30,r26
	ctx.r25.u64 = ctx.r30.u64 ^ ctx.r26.u64;
	// srawi r24,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r21.s32 >> 31;
	// add r30,r5,r3
	ctx.r30.u64 = ctx.r5.u64 + ctx.r3.u64;
	// xor r29,r29,r23
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r23.u64;
	// subf r3,r26,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r26.u64;
	// subf r5,r27,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r27.u64;
	// xor r7,r21,r24
	ctx.r7.u64 = ctx.r21.u64 ^ ctx.r24.u64;
	// subf r29,r23,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r23.u64;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// subf r3,r24,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r24.u64;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// subf r3,r22,r14
	ctx.r3.u64 = ctx.r14.u64 - ctx.r22.u64;
	// srawi r30,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r3.s32 >> 31;
	// lbz r7,3(r11)
	ctx.current_instruction = 0x880DCC14;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r29,3(r10)
	ctx.current_instruction = 0x880DCC18;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// lbz r27,2(r11)
	ctx.current_instruction = 0x880DCC24;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r7,r29,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r29.u64;
	// lbz r29,2(r10)
	ctx.current_instruction = 0x880DCC2C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// subf r3,r30,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lbz r26,1(r11)
	ctx.current_instruction = 0x880DCC34;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srawi r30,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 31;
	// lbz r25,1(r10)
	ctx.current_instruction = 0x880DCC3C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r29,r29,r27
	ctx.r29.u64 = ctx.r27.u64 - ctx.r29.u64;
	// lbz r27,0(r11)
	ctx.current_instruction = 0x880DCC44;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// xor r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r30.u64;
	// lbz r24,0(r10)
	ctx.current_instruction = 0x880DCC4C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r23,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r29.s32 >> 31;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// subf r26,r25,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r25.u64;
	// subf r3,r30,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r30.u64;
	// xor r7,r29,r23
	ctx.r7.u64 = ctx.r29.u64 ^ ctx.r23.u64;
	// srawi r30,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r26.s32 >> 31;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// subf r29,r24,r27
	ctx.r29.u64 = ctx.r27.u64 - ctx.r24.u64;
	// subf r3,r23,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r23.u64;
	// xor r27,r26,r30
	ctx.r27.u64 = ctx.r26.u64 ^ ctx.r30.u64;
	// srawi r7,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r29.s32 >> 31;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// subf r3,r30,r27
	ctx.r3.u64 = ctx.r27.u64 - ctx.r30.u64;
	// xor r30,r29,r7
	ctx.r30.u64 = ctx.r29.u64 ^ ctx.r7.u64;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// subf r30,r7,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r7.u64;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r5,r30
	ctx.r11.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x880dcacc
	if (ctx.cr6.lt) goto loc_880DCACC;
	// lwz r7,52(r1)
	ctx.current_instruction = 0x880DCCA8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
loc_880DCCAC:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// add r10,r31,r8
	ctx.r10.u64 = ctx.r31.u64 + ctx.r8.u64;
	// bge cr6,0x880dcd9c
	if (!ctx.cr6.lt) goto loc_880DCD9C;
	// lbz r11,7(r3)
	ctx.current_instruction = 0x880DCCB8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 7);
	// lbz r9,7(r5)
	ctx.current_instruction = 0x880DCCBC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 7);
	// lbz r8,6(r3)
	ctx.current_instruction = 0x880DCCC0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 6);
	// lbz r7,6(r5)
	ctx.current_instruction = 0x880DCCC4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + 6);
	// subf r6,r9,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lbz r9,5(r5)
	ctx.current_instruction = 0x880DCCCC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 5);
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lbz r4,5(r3)
	ctx.current_instruction = 0x880DCCD4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// srawi r8,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 31;
	// lbz r30,4(r5)
	ctx.current_instruction = 0x880DCCDC;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// srawi r31,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 31;
	// lbz r7,4(r3)
	ctx.current_instruction = 0x880DCCE4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// subf r4,r9,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r9.u64;
	// lbz r29,3(r3)
	ctx.current_instruction = 0x880DCCEC;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// lbz r28,3(r5)
	ctx.current_instruction = 0x880DCCF4;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// xor r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// lbz r27,2(r3)
	ctx.current_instruction = 0x880DCCFC;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// srawi r26,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r4.s32 >> 31;
	// lbz r25,2(r5)
	ctx.current_instruction = 0x880DCD04;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// subf r9,r31,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r31.u64;
	// lbz r31,1(r5)
	ctx.current_instruction = 0x880DCD0C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// subf r7,r30,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r30.u64;
	// lbz r30,1(r3)
	ctx.current_instruction = 0x880DCD14;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// lbz r6,0(r3)
	ctx.current_instruction = 0x880DCD1C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// xor r4,r4,r26
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r26.u64;
	// lbz r3,0(r5)
	ctx.current_instruction = 0x880DCD24;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// srawi r8,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 31;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r5,r28,r29
	ctx.r5.u64 = ctx.r29.u64 - ctx.r28.u64;
	// subf r9,r26,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r26.u64;
	// xor r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// srawi r7,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 31;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r29,r25,r27
	ctx.r29.u64 = ctx.r27.u64 - ctx.r25.u64;
	// subf r9,r8,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r8.u64;
	// xor r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r7.u64;
	// srawi r4,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r29.s32 >> 31;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r8,r31,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r31.u64;
	// subf r9,r7,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r7.u64;
	// xor r7,r29,r4
	ctx.r7.u64 = ctx.r29.u64 ^ ctx.r4.u64;
	// srawi r5,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 31;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r3,r3,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r3.u64;
	// subf r9,r4,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r4.u64;
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// srawi r7,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 31;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r9,r5,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r5.u64;
	// xor r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r9,r7,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880DCD9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E30C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880E30C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880E30C8) {
			switch (rex_dispatch_address) {
				case 0x880E30D0:
				case 0x880E30D8:
				case 0x880E327C:
				case 0x880E32AC:
				case 0x880E32D0:
				case 0x880E3304:
				case 0x880E3970:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E30C8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880E30D0: goto loc_880E30D0;
		case 0x880E30D8: goto loc_880E30D8;
		case 0x880E327C: goto loc_880E327C;
		case 0x880E32AC: goto loc_880E32AC;
		case 0x880E32D0: goto loc_880E32D0;
		case 0x880E3304: goto loc_880E3304;
		case 0x880E3970: goto loc_880E3970;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880E30D0;
	__savegprlr_26(ctx, base);
loc_880E30D0:
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x881ef284
	ctx.lr = 0x880E30D8;
	__savefpr_27(ctx, base);
loc_880E30D8:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x880E30D8;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,856(r3)
	ctx.current_instruction = 0x880E30DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 856);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880e30fc
	if (ctx.cr6.lt) goto loc_880E30FC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// li r27,1
	ctx.r27.s64 = 1;
	// ble cr6,0x880e3100
	if (!ctx.cr6.gt) goto loc_880E3100;
loc_880E30FC:
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_880E3100:
	// lwz r11,30404(r31)
	ctx.current_instruction = 0x880E3100;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e3130
	if (ctx.cr6.eq) goto loc_880E3130;
	// lwz r11,30304(r31)
	ctx.current_instruction = 0x880E310C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e3130
	if (ctx.cr6.eq) goto loc_880E3130;
	// lwz r11,7600(r31)
	ctx.current_instruction = 0x880E3118;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7600);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880e3130
	if (!ctx.cr6.eq) goto loc_880E3130;
	// lwz r11,672(r31)
	ctx.current_instruction = 0x880E3124;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// stw r26,30404(r31)
	ctx.current_instruction = 0x880E3128;
	REX_STORE_U32(ctx.r31.u32 + 30404, ctx.r26.u32);
	// stw r11,676(r31)
	ctx.current_instruction = 0x880E312C;
	REX_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
loc_880E3130:
	// lwz r10,676(r31)
	ctx.current_instruction = 0x880E3130;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r9,1424(r31)
	ctx.current_instruction = 0x880E3138;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lwz r28,30304(r31)
	ctx.current_instruction = 0x880E3140;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 30304);
	// lfd f13,688(r31)
	ctx.current_instruction = 0x880E3144;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 688);
	// stfd f13,8040(r31)
	ctx.current_instruction = 0x880E3148;
	REX_STORE_U64(ctx.r31.u32 + 8040, ctx.f13.u64);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lfd f28,12248(r11)
	ctx.current_instruction = 0x880E3150;
	ctx.f28.u64 = REX_LOAD_U64(ctx.r11.u32 + 12248);
	// stw r10,8028(r31)
	ctx.current_instruction = 0x880E3154;
	REX_STORE_U32(ctx.r31.u32 + 8028, ctx.r10.u32);
	// lfd f27,14760(r8)
	ctx.current_instruction = 0x880E3158;
	ctx.f27.u64 = REX_LOAD_U64(ctx.r8.u32 + 14760);
	// stw r9,8032(r31)
	ctx.current_instruction = 0x880E315C;
	REX_STORE_U32(ctx.r31.u32 + 8032, ctx.r9.u32);
	// beq cr6,0x880e31d4
	if (ctx.cr6.eq) goto loc_880E31D4;
	// lwz r11,7600(r31)
	ctx.current_instruction = 0x880E3164;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7600);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880e31d4
	if (!ctx.cr6.eq) goto loc_880E31D4;
	// lwz r9,30328(r31)
	ctx.current_instruction = 0x880E3170;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 30328);
	// ld r11,736(r31)
	ctx.current_instruction = 0x880E3174;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// cmpd cr6,r11,r8
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r8.s64, ctx.xer);
	// bne cr6,0x880e31a0
	if (!ctx.cr6.eq) goto loc_880E31A0;
	// lwz r11,8000(r31)
	ctx.current_instruction = 0x880E3184;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8000);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,80(r1)
	ctx.current_instruction = 0x880E318C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x880E3190;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fmul f11,f12,f27
	ctx.f11.f64 = ctx.f12.f64 * ctx.f27.f64;
	// b 0x880e31c8
	goto loc_880E31C8;
loc_880E31A0:
	// lwz r9,30332(r31)
	ctx.current_instruction = 0x880E31A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 30332);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// cmpd cr6,r11,r8
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r8.s64, ctx.xer);
	// bne cr6,0x880e31d4
	if (!ctx.cr6.eq) goto loc_880E31D4;
	// lwz r11,8000(r31)
	ctx.current_instruction = 0x880E31B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8000);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,80(r1)
	ctx.current_instruction = 0x880E31B8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x880E31BC;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fmul f11,f12,f28
	ctx.f11.f64 = ctx.f12.f64 * ctx.f28.f64;
loc_880E31C8:
	// li r9,8016
	ctx.r9.s64 = 8016;
	// fctiwz f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,r31,r9
	ctx.current_instruction = 0x880E31D0;
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.f10.u32);
loc_880E31D4:
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lwz r4,8016(r31)
	ctx.current_instruction = 0x880E31D8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8016);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r9,7952(r31)
	ctx.current_instruction = 0x880E31E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7952);
	// std r11,80(r1)
	ctx.current_instruction = 0x880E31E4;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x880E31E8;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r8,8000(r31)
	ctx.current_instruction = 0x880E31F0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8000);
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// lfd f2,8624(r10)
	ctx.current_instruction = 0x880E31F8;
	ctx.f2.u64 = REX_LOAD_U64(ctx.r10.u32 + 8624);
	// subf r30,r4,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r4.u64;
	// subf r29,r4,r8
	ctx.r29.u64 = ctx.r8.u64 - ctx.r4.u64;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f2
	ctx.cr6.compare(ctx.f12.f64, ctx.f2.f64);
	// ble cr6,0x880e3214
	if (!ctx.cr6.gt) goto loc_880E3214;
	// stfd f0,688(r31)
	ctx.current_instruction = 0x880E3210;
	REX_STORE_U64(ctx.r31.u32 + 688, ctx.f0.u64);
loc_880E3214:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,20256(r31)
	ctx.current_instruction = 0x880E3218;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20256);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f30,9656(r11)
	ctx.current_instruction = 0x880E3228;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 9656);
	// lfd f29,12088(r9)
	ctx.current_instruction = 0x880E322C;
	ctx.f29.u64 = REX_LOAD_U64(ctx.r9.u32 + 12088);
	// lfd f31,1488(r8)
	ctx.current_instruction = 0x880E3230;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r8.u32 + 1488);
	// beq cr6,0x880e32b4
	if (ctx.cr6.eq) goto loc_880E32B4;
	// lwz r5,7948(r31)
	ctx.current_instruction = 0x880E3238;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7948);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880e32b4
	if (ctx.cr6.eq) goto loc_880E32B4;
	// lwz r11,7884(r31)
	ctx.current_instruction = 0x880E3244;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7884);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// beq cr6,0x880e3284
	if (ctx.cr6.eq) goto loc_880E3284;
	// std r10,80(r1)
	ctx.current_instruction = 0x880E3254;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x880E3258;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmul f12,f13,f29
	ctx.f12.f64 = ctx.f13.f64 * ctx.f29.f64;
	// lfd f1,688(r31)
	ctx.current_instruction = 0x880E3268;
	ctx.f1.u64 = REX_LOAD_U64(ctx.r31.u32 + 688);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	ctx.current_instruction = 0x880E3270;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r6,84(r1)
	ctx.current_instruction = 0x880E3274;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x880e2a88
	ctx.lr = 0x880E327C;
	sub_880E2A88(ctx, base);
loc_880E327C:
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// b 0x880e32b8
	goto loc_880E32B8;
loc_880E3284:
	// std r10,80(r1)
	ctx.current_instruction = 0x880E3284;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f1,688(r31)
	ctx.current_instruction = 0x880E328C;
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r31.u32 + 688);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x880E3290;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmul f12,f13,f30
	ctx.f12.f64 = ctx.f13.f64 * ctx.f30.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	ctx.current_instruction = 0x880E32A0;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r6,84(r1)
	ctx.current_instruction = 0x880E32A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x880e2a88
	ctx.lr = 0x880E32AC;
	sub_880E2A88(ctx, base);
loc_880E32AC:
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// b 0x880e32b8
	goto loc_880E32B8;
loc_880E32B4:
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
loc_880E32B8:
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lfd f1,688(r31)
	ctx.current_instruction = 0x880E32BC;
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r31.u32 + 688);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e2b38
	ctx.lr = 0x880E32D0;
	sub_880E2B38(ctx, base);
loc_880E32D0:
	// fmr f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f1.f64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x880e32e8
	if (ctx.cr6.eq) goto loc_880E32E8;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x880e32e8
	if (!ctx.cr6.lt) goto loc_880E32E8;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
loc_880E32E8:
	// lwz r11,7600(r31)
	ctx.current_instruction = 0x880E32E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e3308
	if (ctx.cr6.eq) goto loc_880E3308;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x880e3308
	if (!ctx.cr6.eq) goto loc_880E3308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e29c0
	ctx.lr = 0x880E3304;
	sub_880E29C0(ctx, base);
loc_880E3304:
	// b 0x880e330c
	goto loc_880E330C;
loc_880E3308:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_880E330C:
	// lwz r11,7952(r31)
	ctx.current_instruction = 0x880E330C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7952);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lwz r7,8000(r31)
	ctx.current_instruction = 0x880E3314;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8000);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// ld r11,7744(r31)
	ctx.current_instruction = 0x880E3320;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 7744);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// ld r10,7704(r31)
	ctx.current_instruction = 0x880E3328;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 7704);
	// std r5,80(r1)
	ctx.current_instruction = 0x880E332C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x880E3330;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	ctx.current_instruction = 0x880E3334;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x880E3338;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// rldicr r9,r11,2,61
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfd f10,12296(r6)
	ctx.current_instruction = 0x880E334C;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r6.u32 + 12296);
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// rldicr r9,r3,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// lfd f7,12144(r8)
	ctx.current_instruction = 0x880E3358;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r8.u32 + 12144);
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// fdiv f8,f9,f11
	ctx.f8.f64 = ctx.f9.f64 / ctx.f11.f64;
	// fsub f11,f2,f8
	ctx.f11.f64 = ctx.f2.f64 - ctx.f8.f64;
	// ble cr6,0x880e33a4
	if (!ctx.cr6.gt) goto loc_880E33A4;
	// rldicr r9,r11,2,61
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// ld r8,7712(r31)
	ctx.current_instruction = 0x880E3370;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 7712);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// ble cr6,0x880e33a4
	if (!ctx.cr6.gt) goto loc_880E33A4;
	// fcmpu cr6,f11,f7
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// ble cr6,0x880e3394
	if (!ctx.cr6.gt) goto loc_880E3394;
	// fmr f12,f10
	ctx.f12.f64 = ctx.f10.f64;
	// b 0x880e33a4
	goto loc_880E33A4;
loc_880E3394:
	// fcmpu cr6,f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// ble cr6,0x880e33a4
	if (!ctx.cr6.gt) goto loc_880E33A4;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f12,12560(r11)
	ctx.current_instruction = 0x880E33A0;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 12560);
loc_880E33A4:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r6,30304(r31)
	ctx.current_instruction = 0x880E33A8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 30304);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lfd f8,12416(r11)
	ctx.current_instruction = 0x880E33B4;
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 12416);
	// lfd f9,12536(r10)
	ctx.current_instruction = 0x880E33B8;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r10.u32 + 12536);
	// beq cr6,0x880e34fc
	if (ctx.cr6.eq) goto loc_880E34FC;
	// lwz r11,7600(r31)
	ctx.current_instruction = 0x880E33C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7600);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880e34fc
	if (!ctx.cr6.eq) goto loc_880E34FC;
	// lwz r11,30332(r31)
	ctx.current_instruction = 0x880E33CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30332);
	// ld r9,736(r31)
	ctx.current_instruction = 0x880E33D0;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// cmpd cr6,r9,r10
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x880e34fc
	if (ctx.cr6.lt) goto loc_880E34FC;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880E33E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f13,7888(r31)
	ctx.current_instruction = 0x880E33E8;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lfd f6,7688(r31)
	ctx.current_instruction = 0x880E33F4;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// li r11,6
	ctx.r11.s64 = 6;
	// std r7,80(r1)
	ctx.current_instruction = 0x880E33FC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,12392(r10)
	ctx.current_instruction = 0x880E3400;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12392);
	// li r10,10
	ctx.r10.s64 = 10;
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfd f13,9672(r8)
	ctx.current_instruction = 0x880E340C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 9672);
	// lfd f4,80(r1)
	ctx.current_instruction = 0x880E3410;
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f4
	ctx.f1.f64 = double(ctx.f4.s64);
	// fmul f6,f1,f6
	ctx.f6.f64 = ctx.f1.f64 * ctx.f6.f64;
	// fdiv f0,f0,f6
	ctx.f0.f64 = ctx.f0.f64 / ctx.f6.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x880e3430
	if (ctx.cr6.gt) goto loc_880E3430;
	// li r10,15
	ctx.r10.s64 = 15;
	// b 0x880e343c
	goto loc_880E343C;
loc_880E3430:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bgt cr6,0x880e343c
	if (ctx.cr6.gt) goto loc_880E343C;
	// li r10,13
	ctx.r10.s64 = 13;
loc_880E343C:
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lfd f13,14808(r8)
	ctx.current_instruction = 0x880E3440;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 14808);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x880e3464
	if (!ctx.cr6.lt) goto loc_880E3464;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lfd f13,14800(r8)
	ctx.current_instruction = 0x880E3450;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 14800);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x880e3464
	if (ctx.cr6.lt) goto loc_880E3464;
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x880e3478
	goto loc_880E3478;
loc_880E3464:
	// fcmpu cr6,f11,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// bge cr6,0x880e3478
	if (!ctx.cr6.lt) goto loc_880E3478;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x880e3478
	if (ctx.cr6.lt) goto loc_880E3478;
	// li r11,12
	ctx.r11.s64 = 12;
loc_880E3478:
	// lwz r8,30324(r31)
	ctx.current_instruction = 0x880E3478;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 30324);
	// subf r7,r11,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r11.u64;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// cmpd cr6,r9,r5
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r5.s64, ctx.xer);
	// blt cr6,0x880e34e4
	if (ctx.cr6.lt) goto loc_880E34E4;
	// lwz r11,8024(r31)
	ctx.current_instruction = 0x880E348C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e34e4
	if (!ctx.cr6.eq) goto loc_880E34E4;
	// fcmpu cr6,f11,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// bge cr6,0x880e34b4
	if (!ctx.cr6.lt) goto loc_880E34B4;
	// lwz r11,676(r31)
	ctx.current_instruction = 0x880E34A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880e34b4
	if (ctx.cr6.lt) goto loc_880E34B4;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// b 0x880e3508
	goto loc_880E3508;
loc_880E34B4:
	// fmul f13,f3,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f3.f64 * ctx.f8.f64;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r9,676(r31)
	ctx.current_instruction = 0x880E34BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// lfd f0,14792(r11)
	ctx.current_instruction = 0x880E34C4;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 14792);
	// fmadd f12,f5,f0,f13
	ctx.f12.f64 = std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f13.f64);
	// fsub f0,f12,f2
	ctx.f0.f64 = ctx.f12.f64 - ctx.f2.f64;
	// blt cr6,0x880e3508
	if (ctx.cr6.lt) goto loc_880E3508;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,12384(r11)
	ctx.current_instruction = 0x880E34D8;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12384);
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// b 0x880e3508
	goto loc_880E3508;
loc_880E34E4:
	// fmul f13,f3,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f3.f64 * ctx.f8.f64;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,14792(r11)
	ctx.current_instruction = 0x880E34EC;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 14792);
	// fmadd f6,f5,f0,f13
	ctx.f6.f64 = std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f13.f64);
	// fadd f0,f6,f12
	ctx.f0.f64 = ctx.f6.f64 + ctx.f12.f64;
	// b 0x880e3508
	goto loc_880E3508;
loc_880E34FC:
	// fadd f0,f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64 + ctx.f1.f64;
	// fadd f13,f0,f5
	ctx.f13.f64 = ctx.f0.f64 + ctx.f5.f64;
	// fadd f0,f13,f3
	ctx.f0.f64 = ctx.f13.f64 + ctx.f3.f64;
loc_880E3508:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r7,7600(r31)
	ctx.current_instruction = 0x880E350C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7600);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// lfd f12,14696(r11)
	ctx.current_instruction = 0x880E3514;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 14696);
	// bne cr6,0x880e360c
	if (!ctx.cr6.eq) goto loc_880E360C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x880e3594
	if (ctx.cr6.eq) goto loc_880E3594;
	// lwz r11,2816(r31)
	ctx.current_instruction = 0x880E3524;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e3534
	if (ctx.cr6.eq) goto loc_880E3534;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_880E3534:
	// li r8,31
	ctx.r8.s64 = 31;
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x880e3548
	if (!ctx.cr6.gt) goto loc_880E3548;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// b 0x880e354c
	goto loc_880E354C;
loc_880E3548:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_880E354C:
	// lwz r10,676(r31)
	ctx.current_instruction = 0x880E354C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lwz r11,30316(r31)
	ctx.current_instruction = 0x880E3554;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30316);
	// stfd f13,80(r1)
	ctx.current_instruction = 0x880E3558;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x880E355C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880e3570
	if (ctx.cr6.eq) goto loc_880E3570;
	// lwz r8,28(r11)
	ctx.current_instruction = 0x880E356C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
loc_880E3570:
	// fcmpu cr6,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x880e360c
	if (!ctx.cr6.lt) goto loc_880E360C;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x880e360c
	if (!ctx.cr6.gt) goto loc_880E360C;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880e360c
	if (ctx.cr6.lt) goto loc_880E360C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x880e3638
	goto loc_880E3638;
loc_880E3594:
	// lwz r11,8024(r31)
	ctx.current_instruction = 0x880E3594;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e35f8
	if (ctx.cr6.eq) goto loc_880E35F8;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x880e35ac
	if (!ctx.cr6.lt) goto loc_880E35AC;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_880E35AC:
	// lwz r11,676(r31)
	ctx.current_instruction = 0x880E35AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// lfd f6,688(r31)
	ctx.current_instruction = 0x880E35B0;
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r31.u32 + 688);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	ctx.current_instruction = 0x880E35B8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f5,80(r1)
	ctx.current_instruction = 0x880E35BC;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f5
	ctx.f13.f64 = double(ctx.f5.s64);
	// fcmpu cr6,f6,f13
	ctx.cr6.compare(ctx.f6.f64, ctx.f13.f64);
	// bge cr6,0x880e35d0
	if (!ctx.cr6.lt) goto loc_880E35D0;
	// stfd f13,688(r31)
	ctx.current_instruction = 0x880E35CC;
	REX_STORE_U64(ctx.r31.u32 + 688, ctx.f13.u64);
loc_880E35D0:
	// lwz r11,8028(r31)
	ctx.current_instruction = 0x880E35D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8028);
	// lfd f13,688(r31)
	ctx.current_instruction = 0x880E35D4;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 688);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	ctx.current_instruction = 0x880E35E4;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f6,80(r1)
	ctx.current_instruction = 0x880E35E8;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fadd f4,f5,f13
	ctx.f4.f64 = ctx.f5.f64 + ctx.f13.f64;
	// stfd f4,688(r31)
	ctx.current_instruction = 0x880E35F4;
	REX_STORE_U64(ctx.r31.u32 + 688, ctx.f4.u64);
loc_880E35F8:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,14784(r11)
	ctx.current_instruction = 0x880E35FC;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 14784);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x880e361c
	if (!ctx.cr6.lt) goto loc_880E361C;
	// fadd f0,f0,f29
	ctx.f0.f64 = ctx.f0.f64 + ctx.f29.f64;
loc_880E360C:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x880e362c
	if (!ctx.cr6.gt) goto loc_880E362C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x880e3638
	goto loc_880E3638;
loc_880E361C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x880e360c
	if (!ctx.cr6.lt) goto loc_880E360C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x880e3638
	goto loc_880E3638;
loc_880E362C:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x880e3638
	if (!ctx.cr6.lt) goto loc_880E3638;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_880E3638:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x880e364c
	if (ctx.cr6.eq) goto loc_880E364C;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x880e364c
	if (!ctx.cr6.lt) goto loc_880E364C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_880E364C:
	// lfd f13,688(r31)
	ctx.current_instruction = 0x880E364C;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 688);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// fadd f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 + ctx.f0.f64;
	// stfd f13,688(r31)
	ctx.current_instruction = 0x880E3658;
	REX_STORE_U64(ctx.r31.u32 + 688, ctx.f13.u64);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// fadd f10,f13,f29
	ctx.f10.f64 = ctx.f13.f64 + ctx.f29.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	ctx.current_instruction = 0x880E3668;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x880E366C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x880e36d8
	if (ctx.cr6.eq) goto loc_880E36D8;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x880e36d8
	if (!ctx.cr6.eq) goto loc_880E36D8;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,12344(r11)
	ctx.current_instruction = 0x880E3680;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12344);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x880e37c4
	if (!ctx.cr6.lt) goto loc_880E37C4;
	// lwz r11,8024(r31)
	ctx.current_instruction = 0x880E368C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e37c4
	if (!ctx.cr6.eq) goto loc_880E37C4;
	// fcmpu cr6,f11,f7
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// blt cr6,0x880e36a8
	if (ctx.cr6.lt) goto loc_880E36A8;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x880e37c8
	goto loc_880E37C8;
loc_880E36A8:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,14776(r11)
	ctx.current_instruction = 0x880E36AC;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 14776);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x880e36c0
	if (ctx.cr6.lt) goto loc_880E36C0;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x880e37c8
	goto loc_880E37C8;
loc_880E36C0:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,14768(r11)
	ctx.current_instruction = 0x880E36C4;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 14768);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x880e373c
	if (ctx.cr6.lt) goto loc_880E373C;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x880e37c8
	goto loc_880E37C8;
loc_880E36D8:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f0,12344(r10)
	ctx.current_instruction = 0x880E36DC;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12344);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x880e37c4
	if (!ctx.cr6.lt) goto loc_880E37C4;
	// lwz r10,8024(r31)
	ctx.current_instruction = 0x880E36E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8024);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880e37c4
	if (!ctx.cr6.eq) goto loc_880E37C4;
	// fcmpu cr6,f11,f7
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// blt cr6,0x880e3704
	if (ctx.cr6.lt) goto loc_880E3704;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x880e37c8
	goto loc_880E37C8;
loc_880E3704:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f0,14776(r10)
	ctx.current_instruction = 0x880E3708;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 14776);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x880e371c
	if (ctx.cr6.lt) goto loc_880E371C;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x880e37c8
	goto loc_880E37C8;
loc_880E371C:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f0,14768(r10)
	ctx.current_instruction = 0x880E3720;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 14768);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x880e3734
	if (ctx.cr6.lt) goto loc_880E3734;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x880e37c8
	goto loc_880E37C8;
loc_880E3734:
	// fcmpu cr6,f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// blt cr6,0x880e3744
	if (ctx.cr6.lt) goto loc_880E3744;
loc_880E373C:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x880e37c8
	goto loc_880E37C8;
loc_880E3744:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f0,12552(r10)
	ctx.current_instruction = 0x880E3748;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12552);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x880e375c
	if (ctx.cr6.lt) goto loc_880E375C;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x880e37c8
	goto loc_880E37C8;
loc_880E375C:
	// fcmpu cr6,f11,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// blt cr6,0x880e376c
	if (ctx.cr6.lt) goto loc_880E376C;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x880e37c8
	goto loc_880E37C8;
loc_880E376C:
	// fcmpu cr6,f11,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// blt cr6,0x880e377c
	if (ctx.cr6.lt) goto loc_880E377C;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x880e37c8
	goto loc_880E37C8;
loc_880E377C:
	// fcmpu cr6,f11,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f27.f64);
	// blt cr6,0x880e378c
	if (ctx.cr6.lt) goto loc_880E378C;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x880e37c8
	goto loc_880E37C8;
loc_880E378C:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f0,14752(r10)
	ctx.current_instruction = 0x880E3790;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 14752);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x880e37a4
	if (ctx.cr6.lt) goto loc_880E37A4;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x880e37c8
	goto loc_880E37C8;
loc_880E37A4:
	// fcmpu cr6,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x880e37b4
	if (ctx.cr6.lt) goto loc_880E37B4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x880e37c8
	goto loc_880E37C8;
loc_880E37B4:
	// fcmpu cr6,f11,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f28.f64);
	// blt cr6,0x880e37c8
	if (ctx.cr6.lt) goto loc_880E37C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x880e37c8
	goto loc_880E37C8;
loc_880E37C4:
	// li r11,12
	ctx.r11.s64 = 12;
loc_880E37C8:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x880E37C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880e37f0
	if (ctx.cr6.eq) goto loc_880E37F0;
	// mulli r10,r10,13
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(13));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-30681
	ctx.r10.s64 = -2010710016;
	// addi r9,r11,-13
	ctx.r9.s64 = ctx.r11.s64 + -13;
	// addi r7,r10,-2336
	ctx.r7.s64 = ctx.r10.s64 + -2336;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r7
	ctx.current_instruction = 0x880E37EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
loc_880E37F0:
	// lwz r10,7912(r31)
	ctx.current_instruction = 0x880E37F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7912);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// ble cr6,0x880e3804
	if (!ctx.cr6.gt) goto loc_880E3804;
	// li r11,30
	ctx.r11.s64 = 30;
loc_880E3804:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// stw r11,7908(r31)
	ctx.current_instruction = 0x880E3808;
	REX_STORE_U32(ctx.r31.u32 + 7908, ctx.r11.u32);
	// lfd f0,14744(r10)
	ctx.current_instruction = 0x880E380C;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 14744);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x880e3828
	if (ctx.cr6.lt) goto loc_880E3828;
	// lwz r10,676(r31)
	ctx.current_instruction = 0x880E3818;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880e3828
	if (!ctx.cr6.gt) goto loc_880E3828;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_880E3828:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// blt cr6,0x880e3838
	if (ctx.cr6.lt) goto loc_880E3838;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_880E3838:
	// lwz r9,7932(r31)
	ctx.current_instruction = 0x880E3838;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7932);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880e384c
	if (!ctx.cr6.gt) goto loc_880E384C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x880e3858
	goto loc_880E3858;
loc_880E384C:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880e3858
	if (!ctx.cr6.lt) goto loc_880E3858;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_880E3858:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x880e38dc
	if (ctx.cr6.gt) goto loc_880E38DC;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x880e38dc
	if (ctx.cr6.eq) goto loc_880E38DC;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	ctx.current_instruction = 0x880E386C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x880E3870;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fsub f11,f13,f12
	ctx.f11.f64 = ctx.f13.f64 - ctx.f12.f64;
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, ctx.f29.f64);
	// bge cr6,0x880e38dc
	if (!ctx.cr6.lt) goto loc_880E38DC;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,12528(r11)
	ctx.current_instruction = 0x880E388C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12528);
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	ctx.current_instruction = 0x880E3898;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880E389C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880e38d8
	if (!ctx.cr6.gt) goto loc_880E38D8;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	ctx.current_instruction = 0x880E38AC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.current_instruction = 0x880E38B0;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fadd f10,f11,f29
	ctx.f10.f64 = ctx.f11.f64 + ctx.f29.f64;
	// fsub f9,f13,f10
	ctx.f9.f64 = ctx.f13.f64 - ctx.f10.f64;
	// fabs f8,f9
	ctx.f8.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bge cr6,0x880e38dc
	if (!ctx.cr6.lt) goto loc_880E38DC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1424(r31)
	ctx.current_instruction = 0x880E38D0;
	REX_STORE_U32(ctx.r31.u32 + 1424, ctx.r10.u32);
	// b 0x880e38e0
	goto loc_880E38E0;
loc_880E38D8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_880E38DC:
	// stw r26,1424(r31)
	ctx.current_instruction = 0x880E38DC;
	REX_STORE_U32(ctx.r31.u32 + 1424, ctx.r26.u32);
loc_880E38E0:
	// lwz r10,8024(r31)
	ctx.current_instruction = 0x880E38E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8024);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880e390c
	if (ctx.cr6.eq) goto loc_880E390C;
	// lwz r10,7904(r31)
	ctx.current_instruction = 0x880E38EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7904);
	// li r9,100
	ctx.r9.s64 = 100;
	// mulli r8,r10,14
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14));
	// divw r7,r8,r9
	ctx.r7.u64 = uint32_t((ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0);
	// subfic r10,r7,22
	ctx.xer.ca = ctx.r7.u32 <= 22;
	ctx.r10.u64 = static_cast<uint64_t>(22) - ctx.r7.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e390c
	if (ctx.cr6.gt) goto loc_880E390C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_880E390C:
	// lwz r10,676(r31)
	ctx.current_instruction = 0x880E390C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880e3924
	if (ctx.cr6.lt) goto loc_880E3924;
	// stw r9,676(r31)
	ctx.current_instruction = 0x880E391C;
	REX_STORE_U32(ctx.r31.u32 + 676, ctx.r9.u32);
	// b 0x880e393c
	goto loc_880E393C;
loc_880E3924:
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e3938
	if (ctx.cr6.gt) goto loc_880E3938;
	// stw r10,676(r31)
	ctx.current_instruction = 0x880E3930;
	REX_STORE_U32(ctx.r31.u32 + 676, ctx.r10.u32);
	// b 0x880e393c
	goto loc_880E393C;
loc_880E3938:
	// stw r11,676(r31)
	ctx.current_instruction = 0x880E3938;
	REX_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
loc_880E393C:
	// lwz r11,20256(r31)
	ctx.current_instruction = 0x880E393C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e3964
	if (!ctx.cr6.eq) goto loc_880E3964;
	// lwz r10,672(r31)
	ctx.current_instruction = 0x880E3948;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// lwz r11,676(r31)
	ctx.current_instruction = 0x880E394C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e3960
	if (ctx.cr6.gt) goto loc_880E3960;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_880E3960:
	// stw r11,676(r31)
	ctx.current_instruction = 0x880E3960;
	REX_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
loc_880E3964:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x881ef2d0
	ctx.lr = 0x880E3970;
	__restfpr_27(ctx, base);
loc_880E3970:
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F8B08) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880F8B08);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F8B08;
	ctx.current_instruction = 0x880F8B08;
	// b 0x880f8a48
	sub_880F8A48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F8B10) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F8B10;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F8B10) {
			switch (rex_dispatch_address) {
				case 0x880F8B18:
				case 0x880F8B6C:
				case 0x880F8B78:
				case 0x880F8BF4:
				case 0x880F8C0C:
				case 0x880F8C38:
				case 0x880F8C50:
				case 0x880F8C7C:
				case 0x880F8C94:
				case 0x880F8CB8:
				case 0x880F8CD8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F8B10;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F8B18: goto loc_880F8B18;
		case 0x880F8B6C: goto loc_880F8B6C;
		case 0x880F8B78: goto loc_880F8B78;
		case 0x880F8BF4: goto loc_880F8BF4;
		case 0x880F8C0C: goto loc_880F8C0C;
		case 0x880F8C38: goto loc_880F8C38;
		case 0x880F8C50: goto loc_880F8C50;
		case 0x880F8C7C: goto loc_880F8C7C;
		case 0x880F8C94: goto loc_880F8C94;
		case 0x880F8CB8: goto loc_880F8CB8;
		case 0x880F8CD8: goto loc_880F8CD8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880F8B18;
	__savegprlr_26(ctx, base);
loc_880F8B18:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880F8B18;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,4(r3)
	ctx.current_instruction = 0x880F8B24;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r30,0(r3)
	ctx.current_instruction = 0x880F8B2C;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,12(r3)
	ctx.current_instruction = 0x880F8B34;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	ctx.current_instruction = 0x880F8B3C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r30,20(r3)
	ctx.current_instruction = 0x880F8B44;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r30,16(r3)
	ctx.current_instruction = 0x880F8B4C;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// stw r11,28(r3)
	ctx.current_instruction = 0x880F8B54;
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,24(r3)
	ctx.current_instruction = 0x880F8B58;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r30,56(r3)
	ctx.current_instruction = 0x880F8B5C;
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
	// stw r30,60(r3)
	ctx.current_instruction = 0x880F8B60;
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r30.u32);
	// stw r30,64(r3)
	ctx.current_instruction = 0x880F8B64;
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r30.u32);
	// bl 0x880cad40
	ctx.lr = 0x880F8B6C;
	sub_880CAD40(ctx, base);
loc_880F8B6C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880cad40
	ctx.lr = 0x880F8B78;
	sub_880CAD40(ctx, base);
loc_880F8B78:
	// lwz r10,12(r31)
	ctx.current_instruction = 0x880F8B78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.current_instruction = 0x880F8B7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// lwz r8,8(r31)
	ctx.current_instruction = 0x880F8B84;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r7,0(r31)
	ctx.current_instruction = 0x880F8B8C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// subf r6,r9,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r9.u64;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mullw r11,r5,r6
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// stw r11,32(r31)
	ctx.current_instruction = 0x880F8BA4;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r8,28(r31)
	ctx.current_instruction = 0x880F8BA8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,20(r31)
	ctx.current_instruction = 0x880F8BAC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.current_instruction = 0x880F8BB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,16(r31)
	ctx.current_instruction = 0x880F8BB4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r5,40(r31)
	ctx.current_instruction = 0x880F8BB8;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// subf r5,r9,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r6,44(r31)
	ctx.current_instruction = 0x880F8BC0;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// stw r11,36(r31)
	ctx.current_instruction = 0x880F8BCC;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r10,24(r31)
	ctx.current_instruction = 0x880F8BD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,16(r31)
	ctx.current_instruction = 0x880F8BD4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,48(r31)
	ctx.current_instruction = 0x880F8BDC;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// lwz r7,28(r31)
	ctx.current_instruction = 0x880F8BE0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,20(r31)
	ctx.current_instruction = 0x880F8BE4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// subf r5,r6,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r6.u64;
	// stw r5,52(r31)
	ctx.current_instruction = 0x880F8BEC;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// bl 0x88050340
	ctx.lr = 0x880F8BF4;
	sub_88050340(ctx, base);
loc_880F8BF4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880f8c10
	if (ctx.cr6.eq) goto loc_880F8C10;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8813c6a8
	ctx.lr = 0x880F8C0C;
	sub_8813C6A8(ctx, base);
loc_880F8C0C:
	// b 0x880f8c14
	goto loc_880F8C14;
loc_880F8C10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_880F8C14:
	// stw r3,60(r31)
	ctx.current_instruction = 0x880F8C14;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880f8ca8
	if (ctx.cr6.eq) goto loc_880F8CA8;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x880F8C20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f8cd0
	if (!ctx.cr6.eq) goto loc_880F8CD0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x88050340
	ctx.lr = 0x880F8C38;
	sub_88050340(ctx, base);
loc_880F8C38:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880f8c54
	if (ctx.cr6.eq) goto loc_880F8C54;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8813c6a8
	ctx.lr = 0x880F8C50;
	sub_8813C6A8(ctx, base);
loc_880F8C50:
	// b 0x880f8c58
	goto loc_880F8C58;
loc_880F8C54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_880F8C58:
	// stw r3,64(r31)
	ctx.current_instruction = 0x880F8C58;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880f8ca8
	if (ctx.cr6.eq) goto loc_880F8CA8;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x880F8C64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f8cd0
	if (!ctx.cr6.eq) goto loc_880F8CD0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x88050340
	ctx.lr = 0x880F8C7C;
	sub_88050340(ctx, base);
loc_880F8C7C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880f8c98
	if (ctx.cr6.eq) goto loc_880F8C98;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8813c6a8
	ctx.lr = 0x880F8C94;
	sub_8813C6A8(ctx, base);
loc_880F8C94:
	// b 0x880f8c9c
	goto loc_880F8C9C;
loc_880F8C98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_880F8C9C:
	// stw r3,56(r31)
	ctx.current_instruction = 0x880F8C9C;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880f8cc4
	if (!ctx.cr6.eq) goto loc_880F8CC4;
loc_880F8CA8:
	// li r11,-3
	ctx.r11.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r27)
	ctx.current_instruction = 0x880F8CB0;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x880f8a48
	ctx.lr = 0x880F8CB8;
	sub_880F8A48(ctx, base);
loc_880F8CB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880F8CC4:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x880F8CC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f8cd8
	if (ctx.cr6.eq) goto loc_880F8CD8;
loc_880F8CD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f8a48
	ctx.lr = 0x880F8CD8;
	sub_880F8A48(ctx, base);
loc_880F8CD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FC618) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FC618;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FC618) {
			switch (rex_dispatch_address) {
				case 0x880FC620:
				case 0x880FC67C:
				case 0x880FC688:
				case 0x880FC730:
				case 0x880FC76C:
				case 0x880FC7A8:
				case 0x880FC7F8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FC618;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FC620: goto loc_880FC620;
		case 0x880FC67C: goto loc_880FC67C;
		case 0x880FC688: goto loc_880FC688;
		case 0x880FC730: goto loc_880FC730;
		case 0x880FC76C: goto loc_880FC76C;
		case 0x880FC7A8: goto loc_880FC7A8;
		case 0x880FC7F8: goto loc_880FC7F8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x880FC620;
	__savegprlr_19(ctx, base);
loc_880FC620:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x880FC620;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r11,64(r3)
	ctx.current_instruction = 0x880FC62C;
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,68(r3)
	ctx.current_instruction = 0x880FC634;
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,88(r3)
	ctx.current_instruction = 0x880FC63C;
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// stw r11,92(r3)
	ctx.current_instruction = 0x880FC644;
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r11,112(r3)
	ctx.current_instruction = 0x880FC64C;
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// stw r11,116(r3)
	ctx.current_instruction = 0x880FC654;
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// addi r22,r3,64
	ctx.r22.s64 = ctx.r3.s64 + 64;
	// addi r20,r3,68
	ctx.r20.s64 = ctx.r3.s64 + 68;
	// addi r25,r3,88
	ctx.r25.s64 = ctx.r3.s64 + 88;
	// addi r28,r3,92
	ctx.r28.s64 = ctx.r3.s64 + 92;
	// addi r23,r3,112
	ctx.r23.s64 = ctx.r3.s64 + 112;
	// addi r26,r3,116
	ctx.r26.s64 = ctx.r3.s64 + 116;
	// bl 0x880cad40
	ctx.lr = 0x880FC67C;
	sub_880CAD40(ctx, base);
loc_880FC67C:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880cad40
	ctx.lr = 0x880FC688;
	sub_880CAD40(ctx, base);
loc_880FC688:
	// lwz r10,4(r31)
	ctx.current_instruction = 0x880FC688;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x880FC68C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r9,8(r31)
	ctx.current_instruction = 0x880FC694;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r31)
	ctx.current_instruction = 0x880FC698;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r7,32(r31)
	ctx.current_instruction = 0x880FC6A8;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// lwz r4,24(r31)
	ctx.current_instruction = 0x880FC6AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,16(r31)
	ctx.current_instruction = 0x880FC6B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,28(r31)
	ctx.current_instruction = 0x880FC6B4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,20(r31)
	ctx.current_instruction = 0x880FC6B8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,40(r31)
	ctx.current_instruction = 0x880FC6BC;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,44(r31)
	ctx.current_instruction = 0x880FC6C0;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// subf r8,r5,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r5.u64;
	// subf r9,r3,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// stw r7,36(r31)
	ctx.current_instruction = 0x880FC6D0;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// lwz r6,24(r31)
	ctx.current_instruction = 0x880FC6D4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,16(r31)
	ctx.current_instruction = 0x880FC6D8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// subf r4,r5,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r5.u64;
	// stw r4,48(r31)
	ctx.current_instruction = 0x880FC6E0;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// lwz r3,28(r31)
	ctx.current_instruction = 0x880FC6E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,20(r31)
	ctx.current_instruction = 0x880FC6E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// subf r8,r9,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r9.u64;
	// stw r8,52(r31)
	ctx.current_instruction = 0x880FC6F0;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// beq cr6,0x880fc704
	if (ctx.cr6.eq) goto loc_880FC704;
	// stw r29,56(r31)
	ctx.current_instruction = 0x880FC6F8;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r24,60(r31)
	ctx.current_instruction = 0x880FC6FC;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r24.u32);
	// b 0x880fc714
	goto loc_880FC714;
loc_880FC704:
	// addi r10,r10,-64
	ctx.r10.s64 = ctx.r10.s64 + -64;
	// addi r9,r11,-64
	ctx.r9.s64 = ctx.r11.s64 + -64;
	// stw r10,56(r31)
	ctx.current_instruction = 0x880FC70C;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r9,60(r31)
	ctx.current_instruction = 0x880FC710;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
loc_880FC714:
	// srawi r29,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r19.s32 >> 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880fc538
	ctx.lr = 0x880FC730;
	sub_880FC538(ctx, base);
loc_880FC730:
	// stw r3,0(r27)
	ctx.current_instruction = 0x880FC730;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880fc7f0
	if (!ctx.cr6.eq) goto loc_880FC7F0;
	// lwz r11,0(r25)
	ctx.current_instruction = 0x880FC73C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880fc7e8
	if (ctx.cr6.eq) goto loc_880FC7E8;
	// lwz r11,0(r28)
	ctx.current_instruction = 0x880FC748;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880fc7e8
	if (ctx.cr6.eq) goto loc_880FC7E8;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,120
	ctx.r5.s64 = ctx.r31.s64 + 120;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x880fc538
	ctx.lr = 0x880FC76C;
	sub_880FC538(ctx, base);
loc_880FC76C:
	// stw r3,0(r27)
	ctx.current_instruction = 0x880FC76C;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880fc7f0
	if (!ctx.cr6.eq) goto loc_880FC7F0;
	// lwz r11,0(r23)
	ctx.current_instruction = 0x880FC778;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880fc7e8
	if (ctx.cr6.eq) goto loc_880FC7E8;
	// lwz r11,0(r26)
	ctx.current_instruction = 0x880FC784;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880fc7e8
	if (ctx.cr6.eq) goto loc_880FC7E8;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r31,72
	ctx.r5.s64 = ctx.r31.s64 + 72;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x880fc538
	ctx.lr = 0x880FC7A8;
	sub_880FC538(ctx, base);
loc_880FC7A8:
	// stw r3,0(r27)
	ctx.current_instruction = 0x880FC7A8;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880fc7f0
	if (!ctx.cr6.eq) goto loc_880FC7F0;
	// lwz r11,0(r22)
	ctx.current_instruction = 0x880FC7B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880fc7e8
	if (ctx.cr6.eq) goto loc_880FC7E8;
	// lwz r10,0(r20)
	ctx.current_instruction = 0x880FC7C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880fc7e8
	if (ctx.cr6.eq) goto loc_880FC7E8;
	// lwz r10,0(r25)
	ctx.current_instruction = 0x880FC7CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,0(r23)
	ctx.current_instruction = 0x880FC7D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// stw r11,136(r31)
	ctx.current_instruction = 0x880FC7D4;
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r10,140(r31)
	ctx.current_instruction = 0x880FC7D8;
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// stw r9,144(r31)
	ctx.current_instruction = 0x880FC7DC;
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_880FC7E8:
	// li r11,-3
	ctx.r11.s64 = -3;
	// stw r11,0(r27)
	ctx.current_instruction = 0x880FC7EC;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_880FC7F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880fc4a8
	ctx.lr = 0x880FC7F8;
	sub_880FC4A8(ctx, base);
loc_880FC7F8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881035F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881035F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881035F8) {
			switch (rex_dispatch_address) {
				case 0x88103600:
				case 0x8810364C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881035F8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88103600: goto loc_88103600;
		case 0x8810364C: goto loc_8810364C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x88103600;
	__savegprlr_20(ctx, base);
loc_88103600:
	// stwu r1,-1008(r1)
	ctx.current_instruction = 0x88103600;
	ea = -1008 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,1100(r1)
	ctx.current_instruction = 0x88103608;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1100);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lwz r11,1108(r1)
	ctx.current_instruction = 0x88103610;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1108);
	// lwz r29,1092(r1)
	ctx.current_instruction = 0x88103614;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1092);
	// addi r7,r1,768
	ctx.r7.s64 = ctx.r1.s64 + 768;
	// addi r30,r1,640
	ctx.r30.s64 = ctx.r1.s64 + 640;
	// stw r7,116(r1)
	ctx.current_instruction = 0x88103620;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r28,r1,128
	ctx.r28.s64 = ctx.r1.s64 + 128;
	// stw r3,92(r1)
	ctx.current_instruction = 0x88103628;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,108(r1)
	ctx.current_instruction = 0x88103634;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r11,124(r1)
	ctx.current_instruction = 0x88103638;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,100(r1)
	ctx.current_instruction = 0x88103640;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r29,84(r1)
	ctx.current_instruction = 0x88103644;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x88101728
	ctx.lr = 0x8810364C;
	sub_88101728(ctx, base);
loc_8810364C:
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r6,r1,130
	ctx.r6.s64 = ctx.r1.s64 + 130;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// addi r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 2;
	// addi r27,r31,3
	ctx.r27.s64 = ctx.r31.s64 + 3;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
loc_88103678:
	// lhz r6,2(r10)
	ctx.current_instruction = 0x88103678;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r5,4(r10)
	ctx.current_instruction = 0x8810367C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lbzx r25,r11,r31
	ctx.current_instruction = 0x88103680;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// lhz r4,6(r10)
	ctx.current_instruction = 0x88103688;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r24,r5
	ctx.r24.s64 = ctx.r5.s16;
	// lhzu r6,8(r10)
	ctx.current_instruction = 0x88103690;
	ea = 8 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// subf r5,r25,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r25.u64;
	// lbzx r23,r29,r11
	ctx.current_instruction = 0x88103698;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lbzx r3,r28,r11
	ctx.current_instruction = 0x881036A0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// extsh r25,r6
	ctx.r25.s64 = ctx.r6.s16;
	// lbzx r22,r27,r11
	ctx.current_instruction = 0x881036A8;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// subf r6,r23,r24
	ctx.r6.u64 = ctx.r24.u64 - ctx.r23.u64;
	// addi r24,r5,128
	ctx.r24.s64 = ctx.r5.s64 + 128;
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
	// subf r5,r22,r25
	ctx.r5.u64 = ctx.r25.u64 - ctx.r22.u64;
	// addi r6,r6,128
	ctx.r6.s64 = ctx.r6.s64 + 128;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// srawi r3,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r24.s32 >> 31;
	// addi r5,r5,128
	ctx.r5.s64 = ctx.r5.s64 + 128;
	// srawi r25,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r6.s32 >> 31;
	// srawi r23,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r4.s32 >> 31;
	// srawi r22,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r5.s32 >> 31;
	// xor r24,r24,r3
	ctx.r24.u64 = ctx.r24.u64 ^ ctx.r3.u64;
	// xor r21,r6,r25
	ctx.r21.u64 = ctx.r6.u64 ^ ctx.r25.u64;
	// xor r20,r5,r22
	ctx.r20.u64 = ctx.r5.u64 ^ ctx.r22.u64;
	// xor r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r23.u64;
	// subf r6,r3,r24
	ctx.r6.u64 = ctx.r24.u64 - ctx.r3.u64;
	// subf r5,r25,r21
	ctx.r5.u64 = ctx.r21.u64 - ctx.r25.u64;
	// subf r4,r23,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r23.u64;
	// subf r3,r22,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r22.u64;
	// add r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88103678
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88103678;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r10,1416(r26)
	ctx.current_instruction = 0x88103714;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 1416);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r10,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subfc r8,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// eqv r7,r9,r11
	ctx.r7.u64 = ~(ctx.r9.u64 ^ ctx.r11.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// addi r1,r1,1008
	ctx.r1.s64 = ctx.r1.s64 + 1008;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88108488) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88108488;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88108488) {
			switch (rex_dispatch_address) {
				case 0x881084A4:
				case 0x881084B0:
				case 0x881084BC:
				case 0x881084D4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88108488;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881084A4: goto loc_881084A4;
		case 0x881084B0: goto loc_881084B0;
		case 0x881084BC: goto loc_881084BC;
		case 0x881084D4: goto loc_881084D4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8810848C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88108490;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88108494;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x880f40c0
	ctx.lr = 0x881084A4;
	sub_880F40C0(ctx, base);
loc_881084A4:
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f40c0
	ctx.lr = 0x881084B0;
	sub_880F40C0(ctx, base);
loc_881084B0:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f40c0
	ctx.lr = 0x881084BC;
	sub_880F40C0(ctx, base);
loc_881084BC:
	// lwz r11,2272(r31)
	ctx.current_instruction = 0x881084BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881084d4
	if (!ctx.cr6.eq) goto loc_881084D4;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f40c0
	ctx.lr = 0x881084D4;
	sub_880F40C0(ctx, base);
loc_881084D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881084D8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881084E0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88108AD8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88108AD8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88108AD8) {
			switch (rex_dispatch_address) {
				case 0x88108AE0:
				case 0x88108B9C:
				case 0x88108BBC:
				case 0x88108BDC:
				case 0x88108C60:
				case 0x88108C9C:
				case 0x88108CE4:
				case 0x88108D0C:
				case 0x88108D50:
				case 0x88108D88:
				case 0x88108DA4:
				case 0x88108DD0:
				case 0x88108E2C:
				case 0x88108E60:
				case 0x88108EA4:
				case 0x88108EDC:
				case 0x88108EF8:
				case 0x88108F24:
				case 0x88108F80:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88108AD8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88108AE0: goto loc_88108AE0;
		case 0x88108B9C: goto loc_88108B9C;
		case 0x88108BBC: goto loc_88108BBC;
		case 0x88108BDC: goto loc_88108BDC;
		case 0x88108C60: goto loc_88108C60;
		case 0x88108C9C: goto loc_88108C9C;
		case 0x88108CE4: goto loc_88108CE4;
		case 0x88108D0C: goto loc_88108D0C;
		case 0x88108D50: goto loc_88108D50;
		case 0x88108D88: goto loc_88108D88;
		case 0x88108DA4: goto loc_88108DA4;
		case 0x88108DD0: goto loc_88108DD0;
		case 0x88108E2C: goto loc_88108E2C;
		case 0x88108E60: goto loc_88108E60;
		case 0x88108EA4: goto loc_88108EA4;
		case 0x88108EDC: goto loc_88108EDC;
		case 0x88108EF8: goto loc_88108EF8;
		case 0x88108F24: goto loc_88108F24;
		case 0x88108F80: goto loc_88108F80;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x88108AE0;
	__savegprlr_17(ctx, base);
loc_88108AE0:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x88108AE0;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2272(r3)
	ctx.current_instruction = 0x88108AE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2272);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,1416(r3)
	ctx.current_instruction = 0x88108AEC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1416);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88108c0c
	if (ctx.cr6.eq) goto loc_88108C0C;
	// lwz r11,300(r1)
	ctx.current_instruction = 0x88108B08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r20,308(r1)
	ctx.current_instruction = 0x88108B0C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r28,r20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x88108f8c
	if (!ctx.cr6.lt) goto loc_88108F8C;
	// lwz r23,292(r1)
	ctx.current_instruction = 0x88108B1C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r22,r28,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r21,r28,1
	ctx.r21.s64 = ctx.r28.s64 + 1;
loc_88108B28:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x88108b44
	if (ctx.cr6.eq) goto loc_88108B44;
	// lwz r11,2264(r31)
	ctx.current_instruction = 0x88108B30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2264);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwzx r10,r11,r22
	ctx.current_instruction = 0x88108B38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88108b48
	if (ctx.cr6.eq) goto loc_88108B48;
loc_88108B44:
	// li r27,1
	ctx.r27.s64 = 1;
loc_88108B48:
	// lwz r11,1624(r31)
	ctx.current_instruction = 0x88108B48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x88108b60
	if (!ctx.cr6.eq) goto loc_88108B60;
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x88108b78
	if (ctx.cr6.eq) goto loc_88108B78;
loc_88108B60:
	// lwz r11,2264(r31)
	ctx.current_instruction = 0x88108B60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2264);
	// li r29,0
	ctx.r29.s64 = 0;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88108B6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88108b7c
	if (ctx.cr6.eq) goto loc_88108B7C;
loc_88108B78:
	// li r29,1
	ctx.r29.s64 = 1;
loc_88108B7C:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r5,1380(r31)
	ctx.current_instruction = 0x88108B80;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88105a88
	ctx.lr = 0x88108B9C;
	sub_88105A88(ctx, base);
loc_88108B9C:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88108BA4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88105c90
	ctx.lr = 0x88108BBC;
	sub_88105C90(ctx, base);
loc_88108BBC:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88108BC4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88105c90
	ctx.lr = 0x88108BDC;
	sub_88105C90(ctx, base);
loc_88108BDC:
	// lwz r11,1408(r31)
	ctx.current_instruction = 0x88108BDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1408);
	// lwz r10,1404(r31)
	ctx.current_instruction = 0x88108BE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1404);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpw cr6,r28,r20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r20.s32, ctx.xer);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r25,r10,r25
	ctx.r25.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// blt cr6,0x88108b28
	if (ctx.cr6.lt) goto loc_88108B28;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_88108C0C:
	// lwz r11,1624(r31)
	ctx.current_instruction = 0x88108C0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x88108c28
	if (!ctx.cr6.eq) goto loc_88108C28;
	// lwz r11,308(r1)
	ctx.current_instruction = 0x88108C1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r20,r11,-1
	ctx.r20.s64 = ctx.r11.s64 + -1;
	// b 0x88108c2c
	goto loc_88108C2C;
loc_88108C28:
	// lwz r20,308(r1)
	ctx.current_instruction = 0x88108C28;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_88108C2C:
	// cntlzw r11,r20
	ctx.r11.u64 = ctx.r20.u32 == 0 ? 32 : __builtin_clz(ctx.r20.u32);
	// lwz r19,292(r1)
	ctx.current_instruction = 0x88108C30;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// rlwinm r18,r11,27,31,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne cr6,0x88108c60
	if (!ctx.cr6.eq) goto loc_88108C60;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// lwz r5,1380(r31)
	ctx.current_instruction = 0x88108C44;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88105a88
	ctx.lr = 0x88108C60;
	sub_88105A88(ctx, base);
loc_88108C60:
	// lwz r21,300(r1)
	ctx.current_instruction = 0x88108C60;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r11,1404(r31)
	ctx.current_instruction = 0x88108C64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1404);
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
	// add r28,r11,r25
	ctx.r28.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bge cr6,0x88108cac
	if (!ctx.cr6.lt) goto loc_88108CAC;
	// subf r29,r21,r20
	ctx.r29.u64 = ctx.r20.u64 - ctx.r21.u64;
loc_88108C7C:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,1380(r31)
	ctx.current_instruction = 0x88108C80;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88105a88
	ctx.lr = 0x88108C9C;
	sub_88105A88(ctx, base);
loc_88108C9C:
	// lwz r11,1404(r31)
	ctx.current_instruction = 0x88108C9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1404);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bne 0x88108c7c
	if (!ctx.cr0.eq) goto loc_88108C7C;
loc_88108CAC:
	// lwz r11,1624(r31)
	ctx.current_instruction = 0x88108CAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x88108ce4
	if (!ctx.cr6.eq) goto loc_88108CE4;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x88108ce4
	if (!ctx.cr6.eq) goto loc_88108CE4;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r5,1380(r31)
	ctx.current_instruction = 0x88108CC8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88105a88
	ctx.lr = 0x88108CE4;
	sub_88105A88(ctx, base);
loc_88108CE4:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x88108d0c
	if (!ctx.cr6.eq) goto loc_88108D0C;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88108CF0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88105c90
	ctx.lr = 0x88108D0C;
	sub_88105C90(ctx, base);
loc_88108D0C:
	// lwz r11,1408(r31)
	ctx.current_instruction = 0x88108D0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1408);
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
	// add r25,r11,r26
	ctx.r25.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bge cr6,0x88108de0
	if (!ctx.cr6.lt) goto loc_88108DE0;
	// addi r22,r19,-1
	ctx.r22.s64 = ctx.r19.s64 + -1;
	// subf r23,r21,r20
	ctx.r23.u64 = ctx.r20.u64 - ctx.r21.u64;
loc_88108D28:
	// lwz r29,1384(r31)
	ctx.current_instruction = 0x88108D28;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,2156(r31)
	ctx.current_instruction = 0x88108D30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2156);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r28,r11,r25
	ctx.r28.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88108D50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88108D50:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r27,r11,3
	ctx.r27.s64 = ctx.r11.s64 + 3;
	// ble cr6,0x88108db4
	if (!ctx.cr6.gt) goto loc_88108DB4;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_88108D6C:
	// lwz r11,2156(r31)
	ctx.current_instruction = 0x88108D6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2156);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88108D88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88108D88:
	// lwz r10,2160(r31)
	ctx.current_instruction = 0x88108D88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2160);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88108DA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88108DA4:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bne 0x88108d6c
	if (!ctx.cr0.eq) goto loc_88108D6C;
loc_88108DB4:
	// lwz r11,2156(r31)
	ctx.current_instruction = 0x88108DB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2156);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88108DD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88108DD0:
	// lwz r11,1408(r31)
	ctx.current_instruction = 0x88108DD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1408);
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bne 0x88108d28
	if (!ctx.cr0.eq) goto loc_88108D28;
loc_88108DE0:
	// lwz r11,1624(r31)
	ctx.current_instruction = 0x88108DE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x88108e38
	if (!ctx.cr6.eq) goto loc_88108E38;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x88108e38
	if (!ctx.cr6.eq) goto loc_88108E38;
	// lwz r27,1384(r31)
	ctx.current_instruction = 0x88108DF8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addic. r28,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r28.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 3;
	// ble 0x88108e38
	if (!ctx.cr0.gt) goto loc_88108E38;
loc_88108E10:
	// lwz r11,2160(r31)
	ctx.current_instruction = 0x88108E10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2160);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88108E2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88108E2C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x88108e10
	if (!ctx.cr0.eq) goto loc_88108E10;
loc_88108E38:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x88108e60
	if (!ctx.cr6.eq) goto loc_88108E60;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88108E44;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88105c90
	ctx.lr = 0x88108E60;
	sub_88105C90(ctx, base);
loc_88108E60:
	// lwz r11,1408(r31)
	ctx.current_instruction = 0x88108E60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1408);
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
	// add r25,r11,r24
	ctx.r25.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bge cr6,0x88108f34
	if (!ctx.cr6.lt) goto loc_88108F34;
	// addi r23,r19,-1
	ctx.r23.s64 = ctx.r19.s64 + -1;
	// subf r24,r21,r20
	ctx.r24.u64 = ctx.r20.u64 - ctx.r21.u64;
loc_88108E7C:
	// lwz r29,1384(r31)
	ctx.current_instruction = 0x88108E7C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,2156(r31)
	ctx.current_instruction = 0x88108E84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2156);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r28,r11,r25
	ctx.r28.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88108EA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88108EA4:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r27,r11,3
	ctx.r27.s64 = ctx.r11.s64 + 3;
	// ble cr6,0x88108f08
	if (!ctx.cr6.gt) goto loc_88108F08;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_88108EC0:
	// lwz r11,2156(r31)
	ctx.current_instruction = 0x88108EC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2156);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88108EDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88108EDC:
	// lwz r10,2160(r31)
	ctx.current_instruction = 0x88108EDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2160);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88108EF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88108EF8:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bne 0x88108ec0
	if (!ctx.cr0.eq) goto loc_88108EC0;
loc_88108F08:
	// lwz r11,2156(r31)
	ctx.current_instruction = 0x88108F08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2156);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88108F24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88108F24:
	// lwz r11,1408(r31)
	ctx.current_instruction = 0x88108F24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1408);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bne 0x88108e7c
	if (!ctx.cr0.eq) goto loc_88108E7C;
loc_88108F34:
	// lwz r11,1624(r31)
	ctx.current_instruction = 0x88108F34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x88108f8c
	if (!ctx.cr6.eq) goto loc_88108F8C;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x88108f8c
	if (!ctx.cr6.eq) goto loc_88108F8C;
	// lwz r27,1384(r31)
	ctx.current_instruction = 0x88108F4C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addic. r28,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r28.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 3;
	// ble 0x88108f8c
	if (!ctx.cr0.gt) goto loc_88108F8C;
loc_88108F64:
	// lwz r11,2160(r31)
	ctx.current_instruction = 0x88108F64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2160);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88108F80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88108F80:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x88108f64
	if (!ctx.cr0.eq) goto loc_88108F64;
loc_88108F8C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88110D00) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88110D00);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88110D00;
	ctx.current_instruction = 0x88110D00;
	uint32_t ea{};
	// stvx128 v127,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v126,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v125,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v124,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v123,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v123.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v122,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v122.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v121,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v121.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v120,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v120.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v119,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v119.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v118,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v118.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v117,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v117.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v116,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v116.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v115,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v115.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v114,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v114.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v113,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v113.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v112,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v112.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v111,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v111.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v110,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v110.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v109,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v109.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v108,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v108.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v107,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v107.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v106,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v106.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v105,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v105.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v104,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v104.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v103,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v103.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v102,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v102.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v101,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v101.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v100,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v100.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v99,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v99.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v98,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v98.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v97,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v97.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v96,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v96.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v95,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v95.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v94,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v94.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v93,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v93.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v92,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v92.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v91,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v91.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v90,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v90.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v89,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v89.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v88,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v88.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v87,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v87.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v86,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v86.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v85,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v85.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v84,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v84.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v83,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v83.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v82,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v82.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v81,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v81.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v80,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v80.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v79,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v79.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v78,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v78.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v77,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v77.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v76,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v76.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v75,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v75.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v74,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v74.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v73,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v73.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v72,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v72.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v71,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v71.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v70,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v70.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v69,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v69.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v68,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v68.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v67,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v67.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v66,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v66.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v65,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v65.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v64,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v64.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v62,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v61,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v60,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v59,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v58,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v57,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v56,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v55,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v54,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v53,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v52,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v51,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v50,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v48,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v47,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v46,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v45,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v44,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v43,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v42,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v41,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v40,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v39,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v38,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v37,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v36,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v35,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v34,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v33,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v32,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v66,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v66.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v67,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v67.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v68,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v68.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v69,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v69.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v70,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v70.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v71,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v71.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v72,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v72.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88120850) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88120850;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88120850) {
			switch (rex_dispatch_address) {
				case 0x88120858:
				case 0x88120928:
				case 0x88120940:
				case 0x88120970:
				case 0x881209CC:
				case 0x881209E4:
				case 0x88120A20:
				case 0x88120A90:
				case 0x88120ACC:
				case 0x88120B28:
				case 0x88120B80:
				case 0x88120BB4:
				case 0x88120C28:
				case 0x88120C64:
				case 0x88120DF8:
				case 0x88120F38:
				case 0x8812100C:
				case 0x8812108C:
				case 0x881210D8:
				case 0x881210F0:
				case 0x88121118:
				case 0x881212D0:
				case 0x88121350:
				case 0x8812139C:
				case 0x881213B4:
				case 0x881213DC:
				case 0x88121478:
				case 0x881214A0:
				case 0x881215A0:
				case 0x88121694:
				case 0x881216D4:
				case 0x88121748:
				case 0x88121790:
				case 0x881217A8:
				case 0x881217D0:
				case 0x88121810:
				case 0x88121960:
				case 0x8812199C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88120850;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88120858: goto loc_88120858;
		case 0x88120928: goto loc_88120928;
		case 0x88120940: goto loc_88120940;
		case 0x88120970: goto loc_88120970;
		case 0x881209CC: goto loc_881209CC;
		case 0x881209E4: goto loc_881209E4;
		case 0x88120A20: goto loc_88120A20;
		case 0x88120A90: goto loc_88120A90;
		case 0x88120ACC: goto loc_88120ACC;
		case 0x88120B28: goto loc_88120B28;
		case 0x88120B80: goto loc_88120B80;
		case 0x88120BB4: goto loc_88120BB4;
		case 0x88120C28: goto loc_88120C28;
		case 0x88120C64: goto loc_88120C64;
		case 0x88120DF8: goto loc_88120DF8;
		case 0x88120F38: goto loc_88120F38;
		case 0x8812100C: goto loc_8812100C;
		case 0x8812108C: goto loc_8812108C;
		case 0x881210D8: goto loc_881210D8;
		case 0x881210F0: goto loc_881210F0;
		case 0x88121118: goto loc_88121118;
		case 0x881212D0: goto loc_881212D0;
		case 0x88121350: goto loc_88121350;
		case 0x8812139C: goto loc_8812139C;
		case 0x881213B4: goto loc_881213B4;
		case 0x881213DC: goto loc_881213DC;
		case 0x88121478: goto loc_88121478;
		case 0x881214A0: goto loc_881214A0;
		case 0x881215A0: goto loc_881215A0;
		case 0x88121694: goto loc_88121694;
		case 0x881216D4: goto loc_881216D4;
		case 0x88121748: goto loc_88121748;
		case 0x88121790: goto loc_88121790;
		case 0x881217A8: goto loc_881217A8;
		case 0x881217D0: goto loc_881217D0;
		case 0x88121810: goto loc_88121810;
		case 0x88121960: goto loc_88121960;
		case 0x8812199C: goto loc_8812199C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88120858;
	__savegprlr_14(ctx, base);
loc_88120858:
	// stwu r1,-320(r1)
	ctx.current_instruction = 0x88120858;
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r31,28(r3)
	ctx.current_instruction = 0x88120860;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r26,88(r1)
	ctx.current_instruction = 0x8812086C;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// stw r26,104(r1)
	ctx.current_instruction = 0x88120874;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r20,r26
	ctx.r20.u64 = ctx.r26.u64;
	// stw r26,112(r1)
	ctx.current_instruction = 0x8812087C;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r26,84(r1)
	ctx.current_instruction = 0x88120880;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r17,r26
	ctx.r17.u64 = ctx.r26.u64;
	// stw r26,108(r1)
	ctx.current_instruction = 0x88120888;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// stb r26,80(r1)
	ctx.current_instruction = 0x88120890;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// lis r18,-32688
	ctx.r18.s64 = -2142240768;
	// li r19,5
	ctx.r19.s64 = 5;
	// li r16,8
	ctx.r16.s64 = 8;
	// li r24,13
	ctx.r24.s64 = 13;
	// ori r15,r11,22
	ctx.r15.u64 = ctx.r11.u64 | 22;
	// li r14,12
	ctx.r14.s64 = 12;
	// li r22,15
	ctx.r22.s64 = 15;
loc_881208B0:
	// lwz r11,80(r31)
	ctx.current_instruction = 0x881208B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x881208b0
	if (ctx.cr6.gt) goto loc_881208B0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88120ac0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88120AC0;
	// bdzf 4*cr6+eq,0x88120b18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88120B18;
	// bdzf 4*cr6+eq,0x88120b70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88120B70;
	// bdzf 4*cr6+eq,0x88120ba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88120BA4;
	// bdzf 4*cr6+eq,0x88120c4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88120C4C;
	// bdzf 4*cr6+eq,0x88120e2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88120E2C;
	// bdzf 4*cr6+eq,0x88121410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88121410;
	// bne cr6,0x881218ec
	if (!ctx.cr6.eq) goto loc_881218EC;
	// lwz r11,184(r31)
	ctx.current_instruction = 0x881208E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88120978
	if (ctx.cr6.eq) goto loc_88120978;
	// lwz r11,204(r31)
	ctx.current_instruction = 0x881208F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88120978
	if (ctx.cr6.eq) goto loc_88120978;
	// ld r11,24(r31)
	ctx.current_instruction = 0x88120900;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 24);
	// ld r10,32(r31)
	ctx.current_instruction = 0x88120904;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x8812094c
	if (!ctx.cr6.lt) goto loc_8812094C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r4,196(r31)
	ctx.current_instruction = 0x88120914;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 196);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r26,96(r1)
	ctx.current_instruction = 0x8812091C;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r26.u64);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88118ae8
	ctx.lr = 0x88120928;
	sub_88118AE8(ctx, base);
loc_88120928:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// ld r4,96(r1)
	ctx.current_instruction = 0x88120930;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// std r4,32(r31)
	ctx.current_instruction = 0x88120938;
	REX_STORE_U64(ctx.r31.u32 + 32, ctx.r4.u64);
	// bl 0x88118c00
	ctx.lr = 0x88120940;
	sub_88118C00(ctx, base);
loc_88120940:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// b 0x88120964
	goto loc_88120964;
loc_8812094C:
	// stw r26,184(r31)
	ctx.current_instruction = 0x8812094C;
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r26.u32);
	// stw r26,192(r31)
	ctx.current_instruction = 0x88120950;
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r26.u32);
	// stb r26,196(r31)
	ctx.current_instruction = 0x88120954;
	REX_STORE_U8(ctx.r31.u32 + 196, ctx.r26.u8);
	// stw r26,220(r31)
	ctx.current_instruction = 0x88120958;
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r26.u32);
	// stw r26,212(r31)
	ctx.current_instruction = 0x8812095C;
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r26.u32);
	// stw r26,204(r31)
	ctx.current_instruction = 0x88120960;
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r26.u32);
loc_88120964:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r4,32(r31)
	ctx.current_instruction = 0x88120968;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// bl 0x88118c00
	ctx.lr = 0x88120970;
	sub_88118C00(ctx, base);
loc_88120970:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
loc_88120978:
	// lwz r11,188(r31)
	ctx.current_instruction = 0x88120978;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88120a28
	if (ctx.cr6.eq) goto loc_88120A28;
	// lwz r11,212(r31)
	ctx.current_instruction = 0x88120984;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88120998
	if (ctx.cr6.eq) goto loc_88120998;
	// stw r25,216(r31)
	ctx.current_instruction = 0x88120990;
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r25.u32);
	// b 0x88120a14
	goto loc_88120A14;
loc_88120998:
	// ld r11,16(r31)
	ctx.current_instruction = 0x88120998;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// ld r10,32(r31)
	ctx.current_instruction = 0x8812099C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x881209f0
	if (!ctx.cr6.gt) goto loc_881209F0;
	// lwz r11,200(r31)
	ctx.current_instruction = 0x881209A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// std r26,96(r1)
	ctx.current_instruction = 0x881209AC;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r26.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88120a14
	if (ctx.cr6.eq) goto loc_88120A14;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r4,196(r31)
	ctx.current_instruction = 0x881209BC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 196);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88118ae8
	ctx.lr = 0x881209CC;
	sub_88118AE8(ctx, base);
loc_881209CC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// ld r4,96(r1)
	ctx.current_instruction = 0x881209D4;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// std r4,32(r31)
	ctx.current_instruction = 0x881209DC;
	REX_STORE_U64(ctx.r31.u32 + 32, ctx.r4.u64);
	// bl 0x88118c00
	ctx.lr = 0x881209E4;
	sub_88118C00(ctx, base);
loc_881209E4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// b 0x88120a14
	goto loc_88120A14;
loc_881209F0:
	// stw r26,188(r31)
	ctx.current_instruction = 0x881209F0;
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r26.u32);
	// stw r26,192(r31)
	ctx.current_instruction = 0x881209F4;
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r26.u32);
	// stb r26,196(r31)
	ctx.current_instruction = 0x881209F8;
	REX_STORE_U8(ctx.r31.u32 + 196, ctx.r26.u8);
	// stw r26,220(r31)
	ctx.current_instruction = 0x881209FC;
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r26.u32);
	// stw r26,200(r31)
	ctx.current_instruction = 0x88120A00;
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r26.u32);
	// stw r26,208(r31)
	ctx.current_instruction = 0x88120A04;
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r26.u32);
	// stw r26,216(r31)
	ctx.current_instruction = 0x88120A08;
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r26.u32);
	// stw r26,212(r31)
	ctx.current_instruction = 0x88120A0C;
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r26.u32);
	// stw r26,204(r31)
	ctx.current_instruction = 0x88120A10;
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r26.u32);
loc_88120A14:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r4,32(r31)
	ctx.current_instruction = 0x88120A18;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// bl 0x88118c00
	ctx.lr = 0x88120A20;
	sub_88118C00(ctx, base);
loc_88120A20:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
loc_88120A28:
	// ld r11,24(r31)
	ctx.current_instruction = 0x88120A28;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 24);
	// ld r10,32(r31)
	ctx.current_instruction = 0x88120A2C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x88121944
	if (!ctx.cr6.lt) goto loc_88121944;
	// lwz r11,180(r31)
	ctx.current_instruction = 0x88120A38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88121974
	if (!ctx.cr6.lt) goto loc_88121974;
	// ld r9,40(r31)
	ctx.current_instruction = 0x88120A44;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// lwz r8,4(r31)
	ctx.current_instruction = 0x88120A48;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// ld r10,8(r31)
	ctx.current_instruction = 0x88120A4C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// std r9,32(r31)
	ctx.current_instruction = 0x88120A58;
	REX_STORE_U64(ctx.r31.u32 + 32, ctx.r9.u64);
	// lwz r8,8(r8)
	ctx.current_instruction = 0x88120A5C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// std r7,40(r31)
	ctx.current_instruction = 0x88120A64;
	REX_STORE_U64(ctx.r31.u32 + 40, ctx.r7.u64);
	// ble cr6,0x88120aa8
	if (!ctx.cr6.gt) goto loc_88120AA8;
	// lwz r9,0(r31)
	ctx.current_instruction = 0x88120A6C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// subf r30,r8,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lwz r6,20(r9)
	ctx.current_instruction = 0x88120A80;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88120A90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88120A90:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// ld r11,8(r31)
	ctx.current_instruction = 0x88120A98;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r31)
	ctx.current_instruction = 0x88120AA4;
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
loc_88120AA8:
	// lwz r11,180(r31)
	ctx.current_instruction = 0x88120AA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r31)
	ctx.current_instruction = 0x88120AB4;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r9,180(r31)
	ctx.current_instruction = 0x88120AB8;
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120AC0:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8811cec0
	ctx.lr = 0x88120ACC;
	sub_8811CEC0(ctx, base);
loc_88120ACC:
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x8812199c
	if (ctx.cr6.eq) goto loc_8812199C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88120ae4
	if (!ctx.cr6.lt) goto loc_88120AE4;
	// stw r19,80(r31)
	ctx.current_instruction = 0x88120ADC;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r19.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120AE4:
	// lwz r11,48(r31)
	ctx.current_instruction = 0x88120AE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88120AE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88120b08
	if (ctx.cr6.eq) goto loc_88120B08;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x88120AF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88120b08
	if (ctx.cr6.eq) goto loc_88120B08;
	// stw r19,80(r31)
	ctx.current_instruction = 0x88120B00;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r19.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120B08:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r26,56(r31)
	ctx.current_instruction = 0x88120B0C;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// stw r11,80(r31)
	ctx.current_instruction = 0x88120B10;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120B18:
	// lwz r11,48(r31)
	ctx.current_instruction = 0x88120B18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,68(r11)
	ctx.current_instruction = 0x88120B20;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x8811d298
	ctx.lr = 0x88120B28;
	sub_8811D298(ctx, base);
loc_88120B28:
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x8812199c
	if (ctx.cr6.eq) goto loc_8812199C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88120b40
	if (!ctx.cr6.lt) goto loc_88120B40;
	// stw r19,80(r31)
	ctx.current_instruction = 0x88120B38;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r19.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120B40:
	// lwz r11,48(r31)
	ctx.current_instruction = 0x88120B40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88120B44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88120b64
	if (ctx.cr6.eq) goto loc_88120B64;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x88120B50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88120b64
	if (ctx.cr6.eq) goto loc_88120B64;
	// stw r19,80(r31)
	ctx.current_instruction = 0x88120B5C;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r19.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120B64:
	// stw r16,80(r31)
	ctx.current_instruction = 0x88120B64;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r16.u32);
	// stw r26,56(r31)
	ctx.current_instruction = 0x88120B68;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120B70:
	// lwz r11,48(r31)
	ctx.current_instruction = 0x88120B70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,72(r11)
	ctx.current_instruction = 0x88120B78;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x8811d718
	ctx.lr = 0x88120B80;
	sub_8811D718(ctx, base);
loc_88120B80:
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x8812199c
	if (ctx.cr6.eq) goto loc_8812199C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88120b98
	if (!ctx.cr6.lt) goto loc_88120B98;
loc_88120B90:
	// stw r24,80(r31)
	ctx.current_instruction = 0x88120B90;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120B98:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,80(r31)
	ctx.current_instruction = 0x88120B9C;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120BA4:
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88120BA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,80(r11)
	ctx.current_instruction = 0x88120BAC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// bl 0x881203f0
	ctx.lr = 0x88120BB4;
	sub_881203F0(ctx, base);
loc_88120BB4:
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x8812199c
	if (ctx.cr6.eq) goto loc_8812199C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88120bcc
	if (!ctx.cr6.lt) goto loc_88120BCC;
	// stw r24,80(r31)
	ctx.current_instruction = 0x88120BC4;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120BCC:
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88120BCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// ld r10,32(r31)
	ctx.current_instruction = 0x88120BD0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// ld r9,8(r31)
	ctx.current_instruction = 0x88120BD4;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// lhz r8,28(r11)
	ctx.current_instruction = 0x88120BD8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// lhz r7,2(r11)
	ctx.current_instruction = 0x88120BDC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r11,0(r11)
	ctx.current_instruction = 0x88120BE0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,64(r31)
	ctx.current_instruction = 0x88120BF4;
	REX_STORE_U16(ctx.r31.u32 + 64, ctx.r11.u16);
	// cmpld cr6,r5,r9
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x88120c40
	if (!ctx.cr6.gt) goto loc_88120C40;
	// lwz r3,0(r31)
	ctx.current_instruction = 0x88120C00;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r10,r7,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r6,20(r3)
	ctx.current_instruction = 0x88120C14;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88120C28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88120C28:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// ld r11,8(r31)
	ctx.current_instruction = 0x88120C30;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r31)
	ctx.current_instruction = 0x88120C3C;
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
loc_88120C40:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,80(r31)
	ctx.current_instruction = 0x88120C44;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120C4C:
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88120C4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,148(r31)
	ctx.current_instruction = 0x88120C54;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lbz r30,4(r11)
	ctx.current_instruction = 0x88120C58;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880cb730
	ctx.lr = 0x88120C64;
	sub_880CB730(ctx, base);
loc_88120C64:
	// cmplw cr6,r3,r15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x88120c74
	if (!ctx.cr6.eq) goto loc_88120C74;
	// stw r24,80(r31)
	ctx.current_instruction = 0x88120C6C;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120C74:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88120c84
	if (!ctx.cr6.lt) goto loc_88120C84;
	// stw r24,80(r31)
	ctx.current_instruction = 0x88120C7C;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120C84:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88120C84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r20,4(r11)
	ctx.current_instruction = 0x88120C88;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x88120c9c
	if (!ctx.cr6.eq) goto loc_88120C9C;
	// stw r24,80(r31)
	ctx.current_instruction = 0x88120C94;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120C9C:
	// lwz r9,52(r31)
	ctx.current_instruction = 0x88120C9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lhz r11,28(r9)
	ctx.current_instruction = 0x88120CA0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88120cb4
	if (!ctx.cr6.eq) goto loc_88120CB4;
	// stw r24,80(r31)
	ctx.current_instruction = 0x88120CAC;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120CB4:
	// lwz r11,184(r31)
	ctx.current_instruction = 0x88120CB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88120cf8
	if (ctx.cr6.eq) goto loc_88120CF8;
	// lbz r11,196(r31)
	ctx.current_instruction = 0x88120CC0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 196);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x88120b90
	if (!ctx.cr6.eq) goto loc_88120B90;
	// lwz r11,20(r9)
	ctx.current_instruction = 0x88120CD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88120b90
	if (ctx.cr6.eq) goto loc_88120B90;
	// lwz r11,16(r9)
	ctx.current_instruction = 0x88120CDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,192(r31)
	ctx.current_instruction = 0x88120CE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x88120b90
	if (!ctx.cr6.gt) goto loc_88120B90;
	// stw r26,184(r31)
	ctx.current_instruction = 0x88120CEC;
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r26.u32);
	// stb r26,196(r31)
	ctx.current_instruction = 0x88120CF0;
	REX_STORE_U8(ctx.r31.u32 + 196, ctx.r26.u8);
	// stw r26,204(r31)
	ctx.current_instruction = 0x88120CF4;
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r26.u32);
loc_88120CF8:
	// lwz r11,188(r31)
	ctx.current_instruction = 0x88120CF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88120dbc
	if (ctx.cr6.eq) goto loc_88120DBC;
	// lbz r11,196(r31)
	ctx.current_instruction = 0x88120D04;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 196);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x88120b90
	if (!ctx.cr6.eq) goto loc_88120B90;
	// lwz r11,20(r9)
	ctx.current_instruction = 0x88120D14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88120b90
	if (ctx.cr6.eq) goto loc_88120B90;
	// lwz r11,16(r9)
	ctx.current_instruction = 0x88120D20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,192(r31)
	ctx.current_instruction = 0x88120D24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x88120b90
	if (!ctx.cr6.lt) goto loc_88120B90;
	// lwz r10,8(r9)
	ctx.current_instruction = 0x88120D30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x88120b90
	if (ctx.cr6.gt) goto loc_88120B90;
	// lwz r10,212(r31)
	ctx.current_instruction = 0x88120D3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88120d78
	if (ctx.cr6.eq) goto loc_88120D78;
	// lwz r10,208(r31)
	ctx.current_instruction = 0x88120D48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88120d78
	if (!ctx.cr6.eq) goto loc_88120D78;
	// stw r26,188(r31)
	ctx.current_instruction = 0x88120D54;
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r26.u32);
	// stw r26,192(r31)
	ctx.current_instruction = 0x88120D58;
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r26.u32);
	// stb r26,196(r31)
	ctx.current_instruction = 0x88120D5C;
	REX_STORE_U8(ctx.r31.u32 + 196, ctx.r26.u8);
	// stw r26,220(r31)
	ctx.current_instruction = 0x88120D60;
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r26.u32);
	// stw r26,200(r31)
	ctx.current_instruction = 0x88120D64;
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r26.u32);
	// stw r26,208(r31)
	ctx.current_instruction = 0x88120D68;
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r26.u32);
	// stw r26,212(r31)
	ctx.current_instruction = 0x88120D6C;
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r26.u32);
	// stw r26,216(r31)
	ctx.current_instruction = 0x88120D70;
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r26.u32);
	// stw r26,204(r31)
	ctx.current_instruction = 0x88120D74;
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r26.u32);
loc_88120D78:
	// lwz r11,216(r31)
	ctx.current_instruction = 0x88120D78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88120da8
	if (!ctx.cr6.eq) goto loc_88120DA8;
	// lwz r11,16(r9)
	ctx.current_instruction = 0x88120D84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,192(r31)
	ctx.current_instruction = 0x88120D88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x88120da8
	if (!ctx.cr6.lt) goto loc_88120DA8;
	// stw r25,212(r31)
	ctx.current_instruction = 0x88120D94;
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r25.u32);
	// lwz r11,16(r9)
	ctx.current_instruction = 0x88120D98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// stw r11,208(r31)
	ctx.current_instruction = 0x88120D9C;
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r24,80(r31)
	ctx.current_instruction = 0x88120DA0;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120DA8:
	// lwz r11,188(r31)
	ctx.current_instruction = 0x88120DA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88120dbc
	if (ctx.cr6.eq) goto loc_88120DBC;
	// stw r24,80(r31)
	ctx.current_instruction = 0x88120DB4;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120DBC:
	// ld r11,32(r31)
	ctx.current_instruction = 0x88120DBC;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x88120DC0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r10,64(r31)
	ctx.current_instruction = 0x88120DC4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 64);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r7,0(r31)
	ctx.current_instruction = 0x88120DCC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r21,48(r8)
	ctx.current_instruction = 0x88120DD8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// stw r6,60(r31)
	ctx.current_instruction = 0x88120DDC;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// lwz r5,84(r1)
	ctx.current_instruction = 0x88120DE0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r4,28(r9)
	ctx.current_instruction = 0x88120DE4;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 28);
	// lwz r11,12(r7)
	ctx.current_instruction = 0x88120DE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r17,100(r5)
	ctx.current_instruction = 0x88120DF0;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 100);
	// bctrl 
	ctx.lr = 0x88120DF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88120DF8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88120E00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r10,6(r11)
	ctx.current_instruction = 0x88120E04;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x88120e20
	if (ctx.cr6.eq) goto loc_88120E20;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r10,80(r31)
	ctx.current_instruction = 0x88120E14;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r26,24(r11)
	ctx.current_instruction = 0x88120E18;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r26.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120E20:
	// stw r14,80(r31)
	ctx.current_instruction = 0x88120E20;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r14.u32);
	// stw r25,24(r11)
	ctx.current_instruction = 0x88120E24;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r25.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120E2C:
	// lwz r9,52(r31)
	ctx.current_instruction = 0x88120E2C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,8(r9)
	ctx.current_instruction = 0x88120E30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88121204
	if (!ctx.cr6.eq) goto loc_88121204;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88120E3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88120E40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88120e6c
	if (!ctx.cr6.eq) goto loc_88120E6C;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// bne cr6,0x88120e68
	if (!ctx.cr6.eq) goto loc_88120E68;
	// lwz r10,20(r9)
	ctx.current_instruction = 0x88120E54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88120e68
	if (!ctx.cr6.eq) goto loc_88120E68;
	// stw r24,80(r31)
	ctx.current_instruction = 0x88120E60;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120E68:
	// stw r25,8(r11)
	ctx.current_instruction = 0x88120E68;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_88120E6C:
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88120E6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88120E74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,16(r11)
	ctx.current_instruction = 0x88120E78;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,12(r10)
	ctx.current_instruction = 0x88120E7C;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r8,52(r31)
	ctx.current_instruction = 0x88120E80;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r7,12(r8)
	ctx.current_instruction = 0x88120E84;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,84(r1)
	ctx.current_instruction = 0x88120E88;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,16(r6)
	ctx.current_instruction = 0x88120E8C;
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r7.u32);
	// lwz r5,52(r31)
	ctx.current_instruction = 0x88120E90;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lhz r4,28(r5)
	ctx.current_instruction = 0x88120E94;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 28);
	// lwz r3,84(r1)
	ctx.current_instruction = 0x88120E98;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,20(r3)
	ctx.current_instruction = 0x88120E9C;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88120EA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88120EA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x88120EA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,24(r9)
	ctx.current_instruction = 0x88120EAC;
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// bne cr6,0x88120ebc
	if (!ctx.cr6.eq) goto loc_88120EBC;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88120EB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r25,24(r11)
	ctx.current_instruction = 0x88120EB8;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r25.u32);
loc_88120EBC:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88120EBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 3, ctx.xer);
	// lwz r10,24(r11)
	ctx.current_instruction = 0x88120EC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,128(r1)
	ctx.current_instruction = 0x88120EC8;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r9,52(r31)
	ctx.current_instruction = 0x88120ECC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r8,4(r9)
	ctx.current_instruction = 0x88120ED0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// sth r8,132(r1)
	ctx.current_instruction = 0x88120ED4;
	REX_STORE_U16(ctx.r1.u32 + 132, ctx.r8.u16);
	// lwz r7,52(r31)
	ctx.current_instruction = 0x88120ED8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r6,8(r7)
	ctx.current_instruction = 0x88120EDC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r6,136(r1)
	ctx.current_instruction = 0x88120EE0;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// lwz r5,16(r11)
	ctx.current_instruction = 0x88120EE4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r5,140(r1)
	ctx.current_instruction = 0x88120EE8;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// lwz r4,52(r31)
	ctx.current_instruction = 0x88120EEC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lhz r3,28(r4)
	ctx.current_instruction = 0x88120EF0;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + 28);
	// stw r3,144(r1)
	ctx.current_instruction = 0x88120EF4;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88120EF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,4(r31)
	ctx.current_instruction = 0x88120EFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// ld r8,56(r11)
	ctx.current_instruction = 0x88120F00;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r6,r7,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lwz r5,20(r9)
	ctx.current_instruction = 0x88120F0C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// subf r4,r5,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r5.u64;
	// clrldi r3,r4,32
	ctx.r3.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r3,152(r1)
	ctx.current_instruction = 0x88120F18;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r3.u64);
	// beq cr6,0x88120f28
	if (ctx.cr6.eq) goto loc_88120F28;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 2, ctx.xer);
	// bne cr6,0x88120f4c
	if (!ctx.cr6.eq) goto loc_88120F4C;
loc_88120F28:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r4,32(r11)
	ctx.current_instruction = 0x88120F2C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// lwz r3,148(r31)
	ctx.current_instruction = 0x88120F30;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x880cb730
	ctx.lr = 0x88120F38;
	sub_880CB730(ctx, base);
loc_88120F38:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88120f48
	if (!ctx.cr6.lt) goto loc_88120F48;
	// stw r24,80(r31)
	ctx.current_instruction = 0x88120F40;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88120F48:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88120F48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_88120F4C:
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 3, ctx.xer);
	// bne cr6,0x88121128
	if (!ctx.cr6.eq) goto loc_88121128;
	// lwz r10,88(r1)
	ctx.current_instruction = 0x88120F54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,36(r10)
	ctx.current_instruction = 0x88120F58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88120f78
	if (!ctx.cr6.eq) goto loc_88120F78;
	// lwz r11,12(r11)
	ctx.current_instruction = 0x88120F64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,40(r10)
	ctx.current_instruction = 0x88120F68;
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// lwz r10,88(r1)
	ctx.current_instruction = 0x88120F6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r25,36(r10)
	ctx.current_instruction = 0x88120F70;
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r25.u32);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88120F74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_88120F78:
	// stw r25,4(r11)
	ctx.current_instruction = 0x88120F78;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r10,88(r1)
	ctx.current_instruction = 0x88120F7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88120F80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,12(r10)
	ctx.current_instruction = 0x88120F84;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,12(r11)
	ctx.current_instruction = 0x88120F88;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x88120fdc
	if (!ctx.cr6.gt) goto loc_88120FDC;
	// stw r26,36(r10)
	ctx.current_instruction = 0x88120F94;
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r26.u32);
	// lwz r11,88(r1)
	ctx.current_instruction = 0x88120F98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,40(r11)
	ctx.current_instruction = 0x88120F9C;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r26.u32);
	// lwz r10,88(r1)
	ctx.current_instruction = 0x88120FA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r25,76(r10)
	ctx.current_instruction = 0x88120FA4;
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r25.u32);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x88120FA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,28(r9)
	ctx.current_instruction = 0x88120FAC;
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r26.u32);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x88120FB0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r26,32(r8)
	ctx.current_instruction = 0x88120FB4;
	REX_STORE_U8(ctx.r8.u32 + 32, ctx.r26.u8);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88120FB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r7,196(r31)
	ctx.current_instruction = 0x88120FBC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 196);
	// lbz r6,32(r11)
	ctx.current_instruction = 0x88120FC0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x88120fdc
	if (!ctx.cr6.eq) goto loc_88120FDC;
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88120FCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r10,4(r11)
	ctx.current_instruction = 0x88120FD0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// stb r10,196(r31)
	ctx.current_instruction = 0x88120FD4;
	REX_STORE_U8(ctx.r31.u32 + 196, ctx.r10.u8);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88120FD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_88120FDC:
	// stw r26,28(r11)
	ctx.current_instruction = 0x88120FDC;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r26.u32);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88120FE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r26,32(r11)
	ctx.current_instruction = 0x88120FE4;
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r26.u8);
loc_88120FE8:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88120FE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r10,52(r31)
	ctx.current_instruction = 0x88120FF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// ld r4,8(r31)
	ctx.current_instruction = 0x88120FF8;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// lwz r9,28(r11)
	ctx.current_instruction = 0x88120FFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lhz r5,28(r10)
	ctx.current_instruction = 0x88121000;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8812100C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8812100C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88121014;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lhz r30,28(r11)
	ctx.current_instruction = 0x88121018;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// stw r26,160(r1)
	ctx.current_instruction = 0x8812101C;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// lwz r10,52(r31)
	ctx.current_instruction = 0x88121020;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,76(r10)
	ctx.current_instruction = 0x88121024;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88121074
	if (ctx.cr6.eq) goto loc_88121074;
	// stw r25,160(r1)
	ctx.current_instruction = 0x88121030;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88121034;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lhz r10,28(r11)
	ctx.current_instruction = 0x88121038;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// stw r10,72(r11)
	ctx.current_instruction = 0x8812103C;
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88121040;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,60(r11)
	ctx.current_instruction = 0x88121044;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88121068
	if (!ctx.cr6.eq) goto loc_88121068;
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
	// lhz r10,28(r11)
	ctx.current_instruction = 0x88121054;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// stw r9,64(r11)
	ctx.current_instruction = 0x88121058;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// addi r30,r10,-15
	ctx.r30.s64 = ctx.r10.s64 + -15;
	// lwz r8,52(r31)
	ctx.current_instruction = 0x88121060;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// stw r22,68(r8)
	ctx.current_instruction = 0x88121064;
	REX_STORE_U32(ctx.r8.u32 + 68, ctx.r22.u32);
loc_88121068:
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88121068;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,164(r1)
	ctx.current_instruction = 0x88121070;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_88121074:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88121074;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88121080;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8812108C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8812108C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// ld r10,8(r31)
	ctx.current_instruction = 0x88121094;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lwz r11,52(r31)
	ctx.current_instruction = 0x8812109C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r10,8(r31)
	ctx.current_instruction = 0x881210A4;
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// lhz r10,28(r11)
	ctx.current_instruction = 0x881210A8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// addi r9,r10,-15
	ctx.r9.s64 = ctx.r10.s64 + -15;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881210e0
	if (!ctx.cr6.eq) goto loc_881210E0;
	// stw r22,96(r1)
	ctx.current_instruction = 0x881210B8;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x881198a8
	ctx.lr = 0x881210D8;
	sub_881198A8(ctx, base);
loc_881210D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
loc_881210E0:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,104(r1)
	ctx.current_instruction = 0x881210E4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x880cbcb0
	ctx.lr = 0x881210F0;
	sub_880CBCB0(ctx, base);
loc_881210F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// li r9,4
	ctx.r9.s64 = 4;
	// lhz r6,132(r1)
	ctx.current_instruction = 0x881210FC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 132);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,224(r31)
	ctx.current_instruction = 0x88121104;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r5,10
	ctx.r5.s64 = 655360;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x880cb090
	ctx.lr = 0x88121118;
	sub_880CB090(ctx, base);
loc_88121118:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// stw r24,80(r31)
	ctx.current_instruction = 0x88121120;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88121128:
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 2, ctx.xer);
	// bne cr6,0x88120fe8
	if (!ctx.cr6.eq) goto loc_88120FE8;
	// lwz r10,36(r11)
	ctx.current_instruction = 0x88121130;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8812114c
	if (ctx.cr6.eq) goto loc_8812114C;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x8812113C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,40(r11)
	ctx.current_instruction = 0x88121140;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x88121158
	if (ctx.cr6.gt) goto loc_88121158;
loc_8812114C:
	// lwz r10,76(r11)
	ctx.current_instruction = 0x8812114C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88120fe8
	if (ctx.cr6.eq) goto loc_88120FE8;
loc_88121158:
	// stw r26,4(r11)
	ctx.current_instruction = 0x88121158;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// lwz r11,52(r31)
	ctx.current_instruction = 0x8812115C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r10,196(r31)
	ctx.current_instruction = 0x88121160;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 196);
	// lbz r9,4(r11)
	ctx.current_instruction = 0x88121164;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8812117c
	if (!ctx.cr6.eq) goto loc_8812117C;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88121170;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r10,32(r11)
	ctx.current_instruction = 0x88121174;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// stb r10,196(r31)
	ctx.current_instruction = 0x88121178;
	REX_STORE_U8(ctx.r31.u32 + 196, ctx.r10.u8);
loc_8812117C:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8812117C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,76(r11)
	ctx.current_instruction = 0x88121180;
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r26.u32);
	// lwz r11,88(r1)
	ctx.current_instruction = 0x88121184;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,28(r11)
	ctx.current_instruction = 0x88121188;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881211c4
	if (ctx.cr6.eq) goto loc_881211C4;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88121194;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r9,32(r11)
	ctx.current_instruction = 0x88121198;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// lbz r8,32(r10)
	ctx.current_instruction = 0x8812119C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881211c4
	if (!ctx.cr6.eq) goto loc_881211C4;
	// stw r26,28(r11)
	ctx.current_instruction = 0x881211A8;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r26.u32);
	// lwz r11,88(r1)
	ctx.current_instruction = 0x881211AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r26,32(r11)
	ctx.current_instruction = 0x881211B0;
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r26.u8);
	// lwz r10,88(r1)
	ctx.current_instruction = 0x881211B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,36(r10)
	ctx.current_instruction = 0x881211B8;
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r26.u32);
	// lwz r9,88(r1)
	ctx.current_instruction = 0x881211BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,40(r9)
	ctx.current_instruction = 0x881211C0;
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r26.u32);
loc_881211C4:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x881211C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,8(r11)
	ctx.current_instruction = 0x881211C8;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x881211CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,16(r10)
	ctx.current_instruction = 0x881211D0;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r26.u32);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x881211D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,20(r9)
	ctx.current_instruction = 0x881211D8;
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r26.u32);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x881211DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,28(r8)
	ctx.current_instruction = 0x881211E0;
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r26.u32);
	// lwz r7,84(r1)
	ctx.current_instruction = 0x881211E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r26,32(r7)
	ctx.current_instruction = 0x881211E8;
	REX_STORE_U8(ctx.r7.u32 + 32, ctx.r26.u8);
	// lwz r6,84(r1)
	ctx.current_instruction = 0x881211EC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,36(r6)
	ctx.current_instruction = 0x881211F0;
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r26.u32);
	// lwz r5,84(r1)
	ctx.current_instruction = 0x881211F4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,40(r5)
	ctx.current_instruction = 0x881211F8;
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r26.u32);
	// stw r24,80(r31)
	ctx.current_instruction = 0x881211FC;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88121204:
	// lwz r8,84(r1)
	ctx.current_instruction = 0x88121204;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,20(r8)
	ctx.current_instruction = 0x88121208;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8812121c
	if (!ctx.cr6.eq) goto loc_8812121C;
	// stw r24,80(r31)
	ctx.current_instruction = 0x88121214;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_8812121C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88121404
	if (!ctx.cr6.eq) goto loc_88121404;
	// lwz r11,12(r9)
	ctx.current_instruction = 0x88121224;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// stw r11,16(r8)
	ctx.current_instruction = 0x8812122C;
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// lwz r10,52(r31)
	ctx.current_instruction = 0x88121230;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x88121234;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,20(r10)
	ctx.current_instruction = 0x88121238;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// stw r8,24(r9)
	ctx.current_instruction = 0x8812123C;
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// bne cr6,0x8812124c
	if (!ctx.cr6.eq) goto loc_8812124C;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88121244;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r25,24(r11)
	ctx.current_instruction = 0x88121248;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r25.u32);
loc_8812124C:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8812124C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r10,24(r11)
	ctx.current_instruction = 0x88121254;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,128(r1)
	ctx.current_instruction = 0x88121258;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r9,52(r31)
	ctx.current_instruction = 0x8812125C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r8,4(r9)
	ctx.current_instruction = 0x88121260;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// sth r8,132(r1)
	ctx.current_instruction = 0x88121264;
	REX_STORE_U16(ctx.r1.u32 + 132, ctx.r8.u16);
	// lwz r7,52(r31)
	ctx.current_instruction = 0x88121268;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,8(r7)
	ctx.current_instruction = 0x8812126C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r5,136(r1)
	ctx.current_instruction = 0x88121270;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// lwz r4,16(r11)
	ctx.current_instruction = 0x88121274;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r4,140(r1)
	ctx.current_instruction = 0x88121278;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r3,52(r31)
	ctx.current_instruction = 0x8812127C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lhz r10,28(r3)
	ctx.current_instruction = 0x88121280;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 28);
	// stw r10,144(r1)
	ctx.current_instruction = 0x88121284;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.current_instruction = 0x88121288;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,52(r31)
	ctx.current_instruction = 0x8812128C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// ld r7,56(r11)
	ctx.current_instruction = 0x88121290;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r4,20(r9)
	ctx.current_instruction = 0x88121298;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r3,16(r8)
	ctx.current_instruction = 0x8812129C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r10,r4,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r4.u64;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r9,152(r1)
	ctx.current_instruction = 0x881212AC;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lwz r8,52(r31)
	ctx.current_instruction = 0x881212B0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// ld r4,8(r31)
	ctx.current_instruction = 0x881212B4;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// lwz r7,0(r31)
	ctx.current_instruction = 0x881212B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,28(r7)
	ctx.current_instruction = 0x881212C0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// lhz r5,28(r8)
	ctx.current_instruction = 0x881212C8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 28);
	// bctrl 
	ctx.lr = 0x881212D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881212D0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// lwz r11,52(r31)
	ctx.current_instruction = 0x881212D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lhz r30,28(r11)
	ctx.current_instruction = 0x881212DC;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// stw r26,160(r1)
	ctx.current_instruction = 0x881212E0;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// lwz r10,52(r31)
	ctx.current_instruction = 0x881212E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,76(r10)
	ctx.current_instruction = 0x881212E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88121338
	if (ctx.cr6.eq) goto loc_88121338;
	// stw r25,160(r1)
	ctx.current_instruction = 0x881212F4;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// lwz r11,52(r31)
	ctx.current_instruction = 0x881212F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lhz r10,28(r11)
	ctx.current_instruction = 0x881212FC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// stw r10,72(r11)
	ctx.current_instruction = 0x88121300;
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88121304;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,60(r11)
	ctx.current_instruction = 0x88121308;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8812132c
	if (!ctx.cr6.eq) goto loc_8812132C;
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
	// lhz r10,28(r11)
	ctx.current_instruction = 0x88121318;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// stw r9,64(r11)
	ctx.current_instruction = 0x8812131C;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// addi r30,r10,-15
	ctx.r30.s64 = ctx.r10.s64 + -15;
	// lwz r8,52(r31)
	ctx.current_instruction = 0x88121324;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// stw r22,68(r8)
	ctx.current_instruction = 0x88121328;
	REX_STORE_U32(ctx.r8.u32 + 68, ctx.r22.u32);
loc_8812132C:
	// lwz r11,52(r31)
	ctx.current_instruction = 0x8812132C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,164(r1)
	ctx.current_instruction = 0x88121334;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_88121338:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88121338;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88121344;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88121350;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88121350:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// ld r10,8(r31)
	ctx.current_instruction = 0x88121358;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88121360;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r10,8(r31)
	ctx.current_instruction = 0x88121368;
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// lhz r10,28(r11)
	ctx.current_instruction = 0x8812136C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// addi r9,r10,-15
	ctx.r9.s64 = ctx.r10.s64 + -15;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881213a4
	if (!ctx.cr6.eq) goto loc_881213A4;
	// stw r22,96(r1)
	ctx.current_instruction = 0x8812137C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x881198a8
	ctx.lr = 0x8812139C;
	sub_881198A8(ctx, base);
loc_8812139C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
loc_881213A4:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,104(r1)
	ctx.current_instruction = 0x881213A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x880cbcb0
	ctx.lr = 0x881213B4;
	sub_880CBCB0(ctx, base);
loc_881213B4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// li r9,4
	ctx.r9.s64 = 4;
	// lhz r6,132(r1)
	ctx.current_instruction = 0x881213C0;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 132);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,224(r31)
	ctx.current_instruction = 0x881213C8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r5,10
	ctx.r5.s64 = 655360;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x880cb090
	ctx.lr = 0x881213DC;
	sub_880CB090(ctx, base);
loc_881213DC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x881213E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,52(r31)
	ctx.current_instruction = 0x881213E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,20(r11)
	ctx.current_instruction = 0x881213EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lhz r10,28(r10)
	ctx.current_instruction = 0x881213F0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,20(r11)
	ctx.current_instruction = 0x881213F8;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r24,80(r31)
	ctx.current_instruction = 0x881213FC;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88121404:
	// stw r26,20(r8)
	ctx.current_instruction = 0x88121404;
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r26.u32);
	// stw r24,80(r31)
	ctx.current_instruction = 0x88121408;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88121410:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88121410;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8812141C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8812144c
	if (!ctx.cr6.eq) goto loc_8812144C;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// bne cr6,0x88121448
	if (!ctx.cr6.eq) goto loc_88121448;
	// lwz r10,52(r31)
	ctx.current_instruction = 0x88121430;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,20(r10)
	ctx.current_instruction = 0x88121434;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88121448
	if (!ctx.cr6.eq) goto loc_88121448;
	// stw r24,80(r31)
	ctx.current_instruction = 0x88121440;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88121448:
	// stw r25,8(r11)
	ctx.current_instruction = 0x88121448;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_8812144C:
	// lwz r11,52(r31)
	ctx.current_instruction = 0x8812144C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88121450;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,16(r11)
	ctx.current_instruction = 0x88121454;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,12(r10)
	ctx.current_instruction = 0x88121458;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.current_instruction = 0x8812145C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,52(r31)
	ctx.current_instruction = 0x88121460;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r6,12(r8)
	ctx.current_instruction = 0x88121468;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lhz r4,28(r7)
	ctx.current_instruction = 0x8812146C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + 28);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88121478;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88121478:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// stw r25,96(r1)
	ctx.current_instruction = 0x88121480;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// bl 0x88119100
	ctx.lr = 0x881214A0;
	sub_88119100(ctx, base);
loc_881214A0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// lwz r11,52(r31)
	ctx.current_instruction = 0x881214A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r29,80(r1)
	ctx.current_instruction = 0x881214AC;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lhz r11,30(r11)
	ctx.current_instruction = 0x881214B0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x88120b90
	if (ctx.cr6.lt) goto loc_88120B90;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x88120b90
	if (ctx.cr6.eq) goto loc_88120B90;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x881214d4
	if (!ctx.cr6.gt) goto loc_881214D4;
	// addi r27,r29,1
	ctx.r27.s64 = ctx.r29.s64 + 1;
	// b 0x881214dc
	goto loc_881214DC;
loc_881214D4:
	// bne cr6,0x881214dc
	if (!ctx.cr6.eq) goto loc_881214DC;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_881214DC:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x881218e4
	if (ctx.cr6.lt) goto loc_881218E4;
loc_881214E4:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x881214E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// lwz r10,12(r11)
	ctx.current_instruction = 0x881214EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r10,12(r11)
	ctx.current_instruction = 0x881214F4;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x881214F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,16(r9)
	ctx.current_instruction = 0x881214FC;
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r29.u32);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x88121500;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,20(r8)
	ctx.current_instruction = 0x88121504;
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r29.u32);
	// lwz r7,52(r31)
	ctx.current_instruction = 0x88121508;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r6,84(r1)
	ctx.current_instruction = 0x8812150C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,20(r7)
	ctx.current_instruction = 0x88121510;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// stw r5,24(r6)
	ctx.current_instruction = 0x88121514;
	REX_STORE_U32(ctx.r6.u32 + 24, ctx.r5.u32);
	// bne cr6,0x88121524
	if (!ctx.cr6.eq) goto loc_88121524;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8812151C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r25,24(r11)
	ctx.current_instruction = 0x88121520;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r25.u32);
loc_88121524:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88121524;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 3, ctx.xer);
	// lwz r10,24(r11)
	ctx.current_instruction = 0x8812152C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,128(r1)
	ctx.current_instruction = 0x88121530;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r9,52(r31)
	ctx.current_instruction = 0x88121534;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r8,4(r9)
	ctx.current_instruction = 0x88121538;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// sth r8,132(r1)
	ctx.current_instruction = 0x8812153C;
	REX_STORE_U16(ctx.r1.u32 + 132, ctx.r8.u16);
	// lwz r7,52(r31)
	ctx.current_instruction = 0x88121540;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r6,8(r7)
	ctx.current_instruction = 0x88121544;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r6,136(r1)
	ctx.current_instruction = 0x88121548;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// lwz r5,16(r11)
	ctx.current_instruction = 0x8812154C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r26,160(r1)
	ctx.current_instruction = 0x88121550;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// stw r26,164(r1)
	ctx.current_instruction = 0x88121554;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stw r29,144(r1)
	ctx.current_instruction = 0x88121558;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r5,140(r1)
	ctx.current_instruction = 0x8812155C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// ld r10,56(r11)
	ctx.current_instruction = 0x88121560;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r31)
	ctx.current_instruction = 0x88121568;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,12(r11)
	ctx.current_instruction = 0x8812156C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// subf r8,r9,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r9.u64;
	// lwz r7,20(r3)
	ctx.current_instruction = 0x88121574;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
	// clrldi r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// std r5,152(r1)
	ctx.current_instruction = 0x88121580;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// beq cr6,0x88121590
	if (ctx.cr6.eq) goto loc_88121590;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 2, ctx.xer);
	// bne cr6,0x881215ac
	if (!ctx.cr6.eq) goto loc_881215AC;
loc_88121590:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r4,32(r11)
	ctx.current_instruction = 0x88121594;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// lwz r3,148(r31)
	ctx.current_instruction = 0x88121598;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x880cb730
	ctx.lr = 0x881215A0;
	sub_880CB730(ctx, base);
loc_881215A0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881218e0
	if (ctx.cr6.lt) goto loc_881218E0;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x881215A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_881215AC:
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 3, ctx.xer);
	// bne cr6,0x88121614
	if (!ctx.cr6.eq) goto loc_88121614;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x881215B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r25,36(r11)
	ctx.current_instruction = 0x881215B8;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r25.u32);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x881215BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.current_instruction = 0x881215C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,12(r10)
	ctx.current_instruction = 0x881215C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,40(r9)
	ctx.current_instruction = 0x881215C8;
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// lwz r7,84(r1)
	ctx.current_instruction = 0x881215CC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r25,4(r7)
	ctx.current_instruction = 0x881215D0;
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r25.u32);
	// lwz r6,84(r1)
	ctx.current_instruction = 0x881215D4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.current_instruction = 0x881215D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,12(r6)
	ctx.current_instruction = 0x881215DC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r4,12(r11)
	ctx.current_instruction = 0x881215E0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x88121644
	if (!ctx.cr6.gt) goto loc_88121644;
	// stw r26,36(r11)
	ctx.current_instruction = 0x881215EC;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r26.u32);
	// lwz r11,88(r1)
	ctx.current_instruction = 0x881215F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,40(r11)
	ctx.current_instruction = 0x881215F4;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r26.u32);
	// lwz r10,88(r1)
	ctx.current_instruction = 0x881215F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r25,76(r10)
	ctx.current_instruction = 0x881215FC;
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r25.u32);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x88121600;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,28(r9)
	ctx.current_instruction = 0x88121604;
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r26.u32);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x88121608;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r26,32(r8)
	ctx.current_instruction = 0x8812160C;
	REX_STORE_U8(ctx.r8.u32 + 32, ctx.r26.u8);
	// b 0x88121644
	goto loc_88121644;
loc_88121614:
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 2, ctx.xer);
	// bne cr6,0x88121644
	if (!ctx.cr6.eq) goto loc_88121644;
	// lwz r10,36(r11)
	ctx.current_instruction = 0x8812161C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88121638
	if (ctx.cr6.eq) goto loc_88121638;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88121628;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,40(r11)
	ctx.current_instruction = 0x8812162C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8812185c
	if (ctx.cr6.gt) goto loc_8812185C;
loc_88121638:
	// lwz r10,76(r11)
	ctx.current_instruction = 0x88121638;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8812185c
	if (!ctx.cr6.eq) goto loc_8812185C;
loc_88121644:
	// lhz r11,64(r31)
	ctx.current_instruction = 0x88121644;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 64);
	// clrldi r8,r28,32
	ctx.r8.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// ld r10,32(r31)
	ctx.current_instruction = 0x8812164C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r9,8(r31)
	ctx.current_instruction = 0x88121654;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x881216ac
	if (!ctx.cr6.gt) goto loc_881216AC;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r8,0(r31)
	ctx.current_instruction = 0x88121668;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,20(r8)
	ctx.current_instruction = 0x88121680;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88121694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88121694:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// ld r10,8(r31)
	ctx.current_instruction = 0x8812169C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r31)
	ctx.current_instruction = 0x881216A8;
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
loc_881216AC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x881217e0
	if (ctx.cr6.eq) goto loc_881217E0;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x881216B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ld r4,8(r31)
	ctx.current_instruction = 0x881216C0;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,28(r11)
	ctx.current_instruction = 0x881216C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881216D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881216D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// stw r26,160(r1)
	ctx.current_instruction = 0x881216DC;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r11,52(r31)
	ctx.current_instruction = 0x881216E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,76(r11)
	ctx.current_instruction = 0x881216E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88121730
	if (ctx.cr6.eq) goto loc_88121730;
	// stw r25,160(r1)
	ctx.current_instruction = 0x881216F4;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// lwz r11,52(r31)
	ctx.current_instruction = 0x881216F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// stw r29,72(r11)
	ctx.current_instruction = 0x881216FC;
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r29.u32);
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88121700;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,60(r11)
	ctx.current_instruction = 0x88121704;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88121724
	if (!ctx.cr6.eq) goto loc_88121724;
	// addi r10,r11,44
	ctx.r10.s64 = ctx.r11.s64 + 44;
	// addi r30,r29,-15
	ctx.r30.s64 = ctx.r29.s64 + -15;
	// stw r10,64(r11)
	ctx.current_instruction = 0x88121718;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r9,52(r31)
	ctx.current_instruction = 0x8812171C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// stw r22,68(r9)
	ctx.current_instruction = 0x88121720;
	REX_STORE_U32(ctx.r9.u32 + 68, ctx.r22.u32);
loc_88121724:
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88121724;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,164(r1)
	ctx.current_instruction = 0x8812172C;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_88121730:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88121730;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8812173C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88121748;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88121748:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// ld r10,8(r31)
	ctx.current_instruction = 0x88121750;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// addi r9,r29,-15
	ctx.r9.s64 = ctx.r29.s64 + -15;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// std r8,8(r31)
	ctx.current_instruction = 0x88121764;
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r8.u64);
	// bne cr6,0x88121798
	if (!ctx.cr6.eq) goto loc_88121798;
	// stw r22,96(r1)
	ctx.current_instruction = 0x8812176C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88121774;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x881198a8
	ctx.lr = 0x88121790;
	sub_881198A8(ctx, base);
loc_88121790:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
loc_88121798:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,104(r1)
	ctx.current_instruction = 0x8812179C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x880cbcb0
	ctx.lr = 0x881217A8;
	sub_880CBCB0(ctx, base);
loc_881217A8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// li r9,4
	ctx.r9.s64 = 4;
	// lhz r6,132(r1)
	ctx.current_instruction = 0x881217B4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 132);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,224(r31)
	ctx.current_instruction = 0x881217BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r5,10
	ctx.r5.s64 = 655360;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x880cb090
	ctx.lr = 0x881217D0;
	sub_880CB090(ctx, base);
loc_881217D0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// stw r24,80(r31)
	ctx.current_instruction = 0x881217DC;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_881217E0:
	// lwz r11,52(r31)
	ctx.current_instruction = 0x881217E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lhz r10,30(r11)
	ctx.current_instruction = 0x881217E4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x881218e4
	if (!ctx.cr6.gt) goto loc_881218E4;
	// stw r25,96(r1)
	ctx.current_instruction = 0x881217F0;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bl 0x88119100
	ctx.lr = 0x88121810;
	sub_88119100(ctx, base);
loc_88121810:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88121818;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r10,80(r1)
	ctx.current_instruction = 0x8812181C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// lhz r9,30(r11)
	ctx.current_instruction = 0x88121824;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881218e0
	if (ctx.cr6.lt) goto loc_881218E0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881218e0
	if (ctx.cr6.eq) goto loc_881218E0;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r30,32(r11)
	ctx.current_instruction = 0x8812183C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
	// lhz r8,30(r9)
	ctx.current_instruction = 0x88121848;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 30);
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x881214e4
	if (!ctx.cr6.lt) goto loc_881214E4;
	// stw r24,80(r31)
	ctx.current_instruction = 0x88121854;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_8812185C:
	// stw r26,4(r11)
	ctx.current_instruction = 0x8812185C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88121860;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,76(r11)
	ctx.current_instruction = 0x88121864;
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r26.u32);
	// lwz r11,88(r1)
	ctx.current_instruction = 0x88121868;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,28(r11)
	ctx.current_instruction = 0x8812186C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881218a8
	if (ctx.cr6.eq) goto loc_881218A8;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88121878;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r9,32(r11)
	ctx.current_instruction = 0x8812187C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// lbz r8,32(r10)
	ctx.current_instruction = 0x88121880;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881218a8
	if (!ctx.cr6.eq) goto loc_881218A8;
	// stw r26,28(r11)
	ctx.current_instruction = 0x8812188C;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r26.u32);
	// lwz r11,88(r1)
	ctx.current_instruction = 0x88121890;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r26,32(r11)
	ctx.current_instruction = 0x88121894;
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r26.u8);
	// lwz r10,88(r1)
	ctx.current_instruction = 0x88121898;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,36(r10)
	ctx.current_instruction = 0x8812189C;
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r26.u32);
	// lwz r9,88(r1)
	ctx.current_instruction = 0x881218A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,40(r9)
	ctx.current_instruction = 0x881218A4;
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r26.u32);
loc_881218A8:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x881218A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,8(r11)
	ctx.current_instruction = 0x881218AC;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x881218B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,16(r10)
	ctx.current_instruction = 0x881218B4;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r26.u32);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x881218B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,20(r9)
	ctx.current_instruction = 0x881218BC;
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r26.u32);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x881218C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,28(r8)
	ctx.current_instruction = 0x881218C4;
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r26.u32);
	// lwz r7,84(r1)
	ctx.current_instruction = 0x881218C8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r26,32(r7)
	ctx.current_instruction = 0x881218CC;
	REX_STORE_U8(ctx.r7.u32 + 32, ctx.r26.u8);
	// lwz r6,84(r1)
	ctx.current_instruction = 0x881218D0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,36(r6)
	ctx.current_instruction = 0x881218D4;
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r26.u32);
	// lwz r5,84(r1)
	ctx.current_instruction = 0x881218D8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,40(r5)
	ctx.current_instruction = 0x881218DC;
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r26.u32);
loc_881218E0:
	// stw r24,80(r31)
	ctx.current_instruction = 0x881218E0;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_881218E4:
	// stw r24,80(r31)
	ctx.current_instruction = 0x881218E4;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_881218EC:
	// lwz r11,56(r31)
	ctx.current_instruction = 0x881218EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,48(r31)
	ctx.current_instruction = 0x881218F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r31)
	ctx.current_instruction = 0x881218F8;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r9,60(r10)
	ctx.current_instruction = 0x881218FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8812193c
	if (ctx.cr6.lt) goto loc_8812193C;
	// lwz r11,188(r31)
	ctx.current_instruction = 0x88121908;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88121924
	if (ctx.cr6.eq) goto loc_88121924;
	// lwz r11,212(r31)
	ctx.current_instruction = 0x88121914;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88121924
	if (!ctx.cr6.eq) goto loc_88121924;
	// stw r25,200(r31)
	ctx.current_instruction = 0x88121920;
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r25.u32);
loc_88121924:
	// lwz r11,184(r31)
	ctx.current_instruction = 0x88121924;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88121934
	if (ctx.cr6.eq) goto loc_88121934;
	// stw r25,204(r31)
	ctx.current_instruction = 0x88121930;
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r25.u32);
loc_88121934:
	// stw r19,80(r31)
	ctx.current_instruction = 0x88121934;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r19.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_8812193C:
	// stw r16,80(r31)
	ctx.current_instruction = 0x8812193C;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r16.u32);
	// b 0x881208b0
	goto loc_881208B0;
loc_88121944:
	// li r11,18
	ctx.r11.s64 = 18;
	// lwz r3,224(r31)
	ctx.current_instruction = 0x88121948;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,80(r31)
	ctx.current_instruction = 0x88121950;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x880cafe0
	ctx.lr = 0x88121960;
	sub_880CAFE0(ctx, base);
loc_88121960:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812199c
	if (ctx.cr6.lt) goto loc_8812199C;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// b 0x8812199c
	goto loc_8812199C;
loc_88121974:
	// stw r25,228(r31)
	ctx.current_instruction = 0x88121974;
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r25.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r3,224(r31)
	ctx.current_instruction = 0x88121980;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,48
	ctx.r5.u64 = ctx.r5.u64 | 48;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x880cb090
	ctx.lr = 0x8812199C;
	sub_880CB090(ctx, base);
loc_8812199C:
	// lwz r11,80(r31)
	ctx.current_instruction = 0x8812199C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x881219b0
	if (ctx.cr6.eq) goto loc_881219B0;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x881219b8
	if (!ctx.cr6.eq) goto loc_881219B8;
loc_881219B0:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,80(r31)
	ctx.current_instruction = 0x881219B4;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_881219B8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814C750) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814C750;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814C750) {
			switch (rex_dispatch_address) {
				case 0x8814C758:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814C750;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814C758: goto loc_8814C758;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8814C758;
	__savegprlr_29(ctx, base);
loc_8814C758:
	// lis r7,-30678
	ctx.r7.s64 = -2010513408;
	// sth r8,-34(r1)
	ctx.current_instruction = 0x8814C75C;
	REX_STORE_U16(ctx.r1.u32 + -34, ctx.r8.u16);
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v10,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r8,25792(r7)
	ctx.current_instruction = 0x8814C77C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 25792);
	// addi r30,r1,-48
	ctx.r30.s64 = ctx.r1.s64 + -48;
	// lvx128 v63,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r4,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvx128 v9,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v7,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r31,r3
	ctx.r8.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lvx128 v8,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// vperm128 v2,v10,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v62,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lvx128 v61,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vperm128 v31,v8,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v6,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v9,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v5,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v60,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v59,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v29,v6,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v58,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v3,v5,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// lvx128 v4,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v7,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v5,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v11,v4,7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_set1_epi16(short(0x100))));
	// vslh v25,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v28,v5,v58,v0
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v23,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// vslh v24,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v4,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v19,v27,v8
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v57,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v21,v25,v9
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddshs v22,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// vaddshs v17,v24,v7
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vperm128 v27,v4,v57,v0
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v16,v23,v6
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// lvx128 v56,r29,r10
	ea = (ctx.r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v20,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// vsrah v18,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v3,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v15,v21,v1
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vaddshs v10,v19,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// add r30,r5,r6
	ctx.r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vaddshs v14,v20,v5
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// add r8,r3,r6
	ctx.r8.u64 = ctx.r3.u64 + ctx.r6.u64;
	// vpkshus128 v55,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vaddshs v9,v17,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v8,v16,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vperm128 v0,v3,v56,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r11,4
	ctx.r11.s64 = 4;
	// vaddshs v6,v15,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vaddshs v7,v14,v28
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v5,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v2,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v1,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v31,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvewx128 v55,r0,r5
	ctx.current_instruction = 0x8814C898;
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// vslh v30,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvewx128 v55,r5,r11
	ctx.current_instruction = 0x8814C8A0;
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v26,v31,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsrah v29,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
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
	// vaddshs v25,v30,v3
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v22,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vaddshs v24,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vpkshus128 v54,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsrah v23,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v53,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v21,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v19,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v20,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v52,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v18,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v16,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvewx128 v54,r0,r30
	ctx.current_instruction = 0x8814C8E4;
	ea = (ctx.r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v51,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// stvewx128 v54,r30,r11
	ctx.current_instruction = 0x8814C8EC;
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v50,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// stvewx128 v53,r0,r3
	ctx.current_instruction = 0x8814C8F4;
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v15,v18,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvewx128 v53,r3,r11
	ctx.current_instruction = 0x8814C8FC;
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v49,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// stvewx128 v52,r0,r8
	ctx.current_instruction = 0x8814C904;
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r8,r11
	ctx.current_instruction = 0x8814C908;
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v48,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// stvewx128 v51,r0,r7
	ctx.current_instruction = 0x8814C910;
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v51,r7,r11
	ctx.current_instruction = 0x8814C914;
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r0,r9
	ctx.current_instruction = 0x8814C918;
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r9,r11
	ctx.current_instruction = 0x8814C91C;
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r0,r10
	ctx.current_instruction = 0x8814C920;
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r10,r11
	ctx.current_instruction = 0x8814C924;
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r0,r6
	ctx.current_instruction = 0x8814C928;
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r6,r11
	ctx.current_instruction = 0x8814C92C;
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881588B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881588B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881588B0) {
			switch (rex_dispatch_address) {
				case 0x881588B8:
				case 0x881589C4:
				case 0x881589E4:
				case 0x88158A20:
				case 0x88158A70:
				case 0x88158A90:
				case 0x88158AB4:
				case 0x88158AD8:
				case 0x88158AFC:
				case 0x88158B20:
				case 0x88158B4C:
				case 0x88158BB4:
				case 0x88158BC4:
				case 0x88158BD4:
				case 0x88158C74:
				case 0x88158C94:
				case 0x88158CD0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881588B0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881588B8: goto loc_881588B8;
		case 0x881589C4: goto loc_881589C4;
		case 0x881589E4: goto loc_881589E4;
		case 0x88158A20: goto loc_88158A20;
		case 0x88158A70: goto loc_88158A70;
		case 0x88158A90: goto loc_88158A90;
		case 0x88158AB4: goto loc_88158AB4;
		case 0x88158AD8: goto loc_88158AD8;
		case 0x88158AFC: goto loc_88158AFC;
		case 0x88158B20: goto loc_88158B20;
		case 0x88158B4C: goto loc_88158B4C;
		case 0x88158BB4: goto loc_88158BB4;
		case 0x88158BC4: goto loc_88158BC4;
		case 0x88158BD4: goto loc_88158BD4;
		case 0x88158C74: goto loc_88158C74;
		case 0x88158C94: goto loc_88158C94;
		case 0x88158CD0: goto loc_88158CD0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x881588B8;
	__savegprlr_21(ctx, base);
loc_881588B8:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x881588B8;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r9,3980(r3)
	ctx.current_instruction = 0x881588C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3980);
	// lwz r6,24688(r3)
	ctx.current_instruction = 0x881588C4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// addi r8,r4,15
	ctx.r8.s64 = ctx.r4.s64 + 15;
	// addi r7,r5,15
	ctx.r7.s64 = ctx.r5.s64 + 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r8,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r7,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r21,r6,8
	ctx.r21.s64 = ctx.r6.s64 + 8;
	// beq cr6,0x881588f4
	if (ctx.cr6.eq) goto loc_881588F4;
	// srawi r7,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 2;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x881588fc
	goto loc_881588FC;
loc_881588F4:
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
loc_881588FC:
	// lwz r5,15536(r31)
	ctx.current_instruction = 0x881588FC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// bne cr6,0x88158914
	if (!ctx.cr6.eq) goto loc_88158914;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
loc_88158914:
	// lwz r4,15364(r31)
	ctx.current_instruction = 0x88158914;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15364);
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// srawi r23,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r23.s64 = ctx.r10.s32 >> 4;
	// li r25,1
	ctx.r25.s64 = 1;
	// srawi r22,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r22.s64 = ctx.r11.s32 >> 4;
	// mullw r24,r3,r8
	ctx.r24.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mullw r27,r9,r7
	ctx.r27.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x88158c08
	if (!ctx.cr6.eq) goto loc_88158C08;
	// lwz r11,22288(r31)
	ctx.current_instruction = 0x88158944;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22288);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88158958
	if (ctx.cr6.eq) goto loc_88158958;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
loc_88158958:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x88158964
	if (ctx.cr6.eq) goto loc_88158964;
	// addi r7,r30,-6
	ctx.r7.s64 = ctx.r30.s64 + -6;
loc_88158964:
	// lwz r11,712(r6)
	ctx.current_instruction = 0x88158964;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88158980
	if (ctx.cr6.eq) goto loc_88158980;
	// lwz r11,18464(r6)
	ctx.current_instruction = 0x88158970;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 18464);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x88158984
	goto loc_88158984;
loc_88158980:
	// li r11,0
	ctx.r11.s64 = 0;
loc_88158984:
	// addi r9,r5,-7
	ctx.r9.s64 = ctx.r5.s64 + -7;
	// stw r11,84(r1)
	ctx.current_instruction = 0x88158988;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// lwz r10,22060(r31)
	ctx.current_instruction = 0x88158990;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22060);
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r9,22056(r31)
	ctx.current_instruction = 0x88158998;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 22056);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,15268(r31)
	ctx.current_instruction = 0x881589A0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// subf r11,r11,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r8,r11,r8
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// bl 0x881b3890
	ctx.lr = 0x881589C4;
	sub_881B3890(ctx, base);
loc_881589C4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88158dbc
	if (!ctx.cr6.eq) goto loc_88158DBC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x88158a60
	if (ctx.cr6.eq) goto loc_88158A60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,24688(r31)
	ctx.current_instruction = 0x881589D8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 24688);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881717d0
	ctx.lr = 0x881589E4;
	sub_881717D0(ctx, base);
loc_881589E4:
	// lwz r11,18408(r30)
	ctx.current_instruction = 0x881589E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 18408);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88158db8
	if (!ctx.cr6.gt) goto loc_88158DB8;
	// addi r11,r22,1
	ctx.r11.s64 = ctx.r22.s64 + 1;
	// addi r31,r30,17892
	ctx.r31.s64 = ctx.r30.s64 + 17892;
	// mullw r10,r11,r23
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// rlwinm r28,r10,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r11,18168
	ctx.r27.s64 = ctx.r11.s64 + 18168;
loc_88158A0C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r26,0(r31)
	ctx.current_instruction = 0x88158A10;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8815e510
	ctx.lr = 0x88158A20;
	sub_8815E510(ctx, base);
loc_88158A20:
	// stw r3,624(r26)
	ctx.current_instruction = 0x88158A20;
	REX_STORE_U32(ctx.r26.u32 + 624, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88158A24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,624(r11)
	ctx.current_instruction = 0x88158A28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 624);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88158a54
	if (ctx.cr6.eq) goto loc_88158A54;
	// lwz r11,18408(r30)
	ctx.current_instruction = 0x88158A34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 18408);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88158a0c
	if (ctx.cr6.lt) goto loc_88158A0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_88158A54:
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_88158A60:
	// addi r4,r31,3756
	ctx.r4.s64 = ctx.r31.s64 + 3756;
	// lwz r3,15268(r31)
	ctx.current_instruction = 0x88158A64;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x881b36a0
	ctx.lr = 0x88158A70;
	sub_881B36A0(ctx, base);
loc_88158A70:
	// lwz r11,3756(r31)
	ctx.current_instruction = 0x88158A70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3756);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88158a54
	if (ctx.cr6.eq) goto loc_88158A54;
	// stw r25,620(r11)
	ctx.current_instruction = 0x88158A7C;
	REX_STORE_U32(ctx.r11.u32 + 620, ctx.r25.u32);
	// addi r4,r31,3748
	ctx.r4.s64 = ctx.r31.s64 + 3748;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,15268(r31)
	ctx.current_instruction = 0x88158A88;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// bl 0x881b36a0
	ctx.lr = 0x88158A90;
	sub_881B36A0(ctx, base);
loc_88158A90:
	// lwz r11,3748(r31)
	ctx.current_instruction = 0x88158A90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88158a54
	if (ctx.cr6.eq) goto loc_88158A54;
	// stw r25,620(r11)
	ctx.current_instruction = 0x88158A9C;
	REX_STORE_U32(ctx.r11.u32 + 620, ctx.r25.u32);
loc_88158AA0:
	// addi r30,r31,3744
	ctx.r30.s64 = ctx.r31.s64 + 3744;
	// lwz r3,15268(r31)
	ctx.current_instruction = 0x88158AA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x881b36a0
	ctx.lr = 0x88158AB4;
	sub_881B36A0(ctx, base);
loc_88158AB4:
	// lwz r11,3744(r31)
	ctx.current_instruction = 0x88158AB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88158a54
	if (ctx.cr6.eq) goto loc_88158A54;
	// stw r25,620(r11)
	ctx.current_instruction = 0x88158AC0;
	REX_STORE_U32(ctx.r11.u32 + 620, ctx.r25.u32);
	// addi r29,r31,3752
	ctx.r29.s64 = ctx.r31.s64 + 3752;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,15268(r31)
	ctx.current_instruction = 0x88158AD0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// bl 0x881b36a0
	ctx.lr = 0x88158AD8;
	sub_881B36A0(ctx, base);
loc_88158AD8:
	// lwz r11,3752(r31)
	ctx.current_instruction = 0x88158AD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88158a54
	if (ctx.cr6.eq) goto loc_88158A54;
	// stw r25,620(r11)
	ctx.current_instruction = 0x88158AE4;
	REX_STORE_U32(ctx.r11.u32 + 620, ctx.r25.u32);
	// addi r26,r31,3760
	ctx.r26.s64 = ctx.r31.s64 + 3760;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,15268(r31)
	ctx.current_instruction = 0x88158AF0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x881b36a0
	ctx.lr = 0x88158AFC;
	sub_881B36A0(ctx, base);
loc_88158AFC:
	// lwz r11,3760(r31)
	ctx.current_instruction = 0x88158AFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88158a54
	if (ctx.cr6.eq) goto loc_88158A54;
	// stw r25,620(r11)
	ctx.current_instruction = 0x88158B08;
	REX_STORE_U32(ctx.r11.u32 + 620, ctx.r25.u32);
	// addi r28,r31,3764
	ctx.r28.s64 = ctx.r31.s64 + 3764;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,15268(r31)
	ctx.current_instruction = 0x88158B18;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// bl 0x881b36a0
	ctx.lr = 0x88158B20;
	sub_881B36A0(ctx, base);
loc_88158B20:
	// lwz r11,3764(r31)
	ctx.current_instruction = 0x88158B20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3764);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88158a54
	if (ctx.cr6.eq) goto loc_88158A54;
	// stw r25,620(r11)
	ctx.current_instruction = 0x88158B2C;
	REX_STORE_U32(ctx.r11.u32 + 620, ctx.r25.u32);
	// rlwinm r10,r23,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// add r11,r10,r22
	ctx.r11.u64 = ctx.r10.u64 + ctx.r22.u64;
	// addi r5,r9,18168
	ctx.r5.s64 = ctx.r9.s64 + 18168;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8815e510
	ctx.lr = 0x88158B4C;
	sub_8815E510(ctx, base);
loc_88158B4C:
	// lwz r8,0(r30)
	ctx.current_instruction = 0x88158B4C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,624(r8)
	ctx.current_instruction = 0x88158B50;
	REX_STORE_U32(ctx.r8.u32 + 624, ctx.r3.u32);
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88158B54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,624(r11)
	ctx.current_instruction = 0x88158B58;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 624);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x88158a54
	if (ctx.cr6.eq) goto loc_88158A54;
	// lwz r9,0(r11)
	ctx.current_instruction = 0x88158B64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r10,224(r31)
	ctx.current_instruction = 0x88158B6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,3776(r31)
	ctx.current_instruction = 0x88158B78;
	REX_STORE_U32(ctx.r31.u32 + 3776, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.current_instruction = 0x88158B7C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,3780(r31)
	ctx.current_instruction = 0x88158B88;
	REX_STORE_U32(ctx.r31.u32 + 3780, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.current_instruction = 0x88158B8C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r11,220(r31)
	ctx.current_instruction = 0x88158B94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r7,3784(r31)
	ctx.current_instruction = 0x88158B9C;
	REX_STORE_U32(ctx.r31.u32 + 3784, ctx.r7.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r6,3860(r31)
	ctx.current_instruction = 0x88158BA4;
	REX_STORE_U32(ctx.r31.u32 + 3860, ctx.r6.u32);
	// stw r10,3864(r31)
	ctx.current_instruction = 0x88158BA8;
	REX_STORE_U32(ctx.r31.u32 + 3864, ctx.r10.u32);
	// stw r11,3856(r31)
	ctx.current_instruction = 0x88158BAC;
	REX_STORE_U32(ctx.r31.u32 + 3856, ctx.r11.u32);
	// bl 0x88052d90
	ctx.lr = 0x88158BB4;
	sub_88052D90(ctx, base);
loc_88158BB4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,3780(r31)
	ctx.current_instruction = 0x88158BB8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x88052d90
	ctx.lr = 0x88158BC4;
	sub_88052D90(ctx, base);
loc_88158BC4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r3,3784(r31)
	ctx.current_instruction = 0x88158BCC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// bl 0x88052d90
	ctx.lr = 0x88158BD4;
	sub_88052D90(ctx, base);
loc_88158BD4:
	// lwz r9,0(r29)
	ctx.current_instruction = 0x88158BD4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.current_instruction = 0x88158BD8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,3788(r31)
	ctx.current_instruction = 0x88158BE4;
	REX_STORE_U32(ctx.r31.u32 + 3788, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.current_instruction = 0x88158BE8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,3792(r31)
	ctx.current_instruction = 0x88158BEC;
	REX_STORE_U32(ctx.r31.u32 + 3792, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.current_instruction = 0x88158BF0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,3796(r31)
	ctx.current_instruction = 0x88158BF4;
	REX_STORE_U32(ctx.r31.u32 + 3796, ctx.r6.u32);
	// beq cr6,0x88158d04
	if (ctx.cr6.eq) goto loc_88158D04;
	// lwz r10,220(r31)
	ctx.current_instruction = 0x88158BFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88158d08
	goto loc_88158D08;
loc_88158C08:
	// lwz r11,712(r6)
	ctx.current_instruction = 0x88158C08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88158c24
	if (ctx.cr6.eq) goto loc_88158C24;
	// lwz r11,18464(r6)
	ctx.current_instruction = 0x88158C14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 18464);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x88158c28
	goto loc_88158C28;
loc_88158C24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_88158C28:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bgt cr6,0x88158c38
	if (ctx.cr6.gt) goto loc_88158C38;
	// li r7,4
	ctx.r7.s64 = 4;
loc_88158C38:
	// addi r9,r5,-7
	ctx.r9.s64 = ctx.r5.s64 + -7;
	// stw r11,84(r1)
	ctx.current_instruction = 0x88158C3C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r10,22060(r31)
	ctx.current_instruction = 0x88158C44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22060);
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r9,22056(r31)
	ctx.current_instruction = 0x88158C4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 22056);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,15268(r31)
	ctx.current_instruction = 0x88158C54;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r8,r11,r8
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// bl 0x881b3890
	ctx.lr = 0x88158C74;
	sub_881B3890(ctx, base);
loc_88158C74:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88158dbc
	if (!ctx.cr6.eq) goto loc_88158DBC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x88158aa0
	if (ctx.cr6.eq) goto loc_88158AA0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,24688(r31)
	ctx.current_instruction = 0x88158C88;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 24688);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881717d0
	ctx.lr = 0x88158C94;
	sub_881717D0(ctx, base);
loc_88158C94:
	// lwz r11,18408(r30)
	ctx.current_instruction = 0x88158C94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 18408);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88158db8
	if (!ctx.cr6.gt) goto loc_88158DB8;
	// addi r11,r22,1
	ctx.r11.s64 = ctx.r22.s64 + 1;
	// addi r31,r30,17892
	ctx.r31.s64 = ctx.r30.s64 + 17892;
	// mullw r10,r11,r23
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// rlwinm r28,r10,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r11,18168
	ctx.r27.s64 = ctx.r11.s64 + 18168;
loc_88158CBC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r26,0(r31)
	ctx.current_instruction = 0x88158CC0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8815e510
	ctx.lr = 0x88158CD0;
	sub_8815E510(ctx, base);
loc_88158CD0:
	// stw r3,624(r26)
	ctx.current_instruction = 0x88158CD0;
	REX_STORE_U32(ctx.r26.u32 + 624, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88158CD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,624(r11)
	ctx.current_instruction = 0x88158CD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 624);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88158a54
	if (ctx.cr6.eq) goto loc_88158A54;
	// lwz r11,18408(r30)
	ctx.current_instruction = 0x88158CE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 18408);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88158cbc
	if (ctx.cr6.lt) goto loc_88158CBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_88158D04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_88158D08:
	// stw r11,3812(r31)
	ctx.current_instruction = 0x88158D08;
	REX_STORE_U32(ctx.r31.u32 + 3812, ctx.r11.u32);
	// lwz r10,0(r26)
	ctx.current_instruction = 0x88158D0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,0(r28)
	ctx.current_instruction = 0x88158D10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,3756(r31)
	ctx.current_instruction = 0x88158D14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3756);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r8,0(r10)
	ctx.current_instruction = 0x88158D1C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,3832(r31)
	ctx.current_instruction = 0x88158D20;
	REX_STORE_U32(ctx.r31.u32 + 3832, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x88158D24;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,3836(r31)
	ctx.current_instruction = 0x88158D28;
	REX_STORE_U32(ctx.r31.u32 + 3836, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.current_instruction = 0x88158D2C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,3840(r31)
	ctx.current_instruction = 0x88158D30;
	REX_STORE_U32(ctx.r31.u32 + 3840, ctx.r6.u32);
	// lwz r5,0(r9)
	ctx.current_instruction = 0x88158D34;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r5,3844(r31)
	ctx.current_instruction = 0x88158D38;
	REX_STORE_U32(ctx.r31.u32 + 3844, ctx.r5.u32);
	// lwz r4,4(r9)
	ctx.current_instruction = 0x88158D3C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r4,3848(r31)
	ctx.current_instruction = 0x88158D40;
	REX_STORE_U32(ctx.r31.u32 + 3848, ctx.r4.u32);
	// lwz r3,8(r9)
	ctx.current_instruction = 0x88158D44;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r3,3852(r31)
	ctx.current_instruction = 0x88158D48;
	REX_STORE_U32(ctx.r31.u32 + 3852, ctx.r3.u32);
	// beq cr6,0x88158d68
	if (ctx.cr6.eq) goto loc_88158D68;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88158D50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,3800(r31)
	ctx.current_instruction = 0x88158D54;
	REX_STORE_U32(ctx.r31.u32 + 3800, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x88158D58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,3804(r31)
	ctx.current_instruction = 0x88158D5C;
	REX_STORE_U32(ctx.r31.u32 + 3804, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.current_instruction = 0x88158D60;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,3808(r31)
	ctx.current_instruction = 0x88158D64;
	REX_STORE_U32(ctx.r31.u32 + 3808, ctx.r8.u32);
loc_88158D68:
	// lwz r11,3748(r31)
	ctx.current_instruction = 0x88158D68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88158db8
	if (ctx.cr6.eq) goto loc_88158DB8;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88158D74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,3816(r31)
	ctx.current_instruction = 0x88158D78;
	REX_STORE_U32(ctx.r31.u32 + 3816, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x88158D84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,3820(r31)
	ctx.current_instruction = 0x88158D88;
	REX_STORE_U32(ctx.r31.u32 + 3820, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.current_instruction = 0x88158D8C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,3824(r31)
	ctx.current_instruction = 0x88158D90;
	REX_STORE_U32(ctx.r31.u32 + 3824, ctx.r8.u32);
	// beq cr6,0x88158db0
	if (ctx.cr6.eq) goto loc_88158DB0;
	// lwz r11,220(r31)
	ctx.current_instruction = 0x88158D98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,3828(r31)
	ctx.current_instruction = 0x88158DA4;
	REX_STORE_U32(ctx.r31.u32 + 3828, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_88158DB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3828(r31)
	ctx.current_instruction = 0x88158DB4;
	REX_STORE_U32(ctx.r31.u32 + 3828, ctx.r11.u32);
loc_88158DB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_88158DBC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8816DA28) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8816DA28;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8816DA28) {
			switch (rex_dispatch_address) {
				case 0x8816DA30:
				case 0x8816DA5C:
				case 0x8816DAB8:
				case 0x8816DAEC:
				case 0x8816DB9C:
				case 0x8816DBE4:
				case 0x8816DC50:
				case 0x8816DC98:
				case 0x8816DD00:
				case 0x8816DD48:
				case 0x8816DDB4:
				case 0x8816DDFC:
				case 0x8816DE4C:
				case 0x8816DE80:
				case 0x8816DED8:
				case 0x8816DF0C:
				case 0x8816DF54:
				case 0x8816DF88:
				case 0x8816DFD0:
				case 0x8816E004:
				case 0x8816E04C:
				case 0x8816E080:
				case 0x8816E0D4:
				case 0x8816E108:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8816DA28;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8816DA30: goto loc_8816DA30;
		case 0x8816DA5C: goto loc_8816DA5C;
		case 0x8816DAB8: goto loc_8816DAB8;
		case 0x8816DAEC: goto loc_8816DAEC;
		case 0x8816DB9C: goto loc_8816DB9C;
		case 0x8816DBE4: goto loc_8816DBE4;
		case 0x8816DC50: goto loc_8816DC50;
		case 0x8816DC98: goto loc_8816DC98;
		case 0x8816DD00: goto loc_8816DD00;
		case 0x8816DD48: goto loc_8816DD48;
		case 0x8816DDB4: goto loc_8816DDB4;
		case 0x8816DDFC: goto loc_8816DDFC;
		case 0x8816DE4C: goto loc_8816DE4C;
		case 0x8816DE80: goto loc_8816DE80;
		case 0x8816DED8: goto loc_8816DED8;
		case 0x8816DF0C: goto loc_8816DF0C;
		case 0x8816DF54: goto loc_8816DF54;
		case 0x8816DF88: goto loc_8816DF88;
		case 0x8816DFD0: goto loc_8816DFD0;
		case 0x8816E004: goto loc_8816E004;
		case 0x8816E04C: goto loc_8816E04C;
		case 0x8816E080: goto loc_8816E080;
		case 0x8816E0D4: goto loc_8816E0D4;
		case 0x8816E108: goto loc_8816E108;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8816DA30;
	__savegprlr_27(ctx, base);
loc_8816DA30:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8816DA30;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.current_instruction = 0x8816DA38;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,8(r3)
	ctx.current_instruction = 0x8816DA44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816da58
	if (ctx.cr6.eq) goto loc_8816DA58;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8816DA58:
	// bl 0x88156500
	ctx.lr = 0x8816DA5C;
	sub_88156500(ctx, base);
loc_8816DA5C:
	// lwz r11,3616(r27)
	ctx.current_instruction = 0x8816DA5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3616);
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816DA68;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816DA6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x8816daec
	if (ctx.cr6.gt) goto loc_8816DAEC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8816daec
	if (ctx.cr6.eq) goto loc_8816DAEC;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8816dac8
	if (!ctx.cr6.gt) goto loc_8816DAC8;
loc_8816DA88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816dac8
	if (ctx.cr6.eq) goto loc_8816DAC8;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816DA90;
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
	ctx.current_instruction = 0x8816DAA4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8816DAA8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8816dab8
	if (!ctx.cr0.lt) goto loc_8816DAB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816DAB8;
	sub_88156678(ctx, base);
loc_8816DAB8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816DAB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816da88
	if (ctx.cr6.gt) goto loc_8816DA88;
loc_8816DAC8:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816DAC8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8816DAD8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8816DADC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8816daec
	if (!ctx.cr0.lt) goto loc_8816DAEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816DAEC;
	sub_88156678(ctx, base);
loc_8816DAEC:
	// lwz r11,140(r27)
	ctx.current_instruction = 0x8816DAEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 140);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,136(r27)
	ctx.current_instruction = 0x8816DAF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 136);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8816db10
	if (ctx.cr0.eq) goto loc_8816DB10;
loc_8816DB04:
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x8816db04
	if (!ctx.cr0.eq) goto loc_8816DB04;
loc_8816DB10:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8816dbe8
	if (!ctx.cr6.gt) goto loc_8816DBE8;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816DB1C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816DB28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x8816db3c
	if (!ctx.cr6.gt) goto loc_8816DB3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8816dbe8
	goto loc_8816DBE8;
loc_8816DB3C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8816db4c
	if (!ctx.cr6.eq) goto loc_8816DB4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8816dbe8
	goto loc_8816DBE8;
loc_8816DB4C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8816dbac
	if (!ctx.cr6.gt) goto loc_8816DBAC;
loc_8816DB54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816dbac
	if (ctx.cr6.eq) goto loc_8816DBAC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816DB60;
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
	ctx.current_instruction = 0x8816DB84;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816DB8C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816db9c
	if (!ctx.cr0.lt) goto loc_8816DB9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816DB9C;
	sub_88156678(ctx, base);
loc_8816DB9C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816DB9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816db54
	if (ctx.cr6.gt) goto loc_8816DB54;
loc_8816DBAC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816DBB0;
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
	ctx.current_instruction = 0x8816DBC8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816DBD4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816dbe4
	if (!ctx.cr0.lt) goto loc_8816DBE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816DBE4;
	sub_88156678(ctx, base);
loc_8816DBE4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8816DBE8:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816DBE8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,5
	ctx.r30.s64 = 5;
	// stw r11,3648(r27)
	ctx.current_instruction = 0x8816DBF0;
	REX_STORE_U32(ctx.r27.u32 + 3648, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816DBF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8816dc60
	if (!ctx.cr6.lt) goto loc_8816DC60;
loc_8816DC08:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816dc60
	if (ctx.cr6.eq) goto loc_8816DC60;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816DC14;
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
	ctx.current_instruction = 0x8816DC38;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816DC40;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816dc50
	if (!ctx.cr0.lt) goto loc_8816DC50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816DC50;
	sub_88156678(ctx, base);
loc_8816DC50:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816DC50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816dc08
	if (ctx.cr6.gt) goto loc_8816DC08;
loc_8816DC60:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816DC64;
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
	ctx.current_instruction = 0x8816DC7C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816DC88;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816dc98
	if (!ctx.cr0.lt) goto loc_8816DC98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816DC98;
	sub_88156678(ctx, base);
loc_8816DC98:
	// stw r30,0(r28)
	ctx.current_instruction = 0x8816DC98;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816DCA0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816DCA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816dd10
	if (!ctx.cr6.lt) goto loc_8816DD10;
loc_8816DCB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816dd10
	if (ctx.cr6.eq) goto loc_8816DD10;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816DCC4;
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
	ctx.current_instruction = 0x8816DCE8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816DCF0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816dd00
	if (!ctx.cr0.lt) goto loc_8816DD00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816DD00;
	sub_88156678(ctx, base);
loc_8816DD00:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816DD00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816dcb8
	if (ctx.cr6.gt) goto loc_8816DCB8;
loc_8816DD10:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816DD14;
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
	ctx.current_instruction = 0x8816DD2C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816DD38;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816dd48
	if (!ctx.cr0.lt) goto loc_8816DD48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816DD48;
	sub_88156678(ctx, base);
loc_8816DD48:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8816e108
	if (ctx.cr6.eq) goto loc_8816E108;
loc_8816DD50:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816DD50;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816DD5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816ddc4
	if (!ctx.cr6.lt) goto loc_8816DDC4;
loc_8816DD6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816ddc4
	if (ctx.cr6.eq) goto loc_8816DDC4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816DD78;
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
	ctx.current_instruction = 0x8816DD9C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816DDA4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816ddb4
	if (!ctx.cr0.lt) goto loc_8816DDB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816DDB4;
	sub_88156678(ctx, base);
loc_8816DDB4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816DDB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816dd6c
	if (ctx.cr6.gt) goto loc_8816DD6C;
loc_8816DDC4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816DDC8;
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
	ctx.current_instruction = 0x8816DDE0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816DDEC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816ddfc
	if (!ctx.cr0.lt) goto loc_8816DDFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816DDFC;
	sub_88156678(ctx, base);
loc_8816DDFC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8816dd50
	if (!ctx.cr6.eq) goto loc_8816DD50;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816DE04;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816DE0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816de5c
	if (!ctx.cr6.lt) goto loc_8816DE5C;
loc_8816DE1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816de5c
	if (ctx.cr6.eq) goto loc_8816DE5C;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816DE24;
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
	ctx.current_instruction = 0x8816DE38;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8816DE3C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8816de4c
	if (!ctx.cr0.lt) goto loc_8816DE4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816DE4C;
	sub_88156678(ctx, base);
loc_8816DE4C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816DE4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816de1c
	if (ctx.cr6.gt) goto loc_8816DE1C;
loc_8816DE5C:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816DE5C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8816DE6C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8816DE70;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8816de80
	if (!ctx.cr0.lt) goto loc_8816DE80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816DE80;
	sub_88156678(ctx, base);
loc_8816DE80:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816DE80;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r30,3688(r27)
	ctx.current_instruction = 0x8816DE84;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 3688);
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816DE8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x8816df0c
	if (ctx.cr6.gt) goto loc_8816DF0C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8816df0c
	if (ctx.cr6.eq) goto loc_8816DF0C;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8816dee8
	if (!ctx.cr6.gt) goto loc_8816DEE8;
loc_8816DEA8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816dee8
	if (ctx.cr6.eq) goto loc_8816DEE8;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816DEB0;
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
	ctx.current_instruction = 0x8816DEC4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8816DEC8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8816ded8
	if (!ctx.cr0.lt) goto loc_8816DED8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816DED8;
	sub_88156678(ctx, base);
loc_8816DED8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816DED8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816dea8
	if (ctx.cr6.gt) goto loc_8816DEA8;
loc_8816DEE8:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816DEE8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8816DEF8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8816DEFC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8816df0c
	if (!ctx.cr0.lt) goto loc_8816DF0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816DF0C;
	sub_88156678(ctx, base);
loc_8816DF0C:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816DF0C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816DF14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816df64
	if (!ctx.cr6.lt) goto loc_8816DF64;
loc_8816DF24:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816df64
	if (ctx.cr6.eq) goto loc_8816DF64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816DF2C;
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
	ctx.current_instruction = 0x8816DF40;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8816DF44;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8816df54
	if (!ctx.cr0.lt) goto loc_8816DF54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816DF54;
	sub_88156678(ctx, base);
loc_8816DF54:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816DF54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816df24
	if (ctx.cr6.gt) goto loc_8816DF24;
loc_8816DF64:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816DF64;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8816DF74;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8816DF78;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8816df88
	if (!ctx.cr0.lt) goto loc_8816DF88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816DF88;
	sub_88156678(ctx, base);
loc_8816DF88:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816DF88;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816DF90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8816dfe0
	if (!ctx.cr6.lt) goto loc_8816DFE0;
loc_8816DFA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816dfe0
	if (ctx.cr6.eq) goto loc_8816DFE0;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816DFA8;
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
	ctx.current_instruction = 0x8816DFBC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8816DFC0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8816dfd0
	if (!ctx.cr0.lt) goto loc_8816DFD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816DFD0;
	sub_88156678(ctx, base);
loc_8816DFD0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816DFD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816dfa0
	if (ctx.cr6.gt) goto loc_8816DFA0;
loc_8816DFE0:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816DFE0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8816DFF0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8816DFF4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8816e004
	if (!ctx.cr0.lt) goto loc_8816E004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816E004;
	sub_88156678(ctx, base);
loc_8816E004:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816E004;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,3
	ctx.r30.s64 = 3;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816E00C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8816e05c
	if (!ctx.cr6.lt) goto loc_8816E05C;
loc_8816E01C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816e05c
	if (ctx.cr6.eq) goto loc_8816E05C;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816E024;
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
	ctx.current_instruction = 0x8816E038;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8816E03C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8816e04c
	if (!ctx.cr0.lt) goto loc_8816E04C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816E04C;
	sub_88156678(ctx, base);
loc_8816E04C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816E04C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816e01c
	if (ctx.cr6.gt) goto loc_8816E01C;
loc_8816E05C:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816E05C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8816E06C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8816E070;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8816e080
	if (!ctx.cr0.lt) goto loc_8816E080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816E080;
	sub_88156678(ctx, base);
loc_8816E080:
	// lwz r11,288(r27)
	ctx.current_instruction = 0x8816E080;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8816e108
	if (!ctx.cr6.eq) goto loc_8816E108;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816E08C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,3
	ctx.r30.s64 = 3;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816E094;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8816e0e4
	if (!ctx.cr6.lt) goto loc_8816E0E4;
loc_8816E0A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816e0e4
	if (ctx.cr6.eq) goto loc_8816E0E4;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816E0AC;
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
	ctx.current_instruction = 0x8816E0C0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8816E0C4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8816e0d4
	if (!ctx.cr0.lt) goto loc_8816E0D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816E0D4;
	sub_88156678(ctx, base);
loc_8816E0D4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816E0D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816e0a4
	if (ctx.cr6.gt) goto loc_8816E0A4;
loc_8816E0E4:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816E0E4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8816E0F4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8816E0F8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8816e108
	if (!ctx.cr0.lt) goto loc_8816E108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816E108;
	sub_88156678(ctx, base);
loc_8816E108:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8817D828) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8817D828);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817D828;
	ctx.current_instruction = 0x8817D828;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	ctx.current_instruction = 0x8817D82C;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	ctx.current_instruction = 0x8817D830;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,16(r3)
	ctx.current_instruction = 0x8817D834;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	ctx.current_instruction = 0x8817D838;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,32(r3)
	ctx.current_instruction = 0x8817D83C;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	ctx.current_instruction = 0x8817D840;
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,48(r3)
	ctx.current_instruction = 0x8817D844;
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	ctx.current_instruction = 0x8817D848;
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8817E1C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8817E1C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8817E1C0) {
			switch (rex_dispatch_address) {
				case 0x8817E1C8:
				case 0x8817E350:
				case 0x8817E36C:
				case 0x8817E430:
				case 0x8817E44C:
				case 0x8817E474:
				case 0x8817E498:
				case 0x8817E4C0:
				case 0x8817E4E4:
				case 0x8817E5B0:
				case 0x8817E5D4:
				case 0x8817E6CC:
				case 0x8817E768:
				case 0x8817E77C:
				case 0x8817E8F4:
				case 0x8817E994:
				case 0x8817E9A8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817E1C0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8817E1C8: goto loc_8817E1C8;
		case 0x8817E350: goto loc_8817E350;
		case 0x8817E36C: goto loc_8817E36C;
		case 0x8817E430: goto loc_8817E430;
		case 0x8817E44C: goto loc_8817E44C;
		case 0x8817E474: goto loc_8817E474;
		case 0x8817E498: goto loc_8817E498;
		case 0x8817E4C0: goto loc_8817E4C0;
		case 0x8817E4E4: goto loc_8817E4E4;
		case 0x8817E5B0: goto loc_8817E5B0;
		case 0x8817E5D4: goto loc_8817E5D4;
		case 0x8817E6CC: goto loc_8817E6CC;
		case 0x8817E768: goto loc_8817E768;
		case 0x8817E77C: goto loc_8817E77C;
		case 0x8817E8F4: goto loc_8817E8F4;
		case 0x8817E994: goto loc_8817E994;
		case 0x8817E9A8: goto loc_8817E9A8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8817E1C8;
	__savegprlr_14(ctx, base);
loc_8817E1C8:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x8817E1C8;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// stw r8,300(r1)
	ctx.current_instruction = 0x8817E1D0;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// lhz r8,52(r4)
	ctx.current_instruction = 0x8817E1D4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// lhz r11,74(r4)
	ctx.current_instruction = 0x8817E1DC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 74);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// stw r9,308(r1)
	ctx.current_instruction = 0x8817E1E4;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// rlwinm r28,r8,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r9,50(r4)
	ctx.current_instruction = 0x8817E1EC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// stw r7,292(r1)
	ctx.current_instruction = 0x8817E1F4;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lhz r7,76(r4)
	ctx.current_instruction = 0x8817E1FC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + 76);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r8,1356(r4)
	ctx.current_instruction = 0x8817E204;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 1356);
	// rotlwi r22,r11,3
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// stw r6,284(r1)
	ctx.current_instruction = 0x8817E20C;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r6.u32);
	// rlwinm r6,r9,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rotlwi r4,r11,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r3,260(r1)
	ctx.current_instruction = 0x8817E218;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stw r6,80(r1)
	ctx.current_instruction = 0x8817E220;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r28,84(r1)
	ctx.current_instruction = 0x8817E228;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// rotlwi r20,r11,4
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// rotlwi r14,r7,3
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// add r10,r22,r5
	ctx.r10.u64 = ctx.r22.u64 + ctx.r5.u64;
	// neg r3,r4
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// dcbt r3,r10
	// neg r7,r9
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r7,r10
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// neg r4,r6
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// dcbt r4,r10
	// neg r27,r11
	ctx.r27.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// dcbt r27,r10
	// dcbt r22,r5
	// dcbt r11,r10
	// dcbt r6,r10
	// dcbt r9,r10
	// add r10,r20,r5
	ctx.r10.u64 = ctx.r20.u64 + ctx.r5.u64;
	// dcbt r3,r10
	// dcbt r7,r10
	// dcbt r4,r10
	// dcbt r27,r10
	// dcbt r20,r5
	// dcbt r11,r10
	// dcbt r6,r10
	// dcbt r9,r10
	// dcbt r0,r5
	// dcbt r11,r5
	// dcbt r6,r5
	// dcbt r9,r5
	// lwz r3,20680(r19)
	ctx.current_instruction = 0x8817E2A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + 20680);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8817e2d4
	if (ctx.cr6.eq) goto loc_8817E2D4;
	// lwz r11,20684(r19)
	ctx.current_instruction = 0x8817E2AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8817e2d4
	if (ctx.cr6.eq) goto loc_8817E2D4;
	// lwz r11,1372(r31)
	ctx.current_instruction = 0x8817E2B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1372);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8817e2d4
	if (!ctx.cr6.eq) goto loc_8817E2D4;
	// lwz r10,21972(r19)
	ctx.current_instruction = 0x8817E2C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r19.u32 + 21972);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8817e2d8
	goto loc_8817E2D8;
loc_8817E2D4:
	// lwz r11,21972(r19)
	ctx.current_instruction = 0x8817E2D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 21972);
loc_8817E2D8:
	// stw r11,21968(r19)
	ctx.current_instruction = 0x8817E2D8;
	REX_STORE_U32(ctx.r19.u32 + 21968, ctx.r11.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplw cr6,r15,r29
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8817e600
	if (!ctx.cr6.lt) goto loc_8817E600;
	// addi r29,r8,180
	ctx.r29.s64 = ctx.r8.s64 + 180;
	// addi r23,r28,-1
	ctx.r23.s64 = ctx.r28.s64 + -1;
	// rlwinm r25,r15,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
loc_8817E2F4:
	// lwz r11,21940(r19)
	ctx.current_instruction = 0x8817E2F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 21940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8817e32c
	if (ctx.cr6.eq) goto loc_8817E32C;
	// cmplw cr6,r15,r23
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x8817e324
	if (!ctx.cr6.lt) goto loc_8817E324;
	// lwz r11,21968(r19)
	ctx.current_instruction = 0x8817E308;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 21968);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8817E310;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8817e324
	if (!ctx.cr6.eq) goto loc_8817E324;
	// li r18,0
	ctx.r18.s64 = 0;
	// b 0x8817e338
	goto loc_8817E338;
loc_8817E324:
	// li r18,1
	ctx.r18.s64 = 1;
	// b 0x8817e338
	goto loc_8817E338;
loc_8817E32C:
	// subfc r11,r23,r15
	ctx.xer.ca = ctx.r15.u32 >= ctx.r23.u32;
	ctx.r11.u64 = ctx.r15.u64 - ctx.r23.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfze r18,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	ctx.r18.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8817E338:
	// add r3,r24,r22
	ctx.r3.u64 = ctx.r24.u64 + ctx.r22.u64;
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817E33C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// li r6,16
	ctx.r6.s64 = 16;
	// lhz r4,74(r31)
	ctx.current_instruction = 0x8817E344;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// mr r17,r24
	ctx.r17.u64 = ctx.r24.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817E350;
	sub_881973D8(ctx, base);
loc_8817E350:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x8817e36c
	if (!ctx.cr6.eq) goto loc_8817E36C;
	// add r3,r24,r20
	ctx.r3.u64 = ctx.r24.u64 + ctx.r20.u64;
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817E35C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// li r6,16
	ctx.r6.s64 = 16;
	// lhz r4,74(r31)
	ctx.current_instruction = 0x8817E364;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// bl 0x881973d8
	ctx.lr = 0x8817E36C;
	sub_881973D8(ctx, base);
loc_8817E36C:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8817E36C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8817e4fc
	if (!ctx.cr6.gt) goto loc_8817E4FC;
	// addi r30,r24,16
	ctx.r30.s64 = ctx.r24.s64 + 16;
	// addi r19,r22,-16
	ctx.r19.s64 = ctx.r22.s64 + -16;
	// addi r16,r20,-16
	ctx.r16.s64 = ctx.r20.s64 + -16;
loc_8817E388:
	// addic. r21,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r21.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne 0x8817e418
	if (!ctx.cr0.eq) goto loc_8817E418;
	// lhz r10,74(r31)
	ctx.current_instruction = 0x8817E390;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// add r11,r30,r22
	ctx.r11.u64 = ctx.r30.u64 + ctx.r22.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// add r11,r30,r20
	ctx.r11.u64 = ctx.r30.u64 + ctx.r20.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// dcbt r7,r11
	// dcbt r6,r11
	// dcbt r4,r11
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
loc_8817E418:
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817E41C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// li r6,16
	ctx.r6.s64 = 16;
	// lhz r4,74(r31)
	ctx.current_instruction = 0x8817E424;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// add r3,r19,r28
	ctx.r3.u64 = ctx.r19.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817E430;
	sub_881973D8(ctx, base);
loc_8817E430:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x8817e44c
	if (!ctx.cr6.eq) goto loc_8817E44C;
	// li r6,16
	ctx.r6.s64 = 16;
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817E43C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// add r3,r16,r28
	ctx.r3.u64 = ctx.r16.u64 + ctx.r28.u64;
	// lhz r4,74(r31)
	ctx.current_instruction = 0x8817E444;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// bl 0x881973d8
	ctx.lr = 0x8817E44C;
	sub_881973D8(ctx, base);
loc_8817E44C:
	// lbz r28,1244(r31)
	ctx.current_instruction = 0x8817E44C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// addi r27,r30,-13
	ctx.r27.s64 = ctx.r30.s64 + -13;
	// lhz r26,74(r31)
	ctx.current_instruction = 0x8817E454;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// lbz r10,0(r29)
	ctx.current_instruction = 0x8817E458;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,4(r29)
	ctx.current_instruction = 0x8817E460;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r27,r11
	ctx.r3.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x88197808
	ctx.lr = 0x8817E474;
	sub_88197808(ctx, base);
loc_8817E474:
	// lbz r9,1(r29)
	ctx.current_instruction = 0x8817E474;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8817e498
	if (ctx.cr6.lt) goto loc_8817E498;
	// lwz r11,8(r29)
	ctx.current_instruction = 0x8817E484;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x88197808
	ctx.lr = 0x8817E498;
	sub_88197808(ctx, base);
loc_8817E498:
	// lbz r28,1244(r31)
	ctx.current_instruction = 0x8817E498;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// addi r27,r30,-5
	ctx.r27.s64 = ctx.r30.s64 + -5;
	// lhz r26,74(r31)
	ctx.current_instruction = 0x8817E4A0;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// lbz r10,0(r29)
	ctx.current_instruction = 0x8817E4A4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,4(r29)
	ctx.current_instruction = 0x8817E4AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r27,r11
	ctx.r3.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x88197808
	ctx.lr = 0x8817E4C0;
	sub_88197808(ctx, base);
loc_8817E4C0:
	// lbz r9,1(r29)
	ctx.current_instruction = 0x8817E4C0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8817e4e4
	if (ctx.cr6.lt) goto loc_8817E4E4;
	// lwz r11,8(r29)
	ctx.current_instruction = 0x8817E4D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x88197808
	ctx.lr = 0x8817E4E4;
	sub_88197808(ctx, base);
loc_8817E4E4:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8817E4E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r17,r17,16
	ctx.r17.s64 = ctx.r17.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmplw cr6,r21,r10
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8817e388
	if (ctx.cr6.lt) goto loc_8817E388;
loc_8817E4FC:
	// lhz r11,82(r31)
	ctx.current_instruction = 0x8817E4FC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 82);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bne cr6,0x8817e588
	if (!ctx.cr6.eq) goto loc_8817E588;
	// lhz r10,74(r31)
	ctx.current_instruction = 0x8817E50C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// add r11,r24,r22
	ctx.r11.u64 = ctx.r24.u64 + ctx.r22.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r24,r22
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// add r11,r24,r20
	ctx.r11.u64 = ctx.r24.u64 + ctx.r20.u64;
	// dcbt r7,r11
	// dcbt r6,r11
	// dcbt r4,r11
	// dcbt r3,r11
	// dcbt r24,r20
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r24
	// dcbt r10,r24
	// dcbt r5,r24
	// dcbt r9,r24
loc_8817E588:
	// lbz r30,1244(r31)
	ctx.current_instruction = 0x8817E588;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// addi r28,r17,3
	ctx.r28.s64 = ctx.r17.s64 + 3;
	// lhz r27,74(r31)
	ctx.current_instruction = 0x8817E590;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// lbz r10,0(r29)
	ctx.current_instruction = 0x8817E594;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,4(r29)
	ctx.current_instruction = 0x8817E59C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x88197808
	ctx.lr = 0x8817E5B0;
	sub_88197808(ctx, base);
loc_8817E5B0:
	// lbz r9,1(r29)
	ctx.current_instruction = 0x8817E5B0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8817e5d4
	if (ctx.cr6.lt) goto loc_8817E5D4;
	// lwz r11,8(r29)
	ctx.current_instruction = 0x8817E5C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88197808
	ctx.lr = 0x8817E5D4;
	sub_88197808(ctx, base);
loc_8817E5D4:
	// lwz r11,308(r1)
	ctx.current_instruction = 0x8817E5D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// lwz r19,260(r1)
	ctx.current_instruction = 0x8817E5DC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8817e2f4
	if (ctx.cr6.lt) goto loc_8817E2F4;
	// lwz r28,84(r1)
	ctx.current_instruction = 0x8817E5EC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r30,284(r1)
	ctx.current_instruction = 0x8817E5F4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r25,292(r1)
	ctx.current_instruction = 0x8817E5F8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r15,300(r1)
	ctx.current_instruction = 0x8817E5FC;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
loc_8817E600:
	// lhz r10,76(r31)
	ctx.current_instruction = 0x8817E600;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r14,r30
	ctx.r11.u64 = ctx.r14.u64 + ctx.r30.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r14,r30
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r30
	// dcbt r10,r30
	// dcbt r5,r30
	// dcbt r9,r30
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// cmplw cr6,r15,r29
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8817e828
	if (!ctx.cr6.lt) goto loc_8817E828;
	// addi r20,r28,-1
	ctx.r20.s64 = ctx.r28.s64 + -1;
	// rlwinm r21,r15,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
loc_8817E670:
	// lwz r11,21940(r19)
	ctx.current_instruction = 0x8817E670;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 21940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8817e6a8
	if (ctx.cr6.eq) goto loc_8817E6A8;
	// cmplw cr6,r24,r20
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x8817e6a0
	if (!ctx.cr6.lt) goto loc_8817E6A0;
	// lwz r11,21968(r19)
	ctx.current_instruction = 0x8817E684;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 21968);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8817E68C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8817e6a0
	if (!ctx.cr6.eq) goto loc_8817E6A0;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8817e6b8
	goto loc_8817E6B8;
loc_8817E6A0:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x8817e6cc
	goto loc_8817E6CC;
loc_8817E6A8:
	// subfc r11,r20,r24
	ctx.xer.ca = ctx.r24.u32 >= ctx.r20.u32;
	ctx.r11.u64 = ctx.r24.u64 - ctx.r20.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfze. r27,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	ctx.r27.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x8817e6cc
	if (!ctx.cr0.eq) goto loc_8817E6CC;
loc_8817E6B8:
	// li r6,8
	ctx.r6.s64 = 8;
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817E6BC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// add r3,r22,r14
	ctx.r3.u64 = ctx.r22.u64 + ctx.r14.u64;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817E6C4;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// bl 0x881973d8
	ctx.lr = 0x8817E6CC;
	sub_881973D8(ctx, base);
loc_8817E6CC:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8817E6CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r22,8
	ctx.r26.s64 = ctx.r22.s64 + 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8817e7ac
	if (!ctx.cr6.gt) goto loc_8817E7AC;
	// addi r30,r26,8
	ctx.r30.s64 = ctx.r26.s64 + 8;
	// addi r28,r14,-8
	ctx.r28.s64 = ctx.r14.s64 + -8;
loc_8817E6E8:
	// addic. r29,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r29.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8817e74c
	if (!ctx.cr0.eq) goto loc_8817E74C;
	// lhz r10,76(r31)
	ctx.current_instruction = 0x8817E6F0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r26,r14
	ctx.r11.u64 = ctx.r26.u64 + ctx.r14.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r30
	// dcbt r10,r30
	// dcbt r5,r30
	// dcbt r9,r30
loc_8817E74C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8817e768
	if (!ctx.cr6.eq) goto loc_8817E768;
	// li r6,8
	ctx.r6.s64 = 8;
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817E758;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// add r3,r28,r30
	ctx.r3.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817E760;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// bl 0x881973d8
	ctx.lr = 0x8817E768;
	sub_881973D8(ctx, base);
loc_8817E768:
	// li r6,8
	ctx.r6.s64 = 8;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817E76C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// addi r3,r30,-13
	ctx.r3.s64 = ctx.r30.s64 + -13;
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817E774;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// bl 0x88197808
	ctx.lr = 0x8817E77C;
	sub_88197808(ctx, base);
loc_8817E77C:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8817E77C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8817e6e8
	if (ctx.cr6.lt) goto loc_8817E6E8;
	// lwz r28,84(r1)
	ctx.current_instruction = 0x8817E794;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r19,260(r1)
	ctx.current_instruction = 0x8817E798;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r30,284(r1)
	ctx.current_instruction = 0x8817E79C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r25,292(r1)
	ctx.current_instruction = 0x8817E7A0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r15,300(r1)
	ctx.current_instruction = 0x8817E7A4;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r29,308(r1)
	ctx.current_instruction = 0x8817E7A8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_8817E7AC:
	// lhz r11,84(r31)
	ctx.current_instruction = 0x8817E7AC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 84);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bne cr6,0x8817e814
	if (!ctx.cr6.eq) goto loc_8817E814;
	// lhz r10,76(r31)
	ctx.current_instruction = 0x8817E7BC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r22,r14
	ctx.r11.u64 = ctx.r22.u64 + ctx.r14.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r22,r14
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r22
	// dcbt r10,r22
	// dcbt r5,r22
	// dcbt r9,r22
loc_8817E814:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplw cr6,r24,r29
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8817e670
	if (ctx.cr6.lt) goto loc_8817E670;
	// b 0x8817e82c
	goto loc_8817E82C;
loc_8817E828:
	// lwz r26,84(r1)
	ctx.current_instruction = 0x8817E828;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8817E82C:
	// lhz r10,76(r31)
	ctx.current_instruction = 0x8817E82C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r14,r25
	ctx.r11.u64 = ctx.r14.u64 + ctx.r25.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r14,r25
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r30
	// dcbt r10,r30
	// dcbt r5,r30
	// dcbt r9,r30
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// cmplw cr6,r15,r29
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8817ea40
	if (!ctx.cr6.lt) goto loc_8817EA40;
	// addi r20,r28,-1
	ctx.r20.s64 = ctx.r28.s64 + -1;
	// rlwinm r21,r15,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
loc_8817E898:
	// lwz r11,21940(r19)
	ctx.current_instruction = 0x8817E898;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 21940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8817e8d0
	if (ctx.cr6.eq) goto loc_8817E8D0;
	// cmplw cr6,r23,r20
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x8817e8c8
	if (!ctx.cr6.lt) goto loc_8817E8C8;
	// lwz r11,21968(r19)
	ctx.current_instruction = 0x8817E8AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 21968);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8817E8B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8817e8c8
	if (!ctx.cr6.eq) goto loc_8817E8C8;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x8817e8e0
	goto loc_8817E8E0;
loc_8817E8C8:
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x8817e8f4
	goto loc_8817E8F4;
loc_8817E8D0:
	// subfc r11,r20,r23
	ctx.xer.ca = ctx.r23.u32 >= ctx.r20.u32;
	ctx.r11.u64 = ctx.r23.u64 - ctx.r20.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfze. r24,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	ctx.r24.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x8817e8f4
	if (!ctx.cr0.eq) goto loc_8817E8F4;
loc_8817E8E0:
	// li r6,8
	ctx.r6.s64 = 8;
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817E8E4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// add r3,r25,r14
	ctx.r3.u64 = ctx.r25.u64 + ctx.r14.u64;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817E8EC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// bl 0x881973d8
	ctx.lr = 0x8817E8F4;
	sub_881973D8(ctx, base);
loc_8817E8F4:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8817E8F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r25,8
	ctx.r30.s64 = ctx.r25.s64 + 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8817e9c8
	if (!ctx.cr6.gt) goto loc_8817E9C8;
	// add r29,r30,r14
	ctx.r29.u64 = ctx.r30.u64 + ctx.r14.u64;
	// subfic r27,r14,-5
	ctx.xer.ca = ctx.r14.u32 <= 4294967291;
	ctx.r27.u64 = static_cast<uint64_t>(-5) - ctx.r14.u64;
loc_8817E910:
	// addic. r28,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r28.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x8817e978
	if (!ctx.cr0.eq) goto loc_8817E978;
	// lhz r10,76(r31)
	ctx.current_instruction = 0x8817E918;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r30,r14
	ctx.r11.u64 = ctx.r30.u64 + ctx.r14.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
loc_8817E978:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8817e994
	if (!ctx.cr6.eq) goto loc_8817E994;
	// li r6,8
	ctx.r6.s64 = 8;
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817E984;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817E98C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// bl 0x881973d8
	ctx.lr = 0x8817E994;
	sub_881973D8(ctx, base);
loc_8817E994:
	// li r6,8
	ctx.r6.s64 = 8;
	// lhz r4,76(r31)
	ctx.current_instruction = 0x8817E998;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r3,r27,r29
	ctx.r3.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lbz r5,1244(r31)
	ctx.current_instruction = 0x8817E9A0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// bl 0x88197808
	ctx.lr = 0x8817E9A8;
	sub_88197808(ctx, base);
loc_8817E9A8:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8817E9A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8817e910
	if (ctx.cr6.lt) goto loc_8817E910;
	// lwz r19,260(r1)
	ctx.current_instruction = 0x8817E9C0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r29,308(r1)
	ctx.current_instruction = 0x8817E9C4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_8817E9C8:
	// lhz r11,84(r31)
	ctx.current_instruction = 0x8817E9C8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bne cr6,0x8817ea30
	if (!ctx.cr6.eq) goto loc_8817EA30;
	// lhz r10,76(r31)
	ctx.current_instruction = 0x8817E9D8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r25,r14
	ctx.r11.u64 = ctx.r25.u64 + ctx.r14.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r25,r14
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r22
	// dcbt r10,r22
	// dcbt r5,r22
	// dcbt r9,r22
loc_8817EA30:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplw cr6,r23,r29
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8817e898
	if (ctx.cr6.lt) goto loc_8817E898;
loc_8817EA40:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88193E08) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88193E08;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88193E08) {
			switch (rex_dispatch_address) {
				case 0x88193E10:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88193E08;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88193E10: goto loc_88193E10;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88193E10;
	__savegprlr_29(ctx, base);
loc_88193E10:
	// lwz r7,21668(r3)
	ctx.current_instruction = 0x88193E10;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 21668);
	// li r11,125
	ctx.r11.s64 = 125;
	// lwz r6,20688(r3)
	ctx.current_instruction = 0x88193E18;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20688);
	// li r9,2
	ctx.r9.s64 = 2;
	// addic r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// lwz r30,21672(r3)
	ctx.current_instruction = 0x88193E24;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 21672);
	// lwz r10,376(r3)
	ctx.current_instruction = 0x88193E28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 376);
	// mulli r8,r6,504
	ctx.r8.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(504));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subfe r4,r5,r7
	temp.u8 = (~ctx.r5.u32 + ctx.r7.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r3,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r3.s64 = ctx.r30.s64 + -1;
	// lis r11,14563
	ctx.r11.s64 = 954400768;
	// stwx r4,r8,r10
	ctx.current_instruction = 0x88193E40;
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r4.u32);
	// subfe r5,r3,r30
	temp.u8 = (~ctx.r3.u32 + ctx.r30.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r3.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r31,r8,r10
	ctx.r31.u64 = ctx.r8.u64 + ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r30,r11,36409
	ctx.r30.u64 = ctx.r11.u64 | 36409;
	// li r29,9
	ctx.r29.s64 = 9;
loc_88193E58:
	// mulhw r11,r9,r30
	ctx.r11.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x88193e90
	if (ctx.cr0.eq) goto loc_88193E90;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// slw r10,r3,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// subf r6,r4,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r4.u64;
	// b 0x88193e98
	goto loc_88193E98;
loc_88193E90:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_88193E98:
	// divw r8,r9,r29
	ctx.r8.u64 = uint32_t((ctx.r29.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r29.s32 == -1)) ? ctx.r9.s32 / ctx.r29.s32 : 0);
	// srawi. r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x88193ec4
	if (ctx.cr0.eq) goto loc_88193EC4;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// subf r10,r5,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r5.u64;
	// b 0x88193ecc
	goto loc_88193ECC;
loc_88193EC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_88193ECC:
	// rlwimi r10,r8,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// rlwimi r6,r10,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r11,r6,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// rlwimi r7,r11,4,0,27
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r7.u64 & 0xFFFFFFFF0000000F);
	// stwu r7,4(r31)
	ctx.current_instruction = 0x88193EE4;
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r31.u32 = ea;
	// bdnz 0x88193e58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88193E58;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88196A38) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88196A38;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88196A38) {
			switch (rex_dispatch_address) {
				case 0x88196A40:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88196A38;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88196A40: goto loc_88196A40;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x88196A40;
	__savegprlr_20(ctx, base);
loc_88196A40:
	// add r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x88196A44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r31,-30678
	ctx.r31.s64 = -2010513408;
	// lwz r26,84(r1)
	ctx.current_instruction = 0x88196A4C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r27,r31,24540
	ctx.r27.s64 = ctx.r31.s64 + 24540;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lwz r10,24540(r31)
	ctx.current_instruction = 0x88196A60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24540);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// subf r29,r10,r3
	ctx.r29.u64 = ctx.r3.u64 - ctx.r10.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bge cr6,0x88196b04
	if (!ctx.cr6.lt) goto loc_88196B04;
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// subf r28,r29,r3
	ctx.r28.u64 = ctx.r3.u64 - ctx.r29.u64;
	// add r10,r29,r26
	ctx.r10.u64 = ctx.r29.u64 + ctx.r26.u64;
	// subfic r31,r26,16
	ctx.xer.ca = ctx.r26.u32 <= 16;
	ctx.r31.u64 = static_cast<uint64_t>(16) - ctx.r26.u64;
	// subf r3,r11,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// li r6,16
	ctx.r6.s64 = 16;
loc_88196A94:
	// lbzux r5,r3,r11
	ctx.current_instruction = 0x88196A94;
	ea = ctx.r3.u32 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// addi r22,r1,-128
	ctx.r22.s64 = ctx.r1.s64 + -128;
	// addi r20,r1,-128
	ctx.r20.s64 = ctx.r1.s64 + -128;
	// lbzx r30,r28,r7
	ctx.current_instruction = 0x88196AA0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r7.u32);
	// addi r24,r1,-144
	ctx.r24.s64 = ctx.r1.s64 + -144;
	// addi r21,r1,-144
	ctx.r21.s64 = ctx.r1.s64 + -144;
	// stw r5,-128(r1)
	ctx.current_instruction = 0x88196AAC;
	REX_STORE_U32(ctx.r1.u32 + -128, ctx.r5.u32);
	// lvx128 v13,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r30,-144(r1)
	ctx.current_instruction = 0x88196AB4;
	REX_STORE_U32(ctx.r1.u32 + -144, ctx.r30.u32);
	// add r30,r31,r10
	ctx.r30.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lvx128 v0,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltb v0,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi8(char(0xC))));
	// vspltb v13,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_set1_epi8(char(0xC))));
	// stvx128 v0,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// stvx128 v13,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx v0,0,r7
	ctx.current_instruction = 0x88196AD4;
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r7,r6
	ctx.current_instruction = 0x88196AD8;
	ea = ctx.r7.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stvlx v0,r31,r10
	ctx.current_instruction = 0x88196AE0;
	ea = ctx.r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r30,r6
	ctx.current_instruction = 0x88196AE4;
	ea = ctx.r30.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// stvlx v13,0,r10
	ctx.current_instruction = 0x88196AE8;
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r10,r6
	ctx.current_instruction = 0x88196AEC;
	ea = ctx.r10.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stvlx v13,0,r5
	ctx.current_instruction = 0x88196AF4;
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r5,r6
	ctx.current_instruction = 0x88196AF8;
	ea = ctx.r5.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// bdnz 0x88196a94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88196A94;
	// lwz r10,0(r27)
	ctx.current_instruction = 0x88196B00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
loc_88196B04:
	// subf r6,r26,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r26.u64;
	// cmpwi cr6,r6,32
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32, ctx.xer);
	// beq cr6,0x88196b24
	if (ctx.cr6.eq) goto loc_88196B24;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r23,r10,2
	ctx.r23.s64 = ctx.r10.s64 + 2;
	// srawi r25,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r11.s32 >> 1;
	// subf r4,r6,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r6.u64;
loc_88196B24:
	// rlwinm r28,r25,0,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88196c0c
	if (ctx.cr6.eq) goto loc_88196C0C;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x88196c0c
	if (!ctx.cr6.gt) goto loc_88196C0C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r23,-1
	ctx.r8.s64 = ctx.r23.s64 + -1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r26,r5,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r11,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r24,r3,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r29,r4,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r4.u64;
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
loc_88196B64:
	// add r10,r26,r6
	ctx.r10.u64 = ctx.r26.u64 + ctx.r6.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x88196bfc
	if (!ctx.cr6.gt) goto loc_88196BFC;
	// addi r5,r28,-1
	ctx.r5.s64 = ctx.r28.s64 + -1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r5,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// add r31,r11,r8
	ctx.r31.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r21,r11,r3
	ctx.r21.u64 = ctx.r3.u64 - ctx.r11.u64;
	// rlwinm r22,r11,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// subf r30,r10,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r4,r10,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r10.u64;
	// subf r31,r10,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r10.u64;
	// subf r3,r10,r22
	ctx.r3.u64 = ctx.r22.u64 - ctx.r10.u64;
	// subf r5,r10,r21
	ctx.r5.u64 = ctx.r21.u64 - ctx.r10.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// add r30,r30,r6
	ctx.r30.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
loc_88196BCC:
	// lvx128 v63,r8,r29
	ea = (ctx.r8.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stvx128 v63,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x88196bcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88196BCC;
loc_88196BFC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r6,r25,r6
	ctx.r6.u64 = ctx.r25.u64 + ctx.r6.u64;
	// add r29,r24,r29
	ctx.r29.u64 = ctx.r24.u64 + ctx.r29.u64;
	// bne 0x88196b64
	if (!ctx.cr0.eq) goto loc_88196B64;
loc_88196C0C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88196cf0
	if (ctx.cr6.eq) goto loc_88196CF0;
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x88196cf0
	if (!ctx.cr6.gt) goto loc_88196CF0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r23,-1
	ctx.r8.s64 = ctx.r23.s64 + -1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// neg r5,r11
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r29,r6,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r11,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r26,r5,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r31,r7,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r7.u64;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
loc_88196C48:
	// add r10,r29,r7
	ctx.r10.u64 = ctx.r29.u64 + ctx.r7.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x88196ce0
	if (!ctx.cr6.gt) goto loc_88196CE0;
	// addi r9,r28,-1
	ctx.r9.s64 = ctx.r28.s64 + -1;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r24,r11,r5
	ctx.r24.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r10,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r10.u64;
	// subf r6,r10,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r4,r10,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r5,r10,r25
	ctx.r5.u64 = ctx.r25.u64 - ctx.r10.u64;
	// subf r8,r10,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r10.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
loc_88196CB0:
	// lvx128 v62,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stvx128 v62,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x88196cb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88196CB0;
loc_88196CE0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r7,r27,r7
	ctx.r7.u64 = ctx.r27.u64 + ctx.r7.u64;
	// add r31,r26,r31
	ctx.r31.u64 = ctx.r26.u64 + ctx.r31.u64;
	// bne 0x88196c48
	if (!ctx.cr0.eq) goto loc_88196C48;
loc_88196CF0:
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8819D2B0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8819D2B0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8819D2B0;
	ctx.current_instruction = 0x8819D2B0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8819d2fc
	if (ctx.cr6.eq) goto loc_8819D2FC;
	// lwz r10,21968(r11)
	ctx.current_instruction = 0x8819D2C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21968);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.current_instruction = 0x8819D2C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8819d2fc
	if (!ctx.cr6.eq) goto loc_8819D2FC;
	// lwz r10,136(r11)
	ctx.current_instruction = 0x8819D2D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// lwz r8,1784(r11)
	ctx.current_instruction = 0x8819D2DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1784);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r6,r8
	ctx.current_instruction = 0x8819D2EC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x8819d2fc
	if (!ctx.cr6.eq) goto loc_8819D2FC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8819D2FC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r9,136(r11)
	ctx.current_instruction = 0x8819D304;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r10,1784(r11)
	ctx.current_instruction = 0x8819D308;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1784);
	// mullw r11,r9,r5
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r6,-2(r7)
	ctx.current_instruction = 0x8819D31C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + -2);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8819FD28) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8819FD28;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8819FD28) {
			switch (rex_dispatch_address) {
				case 0x8819FD30:
				case 0x8819FE4C:
				case 0x8819FE80:
				case 0x8819FE90:
				case 0x8819FED0:
				case 0x881A00A8:
				case 0x881A0124:
				case 0x881A0160:
				case 0x881A016C:
				case 0x881A01B4:
				case 0x881A0380:
				case 0x881A03D0:
				case 0x881A0408:
				case 0x881A0414:
				case 0x881A0458:
				case 0x881A0624:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8819FD28;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8819FD30: goto loc_8819FD30;
		case 0x8819FE4C: goto loc_8819FE4C;
		case 0x8819FE80: goto loc_8819FE80;
		case 0x8819FE90: goto loc_8819FE90;
		case 0x8819FED0: goto loc_8819FED0;
		case 0x881A00A8: goto loc_881A00A8;
		case 0x881A0124: goto loc_881A0124;
		case 0x881A0160: goto loc_881A0160;
		case 0x881A016C: goto loc_881A016C;
		case 0x881A01B4: goto loc_881A01B4;
		case 0x881A0380: goto loc_881A0380;
		case 0x881A03D0: goto loc_881A03D0;
		case 0x881A0408: goto loc_881A0408;
		case 0x881A0414: goto loc_881A0414;
		case 0x881A0458: goto loc_881A0458;
		case 0x881A0624: goto loc_881A0624;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8819FD30;
	__savegprlr_14(ctx, base);
loc_8819FD30:
	// stwu r1,-320(r1)
	ctx.current_instruction = 0x8819FD30;
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,284(r3)
	ctx.current_instruction = 0x8819FD34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,364(r1)
	ctx.current_instruction = 0x8819FD40;
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// stw r7,372(r1)
	ctx.current_instruction = 0x8819FD48;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r7.u32);
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// stw r9,388(r1)
	ctx.current_instruction = 0x8819FD50;
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r9.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r15,r4,14
	ctx.r15.s64 = ctx.r4.s64 + 14;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8819fd74
	if (!ctx.cr6.eq) goto loc_8819FD74;
	// lwz r11,21940(r3)
	ctx.current_instruction = 0x8819FD64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21940);
	// li r14,1
	ctx.r14.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819fd78
	if (ctx.cr6.eq) goto loc_8819FD78;
loc_8819FD74:
	// li r14,0
	ctx.r14.s64 = 0;
loc_8819FD78:
	// lbz r11,4(r18)
	ctx.current_instruction = 0x8819FD78;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + 4);
	// lwz r10,6608(r31)
	ctx.current_instruction = 0x8819FD7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6608);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r7,396(r31)
	ctx.current_instruction = 0x8819FD84;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 396);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r17,r11,r10
	ctx.r17.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x8819fdc4
	if (ctx.cr6.eq) goto loc_8819FDC4;
	// lwz r11,0(r18)
	ctx.current_instruction = 0x8819FD9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r11,r11,10,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// addi r10,r11,735
	ctx.r10.s64 = ctx.r11.s64 + 735;
	// addi r9,r11,738
	ctx.r9.s64 = ctx.r11.s64 + 738;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r22,r11,r31
	ctx.r22.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,124(r1)
	ctx.current_instruction = 0x8819FDBC;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// b 0x8819fdd0
	goto loc_8819FDD0;
loc_8819FDC4:
	// addi r11,r31,2916
	ctx.r11.s64 = ctx.r31.s64 + 2916;
	// addi r22,r31,2928
	ctx.r22.s64 = ctx.r31.s64 + 2928;
	// stw r11,124(r1)
	ctx.current_instruction = 0x8819FDCC;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_8819FDD0:
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm r21,r8,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r16,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// li r24,8
	ctx.r24.s64 = 8;
loc_8819FDE0:
	// srawi r11,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 1;
	// lwz r9,136(r31)
	ctx.current_instruction = 0x8819FDE4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// clrlwi r23,r25,31
	ctx.r23.u64 = ctx.r25.u32 & 0x1;
	// lwz r10,464(r31)
	ctx.current_instruction = 0x8819FDEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lbzx r27,r25,r15
	ctx.current_instruction = 0x8819FDF4;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r15.u32);
	// add r29,r20,r23
	ctx.r29.u64 = ctx.r20.u64 + ctx.r23.u64;
	// lwz r30,1772(r31)
	ctx.current_instruction = 0x8819FDFC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// add r8,r11,r21
	ctx.r8.u64 = ctx.r11.u64 + ctx.r21.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8819fe84
	if (ctx.cr6.eq) goto loc_8819FE84;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8819FE44;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8819ca80
	ctx.lr = 0x8819FE4C;
	sub_8819CA80(ctx, base);
loc_8819FE4C:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r9,112(r1)
	ctx.current_instruction = 0x8819FE50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r8,116(r1)
	ctx.current_instruction = 0x8819FE58;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r7,120(r1)
	ctx.current_instruction = 0x8819FE60;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r30,100(r1)
	ctx.current_instruction = 0x8819FE68;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,108(r1)
	ctx.current_instruction = 0x8819FE70;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r17,92(r1)
	ctx.current_instruction = 0x8819FE74;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// stw r18,84(r1)
	ctx.current_instruction = 0x8819FE78;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// bl 0x881ba970
	ctx.lr = 0x8819FE80;
	sub_881BA970(ctx, base);
loc_8819FE80:
	// b 0x8819fed0
	goto loc_8819FED0;
loc_8819FE84:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8819FE88;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8819c7b0
	ctx.lr = 0x8819FE90;
	sub_8819C7B0(ctx, base);
loc_8819FE90:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8819fe9c
	if (ctx.cr6.eq) goto loc_8819FE9C;
	// addi r26,r1,128
	ctx.r26.s64 = ctx.r1.s64 + 128;
loc_8819FE9C:
	// stw r18,84(r1)
	ctx.current_instruction = 0x8819FE9C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r9,112(r1)
	ctx.current_instruction = 0x8819FEA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r8,116(r1)
	ctx.current_instruction = 0x8819FEB0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r30,100(r1)
	ctx.current_instruction = 0x8819FEB8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r17,92(r1)
	ctx.current_instruction = 0x8819FEC0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,108(r1)
	ctx.current_instruction = 0x8819FEC8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// bl 0x881ba970
	ctx.lr = 0x8819FED0;
	sub_881BA970(ctx, base);
loc_8819FED0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a0638
	if (!ctx.cr6.eq) goto loc_881A0638;
	// lwz r11,3004(r31)
	ctx.current_instruction = 0x8819FED8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881a0088
	if (ctx.cr6.eq) goto loc_881A0088;
	// rlwinm r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	// lwz r9,136(r31)
	ctx.current_instruction = 0x8819FEEC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// addi r6,r11,754
	ctx.r6.s64 = ctx.r11.s64 + 754;
	// rlwinm r7,r29,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r30,-2
	ctx.r6.s64 = ctx.r30.s64 + -2;
	// lwzx r8,r10,r31
	ctx.current_instruction = 0x8819FF10;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_8819FF1C:
	// lhzu r7,2(r6)
	ctx.current_instruction = 0x8819FF1C;
	ea = 2 + ctx.r6.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r7,2(r8)
	ctx.current_instruction = 0x8819FF20;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8819ff1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819FF1C;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r6,r10,r31
	ctx.current_instruction = 0x8819FF2C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r30,14
	ctx.r5.s64 = ctx.r30.s64 + 14;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
loc_8819FF48:
	// lhzu r8,2(r5)
	ctx.current_instruction = 0x8819FF48;
	ea = 2 + ctx.r5.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r8,2(r7)
	ctx.current_instruction = 0x8819FF4C;
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x8819ff48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819FF48;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r10,r31
	ctx.current_instruction = 0x8819FF58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r5,r30,30
	ctx.r5.s64 = ctx.r30.s64 + 30;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r7,-2
	ctx.r8.s64 = ctx.r7.s64 + -2;
loc_8819FF78:
	// lhzu r7,2(r5)
	ctx.current_instruction = 0x8819FF78;
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ctx.current_instruction = 0x8819FF7C;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8819ff78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819FF78;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r10,r31
	ctx.current_instruction = 0x8819FF88;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r30,46
	ctx.r5.s64 = ctx.r30.s64 + 46;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_8819FFAC:
	// lhzu r7,2(r5)
	ctx.current_instruction = 0x8819FFAC;
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ctx.current_instruction = 0x8819FFB0;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8819ffac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819FFAC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r31
	ctx.current_instruction = 0x8819FFBC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r5,r30,62
	ctx.r5.s64 = ctx.r30.s64 + 62;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r7,-2
	ctx.r8.s64 = ctx.r7.s64 + -2;
loc_8819FFDC:
	// lhzu r7,2(r5)
	ctx.current_instruction = 0x8819FFDC;
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ctx.current_instruction = 0x8819FFE0;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8819ffdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819FFDC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r31
	ctx.current_instruction = 0x8819FFEC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r30,78
	ctx.r5.s64 = ctx.r30.s64 + 78;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_881A0010:
	// lhzu r7,2(r5)
	ctx.current_instruction = 0x881A0010;
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ctx.current_instruction = 0x881A0014;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881a0010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A0010;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r7,r10,r31
	ctx.current_instruction = 0x881A0020;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r5,r30,94
	ctx.r5.s64 = ctx.r30.s64 + 94;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_881A0048:
	// lhzu r7,2(r5)
	ctx.current_instruction = 0x881A0048;
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ctx.current_instruction = 0x881A004C;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881a0048
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A0048;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r31
	ctx.current_instruction = 0x881A0058;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addi r7,r30,110
	ctx.r7.s64 = ctx.r30.s64 + 110;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_881A007C:
	// lhzu r10,2(r7)
	ctx.current_instruction = 0x881A007C;
	ea = 2 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r10,2(r11)
	ctx.current_instruction = 0x881A0080;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x881a007c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A007C;
loc_881A0088:
	// lwz r11,3188(r31)
	ctx.current_instruction = 0x881A0088;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3188);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r6,204(r31)
	ctx.current_instruction = 0x881A0094;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r7,264(r31)
	ctx.current_instruction = 0x881A009C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A00A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A00A8:
	// add r10,r25,r18
	ctx.r10.u64 = ctx.r25.u64 + ctx.r18.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r23,0
	ctx.r23.s64 = 0;
	// stb r23,8(r10)
	ctx.current_instruction = 0x881A00B4;
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r23.u8);
	// beq cr6,0x881a00c4
	if (ctx.cr6.eq) goto loc_881A00C4;
	// lwz r11,236(r31)
	ctx.current_instruction = 0x881A00BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// b 0x881a00c8
	goto loc_881A00C8;
loc_881A00C4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_881A00C8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// add r19,r11,r19
	ctx.r19.u64 = ctx.r11.u64 + ctx.r19.u64;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// blt cr6,0x8819fde0
	if (ctx.cr6.lt) goto loc_8819FDE0;
	// lwz r26,388(r1)
	ctx.current_instruction = 0x881A00D8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// lwz r11,136(r31)
	ctx.current_instruction = 0x881A00E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// lwz r10,468(r31)
	ctx.current_instruction = 0x881A00E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// add r9,r11,r16
	ctx.r9.u64 = ctx.r11.u64 + ctx.r16.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x881a0164
	if (ctx.cr6.eq) goto loc_881A0164;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// bl 0x8819d118
	ctx.lr = 0x881A0124;
	sub_8819D118(ctx, base);
loc_881A0124:
	// lwz r22,124(r1)
	ctx.current_instruction = 0x881A0124;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lbz r6,4(r15)
	ctx.current_instruction = 0x881A012C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r15.u32 + 4);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r7,120(r1)
	ctx.current_instruction = 0x881A0134;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r24,108(r1)
	ctx.current_instruction = 0x881A013C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r17,92(r1)
	ctx.current_instruction = 0x881A0144;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// stw r18,84(r1)
	ctx.current_instruction = 0x881A0148;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// lwz r30,1772(r31)
	ctx.current_instruction = 0x881A014C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// lwz r9,112(r1)
	ctx.current_instruction = 0x881A0150;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.current_instruction = 0x881A0154;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r30,100(r1)
	ctx.current_instruction = 0x881A0158;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// bl 0x881ba970
	ctx.lr = 0x881A0160;
	sub_881BA970(ctx, base);
loc_881A0160:
	// b 0x881a01b4
	goto loc_881A01B4;
loc_881A0164:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// bl 0x8819cb88
	ctx.lr = 0x881A016C;
	sub_8819CB88(ctx, base);
loc_881A016C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881a0178
	if (ctx.cr6.eq) goto loc_881A0178;
	// addi r28,r1,128
	ctx.r28.s64 = ctx.r1.s64 + 128;
loc_881A0178:
	// stw r18,84(r1)
	ctx.current_instruction = 0x881A0178;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r30,1772(r31)
	ctx.current_instruction = 0x881A0180;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r22,124(r1)
	ctx.current_instruction = 0x881A0188;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r6,4(r15)
	ctx.current_instruction = 0x881A0194;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r15.u32 + 4);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r9,112(r1)
	ctx.current_instruction = 0x881A019C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.current_instruction = 0x881A01A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r24,108(r1)
	ctx.current_instruction = 0x881A01A4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r17,92(r1)
	ctx.current_instruction = 0x881A01A8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// stw r30,100(r1)
	ctx.current_instruction = 0x881A01AC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// bl 0x881ba970
	ctx.lr = 0x881A01B4;
	sub_881BA970(ctx, base);
loc_881A01B4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a0638
	if (!ctx.cr6.eq) goto loc_881A0638;
	// lwz r11,3004(r31)
	ctx.current_instruction = 0x881A01BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881a0360
	if (ctx.cr6.eq) goto loc_881A0360;
	// lwz r10,3028(r31)
	ctx.current_instruction = 0x881A01CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// rlwinm r11,r16,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,136(r31)
	ctx.current_instruction = 0x881A01D4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// addi r7,r30,-2
	ctx.r7.s64 = ctx.r30.s64 + -2;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r16,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_881A01F4:
	// lhzu r8,2(r7)
	ctx.current_instruction = 0x881A01F4;
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A01F8;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a01f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A01F4;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,3028(r31)
	ctx.current_instruction = 0x881A0204;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r30,14
	ctx.r6.s64 = ctx.r30.s64 + 14;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_881A0220:
	// lhzu r9,2(r6)
	ctx.current_instruction = 0x881A0220;
	ea = 2 + ctx.r6.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r9,2(r8)
	ctx.current_instruction = 0x881A0224;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881a0220
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A0220;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3028(r31)
	ctx.current_instruction = 0x881A0230;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r30,30
	ctx.r6.s64 = ctx.r30.s64 + 30;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_881A0250:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A0250;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A0254;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a0250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A0250;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3028(r31)
	ctx.current_instruction = 0x881A0260;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r30,46
	ctx.r6.s64 = ctx.r30.s64 + 46;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_881A0284:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A0284;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A0288;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a0284
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A0284;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3028(r31)
	ctx.current_instruction = 0x881A0294;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r30,62
	ctx.r6.s64 = ctx.r30.s64 + 62;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_881A02B4:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A02B4;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A02B8;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a02b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A02B4;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3028(r31)
	ctx.current_instruction = 0x881A02C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r30,78
	ctx.r6.s64 = ctx.r30.s64 + 78;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_881A02E8:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A02E8;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A02EC;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a02e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A02E8;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,3028(r31)
	ctx.current_instruction = 0x881A02F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r6,r30,94
	ctx.r6.s64 = ctx.r30.s64 + 94;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_881A0320:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A0320;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A0324;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a0320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A0320;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,3028(r31)
	ctx.current_instruction = 0x881A0330;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addi r7,r30,110
	ctx.r7.s64 = ctx.r30.s64 + 110;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_881A0354:
	// lhzu r10,2(r7)
	ctx.current_instruction = 0x881A0354;
	ea = 2 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r10,2(r11)
	ctx.current_instruction = 0x881A0358;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x881a0354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A0354;
loc_881A0360:
	// lwz r11,3188(r31)
	ctx.current_instruction = 0x881A0360;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3188);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,364(r1)
	ctx.current_instruction = 0x881A0368;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r7,264(r31)
	ctx.current_instruction = 0x881A036C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r6,208(r31)
	ctx.current_instruction = 0x881A0374;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A0380;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A0380:
	// stb r23,12(r18)
	ctx.current_instruction = 0x881A0380;
	REX_STORE_U8(ctx.r18.u32 + 12, ctx.r23.u8);
	// addi r28,r25,1
	ctx.r28.s64 = ctx.r25.s64 + 1;
	// lwz r9,136(r31)
	ctx.current_instruction = 0x881A0388;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mullw r11,r9,r26
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r26.s32);
	// add r8,r11,r16
	ctx.r8.u64 = ctx.r11.u64 + ctx.r16.u64;
	// lwz r10,472(r31)
	ctx.current_instruction = 0x881A0394;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 472);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x881a040c
	if (ctx.cr6.eq) goto loc_881A040C;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// bl 0x8819d118
	ctx.lr = 0x881A03D0;
	sub_8819D118(ctx, base);
loc_881A03D0:
	// stw r18,84(r1)
	ctx.current_instruction = 0x881A03D0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lbz r6,5(r15)
	ctx.current_instruction = 0x881A03D8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r15.u32 + 5);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r7,120(r1)
	ctx.current_instruction = 0x881A03E0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r24,108(r1)
	ctx.current_instruction = 0x881A03E8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r17,92(r1)
	ctx.current_instruction = 0x881A03F0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// lwz r30,1772(r31)
	ctx.current_instruction = 0x881A03F4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// lwz r9,112(r1)
	ctx.current_instruction = 0x881A03F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.current_instruction = 0x881A03FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r30,100(r1)
	ctx.current_instruction = 0x881A0400;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// bl 0x881ba970
	ctx.lr = 0x881A0408;
	sub_881BA970(ctx, base);
loc_881A0408:
	// b 0x881a0458
	goto loc_881A0458;
loc_881A040C:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// bl 0x8819cb88
	ctx.lr = 0x881A0414;
	sub_8819CB88(ctx, base);
loc_881A0414:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881a0420
	if (ctx.cr6.eq) goto loc_881A0420;
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
loc_881A0420:
	// stw r18,84(r1)
	ctx.current_instruction = 0x881A0420;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r17,92(r1)
	ctx.current_instruction = 0x881A0428;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r24,108(r1)
	ctx.current_instruction = 0x881A0430;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r30,1772(r31)
	ctx.current_instruction = 0x881A0438;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,112(r1)
	ctx.current_instruction = 0x881A0444;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r6,5(r15)
	ctx.current_instruction = 0x881A0448;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r15.u32 + 5);
	// lwz r8,116(r1)
	ctx.current_instruction = 0x881A044C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r30,100(r1)
	ctx.current_instruction = 0x881A0450;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// bl 0x881ba970
	ctx.lr = 0x881A0458;
	sub_881BA970(ctx, base);
loc_881A0458:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a0638
	if (!ctx.cr6.eq) goto loc_881A0638;
	// lwz r11,3004(r31)
	ctx.current_instruction = 0x881A0460;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881a0604
	if (ctx.cr6.eq) goto loc_881A0604;
	// lwz r10,3036(r31)
	ctx.current_instruction = 0x881A0470;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// rlwinm r11,r16,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,136(r31)
	ctx.current_instruction = 0x881A0478;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// addi r7,r30,-2
	ctx.r7.s64 = ctx.r30.s64 + -2;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r16,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_881A0498:
	// lhzu r8,2(r7)
	ctx.current_instruction = 0x881A0498;
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A049C;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a0498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A0498;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,3036(r31)
	ctx.current_instruction = 0x881A04A8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r30,14
	ctx.r6.s64 = ctx.r30.s64 + 14;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_881A04C4:
	// lhzu r9,2(r6)
	ctx.current_instruction = 0x881A04C4;
	ea = 2 + ctx.r6.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r9,2(r8)
	ctx.current_instruction = 0x881A04C8;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881a04c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A04C4;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3036(r31)
	ctx.current_instruction = 0x881A04D4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r30,30
	ctx.r6.s64 = ctx.r30.s64 + 30;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_881A04F4:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A04F4;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A04F8;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a04f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A04F4;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3036(r31)
	ctx.current_instruction = 0x881A0504;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r30,46
	ctx.r6.s64 = ctx.r30.s64 + 46;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_881A0528:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A0528;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A052C;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a0528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A0528;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3036(r31)
	ctx.current_instruction = 0x881A0538;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r30,62
	ctx.r6.s64 = ctx.r30.s64 + 62;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_881A0558:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A0558;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A055C;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a0558
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A0558;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3036(r31)
	ctx.current_instruction = 0x881A0568;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r30,78
	ctx.r6.s64 = ctx.r30.s64 + 78;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_881A058C:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A058C;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A0590;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a058c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A058C;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,3036(r31)
	ctx.current_instruction = 0x881A059C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r6,r30,94
	ctx.r6.s64 = ctx.r30.s64 + 94;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_881A05C4:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A05C4;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A05C8;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a05c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A05C4;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,3036(r31)
	ctx.current_instruction = 0x881A05D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addi r7,r30,110
	ctx.r7.s64 = ctx.r30.s64 + 110;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_881A05F8:
	// lhzu r10,2(r7)
	ctx.current_instruction = 0x881A05F8;
	ea = 2 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r10,2(r11)
	ctx.current_instruction = 0x881A05FC;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x881a05f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A05F8;
loc_881A0604:
	// lwz r11,3188(r31)
	ctx.current_instruction = 0x881A0604;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3188);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,372(r1)
	ctx.current_instruction = 0x881A060C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r7,264(r31)
	ctx.current_instruction = 0x881A0610;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r6,208(r31)
	ctx.current_instruction = 0x881A0618;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A0624;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A0624:
	// lwz r10,0(r18)
	ctx.current_instruction = 0x881A0624;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r23,13(r18)
	ctx.current_instruction = 0x881A062C;
	REX_STORE_U8(ctx.r18.u32 + 13, ctx.r23.u8);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r9,0(r18)
	ctx.current_instruction = 0x881A0634;
	REX_STORE_U32(ctx.r18.u32 + 0, ctx.r9.u32);
loc_881A0638:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B3458) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881B3458);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B3458;
	ctx.current_instruction = 0x881B3458;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x881b346c
	if (!ctx.cr6.eq) goto loc_881B346C;
loc_881B3464:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881B346C:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r4)
	ctx.current_instruction = 0x881B3474;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// beq cr6,0x881b3464
	if (ctx.cr6.eq) goto loc_881B3464;
	// lwz r9,16(r11)
	ctx.current_instruction = 0x881B347C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881b3464
	if (!ctx.cr6.lt) goto loc_881B3464;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x881b34ac
	if (!ctx.cr6.eq) goto loc_881B34AC;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881B3490;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.current_instruction = 0x881B3494;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,0(r11)
	ctx.current_instruction = 0x881B349C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne cr6,0x881b3508
	if (!ctx.cr6.eq) goto loc_881B3508;
	// stw r8,4(r11)
	ctx.current_instruction = 0x881B34A4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// b 0x881b3508
	goto loc_881B3508;
loc_881B34AC:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x881b34c8
	if (!ctx.cr6.eq) goto loc_881B34C8;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x881b34c8
	if (!ctx.cr6.eq) goto loc_881B34C8;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x881B34BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,0(r11)
	ctx.current_instruction = 0x881B34C0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x881b3508
	goto loc_881B3508;
loc_881B34C8:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x881b34d8
	if (!ctx.cr6.eq) goto loc_881B34D8;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
loc_881B34D8:
	// lwz r9,0(r11)
	ctx.current_instruction = 0x881B34D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x881b34f0
	if (!ctx.cr0.gt) goto loc_881B34F0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881B34E8:
	// lwz r9,0(r9)
	ctx.current_instruction = 0x881B34E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// bdnz 0x881b34e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B34E8;
loc_881B34F0:
	// lwz r10,0(r9)
	ctx.current_instruction = 0x881B34F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r8,0(r10)
	ctx.current_instruction = 0x881B34F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r9)
	ctx.current_instruction = 0x881B34FC;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne cr6,0x881b3508
	if (!ctx.cr6.eq) goto loc_881B3508;
	// stw r9,4(r11)
	ctx.current_instruction = 0x881B3504;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_881B3508:
	// lwz r9,4(r10)
	ctx.current_instruction = 0x881B3508;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r4)
	ctx.current_instruction = 0x881B350C;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.current_instruction = 0x881B3510;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,0(r10)
	ctx.current_instruction = 0x881B3514;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.current_instruction = 0x881B3518;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r10,8(r11)
	ctx.current_instruction = 0x881B3520;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bne cr6,0x881b352c
	if (!ctx.cr6.eq) goto loc_881B352C;
	// stw r10,12(r11)
	ctx.current_instruction = 0x881B3528;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_881B352C:
	// lwz r10,16(r11)
	ctx.current_instruction = 0x881B352C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r11)
	ctx.current_instruction = 0x881B3538;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881B45D0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881B45D0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B45D0;
	ctx.current_instruction = 0x881B45D0;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// ble cr6,0x881b45f4
	if (!ctx.cr6.gt) goto loc_881B45F4;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x881b4600
	if (!ctx.cr6.gt) goto loc_881B4600;
	// lwz r11,12(r3)
	ctx.current_instruction = 0x881B45E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r10,-1(r11)
	ctx.current_instruction = 0x881B45E8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// clrlwi r3,r10,30
	ctx.r3.u64 = ctx.r10.u32 & 0x3;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881B45F4:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_881B4600:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881B5410) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B5410;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B5410) {
			switch (rex_dispatch_address) {
				case 0x881B5418:
				case 0x881B5444:
				case 0x881B54F4:
				case 0x881B5580:
				case 0x881B55A0:
				case 0x881B5648:
				case 0x881B5690:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B5410;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B5418: goto loc_881B5418;
		case 0x881B5444: goto loc_881B5444;
		case 0x881B54F4: goto loc_881B54F4;
		case 0x881B5580: goto loc_881B5580;
		case 0x881B55A0: goto loc_881B55A0;
		case 0x881B5648: goto loc_881B5648;
		case 0x881B5690: goto loc_881B5690;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881B5418;
	__savegprlr_27(ctx, base);
loc_881B5418:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881B5418;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.current_instruction = 0x881B541C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r10,20(r4)
	ctx.current_instruction = 0x881B5424;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r9,4(r11)
	ctx.current_instruction = 0x881B5430;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x881b5470
	if (!ctx.cr6.eq) goto loc_881B5470;
	// bl 0x881b4ab8
	ctx.lr = 0x881B5444;
	sub_881B4AB8(ctx, base);
loc_881B5444:
	// stw r3,0(r30)
	ctx.current_instruction = 0x881B5444;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881b545c
	if (ctx.cr6.eq) goto loc_881B545C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881B545C:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x881B545C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,20(r27)
	ctx.current_instruction = 0x881B5460;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x881B5464;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r8,4(r11)
	ctx.current_instruction = 0x881B546C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_881B5470:
	// lwz r11,44(r27)
	ctx.current_instruction = 0x881B5470;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881b548c
	if (!ctx.cr6.eq) goto loc_881B548C;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,20(r31)
	ctx.current_instruction = 0x881B5484;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881b55b8
	goto loc_881B55B8;
loc_881B548C:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x881B548C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.current_instruction = 0x881B5490;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.current_instruction = 0x881B5498;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.current_instruction = 0x881B54A8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881b5578
	if (ctx.cr6.lt) goto loc_881B5578;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x881B54B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881B54C8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881B54D0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881b5570
	if (!ctx.cr6.lt) goto loc_881B5570;
loc_881B54D8:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881B54D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881B54DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881b5504
	if (ctx.cr6.lt) goto loc_881B5504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881B54F4;
	sub_88156440(ctx, base);
loc_881B54F4:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881b54d8
	if (ctx.cr6.eq) goto loc_881B54D8;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881b55b8
	goto loc_881B55B8;
loc_881B5504:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881B5504;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881B550C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r7,2(r11)
	ctx.current_instruction = 0x881B5514;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.current_instruction = 0x881B5518;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,4(r11)
	ctx.current_instruction = 0x881B5520;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x881B5524;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r6,r10,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B552C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881B5530;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881B5538;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// neg r6,r10
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	ctx.current_instruction = 0x881B5554;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r31)
	ctx.current_instruction = 0x881B556C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_881B5570:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881b55b8
	goto loc_881B55B8;
loc_881B5578:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881B5580;
	sub_88156500(ctx, base);
loc_881B5580:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
loc_881B5588:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881B5588;
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
	ctx.lr = 0x881B55A0;
	sub_88156500(ctx, base);
loc_881B55A0:
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881B55A8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881b5588
	if (ctx.cr6.lt) goto loc_881B5588;
loc_881B55B8:
	// lwz r11,12(r27)
	ctx.current_instruction = 0x881B55B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r10,8(r27)
	ctx.current_instruction = 0x881B55BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// subfc r9,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r30.u64;
	// addze r8,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r8.s64 = temp.s64;
	// subf r7,r8,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r8.u64;
	// and r28,r7,r30
	ctx.r28.u64 = ctx.r7.u64 & ctx.r30.u64;
	// lbzx r30,r10,r28
	ctx.current_instruction = 0x881B55D0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881b5690
	if (ctx.cr6.eq) goto loc_881B5690;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B55DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x881b55f8
	if (!ctx.cr6.gt) goto loc_881B55F8;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x881b5690
	goto loc_881B5690;
loc_881B55F8:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881b5658
	if (!ctx.cr6.gt) goto loc_881B5658;
loc_881B5600:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881b5658
	if (ctx.cr6.eq) goto loc_881B5658;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881B560C;
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
	ctx.current_instruction = 0x881B5630;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881B5638;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881b5648
	if (!ctx.cr0.lt) goto loc_881B5648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881B5648;
	sub_88156678(ctx, base);
loc_881B5648:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B5648;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881b5600
	if (ctx.cr6.gt) goto loc_881B5600;
loc_881B5658:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881B565C;
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
	ctx.current_instruction = 0x881B5674;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881B5680;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881b5690
	if (!ctx.cr0.lt) goto loc_881B5690;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881B5690;
	sub_88156678(ctx, base);
loc_881B5690:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r28,17
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 17, ctx.xer);
	// blt cr6,0x881b56a8
	if (ctx.cr6.lt) goto loc_881B56A8;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r28,-17
	ctx.r11.s64 = ctx.r28.s64 + -17;
loc_881B56A8:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x881b56c8
	if (ctx.cr6.lt) goto loc_881B56C8;
	// lis r9,-30718
	ctx.r9.s64 = -2013134848;
	// srawi r10,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 1;
	// addi r9,r9,-3972
	ctx.r9.s64 = ctx.r9.s64 + -3972;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r11,-5(r7)
	ctx.current_instruction = 0x881B56C0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + -5);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_881B56C8:
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r6,r9,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r9.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C39A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C39A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C39A8) {
			switch (rex_dispatch_address) {
				case 0x881C39F0:
				case 0x881C3A20:
				case 0x881C3A50:
				case 0x881C3AA0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C39A8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881C39F0: goto loc_881C39F0;
		case 0x881C3A20: goto loc_881C3A20;
		case 0x881C3A50: goto loc_881C3A50;
		case 0x881C3AA0: goto loc_881C3AA0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881C39AC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881C39B0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881C39B4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881C39B8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30718
	ctx.r10.s64 = -2013134848;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r10,6968
	ctx.r10.s64 = ctx.r10.s64 + 6968;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881c3a24
	if (!ctx.cr6.eq) goto loc_881C3A24;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x881c39f4
	if (!ctx.cr6.eq) goto loc_881C39F4;
	// bl 0x881c3888
	ctx.lr = 0x881C39F0;
	sub_881C3888(ctx, base);
loc_881C39F0:
	// b 0x881c3aa0
	goto loc_881C3AA0;
loc_881C39F4:
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// li r8,4
	ctx.r8.s64 = 4;
	// beq cr6,0x881c3a04
	if (ctx.cr6.eq) goto loc_881C3A04;
	// li r8,6
	ctx.r8.s64 = 6;
loc_881C3A04:
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// bl 0x881c3140
	ctx.lr = 0x881C3A20;
	sub_881C3140(ctx, base);
loc_881C3A20:
	// b 0x881c3aa0
	goto loc_881C3AA0;
loc_881C3A24:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x881c3a54
	if (!ctx.cr6.eq) goto loc_881C3A54;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r8,4
	ctx.r8.s64 = 4;
	// beq cr6,0x881c3a3c
	if (ctx.cr6.eq) goto loc_881C3A3C;
	// li r8,6
	ctx.r8.s64 = 6;
loc_881C3A3C:
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// subf r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r31.u64;
	// bl 0x881c3378
	ctx.lr = 0x881C3A50;
	sub_881C3378(ctx, base);
loc_881C3A50:
	// b 0x881c3aa0
	goto loc_881C3AA0;
loc_881C3A54:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r9,4
	ctx.r9.s64 = 4;
	// beq cr6,0x881c3a64
	if (ctx.cr6.eq) goto loc_881C3A64;
	// li r9,6
	ctx.r9.s64 = 6;
loc_881C3A64:
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq cr6,0x881c3a74
	if (ctx.cr6.eq) goto loc_881C3A74;
	// li r11,6
	ctx.r11.s64 = 6;
loc_881C3A74:
	// subfic r8,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r8.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x881C3A7C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r9,r11,-7
	ctx.r9.s64 = ctx.r11.s64 + -7;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// bl 0x881c35a0
	ctx.lr = 0x881C3AA0;
	sub_881C35A0(ctx, base);
loc_881C3AA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881C3AA4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881C3AAC;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881C3AB0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881C4560) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C4560;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C4560) {
			switch (rex_dispatch_address) {
				case 0x881C4590:
				case 0x881C4598:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C4560;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881C4590: goto loc_881C4590;
		case 0x881C4598: goto loc_881C4598;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881C4564;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881C4568;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881C456C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.current_instruction = 0x881C4574;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881c4598
	if (ctx.cr6.eq) goto loc_881C4598;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x881C4580;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x881C4590;
	sub_88052D90(ctx, base);
loc_881C4590:
	// lwz r3,0(r31)
	ctx.current_instruction = 0x881C4590;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88052278
	ctx.lr = 0x881C4598;
	sub_88052278(ctx, base);
loc_881C4598:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	ctx.current_instruction = 0x881C459C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881C45A4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881C45AC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881C4D10) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C4D10;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C4D10) {
			switch (rex_dispatch_address) {
				case 0x881C4D18:
				case 0x881C4DB0:
				case 0x881C4E3C:
				case 0x881C4E5C:
				case 0x881C4EC8:
				case 0x881C4F64:
				case 0x881C4FAC:
				case 0x881C5000:
				case 0x881C5094:
				case 0x881C50DC:
				case 0x881C51CC:
				case 0x881C5214:
				case 0x881C52A8:
				case 0x881C52F0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C4D10;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881C4D18: goto loc_881C4D18;
		case 0x881C4DB0: goto loc_881C4DB0;
		case 0x881C4E3C: goto loc_881C4E3C;
		case 0x881C4E5C: goto loc_881C4E5C;
		case 0x881C4EC8: goto loc_881C4EC8;
		case 0x881C4F64: goto loc_881C4F64;
		case 0x881C4FAC: goto loc_881C4FAC;
		case 0x881C5000: goto loc_881C5000;
		case 0x881C5094: goto loc_881C5094;
		case 0x881C50DC: goto loc_881C50DC;
		case 0x881C51CC: goto loc_881C51CC;
		case 0x881C5214: goto loc_881C5214;
		case 0x881C52A8: goto loc_881C52A8;
		case 0x881C52F0: goto loc_881C52F0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x881C4D18;
	__savegprlr_23(ctx, base);
loc_881C4D18:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x881C4D18;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x881C4D1C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x881c4d48
	if (!ctx.cr6.eq) goto loc_881C4D48;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r11,20(r31)
	ctx.current_instruction = 0x881C4D40;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881c4e78
	goto loc_881C4E78;
loc_881C4D48:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x881C4D48;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.current_instruction = 0x881C4D4C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.current_instruction = 0x881C4D54;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.current_instruction = 0x881C4D64;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881c4e34
	if (ctx.cr6.lt) goto loc_881C4E34;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x881C4D74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881C4D84;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881C4D8C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881c4e2c
	if (!ctx.cr6.lt) goto loc_881C4E2C;
loc_881C4D94:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881C4D94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881C4D98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881c4dc0
	if (ctx.cr6.lt) goto loc_881C4DC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881C4DB0;
	sub_88156440(ctx, base);
loc_881C4DB0:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881c4d94
	if (ctx.cr6.eq) goto loc_881C4D94;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881c4e74
	goto loc_881C4E74;
loc_881C4DC0:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881C4DC0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881C4DC8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881C4DD0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x881C4DD4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x881C4DDC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x881C4DE0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C4DE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881C4DEC;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x881C4DF4;
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
	ctx.current_instruction = 0x881C4E10;
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
	ctx.current_instruction = 0x881C4E28;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_881C4E2C:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881c4e74
	goto loc_881C4E74;
loc_881C4E34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881C4E3C;
	sub_88156500(ctx, base);
loc_881C4E3C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
loc_881C4E44:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881C4E44;
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
	ctx.lr = 0x881C4E5C;
	sub_88156500(ctx, base);
loc_881C4E5C:
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881C4E64;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881c4e44
	if (ctx.cr6.lt) goto loc_881C4E44;
loc_881C4E74:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_881C4E78:
	// lwz r11,0(r23)
	ctx.current_instruction = 0x881C4E78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 8, ctx.xer);
	// bne cr6,0x881c4e94
	if (!ctx.cr6.eq) goto loc_881C4E94;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,37
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 37, ctx.xer);
	// blt cr6,0x881c4fb4
	if (ctx.cr6.lt) goto loc_881C4FB4;
	// addi r27,r27,-37
	ctx.r27.s64 = ctx.r27.s64 + -37;
loc_881C4E94:
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_881C4E98:
	// rlwinm r24,r11,0,30,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x881c5304
	if (ctx.cr6.eq) goto loc_881C5304;
	// cmpwi cr6,r27,35
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 35, ctx.xer);
	// beq cr6,0x881c5140
	if (ctx.cr6.eq) goto loc_881C5140;
	// cmpwi cr6,r27,36
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 36, ctx.xer);
	// beq cr6,0x881c5128
	if (ctx.cr6.eq) goto loc_881C5128;
	// lwz r11,1976(r25)
	ctx.current_instruction = 0x881C4EB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 1976);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r26,76(r11)
	ctx.current_instruction = 0x881C4EC0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x881aea60
	ctx.lr = 0x881C4EC8;
	sub_881AEA60(ctx, base);
loc_881C4EC8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x881c4edc
	if (ctx.cr6.eq) goto loc_881C4EDC;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x881c4ee0
	if (ctx.cr6.eq) goto loc_881C4EE0;
loc_881C4EDC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_881C4EE0:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,13752
	ctx.r25.s64 = ctx.r11.s64 + 13752;
	// lwzx r11,r28,r25
	ctx.current_instruction = 0x881C4EEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r25.u32);
	// subf. r30,r10,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x881c4fbc
	if (!ctx.cr0.gt) goto loc_881C4FBC;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C4EF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x881c4fbc
	if (ctx.cr6.gt) goto loc_881C4FBC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881c4fbc
	if (ctx.cr6.eq) goto loc_881C4FBC;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881c4f74
	if (!ctx.cr6.gt) goto loc_881C4F74;
loc_881C4F1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c4f74
	if (ctx.cr6.eq) goto loc_881C4F74;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C4F28;
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
	ctx.current_instruction = 0x881C4F4C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C4F54;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c4f64
	if (!ctx.cr0.lt) goto loc_881C4F64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C4F64;
	sub_88156678(ctx, base);
loc_881C4F64:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C4F64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c4f1c
	if (ctx.cr6.gt) goto loc_881C4F1C;
loc_881C4F74:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C4F78;
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
	ctx.current_instruction = 0x881C4F90;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C4F9C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c4fac
	if (!ctx.cr0.lt) goto loc_881C4FAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C4FAC;
	sub_88156678(ctx, base);
loc_881C4FAC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x881c4fc0
	goto loc_881C4FC0;
loc_881C4FB4:
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// b 0x881c4e98
	goto loc_881C4E98;
loc_881C4FBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_881C4FC0:
	// addi r10,r25,24
	ctx.r10.s64 = ctx.r25.s64 + 24;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// li r4,6
	ctx.r4.s64 = 6;
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r7,r28,r10
	ctx.current_instruction = 0x881C4FD4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// rlwinm r6,r8,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r5,r8,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// xor r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// rlwimi r9,r24,0,16,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// subf r28,r5,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r5.u64;
	// rlwimi r28,r9,0,16,31
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFF0000);
	// bl 0x881aea88
	ctx.lr = 0x881C5000;
	sub_881AEA88(ctx, base);
loc_881C5000:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x881c5014
	if (ctx.cr6.eq) goto loc_881C5014;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x881c5018
	if (ctx.cr6.eq) goto loc_881C5018;
loc_881C5014:
	// li r11,0
	ctx.r11.s64 = 0;
loc_881C5018:
	// rlwinm r27,r3,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r27,r25
	ctx.current_instruction = 0x881C501C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r25.u32);
	// subf. r30,r11,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x881c50e4
	if (!ctx.cr0.gt) goto loc_881C50E4;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C5028;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x881c50e4
	if (ctx.cr6.gt) goto loc_881C50E4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881c50e4
	if (ctx.cr6.eq) goto loc_881C50E4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881c50a4
	if (!ctx.cr6.gt) goto loc_881C50A4;
loc_881C504C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c50a4
	if (ctx.cr6.eq) goto loc_881C50A4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C5058;
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
	ctx.current_instruction = 0x881C507C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C5084;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c5094
	if (!ctx.cr0.lt) goto loc_881C5094;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C5094;
	sub_88156678(ctx, base);
loc_881C5094:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C5094;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c504c
	if (ctx.cr6.gt) goto loc_881C504C;
loc_881C50A4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C50A8;
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
	ctx.current_instruction = 0x881C50C0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C50CC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c50dc
	if (!ctx.cr0.lt) goto loc_881C50DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C50DC;
	sub_88156678(ctx, base);
loc_881C50DC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x881c50e8
	goto loc_881C50E8;
loc_881C50E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_881C50E8:
	// addi r10,r25,24
	ctx.r10.s64 = ctx.r25.s64 + 24;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lwzx r7,r27,r10
	ctx.current_instruction = 0x881C50F4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// xor r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// rlwimi r11,r28,0,28,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFF000F) | (ctx.r11.u64 & 0xFFF0);
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwimi r10,r11,0,28,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF000F) | (ctx.r10.u64 & 0xFFF0);
	// stw r10,0(r23)
	ctx.current_instruction = 0x881C511C;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_881C5128:
	// clrlwi r11,r24,28
	ctx.r11.u64 = ctx.r24.u32 & 0xF;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,0(r23)
	ctx.current_instruction = 0x881C5134;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_881C5140:
	// lwz r9,1976(r25)
	ctx.current_instruction = 0x881C5140;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 1976);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r8,412(r25)
	ctx.current_instruction = 0x881C5148;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 412);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C514C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// lwz r28,76(r9)
	ctx.current_instruction = 0x881C5154;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// subf r30,r28,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r28.u64;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// ble cr6,0x881c516c
	if (!ctx.cr6.gt) goto loc_881C516C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x881c5218
	goto loc_881C5218;
loc_881C516C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881c517c
	if (!ctx.cr6.eq) goto loc_881C517C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x881c5218
	goto loc_881C5218;
loc_881C517C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881c51dc
	if (!ctx.cr6.gt) goto loc_881C51DC;
loc_881C5184:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c51dc
	if (ctx.cr6.eq) goto loc_881C51DC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C5190;
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
	ctx.current_instruction = 0x881C51B4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C51BC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c51cc
	if (!ctx.cr0.lt) goto loc_881C51CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C51CC;
	sub_88156678(ctx, base);
loc_881C51CC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C51CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c5184
	if (ctx.cr6.gt) goto loc_881C5184;
loc_881C51DC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C51E0;
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
	ctx.current_instruction = 0x881C51F8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C5204;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c5214
	if (!ctx.cr0.lt) goto loc_881C5214;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C5214;
	sub_88156678(ctx, base);
loc_881C5214:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_881C5218:
	// lwz r9,416(r25)
	ctx.current_instruction = 0x881C5218;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 416);
	// rlwimi r24,r11,16,0,15
	ctx.r24.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r24.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C5220;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r30,r28,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r28.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// ble cr6,0x881c5250
	if (!ctx.cr6.gt) goto loc_881C5250;
loc_881C523C:
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r28,r11,4,16,27
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFF0) | (ctx.r28.u64 & 0xFFFFFFFFFFFF000F);
	// stw r28,0(r23)
	ctx.current_instruction = 0x881C5244;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_881C5250:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881c523c
	if (ctx.cr6.eq) goto loc_881C523C;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881c52b8
	if (!ctx.cr6.gt) goto loc_881C52B8;
loc_881C5260:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c52b8
	if (ctx.cr6.eq) goto loc_881C52B8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C526C;
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
	ctx.current_instruction = 0x881C5290;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C5298;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c52a8
	if (!ctx.cr0.lt) goto loc_881C52A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C52A8;
	sub_88156678(ctx, base);
loc_881C52A8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C52A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c5260
	if (ctx.cr6.gt) goto loc_881C5260;
loc_881C52B8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C52BC;
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
	ctx.current_instruction = 0x881C52D4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C52E0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c52f0
	if (!ctx.cr0.lt) goto loc_881C52F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C52F0;
	sub_88156678(ctx, base);
loc_881C52F0:
	// rlwimi r28,r30,4,16,27
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFF0) | (ctx.r28.u64 & 0xFFFFFFFFFFFF000F);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r28,0(r23)
	ctx.current_instruction = 0x881C52F8;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_881C5304:
	// clrlwi r11,r24,28
	ctx.r11.u64 = ctx.r24.u32 & 0xF;
	// stw r11,0(r23)
	ctx.current_instruction = 0x881C5308;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DBB00) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DBB00;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DBB00) {
			switch (rex_dispatch_address) {
				case 0x881DBB08:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DBB00;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881DBB08: goto loc_881DBB08;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x881DBB08;
	__savegprlr_22(ctx, base);
loc_881DBB08:
	// lwz r10,14636(r3)
	ctx.current_instruction = 0x881DBB08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14636);
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r4,14588(r3)
	ctx.current_instruction = 0x881DBB10;
	REX_STORE_U32(ctx.r3.u32 + 14588, ctx.r4.u32);
	// stw r5,14592(r3)
	ctx.current_instruction = 0x881DBB14;
	REX_STORE_U32(ctx.r3.u32 + 14592, ctx.r5.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,14596(r3)
	ctx.current_instruction = 0x881DBB1C;
	REX_STORE_U32(ctx.r3.u32 + 14596, ctx.r6.u32);
	// stw r7,14600(r3)
	ctx.current_instruction = 0x881DBB20;
	REX_STORE_U32(ctx.r3.u32 + 14600, ctx.r7.u32);
	// beq cr6,0x881dbb34
	if (ctx.cr6.eq) goto loc_881DBB34;
	// stw r10,14528(r3)
	ctx.current_instruction = 0x881DBB28;
	REX_STORE_U32(ctx.r3.u32 + 14528, ctx.r10.u32);
	// stw r24,14472(r3)
	ctx.current_instruction = 0x881DBB2C;
	REX_STORE_U32(ctx.r3.u32 + 14472, ctx.r24.u32);
	// b 0x881dbb5c
	goto loc_881DBB5C;
loc_881DBB34:
	// lwz r11,0(r3)
	ctx.current_instruction = 0x881DBB34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,14472(r3)
	ctx.current_instruction = 0x881DBB38;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14472);
	// lhz r8,14(r11)
	ctx.current_instruction = 0x881DBB3C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// mullw r11,r8,r4
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r8,r11,0,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stw r11,14528(r3)
	ctx.current_instruction = 0x881DBB58;
	REX_STORE_U32(ctx.r3.u32 + 14528, ctx.r11.u32);
loc_881DBB5C:
	// lwz r9,14528(r3)
	ctx.current_instruction = 0x881DBB5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14528);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r28,14472(r3)
	ctx.current_instruction = 0x881DBB64;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 14472);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// stw r11,14532(r3)
	ctx.current_instruction = 0x881DBB70;
	REX_STORE_U32(ctx.r3.u32 + 14532, ctx.r11.u32);
	// bne cr6,0x881dbb80
	if (!ctx.cr6.eq) goto loc_881DBB80;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// b 0x881dbba0
	goto loc_881DBBA0;
loc_881DBB80:
	// srawi r11,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r31,r5,r11
	ctx.r31.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// xor r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r11,r11,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r11.u64;
	// subf r8,r8,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r8.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r29,r11,r8
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
loc_881DBBA0:
	// lwz r31,0(r3)
	ctx.current_instruction = 0x881DBBA0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,14604(r3)
	ctx.current_instruction = 0x881DBBA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14604);
	// stw r29,56(r3)
	ctx.current_instruction = 0x881DBBA8;
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r29.u32);
	// lwz r8,14608(r3)
	ctx.current_instruction = 0x881DBBAC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 14608);
	// lwz r26,14580(r3)
	ctx.current_instruction = 0x881DBBB0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 14580);
	// lhz r30,14(r31)
	ctx.current_instruction = 0x881DBBB4;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r31.u32 + 14);
	// mullw r30,r30,r11
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// srawi r29,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r30.s32 >> 3;
	// mullw r30,r8,r9
	ctx.r30.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addze r29,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r29.s64 = temp.s64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r30,14536(r3)
	ctx.current_instruction = 0x881DBBD0;
	REX_STORE_U32(ctx.r3.u32 + 14536, ctx.r30.u32);
	// beq cr6,0x881dbc44
	if (ctx.cr6.eq) goto loc_881DBC44;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x881dbc00
	if (!ctx.cr6.eq) goto loc_881DBC00;
	// lhz r30,14(r31)
	ctx.current_instruction = 0x881DBBE0;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r31.u32 + 14);
	// lwz r29,14564(r3)
	ctx.current_instruction = 0x881DBBE4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 14564);
	// lwz r28,14568(r3)
	ctx.current_instruction = 0x881DBBE8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 14568);
	// mullw r30,r29,r30
	ctx.r30.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// srawi r30,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 3;
	// mullw r9,r28,r9
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// addze r30,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r30.s64 = temp.s64;
	// b 0x881dbc3c
	goto loc_881DBC3C;
loc_881DBC00:
	// lwz r30,14568(r3)
	ctx.current_instruction = 0x881DBC00;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 14568);
	// srawi r29,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r5.s32 >> 31;
	// lhz r28,14(r31)
	ctx.current_instruction = 0x881DBC08;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r31.u32 + 14);
	// subfic r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 <= 4294967295;
	ctx.r30.u64 = static_cast<uint64_t>(-1) - ctx.r30.u64;
	// lwz r26,14564(r3)
	ctx.current_instruction = 0x881DBC10;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 14564);
	// srawi r25,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r9.s32 >> 31;
	// xor r23,r5,r29
	ctx.r23.u64 = ctx.r5.u64 ^ ctx.r29.u64;
	// xor r22,r9,r25
	ctx.r22.u64 = ctx.r9.u64 ^ ctx.r25.u64;
	// subf r9,r29,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r29.u64;
	// mullw r29,r26,r28
	ctx.r29.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r28.s32);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r30,r25,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r25.u64;
	// srawi r29,r29,3
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 3;
	// mullw r30,r9,r30
	ctx.r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// addze r9,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r9.s64 = temp.s64;
loc_881DBC3C:
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// stw r9,56(r3)
	ctx.current_instruction = 0x881DBC40;
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
loc_881DBC44:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881dbc50
	if (!ctx.cr6.eq) goto loc_881DBC50;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_881DBC50:
	// lis r30,12849
	ctx.r30.s64 = 842072064;
	// lwz r9,16(r31)
	ctx.current_instruction = 0x881DBC54;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lis r31,12850
	ctx.r31.s64 = 842137600;
	// ori r30,r30,22105
	ctx.r30.u64 = ctx.r30.u64 | 22105;
	// lis r28,22101
	ctx.r28.s64 = 1448411136;
	// lis r26,12338
	ctx.r26.s64 = 808583168;
	// lis r25,12593
	ctx.r25.s64 = 825294848;
	// ori r29,r31,13392
	ctx.r29.u64 = ctx.r31.u64 | 13392;
	// ori r28,r28,22857
	ctx.r28.u64 = ctx.r28.u64 | 22857;
	// ori r26,r26,13385
	ctx.r26.u64 = ctx.r26.u64 | 13385;
	// ori r25,r25,13392
	ctx.r25.u64 = ctx.r25.u64 | 13392;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x881dbd28
	if (ctx.cr6.gt) goto loc_881DBD28;
	// beq cr6,0x881dbce4
	if (ctx.cr6.eq) goto loc_881DBCE4;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x881dbd38
	if (ctx.cr6.eq) goto loc_881DBD38;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x881dbdec
	if (!ctx.cr6.eq) goto loc_881DBDEC;
	// lwz r9,14628(r3)
	ctx.current_instruction = 0x881DBC98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14628);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881dbcac
	if (!ctx.cr6.eq) goto loc_881DBCAC;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
loc_881DBCAC:
	// mullw r31,r10,r5
	ctx.r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// stw r9,14644(r3)
	ctx.current_instruction = 0x881DBCB0;
	REX_STORE_U32(ctx.r3.u32 + 14644, ctx.r9.u32);
	// stw r31,64(r3)
	ctx.current_instruction = 0x881DBCB4;
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
	// mullw r5,r9,r5
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// mullw r4,r8,r4
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// srawi r23,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r11.s32 >> 2;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r8,r5,r31
	ctx.r8.u64 = ctx.r5.u64 + ctx.r31.u64;
	// addze r10,r23
	temp.s64 = ctx.r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r23.u32;
	ctx.r10.s64 = temp.s64;
	// add r5,r4,r11
	ctx.r5.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r8,68(r3)
	ctx.current_instruction = 0x881DBCD4;
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,14540(r3)
	ctx.current_instruction = 0x881DBCDC;
	REX_STORE_U32(ctx.r3.u32 + 14540, ctx.r5.u32);
	// b 0x881dbde0
	goto loc_881DBDE0;
loc_881DBCE4:
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// xor r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 1;
	// subf r4,r9,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r9.u64;
	// addze r5,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r9,r4,r10
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// stw r9,68(r3)
	ctx.current_instruction = 0x881DBD00;
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// srawi r23,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r10.s32 >> 1;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r9,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r5,64(r3)
	ctx.current_instruction = 0x881DBD20;
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// b 0x881dbdd0
	goto loc_881DBDD0;
loc_881DBD28:
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x881dbd90
	if (ctx.cr6.eq) goto loc_881DBD90;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x881dbdec
	if (!ctx.cr6.eq) goto loc_881DBDEC;
loc_881DBD38:
	// lwz r9,14628(r3)
	ctx.current_instruction = 0x881DBD38;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14628);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881dbd4c
	if (!ctx.cr6.eq) goto loc_881DBD4C;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
loc_881DBD4C:
	// mullw r31,r9,r5
	ctx.r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// stw r9,14644(r3)
	ctx.current_instruction = 0x881DBD50;
	REX_STORE_U32(ctx.r3.u32 + 14644, ctx.r9.u32);
	// srawi r31,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 1;
	// mullw r5,r10,r5
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// stw r5,64(r3)
	ctx.current_instruction = 0x881DBD5C;
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// addze r31,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r31.s64 = temp.s64;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// addze r4,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r23,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r11.s32 >> 1;
	// mullw r10,r4,r9
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// addze r9,r23
	temp.s64 = ctx.r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r23.u32;
	ctx.r9.s64 = temp.s64;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r5,68(r3)
	ctx.current_instruction = 0x881DBD88;
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// b 0x881dbddc
	goto loc_881DBDDC;
loc_881DBD90:
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// xor r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 1;
	// subf r4,r9,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r9.u64;
	// addze r5,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r9,r4,r10
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// stw r9,64(r3)
	ctx.current_instruction = 0x881DBDAC;
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// srawi r23,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r10.s32 >> 1;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r9,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r5,68(r3)
	ctx.current_instruction = 0x881DBDCC;
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
loc_881DBDD0:
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addze r11,r23
	temp.s64 = ctx.r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r23.u32;
	ctx.r11.s64 = temp.s64;
	// stw r11,14644(r3)
	ctx.current_instruction = 0x881DBDD8;
	REX_STORE_U32(ctx.r3.u32 + 14644, ctx.r11.u32);
loc_881DBDDC:
	// stw r4,14540(r3)
	ctx.current_instruction = 0x881DBDDC;
	REX_STORE_U32(ctx.r3.u32 + 14540, ctx.r4.u32);
loc_881DBDE0:
	// stw r10,14548(r3)
	ctx.current_instruction = 0x881DBDE0;
	REX_STORE_U32(ctx.r3.u32 + 14548, ctx.r10.u32);
	// stw r10,14544(r3)
	ctx.current_instruction = 0x881DBDE4;
	REX_STORE_U32(ctx.r3.u32 + 14544, ctx.r10.u32);
	// stw r27,60(r3)
	ctx.current_instruction = 0x881DBDE8;
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r27.u32);
loc_881DBDEC:
	// lwz r11,14640(r3)
	ctx.current_instruction = 0x881DBDEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881dbe04
	if (ctx.cr6.eq) goto loc_881DBE04;
	// stw r11,14492(r3)
	ctx.current_instruction = 0x881DBDF8;
	REX_STORE_U32(ctx.r3.u32 + 14492, ctx.r11.u32);
	// stw r24,14476(r3)
	ctx.current_instruction = 0x881DBDFC;
	REX_STORE_U32(ctx.r3.u32 + 14476, ctx.r24.u32);
	// b 0x881dbe2c
	goto loc_881DBE2C;
loc_881DBE04:
	// lwz r10,4(r3)
	ctx.current_instruction = 0x881DBE04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,14476(r3)
	ctx.current_instruction = 0x881DBE08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14476);
	// lhz r8,14(r10)
	ctx.current_instruction = 0x881DBE0C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// mullw r10,r8,r6
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// addi r5,r10,31
	ctx.r5.s64 = ctx.r10.s64 + 31;
	// rlwinm r4,r5,0,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r10,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 3;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stw r5,14492(r3)
	ctx.current_instruction = 0x881DBE28;
	REX_STORE_U32(ctx.r3.u32 + 14492, ctx.r5.u32);
loc_881DBE2C:
	// lwz r8,14492(r3)
	ctx.current_instruction = 0x881DBE2C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 14492);
	// lwz r10,14476(r3)
	ctx.current_instruction = 0x881DBE30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14476);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r9,14496(r3)
	ctx.current_instruction = 0x881DBE3C;
	REX_STORE_U32(ctx.r3.u32 + 14496, ctx.r9.u32);
	// bne cr6,0x881dbe4c
	if (!ctx.cr6.eq) goto loc_881DBE4C;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// b 0x881dbe6c
	goto loc_881DBE6C;
loc_881DBE4C:
	// srawi r10,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 31;
	// srawi r9,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// xor r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// xor r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
loc_881DBE6C:
	// lwz r4,4(r3)
	ctx.current_instruction = 0x881DBE6C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,14612(r3)
	ctx.current_instruction = 0x881DBE74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14612);
	// stw r9,72(r3)
	ctx.current_instruction = 0x881DBE78;
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// lwz r9,14616(r3)
	ctx.current_instruction = 0x881DBE7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14616);
	// lhz r5,14(r4)
	ctx.current_instruction = 0x881DBE80;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 14);
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// srawi r31,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r5.s32 >> 3;
	// mullw r5,r9,r8
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addze r8,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r8.s64 = temp.s64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stw r8,14500(r3)
	ctx.current_instruction = 0x881DBE98;
	REX_STORE_U32(ctx.r3.u32 + 14500, ctx.r8.u32);
	// bne cr6,0x881dbea4
	if (!ctx.cr6.eq) goto loc_881DBEA4;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_881DBEA4:
	// lwz r8,16(r4)
	ctx.current_instruction = 0x881DBEA4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x881dbfcc
	if (ctx.cr6.gt) goto loc_881DBFCC;
	// beq cr6,0x881dbf70
	if (ctx.cr6.eq) goto loc_881DBF70;
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x881dbfdc
	if (ctx.cr6.eq) goto loc_881DBFDC;
	// cmplw cr6,r8,r25
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x881dbf14
	if (ctx.cr6.eq) goto loc_881DBF14;
	// lis r5,12849
	ctx.r5.s64 = 842072064;
	// ori r4,r5,22094
	ctx.r4.u64 = ctx.r5.u64 | 22094;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x881dc084
	if (!ctx.cr6.eq) goto loc_881DC084;
	// srawi r8,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 31;
	// stw r11,14648(r3)
	ctx.current_instruction = 0x881DBED8;
	REX_STORE_U32(ctx.r3.u32 + 14648, ctx.r11.u32);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// stw r27,80(r3)
	ctx.current_instruction = 0x881DBEE0;
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r27.u32);
	// stw r27,14512(r3)
	ctx.current_instruction = 0x881DBEE4;
	REX_STORE_U32(ctx.r3.u32 + 14512, ctx.r27.u32);
	// xor r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// subf r5,r8,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r8.u64;
	// addze r8,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r8.s64 = temp.s64;
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// stw r4,76(r3)
	ctx.current_instruction = 0x881DBEFC;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,14504(r3)
	ctx.current_instruction = 0x881DBF08;
	REX_STORE_U32(ctx.r3.u32 + 14504, ctx.r11.u32);
	// stw r10,14508(r3)
	ctx.current_instruction = 0x881DBF0C;
	REX_STORE_U32(ctx.r3.u32 + 14508, ctx.r10.u32);
	// b 0x881dc084
	goto loc_881DC084;
loc_881DBF14:
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// xor r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// srawi r4,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 2;
	// subf r6,r5,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r5.u64;
	// addze r7,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r9,r6,r11
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// stw r9,76(r3)
	ctx.current_instruction = 0x881DBF30;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,14508(r3)
	ctx.current_instruction = 0x881DBF54;
	REX_STORE_U32(ctx.r3.u32 + 14508, ctx.r11.u32);
	// addze r5,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r5.s64 = temp.s64;
	// stw r7,80(r3)
	ctx.current_instruction = 0x881DBF5C;
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// stw r6,14504(r3)
	ctx.current_instruction = 0x881DBF60;
	REX_STORE_U32(ctx.r3.u32 + 14504, ctx.r6.u32);
	// stw r11,14512(r3)
	ctx.current_instruction = 0x881DBF64;
	REX_STORE_U32(ctx.r3.u32 + 14512, ctx.r11.u32);
	// stw r5,14648(r3)
	ctx.current_instruction = 0x881DBF68;
	REX_STORE_U32(ctx.r3.u32 + 14648, ctx.r5.u32);
	// b 0x881dc084
	goto loc_881DC084;
loc_881DBF70:
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// xor r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// srawi r4,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 1;
	// subf r6,r5,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r5.u64;
	// addze r7,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r9,r6,r11
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// stw r9,80(r3)
	ctx.current_instruction = 0x881DBF8C;
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,14512(r3)
	ctx.current_instruction = 0x881DBFB0;
	REX_STORE_U32(ctx.r3.u32 + 14512, ctx.r11.u32);
	// addze r5,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r5.s64 = temp.s64;
	// stw r7,76(r3)
	ctx.current_instruction = 0x881DBFB8;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// stw r6,14504(r3)
	ctx.current_instruction = 0x881DBFBC;
	REX_STORE_U32(ctx.r3.u32 + 14504, ctx.r6.u32);
	// stw r11,14508(r3)
	ctx.current_instruction = 0x881DBFC0;
	REX_STORE_U32(ctx.r3.u32 + 14508, ctx.r11.u32);
	// stw r5,14648(r3)
	ctx.current_instruction = 0x881DBFC4;
	REX_STORE_U32(ctx.r3.u32 + 14648, ctx.r5.u32);
	// b 0x881dc084
	goto loc_881DC084;
loc_881DBFCC:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x881dc038
	if (ctx.cr6.eq) goto loc_881DC038;
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x881dc084
	if (!ctx.cr6.eq) goto loc_881DC084;
loc_881DBFDC:
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// xor r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// srawi r4,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 1;
	// subf r6,r5,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r5.u64;
	// addze r7,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r9,r6,r11
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// stw r9,76(r3)
	ctx.current_instruction = 0x881DBFF8;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,14508(r3)
	ctx.current_instruction = 0x881DC01C;
	REX_STORE_U32(ctx.r3.u32 + 14508, ctx.r11.u32);
	// addze r5,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r5.s64 = temp.s64;
	// stw r7,80(r3)
	ctx.current_instruction = 0x881DC024;
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// stw r6,14504(r3)
	ctx.current_instruction = 0x881DC028;
	REX_STORE_U32(ctx.r3.u32 + 14504, ctx.r6.u32);
	// stw r11,14512(r3)
	ctx.current_instruction = 0x881DC02C;
	REX_STORE_U32(ctx.r3.u32 + 14512, ctx.r11.u32);
	// stw r5,14648(r3)
	ctx.current_instruction = 0x881DC030;
	REX_STORE_U32(ctx.r3.u32 + 14648, ctx.r5.u32);
	// b 0x881dc084
	goto loc_881DC084;
loc_881DC038:
	// srawi r8,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 31;
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// xor r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// stw r10,14504(r3)
	ctx.current_instruction = 0x881DC050;
	REX_STORE_U32(ctx.r3.u32 + 14504, ctx.r10.u32);
	// mullw r10,r6,r11
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// stw r10,76(r3)
	ctx.current_instruction = 0x881DC058;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r9,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r9.s64 = temp.s64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r9,14508(r3)
	ctx.current_instruction = 0x881DC06C;
	REX_STORE_U32(ctx.r3.u32 + 14508, ctx.r9.u32);
	// stw r9,14512(r3)
	ctx.current_instruction = 0x881DC070;
	REX_STORE_U32(ctx.r3.u32 + 14512, ctx.r9.u32);
	// rlwinm r10,r4,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// stw r10,80(r3)
	ctx.current_instruction = 0x881DC07C;
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r9,14648(r3)
	ctx.current_instruction = 0x881DC080;
	REX_STORE_U32(ctx.r3.u32 + 14648, ctx.r9.u32);
loc_881DC084:
	// lwz r9,14560(r3)
	ctx.current_instruction = 0x881DC084;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14560);
	// lwz r10,14484(r3)
	ctx.current_instruction = 0x881DC088;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14484);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r10,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// stw r11,84(r3)
	ctx.current_instruction = 0x881DC09C;
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x881dc0b0
	if (ctx.cr6.eq) goto loc_881DC0B0;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,84(r3)
	ctx.current_instruction = 0x881DC0AC;
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
loc_881DC0B0:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x881dc0bc
	if (!ctx.cr6.eq) goto loc_881DC0BC;
	// stw r10,84(r3)
	ctx.current_instruction = 0x881DC0B8;
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
loc_881DC0BC:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x881dc0cc
	if (!ctx.cr6.eq) goto loc_881DC0CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x881dc0d4
	goto loc_881DC0D4;
loc_881DC0CC:
	// lwz r11,84(r3)
	ctx.current_instruction = 0x881DC0CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_881DC0D4:
	// stw r11,88(r3)
	ctx.current_instruction = 0x881DC0D4;
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x881dc0e8
	if (ctx.cr6.eq) goto loc_881DC0E8;
	// stw r10,92(r3)
	ctx.current_instruction = 0x881DC0E0;
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881DC0E8:
	// lwz r11,84(r3)
	ctx.current_instruction = 0x881DC0E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,92(r3)
	ctx.current_instruction = 0x881DC0F4;
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E9110) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E9110;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E9110) {
			switch (rex_dispatch_address) {
				case 0x881E9138:
				case 0x881E9140:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E9110;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E9138: goto loc_881E9138;
		case 0x881E9140: goto loc_881E9140;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881E9114;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881E9118;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r11,80(r1)
	ctx.current_instruction = 0x881E9124;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	ctx.current_instruction = 0x881E912C;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r11,84(r1)
	ctx.current_instruction = 0x881E9130;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x88243710
	ctx.lr = 0x881E9138;
	__imp__RtlInitAnsiString(ctx, base);
loc_881E9138:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x881ed4e0
	ctx.lr = 0x881E9140;
	sub_881ED4E0(ctx, base);
loc_881E9140:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881E9144;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881E9740) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E9740;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E9740) {
			switch (rex_dispatch_address) {
				case 0x881E9748:
				case 0x881E983C:
				case 0x881E98E8:
				case 0x881E9A28:
				case 0x881E9AF4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E9740;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E9748: goto loc_881E9748;
		case 0x881E983C: goto loc_881E983C;
		case 0x881E98E8: goto loc_881E98E8;
		case 0x881E9A28: goto loc_881E9A28;
		case 0x881E9AF4: goto loc_881E9AF4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881E9748;
	__savegprlr_25(ctx, base);
loc_881E9748:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881E9748;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,2(r4)
	ctx.current_instruction = 0x881E974C;
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
	// beq cr6,0x881e9954
	if (ctx.cr6.eq) goto loc_881E9954;
	// lbz r11,5(r31)
	ctx.current_instruction = 0x881E977C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x881e9954
	if (!ctx.cr0.eq) goto loc_881E9954;
	// lhz r10,0(r31)
	ctx.current_instruction = 0x881E9788;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r11,0(r5)
	ctx.current_instruction = 0x881E978C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,61440
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61440, ctx.xer);
	// bgt cr6,0x881e9954
	if (ctx.cr6.gt) goto loc_881E9954;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881e9850
	if (ctx.cr6.eq) goto loc_881E9850;
	// lwz r11,12(r4)
	ctx.current_instruction = 0x881E97A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// lwz r10,8(r4)
	ctx.current_instruction = 0x881E97AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x881E97B0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x881E97B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x881e9804
	if (!ctx.cr6.eq) goto loc_881E9804;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881e9804
	if (!ctx.cr6.eq) goto loc_881E9804;
	// stw r10,0(r11)
	ctx.current_instruction = 0x881E97C8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	ctx.current_instruction = 0x881E97D0;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x881e9804
	if (!ctx.cr6.eq) goto loc_881E9804;
	// lhz r11,0(r4)
	ctx.current_instruction = 0x881E97D8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x881e9804
	if (!ctx.cr6.lt) goto loc_881E9804;
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
	ctx.current_instruction = 0x881E97F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r3
	ctx.current_instruction = 0x881E9800;
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
loc_881E9804:
	// lbz r11,5(r30)
	ctx.current_instruction = 0x881E9804;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881e983c
	if (ctx.cr0.eq) goto loc_881E983C;
	// lhz r10,0(r30)
	ctx.current_instruction = 0x881E9810;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x881e9830
	if (ctx.cr0.eq) goto loc_881E9830;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x881e9830
	if (!ctx.cr6.gt) goto loc_881E9830;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_881E9830:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x88243760
	ctx.lr = 0x881E983C;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_881E983C:
	// lhz r11,0(r30)
	ctx.current_instruction = 0x881E983C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,48(r29)
	ctx.current_instruction = 0x881E9844;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r29)
	ctx.current_instruction = 0x881E984C;
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
loc_881E9850:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881E9850;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881E9858;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x881E985C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x881E9860;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x881e98b0
	if (!ctx.cr6.eq) goto loc_881E98B0;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881e98b0
	if (!ctx.cr6.eq) goto loc_881E98B0;
	// stw r10,0(r11)
	ctx.current_instruction = 0x881E9874;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	ctx.current_instruction = 0x881E987C;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x881e98b0
	if (!ctx.cr6.eq) goto loc_881E98B0;
	// lhz r11,0(r31)
	ctx.current_instruction = 0x881E9884;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x881e98b0
	if (!ctx.cr6.lt) goto loc_881E98B0;
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
	ctx.current_instruction = 0x881E98A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	ctx.current_instruction = 0x881E98AC;
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
loc_881E98B0:
	// lbz r11,5(r31)
	ctx.current_instruction = 0x881E98B0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881e98e8
	if (ctx.cr0.eq) goto loc_881E98E8;
	// lhz r10,0(r31)
	ctx.current_instruction = 0x881E98BC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x881e98dc
	if (ctx.cr0.eq) goto loc_881E98DC;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x881e98dc
	if (!ctx.cr6.gt) goto loc_881E98DC;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_881E98DC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x88243760
	ctx.lr = 0x881E98E8;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_881E98E8:
	// lbz r11,5(r30)
	ctx.current_instruction = 0x881E98E8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,5(r31)
	ctx.current_instruction = 0x881E98F0;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// beq 0x881e990c
	if (ctx.cr0.eq) goto loc_881E990C;
	// lbz r11,4(r31)
	ctx.current_instruction = 0x881E98F8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.current_instruction = 0x881E9904;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r31,64(r11)
	ctx.current_instruction = 0x881E9908;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
loc_881E990C:
	// lhz r10,0(r31)
	ctx.current_instruction = 0x881E990C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x881E9914;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r27)
	ctx.current_instruction = 0x881E991C;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r10,48(r29)
	ctx.current_instruction = 0x881E9920;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// lhz r11,0(r31)
	ctx.current_instruction = 0x881E9924;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r29)
	ctx.current_instruction = 0x881E992C;
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// lwz r10,0(r27)
	ctx.current_instruction = 0x881E9930;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r11,5(r31)
	ctx.current_instruction = 0x881E9934;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r10,0(r31)
	ctx.current_instruction = 0x881E993C;
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// bne 0x881e9954
	if (!ctx.cr0.eq) goto loc_881E9954;
	// lwz r10,0(r27)
	ctx.current_instruction = 0x881E9944;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r10,2(r11)
	ctx.current_instruction = 0x881E9950;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
loc_881E9954:
	// lbz r11,5(r30)
	ctx.current_instruction = 0x881E9954;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x881e9b38
	if (!ctx.cr0.eq) goto loc_881E9B38;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x881E9960;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r10,5(r31)
	ctx.current_instruction = 0x881E996C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x881e9b38
	if (!ctx.cr0.eq) goto loc_881E9B38;
	// lhz r10,0(r31)
	ctx.current_instruction = 0x881E9978;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,61440
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61440, ctx.xer);
	// bgt cr6,0x881e9b38
	if (ctx.cr6.gt) goto loc_881E9B38;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x881e9a38
	if (ctx.cr6.eq) goto loc_881E9A38;
	// lwz r11,12(r30)
	ctx.current_instruction = 0x881E9990;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881E9998;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x881E999C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x881E99A0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x881e99f0
	if (!ctx.cr6.eq) goto loc_881E99F0;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881e99f0
	if (!ctx.cr6.eq) goto loc_881E99F0;
	// stw r10,0(r11)
	ctx.current_instruction = 0x881E99B4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	ctx.current_instruction = 0x881E99BC;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x881e99f0
	if (!ctx.cr6.eq) goto loc_881E99F0;
	// lhz r11,0(r30)
	ctx.current_instruction = 0x881E99C4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x881e99f0
	if (!ctx.cr6.lt) goto loc_881E99F0;
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
	ctx.current_instruction = 0x881E99E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	ctx.current_instruction = 0x881E99EC;
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
loc_881E99F0:
	// lbz r11,5(r30)
	ctx.current_instruction = 0x881E99F0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881e9a28
	if (ctx.cr0.eq) goto loc_881E9A28;
	// lhz r10,0(r30)
	ctx.current_instruction = 0x881E99FC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x881e9a1c
	if (ctx.cr0.eq) goto loc_881E9A1C;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x881e9a1c
	if (!ctx.cr6.gt) goto loc_881E9A1C;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_881E9A1C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x88243760
	ctx.lr = 0x881E9A28;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_881E9A28:
	// lhz r11,0(r30)
	ctx.current_instruction = 0x881E9A28;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r10,48(r29)
	ctx.current_instruction = 0x881E9A2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r29)
	ctx.current_instruction = 0x881E9A34;
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
loc_881E9A38:
	// lbz r11,5(r31)
	ctx.current_instruction = 0x881E9A38;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,5(r30)
	ctx.current_instruction = 0x881E9A40;
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// beq 0x881e9a5c
	if (ctx.cr0.eq) goto loc_881E9A5C;
	// lbz r11,4(r30)
	ctx.current_instruction = 0x881E9A48;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.current_instruction = 0x881E9A54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r30,64(r11)
	ctx.current_instruction = 0x881E9A58;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
loc_881E9A5C:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881E9A5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881E9A64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x881E9A68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x881E9A6C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x881e9abc
	if (!ctx.cr6.eq) goto loc_881E9ABC;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881e9abc
	if (!ctx.cr6.eq) goto loc_881E9ABC;
	// stw r10,0(r11)
	ctx.current_instruction = 0x881E9A80;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	ctx.current_instruction = 0x881E9A88;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x881e9abc
	if (!ctx.cr6.eq) goto loc_881E9ABC;
	// lhz r11,0(r31)
	ctx.current_instruction = 0x881E9A90;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x881e9abc
	if (!ctx.cr6.lt) goto loc_881E9ABC;
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
	ctx.current_instruction = 0x881E9AB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	ctx.current_instruction = 0x881E9AB8;
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
loc_881E9ABC:
	// lbz r11,5(r31)
	ctx.current_instruction = 0x881E9ABC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881e9af4
	if (ctx.cr0.eq) goto loc_881E9AF4;
	// lhz r10,0(r31)
	ctx.current_instruction = 0x881E9AC8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x881e9ae8
	if (ctx.cr0.eq) goto loc_881E9AE8;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x881e9ae8
	if (!ctx.cr6.gt) goto loc_881E9AE8;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_881E9AE8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x88243760
	ctx.lr = 0x881E9AF4;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_881E9AF4:
	// lwz r10,0(r27)
	ctx.current_instruction = 0x881E9AF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lhz r11,0(r31)
	ctx.current_instruction = 0x881E9AF8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r27)
	ctx.current_instruction = 0x881E9B00;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r31)
	ctx.current_instruction = 0x881E9B04;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r11,48(r29)
	ctx.current_instruction = 0x881E9B08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,48(r29)
	ctx.current_instruction = 0x881E9B10;
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// lbz r11,5(r30)
	ctx.current_instruction = 0x881E9B14;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,0(r27)
	ctx.current_instruction = 0x881E9B1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// sth r10,0(r30)
	ctx.current_instruction = 0x881E9B20;
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// bne 0x881e9b38
	if (!ctx.cr0.eq) goto loc_881E9B38;
	// lwz r10,0(r27)
	ctx.current_instruction = 0x881E9B28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r10,2(r11)
	ctx.current_instruction = 0x881E9B34;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
loc_881E9B38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_23) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EED28);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EED28;
	ctx.current_instruction = 0x881EED28;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_29) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EED58);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EED58;
	ctx.current_instruction = 0x881EED58;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_76) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEDD4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEDD4;
	ctx.current_instruction = 0x881EEDD4;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_93) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEE5C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEE5C;
	ctx.current_instruction = 0x881EEE5C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_64) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF00C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF00C;
	ctx.current_instruction = 0x881EF00C;
	uint32_t ea{};
	// li r11,-1024
	ctx.r11.s64 = -1024;
	// lvx128 v64,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-1008
	ctx.r11.s64 = -1008;
	// lvx128 v65,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-992
	ctx.r11.s64 = -992;
	// lvx128 v66,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v66.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-976
	ctx.r11.s64 = -976;
	// lvx128 v67,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v67.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-960
	ctx.r11.s64 = -960;
	// lvx128 v68,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v68.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-944
	ctx.r11.s64 = -944;
	// lvx128 v69,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v69.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__savefpr_20) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF268);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EF268;
	ctx.current_instruction = 0x881EF268;
	// stfd f20,-96(r12)
	ctx.current_instruction = 0x881EF268;
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(__restfpr_30) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF2DC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF2DC;
	ctx.current_instruction = 0x881EF2DC;
	// lfd f30,-16(r12)
	ctx.current_instruction = 0x881EF2DC;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.current_instruction = 0x881EF2E0;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EF7B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EF7B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EF7B8) {
			switch (rex_dispatch_address) {
				case 0x881EF8D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EF7B8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EF8D0: goto loc_881EF8D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881EF7BC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881EF7C0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881EF7C4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.current_instruction = 0x881EF7C8;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881EF7CC;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,32752
	ctx.r10.s64 = 2146435072;
	// stfd f2,136(r1)
	ctx.current_instruction = 0x881EF7D4;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f2.u64);
	// lwz r11,136(r1)
	ctx.current_instruction = 0x881EF7D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stfd f1,128(r1)
	ctx.current_instruction = 0x881EF7DC;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f1.u64);
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lis r9,-16
	ctx.r9.s64 = -1048576;
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881ef840
	if (!ctx.cr6.eq) goto loc_881EF840;
	// lwz r11,140(r1)
	ctx.current_instruction = 0x881EF7FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881ef87c
	if (!ctx.cr6.eq) goto loc_881EF87C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,8624(r11)
	ctx.current_instruction = 0x881EF80C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x881ef824
	if (!ctx.cr6.gt) goto loc_881EF824;
loc_881EF818:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lfd f0,16672(r11)
	ctx.current_instruction = 0x881EF81C;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16672);
	// b 0x881ef91c
	goto loc_881EF91C;
loc_881EF824:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x881ef838
	if (!ctx.cr6.lt) goto loc_881EF838;
loc_881EF82C:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,1488(r11)
	ctx.current_instruction = 0x881EF830;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
	// b 0x881ef91c
	goto loc_881EF91C;
loc_881EF838:
	// stfd f13,0(r31)
	ctx.current_instruction = 0x881EF838;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.f13.u64);
	// b 0x881ef920
	goto loc_881EF920;
loc_881EF840:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881ef87c
	if (!ctx.cr6.eq) goto loc_881EF87C;
	// lwz r11,140(r1)
	ctx.current_instruction = 0x881EF848;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881ef87c
	if (!ctx.cr6.eq) goto loc_881EF87C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,8624(r11)
	ctx.current_instruction = 0x881EF858;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x881ef82c
	if (ctx.cr6.gt) goto loc_881EF82C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x881ef818
	if (ctx.cr6.lt) goto loc_881EF818;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfd f0,16680(r11)
	ctx.current_instruction = 0x881EF874;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16680);
	// b 0x881ef91c
	goto loc_881EF91C;
loc_881EF87C:
	// lwz r11,128(r1)
	ctx.current_instruction = 0x881EF87C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881ef8b4
	if (!ctx.cr6.eq) goto loc_881EF8B4;
	// lwz r11,132(r1)
	ctx.current_instruction = 0x881EF888;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881ef920
	if (!ctx.cr6.eq) goto loc_881EF920;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,1488(r11)
	ctx.current_instruction = 0x881EF898;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x881ef818
	if (ctx.cr6.gt) goto loc_881EF818;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,8624(r11)
	ctx.current_instruction = 0x881EF8A8;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// fsel f0,f31,f13,f0
	ctx.f0.f64 = ctx.f31.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// b 0x881ef91c
	goto loc_881EF91C;
loc_881EF8B4:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881ef920
	if (!ctx.cr6.eq) goto loc_881EF920;
	// lwz r11,132(r1)
	ctx.current_instruction = 0x881EF8BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881ef920
	if (!ctx.cr6.eq) goto loc_881EF920;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x881ef748
	ctx.lr = 0x881EF8D0;
	sub_881EF748(ctx, base);
loc_881EF8D0:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,1488(r11)
	ctx.current_instruction = 0x881EF8D4;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x881ef8f8
	if (!ctx.cr6.gt) goto loc_881EF8F8;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfd f0,16672(r11)
	ctx.current_instruction = 0x881EF8E8;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16672);
	// bne cr6,0x881ef91c
	if (!ctx.cr6.eq) goto loc_881EF91C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x881ef91c
	goto loc_881EF91C;
loc_881EF8F8:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x881ef914
	if (!ctx.cr6.lt) goto loc_881EF914;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x881ef91c
	if (!ctx.cr6.eq) goto loc_881EF91C;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lfd f0,16704(r11)
	ctx.current_instruction = 0x881EF90C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16704);
	// b 0x881ef91c
	goto loc_881EF91C;
loc_881EF914:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,8624(r11)
	ctx.current_instruction = 0x881EF918;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
loc_881EF91C:
	// stfd f0,0(r31)
	ctx.current_instruction = 0x881EF91C;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.f0.u64);
loc_881EF920:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881EF928;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.current_instruction = 0x881EF930;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881EF934;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881EF938;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881FC608) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881FC608;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881FC608) {
			switch (rex_dispatch_address) {
				case 0x881FC610:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881FC608;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881FC610: goto loc_881FC610;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881FC610;
	__savegprlr_25(ctx, base);
loc_881FC610:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v62,r4,r5
	temp.u32 = ctx.r4.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 + ctx.r5.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvrx128 v60,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 + ctx.r5.u64;
	// vor128 v12,v63,v60
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvrx128 v55,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// vor128 v10,v62,v55
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvlx128 v59,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvlx128 v58,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvlx128 v56,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lvlx128 v61,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v57,r31,r4
	temp.u32 = ctx.r31.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 + ctx.r4.u64;
	// lvx128 v13,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvrx128 v54,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r29,32
	ctx.r29.s64 = 32;
	// lvrx128 v53,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vaddshs v6,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvrx128 v52,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v56,v54
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvrx128 v51,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v59,v53
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvx128 v30,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v7,v61,v52
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v5,v58,v51
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// li r28,48
	ctx.r28.s64 = 48;
	// vaddshs v25,v30,v4
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// li r27,64
	ctx.r27.s64 = 64;
	// li r26,80
	ctx.r26.s64 = 80;
	// lvrx128 v50,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v48,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vpkshus128 v49,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// lvlx128 v47,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v2,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v28,r30,r29
	ea = (ctx.r30.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v1,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v3,v57,v50
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vmrghb v29,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r25,96
	ctx.r25.s64 = 96;
	// li r29,112
	ctx.r29.s64 = 112;
	// vor128 v15,v47,v48
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vpkshus128 v46,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// li r11,4
	ctx.r11.s64 = 4;
	// lvx128 v26,r30,r28
	ea = (ctx.r30.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v27,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v24,r30,r27
	ea = (ctx.r30.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v23,v28,v2
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v20,r30,r26
	ea = (ctx.r30.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v22,v26,v1
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v21,v24,v31
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vmrghb v14,v0,v15
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v18,v20,v29
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// lvx128 v19,r30,r25
	ea = (ctx.r30.u32 + ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v16,r30,r29
	ea = (ctx.r30.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v17,v19,v27
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// stvewx128 v49,r0,r4
	ctx.current_instruction = 0x881FC730;
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v45,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// stvewx128 v49,r4,r11
	ctx.current_instruction = 0x881FC738;
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v44,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// stvewx128 v46,r0,r7
	ctx.current_instruction = 0x881FC740;
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v43,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vaddshs v0,v16,v14
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vpkshus128 v42,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// stvewx128 v46,r7,r11
	ctx.current_instruction = 0x881FC750;
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v45,r0,r9
	ctx.current_instruction = 0x881FC754;
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v41,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// stvewx128 v45,r9,r11
	ctx.current_instruction = 0x881FC75C;
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v40,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvewx128 v44,r0,r6
	ctx.current_instruction = 0x881FC764;
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r6,r11
	ctx.current_instruction = 0x881FC768;
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r0,r5
	ctx.current_instruction = 0x881FC76C;
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r5,r11
	ctx.current_instruction = 0x881FC770;
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r0,r3
	ctx.current_instruction = 0x881FC774;
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r3,r11
	ctx.current_instruction = 0x881FC778;
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r0,r31
	ctx.current_instruction = 0x881FC77C;
	ea = (ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r31,r11
	ctx.current_instruction = 0x881FC780;
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r8,r4
	ctx.current_instruction = 0x881FC784;
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r10,r11
	ctx.current_instruction = 0x881FC788;
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88218CF0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88218CF0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88218CF0;
	ctx.current_instruction = 0x88218CF0;
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// vspltish v12,8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v11,-1
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltish v4,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// vslh v30,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x4)));
	// vor128 v63,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vspltish v3,5
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x5)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bne cr6,0x88218e14
	if (!ctx.cr6.eq) goto loc_88218E14;
	// lvx128 v59,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lvx128 v60,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v61,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v62,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v61,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v9,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v31,v57,v58,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v11,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v12,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88218f48
	if (!ctx.cr6.gt) goto loc_88218F48;
	// li r9,0
	ctx.r9.s64 = 0;
loc_88218D84:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v8,v12,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v7,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vslh v31,v11,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// vslh v6,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// lvx128 v56,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v5,v31,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v28,v6,v12
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// vperm128 v31,v55,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v6,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vmrghb v8,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v28,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vor v9,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v11,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vadduhm v27,v29,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v26,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v12,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vadduhm v25,v27,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v24,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vadduhm v23,v28,v24
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v8,v25,v23
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vsrah v22,v8,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v22,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v63,v63,v22
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v22.u8)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// blt cr6,0x88218d84
	if (ctx.cr6.lt) goto loc_88218D84;
	// b 0x88218f48
	goto loc_88218F48;
loc_88218E14:
	// lvx128 v51,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v54,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v53,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v53,v51,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v50,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v54,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v9,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v49,v50,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v7,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v8,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v12,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v11,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88218f48
	if (!ctx.cr6.gt) goto loc_88218F48;
	// li r8,0
	ctx.r8.s64 = 0;
loc_88218E64:
	// vslh v5,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v31,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// vslh v29,v12,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// vsubshs v26,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// lvx128 v48,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v47,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v24,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// vperm128 v5,v47,v48,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor v7,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vadduhm v20,v31,v12
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// vslh v22,v11,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v9,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vmrghb v12,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v19,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vsubshs v31,v6,v27
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vslh v18,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v8,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v6,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vadduhm v16,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vor v8,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vmrglb v11,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v15,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v5,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v29,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vslh v14,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v25,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v28,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v24,v29,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsubshs v23,v0,v14
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vadduhm v21,v25,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vsubshs v22,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vadduhm v20,v24,v2
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v19,v26,v23
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v17,v21,v2
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v18,v31,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v5,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v31,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsrah v16,v5,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v31,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v46,v63,v16
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// stvx128 v16,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// vor128 v63,v46,v15
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// blt cr6,0x88218e64
	if (ctx.cr6.lt) goto loc_88218E64;
loc_88218F48:
	// vand128 v13,v63,v30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vcmpgtuh. v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8821DCE0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821DCE0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821DCE0) {
			switch (rex_dispatch_address) {
				case 0x8821DCE8:
				case 0x8821E268:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821DCE0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821DCE8: goto loc_8821DCE8;
		case 0x8821E268: goto loc_8821E268;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8821DCE8;
	__savegprlr_14(ctx, base);
loc_8821DCE8:
	// stwu r1,-1024(r1)
	ctx.current_instruction = 0x8821DCE8;
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r6,1068(r1)
	ctx.current_instruction = 0x8821DCF0;
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r6.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r5,1060(r1)
	ctx.current_instruction = 0x8821DCF8;
	REX_STORE_U32(ctx.r1.u32 + 1060, ctx.r5.u32);
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r6,80(r1)
	ctx.current_instruction = 0x8821DD10;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x8821e190
	if (ctx.cr6.eq) goto loc_8821E190;
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// beq cr6,0x8821dfcc
	if (ctx.cr6.eq) goto loc_8821DFCC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8821df5c
	if (!ctx.cr6.gt) goto loc_8821DF5C;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,84(r1)
	ctx.current_instruction = 0x8821DD38;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r14,-96
	ctx.r14.s64 = -96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// li r4,-48
	ctx.r4.s64 = -48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r15,144
	ctx.r15.s64 = 144;
	// li r16,192
	ctx.r16.s64 = 192;
	// li r17,240
	ctx.r17.s64 = 240;
	// li r18,-80
	ctx.r18.s64 = -80;
	// li r19,-32
	ctx.r19.s64 = -32;
	// li r20,64
	ctx.r20.s64 = 64;
	// li r21,112
	ctx.r21.s64 = 112;
	// li r22,160
	ctx.r22.s64 = 160;
	// li r23,208
	ctx.r23.s64 = 208;
	// li r24,256
	ctx.r24.s64 = 256;
loc_8821DD84:
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v61,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwz r28,84(r1)
	ctx.current_instruction = 0x8821DDA0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r30,r7,r9
	ctx.r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// vperm128 v5,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r26,r8,r9
	ctx.r26.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvx128 v62,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r31,r9
	ctx.r27.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r29,r30,r9
	ctx.r29.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lvx128 v60,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v28,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r28,r28,r8
	ctx.r28.u64 = ctx.r28.u64 + ctx.r8.u64;
	// vmrglb v27,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r25,r29,r9
	ctx.r25.u64 = ctx.r29.u64 + ctx.r9.u64;
	// lvx128 v56,r26,r10
	ea = (ctx.r26.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r26
	temp.u32 = ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r7,r9
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r27,r10
	ea = (ctx.r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v11,v59,v55,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v57,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v9,v60,v53,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v51,r30,r9
	ea = (ctx.r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v58,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v50,r29,r9
	ea = (ctx.r29.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r29,r10
	ea = (ctx.r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v3,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v48,r25,r10
	ea = (ctx.r25.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v47,r28,r10
	ea = (ctx.r28.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r25
	temp.u32 = ctx.r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v46,v47,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v51,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v23,v3,v28
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vperm128 v6,v50,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v26,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v25,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v20,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v12,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v19,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglb v14,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v15,v20,v28
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v12,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vslh v3,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v1,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v16,r11,r14
	ea = (ctx.r11.u32 + ctx.r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v31,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v12,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v30,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v29,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v4,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v14,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v3,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// vslh v26,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v27,r11,r15
	ea = (ctx.r11.u32 + ctx.r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v22,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v26,r11,r16
	ea = (ctx.r11.u32 + ctx.r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v21,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v24,r11,r18
	ea = (ctx.r11.u32 + ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v20,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v23,r11,r19
	ea = (ctx.r11.u32 + ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r11,r17
	ea = (ctx.r11.u32 + ctx.r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v18,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v21,r11,r20
	ea = (ctx.r11.u32 + ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r11,r21
	ea = (ctx.r11.u32 + ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r11,r22
	ea = (ctx.r11.u32 + ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r11,r23
	ea = (ctx.r11.u32 + ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r11,r24
	ea = (ctx.r11.u32 + ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// bdnz 0x8821dd84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821DD84;
	// lwz r29,1068(r1)
	ctx.current_instruction = 0x8821DF54;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r6,80(r1)
	ctx.current_instruction = 0x8821DF58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8821DF5C:
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8821e250
	if (!ctx.cr6.gt) goto loc_8821E250;
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r30,r10,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// addi r9,r4,-48
	ctx.r9.s64 = ctx.r4.s64 + -48;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8821DF90:
	// lbzx r3,r30,r11
	ctx.current_instruction = 0x8821DF90;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzux r4,r8,r10
	ctx.current_instruction = 0x8821DF94;
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lbz r31,0(r11)
	ctx.current_instruction = 0x8821DF9C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r5,r31,r3
	ctx.r5.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// sth r7,48(r9)
	ctx.current_instruction = 0x8821DFBC;
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r7.u16);
	// sthu r5,96(r9)
	ctx.current_instruction = 0x8821DFC0;
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8821df90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821DF90;
	// b 0x8821e250
	goto loc_8821E250;
loc_8821DFCC:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v44,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r3,r9
	ctx.r30.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvx128 v43,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvsl v2,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v45,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v44,v38,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v40,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,192
	ctx.r28.s64 = ctx.r1.s64 + 192;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lvx128 v39,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// vperm128 v3,v42,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v35,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v40,v39,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v34,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v37,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,240
	ctx.r30.s64 = ctx.r1.s64 + 240;
	// lvx128 v62,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v33,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v32,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// lvx128 v63,r7,r9
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,288
	ctx.r27.s64 = ctx.r1.s64 + 288;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v2,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v30,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v37,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v28,v36,v62,v2
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v1,v35,v33,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vperm128 v31,v34,v32,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v29,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v7,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v27,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v9,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,336
	ctx.r31.s64 = ctx.r1.s64 + 336;
	// vmrghb v8,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,384
	ctx.r26.s64 = ctx.r1.s64 + 384;
	// vadduhm v3,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v25,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// addi r25,r1,432
	ctx.r25.s64 = ctx.r1.s64 + 432;
	// vadduhm v24,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v26,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v4,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v27,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v1,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v31,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r4,4
	ctx.r4.s64 = 4;
	// vslh v30,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v27,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r8,r1,64
	ctx.r8.s64 = ctx.r1.s64 + 64;
	// stvx128 v2,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stvx128 v31,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v27,v6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stvx128 v30,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
	// stvx128 v28,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8821E150:
	// lbzx r5,r10,r4
	ctx.current_instruction = 0x8821E150;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzux r31,r9,r11
	ctx.current_instruction = 0x8821E154;
	ea = ctx.r9.u32 + ctx.r11.u32;
	ctx.r31.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbz r3,0(r10)
	ctx.current_instruction = 0x8821E158;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// sth r3,48(r8)
	ctx.current_instruction = 0x8821E17C;
	REX_STORE_U16(ctx.r8.u32 + 48, ctx.r3.u16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthu r7,96(r8)
	ctx.current_instruction = 0x8821E184;
	ea = 96 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8821e150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821E150;
	// b 0x8821e250
	goto loc_8821E250;
loc_8821E190:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v59,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lvx128 v58,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvx128 v55,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lvx128 v54,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v59,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v53,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,240
	ctx.r31.s64 = ctx.r1.s64 + 240;
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v58,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v2,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v31,v57,v54,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vperm128 v30,v55,v53,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v29,v50,v51,v1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v28,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v12,v28
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v25,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v24,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v23,v27,v10
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v22,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8821E250:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// lwz r4,1060(r1)
	ctx.current_instruction = 0x8821E254;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lvx128 v1,r29,r11
	ea = (ctx.r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8821c030
	ctx.lr = 0x8821E268;
	sub_8821C030(ctx, base);
loc_8821E268:
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8822AA98) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8822AA98;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8822AA98) {
			switch (rex_dispatch_address) {
				case 0x8822AAA0:
				case 0x8822AB10:
				case 0x8822AC00:
				case 0x8822AC54:
				case 0x8822AD44:
				case 0x8822AD98:
				case 0x8822AE88:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8822AA98;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8822AAA0: goto loc_8822AAA0;
		case 0x8822AB10: goto loc_8822AB10;
		case 0x8822AC00: goto loc_8822AC00;
		case 0x8822AC54: goto loc_8822AC54;
		case 0x8822AD44: goto loc_8822AD44;
		case 0x8822AD98: goto loc_8822AD98;
		case 0x8822AE88: goto loc_8822AE88;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x8822AAA0;
	__savegprlr_23(ctx, base);
loc_8822AAA0:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8822AAA0;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lbz r25,668(r11)
	ctx.current_instruction = 0x8822AAB8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 668);
	// dcbzl r0,r7
	ea = (ctx.r7.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// clrlwi r27,r25,30
	ctx.r27.u64 = ctx.r25.u32 & 0x3;
	// lwz r9,24(r6)
	ctx.current_instruction = 0x8822AAC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// addi r26,r3,232
	ctx.r26.s64 = ctx.r3.s64 + 232;
	// lwz r7,0(r4)
	ctx.current_instruction = 0x8822AACC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// lwz r4,632(r3)
	ctx.current_instruction = 0x8822AAD8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// lwz r6,4(r29)
	ctx.current_instruction = 0x8822AADC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r30,40(r31)
	ctx.current_instruction = 0x8822AAE0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r8,0(r9)
	ctx.current_instruction = 0x8822AAE4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8822AAEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,24(r31)
	ctx.current_instruction = 0x8822AAF0;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (ctx.r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x8822ab18
	if (ctx.cr6.lt) goto loc_8822AB18;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x8817db68
	ctx.lr = 0x8822AB10;
	sub_8817DB68(ctx, base);
loc_8822AB10:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8822ab78
	goto loc_8822AB78;
loc_8822AB18:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8822ab74
	if (!ctx.cr6.gt) goto loc_8822AB74;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8822AB24:
	// lhz r5,0(r11)
	ctx.current_instruction = 0x8822AB24;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.current_instruction = 0x8822AB4C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r23,r26,r3
	ctx.current_instruction = 0x8822AB60;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = ctx.r23.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	ctx.current_instruction = 0x8822AB6C;
	REX_STORE_U16(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u16);
	// bdnz 0x8822ab24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822AB24;
loc_8822AB74:
	// stw r11,20(r31)
	ctx.current_instruction = 0x8822AB74;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8822AB78:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8822abe4
	if (!ctx.cr6.eq) goto loc_8822ABE4;
	// lhz r11,0(r30)
	ctx.current_instruction = 0x8822AB80;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r27,31
	ctx.r10.u64 = ctx.r27.u32 & 0x1;
	// rlwinm r9,r27,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + ctx.r24.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// std r9,48(r11)
	ctx.current_instruction = 0x8822ABD0;
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	ctx.current_instruction = 0x8822ABD4;
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	ctx.current_instruction = 0x8822ABD8;
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	ctx.current_instruction = 0x8822ABDC;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// b 0x8822ac00
	goto loc_8822AC00;
loc_8822ABE4:
	// rlwinm r10,r27,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x8;
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x88218590
	ctx.lr = 0x8822AC00;
	sub_88218590(ctx, base);
loc_8822AC00:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x8822AC00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r25,r25,30,26,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r28)
	ctx.current_instruction = 0x8822AC08;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.current_instruction = 0x8822AC14;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.current_instruction = 0x8822AC18;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r27,r25,30
	ctx.r27.u64 = ctx.r25.u32 & 0x3;
	// lwz r30,40(r31)
	ctx.current_instruction = 0x8822AC20;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,0(r11)
	ctx.current_instruction = 0x8822AC28;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8822AC2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,24(r31)
	ctx.current_instruction = 0x8822AC30;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (ctx.r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x8822ac5c
	if (ctx.cr6.lt) goto loc_8822AC5C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8817db68
	ctx.lr = 0x8822AC54;
	sub_8817DB68(ctx, base);
loc_8822AC54:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8822acbc
	goto loc_8822ACBC;
loc_8822AC5C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8822acb8
	if (!ctx.cr6.gt) goto loc_8822ACB8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8822AC68:
	// lhz r5,0(r11)
	ctx.current_instruction = 0x8822AC68;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.current_instruction = 0x8822AC90;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r23,r26,r3
	ctx.current_instruction = 0x8822ACA4;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = ctx.r23.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	ctx.current_instruction = 0x8822ACB0;
	REX_STORE_U16(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u16);
	// bdnz 0x8822ac68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822AC68;
loc_8822ACB8:
	// stw r11,20(r31)
	ctx.current_instruction = 0x8822ACB8;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8822ACBC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8822ad28
	if (!ctx.cr6.eq) goto loc_8822AD28;
	// lhz r11,0(r30)
	ctx.current_instruction = 0x8822ACC4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r27,31
	ctx.r10.u64 = ctx.r27.u32 & 0x1;
	// rlwinm r9,r27,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + ctx.r24.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// std r9,48(r11)
	ctx.current_instruction = 0x8822AD14;
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	ctx.current_instruction = 0x8822AD18;
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	ctx.current_instruction = 0x8822AD1C;
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	ctx.current_instruction = 0x8822AD20;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// b 0x8822ad44
	goto loc_8822AD44;
loc_8822AD28:
	// rlwinm r10,r27,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x8;
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x88218590
	ctx.lr = 0x8822AD44;
	sub_88218590(ctx, base);
loc_8822AD44:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x8822AD44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r25,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r28)
	ctx.current_instruction = 0x8822AD4C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.current_instruction = 0x8822AD58;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.current_instruction = 0x8822AD5C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r27,r9,30
	ctx.r27.u64 = ctx.r9.u32 & 0x3;
	// lwz r30,40(r31)
	ctx.current_instruction = 0x8822AD64;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,0(r11)
	ctx.current_instruction = 0x8822AD6C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8822AD70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,24(r31)
	ctx.current_instruction = 0x8822AD74;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (ctx.r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x8822ada0
	if (ctx.cr6.lt) goto loc_8822ADA0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8817db68
	ctx.lr = 0x8822AD98;
	sub_8817DB68(ctx, base);
loc_8822AD98:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8822ae00
	goto loc_8822AE00;
loc_8822ADA0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8822adfc
	if (!ctx.cr6.gt) goto loc_8822ADFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8822ADAC:
	// lhz r5,0(r11)
	ctx.current_instruction = 0x8822ADAC;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.current_instruction = 0x8822ADD4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r29,r26,r3
	ctx.current_instruction = 0x8822ADE8;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	ctx.current_instruction = 0x8822ADF4;
	REX_STORE_U16(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u16);
	// bdnz 0x8822adac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822ADAC;
loc_8822ADFC:
	// stw r11,20(r31)
	ctx.current_instruction = 0x8822ADFC;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8822AE00:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r27,31
	ctx.r10.u64 = ctx.r27.u32 & 0x1;
	// bne cr6,0x8822ae70
	if (!ctx.cr6.eq) goto loc_8822AE70;
	// lhz r11,0(r30)
	ctx.current_instruction = 0x8822AE0C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r9,r27,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// srawi r10,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r5,r6,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rldicr r3,r4,32,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000;
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// std r10,48(r11)
	ctx.current_instruction = 0x8822AE58;
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// std r10,32(r11)
	ctx.current_instruction = 0x8822AE5C;
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// std r10,16(r11)
	ctx.current_instruction = 0x8822AE60;
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// std r10,0(r11)
	ctx.current_instruction = 0x8822AE64;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_8822AE70:
	// rlwinm r11,r27,2,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x88218590
	ctx.lr = 0x8822AE88;
	sub_88218590(ctx, base);
loc_8822AE88:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

