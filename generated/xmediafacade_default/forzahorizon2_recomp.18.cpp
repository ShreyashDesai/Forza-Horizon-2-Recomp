#include "forzahorizon2_funcs.18.h"

DEFINE_REX_FUNC(sub_880501A8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880501A8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880501A8;
	ctx.current_instruction = 0x880501A8;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,84(r11)
	ctx.current_instruction = 0x880501B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__savegprlr_27) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050844);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050844;
	ctx.current_instruction = 0x88050844;
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

DEFINE_REX_FUNC(sub_88050D80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88050D80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88050D80) {
			switch (rex_dispatch_address) {
				case 0x88050D88:
				case 0x88050DA4:
				case 0x88050DD0:
				case 0x88050E58:
				case 0x88050EA8:
				case 0x88050EBC:
				case 0x88050EC8:
				case 0x88050EDC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050D80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88050D88: goto loc_88050D88;
		case 0x88050DA4: goto loc_88050DA4;
		case 0x88050DD0: goto loc_88050DD0;
		case 0x88050E58: goto loc_88050E58;
		case 0x88050EA8: goto loc_88050EA8;
		case 0x88050EBC: goto loc_88050EBC;
		case 0x88050EC8: goto loc_88050EC8;
		case 0x88050EDC: goto loc_88050EDC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x88050D88;
	__savegprlr_24(ctx, base);
loc_88050D88:
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x88050D8C;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r4,204(r31)
	ctx.current_instruction = 0x88050D98;
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x88052218
	ctx.lr = 0x88050DA4;
	sub_88052218(ctx, base);
loc_88050DA4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,17920(r11)
	ctx.current_instruction = 0x88050DAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 17920);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x88050ebc
	if (ctx.cr6.eq) goto loc_88050EBC;
	// lis r9,-30680
	ctx.r9.s64 = -2010644480;
	// lwz r11,17916(r9)
	ctx.current_instruction = 0x88050DBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 17916);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88050dd0
	if (!ctx.cr6.eq) goto loc_88050DD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x88243650
	ctx.lr = 0x88050DD0;
	__imp__KeBugCheck(ctx, base);
loc_88050DD0:
	// lis r8,-30680
	ctx.r8.s64 = -2010644480;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,17916(r9)
	ctx.current_instruction = 0x88050DD8;
	REX_STORE_U32(ctx.r9.u32 + 17916, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r24,17912(r8)
	ctx.current_instruction = 0x88050DE0;
	REX_STORE_U8(ctx.r8.u32 + 17912, ctx.r24.u8);
	// bne cr6,0x88050ea8
	if (!ctx.cr6.eq) goto loc_88050EA8;
	// lis r25,-30678
	ctx.r25.s64 = -2010513408;
	// lwz r28,24336(r25)
	ctx.current_instruction = 0x88050DEC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r25.u32 + 24336);
	// stw r28,88(r31)
	ctx.current_instruction = 0x88050DF0;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x88050e94
	if (ctx.cr0.eq) goto loc_88050E94;
	// lis r27,-30678
	ctx.r27.s64 = -2010513408;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r28,84(r31)
	ctx.current_instruction = 0x88050E04;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// lwz r30,24332(r27)
	ctx.current_instruction = 0x88050E08;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 24332);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// stw r30,80(r31)
	ctx.current_instruction = 0x88050E10;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,92(r31)
	ctx.current_instruction = 0x88050E14;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
loc_88050E18:
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// stw r30,80(r31)
	ctx.current_instruction = 0x88050E1C;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x88050e94
	if (ctx.cr6.lt) goto loc_88050E94;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88050E28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88050e3c
	if (!ctx.cr6.eq) goto loc_88050E3C;
loc_88050E34:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x88050e18
	goto loc_88050E18;
loc_88050E3C:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x88050e94
	if (ctx.cr6.lt) goto loc_88050E94;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r30)
	ctx.current_instruction = 0x88050E48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r30)
	ctx.current_instruction = 0x88050E4C;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88050E58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88050E58:
	// lwz r11,24336(r25)
	ctx.current_instruction = 0x88050E58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 24336);
	// lwz r10,24332(r27)
	ctx.current_instruction = 0x88050E5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 24332);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x88050e70
	if (!ctx.cr6.eq) goto loc_88050E70;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x88050e34
	if (ctx.cr6.eq) goto loc_88050E34;
loc_88050E70:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r11,84(r31)
	ctx.current_instruction = 0x88050E7C;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r11,88(r31)
	ctx.current_instruction = 0x88050E84;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r10,92(r31)
	ctx.current_instruction = 0x88050E88;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// stw r10,80(r31)
	ctx.current_instruction = 0x88050E8C;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x88050e34
	goto loc_88050E34;
loc_88050E94:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// addi r3,r10,44
	ctx.r3.s64 = ctx.r10.s64 + 44;
	// bl 0x88050d20
	ctx.lr = 0x88050EA8;
	sub_88050D20(ctx, base);
loc_88050EA8:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// addi r3,r10,60
	ctx.r3.s64 = ctx.r10.s64 + 60;
	// bl 0x88050d20
	ctx.lr = 0x88050EBC;
	sub_88050D20(ctx, base);
loc_88050EBC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x88050f04
	ctx.lr = 0x88050EC8;
	sub_88050F04(ctx, base);
loc_88050EC8:
	// lwz r11,204(r31)
	ctx.current_instruction = 0x88050EC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88050edc
	if (!ctx.cr6.eq) goto loc_88050EDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x88243650
	ctx.lr = 0x88050EDC;
	__imp__KeBugCheck(ctx, base);
loc_88050EDC:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88058628) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88058628;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88058628) {
			switch (rex_dispatch_address) {
				case 0x8805867C:
				case 0x880586AC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88058628;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805867C: goto loc_8805867C;
		case 0x880586AC: goto loc_880586AC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805862C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88058630;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88058634;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88058638;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r11,96(r1)
	ctx.current_instruction = 0x88058650;
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// std r11,0(r8)
	ctx.current_instruction = 0x88058654;
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// stw r11,8(r8)
	ctx.current_instruction = 0x88058658;
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88058660:
	// sthu r11,2(r10)
	ctx.current_instruction = 0x88058660;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x88058660
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88058660;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88058668;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.current_instruction = 0x88058670;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805867C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805867C:
	// lwz r9,84(r1)
	ctx.current_instruction = 0x8805867C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r9,660(r31)
	ctx.current_instruction = 0x88058688;
	REX_STORE_U32(ctx.r31.u32 + 660, ctx.r9.u32);
	// blt cr6,0x88058698
	if (ctx.cr6.lt) goto loc_88058698;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
loc_88058698:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88058698;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.current_instruction = 0x880586A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880586AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880586AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880586B4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880586BC;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880586C0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805A2B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805A2B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805A2B8) {
			switch (rex_dispatch_address) {
				case 0x8805A2FC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805A2B8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805A2FC: goto loc_8805A2FC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805A2BC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8805A2C0;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.current_instruction = 0x8805A2C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r9)
	ctx.current_instruction = 0x8805A2D8;
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r11,8(r9)
	ctx.current_instruction = 0x8805A2DC;
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r11,16(r9)
	ctx.current_instruction = 0x8805A2E0;
	REX_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// stw r11,24(r9)
	ctx.current_instruction = 0x8805A2E4;
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// stw r10,80(r1)
	ctx.current_instruction = 0x8805A2E8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r5,84(r1)
	ctx.current_instruction = 0x8805A2EC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r7,44(r8)
	ctx.current_instruction = 0x8805A2F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8805A2FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805A2FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805A300;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805B658) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805B658;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805B658) {
			switch (rex_dispatch_address) {
				case 0x8805B660:
				case 0x8805B68C:
				case 0x8805B6B4:
				case 0x8805B6DC:
				case 0x8805B6F0:
				case 0x8805B6F8:
				case 0x8805B700:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805B658;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805B660: goto loc_8805B660;
		case 0x8805B68C: goto loc_8805B68C;
		case 0x8805B6B4: goto loc_8805B6B4;
		case 0x8805B6DC: goto loc_8805B6DC;
		case 0x8805B6F0: goto loc_8805B6F0;
		case 0x8805B6F8: goto loc_8805B6F8;
		case 0x8805B700: goto loc_8805B700;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8805B660;
	__savegprlr_29(ctx, base);
loc_8805B660:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8805B660;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.current_instruction = 0x8805B668;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// beq cr6,0x8805b698
	if (ctx.cr6.eq) goto loc_8805B698;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805B67C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.current_instruction = 0x8805B680;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B68C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B68C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8805b728
	if (ctx.cr6.lt) goto loc_8805B728;
loc_8805B698:
	// lwz r3,48(r31)
	ctx.current_instruction = 0x8805B698;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805b6b8
	if (ctx.cr6.eq) goto loc_8805B6B8;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805B6A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.current_instruction = 0x8805B6A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B6B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B6B4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8805B6B8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8805b728
	if (ctx.cr6.lt) goto loc_8805B728;
	// lwz r3,52(r31)
	ctx.current_instruction = 0x8805B6C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805b6e0
	if (ctx.cr6.eq) goto loc_8805B6E0;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805B6CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.current_instruction = 0x8805B6D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B6DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B6DC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8805B6E0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8805b728
	if (ctx.cr6.lt) goto loc_8805B728;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x88067be8
	ctx.lr = 0x8805B6F0;
	sub_88067BE8(ctx, base);
loc_8805B6F0:
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x88067be8
	ctx.lr = 0x8805B6F8;
	sub_88067BE8(ctx, base);
loc_8805B6F8:
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x88067be8
	ctx.lr = 0x8805B700;
	sub_88067BE8(ctx, base);
loc_8805B700:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// std r29,288(r31)
	ctx.current_instruction = 0x8805B704;
	REX_STORE_U64(ctx.r31.u32 + 288, ctx.r29.u64);
	// std r29,304(r31)
	ctx.current_instruction = 0x8805B708;
	REX_STORE_U64(ctx.r31.u32 + 304, ctx.r29.u64);
	// std r29,296(r31)
	ctx.current_instruction = 0x8805B70C;
	REX_STORE_U64(ctx.r31.u32 + 296, ctx.r29.u64);
	// stw r29,316(r31)
	ctx.current_instruction = 0x8805B710;
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r29.u32);
	// stw r29,320(r31)
	ctx.current_instruction = 0x8805B714;
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r29.u32);
	// lfs f0,6708(r11)
	ctx.current_instruction = 0x8805B718;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,324(r31)
	ctx.current_instruction = 0x8805B71C;
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r29.u32);
	// stfs f0,340(r31)
	ctx.current_instruction = 0x8805B720;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// stw r29,328(r31)
	ctx.current_instruction = 0x8805B724;
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r29.u32);
loc_8805B728:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805D858) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805D858);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805D858;
	ctx.current_instruction = 0x8805D858;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,22349
	ctx.r8.s64 = 1464664064;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r9,9560
	ctx.r7.s64 = ctx.r9.s64 + 9560;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfd f0,1488(r10)
	ctx.current_instruction = 0x8805D870;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 1488);
	// ori r5,r8,22065
	ctx.r5.u64 = ctx.r8.u64 | 22065;
	// stfd f0,544(r3)
	ctx.current_instruction = 0x8805D878;
	REX_STORE_U64(ctx.r3.u32 + 544, ctx.f0.u64);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,20(r3)
	ctx.current_instruction = 0x8805D880;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r7,0(r3)
	ctx.current_instruction = 0x8805D884;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,52(r3)
	ctx.current_instruction = 0x8805D888;
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,60(r3)
	ctx.current_instruction = 0x8805D88C;
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	ctx.current_instruction = 0x8805D890;
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	ctx.current_instruction = 0x8805D894;
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	ctx.current_instruction = 0x8805D898;
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	ctx.current_instruction = 0x8805D89C;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,92(r3)
	ctx.current_instruction = 0x8805D8A0;
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	ctx.current_instruction = 0x8805D8A4;
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,140(r3)
	ctx.current_instruction = 0x8805D8A8;
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,264(r3)
	ctx.current_instruction = 0x8805D8AC;
	REX_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// stw r11,280(r3)
	ctx.current_instruction = 0x8805D8B0;
	REX_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// stw r11,284(r3)
	ctx.current_instruction = 0x8805D8B4;
	REX_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// stw r11,488(r3)
	ctx.current_instruction = 0x8805D8B8;
	REX_STORE_U32(ctx.r3.u32 + 488, ctx.r11.u32);
	// stw r11,492(r3)
	ctx.current_instruction = 0x8805D8BC;
	REX_STORE_U32(ctx.r3.u32 + 492, ctx.r11.u32);
	// stw r11,496(r3)
	ctx.current_instruction = 0x8805D8C0;
	REX_STORE_U32(ctx.r3.u32 + 496, ctx.r11.u32);
	// stw r11,500(r3)
	ctx.current_instruction = 0x8805D8C4;
	REX_STORE_U32(ctx.r3.u32 + 500, ctx.r11.u32);
	// stw r11,504(r3)
	ctx.current_instruction = 0x8805D8C8;
	REX_STORE_U32(ctx.r3.u32 + 504, ctx.r11.u32);
	// stw r11,508(r3)
	ctx.current_instruction = 0x8805D8CC;
	REX_STORE_U32(ctx.r3.u32 + 508, ctx.r11.u32);
	// stw r11,512(r3)
	ctx.current_instruction = 0x8805D8D0;
	REX_STORE_U32(ctx.r3.u32 + 512, ctx.r11.u32);
	// stw r11,516(r3)
	ctx.current_instruction = 0x8805D8D4;
	REX_STORE_U32(ctx.r3.u32 + 516, ctx.r11.u32);
	// stw r11,520(r3)
	ctx.current_instruction = 0x8805D8D8;
	REX_STORE_U32(ctx.r3.u32 + 520, ctx.r11.u32);
	// stw r11,524(r3)
	ctx.current_instruction = 0x8805D8DC;
	REX_STORE_U32(ctx.r3.u32 + 524, ctx.r11.u32);
	// stw r11,528(r3)
	ctx.current_instruction = 0x8805D8E0;
	REX_STORE_U32(ctx.r3.u32 + 528, ctx.r11.u32);
	// stw r11,532(r3)
	ctx.current_instruction = 0x8805D8E4;
	REX_STORE_U32(ctx.r3.u32 + 532, ctx.r11.u32);
	// stw r11,536(r3)
	ctx.current_instruction = 0x8805D8E8;
	REX_STORE_U32(ctx.r3.u32 + 536, ctx.r11.u32);
	// stw r11,540(r3)
	ctx.current_instruction = 0x8805D8EC;
	REX_STORE_U32(ctx.r3.u32 + 540, ctx.r11.u32);
	// stb r11,552(r3)
	ctx.current_instruction = 0x8805D8F0;
	REX_STORE_U8(ctx.r3.u32 + 552, ctx.r11.u8);
	// stw r11,556(r3)
	ctx.current_instruction = 0x8805D8F4;
	REX_STORE_U32(ctx.r3.u32 + 556, ctx.r11.u32);
	// stw r11,560(r3)
	ctx.current_instruction = 0x8805D8F8;
	REX_STORE_U32(ctx.r3.u32 + 560, ctx.r11.u32);
	// stw r11,564(r3)
	ctx.current_instruction = 0x8805D8FC;
	REX_STORE_U32(ctx.r3.u32 + 564, ctx.r11.u32);
	// stw r11,568(r3)
	ctx.current_instruction = 0x8805D900;
	REX_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// stw r11,580(r3)
	ctx.current_instruction = 0x8805D904;
	REX_STORE_U32(ctx.r3.u32 + 580, ctx.r11.u32);
	// stw r11,584(r3)
	ctx.current_instruction = 0x8805D908;
	REX_STORE_U32(ctx.r3.u32 + 584, ctx.r11.u32);
	// stw r11,588(r3)
	ctx.current_instruction = 0x8805D90C;
	REX_STORE_U32(ctx.r3.u32 + 588, ctx.r11.u32);
	// stw r6,592(r3)
	ctx.current_instruction = 0x8805D910;
	REX_STORE_U32(ctx.r3.u32 + 592, ctx.r6.u32);
	// stw r11,596(r3)
	ctx.current_instruction = 0x8805D914;
	REX_STORE_U32(ctx.r3.u32 + 596, ctx.r11.u32);
	// stw r11,600(r3)
	ctx.current_instruction = 0x8805D918;
	REX_STORE_U32(ctx.r3.u32 + 600, ctx.r11.u32);
	// stw r5,16(r3)
	ctx.current_instruction = 0x8805D91C;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r11,12(r3)
	ctx.current_instruction = 0x8805D920;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r4,328(r3)
	ctx.current_instruction = 0x8805D924;
	REX_STORE_U32(ctx.r3.u32 + 328, ctx.r4.u32);
	// stw r11,604(r3)
	ctx.current_instruction = 0x8805D928;
	REX_STORE_U32(ctx.r3.u32 + 604, ctx.r11.u32);
	// stw r11,1120(r3)
	ctx.current_instruction = 0x8805D92C;
	REX_STORE_U32(ctx.r3.u32 + 1120, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88062210) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88062210);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88062210;
	ctx.current_instruction = 0x88062210;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r3)
	ctx.current_instruction = 0x88062214;
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	ctx.current_instruction = 0x88062218;
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,44(r3)
	ctx.current_instruction = 0x8806221C;
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88062380) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88062380;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88062380) {
			switch (rex_dispatch_address) {
				case 0x880623A8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88062380;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880623A8: goto loc_880623A8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88062384;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88062388;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// stw r3,0(r4)
	ctx.current_instruction = 0x88062394;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,136(r11)
	ctx.current_instruction = 0x88062398;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r10,52(r11)
	ctx.current_instruction = 0x8806239C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880623A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880623A8:
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r5,r7,10
	ctx.r5.u64 = ctx.r7.u64 | 10;
	// and r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880623C0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88063F30) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88063F30;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88063F30) {
			switch (rex_dispatch_address) {
				case 0x88063F38:
				case 0x88063F68:
				case 0x88063F84:
				case 0x88063FBC:
				case 0x88063FCC:
				case 0x88063FE8:
				case 0x88063FF4:
				case 0x88064008:
				case 0x88064038:
				case 0x880640A8:
				case 0x880640E0:
				case 0x88064104:
				case 0x88064140:
				case 0x88064164:
				case 0x88064180:
				case 0x880641BC:
				case 0x880641E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88063F30;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88063F38: goto loc_88063F38;
		case 0x88063F68: goto loc_88063F68;
		case 0x88063F84: goto loc_88063F84;
		case 0x88063FBC: goto loc_88063FBC;
		case 0x88063FCC: goto loc_88063FCC;
		case 0x88063FE8: goto loc_88063FE8;
		case 0x88063FF4: goto loc_88063FF4;
		case 0x88064008: goto loc_88064008;
		case 0x88064038: goto loc_88064038;
		case 0x880640A8: goto loc_880640A8;
		case 0x880640E0: goto loc_880640E0;
		case 0x88064104: goto loc_88064104;
		case 0x88064140: goto loc_88064140;
		case 0x88064164: goto loc_88064164;
		case 0x88064180: goto loc_88064180;
		case 0x880641BC: goto loc_880641BC;
		case 0x880641E0: goto loc_880641E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88063F38;
	__savegprlr_27(ctx, base);
loc_88063F38:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x88063F38;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x88063F40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r28,84(r1)
	ctx.current_instruction = 0x88063F48;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r28,92(r1)
	ctx.current_instruction = 0x88063F50;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	ctx.current_instruction = 0x88063F58;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,124(r11)
	ctx.current_instruction = 0x88063F60;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb730
	ctx.lr = 0x88063F68;
	sub_880CB730(ctx, base);
loc_88063F68:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880641c8
	if (ctx.cr6.lt) goto loc_880641C8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.current_instruction = 0x88063F78;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 568);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880cb730
	ctx.lr = 0x88063F84;
	sub_880CB730(ctx, base);
loc_88063F84:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,22
	ctx.r10.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x88063fa0
	if (ctx.cr6.eq) goto loc_88063FA0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880641c8
	if (ctx.cr6.lt) goto loc_880641C8;
loc_88063FA0:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88063FA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88063ff8
	if (ctx.cr6.eq) goto loc_88063FF8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,572(r30)
	ctx.current_instruction = 0x88063FB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 572);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880cb730
	ctx.lr = 0x88063FBC;
	sub_880CB730(ctx, base);
loc_88063FBC:
	// lwz r3,84(r1)
	ctx.current_instruction = 0x88063FBC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88063fe8
	if (ctx.cr6.eq) goto loc_88063FE8;
	// bl 0x880cb950
	ctx.lr = 0x88063FCC;
	sub_880CB950(ctx, base);
loc_88063FCC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880641c8
	if (ctx.cr6.lt) goto loc_880641C8;
	// stw r28,84(r1)
	ctx.current_instruction = 0x88063FD8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,572(r30)
	ctx.current_instruction = 0x88063FE0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 572);
	// bl 0x880cb6b0
	ctx.lr = 0x88063FE8;
	sub_880CB6B0(ctx, base);
loc_88063FE8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,568(r30)
	ctx.current_instruction = 0x88063FEC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 568);
	// bl 0x880cb6b0
	ctx.lr = 0x88063FF4;
	sub_880CB6B0(ctx, base);
loc_88063FF4:
	// stw r28,80(r1)
	ctx.current_instruction = 0x88063FF4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_88063FF8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.current_instruction = 0x88063FFC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 568);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880cb648
	ctx.lr = 0x88064008;
	sub_880CB648(ctx, base);
loc_88064008:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880641c8
	if (ctx.cr6.lt) goto loc_880641C8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88064014;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r29,0(r11)
	ctx.current_instruction = 0x8806401C;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// lwz r10,88(r1)
	ctx.current_instruction = 0x88064020;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,4(r10)
	ctx.current_instruction = 0x88064024;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x88064028;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,32(r8)
	ctx.current_instruction = 0x8806402C;
	REX_STORE_U32(ctx.r8.u32 + 32, ctx.r9.u32);
	// lwz r3,608(r30)
	ctx.current_instruction = 0x88064030;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 608);
	// bl 0x880cc7e8
	ctx.lr = 0x88064038;
	sub_880CC7E8(ctx, base);
loc_88064038:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880641c8
	if (ctx.cr6.lt) goto loc_880641C8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x880640b4
	if (ctx.cr6.eq) goto loc_880640B4;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lwz r10,88(r1)
	ctx.current_instruction = 0x88064050;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stw r28,108(r1)
	ctx.current_instruction = 0x88064058;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r7,r9,10544
	ctx.r7.s64 = ctx.r9.s64 + 10544;
	// addi r8,r11,10528
	ctx.r8.s64 = ctx.r11.s64 + 10528;
	// stw r7,112(r1)
	ctx.current_instruction = 0x88064064;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r8,104(r1)
	ctx.current_instruction = 0x88064068;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x8806406C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88064084
	if (!ctx.cr6.eq) goto loc_88064084;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r11,10520
	ctx.r10.s64 = ctx.r11.s64 + 10520;
	// b 0x88064094
	goto loc_88064094;
loc_88064084:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88064098
	if (!ctx.cr6.eq) goto loc_88064098;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r11,10512
	ctx.r10.s64 = ctx.r11.s64 + 10512;
loc_88064094:
	// stw r10,108(r1)
	ctx.current_instruction = 0x88064094;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
loc_88064098:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,608(r30)
	ctx.current_instruction = 0x8806409C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 608);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x880cb138
	ctx.lr = 0x880640A8;
	sub_880CB138(ctx, base);
loc_880640A8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880641c8
	if (ctx.cr6.lt) goto loc_880641C8;
loc_880640B4:
	// lwz r6,4(r30)
	ctx.current_instruction = 0x880640B4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880640B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,608(r30)
	ctx.current_instruction = 0x880640BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 608);
	// addi r10,r11,68
	ctx.r10.s64 = ctx.r11.s64 + 68;
	// lwz r4,88(r1)
	ctx.current_instruction = 0x880640C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// lwz r7,8(r30)
	ctx.current_instruction = 0x880640CC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,84(r1)
	ctx.current_instruction = 0x880640D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,544(r30)
	ctx.current_instruction = 0x880640D4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 544);
	// lwz r6,120(r6)
	ctx.current_instruction = 0x880640D8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 120);
	// bl 0x880ccd10
	ctx.lr = 0x880640E0;
	sub_880CCD10(ctx, base);
loc_880640E0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880641c8
	if (ctx.cr6.lt) goto loc_880641C8;
	// lwz r5,80(r1)
	ctx.current_instruction = 0x880640EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// lwz r3,608(r30)
	ctx.current_instruction = 0x880640F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 608);
	// addi r6,r5,60
	ctx.r6.s64 = ctx.r5.s64 + 60;
	// addi r4,r11,15296
	ctx.r4.s64 = ctx.r11.s64 + 15296;
	// bl 0x880cae18
	ctx.lr = 0x88064104;
	sub_880CAE18(ctx, base);
loc_88064104:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880641c8
	if (ctx.cr6.lt) goto loc_880641C8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88064110;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r30,72(r11)
	ctx.current_instruction = 0x8806411C;
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x88064120;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,56(r9)
	ctx.current_instruction = 0x88064124;
	REX_STORE_U32(ctx.r9.u32 + 56, ctx.r10.u32);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x88064128;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,76(r8)
	ctx.current_instruction = 0x8806412C;
	REX_STORE_U32(ctx.r8.u32 + 76, ctx.r28.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x88064130;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,88(r1)
	ctx.current_instruction = 0x88064134;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,60(r7)
	ctx.current_instruction = 0x88064138;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// bl 0x88063b18
	ctx.lr = 0x88064140;
	sub_88063B18(ctx, base);
loc_88064140:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880641c8
	if (ctx.cr6.lt) goto loc_880641C8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8806414C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// lwz r3,608(r30)
	ctx.current_instruction = 0x88064158;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 608);
	// lwz r4,64(r11)
	ctx.current_instruction = 0x8806415C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x880cafe0
	ctx.lr = 0x88064164;
	sub_880CAFE0(ctx, base);
loc_88064164:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880641c8
	if (ctx.cr6.lt) goto loc_880641C8;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,572(r30)
	ctx.current_instruction = 0x88064174;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 572);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880cb648
	ctx.lr = 0x88064180;
	sub_880CB648(ctx, base);
loc_88064180:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880641c8
	if (ctx.cr6.lt) goto loc_880641C8;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8806418C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwz r10,92(r1)
	ctx.current_instruction = 0x88064194;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,80
	ctx.r5.u64 = ctx.r5.u64 | 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,0(r10)
	ctx.current_instruction = 0x880641A4;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stb r29,96(r1)
	ctx.current_instruction = 0x880641A8;
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// lwz r3,608(r30)
	ctx.current_instruction = 0x880641AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 608);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x880641B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,100(r1)
	ctx.current_instruction = 0x880641B4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x880cafe0
	ctx.lr = 0x880641BC;
	sub_880CAFE0(ctx, base);
loc_880641BC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x880641e0
	if (!ctx.cr6.lt) goto loc_880641E0;
loc_880641C8:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880641C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880641e0
	if (ctx.cr6.eq) goto loc_880641E0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,572(r30)
	ctx.current_instruction = 0x880641D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 572);
	// bl 0x880cb6b0
	ctx.lr = 0x880641E0;
	sub_880CB6B0(ctx, base);
loc_880641E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806BEF8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806BEF8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806BEF8) {
			switch (rex_dispatch_address) {
				case 0x8806BF24:
				case 0x8806BF2C:
				case 0x8806BF48:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806BEF8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806BF24: goto loc_8806BF24;
		case 0x8806BF2C: goto loc_8806BF2C;
		case 0x8806BF48: goto loc_8806BF48;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806BEFC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8806BF00;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8806BF04;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8806BF08;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,10896
	ctx.r10.s64 = ctx.r11.s64 + 10896;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	ctx.current_instruction = 0x8806BF1C;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8806a140
	ctx.lr = 0x8806BF24;
	sub_8806A140(ctx, base);
loc_8806BF24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88062000
	ctx.lr = 0x8806BF2C;
	sub_88062000(ctx, base);
loc_8806BF2C:
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8806bf4c
	if (ctx.cr6.eq) goto loc_8806BF4C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32818
	ctx.r4.u64 = ctx.r4.u64 | 32818;
	// bl 0x88050358
	ctx.lr = 0x8806BF48;
	sub_88050358(ctx, base);
loc_8806BF48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8806BF4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8806BF50;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8806BF58;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8806BF5C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806D178) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806D178);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806D178;
	ctx.current_instruction = 0x8806D178;
	uint32_t ea{};
	// lis r11,-30679
	ctx.r11.s64 = -2010578944;
	// li r9,897
	ctx.r9.s64 = 897;
	// addi r10,r11,-27328
	ctx.r10.s64 = ctx.r11.s64 + -27328;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1023
	ctx.r7.s64 = 1023;
	// stw r8,19220(r3)
	ctx.current_instruction = 0x8806D18C;
	REX_STORE_U32(ctx.r3.u32 + 19220, ctx.r8.u32);
	// li r11,127
	ctx.r11.s64 = 127;
	// stw r7,28548(r3)
	ctx.current_instruction = 0x8806D194;
	REX_STORE_U32(ctx.r3.u32 + 28548, ctx.r7.u32);
	// addi r10,r10,252
	ctx.r10.s64 = ctx.r10.s64 + 252;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8806D1A0:
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthu r9,2(r10)
	ctx.current_instruction = 0x8806D1A8;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8806d1a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8806D1A0;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// lis r9,-30683
	ctx.r9.s64 = -2010841088;
	// lis r5,-30682
	ctx.r5.s64 = -2010775552;
	// addi r7,r9,30432
	ctx.r7.s64 = ctx.r9.s64 + 30432;
	// addi r8,r11,17760
	ctx.r8.s64 = ctx.r11.s64 + 17760;
	// addi r6,r10,25824
	ctx.r6.s64 = ctx.r10.s64 + 25824;
	// stw r7,20892(r3)
	ctx.current_instruction = 0x8806D1CC;
	REX_STORE_U32(ctx.r3.u32 + 20892, ctx.r7.u32);
	// addi r4,r5,30432
	ctx.r4.s64 = ctx.r5.s64 + 30432;
	// stw r8,20864(r3)
	ctx.current_instruction = 0x8806D1D4;
	REX_STORE_U32(ctx.r3.u32 + 20864, ctx.r8.u32);
	// stw r6,20868(r3)
	ctx.current_instruction = 0x8806D1D8;
	REX_STORE_U32(ctx.r3.u32 + 20868, ctx.r6.u32);
	// stw r7,20888(r3)
	ctx.current_instruction = 0x8806D1DC;
	REX_STORE_U32(ctx.r3.u32 + 20888, ctx.r7.u32);
	// stw r4,20896(r3)
	ctx.current_instruction = 0x8806D1E0;
	REX_STORE_U32(ctx.r3.u32 + 20896, ctx.r4.u32);
	// b 0x880e24e8
	sub_880E24E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806E060) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806E060);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806E060;
	ctx.current_instruction = 0x8806E060;
	// lwz r11,1272(r3)
	ctx.current_instruction = 0x8806E060;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806e07c
	if (ctx.cr6.eq) goto loc_8806E07C;
	// lwz r11,2124(r3)
	ctx.current_instruction = 0x8806E06C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2124);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_8806E07C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806E7B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806E7B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806E7B8) {
			switch (rex_dispatch_address) {
				case 0x8806E7F0:
				case 0x8806EB6C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806E7B8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806E7F0: goto loc_8806E7F0;
		case 0x8806EB6C: goto loc_8806EB6C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806E7BC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8806E7C0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8806E7C4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8806E7C8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,31032(r3)
	ctx.current_instruction = 0x8806E7CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31032);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8806e7f8
	if (!ctx.cr6.eq) goto loc_8806E7F8;
	// lwz r11,31036(r3)
	ctx.current_instruction = 0x8806E7E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31036);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8806e7f8
	if (!ctx.cr6.eq) goto loc_8806E7F8;
	// bl 0x881ee8e8
	ctx.lr = 0x8806E7F0;
	sub_881EE8E8(ctx, base);
loc_8806E7F0:
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// stw r11,1428(r31)
	ctx.current_instruction = 0x8806E7F4;
	REX_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
loc_8806E7F8:
	// lwz r7,2800(r31)
	ctx.current_instruction = 0x8806E7F8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8806e84c
	if (!ctx.cr6.eq) goto loc_8806E84C;
	// lwz r11,6756(r31)
	ctx.current_instruction = 0x8806E804;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806e84c
	if (!ctx.cr6.eq) goto loc_8806E84C;
	// lwz r11,30872(r31)
	ctx.current_instruction = 0x8806E810;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806e824
	if (ctx.cr6.eq) goto loc_8806E824;
	// lwz r30,30928(r31)
	ctx.current_instruction = 0x8806E81C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 30928);
	// stw r30,676(r31)
	ctx.current_instruction = 0x8806E820;
	REX_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
loc_8806E824:
	// lwz r11,30884(r31)
	ctx.current_instruction = 0x8806E824;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806e838
	if (ctx.cr6.eq) goto loc_8806E838;
	// lwz r11,30940(r31)
	ctx.current_instruction = 0x8806E830;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30940);
	// stw r11,1424(r31)
	ctx.current_instruction = 0x8806E834;
	REX_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
loc_8806E838:
	// lwz r11,30896(r31)
	ctx.current_instruction = 0x8806E838;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30896);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806e890
	if (ctx.cr6.eq) goto loc_8806E890;
	// lwz r11,30952(r31)
	ctx.current_instruction = 0x8806E844;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30952);
	// b 0x8806e88c
	goto loc_8806E88C;
loc_8806E84C:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x8806e890
	if (!ctx.cr6.eq) goto loc_8806E890;
	// lwz r11,30876(r31)
	ctx.current_instruction = 0x8806E854;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30876);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806e868
	if (ctx.cr6.eq) goto loc_8806E868;
	// lwz r30,30932(r31)
	ctx.current_instruction = 0x8806E860;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 30932);
	// stw r30,676(r31)
	ctx.current_instruction = 0x8806E864;
	REX_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
loc_8806E868:
	// lwz r11,30888(r31)
	ctx.current_instruction = 0x8806E868;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806e87c
	if (ctx.cr6.eq) goto loc_8806E87C;
	// lwz r11,30944(r31)
	ctx.current_instruction = 0x8806E874;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30944);
	// stw r11,1424(r31)
	ctx.current_instruction = 0x8806E878;
	REX_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
loc_8806E87C:
	// lwz r11,30900(r31)
	ctx.current_instruction = 0x8806E87C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30900);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806e890
	if (ctx.cr6.eq) goto loc_8806E890;
	// lwz r11,30956(r31)
	ctx.current_instruction = 0x8806E888;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30956);
loc_8806E88C:
	// stw r11,1428(r31)
	ctx.current_instruction = 0x8806E88C;
	REX_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
loc_8806E890:
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,1420(r31)
	ctx.current_instruction = 0x8806E894;
	REX_STORE_U32(ctx.r31.u32 + 1420, ctx.r30.u32);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// ble cr6,0x8806e8a4
	if (!ctx.cr6.gt) goto loc_8806E8A4;
	// stw r8,1424(r31)
	ctx.current_instruction = 0x8806E8A0;
	REX_STORE_U32(ctx.r31.u32 + 1424, ctx.r8.u32);
loc_8806E8A4:
	// lwz r9,1432(r31)
	ctx.current_instruction = 0x8806E8A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1432);
	// li r11,8
	ctx.r11.s64 = 8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8806e8c8
	if (!ctx.cr6.eq) goto loc_8806E8C8;
	// srawi r6,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 31;
	// rlwinm r10,r30,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// subfc r5,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r30.u64;
	// adde r10,r10,r6
	temp.u8 = (ctx.r10.u32 + ctx.r6.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,1428(r31)
	ctx.current_instruction = 0x8806E8C4;
	REX_STORE_U32(ctx.r31.u32 + 1428, ctx.r10.u32);
loc_8806E8C8:
	// lwz r10,1428(r31)
	ctx.current_instruction = 0x8806E8C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1428);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8806e8dc
	if (ctx.cr6.eq) goto loc_8806E8DC;
	// lwz r6,8216(r31)
	ctx.current_instruction = 0x8806E8D4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8216);
	// b 0x8806e8e0
	goto loc_8806E8E0;
loc_8806E8DC:
	// lwz r6,8212(r31)
	ctx.current_instruction = 0x8806E8DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8212);
loc_8806E8E0:
	// stw r6,8208(r31)
	ctx.current_instruction = 0x8806E8E0;
	REX_STORE_U32(ctx.r31.u32 + 8208, ctx.r6.u32);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bgt cr6,0x8806e900
	if (ctx.cr6.gt) goto loc_8806E900;
	// addi r6,r31,19828
	ctx.r6.s64 = ctx.r31.s64 + 19828;
	// addi r5,r31,19956
	ctx.r5.s64 = ctx.r31.s64 + 19956;
	// addi r4,r31,19572
	ctx.r4.s64 = ctx.r31.s64 + 19572;
	// addi r3,r31,19700
	ctx.r3.s64 = ctx.r31.s64 + 19700;
	// b 0x8806e910
	goto loc_8806E910;
loc_8806E900:
	// addi r6,r31,19764
	ctx.r6.s64 = ctx.r31.s64 + 19764;
	// addi r5,r31,19892
	ctx.r5.s64 = ctx.r31.s64 + 19892;
	// addi r4,r31,19508
	ctx.r4.s64 = ctx.r31.s64 + 19508;
	// addi r3,r31,19636
	ctx.r3.s64 = ctx.r31.s64 + 19636;
loc_8806E910:
	// stw r3,20024(r31)
	ctx.current_instruction = 0x8806E910;
	REX_STORE_U32(ctx.r31.u32 + 20024, ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r4,20012(r31)
	ctx.current_instruction = 0x8806E918;
	REX_STORE_U32(ctx.r31.u32 + 20012, ctx.r4.u32);
	// stw r5,20000(r31)
	ctx.current_instruction = 0x8806E91C;
	REX_STORE_U32(ctx.r31.u32 + 20000, ctx.r5.u32);
	// stw r6,19988(r31)
	ctx.current_instruction = 0x8806E920;
	REX_STORE_U32(ctx.r31.u32 + 19988, ctx.r6.u32);
	// beq cr6,0x8806e934
	if (ctx.cr6.eq) goto loc_8806E934;
	// addi r10,r31,24612
	ctx.r10.s64 = ctx.r31.s64 + 24612;
	// stw r10,27940(r31)
	ctx.current_instruction = 0x8806E92C;
	REX_STORE_U32(ctx.r31.u32 + 27940, ctx.r10.u32);
	// b 0x8806e958
	goto loc_8806E958;
loc_8806E934:
	// addi r10,r31,21284
	ctx.r10.s64 = ctx.r31.s64 + 21284;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,27940(r31)
	ctx.current_instruction = 0x8806E93C;
	REX_STORE_U32(ctx.r31.u32 + 27940, ctx.r10.u32);
	// bne cr6,0x8806e958
	if (!ctx.cr6.eq) goto loc_8806E958;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,2872
	ctx.r10.s64 = ctx.r10.s64 + 2872;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r30,-4(r9)
	ctx.current_instruction = 0x8806E954;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
loc_8806E958:
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// stw r30,1416(r31)
	ctx.current_instruction = 0x8806E95C;
	REX_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// stw r8,2340(r31)
	ctx.current_instruction = 0x8806E960;
	REX_STORE_U32(ctx.r31.u32 + 2340, ctx.r8.u32);
	// blt cr6,0x8806e988
	if (ctx.cr6.lt) goto loc_8806E988;
	// lwz r10,7864(r31)
	ctx.current_instruction = 0x8806E968;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7864);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8806e988
	if (!ctx.cr6.eq) goto loc_8806E988;
	// lwz r10,2336(r31)
	ctx.current_instruction = 0x8806E974;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2336);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// stw r10,2340(r31)
	ctx.current_instruction = 0x8806E97C;
	REX_STORE_U32(ctx.r31.u32 + 2340, ctx.r10.u32);
	// bne cr6,0x8806e988
	if (!ctx.cr6.eq) goto loc_8806E988;
	// stw r8,2340(r31)
	ctx.current_instruction = 0x8806E984;
	REX_STORE_U32(ctx.r31.u32 + 2340, ctx.r8.u32);
loc_8806E988:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bgt cr6,0x8806e9b4
	if (ctx.cr6.gt) goto loc_8806E9B4;
	// lwz r10,1572(r31)
	ctx.current_instruction = 0x8806E990;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1572);
	// stw r11,1456(r31)
	ctx.current_instruction = 0x8806E994;
	REX_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,1452(r31)
	ctx.current_instruction = 0x8806E99C;
	REX_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// beq cr6,0x8806e9c8
	if (ctx.cr6.eq) goto loc_8806E9C8;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bgt cr6,0x8806e9c8
	if (ctx.cr6.gt) goto loc_8806E9C8;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8806e9c0
	goto loc_8806E9C0;
loc_8806E9B4:
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
loc_8806E9C0:
	// stw r11,1452(r31)
	ctx.current_instruction = 0x8806E9C0;
	REX_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// stw r11,1456(r31)
	ctx.current_instruction = 0x8806E9C4;
	REX_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
loc_8806E9C8:
	// lwz r11,1420(r31)
	ctx.current_instruction = 0x8806E9C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1420);
	// lwz r9,1576(r31)
	ctx.current_instruction = 0x8806E9CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1576);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// stw r30,6872(r31)
	ctx.current_instruction = 0x8806E9D4;
	REX_STORE_U32(ctx.r31.u32 + 6872, ctx.r30.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// stw r6,19224(r31)
	ctx.current_instruction = 0x8806E9E8;
	REX_STORE_U32(ctx.r31.u32 + 19224, ctx.r6.u32);
	// beq cr6,0x8806ea18
	if (ctx.cr6.eq) goto loc_8806EA18;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mullw r10,r30,r30
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r30.s32);
	// ori r9,r11,17985
	ctx.r9.u64 = ctx.r11.u64 | 17985;
	// mulli r11,r30,289
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(289));
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// srawi r5,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 16;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stw r5,19224(r31)
	ctx.current_instruction = 0x8806EA10;
	REX_STORE_U32(ctx.r31.u32 + 19224, ctx.r5.u32);
	// stw r4,6872(r31)
	ctx.current_instruction = 0x8806EA14;
	REX_STORE_U32(ctx.r31.u32 + 6872, ctx.r4.u32);
loc_8806EA18:
	// lwz r11,1456(r31)
	ctx.current_instruction = 0x8806EA18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1456);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r9,1452(r31)
	ctx.current_instruction = 0x8806EA20;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1452);
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// lwz r5,2340(r31)
	ctx.current_instruction = 0x8806EA2C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2340);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// std r6,80(r1)
	ctx.current_instruction = 0x8806EA34;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x8806EA38;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	ctx.current_instruction = 0x8806EA3C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x8806EA40;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// lfs f12,6708(r10)
	ctx.current_instruction = 0x8806EA48;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6708);
	ctx.f12.f64 = double(temp.f32);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfs f11,12188(r7)
	ctx.current_instruction = 0x8806EA50;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12188);
	ctx.f11.f64 = double(temp.f32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// li r3,1472
	ctx.r3.s64 = 1472;
	// li r11,1476
	ctx.r11.s64 = 1476;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// clrlwi r9,r5,31
	ctx.r9.u64 = ctx.r5.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f13,6728(r10)
	ctx.current_instruction = 0x8806EA6C;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6728);
	ctx.f13.f64 = double(temp.f32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 / ctx.f7.f64));
	// stfs f6,19256(r31)
	ctx.current_instruction = 0x8806EA78;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r31.u32 + 19256, temp.u32);
	// fdivs f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f8.f64));
	// stfs f0,19252(r31)
	ctx.current_instruction = 0x8806EA80;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 19252, temp.u32);
	// fmuls f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f5,f0,f11
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctiwz f2,f4
	ctx.f2.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// fctiwz f3,f5
	ctx.f3.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f3,r31,r3
	ctx.current_instruction = 0x8806EA94;
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.f3.u32);
	// stfiwx f2,r31,r11
	ctx.current_instruction = 0x8806EA98;
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f2.u32);
	// beq cr6,0x8806eab4
	if (ctx.cr6.eq) goto loc_8806EAB4;
	// lwz r11,17536(r31)
	ctx.current_instruction = 0x8806EAA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 17536);
	// sth r8,0(r11)
	ctx.current_instruction = 0x8806EAA4;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwz r10,17540(r31)
	ctx.current_instruction = 0x8806EAA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 17540);
	// sth r8,0(r10)
	ctx.current_instruction = 0x8806EAAC;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// b 0x8806eaf0
	goto loc_8806EAF0;
loc_8806EAB4:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,17536(r31)
	ctx.current_instruction = 0x8806EAB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 17536);
	// lfs f12,12184(r11)
	ctx.current_instruction = 0x8806EABC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12184);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f13.f64)));
	// fctiwz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,80(r1)
	ctx.current_instruction = 0x8806EAC8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lhz r9,86(r1)
	ctx.current_instruction = 0x8806EACC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// sth r9,0(r10)
	ctx.current_instruction = 0x8806EAD0;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// lfs f9,19256(r31)
	ctx.current_instruction = 0x8806EAD4;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 19256);
	ctx.f9.f64 = double(temp.f32);
	// lwz r8,17540(r31)
	ctx.current_instruction = 0x8806EAD8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 17540);
	// fmadds f8,f9,f12,f13
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f13.f64)));
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	ctx.current_instruction = 0x8806EAE4;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lhz r7,86(r1)
	ctx.current_instruction = 0x8806EAE8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// sth r7,0(r8)
	ctx.current_instruction = 0x8806EAEC;
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r7.u16);
loc_8806EAF0:
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// stw r30,1416(r31)
	ctx.current_instruction = 0x8806EAF4;
	REX_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,1464(r31)
	ctx.current_instruction = 0x8806EAFC;
	REX_STORE_U32(ctx.r31.u32 + 1464, ctx.r30.u32);
	// std r10,80(r1)
	ctx.current_instruction = 0x8806EB00;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// stw r11,1460(r31)
	ctx.current_instruction = 0x8806EB0C;
	REX_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// li r7,1468
	ctx.r7.s64 = 1468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,80(r1)
	ctx.current_instruction = 0x8806EB18;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	ctx.current_instruction = 0x8806EB1C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lfs f0,12180(r8)
	ctx.current_instruction = 0x8806EB24;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12180);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfd f12,80(r1)
	ctx.current_instruction = 0x8806EB2C;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// fdivs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// stfs f7,19240(r31)
	ctx.current_instruction = 0x8806EB38;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r31.u32 + 19240, temp.u32);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// stfs f6,19236(r31)
	ctx.current_instruction = 0x8806EB40;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r31.u32 + 19236, temp.u32);
	// fmuls f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lwz r6,19236(r31)
	ctx.current_instruction = 0x8806EB48;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 19236);
	// stw r6,19244(r31)
	ctx.current_instruction = 0x8806EB4C;
	REX_STORE_U32(ctx.r31.u32 + 19244, ctx.r6.u32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f4,80(r1)
	ctx.current_instruction = 0x8806EB54;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,80(r1)
	ctx.current_instruction = 0x8806EB58;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fctiwz f3,f5
	ctx.f3.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stw r5,19248(r31)
	ctx.current_instruction = 0x8806EB60;
	REX_STORE_U32(ctx.r31.u32 + 19248, ctx.r5.u32);
	// stfiwx f3,r31,r7
	ctx.current_instruction = 0x8806EB64;
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.f3.u32);
	// bl 0x880ebc80
	ctx.lr = 0x8806EB6C;
	sub_880EBC80(ctx, base);
loc_8806EB6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8806EB70;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8806EB78;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8806EB7C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8807D918) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8807D918);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807D918;
	ctx.current_instruction = 0x8807D918;
	PPCRegister temp{};
	// lwz r9,28(r3)
	ctx.current_instruction = 0x8807D918;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,20(r3)
	ctx.current_instruction = 0x8807D924;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8807d934
	if (!ctx.cr6.eq) goto loc_8807D934;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8807D930;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_8807D934:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8807d948
	if (!ctx.cr6.lt) goto loc_8807D948;
	// lwz r10,4(r3)
	ctx.current_instruction = 0x8807D940;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8807D948:
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// lwz r8,0(r3)
	ctx.current_instruction = 0x8807D94C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,32(r10)
	ctx.current_instruction = 0x8807D960;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x8807d974
	if (!ctx.cr6.eq) goto loc_8807D974;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// b 0x8807d4b0
	sub_8807D4B0(ctx, base);
	return;
loc_8807D974:
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x8807d99c
	if (!ctx.cr6.eq) goto loc_8807D99C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,4(r10)
	ctx.current_instruction = 0x8807D980;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// lfs f3,6732(r11)
	ctx.current_instruction = 0x8807D988;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,12(r10)
	ctx.current_instruction = 0x8807D98C;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// lfs f2,4(r10)
	ctx.current_instruction = 0x8807D994;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// b 0x8807d510
	sub_8807D510(ctx, base);
	return;
loc_8807D99C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8807d9a8
	if (!ctx.cr6.eq) goto loc_8807D9A8;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8807D9A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_8807D9A8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,4(r10)
	ctx.current_instruction = 0x8807D9AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f4,12(r10)
	ctx.current_instruction = 0x8807D9BC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f2,4(r10)
	ctx.current_instruction = 0x8807D9C4;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,4(r8)
	ctx.current_instruction = 0x8807D9CC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lfs f3,12(r7)
	ctx.current_instruction = 0x8807D9D0;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,4(r7)
	ctx.current_instruction = 0x8807D9D4;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8807d510
	sub_8807D510(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880808A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880808A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880808A8) {
			switch (rex_dispatch_address) {
				case 0x880808B0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880808A8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880808B0: goto loc_880808B0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880808B0;
	__savegprlr_14(ctx, base);
loc_880808B0:
	// lis r9,-30683
	ctx.r9.s64 = -2010841088;
	// lwz r10,724(r3)
	ctx.current_instruction = 0x880808B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// lwz r11,720(r3)
	ctx.current_instruction = 0x880808B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r4,28(r1)
	ctx.current_instruction = 0x880808C0;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// addi r4,r9,4676
	ctx.r4.s64 = ctx.r9.s64 + 4676;
	// lwz r23,7052(r3)
	ctx.current_instruction = 0x880808C8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 7052);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r3,20(r1)
	ctx.current_instruction = 0x880808D0;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r31,4676(r9)
	ctx.current_instruction = 0x880808DC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4676);
	// rlwinm r18,r3,31,1,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r5,36(r1)
	ctx.current_instruction = 0x880808E4;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// rlwinm r25,r10,31,1,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,4(r4)
	ctx.current_instruction = 0x880808EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,8(r4)
	ctx.current_instruction = 0x880808F0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mullw r3,r18,r6
	ctx.r3.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r6.s32);
	// lwz r7,12(r4)
	ctx.current_instruction = 0x880808F8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,16(r4)
	ctx.current_instruction = 0x880808FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r5,20(r4)
	ctx.current_instruction = 0x88080900;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r4,24(r4)
	ctx.current_instruction = 0x88080904;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r29,7044(r21)
	ctx.current_instruction = 0x88080908;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r21.u32 + 7044);
	// stw r18,-188(r1)
	ctx.current_instruction = 0x8808090C;
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r18.u32);
	// addi r17,r9,1
	ctx.r17.s64 = ctx.r9.s64 + 1;
	// addi r15,r8,1
	ctx.r15.s64 = ctx.r8.s64 + 1;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r17,-192(r1)
	ctx.current_instruction = 0x8808091C;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r17.u32);
	// lis r30,-30683
	ctx.r30.s64 = -2010841088;
	// stw r15,-196(r1)
	ctx.current_instruction = 0x88080924;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r15.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r22,-176(r1)
	ctx.current_instruction = 0x8808092C;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r22.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r22,-180(r1)
	ctx.current_instruction = 0x88080934;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r22.u32);
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// stw r7,-204(r1)
	ctx.current_instruction = 0x8808093C;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r7.u32);
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// stw r10,-200(r1)
	ctx.current_instruction = 0x88080944;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r10.u32);
	// add r16,r31,r3
	ctx.r16.u64 = ctx.r31.u64 + ctx.r3.u64;
	// stw r9,-172(r1)
	ctx.current_instruction = 0x8808094C;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r9.u32);
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// stw r8,-168(r1)
	ctx.current_instruction = 0x88080954;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// stw r16,-184(r1)
	ctx.current_instruction = 0x8808095C;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r16.u32);
	// li r19,1
	ctx.r19.s64 = 1;
	// rlwinm r26,r11,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r30,r30,4704
	ctx.r30.s64 = ctx.r30.s64 + 4704;
	// ble cr6,0x88080b28
	if (!ctx.cr6.gt) goto loc_88080B28;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_88080980:
	// lwz r11,7048(r21)
	ctx.current_instruction = 0x88080980;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 7048);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// ble cr6,0x88080a74
	if (!ctx.cr6.gt) goto loc_88080A74;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
loc_8808099C:
	// lwz r11,720(r21)
	ctx.current_instruction = 0x8808099C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 720);
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbzx r8,r10,r29
	ctx.current_instruction = 0x880809B0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88080a00
	if (ctx.cr6.eq) goto loc_88080A00;
	// lbz r10,1(r7)
	ctx.current_instruction = 0x880809C0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88080a00
	if (ctx.cr6.eq) goto loc_88080A00;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r14,0(r10)
	ctx.current_instruction = 0x880809D8;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x88080a00
	if (ctx.cr6.eq) goto loc_88080A00;
	// lbz r10,1(r10)
	ctx.current_instruction = 0x880809E4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88080a00
	if (ctx.cr6.eq) goto loc_88080A00;
	// li r10,15
	ctx.r10.s64 = 15;
	// stbx r19,r9,r4
	ctx.current_instruction = 0x880809F4;
	REX_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r19.u8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x88080a5c
	goto loc_88080A5C;
loc_88080A00:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88080a10
	if (ctx.cr6.eq) goto loc_88080A10;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_88080A10:
	// lbz r8,1(r7)
	ctx.current_instruction = 0x88080A10;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88080a20
	if (ctx.cr6.eq) goto loc_88080A20;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
loc_88080A20:
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r8,0(r11)
	ctx.current_instruction = 0x88080A2C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88080a3c
	if (ctx.cr6.eq) goto loc_88080A3C;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_88080A3C:
	// lbz r11,1(r11)
	ctx.current_instruction = 0x88080A3C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88080a4c
	if (ctx.cr6.eq) goto loc_88080A4C;
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
loc_88080A4C:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r22,r9,r4
	ctx.current_instruction = 0x88080A50;
	REX_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r22.u8);
	// lwzx r11,r11,r30
	ctx.current_instruction = 0x88080A54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// add r20,r11,r20
	ctx.r20.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_88080A5C:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r11,0(r23)
	ctx.current_instruction = 0x88080A64;
	REX_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bdnz 0x8808099c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8808099C;
loc_88080A74:
	// lwz r11,720(r21)
	ctx.current_instruction = 0x88080A74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 720);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88080b10
	if (ctx.cr6.eq) goto loc_88080B10;
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r8,r29
	ctx.current_instruction = 0x88080A90;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88080ac8
	if (ctx.cr6.eq) goto loc_88080AC8;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r8,r10,r29
	ctx.current_instruction = 0x88080AAC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88080ac8
	if (ctx.cr6.eq) goto loc_88080AC8;
	// li r10,15
	ctx.r10.s64 = 15;
	// stbx r19,r9,r4
	ctx.current_instruction = 0x88080ABC;
	REX_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r19.u8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x88080b04
	goto loc_88080B04;
loc_88080AC8:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88080ad8
	if (ctx.cr6.eq) goto loc_88080AD8;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_88080AD8:
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbzx r8,r11,r29
	ctx.current_instruction = 0x88080AE4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88080af4
	if (ctx.cr6.eq) goto loc_88080AF4;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_88080AF4:
	// stbx r22,r9,r4
	ctx.current_instruction = 0x88080AF4;
	REX_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r22.u8);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.current_instruction = 0x88080AFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// add r20,r11,r20
	ctx.r20.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_88080B04:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// stb r11,0(r23)
	ctx.current_instruction = 0x88080B08;
	REX_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_88080B10:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r24,r24,r6
	ctx.r24.u64 = ctx.r24.u64 + ctx.r6.u64;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x88080980
	if (ctx.cr6.lt) goto loc_88080980;
	// stw r20,-180(r1)
	ctx.current_instruction = 0x88080B24;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r20.u32);
loc_88080B28:
	// lwz r11,724(r21)
	ctx.current_instruction = 0x88080B28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 724);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88080c2c
	if (ctx.cr6.eq) goto loc_88080C2C;
	// lwz r10,7048(r21)
	ctx.current_instruction = 0x88080B38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 7048);
	// mullw r11,r28,r6
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r6.s32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x88080bdc
	if (!ctx.cr6.gt) goto loc_88080BDC;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
loc_88080B54:
	// lwz r10,720(r21)
	ctx.current_instruction = 0x88080B54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 720);
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbzx r5,r10,r29
	ctx.current_instruction = 0x88080B68;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88080b94
	if (ctx.cr6.eq) goto loc_88080B94;
	// lbz r10,1(r8)
	ctx.current_instruction = 0x88080B78;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88080b94
	if (ctx.cr6.eq) goto loc_88080B94;
	// li r10,15
	ctx.r10.s64 = 15;
	// stbx r19,r11,r7
	ctx.current_instruction = 0x88080B88;
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r19.u8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x88080bc4
	goto loc_88080BC4;
loc_88080B94:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88080ba4
	if (ctx.cr6.eq) goto loc_88080BA4;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_88080BA4:
	// lbz r9,1(r8)
	ctx.current_instruction = 0x88080BA4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88080bb4
	if (ctx.cr6.eq) goto loc_88080BB4;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
loc_88080BB4:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r22,r11,r7
	ctx.current_instruction = 0x88080BB8;
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r22.u8);
	// lwzx r9,r9,r30
	ctx.current_instruction = 0x88080BBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// add r20,r9,r20
	ctx.r20.u64 = ctx.r9.u64 + ctx.r20.u64;
loc_88080BC4:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r23)
	ctx.current_instruction = 0x88080BCC;
	REX_STORE_U8(ctx.r23.u32 + 0, ctx.r10.u8);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// bdnz 0x88080b54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88080B54;
	// stw r20,-180(r1)
	ctx.current_instruction = 0x88080BD8;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r20.u32);
loc_88080BDC:
	// lwz r10,720(r21)
	ctx.current_instruction = 0x88080BDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 720);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88080c2c
	if (ctx.cr6.eq) goto loc_88080C2C;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r8,r9,r29
	ctx.current_instruction = 0x88080BF8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88080c14
	if (ctx.cr6.eq) goto loc_88080C14;
	// li r10,15
	ctx.r10.s64 = 15;
	// stbx r19,r11,r7
	ctx.current_instruction = 0x88080C08;
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r19.u8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x88080c28
	goto loc_88080C28;
loc_88080C14:
	// stbx r22,r11,r7
	ctx.current_instruction = 0x88080C14;
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r22.u8);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88080C1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// stw r11,-180(r1)
	ctx.current_instruction = 0x88080C24;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
loc_88080C28:
	// stb r10,0(r23)
	ctx.current_instruction = 0x88080C28;
	REX_STORE_U8(ctx.r23.u32 + 0, ctx.r10.u8);
loc_88080C2C:
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,7048(r21)
	ctx.current_instruction = 0x88080C30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 7048);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// subfc r9,r10,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r10.u32;
	ctx.r9.u64 = ctx.r3.u64 - ctx.r10.u64;
	// eqv r8,r10,r3
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r3.u64);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// addze r4,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r4,r4,31
	ctx.r4.u64 = ctx.r4.u32 & 0x1;
	// stw r4,-164(r1)
	ctx.current_instruction = 0x88080C54;
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r4.u32);
	// ble cr6,0x88080cf8
	if (!ctx.cr6.gt) goto loc_88080CF8;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
loc_88080C60:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x88080cec
	if (!ctx.cr6.gt) goto loc_88080CEC;
	// subfic r7,r6,1
	ctx.xer.ca = ctx.r6.u32 <= 1;
	ctx.r7.u64 = static_cast<uint64_t>(1) - ctx.r6.u64;
loc_88080C70:
	// add. r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x88080cc0
	if (ctx.cr0.eq) goto loc_88080CC0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x88080c8c
	if (!ctx.cr6.eq) goto loc_88080C8C;
	// lbz r10,-1(r11)
	ctx.current_instruction = 0x88080C80;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// b 0x88080cc4
	goto loc_88080CC4;
loc_88080C8C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88080ca4
	if (!ctx.cr6.eq) goto loc_88080CA4;
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r10,-1(r10)
	ctx.current_instruction = 0x88080C98;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// b 0x88080cc4
	goto loc_88080CC4;
loc_88080CA4:
	// add r31,r7,r11
	ctx.r31.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r10,-1(r11)
	ctx.current_instruction = 0x88080CA8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r31,-1(r31)
	ctx.current_instruction = 0x88080CB0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + -1);
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x88080cc4
	if (ctx.cr6.eq) goto loc_88080CC4;
loc_88080CC0:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_88080CC4:
	// lbz r31,0(r11)
	ctx.current_instruction = 0x88080CC4;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// xor r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 ^ ctx.r10.u64;
	// addic r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	// subfe r10,r31,r10
	temp.u8 = (~ctx.r31.u32 + ctx.r10.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r31.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stbu r10,1(r8)
	ctx.current_instruction = 0x88080CE4;
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r8.u32 = ea;
	// blt cr6,0x88080c70
	if (ctx.cr6.lt) goto loc_88080C70;
loc_88080CEC:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpw cr6,r5,r18
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x88080c60
	if (ctx.cr6.lt) goto loc_88080C60;
loc_88080CF8:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// subf r10,r3,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x88080d34
	if (!ctx.cr6.gt) goto loc_88080D34;
	// extsb r7,r4
	ctx.r7.s64 = ctx.r4.s8;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_88080D10:
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r4,0(r8)
	ctx.current_instruction = 0x88080D1C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// xor r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// stb r4,0(r8)
	ctx.current_instruction = 0x88080D2C;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// bdnz 0x88080d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88080D10;
loc_88080D34:
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88080d50
	if (ctx.cr6.eq) goto loc_88080D50;
	// li r15,2
	ctx.r15.s64 = 2;
	// li r17,2
	ctx.r17.s64 = 2;
	// stw r15,-196(r1)
	ctx.current_instruction = 0x88080D48;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r15.u32);
	// stw r17,-192(r1)
	ctx.current_instruction = 0x88080D4C;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r17.u32);
loc_88080D50:
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x88080ecc
	if (!ctx.cr6.lt) goto loc_88080ECC;
	// subf r7,r9,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r9.u64;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,23344
	ctx.r8.s64 = ctx.r8.s64 + 23344;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x88080e38
	if (ctx.cr6.lt) goto loc_88080E38;
	// addi r21,r10,1
	ctx.r21.s64 = ctx.r10.s64 + 1;
	// addi r20,r11,1
	ctx.r20.s64 = ctx.r11.s64 + 1;
	// addi r19,r10,3
	ctx.r19.s64 = ctx.r10.s64 + 3;
	// addi r18,r10,2
	ctx.r18.s64 = ctx.r10.s64 + 2;
	// addi r17,r11,3
	ctx.r17.s64 = ctx.r11.s64 + 3;
	// addi r16,r11,2
	ctx.r16.s64 = ctx.r11.s64 + 2;
	// addi r15,r3,-2
	ctx.r15.s64 = ctx.r3.s64 + -2;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r14,r11,r10
	ctx.r14.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_88080DA8:
	// lbzx r5,r21,r9
	ctx.current_instruction = 0x88080DA8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r9.u32);
	// lbzx r4,r14,r7
	ctx.current_instruction = 0x88080DAC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r14.u32 + ctx.r7.u32);
	// extsb r27,r5
	ctx.r27.s64 = ctx.r5.s8;
	// lbzx r5,r20,r9
	ctx.current_instruction = 0x88080DB4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r9.u32);
	// extsb r26,r4
	ctx.r26.s64 = ctx.r4.s8;
	// lbz r4,0(r7)
	ctx.current_instruction = 0x88080DBC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r29,r5
	ctx.r29.s64 = ctx.r5.s8;
	// lbzx r5,r16,r9
	ctx.current_instruction = 0x88080DC4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r9.u32);
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// lbzx r26,r17,r9
	ctx.current_instruction = 0x88080DCC;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r9.u32);
	// lbzx r31,r18,r9
	ctx.current_instruction = 0x88080DD0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r9.u32);
	// extsb r28,r4
	ctx.r28.s64 = ctx.r4.s8;
	// lbzx r30,r19,r9
	ctx.current_instruction = 0x88080DD8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r9.u32);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// extsb r4,r26
	ctx.r4.s64 = ctx.r26.s8;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r29,r28
	ctx.r31.u64 = ctx.r29.u64 + ctx.r28.u64;
	// rlwinm r30,r5,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r4,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r27,r8
	ctx.current_instruction = 0x88080E08;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// add r25,r5,r25
	ctx.r25.u64 = ctx.r5.u64 + ctx.r25.u64;
	// lwzx r4,r30,r8
	ctx.current_instruction = 0x88080E18;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lwzx r5,r29,r8
	ctx.current_instruction = 0x88080E1C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// cmpw cr6,r9,r15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r15.s32, ctx.xer);
	// lwzx r31,r31,r8
	ctx.current_instruction = 0x88080E24;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// add r23,r4,r23
	ctx.r23.u64 = ctx.r4.u64 + ctx.r23.u64;
	// add r22,r5,r22
	ctx.r22.u64 = ctx.r5.u64 + ctx.r22.u64;
	// add r24,r31,r24
	ctx.r24.u64 = ctx.r31.u64 + ctx.r24.u64;
	// blt cr6,0x88080da8
	if (ctx.cr6.lt) goto loc_88080DA8;
loc_88080E38:
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x88080e94
	if (!ctx.cr6.lt) goto loc_88080E94;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r5,r11,r9
	ctx.current_instruction = 0x88080E44;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,-192(r1)
	ctx.current_instruction = 0x88080E4C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// lwz r31,-196(r1)
	ctx.current_instruction = 0x88080E54;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// lbz r4,0(r7)
	ctx.current_instruction = 0x88080E58;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r7,1(r7)
	ctx.current_instruction = 0x88080E5C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// lbz r9,1(r9)
	ctx.current_instruction = 0x88080E60;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r4,r8
	ctx.current_instruction = 0x88080E80;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwzx r9,r9,r8
	ctx.current_instruction = 0x88080E84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// b 0x88080e9c
	goto loc_88080E9C;
loc_88080E94:
	// lwz r7,-196(r1)
	ctx.current_instruction = 0x88080E94;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// lwz r5,-192(r1)
	ctx.current_instruction = 0x88080E98;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
loc_88080E9C:
	// add r8,r24,r22
	ctx.r8.u64 = ctx.r24.u64 + ctx.r22.u64;
	// lwz r18,-188(r1)
	ctx.current_instruction = 0x88080EA0;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// add r9,r25,r23
	ctx.r9.u64 = ctx.r25.u64 + ctx.r23.u64;
	// lwz r16,-184(r1)
	ctx.current_instruction = 0x88080EA8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r8,-196(r1)
	ctx.current_instruction = 0x88080EB4;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r8.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r7,-192(r1)
	ctx.current_instruction = 0x88080EBC;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// li r19,1
	ctx.r19.s64 = 1;
	// rotlwi r15,r8,0
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rotlwi r17,r7,0
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
loc_88080ECC:
	// cmpw cr6,r17,r16
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88080ee0
	if (!ctx.cr6.lt) goto loc_88080EE0;
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
	// stw r19,-176(r1)
	ctx.current_instruction = 0x88080ED8;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r19.u32);
	// stw r17,-184(r1)
	ctx.current_instruction = 0x88080EDC;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r17.u32);
loc_88080EE0:
	// cmpw cr6,r15,r16
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88080ef4
	if (!ctx.cr6.lt) goto loc_88080EF4;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r15,-184(r1)
	ctx.current_instruction = 0x88080EEC;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r15.u32);
	// stw r9,-176(r1)
	ctx.current_instruction = 0x88080EF0;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r9.u32);
loc_88080EF4:
	// lis r9,21845
	ctx.r9.s64 = 1431633920;
	// stw r22,-196(r1)
	ctx.current_instruction = 0x88080EF8;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r22.u32);
	// ori r9,r9,21846
	ctx.r9.u64 = ctx.r9.u64 | 21846;
	// mulhw r8,r18,r9
	ctx.r8.s64 = (int64_t(ctx.r18.s32) * int64_t(ctx.r9.s32)) >> 32;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf. r7,r8,r18
	ctx.r7.u64 = ctx.r18.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8808121c
	if (!ctx.cr0.eq) goto loc_8808121C;
	// mulhw r8,r6,r9
	ctx.r8.s64 = (int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32)) >> 32;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf. r7,r8,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8808121c
	if (ctx.cr0.eq) goto loc_8808121C;
	// clrlwi r23,r6,31
	ctx.r23.u64 = ctx.r6.u32 & 0x1;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// stw r23,-192(r1)
	ctx.current_instruction = 0x88080F40;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r23.u32);
	// ble cr6,0x88081518
	if (!ctx.cr6.gt) goto loc_88081518;
	// lwz r9,-188(r1)
	ctx.current_instruction = 0x88080F48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// li r7,3
	ctx.r7.s64 = 3;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r14,-200(r1)
	ctx.current_instruction = 0x88080F54;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// lwz r3,-204(r1)
	ctx.current_instruction = 0x88080F5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// li r5,0
	ctx.r5.s64 = 0;
	// divwu r9,r4,r7
	ctx.r9.u64 = uint32_t(ctx.r7.u32 ? ctx.r4.u32 / ctx.r7.u32 : 0);
	// add r15,r6,r8
	ctx.r15.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// addi r30,r9,13320
	ctx.r30.s64 = ctx.r9.s64 + 13320;
loc_88080F7C:
	// li r19,0
	ctx.r19.s64 = 0;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmpw cr6,r23,r6
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8808120c
	if (!ctx.cr6.lt) goto loc_8808120C;
	// subf r9,r23,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r23.u64;
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
	// blt cr6,0x8808113c
	if (ctx.cr6.lt) goto loc_8808113C;
	// addi r4,r5,2
	ctx.r4.s64 = ctx.r5.s64 + 2;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r16,r6,-2
	ctx.r16.s64 = ctx.r6.s64 + -2;
loc_88080FC0:
	// add r7,r5,r31
	ctx.r7.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r3,r7,r10
	ctx.current_instruction = 0x88080FC4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// lbzx r28,r9,r7
	ctx.current_instruction = 0x88080FC8;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// extsb r29,r3
	ctx.r29.s64 = ctx.r3.s8;
	// lbzx r26,r7,r11
	ctx.current_instruction = 0x88080FD0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbzx r3,r8,r7
	ctx.current_instruction = 0x88080FD4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// extsb r27,r28
	ctx.r27.s64 = ctx.r28.s8;
	// extsb r28,r26
	ctx.r28.s64 = ctx.r26.s8;
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// extsb r27,r3
	ctx.r27.s64 = ctx.r3.s8;
	// lbzx r3,r7,r10
	ctx.current_instruction = 0x88080FEC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lbzx r26,r9,r7
	ctx.current_instruction = 0x88080FF4;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// extsb r27,r3
	ctx.r27.s64 = ctx.r3.s8;
	// lbzx r24,r7,r11
	ctx.current_instruction = 0x88080FFC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbzx r3,r8,r7
	ctx.current_instruction = 0x88081000;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// extsb r25,r26
	ctx.r25.s64 = ctx.r26.s8;
	// extsb r26,r24
	ctx.r26.s64 = ctx.r24.s8;
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// extsb r25,r3
	ctx.r25.s64 = ctx.r3.s8;
	// lbzx r3,r7,r10
	ctx.current_instruction = 0x88081018;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// add r29,r27,r29
	ctx.r29.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lbzx r23,r9,r7
	ctx.current_instruction = 0x88081020;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// add r24,r26,r25
	ctx.r24.u64 = ctx.r26.u64 + ctx.r25.u64;
	// extsb r27,r3
	ctx.r27.s64 = ctx.r3.s8;
	// lbzx r3,r8,r7
	ctx.current_instruction = 0x8808102C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// extsb r25,r23
	ctx.r25.s64 = ctx.r23.s8;
	// lbzx r26,r7,r11
	ctx.current_instruction = 0x88081034;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// add r7,r4,r31
	ctx.r7.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// extsb r25,r3
	ctx.r25.s64 = ctx.r3.s8;
	// extsb r26,r26
	ctx.r26.s64 = ctx.r26.s8;
	// add r23,r27,r29
	ctx.r23.u64 = ctx.r27.u64 + ctx.r29.u64;
	// add r29,r24,r28
	ctx.r29.u64 = ctx.r24.u64 + ctx.r28.u64;
	// lbzx r3,r7,r10
	ctx.current_instruction = 0x88081050;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// add r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 + ctx.r25.u64;
	// lbzx r24,r7,r11
	ctx.current_instruction = 0x88081058;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbzx r25,r8,r7
	ctx.current_instruction = 0x8808105C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// extsb r28,r3
	ctx.r28.s64 = ctx.r3.s8;
	// lbzx r27,r9,r7
	ctx.current_instruction = 0x88081064;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r3,r26,r29
	ctx.r3.u64 = ctx.r26.u64 + ctx.r29.u64;
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
	// rlwinm r26,r23,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lbzx r29,r7,r10
	ctx.current_instruction = 0x8808107C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r27,r9,r7
	ctx.current_instruction = 0x88081084;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// extsb r22,r25
	ctx.r22.s64 = ctx.r25.s8;
	// lbzx r21,r7,r11
	ctx.current_instruction = 0x8808108C;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// lbzx r23,r8,r7
	ctx.current_instruction = 0x88081094;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
	// lwzx r26,r26,r30
	ctx.current_instruction = 0x880810A0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// extsb r25,r21
	ctx.r25.s64 = ctx.r21.s8;
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// lwzx r27,r3,r30
	ctx.current_instruction = 0x880810AC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// add r20,r26,r20
	ctx.r20.u64 = ctx.r26.u64 + ctx.r20.u64;
	// lbzx r3,r7,r10
	ctx.current_instruction = 0x880810B4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// stb r23,-208(r1)
	ctx.current_instruction = 0x880810BC;
	REX_STORE_U8(ctx.r1.u32 + -208, ctx.r23.u8);
	// extsb r23,r24
	ctx.r23.s64 = ctx.r24.s8;
	// lbzx r24,r9,r7
	ctx.current_instruction = 0x880810C4;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// extsb r28,r3
	ctx.r28.s64 = ctx.r3.s8;
	// lbzx r3,r7,r11
	ctx.current_instruction = 0x880810CC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// add r19,r27,r19
	ctx.r19.u64 = ctx.r27.u64 + ctx.r19.u64;
	// lbzx r7,r8,r7
	ctx.current_instruction = 0x880810D4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// extsb r21,r24
	ctx.r21.s64 = ctx.r24.s8;
	// lbz r24,-208(r1)
	ctx.current_instruction = 0x880810DC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r1.u32 + -208);
	// extsb r24,r24
	ctx.r24.s64 = ctx.r24.s8;
	// add r28,r28,r21
	ctx.r28.u64 = ctx.r28.u64 + ctx.r21.u64;
	// stb r7,-208(r1)
	ctx.current_instruction = 0x880810E8;
	REX_STORE_U8(ctx.r1.u32 + -208, ctx.r7.u8);
	// add r7,r23,r22
	ctx.r7.u64 = ctx.r23.u64 + ctx.r22.u64;
	// add r28,r28,r29
	ctx.r28.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add r29,r25,r24
	ctx.r29.u64 = ctx.r25.u64 + ctx.r24.u64;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r29,r7
	ctx.r7.u64 = ctx.r29.u64 + ctx.r7.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// extsb r29,r3
	ctx.r29.s64 = ctx.r3.s8;
	// lbz r3,-208(r1)
	ctx.current_instruction = 0x88081108;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + -208);
	// lwzx r28,r28,r30
	ctx.current_instruction = 0x8808110C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// cmpw cr6,r31,r16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r16.s32, ctx.xer);
	// extsb r27,r3
	ctx.r27.s64 = ctx.r3.s8;
	// add r18,r28,r18
	ctx.r18.u64 = ctx.r28.u64 + ctx.r18.u64;
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r7,r29,r7
	ctx.r7.u64 = ctx.r29.u64 + ctx.r7.u64;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r3,r30
	ctx.current_instruction = 0x88081128;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// add r17,r7,r17
	ctx.r17.u64 = ctx.r7.u64 + ctx.r17.u64;
	// blt cr6,0x88080fc0
	if (ctx.cr6.lt) goto loc_88080FC0;
	// lwz r23,-192(r1)
	ctx.current_instruction = 0x88081134;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r3,-204(r1)
	ctx.current_instruction = 0x88081138;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
loc_8808113C:
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x880811f8
	if (!ctx.cr6.lt) goto loc_880811F8;
	// add r9,r5,r31
	ctx.r9.u64 = ctx.r5.u64 + ctx.r31.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbzx r27,r9,r11
	ctx.current_instruction = 0x88081150;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r31,r7,r9
	ctx.current_instruction = 0x88081154;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r28,r8,r9
	ctx.current_instruction = 0x88081158;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbzx r4,r9,r10
	ctx.current_instruction = 0x8808115C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// extsb r29,r31
	ctx.r29.s64 = ctx.r31.s8;
	// extsb r31,r27
	ctx.r31.s64 = ctx.r27.s8;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// extsb r28,r28
	ctx.r28.s64 = ctx.r28.s8;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbzx r29,r8,r9
	ctx.current_instruction = 0x88081178;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// lbzx r28,r9,r10
	ctx.current_instruction = 0x88081180;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r27,r7,r9
	ctx.current_instruction = 0x88081184;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// extsb r26,r29
	ctx.r26.s64 = ctx.r29.s8;
	// lbzx r25,r9,r11
	ctx.current_instruction = 0x8808118C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// extsb r29,r28
	ctx.r29.s64 = ctx.r28.s8;
	// extsb r28,r25
	ctx.r28.s64 = ctx.r25.s8;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
	// lbzx r26,r8,r9
	ctx.current_instruction = 0x880811A4;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// add r8,r29,r4
	ctx.r8.u64 = ctx.r29.u64 + ctx.r4.u64;
	// lbzx r7,r7,r9
	ctx.current_instruction = 0x880811AC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// add r27,r28,r27
	ctx.r27.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lbzx r4,r9,r10
	ctx.current_instruction = 0x880811B4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r28,r26
	ctx.r28.s64 = ctx.r26.s8;
	// lbzx r9,r9,r11
	ctx.current_instruction = 0x880811BC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r29,r7
	ctx.r29.s64 = ctx.r7.s8;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// add r9,r27,r31
	ctx.r9.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r4,r30
	ctx.current_instruction = 0x880811E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// lwzx r9,r9,r30
	ctx.current_instruction = 0x880811EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r14,r9,r14
	ctx.r14.u64 = ctx.r9.u64 + ctx.r14.u64;
loc_880811F8:
	// add r9,r20,r18
	ctx.r9.u64 = ctx.r20.u64 + ctx.r18.u64;
	// add r8,r19,r17
	ctx.r8.u64 = ctx.r19.u64 + ctx.r17.u64;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r14,r8,r14
	ctx.r14.u64 = ctx.r8.u64 + ctx.r14.u64;
	// stw r3,-204(r1)
	ctx.current_instruction = 0x88081208;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r3.u32);
loc_8808120C:
	// add r5,r15,r5
	ctx.r5.u64 = ctx.r15.u64 + ctx.r5.u64;
	// bdnz 0x88080f7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88080F7C;
	// stw r14,-200(r1)
	ctx.current_instruction = 0x88081214;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r14.u32);
	// b 0x88081514
	goto loc_88081514;
loc_8808121C:
	// mulhw r9,r6,r9
	ctx.r9.s64 = (int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32)) >> 32;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// clrlwi r22,r18,31
	ctx.r22.u64 = ctx.r18.u32 & 0x1;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r22,-196(r1)
	ctx.current_instruction = 0x8808122C;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r22.u32);
	// cmpw cr6,r22,r18
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r18.s32, ctx.xer);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r23,r9,r6
	ctx.r23.u64 = ctx.r6.u64 - ctx.r9.u64;
	// stw r23,-192(r1)
	ctx.current_instruction = 0x88081240;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r23.u32);
	// bge cr6,0x88081518
	if (!ctx.cr6.lt) goto loc_88081518;
	// lwz r9,-188(r1)
	ctx.current_instruction = 0x88081248;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// mullw r14,r22,r6
	ctx.r14.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r6.s32);
	// subf r9,r22,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r22.u64;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r8,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// addi r7,r9,13320
	ctx.r7.s64 = ctx.r9.s64 + 13320;
loc_8808126C:
	// li r17,0
	ctx.r17.s64 = 0;
	// li r15,0
	ctx.r15.s64 = 0;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// cmpw cr6,r23,r6
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88081508
	if (!ctx.cr6.lt) goto loc_88081508;
	// subf r9,r23,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r23.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// divw r3,r4,r5
	ctx.r3.u64 = uint32_t((ctx.r5.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r4.s32 / ctx.r5.s32 : 0);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x88081428
	if (ctx.cr6.lt) goto loc_88081428;
	// addi r31,r10,2
	ctx.r31.s64 = ctx.r10.s64 + 2;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_880812B0:
	// add r9,r14,r8
	ctx.r9.u64 = ctx.r14.u64 + ctx.r8.u64;
	// lbzx r5,r9,r10
	ctx.current_instruction = 0x880812B4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r4,r31,r9
	ctx.current_instruction = 0x880812B8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r3,r30,r9
	ctx.current_instruction = 0x880812BC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// extsb r27,r5
	ctx.r27.s64 = ctx.r5.s8;
	// extsb r26,r4
	ctx.r26.s64 = ctx.r4.s8;
	// lbzx r5,r9,r11
	ctx.current_instruction = 0x880812C8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r24,r3
	ctx.r24.s64 = ctx.r3.s8;
	// lbzx r4,r29,r9
	ctx.current_instruction = 0x880812D0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// lbzx r3,r28,r9
	ctx.current_instruction = 0x880812D4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// extsb r26,r5
	ctx.r26.s64 = ctx.r5.s8;
	// extsb r25,r4
	ctx.r25.s64 = ctx.r4.s8;
	// extsb r21,r3
	ctx.r21.s64 = ctx.r3.s8;
	// lbzx r5,r9,r10
	ctx.current_instruction = 0x880812EC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r22,r26,r25
	ctx.r22.u64 = ctx.r26.u64 + ctx.r25.u64;
	// lbzx r4,r31,r9
	ctx.current_instruction = 0x880812F4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// add r27,r27,r24
	ctx.r27.u64 = ctx.r27.u64 + ctx.r24.u64;
	// lbzx r3,r30,r9
	ctx.current_instruction = 0x880812FC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// extsb r26,r5
	ctx.r26.s64 = ctx.r5.s8;
	// extsb r25,r4
	ctx.r25.s64 = ctx.r4.s8;
	// lbzx r5,r9,r11
	ctx.current_instruction = 0x88081308;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r23,r3
	ctx.r23.s64 = ctx.r3.s8;
	// lbzx r4,r29,r9
	ctx.current_instruction = 0x88081310;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// lbzx r3,r28,r9
	ctx.current_instruction = 0x88081314;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// addi r9,r14,3
	ctx.r9.s64 = ctx.r14.s64 + 3;
	// add r24,r26,r25
	ctx.r24.u64 = ctx.r26.u64 + ctx.r25.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsb r26,r5
	ctx.r26.s64 = ctx.r5.s8;
	// extsb r25,r4
	ctx.r25.s64 = ctx.r4.s8;
	// add r20,r24,r23
	ctx.r20.u64 = ctx.r24.u64 + ctx.r23.u64;
	// add r25,r26,r25
	ctx.r25.u64 = ctx.r26.u64 + ctx.r25.u64;
	// lbzx r5,r9,r10
	ctx.current_instruction = 0x88081334;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r23,r3
	ctx.r23.s64 = ctx.r3.s8;
	// lbzx r4,r31,r9
	ctx.current_instruction = 0x8808133C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// add r3,r20,r27
	ctx.r3.u64 = ctx.r20.u64 + ctx.r27.u64;
	// extsb r26,r5
	ctx.r26.s64 = ctx.r5.s8;
	// lbzx r5,r9,r11
	ctx.current_instruction = 0x88081348;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r19,r4
	ctx.r19.s64 = ctx.r4.s8;
	// lbzx r4,r29,r9
	ctx.current_instruction = 0x88081350;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// lbzx r24,r30,r9
	ctx.current_instruction = 0x88081354;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// add r27,r22,r21
	ctx.r27.u64 = ctx.r22.u64 + ctx.r21.u64;
	// lbzx r20,r28,r9
	ctx.current_instruction = 0x8808135C;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r25,r25,r23
	ctx.r25.u64 = ctx.r25.u64 + ctx.r23.u64;
	// add r26,r26,r19
	ctx.r26.u64 = ctx.r26.u64 + ctx.r19.u64;
	// add r23,r25,r27
	ctx.r23.u64 = ctx.r25.u64 + ctx.r27.u64;
	// extsb r24,r24
	ctx.r24.s64 = ctx.r24.s8;
	// lbzx r25,r31,r9
	ctx.current_instruction = 0x88081374;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r22,r30,r9
	ctx.current_instruction = 0x8808137C;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// add r26,r26,r24
	ctx.r26.u64 = ctx.r26.u64 + ctx.r24.u64;
	// extsb r24,r25
	ctx.r24.s64 = ctx.r25.s8;
	// lbzx r27,r9,r10
	ctx.current_instruction = 0x88081388;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r25,r22
	ctx.r25.s64 = ctx.r22.s8;
	// lbzx r22,r28,r9
	ctx.current_instruction = 0x88081390;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// lbzx r19,r29,r9
	ctx.current_instruction = 0x88081394;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
	// lbzx r9,r9,r11
	ctx.current_instruction = 0x8808139C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r23,r23,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r27,r24
	ctx.r27.u64 = ctx.r27.u64 + ctx.r24.u64;
	// lwzx r21,r3,r7
	ctx.current_instruction = 0x880813A8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// extsb r24,r4
	ctx.r24.s64 = ctx.r4.s8;
	// stb r22,-207(r1)
	ctx.current_instruction = 0x880813B0;
	REX_STORE_U8(ctx.r1.u32 + -207, ctx.r22.u8);
	// add r18,r21,r18
	ctx.r18.u64 = ctx.r21.u64 + ctx.r18.u64;
	// lbz r3,-207(r1)
	ctx.current_instruction = 0x880813B8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + -207);
	// stb r9,-208(r1)
	ctx.current_instruction = 0x880813BC;
	REX_STORE_U8(ctx.r1.u32 + -208, ctx.r9.u8);
	// add r9,r27,r25
	ctx.r9.u64 = ctx.r27.u64 + ctx.r25.u64;
	// lbz r4,-208(r1)
	ctx.current_instruction = 0x880813C4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + -208);
	// extsb r27,r19
	ctx.r27.s64 = ctx.r19.s8;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// lwzx r22,r23,r7
	ctx.current_instruction = 0x880813D0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r7.u32);
	// extsb r26,r5
	ctx.r26.s64 = ctx.r5.s8;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r26,r24
	ctx.r24.u64 = ctx.r26.u64 + ctx.r24.u64;
	// extsb r23,r20
	ctx.r23.s64 = ctx.r20.s8;
	// extsb r26,r3
	ctx.r26.s64 = ctx.r3.s8;
	// lwzx r25,r5,r7
	ctx.current_instruction = 0x880813E8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// add r27,r9,r27
	ctx.r27.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r9,r24,r23
	ctx.r9.u64 = ctx.r24.u64 + ctx.r23.u64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// addi r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 + 6;
	// add r5,r27,r9
	ctx.r5.u64 = ctx.r27.u64 + ctx.r9.u64;
	// addi r9,r6,-3
	ctx.r9.s64 = ctx.r6.s64 + -3;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// add r17,r22,r17
	ctx.r17.u64 = ctx.r22.u64 + ctx.r17.u64;
	// add r16,r25,r16
	ctx.r16.u64 = ctx.r25.u64 + ctx.r16.u64;
	// lwzx r9,r4,r7
	ctx.current_instruction = 0x88081418;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// add r15,r9,r15
	ctx.r15.u64 = ctx.r9.u64 + ctx.r15.u64;
	// blt cr6,0x880812b0
	if (ctx.cr6.lt) goto loc_880812B0;
	// lwz r23,-192(r1)
	ctx.current_instruction = 0x88081424;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
loc_88081428:
	// lwz r24,-204(r1)
	ctx.current_instruction = 0x88081428;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// lwz r25,-200(r1)
	ctx.current_instruction = 0x88081430;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// bge cr6,0x880814f0
	if (!ctx.cr6.lt) goto loc_880814F0;
	// add r9,r14,r8
	ctx.r9.u64 = ctx.r14.u64 + ctx.r8.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// lbzx r3,r9,r10
	ctx.current_instruction = 0x8808144C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r29,r8,r9
	ctx.current_instruction = 0x88081450;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// extsb r30,r3
	ctx.r30.s64 = ctx.r3.s8;
	// lbzx r28,r5,r9
	ctx.current_instruction = 0x88081458;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// extsb r26,r29
	ctx.r26.s64 = ctx.r29.s8;
	// lbzx r3,r4,r9
	ctx.current_instruction = 0x88081460;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// lbzx r22,r31,r9
	ctx.current_instruction = 0x88081464;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r27,r28
	ctx.r27.s64 = ctx.r28.s8;
	// lbzx r29,r9,r11
	ctx.current_instruction = 0x8808146C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// extsb r28,r3
	ctx.r28.s64 = ctx.r3.s8;
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// lbzx r3,r8,r9
	ctx.current_instruction = 0x88081480;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// add r8,r30,r27
	ctx.r8.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lbzx r27,r4,r9
	ctx.current_instruction = 0x88081488;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lbzx r30,r9,r10
	ctx.current_instruction = 0x88081490;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r4,r3
	ctx.r4.s64 = ctx.r3.s8;
	// lbzx r3,r9,r11
	ctx.current_instruction = 0x88081498;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r28,r22
	ctx.r28.s64 = ctx.r22.s8;
	// lbzx r26,r5,r9
	ctx.current_instruction = 0x880814A0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// lbzx r31,r31,r9
	ctx.current_instruction = 0x880814A8;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r9,r27
	ctx.r9.s64 = ctx.r27.s8;
	// extsb r5,r3
	ctx.r5.s64 = ctx.r3.s8;
	// add r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 + ctx.r4.u64;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// extsb r30,r26
	ctx.r30.s64 = ctx.r26.s8;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// add r9,r29,r28
	ctx.r9.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r4,r7
	ctx.current_instruction = 0x880814E0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwzx r9,r3,r7
	ctx.current_instruction = 0x880814E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// add r24,r8,r24
	ctx.r24.u64 = ctx.r8.u64 + ctx.r24.u64;
	// add r25,r9,r25
	ctx.r25.u64 = ctx.r9.u64 + ctx.r25.u64;
loc_880814F0:
	// add r8,r17,r15
	ctx.r8.u64 = ctx.r17.u64 + ctx.r15.u64;
	// add r9,r18,r16
	ctx.r9.u64 = ctx.r18.u64 + ctx.r16.u64;
	// add r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 + ctx.r25.u64;
	// add r5,r9,r24
	ctx.r5.u64 = ctx.r9.u64 + ctx.r24.u64;
	// stw r8,-200(r1)
	ctx.current_instruction = 0x88081500;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r8.u32);
	// stw r5,-204(r1)
	ctx.current_instruction = 0x88081504;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r5.u32);
loc_88081508:
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r14,r9,r14
	ctx.r14.u64 = ctx.r9.u64 + ctx.r14.u64;
	// bdnz 0x8808126c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8808126C;
loc_88081514:
	// lwz r22,-196(r1)
	ctx.current_instruction = 0x88081514;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
loc_88081518:
	// lwz r4,-188(r1)
	ctx.current_instruction = 0x88081518;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lwz r30,-200(r1)
	ctx.current_instruction = 0x88081520;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r31,-204(r1)
	ctx.current_instruction = 0x88081524;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// ble cr6,0x880815b0
	if (!ctx.cr6.gt) goto loc_880815B0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_88081538:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8808156c
	if (!ctx.cr6.gt) goto loc_8808156C;
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
loc_88081548:
	// lbz r3,0(r8)
	ctx.current_instruction = 0x88081548;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88081568
	if (!ctx.cr6.eq) goto loc_88081568;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x88081548
	if (ctx.cr6.lt) goto loc_88081548;
	// b 0x8808156c
	goto loc_8808156C;
loc_88081568:
	// add r31,r4,r31
	ctx.r31.u64 = ctx.r4.u64 + ctx.r31.u64;
loc_8808156C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x880815a0
	if (!ctx.cr6.gt) goto loc_880815A0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_8808157C:
	// lbz r3,0(r8)
	ctx.current_instruction = 0x8808157C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8808159c
	if (!ctx.cr6.eq) goto loc_8808159C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8808157c
	if (ctx.cr6.lt) goto loc_8808157C;
	// b 0x880815a0
	goto loc_880815A0;
loc_8808159C:
	// add r30,r4,r30
	ctx.r30.u64 = ctx.r4.u64 + ctx.r30.u64;
loc_880815A0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bdnz 0x88081538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88081538;
loc_880815B0:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x88081618
	if (ctx.cr6.eq) goto loc_88081618;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// cmpw cr6,r23,r6
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x880815e8
	if (!ctx.cr6.lt) goto loc_880815E8;
loc_880815C4:
	// lbzx r8,r9,r10
	ctx.current_instruction = 0x880815C4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x880815e0
	if (!ctx.cr6.eq) goto loc_880815E0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x880815c4
	if (ctx.cr6.lt) goto loc_880815C4;
	// b 0x880815e8
	goto loc_880815E8;
loc_880815E0:
	// subf r9,r23,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r23.u64;
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
loc_880815E8:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// cmpw cr6,r23,r6
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88081618
	if (!ctx.cr6.lt) goto loc_88081618;
loc_880815F4:
	// lbzx r8,r11,r9
	ctx.current_instruction = 0x880815F4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x88081610
	if (!ctx.cr6.eq) goto loc_88081610;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x880815f4
	if (ctx.cr6.lt) goto loc_880815F4;
	// b 0x88081618
	goto loc_88081618;
loc_88081610:
	// subf r11,r23,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r23.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_88081618:
	// lwz r5,-184(r1)
	ctx.current_instruction = 0x88081618;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88081630
	if (!ctx.cr6.lt) goto loc_88081630;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x88081634
	goto loc_88081634;
loc_88081630:
	// lwz r3,-176(r1)
	ctx.current_instruction = 0x88081630;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
loc_88081634:
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88081644
	if (!ctx.cr6.lt) goto loc_88081644;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,4
	ctx.r3.s64 = 4;
loc_88081644:
	// lwz r11,-172(r1)
	ctx.current_instruction = 0x88081644;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// ble cr6,0x88081690
	if (!ctx.cr6.gt) goto loc_88081690;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8808165C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x88081688
	if (!ctx.cr6.gt) goto loc_88081688;
loc_88081668:
	// lbzx r7,r9,r11
	ctx.current_instruction = 0x88081668;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x88081684
	if (!ctx.cr6.eq) goto loc_88081684;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88081668
	if (ctx.cr6.lt) goto loc_88081668;
	// b 0x88081688
	goto loc_88081688;
loc_88081684:
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
loc_88081688:
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// bdnz 0x8808165c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8808165C;
loc_88081690:
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x880816a0
	if (!ctx.cr6.lt) goto loc_880816A0;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// li r3,5
	ctx.r3.s64 = 5;
loc_880816A0:
	// lwz r11,-168(r1)
	ctx.current_instruction = 0x880816A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// ble cr6,0x880816f4
	if (!ctx.cr6.gt) goto loc_880816F4;
loc_880816B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x880816e8
	if (!ctx.cr6.gt) goto loc_880816E8;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_880816C4:
	// lbz r31,0(r9)
	ctx.current_instruction = 0x880816C4;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x880816e4
	if (!ctx.cr6.eq) goto loc_880816E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x880816c4
	if (ctx.cr6.lt) goto loc_880816C4;
	// b 0x880816e8
	goto loc_880816E8;
loc_880816E4:
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
loc_880816E8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x880816b4
	if (ctx.cr6.lt) goto loc_880816B4;
loc_880816F4:
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88081704
	if (!ctx.cr6.lt) goto loc_88081704;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r3,6
	ctx.r3.s64 = 6;
loc_88081704:
	// lwz r11,20(r1)
	ctx.current_instruction = 0x88081704;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,2260(r11)
	ctx.current_instruction = 0x88081708;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2260);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8808172c
	if (!ctx.cr6.eq) goto loc_8808172C;
	// lwz r10,2272(r11)
	ctx.current_instruction = 0x88081714;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2272);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8808172c
	if (!ctx.cr6.eq) goto loc_8808172C;
	// lwz r11,2824(r11)
	ctx.current_instruction = 0x88081720;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88081734
	if (ctx.cr6.eq) goto loc_88081734;
loc_8808172C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88081748
	goto loc_88081748;
loc_88081734:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88081748
	if (ctx.cr6.eq) goto loc_88081748;
	// lwz r11,-164(r1)
	ctx.current_instruction = 0x8808173C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_88081748:
	// lwz r11,28(r1)
	ctx.current_instruction = 0x88081748;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r10,-180(r1)
	ctx.current_instruction = 0x8808174C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// lwz r9,36(r1)
	ctx.current_instruction = 0x88081750;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stw r3,0(r11)
	ctx.current_instruction = 0x88081758;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r8,0(r9)
	ctx.current_instruction = 0x8808175C;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C06B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C06B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C06B0) {
			switch (rex_dispatch_address) {
				case 0x880C06B8:
				case 0x880C0728:
				case 0x880C0794:
				case 0x880C07EC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C06B0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C06B8: goto loc_880C06B8;
		case 0x880C0728: goto loc_880C0728;
		case 0x880C0794: goto loc_880C0794;
		case 0x880C07EC: goto loc_880C07EC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880C06B8;
	__savegprlr_29(ctx, base);
loc_880C06B8:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x880C06B8;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,20212(r3)
	ctx.current_instruction = 0x880C06C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20212);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stw r31,128(r1)
	ctx.current_instruction = 0x880C06CC;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,4(r30)
	ctx.current_instruction = 0x880C06D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bne cr6,0x880c0754
	if (!ctx.cr6.eq) goto loc_880C0754;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880c06f4
	if (!ctx.cr6.eq) goto loc_880C06F4;
	// lwz r11,27968(r30)
	ctx.current_instruction = 0x880C06E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 27968);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x880c06f8
	if (ctx.cr6.eq) goto loc_880C06F8;
loc_880C06F4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_880C06F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,84(r1)
	ctx.current_instruction = 0x880C06FC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r11,92(r1)
	ctx.current_instruction = 0x880C0704;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r3,124(r1)
	ctx.current_instruction = 0x880C0708;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,116(r1)
	ctx.current_instruction = 0x880C0714;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,108(r1)
	ctx.current_instruction = 0x880C071C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,100(r1)
	ctx.current_instruction = 0x880C0720;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bl 0x880fc1b0
	ctx.lr = 0x880C0728;
	sub_880FC1B0(ctx, base);
loc_880C0728:
	// stw r3,20212(r30)
	ctx.current_instruction = 0x880C0728;
	REX_STORE_U32(ctx.r30.u32 + 20212, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880c0748
	if (ctx.cr6.eq) goto loc_880C0748;
	// lwz r11,128(r1)
	ctx.current_instruction = 0x880C0734;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c079c
	if (ctx.cr6.eq) goto loc_880C079C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x880c079c
	if (ctx.cr6.eq) goto loc_880C079C;
loc_880C0748:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880C0754:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880c076c
	if (!ctx.cr6.eq) goto loc_880C076C;
	// lwz r11,27968(r30)
	ctx.current_instruction = 0x880C075C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 27968);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x880c0770
	if (ctx.cr6.eq) goto loc_880C0770;
loc_880C076C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_880C0770:
	// stw r11,92(r1)
	ctx.current_instruction = 0x880C0770;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r31,116(r1)
	ctx.current_instruction = 0x880C0778;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,108(r1)
	ctx.current_instruction = 0x880C0780;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,100(r1)
	ctx.current_instruction = 0x880C0784;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r9,84(r1)
	ctx.current_instruction = 0x880C0788;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x880fbd48
	ctx.lr = 0x880C0794;
	sub_880FBD48(ctx, base);
loc_880C0794:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,128(r1)
	ctx.current_instruction = 0x880C0798;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
loc_880C079C:
	// lwz r3,20212(r30)
	ctx.current_instruction = 0x880C079C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 20212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880c0748
	if (ctx.cr6.eq) goto loc_880C0748;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c07b8
	if (ctx.cr6.eq) goto loc_880C07B8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x880c0748
	if (!ctx.cr6.eq) goto loc_880C0748;
loc_880C07B8:
	// lwz r11,4(r30)
	ctx.current_instruction = 0x880C07B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880c07d4
	if (!ctx.cr6.eq) goto loc_880C07D4;
	// lwz r11,27968(r30)
	ctx.current_instruction = 0x880C07C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 27968);
	// li r6,2
	ctx.r6.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c07d8
	if (ctx.cr6.eq) goto loc_880C07D8;
loc_880C07D4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_880C07D8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,276(r1)
	ctx.current_instruction = 0x880C07DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r7,268(r1)
	ctx.current_instruction = 0x880C07E0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r5,260(r1)
	ctx.current_instruction = 0x880C07E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// bl 0x880fbca8
	ctx.lr = 0x880C07EC;
	sub_880FBCA8(ctx, base);
loc_880C07EC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880c07fc
	if (ctx.cr6.eq) goto loc_880C07FC;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x880c0748
	if (!ctx.cr6.eq) goto loc_880C0748;
loc_880C07FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C30B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C30B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C30B8) {
			switch (rex_dispatch_address) {
				case 0x880C30C0:
				case 0x880C3334:
				case 0x880C3380:
				case 0x880C3418:
				case 0x880C3468:
				case 0x880C34BC:
				case 0x880C3504:
				case 0x880C35B0:
				case 0x880C3600:
				case 0x880C365C:
				case 0x880C36AC:
				case 0x880C3770:
				case 0x880C37B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C30B8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C30C0: goto loc_880C30C0;
		case 0x880C3334: goto loc_880C3334;
		case 0x880C3380: goto loc_880C3380;
		case 0x880C3418: goto loc_880C3418;
		case 0x880C3468: goto loc_880C3468;
		case 0x880C34BC: goto loc_880C34BC;
		case 0x880C3504: goto loc_880C3504;
		case 0x880C35B0: goto loc_880C35B0;
		case 0x880C3600: goto loc_880C3600;
		case 0x880C365C: goto loc_880C365C;
		case 0x880C36AC: goto loc_880C36AC;
		case 0x880C3770: goto loc_880C3770;
		case 0x880C37B8: goto loc_880C37B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880C30C0;
	__savegprlr_14(ctx, base);
loc_880C30C0:
	// stfd f29,-176(r1)
	ctx.current_instruction = 0x880C30C0;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	ctx.current_instruction = 0x880C30C4;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	ctx.current_instruction = 0x880C30C8;
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-432(r1)
	ctx.current_instruction = 0x880C30CC;
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20036(r3)
	ctx.current_instruction = 0x880C30D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20036);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,492(r1)
	ctx.current_instruction = 0x880C30D8;
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r8.u32);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// addi r8,r11,5000
	ctx.r8.s64 = ctx.r11.s64 + 5000;
	// stw r10,508(r1)
	ctx.current_instruction = 0x880C30E4;
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r10.u32);
	// mulli r10,r6,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(276));
	// stw r7,484(r1)
	ctx.current_instruction = 0x880C30EC;
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r7.u32);
	// stw r9,500(r1)
	ctx.current_instruction = 0x880C30F0;
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r9.u32);
	// lwz r9,7764(r3)
	ctx.current_instruction = 0x880C30F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// stw r5,468(r1)
	ctx.current_instruction = 0x880C30F8;
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r5.u32);
	// stw r4,172(r1)
	ctx.current_instruction = 0x880C30FC;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,4997
	ctx.r7.s64 = ctx.r11.s64 + 4997;
	// add r15,r9,r10
	ctx.r15.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r28
	ctx.current_instruction = 0x880C3110;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// lwzx r17,r3,r28
	ctx.current_instruction = 0x880C3114;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r28.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880C3118;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bge cr6,0x880c3eb4
	if (!ctx.cr6.lt) goto loc_880C3EB4;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lwz r22,628(r1)
	ctx.current_instruction = 0x880C3124;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lwz r21,620(r1)
	ctx.current_instruction = 0x880C312C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// addi r7,r11,23304
	ctx.r7.s64 = ctx.r11.s64 + 23304;
	// addi r6,r10,8760
	ctx.r6.s64 = ctx.r10.s64 + 8760;
	// lfd f31,12088(r9)
	ctx.current_instruction = 0x880C3140;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r9.u32 + 12088);
	// lfd f29,1488(r8)
	ctx.current_instruction = 0x880C3144;
	ctx.f29.u64 = REX_LOAD_U64(ctx.r8.u32 + 1488);
	// stw r7,112(r1)
	ctx.current_instruction = 0x880C3148;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r6,208(r1)
	ctx.current_instruction = 0x880C314C;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
loc_880C3150:
	// lwz r11,720(r28)
	ctx.current_instruction = 0x880C3150;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 720);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,164(r1)
	ctx.current_instruction = 0x880C3158;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x880c3e9c
	if (!ctx.cr6.gt) goto loc_880C3E9C;
loc_880C3164:
	// lwz r11,84(r15)
	ctx.current_instruction = 0x880C3164;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c3df0
	if (!ctx.cr6.eq) goto loc_880C3DF0;
	// addi r11,r15,4
	ctx.r11.s64 = ctx.r15.s64 + 4;
	// lwz r6,484(r1)
	ctx.current_instruction = 0x880C3174;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// lwz r10,1536(r28)
	ctx.current_instruction = 0x880C3178;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 1536);
	// addi r18,r15,128
	ctx.r18.s64 = ctx.r15.s64 + 128;
	// stw r11,116(r1)
	ctx.current_instruction = 0x880C3180;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r15,134
	ctx.r9.s64 = ctx.r15.s64 + 134;
	// addi r8,r15,140
	ctx.r8.s64 = ctx.r15.s64 + 140;
	// stw r11,124(r1)
	ctx.current_instruction = 0x880C3190;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r7,r15,56
	ctx.r7.s64 = ctx.r15.s64 + 56;
	// stw r11,104(r1)
	ctx.current_instruction = 0x880C3198;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,92(r1)
	ctx.current_instruction = 0x880C319C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,120(r1)
	ctx.current_instruction = 0x880C31A4;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880C31A8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r6,108(r1)
	ctx.current_instruction = 0x880C31AC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r11,132(r1)
	ctx.current_instruction = 0x880C31B0;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,128(r1)
	ctx.current_instruction = 0x880C31B4;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,148(r1)
	ctx.current_instruction = 0x880C31B8;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,156(r1)
	ctx.current_instruction = 0x880C31BC;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// beq cr6,0x880c31e8
	if (ctx.cr6.eq) goto loc_880C31E8;
	// lwz r11,0(r15)
	ctx.current_instruction = 0x880C31C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// rlwinm r11,r11,10,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// addi r10,r11,5000
	ctx.r10.s64 = ctx.r11.s64 + 5000;
	// addi r5,r11,4997
	ctx.r5.s64 = ctx.r11.s64 + 4997;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r28
	ctx.current_instruction = 0x880C31DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	// lwzx r17,r3,r28
	ctx.current_instruction = 0x880C31E0;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r28.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880C31E4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_880C31E8:
	// lwz r11,100(r15)
	ctx.current_instruction = 0x880C31E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 100);
	// subfic r29,r15,-180
	ctx.xer.ca = ctx.r15.u32 <= 4294967116;
	ctx.r29.u64 = static_cast<uint64_t>(-180) - ctx.r15.u64;
	// lwz r5,208(r1)
	ctx.current_instruction = 0x880C31F0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r31,r15,180
	ctx.r31.s64 = ctx.r15.s64 + 180;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,516(r1)
	ctx.current_instruction = 0x880C31FC;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r30,556(r1)
	ctx.current_instruction = 0x880C3200;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// subf r10,r18,r15
	ctx.r10.u64 = ctx.r15.u64 - ctx.r18.u64;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r27,500(r1)
	ctx.current_instruction = 0x880C320C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r24,564(r1)
	ctx.current_instruction = 0x880C3210;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 564);
	// addi r10,r10,74
	ctx.r10.s64 = ctx.r10.s64 + 74;
	// lwz r20,508(r1)
	ctx.current_instruction = 0x880C3218;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// subf r9,r18,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r18.u64;
	// lwz r26,548(r1)
	ctx.current_instruction = 0x880C3220;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// subf r8,r18,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r18.u64;
	// lwz r4,492(r1)
	ctx.current_instruction = 0x880C3228;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// subf r30,r20,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r20.u64;
	// lwz r11,524(r1)
	ctx.current_instruction = 0x880C3230;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lfs f30,-4(r3)
	ctx.current_instruction = 0x880C3234;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -4);
	ctx.f30.f64 = double(temp.f32);
	// lwz r5,540(r1)
	ctx.current_instruction = 0x880C3238;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// subf r3,r14,r27
	ctx.r3.u64 = ctx.r27.u64 - ctx.r14.u64;
	// lwz r25,532(r1)
	ctx.current_instruction = 0x880C3240;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// subf r4,r20,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r20.u64;
	// stw r29,188(r1)
	ctx.current_instruction = 0x880C3248;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// subf r29,r18,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r18.u64;
	// subf r7,r6,r24
	ctx.r7.u64 = ctx.r24.u64 - ctx.r6.u64;
	// stw r31,88(r1)
	ctx.current_instruction = 0x880C3254;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// subf r11,r20,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r20.u64;
	// stw r4,192(r1)
	ctx.current_instruction = 0x880C325C;
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// subf r5,r20,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r20.u64;
	// stw r30,220(r1)
	ctx.current_instruction = 0x880C3264;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// subf r31,r14,r26
	ctx.r31.u64 = ctx.r26.u64 - ctx.r14.u64;
	// stw r11,204(r1)
	ctx.current_instruction = 0x880C326C;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// subf r27,r14,r25
	ctx.r27.u64 = ctx.r25.u64 - ctx.r14.u64;
	// stw r5,212(r1)
	ctx.current_instruction = 0x880C3274;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r10,184(r1)
	ctx.current_instruction = 0x880C327C;
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stw r3,140(r1)
	ctx.current_instruction = 0x880C3280;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// stw r31,180(r1)
	ctx.current_instruction = 0x880C3284;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r27,136(r1)
	ctx.current_instruction = 0x880C3288;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// stw r9,200(r1)
	ctx.current_instruction = 0x880C328C;
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// stw r8,160(r1)
	ctx.current_instruction = 0x880C3290;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// stw r29,196(r1)
	ctx.current_instruction = 0x880C3294;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r7,216(r1)
	ctx.current_instruction = 0x880C3298;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r7.u32);
	// stw r6,168(r1)
	ctx.current_instruction = 0x880C329C;
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
loc_880C32A0:
	// lwz r11,184(r1)
	ctx.current_instruction = 0x880C32A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r16,r25
	ctx.r16.u64 = ctx.r25.u64;
	// stw r25,144(r1)
	ctx.current_instruction = 0x880C32AC;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// stw r25,176(r1)
	ctx.current_instruction = 0x880C32B0;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// mr r19,r25
	ctx.r19.u64 = ctx.r25.u64;
	// stw r25,152(r1)
	ctx.current_instruction = 0x880C32B8;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// lbzx r10,r18,r11
	ctx.current_instruction = 0x880C32C0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r11.u32);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880c3998
	if (!ctx.cr6.eq) goto loc_880C3998;
	// lwz r11,116(r1)
	ctx.current_instruction = 0x880C32D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x880C32D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c3384
	if (ctx.cr6.eq) goto loc_880C3384;
	// lwz r27,192(r1)
	ctx.current_instruction = 0x880C32E0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,30212(r28)
	ctx.current_instruction = 0x880C32E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 30212);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// stw r11,132(r1)
	ctx.current_instruction = 0x880C32F0;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lhzx r9,r20,r27
	ctx.current_instruction = 0x880C32F4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r27.u32);
	// lwz r16,4(r10)
	ctx.current_instruction = 0x880C32F8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addic. r7,r8,-2
	ctx.xer.ca = ctx.r8.u32 > 1;
	ctx.r7.s64 = ctx.r8.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble 0x880c3350
	if (!ctx.cr0.gt) goto loc_880C3350;
	// lwz r11,108(r1)
	ctx.current_instruction = 0x880C3308;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_880C3310:
	// lhz r10,6(r30)
	ctx.current_instruction = 0x880C3310;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lhzu r11,4(r30)
	ctx.current_instruction = 0x880C3318;
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8810f120
	ctx.lr = 0x880C3334;
	sub_8810F120(ctx, base);
loc_880C3334:
	// lhzx r9,r20,r27
	ctx.current_instruction = 0x880C3334;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r27.u32);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r19,r3,r19
	ctx.r19.u64 = ctx.r3.u64 + ctx.r19.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880c3310
	if (ctx.cr6.lt) goto loc_880C3310;
loc_880C3350:
	// lwz r10,108(r1)
	ctx.current_instruction = 0x880C3350;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r6,84(r1)
	ctx.current_instruction = 0x880C335C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r9,2(r11)
	ctx.current_instruction = 0x880C336C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r5,0(r11)
	ctx.current_instruction = 0x880C3370;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// bl 0x8810f240
	ctx.lr = 0x880C3380;
	sub_8810F240(ctx, base);
loc_880C3380:
	// add r19,r3,r19
	ctx.r19.u64 = ctx.r3.u64 + ctx.r19.u64;
loc_880C3384:
	// lbz r11,0(r18)
	ctx.current_instruction = 0x880C3384;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c3508
	if (ctx.cr6.eq) goto loc_880C3508;
	// lwz r9,30212(r28)
	ctx.current_instruction = 0x880C3394;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 30212);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,112(r1)
	ctx.current_instruction = 0x880C339C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r7,r10,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,104(r1)
	ctx.current_instruction = 0x880C33A8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r3,128(r1)
	ctx.current_instruction = 0x880C33B8;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// lwz r10,4(r6)
	ctx.current_instruction = 0x880C33BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwzx r11,r11,r4
	ctx.current_instruction = 0x880C33C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r10,144(r1)
	ctx.current_instruction = 0x880C33C8;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,104(r1)
	ctx.current_instruction = 0x880C33CC;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// beq cr6,0x880c346c
	if (ctx.cr6.eq) goto loc_880C346C;
	// lhz r11,0(r20)
	ctx.current_instruction = 0x880C33D4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r9.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x880c3434
	if (!ctx.cr0.gt) goto loc_880C3434;
	// lwz r11,140(r1)
	ctx.current_instruction = 0x880C33E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// add r11,r14,r11
	ctx.r11.u64 = ctx.r14.u64 + ctx.r11.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_880C33F4:
	// lhz r10,6(r30)
	ctx.current_instruction = 0x880C33F4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lhzu r11,4(r30)
	ctx.current_instruction = 0x880C33FC;
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8810f120
	ctx.lr = 0x880C3418;
	sub_8810F120(ctx, base);
loc_880C3418:
	// lhz r9,0(r20)
	ctx.current_instruction = 0x880C3418;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r23,r3,r23
	ctx.r23.u64 = ctx.r3.u64 + ctx.r23.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880c33f4
	if (ctx.cr6.lt) goto loc_880C33F4;
loc_880C3434:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,140(r1)
	ctx.current_instruction = 0x880C3438;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r6,84(r1)
	ctx.current_instruction = 0x880C3440;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r9,2(r11)
	ctx.current_instruction = 0x880C3454;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r5,0(r11)
	ctx.current_instruction = 0x880C3458;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// bl 0x8810f240
	ctx.lr = 0x880C3468;
	sub_8810F240(ctx, base);
loc_880C3468:
	// add r23,r3,r23
	ctx.r23.u64 = ctx.r3.u64 + ctx.r23.u64;
loc_880C346C:
	// lbz r11,0(r18)
	ctx.current_instruction = 0x880C346C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c3508
	if (ctx.cr6.eq) goto loc_880C3508;
	// lwz r27,204(r1)
	ctx.current_instruction = 0x880C347C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lhzx r11,r20,r27
	ctx.current_instruction = 0x880C3484;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r27.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r9.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x880c34d8
	if (!ctx.cr0.gt) goto loc_880C34D8;
	// addi r30,r14,-4
	ctx.r30.s64 = ctx.r14.s64 + -4;
loc_880C3498:
	// lhz r10,6(r30)
	ctx.current_instruction = 0x880C3498;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lhzu r11,4(r30)
	ctx.current_instruction = 0x880C34A0;
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8810f120
	ctx.lr = 0x880C34BC;
	sub_8810F120(ctx, base);
loc_880C34BC:
	// lhzx r9,r20,r27
	ctx.current_instruction = 0x880C34BC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r27.u32);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r23,r3,r23
	ctx.r23.u64 = ctx.r3.u64 + ctx.r23.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880c3498
	if (ctx.cr6.lt) goto loc_880C3498;
loc_880C34D8:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,84(r1)
	ctx.current_instruction = 0x880C34DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r10,2(r11)
	ctx.current_instruction = 0x880C34F0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.current_instruction = 0x880C34F4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// bl 0x8810f240
	ctx.lr = 0x880C3504;
	sub_8810F240(ctx, base);
loc_880C3504:
	// add r23,r3,r23
	ctx.r23.u64 = ctx.r3.u64 + ctx.r23.u64;
loc_880C3508:
	// lwz r26,200(r1)
	ctx.current_instruction = 0x880C3508;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lbzx r11,r18,r26
	ctx.current_instruction = 0x880C350C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r26.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c36b0
	if (ctx.cr6.eq) goto loc_880C36B0;
	// lbz r9,0(r18)
	ctx.current_instruction = 0x880C351C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r18.u32 + 0);
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r5,112(r1)
	ctx.current_instruction = 0x880C3528;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// lwz r10,30212(r28)
	ctx.current_instruction = 0x880C3530;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 30212);
	// addi r9,r5,4
	ctx.r9.s64 = ctx.r5.s64 + 4;
	// lwz r4,92(r1)
	ctx.current_instruction = 0x880C3538;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,148(r1)
	ctx.current_instruction = 0x880C3548;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwzx r11,r7,r9
	ctx.current_instruction = 0x880C3550;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r5,28(r6)
	ctx.current_instruction = 0x880C3558;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 28);
	// stw r4,92(r1)
	ctx.current_instruction = 0x880C355C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r5,176(r1)
	ctx.current_instruction = 0x880C3560;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// beq cr6,0x880c3604
	if (ctx.cr6.eq) goto loc_880C3604;
	// lwz r27,212(r1)
	ctx.current_instruction = 0x880C3568;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// li r31,0
	ctx.r31.s64 = 0;
	// lhzx r11,r20,r27
	ctx.current_instruction = 0x880C3570;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r27.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r9.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x880c35cc
	if (!ctx.cr0.gt) goto loc_880C35CC;
	// lwz r11,136(r1)
	ctx.current_instruction = 0x880C3580;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// add r11,r14,r11
	ctx.r11.u64 = ctx.r14.u64 + ctx.r11.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_880C358C:
	// lhz r10,6(r30)
	ctx.current_instruction = 0x880C358C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lhzu r11,4(r30)
	ctx.current_instruction = 0x880C3594;
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8810f120
	ctx.lr = 0x880C35B0;
	sub_8810F120(ctx, base);
loc_880C35B0:
	// lhzx r9,r20,r27
	ctx.current_instruction = 0x880C35B0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r27.u32);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880c358c
	if (ctx.cr6.lt) goto loc_880C358C;
loc_880C35CC:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,136(r1)
	ctx.current_instruction = 0x880C35D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r6,84(r1)
	ctx.current_instruction = 0x880C35D8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r9,2(r11)
	ctx.current_instruction = 0x880C35EC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r5,0(r11)
	ctx.current_instruction = 0x880C35F0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// bl 0x8810f240
	ctx.lr = 0x880C3600;
	sub_8810F240(ctx, base);
loc_880C3600:
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
loc_880C3604:
	// lbzx r11,r18,r26
	ctx.current_instruction = 0x880C3604;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r26.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c36b0
	if (ctx.cr6.eq) goto loc_880C36B0;
	// lwz r27,220(r1)
	ctx.current_instruction = 0x880C3614;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r31,0
	ctx.r31.s64 = 0;
	// lhzx r11,r20,r27
	ctx.current_instruction = 0x880C361C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r27.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r9.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x880c3678
	if (!ctx.cr0.gt) goto loc_880C3678;
	// lwz r11,180(r1)
	ctx.current_instruction = 0x880C362C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// add r11,r14,r11
	ctx.r11.u64 = ctx.r14.u64 + ctx.r11.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_880C3638:
	// lhz r10,6(r30)
	ctx.current_instruction = 0x880C3638;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lhzu r11,4(r30)
	ctx.current_instruction = 0x880C3640;
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8810f120
	ctx.lr = 0x880C365C;
	sub_8810F120(ctx, base);
loc_880C365C:
	// lhzx r9,r20,r27
	ctx.current_instruction = 0x880C365C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r27.u32);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880c3638
	if (ctx.cr6.lt) goto loc_880C3638;
loc_880C3678:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,180(r1)
	ctx.current_instruction = 0x880C367C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r6,84(r1)
	ctx.current_instruction = 0x880C3684;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r9,2(r11)
	ctx.current_instruction = 0x880C3698;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r5,0(r11)
	ctx.current_instruction = 0x880C369C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// bl 0x8810f240
	ctx.lr = 0x880C36AC;
	sub_8810F240(ctx, base);
loc_880C36AC:
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
loc_880C36B0:
	// lwz r11,160(r1)
	ctx.current_instruction = 0x880C36B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,216(r1)
	ctx.current_instruction = 0x880C36B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r9,108(r1)
	ctx.current_instruction = 0x880C36B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r8,r18,r11
	ctx.current_instruction = 0x880C36C0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r11.u32);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c37d0
	if (ctx.cr6.eq) goto loc_880C37D0;
	// lwz r9,30212(r28)
	ctx.current_instruction = 0x880C36D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 30212);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,30216(r28)
	ctx.current_instruction = 0x880C36D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 30216);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,156(r1)
	ctx.current_instruction = 0x880C36E8;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// li r26,3
	ctx.r26.s64 = 3;
	// lwz r6,60(r9)
	ctx.current_instruction = 0x880C36F0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r25,4(r7)
	ctx.current_instruction = 0x880C36F4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,152(r1)
	ctx.current_instruction = 0x880C36F8;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
loc_880C36FC:
	// lwz r11,160(r1)
	ctx.current_instruction = 0x880C36FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r9,r10,r26
	ctx.r9.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r26.u8 & 0x3F));
	// lbzx r8,r18,r11
	ctx.current_instruction = 0x880C3708;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// and r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x880c37c0
	if (ctx.cr6.eq) goto loc_880C37C0;
	// lwz r11,188(r1)
	ctx.current_instruction = 0x880C371C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,88(r1)
	ctx.current_instruction = 0x880C3724;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r9,572(r1)
	ctx.current_instruction = 0x880C372C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r8,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r29,r9
	ctx.current_instruction = 0x880C3738;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// addic. r5,r6,-2
	ctx.xer.ca = ctx.r6.u32 > 1;
	ctx.r5.s64 = ctx.r6.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x880c3790
	if (!ctx.cr0.gt) goto loc_880C3790;
loc_880C3748:
	// lhz r10,0(r31)
	ctx.current_instruction = 0x880C3748;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lhzu r11,2(r31)
	ctx.current_instruction = 0x880C3750;
	ea = 2 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bl 0x8810f120
	ctx.lr = 0x880C3770;
	sub_8810F120(ctx, base);
loc_880C3770:
	// lwz r9,572(r1)
	ctx.current_instruction = 0x880C3770;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// add r25,r3,r25
	ctx.r25.u64 = ctx.r3.u64 + ctx.r25.u64;
	// lhzx r8,r29,r9
	ctx.current_instruction = 0x880C377C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r9.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880c3748
	if (ctx.cr6.lt) goto loc_880C3748;
loc_880C3790:
	// lhz r10,0(r31)
	ctx.current_instruction = 0x880C3790;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lhzu r11,2(r31)
	ctx.current_instruction = 0x880C3798;
	ea = 2 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lwz r6,84(r1)
	ctx.current_instruction = 0x880C37A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bl 0x8810f240
	ctx.lr = 0x880C37B8;
	sub_8810F240(ctx, base);
loc_880C37B8:
	// lwz r29,196(r1)
	ctx.current_instruction = 0x880C37B8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// add r25,r3,r25
	ctx.r25.u64 = ctx.r3.u64 + ctx.r25.u64;
loc_880C37C0:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bgt cr6,0x880c36fc
	if (ctx.cr6.gt) goto loc_880C36FC;
loc_880C37D0:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x880c37f0
	if (!ctx.cr6.eq) goto loc_880C37F0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x880c37f0
	if (!ctx.cr6.eq) goto loc_880C37F0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x880c37f0
	if (!ctx.cr6.eq) goto loc_880C37F0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x880c3930
	if (ctx.cr6.eq) goto loc_880C3930;
loc_880C37F0:
	// lwz r8,88(r1)
	ctx.current_instruction = 0x880C37F0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,-24(r8)
	ctx.current_instruction = 0x880C37F4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + -24);
	// lwz r10,24(r8)
	ctx.current_instruction = 0x880C37F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// lwz r7,72(r8)
	ctx.current_instruction = 0x880C3800;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// lwz r11,0(r8)
	ctx.current_instruction = 0x880C3808;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// std r3,232(r1)
	ctx.current_instruction = 0x880C380C;
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r3.u64);
	// lfd f11,232(r1)
	ctx.current_instruction = 0x880C3810;
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 232);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// std r6,248(r1)
	ctx.current_instruction = 0x880C3818;
	REX_STORE_U64(ctx.r1.u32 + 248, ctx.r6.u64);
	// lfd f13,248(r1)
	ctx.current_instruction = 0x880C381C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 248);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r4,240(r1)
	ctx.current_instruction = 0x880C3824;
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r4.u64);
	// lfd f12,240(r1)
	ctx.current_instruction = 0x880C3828;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// std r9,224(r1)
	ctx.current_instruction = 0x880C382C;
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r9.u64);
	// lfd f0,224(r1)
	ctx.current_instruction = 0x880C3830;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// fsqrt f7,f9
	ctx.f7.f64 = sqrt(ctx.f9.f64);
	// fsqrt f8,f10
	ctx.f8.f64 = sqrt(ctx.f10.f64);
	// fsub f4,f7,f8
	ctx.f4.f64 = ctx.f7.f64 - ctx.f8.f64;
	// fsqrt f3,f6
	ctx.f3.f64 = sqrt(ctx.f6.f64);
	// fsqrt f2,f5
	ctx.f2.f64 = sqrt(ctx.f5.f64);
	// fmul f0,f4,f30
	ctx.f0.f64 = ctx.f4.f64 * ctx.f30.f64;
	// fsub f1,f3,f8
	ctx.f1.f64 = ctx.f3.f64 - ctx.f8.f64;
	// fsub f12,f2,f8
	ctx.f12.f64 = ctx.f2.f64 - ctx.f8.f64;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// fmul f13,f1,f30
	ctx.f13.f64 = ctx.f1.f64 * ctx.f30.f64;
	// fmul f12,f12,f30
	ctx.f12.f64 = ctx.f12.f64 * ctx.f30.f64;
	// ble cr6,0x880c388c
	if (!ctx.cr6.gt) goto loc_880C388C;
	// fadd f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 + ctx.f31.f64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,96(r1)
	ctx.current_instruction = 0x880C387C;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x880C3880;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// b 0x880c38ac
	goto loc_880C38AC;
loc_880C388C:
	// fsub f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 - ctx.f31.f64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,96(r1)
	ctx.current_instruction = 0x880C3894;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x880C3898;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_880C38AC:
	// fcmpu cr6,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ble cr6,0x880c38cc
	if (!ctx.cr6.gt) goto loc_880C38CC;
	// fadd f0,f13,f31
	ctx.f0.f64 = ctx.f13.f64 + ctx.f31.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	ctx.current_instruction = 0x880C38BC;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x880C38C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// b 0x880c38ec
	goto loc_880C38EC;
loc_880C38CC:
	// fsub f0,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64 - ctx.f31.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	ctx.current_instruction = 0x880C38D4;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x880C38D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_880C38EC:
	// fcmpu cr6,f12,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// ble cr6,0x880c390c
	if (!ctx.cr6.gt) goto loc_880C390C;
	// fadd f0,f12,f31
	ctx.f0.f64 = ctx.f12.f64 + ctx.f31.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	ctx.current_instruction = 0x880C38FC;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x880C3900;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x880c3934
	goto loc_880C3934;
loc_880C390C:
	// fsub f0,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64 - ctx.f31.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	ctx.current_instruction = 0x880C3914;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x880C3918;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x880c3934
	goto loc_880C3934;
loc_880C3930:
	// lwz r8,88(r1)
	ctx.current_instruction = 0x880C3930;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_880C3934:
	// lwz r10,104(r1)
	ctx.current_instruction = 0x880C3934;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r16,r19,r16
	ctx.r16.u64 = ctx.r19.u64 + ctx.r16.u64;
	// lwz r11,124(r1)
	ctx.current_instruction = 0x880C393C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,92(r1)
	ctx.current_instruction = 0x880C3940;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r5,r23,r10
	ctx.r5.u64 = ctx.r23.u64 + ctx.r10.u64;
	// lwz r6,120(r1)
	ctx.current_instruction = 0x880C3948;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// add r7,r19,r11
	ctx.r7.u64 = ctx.r19.u64 + ctx.r11.u64;
	// lwz r4,144(r1)
	ctx.current_instruction = 0x880C3950;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r3,r24,r9
	ctx.r3.u64 = ctx.r24.u64 + ctx.r9.u64;
	// lwz r10,176(r1)
	ctx.current_instruction = 0x880C3958;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// add r6,r25,r6
	ctx.r6.u64 = ctx.r25.u64 + ctx.r6.u64;
	// lwz r31,152(r1)
	ctx.current_instruction = 0x880C3960;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// add r11,r23,r4
	ctx.r11.u64 = ctx.r23.u64 + ctx.r4.u64;
	// add r9,r24,r10
	ctx.r9.u64 = ctx.r24.u64 + ctx.r10.u64;
	// stw r7,124(r1)
	ctx.current_instruction = 0x880C396C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r5,104(r1)
	ctx.current_instruction = 0x880C3970;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// add r10,r25,r31
	ctx.r10.u64 = ctx.r25.u64 + ctx.r31.u64;
	// stw r3,92(r1)
	ctx.current_instruction = 0x880C3978;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmpw cr6,r16,r11
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r11.s32, ctx.xer);
	// stw r6,120(r1)
	ctx.current_instruction = 0x880C3980;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// bgt cr6,0x880c3ba4
	if (ctx.cr6.gt) goto loc_880C3BA4;
	// cmpw cr6,r16,r9
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x880c3b84
	if (ctx.cr6.gt) goto loc_880C3B84;
	// cmpw cr6,r16,r10
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880c39b4
	if (ctx.cr6.gt) goto loc_880C39B4;
loc_880C3998:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880C3998;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,88(r1)
	ctx.current_instruction = 0x880C39A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r9,r16,r11
	ctx.r9.u64 = ctx.r16.u64 + ctx.r11.u64;
	// stbx r10,r18,r29
	ctx.current_instruction = 0x880C39A8;
	REX_STORE_U8(ctx.r18.u32 + ctx.r29.u32, ctx.r10.u8);
	// stw r9,80(r1)
	ctx.current_instruction = 0x880C39AC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x880c39cc
	goto loc_880C39CC;
loc_880C39B4:
	// lwz r8,88(r1)
	ctx.current_instruction = 0x880C39B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_880C39B8:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880C39B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_880C39BC:
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_880C39C4:
	// stbx r9,r18,r29
	ctx.current_instruction = 0x880C39C4;
	REX_STORE_U8(ctx.r18.u32 + ctx.r29.u32, ctx.r9.u8);
	// stw r7,80(r1)
	ctx.current_instruction = 0x880C39C8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_880C39CC:
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// lwz r11,168(r1)
	ctx.current_instruction = 0x880C39D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r9,116(r1)
	ctx.current_instruction = 0x880C39D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r14,r14,128
	ctx.r14.s64 = ctx.r14.s64 + 128;
	// lwz r8,108(r1)
	ctx.current_instruction = 0x880C39DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// stw r10,88(r1)
	ctx.current_instruction = 0x880C39E8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r6,r8,256
	ctx.r6.s64 = ctx.r8.s64 + 256;
	// stw r11,168(r1)
	ctx.current_instruction = 0x880C39F0;
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stw r7,116(r1)
	ctx.current_instruction = 0x880C39F4;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// stw r6,108(r1)
	ctx.current_instruction = 0x880C39FC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r20,r20,2
	ctx.r20.s64 = ctx.r20.s64 + 2;
	// bne 0x880c32a0
	if (!ctx.cr0.eq) goto loc_880C32A0;
	// lwz r10,580(r1)
	ctx.current_instruction = 0x880C3A08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r6,124(r1)
	ctx.current_instruction = 0x880C3A0C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r7,104(r1)
	ctx.current_instruction = 0x880C3A10;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,92(r1)
	ctx.current_instruction = 0x880C3A14;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,132(r1)
	ctx.current_instruction = 0x880C3A18;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,0(r10)
	ctx.current_instruction = 0x880C3A1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,120(r1)
	ctx.current_instruction = 0x880C3A20;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stw r4,0(r10)
	ctx.current_instruction = 0x880C3A2C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r10,588(r1)
	ctx.current_instruction = 0x880C3A30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r11,0(r10)
	ctx.current_instruction = 0x880C3A34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r3,0(r10)
	ctx.current_instruction = 0x880C3A3C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lwz r10,596(r1)
	ctx.current_instruction = 0x880C3A40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r11,0(r10)
	ctx.current_instruction = 0x880C3A44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,0(r10)
	ctx.current_instruction = 0x880C3A4C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,604(r1)
	ctx.current_instruction = 0x880C3A50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r11,0(r10)
	ctx.current_instruction = 0x880C3A54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r5,0(r10)
	ctx.current_instruction = 0x880C3A5C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// beq cr6,0x880c3a70
	if (ctx.cr6.eq) goto loc_880C3A70;
	// lwz r11,30208(r28)
	ctx.current_instruction = 0x880C3A64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 30208);
	// lwz r11,68(r11)
	ctx.current_instruction = 0x880C3A68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_880C3A70:
	// lwz r11,128(r1)
	ctx.current_instruction = 0x880C3A70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c3ad8
	if (ctx.cr6.eq) goto loc_880C3AD8;
	// lbz r5,128(r15)
	ctx.current_instruction = 0x880C3A7C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r15.u32 + 128);
	// addi r10,r15,128
	ctx.r10.s64 = ctx.r15.s64 + 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x880c3aa8
	if (!ctx.cr6.eq) goto loc_880C3AA8;
loc_880C3A90:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x880c3aa8
	if (!ctx.cr6.lt) goto loc_880C3AA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r5,r10,r11
	ctx.current_instruction = 0x880C3A9C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x880c3a90
	if (ctx.cr6.eq) goto loc_880C3A90;
loc_880C3AA8:
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// lwz r5,112(r1)
	ctx.current_instruction = 0x880C3AAC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,30208(r28)
	ctx.current_instruction = 0x880C3AB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 30208);
	// addi r4,r5,4
	ctx.r4.s64 = ctx.r5.s64 + 4;
	// lbz r3,128(r11)
	ctx.current_instruction = 0x880C3AB8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 128);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r5,r11,r4
	ctx.current_instruction = 0x880C3AC8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r4,68(r10)
	ctx.current_instruction = 0x880C3ACC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_880C3AD8:
	// lwz r11,148(r1)
	ctx.current_instruction = 0x880C3AD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c3b40
	if (ctx.cr6.eq) goto loc_880C3B40;
	// lbz r5,134(r15)
	ctx.current_instruction = 0x880C3AE4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r15.u32 + 134);
	// addi r10,r15,134
	ctx.r10.s64 = ctx.r15.s64 + 134;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x880c3b10
	if (!ctx.cr6.eq) goto loc_880C3B10;
loc_880C3AF8:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x880c3b10
	if (!ctx.cr6.lt) goto loc_880C3B10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r5,r10,r11
	ctx.current_instruction = 0x880C3B04;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x880c3af8
	if (ctx.cr6.eq) goto loc_880C3AF8;
loc_880C3B10:
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// lwz r5,112(r1)
	ctx.current_instruction = 0x880C3B14;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,30208(r28)
	ctx.current_instruction = 0x880C3B18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 30208);
	// addi r4,r5,4
	ctx.r4.s64 = ctx.r5.s64 + 4;
	// lbz r3,134(r11)
	ctx.current_instruction = 0x880C3B20;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 134);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r5,r11,r4
	ctx.current_instruction = 0x880C3B30;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r4,92(r10)
	ctx.current_instruction = 0x880C3B34;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_880C3B40:
	// lwz r11,156(r1)
	ctx.current_instruction = 0x880C3B40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c3b58
	if (ctx.cr6.eq) goto loc_880C3B58;
	// lwz r11,30208(r28)
	ctx.current_instruction = 0x880C3B4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 30208);
	// lwz r11,124(r11)
	ctx.current_instruction = 0x880C3B50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_880C3B58:
	// lwz r11,0(r15)
	ctx.current_instruction = 0x880C3B58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x880c3bfc
	if (ctx.cr6.gt) goto loc_880C3BFC;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x880c3be4
	if (ctx.cr6.gt) goto loc_880C3BE4;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x880c3c34
	if (ctx.cr6.gt) goto loc_880C3C34;
	// rlwinm r10,r11,0,8,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF8FFFFFF;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stw r10,0(r15)
	ctx.current_instruction = 0x880C3B7C;
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r10.u32);
	// b 0x880c3c40
	goto loc_880C3C40;
loc_880C3B84:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880C3B84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880c39bc
	if (ctx.cr6.gt) goto loc_880C39BC;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stbx r10,r18,r29
	ctx.current_instruction = 0x880C3B98;
	REX_STORE_U8(ctx.r18.u32 + ctx.r29.u32, ctx.r10.u8);
	// stw r9,80(r1)
	ctx.current_instruction = 0x880C3B9C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x880c39cc
	goto loc_880C39CC;
loc_880C3BA4:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880c3bc4
	if (!ctx.cr6.lt) goto loc_880C3BC4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880c39b8
	if (ctx.cr6.gt) goto loc_880C39B8;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x880C3BB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880c39c4
	goto loc_880C39C4;
loc_880C3BC4:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880c39b8
	if (ctx.cr6.gt) goto loc_880C39B8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880C3BCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,2
	ctx.r10.s64 = 2;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stbx r10,r18,r29
	ctx.current_instruction = 0x880C3BD8;
	REX_STORE_U8(ctx.r18.u32 + ctx.r29.u32, ctx.r10.u8);
	// stw r9,80(r1)
	ctx.current_instruction = 0x880C3BDC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x880c39cc
	goto loc_880C39CC;
loc_880C3BE4:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bgt cr6,0x880c3c38
	if (ctx.cr6.gt) goto loc_880C3C38;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r11,r10,25,5,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7000000) | (ctx.r11.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x880c3c3c
	goto loc_880C3C3C;
loc_880C3BFC:
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880c3c1c
	if (!ctx.cr6.lt) goto loc_880C3C1C;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bgt cr6,0x880c3c38
	if (ctx.cr6.gt) goto loc_880C3C38;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// rlwimi r11,r10,24,5,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x7000000) | (ctx.r11.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x880c3c3c
	goto loc_880C3C3C;
loc_880C3C1C:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x880c3c34
	if (ctx.cr6.gt) goto loc_880C3C34;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r11,r10,25,5,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7000000) | (ctx.r11.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x880c3c3c
	goto loc_880C3C3C;
loc_880C3C34:
	// li r10,1
	ctx.r10.s64 = 1;
loc_880C3C38:
	// rlwimi r11,r10,26,5,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x7000000) | (ctx.r11.u64 & 0xFFFFFFFFF8FFFFFF);
loc_880C3C3C:
	// stw r11,0(r15)
	ctx.current_instruction = 0x880C3C3C;
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
loc_880C3C40:
	// addi r9,r15,4
	ctx.r9.s64 = ctx.r15.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_880C3C48:
	// addi r7,r15,56
	ctx.r7.s64 = ctx.r15.s64 + 56;
	// lbzx r10,r11,r7
	ctx.current_instruction = 0x880C3C4C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880c3c7c
	if (!ctx.cr6.eq) goto loc_880C3C7C;
	// lwz r10,0(r9)
	ctx.current_instruction = 0x880C3C5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c3d2c
	if (ctx.cr6.eq) goto loc_880C3D2C;
	// lwz r11,30212(r28)
	ctx.current_instruction = 0x880C3C68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 30212);
	// lwz r10,30208(r28)
	ctx.current_instruction = 0x880C3C6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 30208);
	// lwz r6,4(r11)
	ctx.current_instruction = 0x880C3C70;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,4(r10)
	ctx.current_instruction = 0x880C3C74;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x880c3d54
	goto loc_880C3D54;
loc_880C3C7C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880c3ccc
	if (!ctx.cr6.eq) goto loc_880C3CCC;
	// addi r10,r15,128
	ctx.r10.s64 = ctx.r15.s64 + 128;
	// lbzx r10,r10,r11
	ctx.current_instruction = 0x880C3C88;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880c3d2c
	if (ctx.cr6.eq) goto loc_880C3D2C;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// lwz r10,30208(r28)
	ctx.current_instruction = 0x880C3C98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 30208);
	// lwz r9,30212(r28)
	ctx.current_instruction = 0x880C3C9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 30212);
	// lwz r6,80(r1)
	ctx.current_instruction = 0x880C3CA0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r5,128(r11)
	ctx.current_instruction = 0x880C3CA4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 128);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,4(r3)
	ctx.current_instruction = 0x880C3CB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x880C3CBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// b 0x880c3d60
	goto loc_880C3D60;
loc_880C3CCC:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x880c3d1c
	if (!ctx.cr6.eq) goto loc_880C3D1C;
	// addi r10,r15,134
	ctx.r10.s64 = ctx.r15.s64 + 134;
	// lbzx r10,r10,r11
	ctx.current_instruction = 0x880C3CD8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880c3d2c
	if (ctx.cr6.eq) goto loc_880C3D2C;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// lwz r10,30208(r28)
	ctx.current_instruction = 0x880C3CE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 30208);
	// lwz r9,30212(r28)
	ctx.current_instruction = 0x880C3CEC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 30212);
	// lwz r6,80(r1)
	ctx.current_instruction = 0x880C3CF0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r5,134(r11)
	ctx.current_instruction = 0x880C3CF4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 134);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,28(r3)
	ctx.current_instruction = 0x880C3D08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,28(r11)
	ctx.current_instruction = 0x880C3D0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// b 0x880c3d60
	goto loc_880C3D60;
loc_880C3D1C:
	// addi r10,r15,140
	ctx.r10.s64 = ctx.r15.s64 + 140;
	// lbzx r10,r10,r11
	ctx.current_instruction = 0x880C3D20;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880c3d44
	if (!ctx.cr6.eq) goto loc_880C3D44;
loc_880C3D2C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x880c3c48
	if (ctx.cr6.lt) goto loc_880C3C48;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x880C3D3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x880c3d60
	goto loc_880C3D60;
loc_880C3D44:
	// lwz r11,30212(r28)
	ctx.current_instruction = 0x880C3D44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 30212);
	// lwz r10,30208(r28)
	ctx.current_instruction = 0x880C3D48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 30208);
	// lwz r6,60(r11)
	ctx.current_instruction = 0x880C3D4C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r5,60(r10)
	ctx.current_instruction = 0x880C3D50;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
loc_880C3D54:
	// lwz r9,80(r1)
	ctx.current_instruction = 0x880C3D54;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_880C3D60:
	// lwz r11,0(r15)
	ctx.current_instruction = 0x880C3D60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880c3dd0
	if (ctx.cr6.gt) goto loc_880C3DD0;
	// lwz r10,612(r1)
	ctx.current_instruction = 0x880C3D6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// rlwinm r9,r11,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r9,0(r15)
	ctx.current_instruction = 0x880C3D74;
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r10)
	ctx.current_instruction = 0x880C3D78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,0(r10)
	ctx.current_instruction = 0x880C3D80;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lbz r6,0(r15)
	ctx.current_instruction = 0x880C3D84;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// clrlwi r5,r6,29
	ctx.r5.u64 = ctx.r6.u32 & 0x7;
	// stb r5,0(r7)
	ctx.current_instruction = 0x880C3D8C;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r5.u8);
	// lbz r4,0(r15)
	ctx.current_instruction = 0x880C3D90;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// clrlwi r3,r4,29
	ctx.r3.u64 = ctx.r4.u32 & 0x7;
	// stb r3,1(r7)
	ctx.current_instruction = 0x880C3D98;
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r3.u8);
	// lbz r11,0(r15)
	ctx.current_instruction = 0x880C3D9C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// stb r10,2(r7)
	ctx.current_instruction = 0x880C3DA4;
	REX_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// lbz r9,0(r15)
	ctx.current_instruction = 0x880C3DA8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// clrlwi r8,r9,29
	ctx.r8.u64 = ctx.r9.u32 & 0x7;
	// stb r8,3(r7)
	ctx.current_instruction = 0x880C3DB0;
	REX_STORE_U8(ctx.r7.u32 + 3, ctx.r8.u8);
	// lbz r6,0(r15)
	ctx.current_instruction = 0x880C3DB4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// clrlwi r5,r6,29
	ctx.r5.u64 = ctx.r6.u32 & 0x7;
	// stb r5,4(r7)
	ctx.current_instruction = 0x880C3DBC;
	REX_STORE_U8(ctx.r7.u32 + 4, ctx.r5.u8);
	// lbz r4,0(r15)
	ctx.current_instruction = 0x880C3DC0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// clrlwi r3,r4,29
	ctx.r3.u64 = ctx.r4.u32 & 0x7;
	// stb r3,5(r7)
	ctx.current_instruction = 0x880C3DC8;
	REX_STORE_U8(ctx.r7.u32 + 5, ctx.r3.u8);
	// b 0x880c3df0
	goto loc_880C3DF0;
loc_880C3DD0:
	// oris r9,r11,4096
	ctx.r9.u64 = ctx.r11.u64 | 268435456;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r15)
	ctx.current_instruction = 0x880C3DD8;
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r9.u32);
	// beq cr6,0x880c3df0
	if (ctx.cr6.eq) goto loc_880C3DF0;
	// lwz r9,612(r1)
	ctx.current_instruction = 0x880C3DE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r11,0(r9)
	ctx.current_instruction = 0x880C3DE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r9)
	ctx.current_instruction = 0x880C3DEC;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_880C3DF0:
	// lwz r9,500(r1)
	ctx.current_instruction = 0x880C3DF0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// addi r15,r15,276
	ctx.r15.s64 = ctx.r15.s64 + 276;
	// lwz r6,532(r1)
	ctx.current_instruction = 0x880C3DF8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r10,484(r1)
	ctx.current_instruction = 0x880C3DFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// addi r5,r9,768
	ctx.r5.s64 = ctx.r9.s64 + 768;
	// lwz r8,516(r1)
	ctx.current_instruction = 0x880C3E04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// addi r9,r6,768
	ctx.r9.s64 = ctx.r6.s64 + 768;
	// lwz r4,548(r1)
	ctx.current_instruction = 0x880C3E0C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// addi r7,r10,1536
	ctx.r7.s64 = ctx.r10.s64 + 1536;
	// lwz r11,164(r1)
	ctx.current_instruction = 0x880C3E14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// addi r3,r8,768
	ctx.r3.s64 = ctx.r8.s64 + 768;
	// addi r6,r4,768
	ctx.r6.s64 = ctx.r4.s64 + 768;
	// lwz r10,564(r1)
	ctx.current_instruction = 0x880C3E20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r8,492(r1)
	ctx.current_instruction = 0x880C3E24;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r4,508(r1)
	ctx.current_instruction = 0x880C3E2C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// addi r10,r10,1536
	ctx.r10.s64 = ctx.r10.s64 + 1536;
	// lwz r31,524(r1)
	ctx.current_instruction = 0x880C3E34;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// lwz r30,540(r1)
	ctx.current_instruction = 0x880C3E3C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// lwz r29,556(r1)
	ctx.current_instruction = 0x880C3E44;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// lwz r27,572(r1)
	ctx.current_instruction = 0x880C3E4C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// lwz r26,720(r28)
	ctx.current_instruction = 0x880C3E54;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r28.u32 + 720);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// addi r27,r27,48
	ctx.r27.s64 = ctx.r27.s64 + 48;
	// stw r11,164(r1)
	ctx.current_instruction = 0x880C3E60;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r7,484(r1)
	ctx.current_instruction = 0x880C3E64;
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r7.u32);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// stw r5,500(r1)
	ctx.current_instruction = 0x880C3E6C;
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r5.u32);
	// stw r3,516(r1)
	ctx.current_instruction = 0x880C3E70;
	REX_STORE_U32(ctx.r1.u32 + 516, ctx.r3.u32);
	// stw r9,532(r1)
	ctx.current_instruction = 0x880C3E74;
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r9.u32);
	// stw r6,548(r1)
	ctx.current_instruction = 0x880C3E78;
	REX_STORE_U32(ctx.r1.u32 + 548, ctx.r6.u32);
	// stw r10,564(r1)
	ctx.current_instruction = 0x880C3E7C;
	REX_STORE_U32(ctx.r1.u32 + 564, ctx.r10.u32);
	// stw r8,492(r1)
	ctx.current_instruction = 0x880C3E80;
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r8.u32);
	// stw r4,508(r1)
	ctx.current_instruction = 0x880C3E84;
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r4.u32);
	// stw r31,524(r1)
	ctx.current_instruction = 0x880C3E88;
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r31.u32);
	// stw r30,540(r1)
	ctx.current_instruction = 0x880C3E8C;
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r30.u32);
	// stw r29,556(r1)
	ctx.current_instruction = 0x880C3E90;
	REX_STORE_U32(ctx.r1.u32 + 556, ctx.r29.u32);
	// stw r27,572(r1)
	ctx.current_instruction = 0x880C3E94;
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r27.u32);
	// blt cr6,0x880c3164
	if (ctx.cr6.lt) goto loc_880C3164;
loc_880C3E9C:
	// lwz r11,172(r1)
	ctx.current_instruction = 0x880C3E9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r10,468(r1)
	ctx.current_instruction = 0x880C3EA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,172(r1)
	ctx.current_instruction = 0x880C3EA8;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x880c3150
	if (ctx.cr6.lt) goto loc_880C3150;
loc_880C3EB4:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f29,-176(r1)
	ctx.current_instruction = 0x880C3EB8;
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.current_instruction = 0x880C3EBC;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.current_instruction = 0x880C3EC0;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DEF58) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880DEF58;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880DEF58) {
			switch (rex_dispatch_address) {
				case 0x880DEF60:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880DEF58;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x880DEF60: goto loc_880DEF60;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x880DEF60;
	__savegprlr_25(ctx, base);
loc_880DEF60:
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// srawi r26,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 2;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// li r27,8
	ctx.r27.s64 = 8;
	// mullw r11,r10,r6
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_880DEF80:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r30,2
	ctx.r29.s64 = ctx.r30.s64 + 2;
	// addi r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880DEF94:
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r9,1(r10)
	ctx.current_instruction = 0x880DEF98;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzx r10,r30,r11
	ctx.current_instruction = 0x880DEF9C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi. r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880defbc
	if (!ctx.cr0.lt) goto loc_880DEFBC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880defc8
	goto loc_880DEFC8;
loc_880DEFBC:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880defc8
	if (!ctx.cr6.gt) goto loc_880DEFC8;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DEFC8:
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stbx r10,r31,r11
	ctx.current_instruction = 0x880DEFCC;
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// lbz r10,2(r9)
	ctx.current_instruction = 0x880DEFD0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r9,1(r9)
	ctx.current_instruction = 0x880DEFD4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi. r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880deff4
	if (!ctx.cr0.lt) goto loc_880DEFF4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880df000
	goto loc_880DF000;
loc_880DEFF4:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880df000
	if (!ctx.cr6.gt) goto loc_880DF000;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DF000:
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stb r25,1(r9)
	ctx.current_instruction = 0x880DF00C;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r25.u8);
	// lbz r9,1(r10)
	ctx.current_instruction = 0x880DF010;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzx r10,r29,r11
	ctx.current_instruction = 0x880DF014;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi. r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880df034
	if (!ctx.cr0.lt) goto loc_880DF034;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880df040
	goto loc_880DF040;
loc_880DF034:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880df040
	if (!ctx.cr6.gt) goto loc_880DF040;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DF040:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r28,r11
	ctx.current_instruction = 0x880DF044;
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// bdnz 0x880def94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DEF94;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r30,r30,r6
	ctx.r30.u64 = ctx.r30.u64 + ctx.r6.u64;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x880def80
	if (!ctx.cr0.eq) goto loc_880DEF80;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// addi r4,r7,640
	ctx.r4.s64 = ctx.r7.s64 + 640;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// srawi r11,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// mullw r28,r10,r6
	ctx.r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r29,9
	ctx.r29.s64 = 9;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_880DF080:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r3,3
	ctx.r31.s64 = ctx.r3.s64 + 3;
	// addi r30,r4,3
	ctx.r30.s64 = ctx.r4.s64 + 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880DF094:
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbzx r9,r10,r6
	ctx.current_instruction = 0x880DF098;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// lbzx r10,r3,r11
	ctx.current_instruction = 0x880DF09C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi. r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880df0bc
	if (!ctx.cr0.lt) goto loc_880DF0BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880df0c8
	goto loc_880DF0C8;
loc_880DF0BC:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880df0c8
	if (!ctx.cr6.gt) goto loc_880DF0C8;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DF0C8:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stbx r9,r4,r11
	ctx.current_instruction = 0x880DF0D0;
	REX_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r9,r10,r6
	ctx.current_instruction = 0x880DF0D8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// lbz r10,0(r10)
	ctx.current_instruction = 0x880DF0DC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi. r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880df0fc
	if (!ctx.cr0.lt) goto loc_880DF0FC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880df108
	goto loc_880DF108;
loc_880DF0FC:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880df108
	if (!ctx.cr6.gt) goto loc_880DF108;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DF108:
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stb r27,1(r9)
	ctx.current_instruction = 0x880DF118;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r27.u8);
	// lbz r9,0(r10)
	ctx.current_instruction = 0x880DF11C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r10,r10,r6
	ctx.current_instruction = 0x880DF120;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi. r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880df140
	if (!ctx.cr0.lt) goto loc_880DF140;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880df14c
	goto loc_880DF14C;
loc_880DF140:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880df14c
	if (!ctx.cr6.gt) goto loc_880DF14C;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DF14C:
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stb r27,2(r9)
	ctx.current_instruction = 0x880DF158;
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r27.u8);
	// lbzx r9,r10,r6
	ctx.current_instruction = 0x880DF15C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// lbzx r10,r31,r11
	ctx.current_instruction = 0x880DF160;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi. r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880df180
	if (!ctx.cr0.lt) goto loc_880DF180;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880df18c
	goto loc_880DF18C;
loc_880DF180:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880df18c
	if (!ctx.cr6.gt) goto loc_880DF18C;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DF18C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r30,r11
	ctx.current_instruction = 0x880DF190;
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880df094
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DF094;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// bne 0x880df080
	if (!ctx.cr0.eq) goto loc_880DF080;
	// add r11,r28,r26
	ctx.r11.u64 = ctx.r28.u64 + ctx.r26.u64;
	// addi r30,r7,1280
	ctx.r30.s64 = ctx.r7.s64 + 1280;
	// add r31,r11,r5
	ctx.r31.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// li r26,9
	ctx.r26.s64 = 9;
loc_880DF1C0:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 1;
	// addi r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 2;
	// addi r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880DF1D8:
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lbzx r9,r3,r11
	ctx.current_instruction = 0x880DF1DC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// lbzx r7,r11,r6
	ctx.current_instruction = 0x880DF1E0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lbz r5,1(r11)
	ctx.current_instruction = 0x880DF1E4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbzx r9,r31,r10
	ctx.current_instruction = 0x880DF1EC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// add r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// srawi. r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x880df210
	if (!ctx.cr0.lt) goto loc_880DF210;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x880df21c
	goto loc_880DF21C;
loc_880DF210:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x880df21c
	if (!ctx.cr6.gt) goto loc_880DF21C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_880DF21C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stbx r9,r10,r30
	ctx.current_instruction = 0x880DF224;
	REX_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r4,r11,r6
	ctx.current_instruction = 0x880DF22C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lbzx r5,r3,r11
	ctx.current_instruction = 0x880DF230;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// lbz r7,1(r11)
	ctx.current_instruction = 0x880DF234;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880DF238;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r8,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r8.u64;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// srawi. r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x880df260
	if (!ctx.cr0.lt) goto loc_880DF260;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x880df26c
	goto loc_880DF26C;
loc_880DF260:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x880df26c
	if (!ctx.cr6.gt) goto loc_880DF26C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_880DF26C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r11,r28,r10
	ctx.r11.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stbx r9,r29,r10
	ctx.current_instruction = 0x880DF274;
	REX_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbzx r9,r3,r11
	ctx.current_instruction = 0x880DF278;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// lbzx r7,r11,r6
	ctx.current_instruction = 0x880DF27C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lbz r5,1(r11)
	ctx.current_instruction = 0x880DF280;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbzx r9,r28,r10
	ctx.current_instruction = 0x880DF288;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// add r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r8,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r8.u64;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// srawi. r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x880df2ac
	if (!ctx.cr0.lt) goto loc_880DF2AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x880df2b8
	goto loc_880DF2B8;
loc_880DF2AC:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x880df2b8
	if (!ctx.cr6.gt) goto loc_880DF2B8;
	// li r11,255
	ctx.r11.s64 = 255;
loc_880DF2B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r27,r10
	ctx.current_instruction = 0x880DF2BC;
	REX_STORE_U8(ctx.r27.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// bdnz 0x880df1d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DF1D8;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// bne 0x880df1c0
	if (!ctx.cr0.eq) goto loc_880DF1C0;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E6900) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E6900);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E6900;
	ctx.current_instruction = 0x880E6900;
	// lwz r10,0(r3)
	ctx.current_instruction = 0x880E6900;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r11,12(r3)
	ctx.current_instruction = 0x880E690C;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,16(r3)
	ctx.current_instruction = 0x880E6910;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r11,4(r3)
	ctx.current_instruction = 0x880E6914;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	ctx.current_instruction = 0x880E6918;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E6C50) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E6C50);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E6C50;
	ctx.current_instruction = 0x880E6C50;
	// lwz r11,16(r3)
	ctx.current_instruction = 0x880E6C50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r5,r11,29
	ctx.r5.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x880e6960
	sub_880E6960(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E6FE8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E6FE8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E6FE8;
	ctx.current_instruction = 0x880E6FE8;
	// mulli r11,r4,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(88));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,1704(r11)
	ctx.current_instruction = 0x880E6FF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1704);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,1352(r3)
	ctx.current_instruction = 0x880E6FF8;
	REX_STORE_U32(ctx.r3.u32 + 1352, ctx.r10.u32);
	// lwz r9,1708(r11)
	ctx.current_instruction = 0x880E6FFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1708);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,1364(r3)
	ctx.current_instruction = 0x880E7004;
	REX_STORE_U32(ctx.r3.u32 + 1364, ctx.r9.u32);
	// lwz r8,1712(r11)
	ctx.current_instruction = 0x880E7008;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1712);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,1360(r3)
	ctx.current_instruction = 0x880E7010;
	REX_STORE_U32(ctx.r3.u32 + 1360, ctx.r8.u32);
	// lwz r4,1716(r11)
	ctx.current_instruction = 0x880E7014;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1716);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r6,820(r3)
	ctx.current_instruction = 0x880E701C;
	REX_STORE_U32(ctx.r3.u32 + 820, ctx.r6.u32);
	// stw r10,828(r3)
	ctx.current_instruction = 0x880E7020;
	REX_STORE_U32(ctx.r3.u32 + 828, ctx.r10.u32);
	// stw r4,1372(r3)
	ctx.current_instruction = 0x880E7024;
	REX_STORE_U32(ctx.r3.u32 + 1372, ctx.r4.u32);
	// stw r7,816(r3)
	ctx.current_instruction = 0x880E7028;
	REX_STORE_U32(ctx.r3.u32 + 816, ctx.r7.u32);
	// stw r5,824(r3)
	ctx.current_instruction = 0x880E702C;
	REX_STORE_U32(ctx.r3.u32 + 824, ctx.r5.u32);
	// lwz r9,1720(r11)
	ctx.current_instruction = 0x880E7030;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1720);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,796(r3)
	ctx.current_instruction = 0x880E7038;
	REX_STORE_U32(ctx.r3.u32 + 796, ctx.r9.u32);
	// lwz r7,1724(r11)
	ctx.current_instruction = 0x880E703C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 1724);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// stw r7,800(r3)
	ctx.current_instruction = 0x880E7044;
	REX_STORE_U32(ctx.r3.u32 + 800, ctx.r7.u32);
	// stw r6,804(r3)
	ctx.current_instruction = 0x880E7048;
	REX_STORE_U32(ctx.r3.u32 + 804, ctx.r6.u32);
	// lwz r5,1728(r11)
	ctx.current_instruction = 0x880E704C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 1728);
	// stw r5,1356(r3)
	ctx.current_instruction = 0x880E7050;
	REX_STORE_U32(ctx.r3.u32 + 1356, ctx.r5.u32);
	// lwz r4,1732(r11)
	ctx.current_instruction = 0x880E7054;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1732);
	// stw r4,1368(r3)
	ctx.current_instruction = 0x880E7058;
	REX_STORE_U32(ctx.r3.u32 + 1368, ctx.r4.u32);
	// lwz r10,1736(r11)
	ctx.current_instruction = 0x880E705C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1736);
	// stw r10,1376(r3)
	ctx.current_instruction = 0x880E7060;
	REX_STORE_U32(ctx.r3.u32 + 1376, ctx.r10.u32);
	// lwz r9,1740(r11)
	ctx.current_instruction = 0x880E7064;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1740);
	// stw r9,832(r3)
	ctx.current_instruction = 0x880E7068;
	REX_STORE_U32(ctx.r3.u32 + 832, ctx.r9.u32);
	// lwz r10,1744(r11)
	ctx.current_instruction = 0x880E706C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1744);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,720(r3)
	ctx.current_instruction = 0x880E7078;
	REX_STORE_U32(ctx.r3.u32 + 720, ctx.r10.u32);
	// rlwinm r10,r8,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
	// cmpwi cr6,r10,6144
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6144, ctx.xer);
	// bge cr6,0x880e708c
	if (!ctx.cr6.lt) goto loc_880E708C;
	// li r10,6144
	ctx.r10.s64 = 6144;
loc_880E708C:
	// stw r10,6732(r3)
	ctx.current_instruction = 0x880E708C;
	REX_STORE_U32(ctx.r3.u32 + 6732, ctx.r10.u32);
	// lwz r10,1748(r11)
	ctx.current_instruction = 0x880E7090;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1748);
	// stw r10,724(r3)
	ctx.current_instruction = 0x880E7094;
	REX_STORE_U32(ctx.r3.u32 + 724, ctx.r10.u32);
	// lwz r9,1752(r11)
	ctx.current_instruction = 0x880E7098;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1752);
	// stw r9,728(r3)
	ctx.current_instruction = 0x880E709C;
	REX_STORE_U32(ctx.r3.u32 + 728, ctx.r9.u32);
	// lwz r8,1756(r11)
	ctx.current_instruction = 0x880E70A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1756);
	// stw r8,732(r3)
	ctx.current_instruction = 0x880E70A4;
	REX_STORE_U32(ctx.r3.u32 + 732, ctx.r8.u32);
	// lwz r7,1760(r11)
	ctx.current_instruction = 0x880E70A8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 1760);
	// stw r7,1380(r3)
	ctx.current_instruction = 0x880E70AC;
	REX_STORE_U32(ctx.r3.u32 + 1380, ctx.r7.u32);
	// lwz r6,1764(r11)
	ctx.current_instruction = 0x880E70B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1764);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,1384(r3)
	ctx.current_instruction = 0x880E70B8;
	REX_STORE_U32(ctx.r3.u32 + 1384, ctx.r6.u32);
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,1768(r11)
	ctx.current_instruction = 0x880E70C0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 1768);
	// stw r5,1388(r3)
	ctx.current_instruction = 0x880E70C4;
	REX_STORE_U32(ctx.r3.u32 + 1388, ctx.r5.u32);
	// lwz r4,1772(r11)
	ctx.current_instruction = 0x880E70C8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1772);
	// stw r4,1392(r3)
	ctx.current_instruction = 0x880E70CC;
	REX_STORE_U32(ctx.r3.u32 + 1392, ctx.r4.u32);
	// lwz r10,1776(r11)
	ctx.current_instruction = 0x880E70D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1776);
	// stw r10,1396(r3)
	ctx.current_instruction = 0x880E70D4;
	REX_STORE_U32(ctx.r3.u32 + 1396, ctx.r10.u32);
	// lwz r8,1780(r11)
	ctx.current_instruction = 0x880E70D8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1780);
	// stw r8,1400(r3)
	ctx.current_instruction = 0x880E70DC;
	REX_STORE_U32(ctx.r3.u32 + 1400, ctx.r8.u32);
	// lwz r4,1784(r11)
	ctx.current_instruction = 0x880E70E0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1784);
	// stw r4,1404(r3)
	ctx.current_instruction = 0x880E70E4;
	REX_STORE_U32(ctx.r3.u32 + 1404, ctx.r4.u32);
	// lwz r10,20(r3)
	ctx.current_instruction = 0x880E70E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,1396(r3)
	ctx.current_instruction = 0x880E70EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1396);
	// lwz r11,1788(r11)
	ctx.current_instruction = 0x880E70F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1788);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,1408(r3)
	ctx.current_instruction = 0x880E70F8;
	REX_STORE_U32(ctx.r3.u32 + 1408, ctx.r11.u32);
	// stw r6,1412(r3)
	ctx.current_instruction = 0x880E70FC;
	REX_STORE_U32(ctx.r3.u32 + 1412, ctx.r6.u32);
	// stw r5,784(r3)
	ctx.current_instruction = 0x880E7100;
	REX_STORE_U32(ctx.r3.u32 + 784, ctx.r5.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880EBC80) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880EBC80);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EBC80;
	ctx.current_instruction = 0x880EBC80;
	// lwz r11,27988(r3)
	ctx.current_instruction = 0x880EBC80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ebcbc
	if (ctx.cr6.eq) goto loc_880EBCBC;
	// lwz r11,31544(r3)
	ctx.current_instruction = 0x880EBC8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ebcbc
	if (!ctx.cr6.eq) goto loc_880EBCBC;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,1416(r3)
	ctx.current_instruction = 0x880EBC9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1416);
	// addi r11,r11,17400
	ctx.r11.s64 = ctx.r11.s64 + 17400;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// lwzx r7,r9,r8
	ctx.current_instruction = 0x880EBCAC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r7,28436(r3)
	ctx.current_instruction = 0x880EBCB0;
	REX_STORE_U32(ctx.r3.u32 + 28436, ctx.r7.u32);
	// stw r7,28440(r3)
	ctx.current_instruction = 0x880EBCB4;
	REX_STORE_U32(ctx.r3.u32 + 28440, ctx.r7.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880EBCBC:
	// lwz r11,1416(r3)
	ctx.current_instruction = 0x880EBCBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1416);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r9,r10,17400
	ctx.r9.s64 = ctx.r10.s64 + 17400;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r9
	ctx.current_instruction = 0x880EBCCC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,28436(r3)
	ctx.current_instruction = 0x880EBCD0;
	REX_STORE_U32(ctx.r3.u32 + 28436, ctx.r7.u32);
	// stw r7,28440(r3)
	ctx.current_instruction = 0x880EBCD4;
	REX_STORE_U32(ctx.r3.u32 + 28440, ctx.r7.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880EC688) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880EC688);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EC688;
	ctx.current_instruction = 0x880EC688;
	uint32_t ea{};
	// lwz r11,28(r4)
	ctx.current_instruction = 0x880EC688;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ec728
	if (ctx.cr6.eq) goto loc_880EC728;
	// addi r10,r5,7
	ctx.r10.s64 = ctx.r5.s64 + 7;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r4
	ctx.current_instruction = 0x880EC69C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x880ec6cc
	if (!ctx.cr6.eq) goto loc_880EC6CC;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r6,2
	ctx.r11.s64 = ctx.r6.s64 + 2;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880EC6B8:
	// lhzu r10,2(r7)
	ctx.current_instruction = 0x880EC6B8;
	ea = 2 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r10,2(r11)
	ctx.current_instruction = 0x880EC6BC;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x880ec6b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EC6B8;
	// lwz r3,572(r3)
	ctx.current_instruction = 0x880EC6C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 572);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880EC6CC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ec728
	if (ctx.cr6.eq) goto loc_880EC728;
	// addi r11,r5,7
	ctx.r11.s64 = ctx.r5.s64 + 7;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r4
	ctx.current_instruction = 0x880EC6DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880ec728
	if (!ctx.cr6.eq) goto loc_880EC728;
	// lhz r11,2(r7)
	ctx.current_instruction = 0x880EC6E8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// sth r11,16(r6)
	ctx.current_instruction = 0x880EC6EC;
	REX_STORE_U16(ctx.r6.u32 + 16, ctx.r11.u16);
	// lhz r10,4(r7)
	ctx.current_instruction = 0x880EC6F0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// sth r10,32(r6)
	ctx.current_instruction = 0x880EC6F4;
	REX_STORE_U16(ctx.r6.u32 + 32, ctx.r10.u16);
	// lhz r9,6(r7)
	ctx.current_instruction = 0x880EC6F8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// sth r9,48(r6)
	ctx.current_instruction = 0x880EC6FC;
	REX_STORE_U16(ctx.r6.u32 + 48, ctx.r9.u16);
	// lhz r8,8(r7)
	ctx.current_instruction = 0x880EC700;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 8);
	// sth r8,64(r6)
	ctx.current_instruction = 0x880EC704;
	REX_STORE_U16(ctx.r6.u32 + 64, ctx.r8.u16);
	// lhz r5,10(r7)
	ctx.current_instruction = 0x880EC708;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 10);
	// sth r5,80(r6)
	ctx.current_instruction = 0x880EC70C;
	REX_STORE_U16(ctx.r6.u32 + 80, ctx.r5.u16);
	// lhz r4,12(r7)
	ctx.current_instruction = 0x880EC710;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + 12);
	// sth r4,96(r6)
	ctx.current_instruction = 0x880EC714;
	REX_STORE_U16(ctx.r6.u32 + 96, ctx.r4.u16);
	// lhz r11,14(r7)
	ctx.current_instruction = 0x880EC718;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// sth r11,112(r6)
	ctx.current_instruction = 0x880EC71C;
	REX_STORE_U16(ctx.r6.u32 + 112, ctx.r11.u16);
	// lwz r3,576(r3)
	ctx.current_instruction = 0x880EC720;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 576);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880EC728:
	// lwz r3,568(r3)
	ctx.current_instruction = 0x880EC728;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 568);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880EE9C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880EE9C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880EE9C0) {
			switch (rex_dispatch_address) {
				case 0x880EE9C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EE9C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880EE9C8: goto loc_880EE9C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880EE9C8;
	__savegprlr_14(ctx, base);
loc_880EE9C8:
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r5,36(r1)
	ctx.current_instruction = 0x880EE9CC;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r6,-300(r1)
	ctx.current_instruction = 0x880EE9D8;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r6.u32);
	// stw r6,-336(r1)
	ctx.current_instruction = 0x880EE9DC;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r6.u32);
	// li r6,3225
	ctx.r6.s64 = 3225;
	// stw r7,-332(r1)
	ctx.current_instruction = 0x880EE9E4;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r7.u32);
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,-324(r1)
	ctx.current_instruction = 0x880EE9EC;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r7.u32);
	// li r7,3236
	ctx.r7.s64 = 3236;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,-316(r1)
	ctx.current_instruction = 0x880EE9F8;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r6.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,3214
	ctx.r11.s64 = 3214;
	// stw r7,-320(r1)
	ctx.current_instruction = 0x880EEA04;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r7.u32);
	// li r7,3181
	ctx.r7.s64 = 3181;
	// li r6,3148
	ctx.r6.s64 = 3148;
	// stw r11,-312(r1)
	ctx.current_instruction = 0x880EEA10;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r11.u32);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,-304(r1)
	ctx.current_instruction = 0x880EEA18;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r7.u32);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// stw r6,-296(r1)
	ctx.current_instruction = 0x880EEA20;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r6.u32);
	// add r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 + ctx.r10.u64;
	// li r10,3192
	ctx.r10.s64 = 3192;
	// li r11,3
	ctx.r11.s64 = 3;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r10,-308(r1)
	ctx.current_instruction = 0x880EEA34;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r10.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,-328(r1)
	ctx.current_instruction = 0x880EEA3C;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r11.u32);
	// mulli r6,r4,14
	ctx.r6.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(14));
	// stw r7,-352(r1)
	ctx.current_instruction = 0x880EEA44;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// stw r6,-348(r1)
	ctx.current_instruction = 0x880EEA48;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r6.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r1,-288
	ctx.r11.s64 = ctx.r1.s64 + -288;
	// rlwinm r19,r4,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r18,r4,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r17,r5,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r16,r4,3,0,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r15,r9,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880eea74
	goto loc_880EEA74;
loc_880EEA6C:
	// lwz r7,-352(r1)
	ctx.current_instruction = 0x880EEA6C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r6,-348(r1)
	ctx.current_instruction = 0x880EEA70;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
loc_880EEA74:
	// lhzx r9,r7,r10
	ctx.current_instruction = 0x880EEA74;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// lhzx r8,r6,r10
	ctx.current_instruction = 0x880EEA78;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r10.u32);
	// lhzx r7,r19,r10
	ctx.current_instruction = 0x880EEA7C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r19.u32 + ctx.r10.u32);
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// lhzx r6,r18,r10
	ctx.current_instruction = 0x880EEA88;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r18.u32 + ctx.r10.u32);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// lhzx r5,r16,r10
	ctx.current_instruction = 0x880EEA90;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r16.u32 + ctx.r10.u32);
	// lhzx r7,r15,r10
	ctx.current_instruction = 0x880EEA94;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r15.u32 + ctx.r10.u32);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// lhzx r5,r17,r10
	ctx.current_instruction = 0x880EEAA0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r17.u32 + ctx.r10.u32);
	// extsh r30,r7
	ctx.r30.s64 = ctx.r7.s16;
	// lhz r6,0(r10)
	ctx.current_instruction = 0x880EEAA8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// add r27,r3,r4
	ctx.r27.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r28,r30,r31
	ctx.r28.u64 = ctx.r30.u64 + ctx.r31.u64;
	// extsh r25,r27
	ctx.r25.s64 = ctx.r27.s16;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// extsh r26,r28
	ctx.r26.s64 = ctx.r28.s16;
	// rlwinm r24,r29,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r25,r26
	ctx.r27.u64 = ctx.r25.u64 + ctx.r26.u64;
	// subf r26,r26,r25
	ctx.r26.u64 = ctx.r25.u64 - ctx.r26.u64;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// add r23,r29,r24
	ctx.r23.u64 = ctx.r29.u64 + ctx.r24.u64;
	// rlwinm r24,r26,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r27,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r28,r6,r7
	ctx.r28.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r20,r26,r24
	ctx.r20.u64 = ctx.r26.u64 + ctx.r24.u64;
	// add r21,r27,r25
	ctx.r21.u64 = ctx.r27.u64 + ctx.r25.u64;
	// extsh r26,r5
	ctx.r26.s64 = ctx.r5.s16;
	// extsh r25,r28
	ctx.r25.s64 = ctx.r28.s16;
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// add r27,r25,r26
	ctx.r27.u64 = ctx.r25.u64 + ctx.r26.u64;
	// subf r26,r26,r25
	ctx.r26.u64 = ctx.r25.u64 - ctx.r26.u64;
	// rlwinm r25,r27,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r26,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r28,r5
	ctx.r28.s64 = ctx.r5.s16;
	// add r26,r26,r24
	ctx.r26.u64 = ctx.r26.u64 + ctx.r24.u64;
	// add r5,r27,r25
	ctx.r5.u64 = ctx.r27.u64 + ctx.r25.u64;
	// rlwinm r27,r28,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r25,r4,r3
	ctx.r25.u64 = ctx.r3.u64 - ctx.r4.u64;
	// rlwinm r22,r28,4,0,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r23,r23,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r14,r28,r27
	ctx.r14.u64 = ctx.r28.u64 + ctx.r27.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r24,r31,r30
	ctx.r24.u64 = ctx.r30.u64 - ctx.r31.u64;
	// add r26,r22,r23
	ctx.r26.u64 = ctx.r22.u64 + ctx.r23.u64;
	// extsh r28,r25
	ctx.r28.s64 = ctx.r25.s16;
	// rlwinm r25,r29,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// extsh r5,r26
	ctx.r5.s64 = ctx.r26.s16;
	// extsh r22,r24
	ctx.r22.s64 = ctx.r24.s16;
	// rlwinm r26,r14,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// rlwinm r21,r21,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r20,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r4,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r4.u64;
	// rlwinm r24,r28,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// mulli r23,r22,-6
	ctx.r23.s64 = static_cast<int64_t>(ctx.r22.u64 * static_cast<uint64_t>(-6));
	// subf r26,r25,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r25.u64;
	// add r21,r21,r29
	ctx.r21.u64 = ctx.r21.u64 + ctx.r29.u64;
	// add r20,r20,r27
	ctx.r20.u64 = ctx.r20.u64 + ctx.r27.u64;
	// subf r3,r3,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// subf r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r30.u64;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// subf r27,r24,r23
	ctx.r27.u64 = ctx.r23.u64 - ctx.r24.u64;
	// extsh r5,r26
	ctx.r5.s64 = ctx.r26.s16;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// subf r31,r31,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r31.u64;
	// extsh r21,r20
	ctx.r21.s64 = ctx.r20.s16;
	// add r27,r27,r29
	ctx.r27.u64 = ctx.r27.u64 + ctx.r29.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r7,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// add r29,r4,r6
	ctx.r29.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r31,r8,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r3,r9,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r24,r7,r30
	ctx.r24.u64 = ctx.r7.u64 + ctx.r30.u64;
	// rlwinm r4,r28,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r9,r3
	ctx.r29.u64 = ctx.r3.u64 - ctx.r9.u64;
	// add r28,r28,r4
	ctx.r28.u64 = ctx.r28.u64 + ctx.r4.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// rlwinm r31,r7,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r30,r6,-9
	ctx.r30.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(-9));
	// extsh r23,r26
	ctx.r23.s64 = ctx.r26.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r25,r7,r31
	ctx.r25.u64 = ctx.r31.u64 - ctx.r7.u64;
	// subf r3,r3,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r3.u64;
	// addi r31,r23,4
	ctx.r31.s64 = ctx.r23.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// add r29,r3,r25
	ctx.r29.u64 = ctx.r3.u64 + ctx.r25.u64;
	// srawi r31,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 5;
	// srawi r4,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 5;
	// extsh r3,r27
	ctx.r3.s64 = ctx.r27.s16;
	// sth r31,0(r11)
	ctx.current_instruction = 0x880EEC24;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r31.u16);
	// sthu r4,2(r11)
	ctx.current_instruction = 0x880EEC28;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r11.u32 = ea;
	// rlwinm r30,r9,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// subf r30,r30,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r30.u64;
	// srawi r3,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 5;
	// rlwinm r27,r6,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r31,r29
	ctx.r31.s64 = ctx.r29.s16;
	// sthu r3,2(r11)
	ctx.current_instruction = 0x880EEC44;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r11.u32 = ea;
	// subf r27,r6,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r6.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r26,r30,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r3,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r31.s32 >> 5;
	// add r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 + ctx.r27.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// sthu r3,2(r11)
	ctx.current_instruction = 0x880EEC60;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r11.u32 = ea;
	// add r31,r27,r24
	ctx.r31.u64 = ctx.r27.u64 + ctx.r24.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// extsh r3,r31
	ctx.r3.s64 = ctx.r31.s16;
	// srawi r30,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r4.s32 >> 5;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// sthu r30,2(r11)
	ctx.current_instruction = 0x880EEC78;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r30.u16);
	ctx.r11.u32 = ea;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 5;
	// rlwinm r29,r22,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// sthu r5,2(r11)
	ctx.current_instruction = 0x880EEC90;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// subf r3,r6,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r31,r28,r29
	ctx.r31.u64 = ctx.r29.u64 - ctx.r28.u64;
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r8,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r8.u64;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r7,r4,4
	ctx.r7.s64 = ctx.r4.s64 + 4;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// srawi r5,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 5;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// sthu r3,2(r11)
	ctx.current_instruction = 0x880EECD8;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r11.u32 = ea;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sthu r7,2(r11)
	ctx.current_instruction = 0x880EECE8;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x880eea6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EEA6C;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,36(r1)
	ctx.current_instruction = 0x880EECF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// addi r9,r1,-240
	ctx.r9.s64 = ctx.r1.s64 + -240;
	// addi r7,r1,-224
	ctx.r7.s64 = ctx.r1.s64 + -224;
	// addi r4,r1,-288
	ctx.r4.s64 = ctx.r1.s64 + -288;
	// addi r3,r1,-272
	ctx.r3.s64 = ctx.r1.s64 + -272;
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r5,r10,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r10.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r8,-352(r1)
	ctx.current_instruction = 0x880EED20;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// addi r6,r1,-258
	ctx.r6.s64 = ctx.r1.s64 + -258;
	// stw r5,-348(r1)
	ctx.current_instruction = 0x880EED28;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r5.u32);
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// subf r19,r10,r4
	ctx.r19.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r18,r10,r3
	ctx.r18.u64 = ctx.r3.u64 - ctx.r10.u64;
	// subf r17,r10,r31
	ctx.r17.u64 = ctx.r31.u64 - ctx.r10.u64;
	// b 0x880eed48
	goto loc_880EED48;
loc_880EED40:
	// lwz r5,-348(r1)
	ctx.current_instruction = 0x880EED40;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// lwz r8,-352(r1)
	ctx.current_instruction = 0x880EED44;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
loc_880EED48:
	// lhzx r8,r8,r11
	ctx.current_instruction = 0x880EED48;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// lhz r10,-30(r6)
	ctx.current_instruction = 0x880EED4C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + -30);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// lhz r9,-14(r6)
	ctx.current_instruction = 0x880EED54;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + -14);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lhzx r8,r17,r11
	ctx.current_instruction = 0x880EED5C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r17.u32 + ctx.r11.u32);
	// lhzu r10,2(r6)
	ctx.current_instruction = 0x880EED60;
	ea = 2 + ctx.r6.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhzx r4,r18,r11
	ctx.current_instruction = 0x880EED68;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r18.u32 + ctx.r11.u32);
	// extsh r31,r8
	ctx.r31.s64 = ctx.r8.s16;
	// lhzx r5,r5,r11
	ctx.current_instruction = 0x880EED70;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhzx r8,r19,r11
	ctx.current_instruction = 0x880EED7C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r19.u32 + ctx.r11.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// subf r30,r10,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r29,r4,r5
	ctx.r29.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 + ctx.r3.u64;
	// extsh r25,r29
	ctx.r25.s64 = ctx.r29.s16;
	// extsh r26,r27
	ctx.r26.s64 = ctx.r27.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// add r27,r25,r26
	ctx.r27.u64 = ctx.r25.u64 + ctx.r26.u64;
	// rlwinm r24,r30,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r26,r25
	ctx.r26.u64 = ctx.r25.u64 - ctx.r26.u64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r21,r30,r24
	ctx.r21.u64 = ctx.r30.u64 + ctx.r24.u64;
	// rlwinm r24,r26,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r27,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r23,r7,r8
	ctx.r23.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r20,r27,r25
	ctx.r20.u64 = ctx.r27.u64 + ctx.r25.u64;
	// add r16,r26,r24
	ctx.r16.u64 = ctx.r26.u64 + ctx.r24.u64;
	// extsh r25,r23
	ctx.r25.s64 = ctx.r23.s16;
	// extsh r26,r29
	ctx.r26.s64 = ctx.r29.s16;
	// subf r29,r8,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r27,r25,r26
	ctx.r27.u64 = ctx.r25.u64 + ctx.r26.u64;
	// subf r26,r26,r25
	ctx.r26.u64 = ctx.r25.u64 - ctx.r26.u64;
	// rlwinm r25,r27,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// add r25,r27,r25
	ctx.r25.u64 = ctx.r27.u64 + ctx.r25.u64;
	// rlwinm r24,r26,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r15,r3,r31
	ctx.r15.u64 = ctx.r31.u64 - ctx.r3.u64;
	// rlwinm r27,r29,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r21,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// add r26,r26,r24
	ctx.r26.u64 = ctx.r26.u64 + ctx.r24.u64;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r24,r5,r4
	ctx.r24.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mr r21,r15
	ctx.r21.u64 = ctx.r15.u64;
	// add r15,r29,r27
	ctx.r15.u64 = ctx.r29.u64 + ctx.r27.u64;
	// rlwinm r22,r29,4,0,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r29,r24
	ctx.r29.s64 = ctx.r24.s16;
	// add r25,r22,r23
	ctx.r25.u64 = ctx.r22.u64 + ctx.r23.u64;
	// rlwinm r24,r30,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r22,r21
	ctx.r22.s64 = ctx.r21.s16;
	// extsh r30,r27
	ctx.r30.s64 = ctx.r27.s16;
	// subf r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r31.u64;
	// extsh r27,r26
	ctx.r27.s64 = ctx.r26.s16;
	// rlwinm r21,r20,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// rlwinm r20,r16,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r3,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r3.u64;
	// mulli r16,r22,-6
	ctx.r16.s64 = static_cast<int64_t>(ctx.r22.u64 * static_cast<uint64_t>(-6));
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rlwinm r25,r15,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r29,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r21,r21,r30
	ctx.r21.u64 = ctx.r21.u64 + ctx.r30.u64;
	// subf r10,r5,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r5.u64;
	// add r20,r20,r27
	ctx.r20.u64 = ctx.r20.u64 + ctx.r27.u64;
	// subf r7,r4,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r4.u64;
	// subf r27,r23,r16
	ctx.r27.u64 = ctx.r16.u64 - ctx.r23.u64;
	// extsh r30,r26
	ctx.r30.s64 = ctx.r26.s16;
	// subf r25,r24,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r24.u64;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// extsh r16,r25
	ctx.r16.s64 = ctx.r25.s16;
	// add r20,r27,r30
	ctx.r20.u64 = ctx.r27.u64 + ctx.r30.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,-336
	ctx.r30.s64 = ctx.r1.s64 + -336;
	// rlwinm r31,r28,2,28,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xC;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r30
	ctx.current_instruction = 0x880EEEA4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r3,r8,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// mulli r30,r7,-9
	ctx.r30.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(-9));
	// add r25,r8,r3
	ctx.r25.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r27,r10,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r3,r4,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r4.u64;
	// rlwinm r24,r5,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,-320
	ctx.r5.s64 = ctx.r1.s64 + -320;
	// subf r27,r10,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r10.u64;
	// rlwinm r30,r9,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// subf r23,r9,r30
	ctx.r23.u64 = ctx.r30.u64 - ctx.r9.u64;
	// add r27,r24,r25
	ctx.r27.u64 = ctx.r24.u64 + ctx.r25.u64;
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r27,r23
	ctx.r31.u64 = ctx.r27.u64 + ctx.r23.u64;
	// lwz r25,0(r5)
	ctx.current_instruction = 0x880EEEF0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r27,r26
	ctx.r27.s64 = ctx.r26.s16;
	// lwz r24,4(r5)
	ctx.current_instruction = 0x880EEEF8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,12(r5)
	ctx.current_instruction = 0x880EEF00;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r26,r29,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// mullw r4,r27,r25
	ctx.r4.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r25.s32);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// add r26,r29,r26
	ctx.r26.u64 = ctx.r29.u64 + ctx.r26.u64;
	// extsh r23,r21
	ctx.r23.s64 = ctx.r21.s16;
	// mullw r29,r31,r24
	ctx.r29.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r24.s32);
	// addi r31,r4,4096
	ctx.r31.s64 = ctx.r4.s64 + 4096;
	// mullw r27,r30,r24
	ctx.r27.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r24.s32);
	// mullw r4,r23,r25
	ctx.r4.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r25.s32);
	// rlwinm r30,r9,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r22,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r22,r31,13
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1FFF) != 0);
	ctx.r22.s64 = ctx.r31.s32 >> 13;
	// subf r31,r30,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r30.u64;
	// rlwinm r26,r26,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r22,-48(r11)
	ctx.current_instruction = 0x880EEF44;
	REX_STORE_U16(ctx.r11.u32 + -48, ctx.r22.u16);
	// rlwinm r30,r7,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r23,r4,4096
	ctx.r23.s64 = ctx.r4.s64 + 4096;
	// addi r29,r29,4096
	ctx.r29.s64 = ctx.r29.s64 + 4096;
	// subf r4,r26,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r26.u64;
	// subf r30,r7,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r7.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r21,r29,13
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1FFF) != 0);
	ctx.r21.s64 = ctx.r29.s32 >> 13;
	// add r29,r4,r16
	ctx.r29.u64 = ctx.r4.u64 + ctx.r16.u64;
	// add r4,r31,r30
	ctx.r4.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r27,r27,4096
	ctx.r27.s64 = ctx.r27.s64 + 4096;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r3,r3,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r3.u64;
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r27,r27,13
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1FFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 13;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r25,r23,13
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1FFF) != 0);
	ctx.r25.s64 = ctx.r23.s32 >> 13;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r23,r21
	ctx.r23.s64 = ctx.r21.s16;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// sth r23,-32(r11)
	ctx.current_instruction = 0x880EEFA4;
	REX_STORE_U16(ctx.r11.u32 + -32, ctx.r23.u16);
	// extsh r31,r20
	ctx.r31.s64 = ctx.r20.s16;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// sth r27,0(r11)
	ctx.current_instruction = 0x880EEFB0;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r27.u16);
	// extsh r26,r25
	ctx.r26.s64 = ctx.r25.s16;
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// sth r26,16(r11)
	ctx.current_instruction = 0x880EEFBC;
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r26.u16);
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// mullw r9,r31,r5
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// mullw r10,r10,r24
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// addi r7,r9,4096
	ctx.r7.s64 = ctx.r9.s64 + 4096;
	// mullw r9,r8,r24
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r24.s32);
	// addi r3,r10,4096
	ctx.r3.s64 = ctx.r10.s64 + 4096;
	// mullw r10,r30,r5
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r5.s32);
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// srawi r8,r3,13
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1FFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 13;
	// addi r5,r10,4096
	ctx.r5.s64 = ctx.r10.s64 + 4096;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srawi r4,r9,13
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 13;
	// srawi r3,r7,13
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1FFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 13;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// srawi r9,r5,13
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 13;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// sth r10,32(r11)
	ctx.current_instruction = 0x880EF00C;
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r10.u16);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// sth r8,64(r11)
	ctx.current_instruction = 0x880EF018;
	REX_STORE_U16(ctx.r11.u32 + 64, ctx.r8.u16);
	// sth r7,-16(r11)
	ctx.current_instruction = 0x880EF01C;
	REX_STORE_U16(ctx.r11.u32 + -16, ctx.r7.u16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// sth r5,48(r11)
	ctx.current_instruction = 0x880EF024;
	REX_STORE_U16(ctx.r11.u32 + 48, ctx.r5.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x880eed40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EED40;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FF048) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FF048;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FF048) {
			switch (rex_dispatch_address) {
				case 0x880FF050:
				case 0x880FF190:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FF048;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FF050: goto loc_880FF050;
		case 0x880FF190: goto loc_880FF190;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x880FF050;
	__savegprlr_22(ctx, base);
loc_880FF050:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x880FF050;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880ff078
	if (!ctx.cr6.eq) goto loc_880FF078;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_880FF078:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r25,8240(r23)
	ctx.current_instruction = 0x880FF07C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r23.u32 + 8240);
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// add r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// li r30,6
	ctx.r30.s64 = 6;
loc_880FF0AC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x880ff1a4
	if (!ctx.cr6.gt) goto loc_880FF1A4;
	// divw r11,r31,r30
	ctx.r11.u64 = uint32_t((ctx.r30.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r30.s32 == -1)) ? ctx.r31.s32 / ctx.r30.s32 : 0);
	// rotlwi r10,r31,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// mullw r9,r11,r30
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// subf r8,r9,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r9.u64;
	// rotlwi r11,r31,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addic r4,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// andc r3,r30,r6
	ctx.r3.u64 = ctx.r30.u64 & ~ctx.r6.u64;
	// subfe r11,r4,r8
	temp.u8 = (~ctx.r4.u32 + ctx.r8.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andc r9,r30,r5
	ctx.r9.u64 = ctx.r30.u64 & ~ctx.r5.u64;
	// divw r10,r31,r30
	ctx.r10.u64 = uint32_t((ctx.r30.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r30.s32 == -1)) ? ctx.r31.s32 / ctx.r30.s32 : 0);
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r3,-1
	if (ctx.r3.s32 == -1 || ctx.r3.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r5,63
	ctx.r5.s64 = 63;
	// addi r6,r25,252
	ctx.r6.s64 = ctx.r25.s64 + 252;
loc_880FF104:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880ff174
	if (ctx.cr6.eq) goto loc_880FF174;
	// lhz r11,0(r29)
	ctx.current_instruction = 0x880FF10C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x880ff174
	if (!ctx.cr6.gt) goto loc_880FF174;
	// lwz r9,0(r6)
	ctx.current_instruction = 0x880FF11C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r11,r7
	ctx.current_instruction = 0x880FF124;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880ff164
	if (ctx.cr6.eq) goto loc_880FF164;
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// ble cr6,0x880ff164
	if (!ctx.cr6.gt) goto loc_880FF164;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880ff164
	if (ctx.cr6.eq) goto loc_880FF164;
	// sthx r27,r11,r7
	ctx.current_instruction = 0x880FF144;
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r27.u16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lhz r11,0(r29)
	ctx.current_instruction = 0x880FF14C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r9,0(r29)
	ctx.current_instruction = 0x880FF158;
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r9.u16);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// li r8,1
	ctx.r8.s64 = 1;
loc_880FF164:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bgt cr6,0x880ff104
	if (ctx.cr6.gt) goto loc_880FF104;
loc_880FF174:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880ff190
	if (ctx.cr6.eq) goto loc_880FF190;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x880fef58
	ctx.lr = 0x880FF190;
	sub_880FEF58(ctx, base);
loc_880FF190:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// bgt 0x880ff0ac
	if (ctx.cr0.gt) goto loc_880FF0AC;
loc_880FF1A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88101728) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88101728;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88101728) {
			switch (rex_dispatch_address) {
				case 0x88101730:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88101728;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88101730: goto loc_88101730;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88101730;
	__savegprlr_14(ctx, base);
loc_88101730:
	// li r16,0
	ctx.r16.s64 = 0;
	// stw r3,20(r1)
	ctx.current_instruction = 0x88101734;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r6,44(r1)
	ctx.current_instruction = 0x88101738;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// stw r7,52(r1)
	ctx.current_instruction = 0x8810173C;
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// stw r8,60(r1)
	ctx.current_instruction = 0x88101740;
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r8.u32);
	// stw r9,68(r1)
	ctx.current_instruction = 0x88101744;
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// stw r10,76(r1)
	ctx.current_instruction = 0x88101748;
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// stw r16,-196(r1)
	ctx.current_instruction = 0x8810174C;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r16.u32);
loc_88101750:
	// lbzx r11,r16,r6
	ctx.current_instruction = 0x88101750;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r6.u32);
	// extsb r19,r11
	ctx.r19.s64 = ctx.r11.s8;
	// stw r19,-192(r1)
	ctx.current_instruction = 0x88101758;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r19.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x88102558
	if (ctx.cr6.eq) goto loc_88102558;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r16,4
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 4, ctx.xer);
	// stw r10,-180(r1)
	ctx.current_instruction = 0x8810176C;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// bge cr6,0x881017e8
	if (!ctx.cr6.lt) goto loc_881017E8;
	// clrlwi r5,r16,31
	ctx.r5.u64 = ctx.r16.u32 & 0x1;
	// lwz r9,31544(r3)
	ctx.current_instruction = 0x88101778;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// rlwinm r11,r16,3,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 3) & 0x10;
	// lwz r10,52(r1)
	ctx.current_instruction = 0x88101780;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,100(r1)
	ctx.current_instruction = 0x88101788;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r31,r16,0,30,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0x2;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r26,r4,r8
	ctx.r26.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,-208(r1)
	ctx.current_instruction = 0x881017A4;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r9.u32);
	// beq cr6,0x881017b8
	if (ctx.cr6.eq) goto loc_881017B8;
	// lwz r11,796(r3)
	ctx.current_instruction = 0x881017AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x881017bc
	goto loc_881017BC;
loc_881017B8:
	// lwz r7,796(r3)
	ctx.current_instruction = 0x881017B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
loc_881017BC:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,76(r1)
	ctx.current_instruction = 0x881017C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// mullw r4,r31,r7
	ctx.r4.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// stw r16,-180(r1)
	ctx.current_instruction = 0x881017C8;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r16.u32);
	// add r6,r4,r11
	ctx.r6.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,-204(r1)
	ctx.current_instruction = 0x881017E0;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r8.u32);
	// b 0x88101844
	goto loc_88101844;
loc_881017E8:
	// lwz r11,31544(r3)
	ctx.current_instruction = 0x881017E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// bne cr6,0x88101814
	if (!ctx.cr6.eq) goto loc_88101814;
	// lwz r9,60(r1)
	ctx.current_instruction = 0x881017F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x881017F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,108(r1)
	ctx.current_instruction = 0x881017FC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r9,-208(r1)
	ctx.current_instruction = 0x88101800;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r9.u32);
	// stw r8,-204(r1)
	ctx.current_instruction = 0x88101804;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r8.u32);
	// beq cr6,0x88101838
	if (ctx.cr6.eq) goto loc_88101838;
	// lwz r7,796(r3)
	ctx.current_instruction = 0x8810180C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// b 0x88101840
	goto loc_88101840;
loc_88101814:
	// lwz r9,68(r1)
	ctx.current_instruction = 0x88101814;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,92(r1)
	ctx.current_instruction = 0x8810181C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r26,116(r1)
	ctx.current_instruction = 0x88101820;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r9,-208(r1)
	ctx.current_instruction = 0x88101824;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r9.u32);
	// stw r8,-204(r1)
	ctx.current_instruction = 0x88101828;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r8.u32);
	// beq cr6,0x88101838
	if (ctx.cr6.eq) goto loc_88101838;
	// lwz r7,796(r3)
	ctx.current_instruction = 0x88101830;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// b 0x88101840
	goto loc_88101840;
loc_88101838:
	// lwz r11,796(r3)
	ctx.current_instruction = 0x88101838;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
loc_88101840:
	// li r5,8
	ctx.r5.s64 = 8;
loc_88101844:
	// li r31,8
	ctx.r31.s64 = 8;
	// addi r18,r26,4
	ctx.r18.s64 = ctx.r26.s64 + 4;
	// rlwinm r17,r5,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r18,-184(r1)
	ctx.current_instruction = 0x88101850;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r18.u32);
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// stw r17,-188(r1)
	ctx.current_instruction = 0x88101858;
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r17.u32);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_88101864:
	// lbz r6,-2(r11)
	ctx.current_instruction = 0x88101864;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// sth r6,-4(r4)
	ctx.current_instruction = 0x88101868;
	REX_STORE_U16(ctx.r4.u32 + -4, ctx.r6.u16);
	// lbz r6,-1(r11)
	ctx.current_instruction = 0x8810186C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// sth r6,-2(r4)
	ctx.current_instruction = 0x88101870;
	REX_STORE_U16(ctx.r4.u32 + -2, ctx.r6.u16);
	// lbz r6,0(r11)
	ctx.current_instruction = 0x88101874;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// sth r6,0(r4)
	ctx.current_instruction = 0x88101878;
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// lbz r6,1(r11)
	ctx.current_instruction = 0x8810187C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// sth r6,2(r4)
	ctx.current_instruction = 0x88101880;
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r6.u16);
	// lbz r6,2(r11)
	ctx.current_instruction = 0x88101884;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// sth r6,4(r4)
	ctx.current_instruction = 0x88101888;
	REX_STORE_U16(ctx.r4.u32 + 4, ctx.r6.u16);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x8810188C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// sth r6,6(r4)
	ctx.current_instruction = 0x88101890;
	REX_STORE_U16(ctx.r4.u32 + 6, ctx.r6.u16);
	// lbz r6,4(r11)
	ctx.current_instruction = 0x88101894;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// sth r6,8(r4)
	ctx.current_instruction = 0x88101898;
	REX_STORE_U16(ctx.r4.u32 + 8, ctx.r6.u16);
	// lbz r6,5(r11)
	ctx.current_instruction = 0x8810189C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sth r6,10(r4)
	ctx.current_instruction = 0x881018A4;
	REX_STORE_U16(ctx.r4.u32 + 10, ctx.r6.u16);
	// add r4,r4,r17
	ctx.r4.u64 = ctx.r4.u64 + ctx.r17.u64;
	// bdnz 0x88101864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88101864;
	// lwz r11,124(r1)
	ctx.current_instruction = 0x881018B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881024ac
	if (!ctx.cr6.eq) goto loc_881024AC;
	// rlwinm r11,r19,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88101bb4
	if (ctx.cr6.eq) goto loc_88101BB4;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r5,r11
	ctx.r28.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r31,r5,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,2
	ctx.r11.s64 = 2;
	// add r30,r7,r4
	ctx.r30.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r29,r5,r31
	ctx.r29.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r31,r30,r8
	ctx.r31.u64 = ctx.r30.u64 + ctx.r8.u64;
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// clrlwi r18,r10,31
	ctx.r18.u64 = ctx.r10.u32 & 0x1;
	// add r30,r29,r9
	ctx.r30.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r3,r4,-1
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
	// addi r6,r4,2
	ctx.r6.s64 = ctx.r4.s64 + 2;
	// stw r3,-172(r1)
	ctx.current_instruction = 0x88101908;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r3.u32);
	// add r29,r5,r9
	ctx.r29.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r19,r5,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// subfic r31,r7,1
	ctx.xer.ca = ctx.r7.u32 <= 1;
	ctx.r31.u64 = static_cast<uint64_t>(1) - ctx.r7.u64;
	// add r24,r17,r26
	ctx.r24.u64 = ctx.r17.u64 + ctx.r26.u64;
	// stw r4,-200(r1)
	ctx.current_instruction = 0x88101924;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r4.u32);
	// addi r15,r8,-2
	ctx.r15.s64 = ctx.r8.s64 + -2;
	// stw r31,-176(r1)
	ctx.current_instruction = 0x8810192C;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r31.u32);
	// addi r14,r9,-1
	ctx.r14.s64 = ctx.r9.s64 + -1;
	// addi r17,r11,-2
	ctx.r17.s64 = ctx.r11.s64 + -2;
	// rlwinm r16,r7,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r5,3,0,28
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// add r21,r28,r26
	ctx.r21.u64 = ctx.r28.u64 + ctx.r26.u64;
	// addi r25,r30,-1
	ctx.r25.s64 = ctx.r30.s64 + -1;
	// add r22,r19,r26
	ctx.r22.u64 = ctx.r19.u64 + ctx.r26.u64;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// addi r9,r5,2
	ctx.r9.s64 = ctx.r5.s64 + 2;
	// addi r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 1;
	// b 0x8810196c
	goto loc_8810196C;
loc_88101960:
	// lwz r31,-176(r1)
	ctx.current_instruction = 0x88101960;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r4,-200(r1)
	ctx.current_instruction = 0x88101964;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r3,-172(r1)
	ctx.current_instruction = 0x88101968;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
loc_8810196C:
	// lbzx r30,r11,r6
	ctx.current_instruction = 0x8810196C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lbzx r29,r11,r4
	ctx.current_instruction = 0x88101974;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// beq cr6,0x88101988
	if (ctx.cr6.eq) goto loc_88101988;
	// lbz r31,0(r14)
	ctx.current_instruction = 0x8810197C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// lbzx r4,r11,r3
	ctx.current_instruction = 0x88101980;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// b 0x88101990
	goto loc_88101990;
loc_88101988:
	// lbz r4,0(r15)
	ctx.current_instruction = 0x88101988;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// lbzx r31,r17,r31
	ctx.current_instruction = 0x8810198C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r31.u32);
loc_88101990:
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r3,r30
	ctx.r3.s64 = ctx.r30.s16;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// subf r27,r4,r3
	ctx.r27.u64 = ctx.r3.u64 - ctx.r4.u64;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// rlwinm r29,r27,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r27,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r27.u64;
	// mulli r30,r30,37
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(37));
	// rlwinm r27,r4,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r29,r4,r27
	ctx.r29.u64 = ctx.r4.u64 + ctx.r27.u64;
	// subf r4,r31,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r31.u64;
	// mulli r3,r3,37
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(37));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// subf r31,r29,r3
	ctx.r31.u64 = ctx.r3.u64 - ctx.r29.u64;
	// srawi r4,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 5;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// sth r4,0(r23)
	ctx.current_instruction = 0x881019DC;
	REX_STORE_U16(ctx.r23.u32 + 0, ctx.r4.u16);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// srawi r3,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 5;
	// sth r3,2(r23)
	ctx.current_instruction = 0x881019E8;
	REX_STORE_U16(ctx.r23.u32 + 2, ctx.r3.u16);
	// lbz r30,1(r11)
	ctx.current_instruction = 0x881019EC;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r31,2(r11)
	ctx.current_instruction = 0x881019F0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// beq cr6,0x88101a04
	if (ctx.cr6.eq) goto loc_88101A04;
	// lbz r29,0(r11)
	ctx.current_instruction = 0x881019F8;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,-1(r11)
	ctx.current_instruction = 0x881019FC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// b 0x88101a0c
	goto loc_88101A0C;
loc_88101A04:
	// lbz r29,1(r17)
	ctx.current_instruction = 0x88101A04;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r17.u32 + 1);
	// lbz r4,0(r17)
	ctx.current_instruction = 0x88101A08;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r17.u32 + 0);
loc_88101A0C:
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r3,r31
	ctx.r3.s64 = ctx.r31.s16;
	// extsh r31,r29
	ctx.r31.s64 = ctx.r29.s16;
	// subf r29,r4,r3
	ctx.r29.u64 = ctx.r3.u64 - ctx.r4.u64;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// rlwinm r28,r29,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r30,r30,37
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(37));
	// subf r29,r29,r28
	ctx.r29.u64 = ctx.r28.u64 - ctx.r29.u64;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r4,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r29,r4,r27
	ctx.r29.u64 = ctx.r4.u64 + ctx.r27.u64;
	// mulli r3,r3,37
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(37));
	// subf r4,r31,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r31.u64;
	// subf r31,r29,r3
	ctx.r31.u64 = ctx.r3.u64 - ctx.r29.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// srawi r4,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 5;
	// srawi r3,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 5;
	// sth r4,0(r24)
	ctx.current_instruction = 0x88101A5C;
	REX_STORE_U16(ctx.r24.u32 + 0, ctx.r4.u16);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// sth r3,2(r24)
	ctx.current_instruction = 0x88101A64;
	REX_STORE_U16(ctx.r24.u32 + 2, ctx.r3.u16);
	// lbzx r30,r9,r11
	ctx.current_instruction = 0x88101A68;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r29,r8,r11
	ctx.current_instruction = 0x88101A6C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// beq cr6,0x88101a84
	if (ctx.cr6.eq) goto loc_88101A84;
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// lbzx r31,r11,r5
	ctx.current_instruction = 0x88101A78;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lbzx r4,r4,r11
	ctx.current_instruction = 0x88101A7C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// b 0x88101a90
	goto loc_88101A90;
loc_88101A84:
	// addi r4,r7,1
	ctx.r4.s64 = ctx.r7.s64 + 1;
	// lbzx r31,r4,r17
	ctx.current_instruction = 0x88101A88;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r17.u32);
	// lbzx r4,r17,r7
	ctx.current_instruction = 0x88101A8C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r7.u32);
loc_88101A90:
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r3,r30
	ctx.r3.s64 = ctx.r30.s16;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// subf r27,r4,r3
	ctx.r27.u64 = ctx.r3.u64 - ctx.r4.u64;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// rlwinm r29,r27,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r27,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r27.u64;
	// mulli r30,r30,37
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(37));
	// rlwinm r27,r4,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r29,r4,r27
	ctx.r29.u64 = ctx.r4.u64 + ctx.r27.u64;
	// mulli r3,r3,37
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(37));
	// subf r4,r31,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r31.u64;
	// subf r31,r29,r3
	ctx.r31.u64 = ctx.r3.u64 - ctx.r29.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// srawi r4,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 5;
	// srawi r3,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 5;
	// sth r4,0(r22)
	ctx.current_instruction = 0x88101AE0;
	REX_STORE_U16(ctx.r22.u32 + 0, ctx.r4.u16);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// sth r3,2(r22)
	ctx.current_instruction = 0x88101AE8;
	REX_STORE_U16(ctx.r22.u32 + 2, ctx.r3.u16);
	// lbz r31,2(r25)
	ctx.current_instruction = 0x88101AEC;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r25.u32 + 2);
	// lbz r30,1(r25)
	ctx.current_instruction = 0x88101AF0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r25.u32 + 1);
	// beq cr6,0x88101b04
	if (ctx.cr6.eq) goto loc_88101B04;
	// lbz r29,0(r25)
	ctx.current_instruction = 0x88101AF8;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// lbz r4,-1(r25)
	ctx.current_instruction = 0x88101AFC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r25.u32 + -1);
	// b 0x88101b0c
	goto loc_88101B0C;
loc_88101B04:
	// lbz r29,1(r10)
	ctx.current_instruction = 0x88101B04;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r4,0(r10)
	ctx.current_instruction = 0x88101B08;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
loc_88101B0C:
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r3,r31
	ctx.r3.s64 = ctx.r31.s16;
	// extsh r31,r29
	ctx.r31.s64 = ctx.r29.s16;
	// subf r29,r4,r3
	ctx.r29.u64 = ctx.r3.u64 - ctx.r4.u64;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// rlwinm r27,r29,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r29,r27
	ctx.r29.u64 = ctx.r27.u64 - ctx.r29.u64;
	// mulli r30,r30,37
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(37));
	// rlwinm r27,r4,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r29,r4,r27
	ctx.r29.u64 = ctx.r4.u64 + ctx.r27.u64;
	// mulli r3,r3,37
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(37));
	// subf r4,r31,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r31.u64;
	// subf r31,r29,r3
	ctx.r31.u64 = ctx.r3.u64 - ctx.r29.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// srawi r4,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 5;
	// srawi r3,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 5;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sth r4,0(r21)
	ctx.current_instruction = 0x88101B64;
	REX_STORE_U16(ctx.r21.u32 + 0, ctx.r4.u16);
	// add r15,r15,r16
	ctx.r15.u64 = ctx.r15.u64 + ctx.r16.u64;
	// sth r3,2(r21)
	ctx.current_instruction = 0x88101B6C;
	REX_STORE_U16(ctx.r21.u32 + 2, ctx.r3.u16);
	// add r17,r17,r16
	ctx.r17.u64 = ctx.r17.u64 + ctx.r16.u64;
	// add r10,r10,r16
	ctx.r10.u64 = ctx.r10.u64 + ctx.r16.u64;
	// add r14,r14,r19
	ctx.r14.u64 = ctx.r14.u64 + ctx.r19.u64;
	// add r23,r20,r23
	ctx.r23.u64 = ctx.r20.u64 + ctx.r23.u64;
	// add r24,r20,r24
	ctx.r24.u64 = ctx.r20.u64 + ctx.r24.u64;
	// add r22,r20,r22
	ctx.r22.u64 = ctx.r20.u64 + ctx.r22.u64;
	// add r21,r20,r21
	ctx.r21.u64 = ctx.r20.u64 + ctx.r21.u64;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r25,r25,r19
	ctx.r25.u64 = ctx.r25.u64 + ctx.r19.u64;
	// bdnz 0x88101960
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88101960;
	// lwz r18,-184(r1)
	ctx.current_instruction = 0x88101B98;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r17,-188(r1)
	ctx.current_instruction = 0x88101B9C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r19,-192(r1)
	ctx.current_instruction = 0x88101BA0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r8,-204(r1)
	ctx.current_instruction = 0x88101BA4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r9,-208(r1)
	ctx.current_instruction = 0x88101BA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// lwz r16,-196(r1)
	ctx.current_instruction = 0x88101BAC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// lwz r3,20(r1)
	ctx.current_instruction = 0x88101BB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
loc_88101BB4:
	// rlwinm r11,r19,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88101ee4
	if (ctx.cr6.eq) goto loc_88101EE4;
	// addi r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 2;
	// addi r11,r7,3
	ctx.r11.s64 = ctx.r7.s64 + 3;
	// rlwinm r31,r10,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// li r31,2
	ctx.r31.s64 = 2;
	// add r29,r5,r4
	ctx.r29.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r6,r5,3
	ctx.r6.s64 = ctx.r5.s64 + 3;
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// addi r25,r5,6
	ctx.r25.s64 = ctx.r5.s64 + 6;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// add r11,r29,r9
	ctx.r11.u64 = ctx.r29.u64 + ctx.r9.u64;
	// clrlwi r20,r16,29
	ctx.r20.u64 = ctx.r16.u32 & 0x7;
	// rlwinm r27,r6,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r8,r7
	ctx.r30.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r29,r5,r9
	ctx.r29.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r14,r28,r8
	ctx.r14.u64 = ctx.r28.u64 + ctx.r8.u64;
	// addi r15,r8,9
	ctx.r15.s64 = ctx.r8.s64 + 9;
	// addi r16,r9,7
	ctx.r16.s64 = ctx.r9.s64 + 7;
	// rlwinm r25,r25,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// addi r6,r4,2
	ctx.r6.s64 = ctx.r4.s64 + 2;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// stw r8,-200(r1)
	ctx.current_instruction = 0x88101C24;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r8.u32);
	// rlwinm r31,r3,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,-172(r1)
	ctx.current_instruction = 0x88101C2C;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r6.u32);
	// subfic r4,r7,-1
	ctx.xer.ca = ctx.r7.u32 <= 4294967295;
	ctx.r4.u64 = static_cast<uint64_t>(-1) - ctx.r7.u64;
	// add r23,r27,r26
	ctx.r23.u64 = ctx.r27.u64 + ctx.r26.u64;
	// addi r28,r11,7
	ctx.r28.s64 = ctx.r11.s64 + 7;
	// stw r4,-176(r1)
	ctx.current_instruction = 0x88101C3C;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r4.u32);
	// add r27,r25,r26
	ctx.r27.u64 = ctx.r25.u64 + ctx.r26.u64;
	// rlwinm r20,r20,0,31,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r18,r5,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r17,r7,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r5,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r19,r30,9
	ctx.r19.s64 = ctx.r30.s64 + 9;
	// addi r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 7;
	// addi r24,r26,12
	ctx.r24.s64 = ctx.r26.s64 + 12;
	// add r22,r31,r26
	ctx.r22.u64 = ctx.r31.u64 + ctx.r26.u64;
	// addi r25,r5,-1
	ctx.r25.s64 = ctx.r5.s64 + -1;
	// b 0x88101c78
	goto loc_88101C78;
loc_88101C6C:
	// lwz r6,-172(r1)
	ctx.current_instruction = 0x88101C6C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r8,-200(r1)
	ctx.current_instruction = 0x88101C70;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r4,-176(r1)
	ctx.current_instruction = 0x88101C74;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
loc_88101C78:
	// lbz r29,0(r16)
	ctx.current_instruction = 0x88101C78;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r16.u32 + 0);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// lbzx r30,r9,r11
	ctx.current_instruction = 0x88101C80;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// beq cr6,0x88101c98
	if (ctx.cr6.eq) goto loc_88101C98;
	// lbz r8,0(r15)
	ctx.current_instruction = 0x88101C88;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// lbzx r31,r4,r19
	ctx.current_instruction = 0x88101C8C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r19.u32);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// b 0x88101ca0
	goto loc_88101CA0;
loc_88101C98:
	// lbzx r31,r8,r11
	ctx.current_instruction = 0x88101C98;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbzx r4,r6,r11
	ctx.current_instruction = 0x88101C9C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
loc_88101CA0:
	// extsh r8,r30
	ctx.r8.s64 = ctx.r30.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r4,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r31,r29
	ctx.r31.s64 = ctx.r29.s16;
	// subf r6,r6,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r6.u64;
	// stw r31,-168(r1)
	ctx.current_instruction = 0x88101CC4;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r31.u32);
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-168(r1)
	ctx.current_instruction = 0x88101CCC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// subf r29,r30,r6
	ctx.r29.u64 = ctx.r6.u64 - ctx.r30.u64;
	// mulli r30,r3,37
	ctx.r30.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(37));
	// add r6,r4,r31
	ctx.r6.u64 = ctx.r4.u64 + ctx.r31.u64;
	// mulli r3,r8,37
	ctx.r3.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(37));
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// subf r31,r6,r3
	ctx.r31.u64 = ctx.r3.u64 - ctx.r6.u64;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// srawi r4,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 5;
	// srawi r3,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 5;
	// sth r4,2(r24)
	ctx.current_instruction = 0x88101CF8;
	REX_STORE_U16(ctx.r24.u32 + 2, ctx.r4.u16);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// sth r3,0(r24)
	ctx.current_instruction = 0x88101D00;
	REX_STORE_U16(ctx.r24.u32 + 0, ctx.r3.u16);
	// lbz r29,0(r11)
	ctx.current_instruction = 0x88101D04;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,-1(r11)
	ctx.current_instruction = 0x88101D08;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// beq cr6,0x88101d1c
	if (ctx.cr6.eq) goto loc_88101D1C;
	// lbz r30,-1(r19)
	ctx.current_instruction = 0x88101D10;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r19.u32 + -1);
	// lbz r4,0(r19)
	ctx.current_instruction = 0x88101D14;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// b 0x88101d24
	goto loc_88101D24;
loc_88101D1C:
	// lbz r30,1(r11)
	ctx.current_instruction = 0x88101D1C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,2(r11)
	ctx.current_instruction = 0x88101D20;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
loc_88101D24:
	// extsh r8,r31
	ctx.r8.s64 = ctx.r31.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r31,r30
	ctx.r31.s64 = ctx.r30.s16;
	// subf r6,r4,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r4.u64;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// extsh r31,r29
	ctx.r31.s64 = ctx.r29.s16;
	// subf r6,r6,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r6.u64;
	// stw r31,-168(r1)
	ctx.current_instruction = 0x88101D48;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r31.u32);
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r30,r6
	ctx.r29.u64 = ctx.r6.u64 - ctx.r30.u64;
	// lwz r3,-168(r1)
	ctx.current_instruction = 0x88101D54;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// mulli r30,r3,37
	ctx.r30.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(37));
	// add r6,r4,r31
	ctx.r6.u64 = ctx.r4.u64 + ctx.r31.u64;
	// mulli r3,r8,37
	ctx.r3.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(37));
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// subf r31,r6,r3
	ctx.r31.u64 = ctx.r3.u64 - ctx.r6.u64;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// srawi r4,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 5;
	// srawi r3,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 5;
	// sth r4,2(r27)
	ctx.current_instruction = 0x88101D7C;
	REX_STORE_U16(ctx.r27.u32 + 2, ctx.r4.u16);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// sth r3,0(r27)
	ctx.current_instruction = 0x88101D84;
	REX_STORE_U16(ctx.r27.u32 + 0, ctx.r3.u16);
	// lbzx r29,r11,r5
	ctx.current_instruction = 0x88101D88;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lbzx r30,r25,r11
	ctx.current_instruction = 0x88101D8C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// beq cr6,0x88101da4
	if (ctx.cr6.eq) goto loc_88101DA4;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// lbzx r4,r19,r7
	ctx.current_instruction = 0x88101D98;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r7.u32);
	// lbzx r31,r8,r19
	ctx.current_instruction = 0x88101D9C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r19.u32);
	// b 0x88101db0
	goto loc_88101DB0;
loc_88101DA4:
	// addi r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 1;
	// lbzx r4,r10,r11
	ctx.current_instruction = 0x88101DA8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r31,r8,r11
	ctx.current_instruction = 0x88101DAC;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
loc_88101DB0:
	// extsh r8,r30
	ctx.r8.s64 = ctx.r30.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r4,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r31,r29
	ctx.r31.s64 = ctx.r29.s16;
	// subf r6,r6,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r6.u64;
	// stw r31,-168(r1)
	ctx.current_instruction = 0x88101DD4;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r31.u32);
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-168(r1)
	ctx.current_instruction = 0x88101DDC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// subf r29,r30,r6
	ctx.r29.u64 = ctx.r6.u64 - ctx.r30.u64;
	// mulli r30,r3,37
	ctx.r30.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(37));
	// add r6,r4,r31
	ctx.r6.u64 = ctx.r4.u64 + ctx.r31.u64;
	// mulli r3,r8,37
	ctx.r3.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(37));
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// subf r31,r6,r3
	ctx.r31.u64 = ctx.r3.u64 - ctx.r6.u64;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// srawi r4,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 5;
	// srawi r3,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 5;
	// sth r4,2(r23)
	ctx.current_instruction = 0x88101E08;
	REX_STORE_U16(ctx.r23.u32 + 2, ctx.r4.u16);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// sth r3,0(r23)
	ctx.current_instruction = 0x88101E10;
	REX_STORE_U16(ctx.r23.u32 + 0, ctx.r3.u16);
	// lbz r31,-1(r28)
	ctx.current_instruction = 0x88101E14;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r28.u32 + -1);
	// lbz r29,0(r28)
	ctx.current_instruction = 0x88101E18;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// beq cr6,0x88101e2c
	if (ctx.cr6.eq) goto loc_88101E2C;
	// lbz r30,-1(r14)
	ctx.current_instruction = 0x88101E20;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r14.u32 + -1);
	// lbz r4,0(r14)
	ctx.current_instruction = 0x88101E24;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// b 0x88101e34
	goto loc_88101E34;
loc_88101E2C:
	// lbz r30,1(r28)
	ctx.current_instruction = 0x88101E2C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r28.u32 + 1);
	// lbz r4,2(r28)
	ctx.current_instruction = 0x88101E30;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r28.u32 + 2);
loc_88101E34:
	// extsh r8,r31
	ctx.r8.s64 = ctx.r31.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r31,r30
	ctx.r31.s64 = ctx.r30.s16;
	// subf r6,r4,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r4.u64;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// extsh r31,r29
	ctx.r31.s64 = ctx.r29.s16;
	// subf r6,r6,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r6.u64;
	// stw r31,-168(r1)
	ctx.current_instruction = 0x88101E58;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r31.u32);
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-168(r1)
	ctx.current_instruction = 0x88101E60;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// subf r29,r30,r6
	ctx.r29.u64 = ctx.r6.u64 - ctx.r30.u64;
	// mulli r30,r3,37
	ctx.r30.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(37));
	// add r6,r4,r31
	ctx.r6.u64 = ctx.r4.u64 + ctx.r31.u64;
	// mulli r3,r8,37
	ctx.r3.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(37));
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// subf r31,r6,r3
	ctx.r31.u64 = ctx.r3.u64 - ctx.r6.u64;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// srawi r4,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 5;
	// srawi r3,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 5;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// sth r8,2(r22)
	ctx.current_instruction = 0x88101E94;
	REX_STORE_U16(ctx.r22.u32 + 2, ctx.r8.u16);
	// add r15,r17,r15
	ctx.r15.u64 = ctx.r17.u64 + ctx.r15.u64;
	// sth r6,0(r22)
	ctx.current_instruction = 0x88101E9C;
	REX_STORE_U16(ctx.r22.u32 + 0, ctx.r6.u16);
	// add r19,r19,r17
	ctx.r19.u64 = ctx.r19.u64 + ctx.r17.u64;
	// add r14,r14,r17
	ctx.r14.u64 = ctx.r14.u64 + ctx.r17.u64;
	// add r24,r21,r24
	ctx.r24.u64 = ctx.r21.u64 + ctx.r24.u64;
	// add r27,r21,r27
	ctx.r27.u64 = ctx.r21.u64 + ctx.r27.u64;
	// add r23,r21,r23
	ctx.r23.u64 = ctx.r21.u64 + ctx.r23.u64;
	// add r22,r21,r22
	ctx.r22.u64 = ctx.r21.u64 + ctx.r22.u64;
	// add r16,r18,r16
	ctx.r16.u64 = ctx.r18.u64 + ctx.r16.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// add r28,r28,r18
	ctx.r28.u64 = ctx.r28.u64 + ctx.r18.u64;
	// bdnz 0x88101c6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88101C6C;
	// lwz r3,20(r1)
	ctx.current_instruction = 0x88101EC8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r16,-196(r1)
	ctx.current_instruction = 0x88101ECC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// lwz r9,-208(r1)
	ctx.current_instruction = 0x88101ED0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// lwz r8,-204(r1)
	ctx.current_instruction = 0x88101ED4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r19,-192(r1)
	ctx.current_instruction = 0x88101ED8;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r17,-188(r1)
	ctx.current_instruction = 0x88101EDC;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r18,-184(r1)
	ctx.current_instruction = 0x88101EE0;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
loc_88101EE4:
	// rlwinm r11,r19,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8810217c
	if (ctx.cr6.eq) goto loc_8810217C;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,-180(r1)
	ctx.current_instruction = 0x88101EF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// subf r30,r7,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r31,r5,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r5.u64;
	// rlwinm r22,r10,0,30,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// addi r20,r5,3
	ctx.r20.s64 = ctx.r5.s64 + 3;
	// addi r4,r18,-6
	ctx.r4.s64 = ctx.r18.s64 + -6;
	// addi r21,r30,2
	ctx.r21.s64 = ctx.r30.s64 + 2;
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
	// add r23,r17,r26
	ctx.r23.u64 = ctx.r17.u64 + ctx.r26.u64;
loc_88101F24:
	// lhz r29,0(r23)
	ctx.current_instruction = 0x88101F24;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r23.u32 + 0);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lhz r28,2(r4)
	ctx.current_instruction = 0x88101F2C;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// beq cr6,0x88101f44
	if (ctx.cr6.eq) goto loc_88101F44;
	// subf r31,r17,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r17.u64;
	// lbz r30,-2(r10)
	ctx.current_instruction = 0x88101F38;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// lbzx r31,r31,r9
	ctx.current_instruction = 0x88101F3C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// b 0x88101f54
	goto loc_88101F54;
loc_88101F44:
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r30,-2(r21)
	ctx.current_instruction = 0x88101F48;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r21.u32 + -2);
	// subf r31,r31,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r31.u64;
	// lbzx r31,r31,r8
	ctx.current_instruction = 0x88101F50;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
loc_88101F54:
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r24,r29
	ctx.r24.s64 = ctx.r29.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// subf r27,r31,r24
	ctx.r27.u64 = ctx.r24.u64 - ctx.r31.u64;
	// extsh r29,r28
	ctx.r29.s64 = ctx.r28.s16;
	// rlwinm r15,r27,3,0,28
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r25,r29,37
	ctx.r25.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(37));
	// subf r27,r27,r15
	ctx.r27.u64 = ctx.r15.u64 - ctx.r27.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r28,r27,r25
	ctx.r28.u64 = ctx.r27.u64 + ctx.r25.u64;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r30,r28
	ctx.r30.u64 = ctx.r28.u64 - ctx.r30.u64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// mulli r29,r24,37
	ctx.r29.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(37));
	// srawi r30,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 5;
	// subf r31,r31,r29
	ctx.r31.u64 = ctx.r29.u64 - ctx.r31.u64;
	// sth r30,2(r4)
	ctx.current_instruction = 0x88101F9C;
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r30.u16);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// srawi r31,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 5;
	// sth r31,0(r23)
	ctx.current_instruction = 0x88101FAC;
	REX_STORE_U16(ctx.r23.u32 + 0, ctx.r31.u16);
	// lhz r28,4(r4)
	ctx.current_instruction = 0x88101FB0;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r29,2(r23)
	ctx.current_instruction = 0x88101FB4;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r23.u32 + 2);
	// beq cr6,0x88101fcc
	if (ctx.cr6.eq) goto loc_88101FCC;
	// subf r31,r17,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r17.u64;
	// lbz r30,-1(r10)
	ctx.current_instruction = 0x88101FC0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// b 0x88101fdc
	goto loc_88101FDC;
loc_88101FCC:
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r30,-1(r21)
	ctx.current_instruction = 0x88101FD0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r21.u32 + -1);
	// subf r31,r31,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r31.u64;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
loc_88101FDC:
	// lbz r31,1(r31)
	ctx.current_instruction = 0x88101FDC;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// extsh r24,r29
	ctx.r24.s64 = ctx.r29.s16;
	// extsh r29,r28
	ctx.r29.s64 = ctx.r28.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// subf r27,r31,r24
	ctx.r27.u64 = ctx.r24.u64 - ctx.r31.u64;
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r27,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// subf r27,r27,r25
	ctx.r27.u64 = ctx.r25.u64 - ctx.r27.u64;
	// mulli r25,r29,37
	ctx.r25.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(37));
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mulli r29,r24,37
	ctx.r29.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(37));
	// subf r30,r30,r27
	ctx.r30.u64 = ctx.r27.u64 - ctx.r30.u64;
	// subf r31,r31,r29
	ctx.r31.u64 = ctx.r29.u64 - ctx.r31.u64;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// srawi r30,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 5;
	// srawi r31,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 5;
	// sth r30,4(r4)
	ctx.current_instruction = 0x88102030;
	REX_STORE_U16(ctx.r4.u32 + 4, ctx.r30.u16);
	// add r30,r6,r11
	ctx.r30.u64 = ctx.r6.u64 + ctx.r11.u64;
	// sth r31,2(r23)
	ctx.current_instruction = 0x88102038;
	REX_STORE_U16(ctx.r23.u32 + 2, ctx.r31.u16);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r28,r29,r26
	ctx.current_instruction = 0x88102044;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r26.u32);
	// lhz r27,6(r4)
	ctx.current_instruction = 0x88102048;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r4.u32 + 6);
	// beq cr6,0x88102060
	if (ctx.cr6.eq) goto loc_88102060;
	// subf r31,r17,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r17.u64;
	// lbz r30,0(r10)
	ctx.current_instruction = 0x88102054;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// b 0x88102070
	goto loc_88102070;
loc_88102060:
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r30,0(r21)
	ctx.current_instruction = 0x88102064;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// subf r31,r31,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r31.u64;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
loc_88102070:
	// lbz r31,2(r31)
	ctx.current_instruction = 0x88102070;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// extsh r15,r28
	ctx.r15.s64 = ctx.r28.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r28,r27
	ctx.r28.s64 = ctx.r27.s16;
	// subf r25,r31,r15
	ctx.r25.u64 = ctx.r15.u64 - ctx.r31.u64;
	// rlwinm r27,r30,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r14,r25,3,0,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r24,r28,37
	ctx.r24.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(37));
	// subf r25,r25,r14
	ctx.r25.u64 = ctx.r14.u64 - ctx.r25.u64;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r25,r24
	ctx.r27.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// subf r30,r30,r27
	ctx.r30.u64 = ctx.r27.u64 - ctx.r30.u64;
	// mulli r28,r15,37
	ctx.r28.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(37));
	// subf r31,r31,r28
	ctx.r31.u64 = ctx.r28.u64 - ctx.r31.u64;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// srawi r30,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 5;
	// srawi r31,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 5;
	// sth r30,6(r4)
	ctx.current_instruction = 0x881020C4;
	REX_STORE_U16(ctx.r4.u32 + 6, ctx.r30.u16);
	// add r30,r20,r11
	ctx.r30.u64 = ctx.r20.u64 + ctx.r11.u64;
	// sthx r31,r29,r26
	ctx.current_instruction = 0x881020CC;
	REX_STORE_U16(ctx.r29.u32 + ctx.r26.u32, ctx.r31.u16);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r27,8(r4)
	ctx.current_instruction = 0x881020D8;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r4.u32 + 8);
	// lhzx r28,r29,r26
	ctx.current_instruction = 0x881020DC;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r26.u32);
	// beq cr6,0x881020f4
	if (ctx.cr6.eq) goto loc_881020F4;
	// subf r31,r17,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r17.u64;
	// lbz r30,1(r10)
	ctx.current_instruction = 0x881020E8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// b 0x88102104
	goto loc_88102104;
loc_881020F4:
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r30,1(r21)
	ctx.current_instruction = 0x881020F8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r21.u32 + 1);
	// subf r31,r31,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r31.u64;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
loc_88102104:
	// lbz r31,3(r31)
	ctx.current_instruction = 0x88102104;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// extsh r15,r28
	ctx.r15.s64 = ctx.r28.s16;
	// extsh r25,r27
	ctx.r25.s64 = ctx.r27.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// subf r28,r31,r15
	ctx.r28.u64 = ctx.r15.u64 - ctx.r31.u64;
	// mulli r24,r25,37
	ctx.r24.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(37));
	// rlwinm r14,r28,3,0,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r27,r30,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r25,r28,r14
	ctx.r25.u64 = ctx.r14.u64 - ctx.r28.u64;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mulli r27,r15,37
	ctx.r27.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(37));
	// subf r30,r30,r25
	ctx.r30.u64 = ctx.r25.u64 - ctx.r30.u64;
	// subf r31,r31,r27
	ctx.r31.u64 = ctx.r27.u64 - ctx.r31.u64;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// srawi r30,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 5;
	// srawi r31,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 5;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// sthu r30,8(r4)
	ctx.current_instruction = 0x88102160;
	ea = 8 + ctx.r4.u32;
	REX_STORE_U16(ea, ctx.r30.u16);
	ctx.r4.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sthx r31,r29,r26
	ctx.current_instruction = 0x88102168;
	REX_STORE_U16(ctx.r29.u32 + ctx.r26.u32, ctx.r31.u16);
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// bdnz 0x88101f24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88101F24;
loc_8810217C:
	// rlwinm r11,r19,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881024ac
	if (ctx.cr6.eq) goto loc_881024AC;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r5,r11
	ctx.r6.u64 = ctx.r5.u64 + ctx.r11.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// subf r10,r5,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r5.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r23,r16,0,29,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0x6;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r22,r10,3
	ctx.r22.s64 = ctx.r10.s64 + 3;
	// addi r21,r6,3
	ctx.r21.s64 = ctx.r6.s64 + 3;
loc_881021B4:
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r25,r31,r26
	ctx.r25.u64 = ctx.r31.u64 + ctx.r26.u64;
	// add r24,r4,r26
	ctx.r24.u64 = ctx.r4.u64 + ctx.r26.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lhzx r30,r31,r26
	ctx.current_instruction = 0x881021D0;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// lhzx r29,r4,r26
	ctx.current_instruction = 0x881021D4;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r26.u32);
	// beq cr6,0x881021fc
	if (ctx.cr6.eq) goto loc_881021FC;
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r7,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lbzx r31,r31,r8
	ctx.current_instruction = 0x881021F0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lbzx r4,r4,r8
	ctx.current_instruction = 0x881021F4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// b 0x88102218
	goto loc_88102218;
loc_881021FC:
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r5,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lbzx r31,r31,r9
	ctx.current_instruction = 0x88102210;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r4,r4,r9
	ctx.current_instruction = 0x88102214;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
loc_88102218:
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r20,r30
	ctx.r20.s64 = ctx.r30.s16;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// subf r28,r4,r20
	ctx.r28.u64 = ctx.r20.u64 - ctx.r4.u64;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// rlwinm r19,r28,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r27,r30,37
	ctx.r27.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(37));
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r28,r19
	ctx.r28.u64 = ctx.r19.u64 - ctx.r28.u64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// add r29,r28,r27
	ctx.r29.u64 = ctx.r28.u64 + ctx.r27.u64;
	// mulli r30,r20,37
	ctx.r30.s64 = static_cast<int64_t>(ctx.r20.u64 * static_cast<uint64_t>(37));
	// subf r31,r31,r29
	ctx.r31.u64 = ctx.r29.u64 - ctx.r31.u64;
	// subf r4,r4,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r4.u64;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// srawi r31,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 5;
	// srawi r4,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 5;
	// sth r31,0(r24)
	ctx.current_instruction = 0x88102268;
	REX_STORE_U16(ctx.r24.u32 + 0, ctx.r31.u16);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// sth r4,0(r25)
	ctx.current_instruction = 0x88102270;
	REX_STORE_U16(ctx.r25.u32 + 0, ctx.r4.u16);
	// lhz r30,2(r25)
	ctx.current_instruction = 0x88102274;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r25.u32 + 2);
	// lhz r29,2(r24)
	ctx.current_instruction = 0x88102278;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r24.u32 + 2);
	// beq cr6,0x881022a0
	if (ctx.cr6.eq) goto loc_881022A0;
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r7,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// b 0x881022bc
	goto loc_881022BC;
loc_881022A0:
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r5,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
loc_881022BC:
	// lbz r4,1(r4)
	ctx.current_instruction = 0x881022BC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// extsh r20,r30
	ctx.r20.s64 = ctx.r30.s16;
	// lbz r31,1(r31)
	ctx.current_instruction = 0x881022C4;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// extsh r27,r29
	ctx.r27.s64 = ctx.r29.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// subf r28,r4,r20
	ctx.r28.u64 = ctx.r20.u64 - ctx.r4.u64;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r19,r28,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r27,r27,37
	ctx.r27.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(37));
	// subf r28,r28,r19
	ctx.r28.u64 = ctx.r19.u64 - ctx.r28.u64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// add r29,r28,r27
	ctx.r29.u64 = ctx.r28.u64 + ctx.r27.u64;
	// mulli r30,r20,37
	ctx.r30.s64 = static_cast<int64_t>(ctx.r20.u64 * static_cast<uint64_t>(37));
	// subf r31,r31,r29
	ctx.r31.u64 = ctx.r29.u64 - ctx.r31.u64;
	// subf r4,r4,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r4.u64;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// addi r29,r4,16
	ctx.r29.s64 = ctx.r4.s64 + 16;
	// add r31,r6,r11
	ctx.r31.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// srawi r28,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r28.s64 = ctx.r30.s32 >> 5;
	// srawi r27,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r27.s64 = ctx.r29.s32 >> 5;
	// rlwinm r29,r31,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r28,2(r24)
	ctx.current_instruction = 0x88102328;
	REX_STORE_U16(ctx.r24.u32 + 2, ctx.r28.u16);
	// rlwinm r30,r4,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r27,2(r25)
	ctx.current_instruction = 0x88102330;
	REX_STORE_U16(ctx.r25.u32 + 2, ctx.r27.u16);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lhzx r28,r29,r26
	ctx.current_instruction = 0x88102338;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r26.u32);
	// lhzx r27,r30,r26
	ctx.current_instruction = 0x8810233C;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r26.u32);
	// beq cr6,0x88102364
	if (ctx.cr6.eq) goto loc_88102364;
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r7,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// b 0x88102380
	goto loc_88102380;
loc_88102364:
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r5,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
loc_88102380:
	// lbz r4,2(r4)
	ctx.current_instruction = 0x88102380;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// extsh r20,r28
	ctx.r20.s64 = ctx.r28.s16;
	// lbz r31,2(r31)
	ctx.current_instruction = 0x88102388;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// extsh r28,r27
	ctx.r28.s64 = ctx.r27.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// subf r25,r4,r20
	ctx.r25.u64 = ctx.r20.u64 - ctx.r4.u64;
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r19,r25,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r24,r28,37
	ctx.r24.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(37));
	// subf r25,r25,r19
	ctx.r25.u64 = ctx.r19.u64 - ctx.r25.u64;
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r27,r25,r24
	ctx.r27.u64 = ctx.r25.u64 + ctx.r24.u64;
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r31,r27
	ctx.r31.u64 = ctx.r27.u64 - ctx.r31.u64;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// mulli r28,r20,37
	ctx.r28.s64 = static_cast<int64_t>(ctx.r20.u64 * static_cast<uint64_t>(37));
	// srawi r31,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 5;
	// subf r4,r4,r28
	ctx.r4.u64 = ctx.r28.u64 - ctx.r4.u64;
	// sthx r31,r30,r26
	ctx.current_instruction = 0x881023D0;
	REX_STORE_U16(ctx.r30.u32 + ctx.r26.u32, ctx.r31.u16);
	// add r31,r21,r11
	ctx.r31.u64 = ctx.r21.u64 + ctx.r11.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// srawi r4,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 5;
	// sthx r4,r29,r26
	ctx.current_instruction = 0x881023E4;
	REX_STORE_U16(ctx.r29.u32 + ctx.r26.u32, ctx.r4.u16);
	// add r4,r22,r11
	ctx.r4.u64 = ctx.r22.u64 + ctx.r11.u64;
	// rlwinm r29,r31,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r4,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r28,r30,r26
	ctx.current_instruction = 0x881023F4;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r26.u32);
	// lhzx r27,r29,r26
	ctx.current_instruction = 0x881023F8;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r26.u32);
	// beq cr6,0x88102420
	if (ctx.cr6.eq) goto loc_88102420;
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r7,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// b 0x8810243c
	goto loc_8810243C;
loc_88102420:
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r5,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
loc_8810243C:
	// lbz r4,3(r4)
	ctx.current_instruction = 0x8810243C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// extsh r20,r27
	ctx.r20.s64 = ctx.r27.s16;
	// lbz r31,3(r31)
	ctx.current_instruction = 0x88102444;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// subf r25,r4,r20
	ctx.r25.u64 = ctx.r20.u64 - ctx.r4.u64;
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r19,r25,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r24,r28,37
	ctx.r24.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(37));
	// subf r25,r25,r19
	ctx.r25.u64 = ctx.r19.u64 - ctx.r25.u64;
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// mulli r27,r20,37
	ctx.r27.s64 = static_cast<int64_t>(ctx.r20.u64 * static_cast<uint64_t>(37));
	// subf r31,r31,r25
	ctx.r31.u64 = ctx.r25.u64 - ctx.r31.u64;
	// subf r4,r4,r27
	ctx.r4.u64 = ctx.r27.u64 - ctx.r4.u64;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// srawi r31,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 5;
	// srawi r4,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 5;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// sthx r31,r30,r26
	ctx.current_instruction = 0x8810249C;
	REX_STORE_U16(ctx.r30.u32 + ctx.r26.u32, ctx.r31.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sthx r4,r29,r26
	ctx.current_instruction = 0x881024A4;
	REX_STORE_U16(ctx.r29.u32 + ctx.r26.u32, ctx.r4.u16);
	// bdnz 0x881021b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881021B4;
loc_881024AC:
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_881024B8:
	// lhz r10,-4(r11)
	ctx.current_instruction = 0x881024B8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r9,-2(r11)
	ctx.current_instruction = 0x881024BC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r8,0(r11)
	ctx.current_instruction = 0x881024C0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r26,r10
	ctx.r26.s64 = ctx.r10.s16;
	// lhz r5,6(r11)
	ctx.current_instruction = 0x881024C8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r27,r9
	ctx.r27.s64 = ctx.r9.s16;
	// lhz r7,2(r11)
	ctx.current_instruction = 0x881024D0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// lhz r6,4(r11)
	ctx.current_instruction = 0x881024D8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r31,r5
	ctx.r31.s64 = ctx.r5.s16;
	// lhz r10,10(r11)
	ctx.current_instruction = 0x881024E0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// lhz r4,8(r11)
	ctx.current_instruction = 0x881024E8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// addi r9,r26,-128
	ctx.r9.s64 = ctx.r26.s64 + -128;
	// addi r8,r27,-128
	ctx.r8.s64 = ctx.r27.s64 + -128;
	// addi r7,r28,-128
	ctx.r7.s64 = ctx.r28.s64 + -128;
	// sth r9,-4(r11)
	ctx.current_instruction = 0x88102504;
	REX_STORE_U16(ctx.r11.u32 + -4, ctx.r9.u16);
	// addi r6,r29,-128
	ctx.r6.s64 = ctx.r29.s64 + -128;
	// sth r8,-2(r11)
	ctx.current_instruction = 0x8810250C;
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r8.u16);
	// addi r10,r30,-128
	ctx.r10.s64 = ctx.r30.s64 + -128;
	// sth r7,0(r11)
	ctx.current_instruction = 0x88102514;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// addi r31,r31,-128
	ctx.r31.s64 = ctx.r31.s64 + -128;
	// addi r4,r4,-128
	ctx.r4.s64 = ctx.r4.s64 + -128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// sth r6,2(r11)
	ctx.current_instruction = 0x88102530;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// sth r10,4(r11)
	ctx.current_instruction = 0x88102538;
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// sth r9,6(r11)
	ctx.current_instruction = 0x88102540;
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// sth r8,8(r11)
	ctx.current_instruction = 0x88102544;
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r8.u16);
	// sth r7,10(r11)
	ctx.current_instruction = 0x88102548;
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// add r11,r17,r11
	ctx.r11.u64 = ctx.r17.u64 + ctx.r11.u64;
	// bdnz 0x881024b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881024B8;
	// lwz r6,44(r1)
	ctx.current_instruction = 0x88102554;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
loc_88102558:
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// stw r16,-196(r1)
	ctx.current_instruction = 0x8810255C;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r16.u32);
	// cmpwi cr6,r16,6
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 6, ctx.xer);
	// blt cr6,0x88101750
	if (ctx.cr6.lt) goto loc_88101750;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88124320) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88124320);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88124320;
	ctx.current_instruction = 0x88124320;
	// b 0x88124050
	sub_88124050(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881246D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881246D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881246D8) {
			switch (rex_dispatch_address) {
				case 0x881246E0:
				case 0x8812470C:
				case 0x88124758:
				case 0x8812477C:
				case 0x881247C8:
				case 0x881247DC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881246D8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881246E0: goto loc_881246E0;
		case 0x8812470C: goto loc_8812470C;
		case 0x88124758: goto loc_88124758;
		case 0x8812477C: goto loc_8812477C;
		case 0x881247C8: goto loc_881247C8;
		case 0x881247DC: goto loc_881247DC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881246E0;
	__savegprlr_29(ctx, base);
loc_881246E0:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881246E0;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x881246F0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,88(r1)
	ctx.current_instruction = 0x881246F8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,96(r1)
	ctx.current_instruction = 0x881246FC;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88124700;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,92(r1)
	ctx.current_instruction = 0x88124704;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x88123b50
	ctx.lr = 0x8812470C;
	sub_88123B50(ctx, base);
loc_8812470C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881247dc
	if (ctx.cr6.lt) goto loc_881247DC;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88124714;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88124730
	if (!ctx.cr6.eq) goto loc_88124730;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88124730:
	// lwz r11,28(r31)
	ctx.current_instruction = 0x88124730;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x88124768
	if (!ctx.cr6.gt) goto loc_88124768;
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r29,r11,1
	ctx.r29.u64 = ctx.r11.u64 | 1;
loc_88124744:
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88124538
	ctx.lr = 0x88124758;
	sub_88124538(ctx, base);
loc_88124758:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881247dc
	if (ctx.cr6.lt) goto loc_881247DC;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x88124744
	if (!ctx.cr6.eq) goto loc_88124744;
loc_88124768:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// ld r4,16(r31)
	ctx.current_instruction = 0x8812476C;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881241a0
	ctx.lr = 0x8812477C;
	sub_881241A0(ctx, base);
loc_8812477C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881247dc
	if (ctx.cr6.lt) goto loc_881247DC;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88124784;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881247a0
	if (!ctx.cr6.eq) goto loc_881247A0;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_881247A0:
	// lwz r11,88(r1)
	ctx.current_instruction = 0x881247A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x881247AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	ctx.current_instruction = 0x881247B4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,24(r31)
	ctx.current_instruction = 0x881247B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// ld r10,0(r31)
	ctx.current_instruction = 0x881247BC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x88123980
	ctx.lr = 0x881247C8;
	sub_88123980(ctx, base);
loc_881247C8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881247dc
	if (ctx.cr6.lt) goto loc_881247DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88123c80
	ctx.lr = 0x881247DC;
	sub_88123C80(ctx, base);
loc_881247DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88125F58) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88125F58;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88125F58) {
			switch (rex_dispatch_address) {
				case 0x88125F80:
				case 0x88125F94:
				case 0x88125FA8:
				case 0x88125FB4:
				case 0x88125FBC:
				case 0x88125FC4:
				case 0x88125FCC:
				case 0x88125FDC:
				case 0x88125FF8:
				case 0x8812600C:
				case 0x88126018:
				case 0x88126028:
				case 0x8812603C:
				case 0x88126050:
				case 0x88126064:
				case 0x88126078:
				case 0x8812608C:
				case 0x881260A0:
				case 0x881260B4:
				case 0x881260CC:
				case 0x881260DC:
				case 0x881260F0:
				case 0x88126104:
				case 0x88126118:
				case 0x8812612C:
				case 0x8812613C:
				case 0x88126150:
				case 0x88126164:
				case 0x88126170:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88125F58;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88125F80: goto loc_88125F80;
		case 0x88125F94: goto loc_88125F94;
		case 0x88125FA8: goto loc_88125FA8;
		case 0x88125FB4: goto loc_88125FB4;
		case 0x88125FBC: goto loc_88125FBC;
		case 0x88125FC4: goto loc_88125FC4;
		case 0x88125FCC: goto loc_88125FCC;
		case 0x88125FDC: goto loc_88125FDC;
		case 0x88125FF8: goto loc_88125FF8;
		case 0x8812600C: goto loc_8812600C;
		case 0x88126018: goto loc_88126018;
		case 0x88126028: goto loc_88126028;
		case 0x8812603C: goto loc_8812603C;
		case 0x88126050: goto loc_88126050;
		case 0x88126064: goto loc_88126064;
		case 0x88126078: goto loc_88126078;
		case 0x8812608C: goto loc_8812608C;
		case 0x881260A0: goto loc_881260A0;
		case 0x881260B4: goto loc_881260B4;
		case 0x881260CC: goto loc_881260CC;
		case 0x881260DC: goto loc_881260DC;
		case 0x881260F0: goto loc_881260F0;
		case 0x88126104: goto loc_88126104;
		case 0x88126118: goto loc_88126118;
		case 0x8812612C: goto loc_8812612C;
		case 0x8812613C: goto loc_8812613C;
		case 0x88126150: goto loc_88126150;
		case 0x88126164: goto loc_88126164;
		case 0x88126170: goto loc_88126170;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88125F5C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88125F60;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88125F64;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88125F68;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126170
	if (ctx.cr6.eq) goto loc_88126170;
	// addi r3,r3,664
	ctx.r3.s64 = ctx.r3.s64 + 664;
	// bl 0x88141048
	ctx.lr = 0x88125F80;
	sub_88141048(ctx, base);
loc_88125F80:
	// lwz r3,356(r31)
	ctx.current_instruction = 0x88125F80;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88125f98
	if (ctx.cr6.eq) goto loc_88125F98;
	// bl 0x88125e70
	ctx.lr = 0x88125F94;
	sub_88125E70(ctx, base);
loc_88125F94:
	// stw r30,356(r31)
	ctx.current_instruction = 0x88125F94;
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
loc_88125F98:
	// lwz r3,360(r31)
	ctx.current_instruction = 0x88125F98;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88125fac
	if (ctx.cr6.eq) goto loc_88125FAC;
	// bl 0x88125e70
	ctx.lr = 0x88125FA8;
	sub_88125E70(ctx, base);
loc_88125FA8:
	// stw r30,360(r31)
	ctx.current_instruction = 0x88125FA8;
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
loc_88125FAC:
	// lwz r3,364(r31)
	ctx.current_instruction = 0x88125FAC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 364);
	// bl 0x88125f38
	ctx.lr = 0x88125FB4;
	sub_88125F38(ctx, base);
loc_88125FB4:
	// lwz r3,368(r31)
	ctx.current_instruction = 0x88125FB4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 368);
	// bl 0x88125f38
	ctx.lr = 0x88125FBC;
	sub_88125F38(ctx, base);
loc_88125FBC:
	// lwz r3,324(r31)
	ctx.current_instruction = 0x88125FBC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// bl 0x88125f38
	ctx.lr = 0x88125FC4;
	sub_88125F38(ctx, base);
loc_88125FC4:
	// lwz r3,328(r31)
	ctx.current_instruction = 0x88125FC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x88125f38
	ctx.lr = 0x88125FCC;
	sub_88125F38(ctx, base);
loc_88125FCC:
	// lwz r3,436(r31)
	ctx.current_instruction = 0x88125FCC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88125fe0
	if (ctx.cr6.eq) goto loc_88125FE0;
	// bl 0x88125e70
	ctx.lr = 0x88125FDC;
	sub_88125E70(ctx, base);
loc_88125FDC:
	// stw r30,436(r31)
	ctx.current_instruction = 0x88125FDC;
	REX_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
loc_88125FE0:
	// lwz r3,340(r31)
	ctx.current_instruction = 0x88125FE0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// stw r30,432(r31)
	ctx.current_instruction = 0x88125FE4;
	REX_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,428(r31)
	ctx.current_instruction = 0x88125FE8;
	REX_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88125ffc
	if (ctx.cr6.eq) goto loc_88125FFC;
	// bl 0x88125e70
	ctx.lr = 0x88125FF8;
	sub_88125E70(ctx, base);
loc_88125FF8:
	// stw r30,340(r31)
	ctx.current_instruction = 0x88125FF8;
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
loc_88125FFC:
	// lwz r3,344(r31)
	ctx.current_instruction = 0x88125FFC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126010
	if (ctx.cr6.eq) goto loc_88126010;
	// bl 0x88125e70
	ctx.lr = 0x8812600C;
	sub_88125E70(ctx, base);
loc_8812600C:
	// stw r30,344(r31)
	ctx.current_instruction = 0x8812600C;
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
loc_88126010:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88129618
	ctx.lr = 0x88126018;
	sub_88129618(ctx, base);
loc_88126018:
	// lwz r3,352(r31)
	ctx.current_instruction = 0x88126018;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8812602c
	if (ctx.cr6.eq) goto loc_8812602C;
	// bl 0x88125e70
	ctx.lr = 0x88126028;
	sub_88125E70(ctx, base);
loc_88126028:
	// stw r30,352(r31)
	ctx.current_instruction = 0x88126028;
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
loc_8812602C:
	// lwz r3,332(r31)
	ctx.current_instruction = 0x8812602C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126040
	if (ctx.cr6.eq) goto loc_88126040;
	// bl 0x88125e70
	ctx.lr = 0x8812603C;
	sub_88125E70(ctx, base);
loc_8812603C:
	// stw r30,332(r31)
	ctx.current_instruction = 0x8812603C;
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
loc_88126040:
	// lwz r3,336(r31)
	ctx.current_instruction = 0x88126040;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126054
	if (ctx.cr6.eq) goto loc_88126054;
	// bl 0x88125e70
	ctx.lr = 0x88126050;
	sub_88125E70(ctx, base);
loc_88126050:
	// stw r30,336(r31)
	ctx.current_instruction = 0x88126050;
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
loc_88126054:
	// lwz r3,412(r31)
	ctx.current_instruction = 0x88126054;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 412);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126068
	if (ctx.cr6.eq) goto loc_88126068;
	// bl 0x88125e70
	ctx.lr = 0x88126064;
	sub_88125E70(ctx, base);
loc_88126064:
	// stw r30,412(r31)
	ctx.current_instruction = 0x88126064;
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
loc_88126068:
	// lwz r3,416(r31)
	ctx.current_instruction = 0x88126068;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8812607c
	if (ctx.cr6.eq) goto loc_8812607C;
	// bl 0x88125e70
	ctx.lr = 0x88126078;
	sub_88125E70(ctx, base);
loc_88126078:
	// stw r30,416(r31)
	ctx.current_instruction = 0x88126078;
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
loc_8812607C:
	// lwz r3,420(r31)
	ctx.current_instruction = 0x8812607C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126090
	if (ctx.cr6.eq) goto loc_88126090;
	// bl 0x88125e70
	ctx.lr = 0x8812608C;
	sub_88125E70(ctx, base);
loc_8812608C:
	// stw r30,420(r31)
	ctx.current_instruction = 0x8812608C;
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
loc_88126090:
	// lwz r3,424(r31)
	ctx.current_instruction = 0x88126090;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881260a4
	if (ctx.cr6.eq) goto loc_881260A4;
	// bl 0x88125e70
	ctx.lr = 0x881260A0;
	sub_88125E70(ctx, base);
loc_881260A0:
	// stw r30,424(r31)
	ctx.current_instruction = 0x881260A0;
	REX_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
loc_881260A4:
	// lwz r3,316(r31)
	ctx.current_instruction = 0x881260A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881260b8
	if (ctx.cr6.eq) goto loc_881260B8;
	// bl 0x88125e70
	ctx.lr = 0x881260B4;
	sub_88125E70(ctx, base);
loc_881260B4:
	// stw r30,316(r31)
	ctx.current_instruction = 0x881260B4;
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
loc_881260B8:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x881260B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x881260cc
	if (!ctx.cr6.gt) goto loc_881260CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812a0d8
	ctx.lr = 0x881260CC;
	sub_8812A0D8(ctx, base);
loc_881260CC:
	// lwz r3,552(r31)
	ctx.current_instruction = 0x881260CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881260e0
	if (ctx.cr6.eq) goto loc_881260E0;
	// bl 0x88125e70
	ctx.lr = 0x881260DC;
	sub_88125E70(ctx, base);
loc_881260DC:
	// stw r30,552(r31)
	ctx.current_instruction = 0x881260DC;
	REX_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
loc_881260E0:
	// lwz r3,556(r31)
	ctx.current_instruction = 0x881260E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 556);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881260f4
	if (ctx.cr6.eq) goto loc_881260F4;
	// bl 0x88125e70
	ctx.lr = 0x881260F0;
	sub_88125E70(ctx, base);
loc_881260F0:
	// stw r30,556(r31)
	ctx.current_instruction = 0x881260F0;
	REX_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
loc_881260F4:
	// lwz r3,560(r31)
	ctx.current_instruction = 0x881260F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126108
	if (ctx.cr6.eq) goto loc_88126108;
	// bl 0x88125e70
	ctx.lr = 0x88126104;
	sub_88125E70(ctx, base);
loc_88126104:
	// stw r30,560(r31)
	ctx.current_instruction = 0x88126104;
	REX_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
loc_88126108:
	// lwz r3,564(r31)
	ctx.current_instruction = 0x88126108;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8812611c
	if (ctx.cr6.eq) goto loc_8812611C;
	// bl 0x88125e70
	ctx.lr = 0x88126118;
	sub_88125E70(ctx, base);
loc_88126118:
	// stw r30,564(r31)
	ctx.current_instruction = 0x88126118;
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
loc_8812611C:
	// lwz r3,568(r31)
	ctx.current_instruction = 0x8812611C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8812612c
	if (ctx.cr6.eq) goto loc_8812612C;
	// bl 0x88134418
	ctx.lr = 0x8812612C;
	sub_88134418(ctx, base);
loc_8812612C:
	// lwz r3,568(r31)
	ctx.current_instruction = 0x8812612C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126140
	if (ctx.cr6.eq) goto loc_88126140;
	// bl 0x88125e70
	ctx.lr = 0x8812613C;
	sub_88125E70(ctx, base);
loc_8812613C:
	// stw r30,568(r31)
	ctx.current_instruction = 0x8812613C;
	REX_STORE_U32(ctx.r31.u32 + 568, ctx.r30.u32);
loc_88126140:
	// lwz r3,584(r31)
	ctx.current_instruction = 0x88126140;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126154
	if (ctx.cr6.eq) goto loc_88126154;
	// bl 0x88125e70
	ctx.lr = 0x88126150;
	sub_88125E70(ctx, base);
loc_88126150:
	// stw r30,584(r31)
	ctx.current_instruction = 0x88126150;
	REX_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
loc_88126154:
	// lwz r3,740(r31)
	ctx.current_instruction = 0x88126154;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 740);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126168
	if (ctx.cr6.eq) goto loc_88126168;
	// bl 0x88125e70
	ctx.lr = 0x88126164;
	sub_88125E70(ctx, base);
loc_88126164:
	// stw r30,740(r31)
	ctx.current_instruction = 0x88126164;
	REX_STORE_U32(ctx.r31.u32 + 740, ctx.r30.u32);
loc_88126168:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88125e70
	ctx.lr = 0x88126170;
	sub_88125E70(ctx, base);
loc_88126170:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88126174;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8812617C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88126180;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88131478) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88131478;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88131478) {
			switch (rex_dispatch_address) {
				case 0x88131480:
				case 0x88131780:
				case 0x88131790:
				case 0x881317B0:
				case 0x88131804:
				case 0x88131838:
				case 0x8813185C:
				case 0x88131884:
				case 0x881318BC:
				case 0x88131908:
				case 0x88131974:
				case 0x881319F0:
				case 0x88131A3C:
				case 0x88131A68:
				case 0x88131A8C:
				case 0x88131B0C:
				case 0x88131BA0:
				case 0x88131C78:
				case 0x88131D2C:
				case 0x88131DB4:
				case 0x88131E0C:
				case 0x88131EA4:
				case 0x88131FB0:
				case 0x88132048:
				case 0x881320C0:
				case 0x881321B8:
				case 0x881321DC:
				case 0x88132218:
				case 0x8813222C:
				case 0x881322C4:
				case 0x8813230C:
				case 0x88132378:
				case 0x881323B8:
				case 0x881323FC:
				case 0x8813244C:
				case 0x88132510:
				case 0x881325AC:
				case 0x881325E4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88131478;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88131480: goto loc_88131480;
		case 0x88131780: goto loc_88131780;
		case 0x88131790: goto loc_88131790;
		case 0x881317B0: goto loc_881317B0;
		case 0x88131804: goto loc_88131804;
		case 0x88131838: goto loc_88131838;
		case 0x8813185C: goto loc_8813185C;
		case 0x88131884: goto loc_88131884;
		case 0x881318BC: goto loc_881318BC;
		case 0x88131908: goto loc_88131908;
		case 0x88131974: goto loc_88131974;
		case 0x881319F0: goto loc_881319F0;
		case 0x88131A3C: goto loc_88131A3C;
		case 0x88131A68: goto loc_88131A68;
		case 0x88131A8C: goto loc_88131A8C;
		case 0x88131B0C: goto loc_88131B0C;
		case 0x88131BA0: goto loc_88131BA0;
		case 0x88131C78: goto loc_88131C78;
		case 0x88131D2C: goto loc_88131D2C;
		case 0x88131DB4: goto loc_88131DB4;
		case 0x88131E0C: goto loc_88131E0C;
		case 0x88131EA4: goto loc_88131EA4;
		case 0x88131FB0: goto loc_88131FB0;
		case 0x88132048: goto loc_88132048;
		case 0x881320C0: goto loc_881320C0;
		case 0x881321B8: goto loc_881321B8;
		case 0x881321DC: goto loc_881321DC;
		case 0x88132218: goto loc_88132218;
		case 0x8813222C: goto loc_8813222C;
		case 0x881322C4: goto loc_881322C4;
		case 0x8813230C: goto loc_8813230C;
		case 0x88132378: goto loc_88132378;
		case 0x881323B8: goto loc_881323B8;
		case 0x881323FC: goto loc_881323FC;
		case 0x8813244C: goto loc_8813244C;
		case 0x88132510: goto loc_88132510;
		case 0x881325AC: goto loc_881325AC;
		case 0x881325E4: goto loc_881325E4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88131480;
	__savegprlr_14(ctx, base);
loc_88131480:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x88131480;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r3)
	ctx.current_instruction = 0x88131484;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,60(r25)
	ctx.current_instruction = 0x88131494;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x881314b0
	if (!ctx.cr6.lt) goto loc_881314B0;
loc_881314A0:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881314B0:
	// lwz r11,40(r30)
	ctx.current_instruction = 0x881314B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// li r23,1
	ctx.r23.s64 = 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x88132610
	if (ctx.cr6.eq) goto loc_88132610;
	// li r22,2
	ctx.r22.s64 = 2;
	// li r21,3
	ctx.r21.s64 = 3;
	// li r16,22
	ctx.r16.s64 = 22;
	// li r17,33
	ctx.r17.s64 = 33;
	// li r14,35
	ctx.r14.s64 = 35;
	// li r19,50
	ctx.r19.s64 = 50;
	// li r18,49
	ctx.r18.s64 = 49;
	// li r15,47
	ctx.r15.s64 = 47;
	// li r20,10
	ctx.r20.s64 = 10;
loc_881314E4:
	// lwz r11,40(r30)
	ctx.current_instruction = 0x881314E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,51
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51, ctx.xer);
	// bgt cr6,0x88132604
	if (ctx.cr6.gt) goto loc_88132604;
	// lis r12,-30701
	ctx.r12.s64 = -2012020736;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5384
	ctx.r12.s64 = ctx.r12.s64 + 5384;
	// lwzx r0,r12,r0
	ctx.current_instruction = 0x881314FC;
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_881315D8;
	case 1:
		goto loc_8813221C;
	case 2:
		goto loc_881317A0;
	case 3:
		goto loc_8813184C;
	case 4:
		goto loc_88132604;
	case 5:
		goto loc_88132604;
	case 6:
		goto loc_88132604;
	case 7:
		goto loc_88132604;
	case 8:
		goto loc_88132604;
	case 9:
		goto loc_88132604;
	case 10:
		goto loc_88132604;
	case 11:
		goto loc_88132604;
	case 12:
		goto loc_88132604;
	case 13:
		goto loc_88132604;
	case 14:
		goto loc_88132604;
	case 15:
		goto loc_88132604;
	case 16:
		goto loc_88132604;
	case 17:
		goto loc_88131828;
	case 18:
		goto loc_881317F4;
	case 19:
		goto loc_88131874;
	case 20:
		goto loc_881318A0;
	case 21:
		goto loc_881318EC;
	case 22:
		goto loc_88131938;
	case 23:
		goto loc_881319D4;
	case 24:
		goto loc_88131A20;
	case 25:
		goto loc_88131A70;
	case 26:
		goto loc_88131AA8;
	case 27:
		goto loc_88131B44;
	case 28:
		goto loc_88131C10;
	case 29:
		goto loc_88131D1C;
	case 30:
		goto loc_88132604;
	case 31:
		goto loc_88132604;
	case 32:
		goto loc_881322B0;
	case 33:
		goto loc_88131D48;
	case 34:
		goto loc_881321A8;
	case 35:
		goto loc_881321CC;
	case 36:
		goto loc_88132604;
	case 37:
		goto loc_88132390;
	case 38:
		goto loc_8813235C;
	case 39:
		goto loc_88132604;
	case 40:
		goto loc_88132604;
	case 41:
		goto loc_88132604;
	case 42:
		goto loc_88132604;
	case 43:
		goto loc_88132604;
	case 44:
		goto loc_881323D4;
	case 45:
		goto loc_88132604;
	case 46:
		goto loc_88132424;
	case 47:
		goto loc_8813247C;
	case 48:
		goto loc_88132604;
	case 49:
		goto loc_88132344;
	case 50:
		goto loc_8813259C;
	case 51:
		goto loc_881325D4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_881315D8:
	// lwz r10,256(r25)
	ctx.current_instruction = 0x881315D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 256);
	// lhz r5,34(r25)
	ctx.current_instruction = 0x881315DC;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lwz r3,320(r25)
	ctx.current_instruction = 0x881315E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 320);
	// mullw r6,r10,r5
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x88131654
	if (!ctx.cr6.gt) goto loc_88131654;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r11,r3,424
	ctx.r11.s64 = ctx.r3.s64 + 424;
loc_88131608:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88131608;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// lwz r9,12(r10)
	ctx.current_instruction = 0x88131610;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lhz r9,0(r9)
	ctx.current_instruction = 0x88131614;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r28,r9
	ctx.r28.s64 = ctx.r9.s16;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x8813163c
	if (!ctx.cr6.gt) goto loc_8813163C;
	// lhz r31,-310(r11)
	ctx.current_instruction = 0x88131624;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + -310);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r10,8(r10)
	ctx.current_instruction = 0x8813162C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r31,r9,r10
	ctx.current_instruction = 0x88131638;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
loc_8813163C:
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x88131608
	if (ctx.cr6.lt) goto loc_88131608;
loc_88131654:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// sth r24,580(r25)
	ctx.current_instruction = 0x88131658;
	REX_STORE_U16(ctx.r25.u32 + 580, ctx.r24.u16);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x88131748
	if (!ctx.cr6.gt) goto loc_88131748;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// addi r11,r3,114
	ctx.r11.s64 = ctx.r3.s64 + 114;
loc_88131670:
	// lwz r10,310(r11)
	ctx.current_instruction = 0x88131670;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 310);
	// lwz r5,12(r10)
	ctx.current_instruction = 0x88131674;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,8(r10)
	ctx.current_instruction = 0x88131678;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r4,0(r5)
	ctx.current_instruction = 0x8813167C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// subf r6,r3,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r3.u64;
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8813172c
	if (!ctx.cr6.eq) goto loc_8813172C;
	// lhz r5,0(r11)
	ctx.current_instruction = 0x88131690;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r31
	ctx.r4.s64 = ctx.r31.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r5,r10
	ctx.current_instruction = 0x881316A0;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8813172c
	if (!ctx.cr6.eq) goto loc_8813172C;
	// lhz r5,580(r25)
	ctx.current_instruction = 0x881316B0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// lwz r4,584(r25)
	ctx.current_instruction = 0x881316B4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 584);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r5,r4
	ctx.current_instruction = 0x881316C0;
	REX_STORE_U16(ctx.r5.u32 + ctx.r4.u32, ctx.r9.u16);
	// lhz r9,580(r25)
	ctx.current_instruction = 0x881316C4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// sth r3,580(r25)
	ctx.current_instruction = 0x881316CC;
	REX_STORE_U16(ctx.r25.u32 + 580, ctx.r3.u16);
	// lhz r5,0(r11)
	ctx.current_instruction = 0x881316D0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r3,r10
	ctx.current_instruction = 0x881316E0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// sth r9,12(r11)
	ctx.current_instruction = 0x881316E4;
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r9.u16);
	// lhz r5,0(r11)
	ctx.current_instruction = 0x881316E8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r3,r10
	ctx.current_instruction = 0x881316F4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// sth r9,10(r11)
	ctx.current_instruction = 0x881316F8;
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r9.u16);
	// lhz r5,0(r11)
	ctx.current_instruction = 0x881316FC;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r9,-2(r3)
	ctx.current_instruction = 0x8813170C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + -2);
	// sth r9,8(r11)
	ctx.current_instruction = 0x88131710;
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r9.u16);
	// lhz r5,0(r11)
	ctx.current_instruction = 0x88131714;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r10
	ctx.current_instruction = 0x88131720;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// subf r6,r9,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r9.u64;
loc_8813172C:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// lhz r5,34(r25)
	ctx.current_instruction = 0x88131730;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88131670
	if (ctx.cr6.lt) goto loc_88131670;
loc_88131748:
	// lhz r11,580(r25)
	ctx.current_instruction = 0x88131748;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// lhz r10,34(r25)
	ctx.current_instruction = 0x8813174C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881314a0
	if (!ctx.cr6.gt) goto loc_881314A0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,216(r30)
	ctx.current_instruction = 0x88131778;
	REX_STORE_U32(ctx.r30.u32 + 216, ctx.r10.u32);
	// bl 0x88127880
	ctx.lr = 0x88131780;
	sub_88127880(ctx, base);
loc_88131780:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880d6010
	ctx.lr = 0x88131790;
	sub_880D6010(ctx, base);
loc_88131790:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// stw r22,40(r30)
	ctx.current_instruction = 0x88131798;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r22.u32);
	// b 0x88132604
	goto loc_88132604;
loc_881317A0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881317B0;
	sub_8812C528(ctx, base);
loc_881317B0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lhz r11,580(r25)
	ctx.current_instruction = 0x881317B8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x881317BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r9,34(r25)
	ctx.current_instruction = 0x881317C0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// stw r10,192(r25)
	ctx.current_instruction = 0x881317CC;
	REX_STORE_U32(ctx.r25.u32 + 192, ctx.r10.u32);
	// bne cr6,0x881314a0
	if (!ctx.cr6.eq) goto loc_881314A0;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881317D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881317ec
	if (!ctx.cr6.eq) goto loc_881317EC;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,40(r30)
	ctx.current_instruction = 0x881317E4;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// b 0x88132604
	goto loc_88132604;
loc_881317EC:
	// stw r23,40(r30)
	ctx.current_instruction = 0x881317EC;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r23.u32);
	// b 0x88132604
	goto loc_88132604;
loc_881317F4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131804;
	sub_8812C528(ctx, base);
loc_88131804:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8813180C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,188(r25)
	ctx.current_instruction = 0x88131810;
	REX_STORE_U32(ctx.r25.u32 + 188, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88131814;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x881314a0
	if (ctx.cr6.eq) goto loc_881314A0;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,40(r30)
	ctx.current_instruction = 0x88131824;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_88131828:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131838;
	sub_8812C528(ctx, base);
loc_88131838:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88131840;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,180(r25)
	ctx.current_instruction = 0x88131844;
	REX_STORE_U32(ctx.r25.u32 + 180, ctx.r11.u32);
	// stw r21,40(r30)
	ctx.current_instruction = 0x88131848;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r21.u32);
loc_8813184C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8813185C;
	sub_8812C528(ctx, base);
loc_8813185C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88131864;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r11,184(r25)
	ctx.current_instruction = 0x8813186C;
	REX_STORE_U32(ctx.r25.u32 + 184, ctx.r11.u32);
	// stw r10,40(r30)
	ctx.current_instruction = 0x88131870;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
loc_88131874:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131884;
	sub_8812C528(ctx, base);
loc_88131884:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8813188C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r11,656(r25)
	ctx.current_instruction = 0x88131894;
	REX_STORE_U32(ctx.r25.u32 + 656, ctx.r11.u32);
	// stw r10,40(r30)
	ctx.current_instruction = 0x88131898;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
	// b 0x88132604
	goto loc_88132604;
loc_881318A0:
	// lwz r11,180(r25)
	ctx.current_instruction = 0x881318A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 180);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881318e4
	if (!ctx.cr6.eq) goto loc_881318E4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881318BC;
	sub_8812C528(ctx, base);
loc_881318BC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881318C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r10,648(r25)
	ctx.current_instruction = 0x881318E0;
	REX_STORE_U32(ctx.r25.u32 + 648, ctx.r10.u32);
loc_881318E4:
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r11,40(r30)
	ctx.current_instruction = 0x881318E8;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_881318EC:
	// lwz r11,180(r25)
	ctx.current_instruction = 0x881318EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 180);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131930
	if (!ctx.cr6.eq) goto loc_88131930;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131908;
	sub_8812C528(ctx, base);
loc_88131908:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88131910;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// sth r11,582(r25)
	ctx.current_instruction = 0x8813192C;
	REX_STORE_U16(ctx.r25.u32 + 582, ctx.r11.u16);
loc_88131930:
	// stw r24,652(r25)
	ctx.current_instruction = 0x88131930;
	REX_STORE_U32(ctx.r25.u32 + 652, ctx.r24.u32);
	// stw r16,40(r30)
	ctx.current_instruction = 0x88131934;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r16.u32);
loc_88131938:
	// lwz r11,180(r25)
	ctx.current_instruction = 0x88131938;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 180);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881319cc
	if (!ctx.cr6.eq) goto loc_881319CC;
	// lwz r11,652(r25)
	ctx.current_instruction = 0x88131944;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 652);
	// lwz r10,648(r25)
	ctx.current_instruction = 0x88131948;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 648);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881319cc
	if (!ctx.cr6.lt) goto loc_881319CC;
loc_88131954:
	// lwz r11,192(r25)
	ctx.current_instruction = 0x88131954;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881319b0
	if (!ctx.cr6.eq) goto loc_881319B0;
	// lhz r11,582(r25)
	ctx.current_instruction = 0x88131960;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 582);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x8812c528
	ctx.lr = 0x88131974;
	sub_8812C528(ctx, base);
loc_88131974:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8813197C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x881314a0
	if (!ctx.cr0.gt) goto loc_881314A0;
	// lhz r10,582(r25)
	ctx.current_instruction = 0x88131988;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 582);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// slw r8,r23,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r9.u8 & 0x3F));
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// lwz r10,652(r25)
	ctx.current_instruction = 0x8813199C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 652);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// addi r10,r10,158
	ctx.r10.s64 = ctx.r10.s64 + 158;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r25
	ctx.current_instruction = 0x881319AC;
	REX_STORE_U32(ctx.r8.u32 + ctx.r25.u32, ctx.r9.u32);
loc_881319B0:
	// lwz r11,652(r25)
	ctx.current_instruction = 0x881319B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 652);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,652(r25)
	ctx.current_instruction = 0x881319BC;
	REX_STORE_U32(ctx.r25.u32 + 652, ctx.r11.u32);
	// lwz r9,648(r25)
	ctx.current_instruction = 0x881319C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 648);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88131954
	if (ctx.cr6.lt) goto loc_88131954;
loc_881319CC:
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,40(r30)
	ctx.current_instruction = 0x881319D0;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_881319D4:
	// lwz r11,656(r25)
	ctx.current_instruction = 0x881319D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131a18
	if (!ctx.cr6.eq) goto loc_88131A18;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881319F0;
	sub_8812C528(ctx, base);
loc_881319F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881319F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// stw r11,664(r25)
	ctx.current_instruction = 0x88131A14;
	REX_STORE_U32(ctx.r25.u32 + 664, ctx.r11.u32);
loc_88131A18:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,40(r30)
	ctx.current_instruction = 0x88131A1C;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_88131A20:
	// lwz r11,656(r25)
	ctx.current_instruction = 0x88131A20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131a68
	if (!ctx.cr6.eq) goto loc_88131A68;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131A3C;
	sub_8812C528(ctx, base);
loc_88131A3C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88131A44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// stw r11,672(r25)
	ctx.current_instruction = 0x88131A58;
	REX_STORE_U32(ctx.r25.u32 + 672, ctx.r11.u32);
	// addi r4,r25,664
	ctx.r4.s64 = ctx.r25.s64 + 664;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88140488
	ctx.lr = 0x88131A68;
	sub_88140488(ctx, base);
loc_88131A68:
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,40(r30)
	ctx.current_instruction = 0x88131A6C;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_88131A70:
	// lwz r11,656(r25)
	ctx.current_instruction = 0x88131A70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131a9c
	if (!ctx.cr6.eq) goto loc_88131A9C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131A8C;
	sub_8812C528(ctx, base);
loc_88131A8C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88131A94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,660(r25)
	ctx.current_instruction = 0x88131A98;
	REX_STORE_U32(ctx.r25.u32 + 660, ctx.r11.u32);
loc_88131A9C:
	// li r11,26
	ctx.r11.s64 = 26;
	// sth r24,146(r30)
	ctx.current_instruction = 0x88131AA0;
	REX_STORE_U16(ctx.r30.u32 + 146, ctx.r24.u16);
	// stw r11,40(r30)
	ctx.current_instruction = 0x88131AA4;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_88131AA8:
	// lwz r11,656(r25)
	ctx.current_instruction = 0x88131AA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131b38
	if (!ctx.cr6.eq) goto loc_88131B38;
	// lwz r11,660(r25)
	ctx.current_instruction = 0x88131AB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131b38
	if (!ctx.cr6.eq) goto loc_88131B38;
	// lwz r10,672(r25)
	ctx.current_instruction = 0x88131AC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 672);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x88131aec
	if (!ctx.cr6.gt) goto loc_88131AEC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_88131ADC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x88131adc
	if (ctx.cr6.gt) goto loc_88131ADC;
loc_88131AEC:
	// slw r10,r23,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88131b00
	if (!ctx.cr6.lt) goto loc_88131B00;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_88131B00:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131B0C;
	sub_8812C528(ctx, base);
loc_88131B0C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r10,672(r25)
	ctx.current_instruction = 0x88131B14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 672);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88131B18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,680(r25)
	ctx.current_instruction = 0x88131B34;
	REX_STORE_U32(ctx.r25.u32 + 680, ctx.r10.u32);
loc_88131B38:
	// li r11,27
	ctx.r11.s64 = 27;
	// sth r24,146(r30)
	ctx.current_instruction = 0x88131B3C;
	REX_STORE_U16(ctx.r30.u32 + 146, ctx.r24.u16);
	// stw r11,40(r30)
	ctx.current_instruction = 0x88131B40;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_88131B44:
	// lwz r11,656(r25)
	ctx.current_instruction = 0x88131B44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131c00
	if (!ctx.cr6.eq) goto loc_88131C00;
	// lwz r11,660(r25)
	ctx.current_instruction = 0x88131B50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131c00
	if (!ctx.cr6.eq) goto loc_88131C00;
	// lhz r11,34(r25)
	ctx.current_instruction = 0x88131B5C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// lwz r10,664(r25)
	ctx.current_instruction = 0x88131B60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 664);
	// lhz r9,146(r30)
	ctx.current_instruction = 0x88131B64;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 146);
	// mullw r8,r11,r11
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// lwz r7,680(r25)
	ctx.current_instruction = 0x88131B6C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 680);
	// lwz r6,672(r25)
	ctx.current_instruction = 0x88131B70;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 672);
	// mullw r5,r8,r10
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// subfic r31,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r31.u64 = static_cast<uint64_t>(32) - ctx.r7.u64;
	// subfic r29,r6,30
	ctx.xer.ca = ctx.r6.u32 <= 30;
	ctx.r29.u64 = static_cast<uint64_t>(30) - ctx.r6.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88131c00
	if (!ctx.cr6.lt) goto loc_88131C00;
	// addi r28,r30,224
	ctx.r28.s64 = ctx.r30.s64 + 224;
loc_88131B90:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,680(r25)
	ctx.current_instruction = 0x88131B94;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 680);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8812c528
	ctx.lr = 0x88131BA0;
	sub_8812C528(ctx, base);
loc_88131BA0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88131BA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,146(r30)
	ctx.current_instruction = 0x88131BAC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 146);
	// slw r9,r11,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// sraw r11,r9,r29
	temp.u32 = ctx.r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,80(r1)
	ctx.current_instruction = 0x88131BB8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r5,696(r25)
	ctx.current_instruction = 0x88131BC0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + 696);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r7,r5
	ctx.current_instruction = 0x88131BC8;
	REX_STORE_U16(ctx.r7.u32 + ctx.r5.u32, ctx.r11.u16);
	// lhz r4,146(r30)
	ctx.current_instruction = 0x88131BCC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 146);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// sth r11,146(r30)
	ctx.current_instruction = 0x88131BDC;
	REX_STORE_U16(ctx.r30.u32 + 146, ctx.r11.u16);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,664(r25)
	ctx.current_instruction = 0x88131BE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 664);
	// lhz r9,34(r25)
	ctx.current_instruction = 0x88131BE8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// mullw r8,r9,r9
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// mullw r6,r8,r10
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88131b90
	if (ctx.cr6.lt) goto loc_88131B90;
loc_88131C00:
	// li r11,28
	ctx.r11.s64 = 28;
	// sth r24,150(r30)
	ctx.current_instruction = 0x88131C04;
	REX_STORE_U16(ctx.r30.u32 + 150, ctx.r24.u16);
	// sth r24,146(r30)
	ctx.current_instruction = 0x88131C08;
	REX_STORE_U16(ctx.r30.u32 + 146, ctx.r24.u16);
	// stw r11,40(r30)
	ctx.current_instruction = 0x88131C0C;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_88131C10:
	// lwz r11,656(r25)
	ctx.current_instruction = 0x88131C10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131d14
	if (!ctx.cr6.eq) goto loc_88131D14;
	// lwz r11,660(r25)
	ctx.current_instruction = 0x88131C1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131d14
	if (!ctx.cr6.eq) goto loc_88131D14;
	// lhz r11,150(r30)
	ctx.current_instruction = 0x88131C28;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// lwz r10,680(r25)
	ctx.current_instruction = 0x88131C2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 680);
	// lwz r9,672(r25)
	ctx.current_instruction = 0x88131C30;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 672);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r7,34(r25)
	ctx.current_instruction = 0x88131C38;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// subfic r31,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r31.u64 = static_cast<uint64_t>(32) - ctx.r10.u64;
	// subfic r29,r9,30
	ctx.xer.ca = ctx.r9.u32 <= 30;
	ctx.r29.u64 = static_cast<uint64_t>(30) - ctx.r9.u64;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x88131d14
	if (!ctx.cr6.lt) goto loc_88131D14;
loc_88131C4C:
	// lhz r11,150(r30)
	ctx.current_instruction = 0x88131C4C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// lhz r10,146(r30)
	ctx.current_instruction = 0x88131C50;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 146);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88131ce8
	if (!ctx.cr6.lt) goto loc_88131CE8;
	// addi r28,r30,224
	ctx.r28.s64 = ctx.r30.s64 + 224;
loc_88131C68:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,680(r25)
	ctx.current_instruction = 0x88131C6C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 680);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8812c528
	ctx.lr = 0x88131C78;
	sub_8812C528(ctx, base);
loc_88131C78:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88131C80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,150(r30)
	ctx.current_instruction = 0x88131C84;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// slw r9,r11,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// lhz r8,146(r30)
	ctx.current_instruction = 0x88131C8C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 146);
	// sraw r11,r9,r29
	temp.u32 = ctx.r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,80(r1)
	ctx.current_instruction = 0x88131C94;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,704(r25)
	ctx.current_instruction = 0x88131CA0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + 704);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lhz r4,34(r25)
	ctx.current_instruction = 0x88131CA8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// mullw r11,r4,r7
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r6,r11,r5
	ctx.current_instruction = 0x88131CB8;
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u16);
	// lhz r10,146(r30)
	ctx.current_instruction = 0x88131CBC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 146);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,146(r30)
	ctx.current_instruction = 0x88131CCC;
	REX_STORE_U16(ctx.r30.u32 + 146, ctx.r8.u16);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lhz r5,150(r30)
	ctx.current_instruction = 0x88131CD8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x88131c68
	if (ctx.cr6.lt) goto loc_88131C68;
loc_88131CE8:
	// sth r24,146(r30)
	ctx.current_instruction = 0x88131CE8;
	REX_STORE_U16(ctx.r30.u32 + 146, ctx.r24.u16);
	// lhz r11,150(r30)
	ctx.current_instruction = 0x88131CEC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r30)
	ctx.current_instruction = 0x88131D00;
	REX_STORE_U16(ctx.r30.u32 + 150, ctx.r9.u16);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lhz r8,34(r25)
	ctx.current_instruction = 0x88131D08;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88131c4c
	if (ctx.cr6.lt) goto loc_88131C4C;
loc_88131D14:
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,40(r30)
	ctx.current_instruction = 0x88131D18;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_88131D1C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131D2C;
	sub_8812C528(ctx, base);
loc_88131D2C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88131D34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,716(r25)
	ctx.current_instruction = 0x88131D38;
	REX_STORE_U32(ctx.r25.u32 + 716, ctx.r11.u32);
	// sth r24,150(r30)
	ctx.current_instruction = 0x88131D3C;
	REX_STORE_U16(ctx.r30.u32 + 150, ctx.r24.u16);
	// stw r17,40(r30)
	ctx.current_instruction = 0x88131D40;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r17.u32);
	// stw r24,44(r30)
	ctx.current_instruction = 0x88131D44;
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r24.u32);
loc_88131D48:
	// lhz r11,580(r25)
	ctx.current_instruction = 0x88131D48;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// lhz r10,150(r30)
	ctx.current_instruction = 0x88131D4C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881321a0
	if (!ctx.cr6.lt) goto loc_881321A0;
loc_88131D60:
	// lhz r11,150(r30)
	ctx.current_instruction = 0x88131D60;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// lwz r9,584(r25)
	ctx.current_instruction = 0x88131D64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r10,320(r25)
	ctx.current_instruction = 0x88131D6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 320);
	// lwz r11,44(r30)
	ctx.current_instruction = 0x88131D70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lhzx r6,r7,r9
	ctx.current_instruction = 0x88131D7C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r9,r5,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bgt cr6,0x88132174
	if (ctx.cr6.gt) goto loc_88132174;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88131de0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88131DE0;
	// bdzf 4*cr6+eq,0x88131e78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88131E78;
	// bne cr6,0x88131f0c
	if (!ctx.cr6.eq) goto loc_88131F0C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131DB4;
	sub_8812C528(ctx, base);
loc_88131DB4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88131DBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// sth r24,184(r31)
	ctx.current_instruction = 0x88131DD4;
	REX_STORE_U16(ctx.r31.u32 + 184, ctx.r24.u16);
	// sth r11,182(r31)
	ctx.current_instruction = 0x88131DD8;
	REX_STORE_U16(ctx.r31.u32 + 182, ctx.r11.u16);
	// stw r23,44(r30)
	ctx.current_instruction = 0x88131DDC;
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r23.u32);
loc_88131DE0:
	// lhz r11,184(r31)
	ctx.current_instruction = 0x88131DE0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// lhz r10,182(r31)
	ctx.current_instruction = 0x88131DE4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 182);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88131e70
	if (!ctx.cr6.lt) goto loc_88131E70;
	// addi r29,r30,224
	ctx.r29.s64 = ctx.r30.s64 + 224;
loc_88131DFC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812c528
	ctx.lr = 0x88131E0C;
	sub_8812C528(ctx, base);
loc_88131E0C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88131E14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// lhz r10,184(r31)
	ctx.current_instruction = 0x88131E30;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,200(r8)
	ctx.current_instruction = 0x88131E40;
	REX_STORE_U32(ctx.r8.u32 + 200, ctx.r11.u32);
	// lhz r7,184(r31)
	ctx.current_instruction = 0x88131E44;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,184(r31)
	ctx.current_instruction = 0x88131E54;
	REX_STORE_U16(ctx.r31.u32 + 184, ctx.r5.u16);
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// lhz r3,182(r31)
	ctx.current_instruction = 0x88131E60;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 182);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88131dfc
	if (ctx.cr6.lt) goto loc_88131DFC;
loc_88131E70:
	// sth r24,184(r31)
	ctx.current_instruction = 0x88131E70;
	REX_STORE_U16(ctx.r31.u32 + 184, ctx.r24.u16);
	// stw r22,44(r30)
	ctx.current_instruction = 0x88131E74;
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r22.u32);
loc_88131E78:
	// lhz r11,184(r31)
	ctx.current_instruction = 0x88131E78;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// lhz r10,182(r31)
	ctx.current_instruction = 0x88131E7C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 182);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88131f00
	if (!ctx.cr6.lt) goto loc_88131F00;
	// addi r29,r30,224
	ctx.r29.s64 = ctx.r30.s64 + 224;
loc_88131E94:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812c528
	ctx.lr = 0x88131EA4;
	sub_8812C528(ctx, base);
loc_88131EA4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88131EAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// lhz r11,184(r31)
	ctx.current_instruction = 0x88131EC0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mulli r11,r9,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,220(r8)
	ctx.current_instruction = 0x88131ED0;
	REX_STORE_U32(ctx.r8.u32 + 220, ctx.r10.u32);
	// lhz r7,184(r31)
	ctx.current_instruction = 0x88131ED4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,184(r31)
	ctx.current_instruction = 0x88131EE4;
	REX_STORE_U16(ctx.r31.u32 + 184, ctx.r5.u16);
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lhz r4,182(r31)
	ctx.current_instruction = 0x88131EF0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 182);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88131e94
	if (ctx.cr6.lt) goto loc_88131E94;
loc_88131F00:
	// sth r24,184(r31)
	ctx.current_instruction = 0x88131F00;
	REX_STORE_U16(ctx.r31.u32 + 184, ctx.r24.u16);
	// stw r21,44(r30)
	ctx.current_instruction = 0x88131F04;
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r21.u32);
	// stw r24,48(r30)
	ctx.current_instruction = 0x88131F08;
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r24.u32);
loc_88131F0C:
	// lwz r11,716(r25)
	ctx.current_instruction = 0x88131F0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 716);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8813216c
	if (!ctx.cr6.eq) goto loc_8813216C;
	// lhz r11,184(r31)
	ctx.current_instruction = 0x88131F18;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// lhz r10,182(r31)
	ctx.current_instruction = 0x88131F1C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 182);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8813216c
	if (!ctx.cr6.lt) goto loc_8813216C;
loc_88131F30:
	// lwz r11,48(r30)
	ctx.current_instruction = 0x88131F30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88131f4c
	if (ctx.cr6.lt) goto loc_88131F4C;
	// beq cr6,0x88131fdc
	if (ctx.cr6.eq) goto loc_88131FDC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x88132078
	if (ctx.cr6.lt) goto loc_88132078;
	// b 0x8813213c
	goto loc_8813213C;
loc_88131F4C:
	// lhz r10,184(r31)
	ctx.current_instruction = 0x88131F4C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r9,200(r8)
	ctx.current_instruction = 0x88131F60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 200);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x88131f90
	if (!ctx.cr6.gt) goto loc_88131F90;
	// lhz r10,184(r31)
	ctx.current_instruction = 0x88131F6C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mulli r10,r8,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(56));
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,200(r7)
	ctx.current_instruction = 0x88131F7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 200);
loc_88131F80:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x88131f80
	if (ctx.cr6.gt) goto loc_88131F80;
loc_88131F90:
	// slw r10,r23,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88131fa4
	if (!ctx.cr6.lt) goto loc_88131FA4;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_88131FA4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131FB0;
	sub_8812C528(ctx, base);
loc_88131FB0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lhz r11,184(r31)
	ctx.current_instruction = 0x88131FB8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x88131FBC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,212(r7)
	ctx.current_instruction = 0x88131FD4;
	REX_STORE_U32(ctx.r7.u32 + 212, ctx.r6.u32);
	// stw r23,48(r30)
	ctx.current_instruction = 0x88131FD8;
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r23.u32);
loc_88131FDC:
	// lhz r10,184(r31)
	ctx.current_instruction = 0x88131FDC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,220(r8)
	ctx.current_instruction = 0x88131FF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 220);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x88132028
	if (!ctx.cr6.gt) goto loc_88132028;
	// lhz r10,184(r31)
	ctx.current_instruction = 0x88132000;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mulli r10,r8,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(56));
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,220(r7)
	ctx.current_instruction = 0x88132010;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 220);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_88132018:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x88132018
	if (ctx.cr6.gt) goto loc_88132018;
loc_88132028:
	// slw r10,r23,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8813203c
	if (!ctx.cr6.lt) goto loc_8813203C;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_8813203C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88132048;
	sub_8812C528(ctx, base);
loc_88132048:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lhz r11,184(r31)
	ctx.current_instruction = 0x88132050;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x88132054;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// stw r6,216(r7)
	ctx.current_instruction = 0x8813206C;
	REX_STORE_U32(ctx.r7.u32 + 216, ctx.r6.u32);
	// sth r24,146(r30)
	ctx.current_instruction = 0x88132070;
	REX_STORE_U16(ctx.r30.u32 + 146, ctx.r24.u16);
	// stw r22,48(r30)
	ctx.current_instruction = 0x88132074;
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r22.u32);
loc_88132078:
	// lhz r11,184(r31)
	ctx.current_instruction = 0x88132078;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// lhz r10,146(r30)
	ctx.current_instruction = 0x8813207C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 146);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mulli r11,r9,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r27,216(r11)
	ctx.current_instruction = 0x88132090;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// lwz r7,220(r11)
	ctx.current_instruction = 0x88132094;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r6,212(r11)
	ctx.current_instruction = 0x88132098;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// subfic r29,r27,32
	ctx.xer.ca = ctx.r27.u32 <= 32;
	ctx.r29.u64 = static_cast<uint64_t>(32) - ctx.r27.u64;
	// subfic r28,r7,30
	ctx.xer.ca = ctx.r7.u32 <= 30;
	ctx.r28.u64 = static_cast<uint64_t>(30) - ctx.r7.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88132138
	if (!ctx.cr6.lt) goto loc_88132138;
	// addi r26,r30,224
	ctx.r26.s64 = ctx.r30.s64 + 224;
loc_881320B0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8812c528
	ctx.lr = 0x881320C0;
	sub_8812C528(ctx, base);
loc_881320C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881320C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,146(r30)
	ctx.current_instruction = 0x881320CC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 146);
	// slw r9,r11,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// sraw r11,r9,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,80(r1)
	ctx.current_instruction = 0x881320D8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r5,184(r31)
	ctx.current_instruction = 0x881320E8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r11,r4,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(56));
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,252(r3)
	ctx.current_instruction = 0x881320F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// sthx r8,r11,r6
	ctx.current_instruction = 0x881320FC;
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u16);
	// lhz r10,146(r30)
	ctx.current_instruction = 0x88132100;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 146);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,146(r30)
	ctx.current_instruction = 0x88132110;
	REX_STORE_U16(ctx.r30.u32 + 146, ctx.r8.u16);
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// lhz r7,184(r31)
	ctx.current_instruction = 0x8813211C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(56));
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,212(r4)
	ctx.current_instruction = 0x8813212C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 212);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881320b0
	if (ctx.cr6.lt) goto loc_881320B0;
loc_88132138:
	// stw r24,48(r30)
	ctx.current_instruction = 0x88132138;
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r24.u32);
loc_8813213C:
	// stw r24,48(r30)
	ctx.current_instruction = 0x8813213C;
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r24.u32);
	// lhz r11,184(r31)
	ctx.current_instruction = 0x88132140;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,184(r31)
	ctx.current_instruction = 0x88132150;
	REX_STORE_U16(ctx.r31.u32 + 184, ctx.r9.u16);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// lhz r7,182(r31)
	ctx.current_instruction = 0x8813215C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 182);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88131f30
	if (ctx.cr6.lt) goto loc_88131F30;
loc_8813216C:
	// sth r24,184(r31)
	ctx.current_instruction = 0x8813216C;
	REX_STORE_U16(ctx.r31.u32 + 184, ctx.r24.u16);
	// stw r24,44(r30)
	ctx.current_instruction = 0x88132170;
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r24.u32);
loc_88132174:
	// lhz r11,150(r30)
	ctx.current_instruction = 0x88132174;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,150(r30)
	ctx.current_instruction = 0x88132184;
	REX_STORE_U16(ctx.r30.u32 + 150, ctx.r9.u16);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhz r7,580(r25)
	ctx.current_instruction = 0x88132190;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88131d60
	if (ctx.cr6.lt) goto loc_88131D60;
loc_881321A0:
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r11,40(r30)
	ctx.current_instruction = 0x881321A4;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_881321A8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881321B8;
	sub_8812C528(ctx, base);
loc_881321B8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881321C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,728(r25)
	ctx.current_instruction = 0x881321C4;
	REX_STORE_U16(ctx.r25.u32 + 728, ctx.r11.u16);
	// stw r14,40(r30)
	ctx.current_instruction = 0x881321C8;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r14.u32);
loc_881321CC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881321DC;
	sub_8812C528(ctx, base);
loc_881321DC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881321E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// lwz r10,192(r25)
	ctx.current_instruction = 0x881321FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 192);
	// sth r11,208(r25)
	ctx.current_instruction = 0x88132200;
	REX_STORE_U16(ctx.r25.u32 + 208, ctx.r11.u16);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x88132218
	if (!ctx.cr6.eq) goto loc_88132218;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,320(r25)
	ctx.current_instruction = 0x88132210;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 320);
	// bl 0x88143cd0
	ctx.lr = 0x88132218;
	sub_88143CD0(ctx, base);
loc_88132218:
	// stw r23,40(r30)
	ctx.current_instruction = 0x88132218;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r23.u32);
loc_8813221C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8813222C;
	sub_8812C528(ctx, base);
loc_8813222C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88132234;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,580(r25)
	ctx.current_instruction = 0x88132238;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r11,204(r25)
	ctx.current_instruction = 0x88132240;
	REX_STORE_U32(ctx.r25.u32 + 204, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88132290
	if (!ctx.cr6.gt) goto loc_88132290;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_88132254:
	// lwz r9,584(r25)
	ctx.current_instruction = 0x88132254;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r8,320(r25)
	ctx.current_instruction = 0x8813225C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 320);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lhzx r5,r10,r9
	ctx.current_instruction = 0x88132268;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r9,r4,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r23,40(r9)
	ctx.current_instruction = 0x8813227C;
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r23.u32);
	// lhz r8,580(r25)
	ctx.current_instruction = 0x88132280;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x88132254
	if (ctx.cr6.lt) goto loc_88132254;
loc_88132290:
	// lwz r11,204(r25)
	ctx.current_instruction = 0x88132290;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881322a4
	if (!ctx.cr6.eq) goto loc_881322A4;
	// stw r19,40(r30)
	ctx.current_instruction = 0x8813229C;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r19.u32);
	// b 0x88132604
	goto loc_88132604;
loc_881322A4:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,40(r30)
	ctx.current_instruction = 0x881322A8;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// b 0x88132604
	goto loc_88132604;
loc_881322B0:
	// lhz r11,580(r25)
	ctx.current_instruction = 0x881322B0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// addi r28,r30,224
	ctx.r28.s64 = ctx.r30.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x88139190
	ctx.lr = 0x881322C4;
	sub_88139190(ctx, base);
loc_881322C4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lhz r11,580(r25)
	ctx.current_instruction = 0x881322CC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8813233c
	if (!ctx.cr6.gt) goto loc_8813233C;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_881322E4:
	// lwz r9,584(r25)
	ctx.current_instruction = 0x881322E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 584);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,320(r25)
	ctx.current_instruction = 0x881322EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 320);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhzx r8,r11,r9
	ctx.current_instruction = 0x881322F8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r11,r7,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8812c528
	ctx.lr = 0x8813230C;
	sub_8812C528(ctx, base);
loc_8813230C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88132314;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// stw r11,40(r29)
	ctx.current_instruction = 0x88132324;
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r8,580(r25)
	ctx.current_instruction = 0x8813232C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x881322e4
	if (ctx.cr6.lt) goto loc_881322E4;
loc_8813233C:
	// sth r24,760(r25)
	ctx.current_instruction = 0x8813233C;
	REX_STORE_U16(ctx.r25.u32 + 760, ctx.r24.u16);
	// stw r18,40(r30)
	ctx.current_instruction = 0x88132340;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r18.u32);
loc_88132344:
	// lwz r11,120(r25)
	ctx.current_instruction = 0x88132344;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132594
	if (!ctx.cr6.eq) goto loc_88132594;
	// li r11,38
	ctx.r11.s64 = 38;
	// stw r11,40(r30)
	ctx.current_instruction = 0x88132354;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// b 0x88132604
	goto loc_88132604;
loc_8813235C:
	// lwz r11,120(r25)
	ctx.current_instruction = 0x8813235C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132388
	if (!ctx.cr6.eq) goto loc_88132388;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88132378;
	sub_8812C528(ctx, base);
loc_88132378:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88132380;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,164(r25)
	ctx.current_instruction = 0x88132384;
	REX_STORE_U32(ctx.r25.u32 + 164, ctx.r11.u32);
loc_88132388:
	// li r11,37
	ctx.r11.s64 = 37;
	// stw r11,40(r30)
	ctx.current_instruction = 0x8813238C;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_88132390:
	// lwz r11,120(r25)
	ctx.current_instruction = 0x88132390;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881323cc
	if (!ctx.cr6.eq) goto loc_881323CC;
	// lwz r11,164(r25)
	ctx.current_instruction = 0x8813239C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881323cc
	if (!ctx.cr6.eq) goto loc_881323CC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881323B8;
	sub_8812C528(ctx, base);
loc_881323B8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881323C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,168(r25)
	ctx.current_instruction = 0x881323C8;
	REX_STORE_U16(ctx.r25.u32 + 168, ctx.r10.u16);
loc_881323CC:
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r11,40(r30)
	ctx.current_instruction = 0x881323D0;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_881323D4:
	// lwz r11,120(r25)
	ctx.current_instruction = 0x881323D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8813241c
	if (!ctx.cr6.eq) goto loc_8813241C;
	// lwz r11,164(r25)
	ctx.current_instruction = 0x881323E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8813241c
	if (!ctx.cr6.eq) goto loc_8813241C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881323FC;
	sub_8812C528(ctx, base);
loc_881323FC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88132404;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// sth r11,170(r25)
	ctx.current_instruction = 0x88132418;
	REX_STORE_U16(ctx.r25.u32 + 170, ctx.r11.u16);
loc_8813241C:
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r11,40(r30)
	ctx.current_instruction = 0x88132420;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_88132424:
	// lwz r11,120(r25)
	ctx.current_instruction = 0x88132424;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132470
	if (!ctx.cr6.eq) goto loc_88132470;
	// lwz r11,164(r25)
	ctx.current_instruction = 0x88132430;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132470
	if (!ctx.cr6.eq) goto loc_88132470;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8813244C;
	sub_8812C528(ctx, base);
loc_8813244C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88132454;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// sth r11,172(r25)
	ctx.current_instruction = 0x8813246C;
	REX_STORE_U16(ctx.r25.u32 + 172, ctx.r11.u16);
loc_88132470:
	// sth r24,150(r30)
	ctx.current_instruction = 0x88132470;
	REX_STORE_U16(ctx.r30.u32 + 150, ctx.r24.u16);
	// sth r24,148(r30)
	ctx.current_instruction = 0x88132474;
	REX_STORE_U16(ctx.r30.u32 + 148, ctx.r24.u16);
	// stw r15,40(r30)
	ctx.current_instruction = 0x88132478;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r15.u32);
loc_8813247C:
	// lwz r11,120(r25)
	ctx.current_instruction = 0x8813247C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132594
	if (!ctx.cr6.eq) goto loc_88132594;
	// lwz r11,164(r25)
	ctx.current_instruction = 0x88132488;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132594
	if (!ctx.cr6.eq) goto loc_88132594;
	// lhz r11,580(r25)
	ctx.current_instruction = 0x88132494;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// lhz r10,150(r30)
	ctx.current_instruction = 0x88132498;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88132594
	if (!ctx.cr6.lt) goto loc_88132594;
loc_881324AC:
	// lhz r11,150(r30)
	ctx.current_instruction = 0x881324AC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// lwz r9,584(r25)
	ctx.current_instruction = 0x881324B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r7,168(r25)
	ctx.current_instruction = 0x881324B8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r25.u32 + 168);
	// lhz r5,148(r30)
	ctx.current_instruction = 0x881324BC;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 148);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,320(r25)
	ctx.current_instruction = 0x881324C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 320);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// lhzx r9,r6,r9
	ctx.current_instruction = 0x881324D4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r11,r8,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,1456
	ctx.r29.s64 = ctx.r11.s64 + 1456;
	// bge cr6,0x88132564
	if (!ctx.cr6.lt) goto loc_88132564;
	// addi r28,r30,224
	ctx.r28.s64 = ctx.r30.s64 + 224;
loc_881324F0:
	// lhz r11,172(r25)
	ctx.current_instruction = 0x881324F0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 172);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r10,170(r25)
	ctx.current_instruction = 0x881324F8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 170);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8812c528
	ctx.lr = 0x88132510;
	sub_8812C528(ctx, base);
loc_88132510:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lhz r10,148(r30)
	ctx.current_instruction = 0x88132518;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 148);
	// subfic r11,r31,32
	ctx.xer.ca = ctx.r31.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r31.u64;
	// lwz r9,80(r1)
	ctx.current_instruction = 0x88132520;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// sraw r5,r7,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r5.s64 = ctx.r7.s32 >> temp.u32;
	// stwx r5,r6,r29
	ctx.current_instruction = 0x88132534;
	REX_STORE_U32(ctx.r6.u32 + ctx.r29.u32, ctx.r5.u32);
	// lhz r4,148(r30)
	ctx.current_instruction = 0x88132538;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 148);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,148(r30)
	ctx.current_instruction = 0x8813254C;
	REX_STORE_U16(ctx.r30.u32 + 148, ctx.r10.u16);
	// lhz r9,168(r25)
	ctx.current_instruction = 0x88132550;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + 168);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x881324f0
	if (ctx.cr6.lt) goto loc_881324F0;
loc_88132564:
	// sth r24,148(r30)
	ctx.current_instruction = 0x88132564;
	REX_STORE_U16(ctx.r30.u32 + 148, ctx.r24.u16);
	// lhz r11,150(r30)
	ctx.current_instruction = 0x88132568;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r30)
	ctx.current_instruction = 0x8813257C;
	REX_STORE_U16(ctx.r30.u32 + 150, ctx.r9.u16);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// lhz r8,580(r25)
	ctx.current_instruction = 0x88132584;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x881324ac
	if (ctx.cr6.lt) goto loc_881324AC;
loc_88132594:
	// stw r19,40(r30)
	ctx.current_instruction = 0x88132594;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r19.u32);
	// b 0x88132604
	goto loc_88132604;
loc_8813259C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881325AC;
	sub_8812C528(ctx, base);
loc_881325AC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881325B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881325c8
	if (!ctx.cr6.eq) goto loc_881325C8;
	// stb r24,200(r25)
	ctx.current_instruction = 0x881325C0;
	REX_STORE_U8(ctx.r25.u32 + 200, ctx.r24.u8);
	// b 0x88132600
	goto loc_88132600;
loc_881325C8:
	// li r11,51
	ctx.r11.s64 = 51;
	// stw r11,40(r30)
	ctx.current_instruction = 0x881325CC;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// b 0x88132604
	goto loc_88132604;
loc_881325D4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881325E4;
	sub_8812C528(ctx, base);
loc_881325E4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lhz r10,110(r25)
	ctx.current_instruction = 0x881325EC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 110);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881325F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x881314a0
	if (!ctx.cr6.lt) goto loc_881314A0;
	// stb r11,200(r25)
	ctx.current_instruction = 0x881325FC;
	REX_STORE_U8(ctx.r25.u32 + 200, ctx.r11.u8);
loc_88132600:
	// stw r20,40(r30)
	ctx.current_instruction = 0x88132600;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r20.u32);
loc_88132604:
	// lwz r11,40(r30)
	ctx.current_instruction = 0x88132604;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x881314e4
	if (!ctx.cr6.eq) goto loc_881314E4;
loc_88132610:
	// lwz r11,192(r25)
	ctx.current_instruction = 0x88132610;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132620
	if (!ctx.cr6.eq) goto loc_88132620;
	// stw r23,20(r30)
	ctx.current_instruction = 0x8813261C;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r23.u32);
loc_88132620:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88158840) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88158840);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88158840;
	ctx.current_instruction = 0x88158840;
	// lwz r9,3980(r3)
	ctx.current_instruction = 0x88158840;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3980);
	// addi r8,r4,15
	ctx.r8.s64 = ctx.r4.s64 + 15;
	// addi r7,r5,15
	ctx.r7.s64 = ctx.r5.s64 + 15;
	// rlwinm r10,r8,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r7,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88158868
	if (ctx.cr6.eq) goto loc_88158868;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x88158870
	goto loc_88158870;
loc_88158868:
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
loc_88158870:
	// lwz r7,15536(r3)
	ctx.current_instruction = 0x88158870;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// bne cr6,0x88158888
	if (!ctx.cr6.eq) goto loc_88158888;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
loc_88158888:
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r10,0(r6)
	ctx.current_instruction = 0x8815888C;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,4(r6)
	ctx.current_instruction = 0x88158894;
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r8,8(r6)
	ctx.current_instruction = 0x88158898;
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// stw r9,12(r6)
	ctx.current_instruction = 0x8815889C;
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r7,16(r6)
	ctx.current_instruction = 0x881588A0;
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r7.u32);
	// stw r5,20(r6)
	ctx.current_instruction = 0x881588A4;
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r5.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8815B520) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815B520;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815B520) {
			switch (rex_dispatch_address) {
				case 0x8815B53C:
				case 0x8815B59C:
				case 0x8815B5DC:
				case 0x8815B68C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815B520;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815B53C: goto loc_8815B53C;
		case 0x8815B59C: goto loc_8815B59C;
		case 0x8815B5DC: goto loc_8815B5DC;
		case 0x8815B68C: goto loc_8815B68C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8815B524;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8815B528;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8815B52C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8815b408
	ctx.lr = 0x8815B53C;
	sub_8815B408(ctx, base);
loc_8815B53C:
	// lwz r11,1832(r3)
	ctx.current_instruction = 0x8815B53C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1832);
	// lwz r10,1840(r3)
	ctx.current_instruction = 0x8815B540;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1840);
	// lwz r9,1844(r3)
	ctx.current_instruction = 0x8815B544;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1844);
	// lwz r8,1868(r3)
	ctx.current_instruction = 0x8815B548;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1868);
	// lwz r7,1792(r3)
	ctx.current_instruction = 0x8815B54C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1792);
	// stw r11,1836(r3)
	ctx.current_instruction = 0x8815B550;
	REX_STORE_U32(ctx.r3.u32 + 1836, ctx.r11.u32);
	// stw r10,1856(r3)
	ctx.current_instruction = 0x8815B554;
	REX_STORE_U32(ctx.r3.u32 + 1856, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r9,1860(r3)
	ctx.current_instruction = 0x8815B55C;
	REX_STORE_U32(ctx.r3.u32 + 1860, ctx.r9.u32);
	// stw r8,1864(r3)
	ctx.current_instruction = 0x8815B560;
	REX_STORE_U32(ctx.r3.u32 + 1864, ctx.r8.u32);
	// beq cr6,0x8815b590
	if (ctx.cr6.eq) goto loc_8815B590;
	// lwz r11,1828(r3)
	ctx.current_instruction = 0x8815B568;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1828);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,1848(r3)
	ctx.current_instruction = 0x8815B570;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1848);
	// lwz r8,1852(r3)
	ctx.current_instruction = 0x8815B574;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1852);
	// lwz r7,1872(r3)
	ctx.current_instruction = 0x8815B578;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1872);
	// stw r10,1800(r3)
	ctx.current_instruction = 0x8815B57C;
	REX_STORE_U32(ctx.r3.u32 + 1800, ctx.r10.u32);
	// stw r11,1836(r3)
	ctx.current_instruction = 0x8815B580;
	REX_STORE_U32(ctx.r3.u32 + 1836, ctx.r11.u32);
	// stw r9,1856(r3)
	ctx.current_instruction = 0x8815B584;
	REX_STORE_U32(ctx.r3.u32 + 1856, ctx.r9.u32);
	// stw r8,1860(r3)
	ctx.current_instruction = 0x8815B588;
	REX_STORE_U32(ctx.r3.u32 + 1860, ctx.r8.u32);
	// stw r7,1864(r3)
	ctx.current_instruction = 0x8815B58C;
	REX_STORE_U32(ctx.r3.u32 + 1864, ctx.r7.u32);
loc_8815B590:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20760(r31)
	ctx.current_instruction = 0x8815B594;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20760);
	// bl 0x881aa6b8
	ctx.lr = 0x8815B59C;
	sub_881AA6B8(ctx, base);
loc_8815B59C:
	// lwz r11,1800(r31)
	ctx.current_instruction = 0x8815B59C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1800);
	// li r10,8
	ctx.r10.s64 = 8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// beq cr6,0x8815b5c8
	if (ctx.cr6.eq) goto loc_8815B5C8;
	// stw r11,1920(r31)
	ctx.current_instruction = 0x8815B5B4;
	REX_STORE_U32(ctx.r31.u32 + 1920, ctx.r11.u32);
	// stw r10,1924(r31)
	ctx.current_instruction = 0x8815B5B8;
	REX_STORE_U32(ctx.r31.u32 + 1924, ctx.r10.u32);
	// stw r11,1928(r31)
	ctx.current_instruction = 0x8815B5BC;
	REX_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
	// stw r9,1932(r31)
	ctx.current_instruction = 0x8815B5C0;
	REX_STORE_U32(ctx.r31.u32 + 1932, ctx.r9.u32);
	// b 0x8815b5d8
	goto loc_8815B5D8;
loc_8815B5C8:
	// stw r11,1924(r31)
	ctx.current_instruction = 0x8815B5C8;
	REX_STORE_U32(ctx.r31.u32 + 1924, ctx.r11.u32);
	// stw r10,1920(r31)
	ctx.current_instruction = 0x8815B5CC;
	REX_STORE_U32(ctx.r31.u32 + 1920, ctx.r10.u32);
	// stw r9,1928(r31)
	ctx.current_instruction = 0x8815B5D0;
	REX_STORE_U32(ctx.r31.u32 + 1928, ctx.r9.u32);
	// stw r11,1932(r31)
	ctx.current_instruction = 0x8815B5D4;
	REX_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
loc_8815B5D8:
	// bl 0x881a5b88
	ctx.lr = 0x8815B5DC;
	sub_881A5B88(ctx, base);
loc_8815B5DC:
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// stw r3,264(r31)
	ctx.current_instruction = 0x8815B5E4;
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// lis r8,-30692
	ctx.r8.s64 = -2011430912;
	// lwz r9,4012(r31)
	ctx.current_instruction = 0x8815B5EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4012);
	// lis r7,-30692
	ctx.r7.s64 = -2011430912;
	// addi r3,r11,6864
	ctx.r3.s64 = ctx.r11.s64 + 6864;
	// lis r6,-30692
	ctx.r6.s64 = -2011430912;
	// addi r11,r10,-760
	ctx.r11.s64 = ctx.r10.s64 + -760;
	// stw r3,3156(r31)
	ctx.current_instruction = 0x8815B600;
	REX_STORE_U32(ctx.r31.u32 + 3156, ctx.r3.u32);
	// lis r5,-30692
	ctx.r5.s64 = -2011430912;
	// addi r10,r8,760
	ctx.r10.s64 = ctx.r8.s64 + 760;
	// stw r11,3124(r31)
	ctx.current_instruction = 0x8815B60C;
	REX_STORE_U32(ctx.r31.u32 + 3124, ctx.r11.u32);
	// addi r8,r7,2976
	ctx.r8.s64 = ctx.r7.s64 + 2976;
	// lis r4,-30692
	ctx.r4.s64 = -2011430912;
	// stw r10,3128(r31)
	ctx.current_instruction = 0x8815B618;
	REX_STORE_U32(ctx.r31.u32 + 3128, ctx.r10.u32);
	// addi r7,r6,4648
	ctx.r7.s64 = ctx.r6.s64 + 4648;
	// stw r8,3132(r31)
	ctx.current_instruction = 0x8815B620;
	REX_STORE_U32(ctx.r31.u32 + 3132, ctx.r8.u32);
	// addi r6,r5,-11832
	ctx.r6.s64 = ctx.r5.s64 + -11832;
	// addi r5,r4,-6560
	ctx.r5.s64 = ctx.r4.s64 + -6560;
	// stw r7,3136(r31)
	ctx.current_instruction = 0x8815B62C;
	REX_STORE_U32(ctx.r31.u32 + 3136, ctx.r7.u32);
	// stw r6,3148(r31)
	ctx.current_instruction = 0x8815B630;
	REX_STORE_U32(ctx.r31.u32 + 3148, ctx.r6.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r5,3152(r31)
	ctx.current_instruction = 0x8815B638;
	REX_STORE_U32(ctx.r31.u32 + 3152, ctx.r5.u32);
	// beq cr6,0x8815b654
	if (ctx.cr6.eq) goto loc_8815B654;
	// lis r11,-30694
	ctx.r11.s64 = -2011561984;
	// lis r10,-30694
	ctx.r10.s64 = -2011561984;
	// addi r9,r11,23600
	ctx.r9.s64 = ctx.r11.s64 + 23600;
	// addi r8,r10,24000
	ctx.r8.s64 = ctx.r10.s64 + 24000;
	// b 0x8815b664
	goto loc_8815B664;
loc_8815B654:
	// lis r11,-30694
	ctx.r11.s64 = -2011561984;
	// lis r10,-30694
	ctx.r10.s64 = -2011561984;
	// addi r9,r11,20664
	ctx.r9.s64 = ctx.r11.s64 + 20664;
	// addi r8,r10,21048
	ctx.r8.s64 = ctx.r10.s64 + 21048;
loc_8815B664:
	// lis r11,-30694
	ctx.r11.s64 = -2011561984;
	// stw r8,15932(r31)
	ctx.current_instruction = 0x8815B668;
	REX_STORE_U32(ctx.r31.u32 + 15932, ctx.r8.u32);
	// lis r10,-30696
	ctx.r10.s64 = -2011693056;
	// stw r9,15928(r31)
	ctx.current_instruction = 0x8815B670;
	REX_STORE_U32(ctx.r31.u32 + 15928, ctx.r9.u32);
	// addi r9,r11,22992
	ctx.r9.s64 = ctx.r11.s64 + 22992;
	// addi r8,r10,-11128
	ctx.r8.s64 = ctx.r10.s64 + -11128;
	// stw r9,2988(r31)
	ctx.current_instruction = 0x8815B67C;
	REX_STORE_U32(ctx.r31.u32 + 2988, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,15924(r31)
	ctx.current_instruction = 0x8815B684;
	REX_STORE_U32(ctx.r31.u32 + 15924, ctx.r8.u32);
	// bl 0x881b74a0
	ctx.lr = 0x8815B68C;
	sub_881B74A0(ctx, base);
loc_8815B68C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8815B690;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8815B698;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8815E728) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8815E728);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815E728;
	ctx.current_instruction = 0x8815E728;
	// lwz r9,15536(r3)
	ctx.current_instruction = 0x8815E728;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// stw r4,248(r3)
	ctx.current_instruction = 0x8815E72C;
	REX_STORE_U32(ctx.r3.u32 + 248, ctx.r4.u32);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x8815e7f4
	if (ctx.cr6.lt) goto loc_8815E7F4;
	// lwz r10,252(r3)
	ctx.current_instruction = 0x8815E738;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,6608(r3)
	ctx.current_instruction = 0x8815E740;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 6608);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,324(r3)
	ctx.current_instruction = 0x8815E74C;
	REX_STORE_U32(ctx.r3.u32 + 324, ctx.r8.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,-20
	ctx.r10.s64 = ctx.r11.s64 + -20;
	// lwz r10,-16(r11)
	ctx.current_instruction = 0x8815E764;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,320(r3)
	ctx.current_instruction = 0x8815E768;
	REX_STORE_U32(ctx.r3.u32 + 320, ctx.r10.u32);
	// lwz r9,-20(r11)
	ctx.current_instruction = 0x8815E76C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -20);
	// stw r9,316(r3)
	ctx.current_instruction = 0x8815E770;
	REX_STORE_U32(ctx.r3.u32 + 316, ctx.r9.u32);
	// lwz r11,-4(r11)
	ctx.current_instruction = 0x8815E774;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r10,3004(r3)
	ctx.current_instruction = 0x8815E780;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3004);
	// stw r11,300(r3)
	ctx.current_instruction = 0x8815E784;
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stw r11,304(r3)
	ctx.current_instruction = 0x8815E78C;
	REX_STORE_U32(ctx.r3.u32 + 304, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8815e7bc
	if (ctx.cr6.eq) goto loc_8815E7BC;
	// lwz r11,1904(r3)
	ctx.current_instruction = 0x8815E798;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1904);
	// sth r8,16(r11)
	ctx.current_instruction = 0x8815E79C;
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r8.u16);
	// lwz r10,1904(r3)
	ctx.current_instruction = 0x8815E7A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1904);
	// sth r8,0(r10)
	ctx.current_instruction = 0x8815E7A4;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// lwz r9,1908(r3)
	ctx.current_instruction = 0x8815E7A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1908);
	// sth r8,16(r9)
	ctx.current_instruction = 0x8815E7AC;
	REX_STORE_U16(ctx.r9.u32 + 16, ctx.r8.u16);
	// lwz r7,1908(r3)
	ctx.current_instruction = 0x8815E7B0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1908);
	// sth r8,0(r7)
	ctx.current_instruction = 0x8815E7B4;
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r8.u16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8815E7BC:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r9,1904(r3)
	ctx.current_instruction = 0x8815E7C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1904);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r8,r10,1024
	ctx.r8.s64 = ctx.r10.s64 + 1024;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r7,r8,r11
	ctx.r7.u64 = uint32_t((ctx.r11.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r8.s32 / ctx.r11.s32 : 0);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// andc r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// sth r6,16(r9)
	ctx.current_instruction = 0x8815E7E0;
	REX_STORE_U16(ctx.r9.u32 + 16, ctx.r6.u16);
	// lwz r4,1904(r3)
	ctx.current_instruction = 0x8815E7E4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1904);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// sth r6,0(r4)
	ctx.current_instruction = 0x8815E7EC;
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// b 0x8815e908
	goto loc_8815E908;
loc_8815E7F4:
	// not r10,r4
	ctx.r10.u64 = ~ctx.r4.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,304(r3)
	ctx.current_instruction = 0x8815E804;
	REX_STORE_U32(ctx.r3.u32 + 304, ctx.r11.u32);
	// subf r7,r8,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r8.u64;
	// stw r8,324(r3)
	ctx.current_instruction = 0x8815E80C;
	REX_STORE_U32(ctx.r3.u32 + 324, ctx.r8.u32);
	// stw r10,316(r3)
	ctx.current_instruction = 0x8815E810;
	REX_STORE_U32(ctx.r3.u32 + 316, ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// stw r7,320(r3)
	ctx.current_instruction = 0x8815E818;
	REX_STORE_U32(ctx.r3.u32 + 320, ctx.r7.u32);
	// stw r11,300(r3)
	ctx.current_instruction = 0x8815E81C;
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// bge cr6,0x8815e82c
	if (!ctx.cr6.lt) goto loc_8815E82C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_8815E82C:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bgt cr6,0x8815e858
	if (ctx.cr6.gt) goto loc_8815E858;
	// lwz r8,14820(r3)
	ctx.current_instruction = 0x8815E834;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 14820);
	// stw r11,300(r3)
	ctx.current_instruction = 0x8815E838;
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,304(r3)
	ctx.current_instruction = 0x8815E840;
	REX_STORE_U32(ctx.r3.u32 + 304, ctx.r11.u32);
	// beq cr6,0x8815e8c8
	if (ctx.cr6.eq) goto loc_8815E8C8;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bgt cr6,0x8815e8c8
	if (ctx.cr6.gt) goto loc_8815E8C8;
	// stw r10,300(r3)
	ctx.current_instruction = 0x8815E850;
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r10.u32);
	// b 0x8815e8c4
	goto loc_8815E8C4;
loc_8815E858:
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8815e874
	if (ctx.cr6.lt) goto loc_8815E874;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stw r11,304(r3)
	ctx.current_instruction = 0x8815E868;
	REX_STORE_U32(ctx.r3.u32 + 304, ctx.r11.u32);
	// stw r11,300(r3)
	ctx.current_instruction = 0x8815E86C;
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// b 0x8815e8c8
	goto loc_8815E8C8;
loc_8815E874:
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bgt cr6,0x8815e894
	if (ctx.cr6.gt) goto loc_8815E894;
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// stw r10,300(r3)
	ctx.current_instruction = 0x8815E888;
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r10.u32);
	// stw r8,304(r3)
	ctx.current_instruction = 0x8815E88C;
	REX_STORE_U32(ctx.r3.u32 + 304, ctx.r8.u32);
	// b 0x8815e8c8
	goto loc_8815E8C8;
loc_8815E894:
	// cmpwi cr6,r4,24
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 24, ctx.xer);
	// bgt cr6,0x8815e8b4
	if (ctx.cr6.gt) goto loc_8815E8B4;
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// stw r10,300(r3)
	ctx.current_instruction = 0x8815E8A8;
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r10.u32);
	// stw r8,304(r3)
	ctx.current_instruction = 0x8815E8AC;
	REX_STORE_U32(ctx.r3.u32 + 304, ctx.r8.u32);
	// b 0x8815e8c8
	goto loc_8815E8C8;
loc_8815E8B4:
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// addi r10,r4,-6
	ctx.r10.s64 = ctx.r4.s64 + -6;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,300(r3)
	ctx.current_instruction = 0x8815E8C0;
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r8.u32);
loc_8815E8C4:
	// stw r10,304(r3)
	ctx.current_instruction = 0x8815E8C4;
	REX_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
loc_8815E8C8:
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r10,300(r3)
	ctx.current_instruction = 0x8815E8D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 300);
	// lwz r9,1904(r3)
	ctx.current_instruction = 0x8815E8D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1904);
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r8,r11,1024
	ctx.r8.s64 = ctx.r11.s64 + 1024;
	// divw r7,r8,r10
	ctx.r7.u64 = uint32_t((ctx.r10.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r8.s32 / ctx.r10.s32 : 0);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// sth r6,16(r9)
	ctx.current_instruction = 0x8815E8F4;
	REX_STORE_U16(ctx.r9.u32 + 16, ctx.r6.u16);
	// andc r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r11,1904(r3)
	ctx.current_instruction = 0x8815E900;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1904);
	// sth r6,0(r11)
	ctx.current_instruction = 0x8815E904;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
loc_8815E908:
	// lwz r9,304(r3)
	ctx.current_instruction = 0x8815E908;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// lwz r10,1908(r3)
	ctx.current_instruction = 0x8815E90C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1908);
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r8,r11,1024
	ctx.r8.s64 = ctx.r11.s64 + 1024;
	// divw r7,r8,r9
	ctx.r7.u64 = uint32_t((ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// sth r5,16(r10)
	ctx.current_instruction = 0x8815E92C;
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r5.u16);
	// andc r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r3,1908(r3)
	ctx.current_instruction = 0x8815E938;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 1908);
	// sth r5,0(r3)
	ctx.current_instruction = 0x8815E93C;
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r5.u16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8816D140) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8816D140;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8816D140) {
			switch (rex_dispatch_address) {
				case 0x8816D148:
				case 0x8816D178:
				case 0x8816D1D8:
				case 0x8816D228:
				case 0x8816D260:
				case 0x8816D270:
				case 0x8816D288:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8816D140;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8816D148: goto loc_8816D148;
		case 0x8816D178: goto loc_8816D178;
		case 0x8816D1D8: goto loc_8816D1D8;
		case 0x8816D228: goto loc_8816D228;
		case 0x8816D260: goto loc_8816D260;
		case 0x8816D270: goto loc_8816D270;
		case 0x8816D288: goto loc_8816D288;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8816D148;
	__savegprlr_25(ctx, base);
loc_8816D148:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8816D148;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,84(r3)
	ctx.current_instruction = 0x8816D14C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,7136
	ctx.r27.s64 = ctx.r11.s64 + 7136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ld r10,0(r30)
	ctx.current_instruction = 0x8816D164;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// rldicl r9,r10,3,61
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 3) & 0x7;
	// rlwinm r26,r9,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r26,r27
	ctx.current_instruction = 0x8816D170;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r27.u32);
	// bl 0x88156500
	ctx.lr = 0x8816D178;
	sub_88156500(ctx, base);
loc_8816D178:
	// addi r8,r27,1
	ctx.r8.s64 = ctx.r27.s64 + 1;
	// li r31,3
	ctx.r31.s64 = 3;
	// lbzx r11,r26,r8
	ctx.current_instruction = 0x8816D180;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8816d190
	if (!ctx.cr6.eq) goto loc_8816D190;
	// stw r31,20(r30)
	ctx.current_instruction = 0x8816D18C;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
loc_8816D190:
	// lwz r3,84(r28)
	ctx.current_instruction = 0x8816D190;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,20(r3)
	ctx.current_instruction = 0x8816D198;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8816d2a0
	if (!ctx.cr6.eq) goto loc_8816D2A0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x8816d2a0
	if (ctx.cr6.lt) goto loc_8816D2A0;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// bgt cr6,0x8816d2a0
	if (ctx.cr6.gt) goto loc_8816D2A0;
	// ld r10,0(r3)
	ctx.current_instruction = 0x8816D1B4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x8816D1B8;
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
	ctx.current_instruction = 0x8816D1C8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x8816D1CC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8816d1d8
	if (!ctx.cr0.lt) goto loc_8816D1D8;
	// bl 0x88156678
	ctx.lr = 0x8816D1D8;
	sub_88156678(ctx, base);
loc_8816D1D8:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x8816D1D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r29)
	ctx.current_instruction = 0x8816D1E4;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r9,84(r28)
	ctx.current_instruction = 0x8816D1E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r8,20(r9)
	ctx.current_instruction = 0x8816D1EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8816d2a0
	if (!ctx.cr6.eq) goto loc_8816D2A0;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// lis r10,-30718
	ctx.r10.s64 = -2013134848;
	// rlwinm r11,r11,0,15,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// addi r27,r10,7008
	ctx.r27.s64 = ctx.r10.s64 + 7008;
	// stw r11,0(r29)
	ctx.current_instruction = 0x8816D208;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r30,84(r28)
	ctx.current_instruction = 0x8816D20C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x8816D214;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// rldicl r8,r9,6,58
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 6) & 0x3F;
	// rlwinm r25,r8,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r25,r27
	ctx.current_instruction = 0x8816D220;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r27.u32);
	// bl 0x88156500
	ctx.lr = 0x8816D228;
	sub_88156500(ctx, base);
loc_8816D228:
	// addi r7,r27,1
	ctx.r7.s64 = ctx.r27.s64 + 1;
	// lbzx r11,r25,r7
	ctx.current_instruction = 0x8816D22C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8816d23c
	if (!ctx.cr6.eq) goto loc_8816D23C;
	// stw r31,20(r30)
	ctx.current_instruction = 0x8816D238;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
loc_8816D23C:
	// lwz r10,84(r28)
	ctx.current_instruction = 0x8816D23C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,20(r10)
	ctx.current_instruction = 0x8816D244;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8816d2a0
	if (!ctx.cr6.eq) goto loc_8816D2A0;
	// srawi r5,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r26.s32 >> 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881ad268
	ctx.lr = 0x8816D260;
	sub_881AD268(ctx, base);
loc_8816D260:
	// clrlwi r5,r26,31
	ctx.r5.u64 = ctx.r26.u32 & 0x1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881ad268
	ctx.lr = 0x8816D270;
	sub_881AD268(ctx, base);
loc_8816D270:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8816D274:
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
	ctx.lr = 0x8816D288;
	sub_881AD268(ctx, base);
loc_8816D288:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bge 0x8816d274
	if (!ctx.cr0.lt) goto loc_8816D274;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8816D2A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881717D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881717D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881717D0) {
			switch (rex_dispatch_address) {
				case 0x881717D8:
				case 0x88171810:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881717D0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881717D8: goto loc_881717D8;
		case 0x88171810: goto loc_88171810;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881717D8;
	__savegprlr_26(ctx, base);
loc_881717D8:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881717D8;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,24688(r3)
	ctx.current_instruction = 0x881717DC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x88171828
	if (!ctx.cr6.gt) goto loc_88171828;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// addi r31,r26,18152
	ctx.r31.s64 = ctx.r26.s64 + 18152;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r29,r11,43690
	ctx.r29.u64 = ctx.r11.u64 | 43690;
loc_88171800:
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,15268(r28)
	ctx.current_instruction = 0x88171804;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 15268);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x881b36a0
	ctx.lr = 0x88171810;
	sub_881B36A0(ctx, base);
loc_88171810:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88171810;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,-260(r31)
	ctx.current_instruction = 0x88171818;
	REX_STORE_U32(ctx.r31.u32 + -260, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r29,620(r11)
	ctx.current_instruction = 0x88171820;
	REX_STORE_U32(ctx.r11.u32 + 620, ctx.r29.u32);
	// bne 0x88171800
	if (!ctx.cr0.eq) goto loc_88171800;
loc_88171828:
	// stw r27,18148(r26)
	ctx.current_instruction = 0x88171828;
	REX_STORE_U32(ctx.r26.u32 + 18148, ctx.r27.u32);
	// stw r27,18408(r26)
	ctx.current_instruction = 0x8817182C;
	REX_STORE_U32(ctx.r26.u32 + 18408, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88173BE0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88173BE0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88173BE0) {
			switch (rex_dispatch_address) {
				case 0x88173BE8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88173BE0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88173BE8: goto loc_88173BE8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x88173BE8;
	__savegprlr_21(ctx, base);
loc_88173BE8:
	// li r26,192
	ctx.r26.s64 = 192;
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,224
	ctx.r28.s64 = 224;
	// vcsxwfp128 v62,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// li r27,208
	ctx.r27.s64 = 208;
	// li r29,240
	ctx.r29.s64 = 240;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lvx128 v61,r6,r26
	ea = (ctx.r6.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,480
	ctx.r11.s64 = 480;
	// lvx128 v60,r6,r28
	ea = (ctx.r6.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,448
	ctx.r10.s64 = 448;
	// lvx128 v59,r6,r27
	ea = (ctx.r6.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,416
	ctx.r9.s64 = 416;
	// lvx128 v58,r6,r29
	ea = (ctx.r6.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,384
	ctx.r8.s64 = 384;
	// li r30,160
	ctx.r30.s64 = 160;
	// vcsxwfp128 v57,v61,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// li r7,352
	ctx.r7.s64 = 352;
	// lvx128 v56,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,320
	ctx.r6.s64 = 320;
	// lvx128 v54,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,176
	ctx.r31.s64 = 176;
	// lvx128 v52,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v49,v56,11
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v43,r22,r30
	ea = (ctx.r22.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v48,v54,11
	simde_mm_store_ps(ctx.v48.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v40,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v47,v52,11
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v38,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v46,v50,11
	simde_mm_store_ps(ctx.v46.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v42,r22,r31
	ea = (ctx.r22.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v37,v40,11
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v40.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v55,v59,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// vcsxwfp128 v53,v60,0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// lvx128 v45,r5,r28
	ea = (ctx.r5.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v51,v58,0
	simde_mm_store_ps(ctx.v51.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// lvx128 v44,r5,r26
	ea = (ctx.r5.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v41,v43,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// vcsxwfp128 v36,v38,11
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v38.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// vcsxwfp128 v39,v42,0
	simde_mm_store_ps(ctx.v39.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r7,96
	ctx.r7.s64 = 96;
	// lvx128 v35,r22,r11
	ea = (ctx.r22.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,128
	ctx.r9.s64 = 128;
	// lvx128 v61,r22,r3
	ea = (ctx.r22.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,112
	ctx.r8.s64 = 112;
	// lvx128 v60,r22,r4
	ea = (ctx.r22.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,144
	ctx.r10.s64 = 144;
	// lvx128 v59,r22,r5
	ea = (ctx.r22.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,288
	ctx.r28.s64 = 288;
	// lvx128 v58,r22,r6
	ea = (ctx.r22.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,256
	ctx.r26.s64 = 256;
	// lvx128 v56,r22,r7
	ea = (ctx.r22.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v34,v49,v51
	simde_mm_store_ps(ctx.v34.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v51.f32)));
	// vcsxwfp128 v54,v35,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// vmsum3fp128 v33,v48,v53
	simde_mm_store_ps(ctx.v33.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vcsxwfp128 v50,v61,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vmsum3fp128 v32,v47,v55
	simde_mm_store_ps(ctx.v32.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v55.f32)));
	// lvx128 v52,r22,r8
	ea = (ctx.r22.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v46,v57
	simde_mm_store_ps(ctx.v63.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v57.f32)));
	// lvx128 v49,r22,r9
	ea = (ctx.r22.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v42,v37,v39
	simde_mm_store_ps(ctx.v42.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v39.f32)));
	// lvx128 v47,r22,r10
	ea = (ctx.r22.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v38,v36,v41
	simde_mm_store_ps(ctx.v38.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v41.f32)));
	// lvx128 v43,r23,r28
	ea = (ctx.r23.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r23,r26
	ea = (ctx.r23.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r21,-30680
	ctx.r21.s64 = -2010644480;
	// lvx128 v37,r23,r30
	ea = (ctx.r23.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v48,v60,0
	simde_mm_store_ps(ctx.v48.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// lvx128 v35,r23,r9
	ea = (ctx.r23.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v46,v59,0
	simde_mm_store_ps(ctx.v46.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vcsxwfp128 v36,v58,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vcsxwfp128 v61,v56,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// addi r9,r21,8096
	ctx.r9.s64 = ctx.r21.s64 + 8096;
	// vrlimi128 v63,v32,4,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v32.f32), 228), 4));
	// vcsxwfp128 v58,v49,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// lvx128 v56,r23,r5
	ea = (ctx.r23.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v49,v43,11
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vrlimi128 v38,v42,1,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v42.f32), 228), 1));
	// vrlimi128 v33,v34,1,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 228), 1));
	// vcsxwfp128 v60,v52,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// lvx128 v59,r23,r7
	ea = (ctx.r23.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v52,v47,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v42,v35,11
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v34,r23,r3
	ea = (ctx.r23.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v32,v44,11
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v43,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v12,v63,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vcsxwfp128 v47,v40,11
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v40.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r7,496
	ctx.r7.s64 = 496;
	// vcsxwfp128 v44,v37,11
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r5,464
	ctx.r5.s64 = 464;
	// vcsxwfp128 v35,v56,11
	simde_mm_store_ps(ctx.v35.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r3,432
	ctx.r3.s64 = 432;
	// vcsxwfp128 v40,v45,11
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vor128 v45,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vcsxwfp128 v37,v59,11
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r9,400
	ctx.r9.s64 = 400;
	// vcsxwfp128 v63,v43,11
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v59,r23,r7
	ea = (ctx.r23.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v56,v34,11
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v34.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v43,r23,r5
	ea = (ctx.r23.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v13,v33,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_load_ps(ctx.v0.f32)));
	// li r7,368
	ctx.r7.s64 = 368;
	// vmsum3fp128 v34,v49,v52
	simde_mm_store_ps(ctx.v34.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vsubfp128 v11,v38,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v42,v42,v46
	simde_mm_store_ps(ctx.v42.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vcsxwfp128 v38,v59,11
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum3fp128 v32,v32,v61
	simde_mm_store_ps(ctx.v32.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vcsxwfp128 v59,v43,11
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmaddfp128 v45,v12,v1,v45
	simde_mm_store_ps(ctx.v45.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v45.f32)));
	// li r5,336
	ctx.r5.s64 = 336;
	// vmsum3fp128 v49,v47,v58
	simde_mm_store_ps(ctx.v49.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v58.f32)));
	// lvx128 v47,r23,r3
	ea = (ctx.r23.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v44,v44,v36
	simde_mm_store_ps(ctx.v44.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v36.f32)));
	// vcsxwfp128 v43,v47,11
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum3fp128 v35,v35,v50
	simde_mm_store_ps(ctx.v35.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v50.f32)));
	// li r3,304
	ctx.r3.s64 = 304;
	// vmsum3fp128 v40,v40,v60
	simde_mm_store_ps(ctx.v40.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v60.f32)));
	// li r30,272
	ctx.r30.s64 = 272;
	// vmsum3fp128 v37,v37,v48
	simde_mm_store_ps(ctx.v37.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v48.f32)));
	// lvx128 v10,r23,r9
	ea = (ctx.r23.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v62
	simde_mm_store_ps(ctx.v63.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vcfsx v4,v10,11
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum3fp128 v56,v56,v54
	simde_mm_store_ps(ctx.v56.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v54.f32)));
	// lvx128 v7,r23,r7
	ea = (ctx.r23.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v13,v1,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v6,r23,r5
	ea = (ctx.r23.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v11,v1,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v5,r23,r3
	ea = (ctx.r23.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v51,v38,v51
	simde_mm_store_ps(ctx.v51.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v51.f32)));
	// lvx128 v3,r23,r30
	ea = (ctx.r23.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v59,v59,v53
	simde_mm_store_ps(ctx.v59.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v53.f32)));
	// lvx128 v38,r23,r29
	ea = (ctx.r23.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r23,r27
	ea = (ctx.r23.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v33,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v47,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmsum3fp128 v43,v43,v55
	simde_mm_store_ps(ctx.v43.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v55.f32)));
	// lvx128 v55,r23,r10
	ea = (ctx.r23.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v2,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vrlimi128 v49,v34,4,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 228), 4));
	// lvx128 v34,r23,r31
	ea = (ctx.r23.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v42,v44,4,0
	simde_mm_store_ps(ctx.v42.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v44.f32), 228), 4));
	// vrlimi128 v45,v13,3,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 228), 3));
	// vrlimi128 v32,v40,1,0
	simde_mm_store_ps(ctx.v32.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v40.f32), 228), 1));
	// vsubfp128 v13,v49,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v35,v37,1,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v37.f32), 228), 1));
	// vsubfp128 v10,v42,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v63,v56,4,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 4));
	// vcfpuxws128 v49,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v45.f32)));
	// vsubfp128 v11,v32,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v9,v35,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v8,v63,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v45,v4,v57
	simde_mm_store_ps(ctx.v45.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmaddfp128 v33,v13,v1,v33
	simde_mm_store_ps(ctx.v33.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v33.f32)));
	// vmaddfp v13,v11,v1,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v42,r23,r6
	ea = (ctx.r23.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v47,v10,v1,v47
	simde_mm_store_ps(ctx.v47.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v47.f32)));
	// lvx128 v44,r23,r8
	ea = (ctx.r23.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v35,v3,11
	simde_mm_store_ps(ctx.v35.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v3.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v37,r23,r4
	ea = (ctx.r23.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v57,v53,11
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v32,r23,r11
	ea = (ctx.r23.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v40,v5,11
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v5.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vrlimi128 v59,v51,1,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v51.f32), 228), 1));
	// vcsxwfp128 v63,v38,11
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v38.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vor128 v38,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vcsxwfp128 v53,v6,11
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v6.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vor v31,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vcsxwfp128 v51,v34,11
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v34.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vor v30,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vcsxwfp128 v56,v7,11
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v7.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v42,v42,11
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v34,v55,11
	simde_mm_store_ps(ctx.v34.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vor128 v55,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vcsxwfp128 v44,v44,11
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vrlimi128 v33,v12,3,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 228), 3));
	// vcsxwfp128 v37,v37,11
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v32,v32,11
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vrlimi128 v47,v13,3,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 228), 3));
	// vsubfp128 v13,v59,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v58,v35,v58
	simde_mm_store_ps(ctx.v58.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vrlimi128 v45,v43,4,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v43.f32), 228), 4));
	// vmsum3fp128 v35,v57,v61
	simde_mm_store_ps(ctx.v35.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vmsum3fp128 v59,v40,v52
	simde_mm_store_ps(ctx.v59.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vcfpuxws128 v40,v33,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v33.f32)));
	// vmsum3fp128 v52,v63,v60
	simde_mm_store_ps(ctx.v52.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vmaddfp v11,v9,v1,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v61,v53,v41
	simde_mm_store_ps(ctx.v61.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v41.f32)));
	// vmaddfp128 v2,v8,v1,v2
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vsubfp128 v12,v45,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v60,v51,v36
	simde_mm_store_ps(ctx.v60.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v36.f32)));
	// vmsum3fp128 v33,v56,v39
	simde_mm_store_ps(ctx.v33.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v39.f32)));
	// vcfpuxws128 v63,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v47.f32)));
	// vmsum3fp128 v53,v42,v50
	simde_mm_store_ps(ctx.v53.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vmsum3fp128 v57,v34,v46
	simde_mm_store_ps(ctx.v57.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vmsum3fp128 v56,v44,v48
	simde_mm_store_ps(ctx.v56.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v48.f32)));
	// vmsum3fp128 v51,v37,v54
	simde_mm_store_ps(ctx.v51.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vmsum3fp128 v50,v32,v62
	simde_mm_store_ps(ctx.v50.f32, rex::ppc::simde_mm_vmsum3fp128(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmaddfp v13,v13,v1,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vpkswus128 v49,v40,v49
	simde_mm_store_si128((simde__m128i*)ctx.v49.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.s32), simde_mm_load_si128((simde__m128i*)ctx.v40.s32)));
	// vrlimi128 v2,v11,3,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v11.f32), 228), 3));
	// vmaddfp128 v38,v12,v1,v38
	simde_mm_store_ps(ctx.v38.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v38.f32)));
	// vrlimi128 v58,v59,4,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 228), 4));
	// vrlimi128 v35,v52,1,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v52.f32), 228), 1));
	// vcfpuxws128 v48,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v2.f32)));
	// vrlimi128 v61,v33,1,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v33.f32), 228), 1));
	// vsubfp128 v11,v58,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v10,v35,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v57,v60,4,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 228), 4));
	// vrlimi128 v53,v56,1,0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 1));
	// vsubfp128 v12,v61,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v50,v51,4,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v51.f32), 228), 4));
	// vsubfp128 v9,v57,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v38,v13,3,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 228), 3));
	// vsubfp128 v8,v53,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v13,v50,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vpkswus128 v47,v48,v63
	simde_mm_store_si128((simde__m128i*)ctx.v47.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s32), simde_mm_load_si128((simde__m128i*)ctx.v48.s32)));
	// vcfpuxws128 v45,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v38.f32)));
	// vmaddfp128 v55,v11,v1,v55
	simde_mm_store_ps(ctx.v55.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v55.f32)));
	// vmaddfp v11,v10,v1,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vpkuhus128 v46,v47,v49
	ctx.v46.u8[15] = ctx.v47.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[7];
	ctx.v46.u8[7] = ctx.v49.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[7];
	ctx.v46.u8[14] = ctx.v47.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[6];
	ctx.v46.u8[6] = ctx.v49.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[6];
	ctx.v46.u8[13] = ctx.v47.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[5];
	ctx.v46.u8[5] = ctx.v49.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[5];
	ctx.v46.u8[12] = ctx.v47.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[4];
	ctx.v46.u8[4] = ctx.v49.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[4];
	ctx.v46.u8[11] = ctx.v47.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[3];
	ctx.v46.u8[3] = ctx.v49.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[3];
	ctx.v46.u8[10] = ctx.v47.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[2];
	ctx.v46.u8[2] = ctx.v49.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[2];
	ctx.v46.u8[9] = ctx.v47.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[1];
	ctx.v46.u8[1] = ctx.v49.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[1];
	ctx.v46.u8[8] = ctx.v47.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[0];
	ctx.v46.u8[0] = ctx.v49.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[0];
	// vmaddfp v12,v12,v1,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp128 v31,v9,v1,v31
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// vmaddfp v10,v8,v1,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp128 v30,v13,v1,v30
	simde_mm_store_ps(ctx.v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v30.f32)));
	// stvlx128 v46,r0,r25
	ctx.current_instruction = 0x88173F94;
	ea = ctx.r25.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvrx128 v46,r25,r11
	ctx.current_instruction = 0x88173F98;
	ea = ctx.r25.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v46.u8[i]);
	// vrlimi128 v55,v12,3,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 228), 3));
	// vrlimi128 v31,v11,3,0
	simde_mm_store_ps(ctx.v31.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v11.f32), 228), 3));
	// vcfpuxws128 v44,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v55.f32)));
	// vrlimi128 v30,v10,3,0
	simde_mm_store_ps(ctx.v30.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v30.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v10.f32), 228), 3));
	// vcfpuxws128 v43,v31,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v31.f32)));
	// vcfpuxws128 v42,v30,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v30.f32)));
	// vpkswus128 v41,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v41.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.s32), simde_mm_load_si128((simde__m128i*)ctx.v44.s32)));
	// vpkswus128 v40,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v40.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.s32), simde_mm_load_si128((simde__m128i*)ctx.v42.s32)));
	// vpkuhus128 v39,v40,v41
	ctx.v39.u8[15] = ctx.v40.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[7];
	ctx.v39.u8[7] = ctx.v41.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[7];
	ctx.v39.u8[14] = ctx.v40.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[6];
	ctx.v39.u8[6] = ctx.v41.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[6];
	ctx.v39.u8[13] = ctx.v40.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[5];
	ctx.v39.u8[5] = ctx.v41.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[5];
	ctx.v39.u8[12] = ctx.v40.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[4];
	ctx.v39.u8[4] = ctx.v41.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[4];
	ctx.v39.u8[11] = ctx.v40.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[3];
	ctx.v39.u8[3] = ctx.v41.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[3];
	ctx.v39.u8[10] = ctx.v40.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[2];
	ctx.v39.u8[2] = ctx.v41.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[2];
	ctx.v39.u8[9] = ctx.v40.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[1];
	ctx.v39.u8[1] = ctx.v41.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[1];
	ctx.v39.u8[8] = ctx.v40.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[0];
	ctx.v39.u8[0] = ctx.v41.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[0];
	// stvlx128 v39,r0,r24
	ctx.current_instruction = 0x88173FC0;
	ea = ctx.r24.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvrx128 v39,r24,r11
	ctx.current_instruction = 0x88173FC4;
	ea = ctx.r24.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v39.u8[i]);
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88183D98) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88183D98;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88183D98) {
			switch (rex_dispatch_address) {
				case 0x88183DA0:
				case 0x88183DF8:
				case 0x88183E14:
				case 0x88183E48:
				case 0x88183E64:
				case 0x88183F28:
				case 0x88183F40:
				case 0x88183F64:
				case 0x88183F80:
				case 0x88183F94:
				case 0x88183FA8:
				case 0x88184014:
				case 0x8818402C:
				case 0x88184058:
				case 0x88184074:
				case 0x88184088:
				case 0x8818409C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88183D98;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88183DA0: goto loc_88183DA0;
		case 0x88183DF8: goto loc_88183DF8;
		case 0x88183E14: goto loc_88183E14;
		case 0x88183E48: goto loc_88183E48;
		case 0x88183E64: goto loc_88183E64;
		case 0x88183F28: goto loc_88183F28;
		case 0x88183F40: goto loc_88183F40;
		case 0x88183F64: goto loc_88183F64;
		case 0x88183F80: goto loc_88183F80;
		case 0x88183F94: goto loc_88183F94;
		case 0x88183FA8: goto loc_88183FA8;
		case 0x88184014: goto loc_88184014;
		case 0x8818402C: goto loc_8818402C;
		case 0x88184058: goto loc_88184058;
		case 0x88184074: goto loc_88184074;
		case 0x88184088: goto loc_88184088;
		case 0x8818409C: goto loc_8818409C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x88183DA0;
	__savegprlr_24(ctx, base);
loc_88183DA0:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88183DA0;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r4,15
	ctx.r9.s64 = ctx.r4.s64 + 15;
	// lwz r7,136(r3)
	ctx.current_instruction = 0x88183DA8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r10,24688(r3)
	ctx.current_instruction = 0x88183DAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lwz r8,140(r3)
	ctx.current_instruction = 0x88183DB4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// rlwinm r27,r9,0,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r6,r5,15
	ctx.r6.s64 = ctx.r5.s64 + 15;
	// lwz r9,3392(r3)
	ctx.current_instruction = 0x88183DC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3392);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// srawi r25,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r27.s32 >> 1;
	// addi r30,r11,18168
	ctx.r30.s64 = ctx.r11.s64 + 18168;
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
	// srawi r24,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r24.s64 = ctx.r27.s32 >> 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// srawi r7,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r28,r7,r9
	ctx.r28.u64 = uint32_t(ctx.r9.u32 ? ctx.r7.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x8815e510
	ctx.lr = 0x88183DF8;
	sub_8815E510(ctx, base);
loc_88183DF8:
	// stw r3,15720(r31)
	ctx.current_instruction = 0x88183DF8;
	REX_STORE_U32(ctx.r31.u32 + 15720, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,136(r31)
	ctx.current_instruction = 0x88183E00;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,140(r31)
	ctx.current_instruction = 0x88183E08;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mullw r4,r6,r4
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// bl 0x8815e510
	ctx.lr = 0x88183E14;
	sub_8815E510(ctx, base);
loc_88183E14:
	// lwz r11,15720(r31)
	ctx.current_instruction = 0x88183E14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15720);
	// stw r3,15728(r31)
	ctx.current_instruction = 0x88183E18;
	REX_STORE_U32(ctx.r31.u32 + 15728, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881840f0
	if (ctx.cr6.eq) goto loc_881840F0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881840f0
	if (ctx.cr6.eq) goto loc_881840F0;
	// lwz r11,136(r31)
	ctx.current_instruction = 0x88183E2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,140(r31)
	ctx.current_instruction = 0x88183E34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8815e510
	ctx.lr = 0x88183E48;
	sub_8815E510(ctx, base);
loc_88183E48:
	// stw r3,15724(r31)
	ctx.current_instruction = 0x88183E48;
	REX_STORE_U32(ctx.r31.u32 + 15724, ctx.r3.u32);
	// lwz r8,136(r31)
	ctx.current_instruction = 0x88183E4C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,140(r31)
	ctx.current_instruction = 0x88183E54;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mullw r4,r8,r7
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// bl 0x8815e510
	ctx.lr = 0x88183E64;
	sub_8815E510(ctx, base);
loc_88183E64:
	// lwz r6,15724(r31)
	ctx.current_instruction = 0x88183E64;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 15724);
	// stw r3,15732(r31)
	ctx.current_instruction = 0x88183E68;
	REX_STORE_U32(ctx.r31.u32 + 15732, ctx.r3.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881840f0
	if (ctx.cr6.eq) goto loc_881840F0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881840f0
	if (ctx.cr6.eq) goto loc_881840F0;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x88183E7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88183f08
	if (ctx.cr6.eq) goto loc_88183F08;
	// lwz r11,24688(r31)
	ctx.current_instruction = 0x88183E88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24688);
	// lwz r10,17376(r11)
	ctx.current_instruction = 0x88183E8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 17376);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x88183f08
	if (ctx.cr6.eq) goto loc_88183F08;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,15736(r11)
	ctx.current_instruction = 0x88183E9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 15736);
	// stw r10,15736(r31)
	ctx.current_instruction = 0x88183EA0;
	REX_STORE_U32(ctx.r31.u32 + 15736, ctx.r10.u32);
	// lwz r9,15744(r11)
	ctx.current_instruction = 0x88183EA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 15744);
	// stw r9,15744(r31)
	ctx.current_instruction = 0x88183EA8;
	REX_STORE_U32(ctx.r31.u32 + 15744, ctx.r9.u32);
	// lwz r8,15752(r11)
	ctx.current_instruction = 0x88183EAC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 15752);
	// stw r8,15752(r31)
	ctx.current_instruction = 0x88183EB0;
	REX_STORE_U32(ctx.r31.u32 + 15752, ctx.r8.u32);
	// lwz r7,15760(r11)
	ctx.current_instruction = 0x88183EB4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 15760);
	// stw r7,15760(r31)
	ctx.current_instruction = 0x88183EB8;
	REX_STORE_U32(ctx.r31.u32 + 15760, ctx.r7.u32);
	// lwz r6,15768(r11)
	ctx.current_instruction = 0x88183EBC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 15768);
	// stw r6,15768(r31)
	ctx.current_instruction = 0x88183EC0;
	REX_STORE_U32(ctx.r31.u32 + 15768, ctx.r6.u32);
	// lwz r5,15776(r11)
	ctx.current_instruction = 0x88183EC4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 15776);
	// stw r5,15776(r31)
	ctx.current_instruction = 0x88183EC8;
	REX_STORE_U32(ctx.r31.u32 + 15776, ctx.r5.u32);
	// lwz r4,15784(r11)
	ctx.current_instruction = 0x88183ECC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 15784);
	// stw r4,15784(r31)
	ctx.current_instruction = 0x88183ED0;
	REX_STORE_U32(ctx.r31.u32 + 15784, ctx.r4.u32);
	// lwz r3,15792(r11)
	ctx.current_instruction = 0x88183ED4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 15792);
	// stw r3,15792(r31)
	ctx.current_instruction = 0x88183ED8;
	REX_STORE_U32(ctx.r31.u32 + 15792, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,15800(r11)
	ctx.current_instruction = 0x88183EE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 15800);
	// stw r10,15800(r31)
	ctx.current_instruction = 0x88183EE4;
	REX_STORE_U32(ctx.r31.u32 + 15800, ctx.r10.u32);
	// lwz r9,15808(r11)
	ctx.current_instruction = 0x88183EE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 15808);
	// stw r9,15808(r31)
	ctx.current_instruction = 0x88183EEC;
	REX_STORE_U32(ctx.r31.u32 + 15808, ctx.r9.u32);
	// lwz r8,15816(r11)
	ctx.current_instruction = 0x88183EF0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 15816);
	// stw r8,15816(r31)
	ctx.current_instruction = 0x88183EF4;
	REX_STORE_U32(ctx.r31.u32 + 15816, ctx.r8.u32);
	// lwz r7,15824(r11)
	ctx.current_instruction = 0x88183EF8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 15824);
	// stw r7,15824(r31)
	ctx.current_instruction = 0x88183EFC;
	REX_STORE_U32(ctx.r31.u32 + 15824, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88183F08:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r27,31
	ctx.r10.s64 = ctx.r27.s64 + 31;
	// addi r26,r11,-1
	ctx.r26.s64 = ctx.r11.s64 + -1;
	// srawi r27,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r27.s64 = ctx.r10.s32 >> 5;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r4,r27,r26
	ctx.r4.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r26.s32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e510
	ctx.lr = 0x88183F28;
	sub_8815E510(ctx, base);
loc_88183F28:
	// stw r3,15736(r31)
	ctx.current_instruction = 0x88183F28;
	REX_STORE_U32(ctx.r31.u32 + 15736, ctx.r3.u32);
	// mullw r9,r27,r28
	ctx.r9.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r28.s32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e510
	ctx.lr = 0x88183F40;
	sub_8815E510(ctx, base);
loc_88183F40:
	// stw r3,15744(r31)
	ctx.current_instruction = 0x88183F40;
	REX_STORE_U32(ctx.r31.u32 + 15744, ctx.r3.u32);
	// addi r8,r25,31
	ctx.r8.s64 = ctx.r25.s64 + 31;
	// rlwinm r7,r26,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 31) & 0x7FFFFFFF;
	// srawi r27,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r27.s64 = ctx.r8.s32 >> 5;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r26,r7,r27
	ctx.r26.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e510
	ctx.lr = 0x88183F64;
	sub_8815E510(ctx, base);
loc_88183F64:
	// stw r3,15752(r31)
	ctx.current_instruction = 0x88183F64;
	REX_STORE_U32(ctx.r31.u32 + 15752, ctx.r3.u32);
	// clrlwi r6,r28,1
	ctx.r6.u64 = ctx.r28.u32 & 0x7FFFFFFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r27,r6,r27
	ctx.r27.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e510
	ctx.lr = 0x88183F80;
	sub_8815E510(ctx, base);
loc_88183F80:
	// stw r3,15760(r31)
	ctx.current_instruction = 0x88183F80;
	REX_STORE_U32(ctx.r31.u32 + 15760, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e510
	ctx.lr = 0x88183F94;
	sub_8815E510(ctx, base);
loc_88183F94:
	// stw r3,15768(r31)
	ctx.current_instruction = 0x88183F94;
	REX_STORE_U32(ctx.r31.u32 + 15768, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e510
	ctx.lr = 0x88183FA8;
	sub_8815E510(ctx, base);
loc_88183FA8:
	// lwz r5,15736(r31)
	ctx.current_instruction = 0x88183FA8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 15736);
	// stw r3,15776(r31)
	ctx.current_instruction = 0x88183FAC;
	REX_STORE_U32(ctx.r31.u32 + 15776, ctx.r3.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x881840f0
	if (ctx.cr6.eq) goto loc_881840F0;
	// lwz r11,15744(r31)
	ctx.current_instruction = 0x88183FB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881840f0
	if (ctx.cr6.eq) goto loc_881840F0;
	// lwz r11,15752(r31)
	ctx.current_instruction = 0x88183FC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881840f0
	if (ctx.cr6.eq) goto loc_881840F0;
	// lwz r11,15760(r31)
	ctx.current_instruction = 0x88183FD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881840f0
	if (ctx.cr6.eq) goto loc_881840F0;
	// lwz r11,15768(r31)
	ctx.current_instruction = 0x88183FDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881840f0
	if (ctx.cr6.eq) goto loc_881840F0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881840f0
	if (ctx.cr6.eq) goto loc_881840F0;
	// rlwinm r26,r28,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r28,r24,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r26,31
	ctx.r11.s64 = ctx.r26.s64 + 31;
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// srawi r27,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 5;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r4,r10,r27
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e510
	ctx.lr = 0x88184014;
	sub_8815E510(ctx, base);
loc_88184014:
	// stw r3,15784(r31)
	ctx.current_instruction = 0x88184014;
	REX_STORE_U32(ctx.r31.u32 + 15784, ctx.r3.u32);
	// mullw r9,r27,r24
	ctx.r9.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r24.s32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e510
	ctx.lr = 0x8818402C;
	sub_8815E510(ctx, base);
loc_8818402C:
	// stw r3,15792(r31)
	ctx.current_instruction = 0x8818402C;
	REX_STORE_U32(ctx.r31.u32 + 15792, ctx.r3.u32);
	// srawi r11,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 1;
	// addi r8,r28,-1
	ctx.r8.s64 = ctx.r28.s64 + -1;
	// addi r7,r11,31
	ctx.r7.s64 = ctx.r11.s64 + 31;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// srawi r27,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r27.s64 = ctx.r7.s32 >> 5;
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mullw r26,r6,r27
	ctx.r26.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8815e510
	ctx.lr = 0x88184058;
	sub_8815E510(ctx, base);
loc_88184058:
	// stw r3,15800(r31)
	ctx.current_instruction = 0x88184058;
	REX_STORE_U32(ctx.r31.u32 + 15800, ctx.r3.u32);
	// srawi r4,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r28.s32 >> 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r28,r4,r27
	ctx.r28.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e510
	ctx.lr = 0x88184074;
	sub_8815E510(ctx, base);
loc_88184074:
	// stw r3,15808(r31)
	ctx.current_instruction = 0x88184074;
	REX_STORE_U32(ctx.r31.u32 + 15808, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e510
	ctx.lr = 0x88184088;
	sub_8815E510(ctx, base);
loc_88184088:
	// stw r3,15816(r31)
	ctx.current_instruction = 0x88184088;
	REX_STORE_U32(ctx.r31.u32 + 15816, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e510
	ctx.lr = 0x8818409C;
	sub_8815E510(ctx, base);
loc_8818409C:
	// lwz r11,15784(r31)
	ctx.current_instruction = 0x8818409C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15784);
	// stw r3,15824(r31)
	ctx.current_instruction = 0x881840A0;
	REX_STORE_U32(ctx.r31.u32 + 15824, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881840f0
	if (ctx.cr6.eq) goto loc_881840F0;
	// lwz r11,15792(r31)
	ctx.current_instruction = 0x881840AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881840f0
	if (ctx.cr6.eq) goto loc_881840F0;
	// lwz r11,15800(r31)
	ctx.current_instruction = 0x881840B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881840f0
	if (ctx.cr6.eq) goto loc_881840F0;
	// lwz r11,15808(r31)
	ctx.current_instruction = 0x881840C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15808);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881840f0
	if (ctx.cr6.eq) goto loc_881840F0;
	// lwz r11,15816(r31)
	ctx.current_instruction = 0x881840D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881840f0
	if (ctx.cr6.eq) goto loc_881840F0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881840f0
	if (ctx.cr6.eq) goto loc_881840F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_881840F0:
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88191980) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88191980;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88191980) {
			switch (rex_dispatch_address) {
				case 0x88191988:
				case 0x88191AFC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88191980;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88191988: goto loc_88191988;
		case 0x88191AFC: goto loc_88191AFC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88191988;
	__savegprlr_14(ctx, base);
loc_88191988:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x88191988;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.current_instruction = 0x8819198C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r8,300(r1)
	ctx.current_instruction = 0x88191998;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r28,r6,-8
	ctx.r28.s64 = ctx.r6.s64 + -8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88191aa4
	if (ctx.cr6.eq) goto loc_88191AA4;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r10,16(r3)
	ctx.current_instruction = 0x881919BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r7,-2
	ctx.r11.s64 = ctx.r7.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881919C8:
	// lhz r8,2(r11)
	ctx.current_instruction = 0x881919C8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lwz r9,0(r30)
	ctx.current_instruction = 0x881919CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r6,r7,r10
	ctx.current_instruction = 0x881919D8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stb r6,0(r31)
	ctx.current_instruction = 0x881919DC;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r6.u8);
	// lwz r9,0(r30)
	ctx.current_instruction = 0x881919E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r5,4(r11)
	ctx.current_instruction = 0x881919E4;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r3,r4,r10
	ctx.current_instruction = 0x881919F0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// stb r3,1(r31)
	ctx.current_instruction = 0x881919F4;
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r3.u8);
	// lwz r9,0(r30)
	ctx.current_instruction = 0x881919F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r8,6(r11)
	ctx.current_instruction = 0x881919FC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r6,r7,r10
	ctx.current_instruction = 0x88191A08;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stb r6,2(r31)
	ctx.current_instruction = 0x88191A0C;
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r6.u8);
	// lwz r9,0(r30)
	ctx.current_instruction = 0x88191A10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r5,8(r11)
	ctx.current_instruction = 0x88191A14;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r3,r4,r10
	ctx.current_instruction = 0x88191A20;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// stb r3,3(r31)
	ctx.current_instruction = 0x88191A24;
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r3.u8);
	// lwz r9,0(r30)
	ctx.current_instruction = 0x88191A28;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r8,10(r11)
	ctx.current_instruction = 0x88191A2C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r6,r7,r10
	ctx.current_instruction = 0x88191A38;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stb r6,4(r31)
	ctx.current_instruction = 0x88191A3C;
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r6.u8);
	// lwz r9,0(r30)
	ctx.current_instruction = 0x88191A40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r5,12(r11)
	ctx.current_instruction = 0x88191A44;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r3,r4,r10
	ctx.current_instruction = 0x88191A50;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// stb r3,5(r31)
	ctx.current_instruction = 0x88191A54;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r3.u8);
	// lwz r9,0(r30)
	ctx.current_instruction = 0x88191A58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r8,14(r11)
	ctx.current_instruction = 0x88191A5C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r6,r7,r10
	ctx.current_instruction = 0x88191A68;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stb r6,6(r31)
	ctx.current_instruction = 0x88191A6C;
	REX_STORE_U8(ctx.r31.u32 + 6, ctx.r6.u8);
	// lwz r8,0(r30)
	ctx.current_instruction = 0x88191A70;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhzu r9,16(r11)
	ctx.current_instruction = 0x88191A74;
	ea = 16 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lbzx r4,r5,r10
	ctx.current_instruction = 0x88191A84;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// stb r4,7(r31)
	ctx.current_instruction = 0x88191A88;
	REX_STORE_U8(ctx.r31.u32 + 7, ctx.r4.u8);
	// add r31,r28,r9
	ctx.r31.u64 = ctx.r28.u64 + ctx.r9.u64;
	// bdnz 0x881919c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881919C8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x88192bd8
	if (!ctx.cr6.eq) goto loc_88192BD8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88191AA4:
	// cmplwi cr6,r4,11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11, ctx.xer);
	// bgt cr6,0x88192bd0
	if (ctx.cr6.gt) goto loc_88192BD0;
	// lis r12,-30695
	ctx.r12.s64 = -2011627520;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6852
	ctx.r12.s64 = ctx.r12.s64 + 6852;
	// lwzx r0,r12,r0
	ctx.current_instruction = 0x88191AB8;
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_88191AF4;
	case 1:
		goto loc_88192318;
	case 2:
		goto loc_88192488;
	case 3:
		goto loc_88192594;
	case 4:
		goto loc_88191E00;
	case 5:
		goto loc_881926A4;
	case 6:
		goto loc_88192954;
	case 7:
		goto loc_8819274C;
	case 8:
		goto loc_88191CFC;
	case 9:
		goto loc_88192A60;
	case 10:
		goto loc_88191FA0;
	case 11:
		goto loc_88192150;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_88191AF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88191418
	ctx.lr = 0x88191AFC;
	sub_88191418(ctx, base);
loc_88191AFC:
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// addi r9,r29,-2
	ctx.r9.s64 = ctx.r29.s64 + -2;
	// addi r11,r11,-4656
	ctx.r11.s64 = ctx.r11.s64 + -4656;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,40(r30)
	ctx.current_instruction = 0x88191B14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
loc_88191B24:
	// lwz r4,44(r30)
	ctx.current_instruction = 0x88191B24;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lhzu r29,2(r8)
	ctx.current_instruction = 0x88191B28;
	ea = 2 + ctx.r8.u32;
	ctx.r29.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// lhz r5,6(r11)
	ctx.current_instruction = 0x88191B2C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r6,4(r11)
	ctx.current_instruction = 0x88191B30;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r7,r5,r29
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// lhz r3,2(r9)
	ctx.current_instruction = 0x88191B38;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// lhz r27,0(r4)
	ctx.current_instruction = 0x88191B3C;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lwz r5,0(r30)
	ctx.current_instruction = 0x88191B40;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mullw r6,r27,r6
	ctx.r6.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r6.s32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// add r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r6,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 16;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r6,r7,r5
	ctx.current_instruction = 0x88191B5C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// stb r6,0(r31)
	ctx.current_instruction = 0x88191B60;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r6.u8);
	// lhz r26,2(r4)
	ctx.current_instruction = 0x88191B64;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r6,8(r11)
	ctx.current_instruction = 0x88191B68;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r3,4(r9)
	ctx.current_instruction = 0x88191B6C;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// lhz r5,10(r11)
	ctx.current_instruction = 0x88191B70;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// mullw r7,r5,r29
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// mullw r6,r26,r6
	ctx.r6.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r6.s32);
	// lwz r27,0(r30)
	ctx.current_instruction = 0x88191B7C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r6,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 16;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r7,r3,r27
	ctx.current_instruction = 0x88191B94;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r27.u32);
	// stb r7,1(r31)
	ctx.current_instruction = 0x88191B98;
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r7.u8);
	// lhz r26,14(r11)
	ctx.current_instruction = 0x88191B9C;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r3,6(r9)
	ctx.current_instruction = 0x88191BA0;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// lwz r27,0(r30)
	ctx.current_instruction = 0x88191BA4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r5,4(r4)
	ctx.current_instruction = 0x88191BA8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r7,12(r11)
	ctx.current_instruction = 0x88191BAC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// mullw r6,r5,r7
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// mullw r7,r26,r29
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r6,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 16;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r7,r3,r27
	ctx.current_instruction = 0x88191BCC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r27.u32);
	// stb r7,2(r31)
	ctx.current_instruction = 0x88191BD0;
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r7.u8);
	// lhz r3,8(r9)
	ctx.current_instruction = 0x88191BD4;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// lwz r27,0(r30)
	ctx.current_instruction = 0x88191BD8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r26,18(r11)
	ctx.current_instruction = 0x88191BDC;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// lhz r5,6(r4)
	ctx.current_instruction = 0x88191BE0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 6);
	// lhz r7,16(r11)
	ctx.current_instruction = 0x88191BE4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// mullw r6,r5,r7
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// mullw r7,r26,r29
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r6,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 16;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r7,r3,r27
	ctx.current_instruction = 0x88191C04;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r27.u32);
	// stb r7,3(r31)
	ctx.current_instruction = 0x88191C08;
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r7.u8);
	// lhz r7,22(r11)
	ctx.current_instruction = 0x88191C0C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 22);
	// lhz r5,10(r9)
	ctx.current_instruction = 0x88191C10;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + 10);
	// lwz r27,0(r30)
	ctx.current_instruction = 0x88191C14;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r3,8(r4)
	ctx.current_instruction = 0x88191C18;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + 8);
	// lhz r6,20(r11)
	ctx.current_instruction = 0x88191C1C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// mullw r6,r3,r6
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r7,r29
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// add r6,r3,r10
	ctx.r6.u64 = ctx.r3.u64 + ctx.r10.u64;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r3,r5,r27
	ctx.current_instruction = 0x88191C3C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r27.u32);
	// stb r3,4(r31)
	ctx.current_instruction = 0x88191C40;
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
	// lhz r27,26(r11)
	ctx.current_instruction = 0x88191C44;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 26);
	// lhz r5,12(r9)
	ctx.current_instruction = 0x88191C48;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + 12);
	// lhz r26,24(r11)
	ctx.current_instruction = 0x88191C4C;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// lhz r6,10(r4)
	ctx.current_instruction = 0x88191C50;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + 10);
	// mullw r6,r6,r26
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r26.s32);
	// mullw r7,r27,r29
	ctx.r7.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r29.s32);
	// lwz r3,0(r30)
	ctx.current_instruction = 0x88191C5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r6,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 16;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r6,r7,r3
	ctx.current_instruction = 0x88191C74;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// stb r6,5(r31)
	ctx.current_instruction = 0x88191C78;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r6.u8);
	// lhz r5,14(r9)
	ctx.current_instruction = 0x88191C7C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + 14);
	// lwz r3,0(r30)
	ctx.current_instruction = 0x88191C80;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r6,28(r11)
	ctx.current_instruction = 0x88191C84;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// lhz r27,12(r4)
	ctx.current_instruction = 0x88191C88;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r4.u32 + 12);
	// lhz r7,30(r11)
	ctx.current_instruction = 0x88191C8C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// mullw r6,r27,r6
	ctx.r6.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r7,r29
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r6,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 16;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r6,r7,r3
	ctx.current_instruction = 0x88191CAC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// stb r6,6(r31)
	ctx.current_instruction = 0x88191CB0;
	REX_STORE_U8(ctx.r31.u32 + 6, ctx.r6.u8);
	// lhz r7,34(r11)
	ctx.current_instruction = 0x88191CB4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// lhz r4,14(r4)
	ctx.current_instruction = 0x88191CB8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + 14);
	// lhzu r27,32(r11)
	ctx.current_instruction = 0x88191CBC;
	ea = 32 + ctx.r11.u32;
	ctx.r27.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lwz r3,0(r30)
	ctx.current_instruction = 0x88191CC0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhzu r6,16(r9)
	ctx.current_instruction = 0x88191CC4;
	ea = 16 + ctx.r9.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mullw r7,r7,r29
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// mullw r6,r4,r27
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r7,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 16;
	// add r6,r7,r5
	ctx.r6.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// lbzx r5,r6,r3
	ctx.current_instruction = 0x88191CE8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// stb r5,7(r31)
	ctx.current_instruction = 0x88191CEC;
	REX_STORE_U8(ctx.r31.u32 + 7, ctx.r5.u8);
	// add r31,r28,r7
	ctx.r31.u64 = ctx.r28.u64 + ctx.r7.u64;
	// bdnz 0x88191b24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88191B24;
	// b 0x88192bd0
	goto loc_88192BD0;
loc_88191CFC:
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,4(r30)
	ctx.current_instruction = 0x88191D00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,20(r30)
	ctx.current_instruction = 0x88191D04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88191D14:
	// lbz r7,0(r9)
	ctx.current_instruction = 0x88191D14;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbzu r10,-1(r8)
	ctx.current_instruction = 0x88191D18;
	ea = -1 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lhz r5,2(r11)
	ctx.current_instruction = 0x88191D1C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r6,0(r30)
	ctx.current_instruction = 0x88191D24;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// lbzx r7,r3,r10
	ctx.current_instruction = 0x88191D38;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// stb r7,0(r31)
	ctx.current_instruction = 0x88191D3C;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r7.u8);
	// lhz r6,4(r11)
	ctx.current_instruction = 0x88191D40;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88191D48;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r4,r5,r10
	ctx.current_instruction = 0x88191D50;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// stb r4,1(r31)
	ctx.current_instruction = 0x88191D54;
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r4.u8);
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88191D58;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r3,6(r11)
	ctx.current_instruction = 0x88191D5C;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r6,r7,r10
	ctx.current_instruction = 0x88191D68;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stb r6,2(r31)
	ctx.current_instruction = 0x88191D6C;
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r6.u8);
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88191D70;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r5,8(r11)
	ctx.current_instruction = 0x88191D74;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// add r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r3,r4,r10
	ctx.current_instruction = 0x88191D80;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// stb r3,3(r31)
	ctx.current_instruction = 0x88191D84;
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r3.u8);
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88191D88;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r6,10(r11)
	ctx.current_instruction = 0x88191D8C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r4,r5,r10
	ctx.current_instruction = 0x88191D98;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// stb r4,4(r31)
	ctx.current_instruction = 0x88191D9C;
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r4.u8);
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88191DA0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r3,12(r11)
	ctx.current_instruction = 0x88191DA4;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r6,r7,r10
	ctx.current_instruction = 0x88191DB0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stb r6,5(r31)
	ctx.current_instruction = 0x88191DB4;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r6.u8);
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88191DB8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r5,14(r11)
	ctx.current_instruction = 0x88191DBC;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// add r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r3,r4,r10
	ctx.current_instruction = 0x88191DC8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// stb r3,6(r31)
	ctx.current_instruction = 0x88191DCC;
	REX_STORE_U8(ctx.r31.u32 + 6, ctx.r3.u8);
	// lwz r6,0(r30)
	ctx.current_instruction = 0x88191DD0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhzu r7,16(r11)
	ctx.current_instruction = 0x88191DD4;
	ea = 16 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lbzx r6,r7,r10
	ctx.current_instruction = 0x88191DE0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stb r6,7(r31)
	ctx.current_instruction = 0x88191DE8;
	REX_STORE_U8(ctx.r31.u32 + 7, ctx.r6.u8);
	// lwz r7,8(r30)
	ctx.current_instruction = 0x88191DEC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// bdnz 0x88191d14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88191D14;
	// b 0x88192bd0
	goto loc_88192BD0;
loc_88191E00:
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r3,24(r30)
	ctx.current_instruction = 0x88191E04;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lbz r9,16(r3)
	ctx.current_instruction = 0x88191E10;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// lbz r10,0(r3)
	ctx.current_instruction = 0x88191E14;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r7,17(r3)
	ctx.current_instruction = 0x88191E18;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 17);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r8,1(r3)
	ctx.current_instruction = 0x88191E20;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r6,18(r3)
	ctx.current_instruction = 0x88191E24;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 18);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r9,2(r3)
	ctx.current_instruction = 0x88191E2C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// lbz r7,19(r3)
	ctx.current_instruction = 0x88191E34;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 19);
	// lbz r10,3(r3)
	ctx.current_instruction = 0x88191E38;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r27,r8,1
	ctx.r27.s64 = ctx.r8.s64 + 1;
	// lbz r8,4(r3)
	ctx.current_instruction = 0x88191E44;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lbz r6,20(r3)
	ctx.current_instruction = 0x88191E4C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 20);
	// lbz r7,21(r3)
	ctx.current_instruction = 0x88191E50;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 21);
	// addi r26,r9,1
	ctx.r26.s64 = ctx.r9.s64 + 1;
	// lbz r10,5(r3)
	ctx.current_instruction = 0x88191E58;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lbz r8,22(r3)
	ctx.current_instruction = 0x88191E60;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 22);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lbz r9,6(r3)
	ctx.current_instruction = 0x88191E68;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 6);
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lbz r7,23(r3)
	ctx.current_instruction = 0x88191E70;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 23);
	// srawi r29,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 1;
	// lbz r10,7(r3)
	ctx.current_instruction = 0x88191E78;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 7);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r8,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r27.s32 >> 1;
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
	// srawi r6,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r26.s32 >> 1;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r27,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r7.s32 >> 1;
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// srawi r26,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r10.s32 >> 1;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// clrlwi r5,r27,24
	ctx.r5.u64 = ctx.r27.u32 & 0xFF;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r3,r26,24
	ctx.r3.u64 = ctx.r26.u32 & 0xFF;
loc_88191ED0:
	// lhz r10,2(r11)
	ctx.current_instruction = 0x88191ED0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lwz r27,0(r30)
	ctx.current_instruction = 0x88191ED4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbzx r10,r10,r27
	ctx.current_instruction = 0x88191EE0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// stb r10,0(r31)
	ctx.current_instruction = 0x88191EE4;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// lhz r10,4(r11)
	ctx.current_instruction = 0x88191EE8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r27,0(r30)
	ctx.current_instruction = 0x88191EF4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lbzx r10,r10,r27
	ctx.current_instruction = 0x88191EF8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// stb r10,1(r31)
	ctx.current_instruction = 0x88191EFC;
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// lwz r27,0(r30)
	ctx.current_instruction = 0x88191F00;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r10,6(r11)
	ctx.current_instruction = 0x88191F04;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r10,r10,r27
	ctx.current_instruction = 0x88191F10;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// stb r10,2(r31)
	ctx.current_instruction = 0x88191F14;
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// lwz r27,0(r30)
	ctx.current_instruction = 0x88191F18;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r10,8(r11)
	ctx.current_instruction = 0x88191F1C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbzx r10,r10,r27
	ctx.current_instruction = 0x88191F28;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// stb r10,3(r31)
	ctx.current_instruction = 0x88191F2C;
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r10.u8);
	// lwz r27,0(r30)
	ctx.current_instruction = 0x88191F30;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r10,10(r11)
	ctx.current_instruction = 0x88191F34;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbzx r10,r10,r27
	ctx.current_instruction = 0x88191F40;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// stb r10,4(r31)
	ctx.current_instruction = 0x88191F44;
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// lwz r27,0(r30)
	ctx.current_instruction = 0x88191F48;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r10,12(r11)
	ctx.current_instruction = 0x88191F4C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbzx r10,r10,r27
	ctx.current_instruction = 0x88191F58;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// stb r10,5(r31)
	ctx.current_instruction = 0x88191F5C;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// lwz r27,0(r30)
	ctx.current_instruction = 0x88191F60;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r10,14(r11)
	ctx.current_instruction = 0x88191F64;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbzx r10,r10,r27
	ctx.current_instruction = 0x88191F70;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// stb r10,6(r31)
	ctx.current_instruction = 0x88191F74;
	REX_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// lwz r27,0(r30)
	ctx.current_instruction = 0x88191F78;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhzu r10,16(r11)
	ctx.current_instruction = 0x88191F7C;
	ea = 16 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r26,r10,r3
	ctx.r26.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// lbzx r27,r26,r27
	ctx.current_instruction = 0x88191F8C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r27.u32);
	// stb r27,7(r31)
	ctx.current_instruction = 0x88191F90;
	REX_STORE_U8(ctx.r31.u32 + 7, ctx.r27.u8);
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// bdnz 0x88191ed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88191ED0;
	// b 0x88192bd0
	goto loc_88192BD0;
loc_88191FA0:
	// lwz r27,24(r30)
	ctx.current_instruction = 0x88191FA0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// lwz r8,20(r30)
	ctx.current_instruction = 0x88191FAC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lbz r10,6(r27)
	ctx.current_instruction = 0x88191FB0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + 6);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lbz r9,3(r27)
	ctx.current_instruction = 0x88191FB8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + 3);
	// lbz r7,5(r27)
	ctx.current_instruction = 0x88191FBC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r27.u32 + 5);
	// rotlwi r6,r10,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lbz r26,7(r27)
	ctx.current_instruction = 0x88191FC4;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r27.u32 + 7);
	// rotlwi r4,r9,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// rotlwi r29,r7,2
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lbz r5,2(r27)
	ctx.current_instruction = 0x88191FD0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r27.u32 + 2);
	// add r25,r10,r6
	ctx.r25.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbz r3,4(r27)
	ctx.current_instruction = 0x88191FD8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r27.u32 + 4);
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lbz r6,1(r27)
	ctx.current_instruction = 0x88191FE0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r27.u32 + 1);
	// rotlwi r21,r26,3
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r26.u32, 3);
	// add r9,r7,r29
	ctx.r9.u64 = ctx.r7.u64 + ctx.r29.u64;
	// rlwinm r7,r25,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r5,2
	ctx.r4.s64 = ctx.r5.s64 + 2;
	// addi r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 1;
	// subf r25,r26,r21
	ctx.r25.u64 = ctx.r21.u64 - ctx.r26.u64;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r9,4
	ctx.r27.s64 = ctx.r9.s64 + 4;
	// addi r26,r7,4
	ctx.r26.s64 = ctx.r7.s64 + 4;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_88192018:
	// lbzu r10,-1(r8)
	ctx.current_instruction = 0x88192018;
	ea = -1 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lhz r6,2(r11)
	ctx.current_instruction = 0x8819201C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r9,r10,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88192024;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// addi r21,r9,4
	ctx.r21.s64 = ctx.r9.s64 + 4;
	// add r20,r6,r7
	ctx.r20.u64 = ctx.r6.u64 + ctx.r7.u64;
	// srawi r7,r21,3
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r21.s32 >> 3;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r6,r21,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r21.u64;
	// add r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lbzx r7,r20,r7
	ctx.current_instruction = 0x88192048;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r7.u32);
	// subf r10,r21,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r21.u64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// add r20,r4,r10
	ctx.r20.u64 = ctx.r4.u64 + ctx.r10.u64;
	// subf r10,r21,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r21.u64;
	// stb r7,0(r31)
	ctx.current_instruction = 0x8819205C;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r7.u8);
	// add r19,r3,r10
	ctx.r19.u64 = ctx.r3.u64 + ctx.r10.u64;
	// subf r10,r21,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r21.u64;
	// add r18,r29,r10
	ctx.r18.u64 = ctx.r29.u64 + ctx.r10.u64;
	// subf r10,r21,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r21.u64;
	// add r17,r27,r10
	ctx.r17.u64 = ctx.r27.u64 + ctx.r10.u64;
	// subf r10,r21,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r21.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r21,r26,r10
	ctx.r21.u64 = ctx.r26.u64 + ctx.r10.u64;
	// lwz r10,0(r30)
	ctx.current_instruction = 0x88192080;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r7,4(r11)
	ctx.current_instruction = 0x88192084;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lbzx r9,r7,r9
	ctx.current_instruction = 0x88192090;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// srawi r10,r20,3
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r20.s32 >> 3;
	// stb r9,1(r31)
	ctx.current_instruction = 0x88192098;
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// lhz r7,6(r11)
	ctx.current_instruction = 0x8819209C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lwz r9,0(r30)
	ctx.current_instruction = 0x881920A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbzx r7,r9,r10
	ctx.current_instruction = 0x881920AC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// srawi r10,r19,3
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r19.s32 >> 3;
	// stb r7,2(r31)
	ctx.current_instruction = 0x881920B4;
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r7.u8);
	// lhz r9,8(r11)
	ctx.current_instruction = 0x881920B8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lwz r9,0(r30)
	ctx.current_instruction = 0x881920C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbzx r9,r7,r10
	ctx.current_instruction = 0x881920C8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// srawi r10,r18,3
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r18.s32 >> 3;
	// stb r9,3(r31)
	ctx.current_instruction = 0x881920D0;
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r9.u8);
	// lhz r7,10(r11)
	ctx.current_instruction = 0x881920D4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lwz r9,0(r30)
	ctx.current_instruction = 0x881920DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbzx r7,r9,r10
	ctx.current_instruction = 0x881920E4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// srawi r10,r17,3
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r17.s32 >> 3;
	// stb r7,4(r31)
	ctx.current_instruction = 0x881920EC;
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
	// lwz r9,0(r30)
	ctx.current_instruction = 0x881920F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r7,12(r11)
	ctx.current_instruction = 0x881920F4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbzx r7,r9,r10
	ctx.current_instruction = 0x88192100;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// srawi r10,r21,3
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r21.s32 >> 3;
	// stb r7,5(r31)
	ctx.current_instruction = 0x88192108;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r7.u8);
	// srawi r9,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 3;
	// lwz r6,0(r30)
	ctx.current_instruction = 0x88192110;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r7,14(r11)
	ctx.current_instruction = 0x88192114;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lbzx r10,r6,r10
	ctx.current_instruction = 0x88192120;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// stb r10,6(r31)
	ctx.current_instruction = 0x88192124;
	REX_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88192128;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhzu r10,16(r11)
	ctx.current_instruction = 0x8819212C;
	ea = 16 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// lbzx r9,r6,r7
	ctx.current_instruction = 0x8819213C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// stb r9,7(r31)
	ctx.current_instruction = 0x88192140;
	REX_STORE_U8(ctx.r31.u32 + 7, ctx.r9.u8);
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// bdnz 0x88192018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88192018;
	// b 0x88192bd0
	goto loc_88192BD0;
loc_88192150:
	// lwz r4,24(r30)
	ctx.current_instruction = 0x88192150;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// lwz r26,20(r30)
	ctx.current_instruction = 0x8819215C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lbz r3,0(r4)
	ctx.current_instruction = 0x88192164;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lbz r10,1(r4)
	ctx.current_instruction = 0x8819216C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r9,r3,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// lbz r3,5(r4)
	ctx.current_instruction = 0x88192174;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// rotlwi r8,r10,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// lbz r7,2(r4)
	ctx.current_instruction = 0x8819217C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r6,3(r4)
	ctx.current_instruction = 0x88192180;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r5,4(r4)
	ctx.current_instruction = 0x88192184;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// rotlwi r7,r7,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// lbz r10,6(r4)
	ctx.current_instruction = 0x8819218C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// rotlwi r6,r6,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// lbz r29,7(r4)
	ctx.current_instruction = 0x88192194;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r4.u32 + 7);
	// rotlwi r4,r3,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// rotlwi r5,r5,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// rotlwi r3,r10,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// rotlwi r29,r29,3
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 3);
loc_881921A8:
	// lbzu r10,-1(r26)
	ctx.current_instruction = 0x881921A8;
	ea = -1 + ctx.r26.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r26.u32 = ea;
	// lhz r25,2(r11)
	ctx.current_instruction = 0x881921AC;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// lwz r24,0(r30)
	ctx.current_instruction = 0x881921B4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r21,24(r30)
	ctx.current_instruction = 0x881921B8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lbz r20,0(r21)
	ctx.current_instruction = 0x881921BC;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r24,r25,r24
	ctx.r24.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r25,r9,r10
	ctx.r25.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r9,r20,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r20.u64;
	// srawi r25,r25,3
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 3;
	// add r19,r8,r10
	ctx.r19.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r18,r7,r10
	ctx.r18.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r17,r6,r10
	ctx.r17.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r16,r5,r10
	ctx.r16.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lbzx r24,r24,r25
	ctx.current_instruction = 0x881921E8;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r25.u32);
	// add r15,r4,r10
	ctx.r15.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r14,r3,r10
	ctx.r14.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// srawi r25,r19,3
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7) != 0);
	ctx.r25.s64 = ctx.r19.s32 >> 3;
	// stw r10,80(r1)
	ctx.current_instruction = 0x881921FC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stb r24,0(r31)
	ctx.current_instruction = 0x88192200;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
	// lhz r20,4(r11)
	ctx.current_instruction = 0x88192204;
	ctx.r20.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lbz r24,1(r21)
	ctx.current_instruction = 0x88192208;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r21.u32 + 1);
	// subf r8,r24,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r24.u64;
	// extsh r10,r20
	ctx.r10.s64 = ctx.r20.s16;
	// lwz r24,0(r30)
	ctx.current_instruction = 0x88192214;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r24,r10,r24
	ctx.r24.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbzx r25,r24,r25
	ctx.current_instruction = 0x8819221C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r25.u32);
	// srawi r10,r18,3
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r18.s32 >> 3;
	// stb r25,1(r31)
	ctx.current_instruction = 0x88192224;
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r25.u8);
	// lhz r25,6(r11)
	ctx.current_instruction = 0x88192228;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// lwz r24,0(r30)
	ctx.current_instruction = 0x88192230;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r20,2(r21)
	ctx.current_instruction = 0x88192234;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r21.u32 + 2);
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// subf r7,r20,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r20.u64;
	// lbzx r25,r25,r10
	ctx.current_instruction = 0x88192240;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r10.u32);
	// srawi r10,r17,3
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r17.s32 >> 3;
	// stb r25,2(r31)
	ctx.current_instruction = 0x88192248;
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r25.u8);
	// lwz r24,0(r30)
	ctx.current_instruction = 0x8819224C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r25,8(r11)
	ctx.current_instruction = 0x88192250;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// lbz r20,3(r21)
	ctx.current_instruction = 0x8819225C;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r21.u32 + 3);
	// subf r6,r20,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r20.u64;
	// lbzx r25,r25,r10
	ctx.current_instruction = 0x88192264;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r10.u32);
	// srawi r10,r16,3
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r16.s32 >> 3;
	// stb r25,3(r31)
	ctx.current_instruction = 0x8819226C;
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r25.u8);
	// lhz r25,10(r11)
	ctx.current_instruction = 0x88192270;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// lwz r24,0(r30)
	ctx.current_instruction = 0x88192278;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r20,4(r21)
	ctx.current_instruction = 0x8819227C;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r21.u32 + 4);
	// subf r5,r20,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r20.u64;
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// lwz r20,80(r1)
	ctx.current_instruction = 0x88192288;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbzx r25,r25,r10
	ctx.current_instruction = 0x8819228C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r10.u32);
	// srawi r10,r15,3
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r15.s32 >> 3;
	// stb r25,4(r31)
	ctx.current_instruction = 0x88192294;
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r25.u8);
	// lhz r25,12(r11)
	ctx.current_instruction = 0x88192298;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// lwz r24,0(r30)
	ctx.current_instruction = 0x881922A0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// lbz r24,5(r21)
	ctx.current_instruction = 0x881922A8;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r21.u32 + 5);
	// subf r4,r24,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r24.u64;
	// lbzx r25,r25,r10
	ctx.current_instruction = 0x881922B0;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r10.u32);
	// srawi r10,r14,3
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r14.s32 >> 3;
	// stb r25,5(r31)
	ctx.current_instruction = 0x881922B8;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r25.u8);
	// lwz r24,0(r30)
	ctx.current_instruction = 0x881922BC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r25,14(r11)
	ctx.current_instruction = 0x881922C0;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// lbz r24,6(r21)
	ctx.current_instruction = 0x881922CC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r21.u32 + 6);
	// lbzx r25,r25,r10
	ctx.current_instruction = 0x881922D0;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r10.u32);
	// srawi r10,r20,3
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r20.s32 >> 3;
	// stb r25,6(r31)
	ctx.current_instruction = 0x881922D8;
	REX_STORE_U8(ctx.r31.u32 + 6, ctx.r25.u8);
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r24.u64;
	// lhzu r25,16(r11)
	ctx.current_instruction = 0x881922E0;
	ea = 16 + ctx.r11.u32;
	ctx.r25.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// lbz r24,7(r21)
	ctx.current_instruction = 0x881922E8;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r21.u32 + 7);
	// subf r29,r24,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r24.u64;
	// lwz r24,0(r30)
	ctx.current_instruction = 0x881922F0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// lbzx r25,r25,r10
	ctx.current_instruction = 0x881922FC;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r10.u32);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stb r25,7(r31)
	ctx.current_instruction = 0x88192304;
	REX_STORE_U8(ctx.r31.u32 + 7, ctx.r25.u8);
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// bdnz 0x881921a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881921A8;
	// lwz r24,300(r1)
	ctx.current_instruction = 0x88192310;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// b 0x88192bd0
	goto loc_88192BD0;
loc_88192318:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,25392
	ctx.r11.s64 = ctx.r11.s64 + 25392;
	// addi r10,r29,-2
	ctx.r10.s64 = ctx.r29.s64 + -2;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88192334:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x88192334;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r7,24(r30)
	ctx.current_instruction = 0x88192338;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// lhz r5,2(r10)
	ctx.current_instruction = 0x88192340;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lwz r4,0(r30)
	ctx.current_instruction = 0x88192344;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r9,r6,r7
	ctx.current_instruction = 0x8819234C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r9,r3,r4
	ctx.current_instruction = 0x88192354;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// stb r9,0(r31)
	ctx.current_instruction = 0x88192358;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lwz r4,24(r30)
	ctx.current_instruction = 0x8819235C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88192360;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r6,4(r10)
	ctx.current_instruction = 0x88192364;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// lbz r5,1(r11)
	ctx.current_instruction = 0x8819236C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// lbzx r9,r3,r4
	ctx.current_instruction = 0x88192374;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r7
	ctx.current_instruction = 0x8819237C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// stb r8,1(r31)
	ctx.current_instruction = 0x88192380;
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r8.u8);
	// lhz r7,6(r10)
	ctx.current_instruction = 0x88192384;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lwz r3,24(r30)
	ctx.current_instruction = 0x88192388;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r6,0(r30)
	ctx.current_instruction = 0x8819238C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r5,2(r11)
	ctx.current_instruction = 0x88192390;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// lbzx r9,r4,r3
	ctx.current_instruction = 0x88192398;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r6
	ctx.current_instruction = 0x881923A4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stb r8,2(r31)
	ctx.current_instruction = 0x881923A8;
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r8.u8);
	// lhz r4,8(r10)
	ctx.current_instruction = 0x881923AC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// lwz r6,24(r30)
	ctx.current_instruction = 0x881923B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r3,0(r30)
	ctx.current_instruction = 0x881923B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x881923B8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lbzx r9,r5,r6
	ctx.current_instruction = 0x881923C4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r3
	ctx.current_instruction = 0x881923CC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// stb r8,3(r31)
	ctx.current_instruction = 0x881923D0;
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r8.u8);
	// lwz r7,24(r30)
	ctx.current_instruction = 0x881923D4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lhz r3,10(r10)
	ctx.current_instruction = 0x881923D8;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lbz r5,4(r11)
	ctx.current_instruction = 0x881923E0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lwz r6,0(r30)
	ctx.current_instruction = 0x881923E4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// lbzx r9,r4,r7
	ctx.current_instruction = 0x881923EC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r6
	ctx.current_instruction = 0x881923F4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stb r8,4(r31)
	ctx.current_instruction = 0x881923F8;
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r8.u8);
	// lhz r7,12(r10)
	ctx.current_instruction = 0x881923FC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// lwz r4,24(r30)
	ctx.current_instruction = 0x88192400;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r3,0(r30)
	ctx.current_instruction = 0x88192404;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r6,5(r11)
	ctx.current_instruction = 0x88192408;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// lbzx r9,r5,r4
	ctx.current_instruction = 0x88192414;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r3
	ctx.current_instruction = 0x8819241C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// stb r8,5(r31)
	ctx.current_instruction = 0x88192420;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r8.u8);
	// lwz r6,24(r30)
	ctx.current_instruction = 0x88192424;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r3,0(r30)
	ctx.current_instruction = 0x88192428;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r5,6(r11)
	ctx.current_instruction = 0x8819242C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// lhz r7,14(r10)
	ctx.current_instruction = 0x88192434;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// lbzx r9,r4,r6
	ctx.current_instruction = 0x8819243C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r3
	ctx.current_instruction = 0x88192444;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// stb r8,6(r31)
	ctx.current_instruction = 0x88192448;
	REX_STORE_U8(ctx.r31.u32 + 6, ctx.r8.u8);
	// lhzu r9,16(r10)
	ctx.current_instruction = 0x8819244C;
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lwz r7,24(r30)
	ctx.current_instruction = 0x88192450;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r6,0(r30)
	ctx.current_instruction = 0x88192454;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r5,7(r11)
	ctx.current_instruction = 0x88192458;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lbzx r8,r4,r7
	ctx.current_instruction = 0x88192464;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r8,r3,r6
	ctx.current_instruction = 0x8819246C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r6.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// stb r8,7(r31)
	ctx.current_instruction = 0x88192474;
	REX_STORE_U8(ctx.r31.u32 + 7, ctx.r8.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r31,r28,r9
	ctx.r31.u64 = ctx.r28.u64 + ctx.r9.u64;
	// bdnz 0x88192334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88192334;
	// b 0x88192bd0
	goto loc_88192BD0;
loc_88192488:
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88192498:
	// lwz r10,24(r30)
	ctx.current_instruction = 0x88192498;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lhz r8,2(r11)
	ctx.current_instruction = 0x8819249C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r6,0(r30)
	ctx.current_instruction = 0x881924A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,1(r10)
	ctx.current_instruction = 0x881924B0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.current_instruction = 0x881924B8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,0(r31)
	ctx.current_instruction = 0x881924BC;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r4.u8);
	// lbz r8,2(r10)
	ctx.current_instruction = 0x881924C0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lhz r3,4(r11)
	ctx.current_instruction = 0x881924C4;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,0(r30)
	ctx.current_instruction = 0x881924D0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lbzx r6,r8,r7
	ctx.current_instruction = 0x881924D4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stb r6,1(r31)
	ctx.current_instruction = 0x881924D8;
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r6.u8);
	// lwz r5,0(r30)
	ctx.current_instruction = 0x881924DC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r4,6(r11)
	ctx.current_instruction = 0x881924E0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lbz r8,3(r10)
	ctx.current_instruction = 0x881924E4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r8,r3,r5
	ctx.current_instruction = 0x881924F0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// stb r8,2(r31)
	ctx.current_instruction = 0x881924F4;
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r8.u8);
	// lhz r7,8(r11)
	ctx.current_instruction = 0x881924F8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lbz r8,4(r10)
	ctx.current_instruction = 0x881924FC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lwz r6,0(r30)
	ctx.current_instruction = 0x88192504;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.current_instruction = 0x8819250C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,3(r31)
	ctx.current_instruction = 0x88192510;
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r4.u8);
	// lwz r6,0(r30)
	ctx.current_instruction = 0x88192514;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r3,10(r11)
	ctx.current_instruction = 0x88192518;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lbz r8,5(r10)
	ctx.current_instruction = 0x88192520;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.current_instruction = 0x88192528;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,4(r31)
	ctx.current_instruction = 0x8819252C;
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r4.u8);
	// lwz r3,0(r30)
	ctx.current_instruction = 0x88192530;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r7,12(r11)
	ctx.current_instruction = 0x88192534;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lbz r8,6(r10)
	ctx.current_instruction = 0x8819253C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r5,r6,r3
	ctx.current_instruction = 0x88192544;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// stb r5,5(r31)
	ctx.current_instruction = 0x88192548;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r5.u8);
	// lbz r8,7(r10)
	ctx.current_instruction = 0x8819254C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lhz r4,14(r11)
	ctx.current_instruction = 0x88192550;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// lwz r3,0(r30)
	ctx.current_instruction = 0x88192558;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r7,r8,r3
	ctx.current_instruction = 0x88192560;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stb r7,6(r31)
	ctx.current_instruction = 0x88192564;
	REX_STORE_U8(ctx.r31.u32 + 6, ctx.r7.u8);
	// lbz r10,8(r10)
	ctx.current_instruction = 0x88192568;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lwz r6,0(r30)
	ctx.current_instruction = 0x8819256C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhzu r8,16(r11)
	ctx.current_instruction = 0x88192570;
	ea = 16 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// lbzx r4,r5,r6
	ctx.current_instruction = 0x88192580;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,7(r31)
	ctx.current_instruction = 0x88192584;
	REX_STORE_U8(ctx.r31.u32 + 7, ctx.r4.u8);
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// bdnz 0x88192498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88192498;
	// b 0x88192bd0
	goto loc_88192BD0;
loc_88192594:
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881925A4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,24(r30)
	ctx.current_instruction = 0x881925A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lhz r7,2(r11)
	ctx.current_instruction = 0x881925AC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// lwz r6,0(r30)
	ctx.current_instruction = 0x881925B4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r8,0(r10)
	ctx.current_instruction = 0x881925C0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.current_instruction = 0x881925C8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,0(r31)
	ctx.current_instruction = 0x881925CC;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r4.u8);
	// lwz r6,0(r30)
	ctx.current_instruction = 0x881925D0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r8,1(r10)
	ctx.current_instruction = 0x881925D4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lhz r3,4(r11)
	ctx.current_instruction = 0x881925D8;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.current_instruction = 0x881925E4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,1(r31)
	ctx.current_instruction = 0x881925E8;
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r4.u8);
	// lwz r3,0(r30)
	ctx.current_instruction = 0x881925EC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r7,6(r11)
	ctx.current_instruction = 0x881925F0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lbz r8,2(r10)
	ctx.current_instruction = 0x881925F4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r5,r6,r3
	ctx.current_instruction = 0x88192600;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// stb r5,2(r31)
	ctx.current_instruction = 0x88192604;
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r5.u8);
	// lhz r4,8(r11)
	ctx.current_instruction = 0x88192608;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lbz r8,3(r10)
	ctx.current_instruction = 0x8819260C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// lwz r3,0(r30)
	ctx.current_instruction = 0x88192614;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r7,r8,r3
	ctx.current_instruction = 0x8819261C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stb r7,3(r31)
	ctx.current_instruction = 0x88192620;
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r7.u8);
	// lhz r6,10(r11)
	ctx.current_instruction = 0x88192624;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lbz r8,4(r10)
	ctx.current_instruction = 0x88192628;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// lwz r5,0(r30)
	ctx.current_instruction = 0x88192630;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r3,r4,r5
	ctx.current_instruction = 0x88192638;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// stb r3,4(r31)
	ctx.current_instruction = 0x8819263C;
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
	// lwz r6,0(r30)
	ctx.current_instruction = 0x88192640;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r5,12(r11)
	ctx.current_instruction = 0x88192644;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// lbz r8,5(r10)
	ctx.current_instruction = 0x8819264C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r3,r4,r6
	ctx.current_instruction = 0x88192654;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// stb r3,5(r31)
	ctx.current_instruction = 0x88192658;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r3.u8);
	// lhz r7,14(r11)
	ctx.current_instruction = 0x8819265C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lbz r8,6(r10)
	ctx.current_instruction = 0x88192664;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lwz r6,0(r30)
	ctx.current_instruction = 0x88192668;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.current_instruction = 0x88192670;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,6(r31)
	ctx.current_instruction = 0x88192674;
	REX_STORE_U8(ctx.r31.u32 + 6, ctx.r4.u8);
	// lhzu r8,16(r11)
	ctx.current_instruction = 0x88192678;
	ea = 16 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lbz r10,7(r10)
	ctx.current_instruction = 0x8819267C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lwz r3,0(r30)
	ctx.current_instruction = 0x88192684;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r8,r10,r3
	ctx.current_instruction = 0x8819268C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stb r8,7(r31)
	ctx.current_instruction = 0x88192694;
	REX_STORE_U8(ctx.r31.u32 + 7, ctx.r8.u8);
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// bdnz 0x881925a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881925A4;
	// b 0x88192bd0
	goto loc_88192BD0;
loc_881926A4:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
loc_881926AC:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt cr6,0x88192700
	if (ctx.cr6.gt) goto loc_88192700;
	// neg r9,r6
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subfic r7,r9,8
	ctx.xer.ca = ctx.r9.u32 <= 8;
	ctx.r7.u64 = static_cast<uint64_t>(8) - ctx.r9.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881926D0:
	// lwz r9,20(r30)
	ctx.current_instruction = 0x881926D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lhz r8,2(r11)
	ctx.current_instruction = 0x881926D4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r5,0(r30)
	ctx.current_instruction = 0x881926DC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lbzx r9,r9,r10
	ctx.current_instruction = 0x881926E4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r3,r4,r5
	ctx.current_instruction = 0x881926F0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// stb r3,0(r31)
	ctx.current_instruction = 0x881926F4;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bdnz 0x881926d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881926D0;
loc_88192700:
	// lwz r10,24(r30)
	ctx.current_instruction = 0x88192700;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88192738
	if (!ctx.cr6.gt) goto loc_88192738;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_88192714:
	// lhzu r8,2(r11)
	ctx.current_instruction = 0x88192714;
	ea = 2 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lbzu r9,1(r10)
	ctx.current_instruction = 0x88192718;
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88192720;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r4,r5,r7
	ctx.current_instruction = 0x88192728;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// stb r4,0(r31)
	ctx.current_instruction = 0x8819272C;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r4.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bdnz 0x88192714
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88192714;
loc_88192738:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// cmpwi cr6,r6,-7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -7, ctx.xer);
	// bgt cr6,0x881926ac
	if (ctx.cr6.gt) goto loc_881926AC;
	// b 0x88192bd0
	goto loc_88192BD0;
loc_8819274C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_88192750:
	// lwz r10,20(r30)
	ctx.current_instruction = 0x88192750;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// ble cr6,0x881927ac
	if (!ctx.cr6.gt) goto loc_881927AC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_88192768:
	// lhz r9,0(r29)
	ctx.current_instruction = 0x88192768;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// lbz r8,1(r10)
	ctx.current_instruction = 0x8819276C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88192774;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r5,r6,r7
	ctx.current_instruction = 0x8819277C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// stb r5,0(r31)
	ctx.current_instruction = 0x88192780;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r5.u8);
	// lbzu r9,1(r10)
	ctx.current_instruction = 0x88192784;
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lhzu r3,2(r29)
	ctx.current_instruction = 0x88192788;
	ea = 2 + ctx.r29.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lwz r4,0(r30)
	ctx.current_instruction = 0x88192790;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// lbzx r8,r9,r4
	ctx.current_instruction = 0x8819279C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// stbu r8,1(r31)
	ctx.current_instruction = 0x881927A0;
	ea = 1 + ctx.r31.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r31.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bdnz 0x88192768
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88192768;
loc_881927AC:
	// lwz r10,20(r30)
	ctx.current_instruction = 0x881927AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r8,0(r29)
	ctx.current_instruction = 0x881927B4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// subfic r7,r9,7
	ctx.xer.ca = ctx.r9.u32 <= 7;
	ctx.r7.u64 = static_cast<uint64_t>(7) - ctx.r9.u64;
	// lwz r6,0(r30)
	ctx.current_instruction = 0x881927C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbz r10,0(r10)
	ctx.current_instruction = 0x881927CC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lbzx r4,r5,r6
	ctx.current_instruction = 0x881927D8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,0(r31)
	ctx.current_instruction = 0x881927DC;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r4.u8);
	// lwz r9,24(r30)
	ctx.current_instruction = 0x881927E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lbz r8,0(r9)
	ctx.current_instruction = 0x881927E8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// ble cr6,0x88192834
	if (!ctx.cr6.gt) goto loc_88192834;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
loc_881927FC:
	// lbzu r9,1(r7)
	ctx.current_instruction = 0x881927FC;
	ea = 1 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// lhz r6,0(r29)
	ctx.current_instruction = 0x88192800;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r4,0(r30)
	ctx.current_instruction = 0x8819280C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 1;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// srawi r9,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 1;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lbzx r6,r9,r4
	ctx.current_instruction = 0x88192824;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// stb r6,0(r10)
	ctx.current_instruction = 0x88192828;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x881927fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881927FC;
loc_88192834:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x88192750
	if (ctx.cr6.lt) goto loc_88192750;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x88192bd0
	if (!ctx.cr6.lt) goto loc_88192BD0;
	// subfic r10,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88192854:
	// lwz r10,20(r30)
	ctx.current_instruction = 0x88192854;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lhz r9,0(r29)
	ctx.current_instruction = 0x88192858;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88192860;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r8)
	ctx.current_instruction = 0x8819286C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r5,r6,r7
	ctx.current_instruction = 0x88192874;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// stb r5,0(r31)
	ctx.current_instruction = 0x88192878;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r5.u8);
	// lhzu r10,2(r29)
	ctx.current_instruction = 0x8819287C;
	ea = 2 + ctx.r29.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// lbz r9,0(r8)
	ctx.current_instruction = 0x88192880;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r4,0(r30)
	ctx.current_instruction = 0x88192888;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r10,r3,r4
	ctx.current_instruction = 0x88192890;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// stbu r10,1(r31)
	ctx.current_instruction = 0x88192894;
	ea = 1 + ctx.r31.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r31.u32 = ea;
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88192898;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhzu r10,2(r29)
	ctx.current_instruction = 0x8819289C;
	ea = 2 + ctx.r29.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lbz r9,1(r8)
	ctx.current_instruction = 0x881928A4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r5,r6,r7
	ctx.current_instruction = 0x881928AC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// stbu r5,1(r31)
	ctx.current_instruction = 0x881928B0;
	ea = 1 + ctx.r31.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r31.u32 = ea;
	// lhzu r10,2(r29)
	ctx.current_instruction = 0x881928B4;
	ea = 2 + ctx.r29.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// lbz r9,1(r8)
	ctx.current_instruction = 0x881928B8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r4,0(r30)
	ctx.current_instruction = 0x881928C0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r10,r3,r4
	ctx.current_instruction = 0x881928C8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// stbu r10,1(r31)
	ctx.current_instruction = 0x881928CC;
	ea = 1 + ctx.r31.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r31.u32 = ea;
	// lwz r7,0(r30)
	ctx.current_instruction = 0x881928D0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhzu r10,2(r29)
	ctx.current_instruction = 0x881928D4;
	ea = 2 + ctx.r29.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lbz r9,2(r8)
	ctx.current_instruction = 0x881928DC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r5,r6,r7
	ctx.current_instruction = 0x881928E4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// stbu r5,1(r31)
	ctx.current_instruction = 0x881928E8;
	ea = 1 + ctx.r31.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r31.u32 = ea;
	// lbz r9,2(r8)
	ctx.current_instruction = 0x881928EC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// lwz r4,0(r30)
	ctx.current_instruction = 0x881928F0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhzu r10,2(r29)
	ctx.current_instruction = 0x881928F4;
	ea = 2 + ctx.r29.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r10,r3,r4
	ctx.current_instruction = 0x88192900;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// stbu r10,1(r31)
	ctx.current_instruction = 0x88192904;
	ea = 1 + ctx.r31.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r31.u32 = ea;
	// lhzu r10,2(r29)
	ctx.current_instruction = 0x88192908;
	ea = 2 + ctx.r29.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// lbz r9,3(r8)
	ctx.current_instruction = 0x8819290C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88192914;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r5,r6,r7
	ctx.current_instruction = 0x8819291C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// stbu r5,1(r31)
	ctx.current_instruction = 0x88192920;
	ea = 1 + ctx.r31.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r31.u32 = ea;
	// lbz r9,3(r8)
	ctx.current_instruction = 0x88192924;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// lwz r4,0(r30)
	ctx.current_instruction = 0x88192928;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhzu r10,2(r29)
	ctx.current_instruction = 0x8819292C;
	ea = 2 + ctx.r29.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// lbzx r10,r3,r4
	ctx.current_instruction = 0x8819293C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// stbu r10,1(r31)
	ctx.current_instruction = 0x88192940;
	ea = 1 + ctx.r31.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r31.u32 = ea;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// bdnz 0x88192854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88192854;
	// b 0x88192bd0
	goto loc_88192BD0;
loc_88192954:
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88192964:
	// lwz r10,24(r30)
	ctx.current_instruction = 0x88192964;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lhz r8,2(r11)
	ctx.current_instruction = 0x88192968;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r6,0(r30)
	ctx.current_instruction = 0x88192970;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,-1(r10)
	ctx.current_instruction = 0x8819297C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.current_instruction = 0x88192984;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,0(r31)
	ctx.current_instruction = 0x88192988;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r4.u8);
	// lwz r6,0(r30)
	ctx.current_instruction = 0x8819298C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r8,0(r10)
	ctx.current_instruction = 0x88192990;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lhz r3,4(r11)
	ctx.current_instruction = 0x88192994;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.current_instruction = 0x881929A0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,1(r31)
	ctx.current_instruction = 0x881929A4;
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r4.u8);
	// lhz r3,6(r11)
	ctx.current_instruction = 0x881929A8;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lbz r8,1(r10)
	ctx.current_instruction = 0x881929AC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lwz r6,0(r30)
	ctx.current_instruction = 0x881929B4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.current_instruction = 0x881929BC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,2(r31)
	ctx.current_instruction = 0x881929C0;
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r4.u8);
	// lhz r7,8(r11)
	ctx.current_instruction = 0x881929C4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lbz r8,2(r10)
	ctx.current_instruction = 0x881929C8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lwz r3,0(r30)
	ctx.current_instruction = 0x881929D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r5,r6,r3
	ctx.current_instruction = 0x881929D8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// stb r5,3(r31)
	ctx.current_instruction = 0x881929DC;
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r5.u8);
	// lhz r4,10(r11)
	ctx.current_instruction = 0x881929E0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lbz r8,3(r10)
	ctx.current_instruction = 0x881929E4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// lwz r3,0(r30)
	ctx.current_instruction = 0x881929EC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r7,r8,r3
	ctx.current_instruction = 0x881929F4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stb r7,4(r31)
	ctx.current_instruction = 0x881929F8;
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r10)
	ctx.current_instruction = 0x881929FC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lhz r6,12(r11)
	ctx.current_instruction = 0x88192A00;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// lwz r5,0(r30)
	ctx.current_instruction = 0x88192A08;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r3,r4,r5
	ctx.current_instruction = 0x88192A10;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// stb r3,5(r31)
	ctx.current_instruction = 0x88192A14;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r3.u8);
	// lwz r6,0(r30)
	ctx.current_instruction = 0x88192A18;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r7,14(r11)
	ctx.current_instruction = 0x88192A1C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lbz r8,5(r10)
	ctx.current_instruction = 0x88192A24;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.current_instruction = 0x88192A2C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,6(r31)
	ctx.current_instruction = 0x88192A30;
	REX_STORE_U8(ctx.r31.u32 + 6, ctx.r4.u8);
	// lwz r3,0(r30)
	ctx.current_instruction = 0x88192A34;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhzu r8,16(r11)
	ctx.current_instruction = 0x88192A38;
	ea = 16 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lbz r10,6(r10)
	ctx.current_instruction = 0x88192A3C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r7,r8,r3
	ctx.current_instruction = 0x88192A48;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stb r7,7(r31)
	ctx.current_instruction = 0x88192A50;
	REX_STORE_U8(ctx.r31.u32 + 7, ctx.r7.u8);
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// bdnz 0x88192964
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88192964;
	// b 0x88192bd0
	goto loc_88192BD0;
loc_88192A60:
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// addi r6,r10,25392
	ctx.r6.s64 = ctx.r10.s64 + 25392;
loc_88192A78:
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// lwz r8,20(r30)
	ctx.current_instruction = 0x88192A7C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lhz r7,2(r11)
	ctx.current_instruction = 0x88192A80;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r5,0(r30)
	ctx.current_instruction = 0x88192A88;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r4,-2(r10)
	ctx.current_instruction = 0x88192A94;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// lbzx r8,r3,r8
	ctx.current_instruction = 0x88192A9C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r7,r8,r5
	ctx.current_instruction = 0x88192AA4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// stb r7,0(r31)
	ctx.current_instruction = 0x88192AA8;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r7.u8);
	// lbz r5,-1(r10)
	ctx.current_instruction = 0x88192AAC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lwz r4,20(r30)
	ctx.current_instruction = 0x88192AB0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// lhz r8,4(r11)
	ctx.current_instruction = 0x88192AB8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r5,0(r30)
	ctx.current_instruction = 0x88192ABC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lbzx r8,r3,r4
	ctx.current_instruction = 0x88192AC4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r3,r4,r5
	ctx.current_instruction = 0x88192ACC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// stb r3,1(r31)
	ctx.current_instruction = 0x88192AD0;
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r3.u8);
	// lwz r5,20(r30)
	ctx.current_instruction = 0x88192AD4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lbz r8,0(r10)
	ctx.current_instruction = 0x88192AD8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lhz r3,6(r11)
	ctx.current_instruction = 0x88192ADC;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// lwz r29,0(r30)
	ctx.current_instruction = 0x88192AE4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lbzx r8,r4,r5
	ctx.current_instruction = 0x88192AEC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r7,r8,r29
	ctx.current_instruction = 0x88192AF4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// stb r7,2(r31)
	ctx.current_instruction = 0x88192AF8;
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r7.u8);
	// lbz r5,1(r10)
	ctx.current_instruction = 0x88192AFC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// lwz r4,20(r30)
	ctx.current_instruction = 0x88192B04;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lhz r8,8(r11)
	ctx.current_instruction = 0x88192B08;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lwz r5,0(r30)
	ctx.current_instruction = 0x88192B0C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lbzx r8,r3,r4
	ctx.current_instruction = 0x88192B14;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r3,r4,r5
	ctx.current_instruction = 0x88192B1C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// stb r3,3(r31)
	ctx.current_instruction = 0x88192B20;
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r3.u8);
	// lbz r8,2(r10)
	ctx.current_instruction = 0x88192B24;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lhz r3,10(r11)
	ctx.current_instruction = 0x88192B28;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// lwz r5,20(r30)
	ctx.current_instruction = 0x88192B30;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lwz r29,0(r30)
	ctx.current_instruction = 0x88192B38;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lbzx r8,r4,r5
	ctx.current_instruction = 0x88192B3C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r7,r8,r29
	ctx.current_instruction = 0x88192B44;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// stb r7,4(r31)
	ctx.current_instruction = 0x88192B48;
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
	// lbz r5,3(r10)
	ctx.current_instruction = 0x88192B4C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lwz r4,20(r30)
	ctx.current_instruction = 0x88192B50;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// lwz r5,0(r30)
	ctx.current_instruction = 0x88192B58;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r8,12(r11)
	ctx.current_instruction = 0x88192B5C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lbzx r8,r3,r4
	ctx.current_instruction = 0x88192B64;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r3,r4,r5
	ctx.current_instruction = 0x88192B6C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// stb r3,5(r31)
	ctx.current_instruction = 0x88192B70;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r3.u8);
	// lhz r3,14(r11)
	ctx.current_instruction = 0x88192B74;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lbz r8,4(r10)
	ctx.current_instruction = 0x88192B78;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// lwz r5,20(r30)
	ctx.current_instruction = 0x88192B80;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lwz r29,0(r30)
	ctx.current_instruction = 0x88192B88;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lbzx r8,r4,r5
	ctx.current_instruction = 0x88192B8C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r7,r8,r29
	ctx.current_instruction = 0x88192B94;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// stb r7,6(r31)
	ctx.current_instruction = 0x88192B98;
	REX_STORE_U8(ctx.r31.u32 + 6, ctx.r7.u8);
	// lwz r3,20(r30)
	ctx.current_instruction = 0x88192B9C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lbz r5,5(r10)
	ctx.current_instruction = 0x88192BA0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// lhzu r10,16(r11)
	ctx.current_instruction = 0x88192BA8;
	ea = 16 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lbzx r10,r4,r3
	ctx.current_instruction = 0x88192BB0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,0(r30)
	ctx.current_instruction = 0x88192BB8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lbzx r7,r10,r8
	ctx.current_instruction = 0x88192BBC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stb r7,7(r31)
	ctx.current_instruction = 0x88192BC4;
	REX_STORE_U8(ctx.r31.u32 + 7, ctx.r7.u8);
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// bdnz 0x88192a78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88192A78;
loc_88192BD0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x88192c5c
	if (ctx.cr6.eq) goto loc_88192C5C;
loc_88192BD8:
	// addi r11,r22,8
	ctx.r11.s64 = ctx.r22.s64 + 8;
	// stw r23,0(r22)
	ctx.current_instruction = 0x88192BDC;
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r23.u32);
	// stw r23,4(r22)
	ctx.current_instruction = 0x88192BE0;
	REX_STORE_U32(ctx.r22.u32 + 4, ctx.r23.u32);
	// stw r23,8(r22)
	ctx.current_instruction = 0x88192BE4;
	REX_STORE_U32(ctx.r22.u32 + 8, ctx.r23.u32);
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192BE8;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192BEC;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192BF0;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192BF4;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192BF8;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192BFC;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C00;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C04;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C08;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C0C;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C10;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C14;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C18;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C1C;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C20;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C24;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C28;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C2C;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C30;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C34;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C38;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C3C;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C40;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C44;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C48;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C4C;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C50;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ctx.current_instruction = 0x88192C54;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stw r23,4(r11)
	ctx.current_instruction = 0x88192C58;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
loc_88192C5C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C3D98) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C3D98;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C3D98) {
			switch (rex_dispatch_address) {
				case 0x881C3DA0:
				case 0x881C3DC8:
				case 0x881C3DF0:
				case 0x881C3E24:
				case 0x881C3E48:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C3D98;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881C3DA0: goto loc_881C3DA0;
		case 0x881C3DC8: goto loc_881C3DC8;
		case 0x881C3DF0: goto loc_881C3DF0;
		case 0x881C3E24: goto loc_881C3E24;
		case 0x881C3E48: goto loc_881C3E48;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x881C3DA0;
	__savegprlr_24(ctx, base);
loc_881C3DA0:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x881C3DA0;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x881c2c28
	ctx.lr = 0x881C3DC8;
	sub_881C2C28(ctx, base);
loc_881C3DC8:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x881c2c28
	ctx.lr = 0x881C3DF0;
	sub_881C2C28(ctx, base);
loc_881C3DF0:
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x881c2c28
	ctx.lr = 0x881C3E24;
	sub_881C2C28(ctx, base);
loc_881C3E24:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881c2c28
	ctx.lr = 0x881C3E48;
	sub_881C2C28(ctx, base);
loc_881C3E48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C45B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C45B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C45B8) {
			switch (rex_dispatch_address) {
				case 0x881C45C0:
				case 0x881C4604:
				case 0x881C462C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C45B8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881C45C0: goto loc_881C45C0;
		case 0x881C4604: goto loc_881C4604;
		case 0x881C462C: goto loc_881C462C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881C45C0;
	__savegprlr_29(ctx, base);
loc_881C45C0:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881C45C0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881c45e4
	if (!ctx.cr6.eq) goto loc_881C45E4;
loc_881C45D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_881C45E4:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bge cr6,0x881c45f0
	if (!ctx.cr6.lt) goto loc_881C45F0;
	// li r31,16
	ctx.r31.s64 = 16;
loc_881C45F0:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x881c45fc
	if (!ctx.cr6.gt) goto loc_881C45FC;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_881C45FC:
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052e38
	ctx.lr = 0x881C4604;
	sub_88052E38(ctx, base);
loc_881C4604:
	// stw r3,0(r30)
	ctx.current_instruction = 0x881C4604;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881c45d8
	if (ctx.cr6.eq) goto loc_881C45D8;
	// stw r31,4(r30)
	ctx.current_instruction = 0x881C4610;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x881c4620
	if (!ctx.cr6.gt) goto loc_881C4620;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_881C4620:
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x881C462C;
	sub_88052D90(ctx, base);
loc_881C462C:
	// stw r29,8(r30)
	ctx.current_instruction = 0x881C462C;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C5DE0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C5DE0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C5DE0) {
			switch (rex_dispatch_address) {
				case 0x881C5DE8:
				case 0x881C5ED4:
				case 0x881C5F60:
				case 0x881C5F78:
				case 0x881C5FA8:
				case 0x881C60F4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C5DE0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881C5DE8: goto loc_881C5DE8;
		case 0x881C5ED4: goto loc_881C5ED4;
		case 0x881C5F60: goto loc_881C5F60;
		case 0x881C5F78: goto loc_881C5F78;
		case 0x881C5FA8: goto loc_881C5FA8;
		case 0x881C60F4: goto loc_881C60F4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881C5DE8;
	__savegprlr_14(ctx, base);
loc_881C5DE8:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x881C5DE8;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,0(r4)
	ctx.current_instruction = 0x881C5DEC;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r25,316(r3)
	ctx.current_instruction = 0x881C5DF4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r24,320(r3)
	ctx.current_instruction = 0x881C5DFC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x881C5E04;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,8(r20)
	ctx.current_instruction = 0x881C5E10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r15,0(r20)
	ctx.current_instruction = 0x881C5E14;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r19,28(r20)
	ctx.current_instruction = 0x881C5E18;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r20.u32 + 28);
	// addi r18,r11,1
	ctx.r18.s64 = ctx.r11.s64 + 1;
	// lwz r17,32(r20)
	ctx.current_instruction = 0x881C5E20;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r20.u32 + 32);
	// lwz r16,4(r20)
	ctx.current_instruction = 0x881C5E24;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// beq cr6,0x881c6100
	if (ctx.cr6.eq) goto loc_881C6100;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r29,80(r1)
	ctx.current_instruction = 0x881C5E30;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r21,-1
	ctx.r21.s64 = -1;
	// ori r23,r11,32768
	ctx.r23.u64 = ctx.r11.u64 | 32768;
	// li r14,64
	ctx.r14.s64 = 64;
	// b 0x881c5e48
	goto loc_881C5E48;
loc_881C5E44:
	// lwz r28,80(r1)
	ctx.current_instruction = 0x881C5E44;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_881C5E48:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// bne cr6,0x881c5e60
	if (!ctx.cr6.eq) goto loc_881C5E60;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// stw r11,20(r31)
	ctx.current_instruction = 0x881C5E58;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881c5fa8
	goto loc_881C5FA8;
loc_881C5E60:
	// lbz r4,8(r15)
	ctx.current_instruction = 0x881C5E60;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r15.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x881C5E64;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r15)
	ctx.current_instruction = 0x881C5E6C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.current_instruction = 0x881C5E7C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881c5f58
	if (ctx.cr6.lt) goto loc_881C5F58;
	// clrlwi r10,r30,28
	ctx.r10.u64 = ctx.r30.u32 & 0xF;
	// lwz r9,8(r31)
	ctx.current_instruction = 0x881C5E90;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// sld r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r10.u8 & 0x7F));
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// sradi r6,r8,63
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s64 >> 63;
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicr r5,r8,1,62
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// extsw r29,r6
	ctx.r29.s64 = ctx.r6.s32;
	// stw r11,8(r31)
	ctx.current_instruction = 0x881C5EAC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// std r5,0(r31)
	ctx.current_instruction = 0x881C5EB0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
	// bge 0x881c5f50
	if (!ctx.cr0.lt) goto loc_881C5F50;
loc_881C5EB8:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881C5EB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881C5EBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881c5ee4
	if (ctx.cr6.lt) goto loc_881C5EE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881C5ED4;
	sub_88156440(ctx, base);
loc_881C5ED4:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881c5eb8
	if (ctx.cr6.eq) goto loc_881C5EB8;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881c5fa8
	goto loc_881C5FA8;
loc_881C5EE4:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881C5EE4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881C5EEC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r7,2(r11)
	ctx.current_instruction = 0x881C5EF4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.current_instruction = 0x881C5EF8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,4(r11)
	ctx.current_instruction = 0x881C5F00;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x881C5F04;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r6,r10,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C5F0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881C5F10;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C5F18;
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
	ctx.current_instruction = 0x881C5F34;
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
	ctx.current_instruction = 0x881C5F4C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_881C5F50:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881c5fa8
	goto loc_881C5FA8;
loc_881C5F58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881C5F60;
	sub_88156500(ctx, base);
loc_881C5F60:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881C5F60;
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
	ctx.lr = 0x881C5F78;
	sub_88156500(ctx, base);
loc_881C5F78:
	// add r10,r30,r23
	ctx.r10.u64 = ctx.r30.u64 + ctx.r23.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x881C5F80;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881c5f60
	if (ctx.cr6.lt) goto loc_881C5F60;
	// ld r11,0(r31)
	ctx.current_instruction = 0x881C5F90;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sradi r10,r11,63
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s64 >> 63;
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// bl 0x88156500
	ctx.lr = 0x881C5FA8;
	sub_88156500(ctx, base);
loc_881C5FA8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lbzx r5,r11,r17
	ctx.current_instruction = 0x881C5FB0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lbzx r11,r11,r19
	ctx.current_instruction = 0x881C5FB4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// add r7,r5,r28
	ctx.r7.u64 = ctx.r5.u64 + ctx.r28.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// xor r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r29.u64;
	// lbzx r11,r7,r22
	ctx.current_instruction = 0x881C5FC4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r22.u32);
	// subf r10,r29,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r29.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x881c5fe8
	if (!ctx.cr6.lt) goto loc_881C5FE8;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r27
	ctx.current_instruction = 0x881C5FD8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32);
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// sthx r4,r9,r27
	ctx.current_instruction = 0x881C5FE0;
	REX_STORE_U16(ctx.r9.u32 + ctx.r27.u32, ctx.r4.u16);
	// b 0x881c6040
	goto loc_881C6040;
loc_881C5FE8:
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881c6010
	if (!ctx.cr6.eq) goto loc_881C6010;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r27
	ctx.current_instruction = 0x881C6000;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32);
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// sthx r4,r9,r27
	ctx.current_instruction = 0x881C6008;
	REX_STORE_U16(ctx.r9.u32 + ctx.r27.u32, ctx.r4.u16);
	// b 0x881c6040
	goto loc_881C6040;
loc_881C6010:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x881c6030
	if (!ctx.cr6.gt) goto loc_881C6030;
	// lwz r8,1764(r26)
	ctx.current_instruction = 0x881C601C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 1764);
	// mullw r9,r10,r25
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// add r3,r9,r24
	ctx.r3.u64 = ctx.r9.u64 + ctx.r24.u64;
	// stwx r3,r8,r4
	ctx.current_instruction = 0x881C6028;
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r3.u32);
	// b 0x881c6040
	goto loc_881C6040;
loc_881C6030:
	// lwz r9,1764(r26)
	ctx.current_instruction = 0x881C6030;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 1764);
	// mullw r8,r10,r25
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// subf r3,r24,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r24.u64;
	// stwx r3,r9,r4
	ctx.current_instruction = 0x881C603C;
	REX_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r3.u32);
loc_881C6040:
	// subf r8,r6,r16
	ctx.r8.u64 = ctx.r16.u64 - ctx.r6.u64;
	// addi r28,r7,1
	ctx.r28.s64 = ctx.r7.s64 + 1;
	// subfc r9,r18,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r18.u32;
	ctx.r9.u64 = ctx.r6.u64 - ctx.r18.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subfze r4,r21
	temp.u8 = ~ctx.r21.u32 + ctx.xer.ca < ~ctx.r21.u32;
	ctx.r4.u64 = ~ctx.r21.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// subfc r9,r14,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r14.u32;
	ctx.r9.u64 = ctx.r28.u64 - ctx.r14.u64;
	// or r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 | ctx.r3.u64;
	// subfze r7,r21
	temp.u8 = ~ctx.r21.u32 + ctx.xer.ca < ~ctx.r21.u32;
	ctx.r7.u64 = ~ctx.r21.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x881c5e48
	if (ctx.cr6.eq) goto loc_881C5E48;
	// cmpw cr6,r6,r16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r16.s32, ctx.xer);
	// bne cr6,0x881c6100
	if (!ctx.cr6.eq) goto loc_881C6100;
	// subf r9,r5,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r5.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,80(r1)
	ctx.current_instruction = 0x881C6084;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bge cr6,0x881c60a0
	if (!ctx.cr6.lt) goto loc_881C60A0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r11,r27
	ctx.current_instruction = 0x881C6090;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// sthx r7,r11,r27
	ctx.current_instruction = 0x881C6098;
	REX_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r7.u16);
	// b 0x881c60d8
	goto loc_881C60D8;
loc_881C60A0:
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881c60c8
	if (!ctx.cr6.eq) goto loc_881C60C8;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r11,r27
	ctx.current_instruction = 0x881C60B8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// sthx r7,r11,r27
	ctx.current_instruction = 0x881C60C0;
	REX_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r7.u16);
	// b 0x881c60d8
	goto loc_881C60D8;
loc_881C60C8:
	// lwz r10,1764(r26)
	ctx.current_instruction = 0x881C60C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 1764);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r10,r9
	ctx.current_instruction = 0x881C60D4;
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_881C60D8:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// neg r7,r29
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r29.u64);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881c54f8
	ctx.lr = 0x881C60F4;
	sub_881C54F8(ctx, base);
loc_881C60F4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x881c5e44
	if (ctx.cr6.lt) goto loc_881C5E44;
loc_881C6100:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_881C6108:
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lhzx r8,r10,r27
	ctx.current_instruction = 0x881C610C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r27.u32);
	// lwz r5,1764(r26)
	ctx.current_instruction = 0x881C6110;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 1764);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// mullw r7,r3,r25
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r25.s32);
	// lhzx r9,r4,r27
	ctx.current_instruction = 0x881C612C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r27.u32);
	// xor r8,r10,r24
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r24.u64;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r9,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 31;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// mullw r8,r4,r25
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// xor r10,r9,r24
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r24.u64;
	// subfic r3,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r3.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r3,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r4,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r4.u64 = static_cast<uint64_t>(0) - ctx.r4.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subfe r9,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// and r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 & ctx.r9.u64;
	// stwx r7,r31,r5
	ctx.current_instruction = 0x881C6174;
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwz r5,1764(r26)
	ctx.current_instruction = 0x881C6178;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 1764);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r6,r8,r5
	ctx.current_instruction = 0x881C6184;
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r6.u32);
	// blt cr6,0x881c6108
	if (ctx.cr6.lt) goto loc_881C6108;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881D1A40) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881D1A40;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881D1A40) {
			switch (rex_dispatch_address) {
				case 0x881D1A48:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881D1A40;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881D1A48: goto loc_881D1A48;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881D1A48;
	__savegprlr_14(ctx, base);
loc_881D1A48:
	// lwz r27,104(r3)
	ctx.current_instruction = 0x881D1A48;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r26,108(r3)
	ctx.current_instruction = 0x881D1A50;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r10,80(r3)
	ctx.current_instruction = 0x881D1A54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r9,92(r3)
	ctx.current_instruction = 0x881D1A58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// srawi r22,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r10.s32 >> 1;
	// lwz r11,112(r3)
	ctx.current_instruction = 0x881D1A60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,116(r3)
	ctx.current_instruction = 0x881D1A68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r9,120(r3)
	ctx.current_instruction = 0x881D1A6C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// stw r3,20(r1)
	ctx.current_instruction = 0x881D1A70;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r27,-264(r1)
	ctx.current_instruction = 0x881D1A74;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r27.u32);
	// stw r26,-268(r1)
	ctx.current_instruction = 0x881D1A78;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r26.u32);
	// stw r4,-248(r1)
	ctx.current_instruction = 0x881D1A7C;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
	// ble cr6,0x881d35a8
	if (!ctx.cr6.gt) goto loc_881D35A8;
	// addi r30,r9,-1
	ctx.r30.s64 = ctx.r9.s64 + -1;
	// fsub f8,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f2.f64 - ctx.f1.f64;
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r30,-316(r1)
	ctx.current_instruction = 0x881D1A94;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r30.u32);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stw r29,-320(r1)
	ctx.current_instruction = 0x881D1A9C;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r29.u32);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// stw r8,-352(r1)
	ctx.current_instruction = 0x881D1AA4;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lfd f9,17600(r11)
	ctx.current_instruction = 0x881D1AB4;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 17600);
	// li r24,16
	ctx.r24.s64 = 16;
	// lfd f11,23440(r10)
	ctx.current_instruction = 0x881D1ABC;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r10.u32 + 23440);
	// li r25,128
	ctx.r25.s64 = 128;
	// lfd f6,1488(r9)
	ctx.current_instruction = 0x881D1AC4;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r9.u32 + 1488);
	// lfd f10,12088(r7)
	ctx.current_instruction = 0x881D1AC8;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r7.u32 + 12088);
	// lfd f7,8624(r6)
	ctx.current_instruction = 0x881D1ACC;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r6.u32 + 8624);
loc_881D1AD0:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lwz r10,96(r3)
	ctx.current_instruction = 0x881D1AD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f8.f64;
	// std r11,-168(r1)
	ctx.current_instruction = 0x881D1AE0;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r11.u64);
	// lfd f13,-168(r1)
	ctx.current_instruction = 0x881D1AE4;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r7,-312(r1)
	ctx.current_instruction = 0x881D1AEC;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r7.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmadd f12,f12,f3,f4
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f4.f64);
	// beq cr6,0x881d1b08
	if (ctx.cr6.eq) goto loc_881D1B08;
	// fsub f13,f3,f7
	ctx.f13.f64 = ctx.f3.f64 - ctx.f7.f64;
	// fmul f13,f13,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f10.f64;
	// b 0x881d1b0c
	goto loc_881D1B0C;
loc_881D1B08:
	// fmr f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f6.f64;
loc_881D1B0C:
	// fadd f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 + ctx.f12.f64;
	// lwz r9,80(r3)
	ctx.current_instruction = 0x881D1B10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,100(r3)
	ctx.current_instruction = 0x881D1B14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// fmul f12,f13,f10
	ctx.f12.f64 = ctx.f13.f64 * ctx.f10.f64;
	// fctiwz f5,f13
	ctx.f5.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f5,-224(r1)
	ctx.current_instruction = 0x881D1B20;
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.f5.u64);
	// lwz r11,-220(r1)
	ctx.current_instruction = 0x881D1B24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// fctiwz f2,f12
	ctx.f2.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f2,-240(r1)
	ctx.current_instruction = 0x881D1B30;
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.f2.u64);
	// lwz r6,-236(r1)
	ctx.current_instruction = 0x881D1B34;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// stw r10,-260(r1)
	ctx.current_instruction = 0x881D1B48;
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r5,-208(r1)
	ctx.current_instruction = 0x881D1B50;
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r5.u64);
	// lfd f12,-208(r1)
	ctx.current_instruction = 0x881D1B54;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// std r6,-200(r1)
	ctx.current_instruction = 0x881D1B58;
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r6.u64);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// lfd f12,-200(r1)
	ctx.current_instruction = 0x881D1B60;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// fmsub f2,f13,f9,f5
	ctx.f2.f64 = std::fma(ctx.f13.f64, ctx.f9.f64, -ctx.f5.f64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fctiwz f2,f2
	ctx.f2.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f2,-224(r1)
	ctx.current_instruction = 0x881D1B70;
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.f2.u64);
	// lwz r9,-220(r1)
	ctx.current_instruction = 0x881D1B74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// mullw r31,r9,r9
	ctx.r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// fmsub f13,f13,f11,f5
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f5.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-232(r1)
	ctx.current_instruction = 0x881D1B88;
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.f12.u64);
	// lwz r6,-228(r1)
	ctx.current_instruction = 0x881D1B8C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// mullw r5,r6,r6
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// mullw r6,r5,r6
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// stw r5,-300(r1)
	ctx.current_instruction = 0x881D1B9C;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r5.u32);
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// srawi r6,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r31.s32 >> 8;
	// stw r5,-336(r1)
	ctx.current_instruction = 0x881D1BA8;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// stw r6,-280(r1)
	ctx.current_instruction = 0x881D1BB0;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r6.u32);
	// srawi r6,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// stw r6,-272(r1)
	ctx.current_instruction = 0x881D1BB8;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r6.u32);
	// ble cr6,0x881d2c24
	if (!ctx.cr6.gt) goto loc_881D2C24;
	// lwz r9,84(r3)
	ctx.current_instruction = 0x881D1BC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d2c24
	if (!ctx.cr6.lt) goto loc_881D2C24;
	// lwz r11,88(r3)
	ctx.current_instruction = 0x881D1BD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,-276(r1)
	ctx.current_instruction = 0x881D1BD8;
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881d2e14
	if (!ctx.cr6.gt) goto loc_881D2E14;
loc_881D1BE4:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-360(r1)
	ctx.current_instruction = 0x881D1BEC;
	REX_STORE_U64(ctx.r1.u32 + -360, ctx.f13.u64);
	// lwz r11,-356(r1)
	ctx.current_instruction = 0x881D1BF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// std r6,-216(r1)
	ctx.current_instruction = 0x881D1C00;
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r6.u64);
	// lfd f12,-216(r1)
	ctx.current_instruction = 0x881D1C04;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// fmsub f2,f0,f11,f5
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f5.f64);
	// fctiwz f13,f2
	ctx.f13.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f13,-360(r1)
	ctx.current_instruction = 0x881D1C14;
	REX_STORE_U64(ctx.r1.u32 + -360, ctx.f13.u64);
	// lwz r28,-356(r1)
	ctx.current_instruction = 0x881D1C18;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// ble cr6,0x881d2b00
	if (!ctx.cr6.gt) goto loc_881D2B00;
	// lwz r9,80(r3)
	ctx.current_instruction = 0x881D1C20;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d2b00
	if (!ctx.cr6.lt) goto loc_881D2B00;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x881D1C34;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mullw r4,r28,r28
	ctx.r4.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r28.s32);
	// lbzx r7,r6,r10
	ctx.current_instruction = 0x881D1C3C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// lbz r11,0(r10)
	ctx.current_instruction = 0x881D1C40;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r9,-1(r10)
	ctx.current_instruction = 0x881D1C44;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r5,2(r10)
	ctx.current_instruction = 0x881D1C48;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r8,1(r10)
	ctx.current_instruction = 0x881D1C4C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r27,r6,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r6.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r25,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r4.s32 >> 8;
	// add r24,r6,r10
	ctx.r24.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lbz r31,1(r3)
	ctx.current_instruction = 0x881D1C64;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r20,r11,1
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r6,-1(r27)
	ctx.current_instruction = 0x881D1C6C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r27.u32 + -1);
	// add r15,r7,r8
	ctx.r15.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r10,0(r27)
	ctx.current_instruction = 0x881D1C74;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// subf r16,r31,r7
	ctx.r16.u64 = ctx.r7.u64 - ctx.r31.u64;
	// lbz r29,1(r27)
	ctx.current_instruction = 0x881D1C7C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r27.u32 + 1);
	// add r4,r31,r6
	ctx.r4.u64 = ctx.r31.u64 + ctx.r6.u64;
	// lbz r30,-1(r3)
	ctx.current_instruction = 0x881D1C84;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r3.u32 + -1);
	// add r19,r9,r10
	ctx.r19.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r17,r4,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r26,-1(r24)
	ctx.current_instruction = 0x881D1C90;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r24.u32 + -1);
	// subf r18,r29,r10
	ctx.r18.u64 = ctx.r10.u64 - ctx.r29.u64;
	// lbz r23,1(r24)
	ctx.current_instruction = 0x881D1C98;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r24.u32 + 1);
	// lbz r21,2(r24)
	ctx.current_instruction = 0x881D1C9C;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r24.u32 + 2);
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r4,0(r24)
	ctx.current_instruction = 0x881D1CA4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// add r24,r20,r30
	ctx.r24.u64 = ctx.r20.u64 + ctx.r30.u64;
	// rlwinm r20,r18,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r27,2(r27)
	ctx.current_instruction = 0x881D1CB0;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r27.u32 + 2);
	// subf r18,r26,r17
	ctx.r18.u64 = ctx.r17.u64 - ctx.r26.u64;
	// lbz r3,2(r3)
	ctx.current_instruction = 0x881D1CB8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// add r17,r24,r29
	ctx.r17.u64 = ctx.r24.u64 + ctx.r29.u64;
	// subf r24,r19,r4
	ctx.r24.u64 = ctx.r4.u64 - ctx.r19.u64;
	// subf r20,r4,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r4.u64;
	// subf r19,r27,r18
	ctx.r19.u64 = ctx.r18.u64 - ctx.r27.u64;
	// rlwinm r18,r17,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r20,r6,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r6.u64;
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r23,r18
	ctx.r17.u64 = ctx.r18.u64 - ctx.r23.u64;
	// add r18,r20,r23
	ctx.r18.u64 = ctx.r20.u64 + ctx.r23.u64;
	// add r24,r24,r5
	ctx.r24.u64 = ctx.r24.u64 + ctx.r5.u64;
	// add r20,r19,r21
	ctx.r20.u64 = ctx.r19.u64 + ctx.r21.u64;
	// rlwinm r14,r24,3,0,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r20,-364(r1)
	ctx.current_instruction = 0x881D1CEC;
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r20.u32);
	// subf r20,r3,r17
	ctx.r20.u64 = ctx.r17.u64 - ctx.r3.u64;
	// subf r19,r24,r14
	ctx.r19.u64 = ctx.r14.u64 - ctx.r24.u64;
	// lwz r17,-364(r1)
	ctx.current_instruction = 0x881D1CF8;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// rlwinm r24,r17,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r14,r18,r27
	ctx.r14.u64 = ctx.r18.u64 + ctx.r27.u64;
	// rlwinm r17,r20,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r18,r5,r16
	ctx.r18.u64 = ctx.r16.u64 - ctx.r5.u64;
	// add r16,r19,r24
	ctx.r16.u64 = ctx.r19.u64 + ctx.r24.u64;
	// add r19,r20,r17
	ctx.r19.u64 = ctx.r20.u64 + ctx.r17.u64;
	// rlwinm r20,r14,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r18,r9
	ctx.r24.u64 = ctx.r18.u64 + ctx.r9.u64;
	// subf r18,r21,r20
	ctx.r18.u64 = ctx.r20.u64 - ctx.r21.u64;
	// add r19,r16,r19
	ctx.r19.u64 = ctx.r16.u64 + ctx.r19.u64;
	// mulli r17,r15,13
	ctx.r17.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(13));
	// rlwinm r16,r24,3,0,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r15,r25,r28
	ctx.r15.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r28.s32);
	// add r18,r18,r26
	ctx.r18.u64 = ctx.r18.u64 + ctx.r26.u64;
	// subf r14,r17,r19
	ctx.r14.u64 = ctx.r19.u64 - ctx.r17.u64;
	// subf r19,r24,r16
	ctx.r19.u64 = ctx.r16.u64 - ctx.r24.u64;
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r24,r15,8
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xFF) != 0);
	ctx.r24.s64 = ctx.r15.s32 >> 8;
	// rotlwi r16,r11,2
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// subf r20,r30,r3
	ctx.r20.u64 = ctx.r3.u64 - ctx.r30.u64;
	// srawi r15,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r15.s64 = ctx.r14.s32 >> 1;
	// add r16,r11,r16
	ctx.r16.u64 = ctx.r11.u64 + ctx.r16.u64;
	// add r19,r18,r19
	ctx.r19.u64 = ctx.r18.u64 + ctx.r19.u64;
	// rlwinm r17,r20,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r16,-288(r1)
	ctx.current_instruction = 0x881D1D5C;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r16.u32);
	// mullw r18,r15,r25
	ctx.r18.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r25.s32);
	// stw r18,-344(r1)
	ctx.current_instruction = 0x881D1D64;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r18.u32);
	// add r20,r20,r17
	ctx.r20.u64 = ctx.r20.u64 + ctx.r17.u64;
	// subf r14,r11,r8
	ctx.r14.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r16,r7,r31
	ctx.r16.u64 = ctx.r31.u64 - ctx.r7.u64;
	// add r20,r19,r20
	ctx.r20.u64 = ctx.r19.u64 + ctx.r20.u64;
	// subf r19,r30,r9
	ctx.r19.u64 = ctx.r9.u64 - ctx.r30.u64;
	// stw r20,-364(r1)
	ctx.current_instruction = 0x881D1D7C;
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r20.u32);
	// subf r20,r23,r4
	ctx.r20.u64 = ctx.r4.u64 - ctx.r23.u64;
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r3,r20
	ctx.r17.u64 = ctx.r20.u64 - ctx.r3.u64;
	// subf r20,r5,r19
	ctx.r20.u64 = ctx.r19.u64 - ctx.r5.u64;
	// subf r19,r11,r10
	ctx.r19.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r20,r6,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r6.u64;
	// subf r19,r6,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r6.u64;
	// add r18,r20,r26
	ctx.r18.u64 = ctx.r20.u64 + ctx.r26.u64;
	// rlwinm r20,r19,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r15,r18,r3
	ctx.r15.u64 = ctx.r18.u64 + ctx.r3.u64;
	// subf r3,r8,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r8.u64;
	// subf r19,r4,r20
	ctx.r19.u64 = ctx.r20.u64 - ctx.r4.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r19,r19,r26
	ctx.r19.u64 = ctx.r19.u64 + ctx.r26.u64;
	// rlwinm r20,r3,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r9,r17
	ctx.r18.u64 = ctx.r17.u64 - ctx.r9.u64;
	// stw r20,-304(r1)
	ctx.current_instruction = 0x881D1DC0;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r20.u32);
	// add r19,r19,r7
	ctx.r19.u64 = ctx.r19.u64 + ctx.r7.u64;
	// subf r20,r4,r8
	ctx.r20.u64 = ctx.r8.u64 - ctx.r4.u64;
	// subf r17,r10,r18
	ctx.r17.u64 = ctx.r18.u64 - ctx.r10.u64;
	// stw r19,-284(r1)
	ctx.current_instruction = 0x881D1DD0;
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r19.u32);
	// subf r19,r31,r20
	ctx.r19.u64 = ctx.r20.u64 - ctx.r31.u64;
	// add r18,r17,r30
	ctx.r18.u64 = ctx.r17.u64 + ctx.r30.u64;
	// lwz r17,-364(r1)
	ctx.current_instruction = 0x881D1DDC;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// add r19,r19,r10
	ctx.r19.u64 = ctx.r19.u64 + ctx.r10.u64;
	// rlwinm r20,r15,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r18,r5
	ctx.r18.u64 = ctx.r18.u64 + ctx.r5.u64;
	// stw r19,-364(r1)
	ctx.current_instruction = 0x881D1DEC;
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r19.u32);
	// subf r15,r21,r20
	ctx.r15.u64 = ctx.r20.u64 - ctx.r21.u64;
	// add r20,r18,r29
	ctx.r20.u64 = ctx.r18.u64 + ctx.r29.u64;
	// mulli r18,r14,11
	ctx.r18.s64 = static_cast<int64_t>(ctx.r14.u64 * static_cast<uint64_t>(11));
	// stw r18,-308(r1)
	ctx.current_instruction = 0x881D1DFC;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r18.u32);
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r15,r27
	ctx.r19.u64 = ctx.r15.u64 + ctx.r27.u64;
	// lwz r18,-304(r1)
	ctx.current_instruction = 0x881D1E08;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// rotlwi r16,r7,1
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// stw r20,-256(r1)
	ctx.current_instruction = 0x881D1E10;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r20.u32);
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 + ctx.r18.u64;
	// lwz r14,-284(r1)
	ctx.current_instruction = 0x881D1E1C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// stw r3,-368(r1)
	ctx.current_instruction = 0x881D1E20;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r3.u32);
	// subf r20,r8,r31
	ctx.r20.u64 = ctx.r31.u64 - ctx.r8.u64;
	// stw r19,-296(r1)
	ctx.current_instruction = 0x881D1E28;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r19.u32);
	// rlwinm r19,r14,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r17,-304(r1)
	ctx.current_instruction = 0x881D1E30;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r17.u32);
	// rlwinm r17,r20,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r16,r10
	ctx.r18.u64 = ctx.r16.u64 + ctx.r10.u64;
	// lwz r3,-364(r1)
	ctx.current_instruction = 0x881D1E3C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// add r20,r20,r17
	ctx.r20.u64 = ctx.r20.u64 + ctx.r17.u64;
	// rotlwi r17,r30,2
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r30.u32, 2);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// rlwinm r14,r3,3,0,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r3,r29,r23
	ctx.r3.u64 = ctx.r23.u64 - ctx.r29.u64;
	// lwz r23,-308(r1)
	ctx.current_instruction = 0x881D1E54;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// add r20,r19,r20
	ctx.r20.u64 = ctx.r19.u64 + ctx.r20.u64;
	// add r19,r30,r17
	ctx.r19.u64 = ctx.r30.u64 + ctx.r17.u64;
	// lwz r17,-288(r1)
	ctx.current_instruction = 0x881D1E60;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// rotlwi r15,r9,3
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r20,r19,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r19.u64;
	// subf r19,r16,r14
	ctx.r19.u64 = ctx.r14.u64 - ctx.r16.u64;
	// lwz r14,-304(r1)
	ctx.current_instruction = 0x881D1E70;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// stw r23,-308(r1)
	ctx.current_instruction = 0x881D1E74;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r23.u32);
	// subf r23,r9,r15
	ctx.r23.u64 = ctx.r15.u64 - ctx.r9.u64;
	// subf r16,r11,r7
	ctx.r16.u64 = ctx.r7.u64 - ctx.r11.u64;
	// lwz r15,-308(r1)
	ctx.current_instruction = 0x881D1E80;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// add r23,r20,r23
	ctx.r23.u64 = ctx.r20.u64 + ctx.r23.u64;
	// lwz r20,-296(r1)
	ctx.current_instruction = 0x881D1E88;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// add r15,r14,r15
	ctx.r15.u64 = ctx.r14.u64 + ctx.r15.u64;
	// stw r23,-296(r1)
	ctx.current_instruction = 0x881D1E90;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r23.u32);
	// mulli r23,r16,11
	ctx.r23.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(11));
	// lwz r14,-256(r1)
	ctx.current_instruction = 0x881D1E98;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r16,-368(r1)
	ctx.current_instruction = 0x881D1E9C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r20,r19
	ctx.r20.u64 = ctx.r20.u64 + ctx.r19.u64;
	// subf r18,r17,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r17.u64;
	// add r16,r14,r16
	ctx.r16.u64 = ctx.r14.u64 + ctx.r16.u64;
	// srawi r15,r15,1
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x1) != 0);
	ctx.r15.s64 = ctx.r15.s32 >> 1;
	// rlwinm r19,r3,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r14,r4,r18
	ctx.r14.u64 = ctx.r18.u64 - ctx.r4.u64;
	// lwz r18,-296(r1)
	ctx.current_instruction = 0x881D1EBC;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// subf r16,r26,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r26.u64;
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + ctx.r19.u64;
	// add r23,r20,r23
	ctx.r23.u64 = ctx.r20.u64 + ctx.r23.u64;
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// subf r20,r27,r16
	ctx.r20.u64 = ctx.r16.u64 - ctx.r27.u64;
	// srawi r16,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r16.s64 = ctx.r14.s32 >> 1;
	// stw r18,-368(r1)
	ctx.current_instruction = 0x881D1ED8;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r18.u32);
	// add r14,r23,r3
	ctx.r14.u64 = ctx.r23.u64 + ctx.r3.u64;
	// lwz r3,-368(r1)
	ctx.current_instruction = 0x881D1EE0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// mullw r19,r3,r28
	ctx.r19.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r28.s32);
	// lwz r3,-300(r1)
	ctx.current_instruction = 0x881D1EE8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// mullw r18,r15,r24
	ctx.r18.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r24.s32);
	// lwz r15,-344(r1)
	ctx.current_instruction = 0x881D1EF0;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// stw r3,-344(r1)
	ctx.current_instruction = 0x881D1EF4;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r3.u32);
	// add r18,r15,r18
	ctx.r18.u64 = ctx.r15.u64 + ctx.r18.u64;
	// add r3,r20,r21
	ctx.r3.u64 = ctx.r20.u64 + ctx.r21.u64;
	// subf r20,r11,r9
	ctx.r20.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r21,r18,r19
	ctx.r21.u64 = ctx.r18.u64 + ctx.r19.u64;
	// rlwinm r23,r16,8,0,23
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// srawi r19,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r19.s64 = ctx.r14.s32 >> 1;
	// subf r20,r6,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r6.u64;
	// add r23,r21,r23
	ctx.r23.u64 = ctx.r21.u64 + ctx.r23.u64;
	// mullw r3,r3,r24
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r24.s32);
	// mullw r21,r19,r25
	ctx.r21.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r25.s32);
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r21,r3
	ctx.r18.u64 = ctx.r21.u64 + ctx.r3.u64;
	// subf r3,r5,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r5.u64;
	// subf r21,r9,r30
	ctx.r21.u64 = ctx.r30.u64 - ctx.r9.u64;
	// subf r20,r10,r29
	ctx.r20.u64 = ctx.r29.u64 - ctx.r10.u64;
	// subf r30,r7,r31
	ctx.r30.u64 = ctx.r31.u64 - ctx.r7.u64;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// rlwinm r19,r21,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r30,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r16,r3,r27
	ctx.r16.u64 = ctx.r3.u64 + ctx.r27.u64;
	// subf r15,r31,r20
	ctx.r15.u64 = ctx.r20.u64 - ctx.r31.u64;
	// subf r14,r26,r19
	ctx.r14.u64 = ctx.r19.u64 - ctx.r26.u64;
	// add r26,r30,r21
	ctx.r26.u64 = ctx.r30.u64 + ctx.r21.u64;
	// rotlwi r20,r8,1
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rotlwi r21,r29,2
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// subf r3,r8,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r19,r16,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r31,r14
	ctx.r16.u64 = ctx.r14.u64 - ctx.r31.u64;
	// add r20,r20,r9
	ctx.r20.u64 = ctx.r20.u64 + ctx.r9.u64;
	// subf r15,r8,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r8.u64;
	// rlwinm r31,r3,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r21
	ctx.r29.u64 = ctx.r29.u64 + ctx.r21.u64;
	// add r26,r19,r26
	ctx.r26.u64 = ctx.r19.u64 + ctx.r26.u64;
	// subf r30,r7,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r7.u64;
	// rotlwi r19,r10,3
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// subf r15,r9,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r9.u64;
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r7,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r7.u64;
	// add r14,r3,r31
	ctx.r14.u64 = ctx.r3.u64 + ctx.r31.u64;
	// subf r26,r29,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r29.u64;
	// rlwinm r21,r30,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r10,r19
	ctx.r29.u64 = ctx.r19.u64 - ctx.r10.u64;
	// subf r31,r27,r15
	ctx.r31.u64 = ctx.r15.u64 - ctx.r27.u64;
	// subf r20,r17,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r17.u64;
	// subf r3,r10,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r10.u64;
	// subf r27,r9,r14
	ctx.r27.u64 = ctx.r14.u64 - ctx.r9.u64;
	// add r29,r26,r29
	ctx.r29.u64 = ctx.r26.u64 + ctx.r29.u64;
	// add r30,r30,r21
	ctx.r30.u64 = ctx.r30.u64 + ctx.r21.u64;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subf r26,r5,r20
	ctx.r26.u64 = ctx.r20.u64 - ctx.r5.u64;
	// add r27,r27,r5
	ctx.r27.u64 = ctx.r27.u64 + ctx.r5.u64;
	// subf r30,r10,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r10.u64;
	// srawi r29,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 1;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r31,r31,r7
	ctx.r31.u64 = ctx.r31.u64 + ctx.r7.u64;
	// srawi r26,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 1;
	// srawi r27,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 1;
	// add r30,r30,r4
	ctx.r30.u64 = ctx.r30.u64 + ctx.r4.u64;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mullw r31,r26,r25
	ctx.r31.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r25.s32);
	// mullw r3,r27,r24
	ctx.r3.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r24.s32);
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r27,r9,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lwz r16,-344(r1)
	ctx.current_instruction = 0x881D2000;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r9,r31,r3
	ctx.r9.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lwz r31,-336(r1)
	ctx.current_instruction = 0x881D2008;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// srawi r3,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r30.s32 >> 1;
	// srawi r26,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r8.s32 >> 1;
	// add r30,r5,r6
	ctx.r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mullw r8,r3,r31
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// subf r5,r10,r27
	ctx.r5.u64 = ctx.r27.u64 - ctx.r10.u64;
	// subf r27,r10,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mullw r9,r26,r28
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r28.s32);
	// mullw r7,r4,r28
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,-228(r1)
	ctx.current_instruction = 0x881D2040;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// mullw r4,r30,r24
	ctx.r4.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r24.s32);
	// mullw r3,r29,r25
	ctx.r3.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r25.s32);
	// srawi r30,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r27.s32 >> 1;
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mullw r6,r8,r28
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// add r7,r18,r7
	ctx.r7.u64 = ctx.r18.u64 + ctx.r7.u64;
	// mullw r8,r30,r10
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mullw r23,r23,r16
	ctx.r23.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r16.s32);
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r8,r23,r7
	ctx.r8.u64 = ctx.r23.u64 + ctx.r7.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x881d20a0
	if (!ctx.cr6.gt) goto loc_881D20A0;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x881d20ac
	goto loc_881D20AC;
loc_881D20A0:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_881D20AC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,-352(r1)
	ctx.current_instruction = 0x881D20B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r9,-312(r1)
	ctx.current_instruction = 0x881D20B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,-352(r1)
	ctx.current_instruction = 0x881D20C0;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// stb r10,1(r11)
	ctx.current_instruction = 0x881D20C4;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// beq cr6,0x881d2ab8
	if (ctx.cr6.eq) goto loc_881D2AB8;
	// fmul f13,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64 * ctx.f10.f64;
	// lwz r11,-236(r1)
	ctx.current_instruction = 0x881D20D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// lwz r8,-264(r1)
	ctx.current_instruction = 0x881D20D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// addi r9,r22,1
	ctx.r9.s64 = ctx.r22.s64 + 1;
	// mullw r10,r11,r22
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-360(r1)
	ctx.current_instruction = 0x881D20E4;
	REX_STORE_U64(ctx.r1.u32 + -360, ctx.f12.u64);
	// lwz r11,-356(r1)
	ctx.current_instruction = 0x881D20E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r6,-184(r1)
	ctx.current_instruction = 0x881D20F8;
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r6.u64);
	// rlwinm r23,r22,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,-360(r1)
	ctx.current_instruction = 0x881D2104;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r11.u32);
	// addi r4,r22,-1
	ctx.r4.s64 = ctx.r22.s64 + -1;
	// subf r24,r22,r10
	ctx.r24.u64 = ctx.r10.u64 - ctx.r22.u64;
	// addi r3,r23,-1
	ctx.r3.s64 = ctx.r23.s64 + -1;
	// addi r30,r23,1
	ctx.r30.s64 = ctx.r23.s64 + 1;
	// lbz r11,0(r10)
	ctx.current_instruction = 0x881D2118;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r29,r22,2
	ctx.r29.s64 = ctx.r22.s64 + 2;
	// lbzx r26,r9,r10
	ctx.current_instruction = 0x881D2120;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r19,r23,2
	ctx.r19.s64 = ctx.r23.s64 + 2;
	// lbz r5,-1(r24)
	ctx.current_instruction = 0x881D2128;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r24.u32 + -1);
	// rotlwi r7,r11,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lbz r8,0(r24)
	ctx.current_instruction = 0x881D2130;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r9,-1(r10)
	ctx.current_instruction = 0x881D2138;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// add r31,r26,r5
	ctx.r31.u64 = ctx.r26.u64 + ctx.r5.u64;
	// lbzx r27,r4,r10
	ctx.current_instruction = 0x881D2140;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r21,r9,r8
	ctx.r21.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r25,r3,r10
	ctx.current_instruction = 0x881D214C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// lbz r28,1(r24)
	ctx.current_instruction = 0x881D2150;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r24.u32 + 1);
	// add r7,r6,r27
	ctx.r7.u64 = ctx.r6.u64 + ctx.r27.u64;
	// rlwinm r3,r31,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r31,r23,r10
	ctx.current_instruction = 0x881D215C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r10.u32);
	// rlwinm r6,r21,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r20,r30,r10
	ctx.current_instruction = 0x881D2164;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// add r18,r7,r28
	ctx.r18.u64 = ctx.r7.u64 + ctx.r28.u64;
	// lbz r24,2(r24)
	ctx.current_instruction = 0x881D216C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r24.u32 + 2);
	// subf r3,r25,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r25.u64;
	// lbz r30,2(r10)
	ctx.current_instruction = 0x881D2174;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// subf r7,r6,r31
	ctx.r7.u64 = ctx.r31.u64 - ctx.r6.u64;
	// stw r4,-288(r1)
	ctx.current_instruction = 0x881D217C;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r4.u32);
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r21,r29,r10
	ctx.current_instruction = 0x881D2184;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// lfd f5,-184(r1)
	ctx.current_instruction = 0x881D2188;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r24.u64;
	// fcfid f2,f5
	ctx.f2.f64 = double(ctx.f5.s64);
	// add r4,r7,r30
	ctx.r4.u64 = ctx.r7.u64 + ctx.r30.u64;
	// subf r7,r20,r18
	ctx.r7.u64 = ctx.r18.u64 - ctx.r20.u64;
	// lbzx r19,r19,r10
	ctx.current_instruction = 0x881D219C;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r10.u32);
	// rlwinm r29,r3,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r6,r10,r22
	ctx.current_instruction = 0x881D21A4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r22.u32);
	// rlwinm r18,r4,3,0,28
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r10,1(r10)
	ctx.current_instruction = 0x881D21AC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r3,r21,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r21.u64;
	// add r17,r29,r19
	ctx.r17.u64 = ctx.r29.u64 + ctx.r19.u64;
	// subf r29,r4,r18
	ctx.r29.u64 = ctx.r18.u64 - ctx.r4.u64;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r17,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// fmsub f13,f0,f9,f2
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f9.f64, -ctx.f2.f64);
	// subf r7,r28,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r28.u64;
	// add r29,r29,r18
	ctx.r29.u64 = ctx.r29.u64 + ctx.r18.u64;
	// add r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// mulli r4,r4,13
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(13));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-344(r1)
	ctx.current_instruction = 0x881D21E8;
	REX_STORE_U64(ctx.r1.u32 + -344, ctx.f12.u64);
	// subf r18,r31,r7
	ctx.r18.u64 = ctx.r7.u64 - ctx.r31.u64;
	// lwz r7,-340(r1)
	ctx.current_instruction = 0x881D21F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// subf r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mullw r4,r7,r7
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// mullw r29,r4,r7
	ctx.r29.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// srawi r29,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 8;
	// srawi r14,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r3.s32 >> 1;
	// subf r3,r27,r21
	ctx.r3.u64 = ctx.r21.u64 - ctx.r27.u64;
	// stw r3,-364(r1)
	ctx.current_instruction = 0x881D2210;
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r3.u32);
	// subf r3,r5,r18
	ctx.r3.u64 = ctx.r18.u64 - ctx.r5.u64;
	// subf r16,r31,r10
	ctx.r16.u64 = ctx.r10.u64 - ctx.r31.u64;
	// lwz r17,-288(r1)
	ctx.current_instruction = 0x881D221C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// add r3,r3,r20
	ctx.r3.u64 = ctx.r3.u64 + ctx.r20.u64;
	// std r23,-328(r1)
	ctx.current_instruction = 0x881D2224;
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.r23.u64);
	// subf r18,r26,r16
	ctx.r18.u64 = ctx.r16.u64 - ctx.r26.u64;
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// stw r18,-368(r1)
	ctx.current_instruction = 0x881D2230;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r18.u32);
	// subf r15,r26,r6
	ctx.r15.u64 = ctx.r6.u64 - ctx.r26.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r17,-312(r1)
	ctx.current_instruction = 0x881D223C;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r17.u32);
	// subf r16,r11,r8
	ctx.r16.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r18,r27,r9
	ctx.r18.u64 = ctx.r9.u64 - ctx.r27.u64;
	// stw r3,-344(r1)
	ctx.current_instruction = 0x881D2248;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r3.u32);
	// subf r3,r30,r15
	ctx.r3.u64 = ctx.r15.u64 - ctx.r30.u64;
	// lwz r15,-344(r1)
	ctx.current_instruction = 0x881D2250;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r16,r5,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r5.u64;
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r15,r19,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r19.u64;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r30,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r30.u64;
	// add r15,r15,r25
	ctx.r15.u64 = ctx.r15.u64 + ctx.r25.u64;
	// subf r16,r31,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r31.u64;
	// subf r17,r5,r18
	ctx.r17.u64 = ctx.r18.u64 - ctx.r5.u64;
	// stw r15,-344(r1)
	ctx.current_instruction = 0x881D2274;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r15.u32);
	// add r15,r16,r25
	ctx.r15.u64 = ctx.r16.u64 + ctx.r25.u64;
	// lwz r23,-344(r1)
	ctx.current_instruction = 0x881D227C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r16,r17,r25
	ctx.r16.u64 = ctx.r17.u64 + ctx.r25.u64;
	// lwz r17,-364(r1)
	ctx.current_instruction = 0x881D2288;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// rlwinm r18,r3,3,0,28
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r16,r16,r21
	ctx.r16.u64 = ctx.r16.u64 + ctx.r21.u64;
	// subf r3,r3,r18
	ctx.r3.u64 = ctx.r18.u64 - ctx.r3.u64;
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// stw r17,-344(r1)
	ctx.current_instruction = 0x881D229C;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r17.u32);
	// rlwinm r17,r23,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r17,r3
	ctx.r3.u64 = ctx.r17.u64 + ctx.r3.u64;
	// lwz r17,-344(r1)
	ctx.current_instruction = 0x881D22A8;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// stw r18,-296(r1)
	ctx.current_instruction = 0x881D22AC;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r18.u32);
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r18,r10,r26
	ctx.r18.u64 = ctx.r26.u64 - ctx.r10.u64;
	// stw r17,-344(r1)
	ctx.current_instruction = 0x881D22B8;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r17.u32);
	// lwz r23,-368(r1)
	ctx.current_instruction = 0x881D22BC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// rlwinm r17,r18,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,-368(r1)
	ctx.current_instruction = 0x881D22C4;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r3.u32);
	// add r3,r15,r6
	ctx.r3.u64 = ctx.r15.u64 + ctx.r6.u64;
	// lwz r15,-344(r1)
	ctx.current_instruction = 0x881D22CC;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r18,r18,r17
	ctx.r18.u64 = ctx.r18.u64 + ctx.r17.u64;
	// stw r15,-344(r1)
	ctx.current_instruction = 0x881D22D4;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r15.u32);
	// rlwinm r17,r16,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r16,-368(r1)
	ctx.current_instruction = 0x881D22DC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r18,-256(r1)
	ctx.current_instruction = 0x881D22E4;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r18.u32);
	// subf r15,r11,r10
	ctx.r15.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r3,-308(r1)
	ctx.current_instruction = 0x881D22EC;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r3.u32);
	// add r3,r23,r8
	ctx.r3.u64 = ctx.r23.u64 + ctx.r8.u64;
	// mulli r18,r15,11
	ctx.r18.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(11));
	// stw r18,-284(r1)
	ctx.current_instruction = 0x881D22F8;
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r18.u32);
	// stw r3,-364(r1)
	ctx.current_instruction = 0x881D22FC;
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r3.u32);
	// lwz r15,-344(r1)
	ctx.current_instruction = 0x881D2300;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r18,r19,r17
	ctx.r18.u64 = ctx.r17.u64 - ctx.r19.u64;
	// rotlwi r3,r9,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// stw r18,-304(r1)
	ctx.current_instruction = 0x881D230C;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r18.u32);
	// rotlwi r18,r6,1
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r17,r27,2
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r27.u32, 2);
	// add r23,r18,r8
	ctx.r23.u64 = ctx.r18.u64 + ctx.r8.u64;
	// subf r18,r9,r3
	ctx.r18.u64 = ctx.r3.u64 - ctx.r9.u64;
	// lwz r3,-296(r1)
	ctx.current_instruction = 0x881D2320;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// std r22,-296(r1)
	ctx.current_instruction = 0x881D2324;
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.r22.u64);
	// add r17,r27,r17
	ctx.r17.u64 = ctx.r27.u64 + ctx.r17.u64;
	// add r3,r3,r15
	ctx.r3.u64 = ctx.r3.u64 + ctx.r15.u64;
	// mullw r15,r14,r4
	ctx.r15.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r4.s32);
	// lwz r14,-256(r1)
	ctx.current_instruction = 0x881D2334;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r22,-308(r1)
	ctx.current_instruction = 0x881D2338;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// stw r15,-344(r1)
	ctx.current_instruction = 0x881D233C;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r15.u32);
	// lwz r15,-284(r1)
	ctx.current_instruction = 0x881D2340;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// add r3,r16,r3
	ctx.r3.u64 = ctx.r16.u64 + ctx.r3.u64;
	// add r16,r22,r14
	ctx.r16.u64 = ctx.r22.u64 + ctx.r14.u64;
	// lwz r14,-364(r1)
	ctx.current_instruction = 0x881D234C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// add r15,r3,r15
	ctx.r15.u64 = ctx.r3.u64 + ctx.r15.u64;
	// subf r3,r17,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r17.u64;
	// lwz r17,-304(r1)
	ctx.current_instruction = 0x881D2358;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// rlwinm r16,r23,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r22,-312(r1)
	ctx.current_instruction = 0x881D2360;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// add r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 + ctx.r18.u64;
	// stw r3,-368(r1)
	ctx.current_instruction = 0x881D2368;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r3.u32);
	// add r17,r17,r24
	ctx.r17.u64 = ctx.r17.u64 + ctx.r24.u64;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// rlwinm r14,r14,3,0,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r3,r17,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r23,r14
	ctx.r18.u64 = ctx.r14.u64 - ctx.r23.u64;
	// lwz r14,-344(r1)
	ctx.current_instruction = 0x881D2380;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r17,r11,r6
	ctx.r17.u64 = ctx.r6.u64 - ctx.r11.u64;
	// lwz r23,-280(r1)
	ctx.current_instruction = 0x881D2388;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r18,r3,r18
	ctx.r18.u64 = ctx.r3.u64 + ctx.r18.u64;
	// mulli r17,r17,11
	ctx.r17.s64 = static_cast<int64_t>(ctx.r17.u64 * static_cast<uint64_t>(11));
	// stw r17,-344(r1)
	ctx.current_instruction = 0x881D2394;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r17.u32);
	// subf r3,r28,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r28.u64;
	// subf r16,r22,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r22.u64;
	// rlwinm r17,r3,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r15,r15,1
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x1) != 0);
	ctx.r15.s64 = ctx.r15.s32 >> 1;
	// lwz r22,-368(r1)
	ctx.current_instruction = 0x881D23A8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// subf r16,r31,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r31.u64;
	// stw r17,-368(r1)
	ctx.current_instruction = 0x881D23B0;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r17.u32);
	// mullw r17,r15,r29
	ctx.r17.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r29.s32);
	// srawi r22,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 1;
	// add r17,r14,r17
	ctx.r17.u64 = ctx.r14.u64 + ctx.r17.u64;
	// subf r15,r20,r31
	ctx.r15.u64 = ctx.r31.u64 - ctx.r20.u64;
	// lwz r20,-344(r1)
	ctx.current_instruction = 0x881D23C4;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// srawi r14,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r16.s32 >> 1;
	// mullw r16,r22,r7
	ctx.r16.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r7.s32);
	// lwz r22,-368(r1)
	ctx.current_instruction = 0x881D23D0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// add r20,r18,r20
	ctx.r20.u64 = ctx.r18.u64 + ctx.r20.u64;
	// subf r15,r21,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r21.u64;
	// add r18,r3,r22
	ctx.r18.u64 = ctx.r3.u64 + ctx.r22.u64;
	// add r3,r17,r16
	ctx.r3.u64 = ctx.r17.u64 + ctx.r16.u64;
	// rlwinm r21,r14,8,0,23
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 8) & 0xFFFFFF00;
	// subf r17,r9,r15
	ctx.r17.u64 = ctx.r15.u64 - ctx.r9.u64;
	// add r21,r3,r21
	ctx.r21.u64 = ctx.r3.u64 + ctx.r21.u64;
	// subf r3,r8,r17
	ctx.r3.u64 = ctx.r17.u64 - ctx.r8.u64;
	// add r18,r20,r18
	ctx.r18.u64 = ctx.r20.u64 + ctx.r18.u64;
	// add r20,r3,r27
	ctx.r20.u64 = ctx.r3.u64 + ctx.r27.u64;
	// subf r3,r6,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r6.u64;
	// subf r16,r11,r9
	ctx.r16.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r17,r10,r3
	ctx.r17.u64 = ctx.r3.u64 - ctx.r10.u64;
	// subf r15,r9,r27
	ctx.r15.u64 = ctx.r27.u64 - ctx.r9.u64;
	// subf r16,r5,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r5.u64;
	// add r27,r17,r11
	ctx.r27.u64 = ctx.r17.u64 + ctx.r11.u64;
	// add r20,r20,r30
	ctx.r20.u64 = ctx.r20.u64 + ctx.r30.u64;
	// subf r14,r8,r28
	ctx.r14.u64 = ctx.r28.u64 - ctx.r8.u64;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r27,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r20,r28
	ctx.r20.u64 = ctx.r20.u64 + ctx.r28.u64;
	// rlwinm r15,r15,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r14,r14,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r30,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r30.u64;
	// add r17,r27,r17
	ctx.r17.u64 = ctx.r27.u64 + ctx.r17.u64;
	// subf r14,r26,r14
	ctx.r14.u64 = ctx.r14.u64 - ctx.r26.u64;
	// subf r15,r25,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r25.u64;
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r16,r10
	ctx.r27.u64 = ctx.r16.u64 + ctx.r10.u64;
	// add r20,r20,r17
	ctx.r20.u64 = ctx.r20.u64 + ctx.r17.u64;
	// subf r15,r26,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r26.u64;
	// subf r16,r10,r14
	ctx.r16.u64 = ctx.r14.u64 - ctx.r10.u64;
	// add r27,r27,r24
	ctx.r27.u64 = ctx.r27.u64 + ctx.r24.u64;
	// rlwinm r26,r3,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r14,r25,r20
	ctx.r14.u64 = ctx.r20.u64 - ctx.r25.u64;
	// subf r15,r6,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r6.u64;
	// subf r16,r9,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r9.u64;
	// add r17,r3,r26
	ctx.r17.u64 = ctx.r3.u64 + ctx.r26.u64;
	// rlwinm r20,r27,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r24,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r24.u64;
	// subf r26,r24,r14
	ctx.r26.u64 = ctx.r14.u64 - ctx.r24.u64;
	// rotlwi r25,r28,2
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// subf r27,r8,r15
	ctx.r27.u64 = ctx.r15.u64 - ctx.r8.u64;
	// add r24,r20,r17
	ctx.r24.u64 = ctx.r20.u64 + ctx.r17.u64;
	// add r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 + ctx.r25.u64;
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// rotlwi r17,r8,3
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r20,r26,r19
	ctx.r20.u64 = ctx.r26.u64 + ctx.r19.u64;
	// subf r26,r28,r24
	ctx.r26.u64 = ctx.r24.u64 - ctx.r28.u64;
	// lwz r16,-288(r1)
	ctx.current_instruction = 0x881D249C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// add r25,r27,r10
	ctx.r25.u64 = ctx.r27.u64 + ctx.r10.u64;
	// ld r22,-296(r1)
	ctx.current_instruction = 0x881D24A4;
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// subf r24,r8,r17
	ctx.r24.u64 = ctx.r17.u64 - ctx.r8.u64;
	// add r27,r3,r30
	ctx.r27.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r20,r20,r5
	ctx.r20.u64 = ctx.r20.u64 + ctx.r5.u64;
	// add r24,r26,r24
	ctx.r24.u64 = ctx.r26.u64 + ctx.r24.u64;
	// rotlwi r28,r10,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// srawi r3,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r18.s32 >> 1;
	// add r26,r27,r11
	ctx.r26.u64 = ctx.r27.u64 + ctx.r11.u64;
	// subf r19,r9,r11
	ctx.r19.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r25,r25,r11
	ctx.r25.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r17,r28,r9
	ctx.r17.u64 = ctx.r28.u64 + ctx.r9.u64;
	// mullw r18,r3,r4
	ctx.r18.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// mullw r27,r20,r29
	ctx.r27.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r29.s32);
	// add r28,r26,r5
	ctx.r28.u64 = ctx.r26.u64 + ctx.r5.u64;
	// srawi r24,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 1;
	// add r15,r25,r5
	ctx.r15.u64 = ctx.r25.u64 + ctx.r5.u64;
	// subf r20,r8,r19
	ctx.r20.u64 = ctx.r19.u64 - ctx.r8.u64;
	// add r25,r18,r27
	ctx.r25.u64 = ctx.r18.u64 + ctx.r27.u64;
	// mullw r26,r28,r29
	ctx.r26.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// subf r3,r6,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// mullw r27,r24,r4
	ctx.r27.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r4.s32);
	// add r5,r20,r5
	ctx.r5.u64 = ctx.r20.u64 + ctx.r5.u64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r26,r5,r7
	ctx.r26.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// subf r5,r10,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mullw r24,r15,r7
	ctx.r24.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// rlwinm r28,r17,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r5,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r25,r24
	ctx.r24.u64 = ctx.r25.u64 + ctx.r24.u64;
	// lwz r25,-272(r1)
	ctx.current_instruction = 0x881D2524;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// subf r3,r8,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r8.u64;
	// subf r20,r16,r28
	ctx.r20.u64 = ctx.r28.u64 - ctx.r16.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// add r26,r3,r31
	ctx.r26.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r3,-220(r1)
	ctx.current_instruction = 0x881D2538;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// mullw r28,r24,r25
	ctx.r28.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r25.s32);
	// mullw r21,r21,r23
	ctx.r21.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r23.s32);
	// ld r23,-328(r1)
	ctx.current_instruction = 0x881D2544;
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
	// subf r24,r30,r20
	ctx.r24.u64 = ctx.r20.u64 - ctx.r30.u64;
	// subf r5,r9,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r9.u64;
	// add r31,r21,r28
	ctx.r31.u64 = ctx.r21.u64 + ctx.r28.u64;
	// mullw r28,r27,r3
	ctx.r28.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r3.s32);
	// srawi r24,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 1;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// srawi r27,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r26.s32 >> 1;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// mullw r28,r24,r4
	ctx.r28.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r4.s32);
	// mullw r27,r27,r25
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r25.s32);
	// subf r30,r9,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mullw r9,r5,r29
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// add r10,r28,r27
	ctx.r10.u64 = ctx.r28.u64 + ctx.r27.u64;
	// srawi r5,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r30.s32 >> 1;
	// subf r8,r8,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r5,r7
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r6,r3
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x881d25c4
	if (!ctx.cr6.gt) goto loc_881D25C4;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x881d25d0
	goto loc_881D25D0;
loc_881D25C4:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_881D25D0:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,-320(r1)
	ctx.current_instruction = 0x881D25D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r10,-360(r1)
	ctx.current_instruction = 0x881D25D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// addi r6,r22,-1
	ctx.r6.s64 = ctx.r22.s64 + -1;
	// lwz r5,-268(r1)
	ctx.current_instruction = 0x881D25E0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// addi r9,r22,1
	ctx.r9.s64 = ctx.r22.s64 + 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stb r8,1(r11)
	ctx.current_instruction = 0x881D25F0;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// subf r20,r22,r10
	ctx.r20.u64 = ctx.r10.u64 - ctx.r22.u64;
	// stw r3,-320(r1)
	ctx.current_instruction = 0x881D25F8;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r3.u32);
	// lbzx r26,r9,r10
	ctx.current_instruction = 0x881D25FC;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r5,r10,r22
	ctx.current_instruction = 0x881D2600;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r22.u32);
	// lbz r30,2(r10)
	ctx.current_instruction = 0x881D2604;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r9,-1(r10)
	ctx.current_instruction = 0x881D2608;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r8,0(r20)
	ctx.current_instruction = 0x881D260C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// lbz r11,0(r10)
	ctx.current_instruction = 0x881D2610;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbzx r27,r6,r10
	ctx.current_instruction = 0x881D2618;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// addi r6,r23,1
	ctx.r6.s64 = ctx.r23.s64 + 1;
	// lbz r28,1(r20)
	ctx.current_instruction = 0x881D2620;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r20.u32 + 1);
	// add r24,r3,r27
	ctx.r24.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lbz r31,-1(r20)
	ctx.current_instruction = 0x881D2628;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r20.u32 + -1);
	// subf r3,r26,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r26.u64;
	// add r18,r24,r28
	ctx.r18.u64 = ctx.r24.u64 + ctx.r28.u64;
	// lbz r24,2(r20)
	ctx.current_instruction = 0x881D2634;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r20.u32 + 2);
	// lbzx r21,r6,r10
	ctx.current_instruction = 0x881D2638;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// addi r6,r23,-1
	ctx.r6.s64 = ctx.r23.s64 + -1;
	// subf r19,r30,r3
	ctx.r19.u64 = ctx.r3.u64 - ctx.r30.u64;
	// rlwinm r3,r18,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r19,r9
	ctx.r19.u64 = ctx.r19.u64 + ctx.r9.u64;
	// add r16,r26,r31
	ctx.r16.u64 = ctx.r26.u64 + ctx.r31.u64;
	// lbzx r25,r6,r10
	ctx.current_instruction = 0x881D2650;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// addi r6,r23,2
	ctx.r6.s64 = ctx.r23.s64 + 2;
	// rlwinm r17,r19,3,0,28
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r18,r21,r3
	ctx.r18.u64 = ctx.r3.u64 - ctx.r21.u64;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r20,r6,r10
	ctx.current_instruction = 0x881D2664;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// addi r6,r22,2
	ctx.r6.s64 = ctx.r22.s64 + 2;
	// lbzx r3,r6,r10
	ctx.current_instruction = 0x881D266C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// subf r6,r3,r18
	ctx.r6.u64 = ctx.r18.u64 - ctx.r3.u64;
	// stw r6,-364(r1)
	ctx.current_instruction = 0x881D2674;
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r6.u32);
	// subf r6,r19,r17
	ctx.r6.u64 = ctx.r17.u64 - ctx.r19.u64;
	// subf r18,r28,r8
	ctx.r18.u64 = ctx.r8.u64 - ctx.r28.u64;
	// lwz r19,-364(r1)
	ctx.current_instruction = 0x881D2680;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// stw r6,-360(r1)
	ctx.current_instruction = 0x881D2684;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,-344(r1)
	ctx.current_instruction = 0x881D2690;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r6.u32);
	// add r17,r9,r8
	ctx.r17.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r6,1(r10)
	ctx.current_instruction = 0x881D2698;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// mr r14,r19
	ctx.r14.u64 = ctx.r19.u64;
	// lbzx r10,r23,r10
	ctx.current_instruction = 0x881D26A0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r10.u32);
	// subf r23,r10,r18
	ctx.r23.u64 = ctx.r18.u64 - ctx.r10.u64;
	// subf r18,r31,r23
	ctx.r18.u64 = ctx.r23.u64 - ctx.r31.u64;
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r18,r21
	ctx.r18.u64 = ctx.r18.u64 + ctx.r21.u64;
	// subf r23,r17,r10
	ctx.r23.u64 = ctx.r10.u64 - ctx.r17.u64;
	// add r18,r18,r24
	ctx.r18.u64 = ctx.r18.u64 + ctx.r24.u64;
	// subf r17,r25,r16
	ctx.r17.u64 = ctx.r16.u64 - ctx.r25.u64;
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r24,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r24.u64;
	// subf r18,r20,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r20.u64;
	// add r23,r23,r30
	ctx.r23.u64 = ctx.r23.u64 + ctx.r30.u64;
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r18,r25
	ctx.r18.u64 = ctx.r18.u64 + ctx.r25.u64;
	// rlwinm r16,r23,3,0,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r18,-360(r1)
	ctx.current_instruction = 0x881D26DC;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r18.u32);
	// add r17,r17,r20
	ctx.r17.u64 = ctx.r17.u64 + ctx.r20.u64;
	// subf r18,r23,r16
	ctx.r18.u64 = ctx.r16.u64 - ctx.r23.u64;
	// rlwinm r16,r19,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r19,-360(r1)
	ctx.current_instruction = 0x881D26EC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// subf r23,r27,r3
	ctx.r23.u64 = ctx.r3.u64 - ctx.r27.u64;
	// rlwinm r15,r17,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r19,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r23,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r16,r14,r16
	ctx.r16.u64 = ctx.r14.u64 + ctx.r16.u64;
	// stw r19,-360(r1)
	ctx.current_instruction = 0x881D2704;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r19.u32);
	// subf r14,r11,r8
	ctx.r14.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r19,r5,r6
	ctx.r19.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r16,-368(r1)
	ctx.current_instruction = 0x881D2710;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r16.u32);
	// add r18,r18,r15
	ctx.r18.u64 = ctx.r18.u64 + ctx.r15.u64;
	// lwz r15,-344(r1)
	ctx.current_instruction = 0x881D2718;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// stw r19,-344(r1)
	ctx.current_instruction = 0x881D271C;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r19.u32);
	// subf r16,r11,r6
	ctx.r16.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r19,r17,r15
	ctx.r19.u64 = ctx.r17.u64 + ctx.r15.u64;
	// lwz r17,-360(r1)
	ctx.current_instruction = 0x881D2728;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// std r22,-256(r1)
	ctx.current_instruction = 0x881D272C;
	REX_STORE_U64(ctx.r1.u32 + -256, ctx.r22.u64);
	// add r23,r23,r17
	ctx.r23.u64 = ctx.r23.u64 + ctx.r17.u64;
	// lwz r22,-368(r1)
	ctx.current_instruction = 0x881D2734;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// lwz r15,-344(r1)
	ctx.current_instruction = 0x881D2738;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// mulli r15,r15,13
	ctx.r15.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(13));
	// add r23,r19,r23
	ctx.r23.u64 = ctx.r19.u64 + ctx.r23.u64;
	// std r6,-328(r1)
	ctx.current_instruction = 0x881D2744;
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.r6.u64);
	// add r18,r18,r22
	ctx.r18.u64 = ctx.r18.u64 + ctx.r22.u64;
	// mulli r19,r16,11
	ctx.r19.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(11));
	// subf r18,r15,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r15.u64;
	// add r23,r23,r19
	ctx.r23.u64 = ctx.r23.u64 + ctx.r19.u64;
	// subf r19,r27,r9
	ctx.r19.u64 = ctx.r9.u64 - ctx.r27.u64;
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// srawi r17,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r17.s64 = ctx.r23.s32 >> 1;
	// rlwinm r16,r19,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r23,r18,r4
	ctx.r23.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r4.s32);
	// mullw r19,r17,r29
	ctx.r19.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r29.s32);
	// subf r17,r30,r16
	ctx.r17.u64 = ctx.r16.u64 - ctx.r30.u64;
	// add r19,r23,r19
	ctx.r19.u64 = ctx.r23.u64 + ctx.r19.u64;
	// subf r23,r31,r17
	ctx.r23.u64 = ctx.r17.u64 - ctx.r31.u64;
	// subf r18,r21,r10
	ctx.r18.u64 = ctx.r10.u64 - ctx.r21.u64;
	// stw r19,-296(r1)
	ctx.current_instruction = 0x881D2780;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r19.u32);
	// add r17,r23,r25
	ctx.r17.u64 = ctx.r23.u64 + ctx.r25.u64;
	// subf r16,r3,r18
	ctx.r16.u64 = ctx.r18.u64 - ctx.r3.u64;
	// add r3,r17,r3
	ctx.r3.u64 = ctx.r17.u64 + ctx.r3.u64;
	// subf r23,r9,r16
	ctx.r23.u64 = ctx.r16.u64 - ctx.r9.u64;
	// subf r16,r5,r26
	ctx.r16.u64 = ctx.r26.u64 - ctx.r5.u64;
	// stw r3,-360(r1)
	ctx.current_instruction = 0x881D2798;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r3.u32);
	// rotlwi r18,r11,2
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// subf r3,r6,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r6.u64;
	// add r19,r11,r18
	ctx.r19.u64 = ctx.r11.u64 + ctx.r18.u64;
	// subf r18,r8,r23
	ctx.r18.u64 = ctx.r23.u64 - ctx.r8.u64;
	// subf r23,r10,r6
	ctx.r23.u64 = ctx.r6.u64 - ctx.r10.u64;
	// stw r19,-288(r1)
	ctx.current_instruction = 0x881D27B0;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r19.u32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r17,r18,r27
	ctx.r17.u64 = ctx.r18.u64 + ctx.r27.u64;
	// subf r18,r26,r23
	ctx.r18.u64 = ctx.r23.u64 - ctx.r26.u64;
	// rlwinm r19,r3,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r23,r18,r8
	ctx.r23.u64 = ctx.r18.u64 + ctx.r8.u64;
	// stw r19,-344(r1)
	ctx.current_instruction = 0x881D27C8;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r19.u32);
	// add r15,r17,r30
	ctx.r15.u64 = ctx.r17.u64 + ctx.r30.u64;
	// subf r19,r31,r14
	ctx.r19.u64 = ctx.r14.u64 - ctx.r31.u64;
	// stw r23,-364(r1)
	ctx.current_instruction = 0x881D27D4;
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r23.u32);
	// add r23,r15,r28
	ctx.r23.u64 = ctx.r15.u64 + ctx.r28.u64;
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r23,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r19,r10,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r10.u64;
	// stw r23,-368(r1)
	ctx.current_instruction = 0x881D27E8;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r23.u32);
	// subf r23,r6,r26
	ctx.r23.u64 = ctx.r26.u64 - ctx.r6.u64;
	// add r19,r19,r25
	ctx.r19.u64 = ctx.r19.u64 + ctx.r25.u64;
	// rotlwi r18,r27,2
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r27.u32, 2);
	// add r17,r19,r5
	ctx.r17.u64 = ctx.r19.u64 + ctx.r5.u64;
	// lwz r14,-360(r1)
	ctx.current_instruction = 0x881D27FC;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// rlwinm r19,r23,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r15,r14,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// add r16,r23,r19
	ctx.r16.u64 = ctx.r23.u64 + ctx.r19.u64;
	// rotlwi r19,r5,1
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// subf r23,r20,r15
	ctx.r23.u64 = ctx.r15.u64 - ctx.r20.u64;
	// add r14,r19,r8
	ctx.r14.u64 = ctx.r19.u64 + ctx.r8.u64;
	// add r15,r27,r18
	ctx.r15.u64 = ctx.r27.u64 + ctx.r18.u64;
	// rotlwi r18,r9,3
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r23,r23,r24
	ctx.r23.u64 = ctx.r23.u64 + ctx.r24.u64;
	// lwz r19,-344(r1)
	ctx.current_instruction = 0x881D2828;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r17,r17,r16
	ctx.r17.u64 = ctx.r17.u64 + ctx.r16.u64;
	// lwz r22,-364(r1)
	ctx.current_instruction = 0x881D2830;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// subf r27,r9,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r9.u64;
	// lwz r16,-288(r1)
	ctx.current_instruction = 0x881D2838;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// stw r19,-360(r1)
	ctx.current_instruction = 0x881D283C;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r19.u32);
	// subf r19,r9,r18
	ctx.r19.u64 = ctx.r18.u64 - ctx.r9.u64;
	// rotlwi r18,r22,0
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// lwz r6,-360(r1)
	ctx.current_instruction = 0x881D2848;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// rlwinm r22,r22,3,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r18,-360(r1)
	ctx.current_instruction = 0x881D2850;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r18.u32);
	// add r18,r3,r6
	ctx.r18.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stw r27,-344(r1)
	ctx.current_instruction = 0x881D2858;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r27.u32);
	// subf r3,r28,r21
	ctx.r3.u64 = ctx.r21.u64 - ctx.r28.u64;
	// rlwinm r27,r23,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r23,-360(r1)
	ctx.current_instruction = 0x881D2864;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// subf r21,r15,r17
	ctx.r21.u64 = ctx.r17.u64 - ctx.r15.u64;
	// lwz r6,-368(r1)
	ctx.current_instruction = 0x881D286C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// rlwinm r17,r14,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r23,r23,r22
	ctx.r23.u64 = ctx.r22.u64 - ctx.r23.u64;
	// subf r15,r11,r5
	ctx.r15.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r19,r21,r19
	ctx.r19.u64 = ctx.r21.u64 + ctx.r19.u64;
	// add r18,r6,r18
	ctx.r18.u64 = ctx.r6.u64 + ctx.r18.u64;
	// lwz r6,-280(r1)
	ctx.current_instruction = 0x881D2884;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r23,r27,r23
	ctx.r23.u64 = ctx.r27.u64 + ctx.r23.u64;
	// mulli r21,r15,11
	ctx.r21.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(11));
	// lwz r15,-296(r1)
	ctx.current_instruction = 0x881D2890;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r6,-360(r1)
	ctx.current_instruction = 0x881D2894;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r6.u32);
	// ld r6,-328(r1)
	ctx.current_instruction = 0x881D2898;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
	// rlwinm r27,r3,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r18,r25,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r25.u64;
	// subf r17,r16,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r16.u64;
	// lwz r14,-344(r1)
	ctx.current_instruction = 0x881D28A8;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// rlwinm r14,r14,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r14,r25,r14
	ctx.r14.u64 = ctx.r14.u64 - ctx.r25.u64;
	// add r25,r23,r21
	ctx.r25.u64 = ctx.r23.u64 + ctx.r21.u64;
	// add r23,r3,r27
	ctx.r23.u64 = ctx.r3.u64 + ctx.r27.u64;
	// subf r27,r10,r17
	ctx.r27.u64 = ctx.r17.u64 - ctx.r10.u64;
	// srawi r21,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r19.s32 >> 1;
	// subf r3,r24,r18
	ctx.r3.u64 = ctx.r18.u64 - ctx.r24.u64;
	// srawi r18,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r27.s32 >> 1;
	// mullw r27,r21,r7
	ctx.r27.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r7.s32);
	// subf r19,r26,r14
	ctx.r19.u64 = ctx.r14.u64 - ctx.r26.u64;
	// add r23,r25,r23
	ctx.r23.u64 = ctx.r25.u64 + ctx.r23.u64;
	// add r3,r3,r20
	ctx.r3.u64 = ctx.r3.u64 + ctx.r20.u64;
	// add r27,r15,r27
	ctx.r27.u64 = ctx.r15.u64 + ctx.r27.u64;
	// rlwinm r25,r18,8,0,23
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 8) & 0xFFFFFF00;
	// subf r21,r11,r9
	ctx.r21.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r20,r5,r19
	ctx.r20.u64 = ctx.r19.u64 - ctx.r5.u64;
	// srawi r23,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 1;
	// add r19,r3,r31
	ctx.r19.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r25,r27,r25
	ctx.r25.u64 = ctx.r27.u64 + ctx.r25.u64;
	// subf r21,r31,r21
	ctx.r21.u64 = ctx.r21.u64 - ctx.r31.u64;
	// subf r3,r8,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r8.u64;
	// mullw r27,r23,r4
	ctx.r27.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r4.s32);
	// mullw r23,r19,r29
	ctx.r23.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r29.s32);
	// rlwinm r21,r21,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r23,r27,r23
	ctx.r23.u64 = ctx.r27.u64 + ctx.r23.u64;
	// subf r27,r30,r21
	ctx.r27.u64 = ctx.r21.u64 - ctx.r30.u64;
	// subf r20,r8,r28
	ctx.r20.u64 = ctx.r28.u64 - ctx.r8.u64;
	// add r21,r3,r6
	ctx.r21.u64 = ctx.r3.u64 + ctx.r6.u64;
	// subf r3,r5,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r5.u64;
	// rlwinm r19,r20,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r27,r6
	ctx.r27.u64 = ctx.r27.u64 + ctx.r6.u64;
	// rlwinm r20,r3,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r15,r27,r24
	ctx.r15.u64 = ctx.r27.u64 + ctx.r24.u64;
	// add r18,r3,r20
	ctx.r18.u64 = ctx.r3.u64 + ctx.r20.u64;
	// subf r26,r26,r19
	ctx.r26.u64 = ctx.r19.u64 - ctx.r26.u64;
	// rotlwi r20,r28,2
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// rlwinm r17,r6,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r15,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r27,r5,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r3,r6,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r28,r28,r20
	ctx.r28.u64 = ctx.r28.u64 + ctx.r20.u64;
	// subf r15,r6,r26
	ctx.r15.u64 = ctx.r26.u64 - ctx.r6.u64;
	// add r17,r17,r9
	ctx.r17.u64 = ctx.r17.u64 + ctx.r9.u64;
	// add r20,r19,r18
	ctx.r20.u64 = ctx.r19.u64 + ctx.r18.u64;
	// rlwinm r26,r27,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r3,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r18,r8,3
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r15,r9,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r9.u64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// subf r26,r28,r20
	ctx.r26.u64 = ctx.r20.u64 - ctx.r28.u64;
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + ctx.r19.u64;
	// subf r28,r24,r15
	ctx.r28.u64 = ctx.r15.u64 - ctx.r24.u64;
	// subf r20,r8,r18
	ctx.r20.u64 = ctx.r18.u64 - ctx.r8.u64;
	// subf r19,r16,r17
	ctx.r19.u64 = ctx.r17.u64 - ctx.r16.u64;
	// subf r27,r8,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r8.u64;
	// add r26,r26,r20
	ctx.r26.u64 = ctx.r26.u64 + ctx.r20.u64;
	// subf r24,r30,r19
	ctx.r24.u64 = ctx.r19.u64 - ctx.r30.u64;
	// add r28,r28,r5
	ctx.r28.u64 = ctx.r28.u64 + ctx.r5.u64;
	// subf r3,r9,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r9.u64;
	// lwz r15,-360(r1)
	ctx.current_instruction = 0x881D29A0;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// add r20,r27,r10
	ctx.r20.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lwz r27,-272(r1)
	ctx.current_instruction = 0x881D29A8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// ld r22,-256(r1)
	ctx.current_instruction = 0x881D29B0;
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -256);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// srawi r26,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 1;
	// srawi r30,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r24.s32 >> 1;
	// add r28,r21,r11
	ctx.r28.u64 = ctx.r21.u64 + ctx.r11.u64;
	// srawi r24,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r20.s32 >> 1;
	// srawi r21,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r3.s32 >> 1;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r30,r4
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r4.s32);
	// mullw r30,r24,r27
	ctx.r30.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r27.s32);
	// subf r6,r9,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r20,r9,r11
	ctx.r20.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mullw r9,r21,r29
	ctx.r9.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r29.s32);
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r6,r7
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r30,r3,r31
	ctx.r30.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r28,r28,r31
	ctx.r28.u64 = ctx.r28.u64 + ctx.r31.u64;
	// subf r24,r8,r5
	ctx.r24.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r3,r8,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r8.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,-220(r1)
	ctx.current_instruction = 0x881D2A08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// mullw r8,r26,r4
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r4.s32);
	// mullw r5,r28,r7
	ctx.r5.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// mullw r6,r30,r29
	ctx.r6.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// srawi r4,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r24.s32 >> 1;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r31,r23,r5
	ctx.r31.u64 = ctx.r23.u64 + ctx.r5.u64;
	// mullw r8,r4,r10
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// mullw r5,r3,r7
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// mullw r25,r25,r15
	ctx.r25.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r15.s32);
	// mullw r7,r31,r27
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r27.s32);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r11,r25,r7
	ctx.r11.u64 = ctx.r25.u64 + ctx.r7.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x881d2a70
	if (!ctx.cr6.gt) goto loc_881D2A70;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x881d2a7c
	goto loc_881D2A7C;
loc_881D2A70:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_881D2A7C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,-316(r1)
	ctx.current_instruction = 0x881D2A80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// lwz r10,-260(r1)
	ctx.current_instruction = 0x881D2A84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r3,20(r1)
	ctx.current_instruction = 0x881D2A90;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r27,-264(r1)
	ctx.current_instruction = 0x881D2A94;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// li r25,128
	ctx.r25.s64 = 128;
	// lwz r8,-352(r1)
	ctx.current_instruction = 0x881D2A9C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// li r24,16
	ctx.r24.s64 = 16;
	// lwz r29,-320(r1)
	ctx.current_instruction = 0x881D2AA4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r26,-268(r1)
	ctx.current_instruction = 0x881D2AA8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// stb r9,1(r11)
	ctx.current_instruction = 0x881D2AAC;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// stw r30,-316(r1)
	ctx.current_instruction = 0x881D2AB0;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r30.u32);
	// b 0x881d2adc
	goto loc_881D2ADC;
loc_881D2AB8:
	// lwz r3,20(r1)
	ctx.current_instruction = 0x881D2AB8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r24,16
	ctx.r24.s64 = 16;
	// lwz r10,-260(r1)
	ctx.current_instruction = 0x881D2AC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// li r25,128
	ctx.r25.s64 = 128;
	// lwz r26,-268(r1)
	ctx.current_instruction = 0x881D2AC8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r29,-320(r1)
	ctx.current_instruction = 0x881D2ACC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r30,-316(r1)
	ctx.current_instruction = 0x881D2AD0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// lwz r27,-264(r1)
	ctx.current_instruction = 0x881D2AD4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
loc_881D2AD8:
	// li r7,1
	ctx.r7.s64 = 1;
loc_881D2ADC:
	// lwz r9,-276(r1)
	ctx.current_instruction = 0x881D2ADC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// lwz r11,88(r3)
	ctx.current_instruction = 0x881D2AE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r7,-312(r1)
	ctx.current_instruction = 0x881D2AE8;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r7.u32);
	// stw r9,-276(r1)
	ctx.current_instruction = 0x881D2AEC;
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r9.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881d1be4
	if (ctx.cr6.lt) goto loc_881D1BE4;
	// lwz r4,-248(r1)
	ctx.current_instruction = 0x881D2AF8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// b 0x881d2e14
	goto loc_881D2E14;
loc_881D2B00:
	// lwz r9,80(r3)
	ctx.current_instruction = 0x881D2B00;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d2bf0
	if (!ctx.cr6.lt) goto loc_881D2BF0;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x881d2b80
	if (!ctx.cr6.lt) goto loc_881D2B80;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lbzx r6,r11,r10
	ctx.current_instruction = 0x881D2B1C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r5,1(r5)
	ctx.current_instruction = 0x881D2B2C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// mullw r4,r5,r28
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// lbz r31,1(r9)
	ctx.current_instruction = 0x881D2B34;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r23,0(r9)
	ctx.current_instruction = 0x881D2B38;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r9,-228(r1)
	ctx.current_instruction = 0x881D2B3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// subf r31,r5,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r5.u64;
	// mullw r5,r23,r9
	ctx.r5.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r9.s32);
	// subf r31,r23,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r23.u64;
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// mullw r31,r31,r28
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r28.s32);
	// mullw r31,r31,r9
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// srawi r31,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 8;
	// subfic r28,r28,256
	ctx.xer.ca = ctx.r28.u32 <= 256;
	ctx.r28.u64 = static_cast<uint64_t>(256) - ctx.r28.u64;
	// subf r9,r9,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r9.u64;
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 + ctx.r5.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,1(r8)
	ctx.current_instruction = 0x881D2B78;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// b 0x881d2ba8
	goto loc_881D2BA8;
loc_881D2B80:
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,-228(r1)
	ctx.current_instruction = 0x881D2B84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// lbzx r4,r11,r10
	ctx.current_instruction = 0x881D2B88;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// subfic r6,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r6.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// mullw r6,r4,r6
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// lbzx r5,r5,r10
	ctx.current_instruction = 0x881D2B94;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r9,r4,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// stb r9,1(r8)
	ctx.current_instruction = 0x881D2BA4;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r9.u8);
loc_881D2BA8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r8,-352(r1)
	ctx.current_instruction = 0x881D2BB0;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// beq cr6,0x881d2ad8
	if (ctx.cr6.eq) goto loc_881D2AD8;
	// lwz r9,-236(r1)
	ctx.current_instruction = 0x881D2BB8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mullw r9,r9,r22
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r22.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r9,r11,r27
	ctx.current_instruction = 0x881D2BCC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// stb r9,1(r29)
	ctx.current_instruction = 0x881D2BD0;
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r9.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r29,-320(r1)
	ctx.current_instruction = 0x881D2BD8;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r29.u32);
	// lbzx r6,r11,r26
	ctx.current_instruction = 0x881D2BDC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// stb r6,1(r30)
	ctx.current_instruction = 0x881D2BE0;
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r6.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,-316(r1)
	ctx.current_instruction = 0x881D2BE8;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r30.u32);
	// b 0x881d2adc
	goto loc_881D2ADC;
loc_881D2BF0:
	// stb r24,1(r8)
	ctx.current_instruction = 0x881D2BF0;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r24.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r8,-352(r1)
	ctx.current_instruction = 0x881D2BFC;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// beq cr6,0x881d2ad8
	if (ctx.cr6.eq) goto loc_881D2AD8;
	// stb r25,1(r29)
	ctx.current_instruction = 0x881D2C04;
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r25.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r25,1(r30)
	ctx.current_instruction = 0x881D2C0C;
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r25.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r29,-320(r1)
	ctx.current_instruction = 0x881D2C18;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r29.u32);
	// stw r30,-316(r1)
	ctx.current_instruction = 0x881D2C1C;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r30.u32);
	// b 0x881d2adc
	goto loc_881D2ADC;
loc_881D2C24:
	// lwz r9,84(r3)
	ctx.current_instruction = 0x881D2C24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d2dc4
	if (!ctx.cr6.lt) goto loc_881D2DC4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lwz r11,88(r3)
	ctx.current_instruction = 0x881D2C3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// bge cr6,0x881d2d14
	if (!ctx.cr6.lt) goto loc_881D2D14;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881d2e14
	if (!ctx.cr6.gt) goto loc_881D2E14;
loc_881D2C4C:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-328(r1)
	ctx.current_instruction = 0x881D2C54;
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f13.u64);
	// lwz r11,-324(r1)
	ctx.current_instruction = 0x881D2C58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x881d2cd4
	if (ctx.cr6.lt) goto loc_881D2CD4;
	// lwz r9,80(r3)
	ctx.current_instruction = 0x881D2C64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d2cd4
	if (!ctx.cr6.lt) goto loc_881D2CD4;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,-228(r1)
	ctx.current_instruction = 0x881D2C74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbzx r31,r11,r10
	ctx.current_instruction = 0x881D2C7C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// subfic r7,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r7.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// mullw r7,r31,r7
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// lbzx r5,r5,r10
	ctx.current_instruction = 0x881D2C88;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r7,r9,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r7,1(r8)
	ctx.current_instruction = 0x881D2C98;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r7.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// beq cr6,0x881d2cfc
	if (ctx.cr6.eq) goto loc_881D2CFC;
	// lwz r9,-236(r1)
	ctx.current_instruction = 0x881D2CA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mullw r9,r9,r22
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r22.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r9,r11,r27
	ctx.current_instruction = 0x881D2CB8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// stb r9,1(r29)
	ctx.current_instruction = 0x881D2CBC;
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r9.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbzx r5,r11,r26
	ctx.current_instruction = 0x881D2CC4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// stb r5,1(r30)
	ctx.current_instruction = 0x881D2CC8;
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r5.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x881d2d00
	goto loc_881D2D00;
loc_881D2CD4:
	// stb r24,1(r8)
	ctx.current_instruction = 0x881D2CD4;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r24.u8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// beq cr6,0x881d2cfc
	if (ctx.cr6.eq) goto loc_881D2CFC;
	// stb r25,1(r29)
	ctx.current_instruction = 0x881D2CE4;
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r25.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r25,1(r30)
	ctx.current_instruction = 0x881D2CEC;
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r25.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x881d2d00
	goto loc_881D2D00;
loc_881D2CFC:
	// li r7,1
	ctx.r7.s64 = 1;
loc_881D2D00:
	// lwz r11,88(r3)
	ctx.current_instruction = 0x881D2D00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881d2c4c
	if (ctx.cr6.lt) goto loc_881D2C4C;
	// b 0x881d2e08
	goto loc_881D2E08;
loc_881D2D14:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881d2e14
	if (!ctx.cr6.gt) goto loc_881D2E14;
loc_881D2D1C:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-328(r1)
	ctx.current_instruction = 0x881D2D24;
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f13.u64);
	// lwz r9,-324(r1)
	ctx.current_instruction = 0x881D2D28;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x881d2d84
	if (ctx.cr6.lt) goto loc_881D2D84;
	// lwz r11,80(r3)
	ctx.current_instruction = 0x881D2D34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881d2d84
	if (!ctx.cr6.lt) goto loc_881D2D84;
	// lbzx r11,r9,r10
	ctx.current_instruction = 0x881D2D40;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r11,1(r8)
	ctx.current_instruction = 0x881D2D48;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// beq cr6,0x881d2dac
	if (ctx.cr6.eq) goto loc_881D2DAC;
	// lwz r11,-236(r1)
	ctx.current_instruction = 0x881D2D54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mullw r11,r11,r22
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r9,r11,r27
	ctx.current_instruction = 0x881D2D68;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// stb r9,1(r29)
	ctx.current_instruction = 0x881D2D6C;
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r9.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbzx r5,r11,r26
	ctx.current_instruction = 0x881D2D74;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// stb r5,1(r30)
	ctx.current_instruction = 0x881D2D78;
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r5.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x881d2db0
	goto loc_881D2DB0;
loc_881D2D84:
	// stb r24,1(r8)
	ctx.current_instruction = 0x881D2D84;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r24.u8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// beq cr6,0x881d2dac
	if (ctx.cr6.eq) goto loc_881D2DAC;
	// stb r25,1(r29)
	ctx.current_instruction = 0x881D2D94;
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r25.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r25,1(r30)
	ctx.current_instruction = 0x881D2D9C;
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r25.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x881d2db0
	goto loc_881D2DB0;
loc_881D2DAC:
	// li r7,1
	ctx.r7.s64 = 1;
loc_881D2DB0:
	// lwz r11,88(r3)
	ctx.current_instruction = 0x881D2DB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881d2d1c
	if (ctx.cr6.lt) goto loc_881D2D1C;
	// b 0x881d2e08
	goto loc_881D2E08;
loc_881D2DC4:
	// lwz r11,88(r3)
	ctx.current_instruction = 0x881D2DC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881d2e14
	if (!ctx.cr6.gt) goto loc_881D2E14;
loc_881D2DD4:
	// stb r24,1(r8)
	ctx.current_instruction = 0x881D2DD4;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r24.u8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// beq cr6,0x881d2df4
	if (ctx.cr6.eq) goto loc_881D2DF4;
	// stbu r25,1(r29)
	ctx.current_instruction = 0x881D2DE4;
	ea = 1 + ctx.r29.u32;
	REX_STORE_U8(ea, ctx.r25.u8);
	ctx.r29.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// stbu r25,1(r30)
	ctx.current_instruction = 0x881D2DEC;
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r25.u8);
	ctx.r30.u32 = ea;
	// b 0x881d2df8
	goto loc_881D2DF8;
loc_881D2DF4:
	// li r7,1
	ctx.r7.s64 = 1;
loc_881D2DF8:
	// lwz r11,88(r3)
	ctx.current_instruction = 0x881D2DF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881d2dd4
	if (ctx.cr6.lt) goto loc_881D2DD4;
loc_881D2E08:
	// stw r30,-316(r1)
	ctx.current_instruction = 0x881D2E08;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r30.u32);
	// stw r29,-320(r1)
	ctx.current_instruction = 0x881D2E0C;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r29.u32);
	// stw r8,-352(r1)
	ctx.current_instruction = 0x881D2E10;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
loc_881D2E14:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x881D2E18;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lis r7,-30678
	ctx.r7.s64 = -2010513408;
	// lwz r5,100(r3)
	ctx.current_instruction = 0x881D2E20;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// stw r4,-248(r1)
	ctx.current_instruction = 0x881D2E28;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f8.f64;
	// std r10,-192(r1)
	ctx.current_instruction = 0x881D2E30;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r10.u64);
	// lfd f13,-192(r1)
	ctx.current_instruction = 0x881D2E34;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmadd f5,f12,f3,f4
	ctx.f5.f64 = std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f4.f64);
	// fctiwz f2,f5
	ctx.f2.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f2,-328(r1)
	ctx.current_instruction = 0x881D2E44;
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f2.u64);
	// lwz r10,-324(r1)
	ctx.current_instruction = 0x881D2E48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r31,r9
	ctx.r31.s64 = ctx.r9.s32;
	// stw r9,8228(r7)
	ctx.current_instruction = 0x881D2E54;
	REX_STORE_U32(ctx.r7.u32 + 8228, ctx.r9.u32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// std r31,-176(r1)
	ctx.current_instruction = 0x881D2E5C;
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r31.u64);
	// add r9,r6,r5
	ctx.r9.u64 = ctx.r6.u64 + ctx.r5.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r9,-260(r1)
	ctx.current_instruction = 0x881D2E68;
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r9.u32);
	// lfd f13,-176(r1)
	ctx.current_instruction = 0x881D2E6C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmsub f5,f5,f11,f12
	ctx.f5.f64 = std::fma(ctx.f5.f64, ctx.f11.f64, -ctx.f12.f64);
	// fctiwz f2,f5
	ctx.f2.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f2,-328(r1)
	ctx.current_instruction = 0x881D2E7C;
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f2.u64);
	// lwz r21,-324(r1)
	ctx.current_instruction = 0x881D2E80;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// mullw r7,r21,r21
	ctx.r7.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r21.s32);
	// srawi r19,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r19.s64 = ctx.r7.s32 >> 8;
	// mullw r6,r19,r21
	ctx.r6.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r21.s32);
	// srawi r18,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r18.s64 = ctx.r6.s32 >> 8;
	// ble cr6,0x881d348c
	if (!ctx.cr6.gt) goto loc_881D348C;
	// lwz r7,84(r3)
	ctx.current_instruction = 0x881D2E98;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881d348c
	if (!ctx.cr6.lt) goto loc_881D348C;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,-276(r1)
	ctx.current_instruction = 0x881D2EB0;
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r7.u32);
	// ble cr6,0x881d3594
	if (!ctx.cr6.gt) goto loc_881D3594;
loc_881D2EB8:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-328(r1)
	ctx.current_instruction = 0x881D2EC0;
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f13.u64);
	// lwz r10,-324(r1)
	ctx.current_instruction = 0x881D2EC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x881d344c
	if (!ctx.cr6.gt) goto loc_881D344C;
	// lwz r11,80(r3)
	ctx.current_instruction = 0x881D2ED0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881d344c
	if (!ctx.cr6.lt) goto loc_881D344C;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r23,80(r3)
	ctx.current_instruction = 0x881D2EE4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// subf r28,r23,r7
	ctx.r28.u64 = ctx.r7.u64 - ctx.r23.u64;
	// add r25,r23,r7
	ctx.r25.u64 = ctx.r23.u64 + ctx.r7.u64;
	// extsw r31,r11
	ctx.r31.s64 = ctx.r11.s32;
	// lbz r4,2(r7)
	ctx.current_instruction = 0x881D2EFC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// stw r11,8228(r10)
	ctx.current_instruction = 0x881D2F00;
	REX_STORE_U32(ctx.r10.u32 + 8228, ctx.r11.u32);
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r6,-1(r28)
	ctx.current_instruction = 0x881D2F08;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r28.u32 + -1);
	// lbz r29,1(r25)
	ctx.current_instruction = 0x881D2F0C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r25.u32 + 1);
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r11,0(r7)
	ctx.current_instruction = 0x881D2F14;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r3,r29,r6
	ctx.r3.u64 = ctx.r29.u64 + ctx.r6.u64;
	// lbz r30,-1(r25)
	ctx.current_instruction = 0x881D2F1C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r25.u32 + -1);
	// rotlwi r5,r11,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r10,-1(r7)
	ctx.current_instruction = 0x881D2F24;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + -1);
	// lbz r9,0(r28)
	ctx.current_instruction = 0x881D2F28;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// rlwinm r26,r3,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// std r31,-160(r1)
	ctx.current_instruction = 0x881D2F30;
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r31.u64);
	// lfd f13,-160(r1)
	ctx.current_instruction = 0x881D2F34;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lbz r27,-1(r8)
	ctx.current_instruction = 0x881D2F38;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
	// add r3,r5,r30
	ctx.r3.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lbz r31,1(r28)
	ctx.current_instruction = 0x881D2F40;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r28.u32 + 1);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// add r20,r10,r9
	ctx.r20.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r28,2(r28)
	ctx.current_instruction = 0x881D2F4C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r28.u32 + 2);
	// subf r17,r27,r26
	ctx.r17.u64 = ctx.r26.u64 - ctx.r27.u64;
	// lbz r5,0(r8)
	ctx.current_instruction = 0x881D2F54;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r15,r3,r31
	ctx.r15.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r24,2(r8)
	ctx.current_instruction = 0x881D2F5C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// subf r16,r30,r10
	ctx.r16.u64 = ctx.r10.u64 - ctx.r30.u64;
	// lbz r26,1(r8)
	ctx.current_instruction = 0x881D2F64;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// rlwinm r3,r20,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,1(r7)
	ctx.current_instruction = 0x881D2F6C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r20,r28,r17
	ctx.r20.u64 = ctx.r17.u64 - ctx.r28.u64;
	// lbzx r7,r23,r7
	ctx.current_instruction = 0x881D2F74;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r7.u32);
	// rlwinm r17,r16,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r25,2(r25)
	ctx.current_instruction = 0x881D2F7C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r25.u32 + 2);
	// subf r3,r3,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r3.u64;
	// fmsub f5,f0,f11,f12
	ctx.f5.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// rlwinm r23,r15,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r4,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r4.u64;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subf r23,r26,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r26.u64;
	// add r15,r20,r24
	ctx.r15.u64 = ctx.r20.u64 + ctx.r24.u64;
	// subf r20,r6,r17
	ctx.r20.u64 = ctx.r17.u64 - ctx.r6.u64;
	// rlwinm r17,r3,3,0,28
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r23,r25,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r25.u64;
	// subf r3,r3,r17
	ctx.r3.u64 = ctx.r17.u64 - ctx.r3.u64;
	// fctiwz f2,f5
	ctx.f2.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// rlwinm r16,r23,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stfd f2,-328(r1)
	ctx.current_instruction = 0x881D2FB8;
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f2.u64);
	// rlwinm r15,r15,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r14,-324(r1)
	ctx.current_instruction = 0x881D2FC0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// add r20,r20,r27
	ctx.r20.u64 = ctx.r20.u64 + ctx.r27.u64;
	// add r3,r3,r15
	ctx.r3.u64 = ctx.r3.u64 + ctx.r15.u64;
	// add r23,r23,r16
	ctx.r23.u64 = ctx.r23.u64 + ctx.r16.u64;
	// subf r17,r5,r8
	ctx.r17.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r20,r20,r25
	ctx.r20.u64 = ctx.r20.u64 + ctx.r25.u64;
	// add r16,r7,r8
	ctx.r16.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r23,r3,r23
	ctx.r23.u64 = ctx.r3.u64 + ctx.r23.u64;
	// subf r3,r29,r17
	ctx.r3.u64 = ctx.r17.u64 - ctx.r29.u64;
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r16,r16,13
	ctx.r16.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(13));
	// mullw r15,r14,r14
	ctx.r15.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r14.s32);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// subf r20,r24,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r24.u64;
	// subf r16,r16,r23
	ctx.r16.u64 = ctx.r23.u64 - ctx.r16.u64;
	// stw r3,-336(r1)
	ctx.current_instruction = 0x881D2FFC;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r3.u32);
	// srawi r23,r15,8
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xFF) != 0);
	ctx.r23.s64 = ctx.r15.s32 >> 8;
	// rlwinm r15,r3,3,0,28
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r20,r20,r28
	ctx.r20.u64 = ctx.r20.u64 + ctx.r28.u64;
	// srawi r3,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r16.s32 >> 1;
	// rotlwi r17,r11,2
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r20,-360(r1)
	ctx.current_instruction = 0x881D3014;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r20.u32);
	// stw r3,-368(r1)
	ctx.current_instruction = 0x881D3018;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r3.u32);
	// subf r20,r7,r29
	ctx.r20.u64 = ctx.r29.u64 - ctx.r7.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lwz r16,-360(r1)
	ctx.current_instruction = 0x881D3024;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// std r3,-240(r1)
	ctx.current_instruction = 0x881D3028;
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r3.u64);
	// subf r3,r26,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r26.u64;
	// rlwinm r17,r16,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// std r22,-232(r1)
	ctx.current_instruction = 0x881D3034;
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r22.u64);
	// subf r16,r31,r9
	ctx.r16.u64 = ctx.r9.u64 - ctx.r31.u64;
	// lwz r22,-336(r1)
	ctx.current_instruction = 0x881D303C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// stw r17,-360(r1)
	ctx.current_instruction = 0x881D3040;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r17.u32);
	// rlwinm r17,r16,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r14,-304(r1)
	ctx.current_instruction = 0x881D3048;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r14.u32);
	// subf r16,r25,r3
	ctx.r16.u64 = ctx.r3.u64 - ctx.r25.u64;
	// std r4,-224(r1)
	ctx.current_instruction = 0x881D3050;
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r4.u64);
	// subf r17,r5,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r5.u64;
	// subf r3,r10,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r10.u64;
	// subf r17,r6,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r6.u64;
	// subf r15,r22,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r22.u64;
	// add r16,r17,r26
	ctx.r16.u64 = ctx.r17.u64 + ctx.r26.u64;
	// subf r17,r9,r3
	ctx.r17.u64 = ctx.r3.u64 - ctx.r9.u64;
	// stw r15,-336(r1)
	ctx.current_instruction = 0x881D306C;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r15.u32);
	// subf r15,r11,r10
	ctx.r15.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r3,-368(r1)
	ctx.current_instruction = 0x881D3074;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// add r17,r17,r30
	ctx.r17.u64 = ctx.r17.u64 + ctx.r30.u64;
	// subf r15,r6,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r6.u64;
	// stw r17,-300(r1)
	ctx.current_instruction = 0x881D3080;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r17.u32);
	// subf r17,r8,r20
	ctx.r17.u64 = ctx.r20.u64 - ctx.r8.u64;
	// rlwinm r15,r15,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r31,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r31.u64;
	// stw r17,-344(r1)
	ctx.current_instruction = 0x881D3090;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r17.u32);
	// subf r17,r4,r15
	ctx.r17.u64 = ctx.r15.u64 - ctx.r4.u64;
	// stw r26,-272(r1)
	ctx.current_instruction = 0x881D3098;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r26.u32);
	// subf r26,r29,r7
	ctx.r26.u64 = ctx.r7.u64 - ctx.r29.u64;
	// stw r17,-296(r1)
	ctx.current_instruction = 0x881D30A0;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r17.u32);
	// add r16,r16,r28
	ctx.r16.u64 = ctx.r16.u64 + ctx.r28.u64;
	// subf r17,r4,r26
	ctx.r17.u64 = ctx.r26.u64 - ctx.r4.u64;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r17,r17,r10
	ctx.r17.u64 = ctx.r17.u64 + ctx.r10.u64;
	// lwz r26,-360(r1)
	ctx.current_instruction = 0x881D30B4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// subf r16,r24,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r24.u64;
	// stw r17,-280(r1)
	ctx.current_instruction = 0x881D30BC;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r17.u32);
	// subf r15,r11,r7
	ctx.r15.u64 = ctx.r7.u64 - ctx.r11.u64;
	// stw r16,-256(r1)
	ctx.current_instruction = 0x881D30C4;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r16.u32);
	// subf r25,r30,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r30.u64;
	// mulli r15,r15,11
	ctx.r15.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(11));
	// stw r15,-308(r1)
	ctx.current_instruction = 0x881D30D0;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r15.u32);
	// lwz r17,-336(r1)
	ctx.current_instruction = 0x881D30D4;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// add r17,r26,r17
	ctx.r17.u64 = ctx.r26.u64 + ctx.r17.u64;
	// stw r17,-360(r1)
	ctx.current_instruction = 0x881D30DC;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r17.u32);
	// rlwinm r26,r20,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r16,-300(r1)
	ctx.current_instruction = 0x881D30E4;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// lwz r15,-344(r1)
	ctx.current_instruction = 0x881D30E8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r26,r20,r26
	ctx.r26.u64 = ctx.r20.u64 + ctx.r26.u64;
	// stw r25,-344(r1)
	ctx.current_instruction = 0x881D30F0;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r25.u32);
	// mullw r20,r3,r19
	ctx.r20.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r19.s32);
	// lwz r22,-272(r1)
	ctx.current_instruction = 0x881D30F8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// stw r26,-368(r1)
	ctx.current_instruction = 0x881D30FC;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r26.u32);
	// stw r20,-284(r1)
	ctx.current_instruction = 0x881D3100;
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r20.u32);
	// lwz r25,-280(r1)
	ctx.current_instruction = 0x881D3104;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// lwz r20,-256(r1)
	ctx.current_instruction = 0x881D3108;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// add r17,r16,r4
	ctx.r17.u64 = ctx.r16.u64 + ctx.r4.u64;
	// lwz r4,-308(r1)
	ctx.current_instruction = 0x881D3110;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// add r15,r15,r11
	ctx.r15.u64 = ctx.r15.u64 + ctx.r11.u64;
	// stw r25,-300(r1)
	ctx.current_instruction = 0x881D3118;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r25.u32);
	// rotlwi r3,r17,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r17.u32, 0);
	// rotlwi r26,r15,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// rotlwi r14,r22,0
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// lwz r16,-360(r1)
	ctx.current_instruction = 0x881D312C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// rotlwi r25,r31,2
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// stw r17,-360(r1)
	ctx.current_instruction = 0x881D3134;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r17.u32);
	// lwz r17,-296(r1)
	ctx.current_instruction = 0x881D3138;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r15,-360(r1)
	ctx.current_instruction = 0x881D313C;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r15.u32);
	// stw r20,-360(r1)
	ctx.current_instruction = 0x881D3140;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r20.u32);
	// add r17,r17,r8
	ctx.r17.u64 = ctx.r17.u64 + ctx.r8.u64;
	// rlwinm r20,r26,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r17,-336(r1)
	ctx.current_instruction = 0x881D314C;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r17.u32);
	// rlwinm r17,r22,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r26,r20
	ctx.r26.u64 = ctx.r26.u64 + ctx.r20.u64;
	// lwz r15,-336(r1)
	ctx.current_instruction = 0x881D3158;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// add r20,r15,r28
	ctx.r20.u64 = ctx.r15.u64 + ctx.r28.u64;
	// rlwinm r15,r3,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r26,-256(r1)
	ctx.current_instruction = 0x881D3164;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r26.u32);
	// rlwinm r26,r20,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r15,-296(r1)
	ctx.current_instruction = 0x881D316C;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r15.u32);
	// add r20,r14,r17
	ctx.r20.u64 = ctx.r14.u64 + ctx.r17.u64;
	// lwz r15,-360(r1)
	ctx.current_instruction = 0x881D3174;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// lwz r22,-368(r1)
	ctx.current_instruction = 0x881D3178;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// add r25,r31,r25
	ctx.r25.u64 = ctx.r31.u64 + ctx.r25.u64;
	// stw r20,-360(r1)
	ctx.current_instruction = 0x881D3180;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r20.u32);
	// add r17,r15,r27
	ctx.r17.u64 = ctx.r15.u64 + ctx.r27.u64;
	// lwz r20,-344(r1)
	ctx.current_instruction = 0x881D3188;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// rotlwi r15,r26,0
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// rlwinm r3,r17,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// std r23,-328(r1)
	ctx.current_instruction = 0x881D3194;
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.r23.u64);
	// rlwinm r17,r20,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,-300(r1)
	ctx.current_instruction = 0x881D319C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// stw r26,-336(r1)
	ctx.current_instruction = 0x881D31A0;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r26.u32);
	// add r26,r16,r4
	ctx.r26.u64 = ctx.r16.u64 + ctx.r4.u64;
	// add r20,r20,r17
	ctx.r20.u64 = ctx.r20.u64 + ctx.r17.u64;
	// lwz r4,-280(r1)
	ctx.current_instruction = 0x881D31AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// rlwinm r14,r14,3,0,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r17,-256(r1)
	ctx.current_instruction = 0x881D31B4;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// stw r20,-368(r1)
	ctx.current_instruction = 0x881D31B8;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r20.u32);
	// rotlwi r16,r9,3
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lwz r23,-368(r1)
	ctx.current_instruction = 0x881D31C0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// subf r14,r4,r14
	ctx.r14.u64 = ctx.r14.u64 - ctx.r4.u64;
	// subf r16,r9,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r9.u64;
	// lwz r4,-296(r1)
	ctx.current_instruction = 0x881D31CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r14,-300(r1)
	ctx.current_instruction = 0x881D31D0;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r14.u32);
	// add r20,r15,r22
	ctx.r20.u64 = ctx.r15.u64 + ctx.r22.u64;
	// stw r16,-344(r1)
	ctx.current_instruction = 0x881D31D8;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r16.u32);
	// subf r31,r9,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r9.u64;
	// subf r25,r25,r20
	ctx.r25.u64 = ctx.r20.u64 - ctx.r25.u64;
	// stw r3,-336(r1)
	ctx.current_instruction = 0x881D31E4;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r3.u32);
	// add r20,r4,r17
	ctx.r20.u64 = ctx.r4.u64 + ctx.r17.u64;
	// lwz r14,-284(r1)
	ctx.current_instruction = 0x881D31EC;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// lwz r15,-360(r1)
	ctx.current_instruction = 0x881D31F0;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r11,r8
	ctx.r16.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r26,r26,r15
	ctx.r26.u64 = ctx.r26.u64 + ctx.r15.u64;
	// stw r31,-360(r1)
	ctx.current_instruction = 0x881D3200;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r31.u32);
	// subf r15,r27,r20
	ctx.r15.u64 = ctx.r20.u64 - ctx.r27.u64;
	// srawi r4,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r26.s32 >> 1;
	// subf r20,r11,r9
	ctx.r20.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rotlwi r26,r3,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r3,-300(r1)
	ctx.current_instruction = 0x881D3214;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// subf r22,r6,r20
	ctx.r22.u64 = ctx.r20.u64 - ctx.r6.u64;
	// lwz r20,-344(r1)
	ctx.current_instruction = 0x881D321C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r26,r26,r3
	ctx.r26.u64 = ctx.r26.u64 + ctx.r3.u64;
	// add r3,r25,r20
	ctx.r3.u64 = ctx.r25.u64 + ctx.r20.u64;
	// add r20,r26,r23
	ctx.r20.u64 = ctx.r26.u64 + ctx.r23.u64;
	// mulli r17,r16,11
	ctx.r17.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(11));
	// subf r25,r28,r15
	ctx.r25.u64 = ctx.r15.u64 - ctx.r28.u64;
	// mullw r26,r4,r18
	ctx.r26.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r18.s32);
	// srawi r15,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r15.s64 = ctx.r3.s32 >> 1;
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r20,r20,r17
	ctx.r20.u64 = ctx.r20.u64 + ctx.r17.u64;
	// add r31,r14,r26
	ctx.r31.u64 = ctx.r14.u64 + ctx.r26.u64;
	// mullw r26,r15,r21
	ctx.r26.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r21.s32);
	// add r25,r25,r6
	ctx.r25.u64 = ctx.r25.u64 + ctx.r6.u64;
	// srawi r24,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r20.s32 >> 1;
	// add r15,r31,r26
	ctx.r15.u64 = ctx.r31.u64 + ctx.r26.u64;
	// mullw r26,r25,r18
	ctx.r26.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r18.s32);
	// mullw r31,r24,r19
	ctx.r31.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r19.s32);
	// subf r16,r10,r30
	ctx.r16.u64 = ctx.r30.u64 - ctx.r10.u64;
	// add r24,r31,r26
	ctx.r24.u64 = ctx.r31.u64 + ctx.r26.u64;
	// rlwinm r26,r16,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r16,-360(r1)
	ctx.current_instruction = 0x881D326C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// rlwinm r25,r22,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r20,r27,r26
	ctx.r20.u64 = ctx.r26.u64 - ctx.r27.u64;
	// subf r31,r5,r25
	ctx.r31.u64 = ctx.r25.u64 - ctx.r5.u64;
	// subf r25,r29,r16
	ctx.r25.u64 = ctx.r16.u64 - ctx.r29.u64;
	// add r27,r31,r27
	ctx.r27.u64 = ctx.r31.u64 + ctx.r27.u64;
	// subf r26,r8,r29
	ctx.r26.u64 = ctx.r29.u64 - ctx.r8.u64;
	// subf r25,r8,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r8.u64;
	// subf r29,r29,r20
	ctx.r29.u64 = ctx.r20.u64 - ctx.r29.u64;
	// add r16,r27,r7
	ctx.r16.u64 = ctx.r27.u64 + ctx.r7.u64;
	// rlwinm r27,r26,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r25,r10,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r10.u64;
	// subf r14,r7,r29
	ctx.r14.u64 = ctx.r29.u64 - ctx.r7.u64;
	// subf r31,r8,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r8.u64;
	// add r26,r26,r27
	ctx.r26.u64 = ctx.r26.u64 + ctx.r27.u64;
	// subf r29,r28,r25
	ctx.r29.u64 = ctx.r25.u64 - ctx.r28.u64;
	// rotlwi r27,r30,2
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r30.u32, 2);
	// ld r4,-224(r1)
	ctx.current_instruction = 0x881D32B0;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// rlwinm r17,r31,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r23,-328(r1)
	ctx.current_instruction = 0x881D32B8;
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
	// rlwinm r20,r16,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r3,-240(r1)
	ctx.current_instruction = 0x881D32C0;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// subf r28,r9,r14
	ctx.r28.u64 = ctx.r14.u64 - ctx.r9.u64;
	// lwz r14,-304(r1)
	ctx.current_instruction = 0x881D32C8;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r17,r31,r17
	ctx.r17.u64 = ctx.r31.u64 + ctx.r17.u64;
	// rotlwi r27,r10,3
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r26,r20,r26
	ctx.r26.u64 = ctx.r20.u64 + ctx.r26.u64;
	// add r31,r28,r5
	ctx.r31.u64 = ctx.r28.u64 + ctx.r5.u64;
	// subf r27,r10,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r10.u64;
	// subf r30,r30,r26
	ctx.r30.u64 = ctx.r26.u64 - ctx.r30.u64;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// subf r28,r10,r17
	ctx.r28.u64 = ctx.r17.u64 - ctx.r10.u64;
	// add r29,r29,r7
	ctx.r29.u64 = ctx.r29.u64 + ctx.r7.u64;
	// add r27,r30,r27
	ctx.r27.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r28,r28,r4
	ctx.r28.u64 = ctx.r28.u64 + ctx.r4.u64;
	// subf r20,r10,r11
	ctx.r20.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r29,r29,r4
	ctx.r29.u64 = ctx.r29.u64 + ctx.r4.u64;
	// mullw r26,r23,r14
	ctx.r26.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r14.s32);
	// rotlwi r31,r8,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// add r16,r30,r6
	ctx.r16.u64 = ctx.r30.u64 + ctx.r6.u64;
	// srawi r17,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r17.s64 = ctx.r28.s32 >> 1;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// subf r30,r9,r20
	ctx.r30.u64 = ctx.r20.u64 - ctx.r9.u64;
	// rotlwi r28,r7,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// srawi r26,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 8;
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// srawi r27,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 1;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// mullw r25,r15,r23
	ctx.r25.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r23.s32);
	// add r20,r29,r6
	ctx.r20.u64 = ctx.r29.u64 + ctx.r6.u64;
	// add r8,r30,r6
	ctx.r8.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r15,r28,r9
	ctx.r15.u64 = ctx.r28.u64 + ctx.r9.u64;
	// mullw r29,r27,r19
	ctx.r29.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r19.s32);
	// mullw r28,r16,r18
	ctx.r28.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r18.s32);
	// mullw r6,r8,r21
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r21.s32);
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r8,r29,r28
	ctx.r8.u64 = ctx.r29.u64 + ctx.r28.u64;
	// subf r29,r4,r31
	ctx.r29.u64 = ctx.r31.u64 - ctx.r4.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r4,r10,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// subf r10,r7,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r28,r8,r4
	ctx.r28.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r6,r15,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r31,r20,r21
	ctx.r31.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r21.s32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r5,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r5.u64;
	// add r31,r24,r31
	ctx.r31.u64 = ctx.r24.u64 + ctx.r31.u64;
	// rlwinm r30,r17,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r8,r3,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r3.u64;
	// subf r27,r9,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r9.u64;
	// add r6,r31,r30
	ctx.r6.u64 = ctx.r31.u64 + ctx.r30.u64;
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r4,r3,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r3.u64;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// mullw r6,r6,r26
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r26.s32);
	// srawi r9,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 1;
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r3,r25,r6
	ctx.r3.u64 = ctx.r25.u64 + ctx.r6.u64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// mullw r6,r10,r19
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r19.s32);
	// mullw r4,r9,r23
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r23.s32);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 + ctx.r4.u64;
	// mullw r11,r7,r18
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r18.s32);
	// srawi r6,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r27.s32 >> 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mullw r8,r6,r21
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r21.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mullw r31,r28,r14
	ctx.r31.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r14.s32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// ld r22,-232(r1)
	ctx.current_instruction = 0x881D33F4;
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x881d3408
	if (!ctx.cr6.gt) goto loc_881D3408;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x881d3414
	goto loc_881D3414;
loc_881D3408:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_881D3414:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,-352(r1)
	ctx.current_instruction = 0x881D3418;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r9,-260(r1)
	ctx.current_instruction = 0x881D341C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// li r25,128
	ctx.r25.s64 = 128;
	// lwz r27,-264(r1)
	ctx.current_instruction = 0x881D3424;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r30,-316(r1)
	ctx.current_instruction = 0x881D342C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// li r24,16
	ctx.r24.s64 = 16;
	// lwz r29,-320(r1)
	ctx.current_instruction = 0x881D3434;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r26,-268(r1)
	ctx.current_instruction = 0x881D3438;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r3,20(r1)
	ctx.current_instruction = 0x881D343C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,-276(r1)
	ctx.current_instruction = 0x881D3440;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// stb r10,1(r11)
	ctx.current_instruction = 0x881D3444;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// b 0x881d346c
	goto loc_881D346C;
loc_881D344C:
	// lwz r11,80(r3)
	ctx.current_instruction = 0x881D344C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881d3464
	if (!ctx.cr6.lt) goto loc_881D3464;
	// lbzx r11,r10,r9
	ctx.current_instruction = 0x881D3458;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stb r11,1(r8)
	ctx.current_instruction = 0x881D345C;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// b 0x881d3468
	goto loc_881D3468;
loc_881D3464:
	// stb r24,1(r8)
	ctx.current_instruction = 0x881D3464;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r24.u8);
loc_881D3468:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_881D346C:
	// lwz r11,88(r3)
	ctx.current_instruction = 0x881D346C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r8,-352(r1)
	ctx.current_instruction = 0x881D3474;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// stw r7,-276(r1)
	ctx.current_instruction = 0x881D3478;
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r7.u32);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881d2eb8
	if (ctx.cr6.lt) goto loc_881D2EB8;
	// lwz r4,-248(r1)
	ctx.current_instruction = 0x881D3484;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// b 0x881d3594
	goto loc_881D3594;
loc_881D348C:
	// lwz r7,84(r3)
	ctx.current_instruction = 0x881D348C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881d3570
	if (!ctx.cr6.lt) goto loc_881D3570;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881d3518
	if (!ctx.cr6.lt) goto loc_881D3518;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881d3594
	if (!ctx.cr6.gt) goto loc_881D3594;
loc_881D34B0:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-328(r1)
	ctx.current_instruction = 0x881D34B8;
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f13.u64);
	// lwz r11,-324(r1)
	ctx.current_instruction = 0x881D34BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x881d34fc
	if (ctx.cr6.lt) goto loc_881D34FC;
	// lwz r10,80(r3)
	ctx.current_instruction = 0x881D34C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881d34fc
	if (!ctx.cr6.lt) goto loc_881D34FC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r6,r11,r9
	ctx.current_instruction = 0x881D34D8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// subfic r5,r21,256
	ctx.xer.ca = ctx.r21.u32 <= 256;
	ctx.r5.u64 = static_cast<uint64_t>(256) - ctx.r21.u64;
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lbzx r10,r10,r9
	ctx.current_instruction = 0x881D34E4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// mullw r10,r10,r21
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r21.s32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// stb r5,1(r8)
	ctx.current_instruction = 0x881D34F4;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// b 0x881d3500
	goto loc_881D3500;
loc_881D34FC:
	// stb r24,1(r8)
	ctx.current_instruction = 0x881D34FC;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r24.u8);
loc_881D3500:
	// lwz r11,88(r3)
	ctx.current_instruction = 0x881D3500;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881d34b0
	if (ctx.cr6.lt) goto loc_881D34B0;
	// b 0x881d3590
	goto loc_881D3590;
loc_881D3518:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881d3594
	if (!ctx.cr6.gt) goto loc_881D3594;
loc_881D3524:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-328(r1)
	ctx.current_instruction = 0x881D352C;
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f13.u64);
	// lwz r11,-324(r1)
	ctx.current_instruction = 0x881D3530;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x881d3554
	if (ctx.cr6.lt) goto loc_881D3554;
	// lwz r7,80(r3)
	ctx.current_instruction = 0x881D353C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881d3554
	if (!ctx.cr6.lt) goto loc_881D3554;
	// lbzx r11,r11,r9
	ctx.current_instruction = 0x881D3548;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// stb r11,1(r8)
	ctx.current_instruction = 0x881D354C;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// b 0x881d3558
	goto loc_881D3558;
loc_881D3554:
	// stb r24,1(r8)
	ctx.current_instruction = 0x881D3554;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r24.u8);
loc_881D3558:
	// lwz r11,88(r3)
	ctx.current_instruction = 0x881D3558;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881d3524
	if (ctx.cr6.lt) goto loc_881D3524;
	// b 0x881d3590
	goto loc_881D3590;
loc_881D3570:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881d3594
	if (!ctx.cr6.gt) goto loc_881D3594;
loc_881D357C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r24,1(r8)
	ctx.current_instruction = 0x881D3580;
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r24.u8);
	ctx.r8.u32 = ea;
	// lwz r11,88(r3)
	ctx.current_instruction = 0x881D3584;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881d357c
	if (ctx.cr6.lt) goto loc_881D357C;
loc_881D3590:
	// stw r8,-352(r1)
	ctx.current_instruction = 0x881D3590;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
loc_881D3594:
	// lwz r11,92(r3)
	ctx.current_instruction = 0x881D3594;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r4,-248(r1)
	ctx.current_instruction = 0x881D359C;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881d1ad0
	if (ctx.cr6.lt) goto loc_881D1AD0;
loc_881D35A8:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_882186F8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x882186F8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882186F8;
	ctx.current_instruction = 0x882186F8;
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisb v31,0
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_set1_epi8(char(0x0)));
	// li r8,16
	ctx.r8.s64 = 16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x882187b0
	if (!ctx.cr6.eq) goto loc_882187B0;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r12,r4,2,0,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,8
	ctx.r7.s64 = 8;
loc_88218714:
	// add r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvlx v1,0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v2,r3,r8
	temp.u32 = ctx.r3.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx v9,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v10,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx v18,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v19,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx v23,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v24,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor v3,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vor v11,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vor v20,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8)));
	// vor v25,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v24.u8)));
	// add r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 + ctx.r12.u64;
	// vmrghb v4,v31,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vmrglb v5,v31,v3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vmrghb v12,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vmrglb v13,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vmrghb v21,v31,v20
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vmrglb v22,v31,v20
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vmrghb v26,v31,v25
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vmrglb v27,v31,v25
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// addi r9,r5,48
	ctx.r9.s64 = ctx.r5.s64 + 48;
	// addi r10,r5,96
	ctx.r10.s64 = ctx.r5.s64 + 96;
	// addi r11,r5,144
	ctx.r11.s64 = ctx.r5.s64 + 144;
	// stvx v4,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v5,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,192
	ctx.r5.s64 = ctx.r5.s64 + 192;
	// stvx v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v21,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v22,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v26,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v27,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r7,r7,-4
	ctx.xer.ca = ctx.r7.u32 > 3;
	ctx.r7.s64 = ctx.r7.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x88218714
	if (!ctx.cr0.eq) goto loc_88218714;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_882187B0:
	// li r9,2
	ctx.r9.s64 = 2;
	// subf r7,r7,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,32
	ctx.r9.s64 = 32;
	// add r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 + ctx.r4.u64;
	// lvsl v28,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
loc_882187C8:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v1,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r12,r5,48
	ctx.r12.s64 = ctx.r5.s64 + 48;
	// lvx128 v21,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v22,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v23,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v7,v1,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// vperm v8,v2,v3,v28
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// vperm v26,v21,v22,v28
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// vperm v27,v22,v23,v28
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// vmrghb v5,v31,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vmrglb v6,v31,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vmrghb v8,v31,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vmrghb v24,v31,v26
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vmrglb v25,v31,v26
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vmrghb v27,v31,v27
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// addic. r7,r7,-2
	ctx.xer.ca = ctx.r7.u32 > 1;
	ctx.r7.s64 = ctx.r7.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stvx v5,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v6,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v8,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,96
	ctx.r5.s64 = ctx.r5.s64 + 96;
	// stvx v24,r0,r12
	ea = (ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v25,r12,r8
	ea = (ctx.r12.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v27,r12,r9
	ea = (ctx.r12.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne 0x882187c8
	if (!ctx.cr0.eq) goto loc_882187C8;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8821A1E0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821A1E0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821A1E0) {
			switch (rex_dispatch_address) {
				case 0x8821A1E8:
				case 0x8821A58C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821A1E0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821A1E8: goto loc_8821A1E8;
		case 0x8821A58C: goto loc_8821A58C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8821A1E8;
	__savegprlr_29(ctx, base);
loc_8821A1E8:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8821A1E8;
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
	// vspltish v29,1
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_set1_epi16(short(0x1)));
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
	// vaddshs v30,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// vspltish v28,5
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_set1_epi16(short(0x5)));
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
	// bne cr6,0x8821a390
	if (!ctx.cr6.eq) goto loc_8821A390;
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
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
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
	// ble cr6,0x8821a57c
	if (!ctx.cr6.gt) goto loc_8821A57C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8821A2B0:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
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
	// vslh v31,v11,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// vadduhm v22,v6,v11
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// lvx128 v57,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v26,v10,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v25,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// vperm128 v6,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vadduhm v21,v3,v10
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v5,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// vor v4,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vslh v20,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v9,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
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
	// vslh v17,v7,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
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
	// vadduhm v16,v27,v31
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v15,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v3,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v27,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v31,v22,v16
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v26,v21,v15
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
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
	// vsubshs v25,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v24,v31,v3
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsubshs v21,v9,v14
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vsubshs v20,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v23,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vadduhm v22,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v19,v24,v30
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v17,v21,v25
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v16,v20,v23
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v18,v22,v30
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
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
	// stvx128 v15,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// blt cr6,0x8821a2b0
	if (ctx.cr6.lt) goto loc_8821A2B0;
	// b 0x8821a57c
	goto loc_8821A57C;
loc_8821A390:
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
	// lvlx128 v54,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v51,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvrx128 v49,r3,r9
	temp.u32 = ctx.r3.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v9,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v4,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x8821a57c
	if (!ctx.cr6.gt) goto loc_8821A57C;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// li r30,-32
	ctx.r30.s64 = -32;
	// li r31,-16
	ctx.r31.s64 = -16;
loc_8821A41C:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v27,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v11,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vor v26,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v41,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v6,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v31,v11,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
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
	// lvsl v2,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v23,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v10,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v19,v63,v42,v2
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
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
	// vadduhm v15,v24,v31
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v7,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
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
	// vor v31,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v18.u8));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v24,v23,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vor v25,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
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
	// vslh v19,v6,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v16,v24,v15
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v21,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v19,v23
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v27,v22,v18
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vslh v24,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v9,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
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
	// vslh v19,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v4,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v14.u8));
	// vadduhm v15,v27,v15
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v26,v24,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v24,v23,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v14,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v5,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vsubshs v18,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsubshs v23,v3,v22
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubshs v16,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vsubshs v22,v31,v19
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vadduhm v20,v15,v30
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v15,v27,v14
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vadduhm v21,v17,v30
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v14,v24,v26
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v27,v23,v18
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v26,v22,v16
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v19,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
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
	// vadduhm v22,v21,v27
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v21,v20,v26
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vsubshs v25,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
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
	// vadduhm v20,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v19,v23,v30
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// stvx128 v18,r10,r30
	ea = (ctx.r10.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0xF;
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// vor128 v2,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// stvx128 v15,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x8821a41c
	if (ctx.cr6.lt) goto loc_8821A41C;
loc_8821A57C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x882193c8
	ctx.lr = 0x8821A58C;
	sub_882193C8(ctx, base);
loc_8821A58C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_882232B8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x882232B8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882232B8;
	ctx.current_instruction = 0x882232B8;
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
	// b 0x88221b98
	sub_88221B98(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88223318) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88223318);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88223318;
	ctx.current_instruction = 0x88223318;
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
	// b 0x88222340
	sub_88222340(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88223B10) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88223B10;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88223B10) {
			switch (rex_dispatch_address) {
				case 0x88223B18:
				case 0x88223B40:
				case 0x88223B60:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88223B10;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88223B18: goto loc_88223B18;
		case 0x88223B40: goto loc_88223B40;
		case 0x88223B60: goto loc_88223B60;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88223B18;
	__savegprlr_28(ctx, base);
loc_88223B18:
	// stwu r1,-896(r1)
	ctx.current_instruction = 0x88223B18;
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
	ctx.lr = 0x88223B40;
	sub_8821B4B8(ctx, base);
loc_88223B40:
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
	// bl 0x88222bc8
	ctx.lr = 0x88223B60;
	sub_88222BC8(ctx, base);
loc_88223B60:
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_882243B8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x882243B8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882243B8;
	ctx.current_instruction = 0x882243B8;
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
	// b 0x88222908
	sub_88222908(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88224620) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88224620;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88224620) {
			switch (rex_dispatch_address) {
				case 0x88224628:
				case 0x88224BA8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88224620;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88224628: goto loc_88224628;
		case 0x88224BA8: goto loc_88224BA8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88224628;
	__savegprlr_14(ctx, base);
loc_88224628:
	// stwu r1,-1024(r1)
	ctx.current_instruction = 0x88224628;
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r5,1060(r1)
	ctx.current_instruction = 0x88224630;
	REX_STORE_U32(ctx.r1.u32 + 1060, ctx.r5.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r6,1068(r1)
	ctx.current_instruction = 0x88224638;
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r6.u32);
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r7,80(r1)
	ctx.current_instruction = 0x8822464C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// beq cr6,0x88224ad0
	if (ctx.cr6.eq) goto loc_88224AD0;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// beq cr6,0x8822490c
	if (ctx.cr6.eq) goto loc_8822490C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88224898
	if (!ctx.cr6.gt) goto loc_88224898;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,84(r1)
	ctx.current_instruction = 0x88224674;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r14,-96
	ctx.r14.s64 = -96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
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
loc_882246C0:
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lwz r28,84(r1)
	ctx.current_instruction = 0x882246DC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r30,r8,r4
	ctx.r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vperm128 v5,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r26,r9,r4
	ctx.r26.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v62,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r31,r4
	ctx.r27.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r29,r30,r4
	ctx.r29.u64 = ctx.r30.u64 + ctx.r4.u64;
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v28,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 + ctx.r9.u64;
	// vmrglb v27,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r25,r29,r4
	ctx.r25.u64 = ctx.r29.u64 + ctx.r4.u64;
	// lvx128 v56,r26,r10
	ea = (ctx.r26.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r26
	temp.u32 = ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r31,r4
	ea = (ctx.r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r27,r10
	ea = (ctx.r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
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
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
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
	// lvx128 v51,r30,r4
	ea = (ctx.r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v58,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v50,r29,r4
	ea = (ctx.r29.u32 + ctx.r4.u32) & ~0xF;
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
	// stvx128 v12,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v30,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v29,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v4,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v14,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v3,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
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
	// bdnz 0x882246c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882246C0;
	// lwz r28,1068(r1)
	ctx.current_instruction = 0x88224890;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x88224894;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88224898:
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88224b90
	if (!ctx.cr6.gt) goto loc_88224B90;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r29,r10,r4
	ctx.r29.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r3,-48
	ctx.r9.s64 = ctx.r3.s64 + -48;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_882248CC:
	// lbzx r6,r29,r11
	ctx.current_instruction = 0x882248CC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzux r3,r8,r10
	ctx.current_instruction = 0x882248D0;
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lbz r30,0(r11)
	ctx.current_instruction = 0x882248D8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// add r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r3,r30,r6
	ctx.r3.u64 = ctx.r30.u64 + ctx.r6.u64;
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// sth r3,48(r9)
	ctx.current_instruction = 0x882248F8;
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r3.u16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthu r6,96(r9)
	ctx.current_instruction = 0x88224900;
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x882248cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882248CC;
	// b 0x88224b90
	goto loc_88224B90;
loc_8822490C:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v44,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r3,r4
	ctx.r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v43,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvsl v2,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v45,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v44,v38,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v40,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,192
	ctx.r29.s64 = ctx.r1.s64 + 192;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v39,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vperm128 v3,v42,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v35,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v40,v39,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v34,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v37,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,240
	ctx.r30.s64 = ctx.r1.s64 + 240;
	// lvx128 v62,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v33,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v32,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// lvx128 v63,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,288
	ctx.r27.s64 = ctx.r1.s64 + 288;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v2,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v30,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v37,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
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
	// stvx128 v26,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v4,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v27,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
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
	// li r5,4
	ctx.r5.s64 = 4;
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
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r1,64
	ctx.r9.s64 = ctx.r1.s64 + 64;
	// stvx128 v2,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stvx128 v31,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v27,v6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v30,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r5,r11,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r11.u64;
	// stvx128 v28,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
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
loc_88224A90:
	// lbzx r6,r10,r5
	ctx.current_instruction = 0x88224A90;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lbzux r30,r8,r11
	ctx.current_instruction = 0x88224A94;
	ea = ctx.r8.u32 + ctx.r11.u32;
	ctx.r30.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lbz r31,0(r10)
	ctx.current_instruction = 0x88224A98;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sth r6,48(r9)
	ctx.current_instruction = 0x88224ABC;
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r6.u16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthu r3,96(r9)
	ctx.current_instruction = 0x88224AC4;
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x88224a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88224A90;
	// b 0x88224b90
	goto loc_88224B90;
loc_88224AD0:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v58,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v56,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// lvx128 v55,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,192
	ctx.r30.s64 = ctx.r1.s64 + 192;
	// lvx128 v54,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,240
	ctx.r29.s64 = ctx.r1.s64 + 240;
	// lvx128 v53,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v59,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v3,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v58,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v1,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v31,v57,v55,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v30,v56,v53,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vperm128 v29,v50,v51,v1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v25,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v24,v12,v28
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
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
	// stvx128 v22,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_88224B90:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// lwz r5,1060(r1)
	ctx.current_instruction = 0x88224B94;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v1,r28,r11
	ea = (ctx.r28.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x88223088
	ctx.lr = 0x88224BA8;
	sub_88223088(ctx, base);
loc_88224BA8:
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

