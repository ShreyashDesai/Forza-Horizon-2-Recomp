#include "forzahorizon2_funcs.17.h"

DEFINE_REX_FUNC(sub_88050190) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050190);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050190;
	ctx.current_instruction = 0x88050190;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,80(r11)
	ctx.current_instruction = 0x88050198;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__savegprlr_26) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050840);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050840;
	ctx.current_instruction = 0x88050840;
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

DEFINE_REX_FUNC(sub_88050F04) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88050F04;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88050F04) {
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
	ctx.current_function = 0x88050F04;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88050F2C: goto loc_88050F2C;
		default: break;
	}
	// std r31,-8(r1)
	ctx.current_instruction = 0x88050F04;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r24,-16(r1)
	ctx.current_instruction = 0x88050F0C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r24.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	ctx.current_instruction = 0x88050F14;
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88050F18;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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

DEFINE_REX_FUNC(sub_880528A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880528A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880528A0) {
			switch (rex_dispatch_address) {
				case 0x880528C4:
				case 0x880528D0:
				case 0x880528EC:
				case 0x880528F8:
				case 0x88052934:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880528A0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880528C4: goto loc_880528C4;
		case 0x880528D0: goto loc_880528D0;
		case 0x880528EC: goto loc_880528EC;
		case 0x880528F8: goto loc_880528F8;
		case 0x88052934: goto loc_88052934;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880528A4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880528A8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880528AC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880528c0
	if (ctx.cr6.eq) goto loc_880528C0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x880528d8
	if (!ctx.cr6.eq) goto loc_880528D8;
loc_880528C0:
	// bl 0x880529c8
	ctx.lr = 0x880528C4;
	sub_880529C8(ctx, base);
loc_880528C4:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	ctx.current_instruction = 0x880528C8;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880523e8
	ctx.lr = 0x880528D0;
	sub_880523E8(ctx, base);
loc_880528D0:
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x88052940
	goto loc_88052940;
loc_880528D8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x88052900
	if (!ctx.cr6.eq) goto loc_88052900;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	ctx.current_instruction = 0x880528E4;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x880529c8
	ctx.lr = 0x880528EC;
	sub_880529C8(ctx, base);
loc_880528EC:
	// li r31,22
	ctx.r31.s64 = 22;
loc_880528F0:
	// stw r31,0(r3)
	ctx.current_instruction = 0x880528F0;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x880523e8
	ctx.lr = 0x880528F8;
	sub_880523E8(ctx, base);
loc_880528F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x88052940
	goto loc_88052940;
loc_88052900:
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
loc_88052904:
	// lbz r10,0(r5)
	ctx.current_instruction = 0x88052904;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r5
	ctx.current_instruction = 0x8805290C;
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// beq 0x88052920
	if (ctx.cr0.eq) goto loc_88052920;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x88052904
	if (!ctx.cr0.eq) goto loc_88052904;
loc_88052920:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8805293c
	if (!ctx.cr6.eq) goto loc_8805293C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	ctx.current_instruction = 0x8805292C;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x880529c8
	ctx.lr = 0x88052934;
	sub_880529C8(ctx, base);
loc_88052934:
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x880528f0
	goto loc_880528F0;
loc_8805293C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_88052940:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88052944;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805294C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88057A40) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88057A40);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88057A40;
	ctx.current_instruction = 0x88057A40;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r11,6808
	ctx.r10.s64 = ctx.r11.s64 + 6808;
	// stw r10,0(r3)
	ctx.current_instruction = 0x88057A48;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x88062228
	sub_88062228(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88057B68) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88057B68;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88057B68) {
			switch (rex_dispatch_address) {
				case 0x88057B94:
				case 0x88057BB0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88057B68;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88057B94: goto loc_88057B94;
		case 0x88057BB0: goto loc_88057BB0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88057B6C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88057B70;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88057B74;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88057B78;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,6808
	ctx.r10.s64 = ctx.r11.s64 + 6808;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	ctx.current_instruction = 0x88057B8C;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x88062228
	ctx.lr = 0x88057B94;
	sub_88062228(ctx, base);
loc_88057B94:
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88057bb4
	if (ctx.cr6.eq) goto loc_88057BB4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32772
	ctx.r4.u64 = ctx.r4.u64 | 32772;
	// bl 0x88050358
	ctx.lr = 0x88057BB0;
	sub_88050358(ctx, base);
loc_88057BB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_88057BB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88057BB8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88057BC0;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88057BC4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88059310) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88059310;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88059310) {
			switch (rex_dispatch_address) {
				case 0x88059340:
				case 0x88059354:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88059310;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88059340: goto loc_88059340;
		case 0x88059354: goto loc_88059354;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88059314;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88059318;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805931C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88059320;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.current_instruction = 0x88059324;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88059334;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88059340;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88059340:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x88059340;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,80(r9)
	ctx.current_instruction = 0x88059348;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88059354;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88059354:
	// stw r30,48(r31)
	ctx.current_instruction = 0x88059354;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88059360;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88059368;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805936C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805A970) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805A970;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805A970) {
			switch (rex_dispatch_address) {
				case 0x8805A978:
				case 0x8805A9B0:
				case 0x8805A9BC:
				case 0x8805AA44:
				case 0x8805AA5C:
				case 0x8805AA88:
				case 0x8805AAA8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805A970;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805A978: goto loc_8805A978;
		case 0x8805A9B0: goto loc_8805A9B0;
		case 0x8805A9BC: goto loc_8805A9BC;
		case 0x8805AA44: goto loc_8805AA44;
		case 0x8805AA5C: goto loc_8805AA5C;
		case 0x8805AA88: goto loc_8805AA88;
		case 0x8805AAA8: goto loc_8805AAA8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x8805A978;
	__savegprlr_16(ctx, base);
loc_8805A978:
	// stfd f30,-152(r1)
	ctx.current_instruction = 0x8805A978;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.f30.u64);
	// stfd f31,-144(r1)
	ctx.current_instruction = 0x8805A97C;
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// addi r31,r1,-288
	ctx.r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ctx.current_instruction = 0x8805A984;
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r27,124
	ctx.r30.s64 = ctx.r27.s64 + 124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88057ae0
	ctx.lr = 0x8805A9B0;
	sub_88057AE0(ctx, base);
loc_8805A9B0:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88057af0
	ctx.lr = 0x8805A9BC;
	sub_88057AF0(ctx, base);
loc_8805A9BC:
	// rlwinm r24,r3,29,3,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// bne cr6,0x8805a9d4
	if (!ctx.cr6.eq) goto loc_8805A9D4;
	// li r24,4
	ctx.r24.s64 = 4;
	// li r19,1
	ctx.r19.s64 = 1;
loc_8805A9D4:
	// lwz r11,0(r22)
	ctx.current_instruction = 0x8805A9D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// mullw r10,r24,r26
	ctx.r10.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r26.s32);
	// divwu r25,r11,r10
	ctx.r25.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// stw r25,84(r31)
	ctx.current_instruction = 0x8805A9EC;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// divwu r20,r21,r10
	ctx.r20.u64 = uint32_t(ctx.r10.u32 ? ctx.r21.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// li r18,10000
	ctx.r18.s64 = 10000;
	// subf r23,r25,r20
	ctx.r23.u64 = ctx.r20.u64 - ctx.r25.u64;
	// lfd f30,8624(r9)
	ctx.current_instruction = 0x8805AA00;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r9.u32 + 8624);
	// lfd f31,8616(r8)
	ctx.current_instruction = 0x8805AA04;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r8.u32 + 8616);
	// stw r23,80(r31)
	ctx.current_instruction = 0x8805AA08;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
loc_8805AA0C:
	// lwz r11,676(r27)
	ctx.current_instruction = 0x8805AA0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805abb0
	if (ctx.cr6.eq) goto loc_8805ABB0;
	// subf r23,r25,r20
	ctx.r23.u64 = ctx.r20.u64 - ctx.r25.u64;
	// stw r23,80(r31)
	ctx.current_instruction = 0x8805AA1C;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 16, ctx.xer);
	// blt cr6,0x8805abb0
	if (ctx.cr6.lt) goto loc_8805ABB0;
	// lwz r3,48(r27)
	ctx.current_instruction = 0x8805AA28;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r11,0(r22)
	ctx.current_instruction = 0x8805AA2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// subf r29,r11,r21
	ctx.r29.u64 = ctx.r21.u64 - ctx.r11.u64;
	// lwz r10,0(r3)
	ctx.current_instruction = 0x8805AA34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,80(r10)
	ctx.current_instruction = 0x8805AA38;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8805AA44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805AA44:
	// lwz r8,0(r27)
	ctx.current_instruction = 0x8805AA44;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r7,116(r8)
	ctx.current_instruction = 0x8805AA50;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 116);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8805AA5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805AA5C:
	// mullw r6,r25,r24
	ctx.r6.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r24.s32);
	// mullw r5,r6,r26
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r26.s32);
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lwz r3,672(r27)
	ctx.current_instruction = 0x8805AA68;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 672);
	// addi r8,r31,104
	ctx.r8.s64 = ctx.r31.s64 + 104;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880674d0
	ctx.lr = 0x8805AA88;
	sub_880674D0(ctx, base);
loc_8805AA88:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805aba4
	if (ctx.cr6.eq) goto loc_8805ABA4;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x8805AA94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,116(r11)
	ctx.current_instruction = 0x8805AA9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805AAA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805AAA8:
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x8805aac4
	if (ctx.cr6.lt) goto loc_8805AAC4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8805aac4
	if (!ctx.cr6.eq) goto loc_8805AAC4;
	// ld r11,104(r31)
	ctx.current_instruction = 0x8805AAB8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 104);
	// divd r10,r11,r18
	ctx.r10.s64 = (ctx.r18.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r18.s64 == -1)) ? ctx.r11.s64 / ctx.r18.s64 : 0;
	// std r10,0(r28)
	ctx.current_instruction = 0x8805AAC0;
	REX_STORE_U64(ctx.r28.u32 + 0, ctx.r10.u64);
loc_8805AAC4:
	// lwz r11,676(r27)
	ctx.current_instruction = 0x8805AAC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 676);
	// add r25,r25,r29
	ctx.r25.u64 = ctx.r25.u64 + ctx.r29.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r29.u64;
	// stw r25,84(r31)
	ctx.current_instruction = 0x8805AAD4;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// stw r10,676(r27)
	ctx.current_instruction = 0x8805AAD8;
	REX_STORE_U32(ctx.r27.u32 + 676, ctx.r10.u32);
	// beq cr6,0x8805ab90
	if (ctx.cr6.eq) goto loc_8805AB90;
	// mullw r11,r26,r29
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r10,r9,-3
	ctx.r10.s64 = ctx.r9.s64 + -3;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,92(r31)
	ctx.current_instruction = 0x8805AB04;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// stw r10,88(r31)
	ctx.current_instruction = 0x8805AB08;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
loc_8805AB0C:
	// stw r7,96(r31)
	ctx.current_instruction = 0x8805AB0C;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8805ab90
	if (!ctx.cr6.lt) goto loc_8805AB90;
	// lbz r9,0(r10)
	ctx.current_instruction = 0x8805AB18;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,1(r10)
	ctx.current_instruction = 0x8805AB1C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r5,r9,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r4,2(r10)
	ctx.current_instruction = 0x8805AB24;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwinm r6,r9,0,8,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8805ab58
	if (ctx.cr6.eq) goto loc_8805AB58;
	// clrlwi r9,r9,9
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFF;
	// std r9,112(r31)
	ctx.current_instruction = 0x8805AB44;
	REX_STORE_U64(ctx.r31.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r31)
	ctx.current_instruction = 0x8805AB48;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmsub f12,f13,f31,f30
	ctx.f12.f64 = std::fma(ctx.f13.f64, ctx.f31.f64, -ctx.f30.f64);
	// b 0x8805ab6c
	goto loc_8805AB6C;
loc_8805AB58:
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,120(r31)
	ctx.current_instruction = 0x8805AB5C;
	REX_STORE_U64(ctx.r31.u32 + 120, ctx.r9.u64);
	// lfd f0,120(r31)
	ctx.current_instruction = 0x8805AB60;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmul f12,f13,f31
	ctx.f12.f64 = ctx.f13.f64 * ctx.f31.f64;
loc_8805AB6C:
	// frsp f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,0(r8)
	ctx.current_instruction = 0x8805AB70;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// stw r10,88(r31)
	ctx.current_instruction = 0x8805AB7C;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r8,92(r31)
	ctx.current_instruction = 0x8805AB80;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x8805ab0c
	goto loc_8805AB0C;
loc_8805AB90:
	// mullw r11,r25,r24
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r24.s32);
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// stw r10,0(r22)
	ctx.current_instruction = 0x8805AB98;
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8805aa0c
	goto loc_8805AA0C;
loc_8805ABA4:
	// lis r17,-32768
	ctx.r17.s64 = -2147483648;
	// ori r17,r17,16389
	ctx.r17.u64 = ctx.r17.u64 | 16389;
	// stw r17,100(r31)
	ctx.current_instruction = 0x8805ABAC;
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r17.u32);
loc_8805ABB0:
	// li r11,16
	ctx.r11.s64 = 16;
	// subfc r10,r11,r23
	ctx.xer.ca = ctx.r23.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r23.u64 - ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r7,0(r16)
	ctx.current_instruction = 0x8805ABC0;
	REX_STORE_U32(ctx.r16.u32 + 0, ctx.r7.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8805abe0
	goto loc_8805ABE0;
loc_8805ABE0:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r31,288
	ctx.r1.s64 = ctx.r31.s64 + 288;
	// lfd f30,-152(r1)
	ctx.current_instruction = 0x8805ABE8;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.current_instruction = 0x8805ABEC;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88062268) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88062268;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88062268) {
			switch (rex_dispatch_address) {
				case 0x88062280:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88062268;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88062280: goto loc_88062280;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806226C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88062270;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88062274;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88061fb8
	ctx.lr = 0x88062280;
	sub_88061FB8(ctx, base);
loc_88062280:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,9680
	ctx.r9.s64 = ctx.r10.s64 + 9680;
	// stw r11,44(r31)
	ctx.current_instruction = 0x8806228C;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	ctx.current_instruction = 0x88062294;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,48(r31)
	ctx.current_instruction = 0x88062298;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	ctx.current_instruction = 0x8806229C;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880622A4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880622AC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88063CF8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88063CF8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88063CF8;
	ctx.current_instruction = 0x88063CF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88063d10
	if (!ctx.cr6.eq) goto loc_88063D10;
loc_88063D04:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88063D10:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88063d04
	if (ctx.cr6.eq) goto loc_88063D04;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x88063d04
	if (ctx.cr6.eq) goto loc_88063D04;
	// lwz r10,56(r4)
	ctx.current_instruction = 0x88063D20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88063d38
	if (ctx.cr6.eq) goto loc_88063D38;
	// lwz r4,60(r4)
	ctx.current_instruction = 0x88063D2C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r3,608(r6)
	ctx.current_instruction = 0x88063D30;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 608);
	// b 0x880caeb0
	sub_880CAEB0(ctx, base);
	return;
loc_88063D38:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88064ED8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88064ED8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88064ED8) {
			switch (rex_dispatch_address) {
				case 0x88064EE0:
				case 0x88064F64:
				case 0x88064F74:
				case 0x88064F90:
				case 0x88064FCC:
				case 0x88064FD0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88064ED8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88064EE0: goto loc_88064EE0;
		case 0x88064F64: goto loc_88064F64;
		case 0x88064F74: goto loc_88064F74;
		case 0x88064F90: goto loc_88064F90;
		case 0x88064FCC: goto loc_88064FCC;
		case 0x88064FD0: goto loc_88064FD0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88064EE0;
	__savegprlr_25(ctx, base);
loc_88064EE0:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88064EE0;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,88(r1)
	ctx.current_instruction = 0x88064EF0;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stb r11,80(r1)
	ctx.current_instruction = 0x88064EF8;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x88064F00;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88064fd8
	if (ctx.cr6.eq) goto loc_88064FD8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88064fd8
	if (ctx.cr6.eq) goto loc_88064FD8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x88064fd8
	if (ctx.cr6.eq) goto loc_88064FD8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88064fd8
	if (ctx.cr6.eq) goto loc_88064FD8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x88064fd8
	if (ctx.cr6.eq) goto loc_88064FD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r8)
	ctx.current_instruction = 0x88064F3C;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r10,528(r3)
	ctx.current_instruction = 0x88064F40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88064fd8
	if (ctx.cr6.eq) goto loc_88064FD8;
	// lwz r3,536(r3)
	ctx.current_instruction = 0x88064F4C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88064f6c
	if (!ctx.cr6.eq) goto loc_88064F6C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,168
	ctx.r3.u64 = ctx.r3.u64 | 168;
	// bl 0x880638b8
	ctx.lr = 0x88064F64;
	sub_880638B8(ctx, base);
loc_88064F64:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88064F6C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x880cc2c0
	ctx.lr = 0x88064F74;
	sub_880CC2C0(ctx, base);
loc_88064F74:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064fcc
	if (ctx.cr6.lt) goto loc_88064FCC;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88064F7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r4,80(r1)
	ctx.current_instruction = 0x88064F84;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,124(r11)
	ctx.current_instruction = 0x88064F88;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb730
	ctx.lr = 0x88064F90;
	sub_880CB730(ctx, base);
loc_88064F90:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064fcc
	if (ctx.cr6.lt) goto loc_88064FCC;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88064F98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88064F9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88064fd8
	if (!ctx.cr6.eq) goto loc_88064FD8;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88062ec8
	ctx.lr = 0x88064FCC;
	sub_88062EC8(ctx, base);
loc_88064FCC:
	// bl 0x880638b8
	ctx.lr = 0x88064FD0;
	sub_880638B8(ctx, base);
loc_88064FD0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88064FD8:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880676F8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880676F8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880676F8;
	ctx.current_instruction = 0x880676F8;
	// lwz r3,444(r3)
	ctx.current_instruction = 0x880676F8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880677A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880677A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880677A8) {
			switch (rex_dispatch_address) {
				case 0x880677D4:
				case 0x880677F0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880677A8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880677D4: goto loc_880677D4;
		case 0x880677F0: goto loc_880677F0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880677AC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880677B0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880677B4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880677B8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,10640
	ctx.r10.s64 = ctx.r11.s64 + 10640;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	ctx.current_instruction = 0x880677CC;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x880cd4f8
	ctx.lr = 0x880677D4;
	sub_880CD4F8(ctx, base);
loc_880677D4:
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880677f4
	if (ctx.cr6.eq) goto loc_880677F4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32823
	ctx.r4.u64 = ctx.r4.u64 | 32823;
	// bl 0x88050358
	ctx.lr = 0x880677F0;
	sub_88050358(ctx, base);
loc_880677F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_880677F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880677F8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88067800;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88067804;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88068130) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88068130);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88068130;
	ctx.current_instruction = 0x88068130;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88068130;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,56(r11)
	ctx.current_instruction = 0x88068138;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88068298) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88068298;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88068298) {
			switch (rex_dispatch_address) {
				case 0x880682C0:
				case 0x880682D4:
				case 0x880682F0:
				case 0x88068310:
				case 0x88068328:
				case 0x8806834C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88068298;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880682C0: goto loc_880682C0;
		case 0x880682D4: goto loc_880682D4;
		case 0x880682F0: goto loc_880682F0;
		case 0x88068310: goto loc_88068310;
		case 0x88068328: goto loc_88068328;
		case 0x8806834C: goto loc_8806834C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806829C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880682A0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880682A4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880682A8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880682AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x880682B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880682C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880682C0:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x880682C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,244(r9)
	ctx.current_instruction = 0x880682C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 244);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x880682D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880682D4:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x88068330
	if (!ctx.cr6.eq) goto loc_88068330;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880682DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,248(r11)
	ctx.current_instruction = 0x880682E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880682F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880682F0:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x88068330
	if (!ctx.cr6.eq) goto loc_88068330;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880682F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,276(r11)
	ctx.current_instruction = 0x88068304;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068310;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068310:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x88068310;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,280(r9)
	ctx.current_instruction = 0x8806831C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 280);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88068328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068328:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x88068338
	goto loc_88068338;
loc_88068330:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_88068338:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88068338;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88068340;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806834C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806834C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88068354;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8806835C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88068360;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806C090) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806C090);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806C090;
	ctx.current_instruction = 0x8806C090;
	// lwz r3,92(r3)
	ctx.current_instruction = 0x8806C090;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806C0C0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806C0C0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806C0C0;
	ctx.current_instruction = 0x8806C0C0;
	// ld r3,64(r3)
	ctx.current_instruction = 0x8806C0C0;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806C478) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806C478);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806C478;
	ctx.current_instruction = 0x8806C478;
	// lwz r11,8176(r3)
	ctx.current_instruction = 0x8806C478;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8176);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,1624(r3)
	ctx.current_instruction = 0x8806C484;
	REX_STORE_U32(ctx.r3.u32 + 1624, ctx.r10.u32);
	// beq cr6,0x8806c4b8
	if (ctx.cr6.eq) goto loc_8806C4B8;
	// lwz r11,8180(r3)
	ctx.current_instruction = 0x8806C48C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8180);
	// lwz r9,180(r11)
	ctx.current_instruction = 0x8806C490;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8806c4b8
	if (ctx.cr6.eq) goto loc_8806C4B8;
	// lwz r11,72(r11)
	ctx.current_instruction = 0x8806C49C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// stw r11,1624(r3)
	ctx.current_instruction = 0x8806C4B0;
	REX_STORE_U32(ctx.r3.u32 + 1624, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8806C4B8:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18412(r11)
	ctx.current_instruction = 0x8806C4BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806c4d8
	if (!ctx.cr6.eq) goto loc_8806C4D8;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18416(r11)
	ctx.current_instruction = 0x8806C4CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806c4dc
	if (ctx.cr6.eq) goto loc_8806C4DC;
loc_8806C4D8:
	// stw r10,1624(r3)
	ctx.current_instruction = 0x8806C4D8;
	REX_STORE_U32(ctx.r3.u32 + 1624, ctx.r10.u32);
loc_8806C4DC:
	// lwz r11,6772(r3)
	ctx.current_instruction = 0x8806C4DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6772);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806c4f8
	if (ctx.cr6.eq) goto loc_8806C4F8;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8806C4E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8806c4f8
	if (!ctx.cr6.eq) goto loc_8806C4F8;
	// stw r10,1624(r3)
	ctx.current_instruction = 0x8806C4F4;
	REX_STORE_U32(ctx.r3.u32 + 1624, ctx.r10.u32);
loc_8806C4F8:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18408(r11)
	ctx.current_instruction = 0x8806C4FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// stw r10,1624(r3)
	ctx.current_instruction = 0x8806C508;
	REX_STORE_U32(ctx.r3.u32 + 1624, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806E450) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806E450);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806E450;
	ctx.current_instruction = 0x8806E450;
	// lwz r11,8236(r3)
	ctx.current_instruction = 0x8806E450;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806e484
	if (ctx.cr6.eq) goto loc_8806E484;
	// lwz r11,30408(r3)
	ctx.current_instruction = 0x8806E45C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30408);
	// lwz r3,7868(r3)
	ctx.current_instruction = 0x8806E460;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806e478
	if (ctx.cr6.eq) goto loc_8806E478;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x880e6960
	sub_880E6960(ctx, base);
	return;
loc_8806E478:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x880e6960
	sub_880E6960(ctx, base);
	return;
loc_8806E484:
	// lwz r10,2800(r3)
	ctx.current_instruction = 0x8806E484;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8806e4a0
	if (!ctx.cr6.eq) goto loc_8806E4A0;
	// lwz r3,7868(r3)
	ctx.current_instruction = 0x8806E490;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x880e6960
	sub_880E6960(ctx, base);
	return;
loc_8806E4A0:
	// lwz r11,30408(r3)
	ctx.current_instruction = 0x8806E4A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806e500
	if (ctx.cr6.eq) goto loc_8806E500;
	// lwz r11,30432(r3)
	ctx.current_instruction = 0x8806E4AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806e500
	if (!ctx.cr6.eq) goto loc_8806E500;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8806e530
	if (!ctx.cr6.eq) goto loc_8806E530;
	// ld r9,7728(r3)
	ctx.current_instruction = 0x8806E4C0;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 7728);
	// ld r8,30528(r3)
	ctx.current_instruction = 0x8806E4C4;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 30528);
	// ld r11,30552(r3)
	ctx.current_instruction = 0x8806E4C8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 30552);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x8806e500
	if (ctx.cr6.lt) goto loc_8806E500;
	// ld r9,7704(r3)
	ctx.current_instruction = 0x8806E4D8;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 7704);
	// sradi r8,r11,1
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s64 >> 1;
	// ld r7,7712(r3)
	ctx.current_instruction = 0x8806E4E0;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 7712);
	// subf r6,r7,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r7.u64;
	// cmpd cr6,r6,r8
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r8.s64, ctx.xer);
	// blt cr6,0x8806e500
	if (ctx.cr6.lt) goto loc_8806E500;
	// lwz r3,7868(r3)
	ctx.current_instruction = 0x8806E4F0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,61
	ctx.r4.s64 = 61;
	// b 0x880e6960
	sub_880E6960(ctx, base);
	return;
loc_8806E500:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8806e530
	if (!ctx.cr6.eq) goto loc_8806E530;
	// lwz r11,30432(r3)
	ctx.current_instruction = 0x8806E508;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806e520
	if (!ctx.cr6.eq) goto loc_8806E520;
	// lwz r11,30416(r3)
	ctx.current_instruction = 0x8806E514;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806e530
	if (!ctx.cr6.eq) goto loc_8806E530;
loc_8806E520:
	// lwz r3,7868(r3)
	ctx.current_instruction = 0x8806E520;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x880e6960
	sub_880E6960(ctx, base);
	return;
loc_8806E530:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8806e548
	if (!ctx.cr6.eq) goto loc_8806E548;
	// lwz r3,7868(r3)
	ctx.current_instruction = 0x8806E538;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x880e6960
	sub_880E6960(ctx, base);
	return;
loc_8806E548:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8806e560
	if (!ctx.cr6.eq) goto loc_8806E560;
	// lwz r3,7868(r3)
	ctx.current_instruction = 0x8806E550;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x880e6960
	sub_880E6960(ctx, base);
	return;
loc_8806E560:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,30432(r3)
	ctx.current_instruction = 0x8806E568;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,30416(r3)
	ctx.current_instruction = 0x8806E574;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r3,7868(r3)
	ctx.current_instruction = 0x8806E580;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,60
	ctx.r4.s64 = 60;
	// b 0x880e6960
	sub_880E6960(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88071528) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88071528);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88071528;
	ctx.current_instruction = 0x88071528;
	// lwz r11,2824(r3)
	ctx.current_instruction = 0x88071528;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28560(r3)
	ctx.current_instruction = 0x88071538;
	REX_STORE_U32(ctx.r3.u32 + 28560, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88071AE8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88071AE8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88071AE8;
	ctx.current_instruction = 0x88071AE8;
	// addi r11,r4,4997
	ctx.r11.s64 = ctx.r4.s64 + 4997;
	// addi r10,r4,5000
	ctx.r10.s64 = ctx.r4.s64 + 5000;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r5,5003
	ctx.r7.s64 = ctx.r5.s64 + 5003;
	// addi r6,r5,5006
	ctx.r6.s64 = ctx.r5.s64 + 5006;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r3
	ctx.current_instruction = 0x88071B04;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r3
	ctx.current_instruction = 0x88071B0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwz r9,0(r4)
	ctx.current_instruction = 0x88071B10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,20088(r3)
	ctx.current_instruction = 0x88071B14;
	REX_STORE_U32(ctx.r3.u32 + 20088, ctx.r9.u32);
	// lwz r8,4(r4)
	ctx.current_instruction = 0x88071B18;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,20092(r3)
	ctx.current_instruction = 0x88071B1C;
	REX_STORE_U32(ctx.r3.u32 + 20092, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.current_instruction = 0x88071B20;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,20096(r3)
	ctx.current_instruction = 0x88071B24;
	REX_STORE_U32(ctx.r3.u32 + 20096, ctx.r7.u32);
	// lwz r6,16(r4)
	ctx.current_instruction = 0x88071B28;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// stw r6,20080(r3)
	ctx.current_instruction = 0x88071B2C;
	REX_STORE_U32(ctx.r3.u32 + 20080, ctx.r6.u32);
	// lwz r4,20(r4)
	ctx.current_instruction = 0x88071B30;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// stw r4,20084(r3)
	ctx.current_instruction = 0x88071B34;
	REX_STORE_U32(ctx.r3.u32 + 20084, ctx.r4.u32);
	// lwz r9,0(r10)
	ctx.current_instruction = 0x88071B38;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,20108(r3)
	ctx.current_instruction = 0x88071B3C;
	REX_STORE_U32(ctx.r3.u32 + 20108, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.current_instruction = 0x88071B40;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,20112(r3)
	ctx.current_instruction = 0x88071B44;
	REX_STORE_U32(ctx.r3.u32 + 20112, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.current_instruction = 0x88071B48;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,20116(r3)
	ctx.current_instruction = 0x88071B4C;
	REX_STORE_U32(ctx.r3.u32 + 20116, ctx.r7.u32);
	// lwz r6,12(r10)
	ctx.current_instruction = 0x88071B50;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,20124(r3)
	ctx.current_instruction = 0x88071B54;
	REX_STORE_U32(ctx.r3.u32 + 20124, ctx.r6.u32);
	// lwz r4,16(r10)
	ctx.current_instruction = 0x88071B58;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r4,20100(r3)
	ctx.current_instruction = 0x88071B5C;
	REX_STORE_U32(ctx.r3.u32 + 20100, ctx.r4.u32);
	// lwz r9,20(r10)
	ctx.current_instruction = 0x88071B60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// stw r9,20104(r3)
	ctx.current_instruction = 0x88071B64;
	REX_STORE_U32(ctx.r3.u32 + 20104, ctx.r9.u32);
	// lwz r8,24(r10)
	ctx.current_instruction = 0x88071B68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r8,20120(r3)
	ctx.current_instruction = 0x88071B6C;
	REX_STORE_U32(ctx.r3.u32 + 20120, ctx.r8.u32);
	// lwz r7,28(r10)
	ctx.current_instruction = 0x88071B70;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// stw r7,20128(r3)
	ctx.current_instruction = 0x88071B74;
	REX_STORE_U32(ctx.r3.u32 + 20128, ctx.r7.u32);
	// lwzx r6,r5,r3
	ctx.current_instruction = 0x88071B78;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// lwzx r5,r11,r3
	ctx.current_instruction = 0x88071B7C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r4,0(r6)
	ctx.current_instruction = 0x88071B80;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r4,20140(r3)
	ctx.current_instruction = 0x88071B84;
	REX_STORE_U32(ctx.r3.u32 + 20140, ctx.r4.u32);
	// lwz r11,4(r6)
	ctx.current_instruction = 0x88071B88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r11,20144(r3)
	ctx.current_instruction = 0x88071B8C;
	REX_STORE_U32(ctx.r3.u32 + 20144, ctx.r11.u32);
	// lwz r10,8(r6)
	ctx.current_instruction = 0x88071B90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r10,20148(r3)
	ctx.current_instruction = 0x88071B94;
	REX_STORE_U32(ctx.r3.u32 + 20148, ctx.r10.u32);
	// lwz r9,16(r6)
	ctx.current_instruction = 0x88071B98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// stw r9,20132(r3)
	ctx.current_instruction = 0x88071B9C;
	REX_STORE_U32(ctx.r3.u32 + 20132, ctx.r9.u32);
	// lwz r8,20(r6)
	ctx.current_instruction = 0x88071BA0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r8,20136(r3)
	ctx.current_instruction = 0x88071BA4;
	REX_STORE_U32(ctx.r3.u32 + 20136, ctx.r8.u32);
	// lwz r7,0(r5)
	ctx.current_instruction = 0x88071BA8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r7,20164(r3)
	ctx.current_instruction = 0x88071BAC;
	REX_STORE_U32(ctx.r3.u32 + 20164, ctx.r7.u32);
	// lwz r6,4(r5)
	ctx.current_instruction = 0x88071BB0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r6,20168(r3)
	ctx.current_instruction = 0x88071BB4;
	REX_STORE_U32(ctx.r3.u32 + 20168, ctx.r6.u32);
	// lwz r4,8(r5)
	ctx.current_instruction = 0x88071BB8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r4,20172(r3)
	ctx.current_instruction = 0x88071BBC;
	REX_STORE_U32(ctx.r3.u32 + 20172, ctx.r4.u32);
	// lwz r11,12(r5)
	ctx.current_instruction = 0x88071BC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,20176(r3)
	ctx.current_instruction = 0x88071BC4;
	REX_STORE_U32(ctx.r3.u32 + 20176, ctx.r11.u32);
	// lwz r10,16(r5)
	ctx.current_instruction = 0x88071BC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// stw r10,20152(r3)
	ctx.current_instruction = 0x88071BCC;
	REX_STORE_U32(ctx.r3.u32 + 20152, ctx.r10.u32);
	// lwz r9,20(r5)
	ctx.current_instruction = 0x88071BD0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// stw r9,20156(r3)
	ctx.current_instruction = 0x88071BD4;
	REX_STORE_U32(ctx.r3.u32 + 20156, ctx.r9.u32);
	// lwz r8,24(r5)
	ctx.current_instruction = 0x88071BD8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// stw r8,20160(r3)
	ctx.current_instruction = 0x88071BDC;
	REX_STORE_U32(ctx.r3.u32 + 20160, ctx.r8.u32);
	// lwz r7,28(r5)
	ctx.current_instruction = 0x88071BE0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// stw r7,20180(r3)
	ctx.current_instruction = 0x88071BE4;
	REX_STORE_U32(ctx.r3.u32 + 20180, ctx.r7.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8807A110) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807A110;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807A110) {
			switch (rex_dispatch_address) {
				case 0x8807A118:
				case 0x8807A178:
				case 0x8807A180:
				case 0x8807A1A0:
				case 0x8807A1A8:
				case 0x8807A1E8:
				case 0x8807A350:
				case 0x8807A370:
				case 0x8807A3CC:
				case 0x8807A400:
				case 0x8807A408:
				case 0x8807A444:
				case 0x8807A458:
				case 0x8807A550:
				case 0x8807A5F0:
				case 0x8807A634:
				case 0x8807A69C:
				case 0x8807A704:
				case 0x8807A728:
				case 0x8807A750:
				case 0x8807A788:
				case 0x8807A7F4:
				case 0x8807A820:
				case 0x8807A858:
				case 0x8807A8B4:
				case 0x8807A8E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807A110;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807A118: goto loc_8807A118;
		case 0x8807A178: goto loc_8807A178;
		case 0x8807A180: goto loc_8807A180;
		case 0x8807A1A0: goto loc_8807A1A0;
		case 0x8807A1A8: goto loc_8807A1A8;
		case 0x8807A1E8: goto loc_8807A1E8;
		case 0x8807A350: goto loc_8807A350;
		case 0x8807A370: goto loc_8807A370;
		case 0x8807A3CC: goto loc_8807A3CC;
		case 0x8807A400: goto loc_8807A400;
		case 0x8807A408: goto loc_8807A408;
		case 0x8807A444: goto loc_8807A444;
		case 0x8807A458: goto loc_8807A458;
		case 0x8807A550: goto loc_8807A550;
		case 0x8807A5F0: goto loc_8807A5F0;
		case 0x8807A634: goto loc_8807A634;
		case 0x8807A69C: goto loc_8807A69C;
		case 0x8807A704: goto loc_8807A704;
		case 0x8807A728: goto loc_8807A728;
		case 0x8807A750: goto loc_8807A750;
		case 0x8807A788: goto loc_8807A788;
		case 0x8807A7F4: goto loc_8807A7F4;
		case 0x8807A820: goto loc_8807A820;
		case 0x8807A858: goto loc_8807A858;
		case 0x8807A8B4: goto loc_8807A8B4;
		case 0x8807A8E0: goto loc_8807A8E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x8807A118;
	__savegprlr_20(ctx, base);
loc_8807A118:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x8807A118;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,19112(r3)
	ctx.current_instruction = 0x8807A11C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 19112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8807a150
	if (!ctx.cr6.eq) goto loc_8807A150;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8807a164
	if (!ctx.cr6.eq) goto loc_8807A164;
loc_8807A150:
	// lwz r11,19196(r31)
	ctx.current_instruction = 0x8807A150;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8807a178
	if (!ctx.cr6.eq) goto loc_8807A178;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8807a178
	if (ctx.cr6.eq) goto loc_8807A178;
loc_8807A164:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c0548
	ctx.lr = 0x8807A178;
	sub_880C0548(ctx, base);
loc_8807A178:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8807A178;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6900
	ctx.lr = 0x8807A180;
	sub_880E6900(ctx, base);
loc_8807A180:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x8807A180;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8807A18C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x880e68e0
	ctx.lr = 0x8807A1A0;
	sub_880E68E0(ctx, base);
loc_8807A1A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880780a0
	ctx.lr = 0x8807A1A8;
	sub_880780A0(ctx, base);
loc_8807A1A8:
	// lwz r9,316(r1)
	ctx.current_instruction = 0x8807A1A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r11,20272(r31)
	ctx.current_instruction = 0x8807A1AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20272);
	// lwz r10,324(r1)
	ctx.current_instruction = 0x8807A1B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r9,27968(r31)
	ctx.current_instruction = 0x8807A1B8;
	REX_STORE_U32(ctx.r31.u32 + 27968, ctx.r9.u32);
	// bne cr6,0x8807a1c4
	if (!ctx.cr6.eq) goto loc_8807A1C4;
	// lwz r10,20284(r31)
	ctx.current_instruction = 0x8807A1C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20284);
loc_8807A1C4:
	// stw r10,28496(r31)
	ctx.current_instruction = 0x8807A1C4;
	REX_STORE_U32(ctx.r31.u32 + 28496, ctx.r10.u32);
	// lwz r10,332(r1)
	ctx.current_instruction = 0x8807A1C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r9,6772(r31)
	ctx.current_instruction = 0x8807A1CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6772);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,28500(r31)
	ctx.current_instruction = 0x8807A1D4;
	REX_STORE_U32(ctx.r31.u32 + 28500, ctx.r10.u32);
	// beq cr6,0x8807a1f0
	if (ctx.cr6.eq) goto loc_8807A1F0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8807a1f0
	if (ctx.cr6.eq) goto loc_8807A1F0;
	// bl 0x881ee8e8
	ctx.lr = 0x8807A1E8;
	sub_881EE8E8(ctx, base);
loc_8807A1E8:
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// stw r11,28496(r31)
	ctx.current_instruction = 0x8807A1EC;
	REX_STORE_U32(ctx.r31.u32 + 28496, ctx.r11.u32);
loc_8807A1F0:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807A1F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8807a254
	if (!ctx.cr6.eq) goto loc_8807A254;
	// lwz r11,1660(r31)
	ctx.current_instruction = 0x8807A204;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a254
	if (ctx.cr6.eq) goto loc_8807A254;
	// lwz r11,1636(r31)
	ctx.current_instruction = 0x8807A210;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1636);
	// lwz r9,1632(r31)
	ctx.current_instruction = 0x8807A214;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1632);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r8,r11,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// andc r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf. r5,r7,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bne 0x8807a248
	if (!ctx.cr0.eq) goto loc_8807A248;
	// stw r25,1656(r31)
	ctx.current_instruction = 0x8807A23C;
	REX_STORE_U32(ctx.r31.u32 + 1656, ctx.r25.u32);
	// stw r26,1636(r31)
	ctx.current_instruction = 0x8807A240;
	REX_STORE_U32(ctx.r31.u32 + 1636, ctx.r26.u32);
	// b 0x8807a254
	goto loc_8807A254;
loc_8807A248:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r26,1656(r31)
	ctx.current_instruction = 0x8807A24C;
	REX_STORE_U32(ctx.r31.u32 + 1656, ctx.r26.u32);
	// stw r11,1636(r31)
	ctx.current_instruction = 0x8807A250;
	REX_STORE_U32(ctx.r31.u32 + 1636, ctx.r11.u32);
loc_8807A254:
	// lwz r11,31108(r31)
	ctx.current_instruction = 0x8807A254;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a264
	if (ctx.cr6.eq) goto loc_8807A264;
	// stw r25,31116(r31)
	ctx.current_instruction = 0x8807A260;
	REX_STORE_U32(ctx.r31.u32 + 31116, ctx.r25.u32);
loc_8807A264:
	// lwz r11,28560(r31)
	ctx.current_instruction = 0x8807A264;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a2ac
	if (ctx.cr6.eq) goto loc_8807A2AC;
	// lwz r11,1432(r31)
	ctx.current_instruction = 0x8807A270;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a2a0
	if (ctx.cr6.eq) goto loc_8807A2A0;
	// lwz r11,1428(r31)
	ctx.current_instruction = 0x8807A27C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r11,r11,4400
	ctx.r11.s64 = ctx.r11.s64 + 4400;
	// beq cr6,0x8807a298
	if (ctx.cr6.eq) goto loc_8807A298;
	// addi r10,r11,-496
	ctx.r10.s64 = ctx.r11.s64 + -496;
	// b 0x8807a2a8
	goto loc_8807A2A8;
loc_8807A298:
	// addi r10,r11,-248
	ctx.r10.s64 = ctx.r11.s64 + -248;
	// b 0x8807a2a8
	goto loc_8807A2A8;
loc_8807A2A0:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r10,r11,4400
	ctx.r10.s64 = ctx.r11.s64 + 4400;
loc_8807A2A8:
	// stw r10,30204(r31)
	ctx.current_instruction = 0x8807A2A8;
	REX_STORE_U32(ctx.r31.u32 + 30204, ctx.r10.u32);
loc_8807A2AC:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x8807A2AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8807a400
	if (!ctx.cr6.eq) goto loc_8807A400;
	// lwz r10,20276(r31)
	ctx.current_instruction = 0x8807A2B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20276);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8807a2d0
	if (ctx.cr6.eq) goto loc_8807A2D0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// b 0x8807a2d4
	goto loc_8807A2D4;
loc_8807A2D0:
	// lwz r11,308(r1)
	ctx.current_instruction = 0x8807A2D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_8807A2D4:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r22,27988(r31)
	ctx.current_instruction = 0x8807A2D8;
	REX_STORE_U32(ctx.r31.u32 + 27988, ctx.r22.u32);
	// beq cr6,0x8807a398
	if (ctx.cr6.eq) goto loc_8807A398;
	// stw r11,31544(r31)
	ctx.current_instruction = 0x8807A2E0;
	REX_STORE_U32(ctx.r31.u32 + 31544, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a380
	if (ctx.cr6.eq) goto loc_8807A380;
	// lwz r9,7064(r31)
	ctx.current_instruction = 0x8807A2EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7064);
	// lwz r11,31076(r31)
	ctx.current_instruction = 0x8807A2F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31076);
	// stw r26,20268(r31)
	ctx.current_instruction = 0x8807A2F4;
	REX_STORE_U32(ctx.r31.u32 + 20268, ctx.r26.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r9,7056(r31)
	ctx.current_instruction = 0x8807A2FC;
	REX_STORE_U32(ctx.r31.u32 + 7056, ctx.r9.u32);
	// beq cr6,0x8807a340
	if (ctx.cr6.eq) goto loc_8807A340;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807a314
	if (!ctx.cr6.eq) goto loc_8807A314;
	// stw r26,28012(r31)
	ctx.current_instruction = 0x8807A30C;
	REX_STORE_U32(ctx.r31.u32 + 28012, ctx.r26.u32);
	// b 0x8807a340
	goto loc_8807A340;
loc_8807A314:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r25,28012(r31)
	ctx.current_instruction = 0x8807A318;
	REX_STORE_U32(ctx.r31.u32 + 28012, ctx.r25.u32);
	// beq cr6,0x8807a33c
	if (ctx.cr6.eq) goto loc_8807A33C;
	// ld r11,736(r31)
	ctx.current_instruction = 0x8807A320;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x8807a33c
	if (!ctx.cr6.gt) goto loc_8807A33C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8807a33c
	if (!ctx.cr6.eq) goto loc_8807A33C;
	// stw r25,28000(r31)
	ctx.current_instruction = 0x8807A334;
	REX_STORE_U32(ctx.r31.u32 + 28000, ctx.r25.u32);
	// b 0x8807a340
	goto loc_8807A340;
loc_8807A33C:
	// stw r26,28000(r31)
	ctx.current_instruction = 0x8807A33C;
	REX_STORE_U32(ctx.r31.u32 + 28000, ctx.r26.u32);
loc_8807A340:
	// lwz r11,6772(r31)
	ctx.current_instruction = 0x8807A340;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6772);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a390
	if (ctx.cr6.eq) goto loc_8807A390;
	// bl 0x881ee8e8
	ctx.lr = 0x8807A350;
	sub_881EE8E8(ctx, base);
loc_8807A350:
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// stw r11,28012(r31)
	ctx.current_instruction = 0x8807A354;
	REX_STORE_U32(ctx.r31.u32 + 28012, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807a390
	if (!ctx.cr6.eq) goto loc_8807A390;
	// ld r11,736(r31)
	ctx.current_instruction = 0x8807A360;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x8807a390
	if (!ctx.cr6.gt) goto loc_8807A390;
	// bl 0x881ee8e8
	ctx.lr = 0x8807A370;
	sub_881EE8E8(ctx, base);
loc_8807A370:
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// stw r25,21100(r31)
	ctx.current_instruction = 0x8807A374;
	REX_STORE_U32(ctx.r31.u32 + 21100, ctx.r25.u32);
	// stw r11,28000(r31)
	ctx.current_instruction = 0x8807A378;
	REX_STORE_U32(ctx.r31.u32 + 28000, ctx.r11.u32);
	// b 0x8807a3b0
	goto loc_8807A3B0;
loc_8807A380:
	// lwz r11,7068(r31)
	ctx.current_instruction = 0x8807A380;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7068);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,20268(r31)
	ctx.current_instruction = 0x8807A388;
	REX_STORE_U32(ctx.r31.u32 + 20268, ctx.r10.u32);
	// stw r11,7056(r31)
	ctx.current_instruction = 0x8807A38C;
	REX_STORE_U32(ctx.r31.u32 + 7056, ctx.r11.u32);
loc_8807A390:
	// stw r25,21100(r31)
	ctx.current_instruction = 0x8807A390;
	REX_STORE_U32(ctx.r31.u32 + 21100, ctx.r25.u32);
	// b 0x8807a3b0
	goto loc_8807A3B0;
loc_8807A398:
	// lwz r11,7060(r31)
	ctx.current_instruction = 0x8807A398;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7060);
	// stw r25,20268(r31)
	ctx.current_instruction = 0x8807A39C;
	REX_STORE_U32(ctx.r31.u32 + 20268, ctx.r25.u32);
	// stw r25,31544(r31)
	ctx.current_instruction = 0x8807A3A0;
	REX_STORE_U32(ctx.r31.u32 + 31544, ctx.r25.u32);
	// stw r25,28136(r31)
	ctx.current_instruction = 0x8807A3A4;
	REX_STORE_U32(ctx.r31.u32 + 28136, ctx.r25.u32);
	// stw r25,28132(r31)
	ctx.current_instruction = 0x8807A3A8;
	REX_STORE_U32(ctx.r31.u32 + 28132, ctx.r25.u32);
	// stw r11,7056(r31)
	ctx.current_instruction = 0x8807A3AC;
	REX_STORE_U32(ctx.r31.u32 + 7056, ctx.r11.u32);
loc_8807A3B0:
	// lwz r11,2568(r31)
	ctx.current_instruction = 0x8807A3B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a3ec
	if (ctx.cr6.eq) goto loc_8807A3EC;
	// lwz r11,6772(r31)
	ctx.current_instruction = 0x8807A3BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6772);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a3d4
	if (ctx.cr6.eq) goto loc_8807A3D4;
	// bl 0x881ee8e8
	ctx.lr = 0x8807A3CC;
	sub_881EE8E8(ctx, base);
loc_8807A3CC:
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// stw r11,2576(r31)
	ctx.current_instruction = 0x8807A3D0;
	REX_STORE_U32(ctx.r31.u32 + 2576, ctx.r11.u32);
loc_8807A3D4:
	// lwz r11,2576(r31)
	ctx.current_instruction = 0x8807A3D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2576);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// stw r9,2580(r31)
	ctx.current_instruction = 0x8807A3E4;
	REX_STORE_U32(ctx.r31.u32 + 2580, ctx.r9.u32);
	// stw r8,2584(r31)
	ctx.current_instruction = 0x8807A3E8;
	REX_STORE_U32(ctx.r31.u32 + 2584, ctx.r8.u32);
loc_8807A3EC:
	// lwz r11,27988(r31)
	ctx.current_instruction = 0x8807A3EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x8806efc0
	ctx.lr = 0x8807A400;
	sub_8806EFC0(ctx, base);
loc_8807A400:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88078168
	ctx.lr = 0x8807A408;
	sub_88078168(ctx, base);
loc_8807A408:
	// lwz r11,1608(r31)
	ctx.current_instruction = 0x8807A408;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a420
	if (ctx.cr6.eq) goto loc_8807A420;
	// lwz r11,8224(r31)
	ctx.current_instruction = 0x8807A414;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8224);
	// lwz r10,8220(r31)
	ctx.current_instruction = 0x8807A418;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8220);
	// b 0x8807a428
	goto loc_8807A428;
loc_8807A420:
	// lwz r11,8232(r31)
	ctx.current_instruction = 0x8807A420;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r10,8228(r31)
	ctx.current_instruction = 0x8807A424;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8228);
loc_8807A428:
	// stw r11,8216(r31)
	ctx.current_instruction = 0x8807A428;
	REX_STORE_U32(ctx.r31.u32 + 8216, ctx.r11.u32);
	// lwz r11,2424(r31)
	ctx.current_instruction = 0x8807A42C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2424);
	// stw r10,8212(r31)
	ctx.current_instruction = 0x8807A430;
	REX_STORE_U32(ctx.r31.u32 + 8212, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807a444
	if (!ctx.cr6.eq) goto loc_8807A444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806ff40
	ctx.lr = 0x8807A444;
	sub_8806FF40(ctx, base);
loc_8807A444:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x8807A444;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8807a458
	if (!ctx.cr6.eq) goto loc_8807A458;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806f7a8
	ctx.lr = 0x8807A458;
	sub_8806F7A8(ctx, base);
loc_8807A458:
	// lwz r11,19216(r31)
	ctx.current_instruction = 0x8807A458;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a494
	if (ctx.cr6.eq) goto loc_8807A494;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807A464;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807a6a0
	if (!ctx.cr6.eq) goto loc_8807A6A0;
	// lwz r11,30408(r31)
	ctx.current_instruction = 0x8807A470;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a6a0
	if (ctx.cr6.eq) goto loc_8807A6A0;
	// lwz r11,30628(r31)
	ctx.current_instruction = 0x8807A47C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a6a0
	if (ctx.cr6.eq) goto loc_8807A6A0;
	// lwz r11,30696(r31)
	ctx.current_instruction = 0x8807A488;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a6a0
	if (ctx.cr6.eq) goto loc_8807A6A0;
loc_8807A494:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8807a4c8
	if (ctx.cr6.eq) goto loc_8807A4C8;
	// lwz r11,8(r24)
	ctx.current_instruction = 0x8807A49C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r10,0(r24)
	ctx.current_instruction = 0x8807A4A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8807a4bc
	if (!ctx.cr0.gt) goto loc_8807A4BC;
	// lwz r11,12(r24)
	ctx.current_instruction = 0x8807A4AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r10,4(r24)
	ctx.current_instruction = 0x8807A4B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x8807a4c8
	if (ctx.cr0.gt) goto loc_8807A4C8;
loc_8807A4BC:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_8807A4C8:
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// lwz r10,16(r27)
	ctx.current_instruction = 0x8807A4CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// ori r9,r11,22857
	ctx.r9.u64 = ctx.r11.u64 | 22857;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8807a684
	if (ctx.cr6.eq) goto loc_8807A684;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r11,r11,13385
	ctx.r11.u64 = ctx.r11.u64 | 13385;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8807a684
	if (ctx.cr6.eq) goto loc_8807A684;
	// li r10,40
	ctx.r10.s64 = 40;
	// lwz r3,20204(r31)
	ctx.current_instruction = 0x8807A4F0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20204);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r26,112(r1)
	ctx.current_instruction = 0x8807A4F8;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r10,8132(r31)
	ctx.current_instruction = 0x8807A4FC;
	REX_STORE_U32(ctx.r31.u32 + 8132, ctx.r10.u32);
	// addi r28,r31,8132
	ctx.r28.s64 = ctx.r31.s64 + 8132;
	// lwz r8,4(r27)
	ctx.current_instruction = 0x8807A504;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r8,8136(r31)
	ctx.current_instruction = 0x8807A50C;
	REX_STORE_U32(ctx.r31.u32 + 8136, ctx.r8.u32);
	// lwz r7,8(r27)
	ctx.current_instruction = 0x8807A510;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// stw r11,8148(r31)
	ctx.current_instruction = 0x8807A514;
	REX_STORE_U32(ctx.r31.u32 + 8148, ctx.r11.u32);
	// stw r7,8140(r31)
	ctx.current_instruction = 0x8807A518;
	REX_STORE_U32(ctx.r31.u32 + 8140, ctx.r7.u32);
	// sth r26,8144(r31)
	ctx.current_instruction = 0x8807A51C;
	REX_STORE_U16(ctx.r31.u32 + 8144, ctx.r26.u16);
	// sth r9,8146(r31)
	ctx.current_instruction = 0x8807A520;
	REX_STORE_U16(ctx.r31.u32 + 8146, ctx.r9.u16);
	// lwz r6,8(r27)
	ctx.current_instruction = 0x8807A524;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r5,4(r27)
	ctx.current_instruction = 0x8807A528;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r26,20208(r31)
	ctx.current_instruction = 0x8807A534;
	REX_STORE_U32(ctx.r31.u32 + 20208, ctx.r26.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// stw r10,8152(r31)
	ctx.current_instruction = 0x8807A544;
	REX_STORE_U32(ctx.r31.u32 + 8152, ctx.r10.u32);
	// beq cr6,0x8807a550
	if (ctx.cr6.eq) goto loc_8807A550;
	// bl 0x880fbc40
	ctx.lr = 0x8807A550;
	sub_880FBC40(ctx, base);
loc_8807A550:
	// lwz r11,31104(r31)
	ctx.current_instruction = 0x8807A550;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8807a600
	if (!ctx.cr6.gt) goto loc_8807A600;
	// lhz r8,14(r27)
	ctx.current_instruction = 0x8807A55C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r27.u32 + 14);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r9,8(r27)
	ctx.current_instruction = 0x8807A564;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r7,r8,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r30,4(r27)
	ctx.current_instruction = 0x8807A56C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// lwz r29,20(r27)
	ctx.current_instruction = 0x8807A574;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// divw r5,r11,r7
	ctx.r5.u64 = uint32_t((ctx.r7.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r11.s32 / ctx.r7.s32 : 0);
	// andc r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// mullw r3,r5,r8
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// stw r5,4(r27)
	ctx.current_instruction = 0x8807A584;
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r5.u32);
	// mullw r11,r3,r9
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r8,20(r27)
	ctx.current_instruction = 0x8807A59C;
	REX_STORE_U32(ctx.r27.u32 + 20, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.current_instruction = 0x8807A5A0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bne cr6,0x8807a5bc
	if (!ctx.cr6.eq) goto loc_8807A5BC;
	// lwz r11,27968(r31)
	ctx.current_instruction = 0x8807A5AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27968);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x8807a5c0
	if (ctx.cr6.eq) goto loc_8807A5C0;
loc_8807A5BC:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8807A5C0:
	// stw r9,84(r1)
	ctx.current_instruction = 0x8807A5C0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r25,92(r1)
	ctx.current_instruction = 0x8807A5C8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8807A5D4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x88084bc0
	ctx.lr = 0x8807A5F0;
	sub_88084BC0(ctx, base);
loc_8807A5F0:
	// stw r3,20204(r31)
	ctx.current_instruction = 0x8807A5F0;
	REX_STORE_U32(ctx.r31.u32 + 20204, ctx.r3.u32);
	// stw r30,4(r27)
	ctx.current_instruction = 0x8807A5F4;
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r30.u32);
	// stw r29,20(r27)
	ctx.current_instruction = 0x8807A5F8;
	REX_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// b 0x8807a638
	goto loc_8807A638;
loc_8807A600:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x8807A600;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8807a61c
	if (!ctx.cr6.eq) goto loc_8807A61C;
	// lwz r11,27968(r31)
	ctx.current_instruction = 0x8807A60C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27968);
	// li r7,2
	ctx.r7.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a620
	if (ctx.cr6.eq) goto loc_8807A620;
loc_8807A61C:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
loc_8807A620:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x88084a90
	ctx.lr = 0x8807A634;
	sub_88084A90(ctx, base);
loc_8807A634:
	// stw r3,20204(r31)
	ctx.current_instruction = 0x8807A634;
	REX_STORE_U32(ctx.r31.u32 + 20204, ctx.r3.u32);
loc_8807A638:
	// lwz r11,112(r1)
	ctx.current_instruction = 0x8807A638;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a67c
	if (ctx.cr6.eq) goto loc_8807A67C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8807a4bc
	if (ctx.cr6.eq) goto loc_8807A4BC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8807a4bc
	if (ctx.cr6.eq) goto loc_8807A4BC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8807a4bc
	if (ctx.cr6.eq) goto loc_8807A4BC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807a670
	if (!ctx.cr6.eq) goto loc_8807A670;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_8807A670:
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_8807A67C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x8807a68c
	goto loc_8807A68C;
loc_8807A684:
	// stw r25,20208(r31)
	ctx.current_instruction = 0x8807A684;
	REX_STORE_U32(ctx.r31.u32 + 20208, ctx.r25.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_8807A68C:
	// addi r4,r31,7556
	ctx.r4.s64 = ctx.r31.s64 + 7556;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88078520
	ctx.lr = 0x8807A69C;
	sub_88078520(ctx, base);
loc_8807A69C:
	// stw r26,19216(r31)
	ctx.current_instruction = 0x8807A69C;
	REX_STORE_U32(ctx.r31.u32 + 19216, ctx.r26.u32);
loc_8807A6A0:
	// lwz r11,1612(r31)
	ctx.current_instruction = 0x8807A6A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a6b8
	if (ctx.cr6.eq) goto loc_8807A6B8;
	// lwz r11,1724(r31)
	ctx.current_instruction = 0x8807A6AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1724);
	// lwz r10,1720(r31)
	ctx.current_instruction = 0x8807A6B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1720);
	// b 0x8807a6c0
	goto loc_8807A6C0;
loc_8807A6B8:
	// lwz r11,800(r31)
	ctx.current_instruction = 0x8807A6B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r10,796(r31)
	ctx.current_instruction = 0x8807A6BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
loc_8807A6C0:
	// mullw r30,r11,r10
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r11,20208(r31)
	ctx.current_instruction = 0x8807A6C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a72c
	if (ctx.cr6.eq) goto loc_8807A72C;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x8807A6D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8807a6ec
	if (!ctx.cr6.eq) goto loc_8807A6EC;
	// lwz r11,27968(r31)
	ctx.current_instruction = 0x8807A6DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27968);
	// li r6,2
	ctx.r6.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a6f0
	if (ctx.cr6.eq) goto loc_8807A6F0;
loc_8807A6EC:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
loc_8807A6F0:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,20204(r31)
	ctx.current_instruction = 0x8807A6F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20204);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r5,20196(r31)
	ctx.current_instruction = 0x8807A6FC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20196);
	// bl 0x880849f0
	ctx.lr = 0x8807A704;
	sub_880849F0(ctx, base);
loc_8807A704:
	// lwz r5,20196(r31)
	ctx.current_instruction = 0x8807A704;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20196);
	// lwz r11,21076(r31)
	ctx.current_instruction = 0x8807A708;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21076);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r5,19104(r31)
	ctx.current_instruction = 0x8807A710;
	REX_STORE_U32(ctx.r31.u32 + 19104, ctx.r5.u32);
	// beq cr6,0x8807a790
	if (ctx.cr6.eq) goto loc_8807A790;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4990
	ctx.lr = 0x8807A728;
	sub_880E4990(ctx, base);
loc_8807A728:
	// b 0x8807a790
	goto loc_8807A790;
loc_8807A72C:
	// lwz r11,21076(r31)
	ctx.current_instruction = 0x8807A72C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21076);
	// stw r23,19104(r31)
	ctx.current_instruction = 0x8807A730;
	REX_STORE_U32(ctx.r31.u32 + 19104, ctx.r23.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a768
	if (ctx.cr6.eq) goto loc_8807A768;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,20196(r31)
	ctx.current_instruction = 0x8807A740;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20196);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4990
	ctx.lr = 0x8807A750;
	sub_880E4990(ctx, base);
loc_8807A750:
	// lwz r11,19104(r31)
	ctx.current_instruction = 0x8807A750;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19104);
	// lwz r10,20196(r31)
	ctx.current_instruction = 0x8807A754;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20196);
	// srawi r5,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r30.s32 >> 1;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// b 0x8807a784
	goto loc_8807A784;
loc_8807A768:
	// lwz r11,2812(r31)
	ctx.current_instruction = 0x8807A768;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a790
	if (ctx.cr6.eq) goto loc_8807A790;
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// lwz r3,20196(r31)
	ctx.current_instruction = 0x8807A778;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20196);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8807A784:
	// bl 0x880547a0
	ctx.lr = 0x8807A788;
	sub_880547A0(ctx, base);
loc_8807A788:
	// lwz r11,20196(r31)
	ctx.current_instruction = 0x8807A788;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20196);
	// stw r11,19104(r31)
	ctx.current_instruction = 0x8807A78C;
	REX_STORE_U32(ctx.r31.u32 + 19104, ctx.r11.u32);
loc_8807A790:
	// lwz r4,19104(r31)
	ctx.current_instruction = 0x8807A790;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 19104);
	// srawi r11,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 2;
	// lwz r10,31532(r31)
	ctx.current_instruction = 0x8807A798;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 31532);
	// add r5,r4,r30
	ctx.r5.u64 = ctx.r4.u64 + ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r5,6848(r31)
	ctx.current_instruction = 0x8807A7A8;
	REX_STORE_U32(ctx.r31.u32 + 6848, ctx.r5.u32);
	// stw r4,6844(r31)
	ctx.current_instruction = 0x8807A7AC;
	REX_STORE_U32(ctx.r31.u32 + 6844, ctx.r4.u32);
	// stw r6,6852(r31)
	ctx.current_instruction = 0x8807A7B0;
	REX_STORE_U32(ctx.r31.u32 + 6852, ctx.r6.u32);
	// bne cr6,0x8807a7dc
	if (!ctx.cr6.eq) goto loc_8807A7DC;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x8807A7B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8807a7f4
	if (!ctx.cr6.eq) goto loc_8807A7F4;
	// lbz r11,31536(r31)
	ctx.current_instruction = 0x8807A7C4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 31536);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8807a7dc
	if (ctx.cr6.eq) goto loc_8807A7DC;
	// lwz r11,28044(r31)
	ctx.current_instruction = 0x8807A7D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807a7f4
	if (!ctx.cr6.eq) goto loc_8807A7F4;
loc_8807A7DC:
	// lwz r3,31552(r31)
	ctx.current_instruction = 0x8807A7DC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 31552);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8807A7E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8807A7E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8807A7F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8807A7F4:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x8807A7F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8807a820
	if (!ctx.cr6.eq) goto loc_8807A820;
	// lwz r11,31540(r31)
	ctx.current_instruction = 0x8807A800;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a820
	if (ctx.cr6.eq) goto loc_8807A820;
	// lwz r6,6852(r31)
	ctx.current_instruction = 0x8807A80C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 6852);
	// lwz r5,6848(r31)
	ctx.current_instruction = 0x8807A810;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 6848);
	// lwz r4,6844(r31)
	ctx.current_instruction = 0x8807A814;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 6844);
	// lwz r3,31552(r31)
	ctx.current_instruction = 0x8807A818;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 31552);
	// bl 0x880be928
	ctx.lr = 0x8807A820;
	sub_880BE928(ctx, base);
loc_8807A820:
	// lwz r11,30220(r31)
	ctx.current_instruction = 0x8807A820;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807a838
	if (!ctx.cr6.eq) goto loc_8807A838;
	// lwz r11,30224(r31)
	ctx.current_instruction = 0x8807A82C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a858
	if (ctx.cr6.eq) goto loc_8807A858;
loc_8807A838:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lwz r8,1724(r31)
	ctx.current_instruction = 0x8807A83C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1724);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,1720(r31)
	ctx.current_instruction = 0x8807A844;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1720);
	// lwz r6,6852(r31)
	ctx.current_instruction = 0x8807A848;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 6852);
	// lwz r5,6848(r31)
	ctx.current_instruction = 0x8807A84C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 6848);
	// lwz r4,6844(r31)
	ctx.current_instruction = 0x8807A850;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 6844);
	// bl 0x880e6460
	ctx.lr = 0x8807A858;
	sub_880E6460(ctx, base);
loc_8807A858:
	// lwz r11,1612(r31)
	ctx.current_instruction = 0x8807A858;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a870
	if (ctx.cr6.eq) goto loc_8807A870;
	// lwz r11,7216(r31)
	ctx.current_instruction = 0x8807A864;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807a8a0
	if (!ctx.cr6.eq) goto loc_8807A8A0;
loc_8807A870:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807A870;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807a97c
	if (!ctx.cr6.eq) goto loc_8807A97C;
	// lwz r11,30408(r31)
	ctx.current_instruction = 0x8807A87C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a97c
	if (ctx.cr6.eq) goto loc_8807A97C;
	// lwz r11,30628(r31)
	ctx.current_instruction = 0x8807A888;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a97c
	if (ctx.cr6.eq) goto loc_8807A97C;
	// lwz r11,30696(r31)
	ctx.current_instruction = 0x8807A894;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a97c
	if (ctx.cr6.eq) goto loc_8807A97C;
loc_8807A8A0:
	// stw r25,7216(r31)
	ctx.current_instruction = 0x8807A8A0;
	REX_STORE_U32(ctx.r31.u32 + 7216, ctx.r25.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e75a8
	ctx.lr = 0x8807A8B4;
	sub_880E75A8(ctx, base);
loc_8807A8B4:
	// lwz r3,112(r1)
	ctx.current_instruction = 0x8807A8B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8807a998
	if (!ctx.cr6.eq) goto loc_8807A998;
	// lwz r11,20208(r31)
	ctx.current_instruction = 0x8807A8C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20208);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,8132
	ctx.r4.s64 = ctx.r31.s64 + 8132;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807a8d8
	if (!ctx.cr6.eq) goto loc_8807A8D8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8807A8D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e8160
	ctx.lr = 0x8807A8E0;
	sub_880E8160(ctx, base);
loc_8807A8E0:
	// lwz r3,112(r1)
	ctx.current_instruction = 0x8807A8E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8807a998
	if (!ctx.cr6.eq) goto loc_8807A998;
	// lwz r11,1612(r31)
	ctx.current_instruction = 0x8807A8EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a97c
	if (ctx.cr6.eq) goto loc_8807A97C;
	// lwz r11,7216(r31)
	ctx.current_instruction = 0x8807A8F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a97c
	if (ctx.cr6.eq) goto loc_8807A97C;
	// lwz r11,7572(r31)
	ctx.current_instruction = 0x8807A904;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7572);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,112(r1)
	ctx.current_instruction = 0x8807A914;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f0,12416(r10)
	ctx.current_instruction = 0x8807A918;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12416);
	// stw r11,7500(r31)
	ctx.current_instruction = 0x8807A91C;
	REX_STORE_U32(ctx.r31.u32 + 7500, ctx.r11.u32);
	// lfd f13,12088(r9)
	ctx.current_instruction = 0x8807A920;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 12088);
	// lfd f12,112(r1)
	ctx.current_instruction = 0x8807A924;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmadd f10,f11,f0,f13
	ctx.f10.f64 = std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,112(r1)
	ctx.current_instruction = 0x8807A934;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lwz r11,116(r1)
	ctx.current_instruction = 0x8807A938;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8807a948
	if (ctx.cr6.gt) goto loc_8807A948;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8807A948:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// stw r11,7504(r31)
	ctx.current_instruction = 0x8807A94C;
	REX_STORE_U32(ctx.r31.u32 + 7504, ctx.r11.u32);
	// std r10,112(r1)
	ctx.current_instruction = 0x8807A950;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f12,112(r1)
	ctx.current_instruction = 0x8807A954;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmadd f10,f11,f0,f13
	ctx.f10.f64 = std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,112(r1)
	ctx.current_instruction = 0x8807A964;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lwz r11,116(r1)
	ctx.current_instruction = 0x8807A968;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8807a978
	if (ctx.cr6.gt) goto loc_8807A978;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8807A978:
	// stw r11,7508(r31)
	ctx.current_instruction = 0x8807A978;
	REX_STORE_U32(ctx.r31.u32 + 7508, ctx.r11.u32);
loc_8807A97C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8807a994
	if (ctx.cr6.eq) goto loc_8807A994;
	// stw r20,19108(r31)
	ctx.current_instruction = 0x8807A984;
	REX_STORE_U32(ctx.r31.u32 + 19108, ctx.r20.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8807a994
	if (ctx.cr6.eq) goto loc_8807A994;
	// stw r21,19196(r31)
	ctx.current_instruction = 0x8807A990;
	REX_STORE_U32(ctx.r31.u32 + 19196, ctx.r21.u32);
loc_8807A994:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8807A998:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B0990) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880B0990;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880B0990) {
			switch (rex_dispatch_address) {
				case 0x880B0998:
				case 0x880B0A94:
				case 0x880B0AE0:
				case 0x880B0B10:
				case 0x880B0BCC:
				case 0x880B0C00:
				case 0x880B0C4C:
				case 0x880B0C98:
				case 0x880B0CC8:
				case 0x880B0CF4:
				case 0x880B0E24:
				case 0x880B0EF0:
				case 0x880B0F1C:
				case 0x880B0F34:
				case 0x880B0F78:
				case 0x880B0FA4:
				case 0x880B0FBC:
				case 0x880B1120:
				case 0x880B1204:
				case 0x880B1238:
				case 0x880B1284:
				case 0x880B12A0:
				case 0x880B12C8:
				case 0x880B1314:
				case 0x880B1330:
				case 0x880B135C:
				case 0x880B148C:
				case 0x880B15DC:
				case 0x880B1604:
				case 0x880B1630:
				case 0x880B164C:
				case 0x880B168C:
				case 0x880B16B4:
				case 0x880B16E0:
				case 0x880B16FC:
				case 0x880B17DC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880B0990;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880B0998: goto loc_880B0998;
		case 0x880B0A94: goto loc_880B0A94;
		case 0x880B0AE0: goto loc_880B0AE0;
		case 0x880B0B10: goto loc_880B0B10;
		case 0x880B0BCC: goto loc_880B0BCC;
		case 0x880B0C00: goto loc_880B0C00;
		case 0x880B0C4C: goto loc_880B0C4C;
		case 0x880B0C98: goto loc_880B0C98;
		case 0x880B0CC8: goto loc_880B0CC8;
		case 0x880B0CF4: goto loc_880B0CF4;
		case 0x880B0E24: goto loc_880B0E24;
		case 0x880B0EF0: goto loc_880B0EF0;
		case 0x880B0F1C: goto loc_880B0F1C;
		case 0x880B0F34: goto loc_880B0F34;
		case 0x880B0F78: goto loc_880B0F78;
		case 0x880B0FA4: goto loc_880B0FA4;
		case 0x880B0FBC: goto loc_880B0FBC;
		case 0x880B1120: goto loc_880B1120;
		case 0x880B1204: goto loc_880B1204;
		case 0x880B1238: goto loc_880B1238;
		case 0x880B1284: goto loc_880B1284;
		case 0x880B12A0: goto loc_880B12A0;
		case 0x880B12C8: goto loc_880B12C8;
		case 0x880B1314: goto loc_880B1314;
		case 0x880B1330: goto loc_880B1330;
		case 0x880B135C: goto loc_880B135C;
		case 0x880B148C: goto loc_880B148C;
		case 0x880B15DC: goto loc_880B15DC;
		case 0x880B1604: goto loc_880B1604;
		case 0x880B1630: goto loc_880B1630;
		case 0x880B164C: goto loc_880B164C;
		case 0x880B168C: goto loc_880B168C;
		case 0x880B16B4: goto loc_880B16B4;
		case 0x880B16E0: goto loc_880B16E0;
		case 0x880B16FC: goto loc_880B16FC;
		case 0x880B17DC: goto loc_880B17DC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880B0998;
	__savegprlr_14(ctx, base);
loc_880B0998:
	// stwu r1,-544(r1)
	ctx.current_instruction = 0x880B0998;
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,588(r1)
	ctx.current_instruction = 0x880B099C;
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r6.u32);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r6,764(r1)
	ctx.current_instruction = 0x880B09A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 764);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r7,596(r1)
	ctx.current_instruction = 0x880B09AC;
	REX_STORE_U32(ctx.r1.u32 + 596, ctx.r7.u32);
	// addi r29,r11,13304
	ctx.r29.s64 = ctx.r11.s64 + 13304;
	// stw r8,604(r1)
	ctx.current_instruction = 0x880B09B4;
	REX_STORE_U32(ctx.r1.u32 + 604, ctx.r8.u32);
	// lis r23,4095
	ctx.r23.s64 = 268369920;
	// lwz r8,692(r1)
	ctx.current_instruction = 0x880B09BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 692);
	// mr r15,r10
	ctx.r15.u64 = ctx.r10.u64;
	// lwz r7,700(r1)
	ctx.current_instruction = 0x880B09C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 700);
	// ori r23,r23,65535
	ctx.r23.u64 = ctx.r23.u64 | 65535;
	// lwz r14,0(r6)
	ctx.current_instruction = 0x880B09CC;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r6)
	ctx.current_instruction = 0x880B09D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// li r17,16
	ctx.r17.s64 = 16;
	// stw r5,580(r1)
	ctx.current_instruction = 0x880B09DC;
	REX_STORE_U32(ctx.r1.u32 + 580, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,612(r1)
	ctx.current_instruction = 0x880B09E4;
	REX_STORE_U32(ctx.r1.u32 + 612, ctx.r9.u32);
	// stw r10,620(r1)
	ctx.current_instruction = 0x880B09E8;
	REX_STORE_U32(ctx.r1.u32 + 620, ctx.r10.u32);
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// lwz r22,644(r1)
	ctx.current_instruction = 0x880B09F0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// lwz r9,716(r1)
	ctx.current_instruction = 0x880B09F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// addi r18,r10,6848
	ctx.r18.s64 = ctx.r10.s64 + 6848;
	// lwz r25,8(r8)
	ctx.current_instruction = 0x880B09FC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// addi r27,r22,384
	ctx.r27.s64 = ctx.r22.s64 + 384;
	// lwz r16,756(r1)
	ctx.current_instruction = 0x880B0A04;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 756);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r21,12(r8)
	ctx.current_instruction = 0x880B0A0C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r20,8(r7)
	ctx.current_instruction = 0x880B0A10;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r19,12(r7)
	ctx.current_instruction = 0x880B0A14;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r4,572(r1)
	ctx.current_instruction = 0x880B0A18;
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r4.u32);
	// stw r5,308(r1)
	ctx.current_instruction = 0x880B0A1C;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// stw r5,312(r1)
	ctx.current_instruction = 0x880B0A20;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r5.u32);
	// stw r5,316(r1)
	ctx.current_instruction = 0x880B0A24;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r5.u32);
	// stw r5,320(r1)
	ctx.current_instruction = 0x880B0A28;
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r5.u32);
	// stw r23,304(r1)
	ctx.current_instruction = 0x880B0A2C;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r23.u32);
	// stw r14,336(r1)
	ctx.current_instruction = 0x880B0A30;
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r14.u32);
	// stw r11,332(r1)
	ctx.current_instruction = 0x880B0A34;
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r11.u32);
	// stw r29,324(r1)
	ctx.current_instruction = 0x880B0A38;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// ble cr6,0x880b1018
	if (!ctx.cr6.gt) goto loc_880B1018;
	// lwz r11,732(r1)
	ctx.current_instruction = 0x880B0A40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 732);
	// stw r9,328(r1)
	ctx.current_instruction = 0x880B0A44;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r9.u32);
	// stw r11,304(r1)
	ctx.current_instruction = 0x880B0A48;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// b 0x880b0a5c
	goto loc_880B0A5C;
loc_880B0A50:
	// lwz r30,596(r1)
	ctx.current_instruction = 0x880B0A50;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r11,304(r1)
	ctx.current_instruction = 0x880B0A54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r29,324(r1)
	ctx.current_instruction = 0x880B0A58;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
loc_880B0A5C:
	// lhz r10,0(r11)
	ctx.current_instruction = 0x880B0A5C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r5,r1,296
	ctx.r5.s64 = ctx.r1.s64 + 296;
	// lhz r9,2(r11)
	ctx.current_instruction = 0x880B0A64;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r7,668(r1)
	ctx.current_instruction = 0x880B0A70;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lwz r6,660(r1)
	ctx.current_instruction = 0x880B0A78;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 660);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,292(r1)
	ctx.current_instruction = 0x880B0A84;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,296(r1)
	ctx.current_instruction = 0x880B0A8C;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// bl 0x8810a970
	ctx.lr = 0x880B0A94;
	sub_8810A970(ctx, base);
loc_880B0A94:
	// lwz r9,684(r1)
	ctx.current_instruction = 0x880B0A94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 684);
	// lwz r8,296(r1)
	ctx.current_instruction = 0x880B0A98;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880B0AA0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r7,292(r1)
	ctx.current_instruction = 0x880B0AA8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bne cr6,0x880b0ae4
	if (!ctx.cr6.eq) goto loc_880B0AE4;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x880B0AB8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880B0AC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// stw r17,84(r1)
	ctx.current_instruction = 0x880B0AC8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B0AE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B0AE0:
	// b 0x880b0b10
	goto loc_880B0B10;
loc_880B0AE4:
	// stw r17,84(r1)
	ctx.current_instruction = 0x880B0AE4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2496(r31)
	ctx.current_instruction = 0x880B0AEC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880B0AF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B0B10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B0B10:
	// lwz r11,292(r1)
	ctx.current_instruction = 0x880B0B10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x880b0b28
	if (!ctx.cr6.eq) goto loc_880B0B28;
	// li r30,16384
	ctx.r30.s64 = 16384;
	// li r29,16384
	ctx.r29.s64 = 16384;
	// b 0x880b0b98
	goto loc_880B0B98;
loc_880B0B28:
	// lwz r10,296(r1)
	ctx.current_instruction = 0x880B0B28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwz r8,788(r31)
	ctx.current_instruction = 0x880B0B30;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 788);
	// rlwinm r7,r10,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwzx r9,r9,r29
	ctx.current_instruction = 0x880B0B3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lwzx r8,r7,r29
	ctx.current_instruction = 0x880B0B40;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r29,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r6.s32 >> 1;
	// srawi r30,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r5.s32 >> 1;
	// beq cr6,0x880b0b98
	if (ctx.cr6.eq) goto loc_880B0B98;
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b0b78
	if (ctx.cr6.eq) goto loc_880B0B78;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x880b0b74
	if (!ctx.cr6.gt) goto loc_880B0B74;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// b 0x880b0b78
	goto loc_880B0B78;
loc_880B0B74:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_880B0B78:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b0b98
	if (ctx.cr6.eq) goto loc_880B0B98;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x880b0b94
	if (!ctx.cr6.gt) goto loc_880B0B94;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// b 0x880b0b98
	goto loc_880B0B98;
loc_880B0B94:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_880B0B98:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880B0B98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b0bcc
	if (ctx.cr6.eq) goto loc_880B0BCC;
	// addi r6,r22,256
	ctx.r6.s64 = ctx.r22.s64 + 256;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B0BAC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,604(r1)
	ctx.current_instruction = 0x880B0BB4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B0BCC;
	sub_8810B7F8(ctx, base);
loc_880B0BCC:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880B0BCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b0c00
	if (ctx.cr6.eq) goto loc_880B0C00;
	// addi r6,r22,320
	ctx.r6.s64 = ctx.r22.s64 + 320;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B0BE0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,612(r1)
	ctx.current_instruction = 0x880B0BE8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B0C00;
	sub_8810B7F8(ctx, base);
loc_880B0C00:
	// lwz r11,724(r1)
	ctx.current_instruction = 0x880B0C00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880b0ff8
	if (!ctx.cr6.gt) goto loc_880B0FF8;
	// lwz r26,740(r1)
	ctx.current_instruction = 0x880B0C0C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// rotlwi r24,r11,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_880B0C14:
	// lhz r11,0(r26)
	ctx.current_instruction = 0x880B0C14;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// addi r5,r1,300
	ctx.r5.s64 = ctx.r1.s64 + 300;
	// lhz r10,2(r26)
	ctx.current_instruction = 0x880B0C1C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 2);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r7,668(r1)
	ctx.current_instruction = 0x880B0C28;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r6,660(r1)
	ctx.current_instruction = 0x880B0C30;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 660);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,288(r1)
	ctx.current_instruction = 0x880B0C3C;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,300(r1)
	ctx.current_instruction = 0x880B0C44;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// bl 0x8810a970
	ctx.lr = 0x880B0C4C;
	sub_8810A970(ctx, base);
loc_880B0C4C:
	// lwz r10,684(r1)
	ctx.current_instruction = 0x880B0C4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 684);
	// lwz r8,300(r1)
	ctx.current_instruction = 0x880B0C50;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880B0C58;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r7,288(r1)
	ctx.current_instruction = 0x880B0C60;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bne cr6,0x880b0c9c
	if (!ctx.cr6.eq) goto loc_880B0C9C;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x880B0C70;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880B0C78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// stw r17,84(r1)
	ctx.current_instruction = 0x880B0C80;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x880B0C98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B0C98:
	// b 0x880b0cc8
	goto loc_880B0CC8;
loc_880B0C9C:
	// stw r17,84(r1)
	ctx.current_instruction = 0x880B0C9C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2496(r31)
	ctx.current_instruction = 0x880B0CA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880B0CB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x880B0CC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B0CC8:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x880B0CC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x880B0CF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B0CF4:
	// lwz r7,2604(r31)
	ctx.current_instruction = 0x880B0CF4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// lwz r6,2608(r31)
	ctx.current_instruction = 0x880B0CF8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// lwz r11,292(r1)
	ctx.current_instruction = 0x880B0CFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// subf r10,r25,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r25.u64;
	// lwz r9,296(r1)
	ctx.current_instruction = 0x880B0D04;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// subf r8,r21,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r21.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,2612(r31)
	ctx.current_instruction = 0x880B0D10;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r4,2616(r31)
	ctx.current_instruction = 0x880B0D18;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// and r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 & ctx.r5.u64;
	// and r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 & ctx.r4.u64;
	// subf r30,r7,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r10,r20,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r20.u64;
	// subf r8,r19,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r19.u64;
	// srawi r29,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r30.s32 >> 31;
	// subf r3,r6,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r6.u64;
	// srawi r28,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r3.s32 >> 31;
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880B0D3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r9,300(r1)
	ctx.current_instruction = 0x880B0D40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// xor r9,r30,r29
	ctx.r9.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// and r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 & ctx.r4.u64;
	// subf r11,r29,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r29.u64;
	// xor r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r28.u64;
	// subf r9,r7,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r8,r6,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r6.u64;
	// subf r10,r28,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r28.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b0da4
	if (ctx.cr6.gt) goto loc_880B0DA4;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b0da4
	if (ctx.cr6.gt) goto loc_880B0DA4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r18
	ctx.current_instruction = 0x880B0D84;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// lwzx r6,r10,r18
	ctx.current_instruction = 0x880B0D88;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r16
	ctx.current_instruction = 0x880B0D94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r16.u32);
	// lwzx r11,r4,r16
	ctx.current_instruction = 0x880B0D98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r16.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b0dac
	goto loc_880B0DAC;
loc_880B0DA4:
	// lwz r11,20(r16)
	ctx.current_instruction = 0x880B0DA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B0DAC:
	// srawi r11,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 31;
	// srawi r10,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 31;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b0dfc
	if (ctx.cr6.gt) goto loc_880B0DFC;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b0dfc
	if (ctx.cr6.gt) goto loc_880B0DFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r18
	ctx.current_instruction = 0x880B0DDC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// lwzx r8,r10,r18
	ctx.current_instruction = 0x880B0DE0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r16
	ctx.current_instruction = 0x880B0DEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r16.u32);
	// lwzx r11,r6,r16
	ctx.current_instruction = 0x880B0DF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r16.u32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b0e04
	goto loc_880B0E04;
loc_880B0DFC:
	// lwz r11,20(r16)
	ctx.current_instruction = 0x880B0DFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B0E04:
	// lwz r11,332(r1)
	ctx.current_instruction = 0x880B0E04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,572(r1)
	ctx.current_instruction = 0x880B0E10;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B0E24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B0E24:
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880B0E24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r8,300(r1)
	ctx.current_instruction = 0x880B0E2C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bne cr6,0x880b0e48
	if (!ctx.cr6.eq) goto loc_880B0E48;
	// li r29,16384
	ctx.r29.s64 = 16384;
	// li r28,16384
	ctx.r28.s64 = 16384;
	// b 0x880b0eb8
	goto loc_880B0EB8;
loc_880B0E48:
	// lwz r10,324(r1)
	ctx.current_instruction = 0x880B0E48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// lwz r6,788(r31)
	ctx.current_instruction = 0x880B0E54;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 788);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwzx r9,r9,r10
	ctx.current_instruction = 0x880B0E5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r10,r7,r10
	ctx.current_instruction = 0x880B0E60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r28,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r5.s32 >> 1;
	// srawi r29,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r4.s32 >> 1;
	// beq cr6,0x880b0eb8
	if (ctx.cr6.eq) goto loc_880B0EB8;
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b0e98
	if (ctx.cr6.eq) goto loc_880B0E98;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x880b0e94
	if (!ctx.cr6.gt) goto loc_880B0E94;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// b 0x880b0e98
	goto loc_880B0E98;
loc_880B0E94:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_880B0E98:
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b0eb8
	if (ctx.cr6.eq) goto loc_880B0EB8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x880b0eb4
	if (!ctx.cr6.gt) goto loc_880B0EB4;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// b 0x880b0eb8
	goto loc_880B0EB8;
loc_880B0EB4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_880B0EB8:
	// lwz r10,28100(r31)
	ctx.current_instruction = 0x880B0EB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b0f40
	if (ctx.cr6.eq) goto loc_880B0F40;
	// addi r15,r22,640
	ctx.r15.s64 = ctx.r22.s64 + 640;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B0ECC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,628(r1)
	ctx.current_instruction = 0x880B0ED4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B0EF0;
	sub_8810B7F8(ctx, base);
loc_880B0EF0:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x880B0EF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// addi r3,r22,256
	ctx.r3.s64 = ctx.r22.s64 + 256;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// bctrl 
	ctx.lr = 0x880B0F1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B0F1C:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r3,580(r1)
	ctx.current_instruction = 0x880B0F24;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r14
	ctx.ctr.u64 = ctx.r14.u64;
	// bctrl 
	ctx.lr = 0x880B0F34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B0F34:
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880B0F34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r15,620(r1)
	ctx.current_instruction = 0x880B0F38;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_880B0F40:
	// lwz r10,28100(r31)
	ctx.current_instruction = 0x880B0F40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b0fc4
	if (ctx.cr6.eq) goto loc_880B0FC4;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B0F54;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addi r29,r22,704
	ctx.r29.s64 = ctx.r22.s64 + 704;
	// lwz r4,636(r1)
	ctx.current_instruction = 0x880B0F5C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B0F78;
	sub_8810B7F8(ctx, base);
loc_880B0F78:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x880B0F78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// addi r3,r22,320
	ctx.r3.s64 = ctx.r22.s64 + 320;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// bctrl 
	ctx.lr = 0x880B0FA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B0FA4:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,588(r1)
	ctx.current_instruction = 0x880B0FAC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r14
	ctx.ctr.u64 = ctx.r14.u64;
	// bctrl 
	ctx.lr = 0x880B0FBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B0FBC:
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880B0FBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_880B0FC4:
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880b0fec
	if (!ctx.cr6.lt) goto loc_880B0FEC;
	// lwz r10,292(r1)
	ctx.current_instruction = 0x880B0FCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// lwz r9,296(r1)
	ctx.current_instruction = 0x880B0FD4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r8,300(r1)
	ctx.current_instruction = 0x880B0FD8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// stw r11,316(r1)
	ctx.current_instruction = 0x880B0FDC;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r11.u32);
	// stw r10,308(r1)
	ctx.current_instruction = 0x880B0FE0;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r10.u32);
	// stw r9,312(r1)
	ctx.current_instruction = 0x880B0FE4;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r9.u32);
	// stw r8,320(r1)
	ctx.current_instruction = 0x880B0FE8;
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r8.u32);
loc_880B0FEC:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x880b0c14
	if (!ctx.cr0.eq) goto loc_880B0C14;
loc_880B0FF8:
	// lwz r11,328(r1)
	ctx.current_instruction = 0x880B0FF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r10,304(r1)
	ctx.current_instruction = 0x880B0FFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r11,328(r1)
	ctx.current_instruction = 0x880B1008;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// stw r9,304(r1)
	ctx.current_instruction = 0x880B100C;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// bne 0x880b0a50
	if (!ctx.cr0.eq) goto loc_880B0A50;
	// stw r23,304(r1)
	ctx.current_instruction = 0x880B1014;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r23.u32);
loc_880B1018:
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// lwz r9,684(r1)
	ctx.current_instruction = 0x880B101C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 684);
	// addi r8,r1,316
	ctx.r8.s64 = ctx.r1.s64 + 316;
	// lwz r5,628(r1)
	ctx.current_instruction = 0x880B1024;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// stw r10,260(r1)
	ctx.current_instruction = 0x880B1028;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// addi r6,r1,308
	ctx.r6.s64 = ctx.r1.s64 + 308;
	// lwz r10,320(r1)
	ctx.current_instruction = 0x880B1030;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// addi r7,r1,312
	ctx.r7.s64 = ctx.r1.s64 + 312;
	// stw r8,252(r1)
	ctx.current_instruction = 0x880B1038;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// stw r9,212(r1)
	ctx.current_instruction = 0x880B1040;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// addi r14,r22,320
	ctx.r14.s64 = ctx.r22.s64 + 320;
	// lwz r9,316(r1)
	ctx.current_instruction = 0x880B1048;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// addi r15,r22,256
	ctx.r15.s64 = ctx.r22.s64 + 256;
	// stw r6,236(r1)
	ctx.current_instruction = 0x880B1050;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,328(r1)
	ctx.current_instruction = 0x880B1058;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r10.u32);
	// lwz r8,312(r1)
	ctx.current_instruction = 0x880B105C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r6,636(r1)
	ctx.current_instruction = 0x880B1060;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// stw r9,340(r1)
	ctx.current_instruction = 0x880B1064;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// stw r7,244(r1)
	ctx.current_instruction = 0x880B1068;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r7.u32);
	// lwz r7,308(r1)
	ctx.current_instruction = 0x880B106C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r8,344(r1)
	ctx.current_instruction = 0x880B1070;
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r8.u32);
	// stw r6,352(r1)
	ctx.current_instruction = 0x880B1074;
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r6.u32);
	// stw r23,140(r1)
	ctx.current_instruction = 0x880B1078;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// stw r5,356(r1)
	ctx.current_instruction = 0x880B107C;
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// stw r7,348(r1)
	ctx.current_instruction = 0x880B1080;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r7.u32);
	// lwz r24,652(r1)
	ctx.current_instruction = 0x880B1084;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r26,764(r1)
	ctx.current_instruction = 0x880B1088;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 764);
	// stw r11,268(r1)
	ctx.current_instruction = 0x880B108C;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// addi r11,r18,-1424
	ctx.r11.s64 = ctx.r18.s64 + -1424;
	// stw r16,220(r1)
	ctx.current_instruction = 0x880B1094;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r16.u32);
	// stw r11,100(r1)
	ctx.current_instruction = 0x880B1098;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r24,276(r1)
	ctx.current_instruction = 0x880B109C;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r24.u32);
	// stw r26,228(r1)
	ctx.current_instruction = 0x880B10A0;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// stw r27,204(r1)
	ctx.current_instruction = 0x880B10A4;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r27.u32);
	// stw r14,196(r1)
	ctx.current_instruction = 0x880B10A8;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r14.u32);
	// lwz r23,328(r1)
	ctx.current_instruction = 0x880B10AC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// stw r15,188(r1)
	ctx.current_instruction = 0x880B10B0;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r15.u32);
	// stw r22,180(r1)
	ctx.current_instruction = 0x880B10B4;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// stw r19,172(r1)
	ctx.current_instruction = 0x880B10B8;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r19.u32);
	// stw r20,164(r1)
	ctx.current_instruction = 0x880B10BC;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r20.u32);
	// stw r23,132(r1)
	ctx.current_instruction = 0x880B10C0;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// lwz r23,340(r1)
	ctx.current_instruction = 0x880B10C4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r11,352(r1)
	ctx.current_instruction = 0x880B10C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r29,596(r1)
	ctx.current_instruction = 0x880B10CC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r28,588(r1)
	ctx.current_instruction = 0x880B10D0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r30,580(r1)
	ctx.current_instruction = 0x880B10D4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r23,124(r1)
	ctx.current_instruction = 0x880B10DC;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r23,344(r1)
	ctx.current_instruction = 0x880B10E4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	ctx.current_instruction = 0x880B10EC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,356(r1)
	ctx.current_instruction = 0x880B10F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r10,620(r1)
	ctx.current_instruction = 0x880B10F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// lwz r9,612(r1)
	ctx.current_instruction = 0x880B10F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// stw r23,116(r1)
	ctx.current_instruction = 0x880B10FC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// lwz r23,348(r1)
	ctx.current_instruction = 0x880B1100;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r8,604(r1)
	ctx.current_instruction = 0x880B1104;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r4,572(r1)
	ctx.current_instruction = 0x880B1108;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// stw r21,156(r1)
	ctx.current_instruction = 0x880B110C;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// stw r25,148(r1)
	ctx.current_instruction = 0x880B1110;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// stw r23,108(r1)
	ctx.current_instruction = 0x880B1114;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880B1118;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880af6f8
	ctx.lr = 0x880B1120;
	sub_880AF6F8(ctx, base);
loc_880B1120:
	// lwz r23,676(r1)
	ctx.current_instruction = 0x880B1120;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x880b1208
	if (!ctx.cr6.eq) goto loc_880B1208;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// lwz r11,304(r1)
	ctx.current_instruction = 0x880B1130;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// stw r26,228(r1)
	ctx.current_instruction = 0x880B1138;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// stw r10,268(r1)
	ctx.current_instruction = 0x880B113C;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,260(r1)
	ctx.current_instruction = 0x880B1144;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// addi r8,r1,316
	ctx.r8.s64 = ctx.r1.s64 + 316;
	// stw r10,212(r1)
	ctx.current_instruction = 0x880B114C;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// addi r7,r1,312
	ctx.r7.s64 = ctx.r1.s64 + 312;
	// lwz r10,636(r1)
	ctx.current_instruction = 0x880B1154;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// lwz r9,628(r1)
	ctx.current_instruction = 0x880B115C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r11,140(r1)
	ctx.current_instruction = 0x880B1164;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,320(r1)
	ctx.current_instruction = 0x880B116C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// addi r14,r22,320
	ctx.r14.s64 = ctx.r22.s64 + 320;
	// stw r8,252(r1)
	ctx.current_instruction = 0x880B1174;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// addi r15,r22,256
	ctx.r15.s64 = ctx.r22.s64 + 256;
	// stw r10,356(r1)
	ctx.current_instruction = 0x880B117C;
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r10.u32);
	// addi r26,r18,-1360
	ctx.r26.s64 = ctx.r18.s64 + -1360;
	// stw r9,352(r1)
	ctx.current_instruction = 0x880B1184;
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,244(r1)
	ctx.current_instruction = 0x880B118C;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r7.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,132(r1)
	ctx.current_instruction = 0x880B1194;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r4,236(r1)
	ctx.current_instruction = 0x880B1198;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// stw r24,276(r1)
	ctx.current_instruction = 0x880B119C;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r24.u32);
	// stw r20,164(r1)
	ctx.current_instruction = 0x880B11A0;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r20.u32);
	// stw r21,156(r1)
	ctx.current_instruction = 0x880B11A4;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// lwz r30,316(r1)
	ctx.current_instruction = 0x880B11A8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r29,312(r1)
	ctx.current_instruction = 0x880B11AC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r28,308(r1)
	ctx.current_instruction = 0x880B11B0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r10,620(r1)
	ctx.current_instruction = 0x880B11B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// lwz r9,612(r1)
	ctx.current_instruction = 0x880B11B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r8,604(r1)
	ctx.current_instruction = 0x880B11BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r4,572(r1)
	ctx.current_instruction = 0x880B11C0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// stw r25,148(r1)
	ctx.current_instruction = 0x880B11C4;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// stw r14,196(r1)
	ctx.current_instruction = 0x880B11C8;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r14.u32);
	// stw r15,188(r1)
	ctx.current_instruction = 0x880B11CC;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r15.u32);
	// stw r22,180(r1)
	ctx.current_instruction = 0x880B11D0;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// stw r16,220(r1)
	ctx.current_instruction = 0x880B11D4;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r16.u32);
	// lwz r11,356(r1)
	ctx.current_instruction = 0x880B11D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// stw r27,204(r1)
	ctx.current_instruction = 0x880B11DC;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r27.u32);
	// stw r30,124(r1)
	ctx.current_instruction = 0x880B11E0;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r29,116(r1)
	ctx.current_instruction = 0x880B11E4;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r28,108(r1)
	ctx.current_instruction = 0x880B11E8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r11,92(r1)
	ctx.current_instruction = 0x880B11EC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,352(r1)
	ctx.current_instruction = 0x880B11F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// stw r26,100(r1)
	ctx.current_instruction = 0x880B11F4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r19,172(r1)
	ctx.current_instruction = 0x880B11F8;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r19.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880B11FC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880af6f8
	ctx.lr = 0x880B1204;
	sub_880AF6F8(ctx, base);
loc_880B1204:
	// lwz r29,596(r1)
	ctx.current_instruction = 0x880B1204;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
loc_880B1208:
	// lwz r30,748(r1)
	ctx.current_instruction = 0x880B1208;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// addi r5,r1,296
	ctx.r5.s64 = ctx.r1.s64 + 296;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// lwz r26,324(r1)
	ctx.current_instruction = 0x880B1214;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,668(r1)
	ctx.current_instruction = 0x880B121C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lwz r6,660(r1)
	ctx.current_instruction = 0x880B1220;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r11,0(r30)
	ctx.current_instruction = 0x880B1224;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.current_instruction = 0x880B1228;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,292(r1)
	ctx.current_instruction = 0x880B122C;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// stw r10,296(r1)
	ctx.current_instruction = 0x880B1230;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// bl 0x8810a970
	ctx.lr = 0x880B1238;
	sub_8810A970(ctx, base);
loc_880B1238:
	// lwz r8,296(r1)
	ctx.current_instruction = 0x880B1238;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r7,292(r1)
	ctx.current_instruction = 0x880B123C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880B1244;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// lwz r28,684(r1)
	ctx.current_instruction = 0x880B1250;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 684);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880B1258;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// li r6,16
	ctx.r6.s64 = 16;
	// bne cr6,0x880b1288
	if (!ctx.cr6.eq) goto loc_880B1288;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x880B126C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r17,84(r1)
	ctx.current_instruction = 0x880B1274;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x880B1284;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1284:
	// b 0x880b12a0
	goto loc_880B12A0;
loc_880B1288:
	// lwz r3,2496(r31)
	ctx.current_instruction = 0x880B1288;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r17,84(r1)
	ctx.current_instruction = 0x880B1290;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x880B12A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B12A0:
	// lwz r11,8(r30)
	ctx.current_instruction = 0x880B12A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r1,300
	ctx.r5.s64 = ctx.r1.s64 + 300;
	// lwz r10,12(r30)
	ctx.current_instruction = 0x880B12A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,668(r1)
	ctx.current_instruction = 0x880B12B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lwz r6,660(r1)
	ctx.current_instruction = 0x880B12B8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 660);
	// stw r11,288(r1)
	ctx.current_instruction = 0x880B12BC;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// stw r10,300(r1)
	ctx.current_instruction = 0x880B12C0;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r10.u32);
	// bl 0x8810a970
	ctx.lr = 0x880B12C8;
	sub_8810A970(ctx, base);
loc_880B12C8:
	// lwz r8,300(r1)
	ctx.current_instruction = 0x880B12C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880B12CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// lwz r7,288(r1)
	ctx.current_instruction = 0x880B12D4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// lwz r30,620(r1)
	ctx.current_instruction = 0x880B12DC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// li r6,16
	ctx.r6.s64 = 16;
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880B12E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne cr6,0x880b1318
	if (!ctx.cr6.eq) goto loc_880B1318;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x880B12FC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r17,84(r1)
	ctx.current_instruction = 0x880B1304;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B1314;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1314:
	// b 0x880b1330
	goto loc_880B1330;
loc_880B1318:
	// stw r17,84(r1)
	ctx.current_instruction = 0x880B1318;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,2496(r31)
	ctx.current_instruction = 0x880B1320;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B1330;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1330:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x880B1330;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x880B135C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B135C:
	// lwz r7,2604(r31)
	ctx.current_instruction = 0x880B135C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// lwz r6,2608(r31)
	ctx.current_instruction = 0x880B1360;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// lwz r8,292(r1)
	ctx.current_instruction = 0x880B1364;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// subf r9,r25,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r25.u64;
	// lwz r5,2612(r31)
	ctx.current_instruction = 0x880B136C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// subf r11,r21,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r21.u64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r10,296(r1)
	ctx.current_instruction = 0x880B1378;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r4,2616(r31)
	ctx.current_instruction = 0x880B137C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// and r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 & ctx.r5.u64;
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// subf r30,r7,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r9,r20,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r20.u64;
	// subf r11,r19,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r19.u64;
	// srawi r29,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r30.s32 >> 31;
	// subf r3,r6,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r6.u64;
	// lwz r8,288(r1)
	ctx.current_instruction = 0x880B13A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r10,300(r1)
	ctx.current_instruction = 0x880B13A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// xor r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// and r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	// and r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ctx.r4.u64;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// xor r5,r3,r10
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b140c
	if (ctx.cr6.gt) goto loc_880B140C;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b140c
	if (ctx.cr6.gt) goto loc_880B140C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r18
	ctx.current_instruction = 0x880B13EC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// lwzx r6,r10,r18
	ctx.current_instruction = 0x880B13F0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r16
	ctx.current_instruction = 0x880B13FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r16.u32);
	// lwzx r11,r4,r16
	ctx.current_instruction = 0x880B1400;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r16.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b1414
	goto loc_880B1414;
loc_880B140C:
	// lwz r11,20(r16)
	ctx.current_instruction = 0x880B140C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B1414:
	// srawi r11,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 31;
	// srawi r10,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 31;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b1464
	if (ctx.cr6.gt) goto loc_880B1464;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b1464
	if (ctx.cr6.gt) goto loc_880B1464;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r18
	ctx.current_instruction = 0x880B1444;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// lwzx r8,r10,r18
	ctx.current_instruction = 0x880B1448;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r16
	ctx.current_instruction = 0x880B1454;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r16.u32);
	// lwzx r11,r6,r16
	ctx.current_instruction = 0x880B1458;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r16.u32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b146c
	goto loc_880B146C;
loc_880B1464:
	// lwz r11,20(r16)
	ctx.current_instruction = 0x880B1464;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B146C:
	// lwz r11,332(r1)
	ctx.current_instruction = 0x880B146C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,572(r1)
	ctx.current_instruction = 0x880B1478;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B148C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B148C:
	// lwz r9,292(r1)
	ctx.current_instruction = 0x880B148C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r8,296(r1)
	ctx.current_instruction = 0x880B1494;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne cr6,0x880b14b0
	if (!ctx.cr6.eq) goto loc_880B14B0;
	// li r26,16384
	ctx.r26.s64 = 16384;
	// li r25,16384
	ctx.r25.s64 = 16384;
	// b 0x880b151c
	goto loc_880B151C;
loc_880B14B0:
	// rlwinm r11,r9,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// lwz r10,788(r31)
	ctx.current_instruction = 0x880B14B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 788);
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r10,r11,r26
	ctx.current_instruction = 0x880B14C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r11,r7,r26
	ctx.current_instruction = 0x880B14C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r25,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r6.s32 >> 1;
	// srawi r26,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r5.s32 >> 1;
	// beq cr6,0x880b151c
	if (ctx.cr6.eq) goto loc_880B151C;
	// clrlwi r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b14fc
	if (ctx.cr6.eq) goto loc_880B14FC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x880b14f8
	if (!ctx.cr6.gt) goto loc_880B14F8;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// b 0x880b14fc
	goto loc_880B14FC;
loc_880B14F8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_880B14FC:
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b151c
	if (ctx.cr6.eq) goto loc_880B151C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x880b1518
	if (!ctx.cr6.gt) goto loc_880B1518;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// b 0x880b151c
	goto loc_880B151C;
loc_880B1518:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_880B151C:
	// lwz r27,288(r1)
	ctx.current_instruction = 0x880B151C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r8,300(r1)
	ctx.current_instruction = 0x880B1520;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// cmpwi cr6,r27,16384
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 16384, ctx.xer);
	// bne cr6,0x880b1538
	if (!ctx.cr6.eq) goto loc_880B1538;
	// li r29,16384
	ctx.r29.s64 = 16384;
	// li r28,16384
	ctx.r28.s64 = 16384;
	// b 0x880b15a8
	goto loc_880B15A8;
loc_880B1538:
	// lwz r11,324(r1)
	ctx.current_instruction = 0x880B1538;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// rlwinm r10,r27,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xC;
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// lwz r6,788(r31)
	ctx.current_instruction = 0x880B1544;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 788);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwzx r10,r10,r11
	ctx.current_instruction = 0x880B154C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r7,r11
	ctx.current_instruction = 0x880B1550;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r5,r10,r27
	ctx.r5.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r28,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r5.s32 >> 1;
	// srawi r29,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r4.s32 >> 1;
	// beq cr6,0x880b15a8
	if (ctx.cr6.eq) goto loc_880B15A8;
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b1588
	if (ctx.cr6.eq) goto loc_880B1588;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x880b1584
	if (!ctx.cr6.gt) goto loc_880B1584;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// b 0x880b1588
	goto loc_880B1588;
loc_880B1584:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_880B1588:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b15a8
	if (ctx.cr6.eq) goto loc_880B15A8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x880b15a4
	if (!ctx.cr6.gt) goto loc_880B15A4;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// b 0x880b15a8
	goto loc_880B15A8;
loc_880B15A4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_880B15A8:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880B15A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b1658
	if (ctx.cr6.eq) goto loc_880B1658;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B15BC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r4,604(r1)
	ctx.current_instruction = 0x880B15C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B15DC;
	sub_8810B7F8(ctx, base);
loc_880B15DC:
	// addi r27,r22,640
	ctx.r27.s64 = ctx.r22.s64 + 640;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B15E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,628(r1)
	ctx.current_instruction = 0x880B15EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B1604;
	sub_8810B7F8(ctx, base);
loc_880B1604:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x880B1604;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x880B1630;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1630:
	// lwz r10,336(r1)
	ctx.current_instruction = 0x880B1630;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,580(r1)
	ctx.current_instruction = 0x880B1638;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B164C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B164C:
	// lwz r9,292(r1)
	ctx.current_instruction = 0x880B164C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r27,288(r1)
	ctx.current_instruction = 0x880B1654;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
loc_880B1658:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880B1658;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b1708
	if (ctx.cr6.eq) goto loc_880B1708;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B166C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r4,612(r1)
	ctx.current_instruction = 0x880B1674;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B168C;
	sub_8810B7F8(ctx, base);
loc_880B168C:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r29,r22,704
	ctx.r29.s64 = ctx.r22.s64 + 704;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B1694;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,636(r1)
	ctx.current_instruction = 0x880B169C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B16B4;
	sub_8810B7F8(ctx, base);
loc_880B16B4:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x880B16B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bctrl 
	ctx.lr = 0x880B16E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B16E0:
	// lwz r10,336(r1)
	ctx.current_instruction = 0x880B16E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,588(r1)
	ctx.current_instruction = 0x880B16E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B16FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B16FC:
	// lwz r9,292(r1)
	ctx.current_instruction = 0x880B16FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r27,288(r1)
	ctx.current_instruction = 0x880B1704;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
loc_880B1708:
	// lwz r11,304(r1)
	ctx.current_instruction = 0x880B1708;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b1728
	if (!ctx.cr6.lt) goto loc_880B1728;
	// lwz r28,296(r1)
	ctx.current_instruction = 0x880B1714;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// lwz r26,300(r1)
	ctx.current_instruction = 0x880B171C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// stw r30,304(r1)
	ctx.current_instruction = 0x880B1720;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// b 0x880b1738
	goto loc_880B1738;
loc_880B1728:
	// lwz r29,308(r1)
	ctx.current_instruction = 0x880B1728;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r28,312(r1)
	ctx.current_instruction = 0x880B172C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r27,316(r1)
	ctx.current_instruction = 0x880B1730;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r26,320(r1)
	ctx.current_instruction = 0x880B1734;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
loc_880B1738:
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880B1738;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b17dc
	if (ctx.cr6.eq) goto loc_880B17DC;
	// lwz r11,692(r1)
	ctx.current_instruction = 0x880B1744;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 692);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// lwz r9,764(r1)
	ctx.current_instruction = 0x880B174C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 764);
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
	// stw r10,196(r1)
	ctx.current_instruction = 0x880B1754;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,188(r1)
	ctx.current_instruction = 0x880B175C;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// stw r28,372(r1)
	ctx.current_instruction = 0x880B1760;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r28.u32);
	// stw r11,148(r1)
	ctx.current_instruction = 0x880B1764;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r9,180(r1)
	ctx.current_instruction = 0x880B1768;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stw r29,368(r1)
	ctx.current_instruction = 0x880B176C;
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r29.u32);
	// stw r27,376(r1)
	ctx.current_instruction = 0x880B1770;
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r27.u32);
	// lwz r11,700(r1)
	ctx.current_instruction = 0x880B1774;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 700);
	// lwz r31,684(r1)
	ctx.current_instruction = 0x880B1778;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 684);
	// lwz r25,668(r1)
	ctx.current_instruction = 0x880B177C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lwz r21,660(r1)
	ctx.current_instruction = 0x880B1780;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r20,636(r1)
	ctx.current_instruction = 0x880B1784;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// lwz r19,628(r1)
	ctx.current_instruction = 0x880B1788;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r10,620(r1)
	ctx.current_instruction = 0x880B178C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// lwz r9,612(r1)
	ctx.current_instruction = 0x880B1790;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r8,604(r1)
	ctx.current_instruction = 0x880B1794;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r7,596(r1)
	ctx.current_instruction = 0x880B1798;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r6,588(r1)
	ctx.current_instruction = 0x880B179C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r5,580(r1)
	ctx.current_instruction = 0x880B17A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r4,572(r1)
	ctx.current_instruction = 0x880B17A4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// stw r26,380(r1)
	ctx.current_instruction = 0x880B17A8;
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r26.u32);
	// stw r16,172(r1)
	ctx.current_instruction = 0x880B17AC;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r16.u32);
	// stw r30,164(r1)
	ctx.current_instruction = 0x880B17B0;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r11,156(r1)
	ctx.current_instruction = 0x880B17B4;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r31,140(r1)
	ctx.current_instruction = 0x880B17B8;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r23,132(r1)
	ctx.current_instruction = 0x880B17BC;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r25,124(r1)
	ctx.current_instruction = 0x880B17C0;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r21,116(r1)
	ctx.current_instruction = 0x880B17C4;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r24,108(r1)
	ctx.current_instruction = 0x880B17C8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r22,100(r1)
	ctx.current_instruction = 0x880B17CC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r20,92(r1)
	ctx.current_instruction = 0x880B17D0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r19,84(r1)
	ctx.current_instruction = 0x880B17D4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x880b0090
	ctx.lr = 0x880B17DC;
	sub_880B0090(ctx, base);
loc_880B17DC:
	// lwz r11,804(r1)
	ctx.current_instruction = 0x880B17DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// lwz r10,304(r1)
	ctx.current_instruction = 0x880B17E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r9,772(r1)
	ctx.current_instruction = 0x880B17E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 772);
	// lwz r8,780(r1)
	ctx.current_instruction = 0x880B17E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 780);
	// lwz r7,788(r1)
	ctx.current_instruction = 0x880B17EC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 788);
	// lwz r6,796(r1)
	ctx.current_instruction = 0x880B17F0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// stw r10,0(r11)
	ctx.current_instruction = 0x880B17F4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r29,0(r9)
	ctx.current_instruction = 0x880B17F8;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// stw r28,0(r8)
	ctx.current_instruction = 0x880B17FC;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// stw r27,0(r7)
	ctx.current_instruction = 0x880B1800;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r27.u32);
	// stw r26,0(r6)
	ctx.current_instruction = 0x880B1804;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r26.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CCFA8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880CCFA8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CCFA8;
	ctx.current_instruction = 0x880CCFA8;
	// lwz r11,20(r3)
	ctx.current_instruction = 0x880CCFA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r10,0(r11)
	ctx.current_instruction = 0x880CCFB0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x880ccfe8
	if (!ctx.cr6.gt) goto loc_880CCFE8;
	// lwz r9,12(r11)
	ctx.current_instruction = 0x880CCFBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880ccfd4
	if (!ctx.cr6.eq) goto loc_880CCFD4;
loc_880CCFC8:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880CCFD4:
	// lwz r9,44(r11)
	ctx.current_instruction = 0x880CCFD4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// subf r8,r10,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r10.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x880ccfc8
	if (ctx.cr6.gt) goto loc_880CCFC8;
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
loc_880CCFE8:
	// bge cr6,0x880cd008
	if (!ctx.cr6.lt) goto loc_880CD008;
	// lwz r9,32(r11)
	ctx.current_instruction = 0x880CCFEC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880ccfc8
	if (ctx.cr6.eq) goto loc_880CCFC8;
	// lwz r9,36(r11)
	ctx.current_instruction = 0x880CCFF8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// subf r8,r4,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r4.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x880ccfc8
	if (ctx.cr6.gt) goto loc_880CCFC8;
loc_880CD008:
	// std r4,0(r11)
	ctx.current_instruction = 0x880CD008;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880CD710) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CD710;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CD710) {
			switch (rex_dispatch_address) {
				case 0x880CD718:
				case 0x880CD758:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CD710;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CD718: goto loc_880CD718;
		case 0x880CD758: goto loc_880CD758;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880CD718;
	__savegprlr_29(ctx, base);
loc_880CD718:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880CD718;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD728;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880cd744
	if (!ctx.cr6.eq) goto loc_880CD744;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880CD744:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r29)
	ctx.current_instruction = 0x880CD748;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CD758;
	sub_8805ADC8(ctx, base);
loc_880CD758:
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// beq cr6,0x880cd76c
	if (ctx.cr6.eq) goto loc_880CD76C;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880CD76C:
	// ld r10,0(r29)
	ctx.current_instruction = 0x880CD76C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// li r6,24
	ctx.r6.s64 = 24;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CD774;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r10,24
	ctx.r4.s64 = ctx.r10.s64 + 24;
	// std r4,0(r29)
	ctx.current_instruction = 0x880CD780;
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r4.u64);
	// lbz r3,3(r11)
	ctx.current_instruction = 0x880CD784;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r7,2(r11)
	ctx.current_instruction = 0x880CD78C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r8,1(r11)
	ctx.current_instruction = 0x880CD798;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CD79C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD7A8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,0(r31)
	ctx.current_instruction = 0x880CD7B4;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CD7B8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,1(r11)
	ctx.current_instruction = 0x880CD7BC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD7CC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// sth r3,4(r31)
	ctx.current_instruction = 0x880CD7D0;
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r3.u16);
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CD7D4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.current_instruction = 0x880CD7D8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r7,6(r31)
	ctx.current_instruction = 0x880CD7E4;
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r7.u16);
	// lbzu r3,2(r11)
	ctx.current_instruction = 0x880CD7E8;
	ea = 2 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD7EC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r3,8(r31)
	ctx.current_instruction = 0x880CD7F0;
	REX_STORE_U8(ctx.r31.u32 + 8, ctx.r3.u8);
	// lbzu r10,1(r11)
	ctx.current_instruction = 0x880CD7F4;
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r10,9(r31)
	ctx.current_instruction = 0x880CD7F8;
	REX_STORE_U8(ctx.r31.u32 + 9, ctx.r10.u8);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD7FC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r9,1(r11)
	ctx.current_instruction = 0x880CD800;
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD804;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r9,10(r31)
	ctx.current_instruction = 0x880CD808;
	REX_STORE_U8(ctx.r31.u32 + 10, ctx.r9.u8);
	// lbzu r8,1(r11)
	ctx.current_instruction = 0x880CD80C;
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD810;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r8,11(r31)
	ctx.current_instruction = 0x880CD814;
	REX_STORE_U8(ctx.r31.u32 + 11, ctx.r8.u8);
	// lbzu r7,1(r11)
	ctx.current_instruction = 0x880CD818;
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD81C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r7,12(r31)
	ctx.current_instruction = 0x880CD820;
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r7.u8);
	// lbzu r4,1(r11)
	ctx.current_instruction = 0x880CD824;
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD828;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r4,13(r31)
	ctx.current_instruction = 0x880CD82C;
	REX_STORE_U8(ctx.r31.u32 + 13, ctx.r4.u8);
	// lbzu r3,1(r11)
	ctx.current_instruction = 0x880CD830;
	ea = 1 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD834;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r3,14(r31)
	ctx.current_instruction = 0x880CD838;
	REX_STORE_U8(ctx.r31.u32 + 14, ctx.r3.u8);
	// lbzu r10,1(r11)
	ctx.current_instruction = 0x880CD83C;
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,15(r31)
	ctx.current_instruction = 0x880CD844;
	REX_STORE_U8(ctx.r31.u32 + 15, ctx.r10.u8);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD848;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r9,2(r11)
	ctx.current_instruction = 0x880CD84C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.current_instruction = 0x880CD850;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x880CD854;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CD860;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r30)
	ctx.current_instruction = 0x880CD874;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r8,6(r11)
	ctx.current_instruction = 0x880CD87C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r9,5(r11)
	ctx.current_instruction = 0x880CD880;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,7(r11)
	ctx.current_instruction = 0x880CD884;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,4(r11)
	ctx.current_instruction = 0x880CD890;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subfc r11,r6,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r6.u32;
	ctx.r11.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// and r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 & ctx.r5.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,4(r30)
	ctx.current_instruction = 0x880CD8B0;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D2238) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D2238;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D2238) {
			switch (rex_dispatch_address) {
				case 0x880D2240:
				case 0x880D22F0:
				case 0x880D2308:
				case 0x880D2348:
				case 0x880D2350:
				case 0x880D2360:
				case 0x880D2448:
				case 0x880D24AC:
				case 0x880D2564:
				case 0x880D2590:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D2238;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D2240: goto loc_880D2240;
		case 0x880D22F0: goto loc_880D22F0;
		case 0x880D2308: goto loc_880D2308;
		case 0x880D2348: goto loc_880D2348;
		case 0x880D2350: goto loc_880D2350;
		case 0x880D2360: goto loc_880D2360;
		case 0x880D2448: goto loc_880D2448;
		case 0x880D24AC: goto loc_880D24AC;
		case 0x880D2564: goto loc_880D2564;
		case 0x880D2590: goto loc_880D2590;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x880D2240;
	__savegprlr_25(ctx, base);
loc_880D2240:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880D2240;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// bne cr6,0x880d2268
	if (!ctx.cr6.eq) goto loc_880D2268;
loc_880D2258:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880D2268:
	// lwz r29,0(r31)
	ctx.current_instruction = 0x880D2268;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x880d2258
	if (ctx.cr6.eq) goto loc_880D2258;
	// lwz r11,60(r29)
	ctx.current_instruction = 0x880D2274;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x880d2284
	if (ctx.cr6.gt) goto loc_880D2284;
	// li r25,4
	ctx.r25.s64 = 4;
loc_880D2284:
	// lwz r11,32(r31)
	ctx.current_instruction = 0x880D2284;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x880d2544
	if (ctx.cr6.eq) goto loc_880D2544;
	// lwz r11,704(r31)
	ctx.current_instruction = 0x880D2294;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 704);
	// stw r26,32(r31)
	ctx.current_instruction = 0x880D2298;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r27,16(r31)
	ctx.current_instruction = 0x880D22A0;
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r27.u16);
	// bne cr6,0x880d25e0
	if (!ctx.cr6.eq) goto loc_880D25E0;
	// lwz r11,212(r29)
	ctx.current_instruction = 0x880D22A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d2320
	if (!ctx.cr6.eq) goto loc_880D2320;
	// lwz r11,60(r29)
	ctx.current_instruction = 0x880D22B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x880d2320
	if (ctx.cr6.gt) goto loc_880D2320;
	// stw r26,12(r31)
	ctx.current_instruction = 0x880D22C0;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880D22C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x880d22d8
	if (!ctx.cr6.lt) goto loc_880D22D8;
	// stw r26,4(r29)
	ctx.current_instruction = 0x880D22D0;
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
	// stw r27,12(r31)
	ctx.current_instruction = 0x880D22D4;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_880D22D8:
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880D22D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,236(r31)
	ctx.current_instruction = 0x880D22DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// subf. r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x880d22f0
	if (ctx.cr0.eq) goto loc_880D22F0;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812bd48
	ctx.lr = 0x880D22F0;
	sub_8812BD48(ctx, base);
loc_880D22F0:
	// lwz r11,236(r31)
	ctx.current_instruction = 0x880D22F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,4(r29)
	ctx.current_instruction = 0x880D22F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x880d2318
	if (!ctx.cr6.eq) goto loc_880D2318;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812baa8
	ctx.lr = 0x880D2308;
	sub_8812BAA8(ctx, base);
loc_880D2308:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880D2318:
	// stw r11,4(r29)
	ctx.current_instruction = 0x880D2318;
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x880d24b0
	goto loc_880D24B0;
loc_880D2320:
	// li r28,-2
	ctx.r28.s64 = -2;
loc_880D2324:
	// lwz r11,236(r31)
	ctx.current_instruction = 0x880D2324;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880d2384
	if (!ctx.cr6.eq) goto loc_880D2384;
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
loc_880D2334:
	// lwz r11,240(r31)
	ctx.current_instruction = 0x880D2334;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880d236c
	if (!ctx.cr6.eq) goto loc_880D236C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8812baa8
	ctx.lr = 0x880D2348;
	sub_8812BAA8(ctx, base);
loc_880D2348:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d1290
	ctx.lr = 0x880D2350;
	sub_880D1290(ctx, base);
loc_880D2350:
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8812c398
	ctx.lr = 0x880D2360;
	sub_8812C398(ctx, base);
loc_880D2360:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d25e4
	if (ctx.cr6.lt) goto loc_880D25E4;
	// b 0x880d2378
	goto loc_880D2378;
loc_880D236C:
	// lwz r11,16(r30)
	ctx.current_instruction = 0x880D236C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r26,16(r30)
	ctx.current_instruction = 0x880D2370;
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// stw r11,12(r30)
	ctx.current_instruction = 0x880D2374;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_880D2378:
	// lwz r11,236(r31)
	ctx.current_instruction = 0x880D2378;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d2334
	if (ctx.cr6.eq) goto loc_880D2334;
loc_880D2384:
	// lwz r11,60(r29)
	ctx.current_instruction = 0x880D2384;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,236(r31)
	ctx.current_instruction = 0x880D238C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// ble cr6,0x880d2470
	if (!ctx.cr6.gt) goto loc_880D2470;
	// rlwinm r10,r11,5,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sth r10,18(r31)
	ctx.current_instruction = 0x880D239C;
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r10.u16);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r7,8(r29)
	ctx.current_instruction = 0x880D23A4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// subfic r6,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r7.u64;
	// srw r11,r9,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r11,64(r31)
	ctx.current_instruction = 0x880D23B0;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stw r11,68(r31)
	ctx.current_instruction = 0x880D23B8;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r10,8(r29)
	ctx.current_instruction = 0x880D23BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x880d23ec
	if (!ctx.cr6.eq) goto loc_880D23EC;
	// sth r27,16(r31)
	ctx.current_instruction = 0x880D23CC;
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r27.u16);
	// lwz r9,12(r29)
	ctx.current_instruction = 0x880D23D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880d2408
	if (ctx.cr6.lt) goto loc_880D2408;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880D23EC:
	// lwz r9,12(r29)
	ctx.current_instruction = 0x880D23EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// subfc r7,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// eqv r6,r9,r10
	ctx.r6.u64 = ~(ctx.r9.u64 ^ ctx.r10.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// sth r3,16(r31)
	ctx.current_instruction = 0x880D2404;
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r3.u16);
loc_880D2408:
	// lwz r9,12(r31)
	ctx.current_instruction = 0x880D2408;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880d2428
	if (!ctx.cr6.eq) goto loc_880D2428;
	// lhz r8,16(r31)
	ctx.current_instruction = 0x880D2414;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x880d2450
	if (!ctx.cr6.eq) goto loc_880D2450;
	// stw r26,236(r31)
	ctx.current_instruction = 0x880D2420;
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// b 0x880d2324
	goto loc_880D2324;
loc_880D2428:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x880d2450
	if (!ctx.cr6.eq) goto loc_880D2450;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x880d2450
	if (!ctx.cr6.eq) goto loc_880D2450;
	// stw r28,276(r31)
	ctx.current_instruction = 0x880D2438;
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stw r26,236(r31)
	ctx.current_instruction = 0x880D2440;
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// bl 0x8812baa8
	ctx.lr = 0x880D2448;
	sub_8812BAA8(ctx, base);
loc_880D2448:
	// stw r27,284(r31)
	ctx.current_instruction = 0x880D2448;
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r27.u32);
	// b 0x880d2324
	goto loc_880D2324;
loc_880D2450:
	// lwz r8,12(r29)
	ctx.current_instruction = 0x880D2450;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880d249c
	if (ctx.cr6.lt) goto loc_880D249C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x880d2468
	if (!ctx.cr6.eq) goto loc_880D2468;
	// stw r28,276(r31)
	ctx.current_instruction = 0x880D2464;
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
loc_880D2468:
	// stw r26,236(r31)
	ctx.current_instruction = 0x880D2468;
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// b 0x880d2324
	goto loc_880D2324;
loc_880D2470:
	// subfic r10,r25,32
	ctx.xer.ca = ctx.r25.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - ctx.r25.u64;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r25,4
	ctx.r9.s64 = ctx.r25.s64 + 4;
	// srw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r6,16(r31)
	ctx.current_instruction = 0x880D2480;
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r6.u16);
	// slw r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r4,8(r29)
	ctx.current_instruction = 0x880D2488;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// subfic r3,r4,29
	ctx.xer.ca = ctx.r4.u32 <= 29;
	ctx.r3.u64 = static_cast<uint64_t>(29) - ctx.r4.u64;
	// srw r11,r7,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r3.u8 & 0x3F));
	// stw r11,64(r31)
	ctx.current_instruction = 0x880D2494;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	ctx.current_instruction = 0x880D2498;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_880D249C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d24ac
	if (!ctx.cr6.eq) goto loc_880D24AC;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812bd48
	ctx.lr = 0x880D24AC;
	sub_8812BD48(ctx, base);
loc_880D24AC:
	// stw r26,236(r31)
	ctx.current_instruction = 0x880D24AC;
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
loc_880D24B0:
	// lwz r11,156(r31)
	ctx.current_instruction = 0x880D24B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880d2538
	if (!ctx.cr6.eq) goto loc_880D2538;
	// lhz r11,154(r31)
	ctx.current_instruction = 0x880D24BC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 154);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880d25ec
	if (!ctx.cr6.eq) goto loc_880D25EC;
	// lis r11,-6790
	ctx.r11.s64 = -444989440;
	// ld r10,168(r31)
	ctx.current_instruction = 0x880D24D0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 168);
	// lis r9,-10561
	ctx.r9.s64 = -692125696;
	// lwz r8,336(r31)
	ctx.current_instruction = 0x880D24D8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// ori r7,r11,17085
	ctx.r7.u64 = ctx.r11.u64 | 17085;
	// ori r6,r9,38101
	ctx.r6.u64 = ctx.r9.u64 | 38101;
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// rldimi r7,r6,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// lis r5,152
	ctx.r5.s64 = 9961472;
	// mulhd r9,r10,r7
	ctx.r9.s64 = static_cast<int64_t>((static_cast<__int128>(static_cast<int64_t>(ctx.r10.s64)) * static_cast<__int128>(static_cast<int64_t>(ctx.r7.s64))) >> 64);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r11,r5,38528
	ctx.r11.u64 = ctx.r5.u64 | 38528;
	// sradi r9,r3,23
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0x7FFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s64 >> 23;
	// divd r6,r10,r11
	ctx.r6.s64 = (ctx.r11.s64 && !(ctx.r10.s64 == INT64_MIN && ctx.r11.s64 == -1)) ? ctx.r10.s64 / ctx.r11.s64 : 0;
	// rldicl r8,r9,1,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0x1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulld r3,r5,r11
	ctx.r3.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r11.u64);
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// mulld r11,r6,r4
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r4.u64);
	// mulld r9,r10,r4
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r4.u64);
	// divd r10,r9,r7
	ctx.r10.s64 = (ctx.r7.s64 && !(ctx.r9.s64 == INT64_MIN && ctx.r7.s64 == -1)) ? ctx.r9.s64 / ctx.r7.s64 : 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r8,184(r31)
	ctx.current_instruction = 0x880D2528;
	REX_STORE_U64(ctx.r31.u32 + 184, ctx.r8.u64);
loc_880D252C:
	// sth r26,154(r31)
	ctx.current_instruction = 0x880D252C;
	REX_STORE_U16(ctx.r31.u32 + 154, ctx.r26.u16);
	// stw r26,156(r31)
	ctx.current_instruction = 0x880D2530;
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r26.u32);
loc_880D2534:
	// stw r27,160(r31)
	ctx.current_instruction = 0x880D2534;
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r27.u32);
loc_880D2538:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x880D2538;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d25e0
	if (ctx.cr6.eq) goto loc_880D25E0;
loc_880D2544:
	// lwz r11,64(r31)
	ctx.current_instruction = 0x880D2544;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// stw r27,32(r31)
	ctx.current_instruction = 0x880D2548;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// ble cr6,0x880d2584
	if (!ctx.cr6.gt) goto loc_880D2584;
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
loc_880D2558:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8812c818
	ctx.lr = 0x880D2564;
	sub_8812C818(ctx, base);
loc_880D2564:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d25e4
	if (ctx.cr6.lt) goto loc_880D25E4;
	// lwz r11,64(r31)
	ctx.current_instruction = 0x880D256C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,64(r31)
	ctx.current_instruction = 0x880D2578;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// bgt cr6,0x880d2558
	if (ctx.cr6.gt) goto loc_880D2558;
loc_880D2584:
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// lwz r4,64(r31)
	ctx.current_instruction = 0x880D2588;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8812c818
	ctx.lr = 0x880D2590;
	sub_8812C818(ctx, base);
loc_880D2590:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d25e4
	if (ctx.cr6.lt) goto loc_880D25E4;
	// lhz r11,34(r29)
	ctx.current_instruction = 0x880D2598;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d25d4
	if (ctx.cr6.eq) goto loc_880D25D4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// li r8,32767
	ctx.r8.s64 = 32767;
loc_880D25AC:
	// lwz r9,320(r29)
	ctx.current_instruction = 0x880D25AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 320);
	// mulli r10,r11,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r8,112(r10)
	ctx.current_instruction = 0x880D25C0;
	REX_STORE_U16(ctx.r10.u32 + 112, ctx.r8.u16);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lhz r7,34(r29)
	ctx.current_instruction = 0x880D25C8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 34);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880d25ac
	if (ctx.cr6.lt) goto loc_880D25AC;
loc_880D25D4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,72(r29)
	ctx.current_instruction = 0x880D25D8;
	REX_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// stw r26,32(r31)
	ctx.current_instruction = 0x880D25DC;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
loc_880D25E0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_880D25E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880D25EC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880d252c
	if (!ctx.cr6.eq) goto loc_880D252C;
	// lis r11,-6790
	ctx.r11.s64 = -444989440;
	// ld r10,168(r31)
	ctx.current_instruction = 0x880D25F8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 168);
	// lis r9,-10561
	ctx.r9.s64 = -692125696;
	// lwz r8,336(r31)
	ctx.current_instruction = 0x880D2600;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// ori r7,r11,17085
	ctx.r7.u64 = ctx.r11.u64 | 17085;
	// ld r6,176(r31)
	ctx.current_instruction = 0x880D2608;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r31.u32 + 176);
	// ori r5,r9,38101
	ctx.r5.u64 = ctx.r9.u64 | 38101;
	// sth r27,154(r31)
	ctx.current_instruction = 0x880D2610;
	REX_STORE_U16(ctx.r31.u32 + 154, ctx.r27.u16);
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// rldimi r7,r5,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// lis r4,152
	ctx.r4.s64 = 9961472;
	// mulhd r9,r10,r7
	ctx.r9.s64 = static_cast<int64_t>((static_cast<__int128>(static_cast<int64_t>(ctx.r10.s64)) * static_cast<__int128>(static_cast<int64_t>(ctx.r7.s64))) >> 64);
	// std r6,168(r31)
	ctx.current_instruction = 0x880D2624;
	REX_STORE_U64(ctx.r31.u32 + 168, ctx.r6.u64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r11,r4,38528
	ctx.r11.u64 = ctx.r4.u64 | 38528;
	// sradi r9,r9,23
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0x7FFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s64 >> 23;
	// divd r6,r10,r11
	ctx.r6.s64 = (ctx.r11.s64 && !(ctx.r10.s64 == INT64_MIN && ctx.r11.s64 == -1)) ? ctx.r10.s64 / ctx.r11.s64 : 0;
	// rldicl r8,r9,1,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0x1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulld r4,r5,r11
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r11.u64);
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// mulld r11,r6,r3
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r3.u64);
	// mulld r9,r10,r3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r3.u64);
	// divd r10,r9,r7
	ctx.r10.s64 = (ctx.r7.s64 && !(ctx.r9.s64 == INT64_MIN && ctx.r7.s64 == -1)) ? ctx.r9.s64 / ctx.r7.s64 : 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r8,184(r31)
	ctx.current_instruction = 0x880D265C;
	REX_STORE_U64(ctx.r31.u32 + 184, ctx.r8.u64);
	// b 0x880d2534
	goto loc_880D2534;
}

DEFINE_REX_FUNC(sub_880DC998) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880DC998;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880DC998) {
			switch (rex_dispatch_address) {
				case 0x880DC9A0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880DC998;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x880DC9A0: goto loc_880DC9A0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x880DC9A0;
	__savegprlr_22(ctx, base);
loc_880DC9A0:
	// li r8,8
	ctx.r8.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r5,6
	ctx.r10.s64 = ctx.r5.s64 + 6;
	// addi r11,r3,6
	ctx.r11.s64 = ctx.r3.s64 + 6;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_880DC9B4:
	// lbz r7,-6(r10)
	ctx.current_instruction = 0x880DC9B4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + -6);
	// lbz r8,-6(r11)
	ctx.current_instruction = 0x880DC9B8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// lbz r3,-5(r10)
	ctx.current_instruction = 0x880DC9BC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + -5);
	// lbz r5,-5(r11)
	ctx.current_instruction = 0x880DC9C0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + -5);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lbz r7,-4(r11)
	ctx.current_instruction = 0x880DC9C8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// subf r5,r3,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r3.u64;
	// lbz r3,-4(r10)
	ctx.current_instruction = 0x880DC9D0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + -4);
	// srawi r31,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 31;
	// lbz r28,-3(r10)
	ctx.current_instruction = 0x880DC9D8;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// srawi r29,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r5.s32 >> 31;
	// lbz r30,-3(r11)
	ctx.current_instruction = 0x880DC9E0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// subf r3,r3,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r3.u64;
	// lbz r27,-2(r11)
	ctx.current_instruction = 0x880DC9E8;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// xor r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r31.u64;
	// lbz r26,-2(r10)
	ctx.current_instruction = 0x880DC9F0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// xor r7,r5,r29
	ctx.r7.u64 = ctx.r5.u64 ^ ctx.r29.u64;
	// lbz r5,-1(r11)
	ctx.current_instruction = 0x880DC9F8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// srawi r25,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r3.s32 >> 31;
	// lbz r24,-1(r10)
	ctx.current_instruction = 0x880DCA00;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// subf r30,r28,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r28.u64;
	// lbz r28,1(r11)
	ctx.current_instruction = 0x880DCA08;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r7,r29,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r29.u64;
	// lbz r29,1(r10)
	ctx.current_instruction = 0x880DCA10;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r8,r31,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r31.u64;
	// lbz r31,0(r11)
	ctx.current_instruction = 0x880DCA18;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// xor r3,r3,r25
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r25.u64;
	// lbz r23,0(r10)
	ctx.current_instruction = 0x880DCA20;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r22,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r30.s32 >> 31;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r27,r26,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r26.u64;
	// subf r7,r25,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r25.u64;
	// xor r3,r30,r22
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r22.u64;
	// srawi r30,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r27.s32 >> 31;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r5,r24,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r24.u64;
	// subf r7,r22,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r22.u64;
	// xor r3,r27,r30
	ctx.r3.u64 = ctx.r27.u64 ^ ctx.r30.u64;
	// srawi r27,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r5.s32 >> 31;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r29,r29,r28
	ctx.r29.u64 = ctx.r28.u64 - ctx.r29.u64;
	// subf r7,r30,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r30.u64;
	// xor r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r27.u64;
	// srawi r3,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r29.s32 >> 31;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r31,r23,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r23.u64;
	// subf r7,r27,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r27.u64;
	// xor r5,r29,r3
	ctx.r5.u64 = ctx.r29.u64 ^ ctx.r3.u64;
	// srawi r30,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r31.s32 >> 31;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// xor r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 ^ ctx.r30.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r30,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r30.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bdnz 0x880dc9b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DC9B4;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DE038) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880DE038;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880DE038) {
			switch (rex_dispatch_address) {
				case 0x880DE040:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880DE038;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880DE040: goto loc_880DE040;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880DE040;
	__savegprlr_14(ctx, base);
loc_880DE040:
	// stwu r1,-2336(r1)
	ctx.current_instruction = 0x880DE040;
	ea = -2336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// stw r6,2380(r1)
	ctx.current_instruction = 0x880DE048;
	REX_STORE_U32(ctx.r1.u32 + 2380, ctx.r6.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// srawi r23,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r11.s32 >> 2;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// subfic r30,r8,8
	ctx.xer.ca = ctx.r8.u32 <= 8;
	ctx.r30.u64 = static_cast<uint64_t>(8) - ctx.r8.u64;
	// mullw r11,r10,r6
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// li r25,8
	ctx.r25.s64 = 8;
	// add r28,r11,r5
	ctx.r28.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_880DE06C:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r27,r28,1
	ctx.r27.s64 = ctx.r28.s64 + 1;
	// addi r26,r29,2
	ctx.r26.s64 = ctx.r29.s64 + 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880DE080:
	// add r11,r28,r10
	ctx.r11.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lbzx r9,r28,r10
	ctx.current_instruction = 0x880DE084;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// lbz r31,1(r11)
	ctx.current_instruction = 0x880DE088;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r24,2(r11)
	ctx.current_instruction = 0x880DE08C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lbz r31,-1(r11)
	ctx.current_instruction = 0x880DE094;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r9,r24,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r24.u64;
	// subf r11,r31,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srawi. r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x880de0bc
	if (!ctx.cr0.lt) goto loc_880DE0BC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x880de0c8
	goto loc_880DE0C8;
loc_880DE0BC:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x880de0c8
	if (!ctx.cr6.gt) goto loc_880DE0C8;
	// li r9,255
	ctx.r9.s64 = 255;
loc_880DE0C8:
	// stbx r9,r29,r10
	ctx.current_instruction = 0x880DE0C8;
	REX_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r9.u8);
	// add r11,r28,r10
	ctx.r11.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lbzx r24,r28,r10
	ctx.current_instruction = 0x880DE0D0;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x880DE0D4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r22,3(r11)
	ctx.current_instruction = 0x880DE0D8;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r31,2(r11)
	ctx.current_instruction = 0x880DE0DC;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r9,r22,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r22.u64;
	// subf r11,r24,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r24.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srawi. r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x880de108
	if (!ctx.cr0.lt) goto loc_880DE108;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x880de114
	goto loc_880DE114;
loc_880DE108:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x880de114
	if (!ctx.cr6.gt) goto loc_880DE114;
	// li r9,255
	ctx.r9.s64 = 255;
loc_880DE114:
	// add r31,r29,r10
	ctx.r31.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r11,r27,r10
	ctx.r11.u64 = ctx.r27.u64 + ctx.r10.u64;
	// stb r9,1(r31)
	ctx.current_instruction = 0x880DE11C;
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// lbzx r22,r27,r10
	ctx.current_instruction = 0x880DE120;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// lbz r24,3(r11)
	ctx.current_instruction = 0x880DE124;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r31,2(r11)
	ctx.current_instruction = 0x880DE128;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x880DE12C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r9,r24,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r24.u64;
	// subf r11,r22,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r22.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srawi. r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x880de158
	if (!ctx.cr0.lt) goto loc_880DE158;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x880de164
	goto loc_880DE164;
loc_880DE158:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x880de164
	if (!ctx.cr6.gt) goto loc_880DE164;
	// li r11,255
	ctx.r11.s64 = 255;
loc_880DE164:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r26,r10
	ctx.current_instruction = 0x880DE168;
	REX_STORE_U8(ctx.r26.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// bdnz 0x880de080
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DE080;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r28,r28,r6
	ctx.r28.u64 = ctx.r28.u64 + ctx.r6.u64;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bne 0x880de06c
	if (!ctx.cr0.eq) goto loc_880DE06C;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// addi r29,r7,640
	ctx.r29.s64 = ctx.r7.s64 + 640;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// srawi r11,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// mullw r25,r10,r6
	ctx.r25.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r31,r8,7
	ctx.r31.s64 = ctx.r8.s64 + 7;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r28,r6,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r6.u64;
	// li r24,9
	ctx.r24.s64 = 9;
loc_880DE1B8:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r27,r28,3
	ctx.r27.s64 = ctx.r28.s64 + 3;
	// addi r26,r29,3
	ctx.r26.s64 = ctx.r29.s64 + 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880DE1CC:
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lbzx r22,r28,r11
	ctx.current_instruction = 0x880DE1D0;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbzx r3,r9,r10
	ctx.current_instruction = 0x880DE1D4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r30,r10,r6
	ctx.current_instruction = 0x880DE1D8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// lbzx r21,r4,r10
	ctx.current_instruction = 0x880DE1DC;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// subf r3,r21,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r21.u64;
	// subf r10,r22,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r22.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// srawi. r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880de208
	if (!ctx.cr0.lt) goto loc_880DE208;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880de214
	goto loc_880DE214;
loc_880DE208:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880de214
	if (!ctx.cr6.gt) goto loc_880DE214;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DE214:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stbx r3,r29,r11
	ctx.current_instruction = 0x880DE21C;
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r21,0(r10)
	ctx.current_instruction = 0x880DE224;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r30,r10,r6
	ctx.current_instruction = 0x880DE228;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// lbzx r3,r9,r10
	ctx.current_instruction = 0x880DE22C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r22,r4,r10
	ctx.current_instruction = 0x880DE230;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// subf r3,r22,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r22.u64;
	// subf r10,r21,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r21.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// srawi. r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880de25c
	if (!ctx.cr0.lt) goto loc_880DE25C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880de268
	goto loc_880DE268;
loc_880DE25C:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880de268
	if (!ctx.cr6.gt) goto loc_880DE268;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DE268:
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stb r30,1(r3)
	ctx.current_instruction = 0x880DE278;
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r30.u8);
	// lbzx r21,r4,r10
	ctx.current_instruction = 0x880DE27C;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r30,r10,r6
	ctx.current_instruction = 0x880DE280;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// lbzx r3,r9,r10
	ctx.current_instruction = 0x880DE284;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbz r22,0(r10)
	ctx.current_instruction = 0x880DE288;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subf r3,r21,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r21.u64;
	// subf r10,r22,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r22.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// srawi. r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880de2b4
	if (!ctx.cr0.lt) goto loc_880DE2B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880de2c0
	goto loc_880DE2C0;
loc_880DE2B4:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880de2c0
	if (!ctx.cr6.gt) goto loc_880DE2C0;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DE2C0:
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stb r30,2(r3)
	ctx.current_instruction = 0x880DE2CC;
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r30.u8);
	// lbzx r3,r9,r10
	ctx.current_instruction = 0x880DE2D0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r30,r10,r6
	ctx.current_instruction = 0x880DE2D4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// lbzx r22,r4,r10
	ctx.current_instruction = 0x880DE2D8;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lbzx r30,r27,r11
	ctx.current_instruction = 0x880DE2E0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subf r3,r22,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r22.u64;
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// srawi. r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880de308
	if (!ctx.cr0.lt) goto loc_880DE308;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880de314
	goto loc_880DE314;
loc_880DE308:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880de314
	if (!ctx.cr6.gt) goto loc_880DE314;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DE314:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r26,r11
	ctx.current_instruction = 0x880DE318;
	REX_STORE_U8(ctx.r26.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880de1cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DE1CC;
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r28,r28,r6
	ctx.r28.u64 = ctx.r28.u64 + ctx.r6.u64;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bne 0x880de1b8
	if (!ctx.cr0.eq) goto loc_880DE1B8;
	// add r11,r25,r23
	ctx.r11.u64 = ctx.r25.u64 + ctx.r23.u64;
	// addi r3,r7,1280
	ctx.r3.s64 = ctx.r7.s64 + 1280;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subfic r5,r8,64
	ctx.xer.ca = ctx.r8.u32 <= 64;
	ctx.r5.u64 = static_cast<uint64_t>(64) - ctx.r8.u64;
	// stw r3,44(r1)
	ctx.current_instruction = 0x880DE344;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r3.u32);
	// addi r10,r1,95
	ctx.r10.s64 = ctx.r1.s64 + 95;
	// stw r5,48(r1)
	ctx.current_instruction = 0x880DE34C;
	REX_STORE_U32(ctx.r1.u32 + 48, ctx.r5.u32);
	// subf r5,r6,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r7,r5,1
	ctx.r7.s64 = ctx.r5.s64 + 1;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r10,52(r1)
	ctx.current_instruction = 0x880DE360;
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r10.u32);
	// subfic r20,r6,-2
	ctx.xer.ca = ctx.r6.u32 <= 4294967294;
	ctx.r20.u64 = static_cast<uint64_t>(-2) - ctx.r6.u64;
	// stw r7,36(r1)
	ctx.current_instruction = 0x880DE368;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r7.u32);
	// stw r5,32(r1)
	ctx.current_instruction = 0x880DE36C;
	REX_STORE_U32(ctx.r1.u32 + 32, ctx.r5.u32);
	// subfic r19,r6,1
	ctx.xer.ca = ctx.r6.u32 <= 1;
	ctx.r19.u64 = static_cast<uint64_t>(1) - ctx.r6.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// subfic r18,r6,2
	ctx.xer.ca = ctx.r6.u32 <= 2;
	ctx.r18.u64 = static_cast<uint64_t>(2) - ctx.r6.u64;
	// subfic r27,r6,3
	ctx.xer.ca = ctx.r6.u32 <= 3;
	ctx.r27.u64 = static_cast<uint64_t>(3) - ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subfic r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r6.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
	// stw r27,40(r1)
	ctx.current_instruction = 0x880DE388;
	REX_STORE_U32(ctx.r1.u32 + 40, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,28(r1)
	ctx.current_instruction = 0x880DE390;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r10.u32);
	// stw r6,20(r1)
	ctx.current_instruction = 0x880DE394;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r6.u32);
	// addi r10,r10,-6
	ctx.r10.s64 = ctx.r10.s64 + -6;
	// stw r11,24(r1)
	ctx.current_instruction = 0x880DE39C;
	REX_STORE_U32(ctx.r1.u32 + 24, ctx.r11.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// b 0x880de3c0
	goto loc_880DE3C0;
loc_880DE3A8:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r6,20(r1)
	ctx.current_instruction = 0x880DE3AC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r10,r10,-6
	ctx.r10.s64 = ctx.r10.s64 + -6;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// b 0x880de3c0
	goto loc_880DE3C0;
loc_880DE3BC:
	// lwz r6,20(r1)
	ctx.current_instruction = 0x880DE3BC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
loc_880DE3C0:
	// add r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r26,0(r11)
	ctx.current_instruction = 0x880DE3C4;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r28,r7,r9
	ctx.current_instruction = 0x880DE3C8;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// add r5,r20,r11
	ctx.r5.u64 = ctx.r20.u64 + ctx.r11.u64;
	// add r31,r19,r11
	ctx.r31.u64 = ctx.r19.u64 + ctx.r11.u64;
	// lbz r24,-2(r11)
	ctx.current_instruction = 0x880DE3D4;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// lbz r23,-1(r11)
	ctx.current_instruction = 0x880DE3DC;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// add r30,r18,r11
	ctx.r30.u64 = ctx.r18.u64 + ctx.r11.u64;
	// lbz r22,1(r11)
	ctx.current_instruction = 0x880DE3E4;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r15,r4,r3
	ctx.current_instruction = 0x880DE3E8;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// add r29,r27,r11
	ctx.r29.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lbzx r26,r9,r3
	ctx.current_instruction = 0x880DE3F0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// lbzx r3,r20,r11
	ctx.current_instruction = 0x880DE3F4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r11.u32);
	// stw r3,16(r1)
	ctx.current_instruction = 0x880DE3F8;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r3.u32);
	// add r26,r26,r23
	ctx.r26.u64 = ctx.r26.u64 + ctx.r23.u64;
	// lbzx r27,r9,r5
	ctx.current_instruction = 0x880DE400;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lbzx r25,r9,r31
	ctx.current_instruction = 0x880DE404;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// add r27,r27,r24
	ctx.r27.u64 = ctx.r27.u64 + ctx.r24.u64;
	// lbzx r24,r9,r30
	ctx.current_instruction = 0x880DE40C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// lbz r23,2(r11)
	ctx.current_instruction = 0x880DE410;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r25,r25,r22
	ctx.r25.u64 = ctx.r25.u64 + ctx.r22.u64;
	// lbzx r17,r4,r5
	ctx.current_instruction = 0x880DE418;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// rlwinm r22,r26,3,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r24,r23
	ctx.r5.u64 = ctx.r24.u64 + ctx.r23.u64;
	// lbzx r16,r4,r31
	ctx.current_instruction = 0x880DE424;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r31.u32);
	// add r26,r26,r22
	ctx.r26.u64 = ctx.r26.u64 + ctx.r22.u64;
	// lbzx r14,r7,r4
	ctx.current_instruction = 0x880DE42C;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// rlwinm r31,r5,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r6,r6,r11
	ctx.current_instruction = 0x880DE434;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r21,r27,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r3,r9,r29
	ctx.current_instruction = 0x880DE43C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// subf r26,r15,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r15.u64;
	// lbz r24,3(r11)
	ctx.current_instruction = 0x880DE444;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r15,r5,r31
	ctx.r15.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r5,r4,r29
	ctx.current_instruction = 0x880DE44C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r29.u32);
	// rlwinm r23,r28,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r30,r4,r30
	ctx.current_instruction = 0x880DE454;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r30.u32);
	// add r21,r27,r21
	ctx.r21.u64 = ctx.r27.u64 + ctx.r21.u64;
	// lbz r22,0(r7)
	ctx.current_instruction = 0x880DE45C;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// rlwinm r27,r25,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// subf r23,r17,r21
	ctx.r23.u64 = ctx.r21.u64 - ctx.r17.u64;
	// lbzx r21,r19,r11
	ctx.current_instruction = 0x880DE46C;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r11.u32);
	// add r25,r25,r27
	ctx.r25.u64 = ctx.r25.u64 + ctx.r27.u64;
	// lbzx r17,r18,r11
	ctx.current_instruction = 0x880DE474;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r11.u32);
	// subf r29,r14,r28
	ctx.r29.u64 = ctx.r28.u64 - ctx.r14.u64;
	// lwz r27,40(r1)
	ctx.current_instruction = 0x880DE47C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 40);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// lwz r31,16(r1)
	ctx.current_instruction = 0x880DE484;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// subf r28,r30,r15
	ctx.r28.u64 = ctx.r15.u64 - ctx.r30.u64;
	// stw r5,16(r1)
	ctx.current_instruction = 0x880DE48C;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r5.u32);
	// subf r5,r6,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r6.u64;
	// subf r31,r31,r23
	ctx.r31.u64 = ctx.r23.u64 - ctx.r31.u64;
	// subf r6,r16,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r16.u64;
	// lbzx r26,r27,r11
	ctx.current_instruction = 0x880DE49C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// subf r30,r22,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r22.u64;
	// add r25,r31,r8
	ctx.r25.u64 = ctx.r31.u64 + ctx.r8.u64;
	// rlwinm r29,r3,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r5,r8
	ctx.r24.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r31,r21,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r21.u64;
	// subf r5,r17,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r17.u64;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r6,r30,r8
	ctx.r6.u64 = ctx.r30.u64 + ctx.r8.u64;
	// srawi r30,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r25.s32 >> 1;
	// lwz r25,16(r1)
	ctx.current_instruction = 0x880DE4C4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// srawi r28,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r24.s32 >> 1;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r3,r25,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r25.u64;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// srawi r31,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 1;
	// srawi r29,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r5.s32 >> 1;
	// sth r6,6(r10)
	ctx.current_instruction = 0x880DE4E4;
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r6.u16);
	// subf r5,r26,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsh r30,r28
	ctx.r30.s64 = ctx.r28.s16;
	// sth r3,2(r10)
	ctx.current_instruction = 0x880DE4F4;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r30,4(r10)
	ctx.current_instruction = 0x880DE4FC;
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r30.u16);
	// extsh r31,r29
	ctx.r31.s64 = ctx.r29.s16;
	// add r6,r5,r8
	ctx.r6.u64 = ctx.r5.u64 + ctx.r8.u64;
	// sth r3,8(r10)
	ctx.current_instruction = 0x880DE508;
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r3.u16);
	// sth r31,10(r10)
	ctx.current_instruction = 0x880DE50C;
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r31.u16);
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// sthu r3,12(r10)
	ctx.current_instruction = 0x880DE520;
	ea = 12 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x880de3bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DE3BC;
	// lwz r10,36(r1)
	ctx.current_instruction = 0x880DE528;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r11,2380(r1)
	ctx.current_instruction = 0x880DE52C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2380);
	// lwz r6,32(r1)
	ctx.current_instruction = 0x880DE530;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 32);
	// lwz r5,24(r1)
	ctx.current_instruction = 0x880DE534;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 24);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,28(r1)
	ctx.current_instruction = 0x880DE53C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r7,36(r1)
	ctx.current_instruction = 0x880DE548;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r7.u32);
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// stw r6,32(r1)
	ctx.current_instruction = 0x880DE550;
	REX_STORE_U32(ctx.r1.u32 + 32, ctx.r6.u32);
	// stw r11,24(r1)
	ctx.current_instruction = 0x880DE554;
	REX_STORE_U32(ctx.r1.u32 + 24, ctx.r11.u32);
	// stw r10,28(r1)
	ctx.current_instruction = 0x880DE558;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r10.u32);
	// bne 0x880de3a8
	if (!ctx.cr0.eq) goto loc_880DE3A8;
	// lwz r11,52(r1)
	ctx.current_instruction = 0x880DE560;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// li r27,9
	ctx.r27.s64 = 9;
	// lwz r31,44(r1)
	ctx.current_instruction = 0x880DE568;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// lwz r3,48(r1)
	ctx.current_instruction = 0x880DE56C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 48);
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
loc_880DE574:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 1;
	// addi r29,r31,2
	ctx.r29.s64 = ctx.r31.s64 + 2;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880DE58C:
	// lhz r10,-4(r11)
	ctx.current_instruction = 0x880DE58C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r9,-6(r11)
	ctx.current_instruction = 0x880DE590;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -6);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lhz r7,-8(r11)
	ctx.current_instruction = 0x880DE598;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhz r5,-2(r11)
	ctx.current_instruction = 0x880DE5A0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r26,r7
	ctx.r26.s64 = ctx.r7.s16;
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r26,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r26.u64;
	// subf r10,r7,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r7.u64;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// srawi. r9,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x880de5d4
	if (!ctx.cr0.lt) goto loc_880DE5D4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x880de5e0
	goto loc_880DE5E0;
loc_880DE5D4:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x880de5e0
	if (!ctx.cr6.gt) goto loc_880DE5E0;
	// li r9,255
	ctx.r9.s64 = 255;
loc_880DE5E0:
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lhz r26,0(r11)
	ctx.current_instruction = 0x880DE5E4;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r9,r26
	ctx.r9.s64 = ctx.r26.s16;
	// stbx r25,r4,r31
	ctx.current_instruction = 0x880DE5F4;
	REX_STORE_U8(ctx.r4.u32 + ctx.r31.u32, ctx.r25.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r6,r6,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r10,r9,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r9.u64;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// srawi. r10,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880de618
	if (!ctx.cr0.lt) goto loc_880DE618;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880de624
	goto loc_880DE624;
loc_880DE618:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880de624
	if (!ctx.cr6.gt) goto loc_880DE624;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DE624:
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lhz r7,2(r11)
	ctx.current_instruction = 0x880DE628;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// stbx r6,r30,r4
	ctx.current_instruction = 0x880DE638;
	REX_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r6.u8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r9,r5,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r5.u64;
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// srawi. r10,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880de65c
	if (!ctx.cr0.lt) goto loc_880DE65C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880de668
	goto loc_880DE668;
loc_880DE65C:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880de668
	if (!ctx.cr6.gt) goto loc_880DE668;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DE668:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stbx r10,r29,r4
	ctx.current_instruction = 0x880DE670;
	REX_STORE_U8(ctx.r29.u32 + ctx.r4.u32, ctx.r10.u8);
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// bdnz 0x880de58c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DE58C;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x880de574
	if (!ctx.cr0.eq) goto loc_880DE574;
	// addi r1,r1,2336
	ctx.r1.s64 = ctx.r1.s64 + 2336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880ED660) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880ED660);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880ED660;
	ctx.current_instruction = 0x880ED660;
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// lis r10,-30705
	ctx.r10.s64 = -2012282880;
	// addi r9,r11,-12056
	ctx.r9.s64 = ctx.r11.s64 + -12056;
	// addi r5,r10,-12904
	ctx.r5.s64 = ctx.r10.s64 + -12904;
	// lis r8,-30705
	ctx.r8.s64 = -2012282880;
	// stw r9,8224(r3)
	ctx.current_instruction = 0x880ED674;
	REX_STORE_U32(ctx.r3.u32 + 8224, ctx.r9.u32);
	// lis r7,-30705
	ctx.r7.s64 = -2012282880;
	// stw r5,8220(r3)
	ctx.current_instruction = 0x880ED67C;
	REX_STORE_U32(ctx.r3.u32 + 8220, ctx.r5.u32);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r4,r8,-11240
	ctx.r4.s64 = ctx.r8.s64 + -11240;
	// stw r10,8212(r3)
	ctx.current_instruction = 0x880ED68C;
	REX_STORE_U32(ctx.r3.u32 + 8212, ctx.r10.u32);
	// addi r11,r7,-16192
	ctx.r11.s64 = ctx.r7.s64 + -16192;
	// stw r6,8216(r3)
	ctx.current_instruction = 0x880ED694;
	REX_STORE_U32(ctx.r3.u32 + 8216, ctx.r6.u32);
	// stw r10,8208(r3)
	ctx.current_instruction = 0x880ED698;
	REX_STORE_U32(ctx.r3.u32 + 8208, ctx.r10.u32);
	// stw r4,8232(r3)
	ctx.current_instruction = 0x880ED69C;
	REX_STORE_U32(ctx.r3.u32 + 8232, ctx.r4.u32);
	// stw r11,8228(r3)
	ctx.current_instruction = 0x880ED6A0;
	REX_STORE_U32(ctx.r3.u32 + 8228, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880EE138) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880EE138);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EE138;
	ctx.current_instruction = 0x880EE138;
	uint32_t ea{};
	// li r12,64
	ctx.r12.s64 = 64;
	// lvx v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// vor128 v14,v69,v69
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_load_si128((simde__m128i*)ctx.v69.u8));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltish v30,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_set1_epi16(short(0x2)));
	// lvx v2,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// vor128 v15,v72,v72
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_load_si128((simde__m128i*)ctx.v72.u8));
	// lvx v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx v4,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v28,0
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_set1_epi16(short(0x0)));
	// li r6,80
	ctx.r6.s64 = 80;
	// vspltish v29,1
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_set1_epi16(short(0x1)));
	// li r8,96
	ctx.r8.s64 = 96;
	// vslh v24,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v1,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx v8,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,112
	ctx.r7.s64 = 112;
	// vspltish v31,4
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_set1_epi16(short(0x4)));
	// lvx v7,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v1,v1,v25
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// lvx v3,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx v6,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v2,v24
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vaddshs v1,v1,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v12,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v24,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v24,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v25,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v10,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v10,v10,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vslh v26,v5,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v11,v5,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubuhm v11,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v9,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v5,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v24,v6,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsubuhm v6,v6,v24
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vaddshs v12,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v9,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v7,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vaddshs v26,v9,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubuhm v10,v10,v26
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vslh v24,v8,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v24,v9,v24
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsubuhm v24,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vaddshs v11,v11,v24
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vslh v26,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v26,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v24,v7,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v7,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubuhm v24,v9,v24
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vaddshs v5,v5,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vslh v26,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v26,v9,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vsubuhm v26,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vaddshs v6,v6,v26
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v9,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubuhm v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vor v2,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vslh v24,v4,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v4,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vslh v3,v3,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vaddshs v26,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vslh v4,v4,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vaddshs v25,v4,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v27,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
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
	// vsrah v30,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v16,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vmrglh v20,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vmrghh v17,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vmrglh v21,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vmrghh v18,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrglh v22,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrghh v19,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrglh v23,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrghw v24,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v24.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v17.u32), simde_mm_load_si128((simde__m128i*)ctx.v16.u32)));
	// vmrglw v25,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v25.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v17.u32), simde_mm_load_si128((simde__m128i*)ctx.v16.u32)));
	// vmrghw v28,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v19.u32), simde_mm_load_si128((simde__m128i*)ctx.v18.u32)));
	// vmrglw v29,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v19.u32), simde_mm_load_si128((simde__m128i*)ctx.v18.u32)));
	// vmrghw v26,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v21.u32), simde_mm_load_si128((simde__m128i*)ctx.v20.u32)));
	// vmrglw v27,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v27.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v21.u32), simde_mm_load_si128((simde__m128i*)ctx.v20.u32)));
	// vmrghw v30,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v23.u32), simde_mm_load_si128((simde__m128i*)ctx.v22.u32)));
	// vmrglw v31,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v23.u32), simde_mm_load_si128((simde__m128i*)ctx.v22.u32)));
	// vperm v1,v24,v28,v14
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vperm v5,v24,v28,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vperm v4,v25,v29,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vperm v8,v25,v29,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vperm v2,v26,v30,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vperm v7,v26,v30,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vperm v3,v27,v31,v14
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vperm v6,v27,v31,v15
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vspltish v17,8
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v26,2
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_set1_epi16(short(0x2)));
	// vspltish v21,6
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_set1_epi16(short(0x6)));
	// vspltish v24,0
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_set1_epi16(short(0x0)));
	// vspltish v25,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v27,3
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_set1_epi16(short(0x3)));
	// vspltish v28,4
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_set1_epi16(short(0x4)));
	// vslh v29,v17,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v1,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vslh v2,v2,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v18
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vaddshs v2,v2,v19
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v1,v1,v29
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v13,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
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
	// vslh v9,v13,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v10,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v5,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v6,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
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
	// vslh v9,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v10,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vaddshs v5,v5,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsubuhm v11,v11,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubuhm v6,v6,v20
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vaddshs v12,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v17,v7,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v7,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v8,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v9,v12,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
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
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vslh v20,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vsubuhm v19,v9,v19
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vsubuhm v17,v9,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vaddshs v9,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsubuhm v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v5,v5,v17
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vaddshs v6,v6,v19
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vslh v7,v3,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v2,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vslh v17,v4,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v7,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v2,v2,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vaddshs v5,v5,v23
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v6,v6,v23
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v8,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubuhm v2,v2,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsubuhm v9,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v10,v10,v22
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vaddshs v24,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubuhm v31,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsubuhm v2,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v27,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v11,v11,v22
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubuhm v7,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsrah v24,v24,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
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
	// vaddshs v25,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubuhm v30,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsrah v28,v28,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v25,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
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
	// vsrah v29,v29,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v24,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v25,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v26,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v27,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v28,r12,r3
	ea = (ctx.r12.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v29,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v30,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v31,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8810A970) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8810A970);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810A970;
	ctx.current_instruction = 0x8810A970;
	// std r30,-16(r1)
	ctx.current_instruction = 0x8810A970;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x8810A974;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r8,0(r4)
	ctx.current_instruction = 0x8810A978;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,0(r5)
	ctx.current_instruction = 0x8810A980;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// srawi r10,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 2;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r11,-16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -16, ctx.xer);
	// bge cr6,0x8810a9b0
	if (!ctx.cr6.lt) goto loc_8810A9B0;
	// li r11,-16
	ctx.r11.s64 = -16;
	// b 0x8810a9c4
	goto loc_8810A9C4;
loc_8810A9B0:
	// lwz r30,720(r31)
	ctx.current_instruction = 0x8810A9B0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r30,r30,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x8810a9c8
	if (!ctx.cr6.gt) goto loc_8810A9C8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8810A9C4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8810A9C8:
	// cmpwi cr6,r10,-16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -16, ctx.xer);
	// bge cr6,0x8810a9dc
	if (!ctx.cr6.lt) goto loc_8810A9DC;
	// li r10,-16
	ctx.r10.s64 = -16;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8810aa00
	goto loc_8810AA00;
loc_8810A9DC:
	// lwz r31,724(r31)
	ctx.current_instruction = 0x8810A9DC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm r31,r31,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x8810a9f8
	if (!ctx.cr6.gt) goto loc_8810A9F8;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8810aa00
	goto loc_8810AA00;
loc_8810A9F8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8810aa28
	if (ctx.cr6.eq) goto loc_8810AA28;
loc_8810AA00:
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r6,30
	ctx.r10.u64 = ctx.r6.u32 & 0x3;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r4)
	ctx.current_instruction = 0x8810AA20;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r8,0(r5)
	ctx.current_instruction = 0x8810AA24;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
loc_8810AA28:
	// ld r30,-16(r1)
	ctx.current_instruction = 0x8810AA28;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8810AA2C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8810B9B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8810B9B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8810B9B0) {
			switch (rex_dispatch_address) {
				case 0x8810B9B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810B9B0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8810B9B8: goto loc_8810B9B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8810B9B8;
	__savegprlr_14(ctx, base);
loc_8810B9B8:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,44(r1)
	ctx.current_instruction = 0x8810B9BC;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// stw r5,36(r1)
	ctx.current_instruction = 0x8810B9C4;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r30,r4,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,5536
	ctx.r11.s64 = ctx.r11.s64 + 5536;
	// rlwinm r26,r8,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r4,r30
	ctx.r29.u64 = ctx.r30.u64 - ctx.r4.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r9,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r4,r31
	ctx.r31.u64 = ctx.r4.u64 + ctx.r31.u64;
	// rlwinm r30,r4,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r21,r19,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r27,r4,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r20,r7,r11
	ctx.r20.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r15,r26,r11
	ctx.r15.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r25,r28,r3
	ctx.r25.u64 = ctx.r28.u64 + ctx.r3.u64;
	// stw r20,-316(r1)
	ctx.current_instruction = 0x8810BA14;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r20.u32);
	// rlwinm r8,r19,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r30,r3
	ctx.r7.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r26,r29,r3
	ctx.r26.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r24,r31,r3
	ctx.r24.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r11,r19,r21
	ctx.r11.u64 = ctx.r19.u64 + ctx.r21.u64;
	// add r23,r27,r3
	ctx.r23.u64 = ctx.r27.u64 + ctx.r3.u64;
	// add r22,r10,r3
	ctx.r22.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r21,r25,1
	ctx.r21.s64 = ctx.r25.s64 + 1;
	// addi r18,r7,1
	ctx.r18.s64 = ctx.r7.s64 + 1;
	// addi r19,r26,1
	ctx.r19.s64 = ctx.r26.s64 + 1;
	// stw r21,-352(r1)
	ctx.current_instruction = 0x8810BA40;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r21.u32);
	// addi r25,r24,1
	ctx.r25.s64 = ctx.r24.s64 + 1;
	// stw r18,-356(r1)
	ctx.current_instruction = 0x8810BA48;
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r18.u32);
	// add r9,r8,r5
	ctx.r9.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stw r19,-372(r1)
	ctx.current_instruction = 0x8810BA50;
	REX_STORE_U32(ctx.r1.u32 + -372, ctx.r19.u32);
	// subf r8,r8,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r25,-360(r1)
	ctx.current_instruction = 0x8810BA58;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r25.u32);
	// addi r26,r23,1
	ctx.r26.s64 = ctx.r23.s64 + 1;
	// addi r5,r22,1
	ctx.r5.s64 = ctx.r22.s64 + 1;
	// stw r8,-324(r1)
	ctx.current_instruction = 0x8810BA64;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r8.u32);
	// subfic r7,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	ctx.r7.u64 = static_cast<uint64_t>(1) - ctx.r4.u64;
	// stw r26,-364(r1)
	ctx.current_instruction = 0x8810BA6C;
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r26.u32);
	// subf r24,r4,r10
	ctx.r24.u64 = ctx.r10.u64 - ctx.r4.u64;
	// stw r5,-368(r1)
	ctx.current_instruction = 0x8810BA74;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r5.u32);
	// subf r27,r4,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r4.u64;
	// stw r7,-344(r1)
	ctx.current_instruction = 0x8810BA7C;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r7.u32);
	// subf r31,r4,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r4.u64;
	// stw r24,-336(r1)
	ctx.current_instruction = 0x8810BA84;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r24.u32);
	// subf r28,r4,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r4.u64;
	// stw r27,-328(r1)
	ctx.current_instruction = 0x8810BA8C;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r27.u32);
	// subf r29,r4,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r4.u64;
	// stw r31,-340(r1)
	ctx.current_instruction = 0x8810BA94;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r31.u32);
	// subf r30,r4,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r4.u64;
	// stw r28,-348(r1)
	ctx.current_instruction = 0x8810BA9C;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r28.u32);
	// li r14,0
	ctx.r14.s64 = 0;
	// stw r29,-332(r1)
	ctx.current_instruction = 0x8810BAA4;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r29.u32);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r30,-308(r1)
	ctx.current_instruction = 0x8810BAAC;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r30.u32);
	// b 0x8810bad4
	goto loc_8810BAD4;
loc_8810BAB4:
	// lwz r20,-316(r1)
	ctx.current_instruction = 0x8810BAB4;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// lwz r7,-344(r1)
	ctx.current_instruction = 0x8810BAB8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// lwz r24,-336(r1)
	ctx.current_instruction = 0x8810BABC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// lwz r27,-328(r1)
	ctx.current_instruction = 0x8810BAC0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// lwz r31,-340(r1)
	ctx.current_instruction = 0x8810BAC4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// lwz r28,-348(r1)
	ctx.current_instruction = 0x8810BAC8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// lwz r29,-332(r1)
	ctx.current_instruction = 0x8810BACC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// lwz r30,-308(r1)
	ctx.current_instruction = 0x8810BAD0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
loc_8810BAD4:
	// lhz r23,2(r20)
	ctx.current_instruction = 0x8810BAD4;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r20.u32 + 2);
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhz r22,0(r20)
	ctx.current_instruction = 0x8810BADC;
	ctx.r22.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// extsh r23,r23
	ctx.r23.s64 = ctx.r23.s16;
	// lbzx r27,r11,r27
	ctx.current_instruction = 0x8810BAE8;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// extsh r22,r22
	ctx.r22.s64 = ctx.r22.s16;
	// lbz r18,0(r18)
	ctx.current_instruction = 0x8810BAF0;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r18.u32 + 0);
	// stw r23,-312(r1)
	ctx.current_instruction = 0x8810BAF4;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r23.u32);
	// stw r22,-376(r1)
	ctx.current_instruction = 0x8810BAF8;
	REX_STORE_U32(ctx.r1.u32 + -376, ctx.r22.u32);
	// lbzx r20,r10,r4
	ctx.current_instruction = 0x8810BAFC;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// stw r27,-380(r1)
	ctx.current_instruction = 0x8810BB04;
	REX_STORE_U32(ctx.r1.u32 + -380, ctx.r27.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lbz r21,0(r21)
	ctx.current_instruction = 0x8810BB0C;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// lbzx r8,r7,r11
	ctx.current_instruction = 0x8810BB10;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbz r19,0(r19)
	ctx.current_instruction = 0x8810BB14;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// lbzx r17,r10,r11
	ctx.current_instruction = 0x8810BB18;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// lbzx r18,r28,r11
	ctx.current_instruction = 0x8810BB20;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// mullw r28,r21,r23
	ctx.r28.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r23.s32);
	// lbzx r30,r30,r11
	ctx.current_instruction = 0x8810BB28;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// stw r10,-320(r1)
	ctx.current_instruction = 0x8810BB2C;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r10.u32);
	// lbz r25,0(r25)
	ctx.current_instruction = 0x8810BB30;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// lbz r5,0(r5)
	ctx.current_instruction = 0x8810BB34;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// lbzx r29,r29,r11
	ctx.current_instruction = 0x8810BB38;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r31,r11,r31
	ctx.current_instruction = 0x8810BB3C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lbzx r7,r11,r24
	ctx.current_instruction = 0x8810BB40;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// lbzx r24,r14,r3
	ctx.current_instruction = 0x8810BB44;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r14.u32 + ctx.r3.u32);
	// lbz r26,0(r26)
	ctx.current_instruction = 0x8810BB48;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// mullw r23,r8,r23
	ctx.r23.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r23.s32);
	// stw r29,-384(r1)
	ctx.current_instruction = 0x8810BB50;
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r29.u32);
	// lbzx r16,r4,r11
	ctx.current_instruction = 0x8810BB54;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lwz r8,-312(r1)
	ctx.current_instruction = 0x8810BB58;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lbz r21,0(r11)
	ctx.current_instruction = 0x8810BB5C;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// std r11,-304(r1)
	ctx.current_instruction = 0x8810BB60;
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r11.u64);
	// lwz r11,44(r1)
	ctx.current_instruction = 0x8810BB64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// std r6,-296(r1)
	ctx.current_instruction = 0x8810BB68;
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.r6.u64);
	// lwz r6,-324(r1)
	ctx.current_instruction = 0x8810BB6C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// mullw r10,r30,r22
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r22.s32);
	// lwz r30,-376(r1)
	ctx.current_instruction = 0x8810BB74;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// stw r19,-376(r1)
	ctx.current_instruction = 0x8810BB78;
	REX_STORE_U32(ctx.r1.u32 + -376, ctx.r19.u32);
	// mullw r19,r17,r8
	ctx.r19.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r8.s32);
	// mullw r17,r5,r8
	ctx.r17.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// lwz r5,-380(r1)
	ctx.current_instruction = 0x8810BB84;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// stw r25,-380(r1)
	ctx.current_instruction = 0x8810BB88;
	REX_STORE_U32(ctx.r1.u32 + -380, ctx.r25.u32);
	// mullw r25,r5,r30
	ctx.r25.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// mullw r27,r31,r22
	ctx.r27.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r22.s32);
	// lwz r31,36(r1)
	ctx.current_instruction = 0x8810BB94;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r5,-380(r1)
	ctx.current_instruction = 0x8810BB98;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// mullw r29,r18,r22
	ctx.r29.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r22.s32);
	// mullw r22,r24,r22
	ctx.r22.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r22.s32);
	// mullw r24,r26,r8
	ctx.r24.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// mullw r26,r5,r8
	ctx.r26.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// lwz r5,-384(r1)
	ctx.current_instruction = 0x8810BBAC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// stw r31,-384(r1)
	ctx.current_instruction = 0x8810BBB0;
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r31.u32);
	// mullw r31,r5,r30
	ctx.r31.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// lwz r5,-376(r1)
	ctx.current_instruction = 0x8810BBB8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// mullw r18,r16,r30
	ctx.r18.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r30.s32);
	// mullw r16,r7,r30
	ctx.r16.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// mullw r21,r21,r30
	ctx.r21.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r30.s32);
	// mullw r30,r5,r8
	ctx.r30.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// lwz r5,-320(r1)
	ctx.current_instruction = 0x8810BBCC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// mullw r7,r5,r8
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// mullw r20,r20,r8
	ctx.r20.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r8.s32);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r29,r28
	ctx.r8.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r29,r27,r26
	ctx.r29.u64 = ctx.r27.u64 + ctx.r26.u64;
	// stw r7,-256(r1)
	ctx.current_instruction = 0x8810BBE4;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r7.u32);
	// add r10,r22,r23
	ctx.r10.u64 = ctx.r22.u64 + ctx.r23.u64;
	// stw r8,-264(r1)
	ctx.current_instruction = 0x8810BBEC;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r8.u32);
	// add r7,r20,r21
	ctx.r7.u64 = ctx.r20.u64 + ctx.r21.u64;
	// stw r29,-268(r1)
	ctx.current_instruction = 0x8810BBF4;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r29.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,-288(r1)
	ctx.current_instruction = 0x8810BBFC;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r10.u32);
	// add r29,r18,r19
	ctx.r29.u64 = ctx.r18.u64 + ctx.r19.u64;
	// stw r7,-284(r1)
	ctx.current_instruction = 0x8810BC04;
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r7.u32);
	// subf r8,r5,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r5.u64;
	// add r10,r16,r17
	ctx.r10.u64 = ctx.r16.u64 + ctx.r17.u64;
	// stw r29,-280(r1)
	ctx.current_instruction = 0x8810BC10;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r29.u32);
	// add r7,r25,r24
	ctx.r7.u64 = ctx.r25.u64 + ctx.r24.u64;
	// lwz r11,-384(r1)
	ctx.current_instruction = 0x8810BC18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stw r10,-276(r1)
	ctx.current_instruction = 0x8810BC20;
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// addi r10,r1,-284
	ctx.r10.s64 = ctx.r1.s64 + -284;
	// add r29,r14,r11
	ctx.r29.u64 = ctx.r14.u64 + ctx.r11.u64;
	// ld r11,-304(r1)
	ctx.current_instruction = 0x8810BC2C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// ld r6,-296(r1)
	ctx.current_instruction = 0x8810BC30;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// add r27,r8,r9
	ctx.r27.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r26,44(r1)
	ctx.current_instruction = 0x8810BC38;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// stw r7,-272(r1)
	ctx.current_instruction = 0x8810BC40;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r7.u32);
	// stw r31,-260(r1)
	ctx.current_instruction = 0x8810BC44;
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r31.u32);
loc_8810BC48:
	// lhz r8,2(r15)
	ctx.current_instruction = 0x8810BC48;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r15.u32 + 2);
	// lhz r31,0(r15)
	ctx.current_instruction = 0x8810BC4C;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r15.u32 + 0);
	// lwz r7,0(r10)
	ctx.current_instruction = 0x8810BC50;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lwz r30,-4(r10)
	ctx.current_instruction = 0x8810BC58;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r31,r31,r30
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// srawi. r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x8810bc84
	if (!ctx.cr0.lt) goto loc_8810BC84;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8810bc90
	goto loc_8810BC90;
loc_8810BC84:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x8810bc90
	if (!ctx.cr6.gt) goto loc_8810BC90;
	// li r8,255
	ctx.r8.s64 = 255;
loc_8810BC90:
	// stb r8,0(r29)
	ctx.current_instruction = 0x8810BC90;
	REX_STORE_U8(ctx.r29.u32 + 0, ctx.r8.u8);
	// lhz r8,2(r15)
	ctx.current_instruction = 0x8810BC94;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r15.u32 + 2);
	// lhz r30,0(r15)
	ctx.current_instruction = 0x8810BC98;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r15.u32 + 0);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// lwz r31,4(r10)
	ctx.current_instruction = 0x8810BCA0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r25,r8
	ctx.r25.s64 = ctx.r8.s16;
	// mullw r8,r30,r7
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// mullw r30,r25,r31
	ctx.r30.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r31.s32);
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// subf r8,r6,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r6.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// srawi. r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x8810bccc
	if (!ctx.cr0.lt) goto loc_8810BCCC;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8810bcd8
	goto loc_8810BCD8;
loc_8810BCCC:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x8810bcd8
	if (!ctx.cr6.gt) goto loc_8810BCD8;
	// li r8,255
	ctx.r8.s64 = 255;
loc_8810BCD8:
	// stbx r8,r29,r26
	ctx.current_instruction = 0x8810BCD8;
	REX_STORE_U8(ctx.r29.u32 + ctx.r26.u32, ctx.r8.u8);
	// lwz r7,8(r10)
	ctx.current_instruction = 0x8810BCDC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r8,0(r15)
	ctx.current_instruction = 0x8810BCE0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r15.u32 + 0);
	// lhz r30,2(r15)
	ctx.current_instruction = 0x8810BCE4;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r15.u32 + 2);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// mullw r8,r8,r31
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// mullw r31,r30,r7
	ctx.r31.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// srawi. r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x8810bd14
	if (!ctx.cr0.lt) goto loc_8810BD14;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8810bd20
	goto loc_8810BD20;
loc_8810BD14:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x8810bd20
	if (!ctx.cr6.gt) goto loc_8810BD20;
	// li r8,255
	ctx.r8.s64 = 255;
loc_8810BD20:
	// stb r8,0(r28)
	ctx.current_instruction = 0x8810BD20;
	REX_STORE_U8(ctx.r28.u32 + 0, ctx.r8.u8);
	// lhz r30,2(r15)
	ctx.current_instruction = 0x8810BD24;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r15.u32 + 2);
	// lwz r31,12(r10)
	ctx.current_instruction = 0x8810BD28;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lhz r8,0(r15)
	ctx.current_instruction = 0x8810BD2C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r15.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r7,r8,r7
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// extsh r8,r30
	ctx.r8.s64 = ctx.r30.s16;
	// mullw r8,r8,r31
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r8,r6,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r6.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// srawi. r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x8810bd5c
	if (!ctx.cr0.lt) goto loc_8810BD5C;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8810bd68
	goto loc_8810BD68;
loc_8810BD5C:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x8810bd68
	if (!ctx.cr6.gt) goto loc_8810BD68;
	// li r8,255
	ctx.r8.s64 = 255;
loc_8810BD68:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// add r29,r5,r29
	ctx.r29.u64 = ctx.r5.u64 + ctx.r29.u64;
	// stbux r8,r27,r5
	ctx.current_instruction = 0x8810BD70;
	ea = ctx.r27.u32 + ctx.r5.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r27.u32 = ea;
	// add r28,r5,r28
	ctx.r28.u64 = ctx.r5.u64 + ctx.r28.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x8810bc48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810BC48;
	// lwz r10,-368(r1)
	ctx.current_instruction = 0x8810BD80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// lwz r8,-364(r1)
	ctx.current_instruction = 0x8810BD88;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,-360(r1)
	ctx.current_instruction = 0x8810BD90;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r26,r8,1
	ctx.r26.s64 = ctx.r8.s64 + 1;
	// lwz r10,-352(r1)
	ctx.current_instruction = 0x8810BD9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// addi r25,r7,1
	ctx.r25.s64 = ctx.r7.s64 + 1;
	// lwz r8,-372(r1)
	ctx.current_instruction = 0x8810BDA4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// lwz r7,-356(r1)
	ctx.current_instruction = 0x8810BDA8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// addi r21,r10,1
	ctx.r21.s64 = ctx.r10.s64 + 1;
	// addi r19,r8,1
	ctx.r19.s64 = ctx.r8.s64 + 1;
	// stw r5,-368(r1)
	ctx.current_instruction = 0x8810BDB4;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r5.u32);
	// addi r18,r7,1
	ctx.r18.s64 = ctx.r7.s64 + 1;
	// stw r26,-364(r1)
	ctx.current_instruction = 0x8810BDBC;
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r26.u32);
	// stw r25,-360(r1)
	ctx.current_instruction = 0x8810BDC0;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r25.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r21,-352(r1)
	ctx.current_instruction = 0x8810BDC8;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r21.u32);
	// cmpwi cr6,r14,8
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 8, ctx.xer);
	// stw r19,-372(r1)
	ctx.current_instruction = 0x8810BDD0;
	REX_STORE_U32(ctx.r1.u32 + -372, ctx.r19.u32);
	// stw r18,-356(r1)
	ctx.current_instruction = 0x8810BDD4;
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r18.u32);
	// blt cr6,0x8810bab4
	if (ctx.cr6.lt) goto loc_8810BAB4;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88118350) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88118350;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88118350) {
			switch (rex_dispatch_address) {
				case 0x88118358:
				case 0x88118380:
				case 0x881183A0:
				case 0x881183D0:
				case 0x881183EC:
				case 0x88118414:
				case 0x88118438:
				case 0x88118454:
				case 0x88118470:
				case 0x8811848C:
				case 0x881184A8:
				case 0x881184C0:
				case 0x88118500:
				case 0x88118524:
				case 0x88118554:
				case 0x8811856C:
				case 0x881185AC:
				case 0x881185CC:
				case 0x881185EC:
				case 0x88118618:
				case 0x88118658:
				case 0x88118684:
				case 0x881186C4:
				case 0x881186E8:
				case 0x88118718:
				case 0x88118730:
				case 0x8811877C:
				case 0x881187AC:
				case 0x881187F0:
				case 0x88118820:
				case 0x88118838:
				case 0x88118848:
				case 0x88118854:
				case 0x88118884:
				case 0x8811889C:
				case 0x881188B4:
				case 0x881188CC:
				case 0x881188EC:
				case 0x8811890C:
				case 0x8811892C:
				case 0x8811893C:
				case 0x88118964:
				case 0x8811897C:
				case 0x881189F0:
				case 0x88118A24:
				case 0x88118A3C:
				case 0x88118A84:
				case 0x88118A9C:
				case 0x88118AB0:
				case 0x88118AC4:
				case 0x88118AD8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88118350;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88118358: goto loc_88118358;
		case 0x88118380: goto loc_88118380;
		case 0x881183A0: goto loc_881183A0;
		case 0x881183D0: goto loc_881183D0;
		case 0x881183EC: goto loc_881183EC;
		case 0x88118414: goto loc_88118414;
		case 0x88118438: goto loc_88118438;
		case 0x88118454: goto loc_88118454;
		case 0x88118470: goto loc_88118470;
		case 0x8811848C: goto loc_8811848C;
		case 0x881184A8: goto loc_881184A8;
		case 0x881184C0: goto loc_881184C0;
		case 0x88118500: goto loc_88118500;
		case 0x88118524: goto loc_88118524;
		case 0x88118554: goto loc_88118554;
		case 0x8811856C: goto loc_8811856C;
		case 0x881185AC: goto loc_881185AC;
		case 0x881185CC: goto loc_881185CC;
		case 0x881185EC: goto loc_881185EC;
		case 0x88118618: goto loc_88118618;
		case 0x88118658: goto loc_88118658;
		case 0x88118684: goto loc_88118684;
		case 0x881186C4: goto loc_881186C4;
		case 0x881186E8: goto loc_881186E8;
		case 0x88118718: goto loc_88118718;
		case 0x88118730: goto loc_88118730;
		case 0x8811877C: goto loc_8811877C;
		case 0x881187AC: goto loc_881187AC;
		case 0x881187F0: goto loc_881187F0;
		case 0x88118820: goto loc_88118820;
		case 0x88118838: goto loc_88118838;
		case 0x88118848: goto loc_88118848;
		case 0x88118854: goto loc_88118854;
		case 0x88118884: goto loc_88118884;
		case 0x8811889C: goto loc_8811889C;
		case 0x881188B4: goto loc_881188B4;
		case 0x881188CC: goto loc_881188CC;
		case 0x881188EC: goto loc_881188EC;
		case 0x8811890C: goto loc_8811890C;
		case 0x8811892C: goto loc_8811892C;
		case 0x8811893C: goto loc_8811893C;
		case 0x88118964: goto loc_88118964;
		case 0x8811897C: goto loc_8811897C;
		case 0x881189F0: goto loc_881189F0;
		case 0x88118A24: goto loc_88118A24;
		case 0x88118A3C: goto loc_88118A3C;
		case 0x88118A84: goto loc_88118A84;
		case 0x88118A9C: goto loc_88118A9C;
		case 0x88118AB0: goto loc_88118AB0;
		case 0x88118AC4: goto loc_88118AC4;
		case 0x88118AD8: goto loc_88118AD8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88118358;
	__savegprlr_27(ctx, base);
loc_88118358:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88118358;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.current_instruction = 0x8811835C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,80(r1)
	ctx.current_instruction = 0x88118368;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x8811836C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	ctx.current_instruction = 0x88118370;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x88118374;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,224(r8)
	ctx.current_instruction = 0x88118378;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 224);
	// bl 0x880caeb0
	ctx.lr = 0x88118380;
	sub_880CAEB0(ctx, base);
loc_88118380:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118380;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r7,160(r11)
	ctx.current_instruction = 0x88118384;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 160);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x881183a4
	if (ctx.cr6.eq) goto loc_881183A4;
	// addi r5,r11,172
	ctx.r5.s64 = ctx.r11.s64 + 172;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118394;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x881183A0;
	sub_880CB318(ctx, base);
loc_881183A0:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881183A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_881183A4:
	// lwz r10,164(r11)
	ctx.current_instruction = 0x881183A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88118418
	if (ctx.cr6.eq) goto loc_88118418;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_881183B8:
	// lwz r10,176(r11)
	ctx.current_instruction = 0x881183B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x881183C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x880cb318
	ctx.lr = 0x881183D0;
	sub_880CB318(ctx, base);
loc_881183D0:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881183D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,176(r11)
	ctx.current_instruction = 0x881183D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r3,224(r11)
	ctx.current_instruction = 0x881183DC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x880cb318
	ctx.lr = 0x881183EC;
	sub_880CB318(ctx, base);
loc_881183EC:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881183EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// lwz r10,164(r11)
	ctx.current_instruction = 0x881183F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881183b8
	if (ctx.cr6.lt) goto loc_881183B8;
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118408;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x88118414;
	sub_880CB318(ctx, base);
loc_88118414:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118414;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88118418:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88118418;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,76(r10)
	ctx.current_instruction = 0x8811841C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881184c4
	if (ctx.cr6.eq) goto loc_881184C4;
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x8811842C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x88118438;
	sub_880CB318(ctx, base);
loc_88118438:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118438;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118440;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x88118444;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,76(r11)
	ctx.current_instruction = 0x88118448;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x880cb318
	ctx.lr = 0x88118454;
	sub_880CB318(ctx, base);
loc_88118454:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118454;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8811845C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118460;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,76(r10)
	ctx.current_instruction = 0x88118464;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// bl 0x880cb318
	ctx.lr = 0x88118470;
	sub_880CB318(ctx, base);
loc_88118470:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118470;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r9,4(r11)
	ctx.current_instruction = 0x88118478;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.current_instruction = 0x8811847C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,76(r9)
	ctx.current_instruction = 0x88118480;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// bl 0x880cb318
	ctx.lr = 0x8811848C;
	sub_880CB318(ctx, base);
loc_8811848C:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811848C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r8,4(r11)
	ctx.current_instruction = 0x88118494;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118498;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,76(r8)
	ctx.current_instruction = 0x8811849C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 76);
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// bl 0x880cb318
	ctx.lr = 0x881184A8;
	sub_880CB318(ctx, base);
loc_881184A8:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881184A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x881184B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.current_instruction = 0x881184B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// addi r5,r10,76
	ctx.r5.s64 = ctx.r10.s64 + 76;
	// bl 0x880cb318
	ctx.lr = 0x881184C0;
	sub_880CB318(ctx, base);
loc_881184C0:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881184C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_881184C4:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x881184C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,80(r10)
	ctx.current_instruction = 0x881184C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88118570
	if (ctx.cr6.eq) goto loc_88118570;
	// lhz r9,0(r10)
	ctx.current_instruction = 0x881184D4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88118558
	if (ctx.cr6.eq) goto loc_88118558;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_881184E8:
	// lwz r10,4(r10)
	ctx.current_instruction = 0x881184E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x881184F0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// bl 0x880cb318
	ctx.lr = 0x88118500;
	sub_880CB318(ctx, base);
loc_88118500:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118500;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118508;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x8811850C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,80(r11)
	ctx.current_instruction = 0x88118510;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x88118514;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x880cb318
	ctx.lr = 0x88118524;
	sub_880CB318(ctx, base);
loc_88118524:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118524;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// lwz r9,4(r11)
	ctx.current_instruction = 0x88118530;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,80(r9)
	ctx.current_instruction = 0x88118534;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// lhz r8,0(r10)
	ctx.current_instruction = 0x88118538;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x881184e8
	if (ctx.cr6.lt) goto loc_881184E8;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118548;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x88118554;
	sub_880CB318(ctx, base);
loc_88118554:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118554;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88118558:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88118558;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118560;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// addi r5,r10,80
	ctx.r5.s64 = ctx.r10.s64 + 80;
	// bl 0x880cb318
	ctx.lr = 0x8811856C;
	sub_880CB318(ctx, base);
loc_8811856C:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811856C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88118570:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88118570;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,116(r10)
	ctx.current_instruction = 0x88118574;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8811861c
	if (ctx.cr6.eq) goto loc_8811861C;
	// lwz r9,112(r10)
	ctx.current_instruction = 0x88118580;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x88118608
	if (!ctx.cr6.gt) goto loc_88118608;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88118594:
	// lwz r10,116(r10)
	ctx.current_instruction = 0x88118594;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x8811859C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x880cb318
	ctx.lr = 0x881185AC;
	sub_880CB318(ctx, base);
loc_881185AC:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881185AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x881185B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x881185B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,116(r11)
	ctx.current_instruction = 0x881185BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x880cb318
	ctx.lr = 0x881185CC;
	sub_880CB318(ctx, base);
loc_881185CC:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881185CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x881185D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.current_instruction = 0x881185D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,116(r10)
	ctx.current_instruction = 0x881185DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// bl 0x880cb318
	ctx.lr = 0x881185EC;
	sub_880CB318(ctx, base);
loc_881185EC:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881185EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x881185F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,112(r10)
	ctx.current_instruction = 0x881185FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88118594
	if (ctx.cr6.lt) goto loc_88118594;
loc_88118608:
	// addi r5,r10,116
	ctx.r5.s64 = ctx.r10.s64 + 116;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x8811860C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x88118618;
	sub_880CB318(ctx, base);
loc_88118618:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118618;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8811861C:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8811861C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,88(r10)
	ctx.current_instruction = 0x88118620;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88118688
	if (ctx.cr6.eq) goto loc_88118688;
	// lwz r9,92(r10)
	ctx.current_instruction = 0x8811862C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x88118674
	if (!ctx.cr6.gt) goto loc_88118674;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88118640:
	// lwz r10,88(r10)
	ctx.current_instruction = 0x88118640;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118648;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// bl 0x880cb318
	ctx.lr = 0x88118658;
	sub_880CB318(ctx, base);
loc_88118658:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118658;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88118664;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,92(r10)
	ctx.current_instruction = 0x88118668;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88118640
	if (ctx.cr6.lt) goto loc_88118640;
loc_88118674:
	// addi r5,r10,88
	ctx.r5.s64 = ctx.r10.s64 + 88;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118678;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x88118684;
	sub_880CB318(ctx, base);
loc_88118684:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118684;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88118688:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88118688;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,96(r10)
	ctx.current_instruction = 0x8811868C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88118734
	if (ctx.cr6.eq) goto loc_88118734;
	// lhz r9,0(r10)
	ctx.current_instruction = 0x88118698;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88118708
	if (ctx.cr6.eq) goto loc_88118708;
	// li r31,0
	ctx.r31.s64 = 0;
loc_881186AC:
	// lwz r10,4(r10)
	ctx.current_instruction = 0x881186AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x881186B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// bl 0x880cb318
	ctx.lr = 0x881186C4;
	sub_880CB318(ctx, base);
loc_881186C4:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881186C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x881186CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x881186D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,96(r11)
	ctx.current_instruction = 0x881186D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x881186D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x880cb318
	ctx.lr = 0x881186E8;
	sub_880CB318(ctx, base);
loc_881186E8:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881186E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// lwz r9,4(r11)
	ctx.current_instruction = 0x881186F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,96(r9)
	ctx.current_instruction = 0x881186F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 96);
	// lhz r8,0(r10)
	ctx.current_instruction = 0x881186FC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x881186ac
	if (ctx.cr6.lt) goto loc_881186AC;
loc_88118708:
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x8811870C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x88118718;
	sub_880CB318(ctx, base);
loc_88118718:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118718;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88118720;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118724;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// addi r5,r10,96
	ctx.r5.s64 = ctx.r10.s64 + 96;
	// bl 0x880cb318
	ctx.lr = 0x88118730;
	sub_880CB318(ctx, base);
loc_88118730:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118730;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88118734:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88118734;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,84(r10)
	ctx.current_instruction = 0x88118738;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8811883c
	if (ctx.cr6.eq) goto loc_8811883C;
	// lhz r9,2(r10)
	ctx.current_instruction = 0x88118744;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881187b0
	if (ctx.cr6.eq) goto loc_881187B0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88118758:
	// lwz r10,4(r10)
	ctx.current_instruction = 0x88118758;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r9,0(r10)
	ctx.current_instruction = 0x88118760;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88118780
	if (ctx.cr6.eq) goto loc_88118780;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118770;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x8811877C;
	sub_880CB318(ctx, base);
loc_8811877C:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811877C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88118780:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88118780;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r10,84(r10)
	ctx.current_instruction = 0x8811878C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// lhz r9,2(r10)
	ctx.current_instruction = 0x88118790;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88118758
	if (ctx.cr6.lt) goto loc_88118758;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x881187A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x881187AC;
	sub_880CB318(ctx, base);
loc_881187AC:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881187AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_881187B0:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x881187B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,84(r10)
	ctx.current_instruction = 0x881187B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// lhz r9,0(r10)
	ctx.current_instruction = 0x881187B8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88118824
	if (ctx.cr6.eq) goto loc_88118824;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_881187CC:
	// lwz r10,8(r10)
	ctx.current_instruction = 0x881187CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r9,6(r10)
	ctx.current_instruction = 0x881187D4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881187f4
	if (ctx.cr6.eq) goto loc_881187F4;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x881187E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x881187F0;
	sub_880CB318(ctx, base);
loc_881187F0:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881187F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_881187F4:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x881187F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// lwz r10,84(r10)
	ctx.current_instruction = 0x88118800;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// lhz r9,0(r10)
	ctx.current_instruction = 0x88118804;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x881187cc
	if (ctx.cr6.lt) goto loc_881187CC;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118814;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x88118820;
	sub_880CB318(ctx, base);
loc_88118820:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118820;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88118824:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88118824;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x8811882C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// addi r5,r10,84
	ctx.r5.s64 = ctx.r10.s64 + 84;
	// bl 0x880cb318
	ctx.lr = 0x88118838;
	sub_880CB318(ctx, base);
loc_88118838:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118838;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8811883C:
	// lwz r11,4(r11)
	ctx.current_instruction = 0x8811883C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,128(r11)
	ctx.current_instruction = 0x88118840;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x880cb840
	ctx.lr = 0x88118848;
	sub_880CB840(ctx, base);
loc_88118848:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88118848;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,148(r10)
	ctx.current_instruction = 0x8811884C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// bl 0x880cb840
	ctx.lr = 0x88118854;
	sub_880CB840(ctx, base);
loc_88118854:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118854;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x88118858;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,120(r9)
	ctx.current_instruction = 0x8811885C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 120);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88118930
	if (ctx.cr6.eq) goto loc_88118930;
	// lwz r10,0(r31)
	ctx.current_instruction = 0x88118868;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881188d0
	if (ctx.cr6.eq) goto loc_881188D0;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118878;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x88118884;
	sub_880CB318(ctx, base);
loc_88118884:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88118884;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118890;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118894;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x880cb318
	ctx.lr = 0x8811889C;
	sub_880CB318(ctx, base);
loc_8811889C:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8811889C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x881188A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lwz r3,224(r10)
	ctx.current_instruction = 0x881188AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// bl 0x880cb318
	ctx.lr = 0x881188B4;
	sub_880CB318(ctx, base);
loc_881188B4:
	// lwz r9,80(r1)
	ctx.current_instruction = 0x881188B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x881188BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// lwz r3,224(r9)
	ctx.current_instruction = 0x881188C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 224);
	// bl 0x880cb318
	ctx.lr = 0x881188CC;
	sub_880CB318(ctx, base);
loc_881188CC:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881188CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_881188D0:
	// lwz r10,4(r31)
	ctx.current_instruction = 0x881188D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881188f0
	if (ctx.cr6.eq) goto loc_881188F0;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x881188E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x881188EC;
	sub_880CB318(ctx, base);
loc_881188EC:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881188EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_881188F0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881188F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88118910
	if (ctx.cr6.eq) goto loc_88118910;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118900;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x8811890C;
	sub_880CB318(ctx, base);
loc_8811890C:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811890C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88118910:
	// lwz r10,12(r31)
	ctx.current_instruction = 0x88118910;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88118930
	if (ctx.cr6.eq) goto loc_88118930;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118920;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x8811892C;
	sub_880CB318(ctx, base);
loc_8811892C:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811892C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88118930:
	// lwz r11,4(r11)
	ctx.current_instruction = 0x88118930;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,124(r11)
	ctx.current_instruction = 0x88118934;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb840
	ctx.lr = 0x8811893C;
	sub_880CB840(ctx, base);
loc_8811893C:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8811893C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r9,4(r10)
	ctx.current_instruction = 0x88118944;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,104(r9)
	ctx.current_instruction = 0x88118948;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88118980
	if (ctx.cr6.eq) goto loc_88118980;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r3,224(r10)
	ctx.current_instruction = 0x88118958;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x88118964;
	sub_880CB318(ctx, base);
loc_88118964:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118964;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8811896C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118970;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// addi r5,r10,104
	ctx.r5.s64 = ctx.r10.s64 + 104;
	// bl 0x880cb318
	ctx.lr = 0x8811897C;
	sub_880CB318(ctx, base);
loc_8811897C:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8811897C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88118980:
	// lwz r11,4(r10)
	ctx.current_instruction = 0x88118980;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// lhz r9,72(r11)
	ctx.current_instruction = 0x88118988;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88118a5c
	if (ctx.cr6.eq) goto loc_88118A5C;
	// li r31,132
	ctx.r31.s64 = 132;
loc_88118998:
	// lwzx r9,r11,r31
	ctx.current_instruction = 0x88118998;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88118a40
	if (ctx.cr6.eq) goto loc_88118A40;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,4(r9)
	ctx.current_instruction = 0x881189A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88118a28
	if (ctx.cr6.eq) goto loc_88118A28;
	// lhz r9,0(r9)
	ctx.current_instruction = 0x881189B4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88118a10
	if (ctx.cr6.eq) goto loc_88118A10;
	// li r30,0
	ctx.r30.s64 = 0;
loc_881189C8:
	// lwzx r11,r11,r31
	ctx.current_instruction = 0x881189C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x881189CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r11)
	ctx.current_instruction = 0x881189D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881189f4
	if (ctx.cr6.eq) goto loc_881189F4;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r10)
	ctx.current_instruction = 0x881189E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// bl 0x880cb318
	ctx.lr = 0x881189F0;
	sub_880CB318(ctx, base);
loc_881189F0:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x881189F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_881189F4:
	// lwz r11,4(r10)
	ctx.current_instruction = 0x881189F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwzx r9,r11,r31
	ctx.current_instruction = 0x88118A00;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lhz r8,0(r9)
	ctx.current_instruction = 0x88118A04;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x881189c8
	if (ctx.cr6.lt) goto loc_881189C8;
loc_88118A10:
	// lwzx r11,r11,r31
	ctx.current_instruction = 0x88118A10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r10)
	ctx.current_instruction = 0x88118A18;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x880cb318
	ctx.lr = 0x88118A24;
	sub_880CB318(ctx, base);
loc_88118A24:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88118A24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88118A28:
	// lwz r11,4(r10)
	ctx.current_instruction = 0x88118A28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r10)
	ctx.current_instruction = 0x88118A30;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x880cb318
	ctx.lr = 0x88118A3C;
	sub_880CB318(ctx, base);
loc_88118A3C:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88118A3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88118A40:
	// lwz r11,4(r10)
	ctx.current_instruction = 0x88118A40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lhz r9,72(r11)
	ctx.current_instruction = 0x88118A4C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x88118998
	if (ctx.cr6.lt) goto loc_88118998;
loc_88118A5C:
	// lwz r11,108(r11)
	ctx.current_instruction = 0x88118A5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88118aa0
	if (ctx.cr6.eq) goto loc_88118AA0;
	// lwz r9,4(r11)
	ctx.current_instruction = 0x88118A68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88118a88
	if (ctx.cr6.eq) goto loc_88118A88;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r10)
	ctx.current_instruction = 0x88118A7C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// bl 0x880cb318
	ctx.lr = 0x88118A84;
	sub_880CB318(ctx, base);
loc_88118A84:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88118A84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88118A88:
	// lwz r11,4(r10)
	ctx.current_instruction = 0x88118A88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r10)
	ctx.current_instruction = 0x88118A90;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// addi r5,r11,108
	ctx.r5.s64 = ctx.r11.s64 + 108;
	// bl 0x880cb318
	ctx.lr = 0x88118A9C;
	sub_880CB318(ctx, base);
loc_88118A9C:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88118A9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88118AA0:
	// addi r5,r10,48
	ctx.r5.s64 = ctx.r10.s64 + 48;
	// lwz r3,224(r10)
	ctx.current_instruction = 0x88118AA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x88118AB0;
	sub_880CB318(ctx, base);
loc_88118AB0:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118AB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118ABC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x880cb318
	ctx.lr = 0x88118AC4;
	sub_880CB318(ctx, base);
loc_88118AC4:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88118AC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.current_instruction = 0x88118AD0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x880cb318
	ctx.lr = 0x88118AD8;
	sub_880CB318(ctx, base);
loc_88118AD8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88129618) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88129618;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88129618) {
			switch (rex_dispatch_address) {
				case 0x88129620:
				case 0x8812968C:
				case 0x881296C4:
				case 0x881296F0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88129618;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88129620: goto loc_88129620;
		case 0x8812968C: goto loc_8812968C;
		case 0x881296C4: goto loc_881296C4;
		case 0x881296F0: goto loc_881296F0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88129620;
	__savegprlr_26(ctx, base);
loc_88129620:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88129620;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,348(r3)
	ctx.current_instruction = 0x88129624;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881296f4
	if (ctx.cr6.eq) goto loc_881296F4;
	// lwz r11,244(r3)
	ctx.current_instruction = 0x88129634;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881296e0
	if (!ctx.cr6.gt) goto loc_881296E0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8812964C:
	// lwz r11,348(r30)
	ctx.current_instruction = 0x8812964C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 348);
	// lwzx r10,r29,r11
	ctx.current_instruction = 0x88129650;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881296cc
	if (ctx.cr6.eq) goto loc_881296CC;
	// lwz r11,244(r30)
	ctx.current_instruction = 0x8812965C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 244);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881296ac
	if (!ctx.cr6.gt) goto loc_881296AC;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_88129670:
	// lwz r11,348(r30)
	ctx.current_instruction = 0x88129670;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 348);
	// lwzx r11,r29,r11
	ctx.current_instruction = 0x88129674;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwzx r10,r11,r31
	ctx.current_instruction = 0x88129678;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88129698
	if (ctx.cr6.eq) goto loc_88129698;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x88125e70
	ctx.lr = 0x8812968C;
	sub_88125E70(ctx, base);
loc_8812968C:
	// lwz r11,348(r30)
	ctx.current_instruction = 0x8812968C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 348);
	// lwzx r10,r29,r11
	ctx.current_instruction = 0x88129690;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stwx r27,r10,r31
	ctx.current_instruction = 0x88129694;
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r27.u32);
loc_88129698:
	// lwz r11,244(r30)
	ctx.current_instruction = 0x88129698;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 244);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88129670
	if (ctx.cr6.lt) goto loc_88129670;
loc_881296AC:
	// lwz r11,348(r30)
	ctx.current_instruction = 0x881296AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 348);
	// lwzx r10,r29,r11
	ctx.current_instruction = 0x881296B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881296cc
	if (ctx.cr6.eq) goto loc_881296CC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x88125e70
	ctx.lr = 0x881296C4;
	sub_88125E70(ctx, base);
loc_881296C4:
	// lwz r11,348(r30)
	ctx.current_instruction = 0x881296C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 348);
	// stwx r27,r29,r11
	ctx.current_instruction = 0x881296C8;
	REX_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r27.u32);
loc_881296CC:
	// lwz r11,244(r30)
	ctx.current_instruction = 0x881296CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 244);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8812964c
	if (ctx.cr6.lt) goto loc_8812964C;
loc_881296E0:
	// lwz r3,348(r30)
	ctx.current_instruction = 0x881296E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881296f4
	if (ctx.cr6.eq) goto loc_881296F4;
	// bl 0x88125e70
	ctx.lr = 0x881296F0;
	sub_88125E70(ctx, base);
loc_881296F0:
	// stw r27,348(r30)
	ctx.current_instruction = 0x881296F0;
	REX_STORE_U32(ctx.r30.u32 + 348, ctx.r27.u32);
loc_881296F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812BF60) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8812BF60);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812BF60;
	ctx.current_instruction = 0x8812BF60;
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.current_instruction = 0x8812BF60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,32(r3)
	ctx.current_instruction = 0x8812BF64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,40(r3)
	ctx.current_instruction = 0x8812BF68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x8812BF70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,60(r11)
	ctx.current_instruction = 0x8812BF78;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bgt cr6,0x8812bfa4
	if (ctx.cr6.gt) goto loc_8812BFA4;
	// lwz r7,212(r11)
	ctx.current_instruction = 0x8812BF84;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8812bf9c
	if (ctx.cr6.eq) goto loc_8812BF9C;
	// lwz r11,8(r11)
	ctx.current_instruction = 0x8812BF90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// b 0x8812bfc0
	goto loc_8812BFC0;
loc_8812BF9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8812bfc4
	goto loc_8812BFC4;
loc_8812BFA4:
	// lwz r7,604(r11)
	ctx.current_instruction = 0x8812BFA4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 604);
	// lwz r11,8(r11)
	ctx.current_instruction = 0x8812BFA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8812bfbc
	if (ctx.cr6.eq) goto loc_8812BFBC;
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// b 0x8812bfc0
	goto loc_8812BFC0;
loc_8812BFBC:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
loc_8812BFC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8812BFC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// srawi r7,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,48(r3)
	ctx.current_instruction = 0x8812BFDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r7,24(r3)
	ctx.current_instruction = 0x8812BFE0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// xor r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r5,r6,29
	ctx.r5.u64 = ctx.r6.u32 & 0x7;
	// stw r7,80(r3)
	ctx.current_instruction = 0x8812BFF0;
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x8812c054
	if (!ctx.cr6.gt) goto loc_8812C054;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8812c020
	if (ctx.cr6.gt) goto loc_8812C020;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r11,32(r3)
	ctx.current_instruction = 0x8812C018;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8812C020:
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lwz r10,28(r3)
	ctx.current_instruction = 0x8812C024;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,36(r3)
	ctx.current_instruction = 0x8812C028;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r7,32(r3)
	ctx.current_instruction = 0x8812C038;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// subf r4,r6,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r6.u64;
	// srw r11,r9,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r5,28(r3)
	ctx.current_instruction = 0x8812C044;
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// stw r4,40(r3)
	ctx.current_instruction = 0x8812C048;
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// stw r11,36(r3)
	ctx.current_instruction = 0x8812C04C;
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8812C054:
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,68(r3)
	ctx.current_instruction = 0x8812C060;
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// stw r9,72(r3)
	ctx.current_instruction = 0x8812C064;
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88133CB0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88133CB0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88133CB0) {
			switch (rex_dispatch_address) {
				case 0x88133CB8:
				case 0x88133CE0:
				case 0x88133D0C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88133CB0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88133CB8: goto loc_88133CB8;
		case 0x88133CE0: goto loc_88133CE0;
		case 0x88133D0C: goto loc_88133D0C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88133CB8;
	__savegprlr_27(ctx, base);
loc_88133CB8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88133CB8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lhz r5,174(r31)
	ctx.current_instruction = 0x88133CD0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 174);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x88141ee8
	ctx.lr = 0x88133CE0;
	sub_88141EE8(ctx, base);
loc_88133CE0:
	// lwz r11,164(r31)
	ctx.current_instruction = 0x88133CE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88133d0c
	if (!ctx.cr6.eq) goto loc_88133D0C;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lhz r9,168(r31)
	ctx.current_instruction = 0x88133CF0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 168);
	// addi r7,r30,1456
	ctx.r7.s64 = ctx.r30.s64 + 1456;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r30,1616
	ctx.r5.s64 = ctx.r30.s64 + 1616;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812ae68
	ctx.lr = 0x88133D0C;
	sub_8812AE68(ctx, base);
loc_88133D0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88134310) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88134310;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88134310) {
			switch (rex_dispatch_address) {
				case 0x88134330:
				case 0x88134340:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88134310;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88134330: goto loc_88134330;
		case 0x88134340: goto loc_88134340;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88134314;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88134318;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8813431C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88052d90
	ctx.lr = 0x88134330;
	sub_88052D90(ctx, base);
loc_88134330:
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88052d90
	ctx.lr = 0x88134340;
	sub_88052D90(ctx, base);
loc_88134340:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r31)
	ctx.current_instruction = 0x88134348;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	ctx.current_instruction = 0x8813434C;
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lfs f0,6732(r10)
	ctx.current_instruction = 0x88134350;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,132(r31)
	ctx.current_instruction = 0x88134354;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stfs f0,128(r31)
	ctx.current_instruction = 0x88134358;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stw r11,136(r31)
	ctx.current_instruction = 0x8813435C;
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	ctx.current_instruction = 0x88134360;
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	ctx.current_instruction = 0x88134364;
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	ctx.current_instruction = 0x88134368;
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	ctx.current_instruction = 0x8813436C;
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	ctx.current_instruction = 0x88134370;
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	ctx.current_instruction = 0x88134374;
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r11,164(r31)
	ctx.current_instruction = 0x88134378;
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r11,168(r31)
	ctx.current_instruction = 0x8813437C;
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	ctx.current_instruction = 0x88134380;
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	ctx.current_instruction = 0x88134384;
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	ctx.current_instruction = 0x88134388;
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	ctx.current_instruction = 0x8813438C;
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,188(r31)
	ctx.current_instruction = 0x88134390;
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r11,192(r31)
	ctx.current_instruction = 0x88134394;
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,196(r31)
	ctx.current_instruction = 0x88134398;
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r11,200(r31)
	ctx.current_instruction = 0x8813439C;
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r11,204(r31)
	ctx.current_instruction = 0x881343A0;
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	ctx.current_instruction = 0x881343A4;
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	ctx.current_instruction = 0x881343A8;
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	ctx.current_instruction = 0x881343AC;
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	ctx.current_instruction = 0x881343B0;
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r11,224(r31)
	ctx.current_instruction = 0x881343B4;
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	ctx.current_instruction = 0x881343B8;
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,236(r31)
	ctx.current_instruction = 0x881343BC;
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r11,232(r31)
	ctx.current_instruction = 0x881343C0;
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,240(r31)
	ctx.current_instruction = 0x881343C4;
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r11,244(r31)
	ctx.current_instruction = 0x881343C8;
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	ctx.current_instruction = 0x881343CC;
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	ctx.current_instruction = 0x881343D0;
	REX_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	ctx.current_instruction = 0x881343D4;
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r11,260(r31)
	ctx.current_instruction = 0x881343D8;
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	ctx.current_instruction = 0x881343DC;
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	ctx.current_instruction = 0x881343E0;
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,272(r31)
	ctx.current_instruction = 0x881343E4;
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r11,276(r31)
	ctx.current_instruction = 0x881343E8;
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,280(r31)
	ctx.current_instruction = 0x881343EC;
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,284(r31)
	ctx.current_instruction = 0x881343F0;
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r11,288(r31)
	ctx.current_instruction = 0x881343F4;
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r11,292(r31)
	ctx.current_instruction = 0x881343F8;
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stw r11,296(r31)
	ctx.current_instruction = 0x881343FC;
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88134404;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8813440C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881382B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881382B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881382B0) {
			switch (rex_dispatch_address) {
				case 0x881382B8:
				case 0x881382D4:
				case 0x881382EC:
				case 0x88138310:
				case 0x88138340:
				case 0x88138358:
				case 0x8813838C:
				case 0x881383A4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881382B0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881382B8: goto loc_881382B8;
		case 0x881382D4: goto loc_881382D4;
		case 0x881382EC: goto loc_881382EC;
		case 0x88138310: goto loc_88138310;
		case 0x88138340: goto loc_88138340;
		case 0x88138358: goto loc_88138358;
		case 0x8813838C: goto loc_8813838C;
		case 0x881383A4: goto loc_881383A4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881382B8;
	__savegprlr_29(ctx, base);
loc_881382B8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881382B8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x88139190
	ctx.lr = 0x881382D4;
	sub_88139190(ctx, base);
loc_881382D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881383c8
	if (ctx.cr6.lt) goto loc_881383C8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88139018
	ctx.lr = 0x881382EC;
	sub_88139018(ctx, base);
loc_881382EC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881383c8
	if (ctx.cr6.lt) goto loc_881383C8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881382F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88138328
	if (!ctx.cr6.eq) goto loc_88138328;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812c818
	ctx.lr = 0x88138310;
	sub_8812C818(ctx, base);
loc_88138310:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881383c8
	if (ctx.cr6.lt) goto loc_881383C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	ctx.current_instruction = 0x8813831C;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88138328:
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88138374
	if (!ctx.cr6.eq) goto loc_88138374;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812c818
	ctx.lr = 0x88138340;
	sub_8812C818(ctx, base);
loc_88138340:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881383c8
	if (ctx.cr6.lt) goto loc_881383C8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812c528
	ctx.lr = 0x88138358;
	sub_8812C528(ctx, base);
loc_88138358:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881383c8
	if (ctx.cr6.lt) goto loc_881383C8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88138360;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r29)
	ctx.current_instruction = 0x88138368;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88138374:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881383c0
	if (!ctx.cr6.eq) goto loc_881383C0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812c818
	ctx.lr = 0x8813838C;
	sub_8812C818(ctx, base);
loc_8813838C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881383c8
	if (ctx.cr6.lt) goto loc_881383C8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812c528
	ctx.lr = 0x881383A4;
	sub_8812C528(ctx, base);
loc_881383A4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881383c8
	if (ctx.cr6.lt) goto loc_881383C8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881383AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r29)
	ctx.current_instruction = 0x881383B4;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_881383C0:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_881383C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88139DA8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88139DA8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88139DA8;
	ctx.current_instruction = 0x88139DA8;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r3,-11696(r11)
	ctx.current_instruction = 0x88139DBC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -11696);
	// li r7,16
	ctx.r7.s64 = 16;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88139DC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.current_instruction = 0x88139DCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8813A8C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8813A8C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8813A8C0) {
			switch (rex_dispatch_address) {
				case 0x8813A8C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813A8C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8813A8C8: goto loc_8813A8C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8813A8C8;
	__savegprlr_24(ctx, base);
loc_8813A8C8:
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r9,r4,r7
	ctx.current_instruction = 0x8813A8CC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// lbz r8,0(r4)
	ctx.current_instruction = 0x8813A8D0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r7,r31
	ctx.r29.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r30,r8,r9
	ctx.r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r24,r6,-2
	ctx.r24.s64 = ctx.r6.s64 + -2;
	// mulli r30,r30,14
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(14));
	// lbzx r31,r11,r4
	ctx.current_instruction = 0x8813A8E8;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r29,r29,r4
	ctx.current_instruction = 0x8813A8EC;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r4.u32);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r30,r29,r9
	ctx.r30.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 + ctx.r8.u64;
	// mulli r31,r30,11
	ctx.r31.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(11));
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// subf r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r31.u64;
	// addi r8,r9,63
	ctx.r8.s64 = ctx.r9.s64 + 63;
	// srawi r9,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 7;
	// stw r9,0(r5)
	ctx.current_instruction = 0x8813A91C;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8813a9ac
	if (!ctx.cr6.gt) goto loc_8813A9AC;
	// addi r9,r24,-3
	ctx.r9.s64 = ctx.r24.s64 + -3;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// add r31,r7,r8
	ctx.r31.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r11,r31
	ctx.r30.u64 = ctx.r31.u64 - ctx.r11.u64;
	// subf r31,r11,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// add r30,r30,r4
	ctx.r30.u64 = ctx.r30.u64 + ctx.r4.u64;
	// add r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 + ctx.r4.u64;
loc_8813A958:
	// lbzx r8,r10,r7
	ctx.current_instruction = 0x8813A958;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// lbz r28,0(r10)
	ctx.current_instruction = 0x8813A95C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r25,r9,r7
	ctx.current_instruction = 0x8813A964;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// add r27,r8,r28
	ctx.r27.u64 = ctx.r8.u64 + ctx.r28.u64;
	// lbzux r8,r31,r11
	ctx.current_instruction = 0x8813A96C;
	ea = ctx.r31.u32 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// lbzux r28,r30,r11
	ctx.current_instruction = 0x8813A970;
	ea = ctx.r30.u32 + ctx.r11.u32;
	ctx.r28.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// mulli r26,r27,14
	ctx.r26.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(14));
	// lbz r27,0(r9)
	ctx.current_instruction = 0x8813A978;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 + ctx.r25.u64;
	// add r27,r28,r27
	ctx.r27.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add r8,r26,r8
	ctx.r8.u64 = ctx.r26.u64 + ctx.r8.u64;
	// mulli r27,r27,11
	ctx.r27.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(11));
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// subf r8,r27,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r27.u64;
	// addi r8,r8,63
	ctx.r8.s64 = ctx.r8.s64 + 63;
	// srawi r8,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 7;
	// stwu r8,8(r29)
	ctx.current_instruction = 0x8813A9A4;
	ea = 8 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r29.u32 = ea;
	// bdnz 0x8813a958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813A958;
loc_8813A9AC:
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// mullw r9,r24,r7
	ctx.r9.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r7.s32);
	// lbzx r9,r9,r4
	ctx.current_instruction = 0x8813A9B4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// mullw r8,r10,r7
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lbzx r10,r8,r4
	ctx.current_instruction = 0x8813A9BC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// addi r8,r6,-3
	ctx.r8.s64 = ctx.r6.s64 + -3;
	// addi r31,r6,-4
	ctx.r31.s64 = ctx.r6.s64 + -4;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lbzx r8,r8,r4
	ctx.current_instruction = 0x8813A9CC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// mullw r31,r31,r7
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// lbzx r4,r31,r4
	ctx.current_instruction = 0x8813A9D4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// mulli r31,r30,14
	ctx.r31.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(14));
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mulli r8,r4,11
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(11));
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r24,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r9,r10,63
	ctx.r9.s64 = ctx.r10.s64 + 63;
	// srawi r8,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 7;
	// stwx r8,r4,r5
	ctx.current_instruction = 0x8813AA0C;
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r8.u32);
	// ble cr6,0x8813aa60
	if (!ctx.cr6.gt) goto loc_8813AA60;
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8813AA30:
	// lwz r9,0(r5)
	ctx.current_instruction = 0x8813AA30;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x8813aa48
	if (!ctx.cr6.gt) goto loc_8813AA48;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
loc_8813AA48:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// stb r9,0(r10)
	ctx.current_instruction = 0x8813AA50;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stbx r8,r10,r7
	ctx.current_instruction = 0x8813AA54;
	REX_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x8813aa30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813AA30;
loc_8813AA60:
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813FB90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8813FB90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8813FB90) {
			switch (rex_dispatch_address) {
				case 0x8813FBC4:
				case 0x8813FBD8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813FB90;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8813FBC4: goto loc_8813FBC4;
		case 0x8813FBD8: goto loc_8813FBD8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8813FB94;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8813FB98;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8813FB9C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8813FBA0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,32(r3)
	ctx.current_instruction = 0x8813FBA8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// sth r11,80(r1)
	ctx.current_instruction = 0x8813FBB0;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,68(r30)
	ctx.current_instruction = 0x8813FBBC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x88155920
	ctx.lr = 0x8813FBC4;
	sub_88155920(ctx, base);
loc_8813FBC4:
	// lwz r9,108(r30)
	ctx.current_instruction = 0x8813FBC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// lhz r8,80(r1)
	ctx.current_instruction = 0x8813FBC8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// stw r7,0(r31)
	ctx.current_instruction = 0x8813FBD0;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x8813f6e8
	ctx.lr = 0x8813FBD8;
	sub_8813F6E8(ctx, base);
loc_8813FBD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8813FBDC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8813FBE4;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8813FBE8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88140858) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88140858;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88140858) {
			switch (rex_dispatch_address) {
				case 0x88140860:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88140858;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88140860: goto loc_88140860;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88140860;
	__savegprlr_14(ctx, base);
loc_88140860:
	// lwz r10,20(r4)
	ctx.current_instruction = 0x88140860;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,24(r4)
	ctx.current_instruction = 0x88140868;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,28(r4)
	ctx.current_instruction = 0x88140870;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r23,36(r4)
	ctx.current_instruction = 0x88140874;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// add r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,34(r3)
	ctx.current_instruction = 0x8814087C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88140a58
	if (!ctx.cr6.gt) goto loc_88140A58;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// subf r19,r5,r6
	ctx.r19.u64 = ctx.r6.u64 - ctx.r5.u64;
loc_88140890:
	// lwzx r10,r21,r19
	ctx.current_instruction = 0x88140890;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r19.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881408b4
	if (!ctx.cr6.eq) goto loc_881408B4;
	// lhz r9,34(r3)
	ctx.current_instruction = 0x8814089C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// lwz r8,0(r4)
	ctx.current_instruction = 0x881408A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x88140a40
	goto loc_88140A40;
loc_881408B4:
	// lwz r10,0(r4)
	ctx.current_instruction = 0x881408B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// addze r26,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r26.s64 = temp.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// blt cr6,0x88140944
	if (ctx.cr6.lt) goto loc_88140944;
	// addi r27,r26,-1
	ctx.r27.s64 = ctx.r26.s64 + -1;
	// addi r10,r20,-8
	ctx.r10.s64 = ctx.r20.s64 + -8;
	// addi r11,r24,-4
	ctx.r11.s64 = ctx.r24.s64 + -4;
loc_881408E8:
	// lhz r8,6(r11)
	ctx.current_instruction = 0x881408E8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lhz r29,10(r11)
	ctx.current_instruction = 0x881408F0;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r30,4(r11)
	ctx.current_instruction = 0x881408F4;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// lhzu r8,8(r11)
	ctx.current_instruction = 0x881408FC;
	ea = 8 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r17,r29
	ctx.r17.s64 = ctx.r29.s16;
	// lwz r18,12(r10)
	ctx.current_instruction = 0x88140904;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// lwz r16,8(r10)
	ctx.current_instruction = 0x8814090C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// extsh r15,r8
	ctx.r15.s64 = ctx.r8.s16;
	// lwz r14,20(r10)
	ctx.current_instruction = 0x88140914;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mullw r29,r28,r18
	ctx.r29.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r18.s32);
	// lwzu r8,16(r10)
	ctx.current_instruction = 0x8814091C;
	ea = 16 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mullw r30,r30,r16
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r16.s32);
	// mullw r28,r17,r14
	ctx.r28.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r14.s32);
	// mullw r8,r15,r8
	ctx.r8.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r8.s32);
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 + ctx.r8.u64;
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x881408e8
	if (ctx.cr6.lt) goto loc_881408E8;
loc_88140944:
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x88140980
	if (!ctx.cr6.lt) goto loc_88140980;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + ctx.r20.u64;
	// lhz r9,2(r11)
	ctx.current_instruction = 0x8814095C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r8,0(r11)
	ctx.current_instruction = 0x88140960;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x88140964;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwz r10,0(r10)
	ctx.current_instruction = 0x8814096C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_88140980:
	// add r11,r31,r6
	ctx.r11.u64 = ctx.r31.u64 + ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r27,r11,r25
	ctx.r27.u64 = ctx.r11.u64 + ctx.r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// blt cr6,0x881409dc
	if (ctx.cr6.lt) goto loc_881409DC;
	// addi r28,r22,-1
	ctx.r28.s64 = ctx.r22.s64 + -1;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// addi r10,r23,-2
	ctx.r10.s64 = ctx.r23.s64 + -2;
loc_881409A8:
	// lhz r30,2(r10)
	ctx.current_instruction = 0x881409A8;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhzu r31,4(r10)
	ctx.current_instruction = 0x881409B0;
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lwz r29,4(r9)
	ctx.current_instruction = 0x881409B4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// extsh r26,r30
	ctx.r26.s64 = ctx.r30.s16;
	// lwzu r30,8(r9)
	ctx.current_instruction = 0x881409BC;
	ea = 8 + ctx.r9.u32;
	ctx.r30.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// mullw r29,r26,r29
	ctx.r29.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// mullw r31,r31,r30
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// add r8,r29,r8
	ctx.r8.u64 = ctx.r29.u64 + ctx.r8.u64;
	// add r6,r31,r6
	ctx.r6.u64 = ctx.r31.u64 + ctx.r6.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x881409a8
	if (ctx.cr6.lt) goto loc_881409A8;
loc_881409DC:
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x88140a00
	if (!ctx.cr6.lt) goto loc_88140A00;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r11,r10,r23
	ctx.current_instruction = 0x881409EC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r23.u32);
	// lwzx r10,r9,r5
	ctx.current_instruction = 0x881409F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_88140A00:
	// lwz r11,12(r4)
	ctx.current_instruction = 0x88140A00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r10,8(r4)
	ctx.current_instruction = 0x88140A08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// sraw r11,r9,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// stwx r11,r21,r19
	ctx.current_instruction = 0x88140A1C;
	REX_STORE_U32(ctx.r21.u32 + ctx.r19.u32, ctx.r11.u32);
	// beq cr6,0x88140a30
	if (ctx.cr6.eq) goto loc_88140A30;
	// lwz r10,0(r21)
	ctx.current_instruction = 0x88140A24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r21)
	ctx.current_instruction = 0x88140A2C;
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_88140A30:
	// lwz r10,4(r4)
	ctx.current_instruction = 0x88140A30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lhz r11,34(r3)
	ctx.current_instruction = 0x88140A34;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
loc_88140A40:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// add r23,r10,r23
	ctx.r23.u64 = ctx.r10.u64 + ctx.r23.u64;
	// add r24,r9,r24
	ctx.r24.u64 = ctx.r9.u64 + ctx.r24.u64;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88140890
	if (ctx.cr6.lt) goto loc_88140890;
loc_88140A58:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88144B50) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88144B50;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88144B50) {
			switch (rex_dispatch_address) {
				case 0x88144B58:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88144B50;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88144B58: goto loc_88144B58;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88144B58;
	__savegprlr_26(ctx, base);
loc_88144B58:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// ble cr6,0x88144bd8
	if (!ctx.cr6.gt) goto loc_88144BD8;
	// addi r10,r1,-464
	ctx.r10.s64 = ctx.r1.s64 + -464;
	// addi r11,r1,-464
	ctx.r11.s64 = ctx.r1.s64 + -464;
	// subf r27,r10,r6
	ctx.r27.u64 = ctx.r6.u64 - ctx.r10.u64;
loc_88144B74:
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x88144bd8
	if (!ctx.cr6.lt) goto loc_88144BD8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r26,0(r11)
	ctx.current_instruction = 0x88144B80;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// blt cr6,0x88144bc8
	if (ctx.cr6.lt) goto loc_88144BC8;
	// addi r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 1;
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r3,r4,-4
	ctx.r3.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_88144B9C:
	// lwzu r31,-4(r10)
	ctx.current_instruction = 0x88144B9C;
	ea = -4 + ctx.r10.u32;
	ctx.r31.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwzu r30,4(r3)
	ctx.current_instruction = 0x88144BA0;
	ea = 4 + ctx.r3.u32;
	ctx.r30.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// extsw r31,r31
	ctx.r31.s64 = ctx.r31.s32;
	// lwz r29,0(r11)
	ctx.current_instruction = 0x88144BA8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r30,r30
	ctx.r30.s64 = ctx.r30.s32;
	// mulld r31,r31,r30
	ctx.r31.s64 = static_cast<int64_t>(ctx.r31.u64 * ctx.r30.u64);
	// sradi r31,r31,30
	ctx.xer.ca = (ctx.r31.s64 < 0) & ((ctx.r31.u64 & 0x3FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r31.s64 >> 30;
	// extsw r31,r31
	ctx.r31.s64 = ctx.r31.s32;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// stw r31,0(r11)
	ctx.current_instruction = 0x88144BC0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bdnz 0x88144b9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88144B9C;
loc_88144BC8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88144b74
	if (ctx.cr6.lt) goto loc_88144B74;
loc_88144BD8:
	// add r28,r5,r7
	ctx.r28.u64 = ctx.r5.u64 + ctx.r7.u64;
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88144c58
	if (!ctx.cr6.lt) goto loc_88144C58;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-464
	ctx.r7.s64 = ctx.r1.s64 + -464;
	// addi r3,r1,-464
	ctx.r3.s64 = ctx.r1.s64 + -464;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r30,r3,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r3.u64;
	// subf r29,r5,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r5.u64;
loc_88144C04:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r26,0(r11)
	ctx.current_instruction = 0x88144C08;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// ble cr6,0x88144c4c
	if (!ctx.cr6.gt) goto loc_88144C4C;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r7,r4,-4
	ctx.r7.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_88144C20:
	// lwzu r6,-4(r10)
	ctx.current_instruction = 0x88144C20;
	ea = -4 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwzu r3,4(r7)
	ctx.current_instruction = 0x88144C24;
	ea = 4 + ctx.r7.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// lwz r31,0(r11)
	ctx.current_instruction = 0x88144C2C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// mulld r6,r6,r3
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r3.u64);
	// sradi r3,r6,30
	ctx.xer.ca = (ctx.r6.s64 < 0) & ((ctx.r6.u64 & 0x3FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s64 >> 30;
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// stw r6,0(r11)
	ctx.current_instruction = 0x88144C44;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// bdnz 0x88144c20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88144C20;
loc_88144C4C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x88144c04
	if (!ctx.cr0.eq) goto loc_88144C04;
loc_88144C58:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// stw r11,0(r9)
	ctx.current_instruction = 0x88144C64;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addze. r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble 0x88144cb4
	if (!ctx.cr0.gt) goto loc_88144CB4;
	// addi r7,r1,-464
	ctx.r7.s64 = ctx.r1.s64 + -464;
	// addi r11,r1,-464
	ctx.r11.s64 = ctx.r1.s64 + -464;
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
loc_88144C7C:
	// lwz r5,0(r11)
	ctx.current_instruction = 0x88144C7C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r5,r6,r11
	ctx.current_instruction = 0x88144C80;
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r4,0(r9)
	ctx.current_instruction = 0x88144C88;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r10,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r7,r8
	ctx.current_instruction = 0x88144C9C;
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r5.u32);
	// lwz r5,0(r9)
	ctx.current_instruction = 0x88144CA0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x88144c7c
	if (ctx.cr6.lt) goto loc_88144C7C;
loc_88144CB4:
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881494E8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881494E8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881494E8;
	ctx.current_instruction = 0x881494E8;
	PPCRegister temp{};
	uint32_t ea{};
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// sth r8,-2(r1)
	ctx.current_instruction = 0x881494EC;
	REX_STORE_U16(ctx.r1.u32 + -2, ctx.r8.u16);
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// li r10,16
	ctx.r10.s64 = 16;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vspltish v11,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x3)));
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// vspltish v8,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x4)));
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v10,v12,7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0x100))));
	// lwz r9,25792(r8)
	ctx.current_instruction = 0x88149514;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 25792);
	// vsubuhm v6,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lvx128 v7,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,32
	ctx.r9.s64 = 32;
loc_88149528:
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lvx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v4,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v13,v61,v63,v5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v3,v63,v62,v4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v12,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v2,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vperm v13,v12,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v63,v10,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsubshs v1,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vperm v10,v9,v12,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v31,v13,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v12,v13,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm v9,v10,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v30,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v60,v63,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v29,v13,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vslh v26,v12,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v25,v9,v12,v7
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v28,v10,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vslh v27,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v24,v12,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v23,v2,v29
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v20,v12,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v22,v1,v28
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v21,v9,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vsubshs v19,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vsubshs v18,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vadduhm v16,v20,v6
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v17,v21,v6
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v15,v23,v19
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v14,v22,v18
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v13,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v12,v14,v17
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vsrah v10,v13,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v9,v12,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v59,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stvx128 v59,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x88149528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88149528;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8814C150) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814C150;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814C150) {
			switch (rex_dispatch_address) {
				case 0x8814C158:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814C150;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814C158: goto loc_8814C158;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814C158;
	__savegprlr_28(ctx, base);
loc_8814C158:
	// sth r8,-50(r1)
	ctx.current_instruction = 0x8814C158;
	REX_STORE_U16(ctx.r1.u32 + -50, ctx.r8.u16);
	// lis r7,-30678
	ctx.r7.s64 = -2010513408;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// lvx128 v10,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r31,25792(r7)
	ctx.current_instruction = 0x8814C178;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 25792);
	// vslh v0,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r29,r1,-64
	ctx.r29.s64 = ctx.r1.s64 + -64;
	// vaddshs v5,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lvx128 v0,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvx128 v63,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v7,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v4,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v8,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v10,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v6,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v62,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v5,v3
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v59,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v28,v9,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v1,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v27,v8,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v26,v4,v9
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vperm128 v25,v7,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsplth v11,v1,7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_set1_epi16(short(0x100))));
	// vaddshs v24,v2,v8
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v22,v31,v7
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vperm128 v23,v6,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v21,v30,v6
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vaddshs v19,v26,v28
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// vaddshs v20,v29,v11
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vaddshs v18,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// lvx128 v5,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v17,v22,v25
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// rlwinm r29,r6,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddshs v16,v21,v23
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// vsrah v15,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r3,r29,r5
	ctx.r3.u64 = ctx.r29.u64 + ctx.r5.u64;
	// vaddshs v14,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvx128 v58,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v10,v18,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// add r31,r8,r6
	ctx.r31.u64 = ctx.r8.u64 + ctx.r6.u64;
	// vaddshs v9,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvx128 v4,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v8,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvx128 v3,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v7,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r30,r5,r6
	ctx.r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lvx128 v57,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r29,r3,r6
	ctx.r29.u64 = ctx.r3.u64 + ctx.r6.u64;
	// vsrah v6,v14,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// li r11,4
	ctx.r11.s64 = 4;
	// vsrah v2,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm128 v1,v5,v58,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsrah v31,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r6,r31,r6
	ctx.r6.u64 = ctx.r31.u64 + ctx.r6.u64;
	// vsrah v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v56,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vslh v29,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v28,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v27,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v55,r28,r10
	ea = (ctx.r28.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v26,v4,v57,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v25,v29,v4
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vpkshus128 v54,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vperm128 v24,v3,v55,v0
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v22,v27,v3
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v23,v28,v1
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vpkshus128 v53,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vpkshus128 v52,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// stvewx128 v56,r0,r5
	ctx.current_instruction = 0x8814C2C0;
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v21,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vpkshus128 v51,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v19,v22,v24
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// stvewx128 v56,r5,r11
	ctx.current_instruction = 0x8814C2D0;
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v20,v23,v11
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvewx128 v54,r0,r30
	ctx.current_instruction = 0x8814C2D8;
	ea = (ctx.r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v18,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvewx128 v54,r30,r11
	ctx.current_instruction = 0x8814C2E0;
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v16,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvewx128 v53,r0,r3
	ctx.current_instruction = 0x8814C2E8;
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v17,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvewx128 v53,r3,r11
	ctx.current_instruction = 0x8814C2F0;
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r0,r29
	ctx.current_instruction = 0x8814C2F4;
	ea = (ctx.r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v15,v18,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvewx128 v52,r29,r11
	ctx.current_instruction = 0x8814C2FC;
	ea = (ctx.r29.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v14,v16,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvewx128 v51,r0,r7
	ctx.current_instruction = 0x8814C304;
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v50,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// stvewx128 v51,r7,r11
	ctx.current_instruction = 0x8814C30C;
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v49,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vpkshus128 v48,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// stvewx128 v50,r0,r8
	ctx.current_instruction = 0x8814C318;
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r8,r11
	ctx.current_instruction = 0x8814C31C;
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r0,r31
	ctx.current_instruction = 0x8814C320;
	ea = (ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r31,r11
	ctx.current_instruction = 0x8814C324;
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r0,r6
	ctx.current_instruction = 0x8814C328;
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r6,r11
	ctx.current_instruction = 0x8814C32C;
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88155E98) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88155E98);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88155E98;
	ctx.current_instruction = 0x88155E98;
	// lwz r11,8(r3)
	ctx.current_instruction = 0x88155E98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88155eac
	if (!ctx.cr6.eq) goto loc_88155EAC;
	// li r11,8
	ctx.r11.s64 = 8;
loc_88155EAC:
	// subfic r10,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// stw r11,0(r4)
	ctx.current_instruction = 0x88155EB0;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r9,0(r3)
	ctx.current_instruction = 0x88155EB4;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r8.u8 & 0x7F));
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88156DF8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88156DF8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88156DF8) {
			switch (rex_dispatch_address) {
				case 0x88156E00:
				case 0x88156E28:
				case 0x88156E40:
				case 0x88156E58:
				case 0x88156E70:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88156DF8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88156E00: goto loc_88156E00;
		case 0x88156E28: goto loc_88156E28;
		case 0x88156E40: goto loc_88156E40;
		case 0x88156E58: goto loc_88156E58;
		case 0x88156E70: goto loc_88156E70;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88156E00;
	__savegprlr_29(ctx, base);
loc_88156E00:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88156E00;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88156e74
	if (ctx.cr6.eq) goto loc_88156E74;
	// lwz r4,12(r4)
	ctx.current_instruction = 0x88156E14;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88156e2c
	if (ctx.cr6.eq) goto loc_88156E2C;
	// bl 0x8815e530
	ctx.lr = 0x88156E28;
	sub_8815E530(ctx, base);
loc_88156E28:
	// stw r30,12(r31)
	ctx.current_instruction = 0x88156E28;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_88156E2C:
	// lwz r4,16(r31)
	ctx.current_instruction = 0x88156E2C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88156e44
	if (ctx.cr6.eq) goto loc_88156E44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88156E40;
	sub_8815E530(ctx, base);
loc_88156E40:
	// stw r30,16(r31)
	ctx.current_instruction = 0x88156E40;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_88156E44:
	// lwz r4,20(r31)
	ctx.current_instruction = 0x88156E44;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88156e5c
	if (ctx.cr6.eq) goto loc_88156E5C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88156E58;
	sub_8815E530(ctx, base);
loc_88156E58:
	// stw r30,20(r31)
	ctx.current_instruction = 0x88156E58;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_88156E5C:
	// lwz r4,624(r31)
	ctx.current_instruction = 0x88156E5C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 624);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88156e74
	if (ctx.cr6.eq) goto loc_88156E74;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88156E70;
	sub_8815E530(ctx, base);
loc_88156E70:
	// stw r30,624(r31)
	ctx.current_instruction = 0x88156E70;
	REX_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
loc_88156E74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881598F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881598F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881598F0) {
			switch (rex_dispatch_address) {
				case 0x881598F8:
				case 0x88159E3C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881598F0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881598F8: goto loc_881598F8;
		case 0x88159E3C: goto loc_88159E3C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881598F8;
	__savegprlr_27(ctx, base);
loc_881598F8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881598F8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4012(r3)
	ctx.current_instruction = 0x881598FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4012);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88159a90
	if (ctx.cr6.eq) goto loc_88159A90;
	// lwz r11,3012(r3)
	ctx.current_instruction = 0x8815990C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3012);
	// lwz r5,136(r3)
	ctx.current_instruction = 0x88159910;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// lwz r6,3392(r3)
	ctx.current_instruction = 0x88159918;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3392);
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r11,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r11,r5,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,3016(r3)
	ctx.current_instruction = 0x8815992C;
	REX_STORE_U32(ctx.r3.u32 + 3016, ctx.r7.u32);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r8,3020(r3)
	ctx.current_instruction = 0x88159938;
	REX_STORE_U32(ctx.r3.u32 + 3020, ctx.r8.u32);
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,3024(r3)
	ctx.current_instruction = 0x88159940;
	REX_STORE_U32(ctx.r3.u32 + 3024, ctx.r7.u32);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,3028(r3)
	ctx.current_instruction = 0x88159948;
	REX_STORE_U32(ctx.r3.u32 + 3028, ctx.r8.u32);
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r7,3032(r3)
	ctx.current_instruction = 0x88159950;
	REX_STORE_U32(ctx.r3.u32 + 3032, ctx.r7.u32);
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r6,3036(r3)
	ctx.current_instruction = 0x88159958;
	REX_STORE_U32(ctx.r3.u32 + 3036, ctx.r6.u32);
	// stw r8,3040(r3)
	ctx.current_instruction = 0x8815995C;
	REX_STORE_U32(ctx.r3.u32 + 3040, ctx.r8.u32);
	// bne cr6,0x881599b4
	if (!ctx.cr6.eq) goto loc_881599B4;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r8,3044(r3)
	ctx.current_instruction = 0x8815996C;
	REX_STORE_U32(ctx.r3.u32 + 3044, ctx.r8.u32);
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,3048(r3)
	ctx.current_instruction = 0x88159974;
	REX_STORE_U32(ctx.r3.u32 + 3048, ctx.r7.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r8,3052(r3)
	ctx.current_instruction = 0x8815997C;
	REX_STORE_U32(ctx.r3.u32 + 3052, ctx.r8.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,3056(r3)
	ctx.current_instruction = 0x88159984;
	REX_STORE_U32(ctx.r3.u32 + 3056, ctx.r7.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,3060(r3)
	ctx.current_instruction = 0x8815998C;
	REX_STORE_U32(ctx.r3.u32 + 3060, ctx.r9.u32);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,3064(r3)
	ctx.current_instruction = 0x88159994;
	REX_STORE_U32(ctx.r3.u32 + 3064, ctx.r8.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,3068(r3)
	ctx.current_instruction = 0x8815999C;
	REX_STORE_U32(ctx.r3.u32 + 3068, ctx.r9.u32);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,3072(r3)
	ctx.current_instruction = 0x881599A4;
	REX_STORE_U32(ctx.r3.u32 + 3072, ctx.r8.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,3076(r3)
	ctx.current_instruction = 0x881599AC;
	REX_STORE_U32(ctx.r3.u32 + 3076, ctx.r9.u32);
	// stw r11,3080(r3)
	ctx.current_instruction = 0x881599B0;
	REX_STORE_U32(ctx.r3.u32 + 3080, ctx.r11.u32);
loc_881599B4:
	// lwz r11,15304(r10)
	ctx.current_instruction = 0x881599B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 15304);
	// lwz r9,15248(r10)
	ctx.current_instruction = 0x881599B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 15248);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// lwz r8,3980(r10)
	ctx.current_instruction = 0x881599C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 3980);
	// addi r7,r9,31
	ctx.r7.s64 = ctx.r9.s64 + 31;
	// rlwinm r9,r11,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r6,r7,0,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r9,288
	ctx.r11.s64 = ctx.r9.s64 + 288;
	// stw r9,15308(r10)
	ctx.current_instruction = 0x881599D4;
	REX_STORE_U32(ctx.r10.u32 + 15308, ctx.r9.u32);
	// stw r6,15252(r10)
	ctx.current_instruction = 0x881599D8;
	REX_STORE_U32(ctx.r10.u32 + 15252, ctx.r6.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r11,288
	ctx.r9.s64 = ctx.r11.s64 + 288;
	// stw r11,15312(r10)
	ctx.current_instruction = 0x881599E4;
	REX_STORE_U32(ctx.r10.u32 + 15312, ctx.r11.u32);
	// addi r11,r9,96
	ctx.r11.s64 = ctx.r9.s64 + 96;
	// stw r9,15316(r10)
	ctx.current_instruction = 0x881599EC;
	REX_STORE_U32(ctx.r10.u32 + 15316, ctx.r9.u32);
	// addi r9,r11,96
	ctx.r9.s64 = ctx.r11.s64 + 96;
	// stw r11,15320(r10)
	ctx.current_instruction = 0x881599F4;
	REX_STORE_U32(ctx.r10.u32 + 15320, ctx.r11.u32);
	// lwz r11,144(r10)
	ctx.current_instruction = 0x881599F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 144);
	// addi r4,r9,96
	ctx.r4.s64 = ctx.r9.s64 + 96;
	// stw r9,15324(r10)
	ctx.current_instruction = 0x88159A00;
	REX_STORE_U32(ctx.r10.u32 + 15324, ctx.r9.u32);
	// stw r4,15328(r10)
	ctx.current_instruction = 0x88159A04;
	REX_STORE_U32(ctx.r10.u32 + 15328, ctx.r4.u32);
	// beq cr6,0x88159a30
	if (ctx.cr6.eq) goto loc_88159A30;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,464(r10)
	ctx.current_instruction = 0x88159A10;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 464);
	// rlwinm r7,r11,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r8,r6,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,472(r10)
	ctx.current_instruction = 0x88159A28;
	REX_STORE_U32(ctx.r10.u32 + 472, ctx.r4.u32);
	// b 0x88159a48
	goto loc_88159A48;
loc_88159A30:
	// lwz r9,464(r10)
	ctx.current_instruction = 0x88159A30;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 464);
	// rlwinm r8,r11,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r8,472(r10)
	ctx.current_instruction = 0x88159A44;
	REX_STORE_U32(ctx.r10.u32 + 472, ctx.r8.u32);
loc_88159A48:
	// lwz r8,140(r10)
	ctx.current_instruction = 0x88159A48;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,468(r10)
	ctx.current_instruction = 0x88159A50;
	REX_STORE_U32(ctx.r10.u32 + 468, ctx.r9.u32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lwz r9,15272(r10)
	ctx.current_instruction = 0x88159A58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 15272);
	// lwz r7,15332(r10)
	ctx.current_instruction = 0x88159A5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 15332);
	// mullw r3,r8,r5
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// lwz r6,15340(r10)
	ctx.current_instruction = 0x88159A64;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 15340);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,15348(r10)
	ctx.current_instruction = 0x88159A6C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 15348);
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r4,15276(r10)
	ctx.current_instruction = 0x88159A74;
	REX_STORE_U32(ctx.r10.u32 + 15276, ctx.r4.u32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r6,15344(r10)
	ctx.current_instruction = 0x88159A84;
	REX_STORE_U32(ctx.r10.u32 + 15344, ctx.r6.u32);
	// stw r5,15336(r10)
	ctx.current_instruction = 0x88159A88;
	REX_STORE_U32(ctx.r10.u32 + 15336, ctx.r5.u32);
	// stw r4,15352(r10)
	ctx.current_instruction = 0x88159A8C;
	REX_STORE_U32(ctx.r10.u32 + 15352, ctx.r4.u32);
loc_88159A90:
	// lwz r31,140(r10)
	ctx.current_instruction = 0x88159A90;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r28,136(r10)
	ctx.current_instruction = 0x88159A98;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88159b50
	if (ctx.cr6.eq) goto loc_88159B50;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_88159AB8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x88159b44
	if (ctx.cr6.eq) goto loc_88159B44;
	// cntlzw r8,r6
	ctx.r8.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// rlwinm r5,r8,28,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x2;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
loc_88159AD8:
	// lwz r8,140(r10)
	ctx.current_instruction = 0x88159AD8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// cntlzw r30,r11
	ctx.r30.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r7,136(r10)
	ctx.current_instruction = 0x88159AE0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// addi r27,r8,-1
	ctx.r27.s64 = ctx.r8.s64 + -1;
	// lwz r8,272(r10)
	ctx.current_instruction = 0x88159AE8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 272);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r27,r6,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r6.u64;
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
	// cntlzw r27,r27
	ctx.r27.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r30,r30,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r27,r27,28,30,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0x2;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// or r7,r27,r7
	ctx.r7.u64 = ctx.r27.u64 | ctx.r7.u64;
	// or r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 | ctx.r5.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r30,r30,28
	ctx.r30.u64 = ctx.r30.u32 & 0xF;
	// lwz r27,0(r8)
	ctx.current_instruction = 0x88159B20;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// or r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 | ctx.r30.u64;
	// rlwinm r30,r27,0,20,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// rlwinm r7,r7,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFFFF000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 | ctx.r30.u64;
	// stw r7,0(r8)
	ctx.current_instruction = 0x88159B3C;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// bdnz 0x88159ad8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88159AD8;
loc_88159B44:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x88159ab8
	if (ctx.cr6.lt) goto loc_88159AB8;
loc_88159B50:
	// lwz r11,276(r10)
	ctx.current_instruction = 0x88159B50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 276);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stb r29,14(r11)
	ctx.current_instruction = 0x88159B58;
	REX_STORE_U8(ctx.r11.u32 + 14, ctx.r29.u8);
	// lwz r8,276(r10)
	ctx.current_instruction = 0x88159B5C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 276);
	// stb r29,15(r8)
	ctx.current_instruction = 0x88159B60;
	REX_STORE_U8(ctx.r8.u32 + 15, ctx.r29.u8);
	// lwz r7,276(r10)
	ctx.current_instruction = 0x88159B64;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 276);
	// stb r29,16(r7)
	ctx.current_instruction = 0x88159B68;
	REX_STORE_U8(ctx.r7.u32 + 16, ctx.r29.u8);
	// lwz r6,276(r10)
	ctx.current_instruction = 0x88159B6C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 276);
	// stb r29,17(r6)
	ctx.current_instruction = 0x88159B70;
	REX_STORE_U8(ctx.r6.u32 + 17, ctx.r29.u8);
	// lwz r5,276(r10)
	ctx.current_instruction = 0x88159B74;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 276);
	// stb r29,18(r5)
	ctx.current_instruction = 0x88159B78;
	REX_STORE_U8(ctx.r5.u32 + 18, ctx.r29.u8);
	// lwz r4,276(r10)
	ctx.current_instruction = 0x88159B7C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 276);
	// stb r29,19(r4)
	ctx.current_instruction = 0x88159B80;
	REX_STORE_U8(ctx.r4.u32 + 19, ctx.r29.u8);
	// lwz r3,204(r10)
	ctx.current_instruction = 0x88159B84;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 204);
	// lwz r8,208(r10)
	ctx.current_instruction = 0x88159B88;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 208);
	// lwz r31,144(r10)
	ctx.current_instruction = 0x88159B8C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 144);
	// lwz r7,136(r10)
	ctx.current_instruction = 0x88159B90;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lwz r11,1900(r10)
	ctx.current_instruction = 0x88159B9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1900);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,1896(r10)
	ctx.current_instruction = 0x88159BA4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 1896);
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r7,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r3,r5,-8
	ctx.r3.s64 = ctx.r5.s64 + -8;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// stw r4,1892(r10)
	ctx.current_instruction = 0x88159BB8;
	REX_STORE_U32(ctx.r10.u32 + 1892, ctx.r4.u32);
	// stw r3,15240(r10)
	ctx.current_instruction = 0x88159BBC;
	REX_STORE_U32(ctx.r10.u32 + 15240, ctx.r3.u32);
	// neg r7,r4
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// stw r6,15244(r10)
	ctx.current_instruction = 0x88159BC4;
	REX_STORE_U32(ctx.r10.u32 + 15244, ctx.r6.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// ble cr6,0x88159bfc
	if (!ctx.cr6.gt) goto loc_88159BFC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_88159BD4:
	// lwz r5,272(r10)
	ctx.current_instruction = 0x88159BD4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 272);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// lwz r4,0(r5)
	ctx.current_instruction = 0x88159BE4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r3,r4,0,4,2
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r3,0(r5)
	ctx.current_instruction = 0x88159BEC;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r5,144(r10)
	ctx.current_instruction = 0x88159BF0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 144);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x88159bd4
	if (ctx.cr6.lt) goto loc_88159BD4;
loc_88159BFC:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_88159C00:
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88159c10
	if (ctx.cr6.eq) goto loc_88159C10;
	// lwz r7,1892(r10)
	ctx.current_instruction = 0x88159C0C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 1892);
loc_88159C10:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x88159dbc
	if (ctx.cr6.eq) goto loc_88159DBC;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_88159C1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r9,r8,-32
	ctx.r9.s64 = ctx.r8.s64 + -32;
loc_88159C24:
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bgt cr6,0x88159d9c
	if (ctx.cr6.gt) goto loc_88159D9C;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88159c8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88159C8C;
	// bdzf 4*cr6+eq,0x88159ccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88159CCC;
	// bdzf 4*cr6+eq,0x88159cfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88159CFC;
	// bdzf 4*cr6+eq,0x88159d20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88159D20;
	// bne cr6,0x88159d60
	if (!ctx.cr6.eq) goto loc_88159D60;
	// lwz r4,1904(r10)
	ctx.current_instruction = 0x88159C48;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 1904);
	// addi r6,r9,-128
	ctx.r6.s64 = ctx.r9.s64 + -128;
	// subfic r5,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r5.u64 = static_cast<uint64_t>(32) - ctx.r7.u64;
	// stw r6,4(r11)
	ctx.current_instruction = 0x88159C54;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r27,r7,48
	ctx.r27.s64 = ctx.r7.s64 + 48;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,0(r11)
	ctx.current_instruction = 0x88159C64;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// add r6,r5,r8
	ctx.r6.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r4,r27,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r27.u64;
	// lwz r5,1904(r10)
	ctx.current_instruction = 0x88159C70;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 1904);
	// stw r6,12(r11)
	ctx.current_instruction = 0x88159C74;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stw r5,8(r11)
	ctx.current_instruction = 0x88159C78;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r6,1904(r10)
	ctx.current_instruction = 0x88159C7C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 1904);
	// stw r4,20(r11)
	ctx.current_instruction = 0x88159C80;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r6,16(r11)
	ctx.current_instruction = 0x88159C84;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// b 0x88159d9c
	goto loc_88159D9C;
loc_88159C8C:
	// stw r9,24(r11)
	ctx.current_instruction = 0x88159C8C;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// stw r9,28(r11)
	ctx.current_instruction = 0x88159C94;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// addi r5,r6,32
	ctx.r5.s64 = ctx.r6.s64 + 32;
	// addi r4,r6,16
	ctx.r4.s64 = ctx.r6.s64 + 16;
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lwz r4,1904(r10)
	ctx.current_instruction = 0x88159CB0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 1904);
	// stw r6,36(r11)
	ctx.current_instruction = 0x88159CB4;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r4,32(r11)
	ctx.current_instruction = 0x88159CB8;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// lwz r6,1904(r10)
	ctx.current_instruction = 0x88159CBC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 1904);
	// stw r5,44(r11)
	ctx.current_instruction = 0x88159CC0;
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// stw r6,40(r11)
	ctx.current_instruction = 0x88159CC4;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// b 0x88159d9c
	goto loc_88159D9C;
loc_88159CCC:
	// lwz r27,1904(r10)
	ctx.current_instruction = 0x88159CCC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 1904);
	// addi r6,r9,-128
	ctx.r6.s64 = ctx.r9.s64 + -128;
	// addi r5,r9,-32
	ctx.r5.s64 = ctx.r9.s64 + -32;
	// addi r4,r6,-64
	ctx.r4.s64 = ctx.r6.s64 + -64;
	// stw r6,52(r11)
	ctx.current_instruction = 0x88159CDC;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// stw r5,60(r11)
	ctx.current_instruction = 0x88159CE0;
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// stw r5,56(r11)
	ctx.current_instruction = 0x88159CE4;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r5.u32);
	// stw r27,48(r11)
	ctx.current_instruction = 0x88159CE8;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r27.u32);
	// lwz r6,1904(r10)
	ctx.current_instruction = 0x88159CEC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 1904);
	// stw r4,68(r11)
	ctx.current_instruction = 0x88159CF0;
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r4.u32);
	// stw r6,64(r11)
	ctx.current_instruction = 0x88159CF4;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r6.u32);
	// b 0x88159d9c
	goto loc_88159D9C;
loc_88159CFC:
	// addi r6,r9,-32
	ctx.r6.s64 = ctx.r9.s64 + -32;
	// stw r9,76(r11)
	ctx.current_instruction = 0x88159D00;
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// addi r5,r9,-64
	ctx.r5.s64 = ctx.r9.s64 + -64;
	// stw r9,72(r11)
	ctx.current_instruction = 0x88159D08;
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// stw r6,84(r11)
	ctx.current_instruction = 0x88159D0C;
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r6.u32);
	// stw r6,80(r11)
	ctx.current_instruction = 0x88159D10;
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r6.u32);
	// stw r5,92(r11)
	ctx.current_instruction = 0x88159D14;
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r5.u32);
	// stw r5,88(r11)
	ctx.current_instruction = 0x88159D18;
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r5.u32);
	// b 0x88159d9c
	goto loc_88159D9C;
loc_88159D20:
	// lwz r5,1908(r10)
	ctx.current_instruction = 0x88159D20;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 1908);
	// addi r6,r9,-160
	ctx.r6.s64 = ctx.r9.s64 + -160;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,100(r11)
	ctx.current_instruction = 0x88159D2C;
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r6.u32);
	// addi r6,r7,96
	ctx.r6.s64 = ctx.r7.s64 + 96;
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,96(r11)
	ctx.current_instruction = 0x88159D3C;
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r5.u32);
	// subf r5,r6,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r6.u64;
	// lwz r6,1908(r10)
	ctx.current_instruction = 0x88159D44;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 1908);
	// stw r4,108(r11)
	ctx.current_instruction = 0x88159D48;
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r4.u32);
	// stw r6,104(r11)
	ctx.current_instruction = 0x88159D4C;
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r6.u32);
	// lwz r4,1908(r10)
	ctx.current_instruction = 0x88159D50;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 1908);
	// stw r5,116(r11)
	ctx.current_instruction = 0x88159D54;
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r5.u32);
	// stw r4,112(r11)
	ctx.current_instruction = 0x88159D58;
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r4.u32);
	// b 0x88159d9c
	goto loc_88159D9C;
loc_88159D60:
	// lwz r5,1908(r10)
	ctx.current_instruction = 0x88159D60;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 1908);
	// addi r6,r9,-160
	ctx.r6.s64 = ctx.r9.s64 + -160;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,124(r11)
	ctx.current_instruction = 0x88159D6C;
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r6.u32);
	// addi r6,r7,96
	ctx.r6.s64 = ctx.r7.s64 + 96;
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,120(r11)
	ctx.current_instruction = 0x88159D7C;
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r5.u32);
	// subf r5,r6,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r6.u64;
	// lwz r6,1908(r10)
	ctx.current_instruction = 0x88159D84;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 1908);
	// stw r4,132(r11)
	ctx.current_instruction = 0x88159D88;
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r4.u32);
	// stw r6,128(r11)
	ctx.current_instruction = 0x88159D8C;
	REX_STORE_U32(ctx.r11.u32 + 128, ctx.r6.u32);
	// lwz r4,1908(r10)
	ctx.current_instruction = 0x88159D90;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 1908);
	// stw r5,140(r11)
	ctx.current_instruction = 0x88159D94;
	REX_STORE_U32(ctx.r11.u32 + 140, ctx.r5.u32);
	// stw r4,136(r11)
	ctx.current_instruction = 0x88159D98;
	REX_STORE_U32(ctx.r11.u32 + 136, ctx.r4.u32);
loc_88159D9C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// blt cr6,0x88159c24
	if (ctx.cr6.lt) goto loc_88159C24;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// bne 0x88159c1c
	if (!ctx.cr0.eq) goto loc_88159C1C;
loc_88159DBC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x88159c00
	if (ctx.cr6.lt) goto loc_88159C00;
	// lwz r11,204(r10)
	ctx.current_instruction = 0x88159DC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 204);
	// lwz r9,14852(r10)
	ctx.current_instruction = 0x88159DCC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 14852);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,236(r10)
	ctx.current_instruction = 0x88159DDC;
	REX_STORE_U32(ctx.r10.u32 + 236, ctx.r8.u32);
	// beq cr6,0x88159e04
	if (ctx.cr6.eq) goto loc_88159E04;
	// lwz r11,3816(r10)
	ctx.current_instruction = 0x88159DE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 3816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88159dfc
	if (ctx.cr6.eq) goto loc_88159DFC;
	// lwz r9,220(r10)
	ctx.current_instruction = 0x88159DF0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 220);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x88159e00
	goto loc_88159E00;
loc_88159DFC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_88159E00:
	// stw r11,3828(r10)
	ctx.current_instruction = 0x88159E00;
	REX_STORE_U32(ctx.r10.u32 + 3828, ctx.r11.u32);
loc_88159E04:
	// lwz r11,136(r10)
	ctx.current_instruction = 0x88159E04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// addi r3,r10,3772
	ctx.r3.s64 = ctx.r10.s64 + 3772;
	// lwz r9,140(r10)
	ctx.current_instruction = 0x88159E0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// lwz r7,1776(r10)
	ctx.current_instruction = 0x88159E10;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 1776);
	// mullw r6,r11,r9
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r9,1784(r10)
	ctx.current_instruction = 0x88159E18;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1784);
	// lwz r4,3744(r10)
	ctx.current_instruction = 0x88159E1C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 3744);
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,1780(r10)
	ctx.current_instruction = 0x88159E30;
	REX_STORE_U32(ctx.r10.u32 + 1780, ctx.r5.u32);
	// stw r11,1788(r10)
	ctx.current_instruction = 0x88159E34;
	REX_STORE_U32(ctx.r10.u32 + 1788, ctx.r11.u32);
	// bl 0x881715c8
	ctx.lr = 0x88159E3C;
	sub_881715C8(ctx, base);
loc_88159E3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881715C8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881715C8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881715C8;
	ctx.current_instruction = 0x881715C8;
	uint32_t ea{};
	// lwz r11,0(r3)
	ctx.current_instruction = 0x881715C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-11656
	ctx.r10.s64 = ctx.r11.s64 + -11656;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_881715E4:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r6
	ea = ctx.r6.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r9,0,r6
	ea = ctx.r6.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x881715e4
	if (!ctx.cr0.eq) goto loc_881715E4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88171640
	if (ctx.cr6.eq) goto loc_88171640;
loc_88171608:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
loc_8817160C:
	// lwz r8,-11656(r11)
	ctx.current_instruction = 0x8817160C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -11656);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8817160c
	if (!ctx.cr6.eq) goto loc_8817160C;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_8817161C:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8817161c
	if (!ctx.cr0.eq) goto loc_8817161C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88171608
	if (!ctx.cr6.eq) goto loc_88171608;
loc_88171640:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88171654
	if (ctx.cr6.eq) goto loc_88171654;
	// lwz r11,620(r4)
	ctx.current_instruction = 0x88171648;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 620);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,620(r4)
	ctx.current_instruction = 0x88171650;
	REX_STORE_U32(ctx.r4.u32 + 620, ctx.r11.u32);
loc_88171654:
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88171654;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817166c
	if (ctx.cr6.eq) goto loc_8817166C;
	// lwz r9,620(r11)
	ctx.current_instruction = 0x88171660;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 620);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,620(r11)
	ctx.current_instruction = 0x88171668;
	REX_STORE_U32(ctx.r11.u32 + 620, ctx.r9.u32);
loc_8817166C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	ctx.current_instruction = 0x88171670;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,0(r10)
	ctx.current_instruction = 0x88171674;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88176620) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88176620);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88176620;
	ctx.current_instruction = 0x88176620;
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r9,15396(r3)
	ctx.current_instruction = 0x88176620;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15396);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// lwz r7,15392(r3)
	ctx.current_instruction = 0x88176628;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 15392);
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// lwz r11,3832(r3)
	ctx.current_instruction = 0x88176630;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3832);
	// ori r4,r8,128
	ctx.r4.u64 = ctx.r8.u64 | 128;
	// lwz r10,3844(r3)
	ctx.current_instruction = 0x88176638;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3844);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// vspltisb v0,-1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0xFF)));
	// stw r4,-16(r1)
	ctx.current_instruction = 0x88176644;
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// vspltisw v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_set1_epi32(int(0x0)));
	// lvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// srawi r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	// vmrghb v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r4,r8,28
	ctx.r4.u64 = ctx.r8.u32 & 0xF;
	// li r5,16
	ctx.r5.s64 = 16;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x881766c0
	if (ctx.cr6.eq) goto loc_881766C0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x881766e8
	if (!ctx.cr6.gt) goto loc_881766E8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_8817668C:
	// lvrx128 v62,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lvrx128 v60,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v12,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v59,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v11,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vaddubs v10,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// stvlx v10,0,r11
	ctx.current_instruction = 0x881766AC;
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvrx v10,r11,r5
	ctx.current_instruction = 0x881766B0;
	ea = ctx.r11.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v10.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8817668c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817668C;
	// b 0x881766e8
	goto loc_881766E8;
loc_881766C0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x881766e8
	if (!ctx.cr6.gt) goto loc_881766E8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881766CC:
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vaddubs v10,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// stvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x881766cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881766CC;
loc_881766E8:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88176720
	if (!ctx.cr6.gt) goto loc_88176720;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881766F8:
	// lbzx r9,r8,r11
	ctx.current_instruction = 0x881766F8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.current_instruction = 0x881766FC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x88176710
	if (!ctx.cr6.gt) goto loc_88176710;
	// li r10,255
	ctx.r10.s64 = 255;
loc_88176710:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,0(r11)
	ctx.current_instruction = 0x88176714;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881766f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881766F8;
loc_88176720:
	// srawi r9,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// lwz r11,3836(r3)
	ctx.current_instruction = 0x88176724;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3836);
	// lwz r10,3848(r3)
	ctx.current_instruction = 0x88176728;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3848);
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// srawi r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// subf r7,r4,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r4.u64;
	// beq cr6,0x881767c4
	if (ctx.cr6.eq) goto loc_881767C4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8817681c
	if (!ctx.cr6.gt) goto loc_8817681C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_88176760:
	// lvrx128 v58,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v57,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v56,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v55,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvlx128 v54,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vor128 v53,v54,v56
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vupklsb128 v52,v55,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v55.s16)));
	// vupkhsb128 v51,v55,v0
	simde_mm_store_si128((simde__m128i*)ctx.v51.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v55.s8), simde_mm_load_si128((simde__m128i*)ctx.v55.s8))));
	// vupklsb128 v50,v53,v0
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v53.s16)));
	// vupkhsb128 v49,v53,v0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v53.s8), simde_mm_load_si128((simde__m128i*)ctx.v53.s8))));
	// vand128 v12,v52,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v11,v51,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v10,v50,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v9,v49,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v8,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v6,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v5,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v48,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvlx128 v48,r0,r11
	ctx.current_instruction = 0x881767B0;
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvrx128 v48,r11,r5
	ctx.current_instruction = 0x881767B4;
	ea = ctx.r11.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v48.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x88176760
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88176760;
	// b 0x8817681c
	goto loc_8817681C;
loc_881767C4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8817681c
	if (!ctx.cr6.gt) goto loc_8817681C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881767D0:
	// lvx128 v47,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vupklsb128 v45,v47,v0
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v47.s16)));
	// vupklsb128 v44,v46,v0
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v46.s16)));
	// vupkhsb128 v43,v46,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v46.s8), simde_mm_load_si128((simde__m128i*)ctx.v46.s8))));
	// vupkhsb128 v42,v47,v0
	simde_mm_store_si128((simde__m128i*)ctx.v42.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v47.s8), simde_mm_load_si128((simde__m128i*)ctx.v47.s8))));
	// vand128 v12,v45,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v11,v44,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v10,v43,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v9,v42,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v8,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v7,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v6,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v5,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v41,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v41,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x881767d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881767D0;
loc_8817681C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88176868
	if (!ctx.cr6.gt) goto loc_88176868;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
loc_8817682C:
	// lbz r9,0(r10)
	ctx.current_instruction = 0x8817682C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,1(r8)
	ctx.current_instruction = 0x88176830;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8817684c
	if (!ctx.cr6.gt) goto loc_8817684C;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x88176858
	goto loc_88176858;
loc_8817684C:
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
loc_88176858:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r11,1(r8)
	ctx.current_instruction = 0x88176860;
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x8817682c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817682C;
loc_88176868:
	// lwz r11,3840(r3)
	ctx.current_instruction = 0x88176868;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3840);
	// srawi r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	// lwz r10,3852(r3)
	ctx.current_instruction = 0x88176870;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3852);
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | ctx.r11.u64;
	// subf r7,r8,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r8.u64;
	// clrlwi r3,r4,28
	ctx.r3.u64 = ctx.r4.u32 & 0xF;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88176904
	if (ctx.cr6.eq) goto loc_88176904;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8817695c
	if (!ctx.cr6.gt) goto loc_8817695C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_881768A0:
	// lvrx128 v40,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v39,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v38,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v37,v39,v40
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// lvlx128 v36,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vor128 v35,v36,v38
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// vupklsb128 v34,v37,v0
	simde_mm_store_si128((simde__m128i*)ctx.v34.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v37.s16)));
	// vupkhsb128 v33,v37,v0
	simde_mm_store_si128((simde__m128i*)ctx.v33.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v37.s8), simde_mm_load_si128((simde__m128i*)ctx.v37.s8))));
	// vupklsb128 v32,v35,v0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v35.s16)));
	// vupkhsb128 v63,v35,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v35.s8), simde_mm_load_si128((simde__m128i*)ctx.v35.s8))));
	// vand128 v12,v34,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v11,v33,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v10,v32,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v9,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v8,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v6,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v5,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v62,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvlx128 v62,r0,r11
	ctx.current_instruction = 0x881768F0;
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r11,r5
	ctx.current_instruction = 0x881768F4;
	ea = ctx.r11.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x881768a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881768A0;
	// b 0x8817695c
	goto loc_8817695C;
loc_88176904:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8817695c
	if (!ctx.cr6.gt) goto loc_8817695C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88176910:
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vupklsb128 v59,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v61.s16)));
	// vupklsb128 v58,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v60.s16)));
	// vupkhsb128 v57,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v60.s8), simde_mm_load_si128((simde__m128i*)ctx.v60.s8))));
	// vupkhsb128 v56,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v61.s8), simde_mm_load_si128((simde__m128i*)ctx.v61.s8))));
	// vand128 v12,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v11,v58,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v10,v57,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v9,v56,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v8,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v7,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v6,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v5,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v55,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v55,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x88176910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88176910;
loc_8817695C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
loc_8817696C:
	// lbz r9,0(r10)
	ctx.current_instruction = 0x8817696C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,1(r8)
	ctx.current_instruction = 0x88176970;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8817698c
	if (!ctx.cr6.gt) goto loc_8817698C;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x88176998
	goto loc_88176998;
loc_8817698C:
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
loc_88176998:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r11,1(r8)
	ctx.current_instruction = 0x881769A0;
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x8817696c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817696C;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8817DB68) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8817DB68;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8817DB68) {
			switch (rex_dispatch_address) {
				case 0x8817DB70:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817DB68;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8817DB70: goto loc_8817DB70;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8817DB70;
	__savegprlr_26(ctx, base);
loc_8817DB70:
	// lwz r11,24(r7)
	ctx.current_instruction = 0x8817DB70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r29,0(r6)
	ctx.current_instruction = 0x8817DB78;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r28,4(r6)
	ctx.current_instruction = 0x8817DB80;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r31,40(r7)
	ctx.current_instruction = 0x8817DB84;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// lwz r27,20(r7)
	ctx.current_instruction = 0x8817DB88;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// lbz r11,-1(r11)
	ctx.current_instruction = 0x8817DB8C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// dcbzl r0,r31
	ea = (ctx.r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8817dba0
	if (!ctx.cr6.eq) goto loc_8817DBA0;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8817DBA0:
	// clrlwi r30,r11,25
	ctx.r30.u64 = ctx.r11.u32 & 0x7F;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8817dc38
	if (!ctx.cr6.gt) goto loc_8817DC38;
loc_8817DBB0:
	// lhz r10,0(r27)
	ctx.current_instruction = 0x8817DBB0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// rlwinm r26,r10,0,25,25
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// rlwinm r6,r10,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8817dbf0
	if (ctx.cr6.eq) goto loc_8817DBF0;
	// lhz r26,0(r27)
	ctx.current_instruction = 0x8817DBD4;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// rotlwi r26,r26,8
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r6,r26,r6
	ctx.r6.u64 = ctx.r26.u64 | ctx.r6.u64;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
loc_8817DBF0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r6,r29
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// xor r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbzx r26,r10,r4
	ctx.current_instruction = 0x8817DC14;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// subf r9,r9,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r9.u64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// rotlwi r6,r26,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// lbzx r9,r26,r5
	ctx.current_instruction = 0x8817DC28;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r5.u32);
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
	// sthx r10,r6,r31
	ctx.current_instruction = 0x8817DC30;
	REX_STORE_U16(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u16);
	// blt cr6,0x8817dbb0
	if (ctx.cr6.lt) goto loc_8817DBB0;
loc_8817DC38:
	// stw r27,20(r7)
	ctx.current_instruction = 0x8817DC38;
	REX_STORE_U32(ctx.r7.u32 + 20, ctx.r27.u32);
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88182468) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88182468;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88182468) {
			switch (rex_dispatch_address) {
				case 0x88182470:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88182468;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88182470: goto loc_88182470;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x88182470;
	__savegprlr_17(ctx, base);
loc_88182470:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r1,-376
	ctx.r8.s64 = ctx.r1.s64 + -376;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r11,r1,-376
	ctx.r11.s64 = ctx.r1.s64 + -376;
	// subf r25,r8,r5
	ctx.r25.u64 = ctx.r5.u64 - ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88182488:
	// lwz r5,12(r10)
	ctx.current_instruction = 0x88182488;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r31,28(r10)
	ctx.current_instruction = 0x8818248C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r8,8(r10)
	ctx.current_instruction = 0x88182490;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r7,16(r10)
	ctx.current_instruction = 0x88182494;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r6,24(r10)
	ctx.current_instruction = 0x88182498;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mulli r30,r8,2276
	ctx.r30.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(2276));
	// lwz r24,20(r10)
	ctx.current_instruction = 0x881824A0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwzu r9,32(r10)
	ctx.current_instruction = 0x881824A4;
	ea = 32 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwzx r29,r25,r11
	ctx.current_instruction = 0x881824A8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r28,r6,r7
	ctx.r28.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mulli r8,r8,565
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(565));
	// mulli r27,r9,3406
	ctx.r27.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3406));
	// mulli r7,r7,4017
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(4017));
	// mulli r6,r6,799
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(799));
	// mulli r23,r28,2408
	ctx.r23.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(2408));
	// subf r26,r27,r8
	ctx.r26.u64 = ctx.r8.u64 - ctx.r27.u64;
	// add r9,r30,r8
	ctx.r9.u64 = ctx.r30.u64 + ctx.r8.u64;
	// subf r27,r7,r23
	ctx.r27.u64 = ctx.r23.u64 - ctx.r7.u64;
	// subf r28,r6,r23
	ctx.r28.u64 = ctx.r23.u64 - ctx.r6.u64;
	// subf r7,r27,r26
	ctx.r7.u64 = ctx.r26.u64 - ctx.r27.u64;
	// subf r8,r28,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r28.u64;
	// add r30,r31,r5
	ctx.r30.u64 = ctx.r31.u64 + ctx.r5.u64;
	// rlwinm r6,r29,11,0,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 11) & 0xFFFFF800;
	// add r23,r7,r8
	ctx.r23.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r22,r7,r8
	ctx.r22.u64 = ctx.r8.u64 - ctx.r7.u64;
	// mulli r29,r30,1108
	ctx.r29.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(1108));
	// mulli r7,r5,1568
	ctx.r7.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1568));
	// addi r8,r6,128
	ctx.r8.s64 = ctx.r6.s64 + 128;
	// rlwinm r30,r24,11,0,20
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 11) & 0xFFFFF800;
	// add r6,r7,r29
	ctx.r6.u64 = ctx.r7.u64 + ctx.r29.u64;
	// mulli r24,r31,3784
	ctx.r24.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(3784));
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// mulli r5,r23,181
	ctx.r5.s64 = static_cast<int64_t>(ctx.r23.u64 * static_cast<uint64_t>(181));
	// subf r30,r30,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r30.u64;
	// mulli r31,r22,181
	ctx.r31.s64 = static_cast<int64_t>(ctx.r22.u64 * static_cast<uint64_t>(181));
	// subf r8,r24,r29
	ctx.r8.u64 = ctx.r29.u64 - ctx.r24.u64;
	// addi r24,r5,128
	ctx.r24.s64 = ctx.r5.s64 + 128;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// subf r29,r6,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 + ctx.r9.u64;
	// add r7,r30,r8
	ctx.r7.u64 = ctx.r30.u64 + ctx.r8.u64;
	// srawi r6,r24,8
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r24.s32 >> 8;
	// subf r30,r8,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r8.u64;
	// srawi r31,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 8;
	// add r8,r26,r27
	ctx.r8.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r28,r9,r5
	ctx.r28.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r27,r6,r7
	ctx.r27.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r26,r30,r31
	ctx.r26.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r24,r29,r8
	ctx.r24.u64 = ctx.r29.u64 + ctx.r8.u64;
	// srawi r28,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 8;
	// subf r8,r8,r29
	ctx.r8.u64 = ctx.r29.u64 - ctx.r8.u64;
	// srawi r27,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 8;
	// stw r28,-8(r11)
	ctx.current_instruction = 0x88182560;
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r28.u32);
	// srawi r29,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r26.s32 >> 8;
	// subf r31,r31,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r31.u64;
	// stw r27,-4(r11)
	ctx.current_instruction = 0x8818256C;
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r27.u32);
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// stw r29,0(r11)
	ctx.current_instruction = 0x88182574;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// srawi r30,r24,8
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r24.s32 >> 8;
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// subf r5,r9,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r9.u64;
	// stw r30,4(r11)
	ctx.current_instruction = 0x88182584;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// srawi r9,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 8;
	// stw r6,8(r11)
	ctx.current_instruction = 0x8818258C;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// srawi r8,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 8;
	// srawi r7,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 8;
	// stw r9,12(r11)
	ctx.current_instruction = 0x88182598;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r8,16(r11)
	ctx.current_instruction = 0x8818259C;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stw r7,20(r11)
	ctx.current_instruction = 0x881825A0;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x88182488
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88182488;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r20,r10,r3
	ctx.r20.u64 = ctx.r3.u64 - ctx.r10.u64;
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r28,r1,-292
	ctx.r28.s64 = ctx.r1.s64 + -292;
	// add r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 + ctx.r4.u64;
	// addi r11,r1,-228
	ctx.r11.s64 = ctx.r1.s64 + -228;
	// add r10,r6,r4
	ctx.r10.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r23,r6,-1
	ctx.r23.s64 = ctx.r6.s64 + -1;
	// add r6,r10,r4
	ctx.r6.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r22,r10,-1
	ctx.r22.s64 = ctx.r10.s64 + -1;
	// addi r21,r6,-1
	ctx.r21.s64 = ctx.r6.s64 + -1;
	// addi r24,r7,-1
	ctx.r24.s64 = ctx.r7.s64 + -1;
	// addi r25,r8,-1
	ctx.r25.s64 = ctx.r8.s64 + -1;
	// addi r26,r9,-1
	ctx.r26.s64 = ctx.r9.s64 + -1;
loc_881825F8:
	// lwz r8,-124(r11)
	ctx.current_instruction = 0x881825F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -124);
	// lwz r7,68(r11)
	ctx.current_instruction = 0x881825FC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r4,36(r11)
	ctx.current_instruction = 0x88182600;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mulli r6,r8,2276
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(2276));
	// lwz r5,-92(r11)
	ctx.current_instruction = 0x88182608;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r3,-156(r11)
	ctx.current_instruction = 0x8818260C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -156);
	// lwz r19,-28(r11)
	ctx.current_instruction = 0x88182610;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r11.u32 + -28);
	// lwzu r10,4(r11)
	ctx.current_instruction = 0x88182614;
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r9,4(r28)
	ctx.current_instruction = 0x88182618;
	ea = 4 + ctx.r28.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r8,r8,565
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(565));
	// mulli r30,r7,3406
	ctx.r30.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(3406));
	// mulli r7,r31,2408
	ctx.r7.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(2408));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r31,r10,799
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(799));
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// add r7,r6,r8
	ctx.r7.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mulli r6,r9,4017
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(4017));
	// subf r8,r30,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r30.u64;
	// subf r31,r31,r10
	ctx.r31.u64 = ctx.r10.u64 - ctx.r31.u64;
	// add r30,r4,r5
	ctx.r30.u64 = ctx.r4.u64 + ctx.r5.u64;
	// subf r6,r6,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r6.u64;
	// srawi r9,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 3;
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// srawi r7,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r31.s32 >> 3;
	// mulli r10,r30,1108
	ctx.r10.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(1108));
	// srawi r6,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 3;
	// subf r30,r7,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r29,r6,r8
	ctx.r29.u64 = ctx.r8.u64 - ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mulli r4,r4,3784
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(3784));
	// mulli r5,r5,1568
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1568));
	// add r18,r29,r30
	ctx.r18.u64 = ctx.r29.u64 + ctx.r30.u64;
	// subf r4,r4,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r4.u64;
	// rlwinm r31,r3,8,0,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r17,r5,r10
	ctx.r17.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r3,r19,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 8) & 0xFFFFFF00;
	// subf r29,r29,r30
	ctx.r29.u64 = ctx.r30.u64 - ctx.r29.u64;
	// srawi r5,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 3;
	// mulli r30,r18,181
	ctx.r30.s64 = static_cast<int64_t>(ctx.r18.u64 * static_cast<uint64_t>(181));
	// add r10,r31,r3
	ctx.r10.u64 = ctx.r31.u64 + ctx.r3.u64;
	// srawi r4,r17,3
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r17.s32 >> 3;
	// mulli r29,r29,181
	ctx.r29.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(181));
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subf r3,r3,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r3.u64;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r31,r4,r10
	ctx.r31.u64 = ctx.r10.u64 - ctx.r4.u64;
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
	// add r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 + ctx.r5.u64;
	// subf r4,r5,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r5.u64;
	// srawi r6,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 8;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r5,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r29.s32 >> 8;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// add r30,r6,r10
	ctx.r30.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r6,r6,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r6.u64;
	// srawi r7,r3,14
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 14;
	// srawi r3,r9,14
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 14;
	// add r29,r4,r5
	ctx.r29.u64 = ctx.r4.u64 + ctx.r5.u64;
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// srawi r10,r30,14
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 14;
	// add r30,r31,r8
	ctx.r30.u64 = ctx.r31.u64 + ctx.r8.u64;
	// srawi r4,r6,14
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 14;
	// srawi r5,r29,14
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FFF) != 0);
	ctx.r5.s64 = ctx.r29.s32 >> 14;
	// srawi r6,r9,14
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 14;
	// srawi r30,r30,14
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 14;
	// subf r8,r8,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r8.u64;
	// or r31,r30,r7
	ctx.r31.u64 = ctx.r30.u64 | ctx.r7.u64;
	// srawi r9,r8,14
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 14;
	// or r8,r31,r4
	ctx.r8.u64 = ctx.r31.u64 | ctx.r4.u64;
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 | ctx.r3.u64;
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r8,r8,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88182820
	if (ctx.cr6.eq) goto loc_88182820;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x88182750
	if (!ctx.cr6.lt) goto loc_88182750;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8818275c
	goto loc_8818275C;
loc_88182750:
	// cmpwi cr6,r30,255
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 255, ctx.xer);
	// ble cr6,0x8818275c
	if (!ctx.cr6.gt) goto loc_8818275C;
	// li r30,255
	ctx.r30.s64 = 255;
loc_8818275C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8818276c
	if (!ctx.cr6.lt) goto loc_8818276C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88182778
	goto loc_88182778;
loc_8818276C:
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x88182778
	if (!ctx.cr6.gt) goto loc_88182778;
	// li r3,255
	ctx.r3.s64 = 255;
loc_88182778:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x88182788
	if (!ctx.cr6.lt) goto loc_88182788;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x88182794
	goto loc_88182794;
loc_88182788:
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// ble cr6,0x88182794
	if (!ctx.cr6.gt) goto loc_88182794;
	// li r4,255
	ctx.r4.s64 = 255;
loc_88182794:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x881827a4
	if (!ctx.cr6.lt) goto loc_881827A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x881827b0
	goto loc_881827B0;
loc_881827A4:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// ble cr6,0x881827b0
	if (!ctx.cr6.gt) goto loc_881827B0;
	// li r5,255
	ctx.r5.s64 = 255;
loc_881827B0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x881827c0
	if (!ctx.cr6.lt) goto loc_881827C0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x881827cc
	goto loc_881827CC;
loc_881827C0:
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// ble cr6,0x881827cc
	if (!ctx.cr6.gt) goto loc_881827CC;
	// li r6,255
	ctx.r6.s64 = 255;
loc_881827CC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x881827dc
	if (!ctx.cr6.lt) goto loc_881827DC;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x881827e8
	goto loc_881827E8;
loc_881827DC:
	// cmpwi cr6,r7,255
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 255, ctx.xer);
	// ble cr6,0x881827e8
	if (!ctx.cr6.gt) goto loc_881827E8;
	// li r7,255
	ctx.r7.s64 = 255;
loc_881827E8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x881827f8
	if (!ctx.cr6.lt) goto loc_881827F8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x88182804
	goto loc_88182804;
loc_881827F8:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x88182804
	if (!ctx.cr6.gt) goto loc_88182804;
	// li r9,255
	ctx.r9.s64 = 255;
loc_88182804:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x88182814
	if (!ctx.cr6.lt) goto loc_88182814;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x88182820
	goto loc_88182820;
loc_88182814:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x88182820
	if (!ctx.cr6.gt) goto loc_88182820;
	// li r10,255
	ctx.r10.s64 = 255;
loc_88182820:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stbx r8,r20,r27
	ctx.current_instruction = 0x8818282C;
	REX_STORE_U8(ctx.r20.u32 + ctx.r27.u32, ctx.r8.u8);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// stb r7,0(r27)
	ctx.current_instruction = 0x88182834;
	REX_STORE_U8(ctx.r27.u32 + 0, ctx.r7.u8);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbu r5,1(r26)
	ctx.current_instruction = 0x8818283C;
	ea = 1 + ctx.r26.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r26.u32 = ea;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// stbu r10,1(r25)
	ctx.current_instruction = 0x88182844;
	ea = 1 + ctx.r25.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r25.u32 = ea;
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// stbu r9,1(r24)
	ctx.current_instruction = 0x8818284C;
	ea = 1 + ctx.r24.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r24.u32 = ea;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// stbu r8,1(r23)
	ctx.current_instruction = 0x88182854;
	ea = 1 + ctx.r23.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r23.u32 = ea;
	// stbu r7,1(r22)
	ctx.current_instruction = 0x88182858;
	ea = 1 + ctx.r22.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r22.u32 = ea;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stbu r6,1(r21)
	ctx.current_instruction = 0x88182860;
	ea = 1 + ctx.r21.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r21.u32 = ea;
	// bdnz 0x881825f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881825F8;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8818BE18) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8818BE18);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8818BE18;
	ctx.current_instruction = 0x8818BE18;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8818beb0
	if (!ctx.cr6.eq) goto loc_8818BEB0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lis r9,-30678
	ctx.r9.s64 = -2010513408;
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// beq cr6,0x8818be44
	if (ctx.cr6.eq) goto loc_8818BE44;
	// lis r11,-30691
	ctx.r11.s64 = -2011365376;
	// lis r10,-30691
	ctx.r10.s64 = -2011365376;
	// addi r11,r11,25944
	ctx.r11.s64 = ctx.r11.s64 + 25944;
	// addi r10,r10,31608
	ctx.r10.s64 = ctx.r10.s64 + 31608;
	// b 0x8818be54
	goto loc_8818BE54;
loc_8818BE44:
	// lis r11,-30690
	ctx.r11.s64 = -2011299840;
	// lis r10,-30690
	ctx.r10.s64 = -2011299840;
	// addi r11,r11,-31056
	ctx.r11.s64 = ctx.r11.s64 + -31056;
	// addi r10,r10,-24128
	ctx.r10.s64 = ctx.r10.s64 + -24128;
loc_8818BE54:
	// stw r11,24572(r9)
	ctx.current_instruction = 0x8818BE54;
	REX_STORE_U32(ctx.r9.u32 + 24572, ctx.r11.u32);
	// lis r7,-30678
	ctx.r7.s64 = -2010513408;
	// lis r11,-30695
	ctx.r11.s64 = -2011627520;
	// stw r10,24568(r8)
	ctx.current_instruction = 0x8818BE60;
	REX_STORE_U32(ctx.r8.u32 + 24568, ctx.r10.u32);
	// lis r10,-30695
	ctx.r10.s64 = -2011627520;
	// addi r11,r11,-24520
	ctx.r11.s64 = ctx.r11.s64 + -24520;
	// lis r6,-30678
	ctx.r6.s64 = -2010513408;
	// addi r10,r10,-24592
	ctx.r10.s64 = ctx.r10.s64 + -24592;
	// stw r11,24564(r7)
	ctx.current_instruction = 0x8818BE74;
	REX_STORE_U32(ctx.r7.u32 + 24564, ctx.r11.u32);
	// lis r9,-30691
	ctx.r9.s64 = -2011365376;
	// lis r8,-30695
	ctx.r8.s64 = -2011627520;
	// lis r7,-30695
	ctx.r7.s64 = -2011627520;
	// lis r5,-30678
	ctx.r5.s64 = -2010513408;
	// stw r10,24560(r6)
	ctx.current_instruction = 0x8818BE88;
	REX_STORE_U32(ctx.r6.u32 + 24560, ctx.r10.u32);
	// lis r4,-30678
	ctx.r4.s64 = -2010513408;
	// lis r3,-30678
	ctx.r3.s64 = -2010513408;
	// addi r9,r9,24584
	ctx.r9.s64 = ctx.r9.s64 + 24584;
	// addi r11,r8,-24872
	ctx.r11.s64 = ctx.r8.s64 + -24872;
	// addi r10,r7,-17456
	ctx.r10.s64 = ctx.r7.s64 + -17456;
	// stw r9,24552(r5)
	ctx.current_instruction = 0x8818BEA0;
	REX_STORE_U32(ctx.r5.u32 + 24552, ctx.r9.u32);
	// stw r11,24548(r4)
	ctx.current_instruction = 0x8818BEA4;
	REX_STORE_U32(ctx.r4.u32 + 24548, ctx.r11.u32);
	// stw r10,24544(r3)
	ctx.current_instruction = 0x8818BEA8;
	REX_STORE_U32(ctx.r3.u32 + 24544, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8818BEB0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// beq cr6,0x8818becc
	if (ctx.cr6.eq) goto loc_8818BECC;
	// lis r11,-30695
	ctx.r11.s64 = -2011627520;
	// addi r11,r11,-20072
	ctx.r11.s64 = ctx.r11.s64 + -20072;
	// stw r11,24556(r10)
	ctx.current_instruction = 0x8818BEC4;
	REX_STORE_U32(ctx.r10.u32 + 24556, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8818BECC:
	// lis r11,-30695
	ctx.r11.s64 = -2011627520;
	// addi r11,r11,-24232
	ctx.r11.s64 = ctx.r11.s64 + -24232;
	// stw r11,24556(r10)
	ctx.current_instruction = 0x8818BED4;
	REX_STORE_U32(ctx.r10.u32 + 24556, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88190018) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88190018;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88190018) {
			switch (rex_dispatch_address) {
				case 0x88190020:
				case 0x88190094:
				case 0x881900DC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88190018;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88190020: goto loc_88190020;
		case 0x88190094: goto loc_88190094;
		case 0x881900DC: goto loc_881900DC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88190020;
	__savegprlr_26(ctx, base);
loc_88190020:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88190020;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x88190024;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,3
	ctx.r30.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8819003C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x881900a4
	if (!ctx.cr6.lt) goto loc_881900A4;
loc_8819004C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881900a4
	if (ctx.cr6.eq) goto loc_881900A4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88190058;
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
	ctx.current_instruction = 0x8819007C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88190084;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88190094
	if (!ctx.cr0.lt) goto loc_88190094;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88190094;
	sub_88156678(ctx, base);
loc_88190094:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88190094;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8819004c
	if (ctx.cr6.gt) goto loc_8819004C;
loc_881900A4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881900A8;
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
	ctx.current_instruction = 0x881900C0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881900CC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881900dc
	if (!ctx.cr0.lt) goto loc_881900DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881900DC;
	sub_88156678(ctx, base);
loc_881900DC:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,25040
	ctx.r11.s64 = ctx.r11.s64 + 25040;
	// beq cr6,0x88190110
	if (ctx.cr6.eq) goto loc_88190110;
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r8,r10,r9
	ctx.current_instruction = 0x881900F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,21776(r28)
	ctx.current_instruction = 0x881900FC;
	REX_STORE_U32(ctx.r28.u32 + 21776, ctx.r8.u32);
	// lwzx r11,r10,r11
	ctx.current_instruction = 0x88190100;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,21780(r28)
	ctx.current_instruction = 0x88190104;
	REX_STORE_U32(ctx.r28.u32 + 21780, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88190110:
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// lwz r9,21776(r28)
	ctx.current_instruction = 0x88190114;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 21776);
	// lwzx r7,r10,r8
	ctx.current_instruction = 0x88190118;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x88190128
	if (ctx.cr6.eq) goto loc_88190128;
	// li r26,1
	ctx.r26.s64 = 1;
loc_88190128:
	// lwz r9,21780(r28)
	ctx.current_instruction = 0x88190128;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 21780);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x88190130;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x88190140
	if (!ctx.cr6.eq) goto loc_88190140;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_88190140:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88193980) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88193980);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88193980;
	ctx.current_instruction = 0x88193980;
	uint32_t ea{};
	// vspltish v15,15
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_set1_epi16(short(0xF)));
	// li r0,0
	ctx.r0.s64 = 0;
	// addi r8,r3,128
	ctx.r8.s64 = ctx.r3.s64 + 128;
	// add r12,r6,r6
	ctx.r12.u64 = ctx.r6.u64 + ctx.r6.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vslb v8,v15,v15
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// add r11,r7,r7
	ctx.r11.u64 = ctx.r7.u64 + ctx.r7.u64;
	// lvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r12,r9
	ctx.r10.u64 = ctx.r12.u64 + ctx.r9.u64;
	// lvx128 v1,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v2,r3,r12
	ea = (ctx.r3.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v16,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v3,r8,r12
	ea = (ctx.r8.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v17,v1,v8
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v4,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v18,v2,v8
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v5,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v19,v3,v8
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v7,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v20,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx v16,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// vaddshs v21,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx v17,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v22,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx v18,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v23,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx v19,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v20,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v21,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v22,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v23,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r9,r9
	ctx.r7.u64 = ctx.r9.u64 + ctx.r9.u64;
	// add r10,r12,r7
	ctx.r10.u64 = ctx.r12.u64 + ctx.r7.u64;
	// lvx128 v1,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v17,v1,v8
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v0,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r12,r10
	ctx.r7.u64 = ctx.r12.u64 + ctx.r10.u64;
	// lvx128 v3,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v16,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v2,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r12,r7
	ctx.r10.u64 = ctx.r12.u64 + ctx.r7.u64;
	// lvx128 v4,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v18,v2,v8
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v6,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v19,v3,v8
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v7,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v20,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v5,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r6,r6
	ctx.r7.u64 = ctx.r6.u64 + ctx.r6.u64;
	// vaddshs v21,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stvx v16,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stvx v17,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// vaddshs v22,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v23,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx v18,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v19,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v20,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v21,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v22,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v23,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88197808) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88197808;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88197808) {
			switch (rex_dispatch_address) {
				case 0x88197810:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88197808;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88197810: goto loc_88197810;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88197810;
	__savegprlr_27(ctx, base);
loc_88197810:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,36(r1)
	ctx.current_instruction = 0x88197814;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v20,-1
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_set1_epi8(char(0xFF)));
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltish v19,1
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_set1_epi16(short(0x1)));
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// vspltish v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x2)));
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// vspltish v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x3)));
	// vspltish v7,4
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v6,15
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0xF)));
	// ble cr6,0x88197af0
	if (!ctx.cr6.gt) goto loc_88197AF0;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r7,r11,25920
	ctx.r7.s64 = ctx.r11.s64 + 25920;
	// addi r29,r10,4
	ctx.r29.s64 = ctx.r10.s64 + 4;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v1,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r7,r9
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_88197864:
	// add r7,r29,r3
	ctx.r7.u64 = ctx.r29.u64 + ctx.r3.u64;
loc_88197868:
	// lbz r5,0(r7)
	ctx.current_instruction = 0x88197868;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r9,1(r7)
	ctx.current_instruction = 0x8819786C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r9,r9,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r9.u64;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// xor r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bge cr6,0x881978a0
	if (!ctx.cr6.lt) goto loc_881978A0;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r6,r6,-4
	ctx.xer.ca = ctx.r6.u32 > 3;
	ctx.r6.s64 = ctx.r6.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// bgt 0x88197868
	if (ctx.cr0.gt) goto loc_88197868;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881978A0:
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// ble cr6,0x881978e4
	if (!ctx.cr6.gt) goto loc_881978E4;
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lbz r5,5(r9)
	ctx.current_instruction = 0x881978C0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r9,4(r9)
	ctx.current_instruction = 0x881978C4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// xor r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// subf r9,r9,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r9.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x88197af4
	if (!ctx.cr6.lt) goto loc_88197AF4;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
loc_881978E4:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// vpkswss128 v40,v20,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.s32), simde_mm_load_si128((simde__m128i*)ctx.v20.s32)));
	// addi r28,r1,36
	ctx.r28.s64 = ctx.r1.s64 + 36;
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lvlx128 v39,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r27,r1,36
	ctx.r27.s64 = ctx.r1.s64 + 36;
	// lvrx128 v38,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// lvlx128 v37,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v29,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// lvrx128 v36,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v35,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v28,v37,v36
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// lvrx128 v34,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v33,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v27,v35,v34
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// lvrx128 v32,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v26,v33,v32
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// lvrx128 v63,r11,r28
	temp.u32 = ctx.r11.u32 + ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v13,v29,v27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// vor128 v8,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmrghb v9,v28,v26
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// vsplth v25,v8,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vmrglb v23,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v24,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglw v5,v23,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v23.u32)));
	// vmrghw v9,v23,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v23.u32)));
	// vmrghw v8,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v24.u32)));
	// vmrglw v13,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v24.u32)));
	// vmrghb v21,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v22,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v17,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v2,v3,v21
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vmrglb v18,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v13,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v5,v22,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v3,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v15,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v31,v17,v13
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v30,v9,v18
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v8,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v16,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v4,v15,v2
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v14,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v2,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vslh v30,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v16,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubshs v31,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v23,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v21,v30,v8
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v24,v14,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmaxsh v22,v8,v31
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v18,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v16,v23,v7
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v17,v24,v7
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsrah v4,v22,v19
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v15,v18,v21
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsrah v5,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v17,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v16,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsplth v14,v4,2
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_set1_epi16(short(0xB0A))));
	// vaddshs v8,v15,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v3,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v30,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsrah v8,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v24,v14,v40
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vmaxsh v23,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmaxsh v22,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsrah v17,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v21,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vsubshs v18,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vminsh v3,v23,v22
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vxor128 v61,v17,v5
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vsrah v16,v21,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v8,v8,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v2,v8,v3
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcmpgtsh v15,v25,v8
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vcmpgtsh v14,v8,v3
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vand128 v60,v61,v16
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// vslh v8,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vand128 v63,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vaddshs v3,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vperm128 v59,v63,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vsrah v2,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v58,v2,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v57,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vand128 v31,v57,v60
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vminsh v30,v4,v31
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vxor v25,v30,v5
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vsubshs v24,v25,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vand128 v8,v24,v40
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vcmpequh. v23,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), 0xFFFF);
	// mfocrf r7,2
	ctx.r7.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vsubshs v22,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// rlwinm r5,r7,0,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	// vaddshs v21,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// vmrghh v18,v22,v21
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vpkshus v13,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// beq cr6,0x88197ae8
	if (ctx.cr6.eq) goto loc_88197AE8;
	// vsplth v9,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xF0E))));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vsplth v8,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vsplth v4,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xB0A))));
	// vsplth v3,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0x908))));
	// vsldoi v5,v9,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v8,v8,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v9,v4,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v13,v3,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsel v4,v29,v5,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8))));
	// vsel v5,v28,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vsel v8,v27,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vsel v9,v26,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// stvlx v4,0,r9
	ctx.current_instruction = 0x88197AC0;
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvrx v4,r9,r11
	ctx.current_instruction = 0x88197AC4;
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v4.u8[i]);
	// stvlx v5,r9,r4
	ctx.current_instruction = 0x88197AC8;
	ea = ctx.r9.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvrx v5,r7,r11
	ctx.current_instruction = 0x88197ACC;
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v5.u8[i]);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stvlx v8,r9,r10
	ctx.current_instruction = 0x88197AD4;
	ea = ctx.r9.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvrx v8,r7,r11
	ctx.current_instruction = 0x88197AD8;
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v8.u8[i]);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stvlx v9,r9,r8
	ctx.current_instruction = 0x88197AE0;
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvrx v9,r7,r11
	ctx.current_instruction = 0x88197AE4;
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v9.u8[i]);
loc_88197AE8:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt cr6,0x88197864
	if (ctx.cr6.gt) goto loc_88197864;
loc_88197AF0:
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88197AF4:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// addi r7,r7,17
	ctx.r7.s64 = ctx.r7.s64 + 17;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r31,r7,r30
	ctx.r31.u64 = ctx.r7.u64 + ctx.r30.u64;
	// addi r28,r1,36
	ctx.r28.s64 = ctx.r1.s64 + 36;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r27,r1,36
	ctx.r27.s64 = ctx.r1.s64 + 36;
	// lvrx128 v62,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r6,r6,-8
	ctx.r6.s64 = ctx.r6.s64 + -8;
	// lvrx128 v61,r7,r30
	temp.u32 = ctx.r7.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v2,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v60,r9,r30
	temp.u32 = ctx.r9.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v59,r10,r7
	temp.u32 = ctx.r10.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvlx128 v58,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v57,r10,r31
	temp.u32 = ctx.r10.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v27,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvlx128 v56,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v30,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vmrghb v13,v2,v31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvrx128 v55,r4,r7
	temp.u32 = ctx.r4.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r4,r9
	temp.u32 = ctx.r4.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r4,r31
	temp.u32 = ctx.r4.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v28,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vmrghb v8,v27,v30
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8)));
	// lvlx128 v52,r4,r5
	temp.u32 = ctx.r4.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v51,r8,r7
	temp.u32 = ctx.r8.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v3,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v50,r8,r9
	temp.u32 = ctx.r8.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v49,r8,r31
	temp.u32 = ctx.r8.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v29,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r8,r5
	temp.u32 = ctx.r8.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v4,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v26,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// lvrx128 v47,r11,r28
	temp.u32 = ctx.r11.u32 + ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v46,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v13,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v8,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vmrghb v9,v28,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// vmrghb v5,v29,v26
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// vsplth v18,v8,1
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vmrghb v8,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vmrglb v9,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vmrglb v5,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v8,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v25,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v4,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v13,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v17,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v16,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v15,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v22,v17,v5
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrglb v14,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v25,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v8,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v4,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v23,v16,v13
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vslh v16,v22,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v24,v5,v25
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v25,v25,v15
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vmaxsh v17,v8,v4
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vslh v15,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v21,v9,v14
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vaddshs v5,v16,v22
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vaddshs v14,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vslh v23,v25,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v4,v17,v19
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v24,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vaddshs v17,v15,v8
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v15,v14,v5
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v14,v23,v25
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vperm v22,v4,v4,v1
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vaddshs v16,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsubshs v25,v24,v17
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vsrah v5,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v23,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vaddshs v24,v15,v7
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v22,v16,v14
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vaddshs v21,v25,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v17,v22,v7
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsrah v25,v24,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v21,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v23,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v17,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v15,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v14,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsrah v23,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v22,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vmaxsh v21,v25,v15
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vmaxsh v8,v8,v14
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vxor128 v45,v23,v5
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmaxsh v17,v24,v22
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vcmpgtsh v15,v18,v8
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vand128 v44,v45,v16
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// vminsh v25,v21,v17
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vsubshs v24,v8,v25
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vcmpgtsh v14,v8,v25
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vslh v8,v24,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vand128 v63,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vaddshs v25,v8,v24
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vperm128 v43,v63,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vsrah v24,v25,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v42,v24,v63
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v41,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vand128 v23,v41,v44
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// vminsh v22,v4,v23
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vxor v21,v22,v5
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vsubshs v18,v21,v5
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vand v8,v18,v20
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v20.u8)));
	// vcmpequh. v17,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), 0xFFFF);
	// mfocrf r7,2
	ctx.r7.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vsubshs v13,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// rlwinm r5,r7,0,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	// vaddshs v8,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + ctx.r30.u64;
	// vor v9,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v26.u8));
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// vmrglh v16,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vmrghh v15,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vpkshus v13,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vsplth v14,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xF0E))));
	// vsplth v4,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vsplth v25,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0x908))));
	// vsplth v24,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0x706))));
	// vsldoi v8,v14,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsplth v23,v13,5
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0x504))));
	// vsplth v22,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xB0A))));
	// vsplth v21,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0x302))));
	// vsel v5,v2,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vsplth v18,v13,7
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0x100))));
	// vsldoi v13,v4,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v2,v24,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v4,v23,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v63,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vsldoi v8,v21,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor v5,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vsldoi v30,v25,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsel v24,v28,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vsldoi v26,v22,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v13,v18,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsel v28,v29,v30,v12
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vsel v30,v31,v2,v12
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8))));
	// vsel v2,v3,v4,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8))));
	// vsel v4,v5,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vsel v25,v27,v26,v12
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8))));
	// vsel v8,v9,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// beq cr6,0x88197ae8
	if (ctx.cr6.eq) goto loc_88197AE8;
	// add r5,r9,r4
	ctx.r5.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stvlx128 v63,r0,r9
	ctx.current_instruction = 0x88197D4C;
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r9,r11
	ctx.current_instruction = 0x88197D50;
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// stvlx v24,r9,r4
	ctx.current_instruction = 0x88197D54;
	ea = ctx.r9.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v24.u8[15 - i]);
	// stvrx v24,r5,r11
	ctx.current_instruction = 0x88197D58;
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v24.u8[i]);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stvlx v25,r9,r10
	ctx.current_instruction = 0x88197D60;
	ea = ctx.r9.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v25.u8[15 - i]);
	// stvrx v25,r5,r11
	ctx.current_instruction = 0x88197D64;
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v25.u8[i]);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stvlx v28,r9,r8
	ctx.current_instruction = 0x88197D6C;
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v28.u8[15 - i]);
	// add r9,r7,r4
	ctx.r9.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stvrx v28,r5,r11
	ctx.current_instruction = 0x88197D74;
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v28.u8[i]);
	// stvlx v30,0,r7
	ctx.current_instruction = 0x88197D78;
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v30.u8[15 - i]);
	// stvrx v30,r7,r11
	ctx.current_instruction = 0x88197D7C;
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v30.u8[i]);
	// stvlx v2,r7,r4
	ctx.current_instruction = 0x88197D80;
	ea = ctx.r7.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvrx v2,r9,r11
	ctx.current_instruction = 0x88197D84;
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v2.u8[i]);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stvlx v4,r7,r10
	ctx.current_instruction = 0x88197D8C;
	ea = ctx.r7.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvrx v4,r9,r11
	ctx.current_instruction = 0x88197D90;
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v4.u8[i]);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvlx v8,r7,r8
	ctx.current_instruction = 0x88197D98;
	ea = ctx.r7.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvrx v8,r9,r11
	ctx.current_instruction = 0x88197D9C;
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v8.u8[i]);
	// b 0x88197ae8
	goto loc_88197AE8;
}

DEFINE_REX_FUNC(sub_881B3F80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B3F80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B3F80) {
			switch (rex_dispatch_address) {
				case 0x881B3F88:
				case 0x881B40B4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B3F80;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B3F88: goto loc_881B3F88;
		case 0x881B40B4: goto loc_881B40B4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x881B3F88;
	__savegprlr_18(ctx, base);
loc_881B3F88:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x881B3F88;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,10
	ctx.r11.s64 = ctx.r5.s64 + 10;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// srawi r29,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 3;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// addi r31,r3,-5
	ctx.r31.s64 = ctx.r3.s64 + -5;
	// li r19,8
	ctx.r19.s64 = 8;
	// rlwinm r28,r29,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_881B3FAC:
	// lbz r24,3(r31)
	ctx.current_instruction = 0x881B3FAC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r6,4(r31)
	ctx.current_instruction = 0x881B3FB0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r4,2(r31)
	ctx.current_instruction = 0x881B3FB4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// subf r11,r6,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r6.u64;
	// lbz r22,1(r31)
	ctx.current_instruction = 0x881B3FBC;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// subf r10,r24,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r24.u64;
	// lbz r25,5(r31)
	ctx.current_instruction = 0x881B3FC4;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r26,6(r31)
	ctx.current_instruction = 0x881B3FCC;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r30,7(r31)
	ctx.current_instruction = 0x881B3FD4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// subfc r11,r11,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r28.u64 - ctx.r11.u64;
	// lbz r23,8(r31)
	ctx.current_instruction = 0x881B3FDC;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r31.u32 + 8);
	// subf r10,r4,r22
	ctx.r10.u64 = ctx.r22.u64 - ctx.r4.u64;
	// subfze r8,r27
	temp.u8 = ~ctx.r27.u32 + ctx.xer.ca < ~ctx.r27.u32;
	ctx.r8.u64 = ~ctx.r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r11,r9,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r9.u32;
	ctx.r11.u64 = ctx.r28.u64 - ctx.r9.u64;
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subf r21,r25,r6
	ctx.r21.u64 = ctx.r6.u64 - ctx.r25.u64;
	// subfze r10,r27
	temp.u8 = ~ctx.r27.u32 + ctx.xer.ca < ~ctx.r27.u32;
	ctx.r10.u64 = ~ctx.r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r11,r7,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r7.u32;
	ctx.r11.u64 = ctx.r28.u64 - ctx.r7.u64;
	// add r5,r21,r29
	ctx.r5.u64 = ctx.r21.u64 + ctx.r29.u64;
	// subfze r9,r27
	temp.u8 = ~ctx.r27.u32 + ctx.xer.ca < ~ctx.r27.u32;
	ctx.r9.u64 = ~ctx.r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subfc r11,r5,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r5.u32;
	ctx.r11.u64 = ctx.r28.u64 - ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subfze r11,r27
	temp.u8 = ~ctx.r27.u32 + ctx.xer.ca < ~ctx.r27.u32;
	ctx.r11.u64 = ~ctx.r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881b4088
	if (ctx.cr0.eq) goto loc_881B4088;
	// lbz r10,9(r31)
	ctx.current_instruction = 0x881B401C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 9);
	// subf r8,r23,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r23.u64;
	// lbz r7,0(r31)
	ctx.current_instruction = 0x881B4024;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// subf r9,r10,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r10.u64;
	// subf r10,r22,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r22.u64;
	// add r5,r9,r29
	ctx.r5.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subfc r10,r5,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r5.u32;
	ctx.r10.u64 = ctx.r28.u64 - ctx.r5.u64;
	// add r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 + ctx.r29.u64;
	// subfze r9,r27
	temp.u8 = ~ctx.r27.u32 + ctx.xer.ca < ~ctx.r27.u32;
	ctx.r9.u64 = ~ctx.r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r10,r3,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r3.u32;
	ctx.r10.u64 = ctx.r28.u64 - ctx.r3.u64;
	// subf r8,r30,r26
	ctx.r8.u64 = ctx.r26.u64 - ctx.r30.u64;
	// subfze r5,r27
	temp.u8 = ~ctx.r27.u32 + ctx.xer.ca < ~ctx.r27.u32;
	ctx.r5.u64 = ~ctx.r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r10,r7,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r7.u32;
	ctx.r10.u64 = ctx.r28.u64 - ctx.r7.u64;
	// add r3,r8,r29
	ctx.r3.u64 = ctx.r8.u64 + ctx.r29.u64;
	// subf r8,r26,r25
	ctx.r8.u64 = ctx.r25.u64 - ctx.r26.u64;
	// subfze r7,r27
	temp.u8 = ~ctx.r27.u32 + ctx.xer.ca < ~ctx.r27.u32;
	ctx.r7.u64 = ~ctx.r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// subfc r10,r3,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r3.u32;
	ctx.r10.u64 = ctx.r28.u64 - ctx.r3.u64;
	// add r5,r8,r29
	ctx.r5.u64 = ctx.r8.u64 + ctx.r29.u64;
	// subfze r8,r27
	temp.u8 = ~ctx.r27.u32 + ctx.xer.ca < ~ctx.r27.u32;
	ctx.r8.u64 = ~ctx.r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subfc r10,r5,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r5.u32;
	ctx.r10.u64 = ctx.r28.u64 - ctx.r5.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subfze r10,r27
	temp.u8 = ~ctx.r27.u32 + ctx.xer.ca < ~ctx.r27.u32;
	ctx.r10.u64 = ~ctx.r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_881B4088:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x881b4148
	if (ctx.cr6.lt) goto loc_881B4148;
	// rlwinm r11,r20,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x881B409C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x881b3a88
	ctx.lr = 0x881B40B4;
	sub_881B3A88(ctx, base);
loc_881B40B4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881b4148
	if (ctx.cr6.eq) goto loc_881B4148;
	// add r10,r24,r4
	ctx.r10.u64 = ctx.r24.u64 + ctx.r4.u64;
	// add r9,r30,r26
	ctx.r9.u64 = ctx.r30.u64 + ctx.r26.u64;
	// add r11,r30,r4
	ctx.r11.u64 = ctx.r30.u64 + ctx.r4.u64;
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r25,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r9,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r6,r25,r5
	ctx.r6.u64 = ctx.r25.u64 + ctx.r5.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// srawi r11,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 3;
	// srawi r10,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 3;
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// stb r8,3(r31)
	ctx.current_instruction = 0x881B4130;
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r8.u8);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// stb r7,6(r31)
	ctx.current_instruction = 0x881B4138;
	REX_STORE_U8(ctx.r31.u32 + 6, ctx.r7.u8);
	// stb r6,4(r31)
	ctx.current_instruction = 0x881B413C;
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r6.u8);
	// stb r5,5(r31)
	ctx.current_instruction = 0x881B4140;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r5.u8);
	// b 0x881b4234
	goto loc_881B4234;
loc_881B4148:
	// subf r10,r26,r24
	ctx.r10.u64 = ctx.r24.u64 - ctx.r26.u64;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r9,r21,r11
	ctx.r9.u64 = ctx.r21.u64 + ctx.r11.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// srawi r5,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 3;
	// srawi r3,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// xor r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// subf r3,r3,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r3.u64;
	// cmpw cr6,r3,r20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x881b4234
	if (!ctx.cr6.lt) goto loc_881B4234;
	// subf r8,r6,r22
	ctx.r8.u64 = ctx.r22.u64 - ctx.r6.u64;
	// subf r10,r4,r24
	ctx.r10.u64 = ctx.r24.u64 - ctx.r4.u64;
	// subf r11,r26,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r26.u64;
	// subf r9,r23,r25
	ctx.r9.u64 = ctx.r25.u64 - ctx.r23.u64;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r9,2
	ctx.r30.s64 = ctx.r9.s64 + 2;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// srawi r4,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 31;
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// xor r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// subf r11,r7,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subf r10,r4,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881b41dc
	if (!ctx.cr6.lt) goto loc_881B41DC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_881B41DC:
	// subf. r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x881b4234
	if (!ctx.cr0.gt) goto loc_881B4234;
	// xor r10,r5,r21
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r21.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x881b4234
	if (!ctx.cr6.lt) goto loc_881B4234;
	// srawi r10,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r21.s32 >> 31;
	// srawi r8,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r21.s32 >> 31;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r7,r21,r8
	ctx.r7.u64 = ctx.r21.u64 ^ ctx.r8.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r4,r8,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r8.u64;
	// srawi r9,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 1;
	// srawi r11,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 3;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x881b421c
	if (!ctx.cr6.gt) goto loc_881B421C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_881B421C:
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r10,r11,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stb r10,4(r31)
	ctx.current_instruction = 0x881B422C;
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// stb r9,5(r31)
	ctx.current_instruction = 0x881B4230;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
loc_881B4234:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// add r31,r31,r18
	ctx.r31.u64 = ctx.r31.u64 + ctx.r18.u64;
	// bne 0x881b3fac
	if (!ctx.cr0.eq) goto loc_881B3FAC;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C2B58) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881C2B58);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C2B58;
	ctx.current_instruction = 0x881C2B58;
	// std r30,-16(r1)
	ctx.current_instruction = 0x881C2B58;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x881C2B5C;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r6)
	ctx.current_instruction = 0x881C2B60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r9,136(r3)
	ctx.current_instruction = 0x881C2B64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r8,140(r3)
	ctx.current_instruction = 0x881C2B68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// lwz r10,0(r7)
	ctx.current_instruction = 0x881C2B70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r31,r9,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r8,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x881c2c10
	if (ctx.cr6.eq) goto loc_881C2C10;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r9,-8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -8, ctx.xer);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bge cr6,0x881c2bb0
	if (!ctx.cr6.lt) goto loc_881C2BB0;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// b 0x881c2bc4
	goto loc_881C2BC4;
loc_881C2BB0:
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x881c2bc4
	if (!ctx.cr6.gt) goto loc_881C2BC4;
	// subf r9,r9,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_881C2BC4:
	// cmpwi cr6,r8,-8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -8, ctx.xer);
	// stw r11,0(r6)
	ctx.current_instruction = 0x881C2BC8;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bge cr6,0x881c2bec
	if (!ctx.cr6.lt) goto loc_881C2BEC;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// stw r6,0(r7)
	ctx.current_instruction = 0x881C2BDC;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881C2BE0;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881C2BE4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881C2BEC:
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x881c2c14
	if (!ctx.cr6.gt) goto loc_881C2C14;
	// subf r9,r8,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r7)
	ctx.current_instruction = 0x881C2C00;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881C2C04;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881C2C08;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881C2C10:
	// stw r11,0(r6)
	ctx.current_instruction = 0x881C2C10;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_881C2C14:
	// stw r10,0(r7)
	ctx.current_instruction = 0x881C2C14;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881C2C18;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881C2C1C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881C3C48) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881C3C48);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C3C48;
	ctx.current_instruction = 0x881C3C48;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// li r3,255
	ctx.r3.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881C3C5C:
	// lhz r9,-4(r11)
	ctx.current_instruction = 0x881C3C5C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r8,-2(r11)
	ctx.current_instruction = 0x881C3C60;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r5,2(r11)
	ctx.current_instruction = 0x881C3C64;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r7,0(r11)
	ctx.current_instruction = 0x881C3C6C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// addi r5,r8,128
	ctx.r5.s64 = ctx.r8.s64 + 128;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// addi r8,r4,128
	ctx.r8.s64 = ctx.r4.s64 + 128;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x881c3ca0
	if (!ctx.cr6.gt) goto loc_881C3CA0;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 & ctx.r3.u64;
loc_881C3CA0:
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// ble cr6,0x881c3cb4
	if (!ctx.cr6.gt) goto loc_881C3CB4;
	// rlwinm r5,r5,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 & ctx.r3.u64;
loc_881C3CB4:
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// ble cr6,0x881c3cc8
	if (!ctx.cr6.gt) goto loc_881C3CC8;
	// rlwinm r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_881C3CC8:
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x881c3cdc
	if (!ctx.cr6.gt) goto loc_881C3CDC;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_881C3CDC:
	// stb r9,-2(r10)
	ctx.current_instruction = 0x881C3CDC;
	REX_STORE_U8(ctx.r10.u32 + -2, ctx.r9.u8);
	// stb r7,0(r10)
	ctx.current_instruction = 0x881C3CE0;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stb r8,1(r10)
	ctx.current_instruction = 0x881C3CE4;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r5,-1(r10)
	ctx.current_instruction = 0x881C3CE8;
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r5.u8);
	// lhz r8,6(r11)
	ctx.current_instruction = 0x881C3CEC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r7,8(r11)
	ctx.current_instruction = 0x881C3CF0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r5,10(r11)
	ctx.current_instruction = 0x881C3CF4;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r4,4(r11)
	ctx.current_instruction = 0x881C3CF8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// addi r4,r8,128
	ctx.r4.s64 = ctx.r8.s64 + 128;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// addi r8,r5,128
	ctx.r8.s64 = ctx.r5.s64 + 128;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x881c3d30
	if (!ctx.cr6.gt) goto loc_881C3D30;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 & ctx.r3.u64;
loc_881C3D30:
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// ble cr6,0x881c3d44
	if (!ctx.cr6.gt) goto loc_881C3D44;
	// rlwinm r5,r4,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 & ctx.r3.u64;
loc_881C3D44:
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// ble cr6,0x881c3d58
	if (!ctx.cr6.gt) goto loc_881C3D58;
	// rlwinm r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_881C3D58:
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x881c3d6c
	if (!ctx.cr6.gt) goto loc_881C3D6C;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_881C3D6C:
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// stb r9,2(r10)
	ctx.current_instruction = 0x881C3D70;
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// stb r5,3(r10)
	ctx.current_instruction = 0x881C3D7C;
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// stb r4,4(r10)
	ctx.current_instruction = 0x881C3D80;
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r4.u8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stb r9,5(r10)
	ctx.current_instruction = 0x881C3D88;
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r9.u8);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// bdnz 0x881c3c5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C3C5C;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881C5318) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C5318;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C5318) {
			switch (rex_dispatch_address) {
				case 0x881C5320:
				case 0x881C53AC:
				case 0x881C53D8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C5318;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881C5320: goto loc_881C5320;
		case 0x881C53AC: goto loc_881C53AC;
		case 0x881C53D8: goto loc_881C53D8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x881C5320;
	__savegprlr_24(ctx, base);
loc_881C5320:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x881C5320;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.current_instruction = 0x881C5324;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// lwz r26,1776(r3)
	ctx.current_instruction = 0x881C532C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r25,1780(r3)
	ctx.current_instruction = 0x881C5338;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mullw r11,r27,r5
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r5.s32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r24,r11,r4
	ctx.r24.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bne cr6,0x881c537c
	if (!ctx.cr6.eq) goto loc_881C537C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x881c5378
	if (ctx.cr6.eq) goto loc_881C5378;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// lwz r10,21968(r3)
	ctx.current_instruction = 0x881C5364;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 21968);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.current_instruction = 0x881C536C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x881c537c
	if (ctx.cr6.eq) goto loc_881C537C;
loc_881C5378:
	// li r28,1
	ctx.r28.s64 = 1;
loc_881C537C:
	// lwz r11,20684(r3)
	ctx.current_instruction = 0x881C537C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c53b0
	if (ctx.cr6.eq) goto loc_881C53B0;
	// stw r29,0(r31)
	ctx.current_instruction = 0x881C5388;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stw r5,0(r30)
	ctx.current_instruction = 0x881C5390;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,1780(r3)
	ctx.current_instruction = 0x881C539C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,1776(r3)
	ctx.current_instruction = 0x881C53A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// bl 0x8818bee0
	ctx.lr = 0x881C53AC;
	sub_8818BEE0(ctx, base);
loc_881C53AC:
	// b 0x881c53d8
	goto loc_881C53D8;
loc_881C53B0:
	// lwz r11,140(r3)
	ctx.current_instruction = 0x881C53B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r28,100(r1)
	ctx.current_instruction = 0x881C53BC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,92(r1)
	ctx.current_instruction = 0x881C53C4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r31,84(r1)
	ctx.current_instruction = 0x881C53CC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x881c1d18
	ctx.lr = 0x881C53D8;
	sub_881C1D18(ctx, base);
loc_881C53D8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x881c54e8
	if (ctx.cr6.eq) goto loc_881C54E8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x881c54e8
	if (!ctx.cr6.eq) goto loc_881C54E8;
	// rlwinm r9,r24,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x881C53EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// subf r8,r27,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r27.u64;
	// lwz r10,0(r30)
	ctx.current_instruction = 0x881C53F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r7,r9,r26
	ctx.r7.u64 = ctx.r9.u64 + ctx.r26.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r4,-2(r7)
	ctx.current_instruction = 0x881C5400;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + -2);
	// lhzx r6,r5,r26
	ctx.current_instruction = 0x881C5404;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r26.u32);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lhzx r7,r5,r25
	ctx.current_instruction = 0x881C540C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r25.u32);
	// cmpwi cr6,r8,16384
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16384, ctx.xer);
	// bne cr6,0x881c5434
	if (!ctx.cr6.eq) goto loc_881C5434;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// xor r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r9,r9,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r9.u64;
	// subf r8,r8,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r8.u64;
	// b 0x881c5460
	goto loc_881C5460;
loc_881C5434:
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// subf r8,r8,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r8.u64;
	// lhz r5,-2(r9)
	ctx.current_instruction = 0x881C543C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// subf r3,r4,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r4.u64;
	// srawi r9,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 31;
	// srawi r5,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 31;
	// xor r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// xor r3,r8,r5
	ctx.r3.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// subf r8,r5,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r5.u64;
loc_881C5460:
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// ble cr6,0x881c5478
	if (!ctx.cr6.gt) goto loc_881C5478;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_881C5478:
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// bne cr6,0x881c54a0
	if (!ctx.cr6.eq) goto loc_881C54A0;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// xor r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r10,r8,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r8.u64;
	// b 0x881c54c4
	goto loc_881C54C4;
loc_881C54A0:
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// srawi r5,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// srawi r4,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 31;
	// xor r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// xor r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
loc_881C54C4:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,32
	ctx.r10.s64 = 32;
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_881C54E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881CD1C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881CD1C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881CD1C8) {
			switch (rex_dispatch_address) {
				case 0x881CD1D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CD1C8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881CD1D0: goto loc_881CD1D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x881CD1D0;
	__savegprlr_15(ctx, base);
loc_881CD1D0:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x881CD1D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r10,3
	ctx.r30.s64 = ctx.r10.s64 + 3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// slw r18,r31,r30
	ctx.r18.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// slw r29,r31,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// beq cr6,0x881cd210
	if (ctx.cr6.eq) goto loc_881CD210;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x881cd210
	if (ctx.cr6.eq) goto loc_881CD210;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x881cd42c
	if (!ctx.cr6.eq) goto loc_881CD42C;
loc_881CD210:
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6888
	ctx.r11.s64 = ctx.r11.s64 + 6888;
	// rlwinm r30,r8,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// li r17,0
	ctx.r17.s64 = 0;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r21,r30,r11
	ctx.r21.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x881cd268
	if (!ctx.cr6.eq) goto loc_881CD268;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// li r26,4
	ctx.r26.s64 = 4;
	// beq cr6,0x881cd244
	if (ctx.cr6.eq) goto loc_881CD244;
	// li r26,6
	ctx.r26.s64 = 6;
loc_881CD244:
	// rlwinm r10,r18,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,-220
	ctx.r8.s64 = ctx.r1.s64 + -220;
	// addi r7,r1,-222
	ctx.r7.s64 = ctx.r1.s64 + -222;
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
	// addi r20,r18,1
	ctx.r20.s64 = ctx.r18.s64 + 1;
	// sthx r17,r10,r8
	ctx.current_instruction = 0x881CD25C;
	REX_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r17.u16);
	// sthx r17,r10,r7
	ctx.current_instruction = 0x881CD260;
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r17.u16);
	// b 0x881cd2d0
	goto loc_881CD2D0;
loc_881CD268:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x881cd29c
	if (!ctx.cr6.eq) goto loc_881CD29C;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// li r24,4
	ctx.r24.s64 = 4;
	// beq cr6,0x881cd284
	if (ctx.cr6.eq) goto loc_881CD284;
	// li r24,6
	ctx.r24.s64 = 6;
loc_881CD284:
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// subf r23,r9,r10
	ctx.r23.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r20,r18,3
	ctx.r20.s64 = ctx.r18.s64 + 3;
	// b 0x881cd2e0
	goto loc_881CD2E0;
loc_881CD29C:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// li r10,4
	ctx.r10.s64 = 4;
	// beq cr6,0x881cd2ac
	if (ctx.cr6.eq) goto loc_881CD2AC;
	// li r10,6
	ctx.r10.s64 = 6;
loc_881CD2AC:
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq cr6,0x881cd2bc
	if (ctx.cr6.eq) goto loc_881CD2BC;
	// li r11,6
	ctx.r11.s64 = 6;
loc_881CD2BC:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r24,7
	ctx.r24.s64 = 7;
	// addi r26,r11,-7
	ctx.r26.s64 = ctx.r11.s64 + -7;
	// subfic r23,r9,64
	ctx.xer.ca = ctx.r9.u32 <= 64;
	ctx.r23.u64 = static_cast<uint64_t>(64) - ctx.r9.u64;
	// addi r20,r18,3
	ctx.r20.s64 = ctx.r18.s64 + 3;
loc_881CD2D0:
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// slw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r25,r11,-1
	ctx.r25.s64 = ctx.r11.s64 + -1;
loc_881CD2E0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x881cd42c
	if (!ctx.cr6.gt) goto loc_881CD42C;
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mr r19,r29
	ctx.r19.u64 = ctx.r29.u64;
	// addi r22,r11,-1
	ctx.r22.s64 = ctx.r11.s64 + -1;
loc_881CD2F4:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x881cd378
	if (!ctx.cr6.gt) goto loc_881CD378;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,6(r21)
	ctx.current_instruction = 0x881CD300;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r21.u32 + 6);
	// lhz r8,4(r21)
	ctx.current_instruction = 0x881CD304;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r21.u32 + 4);
	// addi r10,r1,-226
	ctx.r10.s64 = ctx.r1.s64 + -226;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lhz r11,0(r21)
	ctx.current_instruction = 0x881CD310;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + 0);
	// lhz r29,2(r21)
	ctx.current_instruction = 0x881CD314;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r21.u32 + 2);
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_881CD334:
	// lbzx r9,r11,r31
	ctx.current_instruction = 0x881CD334;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lbzx r8,r11,r7
	ctx.current_instruction = 0x881CD338;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// lbzx r16,r11,r4
	ctx.current_instruction = 0x881CD340;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r15,0(r11)
	ctx.current_instruction = 0x881CD344;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r8,r8,r3
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r16,r29
	ctx.r8.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r29.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r15,r28
	ctx.r8.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r28.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// sraw r8,r9,r26
	temp.u32 = ctx.r26.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// sthu r9,2(r10)
	ctx.current_instruction = 0x881CD370;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881cd334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CD334;
loc_881CD378:
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x881cd41c
	if (!ctx.cr6.gt) goto loc_881CD41C;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// addi r11,r1,-220
	ctx.r11.s64 = ctx.r1.s64 + -220;
loc_881CD38C:
	// lhz r10,2(r11)
	ctx.current_instruction = 0x881CD38C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,-4(r11)
	ctx.current_instruction = 0x881CD390;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// lhz r10,0(r27)
	ctx.current_instruction = 0x881CD398;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// lhz r7,6(r27)
	ctx.current_instruction = 0x881CD39C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// lhz r31,0(r11)
	ctx.current_instruction = 0x881CD3A8;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r29,4(r27)
	ctx.current_instruction = 0x881CD3B0;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r27.u32 + 4);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// mullw r10,r3,r7
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lhz r3,-2(r11)
	ctx.current_instruction = 0x881CD3BC;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r7,2(r27)
	ctx.current_instruction = 0x881CD3C0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r27.u32 + 2);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r31,r30
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r3,r7
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r10,r23
	ctx.r3.u64 = ctx.r10.u64 + ctx.r23.u64;
	// sraw. r10,r3,r24
	temp.u32 = ctx.r24.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r10.s64 = ctx.r3.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x881cd3fc
	if (!ctx.cr0.lt) goto loc_881CD3FC;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// b 0x881cd408
	goto loc_881CD408;
loc_881CD3FC:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x881cd408
	if (!ctx.cr6.gt) goto loc_881CD408;
	// li r10,255
	ctx.r10.s64 = 255;
loc_881CD408:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stbx r10,r8,r5
	ctx.current_instruction = 0x881CD410;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x881cd38c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CD38C;
loc_881CD41C:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// add r22,r22,r4
	ctx.r22.u64 = ctx.r22.u64 + ctx.r4.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bne 0x881cd2f4
	if (!ctx.cr0.eq) goto loc_881CD2F4;
loc_881CD42C:
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881D4388) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881D4388;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881D4388) {
			switch (rex_dispatch_address) {
				case 0x881D4390:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881D4388;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881D4390: goto loc_881D4390;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881D4390;
	__savegprlr_14(ctx, base);
loc_881D4390:
	// stw r3,20(r1)
	ctx.current_instruction = 0x881D4390;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x881d43c0
	if (ctx.cr6.eq) goto loc_881D43C0;
	// lwz r10,112(r3)
	ctx.current_instruction = 0x881D439C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r11,100(r3)
	ctx.current_instruction = 0x881D43A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r9,-340(r1)
	ctx.current_instruction = 0x881D43B0;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r9.u32);
	// addi r30,r11,3
	ctx.r30.s64 = ctx.r11.s64 + 3;
	// stw r8,-328(r1)
	ctx.current_instruction = 0x881D43B8;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r8.u32);
	// b 0x881d43e4
	goto loc_881D43E4;
loc_881D43C0:
	// lwz r5,100(r3)
	ctx.current_instruction = 0x881D43C0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r11,112(r3)
	ctx.current_instruction = 0x881D43C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r10,100(r3)
	ctx.current_instruction = 0x881D43D0;
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// addi r30,r5,2
	ctx.r30.s64 = ctx.r5.s64 + 2;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r9,-328(r1)
	ctx.current_instruction = 0x881D43DC;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r9.u32);
	// stw r11,-340(r1)
	ctx.current_instruction = 0x881D43E0;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r11.u32);
loc_881D43E4:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r9,92(r3)
	ctx.current_instruction = 0x881D43E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// stw r30,-256(r1)
	ctx.current_instruction = 0x881D43F0;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r30.u32);
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// stw r5,-252(r1)
	ctx.current_instruction = 0x881D43F8;
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r5.u32);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfd f8,23440(r11)
	ctx.current_instruction = 0x881D4404;
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 23440);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfd f5,1488(r8)
	ctx.current_instruction = 0x881D440C;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r8.u32 + 1488);
	// stw r28,-268(r1)
	ctx.current_instruction = 0x881D4410;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r28.u32);
	// lfd f7,12088(r7)
	ctx.current_instruction = 0x881D4414;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r7.u32 + 12088);
	// lfd f6,8624(r6)
	ctx.current_instruction = 0x881D4418;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r6.u32 + 8624);
	// ble cr6,0x881d4de0
	if (!ctx.cr6.gt) goto loc_881D4DE0;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// fsub f11,f2,f1
	ctx.f11.f64 = ctx.f2.f64 - ctx.f1.f64;
	// li r29,16
	ctx.r29.s64 = 16;
	// stw r11,-348(r1)
	ctx.current_instruction = 0x881D442C;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r11.u32);
loc_881D4430:
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// lwz r9,96(r3)
	ctx.current_instruction = 0x881D4434;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
	// std r10,-280(r1)
	ctx.current_instruction = 0x881D443C;
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.r10.u64);
	// lfd f13,-280(r1)
	ctx.current_instruction = 0x881D4440;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmadd f12,f12,f3,f4
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f4.f64);
	// beq cr6,0x881d4460
	if (ctx.cr6.eq) goto loc_881D4460;
	// fsub f13,f3,f6
	ctx.f13.f64 = ctx.f3.f64 - ctx.f6.f64;
	// fmul f13,f13,f7
	ctx.f13.f64 = ctx.f13.f64 * ctx.f7.f64;
	// b 0x881d4464
	goto loc_881D4464;
loc_881D4460:
	// fmr f13,f5
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f5.f64;
loc_881D4464:
	// fadd f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 + ctx.f12.f64;
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x881D446C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r7,100(r3)
	ctx.current_instruction = 0x881D4470;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-312(r1)
	ctx.current_instruction = 0x881D4478;
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f12.u64);
	// lwz r10,-308(r1)
	ctx.current_instruction = 0x881D447C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// stw r9,8228(r8)
	ctx.current_instruction = 0x881D4488;
	REX_STORE_U32(ctx.r8.u32 + 8228, ctx.r9.u32);
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// std r4,-264(r1)
	ctx.current_instruction = 0x881D4490;
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.r4.u64);
	// lfd f10,-264(r1)
	ctx.current_instruction = 0x881D4494;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fmsub f13,f13,f8,f9
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f8.f64, -ctx.f9.f64);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,-352(r1)
	ctx.current_instruction = 0x881D44AC;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-312(r1)
	ctx.current_instruction = 0x881D44B4;
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f12.u64);
	// lwz r9,-308(r1)
	ctx.current_instruction = 0x881D44B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// mullw r8,r9,r9
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stw r8,-324(r1)
	ctx.current_instruction = 0x881D44C8;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r8.u32);
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stw r4,-344(r1)
	ctx.current_instruction = 0x881D44D0;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r4.u32);
	// ble cr6,0x881d4b48
	if (!ctx.cr6.gt) goto loc_881D4B48;
	// lwz r9,84(r3)
	ctx.current_instruction = 0x881D44D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d4b44
	if (!ctx.cr6.lt) goto loc_881D4B44;
	// lwz r10,88(r3)
	ctx.current_instruction = 0x881D44E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,-304(r1)
	ctx.current_instruction = 0x881D44F0;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d4dcc
	if (!ctx.cr6.gt) goto loc_881D4DCC;
loc_881D44FC:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-296(r1)
	ctx.current_instruction = 0x881D4504;
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.f13.u64);
	// lwz r9,-292(r1)
	ctx.current_instruction = 0x881D4508;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x881d4a04
	if (!ctx.cr6.gt) goto loc_881D4A04;
	// lwz r10,80(r3)
	ctx.current_instruction = 0x881D4514;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x881d4a00
	if (!ctx.cr6.lt) goto loc_881D4A00;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// lis r9,-30678
	ctx.r9.s64 = -2010513408;
	// std r6,-200(r1)
	ctx.current_instruction = 0x881D4534;
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r6.u64);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r5,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r5.u64;
	// stw r11,8228(r9)
	ctx.current_instruction = 0x881D4548;
	REX_STORE_U32(ctx.r9.u32 + 8228, ctx.r11.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r9,-2(r8)
	ctx.current_instruction = 0x881D4554;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + -2);
	// add r26,r11,r8
	ctx.r26.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r11,0(r8)
	ctx.current_instruction = 0x881D455C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 2;
	// lbz r5,4(r8)
	ctx.current_instruction = 0x881D4564;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// lbz r6,-2(r28)
	ctx.current_instruction = 0x881D4568;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r28.u32 + -2);
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r10,0(r28)
	ctx.current_instruction = 0x881D4570;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// rotlwi r19,r11,2
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rlwinm r25,r3,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r27,-2(r7)
	ctx.current_instruction = 0x881D457C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r7.u32 + -2);
	// lbz r31,2(r26)
	ctx.current_instruction = 0x881D4580;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r26.u32 + 2);
	// add r24,r9,r10
	ctx.r24.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r30,-2(r26)
	ctx.current_instruction = 0x881D4588;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r26.u32 + -2);
	// add r21,r11,r19
	ctx.r21.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r23,r31,r6
	ctx.r23.u64 = ctx.r31.u64 + ctx.r6.u64;
	// lbz r29,2(r28)
	ctx.current_instruction = 0x881D4594;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r28.u32 + 2);
	// add r3,r4,r30
	ctx.r3.u64 = ctx.r4.u64 + ctx.r30.u64;
	// lbz r4,0(r7)
	ctx.current_instruction = 0x881D459C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// rlwinm r22,r23,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r28,4(r28)
	ctx.current_instruction = 0x881D45A4;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r28.u32 + 4);
	// rlwinm r20,r24,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r23,2(r7)
	ctx.current_instruction = 0x881D45AC;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// subf r19,r27,r22
	ctx.r19.u64 = ctx.r22.u64 - ctx.r27.u64;
	// lbz r24,4(r7)
	ctx.current_instruction = 0x881D45B4;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// add r18,r3,r29
	ctx.r18.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lbz r7,0(r26)
	ctx.current_instruction = 0x881D45BC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// subf r3,r20,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r20.u64;
	// lbzx r22,r25,r8
	ctx.current_instruction = 0x881D45C4;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r8.u32);
	// lfd f13,-200(r1)
	ctx.current_instruction = 0x881D45C8;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// subf r26,r28,r19
	ctx.r26.u64 = ctx.r19.u64 - ctx.r28.u64;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r20,r18,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// stw r21,-272(r1)
	ctx.current_instruction = 0x881D45DC;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r21.u32);
	// subf r19,r29,r10
	ctx.r19.u64 = ctx.r10.u64 - ctx.r29.u64;
	// lbz r8,2(r8)
	ctx.current_instruction = 0x881D45E4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// rlwinm r25,r26,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r23,r20
	ctx.r26.u64 = ctx.r20.u64 - ctx.r23.u64;
	// rlwinm r21,r3,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r20,r19,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r25,r24
	ctx.r19.u64 = ctx.r25.u64 + ctx.r24.u64;
	// subf r26,r22,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r22.u64;
	// subf r25,r3,r21
	ctx.r25.u64 = ctx.r21.u64 - ctx.r3.u64;
	// fmsub f10,f0,f8,f12
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64);
	// subf r20,r4,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r4.u64;
	// rlwinm r3,r19,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r26,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r20,r6,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r6.u64;
	// add r25,r25,r3
	ctx.r25.u64 = ctx.r25.u64 + ctx.r3.u64;
	// add r3,r26,r21
	ctx.r3.u64 = ctx.r26.u64 + ctx.r21.u64;
	// add r21,r20,r23
	ctx.r21.u64 = ctx.r20.u64 + ctx.r23.u64;
	// add r20,r7,r8
	ctx.r20.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r3,r25,r3
	ctx.r3.u64 = ctx.r25.u64 + ctx.r3.u64;
	// add r25,r21,r28
	ctx.r25.u64 = ctx.r21.u64 + ctx.r28.u64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-296(r1)
	ctx.current_instruction = 0x881D4634;
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.f9.u64);
	// lwz r15,-292(r1)
	ctx.current_instruction = 0x881D4638;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// mullw r26,r15,r15
	ctx.r26.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r15.s32);
	// srawi r26,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 8;
	// mulli r21,r20,13
	ctx.r21.s64 = static_cast<int64_t>(ctx.r20.u64 * static_cast<uint64_t>(13));
	// mullw r20,r26,r15
	ctx.r20.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r15.s32);
	// subf r21,r21,r3
	ctx.r21.u64 = ctx.r3.u64 - ctx.r21.u64;
	// rlwinm r3,r25,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r25,r20,8
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r20.s32 >> 8;
	// srawi r14,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r21.s32 >> 1;
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r24.u64;
	// subf r21,r7,r31
	ctx.r21.u64 = ctx.r31.u64 - ctx.r7.u64;
	// subf r20,r30,r22
	ctx.r20.u64 = ctx.r22.u64 - ctx.r30.u64;
	// subf r18,r11,r10
	ctx.r18.u64 = ctx.r10.u64 - ctx.r11.u64;
	// std r27,-288(r1)
	ctx.current_instruction = 0x881D466C;
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.r27.u64);
	// rlwinm r17,r20,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r19,-272(r1)
	ctx.current_instruction = 0x881D4674;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// subf r18,r6,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r6.u64;
	// stw r17,-300(r1)
	ctx.current_instruction = 0x881D4680;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r17.u32);
	// subf r16,r31,r7
	ctx.r16.u64 = ctx.r7.u64 - ctx.r31.u64;
	// stw r3,-320(r1)
	ctx.current_instruction = 0x881D4688;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r3.u32);
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r30,r9
	ctx.r17.u64 = ctx.r9.u64 - ctx.r30.u64;
	// stw r19,-296(r1)
	ctx.current_instruction = 0x881D4694;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r19.u32);
	// subf r3,r5,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r5.u64;
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r4,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r4.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// subf r17,r5,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r5.u64;
	// add r18,r18,r27
	ctx.r18.u64 = ctx.r18.u64 + ctx.r27.u64;
	// rlwinm r16,r3,3,0,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r17,r6,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r6.u64;
	// add r18,r18,r7
	ctx.r18.u64 = ctx.r18.u64 + ctx.r7.u64;
	// subf r3,r3,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r3.u64;
	// lwz r16,-320(r1)
	ctx.current_instruction = 0x881D46C0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// add r17,r17,r27
	ctx.r17.u64 = ctx.r17.u64 + ctx.r27.u64;
	// stw r18,-320(r1)
	ctx.current_instruction = 0x881D46C8;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r18.u32);
	// lwz r27,-320(r1)
	ctx.current_instruction = 0x881D46CC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r16,r3
	ctx.r18.u64 = ctx.r16.u64 + ctx.r3.u64;
	// add r3,r17,r22
	ctx.r3.u64 = ctx.r17.u64 + ctx.r22.u64;
	// lwz r17,-300(r1)
	ctx.current_instruction = 0x881D46DC;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// subf r19,r8,r31
	ctx.r19.u64 = ctx.r31.u64 - ctx.r8.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r4,r8
	ctx.r16.u64 = ctx.r8.u64 - ctx.r4.u64;
	// stw r3,-320(r1)
	ctx.current_instruction = 0x881D46EC;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r3.u32);
	// add r3,r20,r17
	ctx.r3.u64 = ctx.r20.u64 + ctx.r17.u64;
	// rlwinm r20,r19,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r17,-320(r1)
	ctx.current_instruction = 0x881D46F8;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// subf r17,r24,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r24.u64;
	// add r19,r19,r20
	ctx.r19.u64 = ctx.r19.u64 + ctx.r20.u64;
	// stw r17,-320(r1)
	ctx.current_instruction = 0x881D4704;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r17.u32);
	// subf r20,r31,r16
	ctx.r20.u64 = ctx.r16.u64 - ctx.r31.u64;
	// mullw r17,r14,r26
	ctx.r17.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r26.s32);
	// stw r17,-316(r1)
	ctx.current_instruction = 0x881D4710;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r17.u32);
	// add r20,r20,r10
	ctx.r20.u64 = ctx.r20.u64 + ctx.r10.u64;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r20,-300(r1)
	ctx.current_instruction = 0x881D471C;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r20.u32);
	// rotlwi r20,r30,2
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r30.u32, 2);
	// rotlwi r14,r27,0
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// stw r27,-248(r1)
	ctx.current_instruction = 0x881D4728;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r27.u32);
	// add r20,r30,r20
	ctx.r20.u64 = ctx.r30.u64 + ctx.r20.u64;
	// std r26,-248(r1)
	ctx.current_instruction = 0x881D4730;
	REX_STORE_U64(ctx.r1.u32 + -248, ctx.r26.u64);
	// add r19,r14,r19
	ctx.r19.u64 = ctx.r14.u64 + ctx.r19.u64;
	// rotlwi r14,r9,3
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r16,r11,r8
	ctx.r16.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r19,r20,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r20.u64;
	// add r18,r18,r3
	ctx.r18.u64 = ctx.r18.u64 + ctx.r3.u64;
	// subf r20,r9,r14
	ctx.r20.u64 = ctx.r14.u64 - ctx.r9.u64;
	// mulli r3,r16,11
	ctx.r3.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(11));
	// lwz r16,-320(r1)
	ctx.current_instruction = 0x881D4750;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r27,-316(r1)
	ctx.current_instruction = 0x881D4754;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// add r18,r18,r3
	ctx.r18.u64 = ctx.r18.u64 + ctx.r3.u64;
	// subf r26,r23,r4
	ctx.r26.u64 = ctx.r4.u64 - ctx.r23.u64;
	// rotlwi r17,r7,1
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lwz r14,-300(r1)
	ctx.current_instruction = 0x881D4764;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// add r16,r16,r28
	ctx.r16.u64 = ctx.r16.u64 + ctx.r28.u64;
	// add r17,r17,r10
	ctx.r17.u64 = ctx.r17.u64 + ctx.r10.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// subf r3,r29,r23
	ctx.r3.u64 = ctx.r23.u64 - ctx.r29.u64;
	// rlwinm r23,r14,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r14,-316(r1)
	ctx.current_instruction = 0x881D477C;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r14.u32);
	// subf r14,r22,r26
	ctx.r14.u64 = ctx.r26.u64 - ctx.r22.u64;
	// lwz r26,-316(r1)
	ctx.current_instruction = 0x881D4784;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// subf r23,r26,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r26.u64;
	// lwz r26,-296(r1)
	ctx.current_instruction = 0x881D478C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// rlwinm r22,r16,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r19,r20
	ctx.r19.u64 = ctx.r19.u64 + ctx.r20.u64;
	// subf r17,r26,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r26.u64;
	// subf r16,r11,r7
	ctx.r16.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mullw r20,r18,r25
	ctx.r20.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r25.s32);
	// subf r18,r9,r14
	ctx.r18.u64 = ctx.r14.u64 - ctx.r9.u64;
	// add r22,r22,r23
	ctx.r22.u64 = ctx.r22.u64 + ctx.r23.u64;
	// mulli r23,r16,11
	ctx.r23.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(11));
	// subf r18,r10,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r10.u64;
	// add r23,r22,r23
	ctx.r23.u64 = ctx.r22.u64 + ctx.r23.u64;
	// add r22,r18,r30
	ctx.r22.u64 = ctx.r18.u64 + ctx.r30.u64;
	// lwz r18,-324(r1)
	ctx.current_instruction = 0x881D47C4;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r30,r9,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r9.u64;
	// srawi r26,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r19.s32 >> 1;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r3,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,-296(r1)
	ctx.current_instruction = 0x881D47D8;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r30.u32);
	// subf r14,r4,r17
	ctx.r14.u64 = ctx.r17.u64 - ctx.r4.u64;
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + ctx.r19.u64;
	// add r17,r27,r20
	ctx.r17.u64 = ctx.r27.u64 + ctx.r20.u64;
	// ld r27,-288(r1)
	ctx.current_instruction = 0x881D47E8;
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// add r3,r23,r3
	ctx.r3.u64 = ctx.r23.u64 + ctx.r3.u64;
	// subf r23,r11,r9
	ctx.r23.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r3,-316(r1)
	ctx.current_instruction = 0x881D47F4;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r3.u32);
	// add r3,r22,r5
	ctx.r3.u64 = ctx.r22.u64 + ctx.r5.u64;
	// subf r23,r6,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r6.u64;
	// add r22,r3,r29
	ctx.r22.u64 = ctx.r3.u64 + ctx.r29.u64;
	// subf r3,r8,r21
	ctx.r3.u64 = ctx.r21.u64 - ctx.r8.u64;
	// mullw r20,r26,r15
	ctx.r20.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r15.s32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// subf r19,r10,r29
	ctx.r19.u64 = ctx.r29.u64 - ctx.r10.u64;
	// lwz r26,-296(r1)
	ctx.current_instruction = 0x881D4814;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// rlwinm r23,r23,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r3,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r27,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r27.u64;
	// subf r23,r5,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r5.u64;
	// subf r19,r31,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r31.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// subf r30,r31,r26
	ctx.r30.u64 = ctx.r26.u64 - ctx.r31.u64;
	// ld r26,-248(r1)
	ctx.current_instruction = 0x881D4838;
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -248);
	// rlwinm r22,r22,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r23,r8
	ctx.r31.u64 = ctx.r23.u64 + ctx.r8.u64;
	// subf r23,r8,r19
	ctx.r23.u64 = ctx.r19.u64 - ctx.r8.u64;
	// add r22,r22,r3
	ctx.r22.u64 = ctx.r22.u64 + ctx.r3.u64;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// rlwinm r3,r21,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r19,r7,r30
	ctx.r19.u64 = ctx.r30.u64 - ctx.r7.u64;
	// subf r23,r9,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r9.u64;
	// rlwinm r30,r31,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r21,r3
	ctx.r3.u64 = ctx.r21.u64 + ctx.r3.u64;
	// subf r22,r27,r22
	ctx.r22.u64 = ctx.r22.u64 - ctx.r27.u64;
	// subf r23,r28,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r28.u64;
	// subf r31,r10,r19
	ctx.r31.u64 = ctx.r19.u64 - ctx.r10.u64;
	// srawi r16,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r16.s64 = ctx.r14.s32 >> 1;
	// lwz r14,-272(r1)
	ctx.current_instruction = 0x881D4874;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// rotlwi r27,r29,2
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// subf r28,r28,r22
	ctx.r28.u64 = ctx.r22.u64 - ctx.r28.u64;
	// add r19,r17,r20
	ctx.r19.u64 = ctx.r17.u64 + ctx.r20.u64;
	// add r30,r23,r7
	ctx.r30.u64 = ctx.r23.u64 + ctx.r7.u64;
	// add r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r27,r29,r27
	ctx.r27.u64 = ctx.r29.u64 + ctx.r27.u64;
	// rlwinm r20,r16,8,0,23
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r16,-316(r1)
	ctx.current_instruction = 0x881D4898;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// rotlwi r22,r10,3
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r28,r28,r24
	ctx.r28.u64 = ctx.r28.u64 + ctx.r24.u64;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// subf r24,r27,r3
	ctx.r24.u64 = ctx.r3.u64 - ctx.r27.u64;
	// rotlwi r29,r8,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf r27,r10,r22
	ctx.r27.u64 = ctx.r22.u64 - ctx.r10.u64;
	// srawi r23,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r16.s32 >> 1;
	// subf r3,r8,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r8.u64;
	// add r28,r28,r6
	ctx.r28.u64 = ctx.r28.u64 + ctx.r6.u64;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r21,r19,r20
	ctx.r21.u64 = ctx.r19.u64 + ctx.r20.u64;
	// add r22,r29,r9
	ctx.r22.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r27,r24,r27
	ctx.r27.u64 = ctx.r24.u64 + ctx.r27.u64;
	// mullw r20,r23,r26
	ctx.r20.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r26.s32);
	// subf r24,r9,r11
	ctx.r24.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r29,r3,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r31,r6
	ctx.r19.u64 = ctx.r31.u64 + ctx.r6.u64;
	// mullw r28,r28,r25
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r25.s32);
	// add r23,r30,r6
	ctx.r23.u64 = ctx.r30.u64 + ctx.r6.u64;
	// subf r31,r10,r24
	ctx.r31.u64 = ctx.r24.u64 - ctx.r10.u64;
	// rlwinm r24,r22,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r20,r28
	ctx.r30.u64 = ctx.r20.u64 + ctx.r28.u64;
	// add r20,r31,r6
	ctx.r20.u64 = ctx.r31.u64 + ctx.r6.u64;
	// srawi r27,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 1;
	// subf r6,r14,r24
	ctx.r6.u64 = ctx.r24.u64 - ctx.r14.u64;
	// add r22,r3,r29
	ctx.r22.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mullw r3,r19,r15
	ctx.r3.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r15.s32);
	// mullw r29,r23,r25
	ctx.r29.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r25.s32);
	// subf r23,r5,r6
	ctx.r23.u64 = ctx.r6.u64 - ctx.r5.u64;
	// mullw r28,r27,r26
	ctx.r28.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r26.s32);
	// lwz r27,-344(r1)
	ctx.current_instruction = 0x881D491C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r24,r30,r3
	ctx.r24.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r30,r28,r29
	ctx.r30.u64 = ctx.r28.u64 + ctx.r29.u64;
	// rlwinm r28,r6,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r31,r9,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r9.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r9,r10,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r10.u64;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// srawi r6,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r23.s32 >> 1;
	// mullw r3,r20,r15
	ctx.r3.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r15.s32);
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mullw r30,r5,r25
	ctx.r30.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r25.s32);
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// mullw r29,r6,r26
	ctx.r29.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r26.s32);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mullw r11,r4,r27
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// add r6,r29,r30
	ctx.r6.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mullw r5,r24,r27
	ctx.r5.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r27.s32);
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// mullw r19,r21,r18
	ctx.r19.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r18.s32);
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r31,r19,r5
	ctx.r31.u64 = ctx.r19.u64 + ctx.r5.u64;
	// lwz r5,-308(r1)
	ctx.current_instruction = 0x881D4988;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// mullw r11,r8,r15
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r15.s32);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r3,r3,r5
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x881d49c8
	if (!ctx.cr6.gt) goto loc_881D49C8;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x881d49d4
	goto loc_881D49D4;
loc_881D49C8:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_881D49D4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,-348(r1)
	ctx.current_instruction = 0x881D49D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// lwz r3,20(r1)
	ctx.current_instruction = 0x881D49DC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r29,16
	ctx.r29.s64 = 16;
	// lwz r5,-252(r1)
	ctx.current_instruction = 0x881D49E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// lwz r30,-256(r1)
	ctx.current_instruction = 0x881D49E8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r31,-304(r1)
	ctx.current_instruction = 0x881D49EC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// lwz r28,-268(r1)
	ctx.current_instruction = 0x881D49F0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r7,-352(r1)
	ctx.current_instruction = 0x881D49F4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// stb r10,2(r11)
	ctx.current_instruction = 0x881D49F8;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// b 0x881d4b24
	goto loc_881D4B24;
loc_881D4A00:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
loc_881D4A04:
	// beq cr6,0x881d4a90
	if (ctx.cr6.eq) goto loc_881D4A90;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x881D4A08;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881d4a90
	if (ctx.cr6.lt) goto loc_881D4A90;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x881d4a88
	if (!ctx.cr6.gt) goto loc_881D4A88;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x881d4a88
	if (!ctx.cr6.lt) goto loc_881D4A88;
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// lis r9,-30678
	ctx.r9.s64 = -2010513408;
	// std r4,-240(r1)
	ctx.current_instruction = 0x881D4A38;
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r4.u64);
	// lfd f13,-240(r1)
	ctx.current_instruction = 0x881D4A3C;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,8228(r9)
	ctx.current_instruction = 0x881D4A48;
	REX_STORE_U32(ctx.r9.u32 + 8228, ctx.r10.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r9,-308(r1)
	ctx.current_instruction = 0x881D4A50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// fmsub f10,f0,f8,f12
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64);
	// lbzx r4,r8,r7
	ctx.current_instruction = 0x881D4A58;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// lbzx r6,r6,r10
	ctx.current_instruction = 0x881D4A60;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// mullw r10,r8,r4
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-208(r1)
	ctx.current_instruction = 0x881D4A6C;
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.f9.u64);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,2(r11)
	ctx.current_instruction = 0x881D4A80;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// b 0x881d4b24
	goto loc_881D4B24;
loc_881D4A88:
	// stb r29,2(r11)
	ctx.current_instruction = 0x881D4A88;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r29.u8);
	// b 0x881d4b24
	goto loc_881D4B24;
loc_881D4A90:
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x881D4A94;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// lis r9,-30678
	ctx.r9.s64 = -2010513408;
	// std r4,-232(r1)
	ctx.current_instruction = 0x881D4AA4;
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r4.u64);
	// lfd f13,-232(r1)
	ctx.current_instruction = 0x881D4AA8;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r10,8228(r9)
	ctx.current_instruction = 0x881D4AB0;
	REX_STORE_U32(ctx.r9.u32 + 8228, ctx.r10.u32);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// fmsub f10,f0,f8,f12
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64);
	// lbzx r8,r8,r7
	ctx.current_instruction = 0x881D4AC0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,2(r10)
	ctx.current_instruction = 0x881D4AC8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lwz r10,-308(r1)
	ctx.current_instruction = 0x881D4ACC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lbz r6,0(r9)
	ctx.current_instruction = 0x881D4AD0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r27,2(r9)
	ctx.current_instruction = 0x881D4AD4;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-288(r1)
	ctx.current_instruction = 0x881D4AE0;
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f9.u64);
	// subf r6,r6,r27
	ctx.r6.u64 = ctx.r27.u64 - ctx.r6.u64;
	// lwz r27,-284(r1)
	ctx.current_instruction = 0x881D4AE8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// subf r6,r4,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r4.u64;
	// mullw r4,r4,r27
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r6,r6,r27
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// subfic r26,r27,256
	ctx.xer.ca = ctx.r27.u32 <= 256;
	ctx.r26.u64 = static_cast<uint64_t>(256) - ctx.r27.u64;
	// subf r10,r10,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r10.u64;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r8,2(r11)
	ctx.current_instruction = 0x881D4B20;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
loc_881D4B24:
	// lwz r10,88(r3)
	ctx.current_instruction = 0x881D4B24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r31,-304(r1)
	ctx.current_instruction = 0x881D4B30;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r31.u32);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// stw r11,-348(r1)
	ctx.current_instruction = 0x881D4B38;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r11.u32);
	// blt cr6,0x881d44fc
	if (ctx.cr6.lt) goto loc_881D44FC;
	// b 0x881d4dcc
	goto loc_881D4DCC;
loc_881D4B44:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_881D4B48:
	// blt cr6,0x881d4cbc
	if (ctx.cr6.lt) goto loc_881D4CBC;
	// lwz r9,84(r3)
	ctx.current_instruction = 0x881D4B4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d4cbc
	if (!ctx.cr6.lt) goto loc_881D4CBC;
	// lwz r10,88(r3)
	ctx.current_instruction = 0x881D4B5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d4dcc
	if (!ctx.cr6.gt) goto loc_881D4DCC;
loc_881D4B6C:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-288(r1)
	ctx.current_instruction = 0x881D4B74;
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f13.u64);
	// lwz r10,-284(r1)
	ctx.current_instruction = 0x881D4B78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x881d4ca0
	if (ctx.cr6.lt) goto loc_881D4CA0;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x881D4B84;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d4c2c
	if (!ctx.cr6.lt) goto loc_881D4C2C;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// std r4,-336(r1)
	ctx.current_instruction = 0x881D4BA4;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r4.u64);
	// stw r9,8228(r10)
	ctx.current_instruction = 0x881D4BA8;
	REX_STORE_U32(ctx.r10.u32 + 8228, ctx.r9.u32);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r8,r8,r7
	ctx.current_instruction = 0x881D4BB4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,2(r10)
	ctx.current_instruction = 0x881D4BBC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lwz r10,-308(r1)
	ctx.current_instruction = 0x881D4BC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lbz r6,0(r9)
	ctx.current_instruction = 0x881D4BC4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r27,2(r9)
	ctx.current_instruction = 0x881D4BC8;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lfd f13,-336(r1)
	ctx.current_instruction = 0x881D4BD0;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// subf r6,r6,r27
	ctx.r6.u64 = ctx.r27.u64 - ctx.r6.u64;
	// subf r6,r4,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r4.u64;
	// add r27,r6,r8
	ctx.r27.u64 = ctx.r6.u64 + ctx.r8.u64;
	// fmsub f10,f0,f8,f12
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-288(r1)
	ctx.current_instruction = 0x881D4BEC;
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f9.u64);
	// lwz r26,-284(r1)
	ctx.current_instruction = 0x881D4BF0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// mullw r6,r4,r26
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r26.s32);
	// mullw r4,r27,r26
	ctx.r4.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r26.s32);
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// subfic r27,r26,256
	ctx.xer.ca = ctx.r26.u32 <= 256;
	ctx.r27.u64 = static_cast<uint64_t>(256) - ctx.r26.u64;
	// subf r10,r10,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r10.u64;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stb r6,2(r11)
	ctx.current_instruction = 0x881D4C24;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// b 0x881d4ca4
	goto loc_881D4CA4;
loc_881D4C2C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d4ca0
	if (!ctx.cr6.gt) goto loc_881D4CA0;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x881D4C34;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x881d4ca0
	if (!ctx.cr6.lt) goto loc_881D4CA0;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// std r4,-224(r1)
	ctx.current_instruction = 0x881D4C50;
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r4.u64);
	// lfd f13,-224(r1)
	ctx.current_instruction = 0x881D4C54;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,8228(r10)
	ctx.current_instruction = 0x881D4C60;
	REX_STORE_U32(ctx.r10.u32 + 8228, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r9,-308(r1)
	ctx.current_instruction = 0x881D4C68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// fmsub f10,f0,f8,f12
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64);
	// lbzx r4,r8,r7
	ctx.current_instruction = 0x881D4C70;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// lbzx r6,r6,r10
	ctx.current_instruction = 0x881D4C78;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-208(r1)
	ctx.current_instruction = 0x881D4C84;
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.f9.u64);
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,2(r11)
	ctx.current_instruction = 0x881D4C98;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// b 0x881d4ca4
	goto loc_881D4CA4;
loc_881D4CA0:
	// stb r29,2(r11)
	ctx.current_instruction = 0x881D4CA0;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r29.u8);
loc_881D4CA4:
	// lwz r10,88(r3)
	ctx.current_instruction = 0x881D4CA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881d4b6c
	if (ctx.cr6.lt) goto loc_881D4B6C;
	// b 0x881d4dc8
	goto loc_881D4DC8;
loc_881D4CBC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d4da4
	if (!ctx.cr6.gt) goto loc_881D4DA4;
	// lwz r9,84(r3)
	ctx.current_instruction = 0x881D4CC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d4da4
	if (!ctx.cr6.lt) goto loc_881D4DA4;
	// lwz r10,88(r3)
	ctx.current_instruction = 0x881D4CD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d4dcc
	if (!ctx.cr6.gt) goto loc_881D4DCC;
loc_881D4CE0:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-288(r1)
	ctx.current_instruction = 0x881D4CE8;
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f13.u64);
	// lwz r10,-284(r1)
	ctx.current_instruction = 0x881D4CEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x881d4d88
	if (ctx.cr6.lt) goto loc_881D4D88;
	// lwz r9,80(r3)
	ctx.current_instruction = 0x881D4CF8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d4d64
	if (!ctx.cr6.lt) goto loc_881D4D64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// std r4,-216(r1)
	ctx.current_instruction = 0x881D4D18;
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r4.u64);
	// lfd f13,-216(r1)
	ctx.current_instruction = 0x881D4D1C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmsub f10,f0,f8,f12
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64);
	// stw r9,8228(r10)
	ctx.current_instruction = 0x881D4D28;
	REX_STORE_U32(ctx.r10.u32 + 8228, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r9,r8,r7
	ctx.current_instruction = 0x881D4D30;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// lbz r8,2(r10)
	ctx.current_instruction = 0x881D4D34;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-288(r1)
	ctx.current_instruction = 0x881D4D3C;
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f9.u64);
	// lwz r4,-284(r1)
	ctx.current_instruction = 0x881D4D40;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// subfic r31,r4,256
	ctx.xer.ca = ctx.r4.u32 <= 256;
	ctx.r31.u64 = static_cast<uint64_t>(256) - ctx.r4.u64;
	// mullw r10,r8,r4
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// mullw r9,r31,r9
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,2(r11)
	ctx.current_instruction = 0x881D4D5C;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// b 0x881d4d8c
	goto loc_881D4D8C;
loc_881D4D64:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d4d88
	if (!ctx.cr6.gt) goto loc_881D4D88;
	// lwz r9,80(r3)
	ctx.current_instruction = 0x881D4D6C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d4d88
	if (!ctx.cr6.lt) goto loc_881D4D88;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r9,r10,r7
	ctx.current_instruction = 0x881D4D7C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// stb r9,2(r11)
	ctx.current_instruction = 0x881D4D80;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// b 0x881d4d8c
	goto loc_881D4D8C;
loc_881D4D88:
	// stb r29,2(r11)
	ctx.current_instruction = 0x881D4D88;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r29.u8);
loc_881D4D8C:
	// lwz r10,88(r3)
	ctx.current_instruction = 0x881D4D8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881d4ce0
	if (ctx.cr6.lt) goto loc_881D4CE0;
	// b 0x881d4dc8
	goto loc_881D4DC8;
loc_881D4DA4:
	// lwz r9,88(r3)
	ctx.current_instruction = 0x881D4DA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x881d4dcc
	if (!ctx.cr6.gt) goto loc_881D4DCC;
loc_881D4DB4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r29,2(r11)
	ctx.current_instruction = 0x881D4DB8;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r29.u8);
	ctx.r11.u32 = ea;
	// lwz r9,88(r3)
	ctx.current_instruction = 0x881D4DBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x881d4db4
	if (ctx.cr6.lt) goto loc_881D4DB4;
loc_881D4DC8:
	// stw r11,-348(r1)
	ctx.current_instruction = 0x881D4DC8;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r11.u32);
loc_881D4DCC:
	// lwz r10,92(r3)
	ctx.current_instruction = 0x881D4DCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r28,-268(r1)
	ctx.current_instruction = 0x881D4DD4;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r28.u32);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881d4430
	if (ctx.cr6.lt) goto loc_881D4430;
loc_881D4DE0:
	// lwz r11,92(r3)
	ctx.current_instruction = 0x881D4DE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,-268(r1)
	ctx.current_instruction = 0x881D4DE8;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881d5f54
	if (!ctx.cr6.gt) goto loc_881D5F54;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r9,-328(r1)
	ctx.current_instruction = 0x881D4DF8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// lwz r8,-340(r1)
	ctx.current_instruction = 0x881D4DFC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// li r28,128
	ctx.r28.s64 = 128;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// stw r11,-328(r1)
	ctx.current_instruction = 0x881D4E0C;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r11.u32);
	// lfd f0,12296(r10)
	ctx.current_instruction = 0x881D4E10;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12296);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// fmul f10,f1,f0
	ctx.f10.f64 = ctx.f1.f64 * ctx.f0.f64;
	// stw r9,-340(r1)
	ctx.current_instruction = 0x881D4E1C;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r9.u32);
	// lfd f11,17600(r10)
	ctx.current_instruction = 0x881D4E20;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r10.u32 + 17600);
	// fsub f9,f2,f10
	ctx.f9.f64 = ctx.f2.f64 - ctx.f10.f64;
loc_881D4E28:
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// lwz r8,96(r3)
	ctx.current_instruction = 0x881D4E2C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
	// std r10,-216(r1)
	ctx.current_instruction = 0x881D4E34;
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r10.u64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfd f13,-216(r1)
	ctx.current_instruction = 0x881D4E3C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmadd f12,f12,f3,f4
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f4.f64);
	// beq cr6,0x881d4e58
	if (ctx.cr6.eq) goto loc_881D4E58;
	// fsub f13,f3,f6
	ctx.f13.f64 = ctx.f3.f64 - ctx.f6.f64;
	// fmul f13,f13,f7
	ctx.f13.f64 = ctx.f13.f64 * ctx.f7.f64;
	// b 0x881d4e5c
	goto loc_881D4E5C;
loc_881D4E58:
	// fmr f13,f5
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f5.f64;
loc_881D4E5C:
	// fadd f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 + ctx.f12.f64;
	// lis r7,-30678
	ctx.r7.s64 = -2010513408;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-312(r1)
	ctx.current_instruction = 0x881D4E68;
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f12.u64);
	// lwz r10,-308(r1)
	ctx.current_instruction = 0x881D4E6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// stw r8,8228(r7)
	ctx.current_instruction = 0x881D4E7C;
	REX_STORE_U32(ctx.r7.u32 + 8228, ctx.r8.u32);
	// std r6,-224(r1)
	ctx.current_instruction = 0x881D4E80;
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r6.u64);
	// lfd f2,-224(r1)
	ctx.current_instruction = 0x881D4E84;
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// fmsub f13,f13,f8,f1
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f8.f64, -ctx.f1.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-336(r1)
	ctx.current_instruction = 0x881D4E94;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f12.u64);
	// lwz r25,-332(r1)
	ctx.current_instruction = 0x881D4E98;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// mullw r4,r25,r25
	ctx.r4.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r25.s32);
	// srawi r8,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 8;
	// mullw r7,r8,r25
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r25.s32);
	// stw r8,-300(r1)
	ctx.current_instruction = 0x881D4EA8;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r8.u32);
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// stw r6,-248(r1)
	ctx.current_instruction = 0x881D4EB0;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r6.u32);
	// ble cr6,0x881d5b5c
	if (!ctx.cr6.gt) goto loc_881D5B5C;
	// lwz r8,84(r3)
	ctx.current_instruction = 0x881D4EB8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x881d5b58
	if (!ctx.cr6.lt) goto loc_881D5B58;
	// lwz r10,88(r3)
	ctx.current_instruction = 0x881D4EC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,-320(r1)
	ctx.current_instruction = 0x881D4ED0;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d5f40
	if (!ctx.cr6.gt) goto loc_881D5F40;
loc_881D4EDC:
	// fadd f0,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fmul f13,f0,f7
	ctx.f13.f64 = ctx.f0.f64 * ctx.f7.f64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-336(r1)
	ctx.current_instruction = 0x881D4EE8;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f12.u64);
	// lwz r10,-332(r1)
	ctx.current_instruction = 0x881D4EEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d593c
	if (!ctx.cr6.gt) goto loc_881D593C;
	// lwz r7,80(r3)
	ctx.current_instruction = 0x881D4EF8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r8,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// addi r6,r8,-2
	ctx.r6.s64 = ctx.r8.s64 + -2;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x881d5938
	if (!ctx.cr6.lt) goto loc_881D5938;
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,-308(r1)
	ctx.current_instruction = 0x881D4F14;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// std r6,-232(r1)
	ctx.current_instruction = 0x881D4F24;
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r6.u64);
	// stw r11,8228(r8)
	ctx.current_instruction = 0x881D4F28;
	REX_STORE_U32(ctx.r8.u32 + 8228, ctx.r11.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r7,2
	ctx.r4.s64 = ctx.r7.s64 + 2;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r7,-2
	ctx.r6.s64 = ctx.r7.s64 + -2;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,-304(r1)
	ctx.current_instruction = 0x881D4F48;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r11.u32);
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r30,r10,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r10.u64;
	// rlwinm r31,r6,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r11,r11,r5
	ctx.current_instruction = 0x881D4F58;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f13,-232(r1)
	ctx.current_instruction = 0x881D4F60;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbzx r26,r9,r8
	ctx.current_instruction = 0x881D4F6C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r5,-4(r30)
	ctx.current_instruction = 0x881D4F74;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + -4);
	// lbzx r27,r31,r8
	ctx.current_instruction = 0x881D4F78;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r29,r4,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,-4(r8)
	ctx.current_instruction = 0x881D4F80;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + -4);
	// add r23,r26,r5
	ctx.r23.u64 = ctx.r26.u64 + ctx.r5.u64;
	// lbz r9,0(r30)
	ctx.current_instruction = 0x881D4F88;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// rlwinm r3,r23,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r28,4(r30)
	ctx.current_instruction = 0x881D4F94;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r24,-4(r6)
	ctx.current_instruction = 0x881D4F98;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r6.u32 + -4);
	// add r21,r10,r9
	ctx.r21.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r22,r7,4
	ctx.r22.s64 = ctx.r7.s64 + 4;
	// lbz r31,0(r6)
	ctx.current_instruction = 0x881D4FA4;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// lbz r23,8(r30)
	ctx.current_instruction = 0x881D4FA8;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r24.u64;
	// rlwinm r20,r21,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r21,4(r6)
	ctx.current_instruction = 0x881D4FB4;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// fmsub f2,f0,f11,f12
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// add r19,r4,r28
	ctx.r19.u64 = ctx.r4.u64 + ctx.r28.u64;
	// rlwinm r22,r22,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r30,8(r8)
	ctx.current_instruction = 0x881D4FC4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r8.u32 + 8);
	// subf r6,r23,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r23.u64;
	// subf r4,r20,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r20.u64;
	// lbzx r20,r29,r8
	ctx.current_instruction = 0x881D4FD0;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// rlwinm r3,r19,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,4(r8)
	ctx.current_instruction = 0x881D4FDC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// lbzx r22,r22,r8
	ctx.current_instruction = 0x881D4FE4;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r8.u32);
	// subf r3,r21,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r21.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r4,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-336(r1)
	ctx.current_instruction = 0x881D4FF8;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f1.u64);
	// subf r3,r22,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r22.u64;
	// add r18,r6,r20
	ctx.r18.u64 = ctx.r6.u64 + ctx.r20.u64;
	// lbzx r6,r29,r8
	ctx.current_instruction = 0x881D5004;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// subf r8,r4,r19
	ctx.r8.u64 = ctx.r19.u64 - ctx.r4.u64;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r18,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mulli r4,r3,13
	ctx.r4.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(13));
	// subf r19,r4,r8
	ctx.r19.u64 = ctx.r8.u64 - ctx.r4.u64;
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r8,-332(r1)
	ctx.current_instruction = 0x881D5030;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r4,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 1;
	// addze r8,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r8.s64 = temp.s64;
	// mullw r4,r8,r8
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// mullw r29,r4,r8
	ctx.r29.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// srawi r29,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 8;
	// srawi r14,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r19.s32 >> 1;
	// subf r19,r28,r9
	ctx.r19.u64 = ctx.r9.u64 - ctx.r28.u64;
	// subf r18,r11,r9
	ctx.r18.u64 = ctx.r9.u64 - ctx.r11.u64;
	// std r25,-240(r1)
	ctx.current_instruction = 0x881D5058;
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r25.u64);
	// add r17,r11,r3
	ctx.r17.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r24,-336(r1)
	ctx.current_instruction = 0x881D5060;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r24.u64);
	// subf r18,r5,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r5.u64;
	// stw r17,-348(r1)
	ctx.current_instruction = 0x881D5068;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r17.u32);
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r16,r18,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r27,r22
	ctx.r18.u64 = ctx.r22.u64 - ctx.r27.u64;
	// subf r17,r31,r16
	ctx.r17.u64 = ctx.r16.u64 - ctx.r31.u64;
	// subf r19,r31,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r31.u64;
	// add r15,r17,r24
	ctx.r15.u64 = ctx.r17.u64 + ctx.r24.u64;
	// rlwinm r17,r18,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r5,r19
	ctx.r3.u64 = ctx.r19.u64 - ctx.r5.u64;
	// stw r17,-352(r1)
	ctx.current_instruction = 0x881D508C;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r17.u32);
	// subf r17,r11,r7
	ctx.r17.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r19,r3,r21
	ctx.r19.u64 = ctx.r3.u64 + ctx.r21.u64;
	// mulli r17,r17,11
	ctx.r17.s64 = static_cast<int64_t>(ctx.r17.u64 * static_cast<uint64_t>(11));
	// stw r17,-344(r1)
	ctx.current_instruction = 0x881D509C;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r17.u32);
	// add r3,r19,r23
	ctx.r3.u64 = ctx.r19.u64 + ctx.r23.u64;
	// subf r19,r7,r26
	ctx.r19.u64 = ctx.r26.u64 - ctx.r7.u64;
	// add r16,r15,r6
	ctx.r16.u64 = ctx.r15.u64 + ctx.r6.u64;
	// rlwinm r15,r19,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r16,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r19,r15
	ctx.r19.u64 = ctx.r19.u64 + ctx.r15.u64;
	// lwz r15,-348(r1)
	ctx.current_instruction = 0x881D50B8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// subf r25,r31,r7
	ctx.r25.u64 = ctx.r7.u64 - ctx.r31.u64;
	// stw r17,-296(r1)
	ctx.current_instruction = 0x881D50C0;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r17.u32);
	// stw r19,-324(r1)
	ctx.current_instruction = 0x881D50C4;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r19.u32);
	// subf r19,r26,r6
	ctx.r19.u64 = ctx.r6.u64 - ctx.r26.u64;
	// subf r16,r26,r25
	ctx.r16.u64 = ctx.r25.u64 - ctx.r26.u64;
	// rlwinm r17,r3,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r30,r19
	ctx.r3.u64 = ctx.r19.u64 - ctx.r30.u64;
	// stw r16,-316(r1)
	ctx.current_instruction = 0x881D50D8;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r16.u32);
	// subf r16,r20,r17
	ctx.r16.u64 = ctx.r17.u64 - ctx.r20.u64;
	// lwz r25,-352(r1)
	ctx.current_instruction = 0x881D50E0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r17,r16,r24
	ctx.r17.u64 = ctx.r16.u64 + ctx.r24.u64;
	// rlwinm r16,r3,3,0,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r19,r27,r10
	ctx.r19.u64 = ctx.r10.u64 - ctx.r27.u64;
	// subf r3,r3,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r3.u64;
	// lwz r16,-344(r1)
	ctx.current_instruction = 0x881D50F8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r19,r30,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r30.u64;
	// add r3,r17,r3
	ctx.r3.u64 = ctx.r17.u64 + ctx.r3.u64;
	// stw r16,-352(r1)
	ctx.current_instruction = 0x881D510C;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r16.u32);
	// subf r16,r5,r19
	ctx.r16.u64 = ctx.r19.u64 - ctx.r5.u64;
	// add r17,r18,r25
	ctx.r17.u64 = ctx.r18.u64 + ctx.r25.u64;
	// add r16,r16,r24
	ctx.r16.u64 = ctx.r16.u64 + ctx.r24.u64;
	// add r3,r3,r17
	ctx.r3.u64 = ctx.r3.u64 + ctx.r17.u64;
	// rotlwi r19,r6,1
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// lwz r25,-296(r1)
	ctx.current_instruction = 0x881D5124;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// add r16,r16,r22
	ctx.r16.u64 = ctx.r16.u64 + ctx.r22.u64;
	// lwz r17,-324(r1)
	ctx.current_instruction = 0x881D512C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// rotlwi r18,r27,2
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r27.u32, 2);
	// add r19,r19,r9
	ctx.r19.u64 = ctx.r19.u64 + ctx.r9.u64;
	// add r17,r25,r17
	ctx.r17.u64 = ctx.r25.u64 + ctx.r17.u64;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r27,r18
	ctx.r18.u64 = ctx.r27.u64 + ctx.r18.u64;
	// rotlwi r25,r10,3
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// subf r18,r18,r17
	ctx.r18.u64 = ctx.r17.u64 - ctx.r18.u64;
	// subf r17,r10,r25
	ctx.r17.u64 = ctx.r25.u64 - ctx.r10.u64;
	// mullw r14,r14,r4
	ctx.r14.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r4.s32);
	// stw r14,-324(r1)
	ctx.current_instruction = 0x881D5154;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r14.u32);
	// lwz r24,-352(r1)
	ctx.current_instruction = 0x881D5158;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// lwz r24,-316(r1)
	ctx.current_instruction = 0x881D5160;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// add r18,r18,r17
	ctx.r18.u64 = ctx.r18.u64 + ctx.r17.u64;
	// stw r3,-352(r1)
	ctx.current_instruction = 0x881D5168;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r3.u32);
	// add r3,r24,r9
	ctx.r3.u64 = ctx.r24.u64 + ctx.r9.u64;
	// lwz r24,-352(r1)
	ctx.current_instruction = 0x881D5170;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// srawi r24,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 1;
	// stw r19,-352(r1)
	ctx.current_instruction = 0x881D5178;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r19.u32);
	// subf r19,r20,r16
	ctx.r19.u64 = ctx.r16.u64 - ctx.r20.u64;
	// lwz r16,-352(r1)
	ctx.current_instruction = 0x881D5180;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r31,r16
	ctx.r17.u64 = ctx.r16.u64 - ctx.r31.u64;
	// rlwinm r25,r3,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r19,r19,r23
	ctx.r19.u64 = ctx.r19.u64 + ctx.r23.u64;
	// mullw r16,r24,r29
	ctx.r16.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r29.s32);
	// stw r19,-352(r1)
	ctx.current_instruction = 0x881D5198;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r19.u32);
	// subf r14,r15,r17
	ctx.r14.u64 = ctx.r17.u64 - ctx.r15.u64;
	// stw r16,-296(r1)
	ctx.current_instruction = 0x881D51A0;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r16.u32);
	// subf r3,r3,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r3.u64;
	// lwz r15,-300(r1)
	ctx.current_instruction = 0x881D51A8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// subf r19,r28,r21
	ctx.r19.u64 = ctx.r21.u64 - ctx.r28.u64;
	// stw r3,-344(r1)
	ctx.current_instruction = 0x881D51B0;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// subf r17,r11,r6
	ctx.r17.u64 = ctx.r6.u64 - ctx.r11.u64;
	// lwz r25,-324(r1)
	ctx.current_instruction = 0x881D51BC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r21,r21,r31
	ctx.r21.u64 = ctx.r31.u64 - ctx.r21.u64;
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// stw r15,-344(r1)
	ctx.current_instruction = 0x881D51C8;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r15.u32);
	// mulli r15,r17,11
	ctx.r15.s64 = static_cast<int64_t>(ctx.r17.u64 * static_cast<uint64_t>(11));
	// subf r22,r22,r21
	ctx.r22.u64 = ctx.r21.u64 - ctx.r22.u64;
	// mullw r17,r18,r8
	ctx.r17.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r8.s32);
	// lwz r16,-352(r1)
	ctx.current_instruction = 0x881D51D8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r24,-296(r1)
	ctx.current_instruction = 0x881D51DC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r22,r10,r22
	ctx.r22.u64 = ctx.r22.u64 - ctx.r10.u64;
	// add r3,r16,r3
	ctx.r3.u64 = ctx.r16.u64 + ctx.r3.u64;
	// rlwinm r16,r19,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r3,r15
	ctx.r3.u64 = ctx.r3.u64 + ctx.r15.u64;
	// add r19,r19,r16
	ctx.r19.u64 = ctx.r19.u64 + ctx.r16.u64;
	// subf r15,r10,r27
	ctx.r15.u64 = ctx.r27.u64 - ctx.r10.u64;
	// add r19,r3,r19
	ctx.r19.u64 = ctx.r3.u64 + ctx.r19.u64;
	// subf r3,r9,r22
	ctx.r3.u64 = ctx.r22.u64 - ctx.r9.u64;
	// add r18,r25,r24
	ctx.r18.u64 = ctx.r25.u64 + ctx.r24.u64;
	// ld r24,-336(r1)
	ctx.current_instruction = 0x881D5208;
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// add r22,r3,r27
	ctx.r22.u64 = ctx.r3.u64 + ctx.r27.u64;
	// subf r27,r9,r28
	ctx.r27.u64 = ctx.r28.u64 - ctx.r9.u64;
	// stw r27,-352(r1)
	ctx.current_instruction = 0x881D5214;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r27.u32);
	// srawi r14,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r14.s32 >> 1;
	// subf r16,r11,r10
	ctx.r16.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r3,r6,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r6.u64;
	// subf r21,r7,r11
	ctx.r21.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r18,r18,r17
	ctx.r18.u64 = ctx.r18.u64 + ctx.r17.u64;
	// subf r16,r5,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r5.u64;
	// rlwinm r17,r14,8,0,23
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 8) & 0xFFFFFF00;
	// add r27,r21,r3
	ctx.r27.u64 = ctx.r21.u64 + ctx.r3.u64;
	// add r22,r22,r30
	ctx.r22.u64 = ctx.r22.u64 + ctx.r30.u64;
	// rlwinm r15,r15,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r22,r28
	ctx.r22.u64 = ctx.r22.u64 + ctx.r28.u64;
	// rlwinm r21,r27,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r15,r24,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r24.u64;
	// add r17,r18,r17
	ctx.r17.u64 = ctx.r18.u64 + ctx.r17.u64;
	// subf r18,r30,r16
	ctx.r18.u64 = ctx.r16.u64 - ctx.r30.u64;
	// add r21,r27,r21
	ctx.r21.u64 = ctx.r27.u64 + ctx.r21.u64;
	// rlwinm r22,r22,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r18,r7
	ctx.r27.u64 = ctx.r18.u64 + ctx.r7.u64;
	// lwz r14,-352(r1)
	ctx.current_instruction = 0x881D5264;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r22,r22,r21
	ctx.r22.u64 = ctx.r22.u64 + ctx.r21.u64;
	// rlwinm r14,r14,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r24,r22
	ctx.r24.u64 = ctx.r22.u64 - ctx.r24.u64;
	// subf r16,r26,r14
	ctx.r16.u64 = ctx.r14.u64 - ctx.r26.u64;
	// subf r26,r26,r15
	ctx.r26.u64 = ctx.r15.u64 - ctx.r26.u64;
	// subf r18,r7,r16
	ctx.r18.u64 = ctx.r16.u64 - ctx.r7.u64;
	// subf r21,r6,r26
	ctx.r21.u64 = ctx.r26.u64 - ctx.r6.u64;
	// add r16,r27,r23
	ctx.r16.u64 = ctx.r27.u64 + ctx.r23.u64;
	// rotlwi r26,r28,2
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// subf r27,r9,r21
	ctx.r27.u64 = ctx.r21.u64 - ctx.r9.u64;
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// rlwinm r22,r16,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r10,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r10.u64;
	// rotlwi r16,r9,3
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r21,r23,r18
	ctx.r21.u64 = ctx.r18.u64 - ctx.r23.u64;
	// add r26,r27,r31
	ctx.r26.u64 = ctx.r27.u64 + ctx.r31.u64;
	// subf r28,r28,r22
	ctx.r28.u64 = ctx.r22.u64 - ctx.r28.u64;
	// subf r24,r23,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r23.u64;
	// rlwinm r27,r3,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r22,r9,r16
	ctx.r22.u64 = ctx.r16.u64 - ctx.r9.u64;
	// add r23,r21,r6
	ctx.r23.u64 = ctx.r21.u64 + ctx.r6.u64;
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// add r28,r28,r22
	ctx.r28.u64 = ctx.r28.u64 + ctx.r22.u64;
	// add r24,r24,r20
	ctx.r24.u64 = ctx.r24.u64 + ctx.r20.u64;
	// add r3,r23,r30
	ctx.r3.u64 = ctx.r23.u64 + ctx.r30.u64;
	// add r26,r26,r7
	ctx.r26.u64 = ctx.r26.u64 + ctx.r7.u64;
	// add r23,r24,r5
	ctx.r23.u64 = ctx.r24.u64 + ctx.r5.u64;
	// srawi r22,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r19.s32 >> 1;
	// add r21,r28,r27
	ctx.r21.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add r24,r26,r11
	ctx.r24.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r14,-344(r1)
	ctx.current_instruction = 0x881D52E0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r26,r3,r11
	ctx.r26.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r18,-248(r1)
	ctx.current_instruction = 0x881D52E8;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// subf r20,r10,r11
	ctx.r20.u64 = ctx.r11.u64 - ctx.r10.u64;
	// ld r25,-240(r1)
	ctx.current_instruction = 0x881D52F0;
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// mullw r28,r23,r29
	ctx.r28.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r29.s32);
	// rotlwi r27,r7,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// add r23,r24,r5
	ctx.r23.u64 = ctx.r24.u64 + ctx.r5.u64;
	// mullw r3,r22,r4
	ctx.r3.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r4.s32);
	// mullw r19,r17,r14
	ctx.r19.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r14.s32);
	// add r17,r26,r5
	ctx.r17.u64 = ctx.r26.u64 + ctx.r5.u64;
	// add r22,r27,r10
	ctx.r22.u64 = ctx.r27.u64 + ctx.r10.u64;
	// subf r24,r9,r20
	ctx.r24.u64 = ctx.r20.u64 - ctx.r9.u64;
	// srawi r21,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r21.s32 >> 1;
	// add r27,r3,r28
	ctx.r27.u64 = ctx.r3.u64 + ctx.r28.u64;
	// mullw r26,r23,r8
	ctx.r26.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r8.s32);
	// lwz r23,-348(r1)
	ctx.current_instruction = 0x881D5320;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r5,r24,r5
	ctx.r5.u64 = ctx.r24.u64 + ctx.r5.u64;
	// mullw r3,r21,r4
	ctx.r3.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r4.s32);
	// mullw r28,r17,r29
	ctx.r28.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r29.s32);
	// add r26,r27,r26
	ctx.r26.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// mullw r27,r5,r8
	ctx.r27.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// mullw r5,r26,r18
	ctx.r5.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r18.s32);
	// subf r3,r7,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r27,r28,r27
	ctx.r27.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add r28,r19,r5
	ctx.r28.u64 = ctx.r19.u64 + ctx.r5.u64;
	// subf r5,r6,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r24,r3,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r5,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r22,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// subf r24,r30,r22
	ctx.r24.u64 = ctx.r22.u64 - ctx.r30.u64;
	// subf r3,r10,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r10.u64;
	// subf r5,r9,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r9.u64;
	// subf r26,r23,r24
	ctx.r26.u64 = ctx.r24.u64 - ctx.r23.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// mullw r27,r27,r25
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r25.s32);
	// srawi r30,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r26.s32 >> 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// srawi r31,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r5.s32 >> 1;
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// mullw r5,r3,r29
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// mullw r27,r30,r4
	ctx.r27.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r4.s32);
	// subf r3,r9,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r9.u64;
	// add r9,r27,r5
	ctx.r9.u64 = ctx.r27.u64 + ctx.r5.u64;
	// mullw r6,r31,r18
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r18.s32);
	// srawi r5,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 1;
	// subf r3,r10,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r9,r5,r25
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r25.s32);
	// srawi r7,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x881d53e8
	if (!ctx.cr6.gt) goto loc_881D53E8;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x881d53f4
	goto loc_881D53F4;
loc_881D53E8:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_881D53F4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,-340(r1)
	ctx.current_instruction = 0x881D53F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// lwz r9,-304(r1)
	ctx.current_instruction = 0x881D53FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwz r5,-256(r1)
	ctx.current_instruction = 0x881D5404;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r6,-340(r1)
	ctx.current_instruction = 0x881D540C;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r6.u32);
	// stb r10,4(r11)
	ctx.current_instruction = 0x881D5410;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lwz r11,20(r1)
	ctx.current_instruction = 0x881D5414;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r10,-4(r7)
	ctx.current_instruction = 0x881D5418;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + -4);
	// lbz r6,4(r7)
	ctx.current_instruction = 0x881D541C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// lwz r22,80(r11)
	ctx.current_instruction = 0x881D5420;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// addi r3,r22,2
	ctx.r3.s64 = ctx.r22.s64 + 2;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r11,0(r7)
	ctx.current_instruction = 0x881D542C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r31,r22,-2
	ctx.r31.s64 = ctx.r22.s64 + -2;
	// lbz r30,8(r7)
	ctx.current_instruction = 0x881D5434;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 8);
	// rlwinm r9,r22,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r3,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r19,r9,r7
	ctx.r19.u64 = ctx.r7.u64 - ctx.r9.u64;
	// lbzx r26,r5,r7
	ctx.current_instruction = 0x881D5444;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r22,4
	ctx.r23.s64 = ctx.r22.s64 + 4;
	// add r21,r9,r7
	ctx.r21.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbzx r20,r20,r7
	ctx.current_instruction = 0x881D5458;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r7.u32);
	// lbz r9,0(r19)
	ctx.current_instruction = 0x881D545C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// rlwinm r17,r23,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r27,r5,r7
	ctx.current_instruction = 0x881D5464;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// rlwinm r16,r22,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r10,r9
	ctx.r22.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r5,-4(r19)
	ctx.current_instruction = 0x881D5470;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r19.u32 + -4);
	// lbz r28,4(r19)
	ctx.current_instruction = 0x881D5474;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r19.u32 + 4);
	// lbz r24,-4(r21)
	ctx.current_instruction = 0x881D5478;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r21.u32 + -4);
	// rlwinm r15,r22,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r22,r17,r7
	ctx.current_instruction = 0x881D5480;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r7.u32);
	// lbzx r7,r16,r7
	ctx.current_instruction = 0x881D5484;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r7.u32);
	// lbz r23,8(r19)
	ctx.current_instruction = 0x881D5488;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r19.u32 + 8);
	// subf r19,r28,r9
	ctx.r19.u64 = ctx.r9.u64 - ctx.r28.u64;
	// rotlwi r31,r11,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r17,r26,r5
	ctx.r17.u64 = ctx.r26.u64 + ctx.r5.u64;
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lbz r31,0(r21)
	ctx.current_instruction = 0x881D549C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// lbz r21,4(r21)
	ctx.current_instruction = 0x881D54A0;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r21.u32 + 4);
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// subf r17,r24,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r24.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r23,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r23.u64;
	// subf r19,r31,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r31.u64;
	// subf r14,r21,r3
	ctx.r14.u64 = ctx.r3.u64 - ctx.r21.u64;
	// subf r3,r15,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r15.u64;
	// rlwinm r16,r17,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// subf r17,r5,r19
	ctx.r17.u64 = ctx.r19.u64 - ctx.r5.u64;
	// rlwinm r19,r3,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r16,r16,r20
	ctx.r16.u64 = ctx.r16.u64 + ctx.r20.u64;
	// stw r19,-352(r1)
	ctx.current_instruction = 0x881D54DC;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r19.u32);
	// subf r19,r22,r14
	ctx.r19.u64 = ctx.r14.u64 - ctx.r22.u64;
	// lwz r14,-352(r1)
	ctx.current_instruction = 0x881D54E4;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r15,r17,r21
	ctx.r15.u64 = ctx.r17.u64 + ctx.r21.u64;
	// subf r17,r3,r14
	ctx.r17.u64 = ctx.r14.u64 - ctx.r3.u64;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r19,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// add r17,r17,r16
	ctx.r17.u64 = ctx.r17.u64 + ctx.r16.u64;
	// add r15,r15,r23
	ctx.r15.u64 = ctx.r15.u64 + ctx.r23.u64;
	// add r19,r19,r3
	ctx.r19.u64 = ctx.r19.u64 + ctx.r3.u64;
	// subf r14,r26,r7
	ctx.r14.u64 = ctx.r7.u64 - ctx.r26.u64;
	// add r16,r7,r6
	ctx.r16.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r15,r15,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// add r17,r17,r19
	ctx.r17.u64 = ctx.r17.u64 + ctx.r19.u64;
	// subf r3,r30,r14
	ctx.r3.u64 = ctx.r14.u64 - ctx.r30.u64;
	// mulli r16,r16,13
	ctx.r16.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(13));
	// subf r19,r20,r15
	ctx.r19.u64 = ctx.r15.u64 - ctx.r20.u64;
	// subf r17,r16,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r16.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r15,r19,r24
	ctx.r15.u64 = ctx.r19.u64 + ctx.r24.u64;
	// rlwinm r16,r3,3,0,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r19,r11,2
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// srawi r14,r17,1
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r17.s32 >> 1;
	// subf r3,r3,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r3.u64;
	// std r25,-200(r1)
	ctx.current_instruction = 0x881D553C;
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r25.u64);
	// rlwinm r17,r15,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r27,r10
	ctx.r16.u64 = ctx.r10.u64 - ctx.r27.u64;
	// add r17,r17,r3
	ctx.r17.u64 = ctx.r17.u64 + ctx.r3.u64;
	// subf r3,r27,r22
	ctx.r3.u64 = ctx.r22.u64 - ctx.r27.u64;
	// stw r17,-352(r1)
	ctx.current_instruction = 0x881D5550;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r17.u32);
	// subf r15,r11,r9
	ctx.r15.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rlwinm r17,r3,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r25,r11,r6
	ctx.r25.u64 = ctx.r6.u64 - ctx.r11.u64;
	// stw r17,-344(r1)
	ctx.current_instruction = 0x881D5560;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r17.u32);
	// rlwinm r17,r16,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r5,r15
	ctx.r16.u64 = ctx.r15.u64 - ctx.r5.u64;
	// subf r17,r30,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r30.u64;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r5,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r5.u64;
	// subf r16,r31,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r31.u64;
	// add r17,r17,r24
	ctx.r17.u64 = ctx.r17.u64 + ctx.r24.u64;
	// add r16,r16,r24
	ctx.r16.u64 = ctx.r16.u64 + ctx.r24.u64;
	// subf r15,r21,r31
	ctx.r15.u64 = ctx.r31.u64 - ctx.r21.u64;
	// add r16,r16,r7
	ctx.r16.u64 = ctx.r16.u64 + ctx.r7.u64;
	// add r17,r17,r22
	ctx.r17.u64 = ctx.r17.u64 + ctx.r22.u64;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r22,r22,r15
	ctx.r22.u64 = ctx.r15.u64 - ctx.r22.u64;
	// stw r16,-324(r1)
	ctx.current_instruction = 0x881D5598;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r16.u32);
	// mulli r16,r25,11
	ctx.r16.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(11));
	// stw r16,-296(r1)
	ctx.current_instruction = 0x881D55A0;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r16.u32);
	// lwz r25,-352(r1)
	ctx.current_instruction = 0x881D55A4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r16,-344(r1)
	ctx.current_instruction = 0x881D55A8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r22,r10,r22
	ctx.r22.u64 = ctx.r22.u64 - ctx.r10.u64;
	// add r16,r3,r16
	ctx.r16.u64 = ctx.r3.u64 + ctx.r16.u64;
	// stw r22,-352(r1)
	ctx.current_instruction = 0x881D55B4;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r22.u32);
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r16,-344(r1)
	ctx.current_instruction = 0x881D55BC;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r16.u32);
	// subf r3,r6,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r6.u64;
	// subf r17,r20,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r20.u64;
	// rlwinm r22,r3,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r17,-316(r1)
	ctx.current_instruction = 0x881D55CC;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r17.u32);
	// subf r21,r28,r21
	ctx.r21.u64 = ctx.r21.u64 - ctx.r28.u64;
	// add r3,r3,r22
	ctx.r3.u64 = ctx.r3.u64 + ctx.r22.u64;
	// stw r21,-272(r1)
	ctx.current_instruction = 0x881D55D8;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r21.u32);
	// subf r15,r31,r6
	ctx.r15.u64 = ctx.r6.u64 - ctx.r31.u64;
	// stw r3,-264(r1)
	ctx.current_instruction = 0x881D55E0;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r3.u32);
	// rotlwi r16,r10,3
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// subf r22,r26,r15
	ctx.r22.u64 = ctx.r15.u64 - ctx.r26.u64;
	// add r15,r11,r19
	ctx.r15.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r22,r22,r9
	ctx.r22.u64 = ctx.r22.u64 + ctx.r9.u64;
	// stw r15,-348(r1)
	ctx.current_instruction = 0x881D55F4;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r15.u32);
	// mullw r15,r14,r4
	ctx.r15.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r4.s32);
	// stw r22,-304(r1)
	ctx.current_instruction = 0x881D55FC;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r22.u32);
	// lwz r17,-352(r1)
	ctx.current_instruction = 0x881D5600;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r21,-344(r1)
	ctx.current_instruction = 0x881D5604;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// rotlwi r22,r27,2
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r27.u32, 2);
	// subf r3,r9,r17
	ctx.r3.u64 = ctx.r17.u64 - ctx.r9.u64;
	// add r21,r25,r21
	ctx.r21.u64 = ctx.r25.u64 + ctx.r21.u64;
	// stw r3,-352(r1)
	ctx.current_instruction = 0x881D5614;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r3.u32);
	// subf r17,r10,r16
	ctx.r17.u64 = ctx.r16.u64 - ctx.r10.u64;
	// lwz r25,-352(r1)
	ctx.current_instruction = 0x881D561C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// rotlwi r3,r7,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// stw r17,-280(r1)
	ctx.current_instruction = 0x881D5624;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r17.u32);
	// add r22,r27,r22
	ctx.r22.u64 = ctx.r27.u64 + ctx.r22.u64;
	// lwz r14,-264(r1)
	ctx.current_instruction = 0x881D562C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lwz r17,-324(r1)
	ctx.current_instruction = 0x881D5634;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r19,r7,r26
	ctx.r19.u64 = ctx.r26.u64 - ctx.r7.u64;
	// stw r15,-324(r1)
	ctx.current_instruction = 0x881D563C;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r15.u32);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r15,-316(r1)
	ctx.current_instruction = 0x881D5644;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// add r17,r17,r14
	ctx.r17.u64 = ctx.r17.u64 + ctx.r14.u64;
	// lwz r16,-296(r1)
	ctx.current_instruction = 0x881D564C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r21,-264(r1)
	ctx.current_instruction = 0x881D5650;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r21.u32);
	// add r21,r15,r23
	ctx.r21.u64 = ctx.r15.u64 + ctx.r23.u64;
	// lwz r15,-264(r1)
	ctx.current_instruction = 0x881D5658;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// subf r22,r22,r17
	ctx.r22.u64 = ctx.r17.u64 - ctx.r22.u64;
	// lwz r17,-280(r1)
	ctx.current_instruction = 0x881D5660;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r16,r15,r16
	ctx.r16.u64 = ctx.r15.u64 + ctx.r16.u64;
	// lwz r15,-304(r1)
	ctx.current_instruction = 0x881D5668;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r14,r25,r27
	ctx.r14.u64 = ctx.r25.u64 + ctx.r27.u64;
	// stw r3,-280(r1)
	ctx.current_instruction = 0x881D5670;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r3.u32);
	// subf r3,r6,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r15,r15,3,0,28
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r14,-264(r1)
	ctx.current_instruction = 0x881D567C;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r14.u32);
	// add r22,r22,r17
	ctx.r22.u64 = ctx.r22.u64 + ctx.r17.u64;
	// lwz r14,-304(r1)
	ctx.current_instruction = 0x881D5684;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// srawi r16,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r16.s64 = ctx.r16.s32 >> 1;
	// lwz r17,-280(r1)
	ctx.current_instruction = 0x881D568C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// srawi r22,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 1;
	// subf r15,r14,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r14.u64;
	// lwz r14,-348(r1)
	ctx.current_instruction = 0x881D5698;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// mullw r22,r22,r8
	ctx.r22.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r8.s32);
	// std r8,-288(r1)
	ctx.current_instruction = 0x881D56A0;
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.r8.u64);
	// stw r15,-280(r1)
	ctx.current_instruction = 0x881D56A4;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r15.u32);
	// lwz r15,-272(r1)
	ctx.current_instruction = 0x881D56A8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// lwz r8,-324(r1)
	ctx.current_instruction = 0x881D56AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// std r18,-240(r1)
	ctx.current_instruction = 0x881D56B0;
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r18.u64);
	// std r20,-336(r1)
	ctx.current_instruction = 0x881D56B4;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r20.u64);
	// lwz r20,-300(r1)
	ctx.current_instruction = 0x881D56B8;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// stw r15,-324(r1)
	ctx.current_instruction = 0x881D56BC;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r15.u32);
	// rlwinm r21,r21,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r31,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r31.u64;
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + ctx.r19.u64;
	// subf r27,r10,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r10.u64;
	// subf r18,r11,r7
	ctx.r18.u64 = ctx.r7.u64 - ctx.r11.u64;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r25,-264(r1)
	ctx.current_instruction = 0x881D56D8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// mulli r18,r18,11
	ctx.r18.s64 = static_cast<int64_t>(ctx.r18.u64 * static_cast<uint64_t>(11));
	// stw r22,-264(r1)
	ctx.current_instruction = 0x881D56E0;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r22.u32);
	// stw r18,-344(r1)
	ctx.current_instruction = 0x881D56E4;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r18.u32);
	// mr r22,r15
	ctx.r22.u64 = ctx.r15.u64;
	// mullw r22,r16,r29
	ctx.r22.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r29.s32);
	// lwz r16,-280(r1)
	ctx.current_instruction = 0x881D56F0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r25,r25,r30
	ctx.r25.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r21,r21,r16
	ctx.r21.u64 = ctx.r21.u64 + ctx.r16.u64;
	// stw r25,-352(r1)
	ctx.current_instruction = 0x881D56FC;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r25.u32);
	// subf r16,r14,r17
	ctx.r16.u64 = ctx.r17.u64 - ctx.r14.u64;
	// lwz r25,-264(r1)
	ctx.current_instruction = 0x881D5704;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// rlwinm r17,r3,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r21,-264(r1)
	ctx.current_instruction = 0x881D570C;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r21.u32);
	// subf r21,r11,r10
	ctx.r21.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r17,r3,r17
	ctx.r17.u64 = ctx.r3.u64 + ctx.r17.u64;
	// lwz r14,-352(r1)
	ctx.current_instruction = 0x881D5718;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// subf r3,r5,r21
	ctx.r3.u64 = ctx.r21.u64 - ctx.r5.u64;
	// add r22,r8,r22
	ctx.r22.u64 = ctx.r8.u64 + ctx.r22.u64;
	// srawi r16,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r16.s64 = ctx.r16.s32 >> 1;
	// stw r3,-280(r1)
	ctx.current_instruction = 0x881D5728;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r3.u32);
	// add r3,r22,r25
	ctx.r3.u64 = ctx.r22.u64 + ctx.r25.u64;
	// rlwinm r22,r16,8,0,23
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r16,-280(r1)
	ctx.current_instruction = 0x881D5734;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// rlwinm r21,r15,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r15,r15,0
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// add r14,r14,r28
	ctx.r14.u64 = ctx.r14.u64 + ctx.r28.u64;
	// subf r25,r9,r28
	ctx.r25.u64 = ctx.r28.u64 - ctx.r9.u64;
	// add r15,r15,r21
	ctx.r15.u64 = ctx.r15.u64 + ctx.r21.u64;
	// rlwinm r21,r14,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r14,r25,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r3,r22
	ctx.r22.u64 = ctx.r3.u64 + ctx.r22.u64;
	// subf r27,r24,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r24.u64;
	// subf r3,r30,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r30.u64;
	// subf r16,r26,r14
	ctx.r16.u64 = ctx.r14.u64 - ctx.r26.u64;
	// add r21,r21,r17
	ctx.r21.u64 = ctx.r21.u64 + ctx.r17.u64;
	// lwz r17,-264(r1)
	ctx.current_instruction = 0x881D576C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// subf r27,r26,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r26.u64;
	// rotlwi r8,r18,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r18.u32, 0);
	// subf r26,r6,r16
	ctx.r26.u64 = ctx.r16.u64 - ctx.r6.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// subf r21,r24,r21
	ctx.r21.u64 = ctx.r21.u64 - ctx.r24.u64;
	// subf r27,r7,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r7.u64;
	// add r16,r17,r8
	ctx.r16.u64 = ctx.r17.u64 + ctx.r8.u64;
	// rotlwi r24,r28,2
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// add r14,r3,r23
	ctx.r14.u64 = ctx.r3.u64 + ctx.r23.u64;
	// subf r17,r10,r26
	ctx.r17.u64 = ctx.r26.u64 - ctx.r10.u64;
	// rotlwi r3,r6,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// subf r26,r9,r27
	ctx.r26.u64 = ctx.r27.u64 - ctx.r9.u64;
	// add r8,r28,r24
	ctx.r8.u64 = ctx.r28.u64 + ctx.r24.u64;
	// add r16,r16,r15
	ctx.r16.u64 = ctx.r16.u64 + ctx.r15.u64;
	// rlwinm r15,r14,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r28,r23,r17
	ctx.r28.u64 = ctx.r17.u64 - ctx.r23.u64;
	// rotlwi r14,r9,3
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r17,r23,r21
	ctx.r17.u64 = ctx.r21.u64 - ctx.r23.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r24,r26,r31
	ctx.r24.u64 = ctx.r26.u64 + ctx.r31.u64;
	// stw r3,-280(r1)
	ctx.current_instruction = 0x881D57C0;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r3.u32);
	// subf r27,r6,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r26,r28,r7
	ctx.r26.u64 = ctx.r28.u64 + ctx.r7.u64;
	// ld r18,-240(r1)
	ctx.current_instruction = 0x881D57CC;
	ctx.r18.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// subf r23,r8,r15
	ctx.r23.u64 = ctx.r15.u64 - ctx.r8.u64;
	// ld r8,-288(r1)
	ctx.current_instruction = 0x881D57D4;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// subf r15,r9,r14
	ctx.r15.u64 = ctx.r14.u64 - ctx.r9.u64;
	// ld r25,-200(r1)
	ctx.current_instruction = 0x881D57DC;
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// rlwinm r28,r27,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r7,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r7.u64;
	// mullw r22,r22,r20
	ctx.r22.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r20.s32);
	// ld r20,-336(r1)
	ctx.current_instruction = 0x881D57EC;
	ctx.r20.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// srawi r21,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r16.s32 >> 1;
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// rlwinm r16,r19,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r3,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r14,-280(r1)
	ctx.current_instruction = 0x881D5800;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r24,r24,r6
	ctx.r24.u64 = ctx.r24.u64 + ctx.r6.u64;
	// add r17,r17,r20
	ctx.r17.u64 = ctx.r17.u64 + ctx.r20.u64;
	// rlwinm r14,r14,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r19,r16
	ctx.r20.u64 = ctx.r19.u64 + ctx.r16.u64;
	// add r23,r23,r15
	ctx.r23.u64 = ctx.r23.u64 + ctx.r15.u64;
	// lwz r15,-348(r1)
	ctx.current_instruction = 0x881D5818;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// subf r19,r30,r14
	ctx.r19.u64 = ctx.r14.u64 - ctx.r30.u64;
	// add r24,r24,r11
	ctx.r24.u64 = ctx.r24.u64 + ctx.r11.u64;
	// subf r28,r10,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r10.u64;
	// subf r27,r10,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r26,r26,r30
	ctx.r26.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r23,r23,r20
	ctx.r23.u64 = ctx.r23.u64 + ctx.r20.u64;
	// subf r3,r9,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r9.u64;
	// subf r20,r15,r19
	ctx.r20.u64 = ctx.r19.u64 - ctx.r15.u64;
	// add r19,r24,r5
	ctx.r19.u64 = ctx.r24.u64 + ctx.r5.u64;
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// subf r24,r9,r27
	ctx.r24.u64 = ctx.r27.u64 - ctx.r9.u64;
	// add r26,r26,r11
	ctx.r26.u64 = ctx.r26.u64 + ctx.r11.u64;
	// srawi r28,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r23.s32 >> 1;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// srawi r27,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r20.s32 >> 1;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r26,r26,r5
	ctx.r26.u64 = ctx.r26.u64 + ctx.r5.u64;
	// add r23,r17,r5
	ctx.r23.u64 = ctx.r17.u64 + ctx.r5.u64;
	// add r24,r24,r5
	ctx.r24.u64 = ctx.r24.u64 + ctx.r5.u64;
	// mullw r5,r27,r4
	ctx.r5.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r4.s32);
	// mullw r30,r28,r4
	ctx.r30.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r4.s32);
	// mullw r21,r21,r4
	ctx.r21.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r4.s32);
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// mullw r4,r31,r29
	ctx.r4.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32);
	// subf r31,r9,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r9.u64;
	// add r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 + ctx.r4.u64;
	// mullw r7,r3,r18
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r18.s32);
	// subf r4,r10,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r10.u64;
	// srawi r5,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r31.s32 >> 1;
	// mullw r27,r23,r29
	ctx.r27.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r29.s32);
	// mullw r28,r26,r29
	ctx.r28.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// mullw r7,r5,r25
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r25.s32);
	// mullw r26,r19,r8
	ctx.r26.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r8.s32);
	// add r27,r21,r27
	ctx.r27.u64 = ctx.r21.u64 + ctx.r27.u64;
	// add r31,r30,r28
	ctx.r31.u64 = ctx.r30.u64 + ctx.r28.u64;
	// mullw r30,r24,r8
	ctx.r30.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r8.s32);
	// add r10,r27,r26
	ctx.r10.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mullw r3,r10,r18
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r18.s32);
	// add r7,r31,r30
	ctx.r7.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r22,r3
	ctx.r5.u64 = ctx.r22.u64 + ctx.r3.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r4,r7,r25
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x881d5900
	if (!ctx.cr6.gt) goto loc_881D5900;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x881d590c
	goto loc_881D590C;
loc_881D5900:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_881D590C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,-328(r1)
	ctx.current_instruction = 0x881D5910;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// lwz r29,-320(r1)
	ctx.current_instruction = 0x881D5914;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// li r28,128
	ctx.r28.s64 = 128;
	// lwz r27,-268(r1)
	ctx.current_instruction = 0x881D591C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r5,-252(r1)
	ctx.current_instruction = 0x881D5920;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// lwz r30,-256(r1)
	ctx.current_instruction = 0x881D5924;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r9,-340(r1)
	ctx.current_instruction = 0x881D5928;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// lwz r3,20(r1)
	ctx.current_instruction = 0x881D592C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// stb r10,4(r11)
	ctx.current_instruction = 0x881D5930;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x881d5b38
	goto loc_881D5B38;
loc_881D5938:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_881D593C:
	// blt cr6,0x881d5a60
	if (ctx.cr6.lt) goto loc_881D5A60;
	// lwz r8,80(r3)
	ctx.current_instruction = 0x881D5940;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x881d5a60
	if (!ctx.cr6.lt) goto loc_881D5A60;
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,-308(r1)
	ctx.current_instruction = 0x881D595C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r31,r7
	ctx.r31.s64 = ctx.r7.s32;
	// mullw r4,r8,r6
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// std r31,-192(r1)
	ctx.current_instruction = 0x881D596C;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r31.u64);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r6,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lis r6,-30678
	ctx.r6.s64 = -2010513408;
	// lbzx r4,r4,r10
	ctx.current_instruction = 0x881D598C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lfd f13,-192(r1)
	ctx.current_instruction = 0x881D5990;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// lbzx r31,r31,r10
	ctx.current_instruction = 0x881D5994;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbz r26,4(r10)
	ctx.current_instruction = 0x881D599C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r10,r4,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r4.u64;
	// stw r7,8228(r6)
	ctx.current_instruction = 0x881D59A4;
	REX_STORE_U32(ctx.r6.u32 + 8228, ctx.r7.u32);
	// lbzx r7,r8,r5
	ctx.current_instruction = 0x881D59A8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// mullw r6,r4,r25
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// fmsub f2,f0,f11,f12
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// subf r10,r26,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r26.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-336(r1)
	ctx.current_instruction = 0x881D59C4;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f1.u64);
	// lwz r10,-332(r1)
	ctx.current_instruction = 0x881D59C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// subfic r31,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r31.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// mullw r4,r4,r25
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// subf r24,r25,r31
	ctx.r24.u64 = ctx.r31.u64 - ctx.r25.u64;
	// srawi r31,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r4.s32 >> 8;
	// mullw r7,r24,r7
	ctx.r7.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r26,r10
	ctx.r4.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r10.s32);
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// stb r6,4(r9)
	ctx.current_instruction = 0x881D5A00;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r6.u8);
	// lbz r26,4(r8)
	ctx.current_instruction = 0x881D5A04;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// lbz r7,0(r8)
	ctx.current_instruction = 0x881D5A08;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lwz r6,80(r3)
	ctx.current_instruction = 0x881D5A0C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r4,r6,2
	ctx.r4.s64 = ctx.r6.s64 + 2;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r4,r24,r7
	ctx.r4.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r7.s32);
	// lbzx r6,r6,r8
	ctx.current_instruction = 0x881D5A20;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// lbzx r8,r31,r8
	ctx.current_instruction = 0x881D5A24;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r31,r26,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r26.u64;
	// mullw r8,r26,r10
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r10.s32);
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// mullw r6,r6,r25
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r25.s32);
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r10,r25
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// srawi r10,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stb r4,4(r11)
	ctx.current_instruction = 0x881D5A58;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// b 0x881d5b30
	goto loc_881D5B30;
loc_881D5A60:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d5b28
	if (!ctx.cr6.gt) goto loc_881D5B28;
	// lwz r7,80(r3)
	ctx.current_instruction = 0x881D5A68;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r8,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 1;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x881d5b28
	if (!ctx.cr6.lt) goto loc_881D5B28;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,-308(r1)
	ctx.current_instruction = 0x881D5A80;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r31,r8
	ctx.r31.s64 = ctx.r8.s32;
	// mullw r4,r7,r6
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// std r31,-168(r1)
	ctx.current_instruction = 0x881D5A90;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r31.u64);
	// lis r6,-30678
	ctx.r6.s64 = -2010513408;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,8228(r6)
	ctx.current_instruction = 0x881D5AA0;
	REX_STORE_U32(ctx.r6.u32 + 8228, ctx.r8.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lfd f13,-168(r1)
	ctx.current_instruction = 0x881D5AAC;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbzx r7,r7,r10
	ctx.current_instruction = 0x881D5AB4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// fmsub f2,f0,f11,f12
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-336(r1)
	ctx.current_instruction = 0x881D5AC0;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f1.u64);
	// lwz r6,-332(r1)
	ctx.current_instruction = 0x881D5AC4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// lbzx r4,r8,r5
	ctx.current_instruction = 0x881D5AD0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// mullw r6,r7,r25
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// subfic r31,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r31.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// subf r7,r25,r31
	ctx.r7.u64 = ctx.r31.u64 - ctx.r25.u64;
	// add r31,r7,r10
	ctx.r31.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r10,r31,r4
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r4.s32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stb r4,4(r9)
	ctx.current_instruction = 0x881D5AF8;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r4.u8);
	// lbz r6,0(r8)
	ctx.current_instruction = 0x881D5AFC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lwz r4,80(r3)
	ctx.current_instruction = 0x881D5B00;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r10,r8
	ctx.current_instruction = 0x881D5B08;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// mullw r8,r7,r6
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// mullw r10,r4,r25
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r8,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 8;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stb r7,4(r11)
	ctx.current_instruction = 0x881D5B20;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// b 0x881d5b30
	goto loc_881D5B30;
loc_881D5B28:
	// stb r28,4(r9)
	ctx.current_instruction = 0x881D5B28;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r28.u8);
	// stb r28,4(r11)
	ctx.current_instruction = 0x881D5B2C;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r28.u8);
loc_881D5B30:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r9,-340(r1)
	ctx.current_instruction = 0x881D5B34;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r9.u32);
loc_881D5B38:
	// lwz r10,88(r3)
	ctx.current_instruction = 0x881D5B38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r29,-320(r1)
	ctx.current_instruction = 0x881D5B44;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r29.u32);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// stw r11,-328(r1)
	ctx.current_instruction = 0x881D5B4C;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r11.u32);
	// blt cr6,0x881d4edc
	if (ctx.cr6.lt) goto loc_881D4EDC;
	// b 0x881d5f40
	goto loc_881D5F40;
loc_881D5B58:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_881D5B5C:
	// blt cr6,0x881d5da8
	if (ctx.cr6.lt) goto loc_881D5DA8;
	// lwz r8,84(r3)
	ctx.current_instruction = 0x881D5B60;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x881d5da8
	if (!ctx.cr6.lt) goto loc_881D5DA8;
	// lwz r10,88(r3)
	ctx.current_instruction = 0x881D5B70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d5f40
	if (!ctx.cr6.gt) goto loc_881D5F40;
loc_881D5B80:
	// fadd f0,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fmul f13,f0,f7
	ctx.f13.f64 = ctx.f0.f64 * ctx.f7.f64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-336(r1)
	ctx.current_instruction = 0x881D5B8C;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f12.u64);
	// lwz r10,-332(r1)
	ctx.current_instruction = 0x881D5B90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x881d5d84
	if (ctx.cr6.lt) goto loc_881D5D84;
	// lwz r8,80(r3)
	ctx.current_instruction = 0x881D5B9C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x881d5cbc
	if (!ctx.cr6.lt) goto loc_881D5CBC;
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,-308(r1)
	ctx.current_instruction = 0x881D5BB8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r31,r7
	ctx.r31.s64 = ctx.r7.s32;
	// mullw r4,r8,r6
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// std r31,-176(r1)
	ctx.current_instruction = 0x881D5BC8;
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r31.u64);
	// lis r6,-30678
	ctx.r6.s64 = -2010513408;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,8228(r6)
	ctx.current_instruction = 0x881D5BE0;
	REX_STORE_U32(ctx.r6.u32 + 8228, ctx.r7.u32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r7,r5
	ctx.r10.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbzx r8,r7,r5
	ctx.current_instruction = 0x881D5BEC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// lfd f13,-176(r1)
	ctx.current_instruction = 0x881D5BF0;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbzx r6,r4,r10
	ctx.current_instruction = 0x881D5BF8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r31,r31,r10
	ctx.current_instruction = 0x881D5BFC;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbz r26,4(r10)
	ctx.current_instruction = 0x881D5C00;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r4,r31,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r31.u64;
	// subf r6,r26,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r26.u64;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// fmsub f2,f0,f11,f12
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-336(r1)
	ctx.current_instruction = 0x881D5C18;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f1.u64);
	// lwz r4,-332(r1)
	ctx.current_instruction = 0x881D5C1C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subfic r4,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r4.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// subf r24,r25,r4
	ctx.r24.u64 = ctx.r4.u64 - ctx.r25.u64;
	// mullw r4,r6,r25
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r25.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// mullw r8,r24,r8
	ctx.r8.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r8.s32);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// mullw r6,r26,r10
	ctx.r6.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r10.s32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r4,r31,r25
	ctx.r4.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r25.s32);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 + ctx.r30.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stb r4,4(r9)
	ctx.current_instruction = 0x881D5C5C;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r4.u8);
	// lbzx r7,r7,r30
	ctx.current_instruction = 0x881D5C60;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// lbz r31,4(r8)
	ctx.current_instruction = 0x881D5C64;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// lwz r6,80(r3)
	ctx.current_instruction = 0x881D5C68;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r4,r6,2
	ctx.r4.s64 = ctx.r6.s64 + 2;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r4,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r4,r31,r10
	ctx.r4.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// lbzx r23,r6,r8
	ctx.current_instruction = 0x881D5C7C;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// lbzx r8,r26,r8
	ctx.current_instruction = 0x881D5C80;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r8.u32);
	// subf r6,r23,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r23.u64;
	// subf r31,r31,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r31.u64;
	// mullw r6,r24,r7
	ctx.r6.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r7.s32);
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// mullw r8,r23,r25
	ctx.r8.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r25.s32);
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r10,r25
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// srawi r10,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 8;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stb r4,4(r11)
	ctx.current_instruction = 0x881D5CB4;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// b 0x881d5d8c
	goto loc_881D5D8C;
loc_881D5CBC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d5d84
	if (!ctx.cr6.gt) goto loc_881D5D84;
	// lwz r7,80(r3)
	ctx.current_instruction = 0x881D5CC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r8,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 1;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x881d5d84
	if (!ctx.cr6.lt) goto loc_881D5D84;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,-308(r1)
	ctx.current_instruction = 0x881D5CDC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r31,r8
	ctx.r31.s64 = ctx.r8.s32;
	// mullw r4,r7,r6
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// std r31,-184(r1)
	ctx.current_instruction = 0x881D5CEC;
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r31.u64);
	// lis r6,-30678
	ctx.r6.s64 = -2010513408;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,8228(r6)
	ctx.current_instruction = 0x881D5CFC;
	REX_STORE_U32(ctx.r6.u32 + 8228, ctx.r8.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lfd f13,-184(r1)
	ctx.current_instruction = 0x881D5D08;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbzx r7,r7,r10
	ctx.current_instruction = 0x881D5D10;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// fmsub f2,f0,f11,f12
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-336(r1)
	ctx.current_instruction = 0x881D5D1C;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f1.u64);
	// lwz r6,-332(r1)
	ctx.current_instruction = 0x881D5D20;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// mullw r6,r7,r25
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// lbzx r4,r8,r5
	ctx.current_instruction = 0x881D5D30;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// subfic r31,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r31.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// subf r7,r25,r31
	ctx.r7.u64 = ctx.r31.u64 - ctx.r25.u64;
	// add r31,r7,r10
	ctx.r31.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r10,r31,r4
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r4.s32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stb r4,4(r9)
	ctx.current_instruction = 0x881D5D54;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r4.u8);
	// lwz r6,80(r3)
	ctx.current_instruction = 0x881D5D58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r10,r4,r8
	ctx.current_instruction = 0x881D5D60;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// mullw r10,r10,r25
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// lbz r8,0(r8)
	ctx.current_instruction = 0x881D5D68;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// stb r4,4(r11)
	ctx.current_instruction = 0x881D5D7C;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// b 0x881d5d8c
	goto loc_881D5D8C;
loc_881D5D84:
	// stb r28,4(r9)
	ctx.current_instruction = 0x881D5D84;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r28.u8);
	// stb r28,4(r11)
	ctx.current_instruction = 0x881D5D88;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r28.u8);
loc_881D5D8C:
	// lwz r10,88(r3)
	ctx.current_instruction = 0x881D5D8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881d5b80
	if (ctx.cr6.lt) goto loc_881D5B80;
	// b 0x881d5f38
	goto loc_881D5F38;
loc_881D5DA8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d5f10
	if (!ctx.cr6.gt) goto loc_881D5F10;
	// lwz r8,84(r3)
	ctx.current_instruction = 0x881D5DB0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x881d5f10
	if (!ctx.cr6.lt) goto loc_881D5F10;
	// lwz r10,88(r3)
	ctx.current_instruction = 0x881D5DBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d5f40
	if (!ctx.cr6.gt) goto loc_881D5F40;
loc_881D5DCC:
	// fadd f0,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fmul f13,f0,f7
	ctx.f13.f64 = ctx.f0.f64 * ctx.f7.f64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-336(r1)
	ctx.current_instruction = 0x881D5DD8;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f12.u64);
	// lwz r10,-332(r1)
	ctx.current_instruction = 0x881D5DDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x881d5eec
	if (ctx.cr6.lt) goto loc_881D5EEC;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x881D5DE8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r8,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881d5e9c
	if (!ctx.cr6.lt) goto loc_881D5E9C;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r7,-308(r1)
	ctx.current_instruction = 0x881D5E04;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r31,r8
	ctx.r31.s64 = ctx.r8.s32;
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// std r31,-208(r1)
	ctx.current_instruction = 0x881D5E14;
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r31.u64);
	// lis r7,-30678
	ctx.r7.s64 = -2010513408;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stw r8,8228(r7)
	ctx.current_instruction = 0x881D5E20;
	REX_STORE_U32(ctx.r7.u32 + 8228, ctx.r8.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbzx r31,r8,r5
	ctx.current_instruction = 0x881D5E2C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lfd f13,-208(r1)
	ctx.current_instruction = 0x881D5E34;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbz r7,4(r10)
	ctx.current_instruction = 0x881D5E3C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// fmsub f2,f0,f11,f12
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-336(r1)
	ctx.current_instruction = 0x881D5E48;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f1.u64);
	// lwz r6,-332(r1)
	ctx.current_instruction = 0x881D5E4C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subfic r29,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r29.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// subf r7,r25,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r25.u64;
	// add r29,r7,r25
	ctx.r29.u64 = ctx.r7.u64 + ctx.r25.u64;
	// add r26,r7,r25
	ctx.r26.u64 = ctx.r7.u64 + ctx.r25.u64;
	// mullw r7,r29,r31
	ctx.r7.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r31.s32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// stb r6,4(r9)
	ctx.current_instruction = 0x881D5E78;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r6.u8);
	// lbz r6,0(r8)
	ctx.current_instruction = 0x881D5E7C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r8,4(r8)
	ctx.current_instruction = 0x881D5E80;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// mullw r8,r26,r6
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r6.s32);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// stb r6,4(r11)
	ctx.current_instruction = 0x881D5E94;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// b 0x881d5ef4
	goto loc_881D5EF4;
loc_881D5E9C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d5eec
	if (!ctx.cr6.gt) goto loc_881D5EEC;
	// lwz r7,80(r3)
	ctx.current_instruction = 0x881D5EA4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r8,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 1;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x881d5eec
	if (!ctx.cr6.lt) goto loc_881D5EEC;
	// lwz r8,-308(r1)
	ctx.current_instruction = 0x881D5EB8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,8228(r8)
	ctx.current_instruction = 0x881D5ED4;
	REX_STORE_U32(ctx.r8.u32 + 8228, ctx.r10.u32);
	// lbzx r10,r6,r5
	ctx.current_instruction = 0x881D5ED8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// stb r10,4(r9)
	ctx.current_instruction = 0x881D5EDC;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r10.u8);
	// lbzx r8,r6,r30
	ctx.current_instruction = 0x881D5EE0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r30.u32);
	// stb r8,4(r11)
	ctx.current_instruction = 0x881D5EE4;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// b 0x881d5ef4
	goto loc_881D5EF4;
loc_881D5EEC:
	// stb r28,4(r9)
	ctx.current_instruction = 0x881D5EEC;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r28.u8);
	// stb r28,4(r11)
	ctx.current_instruction = 0x881D5EF0;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r28.u8);
loc_881D5EF4:
	// lwz r10,88(r3)
	ctx.current_instruction = 0x881D5EF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881d5dcc
	if (ctx.cr6.lt) goto loc_881D5DCC;
	// b 0x881d5f38
	goto loc_881D5F38;
loc_881D5F10:
	// lwz r8,88(r3)
	ctx.current_instruction = 0x881D5F10;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x881d5f40
	if (!ctx.cr6.gt) goto loc_881D5F40;
loc_881D5F20:
	// stbu r28,4(r9)
	ctx.current_instruction = 0x881D5F20;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r28.u8);
	ctx.r9.u32 = ea;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stbu r28,4(r11)
	ctx.current_instruction = 0x881D5F28;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r28.u8);
	ctx.r11.u32 = ea;
	// lwz r8,88(r3)
	ctx.current_instruction = 0x881D5F2C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x881d5f20
	if (ctx.cr6.lt) goto loc_881D5F20;
loc_881D5F38:
	// stw r11,-328(r1)
	ctx.current_instruction = 0x881D5F38;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r11.u32);
	// stw r9,-340(r1)
	ctx.current_instruction = 0x881D5F3C;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r9.u32);
loc_881D5F40:
	// lwz r10,92(r3)
	ctx.current_instruction = 0x881D5F40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r27,-268(r1)
	ctx.current_instruction = 0x881D5F48;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r27.u32);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881d4e28
	if (ctx.cr6.lt) goto loc_881D4E28;
loc_881D5F54:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88219500) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88219500);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88219500;
	ctx.current_instruction = 0x88219500;
	uint32_t ea{};
	// vspltish v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x8)));
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// vspltish v12,-1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v31,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x882195b8
	if (!ctx.cr6.eq) goto loc_882195B8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x882196a0
	if (!ctx.cr6.gt) goto loc_882196A0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
loc_88219548:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v9,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v12,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v10,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v4,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsubshs v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v30,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v12,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v24,v28,v12
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v21,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vsubshs v20,v7,v23
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vadduhm v19,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v18,v3,v20
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v17,v19,v2
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v16,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsrah v15,v16,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v15,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v8,v8,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x88219548
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88219548;
	// b 0x882196a0
	goto loc_882196A0;
loc_882195B8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x882196a0
	if (!ctx.cr6.gt) goto loc_882196A0;
	// li r8,-16
	ctx.r8.s64 = -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,16
	ctx.r9.s64 = 16;
loc_882195D4:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v10,v12,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vsldoi128 v9,v0,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// vsldoi v4,v12,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vsubshs v29,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi128 v3,v0,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// vsubshs v28,v12,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vslh v27,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v26,v12,v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vslh v25,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v24,v0,v62,6
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 10));
	// vslh v23,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v25,v27
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v16,v23,v10
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v19,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v0,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v12,v20,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v14,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v9,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v4,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vslh v10,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v3,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vsubshs v26,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vadduhm v25,v4,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubshs v24,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v23,v27,v30
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v22,v28,v26
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v21,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v20,v29,v24
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v19,v23,v2
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v17,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsrah v16,v18,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v17,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v61,v8,v16
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// stvx128 v16,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// vor128 v8,v61,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// bdnz 0x882195d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882195D4;
loc_882196A0:
	// vand v0,v8,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
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

DEFINE_REX_FUNC(sub_8821D240) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821D240;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821D240) {
			switch (rex_dispatch_address) {
				case 0x8821D248:
				case 0x8821D488:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821D240;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821D248: goto loc_8821D248;
		case 0x8821D488: goto loc_8821D488;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8821D248;
	__savegprlr_27(ctx, base);
loc_8821D248:
	// stwu r1,-896(r1)
	ctx.current_instruction = 0x8821D248;
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lvx128 v62,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lvx128 v61,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vperm128 v6,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v60,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// lvx128 v59,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// lvx128 v58,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,176
	ctx.r29.s64 = ctx.r1.s64 + 176;
	// lvx128 v57,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v56,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,224
	ctx.r28.s64 = ctx.r1.s64 + 224;
	// lvsl v5,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r8,r5,r3
	ctx.r8.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lvsl v4,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lvsl v3,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v62,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v1,v57,v58,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v55,r5,r3
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v60,v56,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vslh v30,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v54,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v5,v30,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vperm128 v6,v55,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v4,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vadduhm v30,v3,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v29,v2,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// stvx128 v1,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v27,v30,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v26,v29,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v28,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v27,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x8821d3f8
	if (!ctx.cr6.eq) goto loc_8821D3F8;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvx128 v53,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vslh v12,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvx128 v52,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v9,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// lvx128 v51,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// lvx128 v50,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,320
	ctx.r30.s64 = ctx.r1.s64 + 320;
	// lvx128 v49,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,368
	ctx.r29.s64 = ctx.r1.s64 + 368;
	// lvx128 v48,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,416
	ctx.r28.s64 = ctx.r1.s64 + 416;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v3,v52,v49,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v50,v48,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v46,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v1,r0,r7
	temp.u32 = ctx.r7.u32;
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
	// stvx128 v26,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
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
	// b 0x8821d3fc
	goto loc_8821D3FC;
loc_8821D3F8:
	// blt cr6,0x8821d474
	if (ctx.cr6.lt) goto loc_8821D474;
loc_8821D3FC:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8821d474
	if (!ctx.cr6.gt) goto loc_8821D474;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// subf r28,r9,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r11,r31,-48
	ctx.r11.s64 = ctx.r31.s64 + -48;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_8821D430:
	// lbzux r8,r7,r9
	ctx.current_instruction = 0x8821D430;
	ea = ctx.r7.u32 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// lbzx r5,r28,r10
	ctx.current_instruction = 0x8821D434;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// rotlwi r31,r8,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbz r3,0(r10)
	ctx.current_instruction = 0x8821D43C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r30,r5,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r8,r5,r30
	ctx.r8.u64 = ctx.r5.u64 + ctx.r30.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r31,r5
	ctx.r8.u64 = ctx.r31.u64 + ctx.r5.u64;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r3,48(r11)
	ctx.current_instruction = 0x8821D468;
	REX_STORE_U16(ctx.r11.u32 + 48, ctx.r3.u16);
	// sthu r5,96(r11)
	ctx.current_instruction = 0x8821D46C;
	ea = 96 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8821d430
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821D430;
loc_8821D474:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r27,r11
	ea = (ctx.r27.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8821bd90
	ctx.lr = 0x8821D488;
	sub_8821BD90(ctx, base);
loc_8821D488:
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88221E10) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88221E10;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88221E10) {
			switch (rex_dispatch_address) {
				case 0x88221E18:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88221E10;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88221E18: goto loc_88221E18;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88221E18;
	__savegprlr_29(ctx, base);
loc_88221E18:
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// add r31,r9,r5
	ctx.r31.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r30,r4,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r4,r11
	ctx.r29.u64 = ctx.r4.u64 + ctx.r11.u64;
	// vsrah v11,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bgt cr6,0x88221f88
	if (ctx.cr6.gt) goto loc_88221F88;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x882220b8
	if (!ctx.cr6.gt) goto loc_882220B8;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88221E68:
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lvlx128 v63,r4,r3
	temp.u32 = ctx.r4.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r30,r3
	temp.u32 = ctx.r30.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lvlx128 v61,r29,r3
	temp.u32 = ctx.r29.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v58,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v57,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v63,v58
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvrx128 v56,r29,r11
	temp.u32 = ctx.r29.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v62,v57
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// lvrx128 v55,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v61,v56
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// lvrx128 v54,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v7,v60,v55
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vor128 v6,v59,v54
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v3,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v2,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v1,v5,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v31,v8,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vslh v30,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v30,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v25,v29,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v24,v28,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v23,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v22,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v63,v20,v22
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vpkshus128 v62,v21,v19
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// bne cr6,0x88221f54
	if (!ctx.cr6.eq) goto loc_88221F54;
	// vspltw128 v53,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// vspltw128 v52,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v51,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v50,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vspltw128 v49,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v48,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// vspltw128 v47,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v46,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// stvewx128 v53,r0,r5
	ctx.current_instruction = 0x88221F30;
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r5,r8
	ctx.current_instruction = 0x88221F34;
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v51,r5,r6
	ctx.current_instruction = 0x88221F38;
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r11,r5
	ctx.current_instruction = 0x88221F3C;
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r0,r31
	ctx.current_instruction = 0x88221F40;
	ea = (ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r31,r8
	ctx.current_instruction = 0x88221F44;
	ea = (ctx.r31.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v47,r31,r6
	ctx.current_instruction = 0x88221F48;
	ea = (ctx.r31.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v46,r11,r31
	ctx.current_instruction = 0x88221F4C;
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x88221f74
	goto loc_88221F74;
loc_88221F54:
	// vspltw128 v45,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v44,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v43,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v42,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// stvewx128 v45,r0,r5
	ctx.current_instruction = 0x88221F64;
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r5,r6
	ctx.current_instruction = 0x88221F68;
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r0,r31
	ctx.current_instruction = 0x88221F6C;
	ea = (ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r31,r6
	ctx.current_instruction = 0x88221F70;
	ea = (ctx.r31.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
loc_88221F74:
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bdnz 0x88221e68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88221E68;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88221F88:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x882220b8
	if (!ctx.cr6.gt) goto loc_882220B8;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88221FA0:
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lvlx128 v41,r4,r3
	temp.u32 = ctx.r4.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v40,r30,r3
	temp.u32 = ctx.r30.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v39,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v38,r29,r3
	temp.u32 = ctx.r29.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v37,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvrx128 v36,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v35,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v41,v36
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// lvrx128 v34,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v40,v35
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// lvrx128 v33,r29,r11
	temp.u32 = ctx.r29.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v39,v34
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// lvrx128 v32,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v7,v38,v33
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vor128 v6,v37,v32
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// vmrghb v5,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// vmrglb v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v1,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v29,v2,v5
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrglb v30,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v31,v3,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v27,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v26,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v25,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v24,v7,v30
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v23,v8,v28
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vslh v22,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v14,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v10,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v9,v20,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v8,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v7,v18,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v6,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v5,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v4,v15,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v3,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v1,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v63,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsrah v28,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v1,v31
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vpkshus128 v61,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vpkshus128 v60,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stvx128 v60,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x88221fa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88221FA0;
loc_882220B8:
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88229718) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88229718;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88229718) {
			switch (rex_dispatch_address) {
				case 0x88229720:
				case 0x88229798:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88229718;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88229720: goto loc_88229720;
		case 0x88229798: goto loc_88229798;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88229720;
	__savegprlr_25(ctx, base);
loc_88229720:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x88229720;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1156(r7)
	ctx.current_instruction = 0x88229724;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1156);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r25,r1,128
	ctx.r25.s64 = ctx.r1.s64 + 128;
	// lwz r8,1148(r7)
	ctx.current_instruction = 0x88229730;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 1148);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// vspltish v0,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x7)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r31,1164(r7)
	ctx.current_instruction = 0x88229740;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// lwz r28,308(r1)
	ctx.current_instruction = 0x88229748;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,128(r1)
	ctx.current_instruction = 0x8822974C;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
	// stw r8,144(r1)
	ctx.current_instruction = 0x88229758;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vspltish v1,3
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x3)));
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v12,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// vsplth v2,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vsplth v11,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stvx128 v0,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// stvx128 v11,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x88218f60
	ctx.lr = 0x88229798;
	sub_88218F60(ctx, base);
loc_88229798:
	// cntlzw r5,r28
	ctx.r5.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// and r9,r3,r27
	ctx.r9.u64 = ctx.r3.u64 & ctx.r27.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// vslh v2,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x88229884
	if (!ctx.cr6.eq) goto loc_88229884;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8822997c
	if (!ctx.cr6.gt) goto loc_8822997C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_882297F8:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v9,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vsldoi128 v12,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v4,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsubshs v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v1,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v31,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v30,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v12,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v29,v31
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v24,v28,v12
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v21,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vsubshs v20,v7,v23
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vadduhm v19,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v18,v3,v20
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v17,v19,v1
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v16,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsrah v15,v16,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vor v8,v8,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// stvewx128 v62,r0,r11
	ctx.current_instruction = 0x88229870;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ctx.current_instruction = 0x88229874;
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bdnz 0x882297f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882297F8;
	// b 0x8822997c
	goto loc_8822997C;
loc_88229884:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8822997c
	if (!ctx.cr6.gt) goto loc_8822997C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_8822989C:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v12,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v10,v12,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vsldoi128 v9,v0,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsubshs v31,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v12,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vsldoi128 v3,v0,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsubshs v30,v12,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v28,v12,v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vslh v27,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v26,v0,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vslh v25,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v25,v29
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v18,v24,v10
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v21,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v23,v27
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v14,v22,v9
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v17,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v9,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vslh v12,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v10,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v1,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vsubshs v29,v7,v12
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubshs v28,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vadduhm v27,v4,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v26,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v25,v30,v29
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v24,v31,v28
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v23,v27,v0
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v22,v26,v0
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v21,v23,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v20,v22,v24
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsrah v19,v21,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v20,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v8,v19
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8)));
	// vpkshus128 v59,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vor128 v8,v60,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bdnz 0x8822989c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822989C;
loc_8822997C:
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

