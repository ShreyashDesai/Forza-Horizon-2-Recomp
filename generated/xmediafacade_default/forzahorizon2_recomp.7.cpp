#include "forzahorizon2_funcs.7.h"

DEFINE_REX_FUNC(sub_880500A0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880500A0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880500A0;
	ctx.current_instruction = 0x880500A0;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,28(r11)
	ctx.current_instruction = 0x880500A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__savegprlr_16) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050818);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050818;
	ctx.current_instruction = 0x88050818;
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

DEFINE_REX_FUNC(sub_88052278) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88052278;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88052278) {
			switch (rex_dispatch_address) {
				case 0x88052298:
				case 0x880522A4:
				case 0x880522B0:
				case 0x880522B8:
				case 0x880522BC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88052278;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88052298: goto loc_88052298;
		case 0x880522A4: goto loc_880522A4;
		case 0x880522B0: goto loc_880522B0;
		case 0x880522B8: goto loc_880522B8;
		case 0x880522BC: goto loc_880522BC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805227C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88052280;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88052284;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880522c0
	if (ctx.cr6.eq) goto loc_880522C0;
	// bl 0x881e9150
	ctx.lr = 0x88052298;
	sub_881E9150(ctx, base);
loc_88052298:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x881eb998
	ctx.lr = 0x880522A4;
	sub_881EB998(ctx, base);
loc_880522A4:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x880522c0
	if (!ctx.cr0.eq) goto loc_880522C0;
	// bl 0x880529c8
	ctx.lr = 0x880522B0;
	sub_880529C8(ctx, base);
loc_880522B0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x881e9030
	ctx.lr = 0x880522B8;
	sub_881E9030(ctx, base);
loc_880522B8:
	// bl 0x88052958
	ctx.lr = 0x880522BC;
	sub_88052958(ctx, base);
loc_880522BC:
	// stw r3,0(r31)
	ctx.current_instruction = 0x880522BC;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_880522C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880522C4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880522CC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88055CF0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88055CF0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88055CF0) {
			switch (rex_dispatch_address) {
				case 0x88055CF8:
				case 0x88055D24:
				case 0x88055D30:
				case 0x88055D44:
				case 0x88055D50:
				case 0x88055DA8:
				case 0x88055DB4:
				case 0x88055DC8:
				case 0x88055DD4:
				case 0x88055E0C:
				case 0x88055E18:
				case 0x88055E2C:
				case 0x88055E38:
				case 0x88055EB4:
				case 0x88055F10:
				case 0x88055F54:
				case 0x88055F74:
				case 0x88055FAC:
				case 0x8805601C:
				case 0x88056048:
				case 0x88056074:
				case 0x880560A0:
				case 0x880560CC:
				case 0x880560F8:
				case 0x88056118:
				case 0x88056134:
				case 0x88056150:
				case 0x8805616C:
				case 0x88056188:
				case 0x880561BC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88055CF0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88055CF8: goto loc_88055CF8;
		case 0x88055D24: goto loc_88055D24;
		case 0x88055D30: goto loc_88055D30;
		case 0x88055D44: goto loc_88055D44;
		case 0x88055D50: goto loc_88055D50;
		case 0x88055DA8: goto loc_88055DA8;
		case 0x88055DB4: goto loc_88055DB4;
		case 0x88055DC8: goto loc_88055DC8;
		case 0x88055DD4: goto loc_88055DD4;
		case 0x88055E0C: goto loc_88055E0C;
		case 0x88055E18: goto loc_88055E18;
		case 0x88055E2C: goto loc_88055E2C;
		case 0x88055E38: goto loc_88055E38;
		case 0x88055EB4: goto loc_88055EB4;
		case 0x88055F10: goto loc_88055F10;
		case 0x88055F54: goto loc_88055F54;
		case 0x88055F74: goto loc_88055F74;
		case 0x88055FAC: goto loc_88055FAC;
		case 0x8805601C: goto loc_8805601C;
		case 0x88056048: goto loc_88056048;
		case 0x88056074: goto loc_88056074;
		case 0x880560A0: goto loc_880560A0;
		case 0x880560CC: goto loc_880560CC;
		case 0x880560F8: goto loc_880560F8;
		case 0x88056118: goto loc_88056118;
		case 0x88056134: goto loc_88056134;
		case 0x88056150: goto loc_88056150;
		case 0x8805616C: goto loc_8805616C;
		case 0x88056188: goto loc_88056188;
		case 0x880561BC: goto loc_880561BC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x88055CF8;
	__savegprlr_17(ctx, base);
loc_88055CF8:
	// stwu r1,-352(r1)
	ctx.current_instruction = 0x88055CF8;
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,296
	ctx.r3.s64 = 296;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x8805bdc0
	ctx.lr = 0x88055D24;
	sub_8805BDC0(ctx, base);
loc_88055D24:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88055d38
	if (ctx.cr6.eq) goto loc_88055D38;
	// bl 0x8805bdd0
	ctx.lr = 0x88055D30;
	sub_8805BDD0(ctx, base);
loc_88055D30:
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// b 0x88055d3c
	goto loc_88055D3C;
loc_88055D38:
	// mr r18,r31
	ctx.r18.u64 = ctx.r31.u64;
loc_88055D3C:
	// li r3,344
	ctx.r3.s64 = 344;
	// bl 0x8805b0b8
	ctx.lr = 0x88055D44;
	sub_8805B0B8(ctx, base);
loc_88055D44:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88055d58
	if (ctx.cr6.eq) goto loc_88055D58;
	// bl 0x8805b7d8
	ctx.lr = 0x88055D50;
	sub_8805B7D8(ctx, base);
loc_88055D50:
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x88055d5c
	goto loc_88055D5C;
loc_88055D58:
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
loc_88055D5C:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// stw r31,84(r1)
	ctx.current_instruction = 0x88055D60;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,80(r1)
	ctx.current_instruction = 0x88055D64;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// ori r29,r11,14
	ctx.r29.u64 = ctx.r11.u64 | 14;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x88055d8c
	if (ctx.cr6.eq) goto loc_88055D8C;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x88055d90
	if (!ctx.cr6.eq) goto loc_88055D90;
loc_88055D8C:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_88055D90:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x88055df4
	if (ctx.cr6.eq) goto loc_88055DF4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88055df4
	if (ctx.cr6.lt) goto loc_88055DF4;
	// li r3,680
	ctx.r3.s64 = 680;
	// bl 0x88059de0
	ctx.lr = 0x88055DA8;
	sub_88059DE0(ctx, base);
loc_88055DA8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88055dbc
	if (ctx.cr6.eq) goto loc_88055DBC;
	// bl 0x8805afb8
	ctx.lr = 0x88055DB4;
	sub_8805AFB8(ctx, base);
loc_88055DB4:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x88055dc0
	goto loc_88055DC0;
loc_88055DBC:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_88055DC0:
	// li r3,664
	ctx.r3.s64 = 664;
	// bl 0x88057bd0
	ctx.lr = 0x88055DC8;
	sub_88057BD0(ctx, base);
loc_88055DC8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88055ddc
	if (ctx.cr6.eq) goto loc_88055DDC;
	// bl 0x88058290
	ctx.lr = 0x88055DD4;
	sub_88058290(ctx, base);
loc_88055DD4:
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// b 0x88055de0
	goto loc_88055DE0;
loc_88055DDC:
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
loc_88055DE0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88055df0
	if (ctx.cr6.eq) goto loc_88055DF0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x88055df4
	if (!ctx.cr6.eq) goto loc_88055DF4;
loc_88055DF0:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_88055DF4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x88055e58
	if (ctx.cr6.eq) goto loc_88055E58;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88055e58
	if (ctx.cr6.lt) goto loc_88055E58;
	// li r3,552
	ctx.r3.s64 = 552;
	// bl 0x880590a8
	ctx.lr = 0x88055E0C;
	sub_880590A8(ctx, base);
loc_88055E0C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88055e20
	if (ctx.cr6.eq) goto loc_88055E20;
	// bl 0x88059cd0
	ctx.lr = 0x88055E18;
	sub_88059CD0(ctx, base);
loc_88055E18:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x88055e24
	goto loc_88055E24;
loc_88055E20:
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_88055E24:
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x880586c8
	ctx.lr = 0x88055E2C;
	sub_880586C8(ctx, base);
loc_88055E2C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88055e40
	if (ctx.cr6.eq) goto loc_88055E40;
	// bl 0x88058830
	ctx.lr = 0x88055E38;
	sub_88058830(ctx, base);
loc_88055E38:
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// b 0x88055e44
	goto loc_88055E44;
loc_88055E40:
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
loc_88055E44:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x88055e54
	if (ctx.cr6.eq) goto loc_88055E54;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x88055e58
	if (!ctx.cr6.eq) goto loc_88055E58;
loc_88055E54:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_88055E58:
	// li r29,8
	ctx.r29.s64 = 8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x88055eb8
	if (ctx.cr6.eq) goto loc_88055EB8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88055eb8
	if (ctx.cr6.lt) goto loc_88055EB8;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,24(r28)
	ctx.current_instruction = 0x88055E70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// subf r9,r25,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r25.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r31,0(r11)
	ctx.current_instruction = 0x88055E84;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// std r31,8(r11)
	ctx.current_instruction = 0x88055E8C;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r31,16(r11)
	ctx.current_instruction = 0x88055E90;
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// stw r31,24(r11)
	ctx.current_instruction = 0x88055E94;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r29,132(r1)
	ctx.current_instruction = 0x88055E98;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r10,136(r1)
	ctx.current_instruction = 0x88055E9C;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r7,120(r1)
	ctx.current_instruction = 0x88055EA0;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// lwz r6,0(r27)
	ctx.current_instruction = 0x88055EA4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r5,44(r6)
	ctx.current_instruction = 0x88055EA8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 44);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x88055EB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88055EB4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_88055EB8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x88055f14
	if (ctx.cr6.eq) goto loc_88055F14;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88055f14
	if (ctx.cr6.lt) goto loc_88055F14;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r10,28(r28)
	ctx.current_instruction = 0x88055ECC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// subf r9,r25,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r25.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// std r31,0(r11)
	ctx.current_instruction = 0x88055EE0;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// std r31,8(r11)
	ctx.current_instruction = 0x88055EE8;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r31,16(r11)
	ctx.current_instruction = 0x88055EEC;
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// stw r31,24(r11)
	ctx.current_instruction = 0x88055EF0;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r29,164(r1)
	ctx.current_instruction = 0x88055EF4;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r10,168(r1)
	ctx.current_instruction = 0x88055EF8;
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stw r7,152(r1)
	ctx.current_instruction = 0x88055EFC;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// lwz r6,0(r26)
	ctx.current_instruction = 0x88055F00;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r5,44(r6)
	ctx.current_instruction = 0x88055F04;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 44);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x88055F10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88055F10:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_88055F14:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x88055f58
	if (ctx.cr6.eq) goto loc_88055F58;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88055f58
	if (ctx.cr6.lt) goto loc_88055F58;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r28)
	ctx.current_instruction = 0x88055F28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// li r9,3
	ctx.r9.s64 = 3;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// std r31,0(r11)
	ctx.current_instruction = 0x88055F3C;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// stw r31,8(r11)
	ctx.current_instruction = 0x88055F40;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r8,92(r1)
	ctx.current_instruction = 0x88055F48;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,96(r1)
	ctx.current_instruction = 0x88055F4C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x88058310
	ctx.lr = 0x88055F54;
	sub_88058310(ctx, base);
loc_88055F54:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_88055F58:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x88055f78
	if (ctx.cr6.eq) goto loc_88055F78;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88056020
	if (ctx.cr6.lt) goto loc_88056020;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x88057888
	ctx.lr = 0x88055F74;
	sub_88057888(ctx, base);
loc_88055F74:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_88055F78:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88056020
	if (ctx.cr6.lt) goto loc_88056020;
	// lwz r11,0(r22)
	ctx.current_instruction = 0x88055F80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r10,36(r11)
	ctx.current_instruction = 0x88055F98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88055FAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88055FAC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88056020
	if (ctx.cr6.lt) goto loc_88056020;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lwz r10,4(r28)
	ctx.current_instruction = 0x88055FBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,8(r28)
	ctx.current_instruction = 0x88055FC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r8,12(r28)
	ctx.current_instruction = 0x88055FC8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r7,r10,31,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// lwz r6,16(r28)
	ctx.current_instruction = 0x88055FD0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r5,20(r28)
	ctx.current_instruction = 0x88055FD8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// std r31,0(r11)
	ctx.current_instruction = 0x88055FDC;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	ctx.current_instruction = 0x88055FE0;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r31,16(r11)
	ctx.current_instruction = 0x88055FE4;
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// std r31,24(r11)
	ctx.current_instruction = 0x88055FE8;
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r31.u64);
	// stw r31,32(r11)
	ctx.current_instruction = 0x88055FEC;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r20,176(r1)
	ctx.current_instruction = 0x88055FF0;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r20.u32);
	// stw r9,188(r1)
	ctx.current_instruction = 0x88055FF4;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// stw r22,180(r1)
	ctx.current_instruction = 0x88055FF8;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// stw r8,192(r1)
	ctx.current_instruction = 0x88055FFC;
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// stw r7,184(r1)
	ctx.current_instruction = 0x88056000;
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// stw r6,196(r1)
	ctx.current_instruction = 0x88056004;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// stw r5,200(r1)
	ctx.current_instruction = 0x88056008;
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r5.u32);
	// lwz r11,0(r18)
	ctx.current_instruction = 0x8805600C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,36(r11)
	ctx.current_instruction = 0x88056010;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805601C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805601C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_88056020:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8805604c
	if (ctx.cr6.eq) goto loc_8805604C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8805604c
	if (ctx.cr6.lt) goto loc_8805604C;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x88056030;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,68(r11)
	ctx.current_instruction = 0x8805603C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88056048;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88056048:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8805604C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x88056078
	if (ctx.cr6.eq) goto loc_88056078;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88056078
	if (ctx.cr6.lt) goto loc_88056078;
	// lwz r11,0(r26)
	ctx.current_instruction = 0x8805605C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,68(r11)
	ctx.current_instruction = 0x88056068;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88056074;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88056074:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_88056078:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x880560a4
	if (ctx.cr6.eq) goto loc_880560A4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x880560a4
	if (ctx.cr6.lt) goto loc_880560A4;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x88056088;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,96(r11)
	ctx.current_instruction = 0x88056094;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880560A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880560A0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_880560A4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x880560d0
	if (ctx.cr6.eq) goto loc_880560D0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x880560fc
	if (ctx.cr6.lt) goto loc_880560FC;
	// lwz r11,0(r26)
	ctx.current_instruction = 0x880560B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,92(r11)
	ctx.current_instruction = 0x880560C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880560CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880560CC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_880560D0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x880560fc
	if (ctx.cr6.lt) goto loc_880560FC;
	// lwz r11,0(r22)
	ctx.current_instruction = 0x880560D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r5,80(r1)
	ctx.current_instruction = 0x880560E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.current_instruction = 0x880560E8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,56(r11)
	ctx.current_instruction = 0x880560EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880560F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880560F8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_880560FC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88056118
	if (ctx.cr6.eq) goto loc_88056118;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x88056104;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8805610C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88056118;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88056118:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x88056134
	if (ctx.cr6.eq) goto loc_88056134;
	// lwz r11,0(r26)
	ctx.current_instruction = 0x88056120;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88056128;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88056134;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88056134:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x88056150
	if (ctx.cr6.eq) goto loc_88056150;
	// lwz r11,0(r21)
	ctx.current_instruction = 0x8805613C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88056144;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88056150;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88056150:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8805616c
	if (ctx.cr6.eq) goto loc_8805616C;
	// lwz r11,0(r19)
	ctx.current_instruction = 0x88056158;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88056160;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805616C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805616C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x88056188
	if (ctx.cr6.eq) goto loc_88056188;
	// lwz r11,0(r22)
	ctx.current_instruction = 0x88056174;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8805617C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88056188;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88056188:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x880561a0
	if (ctx.cr6.lt) goto loc_880561A0;
	// stw r18,0(r17)
	ctx.current_instruction = 0x88056190;
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r18.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_880561A0:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x880561bc
	if (ctx.cr6.eq) goto loc_880561BC;
	// lwz r11,0(r18)
	ctx.current_instruction = 0x880561A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x880561B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880561BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880561BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880642D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880642D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880642D8) {
			switch (rex_dispatch_address) {
				case 0x880642E0:
				case 0x88064340:
				case 0x88064358:
				case 0x88064370:
				case 0x880643A4:
				case 0x880643BC:
				case 0x88064458:
				case 0x880644A8:
				case 0x88064504:
				case 0x88064520:
				case 0x88064538:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880642D8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880642E0: goto loc_880642E0;
		case 0x88064340: goto loc_88064340;
		case 0x88064358: goto loc_88064358;
		case 0x88064370: goto loc_88064370;
		case 0x880643A4: goto loc_880643A4;
		case 0x880643BC: goto loc_880643BC;
		case 0x88064458: goto loc_88064458;
		case 0x880644A8: goto loc_880644A8;
		case 0x88064504: goto loc_88064504;
		case 0x88064520: goto loc_88064520;
		case 0x88064538: goto loc_88064538;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880642E0;
	__savegprlr_26(ctx, base);
loc_880642E0:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x880642E0;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stw r29,84(r1)
	ctx.current_instruction = 0x880642F0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	ctx.current_instruction = 0x880642F8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r29,88(r1)
	ctx.current_instruction = 0x88064300;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88064324
	if (!ctx.cr6.eq) goto loc_88064324;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88064324:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88064324;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.current_instruction = 0x88064334;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88064340;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88064340:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,568(r31)
	ctx.current_instruction = 0x8806434C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x880cb730
	ctx.lr = 0x88064358;
	sub_880CB730(ctx, base);
loc_88064358:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.current_instruction = 0x88064364;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880cb730
	ctx.lr = 0x88064370;
	sub_880CB730(ctx, base);
loc_88064370:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r10,r11,22
	ctx.r10.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x88064388
	if (ctx.cr6.eq) goto loc_88064388;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
loc_88064388:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88064388;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880643ac
	if (!ctx.cr6.eq) goto loc_880643AC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88063f30
	ctx.lr = 0x880643A4;
	sub_88063F30(ctx, base);
loc_880643A4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
loc_880643AC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.current_instruction = 0x880643B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880cb730
	ctx.lr = 0x880643BC;
	sub_880CB730(ctx, base);
loc_880643BC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x880643C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x880643C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88064410
	if (ctx.cr6.eq) goto loc_88064410;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88064410
	if (ctx.cr6.eq) goto loc_88064410;
	// lwz r9,80(r1)
	ctx.current_instruction = 0x880643DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r9)
	ctx.current_instruction = 0x880643E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x88064410
	if (ctx.cr6.eq) goto loc_88064410;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x88064410
	if (ctx.cr6.eq) goto loc_88064410;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x88064568
	if (ctx.cr6.gt) goto loc_88064568;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88064420
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88064420;
	// bdzf 4*cr6+eq,0x88064410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88064410;
	// bne cr6,0x88064440
	if (!ctx.cr6.eq) goto loc_88064440;
loc_88064410:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,160
	ctx.r3.u64 = ctx.r3.u64 | 160;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88064420:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,4(r10)
	ctx.current_instruction = 0x88064428;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8806442C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r27,16(r10)
	ctx.current_instruction = 0x88064430;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r27.u32);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x88064434;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r30,20(r9)
	ctx.current_instruction = 0x88064438;
	REX_STORE_U8(ctx.r9.u32 + 20, ctx.r30.u8);
	// b 0x880644b4
	goto loc_880644B4;
loc_88064440:
	// stw r29,4(r10)
	ctx.current_instruction = 0x88064440;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88064448;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,568(r31)
	ctx.current_instruction = 0x8806444C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// lbz r4,20(r11)
	ctx.current_instruction = 0x88064450;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// bl 0x880cb730
	ctx.lr = 0x88064458;
	sub_880CB730(ctx, base);
loc_88064458:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x88064460;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r11)
	ctx.current_instruction = 0x88064474;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.current_instruction = 0x88064478;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r27,16(r9)
	ctx.current_instruction = 0x8806447C;
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r27.u32);
	// lwz r8,88(r1)
	ctx.current_instruction = 0x88064480;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r30,20(r8)
	ctx.current_instruction = 0x88064484;
	REX_STORE_U8(ctx.r8.u32 + 20, ctx.r30.u8);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88064488;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r28,20(r11)
	ctx.current_instruction = 0x8806448C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// stw r29,16(r11)
	ctx.current_instruction = 0x88064490;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// lwz r7,84(r1)
	ctx.current_instruction = 0x88064494;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r29,20(r7)
	ctx.current_instruction = 0x88064498;
	REX_STORE_U8(ctx.r7.u32 + 20, ctx.r29.u8);
	// lwz r6,84(r1)
	ctx.current_instruction = 0x8806449C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,24(r6)
	ctx.current_instruction = 0x880644A0;
	REX_STORE_U32(ctx.r6.u32 + 24, ctx.r29.u32);
	// bl 0x880628b8
	ctx.lr = 0x880644A8;
	sub_880628B8(ctx, base);
loc_880644A8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
	// stw r29,84(r1)
	ctx.current_instruction = 0x880644B0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_880644B4:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x880644B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x880644B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x88064568
	if (ctx.cr6.gt) goto loc_88064568;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88064410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88064410;
	// bdzf 4*cr6+eq,0x880644f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880644F8;
	// bne cr6,0x88064410
	if (!ctx.cr6.eq) goto loc_88064410;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r10)
	ctx.current_instruction = 0x880644DC;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x880644E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,16(r10)
	ctx.current_instruction = 0x880644E4;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r27.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x880644E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r28,20(r9)
	ctx.current_instruction = 0x880644EC;
	REX_STORE_U8(ctx.r9.u32 + 20, ctx.r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880644F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880628b8
	ctx.lr = 0x88064504;
	sub_880628B8(ctx, base);
loc_88064504:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
	// stw r29,80(r1)
	ctx.current_instruction = 0x8806450C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88063f30
	ctx.lr = 0x88064520;
	sub_88063F30(ctx, base);
loc_88064520:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.current_instruction = 0x8806452C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880cb730
	ctx.lr = 0x88064538;
	sub_880CB730(ctx, base);
loc_88064538:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88064540;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,4(r11)
	ctx.current_instruction = 0x88064544;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88064548;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,16(r10)
	ctx.current_instruction = 0x8806454C;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r29.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x88064550;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r29,20(r9)
	ctx.current_instruction = 0x88064554;
	REX_STORE_U8(ctx.r9.u32 + 20, ctx.r29.u8);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x88064558;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,24(r8)
	ctx.current_instruction = 0x8806455C;
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88064568:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_88064570:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88069868) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88069868;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88069868) {
			switch (rex_dispatch_address) {
				case 0x88069870:
				case 0x88069888:
				case 0x880698B8:
				case 0x880698E4:
				case 0x880698F8:
				case 0x88069918:
				case 0x88069920:
				case 0x88069940:
				case 0x88069958:
				case 0x88069970:
				case 0x8806998C:
				case 0x880699A4:
				case 0x880699C0:
				case 0x880699C8:
				case 0x880699DC:
				case 0x880699F0:
				case 0x88069A14:
				case 0x88069A28:
				case 0x88069A3C:
				case 0x88069A50:
				case 0x88069A64:
				case 0x88069A78:
				case 0x88069A8C:
				case 0x88069AA8:
				case 0x88069AC8:
				case 0x88069AE0:
				case 0x88069B00:
				case 0x88069B08:
				case 0x88069B1C:
				case 0x88069B3C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88069868;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88069870: goto loc_88069870;
		case 0x88069888: goto loc_88069888;
		case 0x880698B8: goto loc_880698B8;
		case 0x880698E4: goto loc_880698E4;
		case 0x880698F8: goto loc_880698F8;
		case 0x88069918: goto loc_88069918;
		case 0x88069920: goto loc_88069920;
		case 0x88069940: goto loc_88069940;
		case 0x88069958: goto loc_88069958;
		case 0x88069970: goto loc_88069970;
		case 0x8806998C: goto loc_8806998C;
		case 0x880699A4: goto loc_880699A4;
		case 0x880699C0: goto loc_880699C0;
		case 0x880699C8: goto loc_880699C8;
		case 0x880699DC: goto loc_880699DC;
		case 0x880699F0: goto loc_880699F0;
		case 0x88069A14: goto loc_88069A14;
		case 0x88069A28: goto loc_88069A28;
		case 0x88069A3C: goto loc_88069A3C;
		case 0x88069A50: goto loc_88069A50;
		case 0x88069A64: goto loc_88069A64;
		case 0x88069A78: goto loc_88069A78;
		case 0x88069A8C: goto loc_88069A8C;
		case 0x88069AA8: goto loc_88069AA8;
		case 0x88069AC8: goto loc_88069AC8;
		case 0x88069AE0: goto loc_88069AE0;
		case 0x88069B00: goto loc_88069B00;
		case 0x88069B08: goto loc_88069B08;
		case 0x88069B1C: goto loc_88069B1C;
		case 0x88069B3C: goto loc_88069B3C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88069870;
	__savegprlr_28(ctx, base);
loc_88069870:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88069870;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069874;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,256(r11)
	ctx.current_instruction = 0x8806987C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069888;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069888:
	// rlwinm r9,r3,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88069b28
	if (!ctx.cr6.eq) goto loc_88069B28;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88069898:
	// lwz r3,44(r30)
	ctx.current_instruction = 0x88069898;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880698A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.current_instruction = 0x880698AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880698B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880698B8:
	// lwz r9,80(r1)
	ctx.current_instruction = 0x880698B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88069acc
	if (ctx.cr6.eq) goto loc_88069ACC;
	// lwz r3,44(r30)
	ctx.current_instruction = 0x880698C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880698D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.current_instruction = 0x880698D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880698E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880698E4:
	// lwz r9,0(r30)
	ctx.current_instruction = 0x880698E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,256(r9)
	ctx.current_instruction = 0x880698EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 256);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x880698F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880698F8:
	// rlwinm r7,r3,0,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x88069a78
	if (!ctx.cr6.eq) goto loc_88069A78;
loc_88069904:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88069904;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069908;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.current_instruction = 0x8806990C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069918;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069918:
	// lwz r3,84(r1)
	ctx.current_instruction = 0x88069918;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88067a20
	ctx.lr = 0x88069920;
	sub_88067A20(ctx, base);
loc_88069920:
	// lwz r9,244(r30)
	ctx.current_instruction = 0x88069920;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 244);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x88069a00
	if (!ctx.cr6.gt) goto loc_88069A00;
	// lwz r11,260(r30)
	ctx.current_instruction = 0x8806992C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88069a00
	if (!ctx.cr6.eq) goto loc_88069A00;
	// lwz r3,84(r1)
	ctx.current_instruction = 0x88069938;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88067a80
	ctx.lr = 0x88069940;
	sub_88067A80(ctx, base);
loc_88069940:
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069940;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,56(r11)
	ctx.current_instruction = 0x8806994C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069958:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88069958;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,0(r3)
	ctx.current_instruction = 0x88069960;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.current_instruction = 0x88069964;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069970;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069970:
	// lwz r7,0(r31)
	ctx.current_instruction = 0x88069970;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,80(r1)
	ctx.current_instruction = 0x88069978;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r7)
	ctx.current_instruction = 0x8806997C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// lwz r28,0(r6)
	ctx.current_instruction = 0x88069984;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bctrl 
	ctx.lr = 0x8806998C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806998C:
	// lwz r11,120(r28)
	ctx.current_instruction = 0x8806998C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 120);
	// addi r4,r3,-8
	ctx.r4.s64 = ctx.r3.s64 + -8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88069998;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880699A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880699A4:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880699A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x880699B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// blt cr6,0x88069a4c
	if (ctx.cr6.lt) goto loc_88069A4C;
	// bctrl 
	ctx.lr = 0x880699C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880699C0:
	// lwz r3,84(r1)
	ctx.current_instruction = 0x880699C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88067b80
	ctx.lr = 0x880699C8;
	sub_88067B80(ctx, base);
loc_880699C8:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x880699C8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x880699CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.current_instruction = 0x880699D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x880699DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880699DC:
	// lwz r7,0(r30)
	ctx.current_instruction = 0x880699DC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,204(r7)
	ctx.current_instruction = 0x880699E4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 204);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x880699F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880699F0:
	// lwz r5,88(r1)
	ctx.current_instruction = 0x880699F0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88069a78
	if (ctx.cr6.eq) goto loc_88069A78;
	// b 0x88069a28
	goto loc_88069A28;
loc_88069A00:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88069A00;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069A04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88069A08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069A14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069A14:
	// lwz r9,0(r30)
	ctx.current_instruction = 0x88069A14;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,164(r9)
	ctx.current_instruction = 0x88069A1C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 164);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069A28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069A28:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88069A28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,256(r11)
	ctx.current_instruction = 0x88069A30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069A3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069A3C:
	// rlwinm r9,r3,0,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88069904
	if (ctx.cr6.eq) goto loc_88069904;
	// b 0x88069a78
	goto loc_88069A78;
loc_88069A4C:
	// bctrl 
	ctx.lr = 0x88069A50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069A50:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88069A50;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x88069A54;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.current_instruction = 0x88069A58;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069A64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069A64:
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88069A64;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,96(r7)
	ctx.current_instruction = 0x88069A6C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88069A78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069A78:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88069A78;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069A7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.current_instruction = 0x88069A80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069A8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069A8C:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88069A8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88069aac
	if (ctx.cr6.eq) goto loc_88069AAC;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069A98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88069A9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069AA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069AA8:
	// stw r29,80(r1)
	ctx.current_instruction = 0x88069AA8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_88069AAC:
	// lwz r3,84(r1)
	ctx.current_instruction = 0x88069AAC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88069acc
	if (ctx.cr6.eq) goto loc_88069ACC;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069AB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88069ABC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069AC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069AC8:
	// stw r29,84(r1)
	ctx.current_instruction = 0x88069AC8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_88069ACC:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88069ACC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,256(r11)
	ctx.current_instruction = 0x88069AD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069AE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069AE0:
	// rlwinm r9,r3,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88069b28
	if (!ctx.cr6.eq) goto loc_88069B28;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88069AEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,212(r11)
	ctx.current_instruction = 0x88069AF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069B00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069B00:
	// lwz r3,264(r30)
	ctx.current_instruction = 0x88069B00;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 264);
	// bl 0x881ec608
	ctx.lr = 0x88069B08;
	sub_881EC608(ctx, base);
loc_88069B08:
	// lwz r9,0(r30)
	ctx.current_instruction = 0x88069B08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,256(r9)
	ctx.current_instruction = 0x88069B10;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 256);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069B1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069B1C:
	// rlwinm r7,r3,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88069898
	if (ctx.cr6.eq) goto loc_88069898;
loc_88069B28:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88069B28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,212(r11)
	ctx.current_instruction = 0x88069B30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069B3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069B3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88077A88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88077A88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88077A88) {
			switch (rex_dispatch_address) {
				case 0x88077A90:
				case 0x88077AA4:
				case 0x88077AB0:
				case 0x88077ABC:
				case 0x88077AD4:
				case 0x88077AF4:
				case 0x88077B30:
				case 0x88077B58:
				case 0x88077B78:
				case 0x88077BD4:
				case 0x88077BF0:
				case 0x88077C04:
				case 0x88077C1C:
				case 0x88077D6C:
				case 0x88077D8C:
				case 0x88077D98:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88077A88;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88077A90: goto loc_88077A90;
		case 0x88077AA4: goto loc_88077AA4;
		case 0x88077AB0: goto loc_88077AB0;
		case 0x88077ABC: goto loc_88077ABC;
		case 0x88077AD4: goto loc_88077AD4;
		case 0x88077AF4: goto loc_88077AF4;
		case 0x88077B30: goto loc_88077B30;
		case 0x88077B58: goto loc_88077B58;
		case 0x88077B78: goto loc_88077B78;
		case 0x88077BD4: goto loc_88077BD4;
		case 0x88077BF0: goto loc_88077BF0;
		case 0x88077C04: goto loc_88077C04;
		case 0x88077C1C: goto loc_88077C1C;
		case 0x88077D6C: goto loc_88077D6C;
		case 0x88077D8C: goto loc_88077D8C;
		case 0x88077D98: goto loc_88077D98;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88077A90;
	__savegprlr_29(ctx, base);
loc_88077A90:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88077A90;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,676(r3)
	ctx.current_instruction = 0x88077A98;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 676);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8806e7b8
	ctx.lr = 0x88077AA4;
	sub_8806E7B8(ctx, base);
loc_88077AA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1416(r31)
	ctx.current_instruction = 0x88077AA8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// bl 0x88102570
	ctx.lr = 0x88077AB0;
	sub_88102570(ctx, base);
loc_88077AB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1416(r31)
	ctx.current_instruction = 0x88077AB4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// bl 0x880daed0
	ctx.lr = 0x88077ABC;
	sub_880DAED0(ctx, base);
loc_88077ABC:
	// lwz r11,2424(r31)
	ctx.current_instruction = 0x88077ABC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2424);
	// stw r3,20900(r31)
	ctx.current_instruction = 0x88077AC0;
	REX_STORE_U32(ctx.r31.u32 + 20900, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077ad4
	if (ctx.cr6.eq) goto loc_88077AD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb798
	ctx.lr = 0x88077AD4;
	sub_880EB798(ctx, base);
loc_88077AD4:
	// lwz r4,31544(r31)
	ctx.current_instruction = 0x88077AD4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x88077aec
	if (!ctx.cr6.eq) goto loc_88077AEC;
	// lwz r11,27988(r31)
	ctx.current_instruction = 0x88077AE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88077af4
	if (!ctx.cr6.eq) goto loc_88077AF4;
loc_88077AEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880706a8
	ctx.lr = 0x88077AF4;
	sub_880706A8(ctx, base);
loc_88077AF4:
	// lwz r11,2648(r31)
	ctx.current_instruction = 0x88077AF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88077b08
	if (!ctx.cr6.eq) goto loc_88077B08;
	// lwz r10,2592(r31)
	ctx.current_instruction = 0x88077B00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2592);
	// stw r10,2588(r31)
	ctx.current_instruction = 0x88077B04;
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r10.u32);
loc_88077B08:
	// lwz r10,2564(r31)
	ctx.current_instruction = 0x88077B08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2564);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88077b78
	if (ctx.cr6.eq) goto loc_88077B78;
	// lwz r10,6784(r31)
	ctx.current_instruction = 0x88077B14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6784);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88077b3c
	if (ctx.cr6.eq) goto loc_88077B3C;
	// lwz r10,28136(r31)
	ctx.current_instruction = 0x88077B20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28136);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x88077b3c
	if (ctx.cr6.eq) goto loc_88077B3C;
	// bl 0x881ee8e8
	ctx.lr = 0x88077B30;
	sub_881EE8E8(ctx, base);
loc_88077B30:
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// stw r11,2588(r31)
	ctx.current_instruction = 0x88077B34;
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r11.u32);
	// b 0x88077b58
	goto loc_88077B58;
loc_88077B3C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077b58
	if (ctx.cr6.eq) goto loc_88077B58;
	// lwz r11,20256(r31)
	ctx.current_instruction = 0x88077B44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077b58
	if (ctx.cr6.eq) goto loc_88077B58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880713e0
	ctx.lr = 0x88077B58;
	sub_880713E0(ctx, base);
loc_88077B58:
	// lwz r11,2624(r31)
	ctx.current_instruction = 0x88077B58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2624);
	// lwz r10,2588(r31)
	ctx.current_instruction = 0x88077B5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2588);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88077b6c
	if (!ctx.cr6.gt) goto loc_88077B6C;
	// stw r11,2588(r31)
	ctx.current_instruction = 0x88077B68;
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r11.u32);
loc_88077B6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2588(r31)
	ctx.current_instruction = 0x88077B70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2588);
	// bl 0x88071bf0
	ctx.lr = 0x88077B78;
	sub_88071BF0(ctx, base);
loc_88077B78:
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x88077B78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077ba4
	if (ctx.cr6.eq) goto loc_88077BA4;
	// lwz r11,28132(r31)
	ctx.current_instruction = 0x88077B84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,2588(r31)
	ctx.current_instruction = 0x88077B8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2588);
	// bne cr6,0x88077b9c
	if (!ctx.cr6.eq) goto loc_88077B9C;
	// stw r11,2632(r31)
	ctx.current_instruction = 0x88077B94;
	REX_STORE_U32(ctx.r31.u32 + 2632, ctx.r11.u32);
	// b 0x88077bac
	goto loc_88077BAC;
loc_88077B9C:
	// stw r11,2636(r31)
	ctx.current_instruction = 0x88077B9C;
	REX_STORE_U32(ctx.r31.u32 + 2636, ctx.r11.u32);
	// b 0x88077bac
	goto loc_88077BAC;
loc_88077BA4:
	// lwz r11,2588(r31)
	ctx.current_instruction = 0x88077BA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2588);
	// stw r11,2628(r31)
	ctx.current_instruction = 0x88077BA8;
	REX_STORE_U32(ctx.r31.u32 + 2628, ctx.r11.u32);
loc_88077BAC:
	// lwz r11,28048(r31)
	ctx.current_instruction = 0x88077BAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28048);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077bf8
	if (ctx.cr6.eq) goto loc_88077BF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r29,28044(r31)
	ctx.current_instruction = 0x88077BC0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// lwz r10,7056(r31)
	ctx.current_instruction = 0x88077BC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7056);
	// stw r11,28044(r31)
	ctx.current_instruction = 0x88077BC8;
	REX_STORE_U32(ctx.r31.u32 + 28044, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88077BD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88077BD4:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,19456(r31)
	ctx.current_instruction = 0x88077BD8;
	REX_STORE_U32(ctx.r31.u32 + 19456, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,28044(r31)
	ctx.current_instruction = 0x88077BE0;
	REX_STORE_U32(ctx.r31.u32 + 28044, ctx.r9.u32);
	// lwz r8,7056(r31)
	ctx.current_instruction = 0x88077BE4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7056);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88077BF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88077BF0:
	// stw r29,28044(r31)
	ctx.current_instruction = 0x88077BF0;
	REX_STORE_U32(ctx.r31.u32 + 28044, ctx.r29.u32);
	// b 0x88077c04
	goto loc_88077C04;
loc_88077BF8:
	// lwz r11,7056(r31)
	ctx.current_instruction = 0x88077BF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7056);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88077C04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88077C04:
	// lwz r11,2564(r31)
	ctx.current_instruction = 0x88077C04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2564);
	// stw r3,19456(r31)
	ctx.current_instruction = 0x88077C08;
	REX_STORE_U32(ctx.r31.u32 + 19456, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077c1c
	if (ctx.cr6.eq) goto loc_88077C1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88071c78
	ctx.lr = 0x88077C1C;
	sub_88071C78(ctx, base);
loc_88077C1C:
	// lwz r11,1692(r31)
	ctx.current_instruction = 0x88077C1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1692);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88077d44
	if (ctx.cr6.lt) goto loc_88077D44;
	// lwz r11,1696(r31)
	ctx.current_instruction = 0x88077C28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88077d44
	if (ctx.cr6.lt) goto loc_88077D44;
	// lwz r11,28004(r31)
	ctx.current_instruction = 0x88077C34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077c48
	if (ctx.cr6.eq) goto loc_88077C48;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x88077c5c
	goto loc_88077C5C;
loc_88077C48:
	// lwz r11,28132(r31)
	ctx.current_instruction = 0x88077C48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
loc_88077C5C:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88077C5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88077d44
	if (ctx.cr6.eq) goto loc_88077D44;
loc_88077C70:
	// lwz r10,1692(r31)
	ctx.current_instruction = 0x88077C70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1692);
	// lwz r7,720(r31)
	ctx.current_instruction = 0x88077C74;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x88077C78;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r10,r9
	ctx.current_instruction = 0x88077C8C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r4,16384
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16384, ctx.xer);
	// beq cr6,0x88077c9c
	if (ctx.cr6.eq) goto loc_88077C9C;
	// sthx r8,r10,r9
	ctx.current_instruction = 0x88077C98;
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
loc_88077C9C:
	// lwz r10,1692(r31)
	ctx.current_instruction = 0x88077C9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1692);
	// lwz r7,720(r31)
	ctx.current_instruction = 0x88077CA0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x88077CA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r9
	ctx.current_instruction = 0x88077CC0;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,16384
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16384, ctx.xer);
	// beq cr6,0x88077cd0
	if (ctx.cr6.eq) goto loc_88077CD0;
	// sthx r8,r10,r9
	ctx.current_instruction = 0x88077CCC;
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
loc_88077CD0:
	// lwz r10,1696(r31)
	ctx.current_instruction = 0x88077CD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1696);
	// lwz r7,720(r31)
	ctx.current_instruction = 0x88077CD4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x88077CD8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r10,r9
	ctx.current_instruction = 0x88077CEC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r4,16384
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16384, ctx.xer);
	// beq cr6,0x88077cfc
	if (ctx.cr6.eq) goto loc_88077CFC;
	// sthx r8,r10,r9
	ctx.current_instruction = 0x88077CF8;
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
loc_88077CFC:
	// lwz r10,1696(r31)
	ctx.current_instruction = 0x88077CFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1696);
	// lwz r7,720(r31)
	ctx.current_instruction = 0x88077D00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x88077D08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r9
	ctx.current_instruction = 0x88077D20;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,16384
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16384, ctx.xer);
	// beq cr6,0x88077d30
	if (ctx.cr6.eq) goto loc_88077D30;
	// sthx r8,r10,r9
	ctx.current_instruction = 0x88077D2C;
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
loc_88077D30:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88077D30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88077c70
	if (ctx.cr6.lt) goto loc_88077C70;
loc_88077D44:
	// lwz r11,31108(r31)
	ctx.current_instruction = 0x88077D44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077d6c
	if (ctx.cr6.eq) goto loc_88077D6C;
	// lwz r11,20268(r31)
	ctx.current_instruction = 0x88077D50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88077d6c
	if (!ctx.cr6.eq) goto loc_88077D6C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,724(r31)
	ctx.current_instruction = 0x88077D60;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r3,31136(r31)
	ctx.current_instruction = 0x88077D64;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 31136);
	// bl 0x88052d90
	ctx.lr = 0x88077D6C;
	sub_88052D90(ctx, base);
loc_88077D6C:
	// lwz r11,7140(r31)
	ctx.current_instruction = 0x88077D6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077d80
	if (ctx.cr6.eq) goto loc_88077D80;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x88077d98
	if (!ctx.cr6.eq) goto loc_88077D98;
loc_88077D80:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f40c0
	ctx.lr = 0x88077D8C;
	sub_880F40C0(ctx, base);
loc_88077D8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,676(r31)
	ctx.current_instruction = 0x88077D90;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// bl 0x88074338
	ctx.lr = 0x88077D98;
	sub_88074338(ctx, base);
loc_88077D98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880823D0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880823D0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880823D0;
	ctx.current_instruction = 0x880823D0;
	PPCRegister temp{};
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,30600(r3)
	ctx.current_instruction = 0x880823DC;
	REX_STORE_U64(ctx.r3.u32 + 30600, ctx.r11.u64);
	// lfd f13,12544(r10)
	ctx.current_instruction = 0x880823E0;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12544);
	// stw r11,30808(r3)
	ctx.current_instruction = 0x880823E4;
	REX_STORE_U32(ctx.r3.u32 + 30808, ctx.r11.u32);
	// lfs f0,6732(r9)
	ctx.current_instruction = 0x880823E8;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,30812(r3)
	ctx.current_instruction = 0x880823EC;
	REX_STORE_U32(ctx.r3.u32 + 30812, ctx.r11.u32);
	// stfd f13,30608(r3)
	ctx.current_instruction = 0x880823F0;
	REX_STORE_U64(ctx.r3.u32 + 30608, ctx.f13.u64);
	// stfs f0,30816(r3)
	ctx.current_instruction = 0x880823F4;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 30816, temp.u32);
	// stfs f0,30820(r3)
	ctx.current_instruction = 0x880823F8;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 30820, temp.u32);
	// stfs f0,30824(r3)
	ctx.current_instruction = 0x880823FC;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 30824, temp.u32);
	// stfs f0,30828(r3)
	ctx.current_instruction = 0x88082400;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 30828, temp.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88083858) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88083858;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88083858) {
			switch (rex_dispatch_address) {
				case 0x88083860:
				case 0x88083878:
				case 0x88083904:
				case 0x88083918:
				case 0x88083970:
				case 0x880839C0:
				case 0x88083A34:
				case 0x88083A40:
				case 0x88083A6C:
				case 0x88083AEC:
				case 0x88083AF8:
				case 0x88083B28:
				case 0x88083C50:
				case 0x88083CAC:
				case 0x88083DA0:
				case 0x88083DFC:
				case 0x88083E74:
				case 0x88083E80:
				case 0x88083EB0:
				case 0x88083F14:
				case 0x88083F24:
				case 0x88083F48:
				case 0x88083F68:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88083858;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88083860: goto loc_88083860;
		case 0x88083878: goto loc_88083878;
		case 0x88083904: goto loc_88083904;
		case 0x88083918: goto loc_88083918;
		case 0x88083970: goto loc_88083970;
		case 0x880839C0: goto loc_880839C0;
		case 0x88083A34: goto loc_88083A34;
		case 0x88083A40: goto loc_88083A40;
		case 0x88083A6C: goto loc_88083A6C;
		case 0x88083AEC: goto loc_88083AEC;
		case 0x88083AF8: goto loc_88083AF8;
		case 0x88083B28: goto loc_88083B28;
		case 0x88083C50: goto loc_88083C50;
		case 0x88083CAC: goto loc_88083CAC;
		case 0x88083DA0: goto loc_88083DA0;
		case 0x88083DFC: goto loc_88083DFC;
		case 0x88083E74: goto loc_88083E74;
		case 0x88083E80: goto loc_88083E80;
		case 0x88083EB0: goto loc_88083EB0;
		case 0x88083F14: goto loc_88083F14;
		case 0x88083F24: goto loc_88083F24;
		case 0x88083F48: goto loc_88083F48;
		case 0x88083F68: goto loc_88083F68;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x88083860;
	__savegprlr_19(ctx, base);
loc_88083860:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x88083860;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,30428(r3)
	ctx.current_instruction = 0x88083864;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30428);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88083880
	if (!ctx.cr6.eq) goto loc_88083880;
	// bl 0x880fe498
	ctx.lr = 0x88083878;
	sub_880FE498(ctx, base);
loc_88083878:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88083880:
	// lwz r29,7044(r31)
	ctx.current_instruction = 0x88083880;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 7044);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r30,2244(r31)
	ctx.current_instruction = 0x88083888;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 2244);
	// bne cr6,0x8808389c
	if (!ctx.cr6.eq) goto loc_8808389C;
	// lwz r29,6792(r31)
	ctx.current_instruction = 0x88083890;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// lwz r30,2248(r31)
	ctx.current_instruction = 0x88083894;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 2248);
	// b 0x880838ac
	goto loc_880838AC;
loc_8808389C:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x880838ac
	if (!ctx.cr6.eq) goto loc_880838AC;
	// lwz r29,21136(r31)
	ctx.current_instruction = 0x880838A4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 21136);
	// lwz r30,28412(r31)
	ctx.current_instruction = 0x880838A8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 28412);
loc_880838AC:
	// lwz r11,2124(r31)
	ctx.current_instruction = 0x880838AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880838cc
	if (!ctx.cr6.gt) goto loc_880838CC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x880838cc
	if (!ctx.cr6.eq) goto loc_880838CC;
	// lwz r29,7836(r31)
	ctx.current_instruction = 0x880838C0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 7836);
	// lwz r30,2256(r31)
	ctx.current_instruction = 0x880838C4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 2256);
	// b 0x880838f0
	goto loc_880838F0;
loc_880838CC:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x880838e0
	if (!ctx.cr6.eq) goto loc_880838E0;
	// lwz r29,28416(r31)
	ctx.current_instruction = 0x880838D4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28416);
	// lwz r30,28408(r31)
	ctx.current_instruction = 0x880838D8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 28408);
	// b 0x880838f0
	goto loc_880838F0;
loc_880838E0:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x880838f0
	if (!ctx.cr6.eq) goto loc_880838F0;
	// lwz r29,28424(r31)
	ctx.current_instruction = 0x880838E8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28424);
	// lwz r30,28420(r31)
	ctx.current_instruction = 0x880838EC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 28420);
loc_880838F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r28,728(r31)
	ctx.current_instruction = 0x880838F4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// clrlwi r4,r30,31
	ctx.r4.u64 = ctx.r30.u32 & 0x1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880838FC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x88083904;
	sub_880E6960(ctx, base);
loc_88083904:
	// srawi r30,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8808390C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x88083918;
	sub_880E6960(ctx, base);
loc_88083918:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x88083f68
	if (ctx.cr6.gt) goto loc_88083F68;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8808394c
	if (ctx.cr6.eq) goto loc_8808394C;
	// bdz 0x88083948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88083948;
	// bdz 0x88083b54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88083B54;
	// bdz 0x88083b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88083B50;
	// bdz 0x880839d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_880839D8;
	// bdz 0x88083a94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88083A94;
	// b 0x88083f60
	goto loc_88083F60;
loc_88083948:
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
loc_8808394C:
	// lwz r11,728(r31)
	ctx.current_instruction = 0x8808394C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88083970
	if (ctx.cr6.eq) goto loc_88083970;
	// lbz r11,0(r29)
	ctx.current_instruction = 0x8808395C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88083964;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x880e6960
	ctx.lr = 0x88083970;
	sub_880E6960(ctx, base);
loc_88083970:
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88083970;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88083f68
	if (!ctx.cr6.lt) goto loc_88083F68;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r26,r29,1
	ctx.r26.s64 = ctx.r29.s64 + 1;
	// addi r28,r11,23388
	ctx.r28.s64 = ctx.r11.s64 + 23388;
	// addi r27,r10,13216
	ctx.r27.s64 = ctx.r10.s64 + 13216;
loc_88083994:
	// lbzx r11,r26,r30
	ctx.current_instruction = 0x88083994;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// lbzx r10,r30,r29
	ctx.current_instruction = 0x88083998;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880839A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r8,r27
	ctx.current_instruction = 0x880839B4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// lwzx r4,r8,r28
	ctx.current_instruction = 0x880839B8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// bl 0x880e6960
	ctx.lr = 0x880839C0;
	sub_880E6960(ctx, base);
loc_880839C0:
	// lwz r7,728(r31)
	ctx.current_instruction = 0x880839C0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x88083994
	if (ctx.cr6.lt) goto loc_88083994;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_880839D8:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880839D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88083f68
	if (!ctx.cr6.gt) goto loc_88083F68;
loc_880839E8:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880839E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88083a1c
	if (!ctx.cr6.gt) goto loc_88083A1C;
	// mullw r8,r10,r28
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_88083A00:
	// lbzx r9,r9,r29
	ctx.current_instruction = 0x88083A00;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88083a1c
	if (!ctx.cr6.eq) goto loc_88083A1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// blt cr6,0x88083a00
	if (ctx.cr6.lt) goto loc_88083A00;
loc_88083A1C:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88083A1C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x88083a38
	if (!ctx.cr6.eq) goto loc_88083A38;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x88083A34;
	sub_880E6960(ctx, base);
loc_88083A34:
	// b 0x88083a7c
	goto loc_88083A7C;
loc_88083A38:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x88083A40;
	sub_880E6960(ctx, base);
loc_88083A40:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x88083A40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88083a7c
	if (!ctx.cr6.gt) goto loc_88083A7C;
loc_88083A50:
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88083A54;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lbzx r10,r11,r29
	ctx.current_instruction = 0x88083A60;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// bl 0x880e6960
	ctx.lr = 0x88083A6C;
	sub_880E6960(ctx, base);
loc_88083A6C:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x88083A6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88083a50
	if (ctx.cr6.lt) goto loc_88083A50;
loc_88083A7C:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88083A7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880839e8
	if (ctx.cr6.lt) goto loc_880839E8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88083A94:
	// lwz r9,720(r31)
	ctx.current_instruction = 0x88083A94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88083f68
	if (!ctx.cr6.gt) goto loc_88083F68;
loc_88083AA4:
	// lwz r8,724(r31)
	ctx.current_instruction = 0x88083AA4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88083ad4
	if (!ctx.cr6.gt) goto loc_88083AD4;
loc_88083AB4:
	// mullw r10,r9,r11
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lbzx r7,r10,r29
	ctx.current_instruction = 0x88083ABC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x88083ad4
	if (!ctx.cr6.eq) goto loc_88083AD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88083ab4
	if (ctx.cr6.lt) goto loc_88083AB4;
loc_88083AD4:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88083AD4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x88083af0
	if (!ctx.cr6.eq) goto loc_88083AF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x88083AEC;
	sub_880E6960(ctx, base);
loc_88083AEC:
	// b 0x88083b38
	goto loc_88083B38;
loc_88083AF0:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x88083AF8;
	sub_880E6960(ctx, base);
loc_88083AF8:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88083AF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88083b38
	if (!ctx.cr6.gt) goto loc_88083B38;
loc_88083B08:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x88083B08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88083B10;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbzx r9,r10,r29
	ctx.current_instruction = 0x88083B1C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// bl 0x880e6960
	ctx.lr = 0x88083B28;
	sub_880E6960(ctx, base);
loc_88083B28:
	// lwz r8,724(r31)
	ctx.current_instruction = 0x88083B28;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88083b08
	if (ctx.cr6.lt) goto loc_88083B08;
loc_88083B38:
	// lwz r9,720(r31)
	ctx.current_instruction = 0x88083B38;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88083aa4
	if (ctx.cr6.lt) goto loc_88083AA4;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88083B50:
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
loc_88083B54:
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// lwz r9,724(r31)
	ctx.current_instruction = 0x88083B58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r19,0
	ctx.r19.s64 = 0;
	// ori r10,r11,43691
	ctx.r10.u64 = ctx.r11.u64 | 43691;
	// mulhwu r8,r9,r10
	ctx.r8.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf. r6,r7,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x88083cd0
	if (!ctx.cr0.eq) goto loc_88083CD0;
	// lwz r11,720(r31)
	ctx.current_instruction = 0x88083B7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mulhwu r8,r11,r10
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf. r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x88083cd0
	if (ctx.cr0.eq) goto loc_88083CD0;
	// clrlwi r20,r11,31
	ctx.r20.u64 = ctx.r11.u32 & 0x1;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88083e1c
	if (!ctx.cr6.gt) goto loc_88083E1C;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r22,r9,23356
	ctx.r22.s64 = ctx.r9.s64 + 23356;
	// addi r25,r10,12704
	ctx.r25.s64 = ctx.r10.s64 + 12704;
loc_88083BB8:
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88083cbc
	if (!ctx.cr6.lt) goto loc_88083CBC;
	// addi r27,r29,1
	ctx.r27.s64 = ctx.r29.s64 + 1;
loc_88083BC8:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88083BC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r28,r25,4
	ctx.r28.s64 = ctx.r25.s64 + 4;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88083BD0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mullw r11,r10,r23
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbzx r9,r27,r11
	ctx.current_instruction = 0x88083BDC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// lbzx r8,r11,r29
	ctx.current_instruction = 0x88083BE0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r6,r27,r11
	ctx.current_instruction = 0x88083BF4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r5,r11,r29
	ctx.current_instruction = 0x88083BFC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r27,r11
	ctx.current_instruction = 0x88083C10;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r5,r11,r29
	ctx.current_instruction = 0x88083C18;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r26,r9,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r26,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r30,r25
	ctx.current_instruction = 0x88083C44;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// lwzx r5,r30,r28
	ctx.current_instruction = 0x88083C48;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// bl 0x880e6960
	ctx.lr = 0x88083C50;
	sub_880E6960(ctx, base);
loc_88083C50:
	// lwzx r8,r30,r28
	ctx.current_instruction = 0x88083C50;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// bne cr6,0x88083cac
	if (!ctx.cr6.eq) goto loc_88083CAC;
	// srawi r11,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88083C60;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// rlwinm r9,r11,2,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r22
	ctx.current_instruction = 0x88083C70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// lwzx r9,r8,r22
	ctx.current_instruction = 0x88083C74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r22.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x88083c90
	if (!ctx.cr6.eq) goto loc_88083C90;
	// li r5,5
	ctx.r5.s64 = 5;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// b 0x88083ca8
	goto loc_88083CA8;
loc_88083C90:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r25,4
	ctx.r10.s64 = ctx.r25.s64 + 4;
	// xori r9,r11,126
	ctx.r9.u64 = ctx.r11.u64 ^ 126;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r8,r10
	ctx.current_instruction = 0x88083CA0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r4,r8,r25
	ctx.current_instruction = 0x88083CA4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
loc_88083CA8:
	// bl 0x880e6960
	ctx.lr = 0x88083CAC;
	sub_880E6960(ctx, base);
loc_88083CAC:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x88083CAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88083bc8
	if (ctx.cr6.lt) goto loc_88083BC8;
loc_88083CBC:
	// lwz r10,724(r31)
	ctx.current_instruction = 0x88083CBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r23,r23,3
	ctx.r23.s64 = ctx.r23.s64 + 3;
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88083bb8
	if (ctx.cr6.lt) goto loc_88083BB8;
	// b 0x88083e1c
	goto loc_88083E1C;
loc_88083CD0:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x88083CD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// clrlwi r19,r9,31
	ctx.r19.u64 = ctx.r9.u32 & 0x1;
	// mulhwu r10,r11,r10
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpw cr6,r19,r9
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r9.s32, ctx.xer);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r20,r9,r11
	ctx.r20.u64 = ctx.r11.u64 - ctx.r9.u64;
	// bge cr6,0x88083e1c
	if (!ctx.cr6.lt) goto loc_88083E1C;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r21,r9,23356
	ctx.r21.s64 = ctx.r9.s64 + 23356;
	// addi r26,r10,12704
	ctx.r26.s64 = ctx.r10.s64 + 12704;
loc_88083D08:
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88083e0c
	if (!ctx.cr6.lt) goto loc_88083E0C;
	// addi r25,r29,2
	ctx.r25.s64 = ctx.r29.s64 + 2;
	// addi r24,r29,1
	ctx.r24.s64 = ctx.r29.s64 + 1;
loc_88083D1C:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88083D1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r28,r26,4
	ctx.r28.s64 = ctx.r26.s64 + 4;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88083D24;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mullw r11,r10,r22
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r22.s32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lbzx r9,r25,r11
	ctx.current_instruction = 0x88083D30;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// lbzx r8,r24,r11
	ctx.current_instruction = 0x88083D34;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// lbzx r7,r11,r29
	ctx.current_instruction = 0x88083D38;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// lbzx r5,r25,r11
	ctx.current_instruction = 0x88083D50;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r10,r24,r11
	ctx.current_instruction = 0x88083D58;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// lbzx r7,r11,r29
	ctx.current_instruction = 0x88083D60;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r27,r4,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r27,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r30,r26
	ctx.current_instruction = 0x88083D94;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// lwzx r5,r30,r28
	ctx.current_instruction = 0x88083D98;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// bl 0x880e6960
	ctx.lr = 0x88083DA0;
	sub_880E6960(ctx, base);
loc_88083DA0:
	// lwzx r3,r30,r28
	ctx.current_instruction = 0x88083DA0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x88083dfc
	if (!ctx.cr6.eq) goto loc_88083DFC;
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88083DB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// rlwinm r9,r11,2,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r21
	ctx.current_instruction = 0x88083DC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r21.u32);
	// lwzx r9,r8,r21
	ctx.current_instruction = 0x88083DC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r21.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x88083de0
	if (!ctx.cr6.eq) goto loc_88083DE0;
	// li r5,5
	ctx.r5.s64 = 5;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// b 0x88083df8
	goto loc_88083DF8;
loc_88083DE0:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r26,4
	ctx.r10.s64 = ctx.r26.s64 + 4;
	// xori r9,r11,126
	ctx.r9.u64 = ctx.r11.u64 ^ 126;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r8,r10
	ctx.current_instruction = 0x88083DF0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r4,r8,r26
	ctx.current_instruction = 0x88083DF4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
loc_88083DF8:
	// bl 0x880e6960
	ctx.lr = 0x88083DFC;
	sub_880E6960(ctx, base);
loc_88083DFC:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x88083DFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r23,r23,3
	ctx.r23.s64 = ctx.r23.s64 + 3;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88083d1c
	if (ctx.cr6.lt) goto loc_88083D1C;
loc_88083E0C:
	// lwz r10,724(r31)
	ctx.current_instruction = 0x88083E0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88083d08
	if (ctx.cr6.lt) goto loc_88083D08;
loc_88083E1C:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x88083ecc
	if (!ctx.cr6.gt) goto loc_88083ECC;
loc_88083E28:
	// lwz r8,724(r31)
	ctx.current_instruction = 0x88083E28;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88083e5c
	if (!ctx.cr6.gt) goto loc_88083E5C;
	// lwz r9,720(r31)
	ctx.current_instruction = 0x88083E38;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
loc_88083E3C:
	// mullw r10,r9,r11
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lbzx r7,r10,r29
	ctx.current_instruction = 0x88083E44;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x88083e5c
	if (!ctx.cr6.eq) goto loc_88083E5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88083e3c
	if (ctx.cr6.lt) goto loc_88083E3C;
loc_88083E5C:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88083E5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x88083e78
	if (!ctx.cr6.eq) goto loc_88083E78;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x88083E74;
	sub_880E6960(ctx, base);
loc_88083E74:
	// b 0x88083ec0
	goto loc_88083EC0;
loc_88083E78:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x88083E80;
	sub_880E6960(ctx, base);
loc_88083E80:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88083E80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88083ec0
	if (!ctx.cr6.gt) goto loc_88083EC0;
loc_88083E90:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x88083E90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88083E98;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbzx r9,r10,r29
	ctx.current_instruction = 0x88083EA4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// bl 0x880e6960
	ctx.lr = 0x88083EB0;
	sub_880E6960(ctx, base);
loc_88083EB0:
	// lwz r8,724(r31)
	ctx.current_instruction = 0x88083EB0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88083e90
	if (ctx.cr6.lt) goto loc_88083E90;
loc_88083EC0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x88083e28
	if (ctx.cr6.lt) goto loc_88083E28;
loc_88083ECC:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x88083f68
	if (ctx.cr6.eq) goto loc_88083F68;
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88083ED4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmpw cr6,r20,r10
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88083efc
	if (!ctx.cr6.lt) goto loc_88083EFC;
loc_88083EE4:
	// lbzx r9,r11,r29
	ctx.current_instruction = 0x88083EE4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88083efc
	if (!ctx.cr6.eq) goto loc_88083EFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88083ee4
	if (ctx.cr6.lt) goto loc_88083EE4;
loc_88083EFC:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88083EFC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x88083f1c
	if (!ctx.cr6.eq) goto loc_88083F1C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x88083F14;
	sub_880E6960(ctx, base);
loc_88083F14:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88083F1C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x88083F24;
	sub_880E6960(ctx, base);
loc_88083F24:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x88083F24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88083f68
	if (!ctx.cr6.lt) goto loc_88083F68;
loc_88083F34:
	// lbzx r11,r30,r29
	ctx.current_instruction = 0x88083F34;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88083F3C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x880e6960
	ctx.lr = 0x88083F48;
	sub_880E6960(ctx, base);
loc_88083F48:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88083F48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88083f34
	if (ctx.cr6.lt) goto loc_88083F34;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88083F60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88080230
	ctx.lr = 0x88083F68;
	sub_88080230(ctx, base);
loc_88083F68:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B3028) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880B3028;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880B3028) {
			switch (rex_dispatch_address) {
				case 0x880B3030:
				case 0x880B310C:
				case 0x880B3198:
				case 0x880B31E4:
				case 0x880B3230:
				case 0x880B3254:
				case 0x880B363C:
				case 0x880B3688:
				case 0x880B36B8:
				case 0x880B36FC:
				case 0x880B375C:
				case 0x880B3790:
				case 0x880B37E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880B3028;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880B3030: goto loc_880B3030;
		case 0x880B310C: goto loc_880B310C;
		case 0x880B3198: goto loc_880B3198;
		case 0x880B31E4: goto loc_880B31E4;
		case 0x880B3230: goto loc_880B3230;
		case 0x880B3254: goto loc_880B3254;
		case 0x880B363C: goto loc_880B363C;
		case 0x880B3688: goto loc_880B3688;
		case 0x880B36B8: goto loc_880B36B8;
		case 0x880B36FC: goto loc_880B36FC;
		case 0x880B375C: goto loc_880B375C;
		case 0x880B3790: goto loc_880B3790;
		case 0x880B37E0: goto loc_880B37E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880B3030;
	__savegprlr_14(ctx, base);
loc_880B3030:
	// stwu r1,-1088(r1)
	ctx.current_instruction = 0x880B3030;
	ea = -1088 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1212(r1)
	ctx.current_instruction = 0x880B3034;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1212);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r7,1140(r1)
	ctx.current_instruction = 0x880B303C;
	REX_STORE_U32(ctx.r1.u32 + 1140, ctx.r7.u32);
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// stw r8,1148(r1)
	ctx.current_instruction = 0x880B3044;
	REX_STORE_U32(ctx.r1.u32 + 1148, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r27,1220(r1)
	ctx.current_instruction = 0x880B304C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1220);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,28116(r3)
	ctx.current_instruction = 0x880B3054;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28116);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r18,1236(r1)
	ctx.current_instruction = 0x880B305C;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r17,1204(r1)
	ctx.current_instruction = 0x880B3064;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1204);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r16,1196(r1)
	ctx.current_instruction = 0x880B306C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1196);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// stw r3,1108(r1)
	ctx.current_instruction = 0x880B3074;
	REX_STORE_U32(ctx.r1.u32 + 1108, ctx.r3.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r4,1116(r1)
	ctx.current_instruction = 0x880B307C;
	REX_STORE_U32(ctx.r1.u32 + 1116, ctx.r4.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r10,1164(r1)
	ctx.current_instruction = 0x880B3084;
	REX_STORE_U32(ctx.r1.u32 + 1164, ctx.r10.u32);
	// beq cr6,0x880b311c
	if (ctx.cr6.eq) goto loc_880B311C;
	// lwz r10,1228(r1)
	ctx.current_instruction = 0x880B308C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1228);
	// addi r28,r1,212
	ctx.r28.s64 = ctx.r1.s64 + 212;
	// lwz r24,0(r30)
	ctx.current_instruction = 0x880B3094;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r23,r1,232
	ctx.r23.s64 = ctx.r1.s64 + 232;
	// stw r28,204(r1)
	ctx.current_instruction = 0x880B309C;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r28.u32);
	// addi r20,r1,216
	ctx.r20.s64 = ctx.r1.s64 + 216;
	// lwz r21,20(r30)
	ctx.current_instruction = 0x880B30A4;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r19,16(r30)
	ctx.current_instruction = 0x880B30A8;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,212(r1)
	ctx.current_instruction = 0x880B30AC;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// lwz r25,1244(r1)
	ctx.current_instruction = 0x880B30B0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// lwz r22,1188(r1)
	ctx.current_instruction = 0x880B30B4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1188);
	// lwz r15,1180(r1)
	ctx.current_instruction = 0x880B30B8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 1180);
	// lwz r14,1172(r1)
	ctx.current_instruction = 0x880B30BC;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 1172);
	// lwz r10,12(r30)
	ctx.current_instruction = 0x880B30C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,8(r30)
	ctx.current_instruction = 0x880B30C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r25,180(r1)
	ctx.current_instruction = 0x880B30C8;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r18,172(r1)
	ctx.current_instruction = 0x880B30CC;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r18.u32);
	// stw r23,196(r1)
	ctx.current_instruction = 0x880B30D0;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// stw r20,188(r1)
	ctx.current_instruction = 0x880B30D4;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r20.u32);
	// stw r27,156(r1)
	ctx.current_instruction = 0x880B30D8;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// stw r17,148(r1)
	ctx.current_instruction = 0x880B30DC;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// stw r11,140(r1)
	ctx.current_instruction = 0x880B30E0;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r24,132(r1)
	ctx.current_instruction = 0x880B30E4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// stw r16,124(r1)
	ctx.current_instruction = 0x880B30E8;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// stw r22,116(r1)
	ctx.current_instruction = 0x880B30EC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// stw r15,108(r1)
	ctx.current_instruction = 0x880B30F0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// stw r14,100(r1)
	ctx.current_instruction = 0x880B30F4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r14.u32);
	// stw r21,92(r1)
	ctx.current_instruction = 0x880B30F8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// lwz r28,212(r1)
	ctx.current_instruction = 0x880B30FC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stw r19,84(r1)
	ctx.current_instruction = 0x880B3100;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// stw r28,164(r1)
	ctx.current_instruction = 0x880B3104;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// bl 0x8809c278
	ctx.lr = 0x880B310C;
	sub_8809C278(ctx, base);
loc_880B310C:
	// lwz r22,1116(r1)
	ctx.current_instruction = 0x880B310C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1116);
	// lwz r21,1148(r1)
	ctx.current_instruction = 0x880B3110;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1148);
	// lwz r25,1164(r1)
	ctx.current_instruction = 0x880B3114;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1164);
	// b 0x880b31a0
	goto loc_880B31A0;
loc_880B311C:
	// std r29,224(r1)
	ctx.current_instruction = 0x880B311C;
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r29.u64);
	// addi r10,r1,232
	ctx.r10.s64 = ctx.r1.s64 + 232;
	// lwz r9,0(r30)
	ctx.current_instruction = 0x880B3124;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r1,216
	ctx.r28.s64 = ctx.r1.s64 + 216;
	// lwz r19,1244(r1)
	ctx.current_instruction = 0x880B312C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// addi r23,r1,212
	ctx.r23.s64 = ctx.r1.s64 + 212;
	// lwz r29,1228(r1)
	ctx.current_instruction = 0x880B3134;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1228);
	// stw r10,188(r1)
	ctx.current_instruction = 0x880B3138;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// stw r18,164(r1)
	ctx.current_instruction = 0x880B313C;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r18.u32);
	// stw r9,132(r1)
	ctx.current_instruction = 0x880B3140;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r19,172(r1)
	ctx.current_instruction = 0x880B3144;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r19.u32);
	// stw r28,180(r1)
	ctx.current_instruction = 0x880B3148;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r29,156(r1)
	ctx.current_instruction = 0x880B314C;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stw r17,148(r1)
	ctx.current_instruction = 0x880B3150;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// stw r11,140(r1)
	ctx.current_instruction = 0x880B3154;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r23,196(r1)
	ctx.current_instruction = 0x880B3158;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// std r31,240(r1)
	ctx.current_instruction = 0x880B315C;
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r31.u64);
	// lwz r24,20(r30)
	ctx.current_instruction = 0x880B3160;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r20,16(r30)
	ctx.current_instruction = 0x880B3164;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r15,1188(r1)
	ctx.current_instruction = 0x880B3168;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 1188);
	// lwz r14,1180(r1)
	ctx.current_instruction = 0x880B316C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 1180);
	// lwz r31,1172(r1)
	ctx.current_instruction = 0x880B3170;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1172);
	// lwz r10,12(r30)
	ctx.current_instruction = 0x880B3174;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,8(r30)
	ctx.current_instruction = 0x880B3178;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r16,124(r1)
	ctx.current_instruction = 0x880B317C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// stw r15,116(r1)
	ctx.current_instruction = 0x880B3180;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// stw r14,108(r1)
	ctx.current_instruction = 0x880B3184;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// stw r31,100(r1)
	ctx.current_instruction = 0x880B3188;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r24,92(r1)
	ctx.current_instruction = 0x880B318C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// stw r20,84(r1)
	ctx.current_instruction = 0x880B3190;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// bl 0x88095548
	ctx.lr = 0x880B3198;
	sub_88095548(ctx, base);
loc_880B3198:
	// ld r31,240(r1)
	ctx.current_instruction = 0x880B3198;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// ld r29,224(r1)
	ctx.current_instruction = 0x880B319C;
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
loc_880B31A0:
	// lwz r11,28024(r31)
	ctx.current_instruction = 0x880B31A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28024);
	// lwz r24,232(r1)
	ctx.current_instruction = 0x880B31A4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r23,216(r1)
	ctx.current_instruction = 0x880B31A8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b35fc
	if (ctx.cr6.eq) goto loc_880B35FC;
	// stw r23,224(r1)
	ctx.current_instruction = 0x880B31B4;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r23.u32);
	// addi r11,r1,287
	ctx.r11.s64 = ctx.r1.s64 + 287;
	// stw r24,208(r1)
	ctx.current_instruction = 0x880B31BC;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r10,212(r1)
	ctx.current_instruction = 0x880B31CC;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r30,r11,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bl 0x8810aa38
	ctx.lr = 0x880B31E4;
	sub_8810AA38(ctx, base);
loc_880B31E4:
	// lwz r8,208(r1)
	ctx.current_instruction = 0x880B31E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880B31E8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// lwz r7,224(r1)
	ctx.current_instruction = 0x880B31F4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880B31F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// bne cr6,0x880b3234
	if (!ctx.cr6.eq) goto loc_880B3234;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x880B3210;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880B3214;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x880B3230;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B3230:
	// b 0x880b3254
	goto loc_880B3254;
loc_880B3234:
	// stw r11,84(r1)
	ctx.current_instruction = 0x880B3234;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r3,2496(r31)
	ctx.current_instruction = 0x880B323C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x880B3254;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B3254:
	// li r8,16
	ctx.r8.s64 = 16;
	// subf r9,r22,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r22.u64;
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// addi r11,r22,14
	ctx.r11.s64 = ctx.r22.s64 + 14;
	// stw r9,224(r1)
	ctx.current_instruction = 0x880B3264;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x880b3278
	goto loc_880B3278;
loc_880B3270:
	// lwz r10,208(r1)
	ctx.current_instruction = 0x880B3270;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r9,224(r1)
	ctx.current_instruction = 0x880B3274;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
loc_880B3278:
	// lbz r5,29(r10)
	ctx.current_instruction = 0x880B3278;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 29);
	// lbz r6,-1(r11)
	ctx.current_instruction = 0x880B327C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r3,28(r10)
	ctx.current_instruction = 0x880B3280;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 28);
	// lbz r4,-2(r11)
	ctx.current_instruction = 0x880B3284;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// subf r8,r6,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r6.u64;
	// lbz r31,25(r10)
	ctx.current_instruction = 0x880B328C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 25);
	// subf r5,r4,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r4.u64;
	// lbz r4,27(r10)
	ctx.current_instruction = 0x880B3294;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 27);
	// lbz r3,26(r10)
	ctx.current_instruction = 0x880B3298;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 26);
	// mullw r8,r8,r8
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// lbz r6,31(r10)
	ctx.current_instruction = 0x880B32A0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 31);
	// lbz r30,24(r10)
	ctx.current_instruction = 0x880B32A4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 24);
	// lbz r29,23(r10)
	ctx.current_instruction = 0x880B32A8;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 23);
	// lbz r28,22(r10)
	ctx.current_instruction = 0x880B32AC;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 22);
	// lbz r27,21(r10)
	ctx.current_instruction = 0x880B32B0;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// lbz r26,20(r10)
	ctx.current_instruction = 0x880B32B4;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 20);
	// lbz r25,19(r10)
	ctx.current_instruction = 0x880B32B8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 19);
	// lbz r24,18(r10)
	ctx.current_instruction = 0x880B32BC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 18);
	// lbz r23,17(r10)
	ctx.current_instruction = 0x880B32C0;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 17);
	// mullw r7,r5,r5
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// lbzx r5,r9,r11
	ctx.current_instruction = 0x880B32C8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzu r9,16(r10)
	ctx.current_instruction = 0x880B32CC;
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbz r22,0(r11)
	ctx.current_instruction = 0x880B32D0;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r21,1(r11)
	ctx.current_instruction = 0x880B32D4;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r20,-14(r11)
	ctx.current_instruction = 0x880B32D8;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + -14);
	// lbz r19,-13(r11)
	ctx.current_instruction = 0x880B32DC;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + -13);
	// stw r10,208(r1)
	ctx.current_instruction = 0x880B32E0;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// lbz r18,-12(r11)
	ctx.current_instruction = 0x880B32E4;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + -12);
	// lbz r17,-11(r11)
	ctx.current_instruction = 0x880B32E8;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + -11);
	// lbz r16,-10(r11)
	ctx.current_instruction = 0x880B32EC;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + -10);
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r8,-9(r11)
	ctx.current_instruction = 0x880B32F4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -9);
	// subf r7,r22,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r22.u64;
	// lbz r5,-3(r11)
	ctx.current_instruction = 0x880B32FC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// stw r10,240(r1)
	ctx.current_instruction = 0x880B3300;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// subf r6,r21,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r21.u64;
	// mullw r10,r7,r7
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// lbz r7,-4(r11)
	ctx.current_instruction = 0x880B330C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r22,-5(r11)
	ctx.current_instruction = 0x880B3310;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + -5);
	// lbz r15,-6(r11)
	ctx.current_instruction = 0x880B3314;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// lbz r14,-7(r11)
	ctx.current_instruction = 0x880B3318;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + -7);
	// std r11,248(r1)
	ctx.current_instruction = 0x880B331C;
	REX_STORE_U64(ctx.r1.u32 + 248, ctx.r11.u64);
	// lbz r11,-8(r11)
	ctx.current_instruction = 0x880B3320;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -8);
	// subf r21,r20,r9
	ctx.r21.u64 = ctx.r9.u64 - ctx.r20.u64;
	// lwz r9,240(r1)
	ctx.current_instruction = 0x880B3328;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r6,r6
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r21,r21
	ctx.r10.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r21.s32);
	// subf r23,r19,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r19.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r23,r23
	ctx.r10.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r23.s32);
	// subf r24,r18,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r18.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r24,r24
	ctx.r10.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r24.s32);
	// subf r25,r17,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r17.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r25,r25
	ctx.r10.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r25.s32);
	// subf r6,r16,r26
	ctx.r6.u64 = ctx.r26.u64 - ctx.r16.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r6,r6
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// subf r8,r8,r27
	ctx.r8.u64 = ctx.r27.u64 - ctx.r8.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r8,r8
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// subf r8,r11,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r6,r5,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r5,r7,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r7.u64;
	// mullw r10,r8,r8
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// subf r7,r14,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r14.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r7,r7
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// subf r3,r15,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r15.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r3,r3
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// subf r4,r22,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r22.u64;
	// lwz r31,212(r1)
	ctx.current_instruction = 0x880B33A8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r4,r4
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r5,r5
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ld r11,248(r1)
	ctx.current_instruction = 0x880B33C0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 248);
	// mullw r10,r6,r6
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r10,212(r1)
	ctx.current_instruction = 0x880B33D4;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// bdnz 0x880b3270
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880B3270;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lwz r11,1140(r1)
	ctx.current_instruction = 0x880B33E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1140);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lwz r23,216(r1)
	ctx.current_instruction = 0x880B33E8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// std r10,248(r1)
	ctx.current_instruction = 0x880B33EC;
	REX_STORE_U64(ctx.r1.u32 + 248, ctx.r10.u64);
	// lfd f0,248(r1)
	ctx.current_instruction = 0x880B33F0;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// lfd f0,12088(r9)
	ctx.current_instruction = 0x880B3400;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 12088);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x880B3404;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r10,6848
	ctx.r30.s64 = ctx.r10.s64 + 6848;
	// lwz r10,1108(r1)
	ctx.current_instruction = 0x880B340C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1108);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r8,8(r11)
	ctx.current_instruction = 0x880B3414;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r24,232(r1)
	ctx.current_instruction = 0x880B3418;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// fadd f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,248(r1)
	ctx.current_instruction = 0x880B3424;
	REX_STORE_U64(ctx.r1.u32 + 248, ctx.f10.u64);
	// lwz r29,252(r1)
	ctx.current_instruction = 0x880B3428;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// beq cr6,0x880b3560
	if (ctx.cr6.eq) goto loc_880B3560;
	// lwz r7,2604(r10)
	ctx.current_instruction = 0x880B3430;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 2604);
	// lwz r4,12(r11)
	ctx.current_instruction = 0x880B3434;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lwz r6,2608(r10)
	ctx.current_instruction = 0x880B343C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 2608);
	// lwz r5,2612(r10)
	ctx.current_instruction = 0x880B3440;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 2612);
	// add r27,r9,r23
	ctx.r27.u64 = ctx.r9.u64 + ctx.r23.u64;
	// lwz r31,20(r11)
	ctx.current_instruction = 0x880B3448;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// subf r9,r4,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r4.u64;
	// lwz r3,16(r11)
	ctx.current_instruction = 0x880B3450;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// and r11,r27,r5
	ctx.r11.u64 = ctx.r27.u64 & ctx.r5.u64;
	// lwz r28,2616(r10)
	ctx.current_instruction = 0x880B3458;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 2616);
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// subf r27,r7,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r7.u64;
	// and r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 & ctx.r28.u64;
	// subf r9,r31,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r31.u64;
	// subf r25,r6,r11
	ctx.r25.u64 = ctx.r11.u64 - ctx.r6.u64;
	// subf r11,r3,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r3.u64;
	// srawi r26,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r27.s32 >> 31;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// srawi r22,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r25.s32 >> 31;
	// xor r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r26.u64;
	// and r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 & ctx.r28.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// subf r11,r26,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r26.u64;
	// xor r28,r25,r22
	ctx.r28.u64 = ctx.r25.u64 ^ ctx.r22.u64;
	// subf r6,r6,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r6.u64;
	// subf r7,r7,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r22,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r22.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b34e0
	if (ctx.cr6.gt) goto loc_880B34E0;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880b34e0
	if (ctx.cr6.gt) goto loc_880B34E0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,1228(r1)
	ctx.current_instruction = 0x880B34BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1228);
	// lwzx r11,r11,r30
	ctx.current_instruction = 0x880B34C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r5,r5,r30
	ctx.current_instruction = 0x880B34C4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.current_instruction = 0x880B34D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r5,r5,r9
	ctx.current_instruction = 0x880B34D4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// b 0x880b34ec
	goto loc_880B34EC;
loc_880B34E0:
	// lwz r9,1228(r1)
	ctx.current_instruction = 0x880B34E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1228);
	// lwz r11,20(r9)
	ctx.current_instruction = 0x880B34E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B34EC:
	// srawi r11,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 31;
	// srawi r28,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r6.s32 >> 31;
	// xor r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// xor r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r28.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r7,r28,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r28.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b353c
	if (ctx.cr6.gt) goto loc_880B353C;
	// cmpwi cr6,r7,158
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 158, ctx.xer);
	// bgt cr6,0x880b353c
	if (ctx.cr6.gt) goto loc_880B353C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r30
	ctx.current_instruction = 0x880B351C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r11,r7,r30
	ctx.current_instruction = 0x880B3520;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r9
	ctx.current_instruction = 0x880B352C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r7,r6,r9
	ctx.current_instruction = 0x880B3530;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// b 0x880b3544
	goto loc_880B3544;
loc_880B353C:
	// lwz r11,20(r9)
	ctx.current_instruction = 0x880B353C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B3544:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b3554
	if (!ctx.cr6.lt) goto loc_880B3554;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x880b3568
	goto loc_880B3568;
loc_880B3554:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x880b3568
	goto loc_880B3568;
loc_880B3560:
	// lwz r11,12(r11)
	ctx.current_instruction = 0x880B3560;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,1228(r1)
	ctx.current_instruction = 0x880B3564;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1228);
loc_880B3568:
	// lwz r7,2604(r10)
	ctx.current_instruction = 0x880B3568;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 2604);
	// lwz r6,2608(r10)
	ctx.current_instruction = 0x880B356C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 2608);
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lwz r5,2612(r10)
	ctx.current_instruction = 0x880B3574;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 2612);
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// lwz r4,2616(r10)
	ctx.current_instruction = 0x880B357C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 2616);
	// add r3,r8,r23
	ctx.r3.u64 = ctx.r8.u64 + ctx.r23.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// and r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 & ctx.r5.u64;
	// and r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 & ctx.r4.u64;
	// subf r7,r7,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subf r6,r6,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r6.u64;
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// srawi r4,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// xor r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// xor r10,r6,r4
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b35ec
	if (ctx.cr6.gt) goto loc_880B35EC;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b35ec
	if (ctx.cr6.gt) goto loc_880B35EC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r30
	ctx.current_instruction = 0x880B35C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r7,r10,r30
	ctx.current_instruction = 0x880B35CC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r9
	ctx.current_instruction = 0x880B35D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwzx r10,r5,r9
	ctx.current_instruction = 0x880B35DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x880b380c
	goto loc_880B380C;
loc_880B35EC:
	// lwz r11,20(r9)
	ctx.current_instruction = 0x880B35EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x880b380c
	goto loc_880B380C;
loc_880B35FC:
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880B35FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b3808
	if (ctx.cr6.eq) goto loc_880B3808;
	// lwz r11,28036(r31)
	ctx.current_instruction = 0x880B3608;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28036);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b3808
	if (!ctx.cr6.eq) goto loc_880B3808;
	// stw r23,208(r1)
	ctx.current_instruction = 0x880B3614;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// addi r11,r1,287
	ctx.r11.s64 = ctx.r1.s64 + 287;
	// stw r24,224(r1)
	ctx.current_instruction = 0x880B361C;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r24.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r28,r11,0,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bl 0x8810aa38
	ctx.lr = 0x880B363C;
	sub_8810AA38(ctx, base);
loc_880B363C:
	// lwz r8,224(r1)
	ctx.current_instruction = 0x880B363C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880B3640;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// lwz r7,208(r1)
	ctx.current_instruction = 0x880B3648;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x880b368c
	if (!ctx.cr6.eq) goto loc_880B368C;
	// srawi r3,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 2;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880B3660;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// lwz r27,2488(r31)
	ctx.current_instruction = 0x880B3668;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880B3670;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x880B3688;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B3688:
	// b 0x880b36b8
	goto loc_880B36B8;
loc_880B368C:
	// stw r11,84(r1)
	ctx.current_instruction = 0x880B368C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2496(r31)
	ctx.current_instruction = 0x880B3694;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880B36A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x880B36B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B36B8:
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// stw r26,108(r1)
	ctx.current_instruction = 0x880B36BC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r8,r1,212
	ctx.r8.s64 = ctx.r1.s64 + 212;
	// stw r25,116(r1)
	ctx.current_instruction = 0x880B36C4;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r11,r1,216
	ctx.r11.s64 = ctx.r1.s64 + 216;
	// stw r9,100(r1)
	ctx.current_instruction = 0x880B36CC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,84(r1)
	ctx.current_instruction = 0x880B36D0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,92(r1)
	ctx.current_instruction = 0x880B36DC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B36FC;
	sub_88085938(ctx, base);
loc_880B36FC:
	// lwz r25,0(r30)
	ctx.current_instruction = 0x880B36FC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r26,240(r1)
	ctx.current_instruction = 0x880B3700;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r29,12(r30)
	ctx.current_instruction = 0x880B3704;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r28,8(r30)
	ctx.current_instruction = 0x880B370C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// beq cr6,0x880b37a0
	if (ctx.cr6.eq) goto loc_880B37A0;
	// lwz r22,2608(r31)
	ctx.current_instruction = 0x880B3714;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r20,2604(r31)
	ctx.current_instruction = 0x880B371C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// subf r10,r29,r22
	ctx.r10.u64 = ctx.r22.u64 - ctx.r29.u64;
	// lwz r19,2616(r31)
	ctx.current_instruction = 0x880B3728;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// subf r11,r28,r20
	ctx.r11.u64 = ctx.r20.u64 - ctx.r28.u64;
	// lwz r18,2612(r31)
	ctx.current_instruction = 0x880B3730;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lwz r27,20(r30)
	ctx.current_instruction = 0x880B3738;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r30,16(r30)
	ctx.current_instruction = 0x880B3740;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// and r8,r10,r19
	ctx.r8.u64 = ctx.r10.u64 & ctx.r19.u64;
	// and r4,r9,r18
	ctx.r4.u64 = ctx.r9.u64 & ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r22,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r22.u64;
	// subf r4,r20,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r20.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B375C;
	sub_88085E60(ctx, base);
loc_880B375C:
	// subf r11,r30,r20
	ctx.r11.u64 = ctx.r20.u64 - ctx.r30.u64;
	// subf r10,r27,r22
	ctx.r10.u64 = ctx.r22.u64 - ctx.r27.u64;
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// and r4,r9,r18
	ctx.r4.u64 = ctx.r9.u64 & ctx.r18.u64;
	// and r8,r10,r19
	ctx.r8.u64 = ctx.r10.u64 & ctx.r19.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// subf r5,r22,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r22.u64;
	// subf r4,r20,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B3790;
	sub_88085E60(ctx, base);
loc_880B3790:
	// cmpw cr6,r19,r3
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x880b37a0
	if (ctx.cr6.lt) goto loc_880B37A0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_880B37A0:
	// lwz r9,2608(r31)
	ctx.current_instruction = 0x880B37A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r8,2604(r31)
	ctx.current_instruction = 0x880B37A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r10,r29,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r29.u64;
	// lwz r5,2616(r31)
	ctx.current_instruction = 0x880B37B4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// subf r11,r28,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r28.u64;
	// lwz r4,2612(r31)
	ctx.current_instruction = 0x880B37BC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lwz r7,1212(r1)
	ctx.current_instruction = 0x880B37C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1212);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// and r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 & ctx.r4.u64;
	// subf r5,r9,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r4,r8,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r8.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B37E0;
	sub_88085E60(ctx, base);
loc_880B37E0:
	// lwz r11,212(r1)
	ctx.current_instruction = 0x880B37E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// beq cr6,0x880b37f4
	if (ctx.cr6.eq) goto loc_880B37F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880B37F4:
	// lwz r9,108(r21)
	ctx.current_instruction = 0x880B37F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 108);
	// lwz r10,216(r1)
	ctx.current_instruction = 0x880B37F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b380c
	goto loc_880B380C;
loc_880B3808:
	// lwz r11,212(r1)
	ctx.current_instruction = 0x880B3808;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
loc_880B380C:
	// lwz r10,1252(r1)
	ctx.current_instruction = 0x880B380C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1252);
	// lwz r9,1260(r1)
	ctx.current_instruction = 0x880B3810;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1260);
	// lwz r8,1268(r1)
	ctx.current_instruction = 0x880B3814;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1268);
	// stw r23,0(r10)
	ctx.current_instruction = 0x880B3818;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// stw r24,0(r9)
	ctx.current_instruction = 0x880B381C;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r24.u32);
	// stw r11,0(r8)
	ctx.current_instruction = 0x880B3820;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C6200) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C6200;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C6200) {
			switch (rex_dispatch_address) {
				case 0x880C6208:
				case 0x880C6420:
				case 0x880C64B8:
				case 0x880C64DC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C6200;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C6208: goto loc_880C6208;
		case 0x880C6420: goto loc_880C6420;
		case 0x880C64B8: goto loc_880C64B8;
		case 0x880C64DC: goto loc_880C64DC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880C6208;
	__savegprlr_29(ctx, base);
loc_880C6208:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x880C6208;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880c6510
	if (ctx.cr6.eq) goto loc_880C6510;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880c6510
	if (ctx.cr6.eq) goto loc_880C6510;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880c6510
	if (ctx.cr6.eq) goto loc_880C6510;
	// lwz r11,344(r3)
	ctx.current_instruction = 0x880C6230;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,36(r3)
	ctx.current_instruction = 0x880C6238;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// beq cr6,0x880c6248
	if (ctx.cr6.eq) goto loc_880C6248;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
loc_880C6248:
	// lwz r7,4(r3)
	ctx.current_instruction = 0x880C6248;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r31,22101
	ctx.r31.s64 = 1448411136;
	// ori r31,r31,22857
	ctx.r31.u64 = ctx.r31.u64 | 22857;
	// lwz r7,16(r7)
	ctx.current_instruction = 0x880C6254;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x880c62e4
	if (ctx.cr6.eq) goto loc_880C62E4;
	// lis r31,12338
	ctx.r31.s64 = 808583168;
	// ori r31,r31,13385
	ctx.r31.u64 = ctx.r31.u64 | 13385;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x880c62e4
	if (ctx.cr6.eq) goto loc_880C62E4;
	// lis r31,12849
	ctx.r31.s64 = 842072064;
	// ori r31,r31,22105
	ctx.r31.u64 = ctx.r31.u64 | 22105;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x880c62e4
	if (ctx.cr6.eq) goto loc_880C62E4;
	// lwz r7,4(r3)
	ctx.current_instruction = 0x880C6280;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r31,14(r7)
	ctx.current_instruction = 0x880C6284;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// lwz r30,4(r7)
	ctx.current_instruction = 0x880C6288;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r29,8(r7)
	ctx.current_instruction = 0x880C628C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// mullw r7,r31,r30
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r7,r7,r29
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,0(r4)
	ctx.current_instruction = 0x880C62B0;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r3)
	ctx.current_instruction = 0x880C62B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,32(r3)
	ctx.current_instruction = 0x880C62B8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lhz r7,14(r7)
	ctx.current_instruction = 0x880C62BC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880c6320
	goto loc_880C6320;
loc_880C62E4:
	// lwz r7,4(r3)
	ctx.current_instruction = 0x880C62E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,8(r7)
	ctx.current_instruction = 0x880C62E8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r7,4(r7)
	ctx.current_instruction = 0x880C62EC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r7,r31,r7
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// stw r7,0(r4)
	ctx.current_instruction = 0x880C6304;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwz r7,32(r3)
	ctx.current_instruction = 0x880C6308;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
loc_880C6320:
	// stw r7,0(r9)
	ctx.current_instruction = 0x880C6320;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x880c64f4
	if (ctx.cr6.lt) goto loc_880C64F4;
	// lwz r8,0(r4)
	ctx.current_instruction = 0x880C6330;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x880c64f4
	if (ctx.cr6.lt) goto loc_880C64F4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880c6510
	if (ctx.cr6.eq) goto loc_880C6510;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x880c6510
	if (ctx.cr6.eq) goto loc_880C6510;
	// lwz r9,340(r3)
	ctx.current_instruction = 0x880C634C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880c64c4
	if (ctx.cr6.eq) goto loc_880C64C4;
	// lwz r9,4(r3)
	ctx.current_instruction = 0x880C6358;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r8,20532
	ctx.r8.s64 = 1345585152;
	// lis r4,-30720
	ctx.r4.s64 = -2013265920;
	// ori r7,r8,12850
	ctx.r7.u64 = ctx.r8.u64 | 12850;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r5,16(r9)
	ctx.current_instruction = 0x880C636C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lfd f4,1488(r4)
	ctx.current_instruction = 0x880C6370;
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = REX_LOAD_U64(ctx.r4.u32 + 1488);
	// lwz r31,4(r9)
	ctx.current_instruction = 0x880C6374;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// lwz r5,32(r3)
	ctx.current_instruction = 0x880C637C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r4,16(r9)
	ctx.current_instruction = 0x880C6380;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mullw r11,r5,r11
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// bne cr6,0x880c642c
	if (!ctx.cr6.eq) goto loc_880C642C;
	// std r8,112(r1)
	ctx.current_instruction = 0x880C6394;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// extsw r8,r5
	ctx.r8.s64 = ctx.r5.s32;
	// lwz r5,8(r9)
	ctx.current_instruction = 0x880C639C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lfd f0,112(r1)
	ctx.current_instruction = 0x880C63A0;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r8,120(r1)
	ctx.current_instruction = 0x880C63A4;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// extsw r8,r31
	ctx.r8.s64 = ctx.r31.s32;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// std r9,128(r1)
	ctx.current_instruction = 0x880C63B0;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// std r8,136(r1)
	ctx.current_instruction = 0x880C63B4;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,108(r1)
	ctx.current_instruction = 0x880C63BC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// mullw r5,r31,r5
	ctx.r5.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfd f12,120(r1)
	ctx.current_instruction = 0x880C63CC;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lfd f10,128(r1)
	ctx.current_instruction = 0x880C63D4;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// srawi r8,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 1;
	// lfd f9,136(r1)
	ctx.current_instruction = 0x880C63DC;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// srawi r8,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 1;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addze r4,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r4.s64 = temp.s64;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r6,r4,r10
	ctx.r6.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r3,204
	ctx.r3.s64 = ctx.r3.s64 + 204;
	// fdiv f3,f8,f13
	ctx.f3.f64 = ctx.f8.f64 / ctx.f13.f64;
	// fdiv f1,f7,f11
	ctx.f1.f64 = ctx.f7.f64 / ctx.f11.f64;
	// bl 0x881181a8
	ctx.lr = 0x880C6420;
	sub_881181A8(ctx, base);
loc_880C6420:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880C642C:
	// std r8,136(r1)
	ctx.current_instruction = 0x880C642C;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// extsw r8,r5
	ctx.r8.s64 = ctx.r5.s32;
	// lwz r5,8(r9)
	ctx.current_instruction = 0x880C6434;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r3,r3,204
	ctx.r3.s64 = ctx.r3.s64 + 204;
	// std r8,128(r1)
	ctx.current_instruction = 0x880C643C;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// extsw r8,r31
	ctx.r8.s64 = ctx.r31.s32;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// stw r4,108(r1)
	ctx.current_instruction = 0x880C6448;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// std r8,112(r1)
	ctx.current_instruction = 0x880C644C;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f9,112(r1)
	ctx.current_instruction = 0x880C6450;
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r9,120(r1)
	ctx.current_instruction = 0x880C6454;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r5,r31,r5
	ctx.r5.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// lfd f12,128(r1)
	ctx.current_instruction = 0x880C6460;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfd f0,136(r1)
	ctx.current_instruction = 0x880C646C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f10,120(r1)
	ctx.current_instruction = 0x880C6474;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// srawi r8,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 2;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 2;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addze r31,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r31.s64 = temp.s64;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// add r6,r31,r10
	ctx.r6.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// fdiv f3,f8,f13
	ctx.f3.f64 = ctx.f8.f64 / ctx.f13.f64;
	// fdiv f1,f7,f11
	ctx.f1.f64 = ctx.f7.f64 / ctx.f11.f64;
	// bl 0x881181a8
	ctx.lr = 0x880C64B8;
	sub_881181A8(ctx, base);
loc_880C64B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880C64C4:
	// lwz r7,32(r3)
	ctx.current_instruction = 0x880C64C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r4,4(r3)
	ctx.current_instruction = 0x880C64CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x88113868
	ctx.lr = 0x880C64DC;
	sub_88113868(ctx, base);
loc_880C64DC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c6420
	if (!ctx.cr6.eq) goto loc_880C6420;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880C64F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,0(r4)
	ctx.current_instruction = 0x880C64FC;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// stw r11,0(r9)
	ctx.current_instruction = 0x880C6504;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880C6510:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CAD40) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880CAD40);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CAD40;
	ctx.current_instruction = 0x880CAD40;
	// lwz r11,0(r4)
	ctx.current_instruction = 0x880CAD40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	ctx.current_instruction = 0x880CAD44;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.current_instruction = 0x880CAD48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	ctx.current_instruction = 0x880CAD4C;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.current_instruction = 0x880CAD50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,8(r3)
	ctx.current_instruction = 0x880CAD54;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.current_instruction = 0x880CAD58;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,12(r3)
	ctx.current_instruction = 0x880CAD5C;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880CAEF8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CAEF8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CAEF8) {
			switch (rex_dispatch_address) {
				case 0x880CAF00:
				case 0x880CAF70:
				case 0x880CAFC0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CAEF8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CAF00: goto loc_880CAF00;
		case 0x880CAF70: goto loc_880CAF70;
		case 0x880CAFC0: goto loc_880CAFC0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880CAF00;
	__savegprlr_27(ctx, base);
loc_880CAF00:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880CAF00;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x880cafcc
	if (ctx.cr6.lt) goto loc_880CAFCC;
	// cmpwi cr6,r30,127
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 127, ctx.xer);
	// bge cr6,0x880cafcc
	if (!ctx.cr6.lt) goto loc_880CAFCC;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x880CAF3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880caf58
	if (!ctx.cr6.eq) goto loc_880CAF58;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,182
	ctx.r3.u64 = ctx.r3.u64 | 182;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_880CAF58:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x880CAF58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lwz r3,8(r11)
	ctx.current_instruction = 0x880CAF64;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880CAF70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880CAF70:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x880cafc0
	if (ctx.cr6.eq) goto loc_880CAFC0;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880CAF7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x880cafa0
	if (ctx.cr6.eq) goto loc_880CAFA0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880cafc0
	if (!ctx.cr6.eq) goto loc_880CAFC0;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,189
	ctx.r3.u64 = ctx.r3.u64 | 189;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_880CAFA0:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r7,20(r31)
	ctx.current_instruction = 0x880CAFA4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,12(r31)
	ctx.current_instruction = 0x880CAFAC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,8(r31)
	ctx.current_instruction = 0x880CAFB4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,16(r31)
	ctx.current_instruction = 0x880CAFB8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x880cb090
	ctx.lr = 0x880CAFC0;
	sub_880CB090(ctx, base);
loc_880CAFC0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_880CAFCC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CB7C0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880CB7C0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CB7C0;
	ctx.current_instruction = 0x880CB7C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	ctx.current_instruction = 0x880CB7C4;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stb r11,0(r6)
	ctx.current_instruction = 0x880CB7C8;
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// lbz r11,512(r3)
	ctx.current_instruction = 0x880CB7CC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 512);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bge cr6,0x880cb804
	if (!ctx.cr6.lt) goto loc_880CB804;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_880CB7E0:
	// lwzx r9,r9,r3
	ctx.current_instruction = 0x880CB7E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x880cb810
	if (!ctx.cr6.eq) goto loc_880CB810;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x880cb7e0
	if (ctx.cr6.lt) goto loc_880CB7E0;
loc_880CB804:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880CB810:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r5)
	ctx.current_instruction = 0x880CB814;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stb r10,512(r3)
	ctx.current_instruction = 0x880CB818;
	REX_STORE_U8(ctx.r3.u32 + 512, ctx.r10.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r6)
	ctx.current_instruction = 0x880CB820;
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880CC918) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CC918;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CC918) {
			switch (rex_dispatch_address) {
				case 0x880CC944:
				case 0x880CC960:
				case 0x880CC974:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CC918;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CC944: goto loc_880CC944;
		case 0x880CC960: goto loc_880CC960;
		case 0x880CC974: goto loc_880CC974;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880CC91C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880CC920;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880CC924;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r4,16(r3)
	ctx.current_instruction = 0x880CC92C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CC934;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.current_instruction = 0x880CC93C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x880cb730
	ctx.lr = 0x880CC944;
	sub_880CB730(ctx, base);
loc_880CC944:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc974
	if (ctx.cr6.lt) goto loc_880CC974;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880CC94C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.current_instruction = 0x880CC954;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880CC960;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880CC960:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc974
	if (ctx.cr6.lt) goto loc_880CC974;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x880CC96C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x880cc698
	ctx.lr = 0x880CC974;
	sub_880CC698(ctx, base);
loc_880CC974:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880CC978;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880CC980;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880CD500) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880CD500);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CD500;
	ctx.current_instruction = 0x880CD500;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// b 0x88052d90
	sub_88052D90(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CD530) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CD530;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CD530) {
			switch (rex_dispatch_address) {
				case 0x880CD538:
				case 0x880CD55C:
				case 0x880CD57C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CD530;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CD538: goto loc_880CD538;
		case 0x880CD55C: goto loc_880CD55C;
		case 0x880CD57C: goto loc_880CD57C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880CD538;
	__savegprlr_28(ctx, base);
loc_880CD538:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880CD538;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x88052d90
	ctx.lr = 0x880CD55C;
	sub_88052D90(ctx, base);
loc_880CD55C:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x880cd56c
	if (!ctx.cr6.gt) goto loc_880CD56C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_880CD56C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881efe40
	ctx.lr = 0x880CD57C;
	sub_881EFE40(ctx, base);
loc_880CD57C:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// sthx r10,r11,r29
	ctx.current_instruction = 0x880CD584;
	REX_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CFE78) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CFE78;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CFE78) {
			switch (rex_dispatch_address) {
				case 0x880CFE80:
				case 0x880CFED0:
				case 0x880D0048:
				case 0x880D00C4:
				case 0x880D0138:
				case 0x880D01B0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CFE78;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CFE80: goto loc_880CFE80;
		case 0x880CFED0: goto loc_880CFED0;
		case 0x880D0048: goto loc_880D0048;
		case 0x880D00C4: goto loc_880D00C4;
		case 0x880D0138: goto loc_880D0138;
		case 0x880D01B0: goto loc_880D01B0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x880CFE80;
	__savegprlr_22(ctx, base);
loc_880CFE80:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x880CFE80;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFE90;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880cfeb0
	if (!ctx.cr6.eq) goto loc_880CFEB0;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_880CFEB0:
	// addi r25,r4,-24
	ctx.r25.s64 = ctx.r4.s64 + -24;
	// cmplwi cr6,r25,18
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 18, ctx.xer);
	// blt cr6,0x880cfff8
	if (ctx.cr6.lt) goto loc_880CFFF8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r28)
	ctx.current_instruction = 0x880CFEC0;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r28.u32 + 0);
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CFED0;
	sub_8805ADC8(ctx, base);
loc_880CFED0:
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// bne cr6,0x880cfff8
	if (!ctx.cr6.eq) goto loc_880CFFF8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CFED8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880cfff8
	if (ctx.cr6.eq) goto loc_880CFFF8;
	// lbz r7,3(r11)
	ctx.current_instruction = 0x880CFEE4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x880CFEEC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r5,1(r11)
	ctx.current_instruction = 0x880CFEF8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.current_instruction = 0x880CFEFC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFF08;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r10,r10,14152
	ctx.r10.s64 = ctx.r10.s64 + 14152;
	// rlwinm r8,r6,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbz r4,1(r11)
	ctx.current_instruction = 0x880CFF1C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r8,r5,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,0(r11)
	ctx.current_instruction = 0x880CFF28;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r8,r4,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// stw r3,96(r1)
	ctx.current_instruction = 0x880CFF34;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFF38;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r4,1(r11)
	ctx.current_instruction = 0x880CFF3C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rotlwi r8,r4,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r7,0(r11)
	ctx.current_instruction = 0x880CFF48;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r3,2(r11)
	ctx.current_instruction = 0x880CFF4C;
	ea = 2 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFF54;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lbzu r5,1(r11)
	ctx.current_instruction = 0x880CFF5C;
	ea = 1 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFF60;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r8,1(r11)
	ctx.current_instruction = 0x880CFF64;
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFF68;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r31,1(r11)
	ctx.current_instruction = 0x880CFF6C;
	ea = 1 + ctx.r11.u32;
	ctx.r31.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFF70;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r30,1(r11)
	ctx.current_instruction = 0x880CFF74;
	ea = 1 + ctx.r11.u32;
	ctx.r30.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFF78;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r27,1(r11)
	ctx.current_instruction = 0x880CFF7C;
	ea = 1 + ctx.r11.u32;
	ctx.r27.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFF80;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r26,1(r11)
	ctx.current_instruction = 0x880CFF84;
	ea = 1 + ctx.r11.u32;
	ctx.r26.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFF88;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r22,1(r11)
	ctx.current_instruction = 0x880CFF8C;
	ea = 1 + ctx.r11.u32;
	ctx.r22.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r7,100(r1)
	ctx.current_instruction = 0x880CFF94;
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r7.u16);
	// stb r5,105(r1)
	ctx.current_instruction = 0x880CFF98;
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r5.u8);
	// stb r3,104(r1)
	ctx.current_instruction = 0x880CFF9C;
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r3.u8);
	// stb r8,106(r1)
	ctx.current_instruction = 0x880CFFA0;
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r8.u8);
	// sth r4,102(r1)
	ctx.current_instruction = 0x880CFFA4;
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r4.u16);
	// stb r30,108(r1)
	ctx.current_instruction = 0x880CFFA8;
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r30.u8);
	// stb r31,107(r1)
	ctx.current_instruction = 0x880CFFAC;
	REX_STORE_U8(ctx.r1.u32 + 107, ctx.r31.u8);
	// stb r27,109(r1)
	ctx.current_instruction = 0x880CFFB0;
	REX_STORE_U8(ctx.r1.u32 + 109, ctx.r27.u8);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CFFB4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r22,111(r1)
	ctx.current_instruction = 0x880CFFB8;
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r22.u8);
	// stb r26,110(r1)
	ctx.current_instruction = 0x880CFFBC;
	REX_STORE_U8(ctx.r1.u32 + 110, ctx.r26.u8);
loc_880CFFC0:
	// lbz r8,0(r10)
	ctx.current_instruction = 0x880CFFC0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.current_instruction = 0x880CFFC4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x880cffe0
	if (!ctx.cr0.eq) goto loc_880CFFE0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x880cffc0
	if (!ctx.cr6.eq) goto loc_880CFFC0;
loc_880CFFE0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880d0004
	if (ctx.cr6.eq) goto loc_880D0004;
loc_880CFFE8:
	// ld r10,0(r28)
	ctx.current_instruction = 0x880CFFE8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r28.u32 + 0);
	// clrldi r11,r25,32
	ctx.r11.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r28)
	ctx.current_instruction = 0x880CFFF4;
	REX_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
loc_880CFFF8:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_880D0004:
	// lbz r9,1(r11)
	ctx.current_instruction = 0x880D0004;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lbz r10,0(r11)
	ctx.current_instruction = 0x880D000C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r8,80(r1)
	ctx.current_instruction = 0x880D0014;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x880cffe8
	if (!ctx.cr6.eq) goto loc_880CFFE8;
	// cmplwi cr6,r25,22
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 22, ctx.xer);
	// blt cr6,0x880cfff8
	if (ctx.cr6.lt) goto loc_880CFFF8;
	// ld r11,0(r28)
	ctx.current_instruction = 0x880D0030;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,18
	ctx.r4.s64 = ctx.r11.s64 + 18;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880D0048;
	sub_8805ADC8(ctx, base);
loc_880D0048:
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x880cfff8
	if (!ctx.cr6.eq) goto loc_880CFFF8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880D0050;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880cfff8
	if (ctx.cr6.eq) goto loc_880CFFF8;
	// lbz r10,3(r11)
	ctx.current_instruction = 0x880D005C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lbz r7,2(r11)
	ctx.current_instruction = 0x880D0064;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// li r30,22
	ctx.r30.s64 = 22;
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x880D0070;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.current_instruction = 0x880D0074;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,80(r1)
	ctx.current_instruction = 0x880D007C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// blt cr6,0x880d01dc
	if (ctx.cr6.lt) goto loc_880D01DC;
	// cmplwi cr6,r25,22
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 22, ctx.xer);
	// ble cr6,0x880d01dc
	if (!ctx.cr6.gt) goto loc_880D01DC;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r27,r10,14104
	ctx.r27.s64 = ctx.r10.s64 + 14104;
	// addi r26,r11,14136
	ctx.r26.s64 = ctx.r11.s64 + 14136;
loc_880D00B0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880cd8c0
	ctx.lr = 0x880D00C4;
	sub_880CD8C0(ctx, base);
loc_880D00C4:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880d01c0
	if (!ctx.cr6.eq) goto loc_880D01C0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r26,16
	ctx.r8.s64 = ctx.r26.s64 + 16;
loc_880D00DC:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880D00DC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880D00E0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x880d00fc
	if (!ctx.cr0.eq) goto loc_880D00FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880d00dc
	if (!ctx.cr6.eq) goto loc_880D00DC;
loc_880D00FC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880d0150
	if (!ctx.cr6.eq) goto loc_880D0150;
	// lwz r4,96(r1)
	ctx.current_instruction = 0x880D0104;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r11,r24,16
	ctx.r11.u64 = ctx.r24.u32 & 0xFFFF;
	// add r31,r4,r30
	ctx.r31.u64 = ctx.r4.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// clrlwi r24,r11,16
	ctx.r24.u64 = ctx.r11.u32 & 0xFFFF;
	// bgt cr6,0x880d01f8
	if (ctx.cr6.gt) goto loc_880D01F8;
	// clrlwi r11,r24,16
	ctx.r11.u64 = ctx.r24.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x880d01f8
	if (ctx.cr6.gt) goto loc_880D01F8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880cf488
	ctx.lr = 0x880D0138;
	sub_880CF488(ctx, base);
loc_880D0138:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880d01d4
	if (ctx.cr6.eq) goto loc_880D01D4;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x880d01d4
	goto loc_880D01D4;
loc_880D0150:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r27,16
	ctx.r8.s64 = ctx.r27.s64 + 16;
loc_880D015C:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880D015C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880D0160;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x880d017c
	if (!ctx.cr0.eq) goto loc_880D017C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880d015c
	if (!ctx.cr6.eq) goto loc_880D015C;
loc_880D017C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880d01cc
	if (!ctx.cr6.eq) goto loc_880D01CC;
	// lwz r4,96(r1)
	ctx.current_instruction = 0x880D0184;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// ld r11,40(r28)
	ctx.current_instruction = 0x880D0188;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + 40);
	// add r31,r4,r30
	ctx.r31.u64 = ctx.r4.u64 + ctx.r30.u64;
	// addi r10,r31,-24
	ctx.r10.s64 = ctx.r31.s64 + -24;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x880d0200
	if (ctx.cr6.gt) goto loc_880D0200;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880cf9a8
	ctx.lr = 0x880D01B0;
	sub_880CF9A8(ctx, base);
loc_880D01B0:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880d01d4
	if (ctx.cr6.eq) goto loc_880D01D4;
loc_880D01C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_880D01CC:
	// lwz r11,96(r1)
	ctx.current_instruction = 0x880D01CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_880D01D4:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x880d00b0
	if (ctx.cr6.lt) goto loc_880D00B0;
loc_880D01DC:
	// ld r10,0(r28)
	ctx.current_instruction = 0x880D01DC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r28.u32 + 0);
	// clrldi r11,r25,32
	ctx.r11.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r28)
	ctx.current_instruction = 0x880D01EC;
	REX_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_880D01F8:
	// li r29,3
	ctx.r29.s64 = 3;
	// b 0x880d01dc
	goto loc_880D01DC;
loc_880D0200:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D7348) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D7348;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D7348) {
			switch (rex_dispatch_address) {
				case 0x880D7350:
				case 0x880D73C4:
				case 0x880D73E8:
				case 0x880D7420:
				case 0x880D7444:
				case 0x880D7454:
				case 0x880D7478:
				case 0x880D7494:
				case 0x880D74BC:
				case 0x880D74D4:
				case 0x880D74EC:
				case 0x880D7508:
				case 0x880D7530:
				case 0x880D75C0:
				case 0x880D7618:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D7348;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D7350: goto loc_880D7350;
		case 0x880D73C4: goto loc_880D73C4;
		case 0x880D73E8: goto loc_880D73E8;
		case 0x880D7420: goto loc_880D7420;
		case 0x880D7444: goto loc_880D7444;
		case 0x880D7454: goto loc_880D7454;
		case 0x880D7478: goto loc_880D7478;
		case 0x880D7494: goto loc_880D7494;
		case 0x880D74BC: goto loc_880D74BC;
		case 0x880D74D4: goto loc_880D74D4;
		case 0x880D74EC: goto loc_880D74EC;
		case 0x880D7508: goto loc_880D7508;
		case 0x880D7530: goto loc_880D7530;
		case 0x880D75C0: goto loc_880D75C0;
		case 0x880D7618: goto loc_880D7618;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x880D7350;
	__savegprlr_21(ctx, base);
loc_880D7350:
	// stfd f29,-120(r1)
	ctx.current_instruction = 0x880D7350;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f29.u64);
	// stfd f30,-112(r1)
	ctx.current_instruction = 0x880D7354;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	ctx.current_instruction = 0x880D7358;
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x880D735C;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d76c8
	if (ctx.cr6.eq) goto loc_880D76C8;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880D7384;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d76c8
	if (ctx.cr6.eq) goto loc_880D76C8;
	// lwz r11,372(r3)
	ctx.current_instruction = 0x880D7390;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d73ec
	if (ctx.cr6.eq) goto loc_880D73EC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x880d73d8
	if (!ctx.cr6.gt) goto loc_880D73D8;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
loc_880D73AC:
	// lwz r11,372(r31)
	ctx.current_instruction = 0x880D73AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// lwzx r10,r30,r11
	ctx.current_instruction = 0x880D73B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880d73cc
	if (ctx.cr6.eq) goto loc_880D73CC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x88125e70
	ctx.lr = 0x880D73C4;
	sub_88125E70(ctx, base);
loc_880D73C4:
	// lwz r11,372(r31)
	ctx.current_instruction = 0x880D73C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// stwx r23,r30,r11
	ctx.current_instruction = 0x880D73C8;
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r23.u32);
loc_880D73CC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x880d73ac
	if (!ctx.cr0.eq) goto loc_880D73AC;
loc_880D73D8:
	// lwz r3,372(r31)
	ctx.current_instruction = 0x880D73D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d73ec
	if (ctx.cr6.eq) goto loc_880D73EC;
	// bl 0x88125e70
	ctx.lr = 0x880D73E8;
	sub_88125E70(ctx, base);
loc_880D73E8:
	// stw r23,372(r31)
	ctx.current_instruction = 0x880D73E8;
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r23.u32);
loc_880D73EC:
	// lwz r11,376(r31)
	ctx.current_instruction = 0x880D73EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d7448
	if (ctx.cr6.eq) goto loc_880D7448;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x880d7434
	if (!ctx.cr6.gt) goto loc_880D7434;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_880D7408:
	// lwz r11,376(r31)
	ctx.current_instruction = 0x880D7408;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// lwzx r10,r30,r11
	ctx.current_instruction = 0x880D740C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880d7428
	if (ctx.cr6.eq) goto loc_880D7428;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x88125e70
	ctx.lr = 0x880D7420;
	sub_88125E70(ctx, base);
loc_880D7420:
	// lwz r11,376(r31)
	ctx.current_instruction = 0x880D7420;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// stwx r23,r30,r11
	ctx.current_instruction = 0x880D7424;
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r23.u32);
loc_880D7428:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x880d7408
	if (!ctx.cr0.eq) goto loc_880D7408;
loc_880D7434:
	// lwz r3,376(r31)
	ctx.current_instruction = 0x880D7434;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d7448
	if (ctx.cr6.eq) goto loc_880D7448;
	// bl 0x88125e70
	ctx.lr = 0x880D7444;
	sub_88125E70(ctx, base);
loc_880D7444:
	// stw r23,376(r31)
	ctx.current_instruction = 0x880D7444;
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r23.u32);
loc_880D7448:
	// rlwinm r24,r27,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88125e60
	ctx.lr = 0x880D7454;
	sub_88125E60(ctx, base);
loc_880D7454:
	// stw r3,372(r31)
	ctx.current_instruction = 0x880D7454;
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880d746c
	if (!ctx.cr6.eq) goto loc_880D746C;
loc_880D7460:
	// lis r23,-32761
	ctx.r23.s64 = -2147024896;
	// ori r23,r23,14
	ctx.r23.u64 = ctx.r23.u64 | 14;
	// b 0x880d76d0
	goto loc_880D76D0;
loc_880D746C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x880D7478;
	sub_88052D90(ctx, base);
loc_880D7478:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x880d74cc
	if (!ctx.cr6.gt) goto loc_880D74CC;
	// rlwinm r28,r22,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_880D748C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88125e60
	ctx.lr = 0x880D7494;
	sub_88125E60(ctx, base);
loc_880D7494:
	// lwz r11,372(r31)
	ctx.current_instruction = 0x880D7494;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// stwx r3,r30,r11
	ctx.current_instruction = 0x880D7498;
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,372(r31)
	ctx.current_instruction = 0x880D749C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// lwzx r10,r30,r11
	ctx.current_instruction = 0x880D74A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880d7460
	if (ctx.cr6.eq) goto loc_880D7460;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x880D74BC;
	sub_88052D90(ctx, base);
loc_880D74BC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x880d748c
	if (ctx.cr6.lt) goto loc_880D748C;
loc_880D74CC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88125e60
	ctx.lr = 0x880D74D4;
	sub_88125E60(ctx, base);
loc_880D74D4:
	// stw r3,376(r31)
	ctx.current_instruction = 0x880D74D4;
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d7460
	if (ctx.cr6.eq) goto loc_880D7460;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x880D74EC;
	sub_88052D90(ctx, base);
loc_880D74EC:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x880d7540
	if (!ctx.cr6.gt) goto loc_880D7540;
	// rlwinm r28,r22,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_880D7500:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88125e60
	ctx.lr = 0x880D7508;
	sub_88125E60(ctx, base);
loc_880D7508:
	// lwz r11,376(r31)
	ctx.current_instruction = 0x880D7508;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// stwx r3,r30,r11
	ctx.current_instruction = 0x880D750C;
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,376(r31)
	ctx.current_instruction = 0x880D7510;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// lwzx r10,r30,r11
	ctx.current_instruction = 0x880D7514;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880d7460
	if (ctx.cr6.eq) goto loc_880D7460;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x880D7530;
	sub_88052D90(ctx, base);
loc_880D7530:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x880d7500
	if (ctx.cr6.lt) goto loc_880D7500;
loc_880D7540:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x880d75f0
	if (ctx.cr6.eq) goto loc_880D75F0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x880d76d0
	if (!ctx.cr6.gt) goto loc_880D76D0;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// lfd f30,12096(r11)
	ctx.current_instruction = 0x880D7564;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 12096);
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// lfd f31,14496(r10)
	ctx.current_instruction = 0x880D756C;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 14496);
	// lfs f29,6732(r9)
	ctx.current_instruction = 0x880D7570;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6732);
	ctx.f29.f64 = double(temp.f32);
loc_880D7574:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x880d75e0
	if (!ctx.cr6.gt) goto loc_880D75E0;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// add r29,r28,r21
	ctx.r29.u64 = ctx.r28.u64 + ctx.r21.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_880D7588:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x880D7588;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x880d75a4
	if (!ctx.cr6.eq) goto loc_880D75A4;
	// lwz r11,372(r31)
	ctx.current_instruction = 0x880D7594;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// lwzx r10,r28,r11
	ctx.current_instruction = 0x880D7598;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stfsx f29,r10,r30
	ctx.current_instruction = 0x880D759C;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
	// b 0x880d75d0
	goto loc_880D75D0;
loc_880D75A4:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// std r11,80(r1)
	ctx.current_instruction = 0x880D75AC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x880D75B0;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmul f2,f13,f31
	ctx.f2.f64 = ctx.f13.f64 * ctx.f31.f64;
	// bl 0x881ef940
	ctx.lr = 0x880D75C0;
	sub_881EF940(ctx, base);
loc_880D75C0:
	// lwz r10,372(r31)
	ctx.current_instruction = 0x880D75C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwzx r9,r28,r10
	ctx.current_instruction = 0x880D75C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// stfsx f12,r9,r30
	ctx.current_instruction = 0x880D75CC;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r30.u32, temp.u32);
loc_880D75D0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r29,r29,r24
	ctx.r29.u64 = ctx.r29.u64 + ctx.r24.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x880d7588
	if (!ctx.cr0.eq) goto loc_880D7588;
loc_880D75E0:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x880d7574
	if (!ctx.cr0.eq) goto loc_880D7574;
	// b 0x880d76d0
	goto loc_880D76D0;
loc_880D75F0:
	// lwz r11,352(r31)
	ctx.current_instruction = 0x880D75F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d7620
	if (ctx.cr6.eq) goto loc_880D7620;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r8,376(r31)
	ctx.current_instruction = 0x880D7600;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r7,372(r31)
	ctx.current_instruction = 0x880D7608;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x880d6ab8
	ctx.lr = 0x880D7618;
	sub_880D6AB8(ctx, base);
loc_880D7618:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x880d76d0
	goto loc_880D76D0;
loc_880D7620:
	// cmpw cr6,r27,r22
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x880d7630
	if (ctx.cr6.eq) goto loc_880D7630;
	// lis r23,-32764
	ctx.r23.s64 = -2147221504;
	// b 0x880d76d0
	goto loc_880D76D0;
loc_880D7630:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// lfs f0,6708(r11)
	ctx.current_instruction = 0x880D763C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x880d769c
	if (ctx.cr6.lt) goto loc_880D769C;
	// addi r6,r27,-3
	ctx.r6.s64 = ctx.r27.s64 + -3;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_880D764C:
	// lwz r7,372(r31)
	ctx.current_instruction = 0x880D764C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// lwzx r5,r11,r7
	ctx.current_instruction = 0x880D7660;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stfsx f0,r5,r11
	ctx.current_instruction = 0x880D7664;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lwz r7,372(r31)
	ctx.current_instruction = 0x880D7668;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,4(r4)
	ctx.current_instruction = 0x880D7670;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f0,4(r3)
	ctx.current_instruction = 0x880D767C;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r7,372(r31)
	ctx.current_instruction = 0x880D7680;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// lwzx r5,r8,r7
	ctx.current_instruction = 0x880D7684;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stfsx f0,r5,r8
	ctx.current_instruction = 0x880D7688;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// lwz r4,372(r31)
	ctx.current_instruction = 0x880D768C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// lwzx r3,r10,r4
	ctx.current_instruction = 0x880D7690;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stfsx f0,r3,r10
	ctx.current_instruction = 0x880D7694;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, temp.u32);
	// blt cr6,0x880d764c
	if (ctx.cr6.lt) goto loc_880D764C;
loc_880D769C:
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x880d76d0
	if (!ctx.cr6.lt) goto loc_880D76D0;
	// subf r10,r9,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880D76B0:
	// lwz r10,372(r31)
	ctx.current_instruction = 0x880D76B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// lwzx r9,r11,r10
	ctx.current_instruction = 0x880D76B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfsx f0,r9,r11
	ctx.current_instruction = 0x880D76B8;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880d76b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D76B0;
	// b 0x880d76d0
	goto loc_880D76D0;
loc_880D76C8:
	// lis r23,-32761
	ctx.r23.s64 = -2147024896;
	// ori r23,r23,87
	ctx.r23.u64 = ctx.r23.u64 | 87;
loc_880D76D0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-120(r1)
	ctx.current_instruction = 0x880D76D8;
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.current_instruction = 0x880D76DC;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.current_instruction = 0x880D76E0;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DED00) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880DED00;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880DED00) {
			switch (rex_dispatch_address) {
				case 0x880DED08:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880DED00;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x880DED08: goto loc_880DED08;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880DED08;
	__savegprlr_26(ctx, base);
loc_880DED08:
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// srawi r27,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 2;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// li r29,16
	ctx.r29.s64 = 16;
	// mullw r11,r10,r6
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r31,r11,r5
	ctx.r31.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_880DED28:
	// li r11,17
	ctx.r11.s64 = 17;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880DED34:
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lbzx r9,r31,r10
	ctx.current_instruction = 0x880DED38;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbz r11,1(r11)
	ctx.current_instruction = 0x880DED3C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// srawi. r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x880ded5c
	if (!ctx.cr0.lt) goto loc_880DED5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x880ded68
	goto loc_880DED68;
loc_880DED5C:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x880ded68
	if (!ctx.cr6.gt) goto loc_880DED68;
	// li r11,255
	ctx.r11.s64 = 255;
loc_880DED68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r30,r10
	ctx.current_instruction = 0x880DED6C;
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x880ded34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DED34;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x880ded28
	if (!ctx.cr0.eq) goto loc_880DED28;
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
	// li r29,17
	ctx.r29.s64 = 17;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_880DEDA8:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r3,3
	ctx.r31.s64 = ctx.r3.s64 + 3;
	// addi r30,r4,3
	ctx.r30.s64 = ctx.r4.s64 + 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880DEDBC:
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbzx r9,r10,r6
	ctx.current_instruction = 0x880DEDC0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// lbzx r10,r3,r11
	ctx.current_instruction = 0x880DEDC4;
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
	// bge 0x880dede4
	if (!ctx.cr0.lt) goto loc_880DEDE4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880dedf0
	goto loc_880DEDF0;
loc_880DEDE4:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880dedf0
	if (!ctx.cr6.gt) goto loc_880DEDF0;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DEDF0:
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stbx r26,r4,r11
	ctx.current_instruction = 0x880DEDFC;
	REX_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r26.u8);
	// lbzx r9,r10,r6
	ctx.current_instruction = 0x880DEE00;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// lbz r10,0(r10)
	ctx.current_instruction = 0x880DEE04;
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
	// bge 0x880dee24
	if (!ctx.cr0.lt) goto loc_880DEE24;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880dee30
	goto loc_880DEE30;
loc_880DEE24:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880dee30
	if (!ctx.cr6.gt) goto loc_880DEE30;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DEE30:
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r26,r4,r11
	ctx.r26.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// stb r10,1(r26)
	ctx.current_instruction = 0x880DEE3C;
	REX_STORE_U8(ctx.r26.u32 + 1, ctx.r10.u8);
	// lbzx r10,r9,r6
	ctx.current_instruction = 0x880DEE40;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbz r9,0(r9)
	ctx.current_instruction = 0x880DEE44;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
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
	// bge 0x880dee64
	if (!ctx.cr0.lt) goto loc_880DEE64;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880dee70
	goto loc_880DEE70;
loc_880DEE64:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880dee70
	if (!ctx.cr6.gt) goto loc_880DEE70;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DEE70:
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stb r26,2(r9)
	ctx.current_instruction = 0x880DEE7C;
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r26.u8);
	// lbzx r9,r10,r6
	ctx.current_instruction = 0x880DEE80;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// lbzx r10,r31,r11
	ctx.current_instruction = 0x880DEE84;
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
	// bge 0x880deea4
	if (!ctx.cr0.lt) goto loc_880DEEA4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880deeb0
	goto loc_880DEEB0;
loc_880DEEA4:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880deeb0
	if (!ctx.cr6.gt) goto loc_880DEEB0;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DEEB0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r30,r11
	ctx.current_instruction = 0x880DEEB4;
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880dedbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DEDBC;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// bne 0x880deda8
	if (!ctx.cr0.eq) goto loc_880DEDA8;
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// addi r30,r7,1280
	ctx.r30.s64 = ctx.r7.s64 + 1280;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r31,r6,1
	ctx.r31.s64 = ctx.r6.s64 + 1;
	// li r29,17
	ctx.r29.s64 = 17;
loc_880DEEE4:
	// li r11,17
	ctx.r11.s64 = 17;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880DEEF0:
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lbzx r9,r3,r10
	ctx.current_instruction = 0x880DEEF4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// lbzx r5,r31,r11
	ctx.current_instruction = 0x880DEEF8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r4,r11,r6
	ctx.current_instruction = 0x880DEEFC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lbz r7,1(r11)
	ctx.current_instruction = 0x880DEF00;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
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
	// bge 0x880def28
	if (!ctx.cr0.lt) goto loc_880DEF28;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x880def34
	goto loc_880DEF34;
loc_880DEF28:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x880def34
	if (!ctx.cr6.gt) goto loc_880DEF34;
	// li r11,255
	ctx.r11.s64 = 255;
loc_880DEF34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r10,r30
	ctx.current_instruction = 0x880DEF38;
	REX_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x880deef0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DEEF0;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// bne 0x880deee4
	if (!ctx.cr0.eq) goto loc_880DEEE4;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E43B8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E43B8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E43B8;
	ctx.current_instruction = 0x880E43B8;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18412(r11)
	ctx.current_instruction = 0x880E43BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e4478
	if (!ctx.cr6.eq) goto loc_880E4478;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18416(r11)
	ctx.current_instruction = 0x880E43CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e4478
	if (!ctx.cr6.eq) goto loc_880E4478;
	// lwz r11,7976(r3)
	ctx.current_instruction = 0x880E43D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7976);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e4478
	if (!ctx.cr6.eq) goto loc_880E4478;
	// lwz r11,8104(r3)
	ctx.current_instruction = 0x880E43E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e4478
	if (ctx.cr6.eq) goto loc_880E4478;
	// lwz r11,7904(r3)
	ctx.current_instruction = 0x880E43F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7904);
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// stw r9,7972(r3)
	ctx.current_instruction = 0x880E4400;
	REX_STORE_U32(ctx.r3.u32 + 7972, ctx.r9.u32);
	// blt cr6,0x880e4420
	if (ctx.cr6.lt) goto loc_880E4420;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7972(r3)
	ctx.current_instruction = 0x880E440C;
	REX_STORE_U32(ctx.r3.u32 + 7972, ctx.r11.u32);
	// lwz r11,-19940(r10)
	ctx.current_instruction = 0x880E4410;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -19940);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// stw r11,-19948(r10)
	ctx.current_instruction = 0x880E4418;
	REX_STORE_U32(ctx.r10.u32 + -19948, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E4420:
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// blt cr6,0x880e4440
	if (ctx.cr6.lt) goto loc_880E4440;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,-19952(r11)
	ctx.current_instruction = 0x880E442C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -19952);
	// stw r11,-19940(r10)
	ctx.current_instruction = 0x880E4430;
	REX_STORE_U32(ctx.r10.u32 + -19940, ctx.r11.u32);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// stw r11,-19948(r10)
	ctx.current_instruction = 0x880E4438;
	REX_STORE_U32(ctx.r10.u32 + -19948, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E4440:
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// blt cr6,0x880e4460
	if (ctx.cr6.lt) goto loc_880E4460;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,-19960(r11)
	ctx.current_instruction = 0x880E444C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -19960);
	// stw r11,-19940(r10)
	ctx.current_instruction = 0x880E4450;
	REX_STORE_U32(ctx.r10.u32 + -19940, ctx.r11.u32);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// stw r11,-19948(r10)
	ctx.current_instruction = 0x880E4458;
	REX_STORE_U32(ctx.r10.u32 + -19948, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E4460:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,-19964(r11)
	ctx.current_instruction = 0x880E4464;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -19964);
	// stw r11,-19940(r10)
	ctx.current_instruction = 0x880E4468;
	REX_STORE_U32(ctx.r10.u32 + -19940, ctx.r11.u32);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// stw r11,-19948(r10)
	ctx.current_instruction = 0x880E4470;
	REX_STORE_U32(ctx.r10.u32 + -19948, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E4478:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7972(r3)
	ctx.current_instruction = 0x880E447C;
	REX_STORE_U32(ctx.r3.u32 + 7972, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E5C20) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880E5C20;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880E5C20) {
			switch (rex_dispatch_address) {
				case 0x880E5C28:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E5C20;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x880E5C28: goto loc_880E5C28;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880E5C28;
	__savegprlr_20(ctx, base);
loc_880E5C28:
	// lbz r9,0(r4)
	ctx.current_instruction = 0x880E5C28;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r10,r6,-3
	ctx.r10.s64 = ctx.r6.s64 + -3;
	// addi r26,r4,1
	ctx.r26.s64 = ctx.r4.s64 + 1;
	// addi r25,r4,2
	ctx.r25.s64 = ctx.r4.s64 + 2;
	// li r11,3
	ctx.r11.s64 = 3;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stb r9,0(r5)
	ctx.current_instruction = 0x880E5C40;
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// lbz r8,1(r4)
	ctx.current_instruction = 0x880E5C44;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// stb r8,1(r5)
	ctx.current_instruction = 0x880E5C48;
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r8.u8);
	// lbz r7,2(r4)
	ctx.current_instruction = 0x880E5C4C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// stb r7,2(r5)
	ctx.current_instruction = 0x880E5C50;
	REX_STORE_U8(ctx.r5.u32 + 2, ctx.r7.u8);
	// ble cr6,0x880e5d20
	if (!ctx.cr6.gt) goto loc_880E5D20;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// addi r30,r4,-3
	ctx.r30.s64 = ctx.r4.s64 + -3;
	// addi r29,r4,3
	ctx.r29.s64 = ctx.r4.s64 + 3;
	// addi r28,r4,-2
	ctx.r28.s64 = ctx.r4.s64 + -2;
	// addi r27,r4,-1
	ctx.r27.s64 = ctx.r4.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r24,r4,r5
	ctx.r24.u64 = ctx.r5.u64 - ctx.r4.u64;
loc_880E5C74:
	// lbzx r8,r30,r11
	ctx.current_instruction = 0x880E5C74;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbzx r7,r29,r11
	ctx.current_instruction = 0x880E5C7C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r10,r28,r11
	ctx.current_instruction = 0x880E5C80;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbzx r9,r25,r11
	ctx.current_instruction = 0x880E5C84;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r23,21272(r3)
	ctx.current_instruction = 0x880E5C8C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 21272);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r22,21268(r3)
	ctx.current_instruction = 0x880E5C94;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 21268);
	// mullw r10,r7,r23
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r23.s32);
	// lbzx r7,r26,r11
	ctx.current_instruction = 0x880E5C9C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// lbzx r8,r27,r11
	ctx.current_instruction = 0x880E5CA0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// lwz r23,21264(r3)
	ctx.current_instruction = 0x880E5CA4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 21264);
	// lbzx r21,r11,r4
	ctx.current_instruction = 0x880E5CA8;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lwz r20,21260(r3)
	ctx.current_instruction = 0x880E5CAC;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 21260);
	// mullw r9,r9,r22
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r22.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r8,r23
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r23.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r21,r20
	ctx.r9.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r20.s32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r10,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 7;
	// subf r9,r10,r21
	ctx.r9.u64 = ctx.r21.u64 - ctx.r10.u64;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x880e5d10
	if (!ctx.cr6.lt) goto loc_880E5D10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x880e5cfc
	if (!ctx.cr6.lt) goto loc_880E5CFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// b 0x880e5d14
	goto loc_880E5D14;
loc_880E5CFC:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880e5d08
	if (!ctx.cr6.gt) goto loc_880E5D08;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880E5D08:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// b 0x880e5d14
	goto loc_880E5D14;
loc_880E5D10:
	// lbz r10,0(r31)
	ctx.current_instruction = 0x880E5D10;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
loc_880E5D14:
	// stbx r10,r24,r31
	ctx.current_instruction = 0x880E5D14;
	REX_STORE_U8(ctx.r24.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x880e5c74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E5C74;
loc_880E5D20:
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lbz r9,-1(r11)
	ctx.current_instruction = 0x880E5D28;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// stb r9,-1(r10)
	ctx.current_instruction = 0x880E5D2C;
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r9.u8);
	// lbz r8,-2(r11)
	ctx.current_instruction = 0x880E5D30;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// stb r8,-2(r10)
	ctx.current_instruction = 0x880E5D34;
	REX_STORE_U8(ctx.r10.u32 + -2, ctx.r8.u8);
	// lbz r7,-3(r11)
	ctx.current_instruction = 0x880E5D38;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// stb r7,-3(r10)
	ctx.current_instruction = 0x880E5D3C;
	REX_STORE_U8(ctx.r10.u32 + -3, ctx.r7.u8);
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E9310) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880E9310;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880E9310) {
			switch (rex_dispatch_address) {
				case 0x880E9338:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E9310;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880E9338: goto loc_880E9338;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880E9314;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880E9318;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880E931C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21104(r3)
	ctx.current_instruction = 0x880E9320;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,768(r3)
	ctx.current_instruction = 0x880E9328;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 768);
	// stw r11,768(r3)
	ctx.current_instruction = 0x880E932C;
	REX_STORE_U32(ctx.r3.u32 + 768, ctx.r11.u32);
	// stw r10,21104(r3)
	ctx.current_instruction = 0x880E9330;
	REX_STORE_U32(ctx.r3.u32 + 21104, ctx.r10.u32);
	// bl 0x880e4858
	ctx.lr = 0x880E9338;
	sub_880E4858(ctx, base);
loc_880E9338:
	// lwz r8,21104(r31)
	ctx.current_instruction = 0x880E9338;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21104);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,64(r8)
	ctx.current_instruction = 0x880E9340;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 64);
	// stw r7,21112(r31)
	ctx.current_instruction = 0x880E9344;
	REX_STORE_U32(ctx.r31.u32 + 21112, ctx.r7.u32);
	// lwz r6,88(r8)
	ctx.current_instruction = 0x880E9348;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 88);
	// stw r6,21116(r31)
	ctx.current_instruction = 0x880E934C;
	REX_STORE_U32(ctx.r31.u32 + 21116, ctx.r6.u32);
	// lwz r5,112(r8)
	ctx.current_instruction = 0x880E9350;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 112);
	// stw r5,21120(r31)
	ctx.current_instruction = 0x880E9354;
	REX_STORE_U32(ctx.r31.u32 + 21120, ctx.r5.u32);
	// stw r9,2208(r31)
	ctx.current_instruction = 0x880E9358;
	REX_STORE_U32(ctx.r31.u32 + 2208, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880E9360;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880E9368;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880EB2F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880EB2F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880EB2F0) {
			switch (rex_dispatch_address) {
				case 0x880EB2F8:
				case 0x880EB370:
				case 0x880EB3A4:
				case 0x880EB3D8:
				case 0x880EB40C:
				case 0x880EB46C:
				case 0x880EB4A4:
				case 0x880EB4DC:
				case 0x880EB514:
				case 0x880EB6B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EB2F0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880EB2F8: goto loc_880EB2F8;
		case 0x880EB370: goto loc_880EB370;
		case 0x880EB3A4: goto loc_880EB3A4;
		case 0x880EB3D8: goto loc_880EB3D8;
		case 0x880EB40C: goto loc_880EB40C;
		case 0x880EB46C: goto loc_880EB46C;
		case 0x880EB4A4: goto loc_880EB4A4;
		case 0x880EB4DC: goto loc_880EB4DC;
		case 0x880EB514: goto loc_880EB514;
		case 0x880EB6B8: goto loc_880EB6B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x880EB2F8;
	__savegprlr_18(ctx, base);
loc_880EB2F8:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x880EB2F8;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,724(r3)
	ctx.current_instruction = 0x880EB2FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,720(r3)
	ctx.current_instruction = 0x880EB304;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r24,0
	ctx.r24.s64 = 0;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r18,0
	ctx.r18.s64 = 0;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880eb428
	if (ctx.cr6.eq) goto loc_880EB428;
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r27,0
	ctx.r27.s64 = 0;
loc_880EB348:
	// lwz r11,2544(r31)
	ctx.current_instruction = 0x880EB348;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lhzx r10,r27,r11
	ctx.current_instruction = 0x880EB34C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// beq cr6,0x880eb378
	if (ctx.cr6.eq) goto loc_880EB378;
	// lwz r11,2548(r31)
	ctx.current_instruction = 0x880EB358;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r10,r11,r27
	ctx.current_instruction = 0x880EB360;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88101708
	ctx.lr = 0x880EB370;
	sub_88101708(ctx, base);
loc_880EB370:
	// add r22,r3,r22
	ctx.r22.u64 = ctx.r3.u64 + ctx.r22.u64;
	// add r18,r30,r18
	ctx.r18.u64 = ctx.r30.u64 + ctx.r18.u64;
loc_880EB378:
	// lwz r11,2544(r31)
	ctx.current_instruction = 0x880EB378;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// addi r30,r27,2
	ctx.r30.s64 = ctx.r27.s64 + 2;
	// lhzx r10,r30,r11
	ctx.current_instruction = 0x880EB380;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// beq cr6,0x880eb3ac
	if (ctx.cr6.eq) goto loc_880EB3AC;
	// lwz r11,2548(r31)
	ctx.current_instruction = 0x880EB38C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r10,r11,r30
	ctx.current_instruction = 0x880EB394;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88101708
	ctx.lr = 0x880EB3A4;
	sub_88101708(ctx, base);
loc_880EB3A4:
	// add r22,r3,r22
	ctx.r22.u64 = ctx.r3.u64 + ctx.r22.u64;
	// add r18,r29,r18
	ctx.r18.u64 = ctx.r29.u64 + ctx.r18.u64;
loc_880EB3AC:
	// lwz r11,2544(r31)
	ctx.current_instruction = 0x880EB3AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// addi r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 2;
	// lhzx r10,r28,r11
	ctx.current_instruction = 0x880EB3B4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// beq cr6,0x880eb3e0
	if (ctx.cr6.eq) goto loc_880EB3E0;
	// lwz r11,2548(r31)
	ctx.current_instruction = 0x880EB3C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r10,r11,r28
	ctx.current_instruction = 0x880EB3C8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// neg r4,r30
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r30.u64);
	// bl 0x88101708
	ctx.lr = 0x880EB3D8;
	sub_88101708(ctx, base);
loc_880EB3D8:
	// add r23,r3,r23
	ctx.r23.u64 = ctx.r3.u64 + ctx.r23.u64;
	// add r19,r30,r19
	ctx.r19.u64 = ctx.r30.u64 + ctx.r19.u64;
loc_880EB3E0:
	// lwz r11,2544(r31)
	ctx.current_instruction = 0x880EB3E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// addi r30,r28,2
	ctx.r30.s64 = ctx.r28.s64 + 2;
	// lhzx r10,r30,r11
	ctx.current_instruction = 0x880EB3E8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// beq cr6,0x880eb414
	if (ctx.cr6.eq) goto loc_880EB414;
	// lwz r11,2548(r31)
	ctx.current_instruction = 0x880EB3F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r10,r11,r30
	ctx.current_instruction = 0x880EB3FC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// neg r4,r29
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r29.u64);
	// bl 0x88101708
	ctx.lr = 0x880EB40C;
	sub_88101708(ctx, base);
loc_880EB40C:
	// add r23,r3,r23
	ctx.r23.u64 = ctx.r3.u64 + ctx.r23.u64;
	// add r19,r29,r19
	ctx.r19.u64 = ctx.r29.u64 + ctx.r19.u64;
loc_880EB414:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880EB414;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r30,2
	ctx.r28.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880eb348
	if (ctx.cr6.lt) goto loc_880EB348;
loc_880EB428:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880EB428;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,724(r31)
	ctx.current_instruction = 0x880EB430;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r27,r11,-2
	ctx.r27.s64 = ctx.r11.s64 + -2;
	// ble cr6,0x880eb53c
	if (!ctx.cr6.gt) goto loc_880EB53C;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_880EB44C:
	// lwz r11,2544(r31)
	ctx.current_instruction = 0x880EB44C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lhzx r10,r10,r11
	ctx.current_instruction = 0x880EB450;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// cmpwi cr6,r30,16384
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16384, ctx.xer);
	// beq cr6,0x880eb474
	if (ctx.cr6.eq) goto loc_880EB474;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88101708
	ctx.lr = 0x880EB46C;
	sub_88101708(ctx, base);
loc_880EB46C:
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// add r20,r30,r20
	ctx.r20.u64 = ctx.r30.u64 + ctx.r20.u64;
loc_880EB474:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880EB474;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r10,2544(r31)
	ctx.current_instruction = 0x880EB478;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r29,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r10
	ctx.current_instruction = 0x880EB488;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,16384
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16384, ctx.xer);
	// beq cr6,0x880eb4ac
	if (ctx.cr6.eq) goto loc_880EB4AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88101708
	ctx.lr = 0x880EB4A4;
	sub_88101708(ctx, base);
loc_880EB4A4:
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// add r20,r30,r20
	ctx.r20.u64 = ctx.r30.u64 + ctx.r20.u64;
loc_880EB4AC:
	// lwz r10,2544(r31)
	ctx.current_instruction = 0x880EB4AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r9,r27,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,720(r31)
	ctx.current_instruction = 0x880EB4B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r9,r10
	ctx.current_instruction = 0x880EB4BC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// extsh r30,r7
	ctx.r30.s64 = ctx.r7.s16;
	// cmpwi cr6,r30,16384
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16384, ctx.xer);
	// beq cr6,0x880eb4e4
	if (ctx.cr6.eq) goto loc_880EB4E4;
	// neg r4,r30
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88101708
	ctx.lr = 0x880EB4DC;
	sub_88101708(ctx, base);
loc_880EB4DC:
	// add r25,r3,r25
	ctx.r25.u64 = ctx.r3.u64 + ctx.r25.u64;
	// add r21,r30,r21
	ctx.r21.u64 = ctx.r30.u64 + ctx.r21.u64;
loc_880EB4E4:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880EB4E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r10,2544(r31)
	ctx.current_instruction = 0x880EB4E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r9,r29,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r10
	ctx.current_instruction = 0x880EB4F8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,16384
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16384, ctx.xer);
	// beq cr6,0x880eb51c
	if (ctx.cr6.eq) goto loc_880EB51C;
	// neg r4,r30
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88101708
	ctx.lr = 0x880EB514;
	sub_88101708(ctx, base);
loc_880EB514:
	// add r25,r3,r25
	ctx.r25.u64 = ctx.r3.u64 + ctx.r25.u64;
	// add r21,r30,r21
	ctx.r21.u64 = ctx.r30.u64 + ctx.r21.u64;
loc_880EB51C:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880EB51C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r9,724(r31)
	ctx.current_instruction = 0x880EB524;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// blt cr6,0x880eb44c
	if (ctx.cr6.lt) goto loc_880EB44C;
loc_880EB53C:
	// lwz r10,2436(r31)
	ctx.current_instruction = 0x880EB53C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2436);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// clrlwi r7,r10,29
	ctx.r7.u64 = ctx.r10.u32 & 0x7;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r7,r7,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lfs f13,17648(r9)
	ctx.current_instruction = 0x880EB554;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17648);
	ctx.f13.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,17644(r8)
	ctx.current_instruction = 0x880EB55C;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 17644);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880eb570
	if (ctx.cr6.eq) goto loc_880EB570;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x880eb574
	goto loc_880EB574;
loc_880EB570:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_880EB574:
	// rlwinm r10,r10,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880eb588
	if (ctx.cr6.eq) goto loc_880EB588;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_880EB588:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpw cr6,r24,r25
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r25.s32, ctx.xer);
	// stw r10,2436(r31)
	ctx.current_instruction = 0x880EB590;
	REX_STORE_U32(ctx.r31.u32 + 2436, ctx.r10.u32);
	// lwz r10,724(r31)
	ctx.current_instruction = 0x880EB594;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x880eb5d8
	if (!ctx.cr6.gt) goto loc_880EB5D8;
	// std r10,80(r1)
	ctx.current_instruction = 0x880EB5A0;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x880EB5A4;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	ctx.current_instruction = 0x880EB5B8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x880EB5BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880eb614
	if (!ctx.cr6.gt) goto loc_880EB614;
	// li r9,1
	ctx.r9.s64 = 1;
	// divwu r30,r20,r10
	ctx.r30.u64 = uint32_t(ctx.r10.u32 ? ctx.r20.u32 / ctx.r10.u32 : 0);
	// stw r9,2436(r31)
	ctx.current_instruction = 0x880EB5D0;
	REX_STORE_U32(ctx.r31.u32 + 2436, ctx.r9.u32);
	// b 0x880eb610
	goto loc_880EB610;
loc_880EB5D8:
	// std r10,80(r1)
	ctx.current_instruction = 0x880EB5D8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x880EB5DC;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	ctx.current_instruction = 0x880EB5F0;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x880EB5F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r25,r9
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880eb614
	if (!ctx.cr6.gt) goto loc_880EB614;
	// neg r9,r21
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r21.u64);
	// li r8,4
	ctx.r8.s64 = 4;
	// divwu r30,r9,r10
	ctx.r30.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// stw r8,2436(r31)
	ctx.current_instruction = 0x880EB60C;
	REX_STORE_U32(ctx.r31.u32 + 2436, ctx.r8.u32);
loc_880EB610:
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
loc_880EB614:
	// cmpw cr6,r22,r23
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r23.s32, ctx.xer);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// ble cr6,0x880eb65c
	if (!ctx.cr6.gt) goto loc_880EB65C;
	// std r10,80(r1)
	ctx.current_instruction = 0x880EB620;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x880EB624;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	ctx.current_instruction = 0x880EB638;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x880EB63C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r22,r9
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880eb69c
	if (!ctx.cr6.gt) goto loc_880EB69C;
	// lwz r10,2436(r31)
	ctx.current_instruction = 0x880EB648;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2436);
	// divwu r29,r18,r11
	ctx.r29.u64 = uint32_t(ctx.r11.u32 ? ctx.r18.u32 / ctx.r11.u32 : 0);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,2436(r31)
	ctx.current_instruction = 0x880EB654;
	REX_STORE_U32(ctx.r31.u32 + 2436, ctx.r9.u32);
	// b 0x880eb698
	goto loc_880EB698;
loc_880EB65C:
	// std r10,80(r1)
	ctx.current_instruction = 0x880EB65C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x880EB660;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	ctx.current_instruction = 0x880EB674;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x880EB678;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r23,r9
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880eb69c
	if (!ctx.cr6.gt) goto loc_880EB69C;
	// lwz r10,2436(r31)
	ctx.current_instruction = 0x880EB684;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2436);
	// neg r9,r19
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r19.u64);
	// ori r8,r10,8
	ctx.r8.u64 = ctx.r10.u64 | 8;
	// divwu r29,r9,r11
	ctx.r29.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// stw r8,2436(r31)
	ctx.current_instruction = 0x880EB694;
	REX_STORE_U32(ctx.r31.u32 + 2436, ctx.r8.u32);
loc_880EB698:
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
loc_880EB69C:
	// lwz r11,6772(r31)
	ctx.current_instruction = 0x880EB69C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6772);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880eb714
	if (ctx.cr6.eq) goto loc_880EB714;
	// lwz r11,2436(r31)
	ctx.current_instruction = 0x880EB6A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880eb714
	if (!ctx.cr6.eq) goto loc_880EB714;
	// bl 0x881ee8e8
	ctx.lr = 0x880EB6B8;
	sub_881EE8E8(ctx, base);
loc_880EB6B8:
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x880eb714
	if (ctx.cr6.gt) goto loc_880EB714;
	// lis r12,-30705
	ctx.r12.s64 = -2012282880;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18720
	ctx.r12.s64 = ctx.r12.s64 + -18720;
	// lwzx r0,r12,r0
	ctx.current_instruction = 0x880EB6D4;
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_880EB710;
	case 1:
		goto loc_880EB710;
	case 2:
		goto loc_880EB710;
	case 3:
		goto loc_880EB710;
	case 4:
		goto loc_880EB714;
	case 5:
		goto loc_880EB710;
	case 6:
		goto loc_880EB714;
	case 7:
		goto loc_880EB710;
	case 8:
		goto loc_880EB710;
	case 9:
		goto loc_880EB714;
	case 10:
		goto loc_880EB714;
	case 11:
		goto loc_880EB710;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_880EB710:
	// stw r11,2436(r31)
	ctx.current_instruction = 0x880EB710;
	REX_STORE_U32(ctx.r31.u32 + 2436, ctx.r11.u32);
loc_880EB714:
	// lwz r10,2436(r31)
	ctx.current_instruction = 0x880EB714;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2436);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880eb748
	if (ctx.cr6.eq) goto loc_880EB748;
	// srawi r11,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x880eb744
	if (ctx.cr6.lt) goto loc_880EB744;
	// li r11,6
	ctx.r11.s64 = 6;
loc_880EB744:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_880EB748:
	// rlwinm r10,r10,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880eb774
	if (ctx.cr6.eq) goto loc_880EB774;
	// srawi r11,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x880eb770
	if (ctx.cr6.lt) goto loc_880EB770;
	// li r11,6
	ctx.r11.s64 = 6;
loc_880EB770:
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
loc_880EB774:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880eb78c
	if (ctx.cr6.eq) goto loc_880EB78C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880eb78c
	if (ctx.cr6.eq) goto loc_880EB78C;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
loc_880EB78C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F5F28) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880F5F28);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F5F28;
	ctx.current_instruction = 0x880F5F28;
	// lwz r10,27940(r3)
	ctx.current_instruction = 0x880F5F28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 27940);
	// mulli r11,r7,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(52));
	// lhz r9,0(r4)
	ctx.current_instruction = 0x880F5F30;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// lwz r7,40(r11)
	ctx.current_instruction = 0x880F5F40;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,0(r11)
	ctx.current_instruction = 0x880F5F44;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r3,r7,r8
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lwz r8,4(r11)
	ctx.current_instruction = 0x880F5F4C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// sth r3,0(r5)
	ctx.current_instruction = 0x880F5F50;
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r3.u16);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// subf r7,r5,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880F5F6C:
	// lhzx r10,r7,r11
	ctx.current_instruction = 0x880F5F6C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880f5fa4
	if (ctx.cr6.eq) goto loc_880F5FA4;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// bge cr6,0x880f5f94
	if (!ctx.cr6.lt) goto loc_880F5F94;
	// subf r5,r8,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r8.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,0(r11)
	ctx.current_instruction = 0x880F5F8C;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// b 0x880f5fa8
	goto loc_880F5FA8;
loc_880F5F94:
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// sth r5,0(r11)
	ctx.current_instruction = 0x880F5F9C;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// b 0x880f5fa8
	goto loc_880F5FA8;
loc_880F5FA4:
	// sth r6,0(r11)
	ctx.current_instruction = 0x880F5FA4;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
loc_880F5FA8:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x880f5f6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F5F6C;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880F8790) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F8790;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F8790) {
			switch (rex_dispatch_address) {
				case 0x880F8798:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F8790;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x880F8798: goto loc_880F8798;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880F8798;
	__savegprlr_14(ctx, base);
loc_880F8798:
	// lwz r31,100(r1)
	ctx.current_instruction = 0x880F8798;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stw r9,68(r1)
	ctx.current_instruction = 0x880F87A0;
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// subfic r30,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r30.u64 = static_cast<uint64_t>(0) - ctx.r31.u64;
	// lwz r19,92(r1)
	ctx.current_instruction = 0x880F87AC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r31,r9,29
	ctx.r31.u64 = ctx.r9.u32 & 0x7;
	// subfe r9,r30,r30
	temp.u8 = (~ctx.r30.u32 + ctx.r30.u32 < ~ctx.r30.u32) | (~ctx.r30.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r30.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// rlwinm r28,r9,0,28,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE;
	// add r30,r7,r10
	ctx.r30.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r21,r7,-16
	ctx.r21.s64 = ctx.r7.s64 + -16;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r22,r11,-16
	ctx.r22.s64 = ctx.r11.s64 + -16;
	// rlwinm r28,r28,0,30,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r27,r30,-1
	ctx.r27.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// addi r14,r7,32
	ctx.r14.s64 = ctx.r7.s64 + 32;
	// addi r9,r28,10
	ctx.r9.s64 = ctx.r28.s64 + 10;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x880f8904
	if (!ctx.cr6.lt) goto loc_880F8904;
	// lwz r15,84(r1)
	ctx.current_instruction = 0x880F87F8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// subf r18,r4,r3
	ctx.r18.u64 = ctx.r3.u64 - ctx.r4.u64;
	// subf r17,r22,r21
	ctx.r17.u64 = ctx.r21.u64 - ctx.r22.u64;
	// subf r16,r5,r6
	ctx.r16.u64 = ctx.r6.u64 - ctx.r5.u64;
loc_880F880C:
	// lbzx r5,r18,r23
	ctx.current_instruction = 0x880F880C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r23.u32);
	// add r7,r10,r15
	ctx.r7.u64 = ctx.r10.u64 + ctx.r15.u64;
	// lbz r3,0(r27)
	ctx.current_instruction = 0x880F8814;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r28,0(r29)
	ctx.current_instruction = 0x880F881C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// rldicr r30,r5,8,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,0(r23)
	ctx.current_instruction = 0x880F8824;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r23.u32 + 0);
	// rldicr r25,r3,8,63
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r24,r28,8,63
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r28.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r26,r4,8,63
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// or r3,r25,r3
	ctx.r3.u64 = ctx.r25.u64 | ctx.r3.u64;
	// or r5,r30,r5
	ctx.r5.u64 = ctx.r30.u64 | ctx.r5.u64;
	// or r30,r24,r28
	ctx.r30.u64 = ctx.r24.u64 | ctx.r28.u64;
	// or r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 | ctx.r4.u64;
	// rldicr r25,r3,16,47
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r28,r5,16,47
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r26,r4,16,47
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r24,r30,16,47
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r3,r25,r3
	ctx.r3.u64 = ctx.r25.u64 | ctx.r3.u64;
	// or r5,r28,r5
	ctx.r5.u64 = ctx.r28.u64 | ctx.r5.u64;
	// or r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 | ctx.r4.u64;
	// or r30,r24,r30
	ctx.r30.u64 = ctx.r24.u64 | ctx.r30.u64;
	// rldicr r25,r3,32,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r28,r5,32,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r26,r4,32,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r24,r30,32,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// or r25,r25,r3
	ctx.r25.u64 = ctx.r25.u64 | ctx.r3.u64;
	// or r28,r28,r5
	ctx.r28.u64 = ctx.r28.u64 | ctx.r5.u64;
	// or r26,r26,r4
	ctx.r26.u64 = ctx.r26.u64 | ctx.r4.u64;
	// or r24,r24,r30
	ctx.r24.u64 = ctx.r24.u64 | ctx.r30.u64;
	// add r3,r17,r7
	ctx.r3.u64 = ctx.r17.u64 + ctx.r7.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x880f88b4
	if (!ctx.cr6.gt) goto loc_880F88B4;
	// addi r5,r27,1
	ctx.r5.s64 = ctx.r27.s64 + 1;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
loc_880F889C:
	// lbz r30,0(r27)
	ctx.current_instruction = 0x880F889C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// stbx r30,r5,r11
	ctx.current_instruction = 0x880F88A0;
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r30.u8);
	// lbz r30,0(r29)
	ctx.current_instruction = 0x880F88A4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// stbx r30,r4,r11
	ctx.current_instruction = 0x880F88A8;
	REX_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x880f889c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F889C;
loc_880F88B4:
	// li r30,2
	ctx.r30.s64 = 2;
	// add r5,r3,r31
	ctx.r5.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r4,r7,r31
	ctx.r4.u64 = ctx.r7.u64 + ctx.r31.u64;
	// subf r3,r10,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r10.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_880F88CC:
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stdx r28,r3,r7
	ctx.current_instruction = 0x880F88D0;
	REX_STORE_U64(ctx.r3.u32 + ctx.r7.u32, ctx.r28.u64);
	// stdx r26,r11,r10
	ctx.current_instruction = 0x880F88D4;
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u64);
	// stdx r25,r5,r11
	ctx.current_instruction = 0x880F88D8;
	REX_STORE_U64(ctx.r5.u32 + ctx.r11.u32, ctx.r25.u64);
	// stdx r24,r4,r11
	ctx.current_instruction = 0x880F88DC;
	REX_STORE_U64(ctx.r4.u32 + ctx.r11.u32, ctx.r24.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x880f88cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F88CC;
	// addic. r16,r16,-1
	ctx.xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// add r20,r20,r19
	ctx.r20.u64 = ctx.r20.u64 + ctx.r19.u64;
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + ctx.r19.u64;
	// add r23,r23,r19
	ctx.r23.u64 = ctx.r23.u64 + ctx.r19.u64;
	// add r27,r27,r19
	ctx.r27.u64 = ctx.r27.u64 + ctx.r19.u64;
	// add r29,r29,r19
	ctx.r29.u64 = ctx.r29.u64 + ctx.r19.u64;
	// bne 0x880f880c
	if (!ctx.cr0.eq) goto loc_880F880C;
loc_880F8904:
	// srawi r28,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r14.s32 >> 2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880f897c
	if (ctx.cr6.eq) goto loc_880F897C;
	// mullw r11,r9,r19
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r19.s32);
	// subf r7,r11,r21
	ctx.r7.u64 = ctx.r21.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x880f897c
	if (!ctx.cr6.gt) goto loc_880F897C;
	// subf r11,r21,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r21.u64;
	// neg r29,r19
	ctx.r29.s64 = static_cast<int64_t>(-ctx.r19.u64);
	// add r5,r11,r22
	ctx.r5.u64 = ctx.r11.u64 + ctx.r22.u64;
	// subf r8,r7,r22
	ctx.r8.u64 = ctx.r22.u64 - ctx.r7.u64;
	// subf r30,r22,r21
	ctx.r30.u64 = ctx.r21.u64 - ctx.r22.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_880F8938:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x880f8968
	if (!ctx.cr6.gt) goto loc_880F8968;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// add r4,r30,r8
	ctx.r4.u64 = ctx.r30.u64 + ctx.r8.u64;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
loc_880F8950:
	// lwzx r27,r4,r11
	ctx.current_instruction = 0x880F8950;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// stw r27,0(r11)
	ctx.current_instruction = 0x880F8954;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwzx r27,r8,r11
	ctx.current_instruction = 0x880F8958;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r27,r3,r11
	ctx.current_instruction = 0x880F895C;
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880f8950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F8950;
loc_880F8968:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r7,r7,r19
	ctx.r7.u64 = ctx.r7.u64 + ctx.r19.u64;
	// add r5,r5,r19
	ctx.r5.u64 = ctx.r5.u64 + ctx.r19.u64;
	// add r8,r29,r8
	ctx.r8.u64 = ctx.r29.u64 + ctx.r8.u64;
	// bne 0x880f8938
	if (!ctx.cr0.eq) goto loc_880F8938;
loc_880F897C:
	// lwz r11,68(r1)
	ctx.current_instruction = 0x880F897C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f8a0c
	if (ctx.cr6.eq) goto loc_880F8A0C;
	// lwz r11,100(r1)
	ctx.current_instruction = 0x880F8988;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// neg r11,r6
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// beq cr6,0x880f89a0
	if (ctx.cr6.eq) goto loc_880F89A0;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x880f89a4
	goto loc_880F89A4;
loc_880F89A0:
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
loc_880F89A4:
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r7,r19,r20
	ctx.r7.u64 = ctx.r20.u64 - ctx.r19.u64;
	// subf r11,r19,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r19.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x880f8a0c
	if (!ctx.cr6.gt) goto loc_880F8A0C;
	// neg r4,r19
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r19.u64);
	// subf r9,r20,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r20.u64;
	// subf r5,r11,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_880F89C8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x880f89f8
	if (!ctx.cr6.gt) goto loc_880F89F8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// add r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 + ctx.r5.u64;
	// subf r7,r20,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r20.u64;
loc_880F89E0:
	// lwzx r3,r8,r11
	ctx.current_instruction = 0x880F89E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r3,0(r11)
	ctx.current_instruction = 0x880F89E4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwzx r3,r9,r11
	ctx.current_instruction = 0x880F89E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r3,r11,r7
	ctx.current_instruction = 0x880F89EC;
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880f89e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F89E0;
loc_880F89F8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r20,r20,r19
	ctx.r20.u64 = ctx.r20.u64 + ctx.r19.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + ctx.r19.u64;
	// bne 0x880f89c8
	if (!ctx.cr0.eq) goto loc_880F89C8;
loc_880F8A0C:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FEF58) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880FEF58);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FEF58;
	ctx.current_instruction = 0x880FEF58;
	// lwz r11,720(r3)
	ctx.current_instruction = 0x880FEF58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x880fef94
	if (ctx.cr6.lt) goto loc_880FEF94;
	// bne cr6,0x880fef80
	if (!ctx.cr6.eq) goto loc_880FEF80;
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// lwz r3,2316(r3)
	ctx.current_instruction = 0x880FEF70;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2316);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x880fefb8
	goto loc_880FEFB8;
loc_880FEF80:
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// lwz r3,2320(r3)
	ctx.current_instruction = 0x880FEF84;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2320);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x880fefb8
	goto loc_880FEFB8;
loc_880FEF94:
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,2312(r3)
	ctx.current_instruction = 0x880FEF98;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2312);
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_880FEFB8:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lhz r10,0(r7)
	ctx.current_instruction = 0x880FEFBC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// sth r10,0(r11)
	ctx.current_instruction = 0x880FEFC4;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lhz r9,0(r7)
	ctx.current_instruction = 0x880FEFC8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// sth r9,16(r11)
	ctx.current_instruction = 0x880FEFCC;
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r9.u16);
	// lhz r8,2(r7)
	ctx.current_instruction = 0x880FEFD0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// sth r8,2(r11)
	ctx.current_instruction = 0x880FEFD4;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lhz r6,16(r7)
	ctx.current_instruction = 0x880FEFD8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + 16);
	// sth r6,18(r11)
	ctx.current_instruction = 0x880FEFDC;
	REX_STORE_U16(ctx.r11.u32 + 18, ctx.r6.u16);
	// lhz r5,4(r7)
	ctx.current_instruction = 0x880FEFE0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// sth r5,4(r11)
	ctx.current_instruction = 0x880FEFE4;
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// lhz r4,32(r7)
	ctx.current_instruction = 0x880FEFE8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + 32);
	// sth r4,20(r11)
	ctx.current_instruction = 0x880FEFEC;
	REX_STORE_U16(ctx.r11.u32 + 20, ctx.r4.u16);
	// lhz r3,6(r7)
	ctx.current_instruction = 0x880FEFF0;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// sth r3,6(r11)
	ctx.current_instruction = 0x880FEFF4;
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// lhz r10,48(r7)
	ctx.current_instruction = 0x880FEFF8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 48);
	// sth r10,22(r11)
	ctx.current_instruction = 0x880FEFFC;
	REX_STORE_U16(ctx.r11.u32 + 22, ctx.r10.u16);
	// lhz r9,8(r7)
	ctx.current_instruction = 0x880FF000;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 8);
	// sth r9,8(r11)
	ctx.current_instruction = 0x880FF004;
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r9.u16);
	// lhz r8,64(r7)
	ctx.current_instruction = 0x880FF008;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 64);
	// sth r8,24(r11)
	ctx.current_instruction = 0x880FF00C;
	REX_STORE_U16(ctx.r11.u32 + 24, ctx.r8.u16);
	// lhz r6,10(r7)
	ctx.current_instruction = 0x880FF010;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + 10);
	// sth r6,10(r11)
	ctx.current_instruction = 0x880FF014;
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r6.u16);
	// lhz r5,80(r7)
	ctx.current_instruction = 0x880FF018;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 80);
	// sth r5,26(r11)
	ctx.current_instruction = 0x880FF01C;
	REX_STORE_U16(ctx.r11.u32 + 26, ctx.r5.u16);
	// lhz r4,12(r7)
	ctx.current_instruction = 0x880FF020;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + 12);
	// sth r4,12(r11)
	ctx.current_instruction = 0x880FF024;
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r4.u16);
	// lhz r3,96(r7)
	ctx.current_instruction = 0x880FF028;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + 96);
	// sth r3,28(r11)
	ctx.current_instruction = 0x880FF02C;
	REX_STORE_U16(ctx.r11.u32 + 28, ctx.r3.u16);
	// lhz r10,14(r7)
	ctx.current_instruction = 0x880FF030;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// sth r10,14(r11)
	ctx.current_instruction = 0x880FF034;
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// lhz r9,112(r7)
	ctx.current_instruction = 0x880FF038;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 112);
	// sth r9,30(r11)
	ctx.current_instruction = 0x880FF03C;
	REX_STORE_U16(ctx.r11.u32 + 30, ctx.r9.u16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88100F30) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88100F30;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88100F30) {
			switch (rex_dispatch_address) {
				case 0x88100F38:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88100F30;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x88100F38: goto loc_88100F38;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x88100F38;
	__savegprlr_22(ctx, base);
loc_88100F38:
	// li r6,31
	ctx.r6.s64 = 31;
	// lis r5,-30720
	ctx.r5.s64 = -2013265920;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r8,83
	ctx.r8.s64 = 83;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lfs f0,6708(r5)
	ctx.current_instruction = 0x88100F54;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// li r9,35
	ctx.r9.s64 = 35;
	// addi r11,r3,24704
	ctx.r11.s64 = ctx.r3.s64 + 24704;
	// li r4,-2
	ctx.r4.s64 = -2;
	// li r30,111
	ctx.r30.s64 = 111;
	// lfs f13,12188(r6)
	ctx.current_instruction = 0x88100F68;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12188);
	ctx.f13.f64 = double(temp.f32);
	// li r31,47
	ctx.r31.s64 = 47;
	// li r26,8
	ctx.r26.s64 = 8;
	// li r27,4
	ctx.r27.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,56
	ctx.r28.s64 = 56;
loc_88100F80:
	// srawi r6,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 1;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bgt cr6,0x88100fb4
	if (ctx.cr6.gt) goto loc_88100FB4;
	// lwz r5,1572(r3)
	ctx.current_instruction = 0x88100F8C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1572);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x88100fac
	if (ctx.cr6.eq) goto loc_88100FAC;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bgt cr6,0x88100fac
	if (ctx.cr6.gt) goto loc_88100FAC;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,0(r11)
	ctx.current_instruction = 0x88100FA4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// b 0x88100fc4
	goto loc_88100FC4;
loc_88100FAC:
	// stw r26,0(r11)
	ctx.current_instruction = 0x88100FAC;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// b 0x88100fc4
	goto loc_88100FC4;
loc_88100FB4:
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// addi r5,r6,6
	ctx.r5.s64 = ctx.r6.s64 + 6;
	// stw r5,0(r11)
	ctx.current_instruction = 0x88100FC0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
loc_88100FC4:
	// lwz r6,0(r11)
	ctx.current_instruction = 0x88100FC4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r25,r10,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r10,-40(r11)
	ctx.current_instruction = 0x88100FD0;
	REX_STORE_U32(ctx.r11.u32 + -40, ctx.r10.u32);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// stw r31,-8(r11)
	ctx.current_instruction = 0x88100FD8;
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r31.u32);
	// extsw r24,r25
	ctx.r24.s64 = ctx.r25.s32;
	// stw r30,-4(r11)
	ctx.current_instruction = 0x88100FE0;
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// std r6,-128(r1)
	ctx.current_instruction = 0x88100FE4;
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r6.u64);
	// lfd f12,-128(r1)
	ctx.current_instruction = 0x88100FE8;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// std r24,-120(r1)
	ctx.current_instruction = 0x88100FEC;
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r24.u64);
	// lfd f11,-120(r1)
	ctx.current_instruction = 0x88100FF0;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r24,r9,-12
	ctx.r24.s64 = ctx.r9.s64 + -12;
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// addi r23,r8,-28
	ctx.r23.s64 = ctx.r8.s64 + -28;
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// addi r22,r7,-4
	ctx.r22.s64 = ctx.r7.s64 + -4;
	// srawi r6,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 1;
	// stw r29,-36(r11)
	ctx.current_instruction = 0x88101010;
	REX_STORE_U32(ctx.r11.u32 + -36, ctx.r29.u32);
	// stw r24,-16(r11)
	ctx.current_instruction = 0x88101014;
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r24.u32);
	// stw r23,-12(r11)
	ctx.current_instruction = 0x88101018;
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r23.u32);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// stw r25,-24(r11)
	ctx.current_instruction = 0x88101020;
	REX_STORE_U32(ctx.r11.u32 + -24, ctx.r25.u32);
	// stw r22,-20(r11)
	ctx.current_instruction = 0x88101024;
	REX_STORE_U32(ctx.r11.u32 + -20, ctx.r22.u32);
	// stw r10,-32(r11)
	ctx.current_instruction = 0x88101028;
	REX_STORE_U32(ctx.r11.u32 + -32, ctx.r10.u32);
	// stw r4,-28(r11)
	ctx.current_instruction = 0x8810102C;
	REX_STORE_U32(ctx.r11.u32 + -28, ctx.r4.u32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fdivs f6,f13,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// fdivs f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// stfs f5,8(r11)
	ctx.current_instruction = 0x8810103C;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f4,r11,r27
	ctx.current_instruction = 0x88101044;
	REX_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.f4.u32);
	// bgt cr6,0x88101070
	if (ctx.cr6.gt) goto loc_88101070;
	// lwz r25,1572(r3)
	ctx.current_instruction = 0x8810104C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 1572);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x88101068
	if (ctx.cr6.eq) goto loc_88101068;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bgt cr6,0x88101068
	if (ctx.cr6.gt) goto loc_88101068;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8810107c
	goto loc_8810107C;
loc_88101068:
	// stw r26,52(r11)
	ctx.current_instruction = 0x88101068;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r26.u32);
	// b 0x88101080
	goto loc_88101080;
loc_88101070:
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// addi r6,r6,6
	ctx.r6.s64 = ctx.r6.s64 + 6;
loc_8810107C:
	// stw r6,52(r11)
	ctx.current_instruction = 0x8810107C;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
loc_88101080:
	// lwz r6,52(r11)
	ctx.current_instruction = 0x88101080;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r4,r4,-2
	ctx.r4.s64 = ctx.r4.s64 + -2;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// std r6,-112(r1)
	ctx.current_instruction = 0x88101094;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r6.u64);
	// lfd f12,-112(r1)
	ctx.current_instruction = 0x88101098;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// stfs f9,60(r11)
	ctx.current_instruction = 0x881010AC;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stw r5,12(r11)
	ctx.current_instruction = 0x881010B0;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r29,16(r11)
	ctx.current_instruction = 0x881010B4;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// stw r9,36(r11)
	ctx.current_instruction = 0x881010B8;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// stw r8,40(r11)
	ctx.current_instruction = 0x881010C0;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// addi r8,r8,56
	ctx.r8.s64 = ctx.r8.s64 + 56;
	// lwz r5,36(r11)
	ctx.current_instruction = 0x881010C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r6,44(r11)
	ctx.current_instruction = 0x881010D4;
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// lwz r5,40(r11)
	ctx.current_instruction = 0x881010D8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r6,48(r11)
	ctx.current_instruction = 0x881010E4;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.current_instruction = 0x881010E8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r6,r5,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// stw r6,28(r11)
	ctx.current_instruction = 0x881010F4;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// std r5,-104(r1)
	ctx.current_instruction = 0x881010F8;
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r5.u64);
	// lfd f8,-104(r1)
	ctx.current_instruction = 0x881010FC;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fdivs f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 / ctx.f6.f64));
	// fctiwz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,r11,r28
	ctx.current_instruction = 0x88101110;
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.f4.u32);
	// stw r7,32(r11)
	ctx.current_instruction = 0x88101114;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// lwz r6,12(r11)
	ctx.current_instruction = 0x8810111C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// neg r5,r6
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// stw r6,20(r11)
	ctx.current_instruction = 0x88101124;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r5,24(r11)
	ctx.current_instruction = 0x88101128;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// bdnz 0x88100f80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88100F80;
	// li r9,31
	ctx.r9.s64 = 31;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r5,107
	ctx.r5.s64 = 107;
	// li r6,59
	ctx.r6.s64 = 59;
	// addi r11,r3,21376
	ctx.r11.s64 = ctx.r3.s64 + 21376;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r30,143
	ctx.r30.s64 = 143;
	// li r31,79
	ctx.r31.s64 = 79;
loc_88101158:
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bgt cr6,0x8810118c
	if (ctx.cr6.gt) goto loc_8810118C;
	// lwz r8,1572(r3)
	ctx.current_instruction = 0x88101164;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1572);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88101184
	if (ctx.cr6.eq) goto loc_88101184;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bgt cr6,0x88101184
	if (ctx.cr6.gt) goto loc_88101184;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,0(r11)
	ctx.current_instruction = 0x8810117C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x8810119c
	goto loc_8810119C;
loc_88101184:
	// stw r26,0(r11)
	ctx.current_instruction = 0x88101184;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// b 0x8810119c
	goto loc_8810119C;
loc_8810118C:
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// addi r7,r8,6
	ctx.r7.s64 = ctx.r8.s64 + 6;
	// stw r7,0(r11)
	ctx.current_instruction = 0x88101198;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_8810119C:
	// lwz r8,0(r11)
	ctx.current_instruction = 0x8810119C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r29,r10,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,-36(r11)
	ctx.current_instruction = 0x881011A8;
	REX_STORE_U32(ctx.r11.u32 + -36, ctx.r9.u32);
	// extsw r25,r8
	ctx.r25.s64 = ctx.r8.s32;
	// stw r10,-40(r11)
	ctx.current_instruction = 0x881011B0;
	REX_STORE_U32(ctx.r11.u32 + -40, ctx.r10.u32);
	// extsw r9,r29
	ctx.r9.s64 = ctx.r29.s32;
	// stw r7,-32(r11)
	ctx.current_instruction = 0x881011B8;
	REX_STORE_U32(ctx.r11.u32 + -32, ctx.r7.u32);
	// std r25,-104(r1)
	ctx.current_instruction = 0x881011BC;
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r25.u64);
	// lfd f12,-104(r1)
	ctx.current_instruction = 0x881011C0;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// std r9,-112(r1)
	ctx.current_instruction = 0x881011C4;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r9.u64);
	// lfd f10,-112(r1)
	ctx.current_instruction = 0x881011C8;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// srawi r9,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 1;
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// addi r25,r6,-20
	ctx.r25.s64 = ctx.r6.s64 + -20;
	// addi r24,r5,-36
	ctx.r24.s64 = ctx.r5.s64 + -36;
	// stw r31,-8(r11)
	ctx.current_instruction = 0x881011E8;
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r31.u32);
	// addi r23,r4,-4
	ctx.r23.s64 = ctx.r4.s64 + -4;
	// stw r30,-4(r11)
	ctx.current_instruction = 0x881011F0;
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// stw r25,-16(r11)
	ctx.current_instruction = 0x881011F8;
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r25.u32);
	// stw r24,-12(r11)
	ctx.current_instruction = 0x881011FC;
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r24.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// stw r29,-24(r11)
	ctx.current_instruction = 0x88101204;
	REX_STORE_U32(ctx.r11.u32 + -24, ctx.r29.u32);
	// stw r23,-20(r11)
	ctx.current_instruction = 0x88101208;
	REX_STORE_U32(ctx.r11.u32 + -20, ctx.r23.u32);
	// stw r7,-28(r11)
	ctx.current_instruction = 0x8810120C;
	REX_STORE_U32(ctx.r11.u32 + -28, ctx.r7.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 / ctx.f6.f64));
	// fdivs f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// stfs f7,8(r11)
	ctx.current_instruction = 0x8810121C;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fctiwz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,r11,r27
	ctx.current_instruction = 0x88101224;
	REX_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.f4.u32);
	// bgt cr6,0x88101250
	if (ctx.cr6.gt) goto loc_88101250;
	// lwz r7,1572(r3)
	ctx.current_instruction = 0x8810122C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1572);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88101248
	if (ctx.cr6.eq) goto loc_88101248;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bgt cr6,0x88101248
	if (ctx.cr6.gt) goto loc_88101248;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8810125c
	goto loc_8810125C;
loc_88101248:
	// stw r26,52(r11)
	ctx.current_instruction = 0x88101248;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r26.u32);
	// b 0x88101260
	goto loc_88101260;
loc_88101250:
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
loc_8810125C:
	// stw r7,52(r11)
	ctx.current_instruction = 0x8810125C;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
loc_88101260:
	// lwz r7,52(r11)
	ctx.current_instruction = 0x88101260;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// std r7,-120(r1)
	ctx.current_instruction = 0x88101274;
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r7.u64);
	// lfd f12,-120(r1)
	ctx.current_instruction = 0x88101278;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// addi r30,r30,144
	ctx.r30.s64 = ctx.r30.s64 + 144;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// stfs f9,60(r11)
	ctx.current_instruction = 0x8810128C;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stw r8,12(r11)
	ctx.current_instruction = 0x88101290;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r9,16(r11)
	ctx.current_instruction = 0x88101294;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r29,20(r11)
	ctx.current_instruction = 0x88101298;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// stw r6,36(r11)
	ctx.current_instruction = 0x8810129C;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// addi r6,r6,40
	ctx.r6.s64 = ctx.r6.s64 + 40;
	// stw r5,40(r11)
	ctx.current_instruction = 0x881012A4;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// addi r5,r5,72
	ctx.r5.s64 = ctx.r5.s64 + 72;
	// lwz r9,36(r11)
	ctx.current_instruction = 0x881012AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,44(r11)
	ctx.current_instruction = 0x881012B8;
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// lwz r7,40(r11)
	ctx.current_instruction = 0x881012BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,48(r11)
	ctx.current_instruction = 0x881012C8;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// lwz r8,12(r11)
	ctx.current_instruction = 0x881012CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// extsw r9,r7
	ctx.r9.s64 = ctx.r7.s32;
	// stw r7,28(r11)
	ctx.current_instruction = 0x881012D8;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// std r9,-128(r1)
	ctx.current_instruction = 0x881012DC;
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r9.u64);
	// lfd f8,-128(r1)
	ctx.current_instruction = 0x881012E0;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fdivs f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 / ctx.f6.f64));
	// fctiwz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,r11,r28
	ctx.current_instruction = 0x881012F4;
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.f4.u32);
	// stw r4,32(r11)
	ctx.current_instruction = 0x881012F8;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// lwz r8,20(r11)
	ctx.current_instruction = 0x88101300;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// stw r7,24(r11)
	ctx.current_instruction = 0x88101308;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// bdnz 0x88101158
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88101158;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810C1F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8810C1F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8810C1F0) {
			switch (rex_dispatch_address) {
				case 0x8810C1F8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810C1F0;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x8810C1F8: goto loc_8810C1F8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8810C1F8;
	__savegprlr_27(ctx, base);
loc_8810C1F8:
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// li r27,255
	ctx.r27.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8810C210:
	// lhz r9,-4(r10)
	ctx.current_instruction = 0x8810C210;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + -4);
	// lbz r8,-2(r11)
	ctx.current_instruction = 0x8810C214;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r4,-2(r10)
	ctx.current_instruction = 0x8810C21C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r3,0(r10)
	ctx.current_instruction = 0x8810C220;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r31,2(r10)
	ctx.current_instruction = 0x8810C224;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r5,-1(r11)
	ctx.current_instruction = 0x8810C22C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lbz r4,0(r11)
	ctx.current_instruction = 0x8810C234;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lbz r30,1(r11)
	ctx.current_instruction = 0x8810C23C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// add r29,r5,r8
	ctx.r29.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r30,r31
	ctx.r8.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x8810c264
	if (!ctx.cr6.gt) goto loc_8810C264;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 & ctx.r27.u64;
loc_8810C264:
	// cmplwi cr6,r29,255
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 255, ctx.xer);
	// ble cr6,0x8810c278
	if (!ctx.cr6.gt) goto loc_8810C278;
	// rlwinm r4,r29,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// and r29,r4,r27
	ctx.r29.u64 = ctx.r4.u64 & ctx.r27.u64;
loc_8810C278:
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// ble cr6,0x8810c28c
	if (!ctx.cr6.gt) goto loc_8810C28C;
	// rlwinm r5,r5,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 & ctx.r27.u64;
loc_8810C28C:
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x8810c2a0
	if (!ctx.cr6.gt) goto loc_8810C2A0;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 & ctx.r27.u64;
loc_8810C2A0:
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r3,r8,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// or r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 | ctx.r9.u64;
	// or r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 | ctx.r29.u64;
	// or r31,r3,r4
	ctx.r31.u64 = ctx.r3.u64 | ctx.r4.u64;
	// rlwinm r31,r31,0,0,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r31,r31,0,16,7
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8810c2d0
	if (!ctx.cr6.eq) goto loc_8810C2D0;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 | ctx.r4.u64;
	// b 0x8810c2f8
	goto loc_8810C2F8;
loc_8810C2D0:
	// lbzx r9,r9,r7
	ctx.current_instruction = 0x8810C2D0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// lbzx r4,r29,r7
	ctx.current_instruction = 0x8810C2D4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// rotlwi r3,r9,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbzx r9,r5,r7
	ctx.current_instruction = 0x8810C2DC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// lbzx r8,r8,r7
	ctx.current_instruction = 0x8810C2E0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// or r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 | ctx.r4.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 | ctx.r9.u64;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
loc_8810C2F8:
	// stw r8,0(r28)
	ctx.current_instruction = 0x8810C2F8;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// lhz r5,6(r10)
	ctx.current_instruction = 0x8810C2FC;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lbz r9,2(r11)
	ctx.current_instruction = 0x8810C300;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lhz r3,8(r10)
	ctx.current_instruction = 0x8810C304;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r29,10(r10)
	ctx.current_instruction = 0x8810C308;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// lbz r31,3(r11)
	ctx.current_instruction = 0x8810C30C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r4,4(r11)
	ctx.current_instruction = 0x8810C310;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lhz r8,4(r10)
	ctx.current_instruction = 0x8810C314;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r8,5(r11)
	ctx.current_instruction = 0x8810C324;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r5,r29
	ctx.r5.s64 = ctx.r29.s16;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x8810c350
	if (!ctx.cr6.gt) goto loc_8810C350;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 & ctx.r27.u64;
loc_8810C350:
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// ble cr6,0x8810c364
	if (!ctx.cr6.gt) goto loc_8810C364;
	// rlwinm r5,r31,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r31,r5,r27
	ctx.r31.u64 = ctx.r5.u64 & ctx.r27.u64;
loc_8810C364:
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// ble cr6,0x8810c378
	if (!ctx.cr6.gt) goto loc_8810C378;
	// rlwinm r5,r4,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r4,r5,r27
	ctx.r4.u64 = ctx.r5.u64 & ctx.r27.u64;
loc_8810C378:
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x8810c38c
	if (!ctx.cr6.gt) goto loc_8810C38C;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 & ctx.r27.u64;
loc_8810C38C:
	// rlwinm r5,r4,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r3,r8,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// or r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 | ctx.r9.u64;
	// or r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 | ctx.r31.u64;
	// or r30,r3,r5
	ctx.r30.u64 = ctx.r3.u64 | ctx.r5.u64;
	// rlwinm r30,r30,0,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r30,r30,0,16,7
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8810c3bc
	if (!ctx.cr6.eq) goto loc_8810C3BC;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 | ctx.r5.u64;
	// b 0x8810c3e4
	goto loc_8810C3E4;
loc_8810C3BC:
	// lbzx r9,r9,r7
	ctx.current_instruction = 0x8810C3BC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// lbzx r5,r31,r7
	ctx.current_instruction = 0x8810C3C0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// rotlwi r3,r9,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbzx r9,r4,r7
	ctx.current_instruction = 0x8810C3C8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// lbzx r8,r8,r7
	ctx.current_instruction = 0x8810C3CC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// or r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 | ctx.r5.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 | ctx.r9.u64;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
loc_8810C3E4:
	// stw r8,4(r28)
	ctx.current_instruction = 0x8810C3E4;
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r28,r28,r6
	ctx.r28.u64 = ctx.r28.u64 + ctx.r6.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x8810c210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810C210;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810F240) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8810F240;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8810F240) {
			switch (rex_dispatch_address) {
				case 0x8810F248:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810F240;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x8810F248: goto loc_8810F248;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8810F248;
	__savegprlr_29(ctx, base);
loc_8810F248:
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// lwz r11,16(r6)
	ctx.current_instruction = 0x8810F24C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r3,0(r6)
	ctx.current_instruction = 0x8810F250;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// xor r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// lwz r31,4(r6)
	ctx.current_instruction = 0x8810F25C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// lwz r30,8(r6)
	ctx.current_instruction = 0x8810F264;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// subf r9,r9,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r9.u64;
	// lwz r11,12(r6)
	ctx.current_instruction = 0x8810F26C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r5,24(r6)
	ctx.current_instruction = 0x8810F270;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r29,28(r6)
	ctx.current_instruction = 0x8810F274;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r6.u32 + 28);
	// bgt cr6,0x8810f2b0
	if (ctx.cr6.gt) goto loc_8810F2B0;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r3
	ctx.current_instruction = 0x8810F280;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8810f2e8
	if (!ctx.cr6.gt) goto loc_8810F2E8;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// bgt cr6,0x8810f314
	if (ctx.cr6.gt) goto loc_8810F314;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// lwz r10,4(r10)
	ctx.current_instruction = 0x8810F2A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x8810f2e8
	goto loc_8810F2E8;
loc_8810F2B0:
	// lwz r10,20(r6)
	ctx.current_instruction = 0x8810F2B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8810f310
	if (ctx.cr6.gt) goto loc_8810F310;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.current_instruction = 0x8810F2C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x8810f310
	if (ctx.cr6.gt) goto loc_8810F310;
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// lwz r10,4(r8)
	ctx.current_instruction = 0x8810F2E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_8810F2E8:
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r30
	ctx.current_instruction = 0x8810F2EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 + ctx.r29.u64;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,4(r6)
	ctx.current_instruction = 0x8810F300;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_8810F310:
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
loc_8810F314:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r7)
	ctx.current_instruction = 0x8810F318;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x8810F320;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bge cr6,0x8810f330
	if (!ctx.cr6.lt) goto loc_8810F330;
	// stw r4,0(r7)
	ctx.current_instruction = 0x8810F32C;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
loc_8810F330:
	// lwz r10,0(r8)
	ctx.current_instruction = 0x8810F330;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8810f340
	if (!ctx.cr6.lt) goto loc_8810F340;
	// stw r9,0(r8)
	ctx.current_instruction = 0x8810F33C;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
loc_8810F340:
	// addi r3,r11,15
	ctx.r3.s64 = ctx.r11.s64 + 15;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88111E28) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88111E28;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88111E28) {
			switch (rex_dispatch_address) {
				case 0x88111E30:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88111E28;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88111E30: goto loc_88111E30;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x88111E30;
	__savegprlr_22(ctx, base);
loc_88111E30:
	// lwz r11,116(r3)
	ctx.current_instruction = 0x88111E30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// lwz r7,96(r3)
	ctx.current_instruction = 0x88111E38;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,120(r3)
	ctx.current_instruction = 0x88111E3C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,132(r3)
	ctx.current_instruction = 0x88111E44;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r31,4(r11)
	ctx.current_instruction = 0x88111E4C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r3,r10,r4
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// srawi r9,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 1;
	// rlwinm r10,r31,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0xFFFFFF80;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// divw r30,r10,r7
	ctx.r30.u64 = uint32_t((ctx.r7.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r10.s32 / ctx.r7.s32 : 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r29,r9,r7
	ctx.r29.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// rotlwi r10,r29,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// rlwinm r27,r31,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r30,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r28,r7,r28
	ctx.r28.u64 = ctx.r7.u64 & ~ctx.r28.u64;
	// mullw r11,r27,r4
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r4.s32);
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// addi r25,r9,-1
	ctx.r25.s64 = ctx.r9.s64 + -1;
	// andc r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 & ~ctx.r10.u64;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// twlgei r28,-1
	if (ctx.r28.s32 == -1 || ctx.r28.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addze r26,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r26.s64 = temp.s64;
	// divw r28,r29,r31
	ctx.r28.u64 = uint32_t((ctx.r31.s32 && !(ctx.r29.s32 == INT32_MIN && ctx.r31.s32 == -1)) ? ctx.r29.s32 / ctx.r31.s32 : 0);
	// twllei r31,0
	if (ctx.r31.s32 == 0 || ctx.r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// and r7,r25,r30
	ctx.r7.u64 = ctx.r25.u64 & ctx.r30.u64;
	// add r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 + ctx.r6.u64;
	// bge cr6,0x88112000
	if (!ctx.cr6.lt) goto loc_88112000;
	// subf r25,r4,r5
	ctx.r25.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_88111EC4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x88111f98
	if (!ctx.cr6.gt) goto loc_88111F98;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// addi r5,r9,3
	ctx.r5.s64 = ctx.r9.s64 + 3;
	// addi r31,r9,4
	ctx.r31.s64 = ctx.r9.s64 + 4;
	// addi r30,r9,2
	ctx.r30.s64 = ctx.r9.s64 + 2;
	// addi r29,r9,6
	ctx.r29.s64 = ctx.r9.s64 + 6;
loc_88111EE8:
	// srawi r8,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 6;
	// clrlwi r3,r10,25
	ctx.r3.u64 = ctx.r10.u32 & 0x7F;
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// subfic r4,r3,128
	ctx.xer.ca = ctx.r3.u32 <= 128;
	ctx.r4.u64 = static_cast<uint64_t>(128) - ctx.r3.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// clrlwi r24,r10,25
	ctx.r24.u64 = ctx.r10.u32 & 0x7F;
	// lbzx r23,r6,r8
	ctx.current_instruction = 0x88111F00;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// clrlwi r22,r10,24
	ctx.r22.u64 = ctx.r10.u32 & 0xFF;
	// lbzx r8,r5,r8
	ctx.current_instruction = 0x88111F08;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// mullw r4,r23,r4
	ctx.r4.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r4.s32);
	// mullw r8,r8,r3
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r4,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 7;
	// srawi r8,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 6;
	// stb r4,3(r11)
	ctx.current_instruction = 0x88111F20;
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r4.u8);
	// subfic r4,r24,128
	ctx.xer.ca = ctx.r24.u32 <= 128;
	ctx.r4.u64 = static_cast<uint64_t>(128) - ctx.r24.u64;
	// rlwinm r3,r8,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r23,r8,0,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbzx r8,r5,r3
	ctx.current_instruction = 0x88111F34;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// mullw r8,r8,r24
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r24.s32);
	// lbzx r3,r6,r3
	ctx.current_instruction = 0x88111F3C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// mullw r4,r3,r4
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r4,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 7;
	// subfic r8,r22,256
	ctx.xer.ca = ctx.r22.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r22.u64;
	// stb r4,5(r11)
	ctx.current_instruction = 0x88111F50;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r4.u8);
	// lbzx r3,r31,r23
	ctx.current_instruction = 0x88111F54;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r23.u32);
	// lbzx r4,r23,r9
	ctx.current_instruction = 0x88111F58;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r9.u32);
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// mullw r3,r3,r22
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r22.s32);
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// srawi r3,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 8;
	// stb r3,2(r11)
	ctx.current_instruction = 0x88111F6C;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// lbzx r4,r29,r23
	ctx.current_instruction = 0x88111F70;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r23.u32);
	// lbzx r3,r30,r23
	ctx.current_instruction = 0x88111F74;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r23.u32);
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mullw r4,r4,r22
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r22.s32);
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r8,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 8;
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// stb r4,4(r11)
	ctx.current_instruction = 0x88111F8C;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88111ee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88111EE8;
loc_88111F98:
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x88111ff4
	if (!ctx.cr6.lt) goto loc_88111FF4;
	// subf r8,r28,r26
	ctx.r8.u64 = ctx.r26.u64 - ctx.r28.u64;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88111FAC:
	// srawi r8,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 6;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r6,r8,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// srawi r8,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 6;
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r6,r8,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r3,r8,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r6,1(r4)
	ctx.current_instruction = 0x88111FD0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// stb r6,3(r11)
	ctx.current_instruction = 0x88111FD4;
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
	// lbz r4,1(r8)
	ctx.current_instruction = 0x88111FD8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// stb r4,5(r11)
	ctx.current_instruction = 0x88111FDC;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r4.u8);
	// lbzx r8,r3,r9
	ctx.current_instruction = 0x88111FE0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// stb r8,2(r11)
	ctx.current_instruction = 0x88111FE4;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbzx r6,r5,r3
	ctx.current_instruction = 0x88111FE8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// stbu r6,4(r11)
	ctx.current_instruction = 0x88111FEC;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x88111fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88111FAC;
loc_88111FF4:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// bne 0x88111ec4
	if (!ctx.cr0.eq) goto loc_88111EC4;
loc_88112000:
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881199B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881199B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881199B8) {
			switch (rex_dispatch_address) {
				case 0x881199C0:
				case 0x88119A04:
				case 0x88119A54:
				case 0x88119A74:
				case 0x88119A94:
				case 0x88119AB4:
				case 0x88119AD4:
				case 0x88119AF4:
				case 0x88119B14:
				case 0x88119B34:
				case 0x88119B54:
				case 0x88119B74:
				case 0x88119B94:
				case 0x88119BC0:
				case 0x88119C00:
				case 0x88119C80:
				case 0x88119CA8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881199B8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881199C0: goto loc_881199C0;
		case 0x88119A04: goto loc_88119A04;
		case 0x88119A54: goto loc_88119A54;
		case 0x88119A74: goto loc_88119A74;
		case 0x88119A94: goto loc_88119A94;
		case 0x88119AB4: goto loc_88119AB4;
		case 0x88119AD4: goto loc_88119AD4;
		case 0x88119AF4: goto loc_88119AF4;
		case 0x88119B14: goto loc_88119B14;
		case 0x88119B34: goto loc_88119B34;
		case 0x88119B54: goto loc_88119B54;
		case 0x88119B74: goto loc_88119B74;
		case 0x88119B94: goto loc_88119B94;
		case 0x88119BC0: goto loc_88119BC0;
		case 0x88119C00: goto loc_88119C00;
		case 0x88119C80: goto loc_88119C80;
		case 0x88119CA8: goto loc_88119CA8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881199C0;
	__savegprlr_26(ctx, base);
loc_881199C0:
	// stfd f31,-64(r1)
	ctx.current_instruction = 0x881199C0;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x881199C4;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,28(r3)
	ctx.current_instruction = 0x881199CC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r10,88(r1)
	ctx.current_instruction = 0x881199D4;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	ctx.current_instruction = 0x881199DC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r9,80
	ctx.r9.s64 = 80;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r8,0(r31)
	ctx.current_instruction = 0x881199E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,12(r8)
	ctx.current_instruction = 0x881199F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// addi r26,r11,-24
	ctx.r26.s64 = ctx.r11.s64 + -24;
	// stw r9,84(r1)
	ctx.current_instruction = 0x881199F8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x88119A04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88119A04:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88119A0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,42(r11)
	ctx.current_instruction = 0x88119A10;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 42);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88119a34
	if (!ctx.cr6.gt) goto loc_88119A34;
loc_88119A20:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.current_instruction = 0x88119A2C;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88119A34:
	// cmplwi cr6,r26,80
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 80, ctx.xer);
	// blt cr6,0x88119a20
	if (ctx.cr6.lt) goto loc_88119A20;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881196f8
	ctx.lr = 0x88119A54;
	sub_881196F8(ctx, base);
loc_88119A54:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119528
	ctx.lr = 0x88119A74;
	sub_88119528(ctx, base);
loc_88119A74:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119528
	ctx.lr = 0x88119A94;
	sub_88119528(ctx, base);
loc_88119A94:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119528
	ctx.lr = 0x88119AB4;
	sub_88119528(ctx, base);
loc_88119AB4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119528
	ctx.lr = 0x88119AD4;
	sub_88119528(ctx, base);
loc_88119AD4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119528
	ctx.lr = 0x88119AF4;
	sub_88119528(ctx, base);
loc_88119AF4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119528
	ctx.lr = 0x88119B14;
	sub_88119528(ctx, base);
loc_88119B14:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119390
	ctx.lr = 0x88119B34;
	sub_88119390(ctx, base);
loc_88119B34:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119390
	ctx.lr = 0x88119B54;
	sub_88119390(ctx, base);
loc_88119B54:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119390
	ctx.lr = 0x88119B74;
	sub_88119390(ctx, base);
loc_88119B74:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119390
	ctx.lr = 0x88119B94;
	sub_88119390(ctx, base);
loc_88119B94:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88119B9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,92(r1)
	ctx.current_instruction = 0x88119BA0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ld r10,104(r1)
	ctx.current_instruction = 0x88119BA4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// ld r30,112(r1)
	ctx.current_instruction = 0x88119BA8;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// rldicl r3,r30,32,32
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// stw r29,8(r11)
	ctx.current_instruction = 0x88119BB0;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r8,4(r31)
	ctx.current_instruction = 0x88119BB4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,12(r8)
	ctx.current_instruction = 0x88119BB8;
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// bl 0x881ee930
	ctx.lr = 0x88119BC0;
	sub_881EE930(ctx, base);
loc_88119BC0:
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// rotlwi r5,r30,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwz r6,4(r31)
	ctx.current_instruction = 0x88119BCC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r27,10000
	ctx.r27.s64 = 10000;
	// ld r28,120(r1)
	ctx.current_instruction = 0x88119BD4;
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// divwu r11,r5,r27
	ctx.r11.u64 = uint32_t(ctx.r27.u32 ? ctx.r5.u32 / ctx.r27.u32 : 0);
	// lfs f31,23756(r7)
	ctx.current_instruction = 0x88119BDC;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 23756);
	ctx.f31.f64 = double(temp.f32);
	// rldicl r3,r28,32,32
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctidz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,120(r1)
	ctx.current_instruction = 0x88119BEC;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f12.u64);
	// lwz r10,124(r1)
	ctx.current_instruction = 0x88119BF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,16(r6)
	ctx.current_instruction = 0x88119BF8;
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r4.u32);
	// bl 0x881ee930
	ctx.lr = 0x88119C00;
	sub_881EE930(ctx, base);
loc_88119C00:
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// rotlwi r3,r28,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// lwz r9,4(r31)
	ctx.current_instruction = 0x88119C08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// divwu r11,r3,r27
	ctx.r11.u64 = uint32_t(ctx.r27.u32 ? ctx.r3.u32 / ctx.r27.u32 : 0);
	// ld r3,128(r1)
	ctx.current_instruction = 0x88119C14;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r7,96(r1)
	ctx.current_instruction = 0x88119C18;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,100(r1)
	ctx.current_instruction = 0x88119C20;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// ori r5,r5,64
	ctx.r5.u64 = ctx.r5.u64 | 64;
	// li r4,6
	ctx.r4.s64 = 6;
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fctidz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,128(r1)
	ctx.current_instruction = 0x88119C34;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f9.u64);
	// lwz r10,132(r1)
	ctx.current_instruction = 0x88119C38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,24(r9)
	ctx.current_instruction = 0x88119C40;
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.current_instruction = 0x88119C44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,20(r10)
	ctx.current_instruction = 0x88119C48;
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r3.u32);
	// lwz r9,4(r31)
	ctx.current_instruction = 0x88119C4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,28(r9)
	ctx.current_instruction = 0x88119C50;
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r7.u32);
	// lwz r7,4(r31)
	ctx.current_instruction = 0x88119C54;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,32(r7)
	ctx.current_instruction = 0x88119C58;
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88119C5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,42(r11)
	ctx.current_instruction = 0x88119C60;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 42);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,42(r11)
	ctx.current_instruction = 0x88119C68;
	REX_STORE_U16(ctx.r11.u32 + 42, ctx.r10.u16);
	// lwz r3,224(r31)
	ctx.current_instruction = 0x88119C6C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x88119C70;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r8,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r8.u64;
	// addi r30,r11,-80
	ctx.r30.s64 = ctx.r11.s64 + -80;
	// bl 0x880cafe0
	ctx.lr = 0x88119C80;
	sub_880CAFE0(ctx, base);
loc_88119C80:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88119cc0
	if (ctx.cr6.eq) goto loc_88119CC0;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88119C90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88119C9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88119CA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88119CA8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// ld r10,8(r31)
	ctx.current_instruction = 0x88119CB0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r31)
	ctx.current_instruction = 0x88119CBC;
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
loc_88119CC0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.current_instruction = 0x88119CC4;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88122008) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88122008;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88122008) {
			switch (rex_dispatch_address) {
				case 0x88122010:
				case 0x88122040:
				case 0x8812205C:
				case 0x88122118:
				case 0x88122168:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88122008;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88122010: goto loc_88122010;
		case 0x88122040: goto loc_88122040;
		case 0x8812205C: goto loc_8812205C;
		case 0x88122118: goto loc_88122118;
		case 0x88122168: goto loc_88122168;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88122010;
	__savegprlr_26(ctx, base);
loc_88122010:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88122010;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r29,80(r1)
	ctx.current_instruction = 0x8812201C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x880cb2c0
	ctx.lr = 0x88122040;
	sub_880CB2C0(ctx, base);
loc_88122040:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812214c
	if (ctx.cr6.lt) goto loc_8812214C;
	// li r5,152
	ctx.r5.s64 = 152;
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88122050;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8812205C;
	sub_88052D90(ctx, base);
loc_8812205C:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8812205C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r10)
	ctx.current_instruction = 0x88122070;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x88122074;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,76(r9)
	ctx.current_instruction = 0x88122078;
	REX_STORE_U32(ctx.r9.u32 + 76, ctx.r27.u32);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x8812207C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,72(r8)
	ctx.current_instruction = 0x88122080;
	REX_STORE_U32(ctx.r8.u32 + 72, ctx.r28.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x88122084;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,0(r31)
	ctx.current_instruction = 0x88122088;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r6,104(r7)
	ctx.current_instruction = 0x8812208C;
	REX_STORE_U32(ctx.r7.u32 + 104, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88122090;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.current_instruction = 0x88122094;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,108(r11)
	ctx.current_instruction = 0x88122098;
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8812209C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r31)
	ctx.current_instruction = 0x881220A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,112(r9)
	ctx.current_instruction = 0x881220A4;
	REX_STORE_U32(ctx.r9.u32 + 112, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x881220A8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,16(r31)
	ctx.current_instruction = 0x881220AC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r6,116(r7)
	ctx.current_instruction = 0x881220B0;
	REX_STORE_U32(ctx.r7.u32 + 116, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881220B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,20(r31)
	ctx.current_instruction = 0x881220B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,120(r11)
	ctx.current_instruction = 0x881220BC;
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x881220C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,24(r31)
	ctx.current_instruction = 0x881220C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r8,124(r9)
	ctx.current_instruction = 0x881220C8;
	REX_STORE_U32(ctx.r9.u32 + 124, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x881220CC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,28(r31)
	ctx.current_instruction = 0x881220D0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stw r6,128(r7)
	ctx.current_instruction = 0x881220D4;
	REX_STORE_U32(ctx.r7.u32 + 128, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881220D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,32(r31)
	ctx.current_instruction = 0x881220DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,132(r11)
	ctx.current_instruction = 0x881220E0;
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x881220E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,36(r31)
	ctx.current_instruction = 0x881220E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r8,136(r9)
	ctx.current_instruction = 0x881220EC;
	REX_STORE_U32(ctx.r9.u32 + 136, ctx.r8.u32);
	// lwz r6,40(r31)
	ctx.current_instruction = 0x881220F0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x881220F4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,140(r7)
	ctx.current_instruction = 0x881220F8;
	REX_STORE_U32(ctx.r7.u32 + 140, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881220FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,20(r11)
	ctx.current_instruction = 0x88122100;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88122104;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,8(r10)
	ctx.current_instruction = 0x88122108;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8812210C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// bl 0x880cb2c0
	ctx.lr = 0x88122118;
	sub_880CB2C0(ctx, base);
loc_88122118:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812214c
	if (ctx.cr6.lt) goto loc_8812214C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88122124;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x88122128;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r29,0(r10)
	ctx.current_instruction = 0x8812212C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r29,4(r10)
	ctx.current_instruction = 0x88122130;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stw r29,8(r10)
	ctx.current_instruction = 0x88122134;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// stw r29,12(r10)
	ctx.current_instruction = 0x88122138;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r29.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8812213C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,44(r26)
	ctx.current_instruction = 0x88122140;
	REX_STORE_U32(ctx.r26.u32 + 44, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8812214C:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812214C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88122168
	if (ctx.cr6.eq) goto loc_88122168;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880cb318
	ctx.lr = 0x88122168;
	sub_880CB318(ctx, base);
loc_88122168:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88123C80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88123C80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88123C80) {
			switch (rex_dispatch_address) {
				case 0x88123C88:
				case 0x88123D04:
				case 0x88123D80:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88123C80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88123C88: goto loc_88123C88;
		case 0x88123D04: goto loc_88123D04;
		case 0x88123D80: goto loc_88123D80;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88123C88;
	__savegprlr_28(ctx, base);
loc_88123C88:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88123C88;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x88123C8C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	ctx.current_instruction = 0x88123C98;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,24(r31)
	ctx.current_instruction = 0x88123CA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88123cb4
	if (!ctx.cr6.eq) goto loc_88123CB4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88123CB4:
	// lwz r11,20(r31)
	ctx.current_instruction = 0x88123CB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,80(r1)
	ctx.current_instruction = 0x88123CB8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.current_instruction = 0x88123CBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x88123d9c
	if (ctx.cr6.eq) goto loc_88123D9C;
loc_88123CC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88123d9c
	if (ctx.cr6.eq) goto loc_88123D9C;
	// lwz r4,0(r11)
	ctx.current_instruction = 0x88123CD0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,8(r4)
	ctx.current_instruction = 0x88123CD4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// cmpld cr6,r10,r29
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r29.u64, ctx.xer);
	// bgt cr6,0x88123d9c
	if (ctx.cr6.gt) goto loc_88123D9C;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88123CE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,12(r11)
	ctx.current_instruction = 0x88123CE4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88123d88
	if (!ctx.cr6.eq) goto loc_88123D88;
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88123CF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88123CF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88123D04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88123D04:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88123d9c
	if (ctx.cr6.lt) goto loc_88123D9C;
	// lwz r11,120(r31)
	ctx.current_instruction = 0x88123D0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,116(r31)
	ctx.current_instruction = 0x88123D10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,120(r31)
	ctx.current_instruction = 0x88123D18;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88123D1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,12(r11)
	ctx.current_instruction = 0x88123D20;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,8(r11)
	ctx.current_instruction = 0x88123D24;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r8)
	ctx.current_instruction = 0x88123D28;
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88123D2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,8(r11)
	ctx.current_instruction = 0x88123D30;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x88123d4c
	if (ctx.cr6.eq) goto loc_88123D4C;
	// lwz r9,12(r11)
	ctx.current_instruction = 0x88123D3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,12(r10)
	ctx.current_instruction = 0x88123D44;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// b 0x88123d54
	goto loc_88123D54;
loc_88123D4C:
	// lwz r11,12(r11)
	ctx.current_instruction = 0x88123D4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,20(r31)
	ctx.current_instruction = 0x88123D50;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_88123D54:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x88123D54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	ctx.current_instruction = 0x88123D5C;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bne 0x88123d70
	if (!ctx.cr0.eq) goto loc_88123D70;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x88123D64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r28,8(r11)
	ctx.current_instruction = 0x88123D68;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,20(r31)
	ctx.current_instruction = 0x88123D6C;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_88123D70:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.current_instruction = 0x88123D74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x880cb318
	ctx.lr = 0x88123D80;
	sub_880CB318(ctx, base);
loc_88123D80:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88123d9c
	if (ctx.cr6.lt) goto loc_88123D9C;
loc_88123D88:
	// stw r30,80(r1)
	ctx.current_instruction = 0x88123D88;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r10,16(r31)
	ctx.current_instruction = 0x88123D90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88123cc8
	if (!ctx.cr6.eq) goto loc_88123CC8;
loc_88123D9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88125E80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88125E80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88125E80) {
			switch (rex_dispatch_address) {
				case 0x88125EB8:
				case 0x88125F20:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88125E80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88125EB8: goto loc_88125EB8;
		case 0x88125F20: goto loc_88125F20;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88125E84;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88125E88;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88125E8C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x88125f20
	if (ctx.cr6.lt) goto loc_88125F20;
	// subfic r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 <= 4294967295;
	ctx.r11.u64 = static_cast<uint64_t>(-1) - ctx.r4.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88125f20
	if (ctx.cr6.gt) goto loc_88125F20;
	// lis r4,8356
	ctx.r4.s64 = 547618816;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// ori r4,r4,8192
	ctx.r4.u64 = ctx.r4.u64 | 8192;
	// bl 0x88050340
	ctx.lr = 0x88125EB8;
	sub_88050340(ctx, base);
loc_88125EB8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88125f20
	if (ctx.cr6.eq) goto loc_88125F20;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x88125f14
	if (ctx.cr6.lt) goto loc_88125F14;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// ble cr6,0x88125ee4
	if (!ctx.cr6.gt) goto loc_88125EE4;
loc_88125ED4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r10,r31,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x88125ed4
	if (ctx.cr6.gt) goto loc_88125ED4;
loc_88125EE4:
	// li r10,-1
	ctx.r10.s64 = -1;
	// add r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 + ctx.r31.u64;
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// subf r6,r3,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stb r6,-1(r7)
	ctx.current_instruction = 0x88125EFC;
	REX_STORE_U8(ctx.r7.u32 + -1, ctx.r6.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88125F04;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88125F0C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88125F14:
	// lis r4,8356
	ctx.r4.s64 = 547618816;
	// ori r4,r4,8192
	ctx.r4.u64 = ctx.r4.u64 | 8192;
	// bl 0x88050358
	ctx.lr = 0x88125F20;
	sub_88050358(ctx, base);
loc_88125F20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88125F28;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88125F30;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88127FD0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88127FD0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88127FD0;
	ctx.current_instruction = 0x88127FD0;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,-16(r1)
	ctx.current_instruction = 0x88127FD4;
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,-14(r1)
	ctx.current_instruction = 0x88127FDC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + -14);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lhz r10,-16(r1)
	ctx.current_instruction = 0x88127FE4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// sth r10,0(r11)
	ctx.current_instruction = 0x88127FEC;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// stb r9,2(r11)
	ctx.current_instruction = 0x88127FF0;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881299B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881299B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881299B8) {
			switch (rex_dispatch_address) {
				case 0x881299C0:
				case 0x88129AE8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881299B8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881299C0: goto loc_881299C0;
		case 0x88129AE8: goto loc_88129AE8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x881299C0;
	__savegprlr_20(ctx, base);
loc_881299C0:
	// stfd f30,-120(r1)
	ctx.current_instruction = 0x881299C0;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	ctx.current_instruction = 0x881299C4;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x881299C8;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,428(r4)
	ctx.current_instruction = 0x881299CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 428);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r26,56(r4)
	ctx.current_instruction = 0x881299D4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881299f8
	if (!ctx.cr6.gt) goto loc_881299F8;
	// lhz r11,118(r4)
	ctx.current_instruction = 0x881299E8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x88129a10
	if (ctx.cr6.gt) goto loc_88129A10;
loc_881299F8:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-120(r1)
	ctx.current_instruction = 0x88129A04;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.current_instruction = 0x88129A08;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88129A10:
	// lhz r10,730(r25)
	ctx.current_instruction = 0x88129A10;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 730);
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// lwz r11,308(r25)
	ctx.current_instruction = 0x88129A18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 308);
	// lwz r8,304(r25)
	ctx.current_instruction = 0x88129A1C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 304);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88129a2c
	if (ctx.cr6.lt) goto loc_88129A2C;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
loc_88129A2C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88129b88
	if (!ctx.cr6.gt) goto loc_88129B88;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// subfic r27,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	ctx.r27.u64 = static_cast<uint64_t>(-4) - ctx.r11.u64;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lfd f30,12096(r10)
	ctx.current_instruction = 0x88129A48;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r10.u32 + 12096);
	// clrlwi r21,r5,24
	ctx.r21.u64 = ctx.r5.u32 & 0xFF;
	// lfs f31,12504(r9)
	ctx.current_instruction = 0x88129A50;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12504);
	ctx.f31.f64 = double(temp.f32);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// addi r22,r11,8832
	ctx.r22.s64 = ctx.r11.s64 + 8832;
loc_88129A5C:
	// lwz r11,0(r28)
	ctx.current_instruction = 0x88129A5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// lwz r30,-4(r28)
	ctx.current_instruction = 0x88129A64;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + -4);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88129a74
	if (ctx.cr6.lt) goto loc_88129A74;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_88129A74:
	// lwz r10,64(r29)
	ctx.current_instruction = 0x88129A74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lwz r8,436(r29)
	ctx.current_instruction = 0x88129A7C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 436);
	// beq cr6,0x88129a8c
	if (ctx.cr6.eq) goto loc_88129A8C;
	// lwz r11,4(r29)
	ctx.current_instruction = 0x88129A84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x88129a90
	goto loc_88129A90;
loc_88129A8C:
	// lwz r11,8(r29)
	ctx.current_instruction = 0x88129A8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
loc_88129A90:
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwzx r7,r9,r28
	ctx.current_instruction = 0x88129A94;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// lbz r9,180(r29)
	ctx.current_instruction = 0x88129A98;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 180);
	// subf r6,r7,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lwz r10,296(r25)
	ctx.current_instruction = 0x88129AA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 296);
	// mullw r11,r6,r8
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x88129ac8
	if (ctx.cr0.lt) goto loc_88129AC8;
	// cmpwi cr6,r11,192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 192, ctx.xer);
	// bge cr6,0x88129ac8
	if (!ctx.cr6.lt) goto loc_88129AC8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r22
	ctx.current_instruction = 0x88129AC0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x88129aec
	goto loc_88129AEC;
loc_88129AC8:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// std r11,80(r1)
	ctx.current_instruction = 0x88129AD0;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x88129AD4;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f12,f31
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x881ef940
	ctx.lr = 0x88129AE8;
	sub_881EF940(ctx, base);
loc_88129AE8:
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_88129AEC:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x88129b7c
	if (!ctx.cr6.lt) goto loc_88129B7C;
	// subf r11,r30,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r30.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x88129b50
	if (ctx.cr6.lt) goto loc_88129B50;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,-3
	ctx.r9.s64 = ctx.r31.s64 + -3;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_88129B14:
	// lfs f13,4(r11)
	ctx.current_instruction = 0x88129B14;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f12,8(r11)
	ctx.current_instruction = 0x88129B1C;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,12(r11)
	ctx.current_instruction = 0x88129B24;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,16(r11)
	ctx.current_instruction = 0x88129B2C;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,4(r11)
	ctx.current_instruction = 0x88129B34;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f9,8(r11)
	ctx.current_instruction = 0x88129B3C;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stfs f7,12(r11)
	ctx.current_instruction = 0x88129B44;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f6,16(r11)
	ctx.current_instruction = 0x88129B48;
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// blt cr6,0x88129b14
	if (ctx.cr6.lt) goto loc_88129B14;
loc_88129B50:
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x88129b7c
	if (!ctx.cr6.lt) goto loc_88129B7C;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r10.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88129B6C:
	// lfs f13,4(r11)
	ctx.current_instruction = 0x88129B6C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,4(r11)
	ctx.current_instruction = 0x88129B74;
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x88129b6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88129B6C;
loc_88129B7C:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x88129a5c
	if (!ctx.cr0.eq) goto loc_88129A5C;
loc_88129B88:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-120(r1)
	ctx.current_instruction = 0x88129B90;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.current_instruction = 0x88129B94;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88133680) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88133680;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88133680) {
			switch (rex_dispatch_address) {
				case 0x88133688:
				case 0x8813370C:
				case 0x88133878:
				case 0x881338E0:
				case 0x88133944:
				case 0x88133968:
				case 0x881339F0:
				case 0x88133A2C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88133680;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88133688: goto loc_88133688;
		case 0x8813370C: goto loc_8813370C;
		case 0x88133878: goto loc_88133878;
		case 0x881338E0: goto loc_881338E0;
		case 0x88133944: goto loc_88133944;
		case 0x88133968: goto loc_88133968;
		case 0x881339F0: goto loc_881339F0;
		case 0x88133A2C: goto loc_88133A2C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x88133688;
	__savegprlr_18(ctx, base);
loc_88133688:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x88133688;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.current_instruction = 0x8813368C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88133790
	if (!ctx.cr6.eq) goto loc_88133790;
	// lwz r11,460(r30)
	ctx.current_instruction = 0x881336AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881336c0
	if (ctx.cr6.eq) goto loc_881336C0;
	// lwz r28,328(r30)
	ctx.current_instruction = 0x881336B8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 328);
	// b 0x881336c4
	goto loc_881336C4;
loc_881336C0:
	// lwz r28,56(r23)
	ctx.current_instruction = 0x881336C0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r23.u32 + 56);
loc_881336C4:
	// lwz r10,584(r30)
	ctx.current_instruction = 0x881336C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 584);
	// lwz r11,320(r30)
	ctx.current_instruction = 0x881336C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 320);
	// lhz r9,202(r30)
	ctx.current_instruction = 0x881336CC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 202);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhz r7,0(r10)
	ctx.current_instruction = 0x881336D4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r10,r6,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r4,118(r5)
	ctx.current_instruction = 0x881336E4;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r29,r4
	ctx.r29.s64 = ctx.r4.s16;
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x88133b38
	if (!ctx.cr6.lt) goto loc_88133B38;
	// addi r31,r31,224
	ctx.r31.s64 = ctx.r31.s64 + 224;
	// li r22,1
	ctx.r22.s64 = 1;
loc_881336FC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,110(r30)
	ctx.current_instruction = 0x88133700;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 110);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812c528
	ctx.lr = 0x8813370C;
	sub_8812C528(ctx, base);
loc_8813370C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88133b38
	if (ctx.cr6.lt) goto loc_88133B38;
	// lhz r10,110(r30)
	ctx.current_instruction = 0x88133714;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 110);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88133718;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// slw r10,r22,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r10.u8 & 0x3F));
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8813373c
	if (ctx.cr6.eq) goto loc_8813373C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// orc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ~ctx.r10.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x88133738;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8813373C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r10,202(r30)
	ctx.current_instruction = 0x88133740;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 202);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r9,88(r1)
	ctx.current_instruction = 0x8813374C;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.current_instruction = 0x88133750;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfsx f12,r7,r28
	ctx.current_instruction = 0x88133760;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r28.u32, temp.u32);
	// lhz r6,202(r30)
	ctx.current_instruction = 0x88133764;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 202);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r4,202(r30)
	ctx.current_instruction = 0x88133778;
	REX_STORE_U16(ctx.r30.u32 + 202, ctx.r4.u16);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x881336fc
	if (ctx.cr6.lt) goto loc_881336FC;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_88133790:
	// lwz r11,584(r30)
	ctx.current_instruction = 0x88133790;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 584);
	// lwz r10,320(r30)
	ctx.current_instruction = 0x88133794;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,145(r31)
	ctx.current_instruction = 0x88133798;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 145);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// lhz r7,0(r11)
	ctx.current_instruction = 0x881337A0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r4,118(r5)
	ctx.current_instruction = 0x881337B4;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r25,r4
	ctx.r25.s64 = ctx.r4.s16;
	// bge cr6,0x88133b38
	if (!ctx.cr6.lt) goto loc_88133B38;
	// addi r24,r23,1456
	ctx.r24.s64 = ctx.r23.s64 + 1456;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r18,7
	ctx.r18.s64 = 7;
	// li r20,10
	ctx.r20.s64 = 10;
	// li r19,3
	ctx.r19.s64 = 3;
	// li r21,6
	ctx.r21.s64 = 6;
loc_881337D8:
	// lwz r11,460(r30)
	ctx.current_instruction = 0x881337D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,145(r31)
	ctx.current_instruction = 0x881337E0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 145);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x881337fc
	if (ctx.cr6.eq) goto loc_881337FC;
	// lwz r10,328(r30)
	ctx.current_instruction = 0x881337F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 328);
	// b 0x88133800
	goto loc_88133800;
loc_881337FC:
	// lwz r10,56(r23)
	ctx.current_instruction = 0x881337FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 56);
loc_88133800:
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,72(r31)
	ctx.current_instruction = 0x88133804;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x88133824
	if (ctx.cr6.eq) goto loc_88133824;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x881338d0
	if (ctx.cr6.eq) goto loc_881338D0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x88133908
	if (ctx.cr6.eq) goto loc_88133908;
	// b 0x88133a90
	goto loc_88133A90;
loc_88133824:
	// lwz r11,120(r30)
	ctx.current_instruction = 0x88133824;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881338cc
	if (!ctx.cr6.eq) goto loc_881338CC;
	// lwz r11,164(r30)
	ctx.current_instruction = 0x88133830;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881338cc
	if (!ctx.cr6.eq) goto loc_881338CC;
	// lhz r11,168(r30)
	ctx.current_instruction = 0x8813383C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 168);
	// lhz r10,148(r31)
	ctx.current_instruction = 0x88133840;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 148);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881338cc
	if (!ctx.cr6.lt) goto loc_881338CC;
	// addi r28,r31,224
	ctx.r28.s64 = ctx.r31.s64 + 224;
loc_88133858:
	// lhz r11,172(r30)
	ctx.current_instruction = 0x88133858;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 172);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r10,170(r30)
	ctx.current_instruction = 0x88133860;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 170);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8812c528
	ctx.lr = 0x88133878;
	sub_8812C528(ctx, base);
loc_88133878:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88133b38
	if (ctx.cr6.lt) goto loc_88133B38;
	// lhz r10,148(r31)
	ctx.current_instruction = 0x88133880;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 148);
	// subfic r11,r29,32
	ctx.xer.ca = ctx.r29.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r29.u64;
	// lwz r9,80(r1)
	ctx.current_instruction = 0x88133888;
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
	// stwx r5,r6,r24
	ctx.current_instruction = 0x8813389C;
	REX_STORE_U32(ctx.r6.u32 + ctx.r24.u32, ctx.r5.u32);
	// lhz r4,148(r31)
	ctx.current_instruction = 0x881338A0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 148);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,148(r31)
	ctx.current_instruction = 0x881338B4;
	REX_STORE_U16(ctx.r31.u32 + 148, ctx.r11.u16);
	// lhz r10,168(r30)
	ctx.current_instruction = 0x881338B8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 168);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x88133858
	if (ctx.cr6.lt) goto loc_88133858;
loc_881338CC:
	// stw r18,72(r31)
	ctx.current_instruction = 0x881338CC;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r18.u32);
loc_881338D0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881338E0;
	sub_8812C528(ctx, base);
loc_881338E0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88133b38
	if (ctx.cr6.lt) goto loc_88133B38;
	// lhz r10,110(r30)
	ctx.current_instruction = 0x881338E8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 110);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881338EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x88133b30
	if (ctx.cr6.gt) goto loc_88133B30;
	// stw r20,72(r31)
	ctx.current_instruction = 0x881338F8;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r20.u32);
	// stw r27,80(r31)
	ctx.current_instruction = 0x881338FC;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// sth r11,196(r31)
	ctx.current_instruction = 0x88133900;
	REX_STORE_U16(ctx.r31.u32 + 196, ctx.r11.u16);
	// sth r27,202(r30)
	ctx.current_instruction = 0x88133904;
	REX_STORE_U16(ctx.r30.u32 + 202, ctx.r27.u16);
loc_88133908:
	// lwz r11,192(r30)
	ctx.current_instruction = 0x88133908;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881339b4
	if (!ctx.cr6.eq) goto loc_881339B4;
	// lhz r11,202(r30)
	ctx.current_instruction = 0x88133914;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 202);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881339b4
	if (!ctx.cr6.eq) goto loc_881339B4;
	// lwz r11,80(r31)
	ctx.current_instruction = 0x88133920;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88133934
	if (ctx.cr6.lt) goto loc_88133934;
	// beq cr6,0x88133958
	if (ctx.cr6.eq) goto loc_88133958;
	// b 0x881339a8
	goto loc_881339A8;
loc_88133934:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88133944;
	sub_8812C528(ctx, base);
loc_88133944:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88133b38
	if (ctx.cr6.lt) goto loc_88133B38;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8813394C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r22,80(r31)
	ctx.current_instruction = 0x88133950;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
	// stw r11,84(r31)
	ctx.current_instruction = 0x88133954;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_88133958:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,110(r30)
	ctx.current_instruction = 0x8813395C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 110);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88133968;
	sub_8812C528(ctx, base);
loc_88133968:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88133b38
	if (ctx.cr6.lt) goto loc_88133B38;
	// lhz r11,110(r30)
	ctx.current_instruction = 0x88133970;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 110);
	// lwz r9,84(r31)
	ctx.current_instruction = 0x88133974;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x88133978;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// slw r10,r22,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// and r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x8813398C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x881339a4
	if (ctx.cr6.eq) goto loc_881339A4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// orc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ~ctx.r10.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x881339A0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_881339A4:
	// stw r11,0(r26)
	ctx.current_instruction = 0x881339A4;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_881339A8:
	// lhz r11,202(r30)
	ctx.current_instruction = 0x881339A8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 202);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,202(r30)
	ctx.current_instruction = 0x881339B0;
	REX_STORE_U16(ctx.r30.u32 + 202, ctx.r10.u16);
loc_881339B4:
	// lhz r11,202(r30)
	ctx.current_instruction = 0x881339B4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x88133a90
	if (!ctx.cr6.lt) goto loc_88133A90;
loc_881339C4:
	// lwz r11,76(r31)
	ctx.current_instruction = 0x881339C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881339dc
	if (ctx.cr6.eq) goto loc_881339DC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x88133a18
	if (ctx.cr6.eq) goto loc_88133A18;
	// b 0x88133a3c
	goto loc_88133A3C;
loc_881339DC:
	// addi r29,r31,224
	ctx.r29.s64 = ctx.r31.s64 + 224;
loc_881339E0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812c528
	ctx.lr = 0x881339F0;
	sub_8812C528(ctx, base);
loc_881339F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88133b38
	if (ctx.cr6.lt) goto loc_88133B38;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881339F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88133a14
	if (!ctx.cr6.eq) goto loc_88133A14;
	// lwz r11,200(r31)
	ctx.current_instruction = 0x88133A04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,200(r31)
	ctx.current_instruction = 0x88133A0C;
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// b 0x881339e0
	goto loc_881339E0;
loc_88133A14:
	// stw r19,76(r31)
	ctx.current_instruction = 0x88133A14;
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r19.u32);
loc_88133A18:
	// stw r27,80(r1)
	ctx.current_instruction = 0x88133A18;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// lhz r4,196(r31)
	ctx.current_instruction = 0x88133A24;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 196);
	// bl 0x8812c528
	ctx.lr = 0x88133A2C;
	sub_8812C528(ctx, base);
loc_88133A2C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88133b38
	if (ctx.cr6.lt) goto loc_88133B38;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88133A34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,208(r31)
	ctx.current_instruction = 0x88133A38;
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
loc_88133A3C:
	// lhz r11,202(r30)
	ctx.current_instruction = 0x88133A3C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 202);
	// lwz r9,200(r31)
	ctx.current_instruction = 0x88133A40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// lhz r8,196(r31)
	ctx.current_instruction = 0x88133A44;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 196);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lwz r10,208(r31)
	ctx.current_instruction = 0x88133A4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// slw r11,r9,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r5,r6,r26
	ctx.current_instruction = 0x88133A5C;
	REX_STORE_U32(ctx.r6.u32 + ctx.r26.u32, ctx.r5.u32);
	// stw r27,76(r31)
	ctx.current_instruction = 0x88133A60;
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// stw r27,200(r31)
	ctx.current_instruction = 0x88133A64;
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r27.u32);
	// stw r27,208(r31)
	ctx.current_instruction = 0x88133A68;
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r27.u32);
	// lhz r4,202(r30)
	ctx.current_instruction = 0x88133A6C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 202);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,202(r30)
	ctx.current_instruction = 0x88133A80;
	REX_STORE_U16(ctx.r30.u32 + 202, ctx.r10.u16);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x881339c4
	if (ctx.cr6.lt) goto loc_881339C4;
loc_88133A90:
	// lwz r11,192(r30)
	ctx.current_instruction = 0x88133A90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 192);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x88133aec
	if (!ctx.cr6.lt) goto loc_88133AEC;
	// subf r10,r11,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88133AB8:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88133AB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88133adc
	if (ctx.cr6.eq) goto loc_88133ADC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stw r8,0(r11)
	ctx.current_instruction = 0x88133AD4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x88133ae4
	goto loc_88133AE4;
loc_88133ADC:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stw r10,0(r11)
	ctx.current_instruction = 0x88133AE0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_88133AE4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88133ab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88133AB8;
loc_88133AEC:
	// stw r21,72(r31)
	ctx.current_instruction = 0x88133AEC;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r21.u32);
	// sth r27,148(r31)
	ctx.current_instruction = 0x88133AF0;
	REX_STORE_U16(ctx.r31.u32 + 148, ctx.r27.u16);
	// sth r27,202(r30)
	ctx.current_instruction = 0x88133AF4;
	REX_STORE_U16(ctx.r30.u32 + 202, ctx.r27.u16);
	// stw r27,200(r31)
	ctx.current_instruction = 0x88133AF8;
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r27.u32);
	// stw r27,76(r31)
	ctx.current_instruction = 0x88133AFC;
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// stw r27,208(r31)
	ctx.current_instruction = 0x88133B00;
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r27.u32);
	// lbz r11,145(r31)
	ctx.current_instruction = 0x88133B04;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 145);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r9,145(r31)
	ctx.current_instruction = 0x88133B18;
	REX_STORE_U8(ctx.r31.u32 + 145, ctx.r9.u8);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// blt cr6,0x881337d8
	if (ctx.cr6.lt) goto loc_881337D8;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_88133B30:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_88133B38:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813FA88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8813FA88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8813FA88) {
			switch (rex_dispatch_address) {
				case 0x8813FAA4:
				case 0x8813FAA8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813FA88;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8813FAA4: goto loc_8813FAA4;
		case 0x8813FAA8: goto loc_8813FAA8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8813FA8C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8813FA90;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8813FA94;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,32(r3)
	ctx.current_instruction = 0x8813FA98;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,68(r31)
	ctx.current_instruction = 0x8813FA9C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x881533d8
	ctx.lr = 0x8813FAA4;
	sub_881533D8(ctx, base);
loc_8813FAA4:
	// bl 0x8813f6e8
	ctx.lr = 0x8813FAA8;
	sub_8813F6E8(ctx, base);
loc_8813FAA8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8813facc
	if (ctx.cr6.lt) goto loc_8813FACC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	ctx.current_instruction = 0x8813FAB4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	ctx.current_instruction = 0x8813FAB8;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	ctx.current_instruction = 0x8813FABC;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	ctx.current_instruction = 0x8813FAC0;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,80(r31)
	ctx.current_instruction = 0x8813FAC4;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// std r11,72(r31)
	ctx.current_instruction = 0x8813FAC8;
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
loc_8813FACC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8813FAD0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8813FAD8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88140180) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88140180);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88140180;
	ctx.current_instruction = 0x88140180;
	// std r30,-16(r1)
	ctx.current_instruction = 0x88140180;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x88140184;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r9,4(r3)
	ctx.current_instruction = 0x88140188;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r3,r10,3
	ctx.r3.u64 = ctx.r10.u64 | 3;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x881402f4
	if (!ctx.cr6.eq) goto loc_881402F4;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x881401A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,22358
	ctx.r11.s64 = 1465253888;
	// ori r9,r11,17201
	ctx.r9.u64 = ctx.r11.u64 | 17201;
	// lwz r11,20(r10)
	ctx.current_instruction = 0x881401AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88140258
	if (ctx.cr6.eq) goto loc_88140258;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22081
	ctx.r8.u64 = ctx.r9.u64 | 22081;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88140258
	if (ctx.cr6.eq) goto loc_88140258;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22067
	ctx.r8.u64 = ctx.r9.u64 | 22067;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88140258
	if (ctx.cr6.eq) goto loc_88140258;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22066
	ctx.r8.u64 = ctx.r9.u64 | 22066;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88140258
	if (ctx.cr6.eq) goto loc_88140258;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22065
	ctx.r8.u64 = ctx.r9.u64 | 22065;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88140258
	if (ctx.cr6.eq) goto loc_88140258;
	// lis r9,22358
	ctx.r9.s64 = 1465253888;
	// ori r8,r9,20530
	ctx.r8.u64 = ctx.r9.u64 | 20530;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88140258
	if (ctx.cr6.eq) goto loc_88140258;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22096
	ctx.r8.u64 = ctx.r9.u64 | 22096;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88140258
	if (ctx.cr6.eq) goto loc_88140258;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22098
	ctx.r8.u64 = ctx.r9.u64 | 22098;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88140258
	if (ctx.cr6.eq) goto loc_88140258;
	// lis r9,19792
	ctx.r9.s64 = 1297088512;
	// ori r8,r9,13395
	ctx.r8.u64 = ctx.r9.u64 | 13395;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88140258
	if (ctx.cr6.eq) goto loc_88140258;
	// lis r9,19792
	ctx.r9.s64 = 1297088512;
	// ori r8,r9,13363
	ctx.r8.u64 = ctx.r9.u64 | 13363;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88140258
	if (ctx.cr6.eq) goto loc_88140258;
	// lis r9,19792
	ctx.r9.s64 = 1297088512;
	// ori r8,r9,13362
	ctx.r8.u64 = ctx.r9.u64 | 13362;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x881402f4
	if (!ctx.cr6.eq) goto loc_881402F4;
loc_88140258:
	// lwz r11,8(r10)
	ctx.current_instruction = 0x88140258;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881402f4
	if (ctx.cr6.eq) goto loc_881402F4;
	// lwz r11,12(r10)
	ctx.current_instruction = 0x88140264;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881402f4
	if (ctx.cr6.eq) goto loc_881402F4;
	// lhz r11,18(r10)
	ctx.current_instruction = 0x88140270;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881402f4
	if (ctx.cr6.eq) goto loc_881402F4;
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// stw r5,36(r5)
	ctx.current_instruction = 0x88140280;
	REX_STORE_U32(ctx.r5.u32 + 36, ctx.r5.u32);
	// lis r10,-30700
	ctx.r10.s64 = -2011955200;
	// addi r11,r11,-464
	ctx.r11.s64 = ctx.r11.s64 + -464;
	// addi r10,r10,-1312
	ctx.r10.s64 = ctx.r10.s64 + -1312;
	// lis r9,-30700
	ctx.r9.s64 = -2011955200;
	// stw r11,0(r5)
	ctx.current_instruction = 0x88140294;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lis r8,-30700
	ctx.r8.s64 = -2011955200;
	// stw r10,4(r5)
	ctx.current_instruction = 0x8814029C;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lis r7,-30700
	ctx.r7.s64 = -2011955200;
	// lis r6,-30713
	ctx.r6.s64 = -2012807168;
	// lis r4,-30713
	ctx.r4.s64 = -2012807168;
	// lis r31,-30700
	ctx.r31.s64 = -2011955200;
	// lis r30,-30700
	ctx.r30.s64 = -2011955200;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r9,-1136
	ctx.r9.s64 = ctx.r9.s64 + -1136;
	// addi r8,r8,-1040
	ctx.r8.s64 = ctx.r8.s64 + -1040;
	// stw r3,32(r5)
	ctx.current_instruction = 0x881402C0;
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r3.u32);
	// addi r7,r7,-1400
	ctx.r7.s64 = ctx.r7.s64 + -1400;
	// stw r9,8(r5)
	ctx.current_instruction = 0x881402C8;
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// addi r6,r6,-15728
	ctx.r6.s64 = ctx.r6.s64 + -15728;
	// stw r8,12(r5)
	ctx.current_instruction = 0x881402D0;
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r8.u32);
	// addi r4,r4,-15728
	ctx.r4.s64 = ctx.r4.s64 + -15728;
	// stw r7,16(r5)
	ctx.current_instruction = 0x881402D8;
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r7.u32);
	// addi r11,r31,-480
	ctx.r11.s64 = ctx.r31.s64 + -480;
	// stw r6,20(r5)
	ctx.current_instruction = 0x881402E0;
	REX_STORE_U32(ctx.r5.u32 + 20, ctx.r6.u32);
	// addi r10,r30,-2104
	ctx.r10.s64 = ctx.r30.s64 + -2104;
	// stw r4,24(r5)
	ctx.current_instruction = 0x881402E8;
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r4.u32);
	// stw r11,28(r5)
	ctx.current_instruction = 0x881402EC;
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
	// stw r10,40(r5)
	ctx.current_instruction = 0x881402F0;
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r10.u32);
loc_881402F4:
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881402F4;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881402F8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88142628) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88142628);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88142628;
	ctx.current_instruction = 0x88142628;
	PPCRegister temp{};
	// std r30,-16(r1)
	ctx.current_instruction = 0x88142628;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x8814262C;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,40(r3)
	ctx.current_instruction = 0x88142630;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88142650
	if (!ctx.cr6.eq) goto loc_88142650;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88142648;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88142650:
	// lwz r10,80(r11)
	ctx.current_instruction = 0x88142650;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lwz r7,60(r11)
	ctx.current_instruction = 0x88142658;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// lwz r9,344(r11)
	ctx.current_instruction = 0x88142660;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// std r5,-32(r1)
	ctx.current_instruction = 0x88142668;
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r5.u64);
	// lfd f0,-32(r1)
	ctx.current_instruction = 0x8814266C;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,6708(r8)
	ctx.current_instruction = 0x88142674;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// bne cr6,0x88142728
	if (!ctx.cr6.eq) goto loc_88142728;
	// lwz r10,340(r11)
	ctx.current_instruction = 0x88142684;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lwz r8,412(r11)
	ctx.current_instruction = 0x8814268C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 412);
	// lwz r10,0(r10)
	ctx.current_instruction = 0x88142690;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// stw r7,0(r8)
	ctx.current_instruction = 0x88142698;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r5,340(r11)
	ctx.current_instruction = 0x8814269C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r4,0(r5)
	ctx.current_instruction = 0x881426A0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881426f4
	if (!ctx.cr6.gt) goto loc_881426F4;
	// lfs f0,396(r11)
	ctx.current_instruction = 0x881426AC;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// fctidz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-32(r1)
	ctx.current_instruction = 0x881426B8;
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f13.u64);
	// lwz r8,-28(r1)
	ctx.current_instruction = 0x881426BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// addi r10,r10,-13840
	ctx.r10.s64 = ctx.r10.s64 + -13840;
loc_881426C4:
	// lwz r7,0(r10)
	ctx.current_instruction = 0x881426C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x881426ec
	if (ctx.cr6.gt) goto loc_881426EC;
	// lwz r7,340(r11)
	ctx.current_instruction = 0x881426D0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r5,0(r7)
	ctx.current_instruction = 0x881426DC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x881426c4
	if (ctx.cr6.lt) goto loc_881426C4;
	// b 0x881426f4
	goto loc_881426F4;
loc_881426EC:
	// lwz r10,412(r11)
	ctx.current_instruction = 0x881426EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 412);
	// stw r9,0(r10)
	ctx.current_instruction = 0x881426F0;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_881426F4:
	// lwz r10,340(r11)
	ctx.current_instruction = 0x881426F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r8,0(r10)
	ctx.current_instruction = 0x881426F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x88142708
	if (!ctx.cr6.eq) goto loc_88142708;
	// stw r6,40(r11)
	ctx.current_instruction = 0x88142704;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
loc_88142708:
	// lwz r10,412(r11)
	ctx.current_instruction = 0x88142708;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 412);
	// lwz r9,0(r10)
	ctx.current_instruction = 0x8814270C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8814281c
	if (ctx.cr6.gt) goto loc_8814281C;
loc_88142718:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x8814271C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88142720;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88142728:
	// lwz r10,244(r11)
	ctx.current_instruction = 0x88142728;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8814281c
	if (!ctx.cr6.gt) goto loc_8814281C;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,6728(r9)
	ctx.current_instruction = 0x88142744;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6728);
	ctx.f0.f64 = double(temp.f32);
loc_88142748:
	// lwz r9,340(r11)
	ctx.current_instruction = 0x88142748;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// slw r7,r4,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r8,r10,r9
	ctx.current_instruction = 0x88142750;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r31,412(r11)
	ctx.current_instruction = 0x88142758;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 412);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwx r8,r31,r10
	ctx.current_instruction = 0x88142764;
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// lfs f12,396(r11)
	ctx.current_instruction = 0x88142768;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 396);
	ctx.f12.f64 = double(temp.f32);
	// lwz r30,340(r11)
	ctx.current_instruction = 0x8814276C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r8,252(r11)
	ctx.current_instruction = 0x88142770;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// divw r31,r8,r7
	ctx.r31.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// extsw r31,r31
	ctx.r31.s64 = ctx.r31.s32;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// std r31,-32(r1)
	ctx.current_instruction = 0x88142784;
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r31.u64);
	// lfd f11,-32(r1)
	ctx.current_instruction = 0x88142788;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// andc r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lwzx r8,r10,r30
	ctx.current_instruction = 0x88142798;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f7,f8,f13,f0
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f0.f64)));
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,-24(r1)
	ctx.current_instruction = 0x881427B0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f6.u64);
	// lwz r7,-20(r1)
	ctx.current_instruction = 0x881427B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// ble cr6,0x881427f4
	if (!ctx.cr6.gt) goto loc_881427F4;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_881427C0:
	// lwz r31,0(r8)
	ctx.current_instruction = 0x881427C0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x881427e8
	if (ctx.cr6.gt) goto loc_881427E8;
	// lwz r31,340(r11)
	ctx.current_instruction = 0x881427CC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwzx r31,r10,r31
	ctx.current_instruction = 0x881427D8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x881427c0
	if (ctx.cr6.lt) goto loc_881427C0;
	// b 0x881427f4
	goto loc_881427F4;
loc_881427E8:
	// lwz r8,412(r11)
	ctx.current_instruction = 0x881427E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 412);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// stwx r7,r8,r10
	ctx.current_instruction = 0x881427F0;
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u32);
loc_881427F4:
	// lwz r9,412(r11)
	ctx.current_instruction = 0x881427F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 412);
	// lwzx r8,r9,r10
	ctx.current_instruction = 0x881427F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88142718
	if (!ctx.cr6.gt) goto loc_88142718;
	// lwz r9,244(r11)
	ctx.current_instruction = 0x88142804;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,116
	ctx.r5.s64 = ctx.r5.s64 + 116;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88142748
	if (ctx.cr6.lt) goto loc_88142748;
loc_8814281C:
	// lwz r10,412(r11)
	ctx.current_instruction = 0x8814281C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 412);
	// lwz r9,0(r10)
	ctx.current_instruction = 0x88142820;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,400(r11)
	ctx.current_instruction = 0x88142824;
	REX_STORE_U32(ctx.r11.u32 + 400, ctx.r9.u32);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88142828;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8814282C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88148CA0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88148CA0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88148CA0;
	ctx.current_instruction = 0x88148CA0;
	PPCRegister temp{};
	uint32_t ea{};
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// vspltish v12,-5
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// sth r8,-2(r1)
	ctx.current_instruction = 0x88148CA8;
	REX_STORE_U16(ctx.r1.u32 + -2, ctx.r8.u16);
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltisb v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v5,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x1)));
	// vsrh v12,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v11,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v9,v11,7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_set1_epi16(short(0x100))));
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// vadduhm v2,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vspltish v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x4)));
	// li r10,16
	ctx.r10.s64 = 16;
	// vspltish v4,5
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x5)));
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vspltish v3,6
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x6)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v1,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bne cr6,0x88148dbc
	if (!ctx.cr6.eq) goto loc_88148DBC;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,8
	ctx.r7.s64 = 8;
	// lvx128 v59,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v63,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,4
	ctx.r9.s64 = 4;
	// lvx128 v58,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v61,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// vperm128 v8,v62,v58,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v11,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v12,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v9,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
loc_88148D38:
	// vor v8,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v12,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// lvx128 v62,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v11,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vperm128 v9,v63,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v8,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v7,v12,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v9,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsubshs v31,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v30,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v28,v1,v12
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v27,v11,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v24,v27,v30
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vsubshs v23,v9,v25
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vadduhm v8,v31,v26
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v7,v24,v23
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v22,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v21,v22,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vsrah v20,v21,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v57,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// stvewx128 v57,r0,r5
	ctx.current_instruction = 0x88148DA8;
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r5,r9
	ctx.current_instruction = 0x88148DAC;
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x88148d38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88148D38;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88148DBC:
	// lvx128 v56,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lvx128 v54,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v56,v53,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v51,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v54,v52,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v6,v55,v51,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v9,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v8,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v12,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v7,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v11,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v6,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
loc_88148DFC:
	// vor128 v48,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvx128 v50,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v1,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v12,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vperm128 v7,v50,v49,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vor v31,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v11,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v8,v12,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v27,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vslh v29,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v11,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v7,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vslh v26,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v30,v8
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vor v8,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v6,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v27.u8));
	// vslh v25,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v1,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v31,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v29,v12
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v20,v26,v28
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v19,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v31,v8,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vsubshs v18,v13,v24
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v16,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsubshs v15,v13,v21
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vadduhm v26,v31,v14
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vslh v28,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v24,v6,v30
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vadduhm v1,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v29,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v22,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsubshs v21,v7,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vadduhm v20,v26,v24
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v23,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v19,v29,v2
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v31,v22,v21
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vor v1,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v20.u8));
	// vor128 v3,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// vadduhm v18,v23,v31
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v17,v19,v1
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsrah v16,v18,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v17,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v47,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// stvx128 v47,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x88148dfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88148DFC;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88150F30) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88150F30;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88150F30) {
			switch (rex_dispatch_address) {
				case 0x88151014:
				case 0x88151020:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88150F30;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88151014: goto loc_88151014;
		case 0x88151020: goto loc_88151020;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88150F34;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88150F38;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88150F3C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88150F40;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.current_instruction = 0x88150F44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	ctx.current_instruction = 0x88150F50;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r5)
	ctx.current_instruction = 0x88150F54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,4(r3)
	ctx.current_instruction = 0x88150F58;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r5)
	ctx.current_instruction = 0x88150F5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r9,8(r3)
	ctx.current_instruction = 0x88150F60;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r5)
	ctx.current_instruction = 0x88150F64;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r8,12(r3)
	ctx.current_instruction = 0x88150F68;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r5)
	ctx.current_instruction = 0x88150F6C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// stw r7,16(r3)
	ctx.current_instruction = 0x88150F70;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r5)
	ctx.current_instruction = 0x88150F74;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// stw r6,20(r3)
	ctx.current_instruction = 0x88150F78;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r4,24(r5)
	ctx.current_instruction = 0x88150F7C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// stw r4,24(r3)
	ctx.current_instruction = 0x88150F80;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lwz r3,28(r5)
	ctx.current_instruction = 0x88150F84;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// stw r3,28(r31)
	ctx.current_instruction = 0x88150F88;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r11,32(r5)
	ctx.current_instruction = 0x88150F8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// stw r11,32(r31)
	ctx.current_instruction = 0x88150F90;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r10,36(r5)
	ctx.current_instruction = 0x88150F94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// stw r10,36(r31)
	ctx.current_instruction = 0x88150F98;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwz r9,40(r5)
	ctx.current_instruction = 0x88150F9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// stw r9,40(r31)
	ctx.current_instruction = 0x88150FA0;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lwz r8,44(r5)
	ctx.current_instruction = 0x88150FA4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// stw r8,44(r31)
	ctx.current_instruction = 0x88150FA8;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// lwz r7,48(r5)
	ctx.current_instruction = 0x88150FAC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// stw r7,48(r31)
	ctx.current_instruction = 0x88150FB0;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// lwz r6,52(r5)
	ctx.current_instruction = 0x88150FB4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// stw r6,52(r31)
	ctx.current_instruction = 0x88150FB8;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// lwz r4,56(r5)
	ctx.current_instruction = 0x88150FBC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// stw r4,56(r31)
	ctx.current_instruction = 0x88150FC0;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// lwz r3,60(r5)
	ctx.current_instruction = 0x88150FC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// stw r3,60(r31)
	ctx.current_instruction = 0x88150FC8;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r11,64(r5)
	ctx.current_instruction = 0x88150FD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// stw r11,64(r31)
	ctx.current_instruction = 0x88150FD4;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r10,68(r5)
	ctx.current_instruction = 0x88150FD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// stw r10,68(r31)
	ctx.current_instruction = 0x88150FDC;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// lwz r9,72(r5)
	ctx.current_instruction = 0x88150FE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 72);
	// stw r9,72(r31)
	ctx.current_instruction = 0x88150FE4;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// lwz r8,76(r5)
	ctx.current_instruction = 0x88150FE8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 76);
	// stw r8,76(r31)
	ctx.current_instruction = 0x88150FEC;
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// lwz r7,80(r5)
	ctx.current_instruction = 0x88150FF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 80);
	// stw r7,80(r31)
	ctx.current_instruction = 0x88150FF4;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// lwz r6,84(r5)
	ctx.current_instruction = 0x88150FF8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 84);
	// stw r6,84(r31)
	ctx.current_instruction = 0x88150FFC;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r6.u32);
	// lwz r4,88(r5)
	ctx.current_instruction = 0x88151000;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r5,128
	ctx.r5.s64 = 128;
	// beq cr6,0x88151018
	if (ctx.cr6.eq) goto loc_88151018;
	// bl 0x880547a0
	ctx.lr = 0x88151014;
	sub_880547A0(ctx, base);
loc_88151014:
	// b 0x88151020
	goto loc_88151020;
loc_88151018:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x88151020;
	sub_88052D90(ctx, base);
loc_88151020:
	// lwz r11,21888(r30)
	ctx.current_instruction = 0x88151020;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21888);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,0(r31)
	ctx.current_instruction = 0x8815102C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r8,22056(r30)
	ctx.current_instruction = 0x88151030;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 22056);
	// stw r8,4(r31)
	ctx.current_instruction = 0x88151034;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r7,22060(r30)
	ctx.current_instruction = 0x88151038;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 22060);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8815103C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88151044;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8815104C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88151050;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88156320) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88156320;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88156320) {
			switch (rex_dispatch_address) {
				case 0x88156328:
				case 0x881563B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88156320;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88156328: goto loc_88156328;
		case 0x881563B8: goto loc_881563B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88156328;
	__savegprlr_29(ctx, base);
loc_88156328:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88156328;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.current_instruction = 0x8815632C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815634c
	if (ctx.cr6.eq) goto loc_8815634C;
	// add r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_8815634C:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88156350;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x881563cc
	if (!ctx.cr6.gt) goto loc_881563CC;
loc_8815635C:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x8815635C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x881563a4
	if (ctx.cr6.gt) goto loc_881563A4;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88156368;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// bgt cr6,0x881563f4
	if (ctx.cr6.gt) goto loc_881563F4;
	// subfic r8,r10,40
	ctx.xer.ca = ctx.r10.u32 <= 40;
	ctx.r8.u64 = static_cast<uint64_t>(40) - ctx.r10.u64;
	// lbz r7,0(r11)
	ctx.current_instruction = 0x88156378;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88156380;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,8(r31)
	ctx.current_instruction = 0x8815638C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,12(r31)
	ctx.current_instruction = 0x88156398;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// std r4,0(r31)
	ctx.current_instruction = 0x8815639C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// b 0x881563bc
	goto loc_881563BC;
loc_881563A4:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x881563A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881563cc
	if (!ctx.cr6.eq) goto loc_881563CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156188
	ctx.lr = 0x881563B8;
	sub_88156188(ctx, base);
loc_881563B8:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881563B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
loc_881563BC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881563BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8815635c
	if (ctx.cr6.gt) goto loc_8815635C;
loc_881563CC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r10,0(r31)
	ctx.current_instruction = 0x881563D0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srd r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// li r10,-1
	ctx.r10.s64 = -1;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// srw r9,r10,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r29.u8 & 0x3F));
	// and r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 & ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_881563F4:
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x881563cc
	if (!ctx.cr6.gt) goto loc_881563CC;
	// addi r9,r10,248
	ctx.r9.s64 = ctx.r10.s64 + 248;
	// lbz r8,0(r11)
	ctx.current_instruction = 0x88156404;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ld r10,0(r31)
	ctx.current_instruction = 0x88156408;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r7,r30,32
	ctx.xer.ca = ctx.r30.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - ctx.r30.u64;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// clrldi r5,r7,32
	ctx.r5.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// srd r11,r8,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r4.u8 & 0x7F));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// srd r11,r3,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r3.u64 >> (ctx.r5.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// srw r9,r10,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r29.u8 & 0x3F));
	// and r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 & ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815B6A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815B6A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815B6A0) {
			switch (rex_dispatch_address) {
				case 0x8815B6A8:
				case 0x8815B7BC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815B6A0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815B6A8: goto loc_8815B6A8;
		case 0x8815B7BC: goto loc_8815B7BC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8815B6A8;
	__savegprlr_29(ctx, base);
loc_8815B6A8:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8815B6A8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,15536(r3)
	ctx.current_instruction = 0x8815B6AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,15584(r3)
	ctx.current_instruction = 0x8815B6BC;
	REX_STORE_U32(ctx.r3.u32 + 15584, ctx.r29.u32);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x8815b6d0
	if (ctx.cr6.eq) goto loc_8815B6D0;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x8815b740
	if (ctx.cr6.lt) goto loc_8815B740;
loc_8815B6D0:
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// lis r8,-30719
	ctx.r8.s64 = -2013200384;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// lis r5,-30719
	ctx.r5.s64 = -2013200384;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r4,r9,21824
	ctx.r4.s64 = ctx.r9.s64 + 21824;
	// addi r3,r8,21860
	ctx.r3.s64 = ctx.r8.s64 + 21860;
	// addi r9,r7,21896
	ctx.r9.s64 = ctx.r7.s64 + 21896;
	// stw r4,1840(r31)
	ctx.current_instruction = 0x8815B6F4;
	REX_STORE_U32(ctx.r31.u32 + 1840, ctx.r4.u32);
	// addi r8,r6,21932
	ctx.r8.s64 = ctx.r6.s64 + 21932;
	// stw r3,1844(r31)
	ctx.current_instruction = 0x8815B6FC;
	REX_STORE_U32(ctx.r31.u32 + 1844, ctx.r3.u32);
	// addi r7,r5,21968
	ctx.r7.s64 = ctx.r5.s64 + 21968;
	// stw r9,1848(r31)
	ctx.current_instruction = 0x8815B704;
	REX_STORE_U32(ctx.r31.u32 + 1848, ctx.r9.u32);
	// addi r11,r11,21988
	ctx.r11.s64 = ctx.r11.s64 + 21988;
	// stw r8,1852(r31)
	ctx.current_instruction = 0x8815B70C;
	REX_STORE_U32(ctx.r31.u32 + 1852, ctx.r8.u32);
	// stw r7,1868(r31)
	ctx.current_instruction = 0x8815B710;
	REX_STORE_U32(ctx.r31.u32 + 1868, ctx.r7.u32);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// stw r11,1872(r31)
	ctx.current_instruction = 0x8815B718;
	REX_STORE_U32(ctx.r31.u32 + 1872, ctx.r11.u32);
	// bne cr6,0x8815b724
	if (!ctx.cr6.eq) goto loc_8815B724;
	// stw r11,1864(r31)
	ctx.current_instruction = 0x8815B720;
	REX_STORE_U32(ctx.r31.u32 + 1864, ctx.r11.u32);
loc_8815B724:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x8815b738
	if (!ctx.cr6.eq) goto loc_8815B738;
	// stw r29,436(r31)
	ctx.current_instruction = 0x8815B72C;
	REX_STORE_U32(ctx.r31.u32 + 436, ctx.r29.u32);
	// stw r29,444(r31)
	ctx.current_instruction = 0x8815B730;
	REX_STORE_U32(ctx.r31.u32 + 444, ctx.r29.u32);
	// b 0x8815b740
	goto loc_8815B740;
loc_8815B738:
	// stw r30,436(r31)
	ctx.current_instruction = 0x8815B738;
	REX_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// stw r30,444(r31)
	ctx.current_instruction = 0x8815B73C;
	REX_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
loc_8815B740:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8815b7c0
	if (ctx.cr6.lt) goto loc_8815B7C0;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r3,-30692
	ctx.r3.s64 = -2011430912;
	// addi r11,r11,21104
	ctx.r11.s64 = ctx.r11.s64 + 21104;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// stw r11,1804(r31)
	ctx.current_instruction = 0x8815B75C;
	REX_STORE_U32(ctx.r31.u32 + 1804, ctx.r11.u32);
	// lis r8,-30719
	ctx.r8.s64 = -2013200384;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// lis r5,-30719
	ctx.r5.s64 = -2013200384;
	// lis r4,-30719
	ctx.r4.s64 = -2013200384;
	// addi r11,r3,-23088
	ctx.r11.s64 = ctx.r3.s64 + -23088;
	// addi r10,r10,20832
	ctx.r10.s64 = ctx.r10.s64 + 20832;
	// addi r9,r9,21208
	ctx.r9.s64 = ctx.r9.s64 + 21208;
	// stw r11,3104(r31)
	ctx.current_instruction = 0x8815B780;
	REX_STORE_U32(ctx.r31.u32 + 3104, ctx.r11.u32);
	// addi r8,r8,21272
	ctx.r8.s64 = ctx.r8.s64 + 21272;
	// stw r10,1816(r31)
	ctx.current_instruction = 0x8815B788;
	REX_STORE_U32(ctx.r31.u32 + 1816, ctx.r10.u32);
	// addi r7,r7,20704
	ctx.r7.s64 = ctx.r7.s64 + 20704;
	// stw r9,1808(r31)
	ctx.current_instruction = 0x8815B790;
	REX_STORE_U32(ctx.r31.u32 + 1808, ctx.r9.u32);
	// addi r6,r6,20768
	ctx.r6.s64 = ctx.r6.s64 + 20768;
	// stw r8,1812(r31)
	ctx.current_instruction = 0x8815B798;
	REX_STORE_U32(ctx.r31.u32 + 1812, ctx.r8.u32);
	// addi r5,r5,20936
	ctx.r5.s64 = ctx.r5.s64 + 20936;
	// stw r7,1820(r31)
	ctx.current_instruction = 0x8815B7A0;
	REX_STORE_U32(ctx.r31.u32 + 1820, ctx.r7.u32);
	// addi r4,r4,21000
	ctx.r4.s64 = ctx.r4.s64 + 21000;
	// stw r6,1824(r31)
	ctx.current_instruction = 0x8815B7A8;
	REX_STORE_U32(ctx.r31.u32 + 1824, ctx.r6.u32);
	// stw r5,1828(r31)
	ctx.current_instruction = 0x8815B7AC;
	REX_STORE_U32(ctx.r31.u32 + 1828, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,1832(r31)
	ctx.current_instruction = 0x8815B7B4;
	REX_STORE_U32(ctx.r31.u32 + 1832, ctx.r4.u32);
	// bl 0x88166218
	ctx.lr = 0x8815B7BC;
	sub_88166218(ctx, base);
loc_8815B7BC:
	// b 0x8815b80c
	goto loc_8815B80C;
loc_8815B7C0:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// lis r8,-30719
	ctx.r8.s64 = -2013200384;
	// lis r7,-30697
	ctx.r7.s64 = -2011758592;
	// addi r6,r11,22072
	ctx.r6.s64 = ctx.r11.s64 + 22072;
	// addi r5,r10,22008
	ctx.r5.s64 = ctx.r10.s64 + 22008;
	// addi r4,r9,22192
	ctx.r4.s64 = ctx.r9.s64 + 22192;
	// stw r6,1804(r31)
	ctx.current_instruction = 0x8815B7E0;
	REX_STORE_U32(ctx.r31.u32 + 1804, ctx.r6.u32);
	// addi r3,r8,22256
	ctx.r3.s64 = ctx.r8.s64 + 22256;
	// stw r5,1816(r31)
	ctx.current_instruction = 0x8815B7E8;
	REX_STORE_U32(ctx.r31.u32 + 1816, ctx.r5.u32);
	// addi r11,r7,3816
	ctx.r11.s64 = ctx.r7.s64 + 3816;
	// stw r4,1808(r31)
	ctx.current_instruction = 0x8815B7F0;
	REX_STORE_U32(ctx.r31.u32 + 1808, ctx.r4.u32);
	// stw r3,1812(r31)
	ctx.current_instruction = 0x8815B7F4;
	REX_STORE_U32(ctx.r31.u32 + 1812, ctx.r3.u32);
	// stw r3,1820(r31)
	ctx.current_instruction = 0x8815B7F8;
	REX_STORE_U32(ctx.r31.u32 + 1820, ctx.r3.u32);
	// stw r4,1824(r31)
	ctx.current_instruction = 0x8815B7FC;
	REX_STORE_U32(ctx.r31.u32 + 1824, ctx.r4.u32);
	// stw r5,1828(r31)
	ctx.current_instruction = 0x8815B800;
	REX_STORE_U32(ctx.r31.u32 + 1828, ctx.r5.u32);
	// stw r6,1832(r31)
	ctx.current_instruction = 0x8815B804;
	REX_STORE_U32(ctx.r31.u32 + 1832, ctx.r6.u32);
	// stw r11,3104(r31)
	ctx.current_instruction = 0x8815B808;
	REX_STORE_U32(ctx.r31.u32 + 3104, ctx.r11.u32);
loc_8815B80C:
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x8815B80C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8815b88c
	if (!ctx.cr6.eq) goto loc_8815B88C;
	// lwz r10,1840(r31)
	ctx.current_instruction = 0x8815B818;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1840);
	// lwz r9,1844(r31)
	ctx.current_instruction = 0x8815B81C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1844);
	// lwz r8,1868(r31)
	ctx.current_instruction = 0x8815B820;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1868);
	// lwz r7,1832(r31)
	ctx.current_instruction = 0x8815B824;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1832);
	// lwz r6,1808(r31)
	ctx.current_instruction = 0x8815B828;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1808);
	// lwz r5,1812(r31)
	ctx.current_instruction = 0x8815B82C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1812);
	// lwz r4,1792(r31)
	ctx.current_instruction = 0x8815B830;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1792);
	// stw r10,1856(r31)
	ctx.current_instruction = 0x8815B834;
	REX_STORE_U32(ctx.r31.u32 + 1856, ctx.r10.u32);
	// stw r9,1860(r31)
	ctx.current_instruction = 0x8815B838;
	REX_STORE_U32(ctx.r31.u32 + 1860, ctx.r9.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r8,1864(r31)
	ctx.current_instruction = 0x8815B840;
	REX_STORE_U32(ctx.r31.u32 + 1864, ctx.r8.u32);
	// stw r30,1800(r31)
	ctx.current_instruction = 0x8815B844;
	REX_STORE_U32(ctx.r31.u32 + 1800, ctx.r30.u32);
	// stw r7,1836(r31)
	ctx.current_instruction = 0x8815B848;
	REX_STORE_U32(ctx.r31.u32 + 1836, ctx.r7.u32);
	// stw r6,20752(r31)
	ctx.current_instruction = 0x8815B84C;
	REX_STORE_U32(ctx.r31.u32 + 20752, ctx.r6.u32);
	// stw r5,20756(r31)
	ctx.current_instruction = 0x8815B850;
	REX_STORE_U32(ctx.r31.u32 + 20756, ctx.r5.u32);
	// beq cr6,0x8815b88c
	if (ctx.cr6.eq) goto loc_8815B88C;
	// lwz r10,1828(r31)
	ctx.current_instruction = 0x8815B858;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1828);
	// lwz r9,1848(r31)
	ctx.current_instruction = 0x8815B85C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1848);
	// lwz r8,1852(r31)
	ctx.current_instruction = 0x8815B860;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1852);
	// lwz r7,1872(r31)
	ctx.current_instruction = 0x8815B864;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1872);
	// lwz r6,1820(r31)
	ctx.current_instruction = 0x8815B868;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1820);
	// lwz r5,1824(r31)
	ctx.current_instruction = 0x8815B86C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1824);
	// stw r29,1800(r31)
	ctx.current_instruction = 0x8815B870;
	REX_STORE_U32(ctx.r31.u32 + 1800, ctx.r29.u32);
	// stw r10,1836(r31)
	ctx.current_instruction = 0x8815B874;
	REX_STORE_U32(ctx.r31.u32 + 1836, ctx.r10.u32);
	// stw r9,1856(r31)
	ctx.current_instruction = 0x8815B878;
	REX_STORE_U32(ctx.r31.u32 + 1856, ctx.r9.u32);
	// stw r8,1860(r31)
	ctx.current_instruction = 0x8815B87C;
	REX_STORE_U32(ctx.r31.u32 + 1860, ctx.r8.u32);
	// stw r7,1864(r31)
	ctx.current_instruction = 0x8815B880;
	REX_STORE_U32(ctx.r31.u32 + 1864, ctx.r7.u32);
	// stw r6,20752(r31)
	ctx.current_instruction = 0x8815B884;
	REX_STORE_U32(ctx.r31.u32 + 20752, ctx.r6.u32);
	// stw r5,20756(r31)
	ctx.current_instruction = 0x8815B888;
	REX_STORE_U32(ctx.r31.u32 + 20756, ctx.r5.u32);
loc_8815B88C:
	// lis r10,-30698
	ctx.r10.s64 = -2011824128;
	// lis r9,-30698
	ctx.r9.s64 = -2011824128;
	// lis r8,-30692
	ctx.r8.s64 = -2011430912;
	// addi r7,r10,26344
	ctx.r7.s64 = ctx.r10.s64 + 26344;
	// addi r6,r9,29112
	ctx.r6.s64 = ctx.r9.s64 + 29112;
	// addi r5,r8,-28640
	ctx.r5.s64 = ctx.r8.s64 + -28640;
	// stw r7,15836(r31)
	ctx.current_instruction = 0x8815B8A4;
	REX_STORE_U32(ctx.r31.u32 + 15836, ctx.r7.u32);
	// stw r6,15840(r31)
	ctx.current_instruction = 0x8815B8A8;
	REX_STORE_U32(ctx.r31.u32 + 15840, ctx.r6.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// stw r5,3096(r31)
	ctx.current_instruction = 0x8815B8B0;
	REX_STORE_U32(ctx.r31.u32 + 3096, ctx.r5.u32);
	// blt cr6,0x8815b8e0
	if (ctx.cr6.lt) goto loc_8815B8E0;
	// lis r10,-30694
	ctx.r10.s64 = -2011561984;
	// lis r9,-30694
	ctx.r9.s64 = -2011561984;
	// lis r8,-30694
	ctx.r8.s64 = -2011561984;
	// addi r7,r10,10776
	ctx.r7.s64 = ctx.r10.s64 + 10776;
	// addi r6,r9,-24080
	ctx.r6.s64 = ctx.r9.s64 + -24080;
	// addi r5,r8,-31368
	ctx.r5.s64 = ctx.r8.s64 + -31368;
	// stw r7,15840(r31)
	ctx.current_instruction = 0x8815B8D0;
	REX_STORE_U32(ctx.r31.u32 + 15840, ctx.r7.u32);
	// stw r6,3092(r31)
	ctx.current_instruction = 0x8815B8D4;
	REX_STORE_U32(ctx.r31.u32 + 3092, ctx.r6.u32);
	// stw r5,3100(r31)
	ctx.current_instruction = 0x8815B8D8;
	REX_STORE_U32(ctx.r31.u32 + 3100, ctx.r5.u32);
	// b 0x8815b8ec
	goto loc_8815B8EC;
loc_8815B8E0:
	// lis r10,-30715
	ctx.r10.s64 = -2012938240;
	// addi r9,r10,31816
	ctx.r9.s64 = ctx.r10.s64 + 31816;
	// stw r9,3092(r31)
	ctx.current_instruction = 0x8815B8E8;
	REX_STORE_U32(ctx.r31.u32 + 3092, ctx.r9.u32);
loc_8815B8EC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815b9b0
	if (ctx.cr6.eq) goto loc_8815B9B0;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r8,3200(r31)
	ctx.current_instruction = 0x8815B8F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r5,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// adde r9,r6,r7
	temp.u8 = (ctx.r6.u32 + ctx.r7.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r4,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 31;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stw r9,1936(r31)
	ctx.current_instruction = 0x8815B918;
	REX_STORE_U32(ctx.r31.u32 + 1936, ctx.r9.u32);
	// subfc r10,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lis r9,-30696
	ctx.r9.s64 = -2011693056;
	// adde r10,r3,r4
	temp.u8 = (ctx.r3.u32 + ctx.r4.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r7,r9,11312
	ctx.r7.s64 = ctx.r9.s64 + 11312;
	// stw r10,1940(r31)
	ctx.current_instruction = 0x8815B92C;
	REX_STORE_U32(ctx.r31.u32 + 1940, ctx.r10.u32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8815b944
	if (!ctx.cr6.eq) goto loc_8815B944;
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// addi r9,r10,-31888
	ctx.r9.s64 = ctx.r10.s64 + -31888;
	// b 0x8815b94c
	goto loc_8815B94C;
loc_8815B944:
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// addi r9,r10,-17240
	ctx.r9.s64 = ctx.r10.s64 + -17240;
loc_8815B94C:
	// stw r9,3192(r31)
	ctx.current_instruction = 0x8815B94C;
	REX_STORE_U32(ctx.r31.u32 + 3192, ctx.r9.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8815b984
	if (ctx.cr6.lt) goto loc_8815B984;
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// addi r9,r11,-288
	ctx.r9.s64 = ctx.r11.s64 + -288;
	// lis r11,-30695
	ctx.r11.s64 = -2011627520;
	// addi r8,r10,-11240
	ctx.r8.s64 = ctx.r10.s64 + -11240;
	// stw r9,3108(r31)
	ctx.current_instruction = 0x8815B96C;
	REX_STORE_U32(ctx.r31.u32 + 3108, ctx.r9.u32);
	// addi r10,r11,-11240
	ctx.r10.s64 = ctx.r11.s64 + -11240;
	// stw r8,3112(r31)
	ctx.current_instruction = 0x8815B974;
	REX_STORE_U32(ctx.r31.u32 + 3112, ctx.r8.u32);
	// stw r10,20724(r31)
	ctx.current_instruction = 0x8815B978;
	REX_STORE_U32(ctx.r31.u32 + 20724, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_8815B984:
	// lis r11,-30697
	ctx.r11.s64 = -2011758592;
	// lis r10,-30697
	ctx.r10.s64 = -2011758592;
	// addi r9,r11,-11968
	ctx.r9.s64 = ctx.r11.s64 + -11968;
	// lis r11,-30695
	ctx.r11.s64 = -2011627520;
	// addi r8,r10,-11600
	ctx.r8.s64 = ctx.r10.s64 + -11600;
	// stw r9,3108(r31)
	ctx.current_instruction = 0x8815B998;
	REX_STORE_U32(ctx.r31.u32 + 3108, ctx.r9.u32);
	// addi r10,r11,-11240
	ctx.r10.s64 = ctx.r11.s64 + -11240;
	// stw r8,3112(r31)
	ctx.current_instruction = 0x8815B9A0;
	REX_STORE_U32(ctx.r31.u32 + 3112, ctx.r8.u32);
	// stw r10,20724(r31)
	ctx.current_instruction = 0x8815B9A4;
	REX_STORE_U32(ctx.r31.u32 + 20724, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_8815B9B0:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x8815B9B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// lis r10,-30697
	ctx.r10.s64 = -2011758592;
	// lis r9,-30697
	ctx.r9.s64 = -2011758592;
	// stw r29,1940(r31)
	ctx.current_instruction = 0x8815B9BC;
	REX_STORE_U32(ctx.r31.u32 + 1940, ctx.r29.u32);
	// lis r8,-30697
	ctx.r8.s64 = -2011758592;
	// addi r7,r10,-3776
	ctx.r7.s64 = ctx.r10.s64 + -3776;
	// addi r6,r9,-10872
	ctx.r6.s64 = ctx.r9.s64 + -10872;
	// stw r11,15532(r31)
	ctx.current_instruction = 0x8815B9CC;
	REX_STORE_U32(ctx.r31.u32 + 15532, ctx.r11.u32);
	// lis r11,-30695
	ctx.r11.s64 = -2011627520;
	// addi r5,r8,-10504
	ctx.r5.s64 = ctx.r8.s64 + -10504;
	// stw r7,3192(r31)
	ctx.current_instruction = 0x8815B9D8;
	REX_STORE_U32(ctx.r31.u32 + 3192, ctx.r7.u32);
	// addi r10,r11,-11240
	ctx.r10.s64 = ctx.r11.s64 + -11240;
	// stw r6,3108(r31)
	ctx.current_instruction = 0x8815B9E0;
	REX_STORE_U32(ctx.r31.u32 + 3108, ctx.r6.u32);
	// stw r5,3112(r31)
	ctx.current_instruction = 0x8815B9E4;
	REX_STORE_U32(ctx.r31.u32 + 3112, ctx.r5.u32);
	// stw r10,20724(r31)
	ctx.current_instruction = 0x8815B9E8;
	REX_STORE_U32(ctx.r31.u32 + 20724, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88167B48) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88167B48;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88167B48) {
			switch (rex_dispatch_address) {
				case 0x88167B70:
				case 0x88167C18:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88167B48;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88167B70: goto loc_88167B70;
		case 0x88167C18: goto loc_88167C18;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88167B4C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88167B50;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88167B54;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88167B58;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,3752
	ctx.r4.s64 = ctx.r3.s64 + 3752;
	// addi r3,r3,3744
	ctx.r3.s64 = ctx.r3.s64 + 3744;
	// bl 0x88171680
	ctx.lr = 0x88167B70;
	sub_88171680(ctx, base);
loc_88167B70:
	// lwz r11,3744(r31)
	ctx.current_instruction = 0x88167B70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3744);
	// lwz r9,3752(r31)
	ctx.current_instruction = 0x88167B74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3752);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x88167B78;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,3776(r31)
	ctx.current_instruction = 0x88167B7C;
	REX_STORE_U32(ctx.r31.u32 + 3776, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.current_instruction = 0x88167B80;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,3780(r31)
	ctx.current_instruction = 0x88167B84;
	REX_STORE_U32(ctx.r31.u32 + 3780, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.current_instruction = 0x88167B88;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,3784(r31)
	ctx.current_instruction = 0x88167B8C;
	REX_STORE_U32(ctx.r31.u32 + 3784, ctx.r6.u32);
	// lwz r5,0(r9)
	ctx.current_instruction = 0x88167B90;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,3788(r31)
	ctx.current_instruction = 0x88167B98;
	REX_STORE_U32(ctx.r31.u32 + 3788, ctx.r5.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r4,4(r9)
	ctx.current_instruction = 0x88167BA0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r4,3792(r31)
	ctx.current_instruction = 0x88167BA4;
	REX_STORE_U32(ctx.r31.u32 + 3792, ctx.r4.u32);
	// lwz r3,8(r9)
	ctx.current_instruction = 0x88167BA8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r3,3796(r31)
	ctx.current_instruction = 0x88167BAC;
	REX_STORE_U32(ctx.r31.u32 + 3796, ctx.r3.u32);
	// beq cr6,0x88167bc0
	if (ctx.cr6.eq) goto loc_88167BC0;
	// lwz r11,220(r31)
	ctx.current_instruction = 0x88167BB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88167bc4
	goto loc_88167BC4;
loc_88167BC0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_88167BC4:
	// lwz r6,220(r31)
	ctx.current_instruction = 0x88167BC4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r7,3776(r31)
	ctx.current_instruction = 0x88167BCC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// lwz r11,224(r31)
	ctx.current_instruction = 0x88167BD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r8,3780(r31)
	ctx.current_instruction = 0x88167BD4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r9,3784(r31)
	ctx.current_instruction = 0x88167BDC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r6,3792(r31)
	ctx.current_instruction = 0x88167BE0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r3,3796(r31)
	ctx.current_instruction = 0x88167BE8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r5,3812(r31)
	ctx.current_instruction = 0x88167BF0;
	REX_STORE_U32(ctx.r31.u32 + 3812, ctx.r5.u32);
	// stw r7,3856(r31)
	ctx.current_instruction = 0x88167BF4;
	REX_STORE_U32(ctx.r31.u32 + 3856, ctx.r7.u32);
	// stw r4,3860(r31)
	ctx.current_instruction = 0x88167BF8;
	REX_STORE_U32(ctx.r31.u32 + 3860, ctx.r4.u32);
	// stw r11,3864(r31)
	ctx.current_instruction = 0x88167BFC;
	REX_STORE_U32(ctx.r31.u32 + 3864, ctx.r11.u32);
	// stw r10,14824(r31)
	ctx.current_instruction = 0x88167C00;
	REX_STORE_U32(ctx.r31.u32 + 14824, ctx.r10.u32);
	// stw r6,14828(r31)
	ctx.current_instruction = 0x88167C04;
	REX_STORE_U32(ctx.r31.u32 + 14828, ctx.r6.u32);
	// stw r3,14832(r31)
	ctx.current_instruction = 0x88167C08;
	REX_STORE_U32(ctx.r31.u32 + 14832, ctx.r3.u32);
	// beq cr6,0x88167c18
	if (ctx.cr6.eq) goto loc_88167C18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881610a8
	ctx.lr = 0x88167C18;
	sub_881610A8(ctx, base);
loc_88167C18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88167C1C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88167C24;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88167C28;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8816D998) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8816D998;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8816D998) {
			switch (rex_dispatch_address) {
				case 0x8816D9C4:
				case 0x8816D9F0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8816D998;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8816D9C4: goto loc_8816D9C4;
		case 0x8816D9F0: goto loc_8816D9F0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8816D99C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8816D9A0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8816D9A4;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3692(r3)
	ctx.current_instruction = 0x8816D9A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3692);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8816da10
	if (!ctx.cr6.eq) goto loc_8816DA10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r3)
	ctx.current_instruction = 0x8816D9BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// bl 0x88155e98
	ctx.lr = 0x8816D9C4;
	sub_88155E98(ctx, base);
loc_8816D9C4:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8816D9C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// slw r11,r10,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8816da10
	if (!ctx.cr6.eq) goto loc_8816DA10;
	// lwz r11,3616(r31)
	ctx.current_instruction = 0x8816D9E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3616);
	// lwz r3,84(r31)
	ctx.current_instruction = 0x8816D9E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x88156320
	ctx.lr = 0x8816D9F0;
	sub_88156320(ctx, base);
loc_8816D9F0:
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8816DA00;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8816DA08;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8816DA10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8816DA18;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8816DA20;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881713E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881713E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881713E8) {
			switch (rex_dispatch_address) {
				case 0x881713F0:
				case 0x88171424:
				case 0x88171454:
				case 0x881714EC:
				case 0x88171580:
				case 0x881715AC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881713E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881713F0: goto loc_881713F0;
		case 0x88171424: goto loc_88171424;
		case 0x88171454: goto loc_88171454;
		case 0x881714EC: goto loc_881714EC;
		case 0x88171580: goto loc_88171580;
		case 0x881715AC: goto loc_881715AC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881713F0;
	__savegprlr_26(ctx, base);
loc_881713F0:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881713F0;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r11,456(r3)
	ctx.current_instruction = 0x881713FC;
	REX_STORE_U32(ctx.r3.u32 + 456, ctx.r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r11,336(r3)
	ctx.current_instruction = 0x88171404;
	REX_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x881ae400
	ctx.lr = 0x88171424;
	sub_881AE400(ctx, base);
loc_88171424:
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x88171424;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88171574
	if (ctx.cr6.eq) goto loc_88171574;
	// lwz r30,84(r31)
	ctx.current_instruction = 0x88171430;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// addi r29,r11,10224
	ctx.r29.s64 = ctx.r11.s64 + 10224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r11,0(r30)
	ctx.current_instruction = 0x88171440;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// rldicl r10,r11,13,51
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 13) & 0x1FFF;
	// rlwinm r26,r10,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r26,r29
	ctx.current_instruction = 0x8817144C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r29.u32);
	// bl 0x88156500
	ctx.lr = 0x88171454;
	sub_88156500(ctx, base);
loc_88171454:
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// li r27,3
	ctx.r27.s64 = 3;
	// lbzx r11,r26,r9
	ctx.current_instruction = 0x8817145C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8817146c
	if (!ctx.cr6.eq) goto loc_8817146C;
	// stw r27,20(r30)
	ctx.current_instruction = 0x88171468;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
loc_8817146C:
	// lwz r9,84(r31)
	ctx.current_instruction = 0x8817146C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r8,20(r9)
	ctx.current_instruction = 0x88171474;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8817148c
	if (ctx.cr6.eq) goto loc_8817148C;
loc_88171480:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8817148C:
	// lbz r11,80(r1)
	ctx.current_instruction = 0x8817148C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,244(r31)
	ctx.current_instruction = 0x88171490;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x881714b4
	if (!ctx.cr6.gt) goto loc_881714B4;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stb r11,0(r28)
	ctx.current_instruction = 0x881714AC;
	REX_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// b 0x881714d0
	goto loc_881714D0;
loc_881714B4:
	// lwz r10,240(r31)
	ctx.current_instruction = 0x881714B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881714cc
	if (!ctx.cr6.lt) goto loc_881714CC;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stb r11,0(r28)
	ctx.current_instruction = 0x881714C4;
	REX_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// b 0x881714d0
	goto loc_881714D0;
loc_881714CC:
	// stb r11,0(r28)
	ctx.current_instruction = 0x881714CC;
	REX_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
loc_881714D0:
	// lwz r30,84(r31)
	ctx.current_instruction = 0x881714D0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r11,0(r30)
	ctx.current_instruction = 0x881714D8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// rldicl r10,r11,13,51
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 13) & 0x1FFF;
	// rlwinm r26,r10,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r26,r29
	ctx.current_instruction = 0x881714E4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r29.u32);
	// bl 0x88156500
	ctx.lr = 0x881714EC;
	sub_88156500(ctx, base);
loc_881714EC:
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// lbzx r11,r26,r9
	ctx.current_instruction = 0x881714F0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x88171500
	if (!ctx.cr6.eq) goto loc_88171500;
	// stw r27,20(r30)
	ctx.current_instruction = 0x881714FC;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
loc_88171500:
	// lwz r9,84(r31)
	ctx.current_instruction = 0x88171500;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r8,20(r9)
	ctx.current_instruction = 0x88171508;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x88171480
	if (!ctx.cr6.eq) goto loc_88171480;
	// lbz r11,81(r1)
	ctx.current_instruction = 0x88171514;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lwz r9,244(r31)
	ctx.current_instruction = 0x88171518;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x88171544
	if (!ctx.cr6.gt) goto loc_88171544;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,1(r28)
	ctx.current_instruction = 0x88171538;
	REX_STORE_U8(ctx.r28.u32 + 1, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88171544:
	// lwz r10,240(r31)
	ctx.current_instruction = 0x88171544;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88171564
	if (!ctx.cr6.lt) goto loc_88171564;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,1(r28)
	ctx.current_instruction = 0x88171558;
	REX_STORE_U8(ctx.r28.u32 + 1, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88171564:
	// stb r11,1(r28)
	ctx.current_instruction = 0x88171564;
	REX_STORE_U8(ctx.r28.u32 + 1, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88171574:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8816e188
	ctx.lr = 0x88171580;
	sub_8816E188(ctx, base);
loc_88171580:
	// lbz r9,84(r1)
	ctx.current_instruction = 0x88171580;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,80(r1)
	ctx.current_instruction = 0x88171584;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// lbz r8,85(r1)
	ctx.current_instruction = 0x8817158C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r7,81(r1)
	ctx.current_instruction = 0x88171590;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r4,3620(r31)
	ctx.current_instruction = 0x88171598;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3620);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stb r6,82(r1)
	ctx.current_instruction = 0x881715A0;
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// stb r5,83(r1)
	ctx.current_instruction = 0x881715A4;
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r5.u8);
	// bl 0x8816e118
	ctx.lr = 0x881715AC;
	sub_8816E118(ctx, base);
loc_881715AC:
	// lbz r9,82(r1)
	ctx.current_instruction = 0x881715AC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r8,83(r1)
	ctx.current_instruction = 0x881715B0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r9,0(r28)
	ctx.current_instruction = 0x881715B8;
	REX_STORE_U8(ctx.r28.u32 + 0, ctx.r9.u8);
	// stb r8,1(r28)
	ctx.current_instruction = 0x881715BC;
	REX_STORE_U8(ctx.r28.u32 + 1, ctx.r8.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88176E70) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88176E70);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88176E70;
	ctx.current_instruction = 0x88176E70;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88176e84
	if (!ctx.cr6.eq) goto loc_88176E84;
	// li r3,-3
	ctx.r3.s64 = -3;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88176E84:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x88176e90
	if (!ctx.cr6.lt) goto loc_88176E90;
	// neg r4,r4
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r4.u64);
loc_88176E90:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x88176e9c
	if (!ctx.cr6.lt) goto loc_88176E9C;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
loc_88176E9C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x88176ea8
	if (!ctx.cr6.lt) goto loc_88176EA8;
	// neg r6,r6
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r6.u64);
loc_88176EA8:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x88176eb4
	if (!ctx.cr6.lt) goto loc_88176EB4;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_88176EB4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,20(r11)
	ctx.current_instruction = 0x88176EB8;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r5,15388(r11)
	ctx.current_instruction = 0x88176EBC;
	REX_STORE_U32(ctx.r11.u32 + 15388, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,15392(r11)
	ctx.current_instruction = 0x88176EC4;
	REX_STORE_U32(ctx.r11.u32 + 15392, ctx.r6.u32);
	// stw r7,15396(r11)
	ctx.current_instruction = 0x88176EC8;
	REX_STORE_U32(ctx.r11.u32 + 15396, ctx.r7.u32);
	// stw r10,15400(r11)
	ctx.current_instruction = 0x88176ECC;
	REX_STORE_U32(ctx.r11.u32 + 15400, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88177C20) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88177C20;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88177C20) {
			switch (rex_dispatch_address) {
				case 0x88177C54:
				case 0x88177C68:
				case 0x88177C7C:
				case 0x88177C90:
				case 0x88177CA4:
				case 0x88177CB8:
				case 0x88177CCC:
				case 0x88177CD8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88177C20;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88177C54: goto loc_88177C54;
		case 0x88177C68: goto loc_88177C68;
		case 0x88177C7C: goto loc_88177C7C;
		case 0x88177C90: goto loc_88177C90;
		case 0x88177CA4: goto loc_88177CA4;
		case 0x88177CB8: goto loc_88177CB8;
		case 0x88177CCC: goto loc_88177CCC;
		case 0x88177CD8: goto loc_88177CD8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88177C24;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88177C28;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88177C2C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88177C30;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177cd8
	if (ctx.cr6.eq) goto loc_88177CD8;
	// lwz r3,20(r3)
	ctx.current_instruction = 0x88177C40;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177c58
	if (ctx.cr6.eq) goto loc_88177C58;
	// bl 0x8815ba70
	ctx.lr = 0x88177C54;
	sub_8815BA70(ctx, base);
loc_88177C54:
	// stw r30,20(r31)
	ctx.current_instruction = 0x88177C54;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_88177C58:
	// lwz r3,24(r31)
	ctx.current_instruction = 0x88177C58;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177c6c
	if (ctx.cr6.eq) goto loc_88177C6C;
	// bl 0x8815ba70
	ctx.lr = 0x88177C68;
	sub_8815BA70(ctx, base);
loc_88177C68:
	// stw r30,24(r31)
	ctx.current_instruction = 0x88177C68;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_88177C6C:
	// lwz r3,28(r31)
	ctx.current_instruction = 0x88177C6C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177c80
	if (ctx.cr6.eq) goto loc_88177C80;
	// bl 0x8815ba70
	ctx.lr = 0x88177C7C;
	sub_8815BA70(ctx, base);
loc_88177C7C:
	// stw r30,28(r31)
	ctx.current_instruction = 0x88177C7C;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_88177C80:
	// lwz r3,32(r31)
	ctx.current_instruction = 0x88177C80;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177c94
	if (ctx.cr6.eq) goto loc_88177C94;
	// bl 0x8815ba70
	ctx.lr = 0x88177C90;
	sub_8815BA70(ctx, base);
loc_88177C90:
	// stw r30,32(r31)
	ctx.current_instruction = 0x88177C90;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_88177C94:
	// lwz r3,60(r31)
	ctx.current_instruction = 0x88177C94;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ca8
	if (ctx.cr6.eq) goto loc_88177CA8;
	// bl 0x8815ba70
	ctx.lr = 0x88177CA4;
	sub_8815BA70(ctx, base);
loc_88177CA4:
	// stw r30,60(r31)
	ctx.current_instruction = 0x88177CA4;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_88177CA8:
	// lwz r3,64(r31)
	ctx.current_instruction = 0x88177CA8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177cbc
	if (ctx.cr6.eq) goto loc_88177CBC;
	// bl 0x8815ba70
	ctx.lr = 0x88177CB8;
	sub_8815BA70(ctx, base);
loc_88177CB8:
	// stw r30,64(r31)
	ctx.current_instruction = 0x88177CB8;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_88177CBC:
	// lwz r3,68(r31)
	ctx.current_instruction = 0x88177CBC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177cd0
	if (ctx.cr6.eq) goto loc_88177CD0;
	// bl 0x8815ba70
	ctx.lr = 0x88177CCC;
	sub_8815BA70(ctx, base);
loc_88177CCC:
	// stw r30,68(r31)
	ctx.current_instruction = 0x88177CCC;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_88177CD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8815ba70
	ctx.lr = 0x88177CD8;
	sub_8815BA70(ctx, base);
loc_88177CD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88177CDC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88177CE4;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88177CE8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8817A068) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8817A068);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817A068;
	ctx.current_instruction = 0x8817A068;
	PPCRegister temp{};
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,6732(r11)
	ctx.current_instruction = 0x8817A06C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x8817a308
	if (!ctx.cr6.gt) goto loc_8817A308;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// ble cr6,0x8817a308
	if (!ctx.cr6.gt) goto loc_8817A308;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8817A080;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// std r8,-16(r1)
	ctx.current_instruction = 0x8817A094;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.current_instruction = 0x8817A098;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f12,12088(r10)
	ctx.current_instruction = 0x8817A09C;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 12088);
	// fadd f11,f1,f12
	ctx.f11.f64 = ctx.f1.f64 + ctx.f12.f64;
	// lfs f0,6728(r9)
	ctx.current_instruction = 0x8817A0A4;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6728);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f0,7000(r7)
	ctx.current_instruction = 0x8817A0AC;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 7000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fctiwz f8,f11
	ctx.f8.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f8,-16(r1)
	ctx.current_instruction = 0x8817A0B8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r6,-12(r1)
	ctx.current_instruction = 0x8817A0BC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,-16(r1)
	ctx.current_instruction = 0x8817A0C4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f7,-16(r1)
	ctx.current_instruction = 0x8817A0C8;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fcfid f5,f13
	ctx.f5.f64 = double(ctx.f13.s64);
	// fsubs f0,f2,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fneg f4,f10
	ctx.f4.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// fsubs f11,f2,f4
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fadds f10,f3,f9
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8817a0f8
	if (!ctx.cr6.gt) goto loc_8817A0F8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8817A0F8:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	ctx.current_instruction = 0x8817A0FC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r5,-12(r1)
	ctx.current_instruction = 0x8817A100;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8817a164
	if (ctx.cr6.lt) goto loc_8817A164;
	// fadd f0,f10,f12
	ctx.f0.f64 = ctx.f10.f64 + ctx.f12.f64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	ctx.current_instruction = 0x8817A120;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r9,-12(r1)
	ctx.current_instruction = 0x8817A124;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A128:
	// lwz r7,20(r3)
	ctx.current_instruction = 0x8817A128;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	ctx.current_instruction = 0x8817A138;
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.current_instruction = 0x8817A13C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r4)
	ctx.current_instruction = 0x8817A148;
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.current_instruction = 0x8817A14C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	ctx.current_instruction = 0x8817A154;
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r4,20(r3)
	ctx.current_instruction = 0x8817A158;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r8,r4
	ctx.current_instruction = 0x8817A15C;
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r9.u32);
	// blt cr6,0x8817a128
	if (ctx.cr6.lt) goto loc_8817A128;
loc_8817A164:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817a19c
	if (!ctx.cr6.lt) goto loc_8817A19C;
	// fadd f0,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64 + ctx.f12.f64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	ctx.current_instruction = 0x8817A184;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r9,-12(r1)
	ctx.current_instruction = 0x8817A188;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A18C:
	// lwz r8,20(r3)
	ctx.current_instruction = 0x8817A18C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r8,r10
	ctx.current_instruction = 0x8817A190;
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8817a18c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817A18C;
loc_8817A19C:
	// lwz r10,4(r3)
	ctx.current_instruction = 0x8817A19C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	ctx.current_instruction = 0x8817A1A4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.current_instruction = 0x8817A1A8;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x8817a1c0
	if (ctx.cr6.gt) goto loc_8817A1C0;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8817A1C0:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	ctx.current_instruction = 0x8817A1C4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.current_instruction = 0x8817A1C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8817a1f8
	if (!ctx.cr6.lt) goto loc_8817A1F8;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8817A1E4:
	// lwz r9,20(r3)
	ctx.current_instruction = 0x8817A1E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	ctx.current_instruction = 0x8817A1EC;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8817a1e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817A1E4;
loc_8817A1F8:
	// lwz r10,4(r3)
	ctx.current_instruction = 0x8817A1F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8817a234
	if (!ctx.cr6.lt) goto loc_8817A234;
	// fadd f0,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64 + ctx.f12.f64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	ctx.current_instruction = 0x8817A210;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r8,-12(r1)
	ctx.current_instruction = 0x8817A214;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A218:
	// lwz r10,20(r3)
	ctx.current_instruction = 0x8817A218;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	ctx.current_instruction = 0x8817A220;
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,4(r3)
	ctx.current_instruction = 0x8817A228;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8817a218
	if (ctx.cr6.lt) goto loc_8817A218;
loc_8817A234:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8817a270
	if (!ctx.cr6.gt) goto loc_8817A270;
	// fadd f0,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 + ctx.f12.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	ctx.current_instruction = 0x8817A24C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r8,-12(r1)
	ctx.current_instruction = 0x8817A250;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A254:
	// lwz r10,24(r3)
	ctx.current_instruction = 0x8817A254;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r8,r10,r11
	ctx.current_instruction = 0x8817A25C;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r3)
	ctx.current_instruction = 0x8817A264;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8817a254
	if (ctx.cr6.lt) goto loc_8817A254;
loc_8817A270:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8817a398
	if (!ctx.cr6.gt) goto loc_8817A398;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,12180(r10)
	ctx.current_instruction = 0x8817A284;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12180);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_8817A28C:
	// lwz r10,20(r3)
	ctx.current_instruction = 0x8817A28C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,28(r3)
	ctx.current_instruction = 0x8817A294;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r7,r10,r11
	ctx.current_instruction = 0x8817A298;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	ctx.current_instruction = 0x8817A2A0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.current_instruction = 0x8817A2A4;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fadd f8,f9,f12
	ctx.f8.f64 = ctx.f9.f64 + ctx.f12.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r8,r11
	ctx.current_instruction = 0x8817A2BC;
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.f7.u32);
	// lwz r5,24(r3)
	ctx.current_instruction = 0x8817A2C0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwzx r10,r5,r11
	ctx.current_instruction = 0x8817A2C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwz r4,32(r3)
	ctx.current_instruction = 0x8817A2C8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,-8(r1)
	ctx.current_instruction = 0x8817A2D0;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f6,-8(r1)
	ctx.current_instruction = 0x8817A2D4;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fsubs f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// fadd f2,f3,f12
	ctx.f2.f64 = ctx.f3.f64 + ctx.f12.f64;
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfiwx f1,r4,r11
	ctx.current_instruction = 0x8817A2EC;
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.f1.u32);
	// lwz r7,4(r3)
	ctx.current_instruction = 0x8817A2F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8817a28c
	if (ctx.cr6.lt) goto loc_8817A28C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8817A308:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8817A308;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8817a398
	if (!ctx.cr6.gt) goto loc_8817A398;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,6708(r9)
	ctx.current_instruction = 0x8817A324;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfd f0,12088(r8)
	ctx.current_instruction = 0x8817A32C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 12088);
	// fadds f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fadd f10,f1,f0
	ctx.f10.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fadd f9,f12,f0
	ctx.f9.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fadd f8,f11,f0
	ctx.f8.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f7,f10
	ctx.f7.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f7,-8(r1)
	ctx.current_instruction = 0x8817A344;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f7.u64);
	// lwz r9,-4(r1)
	ctx.current_instruction = 0x8817A348;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// fctiwz f6,f9
	ctx.f6.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,-16(r1)
	ctx.current_instruction = 0x8817A350;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,-8(r1)
	ctx.current_instruction = 0x8817A358;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f5.u64);
	// lwz r7,-4(r1)
	ctx.current_instruction = 0x8817A35C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// lwz r8,-12(r1)
	ctx.current_instruction = 0x8817A360;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A364:
	// lwz r6,20(r3)
	ctx.current_instruction = 0x8817A364;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r7,r6,r11
	ctx.current_instruction = 0x8817A36C;
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r5,24(r3)
	ctx.current_instruction = 0x8817A370;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r5,r11
	ctx.current_instruction = 0x8817A374;
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r4,28(r3)
	ctx.current_instruction = 0x8817A378;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stwx r8,r4,r11
	ctx.current_instruction = 0x8817A37C;
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r6,32(r3)
	ctx.current_instruction = 0x8817A380;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stwx r9,r6,r11
	ctx.current_instruction = 0x8817A384;
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,4(r3)
	ctx.current_instruction = 0x8817A38C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8817a364
	if (ctx.cr6.lt) goto loc_8817A364;
loc_8817A398:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8817FBC0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8817FBC0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8817FBC0) {
			switch (rex_dispatch_address) {
				case 0x8817FBC8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817FBC0;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x8817FBC8: goto loc_8817FBC8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8817FBC8;
	__savegprlr_26(ctx, base);
loc_8817FBC8:
	// li r10,512
	ctx.r10.s64 = 512;
	// addi r29,r3,23984
	ctx.r29.s64 = ctx.r3.s64 + 23984;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8817FBD8:
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// srawi r31,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 5;
	// srawi r28,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 6;
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// srawi r27,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 8;
	// srawi r4,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 4;
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// clrlwi r26,r4,31
	ctx.r26.u64 = ctx.r4.u32 & 0x1;
	// clrlwi r6,r28,31
	ctx.r6.u64 = ctx.r28.u32 & 0x1;
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// clrlwi r8,r27,31
	ctx.r8.u64 = ctx.r27.u32 & 0x1;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// beq cr6,0x8817fc2c
	if (ctx.cr6.eq) goto loc_8817FC2C;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_8817FC2C:
	// clrlwi r28,r9,24
	ctx.r28.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// xor r8,r28,r7
	ctx.r8.u64 = ctx.r28.u64 ^ ctx.r7.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// bne cr6,0x8817fc48
	if (!ctx.cr6.eq) goto loc_8817FC48;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
loc_8817FC48:
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// beq cr6,0x8817fc6c
	if (ctx.cr6.eq) goto loc_8817FC6C;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_8817FC6C:
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// beq cr6,0x8817fc8c
	if (ctx.cr6.eq) goto loc_8817FC8C;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_8817FC8C:
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// xor r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// rlwinm r7,r4,1,23,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1FE;
	// or r6,r7,r5
	ctx.r6.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// or r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// blt cr6,0x8817fcd8
	if (ctx.cr6.lt) goto loc_8817FCD8;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r10,-256
	ctx.r9.s64 = ctx.r10.s64 + -256;
	// lbz r7,-256(r10)
	ctx.current_instruction = 0x8817FCC4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + -256);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stb r5,-256(r10)
	ctx.current_instruction = 0x8817FCD0;
	REX_STORE_U8(ctx.r10.u32 + -256, ctx.r5.u8);
	// b 0x8817fcdc
	goto loc_8817FCDC;
loc_8817FCD8:
	// stbx r9,r11,r29
	ctx.current_instruction = 0x8817FCD8;
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u8);
loc_8817FCDC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8817fbd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817FBD8;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r3,24240
	ctx.r9.s64 = ctx.r3.s64 + 24240;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8817FCF4:
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r7,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwimi r10,r8,1,0,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm r3,r5,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwimi r6,r10,1,0,30
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r6.u64 & 0xFFFFFFFF00000001);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r8,r3,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwimi r4,r6,1,0,30
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwimi r10,r4,1,0,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwimi r7,r10,1,0,30
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r7.u64 & 0xFFFFFFFF00000001);
	// rlwimi r5,r7,1,0,30
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r5.u64 & 0xFFFFFFFF00000001);
	// rlwimi r6,r5,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// rlwinm r4,r6,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r3,r4,29,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0xFF;
	// stbx r3,r11,r9
	ctx.current_instruction = 0x8817FD48;
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8817fcf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817FCF4;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881839F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881839F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881839F0) {
			switch (rex_dispatch_address) {
				case 0x881839F8:
				case 0x88183A28:
				case 0x88183A40:
				case 0x88183A58:
				case 0x88183A70:
				case 0x88183ADC:
				case 0x88183AF4:
				case 0x88183B0C:
				case 0x88183B24:
				case 0x88183B3C:
				case 0x88183B54:
				case 0x88183B6C:
				case 0x88183B84:
				case 0x88183B9C:
				case 0x88183BB4:
				case 0x88183BCC:
				case 0x88183BE4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881839F0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881839F8: goto loc_881839F8;
		case 0x88183A28: goto loc_88183A28;
		case 0x88183A40: goto loc_88183A40;
		case 0x88183A58: goto loc_88183A58;
		case 0x88183A70: goto loc_88183A70;
		case 0x88183ADC: goto loc_88183ADC;
		case 0x88183AF4: goto loc_88183AF4;
		case 0x88183B0C: goto loc_88183B0C;
		case 0x88183B24: goto loc_88183B24;
		case 0x88183B3C: goto loc_88183B3C;
		case 0x88183B54: goto loc_88183B54;
		case 0x88183B6C: goto loc_88183B6C;
		case 0x88183B84: goto loc_88183B84;
		case 0x88183B9C: goto loc_88183B9C;
		case 0x88183BB4: goto loc_88183BB4;
		case 0x88183BCC: goto loc_88183BCC;
		case 0x88183BE4: goto loc_88183BE4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881839F8;
	__savegprlr_29(ctx, base);
loc_881839F8:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881839F8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24688(r3)
	ctx.current_instruction = 0x881839FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,15720(r3)
	ctx.current_instruction = 0x88183A04;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 15720);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,3396(r3)
	ctx.current_instruction = 0x88183A10;
	REX_STORE_U32(ctx.r3.u32 + 3396, ctx.r10.u32);
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88183a2c
	if (ctx.cr6.eq) goto loc_88183A2C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88183A28;
	sub_8815E530(ctx, base);
loc_88183A28:
	// stw r30,15720(r31)
	ctx.current_instruction = 0x88183A28;
	REX_STORE_U32(ctx.r31.u32 + 15720, ctx.r30.u32);
loc_88183A2C:
	// lwz r4,15728(r31)
	ctx.current_instruction = 0x88183A2C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15728);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88183a44
	if (ctx.cr6.eq) goto loc_88183A44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88183A40;
	sub_8815E530(ctx, base);
loc_88183A40:
	// stw r30,15728(r31)
	ctx.current_instruction = 0x88183A40;
	REX_STORE_U32(ctx.r31.u32 + 15728, ctx.r30.u32);
loc_88183A44:
	// lwz r4,15724(r31)
	ctx.current_instruction = 0x88183A44;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15724);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88183a5c
	if (ctx.cr6.eq) goto loc_88183A5C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88183A58;
	sub_8815E530(ctx, base);
loc_88183A58:
	// stw r30,15724(r31)
	ctx.current_instruction = 0x88183A58;
	REX_STORE_U32(ctx.r31.u32 + 15724, ctx.r30.u32);
loc_88183A5C:
	// lwz r4,15732(r31)
	ctx.current_instruction = 0x88183A5C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15732);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88183a74
	if (ctx.cr6.eq) goto loc_88183A74;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88183A70;
	sub_8815E530(ctx, base);
loc_88183A70:
	// stw r30,15732(r31)
	ctx.current_instruction = 0x88183A70;
	REX_STORE_U32(ctx.r31.u32 + 15732, ctx.r30.u32);
loc_88183A74:
	// lwz r11,24688(r31)
	ctx.current_instruction = 0x88183A74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24688);
	// lwz r10,712(r11)
	ctx.current_instruction = 0x88183A78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88183ac8
	if (ctx.cr6.eq) goto loc_88183AC8;
	// lwz r11,17376(r11)
	ctx.current_instruction = 0x88183A84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 17376);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x88183ac8
	if (ctx.cr6.eq) goto loc_88183AC8;
	// stw r30,15736(r31)
	ctx.current_instruction = 0x88183A90;
	REX_STORE_U32(ctx.r31.u32 + 15736, ctx.r30.u32);
	// stw r30,15744(r31)
	ctx.current_instruction = 0x88183A94;
	REX_STORE_U32(ctx.r31.u32 + 15744, ctx.r30.u32);
	// stw r30,15752(r31)
	ctx.current_instruction = 0x88183A98;
	REX_STORE_U32(ctx.r31.u32 + 15752, ctx.r30.u32);
	// stw r30,15760(r31)
	ctx.current_instruction = 0x88183A9C;
	REX_STORE_U32(ctx.r31.u32 + 15760, ctx.r30.u32);
	// stw r30,15768(r31)
	ctx.current_instruction = 0x88183AA0;
	REX_STORE_U32(ctx.r31.u32 + 15768, ctx.r30.u32);
	// stw r30,15776(r31)
	ctx.current_instruction = 0x88183AA4;
	REX_STORE_U32(ctx.r31.u32 + 15776, ctx.r30.u32);
	// stw r30,15784(r31)
	ctx.current_instruction = 0x88183AA8;
	REX_STORE_U32(ctx.r31.u32 + 15784, ctx.r30.u32);
	// stw r30,15792(r31)
	ctx.current_instruction = 0x88183AAC;
	REX_STORE_U32(ctx.r31.u32 + 15792, ctx.r30.u32);
	// stw r30,15800(r31)
	ctx.current_instruction = 0x88183AB0;
	REX_STORE_U32(ctx.r31.u32 + 15800, ctx.r30.u32);
	// stw r30,15808(r31)
	ctx.current_instruction = 0x88183AB4;
	REX_STORE_U32(ctx.r31.u32 + 15808, ctx.r30.u32);
	// stw r30,15816(r31)
	ctx.current_instruction = 0x88183AB8;
	REX_STORE_U32(ctx.r31.u32 + 15816, ctx.r30.u32);
	// stw r30,15824(r31)
	ctx.current_instruction = 0x88183ABC;
	REX_STORE_U32(ctx.r31.u32 + 15824, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88183AC8:
	// lwz r4,15736(r31)
	ctx.current_instruction = 0x88183AC8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15736);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88183ae0
	if (ctx.cr6.eq) goto loc_88183AE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88183ADC;
	sub_8815E530(ctx, base);
loc_88183ADC:
	// stw r30,15736(r31)
	ctx.current_instruction = 0x88183ADC;
	REX_STORE_U32(ctx.r31.u32 + 15736, ctx.r30.u32);
loc_88183AE0:
	// lwz r4,15744(r31)
	ctx.current_instruction = 0x88183AE0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15744);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88183af8
	if (ctx.cr6.eq) goto loc_88183AF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88183AF4;
	sub_8815E530(ctx, base);
loc_88183AF4:
	// stw r30,15744(r31)
	ctx.current_instruction = 0x88183AF4;
	REX_STORE_U32(ctx.r31.u32 + 15744, ctx.r30.u32);
loc_88183AF8:
	// lwz r4,15752(r31)
	ctx.current_instruction = 0x88183AF8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15752);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88183b10
	if (ctx.cr6.eq) goto loc_88183B10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88183B0C;
	sub_8815E530(ctx, base);
loc_88183B0C:
	// stw r30,15752(r31)
	ctx.current_instruction = 0x88183B0C;
	REX_STORE_U32(ctx.r31.u32 + 15752, ctx.r30.u32);
loc_88183B10:
	// lwz r4,15760(r31)
	ctx.current_instruction = 0x88183B10;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15760);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88183b28
	if (ctx.cr6.eq) goto loc_88183B28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88183B24;
	sub_8815E530(ctx, base);
loc_88183B24:
	// stw r30,15760(r31)
	ctx.current_instruction = 0x88183B24;
	REX_STORE_U32(ctx.r31.u32 + 15760, ctx.r30.u32);
loc_88183B28:
	// lwz r4,15768(r31)
	ctx.current_instruction = 0x88183B28;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15768);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88183b40
	if (ctx.cr6.eq) goto loc_88183B40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88183B3C;
	sub_8815E530(ctx, base);
loc_88183B3C:
	// stw r30,15768(r31)
	ctx.current_instruction = 0x88183B3C;
	REX_STORE_U32(ctx.r31.u32 + 15768, ctx.r30.u32);
loc_88183B40:
	// lwz r4,15776(r31)
	ctx.current_instruction = 0x88183B40;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15776);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88183b58
	if (ctx.cr6.eq) goto loc_88183B58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88183B54;
	sub_8815E530(ctx, base);
loc_88183B54:
	// stw r30,15776(r31)
	ctx.current_instruction = 0x88183B54;
	REX_STORE_U32(ctx.r31.u32 + 15776, ctx.r30.u32);
loc_88183B58:
	// lwz r4,15784(r31)
	ctx.current_instruction = 0x88183B58;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88183b70
	if (ctx.cr6.eq) goto loc_88183B70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88183B6C;
	sub_8815E530(ctx, base);
loc_88183B6C:
	// stw r30,15784(r31)
	ctx.current_instruction = 0x88183B6C;
	REX_STORE_U32(ctx.r31.u32 + 15784, ctx.r30.u32);
loc_88183B70:
	// lwz r4,15792(r31)
	ctx.current_instruction = 0x88183B70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15792);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88183b88
	if (ctx.cr6.eq) goto loc_88183B88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88183B84;
	sub_8815E530(ctx, base);
loc_88183B84:
	// stw r30,15792(r31)
	ctx.current_instruction = 0x88183B84;
	REX_STORE_U32(ctx.r31.u32 + 15792, ctx.r30.u32);
loc_88183B88:
	// lwz r4,15800(r31)
	ctx.current_instruction = 0x88183B88;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15800);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88183ba0
	if (ctx.cr6.eq) goto loc_88183BA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88183B9C;
	sub_8815E530(ctx, base);
loc_88183B9C:
	// stw r30,15800(r31)
	ctx.current_instruction = 0x88183B9C;
	REX_STORE_U32(ctx.r31.u32 + 15800, ctx.r30.u32);
loc_88183BA0:
	// lwz r4,15808(r31)
	ctx.current_instruction = 0x88183BA0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15808);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88183bb8
	if (ctx.cr6.eq) goto loc_88183BB8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88183BB4;
	sub_8815E530(ctx, base);
loc_88183BB4:
	// stw r30,15808(r31)
	ctx.current_instruction = 0x88183BB4;
	REX_STORE_U32(ctx.r31.u32 + 15808, ctx.r30.u32);
loc_88183BB8:
	// lwz r4,15816(r31)
	ctx.current_instruction = 0x88183BB8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15816);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88183bd0
	if (ctx.cr6.eq) goto loc_88183BD0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88183BCC;
	sub_8815E530(ctx, base);
loc_88183BCC:
	// stw r30,15816(r31)
	ctx.current_instruction = 0x88183BCC;
	REX_STORE_U32(ctx.r31.u32 + 15816, ctx.r30.u32);
loc_88183BD0:
	// lwz r4,15824(r31)
	ctx.current_instruction = 0x88183BD0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15824);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88183be8
	if (ctx.cr6.eq) goto loc_88183BE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88183BE4;
	sub_8815E530(ctx, base);
loc_88183BE4:
	// stw r30,15824(r31)
	ctx.current_instruction = 0x88183BE4;
	REX_STORE_U32(ctx.r31.u32 + 15824, ctx.r30.u32);
loc_88183BE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88189ED8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88189ED8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88189ED8) {
			switch (rex_dispatch_address) {
				case 0x88189EE0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88189ED8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x88189EE0: goto loc_88189EE0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88189EE0;
	__savegprlr_26(ctx, base);
loc_88189EE0:
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,255
	ctx.r8.s64 = 255;
	// li r29,-1
	ctx.r29.s64 = -1;
	// add r30,r6,r10
	ctx.r30.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// subf r27,r6,r3
	ctx.r27.u64 = ctx.r3.u64 - ctx.r6.u64;
	// add r26,r3,r6
	ctx.r26.u64 = ctx.r3.u64 + ctx.r6.u64;
loc_88189F08:
	// li r11,2
	ctx.r11.s64 = 2;
	// add r10,r27,r29
	ctx.r10.u64 = ctx.r27.u64 + ctx.r29.u64;
	// add r31,r28,r6
	ctx.r31.u64 = ctx.r28.u64 + ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r7,r26,r29
	ctx.r7.u64 = ctx.r26.u64 + ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88189F20:
	// lbz r11,0(r10)
	ctx.current_instruction = 0x88189F20;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88189f30
	if (!ctx.cr6.lt) goto loc_88189F30;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_88189F30:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88189f3c
	if (!ctx.cr6.gt) goto loc_88189F3C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_88189F3C:
	// lbzx r11,r10,r6
	ctx.current_instruction = 0x88189F3C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88189f4c
	if (!ctx.cr6.lt) goto loc_88189F4C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_88189F4C:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88189f58
	if (!ctx.cr6.gt) goto loc_88189F58;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_88189F58:
	// lbz r11,0(r7)
	ctx.current_instruction = 0x88189F58;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88189f68
	if (!ctx.cr6.lt) goto loc_88189F68;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_88189F68:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88189f74
	if (!ctx.cr6.gt) goto loc_88189F74;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_88189F74:
	// lbz r11,0(r3)
	ctx.current_instruction = 0x88189F74;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88189f84
	if (!ctx.cr6.lt) goto loc_88189F84;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_88189F84:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88189f90
	if (!ctx.cr6.gt) goto loc_88189F90;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_88189F90:
	// lbz r11,0(r31)
	ctx.current_instruction = 0x88189F90;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88189fa0
	if (!ctx.cr6.lt) goto loc_88189FA0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_88189FA0:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88189fac
	if (!ctx.cr6.gt) goto loc_88189FAC;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_88189FAC:
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 + ctx.r7.u64;
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// bdnz 0x88189f20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88189F20;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r29,9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 9, ctx.xer);
	// blt cr6,0x88189f08
	if (ctx.cr6.lt) goto loc_88189F08;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// stw r7,0(r4)
	ctx.current_instruction = 0x88189FE4;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// stw r10,0(r5)
	ctx.current_instruction = 0x88189FE8;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8818D488) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8818D488;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8818D488) {
			switch (rex_dispatch_address) {
				case 0x8818D490:
				case 0x8818D4B0:
				case 0x8818D4BC:
				case 0x8818D55C:
				case 0x8818D5A4:
				case 0x8818D60C:
				case 0x8818D654:
				case 0x8818D6AC:
				case 0x8818D6F0:
				case 0x8818D754:
				case 0x8818D7D4:
				case 0x8818D81C:
				case 0x8818D874:
				case 0x8818D8A8:
				case 0x8818D8C4:
				case 0x8818D908:
				case 0x8818D918:
				case 0x8818D9A0:
				case 0x8818D9D4:
				case 0x8818DA68:
				case 0x8818DAB0:
				case 0x8818DB18:
				case 0x8818DB60:
				case 0x8818DBB8:
				case 0x8818DBFC:
				case 0x8818DC60:
				case 0x8818DCE0:
				case 0x8818DD28:
				case 0x8818DD80:
				case 0x8818DDB4:
				case 0x8818DDD0:
				case 0x8818DE34:
				case 0x8818DE7C:
				case 0x8818DEF8:
				case 0x8818DF40:
				case 0x8818DF98:
				case 0x8818DFCC:
				case 0x8818E030:
				case 0x8818E078:
				case 0x8818E0F8:
				case 0x8818E140:
				case 0x8818E198:
				case 0x8818E1CC:
				case 0x8818E254:
				case 0x8818E29C:
				case 0x8818E2F4:
				case 0x8818E328:
				case 0x8818E480:
				case 0x8818E4C8:
				case 0x8818E53C:
				case 0x8818E584:
				case 0x8818E5F0:
				case 0x8818E638:
				case 0x8818E660:
				case 0x8818E714:
				case 0x8818E75C:
				case 0x8818E7CC:
				case 0x8818E814:
				case 0x8818E884:
				case 0x8818E8CC:
				case 0x8818E8D8:
				case 0x8818E96C:
				case 0x8818E9B4:
				case 0x8818EA24:
				case 0x8818EA6C:
				case 0x8818EAE8:
				case 0x8818EB30:
				case 0x8818EBCC:
				case 0x8818EC14:
				case 0x8818EC88:
				case 0x8818ECD0:
				case 0x8818ED60:
				case 0x8818EDA8:
				case 0x8818EE10:
				case 0x8818EE58:
				case 0x8818EEB0:
				case 0x8818EEF4:
				case 0x8818EF58:
				case 0x8818EF8C:
				case 0x8818EFA4:
				case 0x8818F00C:
				case 0x8818F07C:
				case 0x8818F0C4:
				case 0x8818F148:
				case 0x8818F190:
				case 0x8818F204:
				case 0x8818F24C:
				case 0x8818F2C4:
				case 0x8818F30C:
				case 0x8818F398:
				case 0x8818F3E0:
				case 0x8818F408:
				case 0x8818F478:
				case 0x8818F4C0:
				case 0x8818F530:
				case 0x8818F578:
				case 0x8818F60C:
				case 0x8818F654:
				case 0x8818F6C4:
				case 0x8818F70C:
				case 0x8818F794:
				case 0x8818F7DC:
				case 0x8818F7F0:
				case 0x8818F854:
				case 0x8818F924:
				case 0x8818F96C:
				case 0x8818FA1C:
				case 0x8818FA64:
				case 0x8818FAC0:
				case 0x8818FC04:
				case 0x8818FC4C:
				case 0x8818FCBC:
				case 0x8818FD04:
				case 0x8818FD74:
				case 0x8818FDBC:
				case 0x8818FE2C:
				case 0x8818FE74:
				case 0x8818FEF8:
				case 0x8818FF40:
				case 0x8818FF98:
				case 0x8818FFCC:
				case 0x8818FFE4:
				case 0x8818FFEC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8818D488;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8818D490: goto loc_8818D490;
		case 0x8818D4B0: goto loc_8818D4B0;
		case 0x8818D4BC: goto loc_8818D4BC;
		case 0x8818D55C: goto loc_8818D55C;
		case 0x8818D5A4: goto loc_8818D5A4;
		case 0x8818D60C: goto loc_8818D60C;
		case 0x8818D654: goto loc_8818D654;
		case 0x8818D6AC: goto loc_8818D6AC;
		case 0x8818D6F0: goto loc_8818D6F0;
		case 0x8818D754: goto loc_8818D754;
		case 0x8818D7D4: goto loc_8818D7D4;
		case 0x8818D81C: goto loc_8818D81C;
		case 0x8818D874: goto loc_8818D874;
		case 0x8818D8A8: goto loc_8818D8A8;
		case 0x8818D8C4: goto loc_8818D8C4;
		case 0x8818D908: goto loc_8818D908;
		case 0x8818D918: goto loc_8818D918;
		case 0x8818D9A0: goto loc_8818D9A0;
		case 0x8818D9D4: goto loc_8818D9D4;
		case 0x8818DA68: goto loc_8818DA68;
		case 0x8818DAB0: goto loc_8818DAB0;
		case 0x8818DB18: goto loc_8818DB18;
		case 0x8818DB60: goto loc_8818DB60;
		case 0x8818DBB8: goto loc_8818DBB8;
		case 0x8818DBFC: goto loc_8818DBFC;
		case 0x8818DC60: goto loc_8818DC60;
		case 0x8818DCE0: goto loc_8818DCE0;
		case 0x8818DD28: goto loc_8818DD28;
		case 0x8818DD80: goto loc_8818DD80;
		case 0x8818DDB4: goto loc_8818DDB4;
		case 0x8818DDD0: goto loc_8818DDD0;
		case 0x8818DE34: goto loc_8818DE34;
		case 0x8818DE7C: goto loc_8818DE7C;
		case 0x8818DEF8: goto loc_8818DEF8;
		case 0x8818DF40: goto loc_8818DF40;
		case 0x8818DF98: goto loc_8818DF98;
		case 0x8818DFCC: goto loc_8818DFCC;
		case 0x8818E030: goto loc_8818E030;
		case 0x8818E078: goto loc_8818E078;
		case 0x8818E0F8: goto loc_8818E0F8;
		case 0x8818E140: goto loc_8818E140;
		case 0x8818E198: goto loc_8818E198;
		case 0x8818E1CC: goto loc_8818E1CC;
		case 0x8818E254: goto loc_8818E254;
		case 0x8818E29C: goto loc_8818E29C;
		case 0x8818E2F4: goto loc_8818E2F4;
		case 0x8818E328: goto loc_8818E328;
		case 0x8818E480: goto loc_8818E480;
		case 0x8818E4C8: goto loc_8818E4C8;
		case 0x8818E53C: goto loc_8818E53C;
		case 0x8818E584: goto loc_8818E584;
		case 0x8818E5F0: goto loc_8818E5F0;
		case 0x8818E638: goto loc_8818E638;
		case 0x8818E660: goto loc_8818E660;
		case 0x8818E714: goto loc_8818E714;
		case 0x8818E75C: goto loc_8818E75C;
		case 0x8818E7CC: goto loc_8818E7CC;
		case 0x8818E814: goto loc_8818E814;
		case 0x8818E884: goto loc_8818E884;
		case 0x8818E8CC: goto loc_8818E8CC;
		case 0x8818E8D8: goto loc_8818E8D8;
		case 0x8818E96C: goto loc_8818E96C;
		case 0x8818E9B4: goto loc_8818E9B4;
		case 0x8818EA24: goto loc_8818EA24;
		case 0x8818EA6C: goto loc_8818EA6C;
		case 0x8818EAE8: goto loc_8818EAE8;
		case 0x8818EB30: goto loc_8818EB30;
		case 0x8818EBCC: goto loc_8818EBCC;
		case 0x8818EC14: goto loc_8818EC14;
		case 0x8818EC88: goto loc_8818EC88;
		case 0x8818ECD0: goto loc_8818ECD0;
		case 0x8818ED60: goto loc_8818ED60;
		case 0x8818EDA8: goto loc_8818EDA8;
		case 0x8818EE10: goto loc_8818EE10;
		case 0x8818EE58: goto loc_8818EE58;
		case 0x8818EEB0: goto loc_8818EEB0;
		case 0x8818EEF4: goto loc_8818EEF4;
		case 0x8818EF58: goto loc_8818EF58;
		case 0x8818EF8C: goto loc_8818EF8C;
		case 0x8818EFA4: goto loc_8818EFA4;
		case 0x8818F00C: goto loc_8818F00C;
		case 0x8818F07C: goto loc_8818F07C;
		case 0x8818F0C4: goto loc_8818F0C4;
		case 0x8818F148: goto loc_8818F148;
		case 0x8818F190: goto loc_8818F190;
		case 0x8818F204: goto loc_8818F204;
		case 0x8818F24C: goto loc_8818F24C;
		case 0x8818F2C4: goto loc_8818F2C4;
		case 0x8818F30C: goto loc_8818F30C;
		case 0x8818F398: goto loc_8818F398;
		case 0x8818F3E0: goto loc_8818F3E0;
		case 0x8818F408: goto loc_8818F408;
		case 0x8818F478: goto loc_8818F478;
		case 0x8818F4C0: goto loc_8818F4C0;
		case 0x8818F530: goto loc_8818F530;
		case 0x8818F578: goto loc_8818F578;
		case 0x8818F60C: goto loc_8818F60C;
		case 0x8818F654: goto loc_8818F654;
		case 0x8818F6C4: goto loc_8818F6C4;
		case 0x8818F70C: goto loc_8818F70C;
		case 0x8818F794: goto loc_8818F794;
		case 0x8818F7DC: goto loc_8818F7DC;
		case 0x8818F7F0: goto loc_8818F7F0;
		case 0x8818F854: goto loc_8818F854;
		case 0x8818F924: goto loc_8818F924;
		case 0x8818F96C: goto loc_8818F96C;
		case 0x8818FA1C: goto loc_8818FA1C;
		case 0x8818FA64: goto loc_8818FA64;
		case 0x8818FAC0: goto loc_8818FAC0;
		case 0x8818FC04: goto loc_8818FC04;
		case 0x8818FC4C: goto loc_8818FC4C;
		case 0x8818FCBC: goto loc_8818FCBC;
		case 0x8818FD04: goto loc_8818FD04;
		case 0x8818FD74: goto loc_8818FD74;
		case 0x8818FDBC: goto loc_8818FDBC;
		case 0x8818FE2C: goto loc_8818FE2C;
		case 0x8818FE74: goto loc_8818FE74;
		case 0x8818FEF8: goto loc_8818FEF8;
		case 0x8818FF40: goto loc_8818FF40;
		case 0x8818FF98: goto loc_8818FF98;
		case 0x8818FFCC: goto loc_8818FFCC;
		case 0x8818FFE4: goto loc_8818FFE4;
		case 0x8818FFEC: goto loc_8818FFEC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8818D490;
	__savegprlr_24(ctx, base);
loc_8818D490:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x8818D490;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r25,80(r1)
	ctx.current_instruction = 0x8818D4A0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8818d4b8
	if (ctx.cr6.eq) goto loc_8818D4B8;
	// bl 0x881656f8
	ctx.lr = 0x8818D4B0;
	sub_881656F8(ctx, base);
loc_8818D4B0:
	// stw r3,288(r27)
	ctx.current_instruction = 0x8818D4B0;
	REX_STORE_U32(ctx.r27.u32 + 288, ctx.r3.u32);
	// b 0x8818d4bc
	goto loc_8818D4BC;
loc_8818D4B8:
	// bl 0x881656f8
	ctx.lr = 0x8818D4BC;
	sub_881656F8(ctx, base);
loc_8818D4BC:
	// lwz r11,288(r27)
	ctx.current_instruction = 0x8818D4BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8818d92c
	if (!ctx.cr6.eq) goto loc_8818D92C;
	// lwz r11,21536(r27)
	ctx.current_instruction = 0x8818D4C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d8a8
	if (ctx.cr6.eq) goto loc_8818D8A8;
	// lwz r11,21864(r27)
	ctx.current_instruction = 0x8818D4D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d768
	if (ctx.cr6.eq) goto loc_8818D768;
	// lwz r11,22252(r27)
	ctx.current_instruction = 0x8818D4E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 22252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8818d768
	if (!ctx.cr6.eq) goto loc_8818D768;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818D4EC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818D500;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8818d65c
	if (ctx.cr6.eq) goto loc_8818D65C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818d56c
	if (!ctx.cr6.lt) goto loc_8818D56C;
loc_8818D514:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818d56c
	if (ctx.cr6.eq) goto loc_8818D56C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818D520;
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
	ctx.current_instruction = 0x8818D544;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818D54C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818d55c
	if (!ctx.cr0.lt) goto loc_8818D55C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818D55C;
	sub_88156678(ctx, base);
loc_8818D55C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818D55C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818d514
	if (ctx.cr6.gt) goto loc_8818D514;
loc_8818D56C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818D570;
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
	ctx.current_instruction = 0x8818D588;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818D594;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818d5a4
	if (!ctx.cr0.lt) goto loc_8818D5A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818D5A4;
	sub_88156678(ctx, base);
loc_8818D5A4:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818D5A4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stw r30,21540(r27)
	ctx.current_instruction = 0x8818D5AC;
	REX_STORE_U32(ctx.r27.u32 + 21540, ctx.r30.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818D5B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818d61c
	if (!ctx.cr6.lt) goto loc_8818D61C;
loc_8818D5C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818d61c
	if (ctx.cr6.eq) goto loc_8818D61C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818D5D0;
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
	ctx.current_instruction = 0x8818D5F4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818D5FC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818d60c
	if (!ctx.cr0.lt) goto loc_8818D60C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818D60C;
	sub_88156678(ctx, base);
loc_8818D60C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818D60C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818d5c4
	if (ctx.cr6.gt) goto loc_8818D5C4;
loc_8818D61C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818D620;
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
	ctx.current_instruction = 0x8818D638;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818D644;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818d654
	if (!ctx.cr0.lt) goto loc_8818D654;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818D654;
	sub_88156678(ctx, base);
loc_8818D654:
	// stw r30,21544(r27)
	ctx.current_instruction = 0x8818D654;
	REX_STORE_U32(ctx.r27.u32 + 21544, ctx.r30.u32);
	// b 0x8818d8a8
	goto loc_8818D8A8;
loc_8818D65C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818d6bc
	if (!ctx.cr6.lt) goto loc_8818D6BC;
loc_8818D664:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818d6bc
	if (ctx.cr6.eq) goto loc_8818D6BC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818D670;
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
	ctx.current_instruction = 0x8818D694;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818D69C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818d6ac
	if (!ctx.cr0.lt) goto loc_8818D6AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818D6AC;
	sub_88156678(ctx, base);
loc_8818D6AC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818D6AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818d664
	if (ctx.cr6.gt) goto loc_8818D664;
loc_8818D6BC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818D6C0;
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
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// stw r6,8(r31)
	ctx.current_instruction = 0x8818D6D8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// std r4,0(r31)
	ctx.current_instruction = 0x8818D6E0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818d6f0
	if (!ctx.cr0.lt) goto loc_8818D6F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818D6F0;
	sub_88156678(ctx, base);
loc_8818D6F0:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818D6F0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818D6FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818d884
	if (!ctx.cr6.lt) goto loc_8818D884;
loc_8818D70C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818d884
	if (ctx.cr6.eq) goto loc_8818D884;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818D718;
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
	ctx.current_instruction = 0x8818D73C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818D744;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818d754
	if (!ctx.cr0.lt) goto loc_8818D754;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818D754;
	sub_88156678(ctx, base);
loc_8818D754:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818D754;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818d70c
	if (ctx.cr6.gt) goto loc_8818D70C;
	// b 0x8818d884
	goto loc_8818D884;
loc_8818D768:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818D768;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// li r30,2
	ctx.r30.s64 = 2;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818D778;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8818d824
	if (ctx.cr6.eq) goto loc_8818D824;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8818d7e4
	if (!ctx.cr6.lt) goto loc_8818D7E4;
loc_8818D78C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818d7e4
	if (ctx.cr6.eq) goto loc_8818D7E4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818D798;
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
	ctx.current_instruction = 0x8818D7BC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818D7C4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818d7d4
	if (!ctx.cr0.lt) goto loc_8818D7D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818D7D4;
	sub_88156678(ctx, base);
loc_8818D7D4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818D7D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818d78c
	if (ctx.cr6.gt) goto loc_8818D78C;
loc_8818D7E4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818D7E8;
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
	ctx.current_instruction = 0x8818D800;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818D80C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818d81c
	if (!ctx.cr0.lt) goto loc_8818D81C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818D81C;
	sub_88156678(ctx, base);
loc_8818D81C:
	// stw r30,21868(r27)
	ctx.current_instruction = 0x8818D81C;
	REX_STORE_U32(ctx.r27.u32 + 21868, ctx.r30.u32);
	// b 0x8818d8a8
	goto loc_8818D8A8;
loc_8818D824:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8818d884
	if (!ctx.cr6.lt) goto loc_8818D884;
loc_8818D82C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818d884
	if (ctx.cr6.eq) goto loc_8818D884;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818D838;
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
	ctx.current_instruction = 0x8818D85C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818D864;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818d874
	if (!ctx.cr0.lt) goto loc_8818D874;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818D874;
	sub_88156678(ctx, base);
loc_8818D874:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818D874;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818d82c
	if (ctx.cr6.gt) goto loc_8818D82C;
loc_8818D884:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8818D884;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// stw r8,8(r31)
	ctx.current_instruction = 0x8818D894;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// std r7,0(r31)
	ctx.current_instruction = 0x8818D898;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// bge 0x8818d8a8
	if (!ctx.cr0.lt) goto loc_8818D8A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818D8A8;
	sub_88156678(ctx, base);
loc_8818D8A8:
	// lwz r11,22076(r27)
	ctx.current_instruction = 0x8818D8A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 22076);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d8c4
	if (ctx.cr6.eq) goto loc_8818D8C4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88165170
	ctx.lr = 0x8818D8C4;
	sub_88165170(ctx, base);
loc_8818D8C4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8818d8d0
	if (ctx.cr6.eq) goto loc_8818D8D0;
	// stw r25,22232(r27)
	ctx.current_instruction = 0x8818D8CC;
	REX_STORE_U32(ctx.r27.u32 + 22232, ctx.r25.u32);
loc_8818D8D0:
	// lwz r11,14836(r27)
	ctx.current_instruction = 0x8818D8D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8818d8ec
	if (!ctx.cr6.gt) goto loc_8818D8EC;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8818d920
	if (ctx.cr6.eq) goto loc_8818D920;
	// lwz r11,21684(r27)
	ctx.current_instruction = 0x8818D8E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21684);
	// stw r11,21676(r27)
	ctx.current_instruction = 0x8818D8E8;
	REX_STORE_U32(ctx.r27.u32 + 21676, ctx.r11.u32);
loc_8818D8EC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8818d920
	if (ctx.cr6.eq) goto loc_8818D920;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.current_instruction = 0x8818D8F8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,24688(r27)
	ctx.current_instruction = 0x8818D900;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 24688);
	// bl 0x88151290
	ctx.lr = 0x8818D908;
	sub_88151290(ctx, base);
loc_8818D908:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x8818D910;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x881515a8
	ctx.lr = 0x8818D918;
	sub_881515A8(ctx, base);
loc_8818D918:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819000c
	if (!ctx.cr6.eq) goto loc_8819000C;
loc_8818D920:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8818D92C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d94c
	if (ctx.cr6.eq) goto loc_8818D94C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8818d94c
	if (ctx.cr6.eq) goto loc_8818D94C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8818d94c
	if (ctx.cr6.eq) goto loc_8818D94C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88190008
	if (!ctx.cr6.eq) goto loc_88190008;
loc_8818D94C:
	// lwz r11,21552(r27)
	ctx.current_instruction = 0x8818D94C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d9d4
	if (ctx.cr6.eq) goto loc_8818D9D4;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818D958;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,8
	ctx.r30.s64 = 8;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818D960;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8818d9b0
	if (!ctx.cr6.lt) goto loc_8818D9B0;
loc_8818D970:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818d9b0
	if (ctx.cr6.eq) goto loc_8818D9B0;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818D978;
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
	ctx.current_instruction = 0x8818D98C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8818D990;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8818d9a0
	if (!ctx.cr0.lt) goto loc_8818D9A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818D9A0;
	sub_88156678(ctx, base);
loc_8818D9A0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818D9A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818d970
	if (ctx.cr6.gt) goto loc_8818D970;
loc_8818D9B0:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8818D9B0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8818D9C0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8818D9C4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8818d9d4
	if (!ctx.cr0.lt) goto loc_8818D9D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818D9D4;
	sub_88156678(ctx, base);
loc_8818D9D4:
	// lwz r11,21536(r27)
	ctx.current_instruction = 0x8818D9D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21536);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818ddb4
	if (ctx.cr6.eq) goto loc_8818DDB4;
	// lwz r11,21864(r27)
	ctx.current_instruction = 0x8818D9E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818dc74
	if (ctx.cr6.eq) goto loc_8818DC74;
	// lwz r11,22252(r27)
	ctx.current_instruction = 0x8818D9F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 22252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8818dc74
	if (!ctx.cr6.eq) goto loc_8818DC74;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818D9FC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818DA0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8818db68
	if (ctx.cr6.eq) goto loc_8818DB68;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818da78
	if (!ctx.cr6.lt) goto loc_8818DA78;
loc_8818DA20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818da78
	if (ctx.cr6.eq) goto loc_8818DA78;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818DA2C;
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
	ctx.current_instruction = 0x8818DA50;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818DA58;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818da68
	if (!ctx.cr0.lt) goto loc_8818DA68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818DA68;
	sub_88156678(ctx, base);
loc_8818DA68:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818DA68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818da20
	if (ctx.cr6.gt) goto loc_8818DA20;
loc_8818DA78:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818DA7C;
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
	ctx.current_instruction = 0x8818DA94;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818DAA0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818dab0
	if (!ctx.cr0.lt) goto loc_8818DAB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818DAB0;
	sub_88156678(ctx, base);
loc_8818DAB0:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818DAB0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stw r30,21540(r27)
	ctx.current_instruction = 0x8818DAB8;
	REX_STORE_U32(ctx.r27.u32 + 21540, ctx.r30.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818DAC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818db28
	if (!ctx.cr6.lt) goto loc_8818DB28;
loc_8818DAD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818db28
	if (ctx.cr6.eq) goto loc_8818DB28;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818DADC;
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
	ctx.current_instruction = 0x8818DB00;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818DB08;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818db18
	if (!ctx.cr0.lt) goto loc_8818DB18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818DB18;
	sub_88156678(ctx, base);
loc_8818DB18:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818DB18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818dad0
	if (ctx.cr6.gt) goto loc_8818DAD0;
loc_8818DB28:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818DB2C;
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
	ctx.current_instruction = 0x8818DB44;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818DB50;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818db60
	if (!ctx.cr0.lt) goto loc_8818DB60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818DB60;
	sub_88156678(ctx, base);
loc_8818DB60:
	// stw r30,21544(r27)
	ctx.current_instruction = 0x8818DB60;
	REX_STORE_U32(ctx.r27.u32 + 21544, ctx.r30.u32);
	// b 0x8818ddb4
	goto loc_8818DDB4;
loc_8818DB68:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818dbc8
	if (!ctx.cr6.lt) goto loc_8818DBC8;
loc_8818DB70:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818dbc8
	if (ctx.cr6.eq) goto loc_8818DBC8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818DB7C;
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
	ctx.current_instruction = 0x8818DBA0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818DBA8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818dbb8
	if (!ctx.cr0.lt) goto loc_8818DBB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818DBB8;
	sub_88156678(ctx, base);
loc_8818DBB8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818DBB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818db70
	if (ctx.cr6.gt) goto loc_8818DB70;
loc_8818DBC8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818DBCC;
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
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// stw r6,8(r31)
	ctx.current_instruction = 0x8818DBE4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// std r4,0(r31)
	ctx.current_instruction = 0x8818DBEC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818dbfc
	if (!ctx.cr0.lt) goto loc_8818DBFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818DBFC;
	sub_88156678(ctx, base);
loc_8818DBFC:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818DBFC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818DC08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818dd90
	if (!ctx.cr6.lt) goto loc_8818DD90;
loc_8818DC18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818dd90
	if (ctx.cr6.eq) goto loc_8818DD90;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818DC24;
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
	ctx.current_instruction = 0x8818DC48;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818DC50;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818dc60
	if (!ctx.cr0.lt) goto loc_8818DC60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818DC60;
	sub_88156678(ctx, base);
loc_8818DC60:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818DC60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818dc18
	if (ctx.cr6.gt) goto loc_8818DC18;
	// b 0x8818dd90
	goto loc_8818DD90;
loc_8818DC74:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818DC74;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// li r30,2
	ctx.r30.s64 = 2;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818DC84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8818dd30
	if (ctx.cr6.eq) goto loc_8818DD30;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8818dcf0
	if (!ctx.cr6.lt) goto loc_8818DCF0;
loc_8818DC98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818dcf0
	if (ctx.cr6.eq) goto loc_8818DCF0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818DCA4;
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
	ctx.current_instruction = 0x8818DCC8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818DCD0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818dce0
	if (!ctx.cr0.lt) goto loc_8818DCE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818DCE0;
	sub_88156678(ctx, base);
loc_8818DCE0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818DCE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818dc98
	if (ctx.cr6.gt) goto loc_8818DC98;
loc_8818DCF0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818DCF4;
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
	ctx.current_instruction = 0x8818DD0C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818DD18;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818dd28
	if (!ctx.cr0.lt) goto loc_8818DD28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818DD28;
	sub_88156678(ctx, base);
loc_8818DD28:
	// stw r30,21868(r27)
	ctx.current_instruction = 0x8818DD28;
	REX_STORE_U32(ctx.r27.u32 + 21868, ctx.r30.u32);
	// b 0x8818ddb4
	goto loc_8818DDB4;
loc_8818DD30:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8818dd90
	if (!ctx.cr6.lt) goto loc_8818DD90;
loc_8818DD38:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818dd90
	if (ctx.cr6.eq) goto loc_8818DD90;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818DD44;
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
	ctx.current_instruction = 0x8818DD68;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818DD70;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818dd80
	if (!ctx.cr0.lt) goto loc_8818DD80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818DD80;
	sub_88156678(ctx, base);
loc_8818DD80:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818DD80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818dd38
	if (ctx.cr6.gt) goto loc_8818DD38;
loc_8818DD90:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8818DD90;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// stw r8,8(r31)
	ctx.current_instruction = 0x8818DDA0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// std r7,0(r31)
	ctx.current_instruction = 0x8818DDA4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// bge 0x8818ddb4
	if (!ctx.cr0.lt) goto loc_8818DDB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818DDB4;
	sub_88156678(ctx, base);
loc_8818DDB4:
	// lwz r11,22076(r27)
	ctx.current_instruction = 0x8818DDB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 22076);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818ddd0
	if (ctx.cr6.eq) goto loc_8818DDD0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88165170
	ctx.lr = 0x8818DDD0;
	sub_88165170(ctx, base);
loc_8818DDD0:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818DDD0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818DDDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818de44
	if (!ctx.cr6.lt) goto loc_8818DE44;
loc_8818DDEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818de44
	if (ctx.cr6.eq) goto loc_8818DE44;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818DDF8;
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
	ctx.current_instruction = 0x8818DE1C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818DE24;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818de34
	if (!ctx.cr0.lt) goto loc_8818DE34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818DE34;
	sub_88156678(ctx, base);
loc_8818DE34:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818DE34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818ddec
	if (ctx.cr6.gt) goto loc_8818DDEC;
loc_8818DE44:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818DE48;
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
	ctx.current_instruction = 0x8818DE60;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818DE6C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818de7c
	if (!ctx.cr0.lt) goto loc_8818DE7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818DE7C;
	sub_88156678(ctx, base);
loc_8818DE7C:
	// lwz r11,21864(r27)
	ctx.current_instruction = 0x8818DE7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21864);
	// stw r30,3960(r27)
	ctx.current_instruction = 0x8818DE80;
	REX_STORE_U32(ctx.r27.u32 + 3960, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818dfcc
	if (ctx.cr6.eq) goto loc_8818DFCC;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818DE8C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818DE9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8818df48
	if (ctx.cr6.eq) goto loc_8818DF48;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818df08
	if (!ctx.cr6.lt) goto loc_8818DF08;
loc_8818DEB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818df08
	if (ctx.cr6.eq) goto loc_8818DF08;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818DEBC;
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
	ctx.current_instruction = 0x8818DEE0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818DEE8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818def8
	if (!ctx.cr0.lt) goto loc_8818DEF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818DEF8;
	sub_88156678(ctx, base);
loc_8818DEF8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818DEF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818deb0
	if (ctx.cr6.gt) goto loc_8818DEB0;
loc_8818DF08:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818DF0C;
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
	ctx.current_instruction = 0x8818DF24;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818DF30;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818df40
	if (!ctx.cr0.lt) goto loc_8818DF40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818DF40;
	sub_88156678(ctx, base);
loc_8818DF40:
	// stw r30,21676(r27)
	ctx.current_instruction = 0x8818DF40;
	REX_STORE_U32(ctx.r27.u32 + 21676, ctx.r30.u32);
	// b 0x8818dfcc
	goto loc_8818DFCC;
loc_8818DF48:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818dfa8
	if (!ctx.cr6.lt) goto loc_8818DFA8;
loc_8818DF50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818dfa8
	if (ctx.cr6.eq) goto loc_8818DFA8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818DF5C;
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
	ctx.current_instruction = 0x8818DF80;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818DF88;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818df98
	if (!ctx.cr0.lt) goto loc_8818DF98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818DF98;
	sub_88156678(ctx, base);
loc_8818DF98:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818DF98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818df50
	if (ctx.cr6.gt) goto loc_8818DF50;
loc_8818DFA8:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8818DFA8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8818DFB8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8818DFBC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8818dfcc
	if (!ctx.cr0.lt) goto loc_8818DFCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818DFCC;
	sub_88156678(ctx, base);
loc_8818DFCC:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818DFCC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,5
	ctx.r30.s64 = 5;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818DFD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8818e040
	if (!ctx.cr6.lt) goto loc_8818E040;
loc_8818DFE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818e040
	if (ctx.cr6.eq) goto loc_8818E040;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818DFF4;
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
	ctx.current_instruction = 0x8818E018;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818E020;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818e030
	if (!ctx.cr0.lt) goto loc_8818E030;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E030;
	sub_88156678(ctx, base);
loc_8818E030:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E030;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818dfe8
	if (ctx.cr6.gt) goto loc_8818DFE8;
loc_8818E040:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818E044;
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
	ctx.current_instruction = 0x8818E05C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818E068;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818e078
	if (!ctx.cr0.lt) goto loc_8818E078;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E078;
	sub_88156678(ctx, base);
loc_8818E078:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8818e084
	if (ctx.cr6.eq) goto loc_8818E084;
	// stw r30,4008(r27)
	ctx.current_instruction = 0x8818E080;
	REX_STORE_U32(ctx.r27.u32 + 4008, ctx.r30.u32);
loc_8818E084:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bgt cr6,0x8818e1d0
	if (ctx.cr6.gt) goto loc_8818E1D0;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818E08C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E09C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8818e148
	if (ctx.cr6.eq) goto loc_8818E148;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818e108
	if (!ctx.cr6.lt) goto loc_8818E108;
loc_8818E0B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818e108
	if (ctx.cr6.eq) goto loc_8818E108;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818E0BC;
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
	ctx.current_instruction = 0x8818E0E0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818E0E8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818e0f8
	if (!ctx.cr0.lt) goto loc_8818E0F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E0F8;
	sub_88156678(ctx, base);
loc_8818E0F8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E0F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818e0b0
	if (ctx.cr6.gt) goto loc_8818E0B0;
loc_8818E108:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818E10C;
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
	ctx.current_instruction = 0x8818E124;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818E130;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818e140
	if (!ctx.cr0.lt) goto loc_8818E140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E140;
	sub_88156678(ctx, base);
loc_8818E140:
	// stw r30,252(r27)
	ctx.current_instruction = 0x8818E140;
	REX_STORE_U32(ctx.r27.u32 + 252, ctx.r30.u32);
	// b 0x8818e1dc
	goto loc_8818E1DC;
loc_8818E148:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818e1a8
	if (!ctx.cr6.lt) goto loc_8818E1A8;
loc_8818E150:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818e1a8
	if (ctx.cr6.eq) goto loc_8818E1A8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818E15C;
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
	ctx.current_instruction = 0x8818E180;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818E188;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818e198
	if (!ctx.cr0.lt) goto loc_8818E198;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E198;
	sub_88156678(ctx, base);
loc_8818E198:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E198;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818e150
	if (ctx.cr6.gt) goto loc_8818E150;
loc_8818E1A8:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8818E1A8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8818E1B8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8818E1BC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8818e1dc
	if (!ctx.cr0.lt) goto loc_8818E1DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E1CC;
	sub_88156678(ctx, base);
loc_8818E1CC:
	// b 0x8818e1dc
	goto loc_8818E1DC;
loc_8818E1D0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8818e1dc
	if (ctx.cr6.eq) goto loc_8818E1DC;
	// stw r25,252(r27)
	ctx.current_instruction = 0x8818E1D8;
	REX_STORE_U32(ctx.r27.u32 + 252, ctx.r25.u32);
loc_8818E1DC:
	// lwz r11,3480(r27)
	ctx.current_instruction = 0x8818E1DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818e328
	if (ctx.cr6.eq) goto loc_8818E328;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818E1E8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E1F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8818e2a4
	if (ctx.cr6.eq) goto loc_8818E2A4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818e264
	if (!ctx.cr6.lt) goto loc_8818E264;
loc_8818E20C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818e264
	if (ctx.cr6.eq) goto loc_8818E264;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818E218;
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
	ctx.current_instruction = 0x8818E23C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818E244;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818e254
	if (!ctx.cr0.lt) goto loc_8818E254;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E254;
	sub_88156678(ctx, base);
loc_8818E254:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E254;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818e20c
	if (ctx.cr6.gt) goto loc_8818E20C;
loc_8818E264:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818E268;
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
	ctx.current_instruction = 0x8818E280;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818E28C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818e29c
	if (!ctx.cr0.lt) goto loc_8818E29C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E29C;
	sub_88156678(ctx, base);
loc_8818E29C:
	// stw r30,3468(r27)
	ctx.current_instruction = 0x8818E29C;
	REX_STORE_U32(ctx.r27.u32 + 3468, ctx.r30.u32);
	// b 0x8818e328
	goto loc_8818E328;
loc_8818E2A4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818e304
	if (!ctx.cr6.lt) goto loc_8818E304;
loc_8818E2AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818e304
	if (ctx.cr6.eq) goto loc_8818E304;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818E2B8;
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
	ctx.current_instruction = 0x8818E2DC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818E2E4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818e2f4
	if (!ctx.cr0.lt) goto loc_8818E2F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E2F4;
	sub_88156678(ctx, base);
loc_8818E2F4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E2F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818e2ac
	if (ctx.cr6.gt) goto loc_8818E2AC;
loc_8818E304:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8818E304;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8818E314;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8818E318;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8818e328
	if (!ctx.cr0.lt) goto loc_8818E328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E328;
	sub_88156678(ctx, base);
loc_8818E328:
	// lwz r11,3472(r27)
	ctx.current_instruction = 0x8818E328;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8818e378
	if (!ctx.cr6.eq) goto loc_8818E378;
	// lwz r11,4008(r27)
	ctx.current_instruction = 0x8818E334;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4008);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8818e354
	if (ctx.cr6.gt) goto loc_8818E354;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8818e34c
	if (ctx.cr6.eq) goto loc_8818E34C;
	// stw r26,3468(r27)
	ctx.current_instruction = 0x8818E348;
	REX_STORE_U32(ctx.r27.u32 + 3468, ctx.r26.u32);
loc_8818E34C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x8818e37c
	goto loc_8818E37C;
loc_8818E354:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8818e360
	if (ctx.cr6.eq) goto loc_8818E360;
	// stw r25,3468(r27)
	ctx.current_instruction = 0x8818E35C;
	REX_STORE_U32(ctx.r27.u32 + 3468, ctx.r25.u32);
loc_8818E360:
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,19448
	ctx.r11.s64 = ctx.r9.s64 + 19448;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,-4(r8)
	ctx.current_instruction = 0x8818E370;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// b 0x8818e37c
	goto loc_8818E37C;
loc_8818E378:
	// lwz r9,4008(r27)
	ctx.current_instruction = 0x8818E378;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 4008);
loc_8818E37C:
	// lwz r11,3008(r27)
	ctx.current_instruction = 0x8818E37C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3008);
	// stw r9,248(r27)
	ctx.current_instruction = 0x8818E380;
	REX_STORE_U32(ctx.r27.u32 + 248, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r25,3004(r27)
	ctx.current_instruction = 0x8818E388;
	REX_STORE_U32(ctx.r27.u32 + 3004, ctx.r25.u32);
	// beq cr6,0x8818e3c4
	if (ctx.cr6.eq) goto loc_8818E3C4;
	// lwz r11,288(r27)
	ctx.current_instruction = 0x8818E390;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8818e3c4
	if (ctx.cr6.eq) goto loc_8818E3C4;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// blt cr6,0x8818e3ac
	if (ctx.cr6.lt) goto loc_8818E3AC;
	// stw r26,3004(r27)
	ctx.current_instruction = 0x8818E3A4;
	REX_STORE_U32(ctx.r27.u32 + 3004, ctx.r26.u32);
	// b 0x8818e3c4
	goto loc_8818E3C4;
loc_8818E3AC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818e3bc
	if (ctx.cr6.eq) goto loc_8818E3BC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8818e3c4
	if (!ctx.cr6.eq) goto loc_8818E3C4;
loc_8818E3BC:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,3004(r27)
	ctx.current_instruction = 0x8818E3C0;
	REX_STORE_U32(ctx.r27.u32 + 3004, ctx.r11.u32);
loc_8818E3C4:
	// lwz r10,3468(r27)
	ctx.current_instruction = 0x8818E3C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 3468);
	// addi r11,r27,4048
	ctx.r11.s64 = ctx.r27.s64 + 4048;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8818e3d8
	if (!ctx.cr6.eq) goto loc_8818E3D8;
	// addi r11,r27,5328
	ctx.r11.s64 = ctx.r27.s64 + 5328;
loc_8818E3D8:
	// stw r11,6608(r27)
	ctx.current_instruction = 0x8818E3D8;
	REX_STORE_U32(ctx.r27.u32 + 6608, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r27,6624
	ctx.r11.s64 = ctx.r27.s64 + 6624;
	// bne cr6,0x8818e3ec
	if (!ctx.cr6.eq) goto loc_8818E3EC;
	// addi r11,r27,10720
	ctx.r11.s64 = ctx.r27.s64 + 10720;
loc_8818E3EC:
	// stw r11,14816(r27)
	ctx.current_instruction = 0x8818E3EC;
	REX_STORE_U32(ctx.r27.u32 + 14816, ctx.r11.u32);
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818E3F0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// stw r9,248(r27)
	ctx.current_instruction = 0x8818E3F4;
	REX_STORE_U32(ctx.r27.u32 + 248, ctx.r9.u32);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8818E3F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88190008
	if (!ctx.cr6.eq) goto loc_88190008;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88190008
	if (!ctx.cr6.gt) goto loc_88190008;
	// cmpwi cr6,r9,31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 31, ctx.xer);
	// bgt cr6,0x88190008
	if (ctx.cr6.gt) goto loc_88190008;
	// lwz r11,21572(r27)
	ctx.current_instruction = 0x8818E414;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818e4cc
	if (ctx.cr6.eq) goto loc_8818E4CC;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E420;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,2
	ctx.r30.s64 = 2;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8818e490
	if (!ctx.cr6.lt) goto loc_8818E490;
loc_8818E438:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818e490
	if (ctx.cr6.eq) goto loc_8818E490;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818E444;
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
	ctx.current_instruction = 0x8818E468;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818E470;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818e480
	if (!ctx.cr0.lt) goto loc_8818E480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E480;
	sub_88156678(ctx, base);
loc_8818E480:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E480;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818e438
	if (ctx.cr6.gt) goto loc_8818E438;
loc_8818E490:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818E494;
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
	ctx.current_instruction = 0x8818E4AC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818E4B8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818e4c8
	if (!ctx.cr0.lt) goto loc_8818E4C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E4C8;
	sub_88156678(ctx, base);
loc_8818E4C8:
	// stw r30,21576(r27)
	ctx.current_instruction = 0x8818E4C8;
	REX_STORE_U32(ctx.r27.u32 + 21576, ctx.r30.u32);
loc_8818E4CC:
	// lwz r11,288(r27)
	ctx.current_instruction = 0x8818E4CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8818e668
	if (!ctx.cr6.eq) goto loc_8818E668;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818E4D8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,3
	ctx.r30.s64 = 3;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E4E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8818e54c
	if (!ctx.cr6.lt) goto loc_8818E54C;
loc_8818E4F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818e54c
	if (ctx.cr6.eq) goto loc_8818E54C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818E500;
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
	ctx.current_instruction = 0x8818E524;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818E52C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818e53c
	if (!ctx.cr0.lt) goto loc_8818E53C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E53C;
	sub_88156678(ctx, base);
loc_8818E53C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E53C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818e4f4
	if (ctx.cr6.gt) goto loc_8818E4F4;
loc_8818E54C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818E550;
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
	ctx.current_instruction = 0x8818E568;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818E574;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818e584
	if (!ctx.cr0.lt) goto loc_8818E584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E584;
	sub_88156678(ctx, base);
loc_8818E584:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x8818e64c
	if (!ctx.cr6.eq) goto loc_8818E64C;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818E58C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,4
	ctx.r30.s64 = 4;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E598;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8818e600
	if (!ctx.cr6.lt) goto loc_8818E600;
loc_8818E5A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818e600
	if (ctx.cr6.eq) goto loc_8818E600;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818E5B4;
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
	ctx.current_instruction = 0x8818E5D8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818E5E0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818e5f0
	if (!ctx.cr0.lt) goto loc_8818E5F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E5F0;
	sub_88156678(ctx, base);
loc_8818E5F0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E5F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818e5a8
	if (ctx.cr6.gt) goto loc_8818E5A8;
loc_8818E600:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818E604;
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
	ctx.current_instruction = 0x8818E61C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818E628;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818e638
	if (!ctx.cr0.lt) goto loc_8818E638;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E638;
	sub_88156678(ctx, base);
loc_8818E638:
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 14, ctx.xer);
	// bge cr6,0x88190008
	if (!ctx.cr6.lt) goto loc_88190008;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// b 0x8818e654
	goto loc_8818E654;
loc_8818E64C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8818E654:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88166358
	ctx.lr = 0x8818E660;
	sub_88166358(ctx, base);
loc_8818E660:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819000c
	if (!ctx.cr6.eq) goto loc_8819000C;
loc_8818E668:
	// lwz r11,4008(r27)
	ctx.current_instruction = 0x8818E668;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4008);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8818e68c
	if (ctx.cr6.gt) goto loc_8818E68C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8818e68c
	if (ctx.cr6.eq) goto loc_8818E68C;
	// addi r11,r27,2872
	ctx.r11.s64 = ctx.r27.s64 + 2872;
	// addi r10,r27,2828
	ctx.r10.s64 = ctx.r27.s64 + 2828;
	// stw r11,2940(r27)
	ctx.current_instruction = 0x8818E684;
	REX_STORE_U32(ctx.r27.u32 + 2940, ctx.r11.u32);
	// stw r10,2952(r27)
	ctx.current_instruction = 0x8818E688;
	REX_STORE_U32(ctx.r27.u32 + 2952, ctx.r10.u32);
loc_8818E68C:
	// lwz r11,288(r27)
	ctx.current_instruction = 0x8818E68C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818f7e4
	if (ctx.cr6.eq) goto loc_8818F7E4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8818f7e4
	if (ctx.cr6.eq) goto loc_8818F7E4;
	// lwz r11,21568(r27)
	ctx.current_instruction = 0x8818E6A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21568);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818e8d0
	if (ctx.cr6.eq) goto loc_8818E8D0;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818E6B0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E6BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818e724
	if (!ctx.cr6.lt) goto loc_8818E724;
loc_8818E6CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818e724
	if (ctx.cr6.eq) goto loc_8818E724;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818E6D8;
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
	ctx.current_instruction = 0x8818E6FC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818E704;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818e714
	if (!ctx.cr0.lt) goto loc_8818E714;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E714;
	sub_88156678(ctx, base);
loc_8818E714:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E714;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818e6cc
	if (ctx.cr6.gt) goto loc_8818E6CC;
loc_8818E724:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818E728;
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
	ctx.current_instruction = 0x8818E740;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818E74C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818e75c
	if (!ctx.cr0.lt) goto loc_8818E75C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E75C;
	sub_88156678(ctx, base);
loc_8818E75C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8818e818
	if (ctx.cr6.eq) goto loc_8818E818;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818E768;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E774;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818e7dc
	if (!ctx.cr6.lt) goto loc_8818E7DC;
loc_8818E784:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818e7dc
	if (ctx.cr6.eq) goto loc_8818E7DC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818E790;
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
	ctx.current_instruction = 0x8818E7B4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818E7BC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818e7cc
	if (!ctx.cr0.lt) goto loc_8818E7CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E7CC;
	sub_88156678(ctx, base);
loc_8818E7CC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E7CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818e784
	if (ctx.cr6.gt) goto loc_8818E784;
loc_8818E7DC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818E7E0;
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
	ctx.current_instruction = 0x8818E7F8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818E804;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818e814
	if (!ctx.cr0.lt) goto loc_8818E814;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E814;
	sub_88156678(ctx, base);
loc_8818E814:
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
loc_8818E818:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8818e8d0
	if (!ctx.cr6.eq) goto loc_8818E8D0;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818E820;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E82C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818e894
	if (!ctx.cr6.lt) goto loc_8818E894;
loc_8818E83C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818e894
	if (ctx.cr6.eq) goto loc_8818E894;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818E848;
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
	ctx.current_instruction = 0x8818E86C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818E874;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818e884
	if (!ctx.cr0.lt) goto loc_8818E884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E884;
	sub_88156678(ctx, base);
loc_8818E884:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E884;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818e83c
	if (ctx.cr6.gt) goto loc_8818E83C;
loc_8818E894:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818E898;
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
	ctx.current_instruction = 0x8818E8B0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818E8BC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818e8cc
	if (!ctx.cr0.lt) goto loc_8818E8CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E8CC;
	sub_88156678(ctx, base);
loc_8818E8CC:
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
loc_8818E8D0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8815b250
	ctx.lr = 0x8818E8D8;
	sub_8815B250(ctx, base);
loc_8818E8D8:
	// lwz r11,288(r27)
	ctx.current_instruction = 0x8818E8D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,408(r27)
	ctx.current_instruction = 0x8818E8E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 408);
	// bne cr6,0x8818e8f0
	if (!ctx.cr6.eq) goto loc_8818E8F0;
	// stw r11,22232(r27)
	ctx.current_instruction = 0x8818E8E8;
	REX_STORE_U32(ctx.r27.u32 + 22232, ctx.r11.u32);
	// b 0x8818e8fc
	goto loc_8818E8FC;
loc_8818E8F0:
	// lwz r10,22232(r27)
	ctx.current_instruction = 0x8818E8F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 22232);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8818d920
	if (ctx.cr6.lt) goto loc_8818D920;
loc_8818E8FC:
	// lwz r11,21660(r27)
	ctx.current_instruction = 0x8818E8FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818eb54
	if (ctx.cr6.eq) goto loc_8818EB54;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818E908;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E914;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818e97c
	if (!ctx.cr6.lt) goto loc_8818E97C;
loc_8818E924:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818e97c
	if (ctx.cr6.eq) goto loc_8818E97C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818E930;
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
	ctx.current_instruction = 0x8818E954;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818E95C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818e96c
	if (!ctx.cr0.lt) goto loc_8818E96C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E96C;
	sub_88156678(ctx, base);
loc_8818E96C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E96C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818e924
	if (ctx.cr6.gt) goto loc_8818E924;
loc_8818E97C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818E980;
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
	ctx.current_instruction = 0x8818E998;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818E9A4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818e9b4
	if (!ctx.cr0.lt) goto loc_8818E9B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818E9B4;
	sub_88156678(ctx, base);
loc_8818E9B4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,21664(r27)
	ctx.current_instruction = 0x8818E9B8;
	REX_STORE_U32(ctx.r27.u32 + 21664, ctx.r30.u32);
	// beq cr6,0x8818ea78
	if (ctx.cr6.eq) goto loc_8818EA78;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818E9C0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818E9CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818ea34
	if (!ctx.cr6.lt) goto loc_8818EA34;
loc_8818E9DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818ea34
	if (ctx.cr6.eq) goto loc_8818EA34;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818E9E8;
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
	ctx.current_instruction = 0x8818EA0C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818EA14;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818ea24
	if (!ctx.cr0.lt) goto loc_8818EA24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818EA24;
	sub_88156678(ctx, base);
loc_8818EA24:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818EA24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818e9dc
	if (ctx.cr6.gt) goto loc_8818E9DC;
loc_8818EA34:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818EA38;
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
	ctx.current_instruction = 0x8818EA50;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818EA5C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818ea6c
	if (!ctx.cr0.lt) goto loc_8818EA6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818EA6C;
	sub_88156678(ctx, base);
loc_8818EA6C:
	// lwz r11,21664(r27)
	ctx.current_instruction = 0x8818EA6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21664);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,21664(r27)
	ctx.current_instruction = 0x8818EA74;
	REX_STORE_U32(ctx.r27.u32 + 21664, ctx.r11.u32);
loc_8818EA78:
	// lwz r11,21664(r27)
	ctx.current_instruction = 0x8818EA78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21664);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8818eb3c
	if (!ctx.cr6.eq) goto loc_8818EB3C;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818EA84;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818EA90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818eaf8
	if (!ctx.cr6.lt) goto loc_8818EAF8;
loc_8818EAA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818eaf8
	if (ctx.cr6.eq) goto loc_8818EAF8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818EAAC;
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
	ctx.current_instruction = 0x8818EAD0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818EAD8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818eae8
	if (!ctx.cr0.lt) goto loc_8818EAE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818EAE8;
	sub_88156678(ctx, base);
loc_8818EAE8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818EAE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818eaa0
	if (ctx.cr6.gt) goto loc_8818EAA0;
loc_8818EAF8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818EAFC;
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
	ctx.current_instruction = 0x8818EB14;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818EB20;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818eb30
	if (!ctx.cr0.lt) goto loc_8818EB30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818EB30;
	sub_88156678(ctx, base);
loc_8818EB30:
	// lwz r11,21664(r27)
	ctx.current_instruction = 0x8818EB30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21664);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,21664(r27)
	ctx.current_instruction = 0x8818EB38;
	REX_STORE_U32(ctx.r27.u32 + 21664, ctx.r11.u32);
loc_8818EB3C:
	// lwz r11,21664(r27)
	ctx.current_instruction = 0x8818EB3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21664);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// stw r9,21668(r27)
	ctx.current_instruction = 0x8818EB4C;
	REX_STORE_U32(ctx.r27.u32 + 21668, ctx.r9.u32);
	// stw r8,21672(r27)
	ctx.current_instruction = 0x8818EB50;
	REX_STORE_U32(ctx.r27.u32 + 21672, ctx.r8.u32);
loc_8818EB54:
	// lwz r11,288(r27)
	ctx.current_instruction = 0x8818EB54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8818eb68
	if (!ctx.cr6.eq) goto loc_8818EB68;
	// stw r26,4016(r27)
	ctx.current_instruction = 0x8818EB60;
	REX_STORE_U32(ctx.r27.u32 + 4016, ctx.r26.u32);
	// b 0x8818ec20
	goto loc_8818EC20;
loc_8818EB68:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818EB68;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818EB74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818ebdc
	if (!ctx.cr6.lt) goto loc_8818EBDC;
loc_8818EB84:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818ebdc
	if (ctx.cr6.eq) goto loc_8818EBDC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818EB90;
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
	ctx.current_instruction = 0x8818EBB4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818EBBC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818ebcc
	if (!ctx.cr0.lt) goto loc_8818EBCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818EBCC;
	sub_88156678(ctx, base);
loc_8818EBCC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818EBCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818eb84
	if (ctx.cr6.gt) goto loc_8818EB84;
loc_8818EBDC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818EBE0;
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
	ctx.current_instruction = 0x8818EBF8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818EC04;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818ec14
	if (!ctx.cr0.lt) goto loc_8818EC14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818EC14;
	sub_88156678(ctx, base);
loc_8818EC14:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,4016(r27)
	ctx.current_instruction = 0x8818EC1C;
	REX_STORE_U32(ctx.r27.u32 + 4016, ctx.r10.u32);
loc_8818EC20:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818EC20;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r25,4020(r27)
	ctx.current_instruction = 0x8818EC28;
	REX_STORE_U32(ctx.r27.u32 + 4020, ctx.r25.u32);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818EC30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818ec98
	if (!ctx.cr6.lt) goto loc_8818EC98;
loc_8818EC40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818ec98
	if (ctx.cr6.eq) goto loc_8818EC98;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818EC4C;
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
	ctx.current_instruction = 0x8818EC70;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818EC78;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818ec88
	if (!ctx.cr0.lt) goto loc_8818EC88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818EC88;
	sub_88156678(ctx, base);
loc_8818EC88:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818EC88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818ec40
	if (ctx.cr6.gt) goto loc_8818EC40;
loc_8818EC98:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818EC9C;
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
	ctx.current_instruction = 0x8818ECB4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818ECC0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818ecd0
	if (!ctx.cr0.lt) goto loc_8818ECD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818ECD0;
	sub_88156678(ctx, base);
loc_8818ECD0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8818ece8
	if (ctx.cr6.eq) goto loc_8818ECE8;
	// lwz r11,288(r27)
	ctx.current_instruction = 0x8818ECD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8818ece8
	if (ctx.cr6.eq) goto loc_8818ECE8;
	// stw r26,4020(r27)
	ctx.current_instruction = 0x8818ECE4;
	REX_STORE_U32(ctx.r27.u32 + 4020, ctx.r26.u32);
loc_8818ECE8:
	// lwz r11,4020(r27)
	ctx.current_instruction = 0x8818ECE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818ef8c
	if (ctx.cr6.eq) goto loc_8818EF8C;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818ECF4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// li r30,6
	ctx.r30.s64 = 6;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818ED04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8818ee60
	if (ctx.cr6.eq) goto loc_8818EE60;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8818ed70
	if (!ctx.cr6.lt) goto loc_8818ED70;
loc_8818ED18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818ed70
	if (ctx.cr6.eq) goto loc_8818ED70;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818ED24;
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
	ctx.current_instruction = 0x8818ED48;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818ED50;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818ed60
	if (!ctx.cr0.lt) goto loc_8818ED60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818ED60;
	sub_88156678(ctx, base);
loc_8818ED60:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818ED60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818ed18
	if (ctx.cr6.gt) goto loc_8818ED18;
loc_8818ED70:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818ED74;
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
	ctx.current_instruction = 0x8818ED8C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818ED98;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818eda8
	if (!ctx.cr0.lt) goto loc_8818EDA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818EDA8;
	sub_88156678(ctx, base);
loc_8818EDA8:
	// stw r30,4028(r27)
	ctx.current_instruction = 0x8818EDA8;
	REX_STORE_U32(ctx.r27.u32 + 4028, ctx.r30.u32);
	// li r30,6
	ctx.r30.s64 = 6;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818EDB0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818EDB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8818ee20
	if (!ctx.cr6.lt) goto loc_8818EE20;
loc_8818EDC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818ee20
	if (ctx.cr6.eq) goto loc_8818EE20;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818EDD4;
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
	ctx.current_instruction = 0x8818EDF8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818EE00;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818ee10
	if (!ctx.cr0.lt) goto loc_8818EE10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818EE10;
	sub_88156678(ctx, base);
loc_8818EE10:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818EE10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818edc8
	if (ctx.cr6.gt) goto loc_8818EDC8;
loc_8818EE20:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818EE24;
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
	ctx.current_instruction = 0x8818EE3C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818EE48;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818ee58
	if (!ctx.cr0.lt) goto loc_8818EE58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818EE58;
	sub_88156678(ctx, base);
loc_8818EE58:
	// stw r30,4032(r27)
	ctx.current_instruction = 0x8818EE58;
	REX_STORE_U32(ctx.r27.u32 + 4032, ctx.r30.u32);
	// b 0x8818ef8c
	goto loc_8818EF8C;
loc_8818EE60:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8818eec0
	if (!ctx.cr6.lt) goto loc_8818EEC0;
loc_8818EE68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818eec0
	if (ctx.cr6.eq) goto loc_8818EEC0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818EE74;
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
	ctx.current_instruction = 0x8818EE98;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818EEA0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818eeb0
	if (!ctx.cr0.lt) goto loc_8818EEB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818EEB0;
	sub_88156678(ctx, base);
loc_8818EEB0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818EEB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818ee68
	if (ctx.cr6.gt) goto loc_8818EE68;
loc_8818EEC0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818EEC4;
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
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// stw r6,8(r31)
	ctx.current_instruction = 0x8818EEDC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// std r4,0(r31)
	ctx.current_instruction = 0x8818EEE4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818eef4
	if (!ctx.cr0.lt) goto loc_8818EEF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818EEF4;
	sub_88156678(ctx, base);
loc_8818EEF4:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818EEF4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,6
	ctx.r30.s64 = 6;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818EF00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8818ef68
	if (!ctx.cr6.lt) goto loc_8818EF68;
loc_8818EF10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818ef68
	if (ctx.cr6.eq) goto loc_8818EF68;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818EF1C;
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
	ctx.current_instruction = 0x8818EF40;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818EF48;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818ef58
	if (!ctx.cr0.lt) goto loc_8818EF58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818EF58;
	sub_88156678(ctx, base);
loc_8818EF58:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818EF58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818ef10
	if (ctx.cr6.gt) goto loc_8818EF10;
loc_8818EF68:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8818EF68;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8818EF78;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8818EF7C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8818ef8c
	if (!ctx.cr0.lt) goto loc_8818EF8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818EF8C;
	sub_88156678(ctx, base);
loc_8818EF8C:
	// lwz r11,288(r27)
	ctx.current_instruction = 0x8818EF8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8818f000
	if (!ctx.cr6.eq) goto loc_8818F000;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88160580
	ctx.lr = 0x8818EFA4;
	sub_88160580(ctx, base);
loc_8818EFA4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819000c
	if (!ctx.cr6.eq) goto loc_8819000C;
	// lwz r11,14868(r27)
	ctx.current_instruction = 0x8818EFAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 14868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818f000
	if (ctx.cr6.eq) goto loc_8818F000;
	// lwz r10,144(r27)
	ctx.current_instruction = 0x8818EFB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r11,272(r27)
	ctx.current_instruction = 0x8818EFC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 272);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8818f000
	if (!ctx.cr6.gt) goto loc_8818F000;
loc_8818EFCC:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8818EFCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8818efe4
	if (ctx.cr6.eq) goto loc_8818EFE4;
	// rlwimi r10,r26,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// b 0x8818efe8
	goto loc_8818EFE8;
loc_8818EFE4:
	// rlwinm r10,r10,0,27,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF1F;
loc_8818EFE8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	ctx.current_instruction = 0x8818EFEC;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,144(r27)
	ctx.current_instruction = 0x8818EFF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8818efcc
	if (ctx.cr6.lt) goto loc_8818EFCC;
loc_8818F000:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88160580
	ctx.lr = 0x8818F00C;
	sub_88160580(ctx, base);
loc_8818F00C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819000c
	if (!ctx.cr6.eq) goto loc_8819000C;
	// stw r26,452(r27)
	ctx.current_instruction = 0x8818F014;
	REX_STORE_U32(ctx.r27.u32 + 452, ctx.r26.u32);
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818F01C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F024;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8818f08c
	if (!ctx.cr6.lt) goto loc_8818F08C;
loc_8818F034:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818f08c
	if (ctx.cr6.eq) goto loc_8818F08C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818F040;
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
	ctx.current_instruction = 0x8818F064;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818F06C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818f07c
	if (!ctx.cr0.lt) goto loc_8818F07C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F07C;
	sub_88156678(ctx, base);
loc_8818F07C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F07C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818f034
	if (ctx.cr6.gt) goto loc_8818F034;
loc_8818F08C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818F090;
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
	ctx.current_instruction = 0x8818F0A8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818F0B4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818f0c4
	if (!ctx.cr0.lt) goto loc_8818F0C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F0C4;
	sub_88156678(ctx, base);
loc_8818F0C4:
	// lwz r11,4016(r27)
	ctx.current_instruction = 0x8818F0C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r30,5193
	ctx.r11.s64 = ctx.r30.s64 + 5193;
	// beq cr6,0x8818f0d8
	if (ctx.cr6.eq) goto loc_8818F0D8;
	// addi r11,r30,5209
	ctx.r11.s64 = ctx.r30.s64 + 5209;
loc_8818F0D8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818F0DC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,2
	ctx.r30.s64 = 2;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwzx r9,r10,r27
	ctx.current_instruction = 0x8818F0E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r9,20768(r27)
	ctx.current_instruction = 0x8818F0EC;
	REX_STORE_U32(ctx.r27.u32 + 20768, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F0F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8818f158
	if (!ctx.cr6.lt) goto loc_8818F158;
loc_8818F100:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818f158
	if (ctx.cr6.eq) goto loc_8818F158;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818F10C;
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
	ctx.current_instruction = 0x8818F130;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818F138;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818f148
	if (!ctx.cr0.lt) goto loc_8818F148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F148;
	sub_88156678(ctx, base);
loc_8818F148:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F148;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818f100
	if (ctx.cr6.gt) goto loc_8818F100;
loc_8818F158:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818F15C;
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
	ctx.current_instruction = 0x8818F174;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818F180;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818f190
	if (!ctx.cr0.lt) goto loc_8818F190;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F190;
	sub_88156678(ctx, base);
loc_8818F190:
	// addi r11,r30,600
	ctx.r11.s64 = ctx.r30.s64 + 600;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818F194;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,3
	ctx.r30.s64 = 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwzx r9,r10,r27
	ctx.current_instruction = 0x8818F1A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r9,2380(r27)
	ctx.current_instruction = 0x8818F1A8;
	REX_STORE_U32(ctx.r27.u32 + 2380, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F1AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8818f214
	if (!ctx.cr6.lt) goto loc_8818F214;
loc_8818F1BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818f214
	if (ctx.cr6.eq) goto loc_8818F214;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818F1C8;
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
	ctx.current_instruction = 0x8818F1EC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818F1F4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818f204
	if (!ctx.cr0.lt) goto loc_8818F204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F204;
	sub_88156678(ctx, base);
loc_8818F204:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F204;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818f1bc
	if (ctx.cr6.gt) goto loc_8818F1BC;
loc_8818F214:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818F218;
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
	ctx.current_instruction = 0x8818F230;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818F23C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818f24c
	if (!ctx.cr0.lt) goto loc_8818F24C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F24C;
	sub_88156678(ctx, base);
loc_8818F24C:
	// addi r11,r30,5430
	ctx.r11.s64 = ctx.r30.s64 + 5430;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818F250;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,2
	ctx.r30.s64 = 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwzx r9,r10,r27
	ctx.current_instruction = 0x8818F260;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r9,21712(r27)
	ctx.current_instruction = 0x8818F264;
	REX_STORE_U32(ctx.r27.u32 + 21712, ctx.r9.u32);
	// stw r9,21716(r27)
	ctx.current_instruction = 0x8818F268;
	REX_STORE_U32(ctx.r27.u32 + 21716, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F26C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8818f2d4
	if (!ctx.cr6.lt) goto loc_8818F2D4;
loc_8818F27C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818f2d4
	if (ctx.cr6.eq) goto loc_8818F2D4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818F288;
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
	ctx.current_instruction = 0x8818F2AC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818F2B4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818f2c4
	if (!ctx.cr0.lt) goto loc_8818F2C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F2C4;
	sub_88156678(ctx, base);
loc_8818F2C4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F2C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818f27c
	if (ctx.cr6.gt) goto loc_8818F27C;
loc_8818F2D4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818F2D8;
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
	ctx.current_instruction = 0x8818F2F0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818F2FC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818f30c
	if (!ctx.cr0.lt) goto loc_8818F30C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F30C;
	sub_88156678(ctx, base);
loc_8818F30C:
	// addi r11,r30,5248
	ctx.r11.s64 = ctx.r30.s64 + 5248;
	// lwz r10,4016(r27)
	ctx.current_instruction = 0x8818F310;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 4016);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r8,r9,r27
	ctx.current_instruction = 0x8818F31C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// stw r8,20988(r27)
	ctx.current_instruction = 0x8818F320;
	REX_STORE_U32(ctx.r27.u32 + 20988, ctx.r8.u32);
	// beq cr6,0x8818f334
	if (ctx.cr6.eq) goto loc_8818F334;
	// lwz r11,288(r27)
	ctx.current_instruction = 0x8818F328;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8818f3f0
	if (!ctx.cr6.eq) goto loc_8818F3F0;
loc_8818F334:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818F334;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,2
	ctx.r30.s64 = 2;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F340;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8818f3a8
	if (!ctx.cr6.lt) goto loc_8818F3A8;
loc_8818F350:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818f3a8
	if (ctx.cr6.eq) goto loc_8818F3A8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818F35C;
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
	ctx.current_instruction = 0x8818F380;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818F388;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818f398
	if (!ctx.cr0.lt) goto loc_8818F398;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F398;
	sub_88156678(ctx, base);
loc_8818F398:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F398;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818f350
	if (ctx.cr6.gt) goto loc_8818F350;
loc_8818F3A8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818F3AC;
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
	ctx.current_instruction = 0x8818F3C4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818F3D0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818f3e0
	if (!ctx.cr0.lt) goto loc_8818F3E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F3E0;
	sub_88156678(ctx, base);
loc_8818F3E0:
	// addi r11,r30,5243
	ctx.r11.s64 = ctx.r30.s64 + 5243;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r27
	ctx.current_instruction = 0x8818F3E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r9,20968(r27)
	ctx.current_instruction = 0x8818F3EC;
	REX_STORE_U32(ctx.r27.u32 + 20968, ctx.r9.u32);
loc_8818F3F0:
	// lwz r11,4040(r27)
	ctx.current_instruction = 0x8818F3F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818f408
	if (ctx.cr6.eq) goto loc_8818F408;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88161130
	ctx.lr = 0x8818F408;
	sub_88161130(ctx, base);
loc_8818F408:
	// lwz r11,440(r27)
	ctx.current_instruction = 0x8818F408;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818f598
	if (ctx.cr6.eq) goto loc_8818F598;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818F414;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F420;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818f488
	if (!ctx.cr6.lt) goto loc_8818F488;
loc_8818F430:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818f488
	if (ctx.cr6.eq) goto loc_8818F488;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818F43C;
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
	ctx.current_instruction = 0x8818F460;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818F468;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818f478
	if (!ctx.cr0.lt) goto loc_8818F478;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F478;
	sub_88156678(ctx, base);
loc_8818F478:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F478;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818f430
	if (ctx.cr6.gt) goto loc_8818F430;
loc_8818F488:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818F48C;
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
	ctx.current_instruction = 0x8818F4A4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818F4B0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818f4c0
	if (!ctx.cr0.lt) goto loc_8818F4C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F4C0;
	sub_88156678(ctx, base);
loc_8818F4C0:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8818f590
	if (!ctx.cr6.eq) goto loc_8818F590;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818F4C8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r25,332(r27)
	ctx.current_instruction = 0x8818F4D0;
	REX_STORE_U32(ctx.r27.u32 + 332, ctx.r25.u32);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F4D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8818f540
	if (!ctx.cr6.lt) goto loc_8818F540;
loc_8818F4E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818f540
	if (ctx.cr6.eq) goto loc_8818F540;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818F4F4;
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
	ctx.current_instruction = 0x8818F518;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818F520;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818f530
	if (!ctx.cr0.lt) goto loc_8818F530;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F530;
	sub_88156678(ctx, base);
loc_8818F530:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F530;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818f4e8
	if (ctx.cr6.gt) goto loc_8818F4E8;
loc_8818F540:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818F544;
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
	ctx.current_instruction = 0x8818F55C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818F568;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818f578
	if (!ctx.cr0.lt) goto loc_8818F578;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F578;
	sub_88156678(ctx, base);
loc_8818F578:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,24992
	ctx.r9.s64 = ctx.r11.s64 + 24992;
	// lwzx r8,r10,r9
	ctx.current_instruction = 0x8818F584;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,340(r27)
	ctx.current_instruction = 0x8818F588;
	REX_STORE_U32(ctx.r27.u32 + 340, ctx.r8.u32);
	// b 0x8818f59c
	goto loc_8818F59C;
loc_8818F590:
	// stw r26,332(r27)
	ctx.current_instruction = 0x8818F590;
	REX_STORE_U32(ctx.r27.u32 + 332, ctx.r26.u32);
	// b 0x8818f59c
	goto loc_8818F59C;
loc_8818F598:
	// stw r25,332(r27)
	ctx.current_instruction = 0x8818F598;
	REX_STORE_U32(ctx.r27.u32 + 332, ctx.r25.u32);
loc_8818F59C:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818F59C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8818F5A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88190008
	if (!ctx.cr6.eq) goto loc_88190008;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F5AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818f61c
	if (!ctx.cr6.lt) goto loc_8818F61C;
loc_8818F5C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818f61c
	if (ctx.cr6.eq) goto loc_8818F61C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818F5D0;
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
	ctx.current_instruction = 0x8818F5F4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818F5FC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818f60c
	if (!ctx.cr0.lt) goto loc_8818F60C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F60C;
	sub_88156678(ctx, base);
loc_8818F60C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F60C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818f5c4
	if (ctx.cr6.gt) goto loc_8818F5C4;
loc_8818F61C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818F620;
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
	ctx.current_instruction = 0x8818F638;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818F644;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818f654
	if (!ctx.cr0.lt) goto loc_8818F654;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F654;
	sub_88156678(ctx, base);
loc_8818F654:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,2964(r27)
	ctx.current_instruction = 0x8818F658;
	REX_STORE_U32(ctx.r27.u32 + 2964, ctx.r30.u32);
	// beq cr6,0x8818f718
	if (ctx.cr6.eq) goto loc_8818F718;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818F660;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F66C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818f6d4
	if (!ctx.cr6.lt) goto loc_8818F6D4;
loc_8818F67C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818f6d4
	if (ctx.cr6.eq) goto loc_8818F6D4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818F688;
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
	ctx.current_instruction = 0x8818F6AC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818F6B4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818f6c4
	if (!ctx.cr0.lt) goto loc_8818F6C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F6C4;
	sub_88156678(ctx, base);
loc_8818F6C4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F6C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818f67c
	if (ctx.cr6.gt) goto loc_8818F67C;
loc_8818F6D4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818F6D8;
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
	ctx.current_instruction = 0x8818F6F0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818F6FC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818f70c
	if (!ctx.cr0.lt) goto loc_8818F70C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F70C;
	sub_88156678(ctx, base);
loc_8818F70C:
	// lwz r11,2964(r27)
	ctx.current_instruction = 0x8818F70C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2964);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,2964(r27)
	ctx.current_instruction = 0x8818F714;
	REX_STORE_U32(ctx.r27.u32 + 2964, ctx.r11.u32);
loc_8818F718:
	// lwz r11,2964(r27)
	ctx.current_instruction = 0x8818F718;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2964);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818F720;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stw r11,2972(r27)
	ctx.current_instruction = 0x8818F728;
	REX_STORE_U32(ctx.r27.u32 + 2972, ctx.r11.u32);
	// stw r11,2968(r27)
	ctx.current_instruction = 0x8818F72C;
	REX_STORE_U32(ctx.r27.u32 + 2968, ctx.r11.u32);
	// stw r11,2984(r27)
	ctx.current_instruction = 0x8818F730;
	REX_STORE_U32(ctx.r27.u32 + 2984, ctx.r11.u32);
	// stw r11,2976(r27)
	ctx.current_instruction = 0x8818F734;
	REX_STORE_U32(ctx.r27.u32 + 2976, ctx.r11.u32);
	// stw r11,2980(r27)
	ctx.current_instruction = 0x8818F738;
	REX_STORE_U32(ctx.r27.u32 + 2980, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F73C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818f7a4
	if (!ctx.cr6.lt) goto loc_8818F7A4;
loc_8818F74C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818f7a4
	if (ctx.cr6.eq) goto loc_8818F7A4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818F758;
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
	ctx.current_instruction = 0x8818F77C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818F784;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818f794
	if (!ctx.cr0.lt) goto loc_8818F794;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F794;
	sub_88156678(ctx, base);
loc_8818F794:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F794;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818f74c
	if (ctx.cr6.gt) goto loc_8818F74C;
loc_8818F7A4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818F7A8;
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
	ctx.current_instruction = 0x8818F7C0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818F7CC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818f7dc
	if (!ctx.cr0.lt) goto loc_8818F7DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F7DC;
	sub_88156678(ctx, base);
loc_8818F7DC:
	// stw r30,2092(r27)
	ctx.current_instruction = 0x8818F7DC;
	REX_STORE_U32(ctx.r27.u32 + 2092, ctx.r30.u32);
	// b 0x8818fff8
	goto loc_8818FFF8;
loc_8818F7E4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88160580
	ctx.lr = 0x8818F7F0;
	sub_88160580(ctx, base);
loc_8818F7F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819000c
	if (!ctx.cr6.eq) goto loc_8819000C;
	// lwz r11,20692(r27)
	ctx.current_instruction = 0x8818F7F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20692);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818f848
	if (ctx.cr6.eq) goto loc_8818F848;
	// lwz r11,144(r27)
	ctx.current_instruction = 0x8818F804;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8818f848
	if (!ctx.cr6.gt) goto loc_8818F848;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8818F818:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8818f834
	if (ctx.cr6.eq) goto loc_8818F834;
	// lwz r10,272(r27)
	ctx.current_instruction = 0x8818F820;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 272);
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8818F824;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,17,15,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x10000) | (ctx.r7.u64 & 0xFFFFFFFFFFFEFFFF);
	// stwx r7,r10,r11
	ctx.current_instruction = 0x8818F830;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
loc_8818F834:
	// lwz r10,144(r27)
	ctx.current_instruction = 0x8818F834;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8818f818
	if (ctx.cr6.lt) goto loc_8818F818;
loc_8818F848:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88160580
	ctx.lr = 0x8818F854;
	sub_88160580(ctx, base);
loc_8818F854:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819000c
	if (!ctx.cr6.eq) goto loc_8819000C;
	// lwz r11,20708(r27)
	ctx.current_instruction = 0x8818F85C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818f8b0
	if (ctx.cr6.eq) goto loc_8818F8B0;
	// lwz r11,144(r27)
	ctx.current_instruction = 0x8818F868;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8818f8b0
	if (!ctx.cr6.gt) goto loc_8818F8B0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8818F87C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8818f89c
	if (ctx.cr6.eq) goto loc_8818F89C;
	// lwz r10,272(r27)
	ctx.current_instruction = 0x8818F884;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 272);
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8818F888;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,4,28,28
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x8) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwinm r6,r7,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stwx r6,r10,r11
	ctx.current_instruction = 0x8818F898;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
loc_8818F89C:
	// lwz r10,144(r27)
	ctx.current_instruction = 0x8818F89C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8818f87c
	if (ctx.cr6.lt) goto loc_8818F87C;
loc_8818F8B0:
	// lwz r11,3004(r27)
	ctx.current_instruction = 0x8818F8B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3004);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8818fb1c
	if (ctx.cr6.eq) goto loc_8818FB1C;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818F8C0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F8CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818f934
	if (!ctx.cr6.lt) goto loc_8818F934;
loc_8818F8DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818f934
	if (ctx.cr6.eq) goto loc_8818F934;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818F8E8;
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
	ctx.current_instruction = 0x8818F90C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818F914;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818f924
	if (!ctx.cr0.lt) goto loc_8818F924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F924;
	sub_88156678(ctx, base);
loc_8818F924:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F924;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818f8dc
	if (ctx.cr6.gt) goto loc_8818F8DC;
loc_8818F934:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818F938;
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
	ctx.current_instruction = 0x8818F950;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818F95C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818f96c
	if (!ctx.cr0.lt) goto loc_8818F96C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818F96C;
	sub_88156678(ctx, base);
loc_8818F96C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8818f9b8
	if (!ctx.cr6.eq) goto loc_8818F9B8;
	// lwz r11,144(r27)
	ctx.current_instruction = 0x8818F974;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r25,3004(r27)
	ctx.current_instruction = 0x8818F97C;
	REX_STORE_U32(ctx.r27.u32 + 3004, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8818fba0
	if (!ctx.cr6.gt) goto loc_8818FBA0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8818F98C:
	// lwz r9,272(r27)
	ctx.current_instruction = 0x8818F98C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 272);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r8,0(r9)
	ctx.current_instruction = 0x8818F99C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r8,0,21,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r7,0(r9)
	ctx.current_instruction = 0x8818F9A4;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r6,144(r27)
	ctx.current_instruction = 0x8818F9A8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8818f98c
	if (ctx.cr6.lt) goto loc_8818F98C;
	// b 0x8818fba0
	goto loc_8818FBA0;
loc_8818F9B8:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818F9B8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818F9C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818fa2c
	if (!ctx.cr6.lt) goto loc_8818FA2C;
loc_8818F9D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818fa2c
	if (ctx.cr6.eq) goto loc_8818FA2C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818F9E0;
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
	ctx.current_instruction = 0x8818FA04;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818FA0C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818fa1c
	if (!ctx.cr0.lt) goto loc_8818FA1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818FA1C;
	sub_88156678(ctx, base);
loc_8818FA1C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818FA1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818f9d4
	if (ctx.cr6.gt) goto loc_8818F9D4;
loc_8818FA2C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818FA30;
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
	ctx.current_instruction = 0x8818FA48;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818FA54;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818fa64
	if (!ctx.cr0.lt) goto loc_8818FA64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818FA64;
	sub_88156678(ctx, base);
loc_8818FA64:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8818fab4
	if (!ctx.cr6.eq) goto loc_8818FAB4;
	// lwz r11,144(r27)
	ctx.current_instruction = 0x8818FA6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r26,3004(r27)
	ctx.current_instruction = 0x8818FA74;
	REX_STORE_U32(ctx.r27.u32 + 3004, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8818fba0
	if (!ctx.cr6.gt) goto loc_8818FBA0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8818FA84:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8818fa9c
	if (ctx.cr6.eq) goto loc_8818FA9C;
	// lwz r10,272(r27)
	ctx.current_instruction = 0x8818FA8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 272);
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8818FA90;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ori r7,r8,2048
	ctx.r7.u64 = ctx.r8.u64 | 2048;
	// stwx r7,r10,r11
	ctx.current_instruction = 0x8818FA98;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
loc_8818FA9C:
	// lwz r10,144(r27)
	ctx.current_instruction = 0x8818FA9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8818fa84
	if (ctx.cr6.lt) goto loc_8818FA84;
	// b 0x8818fba0
	goto loc_8818FBA0;
loc_8818FAB4:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88160580
	ctx.lr = 0x8818FAC0;
	sub_88160580(ctx, base);
loc_8818FAC0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819000c
	if (!ctx.cr6.eq) goto loc_8819000C;
	// lwz r11,21644(r27)
	ctx.current_instruction = 0x8818FAC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21644);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818fba0
	if (ctx.cr6.eq) goto loc_8818FBA0;
	// lwz r11,144(r27)
	ctx.current_instruction = 0x8818FAD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8818fba0
	if (!ctx.cr6.gt) goto loc_8818FBA0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8818FAE8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8818fb04
	if (ctx.cr6.eq) goto loc_8818FB04;
	// lwz r10,272(r27)
	ctx.current_instruction = 0x8818FAF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 272);
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8818FAF4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,12,20,20
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x800) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF7FF);
	// stwx r7,r10,r11
	ctx.current_instruction = 0x8818FB00;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
loc_8818FB04:
	// lwz r10,144(r27)
	ctx.current_instruction = 0x8818FB04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8818fae8
	if (ctx.cr6.lt) goto loc_8818FAE8;
	// b 0x8818fba0
	goto loc_8818FBA0;
loc_8818FB1C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,144(r27)
	ctx.current_instruction = 0x8818FB20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// beq cr6,0x8818fb68
	if (ctx.cr6.eq) goto loc_8818FB68;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8818fba0
	if (!ctx.cr6.gt) goto loc_8818FBA0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8818FB38:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8818fb50
	if (ctx.cr6.eq) goto loc_8818FB50;
	// lwz r10,272(r27)
	ctx.current_instruction = 0x8818FB40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 272);
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8818FB44;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ori r7,r8,2048
	ctx.r7.u64 = ctx.r8.u64 | 2048;
	// stwx r7,r10,r11
	ctx.current_instruction = 0x8818FB4C;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
loc_8818FB50:
	// lwz r10,144(r27)
	ctx.current_instruction = 0x8818FB50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8818fb38
	if (ctx.cr6.lt) goto loc_8818FB38;
	// b 0x8818fba0
	goto loc_8818FBA0;
loc_8818FB68:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8818fba0
	if (!ctx.cr6.gt) goto loc_8818FBA0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8818FB74:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8818fb8c
	if (ctx.cr6.eq) goto loc_8818FB8C;
	// lwz r10,272(r27)
	ctx.current_instruction = 0x8818FB7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 272);
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8818FB80;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r7,r8,0,21,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stwx r7,r10,r11
	ctx.current_instruction = 0x8818FB88;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
loc_8818FB8C:
	// lwz r10,144(r27)
	ctx.current_instruction = 0x8818FB8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8818fb74
	if (ctx.cr6.lt) goto loc_8818FB74;
loc_8818FBA0:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818FBA0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818FBAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818fc14
	if (!ctx.cr6.lt) goto loc_8818FC14;
loc_8818FBBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818fc14
	if (ctx.cr6.eq) goto loc_8818FC14;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818FBC8;
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
	ctx.current_instruction = 0x8818FBEC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818FBF4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818fc04
	if (!ctx.cr0.lt) goto loc_8818FC04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818FC04;
	sub_88156678(ctx, base);
loc_8818FC04:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818FC04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818fbbc
	if (ctx.cr6.gt) goto loc_8818FBBC;
loc_8818FC14:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818FC18;
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
	ctx.current_instruction = 0x8818FC30;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818FC3C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818fc4c
	if (!ctx.cr0.lt) goto loc_8818FC4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818FC4C;
	sub_88156678(ctx, base);
loc_8818FC4C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,2964(r27)
	ctx.current_instruction = 0x8818FC50;
	REX_STORE_U32(ctx.r27.u32 + 2964, ctx.r30.u32);
	// beq cr6,0x8818fd10
	if (ctx.cr6.eq) goto loc_8818FD10;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818FC58;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818FC64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818fccc
	if (!ctx.cr6.lt) goto loc_8818FCCC;
loc_8818FC74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818fccc
	if (ctx.cr6.eq) goto loc_8818FCCC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818FC80;
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
	ctx.current_instruction = 0x8818FCA4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818FCAC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818fcbc
	if (!ctx.cr0.lt) goto loc_8818FCBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818FCBC;
	sub_88156678(ctx, base);
loc_8818FCBC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818FCBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818fc74
	if (ctx.cr6.gt) goto loc_8818FC74;
loc_8818FCCC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818FCD0;
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
	ctx.current_instruction = 0x8818FCE8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818FCF4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818fd04
	if (!ctx.cr0.lt) goto loc_8818FD04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818FD04;
	sub_88156678(ctx, base);
loc_8818FD04:
	// lwz r11,2964(r27)
	ctx.current_instruction = 0x8818FD04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2964);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,2964(r27)
	ctx.current_instruction = 0x8818FD0C;
	REX_STORE_U32(ctx.r27.u32 + 2964, ctx.r11.u32);
loc_8818FD10:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818FD10;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818FD1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818fd84
	if (!ctx.cr6.lt) goto loc_8818FD84;
loc_8818FD2C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818fd84
	if (ctx.cr6.eq) goto loc_8818FD84;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818FD38;
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
	ctx.current_instruction = 0x8818FD5C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818FD64;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818fd74
	if (!ctx.cr0.lt) goto loc_8818FD74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818FD74;
	sub_88156678(ctx, base);
loc_8818FD74:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818FD74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818fd2c
	if (ctx.cr6.gt) goto loc_8818FD2C;
loc_8818FD84:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818FD88;
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
	ctx.current_instruction = 0x8818FDA0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818FDAC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818fdbc
	if (!ctx.cr0.lt) goto loc_8818FDBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818FDBC;
	sub_88156678(ctx, base);
loc_8818FDBC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,2976(r27)
	ctx.current_instruction = 0x8818FDC0;
	REX_STORE_U32(ctx.r27.u32 + 2976, ctx.r30.u32);
	// beq cr6,0x8818fe80
	if (ctx.cr6.eq) goto loc_8818FE80;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818FDC8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818FDD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818fe3c
	if (!ctx.cr6.lt) goto loc_8818FE3C;
loc_8818FDE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818fe3c
	if (ctx.cr6.eq) goto loc_8818FE3C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818FDF0;
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
	ctx.current_instruction = 0x8818FE14;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818FE1C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818fe2c
	if (!ctx.cr0.lt) goto loc_8818FE2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818FE2C;
	sub_88156678(ctx, base);
loc_8818FE2C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818FE2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818fde4
	if (ctx.cr6.gt) goto loc_8818FDE4;
loc_8818FE3C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818FE40;
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
	ctx.current_instruction = 0x8818FE58;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818FE64;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818fe74
	if (!ctx.cr0.lt) goto loc_8818FE74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818FE74;
	sub_88156678(ctx, base);
loc_8818FE74:
	// lwz r11,2976(r27)
	ctx.current_instruction = 0x8818FE74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2976);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,2976(r27)
	ctx.current_instruction = 0x8818FE7C;
	REX_STORE_U32(ctx.r27.u32 + 2976, ctx.r11.u32);
loc_8818FE80:
	// lwz r11,2976(r27)
	ctx.current_instruction = 0x8818FE80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2976);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8818FE88;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stw r11,2980(r27)
	ctx.current_instruction = 0x8818FE94;
	REX_STORE_U32(ctx.r27.u32 + 2980, ctx.r11.u32);
	// stw r11,2984(r27)
	ctx.current_instruction = 0x8818FE98;
	REX_STORE_U32(ctx.r27.u32 + 2984, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818FE9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8818ff48
	if (ctx.cr6.eq) goto loc_8818FF48;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818ff08
	if (!ctx.cr6.lt) goto loc_8818FF08;
loc_8818FEB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818ff08
	if (ctx.cr6.eq) goto loc_8818FF08;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818FEBC;
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
	ctx.current_instruction = 0x8818FEE0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818FEE8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818fef8
	if (!ctx.cr0.lt) goto loc_8818FEF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818FEF8;
	sub_88156678(ctx, base);
loc_8818FEF8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818FEF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818feb0
	if (ctx.cr6.gt) goto loc_8818FEB0;
loc_8818FF08:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818FF0C;
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
	ctx.current_instruction = 0x8818FF24;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8818FF30;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8818ff40
	if (!ctx.cr0.lt) goto loc_8818FF40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818FF40;
	sub_88156678(ctx, base);
loc_8818FF40:
	// stw r30,2092(r27)
	ctx.current_instruction = 0x8818FF40;
	REX_STORE_U32(ctx.r27.u32 + 2092, ctx.r30.u32);
	// b 0x8818ffcc
	goto loc_8818FFCC;
loc_8818FF48:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818ffa8
	if (!ctx.cr6.lt) goto loc_8818FFA8;
loc_8818FF50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818ffa8
	if (ctx.cr6.eq) goto loc_8818FFA8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8818FF5C;
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
	ctx.current_instruction = 0x8818FF80;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8818FF88;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8818ff98
	if (!ctx.cr0.lt) goto loc_8818FF98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818FF98;
	sub_88156678(ctx, base);
loc_8818FF98:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818FF98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818ff50
	if (ctx.cr6.gt) goto loc_8818FF50;
loc_8818FFA8:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8818FFA8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8818FFB8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8818FFBC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8818ffcc
	if (!ctx.cr0.lt) goto loc_8818FFCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818FFCC;
	sub_88156678(ctx, base);
loc_8818FFCC:
	// lwz r11,4040(r27)
	ctx.current_instruction = 0x8818FFCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4040);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818ffe8
	if (ctx.cr6.eq) goto loc_8818FFE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88161130
	ctx.lr = 0x8818FFE4;
	sub_88161130(ctx, base);
loc_8818FFE4:
	// b 0x8818ffec
	goto loc_8818FFEC;
loc_8818FFE8:
	// bl 0x881a5c10
	ctx.lr = 0x8818FFEC;
	sub_881A5C10(ctx, base);
loc_8818FFEC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8818fff8
	if (ctx.cr6.eq) goto loc_8818FFF8;
	// stw r25,22232(r27)
	ctx.current_instruction = 0x8818FFF4;
	REX_STORE_U32(ctx.r27.u32 + 22232, ctx.r25.u32);
loc_8818FFF8:
	// lwz r11,84(r27)
	ctx.current_instruction = 0x8818FFF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8818FFFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8818d8ec
	if (ctx.cr6.eq) goto loc_8818D8EC;
loc_88190008:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8819000C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_115) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEF0C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEF0C;
	ctx.current_instruction = 0x881EEF0C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_72) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF04C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF04C;
	ctx.current_instruction = 0x881EF04C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_123) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF1E4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF1E4;
	ctx.current_instruction = 0x881EF1E4;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savefpr_22) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF270);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EF270;
	ctx.current_instruction = 0x881EF270;
	// stfd f22,-80(r12)
	ctx.current_instruction = 0x881EF270;
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(__restfpr_29) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF2D8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF2D8;
	ctx.current_instruction = 0x881EF2D8;
	// lfd f29,-24(r12)
	ctx.current_instruction = 0x881EF2D8;
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_881EFE28) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EFE28);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EFE28;
	ctx.current_instruction = 0x881EFE28;
	// cmpwi cr6,r3,97
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 97, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// cmpwi cr6,r3,122
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 122, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F0954) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F0954;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F0954) {
			switch (rex_dispatch_address) {
				case 0x881F0984:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F0954;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F0984: goto loc_881F0984;
		default: break;
	}
	// std r31,-8(r1)
	ctx.current_instruction = 0x881F0954;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	ctx.current_instruction = 0x881F095C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r28,-24(r1)
	ctx.current_instruction = 0x881F0960;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	ctx.current_instruction = 0x881F0968;
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881F096C;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x881F0970;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.current_instruction = 0x881F097C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x881ef720
	ctx.lr = 0x881F0984;
	sub_881EF720(ctx, base);
loc_881F0984:
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// lwz r28,80(r31)
	ctx.current_instruction = 0x881F0988;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r30,r10,24320
	ctx.r30.s64 = ctx.r10.s64 + 24320;
	// addi r10,r11,24324
	ctx.r10.s64 = ctx.r11.s64 + 24324;
	// lwz r1,0(r1)
	ctx.current_instruction = 0x881F0998;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881F099C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881F09A0;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.current_instruction = 0x881F09A4;
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.current_instruction = 0x881F09A8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F1780) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F1780;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F1780) {
			switch (rex_dispatch_address) {
				case 0x881F1798:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F1780;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F1798: goto loc_881F1798;
		default: break;
	}
	// std r31,-72(r1)
	ctx.current_instruction = 0x881F1780;
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r31.u64);
	// mflr r31
	ctx.r31.u64 = ctx.lr;
	// stwu r1,-80(r1)
	ctx.current_instruction = 0x881F1788;
	ea = -80 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x88243970
	ctx.lr = 0x881F1798;
	__imp__RtlUnwind(ctx, base);
loc_881F1798:
	// mtlr r31
	ctx.lr = ctx.r31.u64;
	// ld r31,8(r1)
	ctx.current_instruction = 0x881F179C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F1DC0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881F1DC0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F1DC0;
	ctx.current_instruction = 0x881F1DC0;
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.current_instruction = 0x881F1DC4;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// xori r5,r3,248
	ctx.r5.u64 = ctx.r3.u64 ^ 248;
	// lwz r3,-4(r1)
	ctx.current_instruction = 0x881F1DCC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// and r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 & ctx.r4.u64;
	// andc r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,-4(r1)
	ctx.current_instruction = 0x881F1DDC;
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r6.u32);
	// lfd f0,-8(r1)
	ctx.current_instruction = 0x881F1DE0;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// xori r3,r3,248
	ctx.r3.u64 = ctx.r3.u64 ^ 248;
	// mtfsf 255,f0
	ctx.fpscr.storeFromGuest(ctx.f0.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F93B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F93B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F93B0) {
			switch (rex_dispatch_address) {
				case 0x881F93B8:
				case 0x881F93CC:
				case 0x881F93E0:
				case 0x881F9404:
				case 0x881F942C:
				case 0x881F949C:
				case 0x881F94A8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F93B0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F93B8: goto loc_881F93B8;
		case 0x881F93CC: goto loc_881F93CC;
		case 0x881F93E0: goto loc_881F93E0;
		case 0x881F9404: goto loc_881F9404;
		case 0x881F942C: goto loc_881F942C;
		case 0x881F949C: goto loc_881F949C;
		case 0x881F94A8: goto loc_881F94A8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881F93B8;
	__savegprlr_28(ctx, base);
loc_881F93B8:
	// stwu r1,-1664(r1)
	ctx.current_instruction = 0x881F93B8;
	ea = -1664 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,15984
	ctx.r30.s64 = ctx.r3.s64 + 15984;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x881f9240
	ctx.lr = 0x881F93CC;
	sub_881F9240(ctx, base);
loc_881F93CC:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r28,r31,22432
	ctx.r28.s64 = ctx.r31.s64 + 22432;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,24352(r11)
	ctx.current_instruction = 0x881F93D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24352);
	// bl 0x881fc868
	ctx.lr = 0x881F93E0;
	sub_881FC868(ctx, base);
loc_881F93E0:
	// lhz r10,16036(r31)
	ctx.current_instruction = 0x881F93E0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 16036);
	// addi r29,r31,17392
	ctx.r29.s64 = ctx.r31.s64 + 17392;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x881f6480
	ctx.lr = 0x881F9404;
	sub_881F6480(ctx, base);
loc_881F9404:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881f94b4
	if (!ctx.cr6.eq) goto loc_881F94B4;
	// lhz r11,16036(r31)
	ctx.current_instruction = 0x881F940C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 16036);
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
	// bl 0x881f8850
	ctx.lr = 0x881F942C;
	sub_881F8850(ctx, base);
loc_881F942C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881f94b4
	if (!ctx.cr6.eq) goto loc_881F94B4;
	// lwz r11,3948(r31)
	ctx.current_instruction = 0x881F9434;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881f949c
	if (ctx.cr6.eq) goto loc_881F949C;
	// lwz r11,208(r31)
	ctx.current_instruction = 0x881F9440;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,204(r31)
	ctx.current_instruction = 0x881F9448;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,17352(r31)
	ctx.current_instruction = 0x881F9450;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 17352);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// srawi r29,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 1;
	// lwz r10,224(r31)
	ctx.current_instruction = 0x881F945C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r7,3784(r31)
	ctx.current_instruction = 0x881F9460;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// mullw r11,r9,r3
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// lwz r6,3780(r31)
	ctx.current_instruction = 0x881F9468;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r30,3776(r31)
	ctx.current_instruction = 0x881F946C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// lwz r5,220(r31)
	ctx.current_instruction = 0x881F9470;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r9,140(r31)
	ctx.current_instruction = 0x881F9474;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mullw r3,r29,r3
	ctx.r3.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r3.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8817e1c0
	ctx.lr = 0x881F949C;
	sub_8817E1C0(ctx, base);
loc_881F949C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881fcbb0
	ctx.lr = 0x881F94A8;
	sub_881FCBB0(ctx, base);
loc_881F94A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,15628(r31)
	ctx.current_instruction = 0x881F94B0;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r11.u32);
loc_881F94B4:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88204E38) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88204E38;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88204E38) {
			switch (rex_dispatch_address) {
				case 0x88204E40:
				case 0x88204F24:
				case 0x88204FB0:
				case 0x88204FD0:
				case 0x88205020:
				case 0x882052CC:
				case 0x8820554C:
				case 0x882057B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88204E38;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88204E40: goto loc_88204E40;
		case 0x88204F24: goto loc_88204F24;
		case 0x88204FB0: goto loc_88204FB0;
		case 0x88204FD0: goto loc_88204FD0;
		case 0x88205020: goto loc_88205020;
		case 0x882052CC: goto loc_882052CC;
		case 0x8820554C: goto loc_8820554C;
		case 0x882057B8: goto loc_882057B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88204E40;
	__savegprlr_14(ctx, base);
loc_88204E40:
	// stwu r1,-288(r1)
	ctx.current_instruction = 0x88204E40;
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r25,50(r3)
	ctx.current_instruction = 0x88204E44;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r26,0(r7)
	ctx.current_instruction = 0x88204E4C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// lwz r27,348(r3)
	ctx.current_instruction = 0x88204E54;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// stw r5,324(r1)
	ctx.current_instruction = 0x88204E5C;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r20,0
	ctx.r20.s64 = 0;
	// srawi r22,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r25.s32 >> 1;
	// beq cr6,0x88204e88
	if (ctx.cr6.eq) goto loc_88204E88;
	// lwz r11,1304(r3)
	ctx.current_instruction = 0x88204E70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1304);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r16,r20
	ctx.r16.u64 = ctx.r20.u64;
	// lwzx r9,r11,r10
	ctx.current_instruction = 0x88204E7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88204e8c
	if (ctx.cr6.eq) goto loc_88204E8C;
loc_88204E88:
	// li r16,1
	ctx.r16.s64 = 1;
loc_88204E8C:
	// lwz r11,340(r21)
	ctx.current_instruction = 0x88204E8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 340);
	// lhz r24,62(r21)
	ctx.current_instruction = 0x88204E90;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r21.u32 + 62);
	// lhz r19,66(r21)
	ctx.current_instruction = 0x88204E94;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r21.u32 + 66);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r23,64(r21)
	ctx.current_instruction = 0x88204E9C;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r21.u32 + 64);
	// lhz r18,68(r21)
	ctx.current_instruction = 0x88204EA0;
	ctx.r18.u64 = REX_LOAD_U16(ctx.r21.u32 + 68);
	// lwz r31,0(r21)
	ctx.current_instruction = 0x88204EA4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// bne cr6,0x88204ebc
	if (!ctx.cr6.eq) goto loc_88204EBC;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// stw r11,20(r31)
	ctx.current_instruction = 0x88204EB4;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x88204fe8
	goto loc_88204FE8;
loc_88204EBC:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x88204EBC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.current_instruction = 0x88204EC0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.current_instruction = 0x88204EC8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.current_instruction = 0x88204ED8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88204fa8
	if (ctx.cr6.lt) goto loc_88204FA8;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88204EE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x88204EF8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x88204F00;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x88204fa0
	if (!ctx.cr6.lt) goto loc_88204FA0;
loc_88204F08:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x88204F08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88204F0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88204f34
	if (ctx.cr6.lt) goto loc_88204F34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x88204F24;
	sub_88156440(ctx, base);
loc_88204F24:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x88204f08
	if (ctx.cr6.eq) goto loc_88204F08;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88204fe8
	goto loc_88204FE8;
loc_88204F34:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x88204F34;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x88204F3C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x88204F44;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x88204F48;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x88204F50;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x88204F54;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88204F5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x88204F60;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x88204F68;
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
	ctx.current_instruction = 0x88204F84;
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
	ctx.current_instruction = 0x88204F9C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_88204FA0:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88204fe8
	goto loc_88204FE8;
loc_88204FA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88204FB0;
	sub_88156500(ctx, base);
loc_88204FB0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
loc_88204FB8:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88204FB8;
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
	ctx.lr = 0x88204FD0;
	sub_88156500(ctx, base);
loc_88204FD0:
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x88204FD8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88204fb8
	if (ctx.cr6.lt) goto loc_88204FB8;
loc_88204FE8:
	// lwz r11,0(r21)
	ctx.current_instruction = 0x88204FE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88204FEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88205004
	if (ctx.cr6.eq) goto loc_88205004;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88205004:
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88205020
	if (ctx.cr6.eq) goto loc_88205020;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,336(r21)
	ctx.current_instruction = 0x88205018;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 336);
	// bl 0x88202e58
	ctx.lr = 0x88205020;
	sub_88202E58(ctx, base);
loc_88205020:
	// stw r20,112(r1)
	ctx.current_instruction = 0x88205020;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r20,108(r1)
	ctx.current_instruction = 0x88205028;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// stw r20,104(r1)
	ctx.current_instruction = 0x88205030;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// beq cr6,0x8820505c
	if (ctx.cr6.eq) goto loc_8820505C;
	// lwz r11,-24(r17)
	ctx.current_instruction = 0x88205038;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + -24);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8820505c
	if (ctx.cr6.eq) goto loc_8820505C;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r9,-4(r11)
	ctx.current_instruction = 0x88205054;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,104(r1)
	ctx.current_instruction = 0x88205058;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_8820505C:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x88205138
	if (!ctx.cr6.eq) goto loc_88205138;
	// rlwinm r9,r22,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r25,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r25.u64;
	// add r9,r22,r9
	ctx.r9.u64 = ctx.r22.u64 + ctx.r9.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r8,r17
	ctx.r8.u64 = ctx.r17.u64 - ctx.r8.u64;
	// lwz r9,0(r8)
	ctx.current_instruction = 0x88205078;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r7,r9,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x882050c4
	if (ctx.cr6.eq) goto loc_882050C4;
	// rlwinm r9,r9,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x700;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x882050b0
	if (!ctx.cr6.lt) goto loc_882050B0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwzx r5,r9,r27
	ctx.current_instruction = 0x882050A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// stwx r5,r7,r6
	ctx.current_instruction = 0x882050A8;
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r5.u32);
	// b 0x882050c4
	goto loc_882050C4;
loc_882050B0:
	// subf r9,r25,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r25.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r27
	ctx.current_instruction = 0x882050BC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// stwx r4,r7,r5
	ctx.current_instruction = 0x882050C0;
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r4.u32);
loc_882050C4:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x88205138
	if (ctx.cr6.eq) goto loc_88205138;
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// cmpw cr6,r15,r9
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x882050e4
	if (ctx.cr6.eq) goto loc_882050E4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r8,24
	ctx.r9.s64 = ctx.r8.s64 + 24;
	// b 0x882050ec
	goto loc_882050EC;
loc_882050E4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r8,-24
	ctx.r9.s64 = ctx.r8.s64 + -24;
loc_882050EC:
	// lwz r9,0(r9)
	ctx.current_instruction = 0x882050EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r9,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88205138
	if (ctx.cr6.eq) goto loc_88205138;
	// rlwinm r9,r9,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x88205124
	if (!ctx.cr6.lt) goto loc_88205124;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwzx r7,r11,r27
	ctx.current_instruction = 0x88205118;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stwx r7,r9,r8
	ctx.current_instruction = 0x8820511C;
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x88205138
	goto loc_88205138;
loc_88205124:
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r25.u64;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r27
	ctx.current_instruction = 0x88205130;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// stwx r6,r9,r7
	ctx.current_instruction = 0x88205134;
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u32);
loc_88205138:
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88205268
	if (!ctx.cr6.gt) goto loc_88205268;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_8820515C:
	// lhz r5,0(r11)
	ctx.current_instruction = 0x8820515C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.current_instruction = 0x88205164;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8820517c
	if (ctx.cr6.eq) goto loc_8820517C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwu r5,4(r9)
	ctx.current_instruction = 0x88205174;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// b 0x88205184
	goto loc_88205184;
loc_8820517C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r8)
	ctx.current_instruction = 0x88205180;
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r8.u32 = ea;
loc_88205184:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8820515c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8820515C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88205268
	if (!ctx.cr6.gt) goto loc_88205268;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x882051c4
	if (ctx.cr6.eq) goto loc_882051C4;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x882051c4
	if (ctx.cr6.eq) goto loc_882051C4;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x882051b8
	if (ctx.cr6.lt) goto loc_882051B8;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x882051AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	ctx.current_instruction = 0x882051B0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8820526c
	goto loc_8820526C;
loc_882051B8:
	// lwz r11,120(r1)
	ctx.current_instruction = 0x882051B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	ctx.current_instruction = 0x882051BC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8820526c
	goto loc_8820526C;
loc_882051C4:
	// lhz r11,114(r1)
	ctx.current_instruction = 0x882051C4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r10,110(r1)
	ctx.current_instruction = 0x882051C8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r9,106(r1)
	ctx.current_instruction = 0x882051CC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,104(r1)
	ctx.current_instruction = 0x882051D4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,112(r1)
	ctx.current_instruction = 0x882051DC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// lhz r4,108(r1)
	ctx.current_instruction = 0x882051E4;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r11,r31,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r31.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r31,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r31.u64;
	// subf r8,r29,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r29.u64;
	// subf r28,r6,r4
	ctx.r28.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r14,r29,r6
	ctx.r14.u64 = ctx.r6.u64 - ctx.r29.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r28,r28,r8
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r14,r8
	ctx.r8.u64 = ctx.r14.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r14,r9,r8
	ctx.r14.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & ctx.r31.u64;
	// andc r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r28.u64;
	// and r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 & ctx.r29.u64;
	// andc r6,r6,r14
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r14.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,82(r1)
	ctx.current_instruction = 0x8820525C;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	ctx.current_instruction = 0x88205260;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x8820526c
	goto loc_8820526C;
loc_88205268:
	// stw r20,80(r1)
	ctx.current_instruction = 0x88205268;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
loc_8820526C:
	// lhz r11,82(r1)
	ctx.current_instruction = 0x8820526C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.current_instruction = 0x88205274;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r8,r30,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + ctx.r23.u64;
	// and r5,r7,r19
	ctx.r5.u64 = ctx.r7.u64 & ctx.r19.u64;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// and r4,r6,r18
	ctx.r4.u64 = ctx.r6.u64 & ctx.r18.u64;
	// subf r3,r24,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r24.u64;
	// subf r10,r23,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r23.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r3,2(r31)
	ctx.current_instruction = 0x882052B0;
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// sthx r10,r11,r27
	ctx.current_instruction = 0x882052B8;
	REX_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u16);
	// beq cr6,0x882052cc
	if (ctx.cr6.eq) goto loc_882052CC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,336(r21)
	ctx.current_instruction = 0x882052C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 336);
	// bl 0x88202e58
	ctx.lr = 0x882052CC;
	sub_88202E58(ctx, base);
loc_882052CC:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x882052CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r20,112(r1)
	ctx.current_instruction = 0x882052D4;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// stw r20,108(r1)
	ctx.current_instruction = 0x882052DC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// stw r11,104(r1)
	ctx.current_instruction = 0x882052E0;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bne cr6,0x882053b4
	if (!ctx.cr6.eq) goto loc_882053B4;
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r25,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r25.u64;
	// add r9,r22,r11
	ctx.r9.u64 = ctx.r22.u64 + ctx.r11.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r7,r17
	ctx.r9.u64 = ctx.r17.u64 - ctx.r7.u64;
	// lwz r10,0(r9)
	ctx.current_instruction = 0x88205300;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r6,r10,0,14,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x88205340
	if (ctx.cr6.eq) goto loc_88205340;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// li r8,2
	ctx.r8.s64 = 2;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x88205330
	if (!ctx.cr6.lt) goto loc_88205330;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r27
	ctx.current_instruction = 0x88205324;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r7,108(r1)
	ctx.current_instruction = 0x88205328;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// b 0x88205340
	goto loc_88205340;
loc_88205330:
	// subf r10,r25,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r25.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r27
	ctx.current_instruction = 0x88205338;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// stw r6,108(r1)
	ctx.current_instruction = 0x8820533C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
loc_88205340:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x882053b4
	if (ctx.cr6.eq) goto loc_882053B4;
	// addi r10,r22,-1
	ctx.r10.s64 = ctx.r22.s64 + -1;
	// cmpw cr6,r15,r10
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x88205360
	if (ctx.cr6.eq) goto loc_88205360;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 + 24;
	// b 0x88205368
	goto loc_88205368;
loc_88205360:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r9,-24
	ctx.r10.s64 = ctx.r9.s64 + -24;
loc_88205368:
	// lwz r10,0(r10)
	ctx.current_instruction = 0x88205368;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x882053b4
	if (ctx.cr6.eq) goto loc_882053B4;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bge cr6,0x882053a0
	if (!ctx.cr6.lt) goto loc_882053A0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lwzx r7,r11,r27
	ctx.current_instruction = 0x88205394;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stwx r7,r10,r9
	ctx.current_instruction = 0x88205398;
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// b 0x882053b4
	goto loc_882053B4;
loc_882053A0:
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r25.u64;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r27
	ctx.current_instruction = 0x882053AC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// stwx r6,r10,r7
	ctx.current_instruction = 0x882053B0;
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u32);
loc_882053B4:
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x882054f0
	if (!ctx.cr6.gt) goto loc_882054F0;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_882053D8:
	// lhz r5,0(r11)
	ctx.current_instruction = 0x882053D8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.current_instruction = 0x882053E0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x882053f8
	if (ctx.cr6.eq) goto loc_882053F8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwu r5,4(r10)
	ctx.current_instruction = 0x882053F0;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// b 0x88205400
	goto loc_88205400;
loc_882053F8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r9)
	ctx.current_instruction = 0x882053FC;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
loc_88205400:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x882053d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882053D8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x882054f0
	if (!ctx.cr6.gt) goto loc_882054F0;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x88205440
	if (ctx.cr6.eq) goto loc_88205440;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x88205440
	if (ctx.cr6.eq) goto loc_88205440;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88205434
	if (ctx.cr6.lt) goto loc_88205434;
	// lwz r11,120(r1)
	ctx.current_instruction = 0x88205428;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	ctx.current_instruction = 0x8820542C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x882054f4
	goto loc_882054F4;
loc_88205434:
	// lwz r11,88(r1)
	ctx.current_instruction = 0x88205434;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	ctx.current_instruction = 0x88205438;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x882054f4
	goto loc_882054F4;
loc_88205440:
	// lhz r11,114(r1)
	ctx.current_instruction = 0x88205440;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r10,110(r1)
	ctx.current_instruction = 0x88205444;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r9,106(r1)
	ctx.current_instruction = 0x88205448;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,104(r1)
	ctx.current_instruction = 0x88205450;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,112(r1)
	ctx.current_instruction = 0x88205458;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// lhz r4,108(r1)
	ctx.current_instruction = 0x88205460;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// std r3,88(r1)
	ctx.current_instruction = 0x8820546C;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwz r15,324(r1)
	ctx.current_instruction = 0x88205474;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// subf r11,r29,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r29.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r29,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r29.u64;
	// subf r8,r28,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r28.u64;
	// subf r14,r6,r4
	ctx.r14.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r3,r28,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r28.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r14,r14,r8
	ctx.r14.u64 = ctx.r14.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r14,31
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r14.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r14,r11,r10
	ctx.r14.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & ctx.r29.u64;
	// andc r7,r7,r14
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r14.u64;
	// andc r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// ld r3,88(r1)
	ctx.current_instruction = 0x882054C4;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// and r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 & ctx.r28.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,82(r1)
	ctx.current_instruction = 0x882054E4;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	ctx.current_instruction = 0x882054E8;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x882054f4
	goto loc_882054F4;
loc_882054F0:
	// stw r20,80(r1)
	ctx.current_instruction = 0x882054F0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
loc_882054F4:
	// lhz r11,82(r1)
	ctx.current_instruction = 0x882054F4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.current_instruction = 0x882054FC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r8,r30,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + ctx.r23.u64;
	// and r5,r7,r19
	ctx.r5.u64 = ctx.r7.u64 & ctx.r19.u64;
	// and r4,r6,r18
	ctx.r4.u64 = ctx.r6.u64 & ctx.r18.u64;
	// subf r3,r24,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r24.u64;
	// subf r11,r23,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r23.u64;
	// sth r3,6(r31)
	ctx.current_instruction = 0x8820552C;
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r3.u16);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// sth r11,4(r31)
	ctx.current_instruction = 0x88205534;
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8820554c
	if (ctx.cr6.eq) goto loc_8820554C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,336(r21)
	ctx.current_instruction = 0x88205544;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 336);
	// bl 0x88202e58
	ctx.lr = 0x8820554C;
	sub_88202E58(ctx, base);
loc_8820554C:
	// stw r20,112(r1)
	ctx.current_instruction = 0x8820554C;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// stw r20,108(r1)
	ctx.current_instruction = 0x88205554;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// stw r20,104(r1)
	ctx.current_instruction = 0x8820555C;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// beq cr6,0x8820558c
	if (ctx.cr6.eq) goto loc_8820558C;
	// lwz r11,-24(r17)
	ctx.current_instruction = 0x88205564;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + -24);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8820558c
	if (ctx.cr6.eq) goto loc_8820558C;
	// add r11,r26,r25
	ctx.r11.u64 = ctx.r26.u64 + ctx.r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r9,-4(r10)
	ctx.current_instruction = 0x88205584;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,104(r1)
	ctx.current_instruction = 0x88205588;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_8820558C:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x88205620
	if (!ctx.cr6.eq) goto loc_88205620;
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r25,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r25.u64;
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r9,r17
	ctx.r11.u64 = ctx.r17.u64 - ctx.r9.u64;
	// lwz r8,0(r11)
	ctx.current_instruction = 0x882055A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x882055d0
	if (ctx.cr6.eq) goto loc_882055D0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r5,r9,r27
	ctx.current_instruction = 0x882055C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// stwx r5,r8,r7
	ctx.current_instruction = 0x882055CC;
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r5.u32);
loc_882055D0:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x88205620
	if (ctx.cr6.eq) goto loc_88205620;
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// cmpw cr6,r15,r9
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x882055f0
	if (ctx.cr6.eq) goto loc_882055F0;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x882055f8
	goto loc_882055F8;
loc_882055F0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_882055F8:
	// lwz r11,0(r11)
	ctx.current_instruction = 0x882055F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88205620
	if (ctx.cr6.eq) goto loc_88205620;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r8,r11,r27
	ctx.current_instruction = 0x88205618;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stwx r8,r10,r9
	ctx.current_instruction = 0x8820561C;
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_88205620:
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x88205750
	if (!ctx.cr6.gt) goto loc_88205750;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_88205644:
	// lhz r5,0(r11)
	ctx.current_instruction = 0x88205644;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.current_instruction = 0x8820564C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88205664
	if (ctx.cr6.eq) goto loc_88205664;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r10)
	ctx.current_instruction = 0x8820565C;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// b 0x8820566c
	goto loc_8820566C;
loc_88205664:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwu r5,4(r9)
	ctx.current_instruction = 0x88205668;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
loc_8820566C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88205644
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88205644;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x88205750
	if (!ctx.cr6.gt) goto loc_88205750;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x882056ac
	if (ctx.cr6.eq) goto loc_882056AC;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x882056ac
	if (ctx.cr6.eq) goto loc_882056AC;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x882056a0
	if (ctx.cr6.lt) goto loc_882056A0;
	// lwz r11,120(r1)
	ctx.current_instruction = 0x88205694;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	ctx.current_instruction = 0x88205698;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x88205754
	goto loc_88205754;
loc_882056A0:
	// lwz r11,88(r1)
	ctx.current_instruction = 0x882056A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	ctx.current_instruction = 0x882056A4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x88205754
	goto loc_88205754;
loc_882056AC:
	// lhz r11,114(r1)
	ctx.current_instruction = 0x882056AC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r10,110(r1)
	ctx.current_instruction = 0x882056B0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r9,106(r1)
	ctx.current_instruction = 0x882056B4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,104(r1)
	ctx.current_instruction = 0x882056BC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,112(r1)
	ctx.current_instruction = 0x882056C4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// lhz r4,108(r1)
	ctx.current_instruction = 0x882056CC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r11,r31,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r31.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r31,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r31.u64;
	// subf r8,r29,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r29.u64;
	// subf r28,r6,r4
	ctx.r28.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r14,r29,r6
	ctx.r14.u64 = ctx.r6.u64 - ctx.r29.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r28,r28,r8
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r14,r8
	ctx.r8.u64 = ctx.r14.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r14,r9,r8
	ctx.r14.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & ctx.r31.u64;
	// andc r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r28.u64;
	// and r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 & ctx.r29.u64;
	// andc r6,r6,r14
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r14.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,82(r1)
	ctx.current_instruction = 0x88205744;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	ctx.current_instruction = 0x88205748;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x88205754
	goto loc_88205754;
loc_88205750:
	// stw r20,80(r1)
	ctx.current_instruction = 0x88205750;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
loc_88205754:
	// lhz r11,82(r1)
	ctx.current_instruction = 0x88205754;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.current_instruction = 0x8820575C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// add r31,r26,r25
	ctx.r31.u64 = ctx.r26.u64 + ctx.r25.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r23
	ctx.r8.u64 = ctx.r10.u64 + ctx.r23.u64;
	// and r7,r9,r19
	ctx.r7.u64 = ctx.r9.u64 & ctx.r19.u64;
	// and r6,r8,r18
	ctx.r6.u64 = ctx.r8.u64 & ctx.r18.u64;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r5,r24,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r24.u64;
	// subf r4,r23,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r23.u64;
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// sthx r4,r11,r27
	ctx.current_instruction = 0x88205798;
	REX_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r4.u16);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// sth r5,2(r29)
	ctx.current_instruction = 0x882057A0;
	REX_STORE_U16(ctx.r29.u32 + 2, ctx.r5.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x882057b8
	if (ctx.cr6.eq) goto loc_882057B8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,336(r21)
	ctx.current_instruction = 0x882057B0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 336);
	// bl 0x88202e58
	ctx.lr = 0x882057B8;
	sub_88202E58(ctx, base);
loc_882057B8:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x882057B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r20,112(r1)
	ctx.current_instruction = 0x882057C0;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// stw r20,108(r1)
	ctx.current_instruction = 0x882057C8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// stw r11,104(r1)
	ctx.current_instruction = 0x882057CC;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bne cr6,0x88205860
	if (!ctx.cr6.eq) goto loc_88205860;
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r22,r11
	ctx.r9.u64 = ctx.r22.u64 + ctx.r11.u64;
	// subf r11,r10,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r10.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// subf r11,r8,r17
	ctx.r11.u64 = ctx.r17.u64 - ctx.r8.u64;
	// lwz r7,0(r11)
	ctx.current_instruction = 0x882057F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r7,0,14,14
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88205810
	if (ctx.cr6.eq) goto loc_88205810;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwzx r8,r9,r27
	ctx.current_instruction = 0x88205808;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// stw r8,108(r1)
	ctx.current_instruction = 0x8820580C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
loc_88205810:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x88205860
	if (ctx.cr6.eq) goto loc_88205860;
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// cmpw cr6,r15,r9
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x88205830
	if (ctx.cr6.eq) goto loc_88205830;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x88205838
	goto loc_88205838;
loc_88205830:
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_88205838:
	// lwz r11,0(r11)
	ctx.current_instruction = 0x88205838;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88205860
	if (ctx.cr6.eq) goto loc_88205860;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r8,r11,r27
	ctx.current_instruction = 0x88205858;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stwx r8,r10,r9
	ctx.current_instruction = 0x8820585C;
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_88205860:
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x88205990
	if (!ctx.cr6.gt) goto loc_88205990;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_88205884:
	// lhz r5,0(r11)
	ctx.current_instruction = 0x88205884;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.current_instruction = 0x8820588C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x882058a4
	if (ctx.cr6.eq) goto loc_882058A4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r10)
	ctx.current_instruction = 0x8820589C;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// b 0x882058ac
	goto loc_882058AC;
loc_882058A4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwu r5,4(r9)
	ctx.current_instruction = 0x882058A8;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
loc_882058AC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88205884
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88205884;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x88205990
	if (!ctx.cr6.gt) goto loc_88205990;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x882058ec
	if (ctx.cr6.eq) goto loc_882058EC;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x882058ec
	if (ctx.cr6.eq) goto loc_882058EC;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x882058e0
	if (ctx.cr6.lt) goto loc_882058E0;
	// lwz r11,120(r1)
	ctx.current_instruction = 0x882058D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	ctx.current_instruction = 0x882058D8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x88205994
	goto loc_88205994;
loc_882058E0:
	// lwz r11,88(r1)
	ctx.current_instruction = 0x882058E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	ctx.current_instruction = 0x882058E4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x88205994
	goto loc_88205994;
loc_882058EC:
	// lhz r11,114(r1)
	ctx.current_instruction = 0x882058EC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r10,110(r1)
	ctx.current_instruction = 0x882058F0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r9,106(r1)
	ctx.current_instruction = 0x882058F4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,104(r1)
	ctx.current_instruction = 0x882058FC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,112(r1)
	ctx.current_instruction = 0x88205904;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// lhz r4,108(r1)
	ctx.current_instruction = 0x8820590C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r11,r31,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r31.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r31,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r31.u64;
	// subf r8,r30,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r30.u64;
	// subf r28,r6,r4
	ctx.r28.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r27,r30,r6
	ctx.r27.u64 = ctx.r6.u64 - ctx.r30.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r28,r28,r8
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r27,r9,r8
	ctx.r27.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & ctx.r31.u64;
	// andc r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r28.u64;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & ctx.r30.u64;
	// andc r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r27.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,82(r1)
	ctx.current_instruction = 0x88205984;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	ctx.current_instruction = 0x88205988;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x88205994
	goto loc_88205994;
loc_88205990:
	// stw r20,80(r1)
	ctx.current_instruction = 0x88205990;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
loc_88205994:
	// lhz r11,82(r1)
	ctx.current_instruction = 0x88205994;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.current_instruction = 0x8820599C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r8,r10,r23
	ctx.r8.u64 = ctx.r10.u64 + ctx.r23.u64;
	// and r7,r9,r19
	ctx.r7.u64 = ctx.r9.u64 & ctx.r19.u64;
	// and r6,r8,r18
	ctx.r6.u64 = ctx.r8.u64 & ctx.r18.u64;
	// subf r5,r24,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r24.u64;
	// subf r4,r23,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r23.u64;
	// sth r5,6(r29)
	ctx.current_instruction = 0x882059C8;
	REX_STORE_U16(ctx.r29.u32 + 6, ctx.r5.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r4,4(r29)
	ctx.current_instruction = 0x882059D0;
	REX_STORE_U16(ctx.r29.u32 + 4, ctx.r4.u16);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88220E38) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88220E38;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88220E38) {
			switch (rex_dispatch_address) {
				case 0x88220E40:
				case 0x88220E94:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88220E38;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88220E40: goto loc_88220E40;
		case 0x88220E94: goto loc_88220E94;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88220E40;
	__savegprlr_28(ctx, base);
loc_88220E40:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x88220E40;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1120
	ctx.r11.s64 = 1120;
	// vspltish v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r31,1164(r6)
	ctx.current_instruction = 0x88220E58;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lvx128 v12,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// vsubshs v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x882186f8
	ctx.lr = 0x88220E94;
	sub_882186F8(ctx, base);
loc_88220E94:
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// vspltish v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// li r6,1
	ctx.r6.s64 = 1;
	// vspltisb v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// vspltish v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x3)));
	// vspltish v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lvx128 v8,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r9,r6,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// vslh v8,v9,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x88220f58
	if (!ctx.cr6.eq) goto loc_88220F58;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88221004
	if (!ctx.cr6.gt) goto loc_88221004;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_88220EE4:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v13,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v9,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v7,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// lvx128 v6,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v13,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v4,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v3,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v2,v11,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vadduhm v1,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v31,v1,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v30,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsrah v29,v30,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vor v12,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// stvewx128 v62,r0,r11
	ctx.current_instruction = 0x88220F34;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ctx.current_instruction = 0x88220F38;
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bdnz 0x88220ee4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88220EE4;
	// vand v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88220F58:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88221004
	if (!ctx.cr6.gt) goto loc_88221004;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_88220F70:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v9,v0,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vsldoi128 v7,v0,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsldoi128 v6,v0,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vsldoi v5,v13,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vsldoi v4,v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vadduhm v3,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsldoi v2,v13,v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vadduhm v1,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v9,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vor v0,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v31,v13,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v30,v11,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v11,v31
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vadduhm v26,v9,v29
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// lvx128 v9,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v25,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v24,v26,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v23,v25,v9
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v13,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v22,v23,v30
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vsrah v21,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v12,v21
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v21.u8)));
	// vpkshus128 v59,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vor128 v12,v60,v20
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v20.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bdnz 0x88220f70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88220F70;
loc_88221004:
	// vand v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_882243D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x882243D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x882243D8) {
			switch (rex_dispatch_address) {
				case 0x882243E0:
				case 0x88224618:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882243D8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x882243E0: goto loc_882243E0;
		case 0x88224618: goto loc_88224618;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x882243E0;
	__savegprlr_26(ctx, base);
loc_882243E0:
	// stwu r1,-912(r1)
	ctx.current_instruction = 0x882243E0;
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
	// bne cr6,0x88224588
	if (!ctx.cr6.eq) goto loc_88224588;
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
	// b 0x8822458c
	goto loc_8822458C;
loc_88224588:
	// blt cr6,0x88224604
	if (ctx.cr6.lt) goto loc_88224604;
loc_8822458C:
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88224604
	if (!ctx.cr6.gt) goto loc_88224604;
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
loc_882245C0:
	// lbzux r8,r3,r9
	ctx.current_instruction = 0x882245C0;
	ea = ctx.r3.u32 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbzx r6,r27,r11
	ctx.current_instruction = 0x882245C4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// rotlwi r30,r8,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbz r31,0(r11)
	ctx.current_instruction = 0x882245CC;
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
	ctx.current_instruction = 0x882245F4;
	REX_STORE_U16(ctx.r10.u32 + 48, ctx.r6.u16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sthu r8,96(r10)
	ctx.current_instruction = 0x882245FC;
	ea = 96 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x882245c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882245C0;
loc_88224604:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r26,r11
	ea = (ctx.r26.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x88223088
	ctx.lr = 0x88224618;
	sub_88223088(ctx, base);
loc_88224618:
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8822A400) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8822A400;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8822A400) {
			switch (rex_dispatch_address) {
				case 0x8822A408:
				case 0x8822A468:
				case 0x8822A544:
				case 0x8822A590:
				case 0x8822A670:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8822A400;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8822A408: goto loc_8822A408;
		case 0x8822A468: goto loc_8822A468;
		case 0x8822A544: goto loc_8822A544;
		case 0x8822A590: goto loc_8822A590;
		case 0x8822A670: goto loc_8822A670;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8822A408;
	__savegprlr_25(ctx, base);
loc_8822A408:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8822A408;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,24(r6)
	ctx.current_instruction = 0x8822A40C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r7,0(r4)
	ctx.current_instruction = 0x8822A420;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,624(r3)
	ctx.current_instruction = 0x8822A424;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 624);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lbz r8,0(r9)
	ctx.current_instruction = 0x8822A42C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r27,r3,168
	ctx.r27.s64 = ctx.r3.s64 + 168;
	// lwz r6,4(r28)
	ctx.current_instruction = 0x8822A434;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r29,40(r31)
	ctx.current_instruction = 0x8822A43C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8822A444;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,24(r31)
	ctx.current_instruction = 0x8822A448;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r29
	ea = (ctx.r29.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x8822a470
	if (ctx.cr6.lt) goto loc_8822A470;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8817db68
	ctx.lr = 0x8822A468;
	sub_8817DB68(ctx, base);
loc_8822A468:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8822a4d0
	goto loc_8822A4D0;
loc_8822A470:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8822a4cc
	if (!ctx.cr6.gt) goto loc_8822A4CC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8822A47C:
	// lhz r5,0(r11)
	ctx.current_instruction = 0x8822A47C;
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
	ctx.current_instruction = 0x8822A4A4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r25,r27,r3
	ctx.current_instruction = 0x8822A4B8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r25,r9
	ctx.r9.u64 = ctx.r25.u64 | ctx.r9.u64;
	// sthx r8,r3,r29
	ctx.current_instruction = 0x8822A4C4;
	REX_STORE_U16(ctx.r3.u32 + ctx.r29.u32, ctx.r8.u16);
	// bdnz 0x8822a47c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822A47C;
loc_8822A4CC:
	// stw r11,20(r31)
	ctx.current_instruction = 0x8822A4CC;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8822A4D0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8822a538
	if (!ctx.cr6.eq) goto loc_8822A538;
	// lhz r11,0(r29)
	ctx.current_instruction = 0x8822A4D8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// srawi r11,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r6,r7,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rldicr r4,r5,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// std r3,112(r30)
	ctx.current_instruction = 0x8822A514;
	REX_STORE_U64(ctx.r30.u32 + 112, ctx.r3.u64);
	// std r3,96(r30)
	ctx.current_instruction = 0x8822A518;
	REX_STORE_U64(ctx.r30.u32 + 96, ctx.r3.u64);
	// std r3,80(r30)
	ctx.current_instruction = 0x8822A51C;
	REX_STORE_U64(ctx.r30.u32 + 80, ctx.r3.u64);
	// std r3,64(r30)
	ctx.current_instruction = 0x8822A520;
	REX_STORE_U64(ctx.r30.u32 + 64, ctx.r3.u64);
	// std r3,48(r30)
	ctx.current_instruction = 0x8822A524;
	REX_STORE_U64(ctx.r30.u32 + 48, ctx.r3.u64);
	// std r3,32(r30)
	ctx.current_instruction = 0x8822A528;
	REX_STORE_U64(ctx.r30.u32 + 32, ctx.r3.u64);
	// std r3,16(r30)
	ctx.current_instruction = 0x8822A52C;
	REX_STORE_U64(ctx.r30.u32 + 16, ctx.r3.u64);
	// std r3,0(r30)
	ctx.current_instruction = 0x8822A530;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r3.u64);
	// b 0x8822a544
	goto loc_8822A544;
loc_8822A538:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88218068
	ctx.lr = 0x8822A544;
	sub_88218068(ctx, base);
loc_8822A544:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x8822A544;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,624(r26)
	ctx.current_instruction = 0x8822A54C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 624);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r28)
	ctx.current_instruction = 0x8822A558;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r6,4(r28)
	ctx.current_instruction = 0x8822A55C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r29,40(r31)
	ctx.current_instruction = 0x8822A560;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r8,0(r11)
	ctx.current_instruction = 0x8822A564;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8822A568;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,24(r31)
	ctx.current_instruction = 0x8822A56C;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r29
	ea = (ctx.r29.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x8822a598
	if (ctx.cr6.lt) goto loc_8822A598;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8817db68
	ctx.lr = 0x8822A590;
	sub_8817DB68(ctx, base);
loc_8822A590:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8822a5f8
	goto loc_8822A5F8;
loc_8822A598:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8822a5f4
	if (!ctx.cr6.gt) goto loc_8822A5F4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8822A5A4:
	// lhz r5,0(r11)
	ctx.current_instruction = 0x8822A5A4;
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
	ctx.current_instruction = 0x8822A5CC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r28,r27,r3
	ctx.current_instruction = 0x8822A5E0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// sthx r8,r3,r29
	ctx.current_instruction = 0x8822A5EC;
	REX_STORE_U16(ctx.r3.u32 + ctx.r29.u32, ctx.r8.u16);
	// bdnz 0x8822a5a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822A5A4;
loc_8822A5F4:
	// stw r11,20(r31)
	ctx.current_instruction = 0x8822A5F4;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8822A5F8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8822a664
	if (!ctx.cr6.eq) goto loc_8822A664;
	// lhz r11,0(r29)
	ctx.current_instruction = 0x8822A600;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// srawi r11,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r6,r7,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rldicr r4,r5,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// std r3,120(r30)
	ctx.current_instruction = 0x8822A63C;
	REX_STORE_U64(ctx.r30.u32 + 120, ctx.r3.u64);
	// std r3,104(r30)
	ctx.current_instruction = 0x8822A640;
	REX_STORE_U64(ctx.r30.u32 + 104, ctx.r3.u64);
	// std r3,88(r30)
	ctx.current_instruction = 0x8822A644;
	REX_STORE_U64(ctx.r30.u32 + 88, ctx.r3.u64);
	// std r3,72(r30)
	ctx.current_instruction = 0x8822A648;
	REX_STORE_U64(ctx.r30.u32 + 72, ctx.r3.u64);
	// std r3,56(r30)
	ctx.current_instruction = 0x8822A64C;
	REX_STORE_U64(ctx.r30.u32 + 56, ctx.r3.u64);
	// std r3,40(r30)
	ctx.current_instruction = 0x8822A650;
	REX_STORE_U64(ctx.r30.u32 + 40, ctx.r3.u64);
	// std r3,24(r30)
	ctx.current_instruction = 0x8822A654;
	REX_STORE_U64(ctx.r30.u32 + 24, ctx.r3.u64);
	// std r3,8(r30)
	ctx.current_instruction = 0x8822A658;
	REX_STORE_U64(ctx.r30.u32 + 8, ctx.r3.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8822A664:
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88218068
	ctx.lr = 0x8822A670;
	sub_88218068(ctx, base);
loc_8822A670:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8822EB18) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8822EB18;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8822EB18) {
			switch (rex_dispatch_address) {
				case 0x8822EB20:
				case 0x8822EC60:
				case 0x8822EC6C:
				case 0x8822EC7C:
				case 0x8822EC8C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8822EB18;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8822EB20: goto loc_8822EB20;
		case 0x8822EC60: goto loc_8822EC60;
		case 0x8822EC6C: goto loc_8822EC6C;
		case 0x8822EC7C: goto loc_8822EC7C;
		case 0x8822EC8C: goto loc_8822EC8C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8822EB20;
	__savegprlr_14(ctx, base);
loc_8822EB20:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x8822EB20;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,3776(r3)
	ctx.current_instruction = 0x8822EB24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r10,220(r3)
	ctx.current_instruction = 0x8822EB2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// stw r8,300(r1)
	ctx.current_instruction = 0x8822EB34;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,224(r3)
	ctx.current_instruction = 0x8822EB40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r6,3780(r3)
	ctx.current_instruction = 0x8822EB44;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3780);
	// lwz r5,3784(r3)
	ctx.current_instruction = 0x8822EB48;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3784);
	// lwz r10,3792(r3)
	ctx.current_instruction = 0x8822EB4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r9,3796(r3)
	ctx.current_instruction = 0x8822EB54;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3796);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r29,3788(r3)
	ctx.current_instruction = 0x8822EB5C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 3788);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,272(r3)
	ctx.current_instruction = 0x8822EB64;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r30,3812(r22)
	ctx.current_instruction = 0x8822EB6C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r22.u32 + 3812);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8822eb88
	if (ctx.cr6.eq) goto loc_8822EB88;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8822eb88
	if (ctx.cr6.eq) goto loc_8822EB88;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8822eb94
	if (!ctx.cr6.eq) goto loc_8822EB94;
loc_8822EB88:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8822EB94:
	// lhz r11,50(r27)
	ctx.current_instruction = 0x8822EB94;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 50);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lhz r10,74(r27)
	ctx.current_instruction = 0x8822EB9C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 74);
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r26.u32, ctx.xer);
	// rlwinm r15,r11,31,1,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r9,76(r27)
	ctx.current_instruction = 0x8822EBA8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r27.u32 + 76);
	// rotlwi r29,r10,4
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// mullw r11,r15,r7
	ctx.r11.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r9,r9,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r11,r9,r7
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r10,r29,r7
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r7.s32);
	// rlwinm r9,r25,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r20,r10,r8
	ctx.r20.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r14,r9,r3
	ctx.r14.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r21,r11,r6
	ctx.r21.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r19,r11,r5
	ctx.r19.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r18,r10,r30
	ctx.r18.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r17,r11,r4
	ctx.r17.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r16,r11,r31
	ctx.r16.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bge cr6,0x8822ecd4
	if (!ctx.cr6.lt) goto loc_8822ECD4;
loc_8822EBEC:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8822eca8
	if (ctx.cr6.eq) goto loc_8822ECA8;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// subf r26,r21,r19
	ctx.r26.u64 = ctx.r19.u64 - ctx.r21.u64;
	// subf r25,r21,r16
	ctx.r25.u64 = ctx.r16.u64 - ctx.r21.u64;
	// subf r24,r21,r17
	ctx.r24.u64 = ctx.r17.u64 - ctx.r21.u64;
	// subf r23,r20,r18
	ctx.r23.u64 = ctx.r18.u64 - ctx.r20.u64;
loc_8822EC10:
	// lwz r11,0(r14)
	ctx.current_instruction = 0x8822EC10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// rlwinm r11,r11,24,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8822ec8c
	if (ctx.cr6.eq) goto loc_8822EC8C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// add r8,r25,r31
	ctx.r8.u64 = ctx.r25.u64 + ctx.r31.u64;
	// add r7,r24,r31
	ctx.r7.u64 = ctx.r24.u64 + ctx.r31.u64;
	// add r6,r23,r30
	ctx.r6.u64 = ctx.r23.u64 + ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// blt cr6,0x8822ec80
	if (ctx.cr6.lt) goto loc_8822EC80;
	// beq cr6,0x8822ec70
	if (ctx.cr6.eq) goto loc_8822EC70;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// blt cr6,0x8822ec64
	if (ctx.cr6.lt) goto loc_8822EC64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8822EC58;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8822db00
	ctx.lr = 0x8822EC60;
	sub_8822DB00(ctx, base);
loc_8822EC60:
	// b 0x8822ec8c
	goto loc_8822EC8C;
loc_8822EC64:
	// stw r11,84(r1)
	ctx.current_instruction = 0x8822EC64;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8822c2d8
	ctx.lr = 0x8822EC6C;
	sub_8822C2D8(ctx, base);
loc_8822EC6C:
	// b 0x8822ec8c
	goto loc_8822EC8C;
loc_8822EC70:
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8822EC74;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8822cb10
	ctx.lr = 0x8822EC7C;
	sub_8822CB10(ctx, base);
loc_8822EC7C:
	// b 0x8822ec8c
	goto loc_8822EC8C;
loc_8822EC80:
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8822EC84;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8822be38
	ctx.lr = 0x8822EC8C;
	sub_8822BE38(ctx, base);
loc_8822EC8C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r14,r14,24
	ctx.r14.s64 = ctx.r14.s64 + 24;
	// cmplw cr6,r29,r15
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x8822ec10
	if (ctx.cr6.lt) goto loc_8822EC10;
	// lwz r26,300(r1)
	ctx.current_instruction = 0x8822ECA4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
loc_8822ECA8:
	// lwz r11,232(r22)
	ctx.current_instruction = 0x8822ECA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 232);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,228(r22)
	ctx.current_instruction = 0x8822ECB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 228);
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
	// add r20,r10,r20
	ctx.r20.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r19,r11,r19
	ctx.r19.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r18,r10,r18
	ctx.r18.u64 = ctx.r10.u64 + ctx.r18.u64;
	// add r17,r11,r17
	ctx.r17.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r16,r11,r16
	ctx.r16.u64 = ctx.r11.u64 + ctx.r16.u64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8822ebec
	if (ctx.cr6.lt) goto loc_8822EBEC;
loc_8822ECD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

