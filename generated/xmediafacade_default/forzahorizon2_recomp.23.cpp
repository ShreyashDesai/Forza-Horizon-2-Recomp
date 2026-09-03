#include "forzahorizon2_funcs.23.h"

DEFINE_REX_FUNC(sub_88050220) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050220);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050220;
	ctx.current_instruction = 0x88050220;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,104(r11)
	ctx.current_instruction = 0x88050228;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__restgprlr_14) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050860);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x88050860;
	ctx.current_instruction = 0x88050860;
	// ld r14,-152(r1)
	ctx.current_instruction = 0x88050860;
	ctx.r14.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// ld r15,-144(r1)
	ctx.current_instruction = 0x88050864;
	ctx.r15.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// ld r16,-136(r1)
	ctx.current_instruction = 0x88050868;
	ctx.r16.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	ctx.current_instruction = 0x8805086C;
	ctx.r17.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.current_instruction = 0x88050870;
	ctx.r18.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.current_instruction = 0x88050874;
	ctx.r19.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.current_instruction = 0x88050878;
	ctx.r20.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.current_instruction = 0x8805087C;
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.current_instruction = 0x88050880;
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.current_instruction = 0x88050884;
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
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

DEFINE_REX_FUNC(sub_88052420) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88052420;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88052420) {
			switch (rex_dispatch_address) {
				case 0x88052428:
				case 0x88052444:
				case 0x8805245C:
				case 0x8805247C:
				case 0x88052494:
				case 0x8805249C:
				case 0x880524B4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88052420;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88052428: goto loc_88052428;
		case 0x88052444: goto loc_88052444;
		case 0x8805245C: goto loc_8805245C;
		case 0x8805247C: goto loc_8805247C;
		case 0x88052494: goto loc_88052494;
		case 0x8805249C: goto loc_8805249C;
		case 0x880524B4: goto loc_880524B4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88052428;
	__savegprlr_29(ctx, base);
loc_88052428:
	// stwu r1,-2832(r1)
	ctx.current_instruction = 0x88052428;
	ea = -2832 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x88052444
	if (ctx.cr6.eq) goto loc_88052444;
	// bl 0x88052fc8
	ctx.lr = 0x88052444;
	sub_88052FC8(ctx, base);
loc_88052444:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r1)
	ctx.current_instruction = 0x88052450;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x88052d90
	ctx.lr = 0x8805245C;
	sub_88052D90(ctx, base);
loc_8805245C:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// stw r11,80(r1)
	ctx.current_instruction = 0x88052468;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,84(r1)
	ctx.current_instruction = 0x88052470;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x88052d90
	ctx.lr = 0x8805247C;
	sub_88052D90(ctx, base);
loc_8805247C:
	// lwz r11,2824(r1)
	ctx.current_instruction = 0x8805247C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2824);
	// stw r30,96(r1)
	ctx.current_instruction = 0x88052480;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,100(r1)
	ctx.current_instruction = 0x88052488;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r11,108(r1)
	ctx.current_instruction = 0x8805248C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x881ec648
	ctx.lr = 0x88052494;
	sub_881EC648(ctx, base);
loc_88052494:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x881ec718
	ctx.lr = 0x8805249C;
	sub_881EC718(ctx, base);
loc_8805249C:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x880524b4
	if (!ctx.cr0.eq) goto loc_880524B4;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x880524b4
	if (ctx.cr6.eq) goto loc_880524B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88052fc8
	ctx.lr = 0x880524B4;
	sub_88052FC8(ctx, base);
loc_880524B4:
	// addi r1,r1,2832
	ctx.r1.s64 = ctx.r1.s64 + 2832;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88057410) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88057410;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88057410) {
			switch (rex_dispatch_address) {
				case 0x88057444:
				case 0x88057464:
				case 0x88057478:
				case 0x88057484:
				case 0x8805748C:
				case 0x880574A8:
				case 0x880574B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88057410;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88057444: goto loc_88057444;
		case 0x88057464: goto loc_88057464;
		case 0x88057478: goto loc_88057478;
		case 0x88057484: goto loc_88057484;
		case 0x8805748C: goto loc_8805748C;
		case 0x880574A8: goto loc_880574A8;
		case 0x880574B8: goto loc_880574B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88057414;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88057418;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805741C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88057420;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.current_instruction = 0x88057428;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880574b8
	if (ctx.cr6.eq) goto loc_880574B8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88050100
	ctx.lr = 0x88057444;
	sub_88050100(ctx, base);
loc_88057444:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,56(r31)
	ctx.current_instruction = 0x8805745C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x88050000
	ctx.lr = 0x88057464;
	sub_88050000(ctx, base);
loc_88057464:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,120
	ctx.r5.s64 = 120;
	// lwz r3,64(r31)
	ctx.current_instruction = 0x8805746C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880502b0
	ctx.lr = 0x88057478;
	sub_880502B0(ctx, base);
loc_88057478:
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x880547a0
	ctx.lr = 0x88057484;
	sub_880547A0(ctx, base);
loc_88057484:
	// lwz r3,64(r31)
	ctx.current_instruction = 0x88057484;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x880502c8
	ctx.lr = 0x8805748C;
	sub_880502C8(ctx, base);
loc_8805748C:
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,80(r1)
	ctx.current_instruction = 0x88057494;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.current_instruction = 0x8805749C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r6,84(r1)
	ctx.current_instruction = 0x880574A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88050000
	ctx.lr = 0x880574A8;
	sub_88050000(ctx, base);
loc_880574A8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x880574b8
	if (ctx.cr6.eq) goto loc_880574B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88050298
	ctx.lr = 0x880574B8;
	sub_88050298(ctx, base);
loc_880574B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880574C0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880574C8;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880574CC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88059218) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88059218;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88059218) {
			switch (rex_dispatch_address) {
				case 0x88059244:
				case 0x88059260:
				case 0x88059274:
				case 0x88059288:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88059218;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88059244: goto loc_88059244;
		case 0x88059260: goto loc_88059260;
		case 0x88059274: goto loc_88059274;
		case 0x88059288: goto loc_88059288;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805921C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88059220;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88059224;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,524(r3)
	ctx.current_instruction = 0x8805922C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805924c
	if (ctx.cr6.eq) goto loc_8805924C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// bl 0x88050358
	ctx.lr = 0x88059244;
	sub_88050358(ctx, base);
loc_88059244:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,524(r31)
	ctx.current_instruction = 0x88059248;
	REX_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
loc_8805924C:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805924C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.current_instruction = 0x88059254;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88059260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88059260:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x88059260;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,80(r9)
	ctx.current_instruction = 0x88059268;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88059274;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88059274:
	// lwz r7,0(r31)
	ctx.current_instruction = 0x88059274;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,132(r7)
	ctx.current_instruction = 0x8805927C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 132);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88059288;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88059288:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88059290;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88059298;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805AFAC) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805AFAC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805AFAC;
	ctx.current_instruction = 0x8805AFAC;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805B288) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805B288;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805B288) {
			switch (rex_dispatch_address) {
				case 0x8805B290:
				case 0x8805B2C4:
				case 0x8805B2E4:
				case 0x8805B304:
				case 0x8805B324:
				case 0x8805B344:
				case 0x8805B364:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805B288;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805B290: goto loc_8805B290;
		case 0x8805B2C4: goto loc_8805B2C4;
		case 0x8805B2E4: goto loc_8805B2E4;
		case 0x8805B304: goto loc_8805B304;
		case 0x8805B324: goto loc_8805B324;
		case 0x8805B344: goto loc_8805B344;
		case 0x8805B364: goto loc_8805B364;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8805B290;
	__savegprlr_27(ctx, base);
loc_8805B290:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8805B290;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.current_instruction = 0x8805B298;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805b2c8
	if (ctx.cr6.eq) goto loc_8805B2C8;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805B2B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8805B2B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B2C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B2C4:
	// stw r30,44(r31)
	ctx.current_instruction = 0x8805B2C4;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_8805B2C8:
	// lwz r3,48(r31)
	ctx.current_instruction = 0x8805B2C8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805b2e8
	if (ctx.cr6.eq) goto loc_8805B2E8;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805B2D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8805B2D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B2E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B2E4:
	// stw r30,48(r31)
	ctx.current_instruction = 0x8805B2E4;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_8805B2E8:
	// lwz r3,52(r31)
	ctx.current_instruction = 0x8805B2E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805b308
	if (ctx.cr6.eq) goto loc_8805B308;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805B2F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8805B2F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B304;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B304:
	// stw r30,52(r31)
	ctx.current_instruction = 0x8805B304;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_8805B308:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8805b328
	if (ctx.cr6.eq) goto loc_8805B328;
	// lwz r11,0(r29)
	ctx.current_instruction = 0x8805B310;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8805B318;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B324;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B324:
	// stw r29,44(r31)
	ctx.current_instruction = 0x8805B324;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_8805B328:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8805b348
	if (ctx.cr6.eq) goto loc_8805B348;
	// lwz r11,0(r28)
	ctx.current_instruction = 0x8805B330;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8805B338;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B344;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B344:
	// stw r28,48(r31)
	ctx.current_instruction = 0x8805B344;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
loc_8805B348:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8805b368
	if (ctx.cr6.eq) goto loc_8805B368;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x8805B350;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8805B358;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B364;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B364:
	// stw r27,52(r31)
	ctx.current_instruction = 0x8805B364;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
loc_8805B368:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805D760) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805D760;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805D760) {
			switch (rex_dispatch_address) {
				case 0x8805D778:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805D760;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805D778: goto loc_8805D778;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805D764;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805D768;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8805D76C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88061fb8
	ctx.lr = 0x8805D778;
	sub_88061FB8(ctx, base);
loc_8805D778:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r10,9392
	ctx.r8.s64 = ctx.r10.s64 + 9392;
	// std r11,56(r31)
	ctx.current_instruction = 0x8805D788;
	REX_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,44(r31)
	ctx.current_instruction = 0x8805D790;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r8,0(r31)
	ctx.current_instruction = 0x8805D794;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,48(r31)
	ctx.current_instruction = 0x8805D79C;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// std r11,64(r31)
	ctx.current_instruction = 0x8805D7A0;
	REX_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// std r11,72(r31)
	ctx.current_instruction = 0x8805D7A4;
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// std r11,80(r31)
	ctx.current_instruction = 0x8805D7A8;
	REX_STORE_U64(ctx.r31.u32 + 80, ctx.r11.u64);
	// std r11,88(r31)
	ctx.current_instruction = 0x8805D7AC;
	REX_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// std r11,96(r31)
	ctx.current_instruction = 0x8805D7B0;
	REX_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// stw r11,104(r31)
	ctx.current_instruction = 0x8805D7B4;
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	ctx.current_instruction = 0x8805D7B8;
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	ctx.current_instruction = 0x8805D7BC;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	ctx.current_instruction = 0x8805D7C0;
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	ctx.current_instruction = 0x8805D7C4;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	ctx.current_instruction = 0x8805D7C8;
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	ctx.current_instruction = 0x8805D7CC;
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	ctx.current_instruction = 0x8805D7D0;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805D7D8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805D7E0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88061460) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88061460);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88061460;
	ctx.current_instruction = 0x88061460;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88061FB8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88061FB8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88061FB8) {
			switch (rex_dispatch_address) {
				case 0x88061FE4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88061FB8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88061FE4: goto loc_88061FE4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88061FBC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88061FC0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88061FC4;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,4(r3)
	ctx.current_instruction = 0x88061FCC;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,8(r3)
	ctx.current_instruction = 0x88061FD4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r11,12(r31)
	ctx.current_instruction = 0x88061FDC;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x882436a0
	ctx.lr = 0x88061FE4;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_88061FE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88061FEC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88061FF4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88062250) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88062250);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88062250;
	ctx.current_instruction = 0x88062250;
	// stw r4,44(r3)
	ctx.current_instruction = 0x88062250;
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880623D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880623D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880623D0) {
			switch (rex_dispatch_address) {
				case 0x880623FC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880623D0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880623FC: goto loc_880623FC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880623D4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880623D8;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r3,212
	ctx.r10.s64 = ctx.r3.s64 + 212;
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// stw r10,0(r4)
	ctx.current_instruction = 0x880623E8;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,136(r11)
	ctx.current_instruction = 0x880623EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r8,52(r9)
	ctx.current_instruction = 0x880623F0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x880623FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880623FC:
	// addic r7,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r3,r5,10
	ctx.r3.u64 = ctx.r5.u64 | 10;
	// and r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88062414;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88064578) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88064578;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88064578) {
			switch (rex_dispatch_address) {
				case 0x880645A0:
				case 0x880645B8:
				case 0x880645C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88064578;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880645A0: goto loc_880645A0;
		case 0x880645B8: goto loc_880645B8;
		case 0x880645C8: goto loc_880645C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806457C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88064580;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88064584;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x88064590;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	ctx.current_instruction = 0x88064598;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x880cad68
	ctx.lr = 0x880645A0;
	sub_880CAD68(ctx, base);
loc_880645A0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880645c0
	if (ctx.cr6.lt) goto loc_880645C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.current_instruction = 0x880645AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x88063d40
	ctx.lr = 0x880645B8;
	sub_88063D40(ctx, base);
loc_880645B8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x880645e0
	if (!ctx.cr6.lt) goto loc_880645E0;
loc_880645C0:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x880645C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x880cb360
	ctx.lr = 0x880645C8;
	sub_880CB360(ctx, base);
loc_880645C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880645D0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880645D8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880645E0:
	// lwz r3,84(r1)
	ctx.current_instruction = 0x880645E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880645E8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880645F0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88065650) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88065650;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88065650) {
			switch (rex_dispatch_address) {
				case 0x88065678:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88065650;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88065678: goto loc_88065678;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88065654;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88065658;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// stw r3,0(r4)
	ctx.current_instruction = 0x88065664;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,124(r11)
	ctx.current_instruction = 0x88065668;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,52(r11)
	ctx.current_instruction = 0x8806566C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88065678;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88065678:
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
	ctx.current_instruction = 0x88065690;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88066CA8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88066CA8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88066CA8) {
			switch (rex_dispatch_address) {
				case 0x88066CB0:
				case 0x88066D30:
				case 0x88066DA8:
				case 0x88066E18:
				case 0x88066E30:
				case 0x88066E98:
				case 0x88066FA0:
				case 0x88067074:
				case 0x88067108:
				case 0x880671A4:
				case 0x880671F0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88066CA8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88066CB0: goto loc_88066CB0;
		case 0x88066D30: goto loc_88066D30;
		case 0x88066DA8: goto loc_88066DA8;
		case 0x88066E18: goto loc_88066E18;
		case 0x88066E30: goto loc_88066E30;
		case 0x88066E98: goto loc_88066E98;
		case 0x88066FA0: goto loc_88066FA0;
		case 0x88067074: goto loc_88067074;
		case 0x88067108: goto loc_88067108;
		case 0x880671A4: goto loc_880671A4;
		case 0x880671F0: goto loc_880671F0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x88066CB0;
	__savegprlr_20(ctx, base);
loc_88066CB0:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x88066CB0;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r25,80(r1)
	ctx.current_instruction = 0x88066CC0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r25,4(r6)
	ctx.current_instruction = 0x88066CC8;
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r25.u32);
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// li r23,128
	ctx.r23.s64 = 128;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880672bc
	if (ctx.cr6.eq) goto loc_880672BC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880672c8
	if (ctx.cr6.eq) goto loc_880672C8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x880672bc
	if (ctx.cr6.eq) goto loc_880672BC;
	// stw r25,0(r4)
	ctx.current_instruction = 0x88066CEC;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r25.u32);
	// li r21,7
	ctx.r21.s64 = 7;
	// stw r25,0(r5)
	ctx.current_instruction = 0x88066CF4;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r25.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// lbz r11,525(r3)
	ctx.current_instruction = 0x88066CFC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 525);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x88066f34
	if (ctx.cr6.eq) goto loc_88066F34;
loc_88066D08:
	// lwz r11,420(r31)
	ctx.current_instruction = 0x88066D08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88066d84
	if (!ctx.cr6.eq) goto loc_88066D84;
	// ld r11,408(r31)
	ctx.current_instruction = 0x88066D14;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 408);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x88066d58
	if (!ctx.cr6.eq) goto loc_88066D58;
	// lwz r30,392(r31)
	ctx.current_instruction = 0x88066D20;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,392(r31)
	ctx.current_instruction = 0x88066D28;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r21.u32);
	// bl 0x88065948
	ctx.lr = 0x88066D30;
	sub_88065948(ctx, base);
loc_88066D30:
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x880672ac
	if (ctx.cr6.eq) goto loc_880672AC;
	// lbz r11,525(r31)
	ctx.current_instruction = 0x88066D38;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 525);
	// stw r30,392(r31)
	ctx.current_instruction = 0x88066D3C;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x88066f28
	if (ctx.cr6.eq) goto loc_88066F28;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x88066f68
	if (ctx.cr6.eq) goto loc_88066F68;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8806715c
	if (!ctx.cr6.eq) goto loc_8806715C;
loc_88066D58:
	// lwz r11,420(r31)
	ctx.current_instruction = 0x88066D58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88066d84
	if (!ctx.cr6.eq) goto loc_88066D84;
	// ld r11,408(r31)
	ctx.current_instruction = 0x88066D64;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 408);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8806715c
	if (ctx.cr6.eq) goto loc_8806715C;
	// lwz r10,72(r31)
	ctx.current_instruction = 0x88066D70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// stw r22,416(r31)
	ctx.current_instruction = 0x88066D74;
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r22.u32);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// std r8,408(r31)
	ctx.current_instruction = 0x88066D7C;
	REX_STORE_U64(ctx.r31.u32 + 408, ctx.r8.u64);
	// stw r10,420(r31)
	ctx.current_instruction = 0x88066D80;
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r10.u32);
loc_88066D84:
	// lwz r11,420(r31)
	ctx.current_instruction = 0x88066D84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x88066d94
	if (!ctx.cr6.gt) goto loc_88066D94;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_88066D94:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// ld r4,400(r31)
	ctx.current_instruction = 0x88066D98;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 400);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x88066DA8;
	sub_8805ADC8(ctx, base);
loc_88066DA8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r3,0(r24)
	ctx.current_instruction = 0x88066DAC;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r3,r23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x88067138
	if (!ctx.cr6.eq) goto loc_88067138;
	// lwz r11,552(r31)
	ctx.current_instruction = 0x88066DB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88066e1c
	if (ctx.cr6.eq) goto loc_88066E1C;
	// lhz r9,518(r31)
	ctx.current_instruction = 0x88066DC4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 518);
	// lwz r7,24(r31)
	ctx.current_instruction = 0x88066DC8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x88066f7c
	if (ctx.cr6.gt) goto loc_88066F7C;
	// lwz r11,420(r31)
	ctx.current_instruction = 0x88066DD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// ld r10,408(r31)
	ctx.current_instruction = 0x88066DDC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 408);
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// clrldi r3,r4,32
	ctx.r3.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// subf r7,r10,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r10.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpld cr6,r8,r6
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r6.u64, ctx.xer);
	// bgt cr6,0x88066f7c
	if (ctx.cr6.gt) goto loc_88066F7C;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,612(r31)
	ctx.current_instruction = 0x88066E00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 612);
	// lwz r4,0(r26)
	ctx.current_instruction = 0x88066E04;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880547a0
	ctx.lr = 0x88066E18;
	sub_880547A0(ctx, base);
loc_88066E18:
	// b 0x88066e38
	goto loc_88066E38;
loc_88066E1C:
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// bgt cr6,0x8806729c
	if (ctx.cr6.gt) goto loc_8806729C;
	// lwz r4,0(r26)
	ctx.current_instruction = 0x88066E24;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r3,612(r31)
	ctx.current_instruction = 0x88066E28;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 612);
	// bl 0x880547a0
	ctx.lr = 0x88066E30;
	sub_880547A0(ctx, base);
loc_88066E30:
	// lwz r11,612(r31)
	ctx.current_instruction = 0x88066E30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 612);
	// stw r11,0(r26)
	ctx.current_instruction = 0x88066E34;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_88066E38:
	// lwz r10,0(r24)
	ctx.current_instruction = 0x88066E38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// ld r11,400(r31)
	ctx.current_instruction = 0x88066E3C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 400);
	// lwz r9,420(r31)
	ctx.current_instruction = 0x88066E40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,548(r31)
	ctx.current_instruction = 0x88066E48;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 548);
	// std r8,400(r31)
	ctx.current_instruction = 0x88066E4C;
	REX_STORE_U64(ctx.r31.u32 + 400, ctx.r8.u64);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r6,0(r24)
	ctx.current_instruction = 0x88066E54;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// subf r11,r6,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r11,420(r31)
	ctx.current_instruction = 0x88066E5C;
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// bne cr6,0x8806715c
	if (!ctx.cr6.eq) goto loc_8806715C;
	// lwz r10,552(r31)
	ctx.current_instruction = 0x88066E64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88066ebc
	if (ctx.cr6.eq) goto loc_88066EBC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88066eb4
	if (!ctx.cr6.eq) goto loc_88066EB4;
	// ld r11,408(r31)
	ctx.current_instruction = 0x88066E78;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 408);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bgt cr6,0x88066eb4
	if (ctx.cr6.gt) goto loc_88066EB4;
	// addi r6,r31,600
	ctx.r6.s64 = ctx.r31.s64 + 600;
	// lwz r4,612(r31)
	ctx.current_instruction = 0x88066E88;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 612);
	// lwz r3,592(r31)
	ctx.current_instruction = 0x88066E8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 592);
	// lhz r5,518(r31)
	ctx.current_instruction = 0x88066E90;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 518);
	// bl 0x880d8fe0
	ctx.lr = 0x88066E98;
	sub_880D8FE0(ctx, base);
loc_88066E98:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880671c0
	if (ctx.cr6.lt) goto loc_880671C0;
	// lwz r11,612(r31)
	ctx.current_instruction = 0x88066EA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 612);
	// stw r11,0(r26)
	ctx.current_instruction = 0x88066EA4;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lhz r10,518(r31)
	ctx.current_instruction = 0x88066EA8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 518);
	// stw r10,0(r24)
	ctx.current_instruction = 0x88066EAC;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// b 0x88066ebc
	goto loc_88066EBC;
loc_88066EB4:
	// stw r25,0(r26)
	ctx.current_instruction = 0x88066EB4;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
	// stw r25,0(r24)
	ctx.current_instruction = 0x88066EB8;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
loc_88066EBC:
	// lwz r11,416(r31)
	ctx.current_instruction = 0x88066EBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88066f10
	if (ctx.cr6.eq) goto loc_88066F10;
	// lhz r11,518(r31)
	ctx.current_instruction = 0x88066EC8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 518);
	// lwz r10,72(r31)
	ctx.current_instruction = 0x88066ECC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// ld r9,408(r31)
	ctx.current_instruction = 0x88066ED0;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 408);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r25,416(r31)
	ctx.current_instruction = 0x88066ED8;
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r25.u32);
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// cmpld cr6,r9,r7
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r7.u64, ctx.xer);
	// bne cr6,0x88066f04
	if (!ctx.cr6.eq) goto loc_88066F04;
	// stw r22,4(r20)
	ctx.current_instruction = 0x88066EE8;
	REX_STORE_U32(ctx.r20.u32 + 4, ctx.r22.u32);
	// lwz r11,512(r31)
	ctx.current_instruction = 0x88066EEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 512);
	// lwz r10,36(r31)
	ctx.current_instruction = 0x88066EF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// mulli r7,r8,10000
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(10000));
	// std r7,8(r20)
	ctx.current_instruction = 0x88066F00;
	REX_STORE_U64(ctx.r20.u32 + 8, ctx.r7.u64);
loc_88066F04:
	// lwz r11,552(r31)
	ctx.current_instruction = 0x88066F04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806715c
	if (ctx.cr6.eq) goto loc_8806715C;
loc_88066F10:
	// lwz r11,552(r31)
	ctx.current_instruction = 0x88066F10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88067290
	if (ctx.cr6.eq) goto loc_88067290;
	// lwz r11,0(r26)
	ctx.current_instruction = 0x88066F1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8806715c
	if (!ctx.cr6.eq) goto loc_8806715C;
loc_88066F28:
	// lbz r11,525(r31)
	ctx.current_instruction = 0x88066F28;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 525);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x88066d08
	if (!ctx.cr6.eq) goto loc_88066D08;
loc_88066F34:
	// lbz r11,524(r31)
	ctx.current_instruction = 0x88066F34;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 524);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8806715c
	if (ctx.cr6.gt) goto loc_8806715C;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r27,3
	ctx.r27.s64 = 3;
	// li r28,4
	ctx.r28.s64 = 4;
loc_88066F50:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88066f8c
	if (ctx.cr6.eq) goto loc_88066F8C;
	// bdz 0x88067030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88067030;
	// bdz 0x88067050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88067050;
	// b 0x880670ec
	goto loc_880670EC;
loc_88066F68:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// stw r25,0(r24)
	ctx.current_instruction = 0x88066F6C;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88066F7C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88066F8C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,400(r31)
	ctx.current_instruction = 0x88066F90;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 400);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x88066FA0;
	sub_8805ADC8(ctx, base);
loc_88066FA0:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x88067138
	if (!ctx.cr6.eq) goto loc_88067138;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88066FA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88067138
	if (ctx.cr6.eq) goto loc_88067138;
	// lwz r9,72(r31)
	ctx.current_instruction = 0x88066FB4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// ld r11,400(r31)
	ctx.current_instruction = 0x88066FB8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 400);
	// sth r25,536(r31)
	ctx.current_instruction = 0x88066FBC;
	REX_STORE_U16(ctx.r31.u32 + 536, ctx.r25.u16);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r22,416(r31)
	ctx.current_instruction = 0x88066FC4;
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r22.u32);
	// stw r9,420(r31)
	ctx.current_instruction = 0x88066FC8;
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r9.u32);
	// std r8,400(r31)
	ctx.current_instruction = 0x88066FCC;
	REX_STORE_U64(ctx.r31.u32 + 400, ctx.r8.u64);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x88066FD0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// sth r7,528(r31)
	ctx.current_instruction = 0x88066FD8;
	REX_STORE_U16(ctx.r31.u32 + 528, ctx.r7.u16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r7,526(r31)
	ctx.current_instruction = 0x88066FE0;
	REX_STORE_U8(ctx.r31.u32 + 526, ctx.r7.u8);
	// beq cr6,0x88066ff4
	if (ctx.cr6.eq) goto loc_88066FF4;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r9,r10,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r10.u64;
	// sth r9,528(r31)
	ctx.current_instruction = 0x88066FF0;
	REX_STORE_U16(ctx.r31.u32 + 528, ctx.r9.u16);
loc_88066FF4:
	// lbz r9,526(r31)
	ctx.current_instruction = 0x88066FF4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 526);
	// lhz r10,522(r31)
	ctx.current_instruction = 0x88066FF8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 522);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8806701c
	if (!ctx.cr6.gt) goto loc_8806701C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r29,524(r31)
	ctx.current_instruction = 0x8806700C;
	REX_STORE_U8(ctx.r31.u32 + 524, ctx.r29.u8);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,520(r31)
	ctx.current_instruction = 0x88067014;
	REX_STORE_U16(ctx.r31.u32 + 520, ctx.r10.u16);
	// b 0x8806711c
	goto loc_8806711C;
loc_8806701C:
	// bne cr6,0x88067028
	if (!ctx.cr6.eq) goto loc_88067028;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// sth r11,520(r31)
	ctx.current_instruction = 0x88067024;
	REX_STORE_U16(ctx.r31.u32 + 520, ctx.r11.u16);
loc_88067028:
	// stb r29,524(r31)
	ctx.current_instruction = 0x88067028;
	REX_STORE_U8(ctx.r31.u32 + 524, ctx.r29.u8);
	// b 0x8806711c
	goto loc_8806711C;
loc_88067030:
	// lwz r11,420(r31)
	ctx.current_instruction = 0x88067030;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88067180
	if (!ctx.cr6.eq) goto loc_88067180;
	// lhz r10,528(r31)
	ctx.current_instruction = 0x8806703C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 528);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88067148
	if (!ctx.cr6.eq) goto loc_88067148;
	// stb r27,524(r31)
	ctx.current_instruction = 0x88067048;
	REX_STORE_U8(ctx.r31.u32 + 524, ctx.r27.u8);
	// b 0x8806711c
	goto loc_8806711C;
loc_88067050:
	// lhz r11,522(r31)
	ctx.current_instruction = 0x88067050;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 522);
	// lhz r10,520(r31)
	ctx.current_instruction = 0x88067054;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 520);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x880670e4
	if (!ctx.cr6.gt) goto loc_880670E4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,400(r31)
	ctx.current_instruction = 0x88067064;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 400);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x88067074;
	sub_8805ADC8(ctx, base);
loc_88067074:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x88067138
	if (!ctx.cr6.eq) goto loc_88067138;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8806707C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88067138
	if (ctx.cr6.eq) goto loc_88067138;
	// ld r11,400(r31)
	ctx.current_instruction = 0x88067088;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 400);
	// stw r22,416(r31)
	ctx.current_instruction = 0x8806708C;
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r22.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,72(r31)
	ctx.current_instruction = 0x88067094;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// std r11,400(r31)
	ctx.current_instruction = 0x88067098;
	REX_STORE_U64(ctx.r31.u32 + 400, ctx.r11.u64);
	// stw r9,420(r31)
	ctx.current_instruction = 0x8806709C;
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r9.u32);
	// lbz r8,0(r10)
	ctx.current_instruction = 0x880670A0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// sth r8,528(r31)
	ctx.current_instruction = 0x880670A8;
	REX_STORE_U16(ctx.r31.u32 + 528, ctx.r8.u16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,526(r31)
	ctx.current_instruction = 0x880670B0;
	REX_STORE_U8(ctx.r31.u32 + 526, ctx.r8.u8);
	// beq cr6,0x880670c4
	if (ctx.cr6.eq) goto loc_880670C4;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// sth r9,528(r31)
	ctx.current_instruction = 0x880670C0;
	REX_STORE_U16(ctx.r31.u32 + 528, ctx.r9.u16);
loc_880670C4:
	// lhz r10,520(r31)
	ctx.current_instruction = 0x880670C4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 520);
	// lbz r11,526(r31)
	ctx.current_instruction = 0x880670C8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 526);
	// stb r29,524(r31)
	ctx.current_instruction = 0x880670CC;
	REX_STORE_U8(ctx.r31.u32 + 524, ctx.r29.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,520(r31)
	ctx.current_instruction = 0x880670DC;
	REX_STORE_U16(ctx.r31.u32 + 520, ctx.r10.u16);
	// b 0x8806711c
	goto loc_8806711C;
loc_880670E4:
	// stb r28,524(r31)
	ctx.current_instruction = 0x880670E4;
	REX_STORE_U8(ctx.r31.u32 + 524, ctx.r28.u8);
	// b 0x8806711c
	goto loc_8806711C;
loc_880670EC:
	// lwz r30,392(r31)
	ctx.current_instruction = 0x880670EC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r25,524(r31)
	ctx.current_instruction = 0x880670F4;
	REX_STORE_U8(ctx.r31.u32 + 524, ctx.r25.u8);
	// std r25,408(r31)
	ctx.current_instruction = 0x880670F8;
	REX_STORE_U64(ctx.r31.u32 + 408, ctx.r25.u64);
	// stb r25,525(r31)
	ctx.current_instruction = 0x880670FC;
	REX_STORE_U8(ctx.r31.u32 + 525, ctx.r25.u8);
	// stw r21,392(r31)
	ctx.current_instruction = 0x88067100;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r21.u32);
	// bl 0x88065948
	ctx.lr = 0x88067108;
	sub_88065948(ctx, base);
loc_88067108:
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x880672ac
	if (ctx.cr6.eq) goto loc_880672AC;
	// stw r30,392(r31)
	ctx.current_instruction = 0x88067110;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8806715c
	if (!ctx.cr6.eq) goto loc_8806715C;
loc_8806711C:
	// lbz r11,524(r31)
	ctx.current_instruction = 0x8806711C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 524);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x88066f50
	if (!ctx.cr6.gt) goto loc_88066F50;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88067138:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88067148:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88067180
	if (!ctx.cr6.eq) goto loc_88067180;
	// lhz r11,528(r31)
	ctx.current_instruction = 0x88067150;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88067168
	if (!ctx.cr6.eq) goto loc_88067168;
loc_8806715C:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88067168:
	// lwz r10,72(r31)
	ctx.current_instruction = 0x88067168;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// stw r22,416(r31)
	ctx.current_instruction = 0x8806716C;
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r22.u32);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// sth r9,528(r31)
	ctx.current_instruction = 0x88067178;
	REX_STORE_U16(ctx.r31.u32 + 528, ctx.r9.u16);
	// stw r10,420(r31)
	ctx.current_instruction = 0x8806717C;
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r10.u32);
loc_88067180:
	// lwz r11,420(r31)
	ctx.current_instruction = 0x88067180;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x88067190
	if (!ctx.cr6.gt) goto loc_88067190;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_88067190:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// ld r4,400(r31)
	ctx.current_instruction = 0x88067194;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 400);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880671A4;
	sub_8805ADC8(ctx, base);
loc_880671A4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r3,0(r24)
	ctx.current_instruction = 0x880671A8;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r3,r23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x88067138
	if (!ctx.cr6.eq) goto loc_88067138;
	// lwz r11,552(r31)
	ctx.current_instruction = 0x880671B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880671d4
	if (ctx.cr6.eq) goto loc_880671D4;
loc_880671C0:
	// stw r25,0(r26)
	ctx.current_instruction = 0x880671C0;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,0(r24)
	ctx.current_instruction = 0x880671C8;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880671D4:
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// bgt cr6,0x8806729c
	if (ctx.cr6.gt) goto loc_8806729C;
	// lwz r4,0(r26)
	ctx.current_instruction = 0x880671DC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8806729c
	if (ctx.cr6.eq) goto loc_8806729C;
	// lwz r3,612(r31)
	ctx.current_instruction = 0x880671E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 612);
	// bl 0x880547a0
	ctx.lr = 0x880671F0;
	sub_880547A0(ctx, base);
loc_880671F0:
	// lwz r11,612(r31)
	ctx.current_instruction = 0x880671F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 612);
	// stw r11,0(r26)
	ctx.current_instruction = 0x880671F4;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.current_instruction = 0x880671F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// ld r10,400(r31)
	ctx.current_instruction = 0x880671FC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 400);
	// lwz r9,420(r31)
	ctx.current_instruction = 0x88067200;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,548(r31)
	ctx.current_instruction = 0x88067208;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 548);
	// std r7,400(r31)
	ctx.current_instruction = 0x8806720C;
	REX_STORE_U64(ctx.r31.u32 + 400, ctx.r7.u64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r6,0(r24)
	ctx.current_instruction = 0x88067214;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// subf r5,r6,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r5,420(r31)
	ctx.current_instruction = 0x8806721C;
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r5.u32);
	// bne cr6,0x8806715c
	if (!ctx.cr6.eq) goto loc_8806715C;
	// lwz r11,416(r31)
	ctx.current_instruction = 0x88067224;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88067290
	if (ctx.cr6.eq) goto loc_88067290;
	// lbz r11,526(r31)
	ctx.current_instruction = 0x88067230;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 526);
	// lwz r10,72(r31)
	ctx.current_instruction = 0x88067234;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lhz r9,528(r31)
	ctx.current_instruction = 0x88067238;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 528);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x88067280
	if (!ctx.cr6.eq) goto loc_88067280;
	// stw r22,4(r20)
	ctx.current_instruction = 0x88067248;
	REX_STORE_U32(ctx.r20.u32 + 4, ctx.r22.u32);
	// lhz r10,536(r31)
	ctx.current_instruction = 0x8806724C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 536);
	// lwz r11,532(r31)
	ctx.current_instruction = 0x88067250;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 532);
	// lwz r9,36(r31)
	ctx.current_instruction = 0x88067254;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r10,512(r31)
	ctx.current_instruction = 0x8806725C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 512);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// mulli r5,r6,10000
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(10000));
	// std r5,8(r20)
	ctx.current_instruction = 0x88067270;
	REX_STORE_U64(ctx.r20.u32 + 8, ctx.r5.u64);
	// lhz r11,536(r31)
	ctx.current_instruction = 0x88067274;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 536);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// sth r4,536(r31)
	ctx.current_instruction = 0x8806727C;
	REX_STORE_U16(ctx.r31.u32 + 536, ctx.r4.u16);
loc_88067280:
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,416(r31)
	ctx.current_instruction = 0x88067284;
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88067290:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_8806729C:
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,0(r26)
	ctx.current_instruction = 0x880672A0;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880672AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,0(r24)
	ctx.current_instruction = 0x880672B0;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880672BC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x880672c8
	if (ctx.cr6.eq) goto loc_880672C8;
	// stw r25,0(r26)
	ctx.current_instruction = 0x880672C4;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
loc_880672C8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x880672d4
	if (ctx.cr6.eq) goto loc_880672D4;
	// stw r25,0(r24)
	ctx.current_instruction = 0x880672D0;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
loc_880672D4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807C518) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807C518;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807C518) {
			switch (rex_dispatch_address) {
				case 0x8807C520:
				case 0x8807C5A0:
				case 0x8807C5B4:
				case 0x8807C624:
				case 0x8807C630:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807C518;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807C520: goto loc_8807C520;
		case 0x8807C5A0: goto loc_8807C5A0;
		case 0x8807C5B4: goto loc_8807C5B4;
		case 0x8807C624: goto loc_8807C624;
		case 0x8807C630: goto loc_8807C630;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8807C520;
	__savegprlr_28(ctx, base);
loc_8807C520:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8807C520;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.current_instruction = 0x8807C524;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8807c634
	if (ctx.cr6.eq) goto loc_8807C634;
	// lwz r10,16(r11)
	ctx.current_instruction = 0x8807C534;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lis r9,9356
	ctx.r9.s64 = 613154816;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r28,r9,32768
	ctx.r28.u64 = ctx.r9.u64 | 32768;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8807c610
	if (!ctx.cr6.gt) goto loc_8807C610;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8807C54C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.current_instruction = 0x8807C550;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,0(r11)
	ctx.current_instruction = 0x8807C558;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne cr6,0x8807c564
	if (!ctx.cr6.eq) goto loc_8807C564;
	// stw r29,4(r11)
	ctx.current_instruction = 0x8807C560;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_8807C564:
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8807C564;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,4(r10)
	ctx.current_instruction = 0x8807C568;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r10)
	ctx.current_instruction = 0x8807C56C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,12(r11)
	ctx.current_instruction = 0x8807C570;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,8(r11)
	ctx.current_instruction = 0x8807C578;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bne cr6,0x8807c584
	if (!ctx.cr6.eq) goto loc_8807C584;
	// stw r10,12(r11)
	ctx.current_instruction = 0x8807C580;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_8807C584:
	// lwz r10,16(r11)
	ctx.current_instruction = 0x8807C584;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r11)
	ctx.current_instruction = 0x8807C590;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// beq cr6,0x8807c610
	if (ctx.cr6.eq) goto loc_8807C610;
loc_8807C598:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880fc4a8
	ctx.lr = 0x8807C5A0;
	sub_880FC4A8(ctx, base);
loc_8807C5A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8807c5b4
	if (ctx.cr6.eq) goto loc_8807C5B4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88050358
	ctx.lr = 0x8807C5B4;
	sub_88050358(ctx, base);
loc_8807C5B4:
	// lwz r11,12(r30)
	ctx.current_instruction = 0x8807C5B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x8807C5B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8807c610
	if (!ctx.cr6.gt) goto loc_8807C610;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8807C5C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.current_instruction = 0x8807C5C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,0(r11)
	ctx.current_instruction = 0x8807C5D0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne cr6,0x8807c5dc
	if (!ctx.cr6.eq) goto loc_8807C5DC;
	// stw r29,4(r11)
	ctx.current_instruction = 0x8807C5D8;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_8807C5DC:
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8807C5DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,4(r10)
	ctx.current_instruction = 0x8807C5E0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r10)
	ctx.current_instruction = 0x8807C5E4;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,8(r11)
	ctx.current_instruction = 0x8807C5E8;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r8,12(r11)
	ctx.current_instruction = 0x8807C5EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8807c5fc
	if (!ctx.cr6.eq) goto loc_8807C5FC;
	// stw r10,12(r11)
	ctx.current_instruction = 0x8807C5F8;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_8807C5FC:
	// lwz r10,16(r11)
	ctx.current_instruction = 0x8807C5FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r11)
	ctx.current_instruction = 0x8807C608;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// bne cr6,0x8807c598
	if (!ctx.cr6.eq) goto loc_8807C598;
loc_8807C610:
	// lwz r31,12(r30)
	ctx.current_instruction = 0x8807C610;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8807c634
	if (ctx.cr6.eq) goto loc_8807C634;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807c3a8
	ctx.lr = 0x8807C624;
	sub_8807C3A8(ctx, base);
loc_8807C624:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88050358
	ctx.lr = 0x8807C630;
	sub_88050358(ctx, base);
loc_8807C630:
	// stw r29,12(r30)
	ctx.current_instruction = 0x8807C630;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
loc_8807C634:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807E700) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807E700;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807E700) {
			switch (rex_dispatch_address) {
				case 0x8807E708:
				case 0x8807E764:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807E700;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807E708: goto loc_8807E708;
		case 0x8807E764: goto loc_8807E764;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8807E708;
	__savegprlr_29(ctx, base);
loc_8807E708:
	// stfd f31,-40(r1)
	ctx.current_instruction = 0x8807E708;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8807E70C;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// lwz r30,30672(r3)
	ctx.current_instruction = 0x8807E714;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 30672);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lwz r29,30676(r3)
	ctx.current_instruction = 0x8807E71C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 30676);
	// std r10,80(r1)
	ctx.current_instruction = 0x8807E720;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x8807E724;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	ctx.current_instruction = 0x8807E728;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.current_instruction = 0x8807E72C;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r8,30680(r3)
	ctx.current_instruction = 0x8807E730;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 30680);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// stw r30,30660(r3)
	ctx.current_instruction = 0x8807E738;
	REX_STORE_U32(ctx.r3.u32 + 30660, ctx.r30.u32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// stw r29,30664(r3)
	ctx.current_instruction = 0x8807E740;
	REX_STORE_U32(ctx.r3.u32 + 30664, ctx.r29.u32);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// stw r8,30668(r3)
	ctx.current_instruction = 0x8807E748;
	REX_STORE_U32(ctx.r3.u32 + 30668, ctx.r8.u32);
	// lfd f13,30688(r3)
	ctx.current_instruction = 0x8807E74C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 30688);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f31,8624(r9)
	ctx.current_instruction = 0x8807E754;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r9.u32 + 8624);
	// fdiv f2,f31,f13
	ctx.f2.f64 = ctx.f31.f64 / ctx.f13.f64;
	// fdiv f1,f10,f11
	ctx.f1.f64 = ctx.f10.f64 / ctx.f11.f64;
	// bl 0x881ef940
	ctx.lr = 0x8807E764;
	sub_881EF940(ctx, base);
loc_8807E764:
	// lwz r7,30656(r31)
	ctx.current_instruction = 0x8807E764;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 30656);
	// mullw r6,r30,r29
	ctx.r6.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r5,80(r1)
	ctx.current_instruction = 0x8807E774;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f9,80(r1)
	ctx.current_instruction = 0x8807E778;
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	ctx.current_instruction = 0x8807E77C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f8,80(r1)
	ctx.current_instruction = 0x8807E780;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f9
	ctx.f5.f64 = double(ctx.f9.s64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fmul f6,f1,f7
	ctx.f6.f64 = ctx.f1.f64 * ctx.f7.f64;
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,80(r1)
	ctx.current_instruction = 0x8807E794;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r3,84(r1)
	ctx.current_instruction = 0x8807E798;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	ctx.current_instruction = 0x8807E7A0;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f3,80(r1)
	ctx.current_instruction = 0x8807E7A4;
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// fdiv f1,f2,f5
	ctx.f1.f64 = ctx.f2.f64 / ctx.f5.f64;
	// fsqrt f0,f1
	ctx.f0.f64 = sqrt(ctx.f1.f64);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8807e7c0
	if (!ctx.cr6.gt) goto loc_8807E7C0;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_8807E7C0:
	// lwz r11,30432(r31)
	ctx.current_instruction = 0x8807E7C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30432);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807e81c
	if (ctx.cr6.eq) goto loc_8807E81C;
	// lwz r11,30652(r31)
	ctx.current_instruction = 0x8807E7D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30652);
	// lwz r10,30648(r31)
	ctx.current_instruction = 0x8807E7D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30648);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r9,80(r1)
	ctx.current_instruction = 0x8807E7E0;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x8807E7E4;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	ctx.current_instruction = 0x8807E7E8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.current_instruction = 0x8807E7EC;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmul f8,f10,f0
	ctx.f8.f64 = ctx.f10.f64 * ctx.f0.f64;
	// fmul f9,f11,f0
	ctx.f9.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fctiwz f6,f8
	ctx.f6.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// fctiwz f7,f9
	ctx.f7.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,80(r1)
	ctx.current_instruction = 0x8807E808;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r30,84(r1)
	ctx.current_instruction = 0x8807E80C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f6,80(r1)
	ctx.current_instruction = 0x8807E810;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r29,84(r1)
	ctx.current_instruction = 0x8807E814;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8807e8c0
	goto loc_8807E8C0;
loc_8807E81C:
	// lis r10,-30681
	ctx.r10.s64 = -2010710016;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r10,4992
	ctx.r9.s64 = ctx.r10.s64 + 4992;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8807E82C:
	// lfd f13,0(r10)
	ctx.current_instruction = 0x8807E82C;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8807e850
	if (!ctx.cr6.lt) goto loc_8807E850;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r7,r9,32
	ctx.r7.s64 = ctx.r9.s64 + 32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8807e82c
	if (ctx.cr6.lt) goto loc_8807E82C;
	// b 0x8807e870
	goto loc_8807E870;
loc_8807E850:
	// addi r10,r11,7708
	ctx.r10.s64 = ctx.r11.s64 + 7708;
	// addi r9,r11,7712
	ctx.r9.s64 = ctx.r11.s64 + 7712;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r7,r31
	ctx.current_instruction = 0x8807E860;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwzx r29,r6,r31
	ctx.current_instruction = 0x8807E864;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// stw r11,30708(r31)
	ctx.current_instruction = 0x8807E868;
	REX_STORE_U32(ctx.r31.u32 + 30708, ctx.r11.u32);
	// stw r11,30712(r31)
	ctx.current_instruction = 0x8807E86C;
	REX_STORE_U32(ctx.r31.u32 + 30712, ctx.r11.u32);
loc_8807E870:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8807e8c8
	if (!ctx.cr6.eq) goto loc_8807E8C8;
	// lwz r11,30652(r31)
	ctx.current_instruction = 0x8807E878;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30652);
	// lwz r10,30648(r31)
	ctx.current_instruction = 0x8807E87C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30648);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r9,80(r1)
	ctx.current_instruction = 0x8807E888;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x8807E88C;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	ctx.current_instruction = 0x8807E890;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.current_instruction = 0x8807E894;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmul f9,f11,f0
	ctx.f9.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fctiwz f7,f9
	ctx.f7.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,80(r1)
	ctx.current_instruction = 0x8807E8A8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// fmul f8,f10,f0
	ctx.f8.f64 = ctx.f10.f64 * ctx.f0.f64;
	// fctiwz f6,f8
	ctx.f6.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// lwz r30,84(r1)
	ctx.current_instruction = 0x8807E8B4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f6,80(r1)
	ctx.current_instruction = 0x8807E8B8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r29,84(r1)
	ctx.current_instruction = 0x8807E8BC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8807E8C0:
	// stw r8,30712(r31)
	ctx.current_instruction = 0x8807E8C0;
	REX_STORE_U32(ctx.r31.u32 + 30712, ctx.r8.u32);
	// stw r8,30708(r31)
	ctx.current_instruction = 0x8807E8C4;
	REX_STORE_U32(ctx.r31.u32 + 30708, ctx.r8.u32);
loc_8807E8C8:
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x8807e8d8
	if (ctx.cr6.lt) goto loc_8807E8D8;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// bge cr6,0x8807e978
	if (!ctx.cr6.lt) goto loc_8807E978;
loc_8807E8D8:
	// lwz r10,30648(r31)
	ctx.current_instruction = 0x8807E8D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30648);
	// lwz r11,30652(r31)
	ctx.current_instruction = 0x8807E8DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30652);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// bge cr6,0x8807e934
	if (!ctx.cr6.lt) goto loc_8807E934;
	// std r10,80(r1)
	ctx.current_instruction = 0x8807E8EC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// std r11,88(r1)
	ctx.current_instruction = 0x8807E8F8;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.current_instruction = 0x8807E8FC;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// li r29,16
	ctx.r29.s64 = 16;
	// lfd f0,80(r1)
	ctx.current_instruction = 0x8807E908;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,12496(r9)
	ctx.current_instruction = 0x8807E914;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12496);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fdivs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,88(r1)
	ctx.current_instruction = 0x8807E928;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lwz r30,92(r1)
	ctx.current_instruction = 0x8807E92C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x8807e978
	goto loc_8807E978;
loc_8807E934:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,88(r1)
	ctx.current_instruction = 0x8807E938;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.current_instruction = 0x8807E93C;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// std r9,88(r1)
	ctx.current_instruction = 0x8807E944;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// li r30,16
	ctx.r30.s64 = 16;
	// lfs f0,12496(r7)
	ctx.current_instruction = 0x8807E954;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12496);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,88(r1)
	ctx.current_instruction = 0x8807E958;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,88(r1)
	ctx.current_instruction = 0x8807E970;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lwz r29,92(r1)
	ctx.current_instruction = 0x8807E974;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_8807E978:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// lwz r10,30660(r31)
	ctx.current_instruction = 0x8807E97C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30660);
	// addi r9,r29,15
	ctx.r9.s64 = ctx.r29.s64 + 15;
	// rlwinm r7,r11,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r9,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r7,30672(r31)
	ctx.current_instruction = 0x8807E98C;
	REX_STORE_U32(ctx.r31.u32 + 30672, ctx.r7.u32);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// stw r11,30676(r31)
	ctx.current_instruction = 0x8807E998;
	REX_STORE_U32(ctx.r31.u32 + 30676, ctx.r11.u32);
	// stw r6,30680(r31)
	ctx.current_instruction = 0x8807E99C;
	REX_STORE_U32(ctx.r31.u32 + 30680, ctx.r6.u32);
	// bne cr6,0x8807e9c0
	if (!ctx.cr6.eq) goto loc_8807E9C0;
	// lwz r10,30664(r31)
	ctx.current_instruction = 0x8807E9A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30664);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8807e9c0
	if (!ctx.cr6.eq) goto loc_8807E9C0;
	// stw r8,30696(r31)
	ctx.current_instruction = 0x8807E9B0;
	REX_STORE_U32(ctx.r31.u32 + 30696, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.current_instruction = 0x8807E9B8;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_8807E9C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,30696(r31)
	ctx.current_instruction = 0x8807E9C4;
	REX_STORE_U32(ctx.r31.u32 + 30696, ctx.r11.u32);
	// stw r11,30700(r31)
	ctx.current_instruction = 0x8807E9C8;
	REX_STORE_U32(ctx.r31.u32 + 30700, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.current_instruction = 0x8807E9D0;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88090A50) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88090A50;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88090A50) {
			switch (rex_dispatch_address) {
				case 0x88090A58:
				case 0x88090C3C:
				case 0x88090C54:
				case 0x88090D24:
				case 0x88090D3C:
				case 0x88090E20:
				case 0x88090E38:
				case 0x88090F08:
				case 0x88090F20:
				case 0x88090FF8:
				case 0x88091010:
				case 0x880910C4:
				case 0x880910DC:
				case 0x88091174:
				case 0x8809118C:
				case 0x88091248:
				case 0x88091260:
				case 0x88091310:
				case 0x88091328:
				case 0x880913C4:
				case 0x880913DC:
				case 0x880914A8:
				case 0x880914C0:
				case 0x88091578:
				case 0x88091590:
				case 0x88091628:
				case 0x88091640:
				case 0x880916F8:
				case 0x88091710:
				case 0x880917C0:
				case 0x880917D8:
				case 0x88091874:
				case 0x8809188C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88090A50;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88090A58: goto loc_88090A58;
		case 0x88090C3C: goto loc_88090C3C;
		case 0x88090C54: goto loc_88090C54;
		case 0x88090D24: goto loc_88090D24;
		case 0x88090D3C: goto loc_88090D3C;
		case 0x88090E20: goto loc_88090E20;
		case 0x88090E38: goto loc_88090E38;
		case 0x88090F08: goto loc_88090F08;
		case 0x88090F20: goto loc_88090F20;
		case 0x88090FF8: goto loc_88090FF8;
		case 0x88091010: goto loc_88091010;
		case 0x880910C4: goto loc_880910C4;
		case 0x880910DC: goto loc_880910DC;
		case 0x88091174: goto loc_88091174;
		case 0x8809118C: goto loc_8809118C;
		case 0x88091248: goto loc_88091248;
		case 0x88091260: goto loc_88091260;
		case 0x88091310: goto loc_88091310;
		case 0x88091328: goto loc_88091328;
		case 0x880913C4: goto loc_880913C4;
		case 0x880913DC: goto loc_880913DC;
		case 0x880914A8: goto loc_880914A8;
		case 0x880914C0: goto loc_880914C0;
		case 0x88091578: goto loc_88091578;
		case 0x88091590: goto loc_88091590;
		case 0x88091628: goto loc_88091628;
		case 0x88091640: goto loc_88091640;
		case 0x880916F8: goto loc_880916F8;
		case 0x88091710: goto loc_88091710;
		case 0x880917C0: goto loc_880917C0;
		case 0x880917D8: goto loc_880917D8;
		case 0x88091874: goto loc_88091874;
		case 0x8809188C: goto loc_8809188C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x88090A58;
	__savegprlr_16(ctx, base);
loc_88090A58:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x88090A58;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// lwz r8,380(r1)
	ctx.current_instruction = 0x88090A60;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r22,308(r1)
	ctx.current_instruction = 0x88090A64;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,324(r1)
	ctx.current_instruction = 0x88090A70;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r28,316(r1)
	ctx.current_instruction = 0x88090A74;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// lwz r19,0(r8)
	ctx.current_instruction = 0x88090A80;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// neg r3,r22
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r22.u64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88090af4
	if (ctx.cr6.eq) goto loc_88090AF4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x88090af4
	if (ctx.cr6.gt) goto loc_88090AF4;
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
loc_88090ACC:
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r27
	ctx.current_instruction = 0x88090AD4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88090aec
	if (!ctx.cr6.lt) goto loc_88090AEC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_88090AEC:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bdnz 0x88090acc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88090ACC;
loc_88090AF4:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x88090b28
	if (ctx.cr6.eq) goto loc_88090B28;
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
	ctx.current_instruction = 0x88090B10;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88090b28
	if (!ctx.cr6.lt) goto loc_88090B28;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88090B28:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x88090b5c
	if (ctx.cr6.eq) goto loc_88090B5C;
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
	ctx.current_instruction = 0x88090B44;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r27.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88090b5c
	if (!ctx.cr6.lt) goto loc_88090B5C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88090B5C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88090bb4
	if (ctx.cr6.eq) goto loc_88090BB4;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x88090bb4
	if (ctx.cr6.gt) goto loc_88090BB4;
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
loc_88090B8C:
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x88090B94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88090bac
	if (!ctx.cr6.lt) goto loc_88090BAC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// li r29,1
	ctx.r29.s64 = 1;
loc_88090BAC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x88090b8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88090B8C;
loc_88090BB4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x88091454
	if (ctx.cr6.eq) goto loc_88091454;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x88090fa4
	if (ctx.cr6.eq) goto loc_88090FA4;
	// lwz r27,372(r1)
	ctx.current_instruction = 0x88090BC4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// lwz r23,356(r1)
	ctx.current_instruction = 0x88090BCC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// bne cr6,0x88090dbc
	if (!ctx.cr6.eq) goto loc_88090DBC;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// lwz r29,332(r1)
	ctx.current_instruction = 0x88090BD8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// bne cr6,0x88090cd0
	if (!ctx.cr6.eq) goto loc_88090CD0;
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x88090BE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r26,-2
	ctx.r26.s64 = -2;
	// subf r11,r11,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r11.u64;
	// lwz r21,364(r1)
	ctx.current_instruction = 0x88090BEC;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// addi r22,r11,-1
	ctx.r22.s64 = ctx.r11.s64 + -1;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r24,r11,6848
	ctx.r24.s64 = ctx.r11.s64 + 6848;
loc_88090BFC:
	// add r11,r26,r21
	ctx.r11.u64 = ctx.r26.u64 + ctx.r21.u64;
	// li r30,-2
	ctx.r30.s64 = -2;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// clrlwi r28,r26,30
	ctx.r28.u64 = ctx.r26.u32 & 0x3;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r25,r10,r9
	ctx.r25.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88090C14:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88090C14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88090C20;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88090C28;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88090C3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88090C3C:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x88090C54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88090C54:
	// add r10,r30,r23
	ctx.r10.u64 = ctx.r30.u64 + ctx.r23.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88090c9c
	if (ctx.cr6.gt) goto loc_88090C9C;
	// cmpwi cr6,r25,158
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 158, ctx.xer);
	// bgt cr6,0x88090c9c
	if (ctx.cr6.gt) goto loc_88090C9C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x88090C7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x88090C80;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x88090C8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x88090C90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88090ca4
	goto loc_88090CA4;
loc_88090C9C:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88090C9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88090CA4:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88090cbc
	if (!ctx.cr6.lt) goto loc_88090CBC;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
	// mr r16,r26
	ctx.r16.u64 = ctx.r26.u64;
loc_88090CBC:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x88090c14
	if (ctx.cr0.lt) goto loc_88090C14;
	// addic. r26,r26,1
	ctx.xer.ca = ctx.r26.u32 > 4294967294;
	ctx.r26.s64 = ctx.r26.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x88090bfc
	if (ctx.cr0.lt) goto loc_88090BFC;
	// b 0x88091904
	goto loc_88091904;
loc_88090CD0:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r22,r21,-1
	ctx.r22.s64 = ctx.r21.s64 + -1;
	// lwz r21,364(r1)
	ctx.current_instruction = 0x88090CD8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r26,r11,6848
	ctx.r26.s64 = ctx.r11.s64 + 6848;
loc_88090CE4:
	// add r11,r24,r21
	ctx.r11.u64 = ctx.r24.u64 + ctx.r21.u64;
	// li r30,-2
	ctx.r30.s64 = -2;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// clrlwi r28,r24,30
	ctx.r28.u64 = ctx.r24.u32 & 0x3;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r25,r10,r9
	ctx.r25.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88090CFC:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88090CFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88090D08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88090D10;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88090D24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88090D24:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x88090D3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88090D3C:
	// add r10,r30,r23
	ctx.r10.u64 = ctx.r30.u64 + ctx.r23.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88090d84
	if (ctx.cr6.gt) goto loc_88090D84;
	// cmpwi cr6,r25,158
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 158, ctx.xer);
	// bgt cr6,0x88090d84
	if (ctx.cr6.gt) goto loc_88090D84;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x88090D64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x88090D68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x88090D74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x88090D78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88090d8c
	goto loc_88090D8C;
loc_88090D84:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88090D84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88090D8C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88090da4
	if (!ctx.cr6.lt) goto loc_88090DA4;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
	// mr r16,r24
	ctx.r16.u64 = ctx.r24.u64;
loc_88090DA4:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x88090cfc
	if (ctx.cr0.lt) goto loc_88090CFC;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// ble cr6,0x88090ce4
	if (!ctx.cr6.gt) goto loc_88090CE4;
	// b 0x88091904
	goto loc_88091904;
loc_88090DBC:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// lwz r29,332(r1)
	ctx.current_instruction = 0x88090DC0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// bne cr6,0x88090eb8
	if (!ctx.cr6.eq) goto loc_88090EB8;
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x88090DC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r26,-2
	ctx.r26.s64 = -2;
	// subf r22,r11,r21
	ctx.r22.u64 = ctx.r21.u64 - ctx.r11.u64;
	// lwz r21,364(r1)
	ctx.current_instruction = 0x88090DD4;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r24,r11,6848
	ctx.r24.s64 = ctx.r11.s64 + 6848;
loc_88090DE0:
	// add r11,r26,r21
	ctx.r11.u64 = ctx.r26.u64 + ctx.r21.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// clrlwi r28,r26,30
	ctx.r28.u64 = ctx.r26.u32 & 0x3;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r25,r10,r9
	ctx.r25.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88090DF8:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88090DF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88090E04;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88090E0C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88090E20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88090E20:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x88090E38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88090E38:
	// add r10,r30,r23
	ctx.r10.u64 = ctx.r30.u64 + ctx.r23.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88090e80
	if (ctx.cr6.gt) goto loc_88090E80;
	// cmpwi cr6,r25,158
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 158, ctx.xer);
	// bgt cr6,0x88090e80
	if (ctx.cr6.gt) goto loc_88090E80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x88090E60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x88090E64;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x88090E70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x88090E74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88090e88
	goto loc_88090E88;
loc_88090E80:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88090E80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88090E88:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88090ea0
	if (!ctx.cr6.lt) goto loc_88090EA0;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
	// mr r16,r26
	ctx.r16.u64 = ctx.r26.u64;
loc_88090EA0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x88090df8
	if (!ctx.cr6.gt) goto loc_88090DF8;
	// addic. r26,r26,1
	ctx.xer.ca = ctx.r26.u32 > 4294967294;
	ctx.r26.s64 = ctx.r26.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x88090de0
	if (ctx.cr0.lt) goto loc_88090DE0;
	// b 0x88091904
	goto loc_88091904;
loc_88090EB8:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r22,364(r1)
	ctx.current_instruction = 0x88090EBC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r25,r11,6848
	ctx.r25.s64 = ctx.r11.s64 + 6848;
loc_88090EC8:
	// add r11,r24,r22
	ctx.r11.u64 = ctx.r24.u64 + ctx.r22.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// clrlwi r28,r24,30
	ctx.r28.u64 = ctx.r24.u32 & 0x3;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r26,r10,r9
	ctx.r26.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88090EE0:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88090EE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88090EEC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88090EF4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88090F08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88090F08:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x88090F20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88090F20:
	// add r10,r30,r23
	ctx.r10.u64 = ctx.r30.u64 + ctx.r23.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88090f68
	if (ctx.cr6.gt) goto loc_88090F68;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// bgt cr6,0x88090f68
	if (ctx.cr6.gt) goto loc_88090F68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x88090F48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x88090F4C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x88090F58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x88090F5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88090f70
	goto loc_88090F70;
loc_88090F68:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88090F68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88090F70:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88090f88
	if (!ctx.cr6.lt) goto loc_88090F88;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
	// mr r16,r24
	ctx.r16.u64 = ctx.r24.u64;
loc_88090F88:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x88090ee0
	if (!ctx.cr6.gt) goto loc_88090EE0;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// ble cr6,0x88090ec8
	if (!ctx.cr6.gt) goto loc_88090EC8;
	// b 0x88091904
	goto loc_88091904;
loc_88090FA4:
	// lwz r29,332(r1)
	ctx.current_instruction = 0x88090FA4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// bne cr6,0x88091204
	if (!ctx.cr6.eq) goto loc_88091204;
	// lwz r27,372(r1)
	ctx.current_instruction = 0x88090FB4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r23,364(r1)
	ctx.current_instruction = 0x88090FBC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// addi r25,r11,6848
	ctx.r25.s64 = ctx.r11.s64 + 6848;
	// lwz r24,356(r1)
	ctx.current_instruction = 0x88090FC4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// beq cr6,0x88091088
	if (ctx.cr6.eq) goto loc_88091088;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88090FCC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r10,2652(r31)
	ctx.current_instruction = 0x88090FD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r7,2
	ctx.r7.s64 = 2;
	// subf r11,r4,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r4.u64;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88090FE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88090FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88090FF8:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x88091010;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091010:
	// addi r9,r24,-2
	ctx.r9.s64 = ctx.r24.s64 + -2;
	// addi r8,r23,-1
	ctx.r8.s64 = ctx.r23.s64 + -1;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// xor r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88091068
	if (ctx.cr6.gt) goto loc_88091068;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88091068
	if (ctx.cr6.gt) goto loc_88091068;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x88091048;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x8809104C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x88091058;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x8809105C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88091070
	goto loc_88091070;
loc_88091068:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88091068;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88091070:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88091088
	if (!ctx.cr6.lt) goto loc_88091088;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// li r17,-2
	ctx.r17.s64 = -2;
	// li r16,-1
	ctx.r16.s64 = -1;
loc_88091088:
	// srawi r11,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 31;
	// addi r28,r21,-1
	ctx.r28.s64 = ctx.r21.s64 + -1;
	// xor r10,r23,r11
	ctx.r10.u64 = ctx.r23.u64 ^ ctx.r11.u64;
	// li r30,-2
	ctx.r30.s64 = -2;
	// subf r26,r11,r10
	ctx.r26.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809109C:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x8809109C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x880910A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880910B0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880910C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880910C4:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x880910DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880910DC:
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88091124
	if (ctx.cr6.gt) goto loc_88091124;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// bgt cr6,0x88091124
	if (ctx.cr6.gt) goto loc_88091124;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x88091104;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x88091108;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x88091114;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x88091118;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809112c
	goto loc_8809112C;
loc_88091124:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88091124;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809112C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88091144
	if (!ctx.cr6.lt) goto loc_88091144;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
	// li r16,0
	ctx.r16.s64 = 0;
loc_88091144:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8809109c
	if (ctx.cr0.lt) goto loc_8809109C;
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x8809114C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88091158;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88091160;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88091174;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091174:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x8809118C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809118C:
	// addi r10,r24,-2
	ctx.r10.s64 = ctx.r24.s64 + -2;
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
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880911e4
	if (ctx.cr6.gt) goto loc_880911E4;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880911e4
	if (ctx.cr6.gt) goto loc_880911E4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x880911C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x880911C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x880911D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x880911D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880911ec
	goto loc_880911EC;
loc_880911E4:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x880911E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880911EC:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88091904
	if (!ctx.cr6.lt) goto loc_88091904;
	// li r17,-2
	ctx.r17.s64 = -2;
	// li r16,1
	ctx.r16.s64 = 1;
	// b 0x88091900
	goto loc_88091900;
loc_88091204:
	// lwz r28,372(r1)
	ctx.current_instruction = 0x88091204;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r24,364(r1)
	ctx.current_instruction = 0x8809120C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// addi r27,r11,6848
	ctx.r27.s64 = ctx.r11.s64 + 6848;
	// lwz r25,356(r1)
	ctx.current_instruction = 0x88091214;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// beq cr6,0x880912d8
	if (ctx.cr6.eq) goto loc_880912D8;
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x8809121C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r10,1380(r31)
	ctx.current_instruction = 0x88091224;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88091230;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// subf r3,r10,r21
	ctx.r3.u64 = ctx.r21.u64 - ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88091248;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091248:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x88091260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091260:
	// addi r9,r25,2
	ctx.r9.s64 = ctx.r25.s64 + 2;
	// addi r8,r24,-1
	ctx.r8.s64 = ctx.r24.s64 + -1;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// xor r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880912b8
	if (ctx.cr6.gt) goto loc_880912B8;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880912b8
	if (ctx.cr6.gt) goto loc_880912B8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.current_instruction = 0x88091298;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwzx r8,r10,r27
	ctx.current_instruction = 0x8809129C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r28
	ctx.current_instruction = 0x880912A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// lwzx r11,r6,r28
	ctx.current_instruction = 0x880912AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880912c0
	goto loc_880912C0;
loc_880912B8:
	// lwz r11,20(r28)
	ctx.current_instruction = 0x880912B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880912C0:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x880912d8
	if (!ctx.cr6.lt) goto loc_880912D8;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// li r17,2
	ctx.r17.s64 = 2;
	// li r16,-1
	ctx.r16.s64 = -1;
loc_880912D8:
	// srawi r11,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 31;
	// li r30,1
	ctx.r30.s64 = 1;
	// xor r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 ^ ctx.r11.u64;
	// subf r26,r11,r10
	ctx.r26.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_880912E8:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x880912E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x880912F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880912FC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88091310;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091310:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x88091328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091328:
	// add r10,r30,r25
	ctx.r10.u64 = ctx.r30.u64 + ctx.r25.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88091370
	if (ctx.cr6.gt) goto loc_88091370;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// bgt cr6,0x88091370
	if (ctx.cr6.gt) goto loc_88091370;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.current_instruction = 0x88091350;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwzx r8,r10,r27
	ctx.current_instruction = 0x88091354;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r28
	ctx.current_instruction = 0x88091360;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// lwzx r11,r6,r28
	ctx.current_instruction = 0x88091364;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88091378
	goto loc_88091378;
loc_88091370:
	// lwz r11,20(r28)
	ctx.current_instruction = 0x88091370;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88091378:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88091390
	if (!ctx.cr6.lt) goto loc_88091390;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
	// li r16,0
	ctx.r16.s64 = 0;
loc_88091390:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x880912e8
	if (!ctx.cr6.gt) goto loc_880912E8;
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x8809139C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x880913A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880913B0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880913C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880913C4:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x880913DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880913DC:
	// addi r10,r25,2
	ctx.r10.s64 = ctx.r25.s64 + 2;
	// addi r9,r24,1
	ctx.r9.s64 = ctx.r24.s64 + 1;
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
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88091434
	if (ctx.cr6.gt) goto loc_88091434;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88091434
	if (ctx.cr6.gt) goto loc_88091434;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.current_instruction = 0x88091414;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwzx r8,r10,r27
	ctx.current_instruction = 0x88091418;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r28
	ctx.current_instruction = 0x88091424;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// lwzx r11,r6,r28
	ctx.current_instruction = 0x88091428;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809143c
	goto loc_8809143C;
loc_88091434:
	// lwz r11,20(r28)
	ctx.current_instruction = 0x88091434;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809143C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88091904
	if (!ctx.cr6.lt) goto loc_88091904;
	// li r17,2
	ctx.r17.s64 = 2;
	// li r16,1
	ctx.r16.s64 = 1;
	// b 0x88091900
	goto loc_88091900;
loc_88091454:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// bne cr6,0x880916b4
	if (!ctx.cr6.eq) goto loc_880916B4;
	// lwz r26,372(r1)
	ctx.current_instruction = 0x88091460;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwz r24,364(r1)
	ctx.current_instruction = 0x88091468;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// addi r25,r11,6848
	ctx.r25.s64 = ctx.r11.s64 + 6848;
	// lwz r23,356(r1)
	ctx.current_instruction = 0x88091470;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r28,332(r1)
	ctx.current_instruction = 0x88091474;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// beq cr6,0x88091538
	if (ctx.cr6.eq) goto loc_88091538;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8809147C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r10,2652(r31)
	ctx.current_instruction = 0x88091484;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r7,3
	ctx.r7.s64 = 3;
	// subf r11,r4,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r4.u64;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88091490;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880914A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880914A8:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x880914C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880914C0:
	// addi r9,r23,-1
	ctx.r9.s64 = ctx.r23.s64 + -1;
	// addi r8,r24,-2
	ctx.r8.s64 = ctx.r24.s64 + -2;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// xor r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88091518
	if (ctx.cr6.gt) goto loc_88091518;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88091518
	if (ctx.cr6.gt) goto loc_88091518;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x880914F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x880914FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r26
	ctx.current_instruction = 0x88091508;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r11,r6,r26
	ctx.current_instruction = 0x8809150C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88091520
	goto loc_88091520;
loc_88091518:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88091518;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88091520:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88091538
	if (!ctx.cr6.lt) goto loc_88091538;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// li r17,-1
	ctx.r17.s64 = -1;
	// li r16,-2
	ctx.r16.s64 = -2;
loc_88091538:
	// srawi r11,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 31;
	// lwz r10,1380(r31)
	ctx.current_instruction = 0x8809153C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r30,-2
	ctx.r30.s64 = -2;
	// xor r9,r23,r11
	ctx.r9.u64 = ctx.r23.u64 ^ ctx.r11.u64;
	// subf r27,r10,r21
	ctx.r27.u64 = ctx.r21.u64 - ctx.r10.u64;
	// subf r29,r11,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_88091550:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88091550;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// clrlwi r8,r30,30
	ctx.r8.u64 = ctx.r30.u32 & 0x3;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x8809155C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88091564;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88091578;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091578:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x88091590;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091590:
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// bgt cr6,0x880915d8
	if (ctx.cr6.gt) goto loc_880915D8;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880915d8
	if (ctx.cr6.gt) goto loc_880915D8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x880915B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x880915BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r26
	ctx.current_instruction = 0x880915C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r10,r6,r26
	ctx.current_instruction = 0x880915CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880915e0
	goto loc_880915E0;
loc_880915D8:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x880915D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880915E0:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x880915f8
	if (!ctx.cr6.lt) goto loc_880915F8;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
loc_880915F8:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x88091550
	if (ctx.cr0.lt) goto loc_88091550;
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88091600;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x8809160C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88091614;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88091628;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091628:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x88091640;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091640:
	// addi r10,r23,1
	ctx.r10.s64 = ctx.r23.s64 + 1;
	// addi r9,r24,-2
	ctx.r9.s64 = ctx.r24.s64 + -2;
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
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88091698
	if (ctx.cr6.gt) goto loc_88091698;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88091698
	if (ctx.cr6.gt) goto loc_88091698;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x88091678;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x8809167C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r26
	ctx.current_instruction = 0x88091688;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r11,r6,r26
	ctx.current_instruction = 0x8809168C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880916a0
	goto loc_880916A0;
loc_88091698:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x88091698;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880916A0:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88091904
	if (!ctx.cr6.lt) goto loc_88091904;
	// li r16,-2
	ctx.r16.s64 = -2;
	// b 0x880918fc
	goto loc_880918FC;
loc_880916B4:
	// lwz r27,372(r1)
	ctx.current_instruction = 0x880916B4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwz r25,364(r1)
	ctx.current_instruction = 0x880916BC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// addi r26,r11,6848
	ctx.r26.s64 = ctx.r11.s64 + 6848;
	// lwz r24,356(r1)
	ctx.current_instruction = 0x880916C4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r29,332(r1)
	ctx.current_instruction = 0x880916C8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// beq cr6,0x88091788
	if (ctx.cr6.eq) goto loc_88091788;
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x880916D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x880916DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880916E4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r21,-1
	ctx.r3.s64 = ctx.r21.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880916F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880916F8:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x88091710;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091710:
	// addi r10,r24,-1
	ctx.r10.s64 = ctx.r24.s64 + -1;
	// addi r9,r25,2
	ctx.r9.s64 = ctx.r25.s64 + 2;
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
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88091768
	if (ctx.cr6.gt) goto loc_88091768;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88091768
	if (ctx.cr6.gt) goto loc_88091768;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x88091748;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x8809174C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x88091758;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x8809175C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88091770
	goto loc_88091770;
loc_88091768:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88091768;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88091770:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88091788
	if (!ctx.cr6.lt) goto loc_88091788;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// li r17,-1
	ctx.r17.s64 = -1;
	// li r16,2
	ctx.r16.s64 = 2;
loc_88091788:
	// srawi r11,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 31;
	// li r30,1
	ctx.r30.s64 = 1;
	// xor r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 ^ ctx.r11.u64;
	// subf r28,r11,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_88091798:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88091798;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// clrlwi r8,r30,30
	ctx.r8.u64 = ctx.r30.u32 & 0x3;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x880917A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880917AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880917C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880917C0:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x880917D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880917D8:
	// add r10,r30,r25
	ctx.r10.u64 = ctx.r30.u64 + ctx.r25.u64;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// bgt cr6,0x88091820
	if (ctx.cr6.gt) goto loc_88091820;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88091820
	if (ctx.cr6.gt) goto loc_88091820;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x88091800;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x88091804;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r27
	ctx.current_instruction = 0x88091810;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r10,r6,r27
	ctx.current_instruction = 0x88091814;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88091828
	goto loc_88091828;
loc_88091820:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x88091820;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88091828:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88091840
	if (!ctx.cr6.lt) goto loc_88091840;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
loc_88091840:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x88091798
	if (!ctx.cr6.gt) goto loc_88091798;
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x8809184C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88091858;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88091860;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88091874;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88091874:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x8809188C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809188C:
	// addi r10,r24,1
	ctx.r10.s64 = ctx.r24.s64 + 1;
	// addi r9,r25,2
	ctx.r9.s64 = ctx.r25.s64 + 2;
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
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880918e4
	if (ctx.cr6.gt) goto loc_880918E4;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880918e4
	if (ctx.cr6.gt) goto loc_880918E4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x880918C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x880918C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x880918D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x880918D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880918ec
	goto loc_880918EC;
loc_880918E4:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x880918E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880918EC:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88091904
	if (!ctx.cr6.lt) goto loc_88091904;
	// li r16,2
	ctx.r16.s64 = 2;
loc_880918FC:
	// li r17,1
	ctx.r17.s64 = 1;
loc_88091900:
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
loc_88091904:
	// lwz r11,388(r1)
	ctx.current_instruction = 0x88091904;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r10,396(r1)
	ctx.current_instruction = 0x88091908;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r9,404(r1)
	ctx.current_instruction = 0x8809190C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// stw r17,0(r11)
	ctx.current_instruction = 0x88091910;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
	// stw r16,0(r10)
	ctx.current_instruction = 0x88091914;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r16.u32);
	// stw r18,0(r9)
	ctx.current_instruction = 0x88091918;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r18.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C6D40) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880C6D40);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C6D40;
	ctx.current_instruction = 0x880C6D40;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x880C6D40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880c6d54
	if (!ctx.cr6.eq) goto loc_880C6D54;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880C6D54:
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// lwz r11,16(r11)
	ctx.current_instruction = 0x880C6D58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x880c6dc8
	if (ctx.cr6.eq) goto loc_880C6DC8;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x880c6dc8
	if (ctx.cr6.eq) goto loc_880C6DC8;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x880c6dc8
	if (ctx.cr6.eq) goto loc_880C6DC8;
	// lis r10,14677
	ctx.r10.s64 = 961871872;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x880c6dc8
	if (ctx.cr6.eq) goto loc_880C6DC8;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22094
	ctx.r9.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x880c6dc0
	if (ctx.cr6.eq) goto loc_880C6DC0;
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r9,r10,22094
	ctx.r9.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x880c6dc0
	if (ctx.cr6.eq) goto loc_880C6DC0;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880C6DC0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880C6DC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880C7A68) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C7A68;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C7A68) {
			switch (rex_dispatch_address) {
				case 0x880C7A70:
				case 0x880C7A90:
				case 0x880C7C04:
				case 0x880C7C30:
				case 0x880C7C5C:
				case 0x880C7DF8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C7A68;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C7A70: goto loc_880C7A70;
		case 0x880C7A90: goto loc_880C7A90;
		case 0x880C7C04: goto loc_880C7C04;
		case 0x880C7C30: goto loc_880C7C30;
		case 0x880C7C5C: goto loc_880C7C5C;
		case 0x880C7DF8: goto loc_880C7DF8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880C7A70;
	__savegprlr_20(ctx, base);
loc_880C7A70:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x880C7A70;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880c7e14
	if (ctx.cr6.eq) goto loc_880C7E14;
	// lwz r11,352(r3)
	ctx.current_instruction = 0x880C7A80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880c7e14
	if (ctx.cr6.eq) goto loc_880C7E14;
	// bl 0x880c6d40
	ctx.lr = 0x880C7A90;
	sub_880C6D40(ctx, base);
loc_880C7A90:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x880c7c78
	if (!ctx.cr6.eq) goto loc_880C7C78;
	// lwz r11,4(r8)
	ctx.current_instruction = 0x880C7A98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// li r24,0
	ctx.r24.s64 = 0;
	// ori r31,r10,22857
	ctx.r31.u64 = ctx.r10.u64 | 22857;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r3,16(r11)
	ctx.current_instruction = 0x880C7AB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x880c7afc
	if (ctx.cr6.eq) goto loc_880C7AFC;
	// lis r31,12338
	ctx.r31.s64 = 808583168;
	// ori r31,r31,13385
	ctx.r31.u64 = ctx.r31.u64 | 13385;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x880c7afc
	if (ctx.cr6.eq) goto loc_880C7AFC;
	// lis r31,12849
	ctx.r31.s64 = 842072064;
	// ori r31,r31,22105
	ctx.r31.u64 = ctx.r31.u64 | 22105;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x880c7bd4
	if (!ctx.cr6.eq) goto loc_880C7BD4;
loc_880C7AFC:
	// lwz r24,32(r8)
	ctx.current_instruction = 0x880C7AFC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r9,36(r8)
	ctx.current_instruction = 0x880C7B04;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// srawi r7,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r24.s32 >> 1;
	// lwz r11,48(r8)
	ctx.current_instruction = 0x880C7B0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r10,52(r8)
	ctx.current_instruction = 0x880C7B10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 52);
	// addze r23,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r23.s64 = temp.s64;
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// addze r29,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r29.s64 = temp.s64;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r5,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r29.s32 >> 1;
	// addze r22,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r22.s64 = temp.s64;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// addze r9,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r9.s64 = temp.s64;
	// bne cr6,0x880c7b88
	if (!ctx.cr6.eq) goto loc_880C7B88;
	// lwz r31,28(r8)
	ctx.current_instruction = 0x880C7B40;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// lwz r5,24(r8)
	ctx.current_instruction = 0x880C7B44;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// mullw r7,r31,r9
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r3,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// add r30,r10,r7
	ctx.r30.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addze r7,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r3,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r30.s32 >> 2;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// mullw r31,r31,r11
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r11.s32);
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r7,r31,r5
	ctx.r7.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// b 0x880c7bd4
	goto loc_880C7BD4;
loc_880C7B88:
	// lwz r3,28(r8)
	ctx.current_instruction = 0x880C7B88;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,24(r8)
	ctx.current_instruction = 0x880C7B90;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// srawi r5,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 1;
	// add r30,r10,r7
	ctx.r30.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r31,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r6.s32 >> 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addze r7,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r31,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 2;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// addze r3,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r3.s64 = temp.s64;
	// mullw r30,r30,r11
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// add r31,r7,r5
	ctx.r31.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r7,r30,r6
	ctx.r7.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r6,r3,r5
	ctx.r6.u64 = ctx.r3.u64 + ctx.r5.u64;
loc_880C7BD4:
	// lwz r31,356(r8)
	ctx.current_instruction = 0x880C7BD4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 356);
	// add r30,r7,r4
	ctx.r30.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r28,r10,r4
	ctx.r28.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r26,r6,r4
	ctx.r26.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r9,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x880c7c14
	if (!ctx.cr6.gt) goto loc_880C7C14;
loc_880C7BF4:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x880C7C04;
	sub_880547A0(ctx, base);
loc_880C7C04:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r31,r24,r31
	ctx.r31.u64 = ctx.r24.u64 + ctx.r31.u64;
	// bne 0x880c7bf4
	if (!ctx.cr0.eq) goto loc_880C7BF4;
loc_880C7C14:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x880c7c40
	if (!ctx.cr6.gt) goto loc_880C7C40;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_880C7C20:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880547a0
	ctx.lr = 0x880C7C30;
	sub_880547A0(ctx, base);
loc_880C7C30:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r31,r23,r31
	ctx.r31.u64 = ctx.r23.u64 + ctx.r31.u64;
	// bne 0x880c7c20
	if (!ctx.cr0.eq) goto loc_880C7C20;
loc_880C7C40:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x880c7e08
	if (!ctx.cr6.gt) goto loc_880C7E08;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_880C7C4C:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880547a0
	ctx.lr = 0x880C7C5C;
	sub_880547A0(ctx, base);
loc_880C7C5C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r26,r25,r26
	ctx.r26.u64 = ctx.r25.u64 + ctx.r26.u64;
	// add r31,r21,r31
	ctx.r31.u64 = ctx.r21.u64 + ctx.r31.u64;
	// bne 0x880c7c4c
	if (!ctx.cr0.eq) goto loc_880C7C4C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880C7C78:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x880c7e14
	if (!ctx.cr6.eq) goto loc_880C7E14;
	// lwz r31,4(r8)
	ctx.current_instruction = 0x880C7C80;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,32(r8)
	ctx.current_instruction = 0x880C7C84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// lwz r11,48(r8)
	ctx.current_instruction = 0x880C7C88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r10,14(r31)
	ctx.current_instruction = 0x880C7C90;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 14);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r7,r9,31
	ctx.r7.s64 = ctx.r9.s64 + 31;
	// rlwinm r3,r7,0,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// addze r27,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r27.s64 = temp.s64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bgt cr6,0x880c7cb8
	if (ctx.cr6.gt) goto loc_880C7CB8;
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// ble cr6,0x880c7cc0
	if (!ctx.cr6.gt) goto loc_880C7CC0;
loc_880C7CB8:
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x880c7cc4
	goto loc_880C7CC4;
loc_880C7CC0:
	// li r7,-1
	ctx.r7.s64 = -1;
loc_880C7CC4:
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r9,36(r8)
	ctx.current_instruction = 0x880C7CC8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addze r30,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r30.s64 = temp.s64;
	// bne cr6,0x880c7d10
	if (!ctx.cr6.eq) goto loc_880C7D10;
	// lwz r7,16(r31)
	ctx.current_instruction = 0x880C7CF4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bgt cr6,0x880c7d10
	if (ctx.cr6.gt) goto loc_880C7D10;
	// lwz r7,8(r31)
	ctx.current_instruction = 0x880C7D00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x880c7d10
	if (!ctx.cr6.gt) goto loc_880C7D10;
	// li r3,1
	ctx.r3.s64 = 1;
loc_880C7D10:
	// lwz r28,356(r8)
	ctx.current_instruction = 0x880C7D10;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 356);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x880c7d78
	if (!ctx.cr6.eq) goto loc_880C7D78;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c7d40
	if (!ctx.cr6.eq) goto loc_880C7D40;
	// lwz r9,24(r8)
	ctx.current_instruction = 0x880C7D24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r8,28(r8)
	ctx.current_instruction = 0x880C7D28;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// mullw r7,r9,r10
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// mullw r9,r8,r11
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// b 0x880c7dd4
	goto loc_880C7DD4;
loc_880C7D40:
	// lwz r7,52(r8)
	ctx.current_instruction = 0x880C7D40;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 52);
	// lwz r3,24(r8)
	ctx.current_instruction = 0x880C7D44;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// lwz r6,28(r8)
	ctx.current_instruction = 0x880C7D4C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// xor r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// mullw r7,r3,r10
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// srawi r3,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 3;
	// subf r10,r6,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r6.u64;
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mullw r10,r9,r11
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x880c7dd8
	goto loc_880C7DD8;
loc_880C7D78:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c7da0
	if (!ctx.cr6.eq) goto loc_880C7DA0;
	// lwz r7,24(r8)
	ctx.current_instruction = 0x880C7D80;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r9,28(r8)
	ctx.current_instruction = 0x880C7D84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// srawi r3,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 3;
	// mullw r10,r5,r11
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// addze r9,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r9.s64 = temp.s64;
	// b 0x880c7dd4
	goto loc_880C7DD4;
loc_880C7DA0:
	// lwz r7,52(r8)
	ctx.current_instruction = 0x880C7DA0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 52);
	// lwz r6,28(r8)
	ctx.current_instruction = 0x880C7DA4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// lwz r3,24(r8)
	ctx.current_instruction = 0x880C7DAC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// subfic r8,r6,1
	ctx.xer.ca = ctx.r6.u32 <= 1;
	ctx.r8.u64 = static_cast<uint64_t>(1) - ctx.r6.u64;
	// xor r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// mullw r6,r3,r10
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// subf r9,r5,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r5.u64;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addze r9,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r9.s64 = temp.s64;
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
loc_880C7DD4:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_880C7DD8:
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x880c7e08
	if (!ctx.cr6.gt) goto loc_880C7E08;
loc_880C7DE8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x880C7DF8;
	sub_880547A0(ctx, base);
loc_880C7DF8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// bne 0x880c7de8
	if (!ctx.cr0.eq) goto loc_880C7DE8;
loc_880C7E08:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880C7E14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CC8A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CC8A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CC8A0) {
			switch (rex_dispatch_address) {
				case 0x880CC8E4:
				case 0x880CC904:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CC8A0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CC8E4: goto loc_880CC8E4;
		case 0x880CC904: goto loc_880CC904;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880CC8A4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880CC8A8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880CC8AC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,0(r11)
	ctx.current_instruction = 0x880CC8C4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r3)
	ctx.current_instruction = 0x880CC8C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r9,16(r3)
	ctx.current_instruction = 0x880CC8CC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// stb r9,96(r3)
	ctx.current_instruction = 0x880CC8D0;
	REX_STORE_U8(ctx.r3.u32 + 96, ctx.r9.u8);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,8(r8)
	ctx.current_instruction = 0x880CC8D8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x880CC8E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880CC8E4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc904
	if (ctx.cr6.lt) goto loc_880CC904;
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r10,r11,13
	ctx.r10.u64 = ctx.r11.u64 | 13;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880cc904
	if (!ctx.cr6.eq) goto loc_880CC904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cc2d0
	ctx.lr = 0x880CC904;
	sub_880CC2D0(ctx, base);
loc_880CC904:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880CC908;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880CC910;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880CD360) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CD360;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CD360) {
			switch (rex_dispatch_address) {
				case 0x880CD368:
				case 0x880CD39C:
				case 0x880CD49C:
				case 0x880CD4B4:
				case 0x880CD4F0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CD360;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CD368: goto loc_880CD368;
		case 0x880CD39C: goto loc_880CD39C;
		case 0x880CD49C: goto loc_880CD49C;
		case 0x880CD4B4: goto loc_880CD4B4;
		case 0x880CD4F0: goto loc_880CD4F0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880CD368;
	__savegprlr_26(ctx, base);
loc_880CD368:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880CD368;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	ctx.current_instruction = 0x880CD374;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x880cb2c0
	ctx.lr = 0x880CD39C;
	sub_880CB2C0(ctx, base);
loc_880CD39C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cd4f0
	if (ctx.cr6.lt) goto loc_880CD4F0;
	// li r10,10
	ctx.r10.s64 = 10;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CD3A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880CD3B8:
	// stdu r9,8(r11)
	ctx.current_instruction = 0x880CD3B8;
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x880cd3b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880CD3B8;
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// lwz r9,80(r1)
	ctx.current_instruction = 0x880CD3C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-30707
	ctx.r8.s64 = -2012413952;
	// lis r7,-30707
	ctx.r7.s64 = -2012413952;
	// lis r6,-30707
	ctx.r6.s64 = -2012413952;
	// lis r5,-30707
	ctx.r5.s64 = -2012413952;
	// addi r3,r8,-11704
	ctx.r3.s64 = ctx.r8.s64 + -11704;
	// addi r4,r11,-12376
	ctx.r4.s64 = ctx.r11.s64 + -12376;
	// addi r11,r7,-12272
	ctx.r11.s64 = ctx.r7.s64 + -12272;
	// stw r3,4(r31)
	ctx.current_instruction = 0x880CD3E4;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r10,r6,-12240
	ctx.r10.s64 = ctx.r6.s64 + -12240;
	// stw r4,0(r31)
	ctx.current_instruction = 0x880CD3EC;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r8,r5,-12240
	ctx.r8.s64 = ctx.r5.s64 + -12240;
	// stw r11,8(r31)
	ctx.current_instruction = 0x880CD3F4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	ctx.current_instruction = 0x880CD3F8;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,16(r31)
	ctx.current_instruction = 0x880CD400;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// std r29,0(r9)
	ctx.current_instruction = 0x880CD408;
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r29.u64);
	// li r6,20
	ctx.r6.s64 = 20;
	// lwz r5,80(r1)
	ctx.current_instruction = 0x880CD410;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,8(r5)
	ctx.current_instruction = 0x880CD418;
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r29.u32);
	// li r4,512
	ctx.r4.s64 = 512;
	// lwz r3,80(r1)
	ctx.current_instruction = 0x880CD420;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,44
	ctx.r5.s64 = 44;
	// stw r10,12(r3)
	ctx.current_instruction = 0x880CD428;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,80(r1)
	ctx.current_instruction = 0x880CD430;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,16(r9)
	ctx.current_instruction = 0x880CD434;
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x880CD438;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,20(r8)
	ctx.current_instruction = 0x880CD43C;
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r29.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x880CD440;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,28(r10)
	ctx.current_instruction = 0x880CD444;
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r7.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x880CD448;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,32(r9)
	ctx.current_instruction = 0x880CD44C;
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r6.u32);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x880CD450;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,36(r8)
	ctx.current_instruction = 0x880CD454;
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r11.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x880CD458;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,40(r7)
	ctx.current_instruction = 0x880CD45C;
	REX_STORE_U32(ctx.r7.u32 + 40, ctx.r11.u32);
	// lwz r6,80(r1)
	ctx.current_instruction = 0x880CD460;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,44(r6)
	ctx.current_instruction = 0x880CD464;
	REX_STORE_U32(ctx.r6.u32 + 44, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x880CD468;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,48(r10)
	ctx.current_instruction = 0x880CD46C;
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x880CD470;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,52(r9)
	ctx.current_instruction = 0x880CD474;
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r4.u32);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x880CD478;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,56(r8)
	ctx.current_instruction = 0x880CD47C;
	REX_STORE_U32(ctx.r8.u32 + 56, ctx.r30.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x880CD480;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,60(r7)
	ctx.current_instruction = 0x880CD484;
	REX_STORE_U32(ctx.r7.u32 + 60, ctx.r28.u32);
	// lwz r6,80(r1)
	ctx.current_instruction = 0x880CD488;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,64(r6)
	ctx.current_instruction = 0x880CD48C;
	REX_STORE_U32(ctx.r6.u32 + 64, ctx.r26.u32);
	// lwz r30,80(r1)
	ctx.current_instruction = 0x880CD490;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// bl 0x880547a0
	ctx.lr = 0x880CD49C;
	sub_880547A0(ctx, base);
loc_880CD49C:
	// stw r30,20(r31)
	ctx.current_instruction = 0x880CD49C;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r5,68(r30)
	ctx.current_instruction = 0x880CD4A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x880cd4d8
	if (!ctx.cr6.eq) goto loc_880CD4D8;
loc_880CD4AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880cd040
	ctx.lr = 0x880CD4B4;
	sub_880CD040(ctx, base);
loc_880CD4B4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cd4f0
	if (ctx.cr6.lt) goto loc_880CD4F0;
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// lwz r30,80(r1)
	ctx.current_instruction = 0x880CD4C0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x880cd4ac
	if (ctx.cr6.lt) goto loc_880CD4AC;
loc_880CD4D8:
	// lis r11,-30713
	ctx.r11.s64 = -2012807168;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-15728
	ctx.r5.s64 = ctx.r11.s64 + -15728;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880cadd8
	ctx.lr = 0x880CD4F0;
	sub_880CADD8(ctx, base);
loc_880CD4F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D1828) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880D1828);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D1828;
	ctx.current_instruction = 0x880D1828;
	// lwz r10,20(r3)
	ctx.current_instruction = 0x880D1828;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880d1884
	if (!ctx.cr6.eq) goto loc_880D1884;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x880D183C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// beq cr6,0x880d1860
	if (ctx.cr6.eq) goto loc_880D1860;
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// beq cr6,0x880d1860
	if (ctx.cr6.eq) goto loc_880D1860;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// beq cr6,0x880d1860
	if (ctx.cr6.eq) goto loc_880D1860;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x880d18b4
	if (!ctx.cr6.eq) goto loc_880D18B4;
loc_880D1860:
	// lwz r11,16(r11)
	ctx.current_instruction = 0x880D1860;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x880d18a4
	if (ctx.cr6.eq) goto loc_880D18A4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x880d18a4
	if (ctx.cr6.eq) goto loc_880D18A4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x880d18a4
	if (ctx.cr6.eq) goto loc_880D18A4;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880D1884:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880d18b4
	if (!ctx.cr6.eq) goto loc_880D18B4;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x880D188C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x880d18b4
	if (!ctx.cr6.eq) goto loc_880D18B4;
	// lwz r11,16(r11)
	ctx.current_instruction = 0x880D1898;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x880d18b4
	if (!ctx.cr6.eq) goto loc_880D18B4;
loc_880D18A4:
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_880D18B4:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880D2F48) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880D2F48);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D2F48;
	ctx.current_instruction = 0x880D2F48;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r4,328(r3)
	ctx.current_instruction = 0x880D2F4C;
	REX_STORE_U32(ctx.r3.u32 + 328, ctx.r4.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r5,332(r3)
	ctx.current_instruction = 0x880D2F54;
	REX_STORE_U32(ctx.r3.u32 + 332, ctx.r5.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x880d2f7c
	if (!ctx.cr6.gt) goto loc_880D2F7C;
loc_880D2F60:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880d2f74
	if (!ctx.cr6.lt) goto loc_880D2F74;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_880D2F74:
	// subf. r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x880d2f60
	if (ctx.cr0.gt) goto loc_880D2F60;
loc_880D2F7C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// rotlwi r9,r4,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// divw r7,r4,r11
	ctx.r7.u64 = uint32_t((ctx.r11.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r4.s32 / ctx.r11.s32 : 0);
	// andc r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// divw r5,r5,r11
	ctx.r5.u64 = uint32_t((ctx.r11.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r5.s32 / ctx.r11.s32 : 0);
	// stw r7,328(r3)
	ctx.current_instruction = 0x880D2FA0;
	REX_STORE_U32(ctx.r3.u32 + 328, ctx.r7.u32);
	// andc r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r5,332(r3)
	ctx.current_instruction = 0x880D2FAC;
	REX_STORE_U32(ctx.r3.u32 + 332, ctx.r5.u32);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880D4450) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D4450;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D4450) {
			switch (rex_dispatch_address) {
				case 0x880D4458:
				case 0x880D44C0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D4450;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D4458: goto loc_880D4458;
		case 0x880D44C0: goto loc_880D44C0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880D4458;
	__savegprlr_29(ctx, base);
loc_880D4458:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880D4458;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.current_instruction = 0x880D445C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,60(r31)
	ctx.current_instruction = 0x880D4464;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x880d4478
	if (ctx.cr6.gt) goto loc_880D4478;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880D4478:
	// lwz r11,572(r31)
	ctx.current_instruction = 0x880D4478;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 572);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880d44dc
	if (!ctx.cr6.gt) goto loc_880D44DC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_880D448C:
	// lwz r11,576(r31)
	ctx.current_instruction = 0x880D448C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 576);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x880D4494;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880d44c8
	if (!ctx.cr6.eq) goto loc_880D44C8;
	// lwz r9,564(r31)
	ctx.current_instruction = 0x880D44A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// lwz r8,560(r31)
	ctx.current_instruction = 0x880D44A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// lwz r7,148(r11)
	ctx.current_instruction = 0x880D44A8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// lhz r6,34(r31)
	ctx.current_instruction = 0x880D44AC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r5,0(r11)
	ctx.current_instruction = 0x880D44B0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,140(r11)
	ctx.current_instruction = 0x880D44B4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r3,136(r11)
	ctx.current_instruction = 0x880D44B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// bl 0x8812a770
	ctx.lr = 0x880D44C0;
	sub_8812A770(ctx, base);
loc_880D44C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d44dc
	if (ctx.cr6.lt) goto loc_880D44DC;
loc_880D44C8:
	// lwz r11,572(r31)
	ctx.current_instruction = 0x880D44C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 572);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,152
	ctx.r30.s64 = ctx.r30.s64 + 152;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880d448c
	if (ctx.cr6.lt) goto loc_880D448C;
loc_880D44DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D6010) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880D6010);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D6010;
	ctx.current_instruction = 0x880D6010;
	PPCRegister temp{};
	// std r30,-16(r1)
	ctx.current_instruction = 0x880D6010;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x880D6014;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r11,580(r3)
	ctx.current_instruction = 0x880D6018;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880d60e8
	if (!ctx.cr6.gt) goto loc_880D60E8;
	// li r5,0
	ctx.r5.s64 = 0;
loc_880D6030:
	// lwz r11,584(r3)
	ctx.current_instruction = 0x880D6030;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// lwz r10,320(r3)
	ctx.current_instruction = 0x880D6034;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r9,176(r3)
	ctx.current_instruction = 0x880D6038;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lhzx r8,r5,r11
	ctx.current_instruction = 0x880D6040;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x880d60d0
	if (!ctx.cr6.eq) goto loc_880D60D0;
	// lwz r10,460(r3)
	ctx.current_instruction = 0x880D6054;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880d6070
	if (ctx.cr6.eq) goto loc_880D6070;
	// lwz r10,256(r3)
	ctx.current_instruction = 0x880D6060;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r9,456(r3)
	ctx.current_instruction = 0x880D6064;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x880d6088
	goto loc_880D6088;
loc_880D6070:
	// lwz r10,448(r3)
	ctx.current_instruction = 0x880D6070;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,256(r3)
	ctx.current_instruction = 0x880D6078;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// beq cr6,0x880d6088
	if (ctx.cr6.eq) goto loc_880D6088;
	// lwz r9,456(r3)
	ctx.current_instruction = 0x880D6080;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
loc_880D6088:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r31,116(r11)
	ctx.current_instruction = 0x880D608C;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 116);
	// lwz r7,140(r11)
	ctx.current_instruction = 0x880D6090;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,324(r3)
	ctx.current_instruction = 0x880D6098;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r30,r7,r9
	ctx.r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addze r31,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r31.s64 = temp.s64;
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// sth r30,116(r11)
	ctx.current_instruction = 0x880D60B0;
	REX_STORE_U16(ctx.r11.u32 + 116, ctx.r30.u16);
	// mullw r10,r31,r6
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r6.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,56(r11)
	ctx.current_instruction = 0x880D60C8;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,144(r11)
	ctx.current_instruction = 0x880D60CC;
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
loc_880D60D0:
	// lhz r11,580(r3)
	ctx.current_instruction = 0x880D60D0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880d6030
	if (ctx.cr6.lt) goto loc_880D6030;
loc_880D60E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x880D60EC;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x880D60F0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880D7CE8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D7CE8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D7CE8) {
			switch (rex_dispatch_address) {
				case 0x880D7CF0:
				case 0x880D7DAC:
				case 0x880D7DB4:
				case 0x880D7DD0:
				case 0x880D7DE4:
				case 0x880D7E60:
				case 0x880D7E88:
				case 0x880D7E9C:
				case 0x880D7ED8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D7CE8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D7CF0: goto loc_880D7CF0;
		case 0x880D7DAC: goto loc_880D7DAC;
		case 0x880D7DB4: goto loc_880D7DB4;
		case 0x880D7DD0: goto loc_880D7DD0;
		case 0x880D7DE4: goto loc_880D7DE4;
		case 0x880D7E60: goto loc_880D7E60;
		case 0x880D7E88: goto loc_880D7E88;
		case 0x880D7E9C: goto loc_880D7E9C;
		case 0x880D7ED8: goto loc_880D7ED8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x880D7CF0;
	__savegprlr_21(ctx, base);
loc_880D7CF0:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x880D7CF0;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// beq cr6,0x880d7f3c
	if (ctx.cr6.eq) goto loc_880D7F3C;
	// lwz r24,0(r3)
	ctx.current_instruction = 0x880D7D14;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x880d7f3c
	if (ctx.cr6.eq) goto loc_880D7F3C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880d7f3c
	if (ctx.cr6.eq) goto loc_880D7F3C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x880d7f3c
	if (ctx.cr6.eq) goto loc_880D7F3C;
	// lwz r11,692(r3)
	ctx.current_instruction = 0x880D7D30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 692);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x880d7d48
	if (ctx.cr6.eq) goto loc_880D7D48;
	// lis r30,-32764
	ctx.r30.s64 = -2147221504;
	// ori r30,r30,10
	ctx.r30.u64 = ctx.r30.u64 | 10;
	// b 0x880d7f44
	goto loc_880D7F44;
loc_880D7D48:
	// stw r23,692(r31)
	ctx.current_instruction = 0x880D7D48;
	REX_STORE_U32(ctx.r31.u32 + 692, ctx.r23.u32);
	// stw r23,0(r26)
	ctx.current_instruction = 0x880D7D4C;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r23.u32);
	// lwz r11,72(r24)
	ctx.current_instruction = 0x880D7D50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 72);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x880d7f50
	if (ctx.cr6.eq) goto loc_880D7F50;
	// lwz r11,820(r24)
	ctx.current_instruction = 0x880D7D5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 820);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880d7d6c
	if (!ctx.cr6.eq) goto loc_880D7D6C;
	// stw r23,696(r31)
	ctx.current_instruction = 0x880D7D68;
	REX_STORE_U32(ctx.r31.u32 + 696, ctx.r23.u32);
loc_880D7D6C:
	// lwz r11,696(r31)
	ctx.current_instruction = 0x880D7D6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 696);
	// lis r10,-32764
	ctx.r10.s64 = -2147221504;
	// lis r9,-32764
	ctx.r9.s64 = -2147221504;
	// ori r27,r10,2
	ctx.r27.u64 = ctx.r10.u64 | 2;
	// ori r25,r9,4
	ctx.r25.u64 = ctx.r9.u64 | 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d7e4c
	if (ctx.cr6.eq) goto loc_880D7E4C;
	// lwz r11,704(r31)
	ctx.current_instruction = 0x880D7D88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 704);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d7dac
	if (ctx.cr6.eq) goto loc_880D7DAC;
	// lwz r11,224(r31)
	ctx.current_instruction = 0x880D7D98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d7dac
	if (ctx.cr6.eq) goto loc_880D7DAC;
	// bl 0x8812baa8
	ctx.lr = 0x880D7DAC;
	sub_8812BAA8(ctx, base);
loc_880D7DAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d2238
	ctx.lr = 0x880D7DB4;
	sub_880D2238(ctx, base);
loc_880D7DB4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x880d7df0
	if (!ctx.cr6.eq) goto loc_880D7DF0;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r28,r11,16960
	ctx.r28.u64 = ctx.r11.u64 | 16960;
loc_880D7DC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d1df0
	ctx.lr = 0x880D7DD0;
	sub_880D1DF0(ctx, base);
loc_880D7DD0:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bgt cr6,0x880d7df8
	if (ctx.cr6.gt) goto loc_880D7DF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d2238
	ctx.lr = 0x880D7DE4;
	sub_880D2238(ctx, base);
loc_880D7DE4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x880d7dc8
	if (ctx.cr6.eq) goto loc_880D7DC8;
loc_880D7DF0:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x880d7e40
	if (!ctx.cr6.eq) goto loc_880D7E40;
loc_880D7DF8:
	// lwz r11,300(r31)
	ctx.current_instruction = 0x880D7DF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d7e20
	if (ctx.cr6.eq) goto loc_880D7E20;
	// lwz r11,704(r31)
	ctx.current_instruction = 0x880D7E04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d7e20
	if (!ctx.cr6.eq) goto loc_880D7E20;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,692(r31)
	ctx.current_instruction = 0x880D7E14;
	REX_STORE_U32(ctx.r31.u32 + 692, ctx.r23.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// b 0x880d7f50
	goto loc_880D7F50;
loc_880D7E20:
	// lwz r11,224(r31)
	ctx.current_instruction = 0x880D7E20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,692(r31)
	ctx.current_instruction = 0x880D7E38;
	REX_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// b 0x880d7f50
	goto loc_880D7F50;
loc_880D7E40:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x880d7f44
	if (ctx.cr6.lt) goto loc_880D7F44;
	// stw r23,696(r31)
	ctx.current_instruction = 0x880D7E48;
	REX_STORE_U32(ctx.r31.u32 + 696, ctx.r23.u32);
loc_880D7E4C:
	// sth r23,80(r1)
	ctx.current_instruction = 0x880D7E4C;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r23.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d2668
	ctx.lr = 0x880D7E60;
	sub_880D2668(ctx, base);
loc_880D7E60:
	// lhz r4,80(r1)
	ctx.current_instruction = 0x880D7E60;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,0(r26)
	ctx.current_instruction = 0x880D7E68;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r4.u32);
	// lwz r10,0(r31)
	ctx.current_instruction = 0x880D7E6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,336(r31)
	ctx.current_instruction = 0x880D7E70;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r8,452(r10)
	ctx.current_instruction = 0x880D7E74;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 452);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x880d7e8c
	if (ctx.cr6.eq) goto loc_880D7E8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d2fc0
	ctx.lr = 0x880D7E88;
	sub_880D2FC0(ctx, base);
loc_880D7E88:
	// stw r3,0(r26)
	ctx.current_instruction = 0x880D7E88;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
loc_880D7E8C:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x880d7ea4
	if (!ctx.cr6.eq) goto loc_880D7EA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d1df0
	ctx.lr = 0x880D7E9C;
	sub_880D1DF0(ctx, base);
loc_880D7E9C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// b 0x880d7f50
	goto loc_880D7F50;
loc_880D7EA4:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x880d7ef8
	if (!ctx.cr6.eq) goto loc_880D7EF8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,696(r31)
	ctx.current_instruction = 0x880D7EB4;
	REX_STORE_U32(ctx.r31.u32 + 696, ctx.r11.u32);
	// stw r10,72(r24)
	ctx.current_instruction = 0x880D7EB8;
	REX_STORE_U32(ctx.r24.u32 + 72, ctx.r10.u32);
	// lwz r9,704(r31)
	ctx.current_instruction = 0x880D7EBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d7f50
	if (ctx.cr6.eq) goto loc_880D7F50;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x880d7f50
	if (ctx.cr6.eq) goto loc_880D7F50;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812bea0
	ctx.lr = 0x880D7ED8;
	sub_8812BEA0(ctx, base);
loc_880D7ED8:
	// lwz r11,252(r31)
	ctx.current_instruction = 0x880D7ED8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r10,244(r31)
	ctx.current_instruction = 0x880D7EDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r6,0(r22)
	ctx.current_instruction = 0x880D7EF0;
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r6.u32);
	// b 0x880d7f50
	goto loc_880D7F50;
loc_880D7EF8:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x880d7f28
	if (!ctx.cr6.eq) goto loc_880D7F28;
	// lwz r11,300(r31)
	ctx.current_instruction = 0x880D7F00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d7e20
	if (ctx.cr6.eq) goto loc_880D7E20;
	// lwz r11,704(r31)
	ctx.current_instruction = 0x880D7F0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d7e20
	if (!ctx.cr6.eq) goto loc_880D7E20;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,692(r31)
	ctx.current_instruction = 0x880D7F1C;
	REX_STORE_U32(ctx.r31.u32 + 692, ctx.r23.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// b 0x880d7f50
	goto loc_880D7F50;
loc_880D7F28:
	// li r11,7
	ctx.r11.s64 = 7;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,72(r24)
	ctx.current_instruction = 0x880D7F30;
	REX_STORE_U32(ctx.r24.u32 + 72, ctx.r11.u32);
	// bge cr6,0x880d7f50
	if (!ctx.cr6.lt) goto loc_880D7F50;
	// b 0x880d7f44
	goto loc_880D7F44;
loc_880D7F3C:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
loc_880D7F44:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x880d7fb8
	if (ctx.cr6.eq) goto loc_880D7FB8;
	// stw r23,692(r31)
	ctx.current_instruction = 0x880D7F4C;
	REX_STORE_U32(ctx.r31.u32 + 692, ctx.r23.u32);
loc_880D7F50:
	// lwz r11,704(r31)
	ctx.current_instruction = 0x880D7F50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d7f6c
	if (!ctx.cr6.eq) goto loc_880D7F6C;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880D7F5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,820(r11)
	ctx.current_instruction = 0x880D7F60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 820);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880d7f9c
	if (ctx.cr6.eq) goto loc_880D7F9C;
loc_880D7F6C:
	// lwz r11,696(r31)
	ctx.current_instruction = 0x880D7F6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d7f9c
	if (ctx.cr6.eq) goto loc_880D7F9C;
	// lwz r11,692(r31)
	ctx.current_instruction = 0x880D7F78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 692);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880d7f9c
	if (!ctx.cr6.eq) goto loc_880D7F9C;
	// lwz r11,224(r31)
	ctx.current_instruction = 0x880D7F84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,692(r31)
	ctx.current_instruction = 0x880D7F98;
	REX_STORE_U32(ctx.r31.u32 + 692, ctx.r8.u32);
loc_880D7F9C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x880d7fbc
	if (ctx.cr6.eq) goto loc_880D7FBC;
	// lwz r11,692(r31)
	ctx.current_instruction = 0x880D7FA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 692);
	// stw r11,0(r21)
	ctx.current_instruction = 0x880D7FAC;
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_880D7FB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_880D7FBC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DDB78) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880DDB78;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880DDB78) {
			switch (rex_dispatch_address) {
				case 0x880DDB80:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880DDB78;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880DDB80: goto loc_880DDB80;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880DDB80;
	__savegprlr_14(ctx, base);
loc_880DDB80:
	// stwu r1,-2320(r1)
	ctx.current_instruction = 0x880DDB80;
	ea = -2320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// rlwinm r19,r6,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r24,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r11.s32 >> 2;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// subfic r29,r8,8
	ctx.xer.ca = ctx.r8.u32 <= 8;
	ctx.r29.u64 = static_cast<uint64_t>(8) - ctx.r8.u64;
	// mullw r11,r10,r6
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r27,8
	ctx.r27.s64 = 8;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_880DDBB0:
	// li r11,17
	ctx.r11.s64 = 17;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880DDBBC:
	// add r11,r30,r10
	ctx.r11.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lbzx r26,r30,r10
	ctx.current_instruction = 0x880DDBC0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x880DDBC4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r31,2(r11)
	ctx.current_instruction = 0x880DDBC8;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r25,3(r11)
	ctx.current_instruction = 0x880DDBCC;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r9,r25,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r25.u64;
	// subf r11,r26,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r26.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// srawi. r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x880ddbf8
	if (!ctx.cr0.lt) goto loc_880DDBF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x880ddc04
	goto loc_880DDC04;
loc_880DDBF8:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x880ddc04
	if (!ctx.cr6.gt) goto loc_880DDC04;
	// li r11,255
	ctx.r11.s64 = 255;
loc_880DDC04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r28,r10
	ctx.current_instruction = 0x880DDC08;
	REX_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x880ddbbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DDBBC;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r30,r30,r19
	ctx.r30.u64 = ctx.r30.u64 + ctx.r19.u64;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// bne 0x880ddbb0
	if (!ctx.cr0.eq) goto loc_880DDBB0;
	// addi r11,r4,-6
	ctx.r11.s64 = ctx.r4.s64 + -6;
	// addi r30,r7,640
	ctx.r30.s64 = ctx.r7.s64 + 640;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// srawi r11,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// mullw r26,r10,r6
	ctx.r26.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r10,r19,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r6,r8,7
	ctx.r6.s64 = ctx.r8.s64 + 7;
	// rlwinm r4,r19,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r19,r10
	ctx.r3.u64 = ctx.r19.u64 + ctx.r10.u64;
	// subf r29,r19,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r19.u64;
	// li r25,9
	ctx.r25.s64 = 9;
loc_880DDC58:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r28,r29,3
	ctx.r28.s64 = ctx.r29.s64 + 3;
	// addi r27,r30,3
	ctx.r27.s64 = ctx.r30.s64 + 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880DDC6C:
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbzx r23,r29,r11
	ctx.current_instruction = 0x880DDC70;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r9,r4,r10
	ctx.current_instruction = 0x880DDC74;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r31,r10,r19
	ctx.current_instruction = 0x880DDC78;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r19.u32);
	// lbzx r22,r3,r10
	ctx.current_instruction = 0x880DDC7C;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r9,r22,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r22.u64;
	// subf r10,r23,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r23.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// srawi. r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880ddca8
	if (!ctx.cr0.lt) goto loc_880DDCA8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880ddcb4
	goto loc_880DDCB4;
loc_880DDCA8:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880ddcb4
	if (!ctx.cr6.gt) goto loc_880DDCB4;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DDCB4:
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stbx r31,r30,r11
	ctx.current_instruction = 0x880DDCC0;
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// lbz r23,1(r9)
	ctx.current_instruction = 0x880DDCC4;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r9,r4,r10
	ctx.current_instruction = 0x880DDCC8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r22,r3,r10
	ctx.current_instruction = 0x880DDCCC;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// lbzx r31,r10,r19
	ctx.current_instruction = 0x880DDCD0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r19.u32);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r22,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r22.u64;
	// subf r10,r23,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r23.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// srawi. r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x880ddcfc
	if (!ctx.cr0.lt) goto loc_880DDCFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x880ddd08
	goto loc_880DDD08;
loc_880DDCFC:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x880ddd08
	if (!ctx.cr6.gt) goto loc_880DDD08;
	// li r9,255
	ctx.r9.s64 = 255;
loc_880DDD08:
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stb r9,1(r31)
	ctx.current_instruction = 0x880DDD14;
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// lbzx r9,r4,r10
	ctx.current_instruction = 0x880DDD18;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r31,r10,r19
	ctx.current_instruction = 0x880DDD1C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r19.u32);
	// lbz r22,0(r10)
	ctx.current_instruction = 0x880DDD20;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r23,r3,r10
	ctx.current_instruction = 0x880DDD24;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r23,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r23.u64;
	// subf r10,r22,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r22.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// srawi. r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880ddd50
	if (!ctx.cr0.lt) goto loc_880DDD50;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880ddd5c
	goto loc_880DDD5C;
loc_880DDD50:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880ddd5c
	if (!ctx.cr6.gt) goto loc_880DDD5C;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DDD5C:
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stb r31,2(r9)
	ctx.current_instruction = 0x880DDD68;
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r31.u8);
	// lbzx r9,r4,r10
	ctx.current_instruction = 0x880DDD6C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r31,r10,r19
	ctx.current_instruction = 0x880DDD70;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r19.u32);
	// lbzx r22,r3,r10
	ctx.current_instruction = 0x880DDD74;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r23,r28,r11
	ctx.current_instruction = 0x880DDD80;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r22,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r22.u64;
	// subf r10,r23,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r23.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// srawi. r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880ddda4
	if (!ctx.cr0.lt) goto loc_880DDDA4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880dddb0
	goto loc_880DDDB0;
loc_880DDDA4:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880dddb0
	if (!ctx.cr6.gt) goto loc_880DDDB0;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DDDB0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r27,r11
	ctx.current_instruction = 0x880DDDB4;
	REX_STORE_U8(ctx.r27.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880ddc6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DDC6C;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r29,r29,r19
	ctx.r29.u64 = ctx.r29.u64 + ctx.r19.u64;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x880ddc58
	if (!ctx.cr0.eq) goto loc_880DDC58;
	// add r11,r26,r24
	ctx.r11.u64 = ctx.r26.u64 + ctx.r24.u64;
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// subf r9,r19,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r19.u64;
	// subfic r5,r8,64
	ctx.xer.ca = ctx.r8.u32 <= 64;
	ctx.r5.u64 = static_cast<uint64_t>(64) - ctx.r8.u64;
	// stw r10,32(r1)
	ctx.current_instruction = 0x880DDDE8;
	REX_STORE_U32(ctx.r1.u32 + 32, ctx.r10.u32);
	// addi r4,r7,1280
	ctx.r4.s64 = ctx.r7.s64 + 1280;
	// rlwinm r6,r19,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,36(r1)
	ctx.current_instruction = 0x880DDDF4;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// subfic r23,r19,-2
	ctx.xer.ca = ctx.r19.u32 <= 4294967294;
	ctx.r23.u64 = static_cast<uint64_t>(-2) - ctx.r19.u64;
	// stw r4,40(r1)
	ctx.current_instruction = 0x880DDDFC;
	REX_STORE_U32(ctx.r1.u32 + 40, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,16(r1)
	ctx.current_instruction = 0x880DDE0C;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r10.u32);
	// li r3,9
	ctx.r3.s64 = 9;
	// stw r11,20(r1)
	ctx.current_instruction = 0x880DDE14;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r11.u32);
	// subfic r22,r19,1
	ctx.xer.ca = ctx.r19.u32 <= 1;
	ctx.r22.u64 = static_cast<uint64_t>(1) - ctx.r19.u64;
	// stw r9,24(r1)
	ctx.current_instruction = 0x880DDE1C;
	REX_STORE_U32(ctx.r1.u32 + 24, ctx.r9.u32);
	// subfic r21,r19,2
	ctx.xer.ca = ctx.r19.u32 <= 2;
	ctx.r21.u64 = static_cast<uint64_t>(2) - ctx.r19.u64;
	// stw r3,28(r1)
	ctx.current_instruction = 0x880DDE24;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r3.u32);
	// rlwinm r7,r19,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r19,r6
	ctx.r6.u64 = ctx.r19.u64 + ctx.r6.u64;
	// subfic r20,r19,-1
	ctx.xer.ca = ctx.r19.u32 <= 4294967295;
	ctx.r20.u64 = static_cast<uint64_t>(-1) - ctx.r19.u64;
loc_880DDE34:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r10,r10,-6
	ctx.r10.s64 = ctx.r10.s64 + -6;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_880DDE40:
	// add r5,r23,r11
	ctx.r5.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lbz r28,0(r11)
	ctx.current_instruction = 0x880DDE44;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r4,r20,r11
	ctx.r4.u64 = ctx.r20.u64 + ctx.r11.u64;
	// lbzx r30,r7,r9
	ctx.current_instruction = 0x880DDE4C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// add r3,r22,r11
	ctx.r3.u64 = ctx.r22.u64 + ctx.r11.u64;
	// lbz r24,-2(r11)
	ctx.current_instruction = 0x880DDE54;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// add r31,r21,r11
	ctx.r31.u64 = ctx.r21.u64 + ctx.r11.u64;
	// lbz r26,-1(r11)
	ctx.current_instruction = 0x880DDE5C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lbz r25,1(r11)
	ctx.current_instruction = 0x880DDE64;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r29,r7,r5
	ctx.current_instruction = 0x880DDE68;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// lbzx r28,r7,r4
	ctx.current_instruction = 0x880DDE6C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// lbzx r27,r7,r3
	ctx.current_instruction = 0x880DDE70;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// add r29,r29,r24
	ctx.r29.u64 = ctx.r29.u64 + ctx.r24.u64;
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// lbzx r26,r7,r31
	ctx.current_instruction = 0x880DDE7C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// lbz r24,2(r11)
	ctx.current_instruction = 0x880DDE80;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// lbzx r18,r6,r4
	ctx.current_instruction = 0x880DDE88;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// rlwinm r25,r29,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r17,r6,r5
	ctx.current_instruction = 0x880DDE90;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// rlwinm r4,r28,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r26,r24
	ctx.r5.u64 = ctx.r26.u64 + ctx.r24.u64;
	// lbzx r24,r6,r3
	ctx.current_instruction = 0x880DDE9C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// rlwinm r26,r30,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r16,r6,r9
	ctx.current_instruction = 0x880DDEA4;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// lbzx r25,r23,r11
	ctx.current_instruction = 0x880DDEAC;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// add r28,r28,r4
	ctx.r28.u64 = ctx.r28.u64 + ctx.r4.u64;
	// lbzx r15,r20,r11
	ctx.current_instruction = 0x880DDEB4;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r11.u32);
	// rlwinm r3,r27,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r31,r6,r31
	ctx.current_instruction = 0x880DDEBC;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r14,0(r9)
	ctx.current_instruction = 0x880DDEC4;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// lbzx r26,r22,r11
	ctx.current_instruction = 0x880DDECC;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// subf r29,r17,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r17.u64;
	// lbzx r17,r21,r11
	ctx.current_instruction = 0x880DDED4;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// add r3,r27,r3
	ctx.r3.u64 = ctx.r27.u64 + ctx.r3.u64;
	// subf r28,r18,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r18.u64;
	// add r27,r5,r4
	ctx.r27.u64 = ctx.r5.u64 + ctx.r4.u64;
	// subf r30,r16,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r16.u64;
	// subf r4,r25,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r25.u64;
	// subf r29,r24,r3
	ctx.r29.u64 = ctx.r3.u64 - ctx.r24.u64;
	// subf r5,r15,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r15.u64;
	// subf r31,r31,r27
	ctx.r31.u64 = ctx.r27.u64 - ctx.r31.u64;
	// add r28,r4,r8
	ctx.r28.u64 = ctx.r4.u64 + ctx.r8.u64;
	// subf r3,r14,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r14.u64;
	// add r30,r5,r8
	ctx.r30.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r4,r26,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r26.u64;
	// subf r5,r17,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r17.u64;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// srawi r31,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r28.s32 >> 1;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r30,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 1;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sth r31,2(r10)
	ctx.current_instruction = 0x880DDF38;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r31.u16);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// sth r30,4(r10)
	ctx.current_instruction = 0x880DDF40;
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r30.u16);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// sth r3,6(r10)
	ctx.current_instruction = 0x880DDF48;
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r3.u16);
	// sth r4,8(r10)
	ctx.current_instruction = 0x880DDF4C;
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r4.u16);
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// sthu r5,10(r10)
	ctx.current_instruction = 0x880DDF54;
	ea = 10 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r10.u32 = ea;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// bdnz 0x880dde40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DDE40;
	// lwz r11,28(r1)
	ctx.current_instruction = 0x880DDF60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r10,24(r1)
	ctx.current_instruction = 0x880DDF64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 24);
	// lwz r4,20(r1)
	ctx.current_instruction = 0x880DDF68;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addic. r5,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r5.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r3,16(r1)
	ctx.current_instruction = 0x880DDF70;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// add r9,r10,r19
	ctx.r9.u64 = ctx.r10.u64 + ctx.r19.u64;
	// add r11,r4,r19
	ctx.r11.u64 = ctx.r4.u64 + ctx.r19.u64;
	// stw r5,28(r1)
	ctx.current_instruction = 0x880DDF7C;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r5.u32);
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// stw r9,24(r1)
	ctx.current_instruction = 0x880DDF84;
	REX_STORE_U32(ctx.r1.u32 + 24, ctx.r9.u32);
	// stw r11,20(r1)
	ctx.current_instruction = 0x880DDF88;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r11.u32);
	// stw r10,16(r1)
	ctx.current_instruction = 0x880DDF8C;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r10.u32);
	// bne 0x880dde34
	if (!ctx.cr0.eq) goto loc_880DDE34;
	// lwz r11,32(r1)
	ctx.current_instruction = 0x880DDF94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 32);
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r6,40(r1)
	ctx.current_instruction = 0x880DDF9C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 40);
	// lwz r7,36(r1)
	ctx.current_instruction = 0x880DDFA0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
loc_880DDFA8:
	// li r10,17
	ctx.r10.s64 = 17;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880DDFB8:
	// lhz r10,0(r11)
	ctx.current_instruction = 0x880DDFB8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.current_instruction = 0x880DDFBC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhz r3,-2(r11)
	ctx.current_instruction = 0x880DDFC4;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r31,4(r11)
	ctx.current_instruction = 0x880DDFCC;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r3,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r3.u64;
	// subf r10,r31,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r31.u64;
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// srawi. r10,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880de000
	if (!ctx.cr0.lt) goto loc_880DE000;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880de00c
	goto loc_880DE00C;
loc_880DE000:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880de00c
	if (!ctx.cr6.gt) goto loc_880DE00C;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DE00C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stbx r10,r8,r6
	ctx.current_instruction = 0x880DE014;
	REX_STORE_U8(ctx.r8.u32 + ctx.r6.u32, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x880ddfb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DDFB8;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,64
	ctx.r5.s64 = ctx.r5.s64 + 64;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// bne 0x880ddfa8
	if (!ctx.cr0.eq) goto loc_880DDFA8;
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E8660) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880E8660;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880E8660) {
			switch (rex_dispatch_address) {
				case 0x880E8668:
				case 0x880E8670:
				case 0x880E868C:
				case 0x880E86AC:
				case 0x880E86B8:
				case 0x880E86D4:
				case 0x880E87CC:
				case 0x880E87DC:
				case 0x880E89DC:
				case 0x880E8F68:
				case 0x880E8F78:
				case 0x880E930C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E8660;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880E8668: goto loc_880E8668;
		case 0x880E8670: goto loc_880E8670;
		case 0x880E868C: goto loc_880E868C;
		case 0x880E86AC: goto loc_880E86AC;
		case 0x880E86B8: goto loc_880E86B8;
		case 0x880E86D4: goto loc_880E86D4;
		case 0x880E87CC: goto loc_880E87CC;
		case 0x880E87DC: goto loc_880E87DC;
		case 0x880E89DC: goto loc_880E89DC;
		case 0x880E8F68: goto loc_880E8F68;
		case 0x880E8F78: goto loc_880E8F78;
		case 0x880E930C: goto loc_880E930C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880E8668;
	__savegprlr_14(ctx, base);
loc_880E8668:
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef270
	ctx.lr = 0x880E8670;
	__savefpr_22(ctx, base);
loc_880E8670:
	// ld r12,-4096(r1)
	ctx.current_instruction = 0x880E8670;
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4544(r1)
	ctx.current_instruction = 0x880E8674;
	ea = -4544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,6772(r3)
	ctx.current_instruction = 0x880E8678;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6772);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e86d8
	if (ctx.cr6.eq) goto loc_880E86D8;
	// bl 0x881ee8e8
	ctx.lr = 0x880E868C;
	sub_881EE8E8(ctx, base);
loc_880E868C:
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// addi r11,r11,-15
	ctx.r11.s64 = ctx.r11.s64 + -15;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,2208(r16)
	ctx.current_instruction = 0x880E869C;
	REX_STORE_U32(ctx.r16.u32 + 2208, ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880e86c4
	if (ctx.cr6.eq) goto loc_880E86C4;
	// bl 0x881ee8e8
	ctx.lr = 0x880E86AC;
	sub_881EE8E8(ctx, base);
loc_880E86AC:
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// stw r11,2220(r16)
	ctx.current_instruction = 0x880E86B0;
	REX_STORE_U32(ctx.r16.u32 + 2220, ctx.r11.u32);
	// bl 0x881ee8e8
	ctx.lr = 0x880E86B8;
	sub_881EE8E8(ctx, base);
loc_880E86B8:
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// addi r10,r11,-32
	ctx.r10.s64 = ctx.r11.s64 + -32;
	// stw r10,2224(r16)
	ctx.current_instruction = 0x880E86C0;
	REX_STORE_U32(ctx.r16.u32 + 2224, ctx.r10.u32);
loc_880E86C4:
	// lwz r3,2208(r16)
	ctx.current_instruction = 0x880E86C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r16.u32 + 2208);
	// addi r1,r1,4544
	ctx.r1.s64 = ctx.r1.s64 + 4544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2bc
	ctx.lr = 0x880E86D4;
	__restfpr_22(ctx, base);
loc_880E86D4:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880E86D8:
	// lwz r11,1380(r16)
	ctx.current_instruction = 0x880E86D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 1380);
	// lwz r19,720(r16)
	ctx.current_instruction = 0x880E86DC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r16.u32 + 720);
	// srawi r21,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r21.s64 = ctx.r11.s32 >> 2;
	// lwz r10,31544(r16)
	ctx.current_instruction = 0x880E86E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + 31544);
	// addi r11,r19,4
	ctx.r11.s64 = ctx.r19.s64 + 4;
	// rlwinm r9,r19,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,104(r1)
	ctx.current_instruction = 0x880E86F8;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// rlwinm r22,r19,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,88(r1)
	ctx.current_instruction = 0x880E8700;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r19,3,0,28
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// bne cr6,0x880e8714
	if (!ctx.cr6.eq) goto loc_880E8714;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
loc_880E8714:
	// lwz r18,28132(r16)
	ctx.current_instruction = 0x880E8714;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r16.u32 + 28132);
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r11,6804(r16)
	ctx.current_instruction = 0x880E8720;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 6804);
	// addi r6,r18,8
	ctx.r6.s64 = ctx.r18.s64 + 8;
	// stw r4,148(r1)
	ctx.current_instruction = 0x880E8728;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// stw r3,160(r1)
	ctx.current_instruction = 0x880E872C;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// li r7,11
	ctx.r7.s64 = 11;
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lwz r9,6800(r16)
	ctx.current_instruction = 0x880E8738;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 6800);
	// stw r7,144(r1)
	ctx.current_instruction = 0x880E873C;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,156(r1)
	ctx.current_instruction = 0x880E874C;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,172(r1)
	ctx.current_instruction = 0x880E8754;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// stw r3,176(r1)
	ctx.current_instruction = 0x880E8758;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r10,152(r1)
	ctx.current_instruction = 0x880E8768;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r7,164(r1)
	ctx.current_instruction = 0x880E8770;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r6,168(r1)
	ctx.current_instruction = 0x880E8778;
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// li r3,14
	ctx.r3.s64 = 14;
	// stw r5,180(r1)
	ctx.current_instruction = 0x880E8780;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r4,192(r1)
	ctx.current_instruction = 0x880E8788;
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// mullw r8,r18,r22
	ctx.r8.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r22.s32);
	// stw r3,204(r1)
	ctx.current_instruction = 0x880E8790;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// stw r26,184(r1)
	ctx.current_instruction = 0x880E8794;
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r7,10
	ctx.r7.s64 = 10;
	// li r6,13
	ctx.r6.s64 = 13;
	// stw r10,188(r1)
	ctx.current_instruction = 0x880E87A4;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// stw r7,196(r1)
	ctx.current_instruction = 0x880E87AC;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,200(r1)
	ctx.current_instruction = 0x880E87B4;
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// add r30,r8,r9
	ctx.r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x88052d90
	ctx.lr = 0x880E87CC;
	sub_88052D90(ctx, base);
loc_880E87CC:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x88052d90
	ctx.lr = 0x880E87DC;
	sub_88052D90(ctx, base);
loc_880E87DC:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r17,800(r16)
	ctx.current_instruction = 0x880E87E0;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r16.u32 + 800);
	// rlwinm r10,r17,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xFFFFFFFC;
	// lfd f30,1488(r11)
	ctx.current_instruction = 0x880E87E8;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmr f12,f30
	ctx.f12.f64 = ctx.f30.f64;
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// fmr f10,f30
	ctx.f10.f64 = ctx.f30.f64;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// ble cr6,0x880e8908
	if (!ctx.cr6.gt) goto loc_880E8908;
	// rotlwi r11,r17,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r17.u32, 0);
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880E881C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x880e8898
	if (!ctx.cr6.gt) goto loc_880E8898;
	// lwz r11,720(r16)
	ctx.current_instruction = 0x880E883C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 720);
	// addi r31,r23,-1
	ctx.r31.s64 = ctx.r23.s64 + -1;
	// addi r3,r24,-1
	ctx.r3.s64 = ctx.r24.s64 + -1;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_880E884C:
	// lbzu r11,1(r3)
	ctx.current_instruction = 0x880E884C;
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbzu r10,1(r31)
	ctx.current_instruction = 0x880E8854;
	ea = 1 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// mullw r30,r11,r11
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// subf r28,r10,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mullw r29,r10,r11
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r15,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r28.s32 >> 31;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// xor r11,r28,r15
	ctx.r11.u64 = ctx.r28.u64 ^ ctx.r15.u64;
	// mullw r28,r10,r10
	ctx.r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// subf r11,r15,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r15.u64;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r5,r29,r5
	ctx.r5.u64 = ctx.r29.u64 + ctx.r5.u64;
	// add r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 + ctx.r4.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x880e884c
	if (ctx.cr6.lt) goto loc_880E884C;
loc_880E8898:
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// std r9,112(r1)
	ctx.current_instruction = 0x880E88A4;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// std r8,96(r1)
	ctx.current_instruction = 0x880E88AC;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// std r10,120(r1)
	ctx.current_instruction = 0x880E88B0;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f9,120(r1)
	ctx.current_instruction = 0x880E88B4;
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// std r7,80(r1)
	ctx.current_instruction = 0x880E88B8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f7,112(r1)
	ctx.current_instruction = 0x880E88BC;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lfd f6,96(r1)
	ctx.current_instruction = 0x880E88C0;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lfd f5,80(r1)
	ctx.current_instruction = 0x880E88C8;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// add r24,r24,r21
	ctx.r24.u64 = ctx.r24.u64 + ctx.r21.u64;
	// std r11,128(r1)
	ctx.current_instruction = 0x880E88D0;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f11,128(r1)
	ctx.current_instruction = 0x880E88D4;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f1,f11
	ctx.f1.f64 = double(ctx.f11.s64);
	// add r23,r23,r20
	ctx.r23.u64 = ctx.r23.u64 + ctx.r20.u64;
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// fcfid f2,f7
	ctx.f2.f64 = double(ctx.f7.s64);
	// fcfid f11,f9
	ctx.f11.f64 = double(ctx.f9.s64);
	// fadd f12,f1,f12
	ctx.f12.f64 = ctx.f1.f64 + ctx.f12.f64;
	// fadd f8,f4,f8
	ctx.f8.f64 = ctx.f4.f64 + ctx.f8.f64;
	// fadd f13,f3,f13
	ctx.f13.f64 = ctx.f3.f64 + ctx.f13.f64;
	// fadd f0,f2,f0
	ctx.f0.f64 = ctx.f2.f64 + ctx.f0.f64;
	// fadd f10,f11,f10
	ctx.f10.f64 = ctx.f11.f64 + ctx.f10.f64;
	// bdnz 0x880e881c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E881C;
loc_880E8908:
	// lwz r11,1416(r16)
	ctx.current_instruction = 0x880E8908;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 1416);
	// lwz r10,724(r16)
	ctx.current_instruction = 0x880E890C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + 724);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r9,r19
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r19.s32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880e89cc
	if (ctx.cr6.lt) goto loc_880E89CC;
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// fmul f9,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f0.f64 * ctx.f0.f64;
	// fmul f7,f13,f13
	ctx.f7.f64 = ctx.f13.f64 * ctx.f13.f64;
	// std r10,80(r1)
	ctx.current_instruction = 0x880E8930;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f6,80(r1)
	ctx.current_instruction = 0x880E8934;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f6
	ctx.f11.f64 = double(ctx.f6.s64);
	// fmsub f9,f11,f8,f9
	ctx.f9.f64 = std::fma(ctx.f11.f64, ctx.f8.f64, -ctx.f9.f64);
	// fmsub f5,f11,f12,f7
	ctx.f5.f64 = std::fma(ctx.f11.f64, ctx.f12.f64, -ctx.f7.f64);
	// fmul f12,f5,f9
	ctx.f12.f64 = ctx.f5.f64 * ctx.f9.f64;
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// beq cr6,0x880e8960
	if (ctx.cr6.eq) goto loc_880E8960;
	// fmul f7,f13,f0
	ctx.f7.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fsqrt f6,f12
	ctx.f6.f64 = sqrt(ctx.f12.f64);
	// fmsub f5,f11,f10,f7
	ctx.f5.f64 = std::fma(ctx.f11.f64, ctx.f10.f64, -ctx.f7.f64);
	// fdiv f12,f5,f6
	ctx.f12.f64 = ctx.f5.f64 / ctx.f6.f64;
loc_880E8960:
	// fabs f6,f12
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f7,17624(r10)
	ctx.current_instruction = 0x880E8968;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r10.u32 + 17624);
	// fcmpu cr6,f6,f7
	ctx.cr6.compare(ctx.f6.f64, ctx.f7.f64);
	// blt cr6,0x880e89cc
	if (ctx.cr6.lt) goto loc_880E89CC;
	// fcmpu cr6,f9,f30
	ctx.cr6.compare(ctx.f9.f64, ctx.f30.f64);
	// beq cr6,0x880e89cc
	if (ctx.cr6.eq) goto loc_880E89CC;
	// fmul f7,f13,f0
	ctx.f7.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lfd f25,8624(r10)
	ctx.current_instruction = 0x880E8994;
	ctx.f25.u64 = REX_LOAD_U64(ctx.r10.u32 + 8624);
	// fdiv f12,f25,f9
	ctx.f12.f64 = ctx.f25.f64 / ctx.f9.f64;
	// lfd f22,17616(r9)
	ctx.current_instruction = 0x880E899C;
	ctx.f22.u64 = REX_LOAD_U64(ctx.r9.u32 + 17616);
	// lfd f23,12224(r8)
	ctx.current_instruction = 0x880E89A0;
	ctx.f23.u64 = REX_LOAD_U64(ctx.r8.u32 + 12224);
	// lfd f24,17608(r7)
	ctx.current_instruction = 0x880E89A4;
	ctx.f24.u64 = REX_LOAD_U64(ctx.r7.u32 + 17608);
	// fmsub f6,f11,f10,f7
	ctx.f6.f64 = std::fma(ctx.f11.f64, ctx.f10.f64, -ctx.f7.f64);
	// fmul f9,f6,f12
	ctx.f9.f64 = ctx.f6.f64 * ctx.f12.f64;
	// bge cr6,0x880e89e0
	if (!ctx.cr6.lt) goto loc_880E89E0;
	// fadd f10,f9,f25
	ctx.f10.f64 = ctx.f9.f64 + ctx.f25.f64;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f12,14696(r11)
	ctx.current_instruction = 0x880E89BC;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 14696);
	// fabs f9,f10
	ctx.f9.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// ble cr6,0x880e8a90
	if (!ctx.cr6.gt) goto loc_880E8A90;
loc_880E89CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,4544
	ctx.r1.s64 = ctx.r1.s64 + 4544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2bc
	ctx.lr = 0x880E89DC;
	__restfpr_22(ctx, base);
loc_880E89DC:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880E89E0:
	// fsub f6,f9,f25
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f9.f64 - ctx.f25.f64;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f7,12368(r10)
	ctx.current_instruction = 0x880E89E8;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r10.u32 + 12368);
	// fabs f5,f6
	ctx.f5.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fcmpu cr6,f5,f7
	ctx.cr6.compare(ctx.f5.f64, ctx.f7.f64);
	// bge cr6,0x880e8a20
	if (!ctx.cr6.lt) goto loc_880E8A20;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// fmul f10,f10,f0
	ctx.f10.f64 = ctx.f10.f64 * ctx.f0.f64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	ctx.current_instruction = 0x880E8A04;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// fmsub f5,f8,f13,f10
	ctx.f5.f64 = std::fma(ctx.f8.f64, ctx.f13.f64, -ctx.f10.f64);
	// fmul f4,f5,f12
	ctx.f4.f64 = ctx.f5.f64 * ctx.f12.f64;
	// lfd f7,80(r1)
	ctx.current_instruction = 0x880E8A10;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fcmpu cr6,f4,f6
	ctx.cr6.compare(ctx.f4.f64, ctx.f6.f64);
	// blt cr6,0x880e89cc
	if (ctx.cr6.lt) goto loc_880E89CC;
loc_880E8A20:
	// fmsub f12,f9,f23,f22
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = std::fma(ctx.f9.f64, ctx.f23.f64, -ctx.f22.f64);
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,80(r1)
	ctx.current_instruction = 0x880E8A28;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x880E8A2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x880e8a78
	if (!ctx.cr6.lt) goto loc_880E8A78;
	// li r10,1
	ctx.r10.s64 = 1;
loc_880E8A3C:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// stw r10,2220(r16)
	ctx.current_instruction = 0x880E8A40;
	REX_STORE_U32(ctx.r16.u32 + 2220, ctx.r10.u32);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// std r9,80(r1)
	ctx.current_instruction = 0x880E8A48;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// addi r11,r11,12088
	ctx.r11.s64 = ctx.r11.s64 + 12088;
	// lfd f26,0(r11)
	ctx.current_instruction = 0x880E8A50;
	ctx.fpscr.disableFlushMode();
	ctx.f26.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f12,80(r1)
	ctx.current_instruction = 0x880E8A54;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fmadd f12,f10,f24,f26
	ctx.f12.f64 = std::fma(ctx.f10.f64, ctx.f24.f64, ctx.f26.f64);
	// fnmsub f9,f12,f0,f13
	ctx.f9.f64 = -std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64);
	// fdiv f0,f9,f11
	ctx.f0.f64 = ctx.f9.f64 / ctx.f11.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x880e8b0c
	if (!ctx.cr6.gt) goto loc_880E8B0C;
	// fadd f0,f0,f26
	ctx.f0.f64 = ctx.f0.f64 + ctx.f26.f64;
	// b 0x880e8b10
	goto loc_880E8B10;
loc_880E8A78:
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// ble cr6,0x880e8a88
	if (!ctx.cr6.gt) goto loc_880E8A88;
	// li r10,63
	ctx.r10.s64 = 63;
	// b 0x880e8a3c
	goto loc_880E8A3C;
loc_880E8A88:
	// cmpwi cr6,r10,-50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -50, ctx.xer);
	// bne cr6,0x880e8a3c
	if (!ctx.cr6.eq) goto loc_880E8A3C;
loc_880E8A90:
	// fadd f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 + ctx.f0.f64;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r11,r11,12088
	ctx.r11.s64 = ctx.r11.s64 + 12088;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfd f0,17600(r10)
	ctx.current_instruction = 0x880E8AA8;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 17600);
	// stw r8,2220(r16)
	ctx.current_instruction = 0x880E8AAC;
	REX_STORE_U32(ctx.r16.u32 + 2220, ctx.r8.u32);
	// lfd f26,0(r11)
	ctx.current_instruction = 0x880E8AB0;
	ctx.f26.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f12,12544(r9)
	ctx.current_instruction = 0x880E8AB4;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r9.u32 + 12544);
	// fdiv f11,f13,f11
	ctx.f11.f64 = ctx.f13.f64 / ctx.f11.f64;
	// fnmsub f10,f11,f26,f0
	ctx.f10.f64 = -std::fma(ctx.f11.f64, ctx.f26.f64, -ctx.f0.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	ctx.current_instruction = 0x880E8AC4;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880E8AC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// stw r11,2224(r16)
	ctx.current_instruction = 0x880E8AD0;
	REX_STORE_U32(ctx.r16.u32 + 2224, ctx.r11.u32);
	// ble cr6,0x880e8ae0
	if (!ctx.cr6.gt) goto loc_880E8AE0;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x880e8aec
	goto loc_880E8AEC;
loc_880E8AE0:
	// cmpwi cr6,r11,-32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32, ctx.xer);
	// bge cr6,0x880e8af0
	if (!ctx.cr6.lt) goto loc_880E8AF0;
	// li r11,-32
	ctx.r11.s64 = -32;
loc_880E8AEC:
	// stw r11,2224(r16)
	ctx.current_instruction = 0x880E8AEC;
	REX_STORE_U32(ctx.r16.u32 + 2224, ctx.r11.u32);
loc_880E8AF0:
	// lwz r11,2224(r16)
	ctx.current_instruction = 0x880E8AF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 2224);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r9,r10,255
	ctx.xer.ca = ctx.r10.u32 <= 255;
	ctx.r9.u64 = static_cast<uint64_t>(255) - ctx.r10.u64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	ctx.current_instruction = 0x880E8B00;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x880E8B04;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x880e8b50
	goto loc_880E8B50;
loc_880E8B0C:
	// fsub f0,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 - ctx.f26.f64;
loc_880E8B10:
	// fctiwz f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,2224
	ctx.r12.s64 = 2224;
	// stfiwx f13,r16,r12
	ctx.current_instruction = 0x880E8B18;
	REX_STORE_U32(ctx.r16.u32 + ctx.r12.u32, ctx.f13.u32);
	// lwz r11,2224(r16)
	ctx.current_instruction = 0x880E8B1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 2224);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x880e8b30
	if (!ctx.cr6.gt) goto loc_880E8B30;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x880e8b3c
	goto loc_880E8B3C;
loc_880E8B30:
	// cmpwi cr6,r11,-32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32, ctx.xer);
	// bge cr6,0x880e8b40
	if (!ctx.cr6.lt) goto loc_880E8B40;
	// li r11,-32
	ctx.r11.s64 = -32;
loc_880E8B3C:
	// stw r11,2224(r16)
	ctx.current_instruction = 0x880E8B3C;
	REX_STORE_U32(ctx.r16.u32 + 2224, ctx.r11.u32);
loc_880E8B40:
	// lwz r11,2224(r16)
	ctx.current_instruction = 0x880E8B40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 2224);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	ctx.current_instruction = 0x880E8B48;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x880E8B4C;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_880E8B50:
	// li r11,256
	ctx.r11.s64 = 256;
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,17592(r11)
	ctx.current_instruction = 0x880E8B68;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 17592);
loc_880E8B6C:
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r11,80(r1)
	ctx.current_instruction = 0x880E8B70;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.current_instruction = 0x880E8B74;
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fmadd f9,f10,f12,f0
	ctx.f9.f64 = std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f0.f64);
	// fadd f8,f9,f26
	ctx.f8.f64 = ctx.f9.f64 + ctx.f26.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,96(r1)
	ctx.current_instruction = 0x880E8B88;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f7.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x880E8B8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x880e8ba0
	if (!ctx.cr6.gt) goto loc_880E8BA0;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x880e8bac
	goto loc_880E8BAC;
loc_880E8BA0:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_880E8BAC:
	// addi r10,r9,-128
	ctx.r10.s64 = ctx.r9.s64 + -128;
	// addi r7,r1,3280
	ctx.r7.s64 = ctx.r1.s64 + 3280;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// std r6,112(r1)
	ctx.current_instruction = 0x880E8BB8;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// stwx r11,r8,r7
	ctx.current_instruction = 0x880E8BBC;
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u32);
	// lfd f11,112(r1)
	ctx.current_instruction = 0x880E8BC0;
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fmadd f9,f10,f12,f13
	ctx.f9.f64 = std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f13.f64);
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,96(r1)
	ctx.current_instruction = 0x880E8BD0;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f8.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x880E8BD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x880e8be8
	if (!ctx.cr6.gt) goto loc_880E8BE8;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x880e8bf4
	goto loc_880E8BF4;
loc_880E8BE8:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_880E8BF4:
	// addi r10,r1,2256
	ctx.r10.s64 = ctx.r1.s64 + 2256;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r11,r8,r10
	ctx.current_instruction = 0x880E8BFC;
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x880e8b6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E8B6C;
	// srawi r11,r17,4
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r17.s32 >> 4;
	// lwz r10,88(r1)
	ctx.current_instruction = 0x880E8C0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,104(r1)
	ctx.current_instruction = 0x880E8C10;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r15,0
	ctx.r15.s64 = 0;
	// addze r14,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r14.s64 = temp.s64;
	// lwz r11,784(r16)
	ctx.current_instruction = 0x880E8C1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 784);
	// mullw r10,r18,r10
	ctx.r10.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r10.s32);
	// lwz r9,6844(r16)
	ctx.current_instruction = 0x880E8C24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 6844);
	// fmr f27,f30
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f30.f64;
	// stw r15,88(r1)
	ctx.current_instruction = 0x880E8C2C;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// fmr f28,f30
	ctx.f28.f64 = ctx.f30.f64;
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// mullw r8,r18,r8
	ctx.r8.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r8.s32);
	// rlwinm r7,r14,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x880e8db8
	if (!ctx.cr6.gt) goto loc_880E8DB8;
	// lwz r20,796(r16)
	ctx.current_instruction = 0x880E8C58;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r16.u32 + 796);
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// lwz r10,800(r16)
	ctx.current_instruction = 0x880E8C60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + 800);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// srawi r9,r20,4
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r20.s32 >> 4;
	// rlwinm r11,r23,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r7,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r18,r8,4,0,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r19,r6,4,0,27
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
loc_880E8C88:
	// lwzx r8,r11,r10
	ctx.current_instruction = 0x880E8C88;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpw cr6,r8,r18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x880e8d48
	if (!ctx.cr6.lt) goto loc_880E8D48;
	// lwz r11,796(r16)
	ctx.current_instruction = 0x880E8CA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 796);
	// add r9,r22,r8
	ctx.r9.u64 = ctx.r22.u64 + ctx.r8.u64;
	// subf r25,r22,r21
	ctx.r25.u64 = ctx.r21.u64 - ctx.r22.u64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r7,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r24,r7,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
loc_880E8CBC:
	// lbzx r11,r25,r9
	ctx.current_instruction = 0x880E8CBC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r9.u32);
	// addi r7,r1,3280
	ctx.r7.s64 = ctx.r1.s64 + 3280;
	// lbz r10,0(r9)
	ctx.current_instruction = 0x880E8CC4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// subf r28,r10,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r4,r1,1232
	ctx.r4.s64 = ctx.r1.s64 + 1232;
	// srawi r26,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r28.s32 >> 31;
	// mullw r27,r11,r11
	ctx.r27.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// lwzx r7,r5,r7
	ctx.current_instruction = 0x880E8CE0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// subf r5,r10,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r10.u64;
	// xor r7,r28,r26
	ctx.r7.u64 = ctx.r28.u64 ^ ctx.r26.u64;
	// srawi r28,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r5.s32 >> 31;
	// subf r7,r26,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r26.u64;
	// xor r26,r5,r28
	ctx.r26.u64 = ctx.r5.u64 ^ ctx.r28.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r28,r26
	ctx.r7.u64 = ctx.r26.u64 - ctx.r28.u64;
	// mullw r28,r10,r11
	ctx.r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwzx r26,r5,r6
	ctx.current_instruction = 0x880E8D04;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stwx r11,r5,r6
	ctx.current_instruction = 0x880E8D18;
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r11.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lwzx r11,r7,r4
	ctx.current_instruction = 0x880E8D20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r15,88(r1)
	ctx.current_instruction = 0x880E8D30;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stwx r10,r7,r4
	ctx.current_instruction = 0x880E8D38;
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r10.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r8,r24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x880e8cbc
	if (ctx.cr6.lt) goto loc_880E8CBC;
loc_880E8D48:
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// lwz r11,1380(r16)
	ctx.current_instruction = 0x880E8D4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 1380);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// extsw r8,r30
	ctx.r8.s64 = ctx.r30.s32;
	// std r10,80(r1)
	ctx.current_instruction = 0x880E8D58;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// extsw r7,r31
	ctx.r7.s64 = ctx.r31.s32;
	// std r9,96(r1)
	ctx.current_instruction = 0x880E8D60;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// std r8,120(r1)
	ctx.current_instruction = 0x880E8D64;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// std r7,112(r1)
	ctx.current_instruction = 0x880E8D6C;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// add r21,r21,r11
	ctx.r21.u64 = ctx.r21.u64 + ctx.r11.u64;
	// add r22,r22,r20
	ctx.r22.u64 = ctx.r22.u64 + ctx.r20.u64;
	// cmpw cr6,r23,r19
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r19.s32, ctx.xer);
	// rlwinm r11,r23,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfd f0,80(r1)
	ctx.current_instruction = 0x880E8D84;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,96(r1)
	ctx.current_instruction = 0x880E8D88;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f0
	ctx.f8.f64 = double(ctx.f0.s64);
	// lfd f10,120(r1)
	ctx.current_instruction = 0x880E8D90;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lfd f12,112(r1)
	ctx.current_instruction = 0x880E8D98;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fadd f28,f8,f28
	ctx.f28.f64 = ctx.f8.f64 + ctx.f28.f64;
	// fadd f31,f9,f31
	ctx.f31.f64 = ctx.f9.f64 + ctx.f31.f64;
	// fadd f27,f7,f27
	ctx.f27.f64 = ctx.f7.f64 + ctx.f27.f64;
	// fadd f29,f11,f29
	ctx.f29.f64 = ctx.f11.f64 + ctx.f29.f64;
	// blt cr6,0x880e8c88
	if (ctx.cr6.lt) goto loc_880E8C88;
loc_880E8DB8:
	// lwz r11,1416(r16)
	ctx.current_instruction = 0x880E8DB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 1416);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r18,r11,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,253
	ctx.r10.s64 = 253;
	// li r11,0
	ctx.r11.s64 = 0;
loc_880E8DE0:
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r9,r18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880e8df0
	if (!ctx.cr6.gt) goto loc_880E8DF0;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
loc_880E8DF0:
	// addi r7,r1,1228
	ctx.r7.s64 = ctx.r1.s64 + 1228;
	// addi r29,r1,2252
	ctx.r29.s64 = ctx.r1.s64 + 2252;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r8,r18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r18.s32, ctx.xer);
	// lwzx r7,r11,r7
	ctx.current_instruction = 0x880E8E00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r29,r11,r29
	ctx.current_instruction = 0x880E8E04;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r29,r9
	ctx.r9.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// bgt cr6,0x880e8e24
	if (ctx.cr6.gt) goto loc_880E8E24;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_880E8E24:
	// addi r8,r1,1224
	ctx.r8.s64 = ctx.r1.s64 + 1224;
	// addi r7,r1,2248
	ctx.r7.s64 = ctx.r1.s64 + 2248;
	// cmpw cr6,r10,r18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r18.s32, ctx.xer);
	// lwzx r8,r11,r8
	ctx.current_instruction = 0x880E8E30;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r7,r11,r7
	ctx.current_instruction = 0x880E8E34;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// bgt cr6,0x880e8e54
	if (ctx.cr6.gt) goto loc_880E8E54;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_880E8E54:
	// addi r8,r1,1220
	ctx.r8.s64 = ctx.r1.s64 + 1220;
	// addi r7,r1,2244
	ctx.r7.s64 = ctx.r1.s64 + 2244;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// addic. r29,r10,2
	ctx.xer.ca = ctx.r10.u32 > 4294967293;
	ctx.r29.s64 = ctx.r10.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r8,r11,r8
	ctx.current_instruction = 0x880E8E64;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r7,r11,r7
	ctx.current_instruction = 0x880E8E68;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// bgt 0x880e8de0
	if (ctx.cr0.gt) goto loc_880E8DE0;
	// lwz r9,2224(r16)
	ctx.current_instruction = 0x880E8E84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 2224);
	// add r11,r30,r5
	ctx.r11.u64 = ctx.r30.u64 + ctx.r5.u64;
	// add r10,r31,r4
	ctx.r10.u64 = ctx.r31.u64 + ctx.r4.u64;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// rlwinm r6,r10,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r17,r9,256
	ctx.r17.s64 = ctx.r9.s64 + 256;
	// mullw r5,r17,r11
	ctx.r5.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x880e89cc
	if (!ctx.cr6.lt) goto loc_880E89CC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e89cc
	if (ctx.cr6.gt) goto loc_880E89CC;
	// lwz r11,208(r1)
	ctx.current_instruction = 0x880E8ED4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,128(r1)
	ctx.current_instruction = 0x880E8EDC;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// cmpw cr6,r29,r15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x880e8f18
	if (!ctx.cr6.gt) goto loc_880E8F18;
	// lwz r11,212(r1)
	ctx.current_instruction = 0x880E8EE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r10,1232(r1)
	ctx.current_instruction = 0x880E8EEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1232);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r8,1236(r1)
	ctx.current_instruction = 0x880E8EF4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x880e89cc
	if (ctx.cr6.lt) goto loc_880E89CC;
loc_880E8F18:
	// li r3,4
	ctx.r3.s64 = 4;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r3,172(r1)
	ctx.current_instruction = 0x880E8F24;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,144(r1)
	ctx.current_instruction = 0x880E8F2C;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,148(r1)
	ctx.current_instruction = 0x880E8F34;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r9,152(r1)
	ctx.current_instruction = 0x880E8F3C;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,156(r1)
	ctx.current_instruction = 0x880E8F44;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r7,160(r1)
	ctx.current_instruction = 0x880E8F4C;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// stw r6,164(r1)
	ctx.current_instruction = 0x880E8F54;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,168(r1)
	ctx.current_instruction = 0x880E8F5C;
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x88052d90
	ctx.lr = 0x880E8F68;
	sub_88052D90(ctx, base);
loc_880E8F68:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x88052d90
	ctx.lr = 0x880E8F78;
	sub_88052D90(ctx, base);
loc_880E8F78:
	// rlwinm r11,r14,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880e9100
	if (!ctx.cr6.gt) goto loc_880E9100;
	// lwz r9,796(r16)
	ctx.current_instruction = 0x880E8F84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 796);
	// rlwinm r8,r24,2,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x1C;
	// lwz r23,1384(r16)
	ctx.current_instruction = 0x880E8F8C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r16.u32 + 1384);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// srawi r5,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 4;
	// lwz r6,800(r16)
	ctx.current_instruction = 0x880E8F98;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r16.u32 + 800);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// lwz r10,28(r16)
	ctx.current_instruction = 0x880E8FA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + 28);
	// addze r3,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r3.s64 = temp.s64;
	// lwz r11,6848(r16)
	ctx.current_instruction = 0x880E8FA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 6848);
	// addi r9,r23,1
	ctx.r9.s64 = ctx.r23.s64 + 1;
	// lwz r5,24(r16)
	ctx.current_instruction = 0x880E8FB0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r16.u32 + 24);
	// srawi r31,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r6.s32 >> 4;
	// lwz r30,6852(r16)
	ctx.current_instruction = 0x880E8FB8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r16.u32 + 6852);
	// rlwinm r6,r9,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r9,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r9.s64 = temp.s64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// rlwinm r19,r3,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r21,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r4.s32 >> 1;
	// rlwinm r20,r9,3,0,28
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r25,r6,r10
	ctx.r25.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r22,r10,r5
	ctx.r22.u64 = ctx.r5.u64 - ctx.r10.u64;
	// subf r27,r11,r30
	ctx.r27.u64 = ctx.r30.u64 - ctx.r11.u64;
loc_880E8FE0:
	// lwzx r10,r8,r7
	ctx.current_instruction = 0x880E8FE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpw cr6,r10,r19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x880e90e4
	if (!ctx.cr6.lt) goto loc_880E90E4;
	// lwz r8,796(r16)
	ctx.current_instruction = 0x880E8FEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r16.u32 + 796);
	// subf r9,r26,r22
	ctx.r9.u64 = ctx.r22.u64 - ctx.r26.u64;
	// add r11,r26,r10
	ctx.r11.u64 = ctx.r26.u64 + ctx.r10.u64;
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// add r30,r9,r25
	ctx.r30.u64 = ctx.r9.u64 + ctx.r25.u64;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// subf r28,r26,r25
	ctx.r28.u64 = ctx.r25.u64 - ctx.r26.u64;
	// rlwinm r29,r6,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
loc_880E900C:
	// lbzx r9,r30,r11
	ctx.current_instruction = 0x880E900C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r8,r1,2256
	ctx.r8.s64 = ctx.r1.s64 + 2256;
	// lbz r6,0(r11)
	ctx.current_instruction = 0x880E9014;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r1,1232
	ctx.r7.s64 = ctx.r1.s64 + 1232;
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lbzx r15,r28,r11
	ctx.current_instruction = 0x880E9020;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// subf r4,r6,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r6.u64;
	// lbzx r14,r27,r11
	ctx.current_instruction = 0x880E9028;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// srawi r9,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 31;
	// subf r31,r14,r15
	ctx.r31.u64 = ctx.r15.u64 - ctx.r14.u64;
	// lwzx r8,r5,r8
	ctx.current_instruction = 0x880E9038;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// xor r5,r4,r9
	ctx.r5.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// addi r4,r1,2256
	ctx.r4.s64 = ctx.r1.s64 + 2256;
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r6,r9,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r9.u64;
	// stw r4,104(r1)
	ctx.current_instruction = 0x880E904C;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// srawi r5,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 31;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// srawi r6,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r31.s32 >> 31;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// xor r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r6.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r7
	ctx.current_instruction = 0x880E906C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// subf r6,r6,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r6.u64;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// addi r8,r1,1232
	ctx.r8.s64 = ctx.r1.s64 + 1232;
	// stwx r5,r9,r7
	ctx.current_instruction = 0x880E907C;
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r5.u32);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r4,r3
	ctx.current_instruction = 0x880E9084;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// rotlwi r7,r15,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r15.u32, 2);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stwx r6,r4,r3
	ctx.current_instruction = 0x880E9098;
	REX_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r6.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r6,104(r1)
	ctx.current_instruction = 0x880E90A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// lwzx r4,r9,r8
	ctx.current_instruction = 0x880E90A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r3,r7,r6
	ctx.current_instruction = 0x880E90AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// subf r7,r14,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r14.u64;
	// srawi r6,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// xor r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// subf r7,r6,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r6.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r6,r5
	ctx.current_instruction = 0x880E90C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
	// stwx r3,r6,r5
	ctx.current_instruction = 0x880E90D0;
	REX_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r3.u32);
	// stwx r7,r9,r8
	ctx.current_instruction = 0x880E90D4;
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// blt cr6,0x880e900c
	if (ctx.cr6.lt) goto loc_880E900C;
	// lwz r29,128(r1)
	ctx.current_instruction = 0x880E90DC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r15,88(r1)
	ctx.current_instruction = 0x880E90E0;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_880E90E4:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r25,r23,r25
	ctx.r25.u64 = ctx.r23.u64 + ctx.r25.u64;
	// add r26,r21,r26
	ctx.r26.u64 = ctx.r21.u64 + ctx.r26.u64;
	// cmpw cr6,r24,r20
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r20.s32, ctx.xer);
	// rlwinm r8,r24,2,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x1C;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// blt cr6,0x880e8fe0
	if (ctx.cr6.lt) goto loc_880E8FE0;
loc_880E9100:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,253
	ctx.r10.s64 = 253;
	// li r11,0
	ctx.r11.s64 = 0;
loc_880E9120:
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r9,r18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880e9130
	if (!ctx.cr6.gt) goto loc_880E9130;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
loc_880E9130:
	// addi r7,r1,2252
	ctx.r7.s64 = ctx.r1.s64 + 2252;
	// addi r28,r1,1228
	ctx.r28.s64 = ctx.r1.s64 + 1228;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r8,r18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r18.s32, ctx.xer);
	// lwzx r7,r11,r7
	ctx.current_instruction = 0x880E9140;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r28,r11,r28
	ctx.current_instruction = 0x880E9144;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r28,r9
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// bgt cr6,0x880e9164
	if (ctx.cr6.gt) goto loc_880E9164;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_880E9164:
	// addi r8,r1,2248
	ctx.r8.s64 = ctx.r1.s64 + 2248;
	// addi r7,r1,1224
	ctx.r7.s64 = ctx.r1.s64 + 1224;
	// cmpw cr6,r10,r18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r18.s32, ctx.xer);
	// lwzx r8,r11,r8
	ctx.current_instruction = 0x880E9170;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r7,r11,r7
	ctx.current_instruction = 0x880E9174;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// bgt cr6,0x880e9194
	if (ctx.cr6.gt) goto loc_880E9194;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_880E9194:
	// addi r8,r1,2244
	ctx.r8.s64 = ctx.r1.s64 + 2244;
	// addi r7,r1,1220
	ctx.r7.s64 = ctx.r1.s64 + 1220;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// addic. r28,r10,2
	ctx.xer.ca = ctx.r10.u32 > 4294967293;
	ctx.r28.s64 = ctx.r10.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwzx r8,r11,r8
	ctx.current_instruction = 0x880E91A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r7,r11,r7
	ctx.current_instruction = 0x880E91A8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// bgt 0x880e9120
	if (ctx.cr0.gt) goto loc_880E9120;
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r10,r31,r4
	ctx.r10.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r9,r17,r11
	ctx.r9.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r11.s32);
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x880e89cc
	if (!ctx.cr6.lt) goto loc_880E89CC;
	// mulli r11,r11,100
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(100));
	// mulli r10,r10,95
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(95));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e89cc
	if (ctx.cr6.gt) goto loc_880E89CC;
	// cmpw cr6,r29,r15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x880e9234
	if (!ctx.cr6.gt) goto loc_880E9234;
	// lwz r11,1232(r1)
	ctx.current_instruction = 0x880E91FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1232);
	// lwz r10,1236(r1)
	ctx.current_instruction = 0x880E9200;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,208(r1)
	ctx.current_instruction = 0x880E9208;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r8,212(r1)
	ctx.current_instruction = 0x880E920C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x880e89cc
	if (ctx.cr6.lt) goto loc_880E89CC;
loc_880E9234:
	// extsw r11,r15
	ctx.r11.s64 = ctx.r15.s32;
	// fmul f13,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64 * ctx.f31.f64;
	// fmul f12,f29,f31
	ctx.f12.f64 = ctx.f29.f64 * ctx.f31.f64;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	ctx.current_instruction = 0x880E9244;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r10,2208(r16)
	ctx.current_instruction = 0x880E9248;
	REX_STORE_U32(ctx.r16.u32 + 2208, ctx.r10.u32);
	// lfd f11,80(r1)
	ctx.current_instruction = 0x880E924C;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f11
	ctx.f0.f64 = double(ctx.f11.s64);
	// fmsub f10,f0,f27,f13
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f27.f64, -ctx.f13.f64);
	// fmsub f9,f0,f28,f12
	ctx.f9.f64 = std::fma(ctx.f0.f64, ctx.f28.f64, -ctx.f12.f64);
	// fdiv f8,f25,f10
	ctx.f8.f64 = ctx.f25.f64 / ctx.f10.f64;
	// fmul f13,f8,f9
	ctx.f13.f64 = ctx.f8.f64 * ctx.f9.f64;
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x880e92fc
	if (!ctx.cr6.gt) goto loc_880E92FC;
	// fmsub f13,f13,f23,f22
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f23.f64, -ctx.f22.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	ctx.current_instruction = 0x880E9274;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880E9278;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x880e928c
	if (!ctx.cr6.lt) goto loc_880E928C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x880e9298
	goto loc_880E9298;
loc_880E928C:
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// ble cr6,0x880e9298
	if (!ctx.cr6.gt) goto loc_880E9298;
	// li r11,63
	ctx.r11.s64 = 63;
loc_880E9298:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// stw r11,2220(r16)
	ctx.current_instruction = 0x880E929C;
	REX_STORE_U32(ctx.r16.u32 + 2220, ctx.r11.u32);
	// std r10,80(r1)
	ctx.current_instruction = 0x880E92A0;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x880E92A4;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmadd f11,f12,f24,f26
	ctx.f11.f64 = std::fma(ctx.f12.f64, ctx.f24.f64, ctx.f26.f64);
	// fnmsub f10,f11,f31,f29
	ctx.f10.f64 = -std::fma(ctx.f11.f64, ctx.f31.f64, -ctx.f29.f64);
	// fdiv f0,f10,f0
	ctx.f0.f64 = ctx.f10.f64 / ctx.f0.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x880e92c8
	if (!ctx.cr6.gt) goto loc_880E92C8;
	// fsub f0,f0,f26
	ctx.f0.f64 = ctx.f0.f64 - ctx.f26.f64;
	// b 0x880e92cc
	goto loc_880E92CC;
loc_880E92C8:
	// fadd f0,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f26.f64;
loc_880E92CC:
	// fctiwz f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,2224
	ctx.r12.s64 = 2224;
	// stfiwx f13,r16,r12
	ctx.current_instruction = 0x880E92D4;
	REX_STORE_U32(ctx.r16.u32 + ctx.r12.u32, ctx.f13.u32);
	// lwz r11,2224(r16)
	ctx.current_instruction = 0x880E92D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 2224);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x880e92ec
	if (!ctx.cr6.gt) goto loc_880E92EC;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x880e92f8
	goto loc_880E92F8;
loc_880E92EC:
	// cmpwi cr6,r11,-32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32, ctx.xer);
	// bge cr6,0x880e92fc
	if (!ctx.cr6.lt) goto loc_880E92FC;
	// li r11,-32
	ctx.r11.s64 = -32;
loc_880E92F8:
	// stw r11,2224(r16)
	ctx.current_instruction = 0x880E92F8;
	REX_STORE_U32(ctx.r16.u32 + 2224, ctx.r11.u32);
loc_880E92FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,4544
	ctx.r1.s64 = ctx.r1.s64 + 4544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2bc
	ctx.lr = 0x880E930C;
	__restfpr_22(ctx, base);
loc_880E930C:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88109370) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88109370;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88109370) {
			switch (rex_dispatch_address) {
				case 0x88109378:
				case 0x88109834:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88109370;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88109378: goto loc_88109378;
		case 0x88109834: goto loc_88109834;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88109378;
	__savegprlr_28(ctx, base);
loc_88109378:
	// stwu r1,-640(r1)
	ctx.current_instruction = 0x88109378;
	ea = -640 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,2
	ctx.r29.s64 = ctx.r3.s64 + 2;
	// addi r6,r1,114
	ctx.r6.s64 = ctx.r1.s64 + 114;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r31,14
	ctx.r31.s64 = 14;
loc_8810938C:
	// li r11,7
	ctx.r11.s64 = 7;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88109394:
	// lhz r11,0(r4)
	ctx.current_instruction = 0x88109394;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r9,32(r4)
	ctx.current_instruction = 0x88109398;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 32);
	// lhz r8,30(r4)
	ctx.current_instruction = 0x8810939C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 30);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lhz r11,34(r4)
	ctx.current_instruction = 0x881093A4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 34);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// lhz r30,64(r4)
	ctx.current_instruction = 0x881093AC;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r4.u32 + 64);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r8,r30
	ctx.r8.s64 = ctx.r30.s16;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x881093d4
	if (!ctx.cr6.gt) goto loc_881093D4;
	// xor r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
loc_881093D4:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881093e8
	if (!ctx.cr6.gt) goto loc_881093E8;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
loc_881093E8:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88109418
	if (ctx.cr6.lt) goto loc_88109418;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x88109400
	if (ctx.cr6.gt) goto loc_88109400;
	// sth r8,0(r6)
	ctx.current_instruction = 0x881093F8;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r8.u16);
	// b 0x88109474
	goto loc_88109474;
loc_88109400:
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x88109410
	if (ctx.cr6.gt) goto loc_88109410;
	// sth r7,0(r6)
	ctx.current_instruction = 0x88109408;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r7.u16);
	// b 0x88109474
	goto loc_88109474;
loc_88109410:
	// sth r10,0(r6)
	ctx.current_instruction = 0x88109410;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r10.u16);
	// b 0x88109474
	goto loc_88109474;
loc_88109418:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88109438
	if (ctx.cr6.lt) goto loc_88109438;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x88109470
	if (!ctx.cr6.gt) goto loc_88109470;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8810944c
	if (ctx.cr6.gt) goto loc_8810944C;
	// sth r7,0(r6)
	ctx.current_instruction = 0x88109430;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r7.u16);
	// b 0x88109474
	goto loc_88109474;
loc_88109438:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109444
	if (!ctx.cr6.gt) goto loc_88109444;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88109444:
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x88109454
	if (ctx.cr6.gt) goto loc_88109454;
loc_8810944C:
	// sth r11,0(r6)
	ctx.current_instruction = 0x8810944C;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// b 0x88109474
	goto loc_88109474;
loc_88109454:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x88109460
	if (!ctx.cr6.gt) goto loc_88109460;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_88109460:
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x88109470
	if (ctx.cr6.gt) goto loc_88109470;
	// sth r7,0(r6)
	ctx.current_instruction = 0x88109468;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r7.u16);
	// b 0x88109474
	goto loc_88109474;
loc_88109470:
	// sth r9,0(r6)
	ctx.current_instruction = 0x88109470;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r9.u16);
loc_88109474:
	// lhz r11,2(r4)
	ctx.current_instruction = 0x88109474;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r10,34(r4)
	ctx.current_instruction = 0x88109478;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 34);
	// lhz r8,36(r4)
	ctx.current_instruction = 0x8810947C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 36);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lhz r7,66(r4)
	ctx.current_instruction = 0x88109484;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + 66);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x881094a8
	if (!ctx.cr6.gt) goto loc_881094A8;
	// xor r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r9.u64;
loc_881094A8:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881094bc
	if (!ctx.cr6.gt) goto loc_881094BC;
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
loc_881094BC:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x881094e4
	if (ctx.cr6.lt) goto loc_881094E4;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x881094d4
	if (ctx.cr6.gt) goto loc_881094D4;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// b 0x8810953c
	goto loc_8810953C;
loc_881094D4:
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x88109538
	if (!ctx.cr6.gt) goto loc_88109538;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// b 0x8810953c
	goto loc_8810953C;
loc_881094E4:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88109508
	if (ctx.cr6.lt) goto loc_88109508;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x881094fc
	if (ctx.cr6.gt) goto loc_881094FC;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x8810953c
	goto loc_8810953C;
loc_881094FC:
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8810951c
	if (ctx.cr6.gt) goto loc_8810951C;
	// b 0x88109538
	goto loc_88109538;
loc_88109508:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88109514
	if (!ctx.cr6.gt) goto loc_88109514;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_88109514:
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x88109524
	if (ctx.cr6.gt) goto loc_88109524;
loc_8810951C:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// b 0x8810953c
	goto loc_8810953C;
loc_88109524:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x88109530
	if (!ctx.cr6.gt) goto loc_88109530;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_88109530:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8810953c
	if (ctx.cr6.gt) goto loc_8810953C;
loc_88109538:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
loc_8810953C:
	// sth r11,2(r6)
	ctx.current_instruction = 0x8810953C;
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r11.u16);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x88109394
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88109394;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x8810938c
	if (!ctx.cr0.eq) goto loc_8810938C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r30,r3,30
	ctx.r30.s64 = ctx.r3.s64 + 30;
	// li r5,2
	ctx.r5.s64 = 2;
loc_8810956C:
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r6,r11,-32
	ctx.r6.s64 = ctx.r11.s64 + -32;
	// addi r7,r10,64
	ctx.r7.s64 = ctx.r10.s64 + 64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8810957C:
	// lhz r11,-32(r7)
	ctx.current_instruction = 0x8810957C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + -32);
	// lhz r9,-64(r7)
	ctx.current_instruction = 0x88109580;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + -64);
	// lhz r4,0(r7)
	ctx.current_instruction = 0x88109584;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881095ac
	if (!ctx.cr6.gt) goto loc_881095AC;
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
loc_881095AC:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x881095b8
	if (!ctx.cr6.gt) goto loc_881095B8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_881095B8:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x881095c4
	if (!ctx.cr6.gt) goto loc_881095C4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_881095C4:
	// lhz r8,32(r7)
	ctx.current_instruction = 0x881095C4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// sth r4,32(r6)
	ctx.current_instruction = 0x881095D0;
	REX_STORE_U16(ctx.r6.u32 + 32, ctx.r4.u16);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x881095ec
	if (!ctx.cr6.gt) goto loc_881095EC;
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
loc_881095EC:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881095f8
	if (!ctx.cr6.gt) goto loc_881095F8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_881095F8:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109604
	if (!ctx.cr6.gt) goto loc_88109604;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88109604:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r7,r7,64
	ctx.r7.s64 = ctx.r7.s64 + 64;
	// sthu r11,64(r6)
	ctx.current_instruction = 0x8810960C;
	ea = 64 + ctx.r6.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r6.u32 = ea;
	// bdnz 0x8810957c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810957C;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r1,142
	ctx.r11.s64 = ctx.r1.s64 + 142;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bne 0x8810956c
	if (!ctx.cr0.eq) goto loc_8810956C;
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r31,r3,482
	ctx.r31.s64 = ctx.r3.s64 + 482;
	// li r4,2
	ctx.r4.s64 = 2;
loc_88109634:
	// li r9,7
	ctx.r9.s64 = 7;
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r6,r8,-2
	ctx.r6.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8810964C:
	// lhz r11,-2(r10)
	ctx.current_instruction = 0x8810964C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r8,-4(r10)
	ctx.current_instruction = 0x88109650;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + -4);
	// lhz r7,0(r10)
	ctx.current_instruction = 0x88109654;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8810967c
	if (!ctx.cr6.gt) goto loc_8810967C;
	// xor r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// xor r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// xor r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r11.u64;
loc_8810967C:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x88109688
	if (!ctx.cr6.gt) goto loc_88109688;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_88109688:
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109694
	if (!ctx.cr6.gt) goto loc_88109694;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_88109694:
	// lhz r7,2(r10)
	ctx.current_instruction = 0x88109694;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// sthx r28,r6,r10
	ctx.current_instruction = 0x881096A0;
	REX_STORE_U16(ctx.r6.u32 + ctx.r10.u32, ctx.r28.u16);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x881096bc
	if (!ctx.cr6.gt) goto loc_881096BC;
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
loc_881096BC:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x881096c8
	if (!ctx.cr6.gt) goto loc_881096C8;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_881096C8:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x881096d4
	if (!ctx.cr6.gt) goto loc_881096D4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_881096D4:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sthu r11,4(r5)
	ctx.current_instruction = 0x881096DC;
	ea = 4 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r5.u32 = ea;
	// bdnz 0x8810964c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810964C;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r1,562
	ctx.r11.s64 = ctx.r1.s64 + 562;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bne 0x88109634
	if (!ctx.cr0.eq) goto loc_88109634;
	// lhz r11,0(r29)
	ctx.current_instruction = 0x881096F4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r10,0(r3)
	ctx.current_instruction = 0x881096F8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r9,32(r3)
	ctx.current_instruction = 0x881096FC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109720
	if (!ctx.cr6.gt) goto loc_88109720;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
loc_88109720:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8810972c
	if (!ctx.cr6.gt) goto loc_8810972C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8810972C:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109738
	if (!ctx.cr6.gt) goto loc_88109738;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88109738:
	// lhz r10,28(r3)
	ctx.current_instruction = 0x88109738;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 28);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lhz r8,0(r30)
	ctx.current_instruction = 0x88109740;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lhz r7,62(r3)
	ctx.current_instruction = 0x88109748;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 62);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// sth r9,80(r1)
	ctx.current_instruction = 0x88109750;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8810976c
	if (!ctx.cr6.gt) goto loc_8810976C;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
loc_8810976C:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x88109778
	if (!ctx.cr6.gt) goto loc_88109778;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_88109778:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109784
	if (!ctx.cr6.gt) goto loc_88109784;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88109784:
	// lhz r10,448(r3)
	ctx.current_instruction = 0x88109784;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 448);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lhz r8,480(r3)
	ctx.current_instruction = 0x8810978C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 480);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lhz r7,0(r31)
	ctx.current_instruction = 0x88109794;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// sth r9,110(r1)
	ctx.current_instruction = 0x8810979C;
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r9.u16);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x881097b8
	if (!ctx.cr6.gt) goto loc_881097B8;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
loc_881097B8:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x881097c4
	if (!ctx.cr6.gt) goto loc_881097C4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_881097C4:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x881097d0
	if (!ctx.cr6.gt) goto loc_881097D0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_881097D0:
	// lhz r10,508(r3)
	ctx.current_instruction = 0x881097D0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 508);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lhz r8,510(r3)
	ctx.current_instruction = 0x881097D8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 510);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lhz r7,478(r3)
	ctx.current_instruction = 0x881097E0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 478);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// sth r9,560(r1)
	ctx.current_instruction = 0x881097E8;
	REX_STORE_U16(ctx.r1.u32 + 560, ctx.r9.u16);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109804
	if (!ctx.cr6.gt) goto loc_88109804;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
loc_88109804:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x88109810
	if (!ctx.cr6.gt) goto loc_88109810;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_88109810:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8810981c
	if (!ctx.cr6.gt) goto loc_8810981C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8810981C:
	// sth r11,590(r1)
	ctx.current_instruction = 0x8810981C;
	REX_STORE_U16(ctx.r1.u32 + 590, ctx.r11.u16);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,-19972(r10)
	ctx.current_instruction = 0x88109828;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -19972);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88109834;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88109834:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881113F8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881113F8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881113F8;
	ctx.current_instruction = 0x881113F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,128(r3)
	ctx.current_instruction = 0x88111400;
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,136(r3)
	ctx.current_instruction = 0x88111404;
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,64(r3)
	ctx.current_instruction = 0x88111408;
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r10,84(r3)
	ctx.current_instruction = 0x8811140C;
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stw r11,32(r3)
	ctx.current_instruction = 0x88111410;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	ctx.current_instruction = 0x88111414;
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	ctx.current_instruction = 0x88111418;
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	ctx.current_instruction = 0x8811141C;
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,0(r3)
	ctx.current_instruction = 0x88111420;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88111424;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,16(r3)
	ctx.current_instruction = 0x88111428;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,24(r3)
	ctx.current_instruction = 0x8811142C;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,4(r3)
	ctx.current_instruction = 0x88111430;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,12(r3)
	ctx.current_instruction = 0x88111434;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	ctx.current_instruction = 0x88111438;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,28(r3)
	ctx.current_instruction = 0x8811143C;
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,112(r3)
	ctx.current_instruction = 0x88111440;
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88112338) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88112338;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88112338) {
			switch (rex_dispatch_address) {
				case 0x88112340:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88112338;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88112340: goto loc_88112340;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x88112340;
	__savegprlr_18(ctx, base);
loc_88112340:
	// lwz r11,116(r3)
	ctx.current_instruction = 0x88112340;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r23,8(r11)
	ctx.current_instruction = 0x88112344;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88112984
	if (ctx.cr6.eq) goto loc_88112984;
	// lwz r10,100(r3)
	ctx.current_instruction = 0x88112350;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88112984
	if (ctx.cr6.eq) goto loc_88112984;
	// lwz r11,4(r11)
	ctx.current_instruction = 0x8811235C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88112984
	if (ctx.cr6.eq) goto loc_88112984;
	// lwz r11,96(r3)
	ctx.current_instruction = 0x88112368;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88112984
	if (ctx.cr6.eq) goto loc_88112984;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r30,92(r3)
	ctx.current_instruction = 0x88112378;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r29,r23,-1
	ctx.r29.s64 = ctx.r23.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r6,r23,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// mullw r31,r29,r8
	ctx.r31.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r8.s32);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// addze r25,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r25.s64 = temp.s64;
	// rotlwi r9,r31,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// srawi r7,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addze r21,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r21.s64 = temp.s64;
	// andc r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// andc r10,r23,r9
	ctx.r10.u64 = ctx.r23.u64 & ~ctx.r9.u64;
	// divw r28,r31,r23
	ctx.r28.u64 = uint32_t((ctx.r23.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r23.s32 == -1)) ? ctx.r31.s32 / ctx.r23.s32 : 0);
	// srawi r9,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 1;
	// twllei r23,0
	if (ctx.r23.s32 == 0 || ctx.r23.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r22,r6,r8
	ctx.r22.u64 = uint32_t((ctx.r8.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r6.s32 / ctx.r8.s32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addze r20,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r20.s64 = temp.s64;
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x881123e0
	if (!ctx.cr6.gt) goto loc_881123E0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
loc_881123E0:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x88112984
	if (!ctx.cr6.gt) goto loc_88112984;
	// lwz r10,124(r3)
	ctx.current_instruction = 0x881123E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r7,104(r3)
	ctx.current_instruction = 0x881123F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88112410
	if (ctx.cr6.eq) goto loc_88112410;
	// addi r10,r22,-256
	ctx.r10.s64 = ctx.r22.s64 + -256;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r10,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r10.s64 = temp.s64;
	// b 0x88112414
	goto loc_88112414;
loc_88112410:
	// li r10,0
	ctx.r10.s64 = 0;
loc_88112414:
	// mullw r19,r22,r4
	ctx.r19.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r4.s32);
	// add. r30,r19,r10
	ctx.r30.u64 = ctx.r19.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r24,0
	ctx.r24.s64 = 0;
	// bge 0x88112490
	if (!ctx.cr0.lt) goto loc_88112490;
	// subf r9,r30,r22
	ctx.r9.u64 = ctx.r22.u64 - ctx.r30.u64;
	// twllei r22,0
	if (ctx.r22.s32 == 0 || ctx.r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r24,r9,r22
	ctx.r24.u64 = uint32_t((ctx.r22.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r22.s32 == -1)) ? ctx.r9.s32 / ctx.r22.s32 : 0);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// add r10,r24,r4
	ctx.r10.u64 = ctx.r24.u64 + ctx.r4.u64;
	// andc r6,r22,r7
	ctx.r6.u64 = ctx.r22.u64 & ~ctx.r7.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bge cr6,0x88112488
	if (!ctx.cr6.lt) goto loc_88112488;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88112454:
	// lwz r9,132(r3)
	ctx.current_instruction = 0x88112454;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88112484
	if (!ctx.cr6.gt) goto loc_88112484;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_88112468:
	// lbzu r11,1(r9)
	ctx.current_instruction = 0x88112468;
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,0(r8)
	ctx.current_instruction = 0x88112470;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r11,96(r3)
	ctx.current_instruction = 0x88112478;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88112468
	if (ctx.cr6.lt) goto loc_88112468;
loc_88112484:
	// bdnz 0x88112454
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88112454;
loc_88112488:
	// mullw r10,r24,r22
	ctx.r10.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r22.s32);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_88112490:
	// add r10,r24,r4
	ctx.r10.u64 = ctx.r24.u64 + ctx.r4.u64;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x88112504
	if (!ctx.cr6.lt) goto loc_88112504;
	// subf r10,r10,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r10.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881124A4:
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// lwz r10,132(r3)
	ctx.current_instruction = 0x881124A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// li r9,0
	ctx.r9.s64 = 0;
	// subfic r31,r7,256
	ctx.xer.ca = ctx.r7.u32 <= 256;
	ctx.r31.u64 = static_cast<uint64_t>(256) - ctx.r7.u64;
	// srawi r6,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// ble cr6,0x881124fc
	if (!ctx.cr6.gt) goto loc_881124FC;
loc_881124C8:
	// lbzx r11,r11,r10
	ctx.current_instruction = 0x881124C8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r6,0(r10)
	ctx.current_instruction = 0x881124D0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// mullw r6,r6,r31
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// srawi r6,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 8;
	// stb r6,0(r8)
	ctx.current_instruction = 0x881124E8;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r11,96(r3)
	ctx.current_instruction = 0x881124F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881124c8
	if (ctx.cr6.lt) goto loc_881124C8;
loc_881124FC:
	// add r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 + ctx.r22.u64;
	// bdnz 0x881124a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881124A4;
loc_88112504:
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x881125a8
	if (!ctx.cr6.lt) goto loc_881125A8;
	// subf r10,r28,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r28.u64;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88112518:
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// lwz r7,132(r3)
	ctx.current_instruction = 0x8811251C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// subfic r31,r6,256
	ctx.xer.ca = ctx.r6.u32 <= 256;
	ctx.r31.u64 = static_cast<uint64_t>(256) - ctx.r6.u64;
	// srawi r8,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r30.s32 >> 8;
	// mullw r10,r8,r11
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bge cr6,0x8811257c
	if (!ctx.cr6.lt) goto loc_8811257C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881125a0
	if (!ctx.cr6.gt) goto loc_881125A0;
loc_88112544:
	// lbzx r11,r11,r10
	ctx.current_instruction = 0x88112544;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r7,0(r10)
	ctx.current_instruction = 0x8811254C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// srawi r7,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 8;
	// stb r7,1(r9)
	ctx.current_instruction = 0x88112564;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,96(r3)
	ctx.current_instruction = 0x8811256C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88112544
	if (ctx.cr6.lt) goto loc_88112544;
	// b 0x881125a0
	goto loc_881125A0;
loc_8811257C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881125a0
	if (!ctx.cr6.gt) goto loc_881125A0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_88112588:
	// lbzu r11,1(r10)
	ctx.current_instruction = 0x88112588;
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stbu r11,1(r9)
	ctx.current_instruction = 0x88112590;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// lwz r11,96(r3)
	ctx.current_instruction = 0x88112594;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88112588
	if (ctx.cr6.lt) goto loc_88112588;
loc_881125A0:
	// add r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 + ctx.r22.u64;
	// bdnz 0x88112518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88112518;
loc_881125A8:
	// lwz r11,108(r3)
	ctx.current_instruction = 0x881125A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r7,96(r3)
	ctx.current_instruction = 0x881125AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r6,132(r3)
	ctx.current_instruction = 0x881125B4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r31,100(r3)
	ctx.current_instruction = 0x881125B8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r8,124(r3)
	ctx.current_instruction = 0x881125BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r30,104(r3)
	ctx.current_instruction = 0x881125C0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// mullw r9,r7,r23
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r23.s32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r27,r9,r6
	ctx.r27.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r7,r31,r7
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r10,r25
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x88112600
	if (ctx.cr6.eq) goto loc_88112600;
	// mullw r8,r11,r22
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// addi r8,r8,-256
	ctx.r8.s64 = ctx.r8.s64 + -256;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r8,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r8.s64 = temp.s64;
	// b 0x88112604
	goto loc_88112604;
loc_88112600:
	// li r8,0
	ctx.r8.s64 = 0;
loc_88112604:
	// mullw r11,r11,r22
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// mullw r7,r11,r4
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// add. r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x88112690
	if (!ctx.cr0.lt) goto loc_88112690;
	// subf r8,r29,r22
	ctx.r8.u64 = ctx.r22.u64 - ctx.r29.u64;
	// twllei r22,0
	if (ctx.r22.s32 == 0 || ctx.r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r24,r8,r22
	ctx.r24.u64 = uint32_t((ctx.r22.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r22.s32 == -1)) ? ctx.r8.s32 / ctx.r22.s32 : 0);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// add r6,r10,r24
	ctx.r6.u64 = ctx.r10.u64 + ctx.r24.u64;
	// andc r11,r22,r7
	ctx.r11.u64 = ctx.r22.u64 & ~ctx.r7.u64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bge cr6,0x88112688
	if (!ctx.cr6.lt) goto loc_88112688;
loc_88112644:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x88112668
	if (!ctx.cr6.gt) goto loc_88112668;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_88112654:
	// lbzx r8,r11,r27
	ctx.current_instruction = 0x88112654;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r9)
	ctx.current_instruction = 0x8811265C;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x88112654
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88112654;
loc_88112668:
	// lwz r11,108(r3)
	ctx.current_instruction = 0x88112668;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88112644
	if (ctx.cr6.lt) goto loc_88112644;
loc_88112688:
	// mullw r11,r24,r22
	ctx.r11.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r22.s32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_88112690:
	// lwz r10,108(r3)
	ctx.current_instruction = 0x88112690;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mullw r11,r10,r28
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mullw r7,r10,r4
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// addze r26,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r26.s64 = temp.s64;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x88112724
	if (!ctx.cr6.lt) goto loc_88112724;
	// subf r28,r11,r26
	ctx.r28.u64 = ctx.r26.u64 - ctx.r11.u64;
loc_881126C0:
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// subfic r30,r6,256
	ctx.xer.ca = ctx.r6.u32 <= 256;
	ctx.r30.u64 = static_cast<uint64_t>(256) - ctx.r6.u64;
	// srawi r10,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mullw r10,r10,r25
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// add r31,r10,r27
	ctx.r31.u64 = ctx.r10.u64 + ctx.r27.u64;
	// ble cr6,0x88112718
	if (!ctx.cr6.gt) goto loc_88112718;
	// add r10,r31,r25
	ctx.r10.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_881126EC:
	// lbzx r7,r31,r11
	ctx.current_instruction = 0x881126EC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzu r18,1(r10)
	ctx.current_instruction = 0x881126F4;
	ea = 1 + ctx.r10.u32;
	ctx.r18.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r8,r7,r30
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// mullw r7,r18,r6
	ctx.r7.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r6.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// stb r8,0(r9)
	ctx.current_instruction = 0x8811270C;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x881126ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881126EC;
loc_88112718:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r29,r29,r22
	ctx.r29.u64 = ctx.r29.u64 + ctx.r22.u64;
	// bne 0x881126c0
	if (!ctx.cr0.eq) goto loc_881126C0;
loc_88112724:
	// lwz r11,108(r3)
	ctx.current_instruction = 0x88112724;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mullw r10,r11,r5
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// cmpw cr6,r26,r7
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8811278c
	if (!ctx.cr6.lt) goto loc_8811278C;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8811278c
	if (!ctx.cr6.lt) goto loc_8811278C;
	// subf r8,r26,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r26.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_88112754:
	// srawi r10,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r10,r10,r25
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x88112780
	if (!ctx.cr6.gt) goto loc_88112780;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_88112770:
	// lbzx r7,r10,r11
	ctx.current_instruction = 0x88112770;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r7,1(r9)
	ctx.current_instruction = 0x88112778;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x88112770
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88112770;
loc_88112780:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r29,r29,r22
	ctx.r29.u64 = ctx.r29.u64 + ctx.r22.u64;
	// bne 0x88112754
	if (!ctx.cr0.eq) goto loc_88112754;
loc_8811278C:
	// lwz r7,108(r3)
	ctx.current_instruction = 0x8811278C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r31,96(r3)
	ctx.current_instruction = 0x88112790;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mullw r6,r7,r4
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// lwz r30,100(r3)
	ctx.current_instruction = 0x88112798;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r8,124(r3)
	ctx.current_instruction = 0x8811279C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r10,132(r3)
	ctx.current_instruction = 0x881127A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r29,104(r3)
	ctx.current_instruction = 0x881127A4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// mullw r9,r7,r20
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r20.s32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r7,r7,r21
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r21.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r6,r31,r30
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// mullw r9,r11,r25
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// mullw r11,r7,r25
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// mullw r7,r31,r23
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r23.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x881127fc
	if (ctx.cr6.eq) goto loc_881127FC;
	// lwz r11,108(r3)
	ctx.current_instruction = 0x881127E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mullw r11,r11,r22
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// addi r10,r11,-256
	ctx.r10.s64 = ctx.r11.s64 + -256;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x88112800
	goto loc_88112800;
loc_881127FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_88112800:
	// srawi r10,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r19.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add. r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x88112898
	if (!ctx.cr0.lt) goto loc_88112898;
	// lwz r11,108(r3)
	ctx.current_instruction = 0x88112810;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// subf r8,r30,r22
	ctx.r8.u64 = ctx.r22.u64 - ctx.r30.u64;
	// twllei r22,0
	if (ctx.r22.s32 == 0 || ctx.r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r7,r11,r4
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// divw r24,r8,r22
	ctx.r24.u64 = uint32_t((ctx.r22.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r22.s32 == -1)) ? ctx.r8.s32 / ctx.r22.s32 : 0);
	// andc r8,r22,r10
	ctx.r8.u64 = ctx.r22.u64 & ~ctx.r10.u64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x88112890
	if (!ctx.cr6.lt) goto loc_88112890;
loc_8811284C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x88112870
	if (!ctx.cr6.gt) goto loc_88112870;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_8811285C:
	// lbzx r8,r11,r28
	ctx.current_instruction = 0x8811285C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r9)
	ctx.current_instruction = 0x88112864;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8811285c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8811285C;
loc_88112870:
	// lwz r11,108(r3)
	ctx.current_instruction = 0x88112870;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8811284c
	if (ctx.cr6.lt) goto loc_8811284C;
loc_88112890:
	// mullw r11,r24,r22
	ctx.r11.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r22.s32);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_88112898:
	// lwz r11,108(r3)
	ctx.current_instruction = 0x88112898;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x8811291c
	if (!ctx.cr6.lt) goto loc_8811291C;
	// subf r29,r11,r26
	ctx.r29.u64 = ctx.r26.u64 - ctx.r11.u64;
loc_881128B8:
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// subfic r31,r6,256
	ctx.xer.ca = ctx.r6.u32 <= 256;
	ctx.r31.u64 = static_cast<uint64_t>(256) - ctx.r6.u64;
	// srawi r10,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mullw r10,r10,r25
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	// ble cr6,0x88112910
	if (!ctx.cr6.gt) goto loc_88112910;
	// add r10,r4,r25
	ctx.r10.u64 = ctx.r4.u64 + ctx.r25.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_881128E4:
	// lbzx r7,r4,r11
	ctx.current_instruction = 0x881128E4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzu r27,1(r10)
	ctx.current_instruction = 0x881128EC;
	ea = 1 + ctx.r10.u32;
	ctx.r27.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r8,r7,r31
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// mullw r7,r27,r6
	ctx.r7.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r6.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// stb r8,0(r9)
	ctx.current_instruction = 0x88112904;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x881128e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881128E4;
loc_88112910:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 + ctx.r22.u64;
	// bne 0x881128b8
	if (!ctx.cr0.eq) goto loc_881128B8;
loc_8811291C:
	// lwz r11,108(r3)
	ctx.current_instruction = 0x8811291C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mullw r10,r11,r5
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// cmpw cr6,r26,r7
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x88112984
	if (!ctx.cr6.lt) goto loc_88112984;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88112984
	if (!ctx.cr6.lt) goto loc_88112984;
	// subf r8,r26,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r26.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_8811294C:
	// srawi r10,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r10,r10,r25
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x88112978
	if (!ctx.cr6.gt) goto loc_88112978;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_88112968:
	// lbzx r7,r10,r11
	ctx.current_instruction = 0x88112968;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r7,1(r9)
	ctx.current_instruction = 0x88112970;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x88112968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88112968;
loc_88112978:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 + ctx.r22.u64;
	// bne 0x8811294c
	if (!ctx.cr0.eq) goto loc_8811294C;
loc_88112984:
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88123738) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88123738;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88123738) {
			switch (rex_dispatch_address) {
				case 0x88123740:
				case 0x88123770:
				case 0x8812378C:
				case 0x8812385C:
				case 0x881238AC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88123738;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88123740: goto loc_88123740;
		case 0x88123770: goto loc_88123770;
		case 0x8812378C: goto loc_8812378C;
		case 0x8812385C: goto loc_8812385C;
		case 0x881238AC: goto loc_881238AC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88123740;
	__savegprlr_26(ctx, base);
loc_88123740:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88123740;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r29,80(r1)
	ctx.current_instruction = 0x8812374C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x880cb2c0
	ctx.lr = 0x88123770;
	sub_880CB2C0(ctx, base);
loc_88123770:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88123890
	if (ctx.cr6.lt) goto loc_88123890;
	// li r5,144
	ctx.r5.s64 = 144;
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88123780;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8812378C;
	sub_88052D90(ctx, base);
loc_8812378C:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8812378C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r10)
	ctx.current_instruction = 0x881237A0;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x881237A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,52(r9)
	ctx.current_instruction = 0x881237A8;
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r27.u32);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x881237AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,48(r8)
	ctx.current_instruction = 0x881237B0;
	REX_STORE_U32(ctx.r8.u32 + 48, ctx.r28.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x881237B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,0(r31)
	ctx.current_instruction = 0x881237B8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r6,80(r7)
	ctx.current_instruction = 0x881237BC;
	REX_STORE_U32(ctx.r7.u32 + 80, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881237C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.current_instruction = 0x881237C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,84(r11)
	ctx.current_instruction = 0x881237C8;
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x881237CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r31)
	ctx.current_instruction = 0x881237D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,88(r9)
	ctx.current_instruction = 0x881237D4;
	REX_STORE_U32(ctx.r9.u32 + 88, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x881237D8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,16(r31)
	ctx.current_instruction = 0x881237DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r6,92(r7)
	ctx.current_instruction = 0x881237E0;
	REX_STORE_U32(ctx.r7.u32 + 92, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881237E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,20(r31)
	ctx.current_instruction = 0x881237E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,96(r11)
	ctx.current_instruction = 0x881237EC;
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x881237F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,24(r31)
	ctx.current_instruction = 0x881237F4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r8,100(r9)
	ctx.current_instruction = 0x881237F8;
	REX_STORE_U32(ctx.r9.u32 + 100, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x881237FC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,28(r31)
	ctx.current_instruction = 0x88123800;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stw r6,104(r7)
	ctx.current_instruction = 0x88123804;
	REX_STORE_U32(ctx.r7.u32 + 104, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88123808;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,32(r31)
	ctx.current_instruction = 0x8812380C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,108(r11)
	ctx.current_instruction = 0x88123810;
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x88123814;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,36(r31)
	ctx.current_instruction = 0x88123818;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r8,112(r9)
	ctx.current_instruction = 0x8812381C;
	REX_STORE_U32(ctx.r9.u32 + 112, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x88123820;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,40(r31)
	ctx.current_instruction = 0x88123824;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// stw r6,116(r7)
	ctx.current_instruction = 0x88123828;
	REX_STORE_U32(ctx.r7.u32 + 116, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812382C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,20(r11)
	ctx.current_instruction = 0x88123830;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88123834;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,8(r10)
	ctx.current_instruction = 0x88123838;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8812383C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,40(r31)
	ctx.current_instruction = 0x88123840;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,136(r9)
	ctx.current_instruction = 0x8812384C;
	REX_STORE_U32(ctx.r9.u32 + 136, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x88123850;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r7,16
	ctx.r6.s64 = ctx.r7.s64 + 16;
	// bl 0x880cb2c0
	ctx.lr = 0x8812385C;
	sub_880CB2C0(ctx, base);
loc_8812385C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88123890
	if (ctx.cr6.lt) goto loc_88123890;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88123868;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x8812386C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r29,0(r10)
	ctx.current_instruction = 0x88123870;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r29,4(r10)
	ctx.current_instruction = 0x88123874;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stw r29,8(r10)
	ctx.current_instruction = 0x88123878;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// stw r29,12(r10)
	ctx.current_instruction = 0x8812387C;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r29.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x88123880;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,44(r26)
	ctx.current_instruction = 0x88123884;
	REX_STORE_U32(ctx.r26.u32 + 44, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88123890:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88123890;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881238ac
	if (ctx.cr6.eq) goto loc_881238AC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880cb318
	ctx.lr = 0x881238AC;
	sub_880CB318(ctx, base);
loc_881238AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88126188) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88126188;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88126188) {
			switch (rex_dispatch_address) {
				case 0x88126190:
				case 0x881261D8:
				case 0x88126208:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88126188;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88126190: goto loc_88126190;
		case 0x881261D8: goto loc_881261D8;
		case 0x88126208: goto loc_88126208;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88126190;
	__savegprlr_27(ctx, base);
loc_88126190:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88126190;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88126208
	if (ctx.cr6.eq) goto loc_88126208;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126208
	if (ctx.cr6.eq) goto loc_88126208;
	// lhz r11,34(r3)
	ctx.current_instruction = 0x881261AC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88126200
	if (ctx.cr6.eq) goto loc_88126200;
	// li r29,0
	ctx.r29.s64 = 0;
loc_881261BC:
	// mulli r11,r29,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_881261C8:
	// mulli r11,r31,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// bl 0x88141198
	ctx.lr = 0x881261D8;
	sub_88141198(ctx, base);
loc_881261D8:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x881261c8
	if (ctx.cr6.lt) goto loc_881261C8;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lhz r10,34(r27)
	ctx.current_instruction = 0x881261EC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881261bc
	if (ctx.cr6.lt) goto loc_881261BC;
loc_88126200:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88125e70
	ctx.lr = 0x88126208;
	sub_88125E70(ctx, base);
loc_88126208:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88127F18) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88127F18);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88127F18;
	ctx.current_instruction = 0x88127F18;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,2(r11)
	ctx.current_instruction = 0x88127F24;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.current_instruction = 0x88127F28;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// rlwinm r7,r8,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// srawi r3,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 4;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88129700) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88129700;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88129700) {
			switch (rex_dispatch_address) {
				case 0x88129708:
				case 0x8812972C:
				case 0x88129758:
				case 0x88129778:
				case 0x881297A4:
				case 0x881297C0:
				case 0x881297F0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88129700;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88129708: goto loc_88129708;
		case 0x8812972C: goto loc_8812972C;
		case 0x88129758: goto loc_88129758;
		case 0x88129778: goto loc_88129778;
		case 0x881297A4: goto loc_881297A4;
		case 0x881297C0: goto loc_881297C0;
		case 0x881297F0: goto loc_881297F0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88129708;
	__savegprlr_26(ctx, base);
loc_88129708:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88129708;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.current_instruction = 0x8812970C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x88129818
	if (!ctx.cr6.gt) goto loc_88129818;
	// lwz r11,244(r3)
	ctx.current_instruction = 0x88129720;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x8812972C;
	sub_88125E60(ctx, base);
loc_8812972C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,348(r31)
	ctx.current_instruction = 0x88129730;
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r3.u32);
	// bne cr6,0x88129748
	if (!ctx.cr6.eq) goto loc_88129748;
loc_88129738:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88129748:
	// lwz r11,244(r31)
	ctx.current_instruction = 0x88129748;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88129758;
	sub_88052D90(ctx, base);
loc_88129758:
	// lwz r10,244(r31)
	ctx.current_instruction = 0x88129758;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88129818
	if (!ctx.cr6.gt) goto loc_88129818;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8812976C:
	// lwz r11,244(r31)
	ctx.current_instruction = 0x8812976C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x88129778;
	sub_88125E60(ctx, base);
loc_88129778:
	// lwz r10,348(r31)
	ctx.current_instruction = 0x88129778;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// stwx r3,r29,r10
	ctx.current_instruction = 0x8812977C;
	REX_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,348(r31)
	ctx.current_instruction = 0x88129780;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// lwzx r9,r29,r11
	ctx.current_instruction = 0x88129784;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88129738
	if (ctx.cr6.eq) goto loc_88129738;
	// lwz r10,244(r31)
	ctx.current_instruction = 0x88129790;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x881297A4;
	sub_88052D90(ctx, base);
loc_881297A4:
	// lwz r9,244(r31)
	ctx.current_instruction = 0x881297A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88129804
	if (!ctx.cr6.gt) goto loc_88129804;
	// li r30,0
	ctx.r30.s64 = 0;
loc_881297B8:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x88125e60
	ctx.lr = 0x881297C0;
	sub_88125E60(ctx, base);
loc_881297C0:
	// lwz r11,348(r31)
	ctx.current_instruction = 0x881297C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// lwzx r10,r29,r11
	ctx.current_instruction = 0x881297C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stwx r3,r10,r30
	ctx.current_instruction = 0x881297C8;
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r9,348(r31)
	ctx.current_instruction = 0x881297CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// lwzx r11,r29,r9
	ctx.current_instruction = 0x881297D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// lwzx r8,r11,r30
	ctx.current_instruction = 0x881297D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88129738
	if (ctx.cr6.eq) goto loc_88129738;
	// li r5,28
	ctx.r5.s64 = 28;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x881297F0;
	sub_88052D90(ctx, base);
loc_881297F0:
	// lwz r11,244(r31)
	ctx.current_instruction = 0x881297F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881297b8
	if (ctx.cr6.lt) goto loc_881297B8;
loc_88129804:
	// lwz r11,244(r31)
	ctx.current_instruction = 0x88129804;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8812976c
	if (ctx.cr6.lt) goto loc_8812976C;
loc_88129818:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812C698) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8812C698;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8812C698) {
			switch (rex_dispatch_address) {
				case 0x8812C6A0:
				case 0x8812C7AC:
				case 0x8812C7FC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812C698;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8812C6A0: goto loc_8812C6A0;
		case 0x8812C7AC: goto loc_8812C7AC;
		case 0x8812C7FC: goto loc_8812C7FC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8812C6A0;
	__savegprlr_27(ctx, base);
loc_8812C6A0:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8812C6A0;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.current_instruction = 0x8812C6A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8812c718
	if (!ctx.cr6.gt) goto loc_8812C718;
loc_8812C6C4:
	// lwz r10,40(r31)
	ctx.current_instruction = 0x8812C6C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r9,36(r31)
	ctx.current_instruction = 0x8812C6CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// subfic r8,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r8.u64 = static_cast<uint64_t>(32) - ctx.r10.u64;
	// slw r10,r9,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r7,r10,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8812c6f8
	if (ctx.cr6.eq) goto loc_8812C6F8;
loc_8812C6E4:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8812c6e4
	if (!ctx.cr6.eq) goto loc_8812C6E4;
loc_8812C6F8:
	// lwz r10,0(r30)
	ctx.current_instruction = 0x8812C6F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r30)
	ctx.current_instruction = 0x8812C700;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,40(r31)
	ctx.current_instruction = 0x8812C704;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	ctx.current_instruction = 0x8812C710;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bge 0x8812c808
	if (!ctx.cr0.lt) goto loc_8812C808;
loc_8812C718:
	// lwz r10,48(r31)
	ctx.current_instruction = 0x8812C718;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stw r27,40(r31)
	ctx.current_instruction = 0x8812C71C;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8812c76c
	if (ctx.cr6.eq) goto loc_8812C76C;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// li r11,32
	ctx.r11.s64 = 32;
	// bgt cr6,0x8812c738
	if (ctx.cr6.gt) goto loc_8812C738;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8812C738:
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r8,44(r31)
	ctx.current_instruction = 0x8812C73C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r7,36(r31)
	ctx.current_instruction = 0x8812C740;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// slw r10,r28,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r9.u8 & 0x3F));
	// stw r11,40(r31)
	ctx.current_instruction = 0x8812C748;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// stw r9,48(r31)
	ctx.current_instruction = 0x8812C750;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// srw r6,r8,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// and r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r3,36(r31)
	ctx.current_instruction = 0x8812C764;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// stw r11,44(r31)
	ctx.current_instruction = 0x8812C768;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_8812C76C:
	// lwz r11,40(r31)
	ctx.current_instruction = 0x8812C76C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x8812c7e0
	if (ctx.cr6.gt) goto loc_8812C7E0;
loc_8812C778:
	// lwz r11,32(r31)
	ctx.current_instruction = 0x8812C778;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8812c7e0
	if (!ctx.cr6.gt) goto loc_8812C7E0;
	// lwz r10,36(r31)
	ctx.current_instruction = 0x8812C784;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,28(r31)
	ctx.current_instruction = 0x8812C788;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,84(r31)
	ctx.current_instruction = 0x8812C790;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r9,36(r31)
	ctx.current_instruction = 0x8812C798;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// lbz r3,0(r11)
	ctx.current_instruction = 0x8812C79C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,28(r31)
	ctx.current_instruction = 0x8812C7A0;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8812C7AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8812C7AC:
	// lwz r11,40(r31)
	ctx.current_instruction = 0x8812C7AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,32(r31)
	ctx.current_instruction = 0x8812C7B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// lwz r6,36(r31)
	ctx.current_instruction = 0x8812C7B8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r11,40(r31)
	ctx.current_instruction = 0x8812C7C8;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r3,32(r31)
	ctx.current_instruction = 0x8812C7D0;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// stw r4,36(r31)
	ctx.current_instruction = 0x8812C7D4;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// ble cr6,0x8812c778
	if (!ctx.cr6.gt) goto loc_8812C778;
loc_8812C7E0:
	// lwz r11,40(r31)
	ctx.current_instruction = 0x8812C7E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8812c6c4
	if (!ctx.cr6.lt) goto loc_8812C6C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812c398
	ctx.lr = 0x8812C7FC;
	sub_8812C398(ctx, base);
loc_8812C7FC:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8812c6c4
	if (!ctx.cr6.lt) goto loc_8812C6C4;
loc_8812C808:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88134A80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88134A80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88134A80) {
			switch (rex_dispatch_address) {
				case 0x88134A88:
				case 0x88134AAC:
				case 0x88134B70:
				case 0x88134BC0:
				case 0x88134C34:
				case 0x88134DF8:
				case 0x88134E10:
				case 0x88134E44:
				case 0x88134E84:
				case 0x88134EBC:
				case 0x88134EF4:
				case 0x88134FDC:
				case 0x88134FFC:
				case 0x8813501C:
				case 0x8813503C:
				case 0x881351C4:
				case 0x881351E0:
				case 0x881351EC:
				case 0x88135208:
				case 0x88135214:
				case 0x88135230:
				case 0x8813523C:
				case 0x88135258:
				case 0x88135294:
				case 0x881352B0:
				case 0x881352BC:
				case 0x881352D8:
				case 0x881352E4:
				case 0x88135300:
				case 0x8813530C:
				case 0x88135328:
				case 0x881353F8:
				case 0x881354A0:
				case 0x88135524:
				case 0x88135570:
				case 0x881355D4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88134A80;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88134A88: goto loc_88134A88;
		case 0x88134AAC: goto loc_88134AAC;
		case 0x88134B70: goto loc_88134B70;
		case 0x88134BC0: goto loc_88134BC0;
		case 0x88134C34: goto loc_88134C34;
		case 0x88134DF8: goto loc_88134DF8;
		case 0x88134E10: goto loc_88134E10;
		case 0x88134E44: goto loc_88134E44;
		case 0x88134E84: goto loc_88134E84;
		case 0x88134EBC: goto loc_88134EBC;
		case 0x88134EF4: goto loc_88134EF4;
		case 0x88134FDC: goto loc_88134FDC;
		case 0x88134FFC: goto loc_88134FFC;
		case 0x8813501C: goto loc_8813501C;
		case 0x8813503C: goto loc_8813503C;
		case 0x881351C4: goto loc_881351C4;
		case 0x881351E0: goto loc_881351E0;
		case 0x881351EC: goto loc_881351EC;
		case 0x88135208: goto loc_88135208;
		case 0x88135214: goto loc_88135214;
		case 0x88135230: goto loc_88135230;
		case 0x8813523C: goto loc_8813523C;
		case 0x88135258: goto loc_88135258;
		case 0x88135294: goto loc_88135294;
		case 0x881352B0: goto loc_881352B0;
		case 0x881352BC: goto loc_881352BC;
		case 0x881352D8: goto loc_881352D8;
		case 0x881352E4: goto loc_881352E4;
		case 0x88135300: goto loc_88135300;
		case 0x8813530C: goto loc_8813530C;
		case 0x88135328: goto loc_88135328;
		case 0x881353F8: goto loc_881353F8;
		case 0x881354A0: goto loc_881354A0;
		case 0x88135524: goto loc_88135524;
		case 0x88135570: goto loc_88135570;
		case 0x881355D4: goto loc_881355D4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x88134A88;
	__savegprlr_16(ctx, base);
loc_88134A88:
	// stfd f31,-144(r1)
	ctx.current_instruction = 0x88134A88;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x88134A8C;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
	// bl 0x88134418
	ctx.lr = 0x88134AAC;
	sub_88134418(ctx, base);
loc_88134AAC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x88134cfc
	if (ctx.cr6.eq) goto loc_88134CFC;
	// lwz r11,24(r25)
	ctx.current_instruction = 0x88134AB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x88134ad8
	if (!ctx.cr6.eq) goto loc_88134AD8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88134cfc
	if (ctx.cr6.eq) goto loc_88134CFC;
	// lwz r16,28(r25)
	ctx.current_instruction = 0x88134AC8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r25.u32 + 28);
	// lwz r24,40(r25)
	ctx.current_instruction = 0x88134ACC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// lwz r10,32(r25)
	ctx.current_instruction = 0x88134AD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 32);
	// b 0x88134aec
	goto loc_88134AEC;
loc_88134AD8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x88134cfc
	if (ctx.cr6.eq) goto loc_88134CFC;
	// lwz r16,4(r30)
	ctx.current_instruction = 0x88134AE0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r24,18(r30)
	ctx.current_instruction = 0x88134AE4;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r30.u32 + 18);
	// lhz r10,2(r30)
	ctx.current_instruction = 0x88134AE8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
loc_88134AEC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x88134cfc
	if (!ctx.cr6.gt) goto loc_88134CFC;
	// subfic r11,r24,24
	ctx.xer.ca = ctx.r24.u32 <= 24;
	ctx.r11.u64 = static_cast<uint64_t>(24) - ctx.r24.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// stw r11,124(r31)
	ctx.current_instruction = 0x88134AFC;
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88134b28
	if (ctx.cr6.lt) goto loc_88134B28;
	// slw r11,r18,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r11.u8 & 0x3F));
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,96(r1)
	ctx.current_instruction = 0x88134B10;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.current_instruction = 0x88134B14;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,128(r31)
	ctx.current_instruction = 0x88134B20;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// b 0x88134b54
	goto loc_88134B54;
loc_88134B28:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// slw r8,r18,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r11.u8 & 0x3F));
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lfs f0,6708(r9)
	ctx.current_instruction = 0x88134B38;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// std r7,96(r1)
	ctx.current_instruction = 0x88134B3C;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f13,96(r1)
	ctx.current_instruction = 0x88134B40;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f10,128(r31)
	ctx.current_instruction = 0x88134B50;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r31.u32 + 128, temp.u32);
loc_88134B54:
	// lwz r11,44(r25)
	ctx.current_instruction = 0x88134B54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 44);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r10,120(r31)
	ctx.current_instruction = 0x88134B5C;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r11,284(r31)
	ctx.current_instruction = 0x88134B60;
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// bne cr6,0x88134b74
	if (!ctx.cr6.eq) goto loc_88134B74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88134210
	ctx.lr = 0x88134B70;
	sub_88134210(ctx, base);
loc_88134B70:
	// b 0x88134dac
	goto loc_88134DAC;
loc_88134B74:
	// lwz r11,60(r26)
	ctx.current_instruction = 0x88134B74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88134cfc
	if (ctx.cr6.lt) goto loc_88134CFC;
	// lwz r11,64(r26)
	ctx.current_instruction = 0x88134B80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88134cfc
	if (ctx.cr6.lt) goto loc_88134CFC;
	// lwz r11,80(r26)
	ctx.current_instruction = 0x88134B8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88134cfc
	if (ctx.cr6.lt) goto loc_88134CFC;
	// lwz r11,84(r26)
	ctx.current_instruction = 0x88134B98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88134cfc
	if (ctx.cr6.lt) goto loc_88134CFC;
	// lwz r11,92(r26)
	ctx.current_instruction = 0x88134BA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88134cfc
	if (ctx.cr6.lt) goto loc_88134CFC;
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x88134BC0;
	sub_880547A0(ctx, base);
loc_88134BC0:
	// lwz r11,36(r31)
	ctx.current_instruction = 0x88134BC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r20,48(r31)
	ctx.current_instruction = 0x88134BC4;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88134bdc
	if (!ctx.cr6.eq) goto loc_88134BDC;
	// lwz r11,40(r31)
	ctx.current_instruction = 0x88134BD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88134d3c
	if (ctx.cr6.eq) goto loc_88134D3C;
loc_88134BDC:
	// lwz r10,48(r26)
	ctx.current_instruction = 0x88134BDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88134cfc
	if (ctx.cr6.eq) goto loc_88134CFC;
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88134BE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x88134cfc
	if (ctx.cr6.lt) goto loc_88134CFC;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lfd f13,0(r10)
	ctx.current_instruction = 0x88134BF8;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lfd f0,32696(r9)
	ctx.current_instruction = 0x88134BFC;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 32696);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x88134cfc
	if (!ctx.cr6.eq) goto loc_88134CFC;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfd f31,1488(r8)
	ctx.current_instruction = 0x88134C14;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r8.u32 + 1488);
	// lfd f0,-16(r7)
	ctx.current_instruction = 0x88134C18;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + -16);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x88134cfc
	if (!ctx.cr6.eq) goto loc_88134CFC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x88125e60
	ctx.lr = 0x88134C34;
	sub_88125E60(ctx, base);
loc_88134C34:
	// stw r3,48(r31)
	ctx.current_instruction = 0x88134C34;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88134c58
	if (!ctx.cr6.eq) goto loc_88134C58;
loc_88134C40:
	// lis r17,-32761
	ctx.r17.s64 = -2147024896;
	// ori r17,r17,14
	ctx.r17.u64 = ctx.r17.u64 | 14;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.current_instruction = 0x88134C50;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
loc_88134C58:
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88134C58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88134d3c
	if (!ctx.cr6.gt) goto loc_88134D3C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
loc_88134C74:
	// lwz r10,48(r26)
	ctx.current_instruction = 0x88134C74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// lwz r8,48(r31)
	ctx.current_instruction = 0x88134C78;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lfdx f0,r11,r10
	ctx.current_instruction = 0x88134C7C;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// stfdx f0,r8,r9
	ctx.current_instruction = 0x88134C80;
	REX_STORE_U64(ctx.r8.u32 + ctx.r9.u32, ctx.f0.u64);
	// lwz r10,48(r31)
	ctx.current_instruction = 0x88134C84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,48(r26)
	ctx.current_instruction = 0x88134C8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f13,8(r6)
	ctx.current_instruction = 0x88134C94;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// stfd f13,8(r7)
	ctx.current_instruction = 0x88134C98;
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.f13.u64);
	// lwz r4,52(r31)
	ctx.current_instruction = 0x88134C9C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r10,-2
	ctx.r3.s64 = ctx.r10.s64 + -2;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x88134d14
	if (ctx.cr6.eq) goto loc_88134D14;
	// lwz r10,48(r26)
	ctx.current_instruction = 0x88134CB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r6,48(r31)
	ctx.current_instruction = 0x88134CB8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lfdx f0,r11,r10
	ctx.current_instruction = 0x88134CC8;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// lfdx f13,r8,r10
	ctx.current_instruction = 0x88134CCC;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// lfd f12,8(r7)
	ctx.current_instruction = 0x88134CD0;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// fsub f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 - ctx.f0.f64;
	// lfd f10,8(r4)
	ctx.current_instruction = 0x88134CD8;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// fsub f9,f10,f12
	ctx.f9.f64 = ctx.f10.f64 - ctx.f12.f64;
	// fdiv f8,f9,f11
	ctx.f8.f64 = ctx.f9.f64 / ctx.f11.f64;
	// stfd f8,16(r3)
	ctx.current_instruction = 0x88134CE4;
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.f8.u64);
	// lwz r10,48(r26)
	ctx.current_instruction = 0x88134CE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// lfdx f7,r8,r10
	ctx.current_instruction = 0x88134CEC;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// lfdx f6,r11,r10
	ctx.current_instruction = 0x88134CF0;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// fcmpu cr6,f7,f6
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// bge cr6,0x88134d20
	if (!ctx.cr6.lt) goto loc_88134D20;
loc_88134CFC:
	// lis r17,-32761
	ctx.r17.s64 = -2147024896;
	// ori r17,r17,87
	ctx.r17.u64 = ctx.r17.u64 | 87;
loc_88134D04:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.current_instruction = 0x88134D0C;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
loc_88134D14:
	// lwz r10,48(r31)
	ctx.current_instruction = 0x88134D14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfd f31,16(r10)
	ctx.current_instruction = 0x88134D1C;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.f31.u64);
loc_88134D20:
	// lwz r10,52(r31)
	ctx.current_instruction = 0x88134D20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88134c74
	if (ctx.cr6.lt) goto loc_88134C74;
loc_88134D3C:
	// lwz r11,112(r31)
	ctx.current_instruction = 0x88134D3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88134d5c
	if (ctx.cr6.eq) goto loc_88134D5C;
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r18,56(r31)
	ctx.current_instruction = 0x88134D4C;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r18.u32);
	// li r10,500
	ctx.r10.s64 = 500;
	// stw r11,60(r31)
	ctx.current_instruction = 0x88134D54;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,64(r31)
	ctx.current_instruction = 0x88134D58;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
loc_88134D5C:
	// lwz r11,36(r26)
	ctx.current_instruction = 0x88134D5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88134d84
	if (!ctx.cr6.eq) goto loc_88134D84;
	// lwz r11,40(r26)
	ctx.current_instruction = 0x88134D68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88134d84
	if (!ctx.cr6.eq) goto loc_88134D84;
	// lwz r11,44(r26)
	ctx.current_instruction = 0x88134D74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// beq cr6,0x88134d88
	if (ctx.cr6.eq) goto loc_88134D88;
loc_88134D84:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_88134D88:
	// lwz r10,100(r31)
	ctx.current_instruction = 0x88134D88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,36(r31)
	ctx.current_instruction = 0x88134D8C;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88134d9c
	if (ctx.cr6.eq) goto loc_88134D9C;
	// stw r18,96(r31)
	ctx.current_instruction = 0x88134D98;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r18.u32);
loc_88134D9C:
	// lwz r11,104(r31)
	ctx.current_instruction = 0x88134D9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88134dac
	if (!ctx.cr6.eq) goto loc_88134DAC;
	// stw r20,32(r31)
	ctx.current_instruction = 0x88134DA8;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r20.u32);
loc_88134DAC:
	// lwz r11,68(r31)
	ctx.current_instruction = 0x88134DAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88134dd4
	if (ctx.cr6.eq) goto loc_88134DD4;
	// lwz r11,120(r31)
	ctx.current_instruction = 0x88134DB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x88134dd4
	if (ctx.cr6.eq) goto loc_88134DD4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88134dd4
	if (ctx.cr6.eq) goto loc_88134DD4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x88134cfc
	if (!ctx.cr6.eq) goto loc_88134CFC;
loc_88134DD4:
	// lwz r11,72(r31)
	ctx.current_instruction = 0x88134DD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88134dec
	if (ctx.cr6.eq) goto loc_88134DEC;
	// lwz r11,76(r31)
	ctx.current_instruction = 0x88134DE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88134cfc
	if (!ctx.cr6.eq) goto loc_88134CFC;
loc_88134DEC:
	// lwz r11,120(r31)
	ctx.current_instruction = 0x88134DEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x88134DF8;
	sub_88125E60(ctx, base);
loc_88134DF8:
	// stw r3,288(r31)
	ctx.current_instruction = 0x88134DF8;
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134c40
	if (ctx.cr6.eq) goto loc_88134C40;
	// lwz r11,120(r31)
	ctx.current_instruction = 0x88134E04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x88134E10;
	sub_88125E60(ctx, base);
loc_88134E10:
	// stw r3,292(r31)
	ctx.current_instruction = 0x88134E10;
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134c40
	if (ctx.cr6.eq) goto loc_88134C40;
	// lwz r11,60(r31)
	ctx.current_instruction = 0x88134E1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r19,1000
	ctx.r19.s64 = 1000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r29,r10,32644
	ctx.r29.s64 = ctx.r10.s64 + 32644;
	// beq cr6,0x88134e54
	if (ctx.cr6.eq) goto loc_88134E54;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r16.s32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((ctx.r19.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r11.s32 / ctx.r19.s32 : 0);
	// bl 0x881340b8
	ctx.lr = 0x88134E44;
	sub_881340B8(ctx, base);
loc_88134E44:
	// lis r30,16384
	ctx.r30.s64 = 1073741824;
	// subf r10,r3,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r3.u64;
	// stw r10,176(r31)
	ctx.current_instruction = 0x88134E4C;
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// b 0x88134e5c
	goto loc_88134E5C;
loc_88134E54:
	// lis r30,16384
	ctx.r30.s64 = 1073741824;
	// stw r30,176(r31)
	ctx.current_instruction = 0x88134E58;
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
loc_88134E5C:
	// lwz r27,176(r31)
	ctx.current_instruction = 0x88134E5C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,64(r31)
	ctx.current_instruction = 0x88134E60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// subf r10,r27,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,184(r31)
	ctx.current_instruction = 0x88134E6C;
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// beq cr6,0x88134e90
	if (ctx.cr6.eq) goto loc_88134E90;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r16.s32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((ctx.r19.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r11.s32 / ctx.r19.s32 : 0);
	// bl 0x881340b8
	ctx.lr = 0x88134E84;
	sub_881340B8(ctx, base);
loc_88134E84:
	// subf r10,r3,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r3.u64;
	// stw r10,180(r31)
	ctx.current_instruction = 0x88134E88;
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// b 0x88134e94
	goto loc_88134E94;
loc_88134E90:
	// stw r30,180(r31)
	ctx.current_instruction = 0x88134E90;
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
loc_88134E94:
	// lwz r28,180(r31)
	ctx.current_instruction = 0x88134E94;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,80(r31)
	ctx.current_instruction = 0x88134E98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r28,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,188(r31)
	ctx.current_instruction = 0x88134EA4;
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// beq cr6,0x88134ec8
	if (ctx.cr6.eq) goto loc_88134EC8;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r16.s32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((ctx.r19.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r11.s32 / ctx.r19.s32 : 0);
	// bl 0x881340b8
	ctx.lr = 0x88134EBC;
	sub_881340B8(ctx, base);
loc_88134EBC:
	// subf r10,r3,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r3.u64;
	// stw r10,148(r31)
	ctx.current_instruction = 0x88134EC0;
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// b 0x88134ecc
	goto loc_88134ECC;
loc_88134EC8:
	// stw r30,148(r31)
	ctx.current_instruction = 0x88134EC8;
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
loc_88134ECC:
	// lwz r10,148(r31)
	ctx.current_instruction = 0x88134ECC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,84(r31)
	ctx.current_instruction = 0x88134ED0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// subf r9,r10,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,156(r31)
	ctx.current_instruction = 0x88134EDC;
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// beq cr6,0x88134f00
	if (ctx.cr6.eq) goto loc_88134F00;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r16.s32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((ctx.r19.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r11.s32 / ctx.r19.s32 : 0);
	// bl 0x881340b8
	ctx.lr = 0x88134EF4;
	sub_881340B8(ctx, base);
loc_88134EF4:
	// subf r10,r3,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r3.u64;
	// stw r10,152(r31)
	ctx.current_instruction = 0x88134EF8;
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// b 0x88134f04
	goto loc_88134F04;
loc_88134F00:
	// stw r30,152(r31)
	ctx.current_instruction = 0x88134F00;
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
loc_88134F04:
	// lwz r11,152(r31)
	ctx.current_instruction = 0x88134F04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// divw r10,r30,r27
	ctx.r10.u64 = uint32_t((ctx.r27.s32 && !(ctx.r30.s32 == INT32_MIN && ctx.r27.s32 == -1)) ? ctx.r30.s32 / ctx.r27.s32 : 0);
	// divw r9,r30,r28
	ctx.r9.u64 = uint32_t((ctx.r28.s32 && !(ctx.r30.s32 == INT32_MIN && ctx.r28.s32 == -1)) ? ctx.r30.s32 / ctx.r28.s32 : 0);
	// subf r8,r11,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r11.u64;
	// stw r10,164(r31)
	ctx.current_instruction = 0x88134F14;
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// stw r9,168(r31)
	ctx.current_instruction = 0x88134F18;
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// twllei r27,0
	if (ctx.r27.s32 == 0 || ctx.r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r8,160(r31)
	ctx.current_instruction = 0x88134F20;
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// twllei r28,0
	if (ctx.r28.s32 == 0 || ctx.r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r7,4(r25)
	ctx.current_instruction = 0x88134F28;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x88134f44
	if (!ctx.cr6.eq) goto loc_88134F44;
	// lwz r11,16(r25)
	ctx.current_instruction = 0x88134F34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x88134f44
	if (ctx.cr6.gt) goto loc_88134F44;
	// stw r20,8(r31)
	ctx.current_instruction = 0x88134F40;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
loc_88134F44:
	// lwz r11,0(r25)
	ctx.current_instruction = 0x88134F44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x88134f64
	if (!ctx.cr6.eq) goto loc_88134F64;
	// lwz r11,8(r25)
	ctx.current_instruction = 0x88134F50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x88134f64
	if (ctx.cr6.gt) goto loc_88134F64;
	// stw r18,0(r25)
	ctx.current_instruction = 0x88134F5C;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r18.u32);
	// stw r20,8(r25)
	ctx.current_instruction = 0x88134F60;
	REX_STORE_U32(ctx.r25.u32 + 8, ctx.r20.u32);
loc_88134F64:
	// lwz r11,4(r26)
	ctx.current_instruction = 0x88134F64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x88134f90
	if (!ctx.cr6.eq) goto loc_88134F90;
	// lwz r10,16(r26)
	ctx.current_instruction = 0x88134F70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// addi r11,r26,16
	ctx.r11.s64 = ctx.r26.s64 + 16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x88134f90
	if (ctx.cr6.gt) goto loc_88134F90;
	// lwz r10,4(r25)
	ctx.current_instruction = 0x88134F80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// stw r10,4(r26)
	ctx.current_instruction = 0x88134F84;
	REX_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// ld r9,16(r25)
	ctx.current_instruction = 0x88134F88;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r25.u32 + 16);
	// std r9,0(r11)
	ctx.current_instruction = 0x88134F8C;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
loc_88134F90:
	// lwz r11,0(r26)
	ctx.current_instruction = 0x88134F90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x88134fbc
	if (!ctx.cr6.eq) goto loc_88134FBC;
	// lwz r10,24(r26)
	ctx.current_instruction = 0x88134F9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// addi r11,r26,24
	ctx.r11.s64 = ctx.r26.s64 + 24;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x88134fbc
	if (ctx.cr6.gt) goto loc_88134FBC;
	// lwz r10,0(r25)
	ctx.current_instruction = 0x88134FAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// stw r10,0(r26)
	ctx.current_instruction = 0x88134FB0;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// ld r9,8(r25)
	ctx.current_instruction = 0x88134FB4;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r25.u32 + 8);
	// std r9,0(r11)
	ctx.current_instruction = 0x88134FB8;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
loc_88134FBC:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88134FBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88135070
	if (ctx.cr6.eq) goto loc_88135070;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r5,4(r25)
	ctx.current_instruction = 0x88134FCC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r4,16(r25)
	ctx.current_instruction = 0x88134FD4;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r25.u32 + 16);
	// bl 0x88134148
	ctx.lr = 0x88134FDC;
	sub_88134148(ctx, base);
loc_88134FDC:
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88134d04
	if (ctx.cr6.lt) goto loc_88134D04;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r5,0(r25)
	ctx.current_instruction = 0x88134FEC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// ld r4,8(r25)
	ctx.current_instruction = 0x88134FF4;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r25.u32 + 8);
	// bl 0x88134148
	ctx.lr = 0x88134FFC;
	sub_88134148(ctx, base);
loc_88134FFC:
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88134d04
	if (ctx.cr6.lt) goto loc_88134D04;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r5,4(r26)
	ctx.current_instruction = 0x8813500C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r4,16(r26)
	ctx.current_instruction = 0x88135014;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r26.u32 + 16);
	// bl 0x88134148
	ctx.lr = 0x8813501C;
	sub_88134148(ctx, base);
loc_8813501C:
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88134d04
	if (ctx.cr6.lt) goto loc_88134D04;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r5,0(r26)
	ctx.current_instruction = 0x8813502C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r4,24(r26)
	ctx.current_instruction = 0x88135034;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r26.u32 + 24);
	// bl 0x88134148
	ctx.lr = 0x8813503C;
	sub_88134148(ctx, base);
loc_8813503C:
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88134d04
	if (ctx.cr6.lt) goto loc_88134D04;
	// lwz r26,84(r1)
	ctx.current_instruction = 0x88135048;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r25,80(r1)
	ctx.current_instruction = 0x8813504C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,96(r1)
	ctx.current_instruction = 0x88135050;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,88(r1)
	ctx.current_instruction = 0x88135054;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x88135068
	if (ctx.cr6.lt) goto loc_88135068;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88135080
	if (!ctx.cr6.lt) goto loc_88135080;
loc_88135068:
	// stw r20,8(r31)
	ctx.current_instruction = 0x88135068;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
	// b 0x88135080
	goto loc_88135080;
loc_88135070:
	// lwz r25,80(r1)
	ctx.current_instruction = 0x88135070;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r26,84(r1)
	ctx.current_instruction = 0x88135074;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,96(r1)
	ctx.current_instruction = 0x88135078;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,88(r1)
	ctx.current_instruction = 0x8813507C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_88135080:
	// lwz r10,44(r31)
	ctx.current_instruction = 0x88135080;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881350a4
	if (ctx.cr6.eq) goto loc_881350A4;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8813508C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881350a8
	if (ctx.cr6.eq) goto loc_881350A8;
	// lwz r10,104(r31)
	ctx.current_instruction = 0x88135098;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881350a8
	if (ctx.cr6.eq) goto loc_881350A8;
loc_881350A4:
	// stw r18,256(r31)
	ctx.current_instruction = 0x881350A4;
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r18.u32);
loc_881350A8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881350A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881351b0
	if (ctx.cr6.eq) goto loc_881351B0;
	// lwz r10,112(r31)
	ctx.current_instruction = 0x881350B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881351b0
	if (ctx.cr6.eq) goto loc_881351B0;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x881350e8
	if (!ctx.cr6.eq) goto loc_881350E8;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x881350e8
	if (!ctx.cr6.eq) goto loc_881350E8;
	// addis r10,r25,192
	ctx.r10.s64 = ctx.r25.s64 + 12582912;
	// xoris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r8,r10,r20
	ctx.r8.u64 = ctx.r20.u64 - ctx.r10.u64;
	// addc r7,r8,r9
	ctx.xer.ca = ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32;
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 & ctx.r10.u64;
loc_881350E8:
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// subf r7,r25,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r25.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r7,r26
	ctx.r10.u64 = ctx.r7.u64 + ctx.r26.u64;
	// subf r4,r8,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// rlwinm r5,r10,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addme r3,r5
	temp.u8 = (ctx.r5.u32 + 0xFFFFFFFFu < ctx.r5.u32) | (ctx.r5.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r5.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// li r6,2
	ctx.r6.s64 = 2;
	// and r5,r3,r10
	ctx.r5.u64 = ctx.r3.u64 & ctx.r10.u64;
	// stw r6,256(r31)
	ctx.current_instruction = 0x8813511C;
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// srawi r10,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// xoris r3,r11,32768
	ctx.r3.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r9,r11,r20
	ctx.r9.u64 = ctx.r20.u64 - ctx.r11.u64;
	// xoris r6,r10,32768
	ctx.r6.u64 = ctx.r10.u64 ^ 2147483648;
	// addc r5,r9,r3
	ctx.xer.ca = ctx.r9.u32 + ctx.r3.u32 < ctx.r9.u32;
	ctx.r5.u64 = ctx.r9.u64 + ctx.r3.u64;
	// subf r5,r10,r20
	ctx.r5.u64 = ctx.r20.u64 - ctx.r10.u64;
	// subf r9,r25,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r25.u64;
	// subfe r4,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addc r3,r5,r6
	ctx.xer.ca = ctx.r5.u32 + ctx.r6.u32 < ctx.r5.u32;
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfic r3,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r3.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// and r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 & ctx.r10.u64;
	// addme r3,r6
	temp.u8 = (ctx.r6.u32 + 0xFFFFFFFFu < ctx.r6.u32) | (ctx.r6.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r6.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// stw r5,88(r1)
	ctx.current_instruction = 0x88135168;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// and r10,r3,r9
	ctx.r10.u64 = ctx.r3.u64 & ctx.r9.u64;
	// stw r11,96(r1)
	ctx.current_instruction = 0x88135170;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// xoris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r8,r11,r20
	ctx.r8.u64 = ctx.r20.u64 - ctx.r11.u64;
	// xoris r7,r10,32768
	ctx.r7.u64 = ctx.r10.u64 ^ 2147483648;
	// addc r6,r8,r9
	ctx.xer.ca = ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32;
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r4,r10,r20
	ctx.r4.u64 = ctx.r20.u64 - ctx.r10.u64;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addc r9,r4,r7
	ctx.xer.ca = ctx.r4.u32 + ctx.r7.u32 < ctx.r4.u32;
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// and r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 & ctx.r11.u64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,100(r1)
	ctx.current_instruction = 0x881351A4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,92(r1)
	ctx.current_instruction = 0x881351AC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
loc_881351B0:
	// lwz r11,256(r31)
	ctx.current_instruction = 0x881351B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88135258
	if (!ctx.cr6.gt) goto loc_88135258;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x881351C4;
	sub_88125E60(ctx, base);
loc_881351C4:
	// stw r3,192(r31)
	ctx.current_instruction = 0x881351C4;
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134c40
	if (ctx.cr6.eq) goto loc_88134C40;
	// lwz r11,256(r31)
	ctx.current_instruction = 0x881351D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x881351E0;
	sub_88052D90(ctx, base);
loc_881351E0:
	// lwz r10,256(r31)
	ctx.current_instruction = 0x881351E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x881351EC;
	sub_88125E60(ctx, base);
loc_881351EC:
	// stw r3,196(r31)
	ctx.current_instruction = 0x881351EC;
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134c40
	if (ctx.cr6.eq) goto loc_88134C40;
	// lwz r11,256(r31)
	ctx.current_instruction = 0x881351F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88135208;
	sub_88052D90(ctx, base);
loc_88135208:
	// lwz r10,256(r31)
	ctx.current_instruction = 0x88135208;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x88135214;
	sub_88125E60(ctx, base);
loc_88135214:
	// stw r3,296(r31)
	ctx.current_instruction = 0x88135214;
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134c40
	if (ctx.cr6.eq) goto loc_88134C40;
	// lwz r11,256(r31)
	ctx.current_instruction = 0x88135220;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88135230;
	sub_88052D90(ctx, base);
loc_88135230:
	// lwz r10,256(r31)
	ctx.current_instruction = 0x88135230;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x8813523C;
	sub_88125E60(ctx, base);
loc_8813523C:
	// stw r3,280(r31)
	ctx.current_instruction = 0x8813523C;
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134c40
	if (ctx.cr6.eq) goto loc_88134C40;
	// lwz r11,256(r31)
	ctx.current_instruction = 0x88135248;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88135258;
	sub_88052D90(ctx, base);
loc_88135258:
	// lwz r11,108(r31)
	ctx.current_instruction = 0x88135258;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88135328
	if (ctx.cr6.eq) goto loc_88135328;
	// lwz r11,44(r31)
	ctx.current_instruction = 0x88135264;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88135288
	if (ctx.cr6.eq) goto loc_88135288;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88135270;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88135328
	if (ctx.cr6.eq) goto loc_88135328;
	// lwz r11,104(r31)
	ctx.current_instruction = 0x8813527C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88135328
	if (ctx.cr6.eq) goto loc_88135328;
loc_88135288:
	// lwz r11,256(r31)
	ctx.current_instruction = 0x88135288;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x88135294;
	sub_88125E60(ctx, base);
loc_88135294:
	// stw r3,260(r31)
	ctx.current_instruction = 0x88135294;
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134c40
	if (ctx.cr6.eq) goto loc_88134C40;
	// lwz r11,256(r31)
	ctx.current_instruction = 0x881352A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x881352B0;
	sub_88052D90(ctx, base);
loc_881352B0:
	// lwz r10,256(r31)
	ctx.current_instruction = 0x881352B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x881352BC;
	sub_88125E60(ctx, base);
loc_881352BC:
	// stw r3,268(r31)
	ctx.current_instruction = 0x881352BC;
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134c40
	if (ctx.cr6.eq) goto loc_88134C40;
	// lwz r11,256(r31)
	ctx.current_instruction = 0x881352C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x881352D8;
	sub_88052D90(ctx, base);
loc_881352D8:
	// lwz r10,256(r31)
	ctx.current_instruction = 0x881352D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x881352E4;
	sub_88125E60(ctx, base);
loc_881352E4:
	// stw r3,264(r31)
	ctx.current_instruction = 0x881352E4;
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134c40
	if (ctx.cr6.eq) goto loc_88134C40;
	// lwz r11,256(r31)
	ctx.current_instruction = 0x881352F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88135300;
	sub_88052D90(ctx, base);
loc_88135300:
	// lwz r10,256(r31)
	ctx.current_instruction = 0x88135300;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x8813530C;
	sub_88125E60(ctx, base);
loc_8813530C:
	// stw r3,272(r31)
	ctx.current_instruction = 0x8813530C;
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134c40
	if (ctx.cr6.eq) goto loc_88134C40;
	// lwz r11,256(r31)
	ctx.current_instruction = 0x88135318;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88135328;
	sub_88052D90(ctx, base);
loc_88135328:
	// lwz r10,256(r31)
	ctx.current_instruction = 0x88135328;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x88135354
	if (!ctx.cr6.gt) goto loc_88135354;
	// lwz r11,108(r31)
	ctx.current_instruction = 0x88135334;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88135354
	if (!ctx.cr6.eq) goto loc_88135354;
	// lis r17,-32764
	ctx.r17.s64 = -2147221504;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.current_instruction = 0x8813534C;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
loc_88135354:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r9,1023
	ctx.r9.s64 = 67043328;
	// lis r23,-1024
	ctx.r23.s64 = -67108864;
	// ori r21,r9,65535
	ctx.r21.u64 = ctx.r9.u64 | 65535;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r22,r11,32348
	ctx.r22.s64 = ctx.r11.s64 + 32348;
	// ble cr6,0x881354c0
	if (!ctx.cr6.gt) goto loc_881354C0;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_8813537C:
	// lwz r11,196(r31)
	ctx.current_instruction = 0x8813537C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// stw r20,200(r31)
	ctx.current_instruction = 0x88135380;
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r20.u32);
	// stw r20,208(r31)
	ctx.current_instruction = 0x88135384;
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r20.u32);
	// stw r20,204(r31)
	ctx.current_instruction = 0x88135388;
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r20.u32);
	// stwx r20,r30,r11
	ctx.current_instruction = 0x8813538C;
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r20.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88135390;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88135478
	if (ctx.cr6.eq) goto loc_88135478;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r30,r10
	ctx.current_instruction = 0x881353A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r8,r30,r9
	ctx.current_instruction = 0x881353A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & ctx.r11.u64;
	// and r29,r6,r8
	ctx.r29.u64 = ctx.r6.u64 & ctx.r8.u64;
	// subf r11,r25,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r25.u64;
	// stwx r5,r30,r10
	ctx.current_instruction = 0x881353C0;
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r5.u32);
	// stwx r29,r30,r9
	ctx.current_instruction = 0x881353C4;
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r29.u32);
	// subf r28,r26,r29
	ctx.r28.u64 = ctx.r29.u64 - ctx.r26.u64;
	// stw r11,200(r31)
	ctx.current_instruction = 0x881353CC;
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x881353e4
	if (!ctx.cr6.lt) goto loc_881353E4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x881353f0
	goto loc_881353F0;
loc_881353E4:
	// cmpw cr6,r4,r21
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r21.s32, ctx.xer);
	// ble cr6,0x881353f0
	if (!ctx.cr6.gt) goto loc_881353F0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_881353F0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x881340b8
	ctx.lr = 0x881353F8;
	sub_881340B8(ctx, base);
loc_881353F8:
	// lwz r11,192(r31)
	ctx.current_instruction = 0x881353F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// stwx r3,r11,r30
	ctx.current_instruction = 0x881353FC;
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r10,200(r31)
	ctx.current_instruction = 0x88135400;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// cmpwi cr6,r10,-10485
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -10485, ctx.xer);
	// ble cr6,0x8813541c
	if (!ctx.cr6.gt) goto loc_8813541C;
	// cmpwi cr6,r10,10485
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10485, ctx.xer);
	// bge cr6,0x8813541c
	if (!ctx.cr6.lt) goto loc_8813541C;
	// cmpwi cr6,r28,-10485
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -10485, ctx.xer);
	// bgt cr6,0x88135420
	if (ctx.cr6.gt) goto loc_88135420;
loc_8813541C:
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
loc_88135420:
	// add r11,r10,r26
	ctx.r11.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x88135478
	if (ctx.cr6.lt) goto loc_88135478;
	// lwz r11,32(r31)
	ctx.current_instruction = 0x8813542C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// subf r10,r10,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r10.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi. r10,r9,10
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,208(r31)
	ctx.current_instruction = 0x8813543C;
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// bne 0x8813544c
	if (!ctx.cr0.eq) goto loc_8813544C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x88135468
	goto loc_88135468;
loc_8813544C:
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_88135468:
	// lwz r10,196(r31)
	ctx.current_instruction = 0x88135468;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r9,104(r31)
	ctx.current_instruction = 0x8813546C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// stw r11,204(r31)
	ctx.current_instruction = 0x88135470;
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stwx r9,r30,r10
	ctx.current_instruction = 0x88135474;
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r9.u32);
loc_88135478:
	// lwz r11,44(r31)
	ctx.current_instruction = 0x88135478;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88135494
	if (ctx.cr6.eq) goto loc_88135494;
	// lwz r11,196(r31)
	ctx.current_instruction = 0x88135484;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// lwzx r10,r30,r11
	ctx.current_instruction = 0x88135488;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881354ac
	if (ctx.cr6.eq) goto loc_881354AC;
loc_88135494:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881347d8
	ctx.lr = 0x881354A0;
	sub_881347D8(ctx, base);
loc_881354A0:
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88134d04
	if (ctx.cr6.lt) goto loc_88134D04;
loc_881354AC:
	// lwz r11,256(r31)
	ctx.current_instruction = 0x881354AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8813537c
	if (ctx.cr6.lt) goto loc_8813537C;
loc_881354C0:
	// lis r11,127
	ctx.r11.s64 = 8323072;
	// lwz r10,256(r31)
	ctx.current_instruction = 0x881354C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// stw r24,8(r31)
	ctx.current_instruction = 0x881354C8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// ori r29,r11,65534
	ctx.r29.u64 = ctx.r11.u64 | 65534;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,276(r31)
	ctx.current_instruction = 0x881354D8;
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r29.u32);
	// ble cr6,0x8813554c
	if (!ctx.cr6.gt) goto loc_8813554C;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_881354E4:
	// lwz r11,280(r31)
	ctx.current_instruction = 0x881354E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// stwx r29,r30,r11
	ctx.current_instruction = 0x881354E8;
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881354EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88135538
	if (ctx.cr6.eq) goto loc_88135538;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwzx r4,r30,r11
	ctx.current_instruction = 0x881354FC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpw cr6,r4,r23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x88135510
	if (!ctx.cr6.lt) goto loc_88135510;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x8813551c
	goto loc_8813551C;
loc_88135510:
	// cmpw cr6,r4,r21
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r21.s32, ctx.xer);
	// ble cr6,0x8813551c
	if (!ctx.cr6.gt) goto loc_8813551C;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_8813551C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x881340b8
	ctx.lr = 0x88135524;
	sub_881340B8(ctx, base);
loc_88135524:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,280(r31)
	ctx.current_instruction = 0x88135528;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// mulld r9,r11,r29
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r29.u64);
	// sradi r8,r9,20
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s64 >> 20;
	// stwx r8,r30,r10
	ctx.current_instruction = 0x88135534;
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u32);
loc_88135538:
	// lwz r11,256(r31)
	ctx.current_instruction = 0x88135538;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881354e4
	if (ctx.cr6.lt) goto loc_881354E4;
loc_8813554C:
	// lwz r11,44(r31)
	ctx.current_instruction = 0x8813554C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881355b8
	if (ctx.cr6.eq) goto loc_881355B8;
	// lwz r11,36(r31)
	ctx.current_instruction = 0x8813555C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813557c
	if (ctx.cr6.eq) goto loc_8813557C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88134a20
	ctx.lr = 0x88135570;
	sub_88134A20(ctx, base);
loc_88135570:
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88134d04
	if (ctx.cr6.lt) goto loc_88134D04;
loc_8813557C:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x8813557C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881355b8
	if (!ctx.cr6.eq) goto loc_881355B8;
	// lwz r11,256(r31)
	ctx.current_instruction = 0x88135588;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881355b8
	if (!ctx.cr6.gt) goto loc_881355B8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8813559C:
	// lwz r9,192(r31)
	ctx.current_instruction = 0x8813559C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r30,r11,r9
	ctx.current_instruction = 0x881355A4;
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,256(r31)
	ctx.current_instruction = 0x881355AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8813559c
	if (ctx.cr6.lt) goto loc_8813559C;
loc_881355B8:
	// lwz r11,108(r31)
	ctx.current_instruction = 0x881355B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881355dc
	if (ctx.cr6.eq) goto loc_881355DC;
	// lwz r3,48(r31)
	ctx.current_instruction = 0x881355C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881355d4
	if (ctx.cr6.eq) goto loc_881355D4;
	// bl 0x88125e70
	ctx.lr = 0x881355D4;
	sub_88125E70(ctx, base);
loc_881355D4:
	// stw r20,48(r31)
	ctx.current_instruction = 0x881355D4;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r20.u32);
	// stw r20,52(r31)
	ctx.current_instruction = 0x881355D8;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r20.u32);
loc_881355DC:
	// lwz r11,88(r31)
	ctx.current_instruction = 0x881355DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// stw r20,144(r31)
	ctx.current_instruction = 0x881355E0;
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r20.u32);
	// stw r30,172(r31)
	ctx.current_instruction = 0x881355E4;
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r20,216(r31)
	ctx.current_instruction = 0x881355EC;
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r20.u32);
	// beq cr6,0x88135608
	if (ctx.cr6.eq) goto loc_88135608;
	// lwz r11,92(r31)
	ctx.current_instruction = 0x881355F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// mullw r10,r11,r16
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r16.s32);
	// divw r9,r10,r19
	ctx.r9.u64 = uint32_t((ctx.r19.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r10.s32 / ctx.r19.s32 : 0);
	// stw r9,212(r31)
	ctx.current_instruction = 0x88135600;
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// b 0x8813560c
	goto loc_8813560C;
loc_88135608:
	// stw r20,212(r31)
	ctx.current_instruction = 0x88135608;
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r20.u32);
loc_8813560C:
	// lwz r11,96(r31)
	ctx.current_instruction = 0x8813560C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88134d04
	if (ctx.cr6.eq) goto loc_88134D04;
	// lwz r10,100(r31)
	ctx.current_instruction = 0x88135618;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,212(r31)
	ctx.current_instruction = 0x8813561C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x88135640
	if (ctx.cr6.eq) goto loc_88135640;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// stw r7,228(r31)
	ctx.current_instruction = 0x8813563C;
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r7.u32);
loc_88135640:
	// stw r11,224(r31)
	ctx.current_instruction = 0x88135640;
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r20,220(r31)
	ctx.current_instruction = 0x88135648;
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r20.u32);
	// stw r20,236(r31)
	ctx.current_instruction = 0x8813564C;
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r20.u32);
	// stw r20,232(r31)
	ctx.current_instruction = 0x88135650;
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r20.u32);
	// beq cr6,0x88134d04
	if (ctx.cr6.eq) goto loc_88134D04;
	// stw r30,240(r31)
	ctx.current_instruction = 0x88135658;
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r30,244(r31)
	ctx.current_instruction = 0x88135660;
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r20,248(r31)
	ctx.current_instruction = 0x88135664;
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r20.u32);
	// stw r20,252(r31)
	ctx.current_instruction = 0x88135668;
	REX_STORE_U32(ctx.r31.u32 + 252, ctx.r20.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.current_instruction = 0x88135670;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814D358) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814D358;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814D358) {
			switch (rex_dispatch_address) {
				case 0x8814D3A4:
				case 0x8814D3B8:
				case 0x8814D3DC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814D358;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814D3A4: goto loc_8814D3A4;
		case 0x8814D3B8: goto loc_8814D3B8;
		case 0x8814D3DC: goto loc_8814D3DC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8814D35C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8814D360;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8814d384
	if (!ctx.cr6.eq) goto loc_8814D384;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8814D378;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8814D384:
	// lwz r11,15536(r3)
	ctx.current_instruction = 0x8814D384;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8814d3c8
	if (ctx.cr6.eq) goto loc_8814D3C8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8814d3c8
	if (ctx.cr6.eq) goto loc_8814D3C8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8814d3b4
	if (!ctx.cr6.eq) goto loc_8814D3B4;
	// bl 0x8815ecb0
	ctx.lr = 0x8814D3A4;
	sub_8815ECB0(ctx, base);
loc_8814D3A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8814D3A8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8814D3B4:
	// bl 0x8816fa58
	ctx.lr = 0x8814D3B8;
	sub_8816FA58(ctx, base);
loc_8814D3B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8814D3BC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8814D3C8:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x88163620
	ctx.lr = 0x8814D3DC;
	sub_88163620(ctx, base);
loc_8814D3DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8814D3E0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88150238) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88150238);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88150238;
	ctx.current_instruction = 0x88150238;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88150248
	if (!ctx.cr6.eq) goto loc_88150248;
	// li r3,-3
	ctx.r3.s64 = -3;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88150248:
	// lwz r11,736(r3)
	ctx.current_instruction = 0x88150248;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 736);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x8815024C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88150278
	if (ctx.cr6.eq) goto loc_88150278;
	// lwz r10,15364(r11)
	ctx.current_instruction = 0x88150258;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 15364);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88150278
	if (!ctx.cr6.eq) goto loc_88150278;
	// lwz r10,15432(r11)
	ctx.current_instruction = 0x88150264;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 15432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88150278
	if (!ctx.cr6.eq) goto loc_88150278;
	// li r3,-4
	ctx.r3.s64 = -4;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88150278:
	// lwz r10,15536(r11)
	ctx.current_instruction = 0x88150278;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 15536);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bge cr6,0x8815029c
	if (!ctx.cr6.lt) goto loc_8815029C;
	// lwz r10,14888(r11)
	ctx.current_instruction = 0x88150284;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14888);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881502cc
	if (ctx.cr6.eq) goto loc_881502CC;
	// lwz r10,14912(r11)
	ctx.current_instruction = 0x88150290;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14912);
	// lwz r11,14916(r11)
	ctx.current_instruction = 0x88150294;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14916);
	// b 0x881502d4
	goto loc_881502D4;
loc_8815029C:
	// lwz r10,21888(r11)
	ctx.current_instruction = 0x8815029C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x881502cc
	if (!ctx.cr6.eq) goto loc_881502CC;
	// lwz r10,14836(r11)
	ctx.current_instruction = 0x881502A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14836);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881502cc
	if (!ctx.cr6.gt) goto loc_881502CC;
	// ld r10,3632(r11)
	ctx.current_instruction = 0x881502B4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 3632);
	// cmpdi cr6,r10,1
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 1, ctx.xer);
	// ble cr6,0x881502cc
	if (!ctx.cr6.gt) goto loc_881502CC;
	// lwz r10,22084(r11)
	ctx.current_instruction = 0x881502C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22084);
	// lwz r11,22088(r11)
	ctx.current_instruction = 0x881502C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22088);
	// b 0x881502d4
	goto loc_881502D4;
loc_881502CC:
	// lwz r10,156(r11)
	ctx.current_instruction = 0x881502CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r11,160(r11)
	ctx.current_instruction = 0x881502D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
loc_881502D4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881502e0
	if (ctx.cr6.eq) goto loc_881502E0;
	// stw r10,0(r4)
	ctx.current_instruction = 0x881502DC;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_881502E0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x881502ec
	if (ctx.cr6.eq) goto loc_881502EC;
	// stw r11,0(r5)
	ctx.current_instruction = 0x881502E8;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_881502EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881519E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881519E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881519E8) {
			switch (rex_dispatch_address) {
				case 0x881519F0:
				case 0x88151A30:
				case 0x88151A54:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881519E8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881519F0: goto loc_881519F0;
		case 0x88151A30: goto loc_88151A30;
		case 0x88151A54: goto loc_88151A54;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881519F0;
	__savegprlr_29(ctx, base);
loc_881519F0:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881519F0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,6553
	ctx.r11.s64 = 429457408;
	// lis r10,6550
	ctx.r10.s64 = 429260800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,4643
	ctx.r9.u64 = ctx.r11.u64 | 4643;
	// ori r8,r10,276
	ctx.r8.u64 = ctx.r10.u64 | 276;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// std r9,0(r31)
	ctx.current_instruction = 0x88151A14;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r7,240(r30)
	ctx.current_instruction = 0x88151A20;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 240);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r7,180(r31)
	ctx.current_instruction = 0x88151A28;
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r7.u32);
	// bl 0x8815e550
	ctx.lr = 0x88151A30;
	sub_8815E550(ctx, base);
loc_88151A30:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88151a44
	if (ctx.cr6.eq) goto loc_88151A44;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88151A44:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88151828
	ctx.lr = 0x88151A54;
	sub_88151828(ctx, base);
loc_88151A54:
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// li r10,-2
	ctx.r10.s64 = -2;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88155690) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88155690;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88155690) {
			switch (rex_dispatch_address) {
				case 0x88155698:
				case 0x881556E0:
				case 0x8815578C:
				case 0x88155798:
				case 0x881557B0:
				case 0x8815580C:
				case 0x88155818:
				case 0x88155868:
				case 0x881558B4:
				case 0x881558FC:
				case 0x88155908:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88155690;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88155698: goto loc_88155698;
		case 0x881556E0: goto loc_881556E0;
		case 0x8815578C: goto loc_8815578C;
		case 0x88155798: goto loc_88155798;
		case 0x881557B0: goto loc_881557B0;
		case 0x8815580C: goto loc_8815580C;
		case 0x88155818: goto loc_88155818;
		case 0x88155868: goto loc_88155868;
		case 0x881558B4: goto loc_881558B4;
		case 0x881558FC: goto loc_881558FC;
		case 0x88155908: goto loc_88155908;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x88155698;
	__savegprlr_20(ctx, base);
loc_88155698:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x88155698;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,736(r3)
	ctx.current_instruction = 0x8815569C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 736);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,24688(r31)
	ctx.current_instruction = 0x881556B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24688);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r10,20472(r31)
	ctx.current_instruction = 0x881556BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20472);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// addi r20,r11,8
	ctx.r20.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881556f4
	if (!ctx.cr6.eq) goto loc_881556F4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x881ec8b0
	ctx.lr = 0x881556E0;
	sub_881EC8B0(ctx, base);
loc_881556E0:
	// ld r11,20448(r31)
	ctx.current_instruction = 0x881556E0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 20448);
	// ld r10,104(r1)
	ctx.current_instruction = 0x881556E4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// stw r21,20472(r31)
	ctx.current_instruction = 0x881556E8;
	REX_STORE_U32(ctx.r31.u32 + 20472, ctx.r21.u32);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// std r9,20448(r31)
	ctx.current_instruction = 0x881556F0;
	REX_STORE_U64(ctx.r31.u32 + 20448, ctx.r9.u64);
loc_881556F4:
	// lwz r11,16(r31)
	ctx.current_instruction = 0x881556F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815570c
	if (ctx.cr6.eq) goto loc_8815570C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_8815570C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x88155914
	if (ctx.cr6.eq) goto loc_88155914;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x88155914
	if (ctx.cr6.eq) goto loc_88155914;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88155914
	if (ctx.cr6.eq) goto loc_88155914;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x88155914
	if (ctx.cr6.eq) goto loc_88155914;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x88155914
	if (ctx.cr6.eq) goto loc_88155914;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x88155914
	if (ctx.cr6.eq) goto loc_88155914;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88155914
	if (ctx.cr6.eq) goto loc_88155914;
	// lwz r11,22040(r31)
	ctx.current_instruction = 0x88155744;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22040);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881557a4
	if (!ctx.cr6.eq) goto loc_881557A4;
	// stw r29,22148(r31)
	ctx.current_instruction = 0x88155754;
	REX_STORE_U32(ctx.r31.u32 + 22148, ctx.r29.u32);
	// lis r4,12338
	ctx.r4.s64 = 808583168;
	// stw r28,22152(r31)
	ctx.current_instruction = 0x8815575C;
	REX_STORE_U32(ctx.r31.u32 + 22152, ctx.r28.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r21,22144(r31)
	ctx.current_instruction = 0x88155764;
	REX_STORE_U32(ctx.r31.u32 + 22144, ctx.r21.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r27,22156(r31)
	ctx.current_instruction = 0x8815576C;
	REX_STORE_U32(ctx.r31.u32 + 22156, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,22160(r31)
	ctx.current_instruction = 0x88155774;
	REX_STORE_U32(ctx.r31.u32 + 22160, ctx.r26.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r25,22164(r31)
	ctx.current_instruction = 0x8815577C;
	REX_STORE_U32(ctx.r31.u32 + 22164, ctx.r25.u32);
	// ori r4,r4,13385
	ctx.r4.u64 = ctx.r4.u64 | 13385;
	// stw r24,22168(r31)
	ctx.current_instruction = 0x88155784;
	REX_STORE_U32(ctx.r31.u32 + 22168, ctx.r24.u32);
	// bl 0x881544d0
	ctx.lr = 0x8815578C;
	sub_881544D0(ctx, base);
loc_8815578C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814cd10
	ctx.lr = 0x88155798;
	sub_8814CD10(ctx, base);
loc_88155798:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_881557A4:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x88150238
	ctx.lr = 0x881557B0;
	sub_88150238(ctx, base);
loc_881557B0:
	// lwz r11,22116(r31)
	ctx.current_instruction = 0x881557B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22116);
	// lwz r22,96(r1)
	ctx.current_instruction = 0x881557B4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r23,104(r1)
	ctx.current_instruction = 0x881557B8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x88155824
	if (!ctx.cr6.eq) goto loc_88155824;
	// lwz r10,22120(r31)
	ctx.current_instruction = 0x881557C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22120);
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x88155824
	if (!ctx.cr6.eq) goto loc_88155824;
	// stw r29,22148(r31)
	ctx.current_instruction = 0x881557D0;
	REX_STORE_U32(ctx.r31.u32 + 22148, ctx.r29.u32);
	// lis r4,12338
	ctx.r4.s64 = 808583168;
	// stw r28,22152(r31)
	ctx.current_instruction = 0x881557D8;
	REX_STORE_U32(ctx.r31.u32 + 22152, ctx.r28.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r21,22144(r31)
	ctx.current_instruction = 0x881557E0;
	REX_STORE_U32(ctx.r31.u32 + 22144, ctx.r21.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r27,22156(r31)
	ctx.current_instruction = 0x881557E8;
	REX_STORE_U32(ctx.r31.u32 + 22156, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,22160(r31)
	ctx.current_instruction = 0x881557F0;
	REX_STORE_U32(ctx.r31.u32 + 22160, ctx.r26.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r25,22164(r31)
	ctx.current_instruction = 0x881557F8;
	REX_STORE_U32(ctx.r31.u32 + 22164, ctx.r25.u32);
	// ori r4,r4,13385
	ctx.r4.u64 = ctx.r4.u64 | 13385;
	// stw r24,22168(r31)
	ctx.current_instruction = 0x88155800;
	REX_STORE_U32(ctx.r31.u32 + 22168, ctx.r24.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881544d0
	ctx.lr = 0x8815580C;
	sub_881544D0(ctx, base);
loc_8815580C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814cd10
	ctx.lr = 0x88155818;
	sub_8814CD10(ctx, base);
loc_88155818:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88155824:
	// lwz r10,22124(r31)
	ctx.current_instruction = 0x88155824;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8815588c
	if (!ctx.cr6.eq) goto loc_8815588C;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8815583c
	if (!ctx.cr6.gt) goto loc_8815583C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8815583C:
	// lwz r10,22120(r31)
	ctx.current_instruction = 0x8815583C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22120);
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8815584c
	if (!ctx.cr6.gt) goto loc_8815584C;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8815584C:
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r10,18168
	ctx.r5.s64 = ctx.r10.s64 + 18168;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8815e468
	ctx.lr = 0x88155868;
	sub_8815E468(ctx, base);
loc_88155868:
	// addi r9,r3,127
	ctx.r9.s64 = ctx.r3.s64 + 127;
	// stw r3,22124(r31)
	ctx.current_instruction = 0x8815586C;
	REX_STORE_U32(ctx.r31.u32 + 22124, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// stw r8,22128(r31)
	ctx.current_instruction = 0x88155878;
	REX_STORE_U32(ctx.r31.u32 + 22128, ctx.r8.u32);
	// bne cr6,0x8815588c
	if (!ctx.cr6.eq) goto loc_8815588C;
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_8815588C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,22128(r31)
	ctx.current_instruction = 0x88155890;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 22128);
	// lis r4,12338
	ctx.r4.s64 = 808583168;
	// stw r11,22144(r31)
	ctx.current_instruction = 0x88155898;
	REX_STORE_U32(ctx.r31.u32 + 22144, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r4,r4,13385
	ctx.r4.u64 = ctx.r4.u64 | 13385;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881544d0
	ctx.lr = 0x881558B4;
	sub_881544D0(ctx, base);
loc_881558B4:
	// lis r4,12338
	ctx.r4.s64 = 808583168;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r10,22128(r31)
	ctx.current_instruction = 0x881558BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22128);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r9,22120(r31)
	ctx.current_instruction = 0x881558C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 22120);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r8,22116(r31)
	ctx.current_instruction = 0x881558CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 22116);
	// ori r4,r4,13385
	ctx.r4.u64 = ctx.r4.u64 | 13385;
	// stw r21,22144(r31)
	ctx.current_instruction = 0x881558D4;
	REX_STORE_U32(ctx.r31.u32 + 22144, ctx.r21.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,22148(r31)
	ctx.current_instruction = 0x881558DC;
	REX_STORE_U32(ctx.r31.u32 + 22148, ctx.r29.u32);
	// stw r28,22152(r31)
	ctx.current_instruction = 0x881558E0;
	REX_STORE_U32(ctx.r31.u32 + 22152, ctx.r28.u32);
	// stw r27,22156(r31)
	ctx.current_instruction = 0x881558E4;
	REX_STORE_U32(ctx.r31.u32 + 22156, ctx.r27.u32);
	// stw r26,22160(r31)
	ctx.current_instruction = 0x881558E8;
	REX_STORE_U32(ctx.r31.u32 + 22160, ctx.r26.u32);
	// stw r25,22164(r31)
	ctx.current_instruction = 0x881558EC;
	REX_STORE_U32(ctx.r31.u32 + 22164, ctx.r25.u32);
	// stw r24,22168(r31)
	ctx.current_instruction = 0x881558F0;
	REX_STORE_U32(ctx.r31.u32 + 22168, ctx.r24.u32);
	// stw r29,84(r1)
	ctx.current_instruction = 0x881558F4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x881502f8
	ctx.lr = 0x881558FC;
	sub_881502F8(ctx, base);
loc_881558FC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814cd10
	ctx.lr = 0x88155908;
	sub_8814CD10(ctx, base);
loc_88155908:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88155914:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815E360) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815E360;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815E360) {
			switch (rex_dispatch_address) {
				case 0x8815E37C:
				case 0x8815E384:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815E360;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815E37C: goto loc_8815E37C;
		case 0x8815E384: goto loc_8815E384;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8815E364;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8815E368;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8815E36C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.current_instruction = 0x8815E374;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x88243680
	ctx.lr = 0x8815E37C;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_8815E37C:
	// lwz r3,0(r31)
	ctx.current_instruction = 0x8815E37C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88243660
	ctx.lr = 0x8815E384;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8815E384:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8815E38C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8815E394;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8815E510) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8815E510);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815E510;
	ctx.current_instruction = 0x8815E510;
	// lwz r11,60(r3)
	ctx.current_instruction = 0x8815E510;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815e524
	if (ctx.cr6.eq) goto loc_8815E524;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// b 0x8814d040
	sub_8814D040(ctx, base);
	return;
loc_8815E524:
	// b 0x8815e468
	sub_8815E468(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815E6F0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8815E6F0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815E6F0;
	ctx.current_instruction = 0x8815E6F0;
	// lbz r11,0(r3)
	ctx.current_instruction = 0x8815E6F0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,5(r3)
	ctx.current_instruction = 0x8815E6F4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r9,4(r3)
	ctx.current_instruction = 0x8815E6F8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r8,3(r3)
	ctx.current_instruction = 0x8815E6FC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r7,1(r3)
	ctx.current_instruction = 0x8815E700;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r6,2(r3)
	ctx.current_instruction = 0x8815E704;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// stb r11,5(r3)
	ctx.current_instruction = 0x8815E708;
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r10,0(r3)
	ctx.current_instruction = 0x8815E70C;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// stb r9,1(r3)
	ctx.current_instruction = 0x8815E710;
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// stb r7,4(r3)
	ctx.current_instruction = 0x8815E714;
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r7.u8);
	// stb r8,2(r3)
	ctx.current_instruction = 0x8815E718;
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r8.u8);
	// stb r6,3(r3)
	ctx.current_instruction = 0x8815E71C;
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r6.u8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8815F318) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815F318;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815F318) {
			switch (rex_dispatch_address) {
				case 0x8815F320:
				case 0x8815F38C:
				case 0x8815F3D4:
				case 0x8815F440:
				case 0x8815F488:
				case 0x8815F4F4:
				case 0x8815F53C:
				case 0x8815F5AC:
				case 0x8815F5F4:
				case 0x8815F658:
				case 0x8815F68C:
				case 0x8815F710:
				case 0x8815F758:
				case 0x8815F7A8:
				case 0x8815F7DC:
				case 0x8815F86C:
				case 0x8815F8B4:
				case 0x8815F938:
				case 0x8815F980:
				case 0x8815F9D8:
				case 0x8815FA0C:
				case 0x8815FA7C:
				case 0x8815FAC4:
				case 0x8815FB44:
				case 0x8815FB8C:
				case 0x8815FBF4:
				case 0x8815FC3C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815F318;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815F320: goto loc_8815F320;
		case 0x8815F38C: goto loc_8815F38C;
		case 0x8815F3D4: goto loc_8815F3D4;
		case 0x8815F440: goto loc_8815F440;
		case 0x8815F488: goto loc_8815F488;
		case 0x8815F4F4: goto loc_8815F4F4;
		case 0x8815F53C: goto loc_8815F53C;
		case 0x8815F5AC: goto loc_8815F5AC;
		case 0x8815F5F4: goto loc_8815F5F4;
		case 0x8815F658: goto loc_8815F658;
		case 0x8815F68C: goto loc_8815F68C;
		case 0x8815F710: goto loc_8815F710;
		case 0x8815F758: goto loc_8815F758;
		case 0x8815F7A8: goto loc_8815F7A8;
		case 0x8815F7DC: goto loc_8815F7DC;
		case 0x8815F86C: goto loc_8815F86C;
		case 0x8815F8B4: goto loc_8815F8B4;
		case 0x8815F938: goto loc_8815F938;
		case 0x8815F980: goto loc_8815F980;
		case 0x8815F9D8: goto loc_8815F9D8;
		case 0x8815FA0C: goto loc_8815FA0C;
		case 0x8815FA7C: goto loc_8815FA7C;
		case 0x8815FAC4: goto loc_8815FAC4;
		case 0x8815FB44: goto loc_8815FB44;
		case 0x8815FB8C: goto loc_8815FB8C;
		case 0x8815FBF4: goto loc_8815FBF4;
		case 0x8815FC3C: goto loc_8815FC3C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8815F320;
	__savegprlr_25(ctx, base);
loc_8815F320:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8815F320;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x8815F324;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,24
	ctx.r30.s64 = 24;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F334;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x8815f39c
	if (!ctx.cr6.lt) goto loc_8815F39C;
loc_8815F344:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f39c
	if (ctx.cr6.eq) goto loc_8815F39C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815F350;
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
	ctx.current_instruction = 0x8815F374;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815F37C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815f38c
	if (!ctx.cr0.lt) goto loc_8815F38C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F38C;
	sub_88156678(ctx, base);
loc_8815F38C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F38C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f344
	if (ctx.cr6.gt) goto loc_8815F344;
loc_8815F39C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815F3A0;
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
	ctx.current_instruction = 0x8815F3B8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815F3C4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815f3d4
	if (!ctx.cr0.lt) goto loc_8815F3D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F3D4;
	sub_88156678(ctx, base);
loc_8815F3D4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8815f8bc
	if (!ctx.cr6.eq) goto loc_8815F8BC;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8815F3DC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,8
	ctx.r30.s64 = 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F3E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8815f450
	if (!ctx.cr6.lt) goto loc_8815F450;
loc_8815F3F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f450
	if (ctx.cr6.eq) goto loc_8815F450;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815F404;
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
	ctx.current_instruction = 0x8815F428;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815F430;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815f440
	if (!ctx.cr0.lt) goto loc_8815F440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F440;
	sub_88156678(ctx, base);
loc_8815F440:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F440;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f3f8
	if (ctx.cr6.gt) goto loc_8815F3F8;
loc_8815F450:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815F454;
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
	ctx.current_instruction = 0x8815F46C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815F478;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815f488
	if (!ctx.cr0.lt) goto loc_8815F488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F488;
	sub_88156678(ctx, base);
loc_8815F488:
	// cmplwi cr6,r30,182
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 182, ctx.xer);
	// bne cr6,0x8815f8bc
	if (!ctx.cr6.eq) goto loc_8815F8BC;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8815F490;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F49C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8815f504
	if (!ctx.cr6.lt) goto loc_8815F504;
loc_8815F4AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f504
	if (ctx.cr6.eq) goto loc_8815F504;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815F4B8;
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
	ctx.current_instruction = 0x8815F4DC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815F4E4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815f4f4
	if (!ctx.cr0.lt) goto loc_8815F4F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F4F4;
	sub_88156678(ctx, base);
loc_8815F4F4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F4F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f4ac
	if (ctx.cr6.gt) goto loc_8815F4AC;
loc_8815F504:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815F508;
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
	ctx.current_instruction = 0x8815F520;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815F52C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815f53c
	if (!ctx.cr0.lt) goto loc_8815F53C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F53C;
	sub_88156678(ctx, base);
loc_8815F53C:
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r30,288(r26)
	ctx.current_instruction = 0x8815F540;
	REX_STORE_U32(ctx.r26.u32 + 288, ctx.r30.u32);
	// li r25,1
	ctx.r25.s64 = 1;
loc_8815F548:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8815F548;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F554;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8815f5bc
	if (!ctx.cr6.lt) goto loc_8815F5BC;
loc_8815F564:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f5bc
	if (ctx.cr6.eq) goto loc_8815F5BC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815F570;
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
	ctx.current_instruction = 0x8815F594;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815F59C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815f5ac
	if (!ctx.cr0.lt) goto loc_8815F5AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F5AC;
	sub_88156678(ctx, base);
loc_8815F5AC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F5AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f564
	if (ctx.cr6.gt) goto loc_8815F564;
loc_8815F5BC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815F5C0;
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
	ctx.current_instruction = 0x8815F5D8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815F5E4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815f5f4
	if (!ctx.cr0.lt) goto loc_8815F5F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F5F4;
	sub_88156678(ctx, base);
loc_8815F5F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8815f604
	if (ctx.cr6.eq) goto loc_8815F604;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x8815f548
	goto loc_8815F548;
loc_8815F604:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8815F604;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// clrldi r9,r28,32
	ctx.r9.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// ld r11,3656(r26)
	ctx.current_instruction = 0x8815F60C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r26.u32 + 3656);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// add r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F618;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8815f668
	if (!ctx.cr6.lt) goto loc_8815F668;
loc_8815F628:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f668
	if (ctx.cr6.eq) goto loc_8815F668;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815F630;
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
	ctx.current_instruction = 0x8815F644;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8815F648;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8815f658
	if (!ctx.cr0.lt) goto loc_8815F658;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F658;
	sub_88156678(ctx, base);
loc_8815F658:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F658;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f628
	if (ctx.cr6.gt) goto loc_8815F628;
loc_8815F668:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8815F668;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8815F678;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8815F67C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8815f68c
	if (!ctx.cr0.lt) goto loc_8815F68C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F68C;
	sub_88156678(ctx, base);
loc_8815F68C:
	// lwz r30,84(r26)
	ctx.current_instruction = 0x8815F68C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,3688(r26)
	ctx.current_instruction = 0x8815F694;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 3688);
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// lwz r10,8(r30)
	ctx.current_instruction = 0x8815F69C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x8815f6b0
	if (!ctx.cr6.gt) goto loc_8815F6B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8815f75c
	goto loc_8815F75C;
loc_8815F6B0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8815f6c0
	if (!ctx.cr6.eq) goto loc_8815F6C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8815f75c
	goto loc_8815F75C;
loc_8815F6C0:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8815f720
	if (!ctx.cr6.gt) goto loc_8815F720;
loc_8815F6C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f720
	if (ctx.cr6.eq) goto loc_8815F720;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x8815F6D4;
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
	ctx.current_instruction = 0x8815F6F8;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x8815F700;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x8815f710
	if (!ctx.cr0.lt) goto loc_8815F710;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F710;
	sub_88156678(ctx, base);
loc_8815F710:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x8815F710;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f6c8
	if (ctx.cr6.gt) goto loc_8815F6C8;
loc_8815F720:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x8815F724;
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
	ctx.current_instruction = 0x8815F73C;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x8815F748;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x8815f758
	if (!ctx.cr0.lt) goto loc_8815F758;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F758;
	sub_88156678(ctx, base);
loc_8815F758:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8815F75C:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8815F75C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// clrldi r28,r11,32
	ctx.r28.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F768;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8815f7b8
	if (!ctx.cr6.lt) goto loc_8815F7B8;
loc_8815F778:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f7b8
	if (ctx.cr6.eq) goto loc_8815F7B8;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815F780;
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
	ctx.current_instruction = 0x8815F794;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8815F798;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8815f7a8
	if (!ctx.cr0.lt) goto loc_8815F7A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F7A8;
	sub_88156678(ctx, base);
loc_8815F7A8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F7A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f778
	if (ctx.cr6.gt) goto loc_8815F778;
loc_8815F7B8:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8815F7B8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8815F7C8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8815F7CC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8815f7dc
	if (!ctx.cr0.lt) goto loc_8815F7DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F7DC;
	sub_88156678(ctx, base);
loc_8815F7DC:
	// lwz r11,3628(r26)
	ctx.current_instruction = 0x8815F7DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 3628);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// ld r10,3656(r26)
	ctx.current_instruction = 0x8815F7E4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r26.u32 + 3656);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// ld r8,3664(r26)
	ctx.current_instruction = 0x8815F7F0;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r26.u32 + 3664);
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8815F7F4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mulld r11,r9,r27
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r27.u64);
	// std r27,3656(r26)
	ctx.current_instruction = 0x8815F7FC;
	REX_STORE_U64(ctx.r26.u32 + 3656, ctx.r27.u64);
	// std r10,3672(r26)
	ctx.current_instruction = 0x8815F800;
	REX_STORE_U64(ctx.r26.u32 + 3672, ctx.r10.u64);
	// std r8,3680(r26)
	ctx.current_instruction = 0x8815F804;
	REX_STORE_U64(ctx.r26.u32 + 3680, ctx.r8.u64);
	// std r10,3664(r26)
	ctx.current_instruction = 0x8815F808;
	REX_STORE_U64(ctx.r26.u32 + 3664, ctx.r10.u64);
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r7,3632(r26)
	ctx.current_instruction = 0x8815F810;
	REX_STORE_U64(ctx.r26.u32 + 3632, ctx.r7.u64);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F814;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8815f87c
	if (!ctx.cr6.lt) goto loc_8815F87C;
loc_8815F824:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f87c
	if (ctx.cr6.eq) goto loc_8815F87C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815F830;
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
	ctx.current_instruction = 0x8815F854;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815F85C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815f86c
	if (!ctx.cr0.lt) goto loc_8815F86C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F86C;
	sub_88156678(ctx, base);
loc_8815F86C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F86C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f824
	if (ctx.cr6.gt) goto loc_8815F824;
loc_8815F87C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815F880;
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
	ctx.current_instruction = 0x8815F898;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815F8A4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815f8b4
	if (!ctx.cr0.lt) goto loc_8815F8B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F8B4;
	sub_88156678(ctx, base);
loc_8815F8B4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8815f8c8
	if (!ctx.cr6.eq) goto loc_8815F8C8;
loc_8815F8BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8815F8C8:
	// lwz r11,288(r26)
	ctx.current_instruction = 0x8815F8C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8815f988
	if (!ctx.cr6.eq) goto loc_8815F988;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8815F8D4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F8E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8815f948
	if (!ctx.cr6.lt) goto loc_8815F948;
loc_8815F8F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f948
	if (ctx.cr6.eq) goto loc_8815F948;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815F8FC;
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
	ctx.current_instruction = 0x8815F920;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815F928;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815f938
	if (!ctx.cr0.lt) goto loc_8815F938;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F938;
	sub_88156678(ctx, base);
loc_8815F938:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F938;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f8f0
	if (ctx.cr6.gt) goto loc_8815F8F0;
loc_8815F948:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815F94C;
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
	ctx.current_instruction = 0x8815F964;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815F970;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815f980
	if (!ctx.cr0.lt) goto loc_8815F980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F980;
	sub_88156678(ctx, base);
loc_8815F980:
	// stw r30,3960(r26)
	ctx.current_instruction = 0x8815F980;
	REX_STORE_U32(ctx.r26.u32 + 3960, ctx.r30.u32);
	// b 0x8815f990
	goto loc_8815F990;
loc_8815F988:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3960(r26)
	ctx.current_instruction = 0x8815F98C;
	REX_STORE_U32(ctx.r26.u32 + 3960, ctx.r11.u32);
loc_8815F990:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8815F990;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,3
	ctx.r30.s64 = 3;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F998;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8815f9e8
	if (!ctx.cr6.lt) goto loc_8815F9E8;
loc_8815F9A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f9e8
	if (ctx.cr6.eq) goto loc_8815F9E8;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815F9B0;
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
	ctx.current_instruction = 0x8815F9C4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8815F9C8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8815f9d8
	if (!ctx.cr0.lt) goto loc_8815F9D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F9D8;
	sub_88156678(ctx, base);
loc_8815F9D8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815F9D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f9a8
	if (ctx.cr6.gt) goto loc_8815F9A8;
loc_8815F9E8:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8815F9E8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8815F9F8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8815F9FC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8815fa0c
	if (!ctx.cr0.lt) goto loc_8815FA0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815FA0C;
	sub_88156678(ctx, base);
loc_8815FA0C:
	// lwz r11,288(r26)
	ctx.current_instruction = 0x8815FA0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8815fad8
	if (!ctx.cr6.eq) goto loc_8815FAD8;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8815FA18;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,5
	ctx.r30.s64 = 5;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815FA24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8815fa8c
	if (!ctx.cr6.lt) goto loc_8815FA8C;
loc_8815FA34:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815fa8c
	if (ctx.cr6.eq) goto loc_8815FA8C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815FA40;
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
	ctx.current_instruction = 0x8815FA64;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815FA6C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815fa7c
	if (!ctx.cr0.lt) goto loc_8815FA7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815FA7C;
	sub_88156678(ctx, base);
loc_8815FA7C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815FA7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815fa34
	if (ctx.cr6.gt) goto loc_8815FA34;
loc_8815FA8C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815FA90;
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
	ctx.current_instruction = 0x8815FAA8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815FAB4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815fac4
	if (!ctx.cr0.lt) goto loc_8815FAC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815FAC4;
	sub_88156678(ctx, base);
loc_8815FAC4:
	// stw r30,248(r26)
	ctx.current_instruction = 0x8815FAC4;
	REX_STORE_U32(ctx.r26.u32 + 248, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,3616(r26)
	ctx.current_instruction = 0x8815FACC;
	REX_STORE_U32(ctx.r26.u32 + 3616, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8815FAD8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8815fc58
	if (!ctx.cr6.eq) goto loc_8815FC58;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8815FAE0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,5
	ctx.r30.s64 = 5;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815FAEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8815fb54
	if (!ctx.cr6.lt) goto loc_8815FB54;
loc_8815FAFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815fb54
	if (ctx.cr6.eq) goto loc_8815FB54;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815FB08;
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
	ctx.current_instruction = 0x8815FB2C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815FB34;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815fb44
	if (!ctx.cr0.lt) goto loc_8815FB44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815FB44;
	sub_88156678(ctx, base);
loc_8815FB44:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815FB44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815fafc
	if (ctx.cr6.gt) goto loc_8815FAFC;
loc_8815FB54:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815FB58;
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
	ctx.current_instruction = 0x8815FB70;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815FB7C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815fb8c
	if (!ctx.cr0.lt) goto loc_8815FB8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815FB8C;
	sub_88156678(ctx, base);
loc_8815FB8C:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8815FB8C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r29,248(r26)
	ctx.current_instruction = 0x8815FB94;
	REX_STORE_U32(ctx.r26.u32 + 248, ctx.r29.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815FB9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8815fc04
	if (!ctx.cr6.lt) goto loc_8815FC04;
loc_8815FBAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815fc04
	if (ctx.cr6.eq) goto loc_8815FC04;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815FBB8;
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
	ctx.current_instruction = 0x8815FBDC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815FBE4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815fbf4
	if (!ctx.cr0.lt) goto loc_8815FBF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815FBF4;
	sub_88156678(ctx, base);
loc_8815FBF4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815FBF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815fbac
	if (ctx.cr6.gt) goto loc_8815FBAC;
loc_8815FC04:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815FC08;
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
	ctx.current_instruction = 0x8815FC20;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815FC2C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815fc3c
	if (!ctx.cr0.lt) goto loc_8815FC3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815FC3C;
	sub_88156678(ctx, base);
loc_8815FC3C:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r30,3616(r26)
	ctx.current_instruction = 0x8815FC40;
	REX_STORE_U32(ctx.r26.u32 + 3616, ctx.r30.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// slw r8,r10,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// stw r9,3624(r26)
	ctx.current_instruction = 0x8815FC50;
	REX_STORE_U32(ctx.r26.u32 + 3624, ctx.r9.u32);
	// stw r8,3620(r26)
	ctx.current_instruction = 0x8815FC54;
	REX_STORE_U32(ctx.r26.u32 + 3620, ctx.r8.u32);
loc_8815FC58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8817D488) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8817D488;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8817D488) {
			switch (rex_dispatch_address) {
				case 0x8817D490:
				case 0x8817D4F8:
				case 0x8817D514:
				case 0x8817D530:
				case 0x8817D5E4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817D488;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8817D490: goto loc_8817D490;
		case 0x8817D4F8: goto loc_8817D4F8;
		case 0x8817D514: goto loc_8817D514;
		case 0x8817D530: goto loc_8817D530;
		case 0x8817D5E4: goto loc_8817D5E4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x8817D490;
	__savegprlr_17(ctx, base);
loc_8817D490:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x8817D490;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,220(r3)
	ctx.current_instruction = 0x8817D494;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// lwz r9,3776(r3)
	ctx.current_instruction = 0x8817D49C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r6,3832(r3)
	ctx.current_instruction = 0x8817D4A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3832);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// add r24,r9,r10
	ctx.r24.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,224(r3)
	ctx.current_instruction = 0x8817D4B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// add r25,r6,r10
	ctx.r25.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwz r8,3780(r3)
	ctx.current_instruction = 0x8817D4B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3780);
	// lwz r7,3784(r3)
	ctx.current_instruction = 0x8817D4BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3784);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r5,3836(r3)
	ctx.current_instruction = 0x8817D4C4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3836);
	// add r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,3840(r3)
	ctx.current_instruction = 0x8817D4CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3840);
	// add r27,r7,r11
	ctx.r27.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r10,200(r3)
	ctx.current_instruction = 0x8817D4D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// add r30,r5,r11
	ctx.r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8817d54c
	if (!ctx.cr6.gt) goto loc_8817D54C;
loc_8817D4E8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,208(r31)
	ctx.current_instruction = 0x8817D4EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x8817D4F8;
	sub_880547A0(ctx, base);
loc_8817D4F8:
	// lwz r11,208(r31)
	ctx.current_instruction = 0x8817D4F8;
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
	ctx.lr = 0x8817D514;
	sub_880547A0(ctx, base);
loc_8817D514:
	// lwz r11,208(r31)
	ctx.current_instruction = 0x8817D514;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,204(r31)
	ctx.current_instruction = 0x8817D520;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x880547a0
	ctx.lr = 0x8817D530;
	sub_880547A0(ctx, base);
loc_8817D530:
	// lwz r11,204(r31)
	ctx.current_instruction = 0x8817D530;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r11,200(r31)
	ctx.current_instruction = 0x8817D540;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8817d4e8
	if (ctx.cr6.lt) goto loc_8817D4E8;
loc_8817D54C:
	// lwz r11,224(r31)
	ctx.current_instruction = 0x8817D54C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lwz r8,3832(r31)
	ctx.current_instruction = 0x8817D554;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r19.u32, ctx.xer);
	// lwz r7,220(r31)
	ctx.current_instruction = 0x8817D55C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r9,3836(r31)
	ctx.current_instruction = 0x8817D560;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3836);
	// lwz r10,3840(r31)
	ctx.current_instruction = 0x8817D564;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3840);
	// add r23,r8,r7
	ctx.r23.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r25,136(r31)
	ctx.current_instruction = 0x8817D56C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// add r24,r9,r11
	ctx.r24.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x8817d61c
	if (!ctx.cr6.lt) goto loc_8817D61C;
	// li r21,1
	ctx.r21.s64 = 1;
	// lis r22,-30678
	ctx.r22.s64 = -2010513408;
loc_8817D584:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8817d5f8
	if (ctx.cr6.eq) goto loc_8817D5F8;
	// subf r26,r24,r20
	ctx.r26.u64 = ctx.r20.u64 - ctx.r24.u64;
loc_8817D59C:
	// lwz r3,204(r31)
	ctx.current_instruction = 0x8817D59C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,208(r31)
	ctx.current_instruction = 0x8817D5A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r18,248(r31)
	ctx.current_instruction = 0x8817D5AC;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r17,24556(r22)
	ctx.current_instruction = 0x8817D5B4;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r22.u32 + 24556);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// add r6,r26,r29
	ctx.r6.u64 = ctx.r26.u64 + ctx.r29.u64;
	// stw r21,84(r1)
	ctx.current_instruction = 0x8817D5C0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// stw r3,100(r1)
	ctx.current_instruction = 0x8817D5C4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,108(r1)
	ctx.current_instruction = 0x8817D5D0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r18,92(r1)
	ctx.current_instruction = 0x8817D5D8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// mtctr r17
	ctx.ctr.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x8817D5E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8817D5E4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8817d59c
	if (ctx.cr6.lt) goto loc_8817D59C;
loc_8817D5F8:
	// lwz r11,208(r31)
	ctx.current_instruction = 0x8817D5F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,228(r31)
	ctx.current_instruction = 0x8817D600;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r23,r10,r23
	ctx.r23.u64 = ctx.r10.u64 + ctx.r23.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r20,r11,r20
	ctx.r20.u64 = ctx.r11.u64 + ctx.r20.u64;
	// cmplw cr6,r27,r19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x8817d584
	if (ctx.cr6.lt) goto loc_8817D584;
loc_8817D61C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88182F98) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88182F98;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88182F98) {
			switch (rex_dispatch_address) {
				case 0x88182FA0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88182F98;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88182FA0: goto loc_88182FA0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x88182FA0;
	__savegprlr_22(ctx, base);
loc_88182FA0:
	// rlwinm r11,r6,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r25,r11,r3
	ctx.r25.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r26,r4,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r10,r5,-32
	ctx.r10.s64 = ctx.r5.s64 + -32;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88182FBC:
	// lwz r9,36(r10)
	ctx.current_instruction = 0x88182FBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r8,60(r10)
	ctx.current_instruction = 0x88182FC0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r7,44(r10)
	ctx.current_instruction = 0x88182FC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mulli r30,r9,2276
	ctx.r30.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(2276));
	// lwz r6,52(r10)
	ctx.current_instruction = 0x88182FCC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r4,40(r10)
	ctx.current_instruction = 0x88182FD0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r3,56(r10)
	ctx.current_instruction = 0x88182FD4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r27,48(r10)
	ctx.current_instruction = 0x88182FD8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwzu r31,32(r10)
	ctx.current_instruction = 0x88182FDC;
	ea = 32 + ctx.r10.u32;
	ctx.r31.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r29,r6,r7
	ctx.r29.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mulli r5,r9,565
	ctx.r5.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(565));
	// mulli r6,r6,799
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(799));
	// mulli r29,r29,2408
	ctx.r29.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(2408));
	// mulli r8,r8,3406
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(3406));
	// mulli r7,r7,4017
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(4017));
	// add r9,r30,r5
	ctx.r9.u64 = ctx.r30.u64 + ctx.r5.u64;
	// subf r30,r6,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r6.u64;
	// subf r28,r8,r5
	ctx.r28.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r29,r7,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r7.u64;
	// subf r8,r30,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r30.u64;
	// subf r7,r29,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r29.u64;
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r6,r31,11,0,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 11) & 0xFFFFF800;
	// add r24,r7,r8
	ctx.r24.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r23,r7,r8
	ctx.r23.u64 = ctx.r8.u64 - ctx.r7.u64;
	// mulli r7,r4,1568
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1568));
	// mulli r31,r5,1108
	ctx.r31.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1108));
	// addi r8,r6,128
	ctx.r8.s64 = ctx.r6.s64 + 128;
	// rlwinm r5,r27,11,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 11) & 0xFFFFF800;
	// mulli r22,r3,3784
	ctx.r22.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(3784));
	// mulli r4,r24,181
	ctx.r4.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(181));
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + ctx.r31.u64;
	// mulli r27,r23,181
	ctx.r27.s64 = static_cast<int64_t>(ctx.r23.u64 * static_cast<uint64_t>(181));
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r3,r5,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r5.u64;
	// subf r8,r22,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r22.u64;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// addi r27,r27,128
	ctx.r27.s64 = ctx.r27.s64 + 128;
	// subf r31,r6,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64;
	// srawi r6,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 8;
	// subf r3,r8,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r8.u64;
	// srawi r4,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 8;
	// add r8,r28,r29
	ctx.r8.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add r30,r9,r5
	ctx.r30.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r29,r6,r7
	ctx.r29.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r28,r3,r4
	ctx.r28.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r27,r31,r8
	ctx.r27.u64 = ctx.r31.u64 + ctx.r8.u64;
	// srawi r30,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 8;
	// srawi r29,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 8;
	// subf r8,r8,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r8.u64;
	// stw r30,0(r11)
	ctx.current_instruction = 0x88183094;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// subf r4,r4,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r4.u64;
	// stw r29,4(r11)
	ctx.current_instruction = 0x8818309C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// srawi r31,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r28.s32 >> 8;
	// srawi r3,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r27.s32 >> 8;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// stw r31,8(r11)
	ctx.current_instruction = 0x881830AC;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// stw r3,12(r11)
	ctx.current_instruction = 0x881830B4;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// subf r5,r9,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r9.u64;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// stw r6,16(r11)
	ctx.current_instruction = 0x881830C0;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// srawi r3,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 8;
	// srawi r9,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 8;
	// stw r4,20(r11)
	ctx.current_instruction = 0x881830CC;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r3,24(r11)
	ctx.current_instruction = 0x881830D0;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// stw r9,28(r11)
	ctx.current_instruction = 0x881830D4;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// bdnz 0x88182fbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88182FBC;
	// add r11,r26,r25
	ctx.r11.u64 = ctx.r26.u64 + ctx.r25.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 + ctx.r11.u64;
	// subf r5,r11,r25
	ctx.r5.u64 = ctx.r25.u64 - ctx.r11.u64;
	// add r8,r26,r10
	ctx.r8.u64 = ctx.r26.u64 + ctx.r10.u64;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r3,r11,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r11.u64;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
loc_88183108:
	// lwzx r9,r5,r11
	ctx.current_instruction = 0x88183108;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.current_instruction = 0x8818310C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r4,r11
	ctx.current_instruction = 0x88183110;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r30,r3,r11
	ctx.current_instruction = 0x88183114;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// mulli r31,r7,1892
	ctx.r31.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1892));
	// add r29,r8,r9
	ctx.r29.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r6,r30,784
	ctx.r6.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(784));
	// subf r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	// mulli r28,r7,784
	ctx.r28.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(784));
	// mulli r30,r30,1892
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(1892));
	// add r9,r31,r6
	ctx.r9.u64 = ctx.r31.u64 + ctx.r6.u64;
	// mulli r7,r29,1448
	ctx.r7.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(1448));
	// mulli r8,r8,1448
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1448));
	// subf r6,r30,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r30.u64;
	// add r31,r7,r9
	ctx.r31.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r30,r8,r6
	ctx.r30.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r6,r6,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r6.u64;
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stwx r8,r5,r11
	ctx.current_instruction = 0x88183160;
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r8.u32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// srawi r8,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 16;
	// srawi r7,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 16;
	// stw r9,0(r11)
	ctx.current_instruction = 0x88183174;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwx r8,r4,r11
	ctx.current_instruction = 0x88183178;
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r7,r3,r11
	ctx.current_instruction = 0x8818317C;
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88183108
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88183108;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88185600) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88185600;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88185600) {
			switch (rex_dispatch_address) {
				case 0x88185608:
				case 0x88185650:
				case 0x8818565C:
				case 0x881856B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88185600;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88185608: goto loc_88185608;
		case 0x88185650: goto loc_88185650;
		case 0x8818565C: goto loc_8818565C;
		case 0x881856B8: goto loc_881856B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88185608;
	__savegprlr_29(ctx, base);
loc_88185608:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88185608;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22300(r3)
	ctx.current_instruction = 0x8818560C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22300);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881856b8
	if (ctx.cr6.eq) goto loc_881856B8;
	// lwz r11,22296(r3)
	ctx.current_instruction = 0x8818561C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22296);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,22300(r3)
	ctx.current_instruction = 0x88185628;
	REX_STORE_U32(ctx.r3.u32 + 22300, ctx.r10.u32);
	// bne cr6,0x88185638
	if (!ctx.cr6.eq) goto loc_88185638;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,15264(r3)
	ctx.current_instruction = 0x88185634;
	REX_STORE_U32(ctx.r3.u32 + 15264, ctx.r11.u32);
loc_88185638:
	// addi r30,r31,3752
	ctx.r30.s64 = ctx.r31.s64 + 3752;
	// lwz r3,15268(r31)
	ctx.current_instruction = 0x8818563C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r29,3752(r31)
	ctx.current_instruction = 0x88185644;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 3752);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x881b36a0
	ctx.lr = 0x88185650;
	sub_881B36A0(ctx, base);
loc_88185650:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,15268(r31)
	ctx.current_instruction = 0x88185654;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// bl 0x881b36f0
	ctx.lr = 0x8818565C;
	sub_881B36F0(ctx, base);
loc_8818565C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88185670
	if (ctx.cr6.eq) goto loc_88185670;
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88185670:
	// lwz r9,0(r30)
	ctx.current_instruction = 0x88185670;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,220(r31)
	ctx.current_instruction = 0x88185678;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r8,0(r9)
	ctx.current_instruction = 0x8818567C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,3788(r31)
	ctx.current_instruction = 0x88185688;
	REX_STORE_U32(ctx.r31.u32 + 3788, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.current_instruction = 0x8818568C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,3792(r31)
	ctx.current_instruction = 0x88185694;
	REX_STORE_U32(ctx.r31.u32 + 3792, ctx.r7.u32);
	// lwz r4,8(r9)
	ctx.current_instruction = 0x88185698;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,3796(r31)
	ctx.current_instruction = 0x881856A0;
	REX_STORE_U32(ctx.r31.u32 + 3796, ctx.r4.u32);
	// stw r5,3812(r31)
	ctx.current_instruction = 0x881856A4;
	REX_STORE_U32(ctx.r31.u32 + 3812, ctx.r5.u32);
	// stw r11,14824(r31)
	ctx.current_instruction = 0x881856A8;
	REX_STORE_U32(ctx.r31.u32 + 14824, ctx.r11.u32);
	// stw r6,14828(r31)
	ctx.current_instruction = 0x881856AC;
	REX_STORE_U32(ctx.r31.u32 + 14828, ctx.r6.u32);
	// stw r10,14832(r31)
	ctx.current_instruction = 0x881856B0;
	REX_STORE_U32(ctx.r31.u32 + 14832, ctx.r10.u32);
	// bl 0x881664c0
	ctx.lr = 0x881856B8;
	sub_881664C0(ctx, base);
loc_881856B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88188E40) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88188E40;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88188E40) {
			switch (rex_dispatch_address) {
				case 0x88188E48:
				case 0x88188E68:
				case 0x881890A8:
				case 0x881890D4:
				case 0x88189100:
				case 0x88189264:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88188E40;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88188E48: goto loc_88188E48;
		case 0x88188E68: goto loc_88188E68;
		case 0x881890A8: goto loc_881890A8;
		case 0x881890D4: goto loc_881890D4;
		case 0x88189100: goto loc_88189100;
		case 0x88189264: goto loc_88189264;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x88188E48;
	__savegprlr_19(ctx, base);
loc_88188E48:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x88188E48;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88189280
	if (ctx.cr6.eq) goto loc_88189280;
	// lwz r31,304(r3)
	ctx.current_instruction = 0x88188E58;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88189280
	if (ctx.cr6.eq) goto loc_88189280;
	// bl 0x88188598
	ctx.lr = 0x88188E68;
	sub_88188598(ctx, base);
loc_88188E68:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8818911c
	if (!ctx.cr6.eq) goto loc_8818911C;
	// lwz r9,0(r8)
	ctx.current_instruction = 0x88188E70;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lis r7,22101
	ctx.r7.s64 = 1448411136;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r30,r7,22857
	ctx.r30.u64 = ctx.r7.u64 | 22857;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r3,16(r9)
	ctx.current_instruction = 0x88188E88;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x88188fac
	if (ctx.cr6.eq) goto loc_88188FAC;
	// lis r30,12338
	ctx.r30.s64 = 808583168;
	// ori r30,r30,13385
	ctx.r30.u64 = ctx.r30.u64 | 13385;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x88188fac
	if (ctx.cr6.eq) goto loc_88188FAC;
	// lis r30,12849
	ctx.r30.s64 = 842072064;
	// ori r30,r30,22105
	ctx.r30.u64 = ctx.r30.u64 | 22105;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x88188fac
	if (ctx.cr6.eq) goto loc_88188FAC;
	// lis r30,12593
	ctx.r30.s64 = 825294848;
	// ori r30,r30,13392
	ctx.r30.u64 = ctx.r30.u64 | 13392;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x88189078
	if (!ctx.cr6.eq) goto loc_88189078;
	// lwz r11,36(r8)
	ctx.current_instruction = 0x88188EE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r7,12(r8)
	ctx.current_instruction = 0x88188EEC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// lwz r6,16(r8)
	ctx.current_instruction = 0x88188EF4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r9,40(r8)
	ctx.current_instruction = 0x88188EF8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// addze r23,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r23.s64 = temp.s64;
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// addze r27,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r27.s64 = temp.s64;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// mr r19,r27
	ctx.r19.u64 = ctx.r27.u64;
	// bne cr6,0x88188f68
	if (!ctx.cr6.eq) goto loc_88188F68;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r7,4(r8)
	ctx.current_instruction = 0x88188F28;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,8(r8)
	ctx.current_instruction = 0x88188F2C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addze r8,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r5,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 2;
	// mullw r3,r6,r11
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// add r30,r8,r9
	ctx.r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r7,r30,r6
	ctx.r7.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// b 0x88189078
	goto loc_88189078;
loc_88188F68:
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r5,4(r8)
	ctx.current_instruction = 0x88188F6C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r8,8(r8)
	ctx.current_instruction = 0x88188F70;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 2;
	// add r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addze r9,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r3,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 2;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addze r30,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r30.s64 = temp.s64;
	// mullw r6,r8,r10
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// mullw r29,r8,r11
	ctx.r29.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// add r8,r30,r9
	ctx.r8.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r29,r5
	ctx.r9.u64 = ctx.r29.u64 + ctx.r5.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// b 0x88189074
	goto loc_88189074;
loc_88188FAC:
	// lwz r11,36(r8)
	ctx.current_instruction = 0x88188FAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r7,12(r8)
	ctx.current_instruction = 0x88188FB4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r6,16(r8)
	ctx.current_instruction = 0x88188FBC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r9,40(r8)
	ctx.current_instruction = 0x88188FC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// addze r23,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r23.s64 = temp.s64;
	// lwz r5,8(r8)
	ctx.current_instruction = 0x88188FD4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// addze r27,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r27.s64 = temp.s64;
	// srawi r7,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r27.s32 >> 1;
	// addze r21,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r21.s64 = temp.s64;
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// add r30,r7,r9
	ctx.r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// bne cr6,0x88189038
	if (!ctx.cr6.eq) goto loc_88189038;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// lwz r6,4(r8)
	ctx.current_instruction = 0x88189004;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// srawi r8,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// addze r9,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r3,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r30.s32 >> 2;
	// mullw r30,r5,r11
	ctx.r30.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// addze r5,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r5.s64 = temp.s64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r9,r30,r6
	ctx.r9.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r6,r5,r8
	ctx.r6.u64 = ctx.r5.u64 + ctx.r8.u64;
	// b 0x88189074
	goto loc_88189074;
loc_88189038:
	// srawi r6,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 1;
	// lwz r8,4(r8)
	ctx.current_instruction = 0x8818903C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addze r9,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r3,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r30.s32 >> 2;
	// addi r30,r5,1
	ctx.r30.s64 = ctx.r5.s64 + 1;
	// addze r5,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// mullw r30,r30,r11
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r30,r8
	ctx.r9.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
loc_88189074:
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
loc_88189078:
	// add r30,r9,r4
	ctx.r30.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r28,r7,r4
	ctx.r28.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r25,r6,r4
	ctx.r25.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r26,r11,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r10,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x881890b8
	if (!ctx.cr6.gt) goto loc_881890B8;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_88189098:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881ece80
	ctx.lr = 0x881890A8;
	sub_881ECE80(ctx, base);
loc_881890A8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r30,r26,r30
	ctx.r30.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r31,r22,r31
	ctx.r31.u64 = ctx.r22.u64 + ctx.r31.u64;
	// bne 0x88189098
	if (!ctx.cr0.eq) goto loc_88189098;
loc_881890B8:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x881890e4
	if (!ctx.cr6.gt) goto loc_881890E4;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_881890C4:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881ece80
	ctx.lr = 0x881890D4;
	sub_881ECE80(ctx, base);
loc_881890D4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r28,r24,r28
	ctx.r28.u64 = ctx.r24.u64 + ctx.r28.u64;
	// add r31,r23,r31
	ctx.r31.u64 = ctx.r23.u64 + ctx.r31.u64;
	// bne 0x881890c4
	if (!ctx.cr0.eq) goto loc_881890C4;
loc_881890E4:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x88189274
	if (!ctx.cr6.gt) goto loc_88189274;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_881890F0:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881ece80
	ctx.lr = 0x88189100;
	sub_881ECE80(ctx, base);
loc_88189100:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r25,r24,r25
	ctx.r25.u64 = ctx.r24.u64 + ctx.r25.u64;
	// add r31,r20,r31
	ctx.r31.u64 = ctx.r20.u64 + ctx.r31.u64;
	// bne 0x881890f0
	if (!ctx.cr0.eq) goto loc_881890F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_8818911C:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x88189280
	if (!ctx.cr6.eq) goto loc_88189280;
	// lwz r7,0(r8)
	ctx.current_instruction = 0x88189124;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r10,36(r8)
	ctx.current_instruction = 0x8818912C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r8)
	ctx.current_instruction = 0x88189134;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,16(r8)
	ctx.current_instruction = 0x88189138;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lhz r11,14(r7)
	ctx.current_instruction = 0x8818913C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// lwz r31,16(r7)
	ctx.current_instruction = 0x88189140;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r30,r10,31
	ctx.r30.s64 = ctx.r10.s64 + 31;
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r30,0,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// srawi r3,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 3;
	// rlwinm r30,r10,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r30.s32 >> 3;
	// rlwinm r27,r10,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r28,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r28.s64 = temp.s64;
	// srawi r3,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 1;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// addze r30,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r30.s64 = temp.s64;
	// bgt cr6,0x88189190
	if (ctx.cr6.gt) goto loc_88189190;
	// lwz r7,8(r7)
	ctx.current_instruction = 0x88189180;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88189190
	if (!ctx.cr6.gt) goto loc_88189190;
	// li r6,1
	ctx.r6.s64 = 1;
loc_88189190:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x881891f4
	if (!ctx.cr6.eq) goto loc_881891F4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x881891bc
	if (!ctx.cr6.eq) goto loc_881891BC;
	// lwz r9,4(r8)
	ctx.current_instruction = 0x881891A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r8,8(r8)
	ctx.current_instruction = 0x881891A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x88189244
	goto loc_88189244;
loc_881891BC:
	// lwz r7,40(r8)
	ctx.current_instruction = 0x881891BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// lwz r3,4(r8)
	ctx.current_instruction = 0x881891C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// lwz r6,8(r8)
	ctx.current_instruction = 0x881891C8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// xor r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// mullw r7,r3,r11
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// srawi r3,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 3;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x88189248
	goto loc_88189248;
loc_881891F4:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x88189210
	if (!ctx.cr6.eq) goto loc_88189210;
	// lwz r7,4(r8)
	ctx.current_instruction = 0x881891FC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,8(r8)
	ctx.current_instruction = 0x88189200;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// b 0x88189238
	goto loc_88189238;
loc_88189210:
	// lwz r7,40(r8)
	ctx.current_instruction = 0x88189210;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// lwz r6,8(r8)
	ctx.current_instruction = 0x88189214;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// lwz r3,4(r8)
	ctx.current_instruction = 0x8818921C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// subfic r8,r6,1
	ctx.xer.ca = ctx.r6.u32 <= 1;
	ctx.r8.u64 = static_cast<uint64_t>(1) - ctx.r6.u64;
	// xor r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r9,r5,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r5.u64;
	// mullw r6,r3,r11
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_88189238:
	// srawi r3,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 3;
	// mullw r11,r5,r10
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
loc_88189244:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_88189248:
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x88189274
	if (!ctx.cr6.gt) goto loc_88189274;
loc_88189254:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881ece80
	ctx.lr = 0x88189264;
	sub_881ECE80(ctx, base);
loc_88189264:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bne 0x88189254
	if (!ctx.cr0.eq) goto loc_88189254;
loc_88189274:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88189280:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881971C0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881971C0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881971C0;
	ctx.current_instruction = 0x881971C0;
	uint32_t ea{};
	// vspltisb v0,15
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0xF)));
	// srawi. r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
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
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r8,-32
	ctx.r8.s64 = -32;
	// li r7,-16
	ctx.r7.s64 = -16;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// li r9,16
	ctx.r9.s64 = 16;
loc_881971E8:
	// lvx128 v63,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v13,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v12,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v60,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v11,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v59,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v8,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v58,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v10,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v9,v58,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddsbs v13,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.s8), simde_mm_load_si128((simde__m128i*)ctx.v13.s8)));
	// vaddsbs v12,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.s8), simde_mm_load_si128((simde__m128i*)ctx.v12.s8)));
	// vaddsbs v11,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.s8), simde_mm_load_si128((simde__m128i*)ctx.v11.s8)));
	// vaddsbs v8,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.s8), simde_mm_load_si128((simde__m128i*)ctx.v8.s8)));
	// vaddsbs v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.s8), simde_mm_load_si128((simde__m128i*)ctx.v10.s8)));
	// vaddsbs v6,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.s8), simde_mm_load_si128((simde__m128i*)ctx.v9.s8)));
	// vxor128 v57,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v56,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v55,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v54,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v53,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v57,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v52,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v56,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stvx128 v53,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// bdnz 0x881971e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881971E8;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8819A1F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8819A1F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8819A1F0) {
			switch (rex_dispatch_address) {
				case 0x8819A1F8:
				case 0x8819A518:
				case 0x8819A698:
				case 0x8819A6B4:
				case 0x8819A7BC:
				case 0x8819A7F0:
				case 0x8819A800:
				case 0x8819A80C:
				case 0x8819A84C:
				case 0x8819A954:
				case 0x8819AAB8:
				case 0x8819AB28:
				case 0x8819AB5C:
				case 0x8819AC60:
				case 0x8819AC8C:
				case 0x8819ADA4:
				case 0x8819AE0C:
				case 0x8819AEB4:
				case 0x8819AF44:
				case 0x8819B094:
				case 0x8819B174:
				case 0x8819B248:
				case 0x8819B268:
				case 0x8819B2F4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8819A1F0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8819A1F8: goto loc_8819A1F8;
		case 0x8819A518: goto loc_8819A518;
		case 0x8819A698: goto loc_8819A698;
		case 0x8819A6B4: goto loc_8819A6B4;
		case 0x8819A7BC: goto loc_8819A7BC;
		case 0x8819A7F0: goto loc_8819A7F0;
		case 0x8819A800: goto loc_8819A800;
		case 0x8819A80C: goto loc_8819A80C;
		case 0x8819A84C: goto loc_8819A84C;
		case 0x8819A954: goto loc_8819A954;
		case 0x8819AAB8: goto loc_8819AAB8;
		case 0x8819AB28: goto loc_8819AB28;
		case 0x8819AB5C: goto loc_8819AB5C;
		case 0x8819AC60: goto loc_8819AC60;
		case 0x8819AC8C: goto loc_8819AC8C;
		case 0x8819ADA4: goto loc_8819ADA4;
		case 0x8819AE0C: goto loc_8819AE0C;
		case 0x8819AEB4: goto loc_8819AEB4;
		case 0x8819AF44: goto loc_8819AF44;
		case 0x8819B094: goto loc_8819B094;
		case 0x8819B174: goto loc_8819B174;
		case 0x8819B248: goto loc_8819B248;
		case 0x8819B268: goto loc_8819B268;
		case 0x8819B2F4: goto loc_8819B2F4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8819A1F8;
	__savegprlr_14(ctx, base);
loc_8819A1F8:
	// stwu r1,-752(r1)
	ctx.current_instruction = 0x8819A1F8;
	ea = -752 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,228(r3)
	ctx.current_instruction = 0x8819A200;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r9,220(r3)
	ctx.current_instruction = 0x8819A204;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r10,3776(r3)
	ctx.current_instruction = 0x8819A20C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,224(r3)
	ctx.current_instruction = 0x8819A214;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r3,232(r3)
	ctx.current_instruction = 0x8819A220;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// lwz r8,3780(r31)
	ctx.current_instruction = 0x8819A224;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// stw r10,276(r1)
	ctx.current_instruction = 0x8819A22C;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// addi r9,r1,236
	ctx.r9.s64 = ctx.r1.s64 + 236;
	// stw r5,272(r1)
	ctx.current_instruction = 0x8819A234;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r5.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r30,280(r1)
	ctx.current_instruction = 0x8819A23C;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
	// addi r5,r1,328
	ctx.r5.s64 = ctx.r1.s64 + 328;
	// stw r7,284(r1)
	ctx.current_instruction = 0x8819A244;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r7.u32);
	// addi r29,r1,248
	ctx.r29.s64 = ctx.r1.s64 + 248;
	// stw r30,0(r6)
	ctx.current_instruction = 0x8819A24C;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// lwz r10,3784(r31)
	ctx.current_instruction = 0x8819A250;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// addi r28,r1,348
	ctx.r28.s64 = ctx.r1.s64 + 348;
	// stw r9,292(r1)
	ctx.current_instruction = 0x8819A258;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// addi r27,r1,240
	ctx.r27.s64 = ctx.r1.s64 + 240;
	// stw r8,296(r1)
	ctx.current_instruction = 0x8819A260;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r8.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,300(r1)
	ctx.current_instruction = 0x8819A268;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// stw r3,304(r1)
	ctx.current_instruction = 0x8819A270;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r3.u32);
	// addi r26,r1,228
	ctx.r26.s64 = ctx.r1.s64 + 228;
	// lwz r23,3828(r31)
	ctx.current_instruction = 0x8819A278;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 3828);
	// addi r25,r1,388
	ctx.r25.s64 = ctx.r1.s64 + 388;
	// stw r30,0(r4)
	ctx.current_instruction = 0x8819A280;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// stw r9,316(r1)
	ctx.current_instruction = 0x8819A284;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r9.u32);
	// addi r24,r1,232
	ctx.r24.s64 = ctx.r1.s64 + 232;
	// stw r29,312(r1)
	ctx.current_instruction = 0x8819A28C;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r29.u32);
	// addi r22,r1,408
	ctx.r22.s64 = ctx.r1.s64 + 408;
	// stw r30,320(r1)
	ctx.current_instruction = 0x8819A294;
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r30.u32);
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// stw r3,324(r1)
	ctx.current_instruction = 0x8819A29C;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// addi r21,r1,216
	ctx.r21.s64 = ctx.r1.s64 + 216;
	// lwz r10,3820(r31)
	ctx.current_instruction = 0x8819A2A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3820);
	// li r8,24
	ctx.r8.s64 = 24;
	// stw r30,0(r5)
	ctx.current_instruction = 0x8819A2AC;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// stw r23,336(r1)
	ctx.current_instruction = 0x8819A2B0;
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r23.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r27,332(r1)
	ctx.current_instruction = 0x8819A2B8;
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r27.u32);
	// li r16,1
	ctx.r16.s64 = 1;
	// stw r30,340(r1)
	ctx.current_instruction = 0x8819A2C0;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// addi r29,r1,428
	ctx.r29.s64 = ctx.r1.s64 + 428;
	// stw r7,344(r1)
	ctx.current_instruction = 0x8819A2C8;
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r7.u32);
	// stw r30,0(r28)
	ctx.current_instruction = 0x8819A2CC;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// lwz r10,3824(r31)
	ctx.current_instruction = 0x8819A2D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3824);
	// stw r9,356(r1)
	ctx.current_instruction = 0x8819A2D4;
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// stw r26,352(r1)
	ctx.current_instruction = 0x8819A2D8;
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r26.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,360(r1)
	ctx.current_instruction = 0x8819A2E0;
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r30.u32);
	// stw r3,364(r1)
	ctx.current_instruction = 0x8819A2E4;
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r3.u32);
	// lwz r9,3812(r31)
	ctx.current_instruction = 0x8819A2E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3812);
	// stw r30,0(r6)
	ctx.current_instruction = 0x8819A2EC;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// stw r24,372(r1)
	ctx.current_instruction = 0x8819A2F0;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r24.u32);
	// stw r5,376(r1)
	ctx.current_instruction = 0x8819A2F4;
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r5.u32);
	// stw r3,384(r1)
	ctx.current_instruction = 0x8819A2F8;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r3.u32);
	// stw r30,380(r1)
	ctx.current_instruction = 0x8819A2FC;
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r30.u32);
	// stw r30,0(r25)
	ctx.current_instruction = 0x8819A300;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// lwz r10,3792(r31)
	ctx.current_instruction = 0x8819A304;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// stw r9,396(r1)
	ctx.current_instruction = 0x8819A308;
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r9.u32);
	// stw r4,392(r1)
	ctx.current_instruction = 0x8819A30C;
	REX_STORE_U32(ctx.r1.u32 + 392, ctx.r4.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,400(r1)
	ctx.current_instruction = 0x8819A314;
	REX_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// stw r7,404(r1)
	ctx.current_instruction = 0x8819A318;
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r7.u32);
	// stw r30,0(r22)
	ctx.current_instruction = 0x8819A31C;
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// lwz r9,3796(r31)
	ctx.current_instruction = 0x8819A320;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// stw r6,416(r1)
	ctx.current_instruction = 0x8819A328;
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r6.u32);
	// stw r3,424(r1)
	ctx.current_instruction = 0x8819A32C;
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r3.u32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r21,412(r1)
	ctx.current_instruction = 0x8819A334;
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r21.u32);
	// addi r11,r1,220
	ctx.r11.s64 = ctx.r1.s64 + 220;
	// stw r30,420(r1)
	ctx.current_instruction = 0x8819A33C;
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r30.u32);
	// addi r10,r1,468
	ctx.r10.s64 = ctx.r1.s64 + 468;
	// stw r30,0(r29)
	ctx.current_instruction = 0x8819A344;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// lwz r7,272(r31)
	ctx.current_instruction = 0x8819A348;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// addi r6,r1,184
	ctx.r6.s64 = ctx.r1.s64 + 184;
	// stw r3,444(r1)
	ctx.current_instruction = 0x8819A350;
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r3.u32);
	// addi r29,r1,488
	ctx.r29.s64 = ctx.r1.s64 + 488;
	// stw r11,432(r1)
	ctx.current_instruction = 0x8819A358;
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r11.u32);
	// addi r28,r1,528
	ctx.r28.s64 = ctx.r1.s64 + 528;
	// stw r4,436(r1)
	ctx.current_instruction = 0x8819A360;
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r4.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r30,440(r1)
	ctx.current_instruction = 0x8819A368;
	REX_STORE_U32(ctx.r1.u32 + 440, ctx.r30.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r3,280(r31)
	ctx.current_instruction = 0x8819A370;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// addi r27,r1,176
	ctx.r27.s64 = ctx.r1.s64 + 176;
	// stw r30,0(r5)
	ctx.current_instruction = 0x8819A378;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// lwz r11,136(r31)
	ctx.current_instruction = 0x8819A37C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// stw r7,456(r1)
	ctx.current_instruction = 0x8819A384;
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r7.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r6,452(r1)
	ctx.current_instruction = 0x8819A38C;
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r6.u32);
	// rlwinm r21,r11,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,460(r1)
	ctx.current_instruction = 0x8819A394;
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r8.u32);
	// addi r6,r1,200
	ctx.r6.s64 = ctx.r1.s64 + 200;
	// stw r30,464(r1)
	ctx.current_instruction = 0x8819A39C;
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// li r26,192
	ctx.r26.s64 = 192;
	// lwz r23,14872(r31)
	ctx.current_instruction = 0x8819A3A4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 14872);
	// addi r25,r1,244
	ctx.r25.s64 = ctx.r1.s64 + 244;
	// lwz r22,3084(r31)
	ctx.current_instruction = 0x8819A3AC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 3084);
	// li r24,144
	ctx.r24.s64 = 144;
	// stw r30,0(r10)
	ctx.current_instruction = 0x8819A3B4;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r11,2964(r31)
	ctx.current_instruction = 0x8819A3B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2964);
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
	// lwz r19,1896(r31)
	ctx.current_instruction = 0x8819A3C0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r31.u32 + 1896);
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
	// lwz r15,1900(r31)
	ctx.current_instruction = 0x8819A3C8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r31.u32 + 1900);
	// addi r10,r11,735
	ctx.r10.s64 = ctx.r11.s64 + 735;
	// stw r3,476(r1)
	ctx.current_instruction = 0x8819A3D0;
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r3.u32);
	// addi r20,r1,584
	ctx.r20.s64 = ctx.r1.s64 + 584;
	// stw r4,472(r1)
	ctx.current_instruction = 0x8819A3D8;
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r4.u32);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,480(r1)
	ctx.current_instruction = 0x8819A3E0;
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r8.u32);
	// addi r3,r11,738
	ctx.r3.s64 = ctx.r11.s64 + 738;
	// stw r30,484(r1)
	ctx.current_instruction = 0x8819A3E8;
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r30.u32);
	// stw r30,0(r29)
	ctx.current_instruction = 0x8819A3EC;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r23,496(r1)
	ctx.current_instruction = 0x8819A3F0;
	REX_STORE_U32(ctx.r1.u32 + 496, ctx.r23.u32);
	// stw r22,516(r1)
	ctx.current_instruction = 0x8819A3F4;
	REX_STORE_U32(ctx.r1.u32 + 516, ctx.r22.u32);
	// stw r27,492(r1)
	ctx.current_instruction = 0x8819A3F8;
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r27.u32);
	// stw r9,500(r1)
	ctx.current_instruction = 0x8819A3FC;
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r9.u32);
	// stw r30,504(r1)
	ctx.current_instruction = 0x8819A400;
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r30.u32);
	// stw r21,508(r1)
	ctx.current_instruction = 0x8819A404;
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r21.u32);
	// stw r5,512(r1)
	ctx.current_instruction = 0x8819A408;
	REX_STORE_U32(ctx.r1.u32 + 512, ctx.r5.u32);
	// stw r7,520(r1)
	ctx.current_instruction = 0x8819A40C;
	REX_STORE_U32(ctx.r1.u32 + 520, ctx.r7.u32);
	// stw r30,524(r1)
	ctx.current_instruction = 0x8819A410;
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r30.u32);
	// stw r30,0(r28)
	ctx.current_instruction = 0x8819A414;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// lwz r10,2092(r31)
	ctx.current_instruction = 0x8819A418;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2092);
	// stw r30,240(r1)
	ctx.current_instruction = 0x8819A41C;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stw r30,228(r1)
	ctx.current_instruction = 0x8819A420;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r30,232(r1)
	ctx.current_instruction = 0x8819A424;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// stw r30,212(r1)
	ctx.current_instruction = 0x8819A428;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r30,216(r1)
	ctx.current_instruction = 0x8819A42C;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r30,220(r1)
	ctx.current_instruction = 0x8819A430;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// stw r19,536(r1)
	ctx.current_instruction = 0x8819A434;
	REX_STORE_U32(ctx.r1.u32 + 536, ctx.r19.u32);
	// stw r15,556(r1)
	ctx.current_instruction = 0x8819A438;
	REX_STORE_U32(ctx.r1.u32 + 556, ctx.r15.u32);
	// stw r6,532(r1)
	ctx.current_instruction = 0x8819A43C;
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r6.u32);
	// stw r26,540(r1)
	ctx.current_instruction = 0x8819A440;
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r26.u32);
	// stw r30,544(r1)
	ctx.current_instruction = 0x8819A444;
	REX_STORE_U32(ctx.r1.u32 + 544, ctx.r30.u32);
	// stw r21,548(r1)
	ctx.current_instruction = 0x8819A448;
	REX_STORE_U32(ctx.r1.u32 + 548, ctx.r21.u32);
	// stw r25,552(r1)
	ctx.current_instruction = 0x8819A44C;
	REX_STORE_U32(ctx.r1.u32 + 552, ctx.r25.u32);
	// stw r24,560(r1)
	ctx.current_instruction = 0x8819A450;
	REX_STORE_U32(ctx.r1.u32 + 560, ctx.r24.u32);
	// stw r30,564(r1)
	ctx.current_instruction = 0x8819A454;
	REX_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r21,568(r1)
	ctx.current_instruction = 0x8819A45C;
	REX_STORE_U32(ctx.r1.u32 + 568, ctx.r21.u32);
	// addi r8,r10,263
	ctx.r8.s64 = ctx.r10.s64 + 263;
	// stw r30,572(r1)
	ctx.current_instruction = 0x8819A464;
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r30.u32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,576(r1)
	ctx.current_instruction = 0x8819A46C;
	REX_STORE_U32(ctx.r1.u32 + 576, ctx.r30.u32);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,580(r1)
	ctx.current_instruction = 0x8819A474;
	REX_STORE_U32(ctx.r1.u32 + 580, ctx.r30.u32);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// std r30,0(r20)
	ctx.current_instruction = 0x8819A47C;
	REX_STORE_U64(ctx.r20.u32 + 0, ctx.r30.u64);
	// lwz r11,4016(r31)
	ctx.current_instruction = 0x8819A480;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4016);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwzx r5,r4,r31
	ctx.current_instruction = 0x8819A488;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// stw r5,2916(r31)
	ctx.current_instruction = 0x8819A48C;
	REX_STORE_U32(ctx.r31.u32 + 2916, ctx.r5.u32);
	// lwzx r4,r3,r31
	ctx.current_instruction = 0x8819A490;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r4,2928(r31)
	ctx.current_instruction = 0x8819A494;
	REX_STORE_U32(ctx.r31.u32 + 2928, ctx.r4.u32);
	// lwzx r3,r7,r31
	ctx.current_instruction = 0x8819A498;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stw r3,2096(r31)
	ctx.current_instruction = 0x8819A49C;
	REX_STORE_U32(ctx.r31.u32 + 2096, ctx.r3.u32);
	// lwz r10,2108(r6)
	ctx.current_instruction = 0x8819A4A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 2108);
	// stw r10,2100(r31)
	ctx.current_instruction = 0x8819A4A4;
	REX_STORE_U32(ctx.r31.u32 + 2100, ctx.r10.u32);
	// bne cr6,0x8819a4b4
	if (!ctx.cr6.eq) goto loc_8819A4B4;
	// stw r30,460(r31)
	ctx.current_instruction = 0x8819A4AC;
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r30.u32);
	// b 0x8819a4b8
	goto loc_8819A4B8;
loc_8819A4B4:
	// stw r16,460(r31)
	ctx.current_instruction = 0x8819A4B4;
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r16.u32);
loc_8819A4B8:
	// lwz r10,14840(r31)
	ctx.current_instruction = 0x8819A4B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14840);
	// lwz r8,3428(r31)
	ctx.current_instruction = 0x8819A4BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3428);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r6,r7,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8819a4e0
	if (ctx.cr6.eq) goto loc_8819A4E0;
	// stw r9,14848(r31)
	ctx.current_instruction = 0x8819A4D4;
	REX_STORE_U32(ctx.r31.u32 + 14848, ctx.r9.u32);
	// stw r10,14844(r31)
	ctx.current_instruction = 0x8819A4D8;
	REX_STORE_U32(ctx.r31.u32 + 14844, ctx.r10.u32);
	// b 0x8819a4e8
	goto loc_8819A4E8;
loc_8819A4E0:
	// stw r9,14844(r31)
	ctx.current_instruction = 0x8819A4E0;
	REX_STORE_U32(ctx.r31.u32 + 14844, ctx.r9.u32);
	// stw r10,14848(r31)
	ctx.current_instruction = 0x8819A4E4;
	REX_STORE_U32(ctx.r31.u32 + 14848, ctx.r10.u32);
loc_8819A4E8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8819a4fc
	if (ctx.cr6.eq) goto loc_8819A4FC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x8819a500
	if (!ctx.cr6.eq) goto loc_8819A500;
loc_8819A4FC:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8819A500:
	// lwz r10,1976(r31)
	ctx.current_instruction = 0x8819A500;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,76(r10)
	ctx.current_instruction = 0x8819A508;
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// lwz r4,248(r31)
	ctx.current_instruction = 0x8819A50C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r3,1976(r31)
	ctx.current_instruction = 0x8819A510;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// bl 0x881b58f8
	ctx.lr = 0x8819A518;
	sub_881B58F8(ctx, base);
loc_8819A518:
	// lwz r11,248(r31)
	ctx.current_instruction = 0x8819A518;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x8819a534
	if (!ctx.cr6.lt) goto loc_8819A534;
	// addi r11,r31,2468
	ctx.r11.s64 = ctx.r31.s64 + 2468;
	// addi r10,r31,2484
	ctx.r10.s64 = ctx.r31.s64 + 2484;
	// addi r9,r31,2524
	ctx.r9.s64 = ctx.r31.s64 + 2524;
	// b 0x8819a558
	goto loc_8819A558;
loc_8819A534:
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bge cr6,0x8819a54c
	if (!ctx.cr6.lt) goto loc_8819A54C;
	// addi r11,r31,2456
	ctx.r11.s64 = ctx.r31.s64 + 2456;
	// addi r10,r31,2496
	ctx.r10.s64 = ctx.r31.s64 + 2496;
	// addi r9,r31,2536
	ctx.r9.s64 = ctx.r31.s64 + 2536;
	// b 0x8819a558
	goto loc_8819A558;
loc_8819A54C:
	// addi r11,r31,2444
	ctx.r11.s64 = ctx.r31.s64 + 2444;
	// addi r10,r31,2508
	ctx.r10.s64 = ctx.r31.s64 + 2508;
	// addi r9,r31,2548
	ctx.r9.s64 = ctx.r31.s64 + 2548;
loc_8819A558:
	// stw r9,2560(r31)
	ctx.current_instruction = 0x8819A558;
	REX_STORE_U32(ctx.r31.u32 + 2560, ctx.r9.u32);
	// stw r10,2520(r31)
	ctx.current_instruction = 0x8819A55C;
	REX_STORE_U32(ctx.r31.u32 + 2520, ctx.r10.u32);
	// lwz r9,3776(r31)
	ctx.current_instruction = 0x8819A560;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// lwz r10,220(r31)
	ctx.current_instruction = 0x8819A564;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// stw r11,2480(r31)
	ctx.current_instruction = 0x8819A568;
	REX_STORE_U32(ctx.r31.u32 + 2480, ctx.r11.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,224(r31)
	ctx.current_instruction = 0x8819A570;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r8,3780(r31)
	ctx.current_instruction = 0x8819A574;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r7,3784(r31)
	ctx.current_instruction = 0x8819A578;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r9,3820(r31)
	ctx.current_instruction = 0x8819A57C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3820);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r8,3824(r31)
	ctx.current_instruction = 0x8819A588;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3824);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,3792(r31)
	ctx.current_instruction = 0x8819A590;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// lwz r9,3796(r31)
	ctx.current_instruction = 0x8819A594;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r29,3828(r31)
	ctx.current_instruction = 0x8819A59C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 3828);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r28,3812(r31)
	ctx.current_instruction = 0x8819A5A4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 3812);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r27,15964(r31)
	ctx.current_instruction = 0x8819A5AC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 15964);
	// stw r6,252(r1)
	ctx.current_instruction = 0x8819A5B0;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// stw r5,236(r1)
	ctx.current_instruction = 0x8819A5B4;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r5.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r4,248(r1)
	ctx.current_instruction = 0x8819A5BC;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r4.u32);
	// stw r3,228(r1)
	ctx.current_instruction = 0x8819A5C0;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// stw r8,232(r1)
	ctx.current_instruction = 0x8819A5C4;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// stw r7,216(r1)
	ctx.current_instruction = 0x8819A5C8;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r7.u32);
	// stw r29,240(r1)
	ctx.current_instruction = 0x8819A5CC;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// stw r9,220(r1)
	ctx.current_instruction = 0x8819A5D0;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// stw r28,212(r1)
	ctx.current_instruction = 0x8819A5D4;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// beq cr6,0x8819a61c
	if (ctx.cr6.eq) goto loc_8819A61C;
	// lwz r9,15968(r31)
	ctx.current_instruction = 0x8819A5DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15968);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8819a61c
	if (ctx.cr6.eq) goto loc_8819A61C;
	// lwz r9,15972(r31)
	ctx.current_instruction = 0x8819A5E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15972);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8819a61c
	if (!ctx.cr6.eq) goto loc_8819A61C;
	// lwz r8,15976(r31)
	ctx.current_instruction = 0x8819A5F4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15976);
	// lwz r9,0(r8)
	ctx.current_instruction = 0x8819A5F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,212(r1)
	ctx.current_instruction = 0x8819A600;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// lwz r10,4(r8)
	ctx.current_instruction = 0x8819A604;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,216(r1)
	ctx.current_instruction = 0x8819A60C;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r6.u32);
	// lwz r10,8(r8)
	ctx.current_instruction = 0x8819A610;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,220(r1)
	ctx.current_instruction = 0x8819A618;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
loc_8819A61C:
	// lwz r11,4016(r31)
	ctx.current_instruction = 0x8819A61C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4016);
	// lwz r9,136(r31)
	ctx.current_instruction = 0x8819A620;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// lwz r8,272(r31)
	ctx.current_instruction = 0x8819A628;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r7,280(r31)
	ctx.current_instruction = 0x8819A62C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// addic r5,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// lwz r6,14872(r31)
	ctx.current_instruction = 0x8819A638;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 14872);
	// lwz r4,3084(r31)
	ctx.current_instruction = 0x8819A63C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3084);
	// subfe r10,r5,r10
	temp.u8 = (~ctx.r5.u32 + ctx.r10.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,1896(r31)
	ctx.current_instruction = 0x8819A644;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1896);
	// lwz r5,1900(r31)
	ctx.current_instruction = 0x8819A648;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1900);
	// stw r8,184(r1)
	ctx.current_instruction = 0x8819A64C;
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// stw r7,224(r1)
	ctx.current_instruction = 0x8819A650;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// stw r6,176(r1)
	ctx.current_instruction = 0x8819A654;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// stw r4,204(r1)
	ctx.current_instruction = 0x8819A658;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// stw r3,200(r1)
	ctx.current_instruction = 0x8819A65C;
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// stw r5,244(r1)
	ctx.current_instruction = 0x8819A660;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r5.u32);
	// stw r9,344(r31)
	ctx.current_instruction = 0x8819A664;
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r9.u32);
	// stw r10,460(r31)
	ctx.current_instruction = 0x8819A668;
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r10.u32);
	// beq cr6,0x8819a67c
	if (ctx.cr6.eq) goto loc_8819A67C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x8819a680
	if (!ctx.cr6.eq) goto loc_8819A680;
loc_8819A67C:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8819A680:
	// lwz r10,1976(r31)
	ctx.current_instruction = 0x8819A680;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,76(r10)
	ctx.current_instruction = 0x8819A688;
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// lwz r4,248(r31)
	ctx.current_instruction = 0x8819A68C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r3,1976(r31)
	ctx.current_instruction = 0x8819A690;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// bl 0x881b58f8
	ctx.lr = 0x8819A698;
	sub_881B58F8(ctx, base);
loc_8819A698:
	// lwz r11,144(r31)
	ctx.current_instruction = 0x8819A698;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,464(r31)
	ctx.current_instruction = 0x8819A6A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x88052d90
	ctx.lr = 0x8819A6B4;
	sub_88052D90(ctx, base);
loc_8819A6B4:
	// lwz r8,140(r31)
	ctx.current_instruction = 0x8819A6B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,192(r1)
	ctx.current_instruction = 0x8819A6BC;
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r30,188(r1)
	ctx.current_instruction = 0x8819A6C0;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r30,180(r1)
	ctx.current_instruction = 0x8819A6C8;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// ble cr6,0x8819b228
	if (!ctx.cr6.gt) goto loc_8819B228;
	// li r14,2
	ctx.r14.s64 = 2;
	// li r15,128
	ctx.r15.s64 = 128;
	// li r19,16384
	ctx.r19.s64 = 16384;
loc_8819A6DC:
	// lwz r22,252(r1)
	ctx.current_instruction = 0x8819A6DC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r21,236(r1)
	ctx.current_instruction = 0x8819A6E4;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r27,248(r1)
	ctx.current_instruction = 0x8819A6E8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// beq cr6,0x8819a708
	if (ctx.cr6.eq) goto loc_8819A708;
	// lwz r10,21968(r31)
	ctx.current_instruction = 0x8819A6F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21968);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// lwzx r8,r10,r9
	ctx.current_instruction = 0x8819A6FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8819a70c
	if (ctx.cr6.eq) goto loc_8819A70C;
loc_8819A708:
	// mr r20,r16
	ctx.r20.u64 = ctx.r16.u64;
loc_8819A70C:
	// lwz r10,344(r31)
	ctx.current_instruction = 0x8819A70C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,344(r31)
	ctx.current_instruction = 0x8819A71C;
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r8.u32);
	// bne cr6,0x8819a73c
	if (!ctx.cr6.eq) goto loc_8819A73C;
	// lwz r10,1896(r31)
	ctx.current_instruction = 0x8819A724;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1896);
	// lwz r9,1900(r31)
	ctx.current_instruction = 0x8819A728;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1900);
	// lwz r8,14872(r31)
	ctx.current_instruction = 0x8819A72C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 14872);
	// stw r10,200(r1)
	ctx.current_instruction = 0x8819A730;
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// stw r9,244(r1)
	ctx.current_instruction = 0x8819A734;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stw r8,176(r1)
	ctx.current_instruction = 0x8819A738;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
loc_8819A73C:
	// lwz r10,21940(r31)
	ctx.current_instruction = 0x8819A73C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21940);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8819a8ac
	if (ctx.cr6.eq) goto loc_8819A8AC;
	// lwz r10,21968(r31)
	ctx.current_instruction = 0x8819A748;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21968);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.current_instruction = 0x8819A750;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8819a8ac
	if (ctx.cr6.eq) goto loc_8819A8AC;
	// lwz r11,21976(r31)
	ctx.current_instruction = 0x8819A75C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21976);
	// lwz r29,84(r31)
	ctx.current_instruction = 0x8819A760;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,21976(r31)
	ctx.current_instruction = 0x8819A768;
	REX_STORE_U32(ctx.r31.u32 + 21976, ctx.r11.u32);
	// lwz r10,28(r29)
	ctx.current_instruction = 0x8819A76C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8819a7f0
	if (ctx.cr6.eq) goto loc_8819A7F0;
	// lwz r10,8(r29)
	ctx.current_instruction = 0x8819A778;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8819a7cc
	if (!ctx.cr6.lt) goto loc_8819A7CC;
loc_8819A78C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8819a7cc
	if (ctx.cr6.eq) goto loc_8819A7CC;
	// ld r9,0(r29)
	ctx.current_instruction = 0x8819A794;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r28,r11,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r11.u64;
	// std r6,0(r29)
	ctx.current_instruction = 0x8819A7A8;
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r6.u64);
	// stw r7,8(r29)
	ctx.current_instruction = 0x8819A7AC;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// bge 0x8819a7bc
	if (!ctx.cr0.lt) goto loc_8819A7BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88156678
	ctx.lr = 0x8819A7BC;
	sub_88156678(ctx, base);
loc_8819A7BC:
	// lwz r10,8(r29)
	ctx.current_instruction = 0x8819A7BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8819a78c
	if (ctx.cr6.gt) goto loc_8819A78C;
loc_8819A7CC:
	// ld r11,0(r29)
	ctx.current_instruction = 0x8819A7CC;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// clrldi r9,r28,32
	ctx.r9.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// subf. r8,r28,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r29)
	ctx.current_instruction = 0x8819A7DC;
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r7.u64);
	// stw r8,8(r29)
	ctx.current_instruction = 0x8819A7E0;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
	// bge 0x8819a7f0
	if (!ctx.cr0.lt) goto loc_8819A7F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88156678
	ctx.lr = 0x8819A7F0;
	sub_88156678(ctx, base);
loc_8819A7F0:
	// lwz r11,8(r29)
	ctx.current_instruction = 0x8819A7F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// bl 0x88156500
	ctx.lr = 0x8819A800;
	sub_88156500(ctx, base);
loc_8819A800:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,188(r1)
	ctx.current_instruction = 0x8819A804;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x881adb80
	ctx.lr = 0x8819A80C;
	sub_881ADB80(ctx, base);
loc_8819A80C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r16,1948(r31)
	ctx.current_instruction = 0x8819A810;
	REX_STORE_U32(ctx.r31.u32 + 1948, ctx.r16.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8819a884
	if (ctx.cr6.eq) goto loc_8819A884;
	// stw r30,20680(r31)
	ctx.current_instruction = 0x8819A81C;
	REX_STORE_U32(ctx.r31.u32 + 20680, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,20684(r31)
	ctx.current_instruction = 0x8819A824;
	REX_STORE_U32(ctx.r31.u32 + 20684, ctx.r30.u32);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// stw r14,288(r31)
	ctx.current_instruction = 0x8819A82C;
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r14.u32);
	// addi r9,r1,180
	ctx.r9.s64 = ctx.r1.s64 + 180;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,188
	ctx.r7.s64 = ctx.r1.s64 + 188;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819b310
	ctx.lr = 0x8819A84C;
	sub_8819B310(ctx, base);
loc_8819A84C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819b24c
	if (!ctx.cr6.eq) goto loc_8819B24C;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8819a864
	if (ctx.cr6.eq) goto loc_8819A864;
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// bne cr6,0x8819a868
	if (!ctx.cr6.eq) goto loc_8819A868;
loc_8819A864:
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
loc_8819A868:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x8819b228
	if (ctx.cr6.eq) goto loc_8819B228;
	// lwz r11,21976(r31)
	ctx.current_instruction = 0x8819A870;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21976);
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,21976(r31)
	ctx.current_instruction = 0x8819A87C;
	REX_STORE_U32(ctx.r31.u32 + 21976, ctx.r11.u32);
	// b 0x8819b204
	goto loc_8819B204;
loc_8819A884:
	// lwz r11,20680(r31)
	ctx.current_instruction = 0x8819A884;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8819aa88
	if (!ctx.cr6.eq) goto loc_8819AA88;
	// lwz r11,20684(r31)
	ctx.current_instruction = 0x8819A890;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8819aa88
	if (!ctx.cr6.eq) goto loc_8819AA88;
	// lwz r11,288(r31)
	ctx.current_instruction = 0x8819A89C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8819aa88
	if (!ctx.cr6.eq) goto loc_8819AA88;
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
loc_8819A8AC:
	// lwz r11,136(r31)
	ctx.current_instruction = 0x8819A8AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// stw r15,3000(r31)
	ctx.current_instruction = 0x8819A8B4;
	REX_STORE_U32(ctx.r31.u32 + 3000, ctx.r15.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r15,2996(r31)
	ctx.current_instruction = 0x8819A8BC;
	REX_STORE_U32(ctx.r31.u32 + 2996, ctx.r15.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r15,2992(r31)
	ctx.current_instruction = 0x8819A8C4;
	REX_STORE_U32(ctx.r31.u32 + 2992, ctx.r15.u32);
	// ble cr6,0x8819b190
	if (!ctx.cr6.gt) goto loc_8819B190;
	// lwz r11,176(r1)
	ctx.current_instruction = 0x8819A8CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
loc_8819A8D4:
	// sth r30,2(r11)
	ctx.current_instruction = 0x8819A8D4;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r30.u16);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lwz r11,176(r1)
	ctx.current_instruction = 0x8819A8DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// sth r30,0(r11)
	ctx.current_instruction = 0x8819A8E4;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,3416(r31)
	ctx.current_instruction = 0x8819A8E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3416);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r11,204(r1)
	ctx.current_instruction = 0x8819A8F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// beq cr6,0x8819a918
	if (ctx.cr6.eq) goto loc_8819A918;
	// lwz r10,224(r1)
	ctx.current_instruction = 0x8819A8F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r9,0(r10)
	ctx.current_instruction = 0x8819A8FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8819a918
	if (ctx.cr6.eq) goto loc_8819A918;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x8819A90C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x8819a924
	if (!ctx.cr6.eq) goto loc_8819A924;
loc_8819A918:
	// sth r30,2(r11)
	ctx.current_instruction = 0x8819A918;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r30.u16);
	// lwz r11,204(r1)
	ctx.current_instruction = 0x8819A91C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// sth r30,0(r11)
	ctx.current_instruction = 0x8819A920;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
loc_8819A924:
	// lwz r11,184(r1)
	ctx.current_instruction = 0x8819A924;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8819A930;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,2,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r9,0(r11)
	ctx.current_instruction = 0x8819A938;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,356(r31)
	ctx.current_instruction = 0x8819A93C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// stw r30,0(r8)
	ctx.current_instruction = 0x8819A940;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// stw r30,4(r8)
	ctx.current_instruction = 0x8819A944;
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// lwz r6,188(r1)
	ctx.current_instruction = 0x8819A948;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r4,184(r1)
	ctx.current_instruction = 0x8819A94C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x88199800
	ctx.lr = 0x8819A954;
	sub_88199800(ctx, base);
loc_8819A954:
	// lwz r11,4016(r31)
	ctx.current_instruction = 0x8819A954;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4016);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8819a96c
	if (ctx.cr6.eq) goto loc_8819A96C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8819a9c4
	if (!ctx.cr6.eq) goto loc_8819A9C4;
loc_8819A96C:
	// lwz r11,356(r31)
	ctx.current_instruction = 0x8819A96C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8819A970;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r9,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 15;
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r8,0(r11)
	ctx.current_instruction = 0x8819A97C;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwz r6,356(r31)
	ctx.current_instruction = 0x8819A980;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r5,0(r6)
	ctx.current_instruction = 0x8819A984;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwimi r4,r5,1,16,26
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFE0) | (ctx.r4.u64 & 0xFFFFFFFFFFFF001F);
	// rlwinm r3,r4,0,28,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r3,0(r6)
	ctx.current_instruction = 0x8819A994;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// lwz r11,356(r31)
	ctx.current_instruction = 0x8819A998;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8819A99C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// srawi r9,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 15;
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r8,4(r11)
	ctx.current_instruction = 0x8819A9A8;
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// lwz r11,356(r31)
	ctx.current_instruction = 0x8819A9AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r6,4(r11)
	ctx.current_instruction = 0x8819A9B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwimi r5,r6,1,16,26
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFE0) | (ctx.r5.u64 & 0xFFFFFFFFFFFF001F);
	// rlwinm r4,r5,0,28,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r4,4(r11)
	ctx.current_instruction = 0x8819A9C0;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_8819A9C4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8819b148
	if (!ctx.cr6.eq) goto loc_8819B148;
	// lwz r11,184(r1)
	ctx.current_instruction = 0x8819A9CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8819A9D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,24,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// stw r9,0(r11)
	ctx.current_instruction = 0x8819A9D8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,356(r31)
	ctx.current_instruction = 0x8819A9DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r7,0(r8)
	ctx.current_instruction = 0x8819A9E0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r6,r7,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8819b01c
	if (!ctx.cr6.eq) goto loc_8819B01C;
	// lwz r10,184(r1)
	ctx.current_instruction = 0x8819A9F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// lwz r9,0(r10)
	ctx.current_instruction = 0x8819A9F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8819aa38
	if (!ctx.cr6.eq) goto loc_8819AA38;
	// stb r30,8(r10)
	ctx.current_instruction = 0x8819AA08;
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r30.u8);
	// lwz r11,184(r1)
	ctx.current_instruction = 0x8819AA0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stb r30,9(r11)
	ctx.current_instruction = 0x8819AA10;
	REX_STORE_U8(ctx.r11.u32 + 9, ctx.r30.u8);
	// lwz r10,184(r1)
	ctx.current_instruction = 0x8819AA14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stb r30,10(r10)
	ctx.current_instruction = 0x8819AA18;
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r30.u8);
	// lwz r9,184(r1)
	ctx.current_instruction = 0x8819AA1C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stb r30,11(r9)
	ctx.current_instruction = 0x8819AA20;
	REX_STORE_U8(ctx.r9.u32 + 11, ctx.r30.u8);
	// lwz r8,184(r1)
	ctx.current_instruction = 0x8819AA24;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stb r30,12(r8)
	ctx.current_instruction = 0x8819AA28;
	REX_STORE_U8(ctx.r8.u32 + 12, ctx.r30.u8);
	// lwz r7,184(r1)
	ctx.current_instruction = 0x8819AA2C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stb r30,13(r7)
	ctx.current_instruction = 0x8819AA30;
	REX_STORE_U8(ctx.r7.u32 + 13, ctx.r30.u8);
	// lwz r10,184(r1)
	ctx.current_instruction = 0x8819AA34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
loc_8819AA38:
	// lwz r11,0(r10)
	ctx.current_instruction = 0x8819AA38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,27,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8819ad58
	if (ctx.cr6.eq) goto loc_8819AD58;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r29,r8,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x8819aa6c
	if (!ctx.cr6.eq) goto loc_8819AA6C;
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwimi r11,r9,5,24,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r11,0(r10)
	ctx.current_instruction = 0x8819AA64;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,184(r1)
	ctx.current_instruction = 0x8819AA68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
loc_8819AA6C:
	// lwz r11,0(r10)
	ctx.current_instruction = 0x8819AA6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r11,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x8819aae8
	if (!ctx.cr6.eq) goto loc_8819AAE8;
	// lwz r11,1776(r31)
	ctx.current_instruction = 0x8819AA7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// lwz r9,1780(r31)
	ctx.current_instruction = 0x8819AA80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// b 0x8819aaf0
	goto loc_8819AAF0;
loc_8819AA88:
	// stw r30,20680(r31)
	ctx.current_instruction = 0x8819AA88;
	REX_STORE_U32(ctx.r31.u32 + 20680, ctx.r30.u32);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// stw r30,20684(r31)
	ctx.current_instruction = 0x8819AA90;
	REX_STORE_U32(ctx.r31.u32 + 20684, ctx.r30.u32);
	// addi r9,r1,180
	ctx.r9.s64 = ctx.r1.s64 + 180;
	// stw r14,288(r31)
	ctx.current_instruction = 0x8819AA98;
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r14.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,188
	ctx.r7.s64 = ctx.r1.s64 + 188;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819b310
	ctx.lr = 0x8819AAB8;
	sub_8819B310(ctx, base);
loc_8819AAB8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819b258
	if (!ctx.cr6.eq) goto loc_8819B258;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x8819aacc
	if (!ctx.cr6.eq) goto loc_8819AACC;
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
loc_8819AACC:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x8819b228
	if (ctx.cr6.eq) goto loc_8819B228;
	// lwz r11,21976(r31)
	ctx.current_instruction = 0x8819AAD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21976);
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,21976(r31)
	ctx.current_instruction = 0x8819AAE0;
	REX_STORE_U32(ctx.r31.u32 + 21976, ctx.r11.u32);
	// b 0x8819b204
	goto loc_8819B204;
loc_8819AAE8:
	// lwz r11,1784(r31)
	ctx.current_instruction = 0x8819AAE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// lwz r9,1788(r31)
	ctx.current_instruction = 0x8819AAEC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1788);
loc_8819AAF0:
	// lwz r10,15536(r31)
	ctx.current_instruction = 0x8819AAF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,188(r1)
	ctx.current_instruction = 0x8819AAF8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// blt cr6,0x8819ab2c
	if (ctx.cr6.lt) goto loc_8819AB2C;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stw r20,92(r1)
	ctx.current_instruction = 0x8819AB08;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// addi r10,r1,196
	ctx.r10.s64 = ctx.r1.s64 + 196;
	// lwz r7,140(r31)
	ctx.current_instruction = 0x8819AB10;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// stw r8,84(r1)
	ctx.current_instruction = 0x8819AB14;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,136(r31)
	ctx.current_instruction = 0x8819AB20;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x881c2008
	ctx.lr = 0x8819AB28;
	sub_881C2008(ctx, base);
loc_8819AB28:
	// b 0x8819ab5c
	goto loc_8819AB5C;
loc_8819AB2C:
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// stw r20,100(r1)
	ctx.current_instruction = 0x8819AB30;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r8,140(r31)
	ctx.current_instruction = 0x8819AB38;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// stw r7,92(r1)
	ctx.current_instruction = 0x8819AB3C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r3,84(r1)
	ctx.current_instruction = 0x8819AB44;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r7,136(r31)
	ctx.current_instruction = 0x8819AB50;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c1d18
	ctx.lr = 0x8819AB5C;
	sub_881C1D18(ctx, base);
loc_8819AB5C:
	// lwz r11,184(r1)
	ctx.current_instruction = 0x8819AB5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8819AB60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8819abd8
	if (!ctx.cr6.eq) goto loc_8819ABD8;
	// lwz r10,356(r31)
	ctx.current_instruction = 0x8819AB70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r11,420(r31)
	ctx.current_instruction = 0x8819AB74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// lwz r9,196(r1)
	ctx.current_instruction = 0x8819AB78;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r8,428(r31)
	ctx.current_instruction = 0x8819AB7C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r7,176(r1)
	ctx.current_instruction = 0x8819AB80;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lhz r6,0(r10)
	ctx.current_instruction = 0x8819AB84;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ctx.r8.u64;
	// subf r3,r11,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r11.u64;
	// sth r3,0(r7)
	ctx.current_instruction = 0x8819AB9C;
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r3.u16);
	// lwz r6,356(r31)
	ctx.current_instruction = 0x8819ABA0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r11,424(r31)
	ctx.current_instruction = 0x8819ABA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r9,208(r1)
	ctx.current_instruction = 0x8819ABA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r8,432(r31)
	ctx.current_instruction = 0x8819ABAC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 432);
	// lwz r7,176(r1)
	ctx.current_instruction = 0x8819ABB0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,0(r6)
	ctx.current_instruction = 0x8819ABB4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// srawi r10,r4,20
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r10,r3,r8
	ctx.r10.u64 = ctx.r3.u64 & ctx.r8.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// sth r9,2(r7)
	ctx.current_instruction = 0x8819ABD0;
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r9.u16);
	// b 0x8819abf0
	goto loc_8819ABF0;
loc_8819ABD8:
	// lwz r11,196(r1)
	ctx.current_instruction = 0x8819ABD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,176(r1)
	ctx.current_instruction = 0x8819ABDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// sth r11,0(r10)
	ctx.current_instruction = 0x8819ABE0;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r7,176(r1)
	ctx.current_instruction = 0x8819ABE4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r8,208(r1)
	ctx.current_instruction = 0x8819ABE8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// sth r8,2(r7)
	ctx.current_instruction = 0x8819ABEC;
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r8.u16);
loc_8819ABF0:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x8819ad58
	if (!ctx.cr6.eq) goto loc_8819AD58;
	// lwz r11,184(r1)
	ctx.current_instruction = 0x8819ABF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,176(r1)
	ctx.current_instruction = 0x8819AC00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.current_instruction = 0x8819AC08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r29,0(r10)
	ctx.current_instruction = 0x8819AC0C;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwimi r9,r16,7,24,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 7) & 0xE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF1F);
	// lhz r27,2(r10)
	ctx.current_instruction = 0x8819AC14;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// stw r9,0(r11)
	ctx.current_instruction = 0x8819AC18;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lwz r8,176(r1)
	ctx.current_instruction = 0x8819AC20;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// sth r30,2(r8)
	ctx.current_instruction = 0x8819AC24;
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r30.u16);
	// lwz r7,176(r1)
	ctx.current_instruction = 0x8819AC28;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// sth r30,0(r7)
	ctx.current_instruction = 0x8819AC2C;
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r30.u16);
	// lwz r6,15536(r31)
	ctx.current_instruction = 0x8819AC30;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// lwz r5,188(r1)
	ctx.current_instruction = 0x8819AC34;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// blt cr6,0x8819ac64
	if (ctx.cr6.lt) goto loc_8819AC64;
	// stw r20,92(r1)
	ctx.current_instruction = 0x8819AC40;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// addi r10,r1,196
	ctx.r10.s64 = ctx.r1.s64 + 196;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8819AC48;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r9,1780(r31)
	ctx.current_instruction = 0x8819AC4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// lwz r8,1776(r31)
	ctx.current_instruction = 0x8819AC50;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// lwz r7,140(r31)
	ctx.current_instruction = 0x8819AC54;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r6,136(r31)
	ctx.current_instruction = 0x8819AC58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x881c2008
	ctx.lr = 0x8819AC60;
	sub_881C2008(ctx, base);
loc_8819AC60:
	// b 0x8819ac8c
	goto loc_8819AC8C;
loc_8819AC64:
	// addi r9,r1,196
	ctx.r9.s64 = ctx.r1.s64 + 196;
	// stw r11,92(r1)
	ctx.current_instruction = 0x8819AC68;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r10,1780(r31)
	ctx.current_instruction = 0x8819AC70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// stw r9,84(r1)
	ctx.current_instruction = 0x8819AC74;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r9,1776(r31)
	ctx.current_instruction = 0x8819AC78;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// lwz r8,140(r31)
	ctx.current_instruction = 0x8819AC7C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r7,136(r31)
	ctx.current_instruction = 0x8819AC80;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// stw r20,100(r1)
	ctx.current_instruction = 0x8819AC84;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// bl 0x881c1d18
	ctx.lr = 0x8819AC8C;
	sub_881C1D18(ctx, base);
loc_8819AC8C:
	// lwz r11,184(r1)
	ctx.current_instruction = 0x8819AC8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8819AC90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8819ad18
	if (!ctx.cr6.eq) goto loc_8819AD18;
	// lwz r11,356(r31)
	ctx.current_instruction = 0x8819ACA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8819ACA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8819ad18
	if (ctx.cr6.eq) goto loc_8819AD18;
	// lhz r10,4(r11)
	ctx.current_instruction = 0x8819ACB4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r11,420(r31)
	ctx.current_instruction = 0x8819ACB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r9,196(r1)
	ctx.current_instruction = 0x8819ACC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r8,428(r31)
	ctx.current_instruction = 0x8819ACC4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,176(r1)
	ctx.current_instruction = 0x8819ACCC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ctx.r8.u64;
	// subf r4,r11,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r11.u64;
	// sth r4,0(r7)
	ctx.current_instruction = 0x8819ACDC;
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r4.u16);
	// lwz r9,208(r1)
	ctx.current_instruction = 0x8819ACE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,356(r31)
	ctx.current_instruction = 0x8819ACE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r11,424(r31)
	ctx.current_instruction = 0x8819ACE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r8,432(r31)
	ctx.current_instruction = 0x8819ACEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 432);
	// lwz r7,176(r1)
	ctx.current_instruction = 0x8819ACF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r6,4(r10)
	ctx.current_instruction = 0x8819ACF4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r5,r6,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// srawi r10,r5,20
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 & ctx.r8.u64;
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// sth r11,2(r7)
	ctx.current_instruction = 0x8819AD10;
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r11.u16);
	// b 0x8819ad30
	goto loc_8819AD30;
loc_8819AD18:
	// lwz r11,196(r1)
	ctx.current_instruction = 0x8819AD18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,176(r1)
	ctx.current_instruction = 0x8819AD1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// sth r11,0(r10)
	ctx.current_instruction = 0x8819AD20;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r8,208(r1)
	ctx.current_instruction = 0x8819AD24;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r7,176(r1)
	ctx.current_instruction = 0x8819AD28;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// sth r8,2(r7)
	ctx.current_instruction = 0x8819AD2C;
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r8.u16);
loc_8819AD30:
	// lwz r11,176(r1)
	ctx.current_instruction = 0x8819AD30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lhz r26,0(r11)
	ctx.current_instruction = 0x8819AD34;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r25,2(r11)
	ctx.current_instruction = 0x8819AD38;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// sth r29,0(r11)
	ctx.current_instruction = 0x8819AD3C;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r29.u16);
	// lwz r11,176(r1)
	ctx.current_instruction = 0x8819AD40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// sth r27,2(r11)
	ctx.current_instruction = 0x8819AD44;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r27.u16);
	// lwz r11,184(r1)
	ctx.current_instruction = 0x8819AD48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8819AD4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r16,6,24,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 6) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r10,0(r11)
	ctx.current_instruction = 0x8819AD54;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8819AD58:
	// addi r9,r1,268
	ctx.r9.s64 = ctx.r1.s64 + 268;
	// lwz r10,4016(r31)
	ctx.current_instruction = 0x8819AD5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4016);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// lwz r11,204(r1)
	ctx.current_instruction = 0x8819AD64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// stw r9,92(r1)
	ctx.current_instruction = 0x8819AD68;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -3;
	// stw r8,84(r1)
	ctx.current_instruction = 0x8819AD70;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,264
	ctx.r10.s64 = ctx.r1.s64 + 264;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r8,188(r1)
	ctx.current_instruction = 0x8819AD7C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// addi r9,r1,260
	ctx.r9.s64 = ctx.r1.s64 + 260;
	// lhz r5,2(r11)
	ctx.current_instruction = 0x8819AD84;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lhz r4,0(r11)
	ctx.current_instruction = 0x8819AD8C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c4298
	ctx.lr = 0x8819ADA4;
	sub_881C4298(ctx, base);
loc_8819ADA4:
	// lwz r6,184(r1)
	ctx.current_instruction = 0x8819ADA4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lwz r3,0(r6)
	ctx.current_instruction = 0x8819ADB4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r3,27,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r29,3100(r31)
	ctx.current_instruction = 0x8819ADC0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 3100);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bne cr6,0x8819ae64
	if (!ctx.cr6.eq) goto loc_8819AE64;
	// lwz r11,204(r1)
	ctx.current_instruction = 0x8819ADCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r27,192(r1)
	ctx.current_instruction = 0x8819ADD4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,116(r1)
	ctx.current_instruction = 0x8819ADDC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,108(r1)
	ctx.current_instruction = 0x8819ADE4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lhz r5,2(r11)
	ctx.current_instruction = 0x8819ADE8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r11,0(r11)
	ctx.current_instruction = 0x8819ADEC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// stw r27,84(r1)
	ctx.current_instruction = 0x8819ADF0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// extsh r26,r5
	ctx.r26.s64 = ctx.r5.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r5,188(r1)
	ctx.current_instruction = 0x8819ADFC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// stw r26,100(r1)
	ctx.current_instruction = 0x8819AE00;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r11,92(r1)
	ctx.current_instruction = 0x8819AE04;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8819AE0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819AE0C:
	// lwz r10,180(r1)
	ctx.current_instruction = 0x8819AE0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,260(r1)
	ctx.current_instruction = 0x8819AE10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r8,1776(r31)
	ctx.current_instruction = 0x8819AE18;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r7,r8
	ctx.current_instruction = 0x8819AE20;
	REX_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u16);
	// lwz r4,180(r1)
	ctx.current_instruction = 0x8819AE24;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,1780(r31)
	ctx.current_instruction = 0x8819AE2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// lwz r5,264(r1)
	ctx.current_instruction = 0x8819AE30;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// sthx r5,r3,r11
	ctx.current_instruction = 0x8819AE34;
	REX_STORE_U16(ctx.r3.u32 + ctx.r11.u32, ctx.r5.u16);
	// lwz r9,256(r1)
	ctx.current_instruction = 0x8819AE38;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r7,180(r1)
	ctx.current_instruction = 0x8819AE3C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1784(r31)
	ctx.current_instruction = 0x8819AE44;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// sthx r9,r6,r8
	ctx.current_instruction = 0x8819AE48;
	REX_STORE_U16(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u16);
	// lwz r4,268(r1)
	ctx.current_instruction = 0x8819AE4C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r3,1788(r31)
	ctx.current_instruction = 0x8819AE50;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1788);
	// lwz r11,180(r1)
	ctx.current_instruction = 0x8819AE54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r4,r10,r3
	ctx.current_instruction = 0x8819AE5C;
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u16);
	// b 0x8819b00c
	goto loc_8819B00C;
loc_8819AE64:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lwz r11,176(r1)
	ctx.current_instruction = 0x8819AE68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,192(r1)
	ctx.current_instruction = 0x8819AE6C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// bne cr6,0x8819af0c
	if (!ctx.cr6.eq) goto loc_8819AF0C;
	// extsh r4,r26
	ctx.r4.s64 = ctx.r26.s16;
	// lhz r3,2(r11)
	ctx.current_instruction = 0x8819AE78;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r11,0(r11)
	ctx.current_instruction = 0x8819AE7C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r10,r25
	ctx.r10.s64 = ctx.r25.s16;
	// stw r4,92(r1)
	ctx.current_instruction = 0x8819AE84;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// stw r10,100(r1)
	ctx.current_instruction = 0x8819AE90;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r5,84(r1)
	ctx.current_instruction = 0x8819AE94;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r4,116(r1)
	ctx.current_instruction = 0x8819AE9C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r3,108(r1)
	ctx.current_instruction = 0x8819AEA4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,188(r1)
	ctx.current_instruction = 0x8819AEAC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// bctrl 
	ctx.lr = 0x8819AEB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819AEB4:
	// lwz r11,180(r1)
	ctx.current_instruction = 0x8819AEB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,1776(r31)
	ctx.current_instruction = 0x8819AEB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r9,r10
	ctx.current_instruction = 0x8819AEC4;
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r26.u16);
	// lwz r7,180(r1)
	ctx.current_instruction = 0x8819AEC8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r8,1780(r31)
	ctx.current_instruction = 0x8819AECC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r6,r8
	ctx.current_instruction = 0x8819AED4;
	REX_STORE_U16(ctx.r6.u32 + ctx.r8.u32, ctx.r25.u16);
	// lwz r4,1784(r31)
	ctx.current_instruction = 0x8819AED8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// lwz r5,176(r1)
	ctx.current_instruction = 0x8819AEDC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r3,180(r1)
	ctx.current_instruction = 0x8819AEE0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r10,0(r5)
	ctx.current_instruction = 0x8819AEE8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// sthx r10,r11,r4
	ctx.current_instruction = 0x8819AEEC;
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u16);
	// lwz r9,180(r1)
	ctx.current_instruction = 0x8819AEF0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,1788(r31)
	ctx.current_instruction = 0x8819AEF8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1788);
	// lwz r8,176(r1)
	ctx.current_instruction = 0x8819AEFC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lhz r5,2(r8)
	ctx.current_instruction = 0x8819AF00;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// sthx r5,r7,r6
	ctx.current_instruction = 0x8819AF04;
	REX_STORE_U16(ctx.r7.u32 + ctx.r6.u32, ctx.r5.u16);
	// b 0x8819b00c
	goto loc_8819B00C;
loc_8819AF0C:
	// lhz r27,2(r11)
	ctx.current_instruction = 0x8819AF0C;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lhz r11,0(r11)
	ctx.current_instruction = 0x8819AF14;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r5,84(r1)
	ctx.current_instruction = 0x8819AF1C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r30,116(r1)
	ctx.current_instruction = 0x8819AF28;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,108(r1)
	ctx.current_instruction = 0x8819AF2C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	ctx.current_instruction = 0x8819AF34;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r5,188(r1)
	ctx.current_instruction = 0x8819AF38;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// stw r27,100(r1)
	ctx.current_instruction = 0x8819AF3C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// bctrl 
	ctx.lr = 0x8819AF44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819AF44:
	// lwz r10,184(r1)
	ctx.current_instruction = 0x8819AF44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,0(r10)
	ctx.current_instruction = 0x8819AF4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,24,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE0;
	// lwz r9,1776(r31)
	ctx.current_instruction = 0x8819AF54;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x8819afb8
	if (!ctx.cr6.eq) goto loc_8819AFB8;
	// lwz r11,176(r1)
	ctx.current_instruction = 0x8819AF60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,180(r1)
	ctx.current_instruction = 0x8819AF64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r7,0(r11)
	ctx.current_instruction = 0x8819AF6C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sthx r7,r8,r9
	ctx.current_instruction = 0x8819AF70;
	REX_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u16);
	// lwz r6,176(r1)
	ctx.current_instruction = 0x8819AF74;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,180(r1)
	ctx.current_instruction = 0x8819AF78;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,1780(r31)
	ctx.current_instruction = 0x8819AF7C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r11,2(r6)
	ctx.current_instruction = 0x8819AF84;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// sthx r11,r3,r4
	ctx.current_instruction = 0x8819AF88;
	REX_STORE_U16(ctx.r3.u32 + ctx.r4.u32, ctx.r11.u16);
	// lwz r10,180(r1)
	ctx.current_instruction = 0x8819AF8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,256(r1)
	ctx.current_instruction = 0x8819AF90;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r8,1784(r31)
	ctx.current_instruction = 0x8819AF94;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r7,r8
	ctx.current_instruction = 0x8819AF9C;
	REX_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u16);
	// lwz r4,268(r1)
	ctx.current_instruction = 0x8819AFA0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r11,180(r1)
	ctx.current_instruction = 0x8819AFA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,1788(r31)
	ctx.current_instruction = 0x8819AFAC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1788);
	// sthx r4,r10,r5
	ctx.current_instruction = 0x8819AFB0;
	REX_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r4.u16);
	// b 0x8819b00c
	goto loc_8819B00C;
loc_8819AFB8:
	// lwz r11,180(r1)
	ctx.current_instruction = 0x8819AFB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,260(r1)
	ctx.current_instruction = 0x8819AFBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r8,r9
	ctx.current_instruction = 0x8819AFC4;
	REX_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u16);
	// lwz r6,180(r1)
	ctx.current_instruction = 0x8819AFC8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,264(r1)
	ctx.current_instruction = 0x8819AFCC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,1780(r31)
	ctx.current_instruction = 0x8819AFD0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r5,r3,r4
	ctx.current_instruction = 0x8819AFD8;
	REX_STORE_U16(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u16);
	// lwz r10,180(r1)
	ctx.current_instruction = 0x8819AFDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,176(r1)
	ctx.current_instruction = 0x8819AFE4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r7,1784(r31)
	ctx.current_instruction = 0x8819AFE8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// lhz r6,0(r8)
	ctx.current_instruction = 0x8819AFEC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// sthx r6,r9,r7
	ctx.current_instruction = 0x8819AFF0;
	REX_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u16);
	// lwz r5,176(r1)
	ctx.current_instruction = 0x8819AFF4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r4,180(r1)
	ctx.current_instruction = 0x8819AFF8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,1788(r31)
	ctx.current_instruction = 0x8819B000;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1788);
	// lhz r10,2(r5)
	ctx.current_instruction = 0x8819B004;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// sthx r10,r11,r3
	ctx.current_instruction = 0x8819B008;
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
loc_8819B00C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8819b0a0
	if (ctx.cr6.eq) goto loc_8819B0A0;
	// li r5,-2
	ctx.r5.s64 = -2;
	// b 0x8819b154
	goto loc_8819B154;
loc_8819B01C:
	// lwz r11,180(r1)
	ctx.current_instruction = 0x8819B01C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,1788(r31)
	ctx.current_instruction = 0x8819B024;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1788);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r24,92(r1)
	ctx.current_instruction = 0x8819B030;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sthx r19,r4,r9
	ctx.current_instruction = 0x8819B044;
	REX_STORE_U16(ctx.r4.u32 + ctx.r9.u32, ctx.r19.u16);
	// lwz r11,180(r1)
	ctx.current_instruction = 0x8819B048;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,1784(r31)
	ctx.current_instruction = 0x8819B04C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r19,r4,r9
	ctx.current_instruction = 0x8819B054;
	REX_STORE_U16(ctx.r4.u32 + ctx.r9.u32, ctx.r19.u16);
	// lwz r11,180(r1)
	ctx.current_instruction = 0x8819B058;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,1780(r31)
	ctx.current_instruction = 0x8819B05C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r19,r4,r9
	ctx.current_instruction = 0x8819B064;
	REX_STORE_U16(ctx.r4.u32 + ctx.r9.u32, ctx.r19.u16);
	// lwz r11,180(r1)
	ctx.current_instruction = 0x8819B068;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,1776(r31)
	ctx.current_instruction = 0x8819B06C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r19,r4,r9
	ctx.current_instruction = 0x8819B074;
	REX_STORE_U16(ctx.r4.u32 + ctx.r9.u32, ctx.r19.u16);
	// lwz r9,188(r1)
	ctx.current_instruction = 0x8819B078;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r11,192(r1)
	ctx.current_instruction = 0x8819B07C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,84(r1)
	ctx.current_instruction = 0x8819B084;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r4,184(r1)
	ctx.current_instruction = 0x8819B088;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,100(r1)
	ctx.current_instruction = 0x8819B08C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x881a0640
	ctx.lr = 0x8819B094;
	sub_881A0640(ctx, base);
loc_8819B094:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819b150
	if (!ctx.cr6.eq) goto loc_8819B150;
loc_8819B0A0:
	// lwz r11,184(r1)
	ctx.current_instruction = 0x8819B0A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r9,0(r11)
	ctx.current_instruction = 0x8819B0A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8819b0d4
	if (!ctx.cr6.eq) goto loc_8819B0D4;
	// lwz r11,200(r1)
	ctx.current_instruction = 0x8819B0B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// sth r30,160(r11)
	ctx.current_instruction = 0x8819B0BC;
	REX_STORE_U16(ctx.r11.u32 + 160, ctx.r30.u16);
	// lwz r10,200(r1)
	ctx.current_instruction = 0x8819B0C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// sth r30,128(r10)
	ctx.current_instruction = 0x8819B0C4;
	REX_STORE_U16(ctx.r10.u32 + 128, ctx.r30.u16);
	// lwz r9,200(r1)
	ctx.current_instruction = 0x8819B0C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// sth r30,0(r9)
	ctx.current_instruction = 0x8819B0CC;
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r30.u16);
	// lwz r11,184(r1)
	ctx.current_instruction = 0x8819B0D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
loc_8819B0D4:
	// lwz r8,204(r1)
	ctx.current_instruction = 0x8819B0D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwz r10,224(r1)
	ctx.current_instruction = 0x8819B0DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r7,200(r1)
	ctx.current_instruction = 0x8819B0E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// lwz r5,244(r1)
	ctx.current_instruction = 0x8819B0EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// addi r6,r10,24
	ctx.r6.s64 = ctx.r10.s64 + 24;
	// lwz r3,180(r1)
	ctx.current_instruction = 0x8819B0F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// addi r10,r7,192
	ctx.r10.s64 = ctx.r7.s64 + 192;
	// lwz r8,176(r1)
	ctx.current_instruction = 0x8819B0FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r7,r5,144
	ctx.r7.s64 = ctx.r5.s64 + 144;
	// lwz r5,136(r31)
	ctx.current_instruction = 0x8819B104;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// stw r9,184(r1)
	ctx.current_instruction = 0x8819B110;
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// stw r6,224(r1)
	ctx.current_instruction = 0x8819B114;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r6.u32);
	// addi r22,r22,16
	ctx.r22.s64 = ctx.r22.s64 + 16;
	// stw r4,204(r1)
	ctx.current_instruction = 0x8819B11C;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// addi r21,r21,8
	ctx.r21.s64 = ctx.r21.s64 + 8;
	// stw r10,200(r1)
	ctx.current_instruction = 0x8819B124;
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// stw r11,176(r1)
	ctx.current_instruction = 0x8819B12C;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r7,244(r1)
	ctx.current_instruction = 0x8819B134;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r7.u32);
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// stw r3,180(r1)
	ctx.current_instruction = 0x8819B13C;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// blt cr6,0x8819a8d4
	if (ctx.cr6.lt) goto loc_8819A8D4;
	// b 0x8819b190
	goto loc_8819B190;
loc_8819B148:
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x8819b154
	goto loc_8819B154;
loc_8819B150:
	// li r5,-3
	ctx.r5.s64 = -3;
loc_8819B154:
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// addi r9,r1,180
	ctx.r9.s64 = ctx.r1.s64 + 180;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,188
	ctx.r7.s64 = ctx.r1.s64 + 188;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819b310
	ctx.lr = 0x8819B174;
	sub_8819B310(ctx, base);
loc_8819B174:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819b24c
	if (!ctx.cr6.eq) goto loc_8819B24C;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8819b18c
	if (ctx.cr6.eq) goto loc_8819B18C;
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// bne cr6,0x8819b190
	if (!ctx.cr6.eq) goto loc_8819B190;
loc_8819B18C:
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
loc_8819B190:
	// lwz r11,232(r31)
	ctx.current_instruction = 0x8819B190;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r9,236(r1)
	ctx.current_instruction = 0x8819B194;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r7,248(r1)
	ctx.current_instruction = 0x8819B198;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r10,228(r31)
	ctx.current_instruction = 0x8819B19C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,212(r1)
	ctx.current_instruction = 0x8819B1A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r8,252(r1)
	ctx.current_instruction = 0x8819B1AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r5,240(r1)
	ctx.current_instruction = 0x8819B1B4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r3,216(r1)
	ctx.current_instruction = 0x8819B1BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r8,220(r1)
	ctx.current_instruction = 0x8819B1C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r29,228(r1)
	ctx.current_instruction = 0x8819B1C8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r28,232(r1)
	ctx.current_instruction = 0x8819B1D0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r6,236(r1)
	ctx.current_instruction = 0x8819B1D8;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r4,252(r1)
	ctx.current_instruction = 0x8819B1E4;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// stw r9,248(r1)
	ctx.current_instruction = 0x8819B1E8;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// stw r7,212(r1)
	ctx.current_instruction = 0x8819B1EC;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// stw r3,216(r1)
	ctx.current_instruction = 0x8819B1F0;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// stw r8,220(r1)
	ctx.current_instruction = 0x8819B1F4;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// stw r5,240(r1)
	ctx.current_instruction = 0x8819B1F8;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r5.u32);
	// stw r10,228(r1)
	ctx.current_instruction = 0x8819B1FC;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// stw r6,232(r1)
	ctx.current_instruction = 0x8819B200;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r6.u32);
loc_8819B204:
	// lwz r11,188(r1)
	ctx.current_instruction = 0x8819B204;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r10,192(r1)
	ctx.current_instruction = 0x8819B208;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r9,140(r31)
	ctx.current_instruction = 0x8819B20C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// stw r11,188(r1)
	ctx.current_instruction = 0x8819B218;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r8,192(r1)
	ctx.current_instruction = 0x8819B220;
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// blt cr6,0x8819a6dc
	if (ctx.cr6.lt) goto loc_8819A6DC;
loc_8819B228:
	// lwz r11,3948(r31)
	ctx.current_instruction = 0x8819B228;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819b2f4
	if (ctx.cr6.eq) goto loc_8819B2F4;
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x8819B234;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8819b264
	if (!ctx.cr6.eq) goto loc_8819B264;
	// bl 0x8819d640
	ctx.lr = 0x8819B248;
	sub_8819D640(ctx, base);
loc_8819B248:
	// b 0x8819b268
	goto loc_8819B268;
loc_8819B24C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8819B258:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8819B264:
	// bl 0x8819d578
	ctx.lr = 0x8819B268;
	sub_8819D578(ctx, base);
loc_8819B268:
	// lwz r29,15792(r31)
	ctx.current_instruction = 0x8819B268;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 15792);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,3868(r31)
	ctx.current_instruction = 0x8819B270;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3868);
	// lwz r9,15800(r31)
	ctx.current_instruction = 0x8819B274;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15800);
	// lwz r8,15776(r31)
	ctx.current_instruction = 0x8819B278;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15776);
	// lwz r7,3972(r31)
	ctx.current_instruction = 0x8819B27C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3972);
	// stw r29,124(r1)
	ctx.current_instruction = 0x8819B280;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// lwz r5,15784(r31)
	ctx.current_instruction = 0x8819B284;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 15784);
	// lwz r4,15816(r31)
	ctx.current_instruction = 0x8819B288;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15816);
	// lwz r29,15760(r31)
	ctx.current_instruction = 0x8819B28C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 15760);
	// stw r8,92(r1)
	ctx.current_instruction = 0x8819B290;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,108(r1)
	ctx.current_instruction = 0x8819B294;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,164(r1)
	ctx.current_instruction = 0x8819B298;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r7,148(r1)
	ctx.current_instruction = 0x8819B29C;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// stw r5,100(r1)
	ctx.current_instruction = 0x8819B2A0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r4,116(r1)
	ctx.current_instruction = 0x8819B2A4;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// stw r30,156(r1)
	ctx.current_instruction = 0x8819B2A8;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stw r29,84(r1)
	ctx.current_instruction = 0x8819B2AC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r6,15808(r31)
	ctx.current_instruction = 0x8819B2B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 15808);
	// lwz r10,15824(r31)
	ctx.current_instruction = 0x8819B2B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15824);
	// lwz r11,224(r31)
	ctx.current_instruction = 0x8819B2B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r8,3784(r31)
	ctx.current_instruction = 0x8819B2BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r9,220(r31)
	ctx.current_instruction = 0x8819B2C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// stw r6,132(r1)
	ctx.current_instruction = 0x8819B2C4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r10,140(r1)
	ctx.current_instruction = 0x8819B2CC;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// lwz r10,3780(r31)
	ctx.current_instruction = 0x8819B2D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r8,3776(r31)
	ctx.current_instruction = 0x8819B2D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,15744(r31)
	ctx.current_instruction = 0x8819B2DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15744);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,15768(r31)
	ctx.current_instruction = 0x8819B2E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15768);
	// lwz r8,15752(r31)
	ctx.current_instruction = 0x8819B2E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15752);
	// lwz r7,15736(r31)
	ctx.current_instruction = 0x8819B2EC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 15736);
	// bl 0x881aa218
	ctx.lr = 0x8819B2F4;
	sub_881AA218(ctx, base);
loc_8819B2F4:
	// stw r16,15624(r31)
	ctx.current_instruction = 0x8819B2F4;
	REX_STORE_U32(ctx.r31.u32 + 15624, ctx.r16.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r30,15628(r31)
	ctx.current_instruction = 0x8819B2FC;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r30.u32);
	// stw r16,15600(r31)
	ctx.current_instruction = 0x8819B300;
	REX_STORE_U32(ctx.r31.u32 + 15600, ctx.r16.u32);
	// stw r16,460(r31)
	ctx.current_instruction = 0x8819B304;
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r16.u32);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881CD430) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881CD430;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881CD430) {
			switch (rex_dispatch_address) {
				case 0x881CD438:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CD430;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881CD438: goto loc_881CD438;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x881CD438;
	__savegprlr_15(ctx, base);
loc_881CD438:
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// slw r20,r31,r11
	ctx.r20.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881cd460
	if (ctx.cr6.eq) goto loc_881CD460;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x881cd460
	if (ctx.cr6.eq) goto loc_881CD460;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x881cd674
	if (!ctx.cr6.eq) goto loc_881CD674;
loc_881CD460:
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6888
	ctx.r11.s64 = ctx.r11.s64 + 6888;
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r18,0
	ctx.r18.s64 = 0;
	// add r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r23,r8,r11
	ctx.r23.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x881cd4b8
	if (!ctx.cr6.eq) goto loc_881CD4B8;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// li r27,4
	ctx.r27.s64 = 4;
	// beq cr6,0x881cd494
	if (ctx.cr6.eq) goto loc_881CD494;
	// li r27,6
	ctx.r27.s64 = 6;
loc_881CD494:
	// rlwinm r9,r20,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,-220
	ctx.r8.s64 = ctx.r1.s64 + -220;
	// addi r7,r1,-222
	ctx.r7.s64 = ctx.r1.s64 + -222;
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// addi r21,r20,1
	ctx.r21.s64 = ctx.r20.s64 + 1;
	// sthx r18,r9,r8
	ctx.current_instruction = 0x881CD4AC;
	REX_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r18.u16);
	// sthx r18,r9,r7
	ctx.current_instruction = 0x881CD4B0;
	REX_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r18.u16);
	// b 0x881cd520
	goto loc_881CD520;
loc_881CD4B8:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x881cd4ec
	if (!ctx.cr6.eq) goto loc_881CD4EC;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// li r25,4
	ctx.r25.s64 = 4;
	// beq cr6,0x881cd4d4
	if (ctx.cr6.eq) goto loc_881CD4D4;
	// li r25,6
	ctx.r25.s64 = 6;
loc_881CD4D4:
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// slw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// subf r24,r10,r9
	ctx.r24.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r21,r20,3
	ctx.r21.s64 = ctx.r20.s64 + 3;
	// b 0x881cd530
	goto loc_881CD530;
loc_881CD4EC:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// li r9,4
	ctx.r9.s64 = 4;
	// beq cr6,0x881cd4fc
	if (ctx.cr6.eq) goto loc_881CD4FC;
	// li r9,6
	ctx.r9.s64 = 6;
loc_881CD4FC:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq cr6,0x881cd50c
	if (ctx.cr6.eq) goto loc_881CD50C;
	// li r11,6
	ctx.r11.s64 = 6;
loc_881CD50C:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r25,7
	ctx.r25.s64 = 7;
	// addi r27,r11,-7
	ctx.r27.s64 = ctx.r11.s64 + -7;
	// subfic r24,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r24.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// addi r21,r20,3
	ctx.r21.s64 = ctx.r20.s64 + 3;
loc_881CD520:
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// slw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r26,r11,-1
	ctx.r26.s64 = ctx.r11.s64 + -1;
loc_881CD530:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x881cd674
	if (!ctx.cr6.gt) goto loc_881CD674;
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// addi r22,r11,-1
	ctx.r22.s64 = ctx.r11.s64 + -1;
loc_881CD544:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x881cd5c8
	if (!ctx.cr6.gt) goto loc_881CD5C8;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,6(r23)
	ctx.current_instruction = 0x881CD550;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r23.u32 + 6);
	// lhz r8,4(r23)
	ctx.current_instruction = 0x881CD554;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r23.u32 + 4);
	// addi r10,r1,-226
	ctx.r10.s64 = ctx.r1.s64 + -226;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lhz r11,0(r23)
	ctx.current_instruction = 0x881CD560;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + 0);
	// lhz r30,2(r23)
	ctx.current_instruction = 0x881CD564;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r23.u32 + 2);
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r31,r8
	ctx.r31.s64 = ctx.r8.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_881CD584:
	// lbzx r9,r11,r3
	ctx.current_instruction = 0x881CD584;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lbzx r17,r11,r7
	ctx.current_instruction = 0x881CD588;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// mullw r8,r9,r31
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// lbzx r16,r11,r4
	ctx.current_instruction = 0x881CD590;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r15,0(r11)
	ctx.current_instruction = 0x881CD594;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r9,r17,r6
	ctx.r9.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r6.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r16,r30
	ctx.r8.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r30.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r15,r29
	ctx.r8.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r29.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 + ctx.r26.u64;
	// sraw r9,r8,r27
	temp.u32 = ctx.r27.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r9.s64 = ctx.r8.s32 >> temp.u32;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sthu r8,2(r10)
	ctx.current_instruction = 0x881CD5C0;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881cd584
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CD584;
loc_881CD5C8:
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// addi r11,r1,-220
	ctx.r11.s64 = ctx.r1.s64 + -220;
loc_881CD5D4:
	// lhz r10,0(r11)
	ctx.current_instruction = 0x881CD5D4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.current_instruction = 0x881CD5D8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r7,6(r28)
	ctx.current_instruction = 0x881CD5DC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + 6);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// lhz r3,4(r28)
	ctx.current_instruction = 0x881CD5E4;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r28.u32 + 4);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// lhz r7,-2(r11)
	ctx.current_instruction = 0x881CD5F0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r31,2(r28)
	ctx.current_instruction = 0x881CD5F8;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r28.u32 + 2);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lhz r30,-4(r11)
	ctx.current_instruction = 0x881CD600;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r29,0(r28)
	ctx.current_instruction = 0x881CD604;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// mullw r9,r6,r3
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r6,r31
	ctx.r6.s64 = ctx.r31.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r7,r6
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// extsh r3,r30
	ctx.r3.s64 = ctx.r30.s16;
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r3,r7
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r6,r10,r24
	ctx.r6.u64 = ctx.r10.u64 + ctx.r24.u64;
	// sraw. r10,r6,r25
	temp.u32 = ctx.r25.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x881cd644
	if (!ctx.cr0.lt) goto loc_881CD644;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// b 0x881cd650
	goto loc_881CD650;
loc_881CD644:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x881cd650
	if (!ctx.cr6.gt) goto loc_881CD650;
	// li r10,255
	ctx.r10.s64 = 255;
loc_881CD650:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stbx r10,r8,r5
	ctx.current_instruction = 0x881CD658;
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x881cd5d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CD5D4;
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// add r22,r22,r4
	ctx.r22.u64 = ctx.r22.u64 + ctx.r4.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// bne 0x881cd544
	if (!ctx.cr0.eq) goto loc_881CD544;
loc_881CD674:
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881D1700) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881D1700;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881D1700) {
			switch (rex_dispatch_address) {
				case 0x881D1708:
				case 0x881D18F8:
				case 0x881D19A0:
				case 0x881D1A00:
				case 0x881D1A24:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881D1700;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881D1708: goto loc_881D1708;
		case 0x881D18F8: goto loc_881D18F8;
		case 0x881D19A0: goto loc_881D19A0;
		case 0x881D1A00: goto loc_881D1A00;
		case 0x881D1A24: goto loc_881D1A24;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881D1708;
	__savegprlr_27(ctx, base);
loc_881D1708:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881D1708;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r5,52(r3)
	ctx.current_instruction = 0x881D1710;
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,56(r3)
	ctx.current_instruction = 0x881D1718;
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,48(r3)
	ctx.current_instruction = 0x881D1720;
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x881d1730
	if (!ctx.cr6.lt) goto loc_881D1730;
	// neg r8,r8
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r8.u64);
loc_881D1730:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x881d1a30
	if (ctx.cr6.lt) goto loc_881D1A30;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881d1a30
	if (ctx.cr6.eq) goto loc_881D1A30;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881d1a30
	if (ctx.cr6.eq) goto loc_881D1A30;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881d1a30
	if (ctx.cr6.eq) goto loc_881D1A30;
	// lis r9,22101
	ctx.r9.s64 = 1448411136;
	// lwz r10,16(r11)
	ctx.current_instruction = 0x881D1754;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lis r5,12338
	ctx.r5.s64 = 808583168;
	// ori r27,r9,22857
	ctx.r27.u64 = ctx.r9.u64 | 22857;
	// ori r3,r5,13385
	ctx.r3.u64 = ctx.r5.u64 | 13385;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x881d17b4
	if (ctx.cr6.eq) goto loc_881D17B4;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x881d17b4
	if (ctx.cr6.eq) goto loc_881D17B4;
	// lis r9,12593
	ctx.r9.s64 = 825294848;
	// ori r5,r9,13392
	ctx.r5.u64 = ctx.r9.u64 | 13392;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x881d17b4
	if (ctx.cr6.eq) goto loc_881D17B4;
	// lhz r10,14(r11)
	ctx.current_instruction = 0x881D1784;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x881D1788;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	ctx.current_instruction = 0x881D178C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// srawi r10,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r10,r5,r30
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x881d17d0
	goto loc_881D17D0;
loc_881D17B4:
	// lhz r10,14(r11)
	ctx.current_instruction = 0x881D17B4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lwz r30,8(r11)
	ctx.current_instruction = 0x881D17B8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x881D17BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r10,r30
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// srawi r5,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 3;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
loc_881D17D0:
	// lwz r5,20(r11)
	ctx.current_instruction = 0x881D17D0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x881d1a30
	if (!ctx.cr6.eq) goto loc_881D1A30;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x881d1a30
	if (ctx.cr6.eq) goto loc_881D1A30;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x881d1a30
	if (ctx.cr6.eq) goto loc_881D1A30;
	// lwz r29,60(r31)
	ctx.current_instruction = 0x881D17EC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x881d1a30
	if (ctx.cr6.eq) goto loc_881D1A30;
	// lwz r28,32(r31)
	ctx.current_instruction = 0x881D17F8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x881d1a30
	if (!ctx.cr6.eq) goto loc_881D1A30;
	// lwz r5,36(r31)
	ctx.current_instruction = 0x881D1804;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x881d1a30
	if (!ctx.cr6.eq) goto loc_881D1A30;
	// lwz r10,24(r31)
	ctx.current_instruction = 0x881D1810;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x881d1a30
	if (!ctx.cr6.eq) goto loc_881D1A30;
	// lwz r10,28(r31)
	ctx.current_instruction = 0x881D181C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x881d1a30
	if (!ctx.cr6.eq) goto loc_881D1A30;
	// stw r29,64(r31)
	ctx.current_instruction = 0x881D1828;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,16(r11)
	ctx.current_instruction = 0x881D1830;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881d18bc
	if (ctx.cr6.eq) goto loc_881D18BC;
	// lis r8,12889
	ctx.r8.s64 = 844693504;
	// ori r7,r8,21849
	ctx.r7.u64 = ctx.r8.u64 | 21849;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x881d1880
	if (!ctx.cr6.eq) goto loc_881D1880;
	// lwz r8,32(r11)
	ctx.current_instruction = 0x881D184C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x881d186c
	if (ctx.cr6.eq) goto loc_881D186C;
	// lis r8,-30691
	ctx.r8.s64 = -2011365376;
	// lis r7,-30691
	ctx.r7.s64 = -2011365376;
	// addi r8,r8,-3936
	ctx.r8.s64 = ctx.r8.s64 + -3936;
	// addi r7,r7,-3232
	ctx.r7.s64 = ctx.r7.s64 + -3232;
	// b 0x881d18b4
	goto loc_881D18B4;
loc_881D186C:
	// lis r8,-30691
	ctx.r8.s64 = -2011365376;
	// lis r7,-30691
	ctx.r7.s64 = -2011365376;
	// addi r8,r8,-5152
	ctx.r8.s64 = ctx.r8.s64 + -5152;
	// addi r7,r7,-4456
	ctx.r7.s64 = ctx.r7.s64 + -4456;
	// b 0x881d18b4
	goto loc_881D18B4;
loc_881D1880:
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x881d18bc
	if (ctx.cr6.eq) goto loc_881D18BC;
	// lis r8,12850
	ctx.r8.s64 = 842137600;
	// stw r10,44(r31)
	ctx.current_instruction = 0x881D188C;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// ori r7,r8,13392
	ctx.r7.u64 = ctx.r8.u64 | 13392;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x881d18a4
	if (!ctx.cr6.eq) goto loc_881D18A4;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,44(r31)
	ctx.current_instruction = 0x881D18A0;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
loc_881D18A4:
	// lis r8,-30691
	ctx.r8.s64 = -2011365376;
	// lis r7,-30691
	ctx.r7.s64 = -2011365376;
	// addi r8,r8,-1816
	ctx.r8.s64 = ctx.r8.s64 + -1816;
	// addi r7,r7,-608
	ctx.r7.s64 = ctx.r7.s64 + -608;
loc_881D18B4:
	// stw r8,12(r31)
	ctx.current_instruction = 0x881D18B4;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r7,16(r31)
	ctx.current_instruction = 0x881D18B8;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
loc_881D18BC:
	// lwz r8,8(r11)
	ctx.current_instruction = 0x881D18BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,28(r31)
	ctx.current_instruction = 0x881D18C0;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.current_instruction = 0x881D18C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,24(r31)
	ctx.current_instruction = 0x881D18CC;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// stw r10,4(r31)
	ctx.current_instruction = 0x881D18D4;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r10,8(r31)
	ctx.current_instruction = 0x881D18D8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bne cr6,0x881d1904
	if (!ctx.cr6.eq) goto loc_881D1904;
	// lwz r10,28(r31)
	ctx.current_instruction = 0x881D18E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x881d1904
	if (!ctx.cr6.eq) goto loc_881D1904;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r5,20(r11)
	ctx.current_instruction = 0x881D18F0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x880547a0
	ctx.lr = 0x881D18F8;
	sub_880547A0(ctx, base);
loc_881D18F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881D1904:
	// lwz r30,28(r31)
	ctx.current_instruction = 0x881D1904;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x881d194c
	if (!ctx.cr6.eq) goto loc_881D194C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881d1934
	if (!ctx.cr6.eq) goto loc_881D1934;
	// lhz r10,14(r11)
	ctx.current_instruction = 0x881D191C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// bge cr6,0x881d1944
	if (!ctx.cr6.lt) goto loc_881D1944;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x881d1944
	if (ctx.cr6.eq) goto loc_881D1944;
	// b 0x881d194c
	goto loc_881D194C;
loc_881D1934:
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x881d1944
	if (ctx.cr6.eq) goto loc_881D1944;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x881d194c
	if (!ctx.cr6.eq) goto loc_881D194C;
loc_881D1944:
	// stw r6,64(r31)
	ctx.current_instruction = 0x881D1944;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881D1948;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
loc_881D194C:
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x881d1970
	if (!ctx.cr6.eq) goto loc_881D1970;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881d19ac
	if (!ctx.cr6.eq) goto loc_881D19AC;
	// lhz r11,14(r11)
	ctx.current_instruction = 0x881D195C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x881d19bc
	if (!ctx.cr6.lt) goto loc_881D19BC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x881d19bc
	if (ctx.cr6.eq) goto loc_881D19BC;
loc_881D1970:
	// lwz r11,20(r31)
	ctx.current_instruction = 0x881D1970;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x881d1a24
	if (!ctx.cr6.eq) goto loc_881D1A24;
	// lwz r11,68(r31)
	ctx.current_instruction = 0x881D197C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881d1a00
	if (!ctx.cr6.eq) goto loc_881D1A00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881D1988;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881d19e0
	if (ctx.cr6.eq) goto loc_881D19E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881d04b0
	ctx.lr = 0x881D19A0;
	sub_881D04B0(ctx, base);
loc_881D19A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881D19AC:
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x881d19bc
	if (ctx.cr6.eq) goto loc_881D19BC;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x881d1970
	if (!ctx.cr6.eq) goto loc_881D1970;
loc_881D19BC:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x881D19BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r4,64(r31)
	ctx.current_instruction = 0x881D19C0;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// stw r7,4(r31)
	ctx.current_instruction = 0x881D19C4;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881d1a24
	if (ctx.cr6.eq) goto loc_881D1A24;
	// lwz r11,20(r31)
	ctx.current_instruction = 0x881D19D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x881d1a24
	if (!ctx.cr6.eq) goto loc_881D1A24;
	// b 0x881d1a10
	goto loc_881D1A10;
loc_881D19E0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881d1a00
	if (!ctx.cr6.eq) goto loc_881D1A00;
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881D19E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881D1A00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881D1A00:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x881D1A00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881d1a24
	if (ctx.cr6.eq) goto loc_881D1A24;
	// lwz r5,36(r31)
	ctx.current_instruction = 0x881D1A0C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
loc_881D1A10:
	// lwz r11,16(r31)
	ctx.current_instruction = 0x881D1A10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881D1A24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881D1A24:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881D1A30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DD130) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DD130;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DD130) {
			switch (rex_dispatch_address) {
				case 0x881DD204:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DD130;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881DD204: goto loc_881DD204;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881DD134;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881DD138;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r5)
	ctx.current_instruction = 0x881DD13C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881dd158
	if (!ctx.cr6.eq) goto loc_881DD158;
	// lwz r11,56(r5)
	ctx.current_instruction = 0x881DD148;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,20(r5)
	ctx.current_instruction = 0x881DD150;
	REX_STORE_U32(ctx.r5.u32 + 20, ctx.r11.u32);
	// b 0x881dd1a4
	goto loc_881DD1A4;
loc_881DD158:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881dd1a4
	if (!ctx.cr6.eq) goto loc_881DD1A4;
	// lwz r11,60(r5)
	ctx.current_instruction = 0x881DD160;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,24(r5)
	ctx.current_instruction = 0x881DD16C;
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// beq cr6,0x881dd17c
	if (ctx.cr6.eq) goto loc_881DD17C;
	// stw r6,28(r5)
	ctx.current_instruction = 0x881DD174;
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r6.u32);
	// b 0x881dd188
	goto loc_881DD188;
loc_881DD17C:
	// lwz r11,64(r5)
	ctx.current_instruction = 0x881DD17C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,28(r5)
	ctx.current_instruction = 0x881DD184;
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
loc_881DD188:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x881dd198
	if (ctx.cr6.eq) goto loc_881DD198;
	// stw r7,32(r5)
	ctx.current_instruction = 0x881DD190;
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r7.u32);
	// b 0x881dd1a4
	goto loc_881DD1A4;
loc_881DD198:
	// lwz r11,68(r5)
	ctx.current_instruction = 0x881DD198;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,32(r5)
	ctx.current_instruction = 0x881DD1A0;
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r11.u32);
loc_881DD1A4:
	// lwz r11,16(r5)
	ctx.current_instruction = 0x881DD1A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881dd1c0
	if (!ctx.cr6.eq) goto loc_881DD1C0;
	// lwz r11,72(r5)
	ctx.current_instruction = 0x881DD1B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 72);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,36(r5)
	ctx.current_instruction = 0x881DD1B8;
	REX_STORE_U32(ctx.r5.u32 + 36, ctx.r11.u32);
	// b 0x881dd1f0
	goto loc_881DD1F0;
loc_881DD1C0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881dd1f0
	if (!ctx.cr6.eq) goto loc_881DD1F0;
	// lwz r11,52(r5)
	ctx.current_instruction = 0x881DD1C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x881dd1f0
	if (ctx.cr6.eq) goto loc_881DD1F0;
	// lwz r10,76(r5)
	ctx.current_instruction = 0x881DD1D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 76);
	// lwz r11,80(r5)
	ctx.current_instruction = 0x881DD1D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 80);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r4,40(r5)
	ctx.current_instruction = 0x881DD1E0;
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r4.u32);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r10,44(r5)
	ctx.current_instruction = 0x881DD1E8;
	REX_STORE_U32(ctx.r5.u32 + 44, ctx.r10.u32);
	// stw r9,48(r5)
	ctx.current_instruction = 0x881DD1EC;
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r9.u32);
loc_881DD1F0:
	// lwz r11,14560(r5)
	ctx.current_instruction = 0x881DD1F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 14560);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x881dd204
	if (!ctx.cr6.eq) goto loc_881DD204;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x881dc190
	ctx.lr = 0x881DD204;
	sub_881DC190(ctx, base);
loc_881DD204:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881DD20C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881DE428) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DE428;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DE428) {
			switch (rex_dispatch_address) {
				case 0x881DE430:
				case 0x881DE47C:
				case 0x881DE4BC:
				case 0x881DE4D8:
				case 0x881DE4E8:
				case 0x881DE50C:
				case 0x881DE53C:
				case 0x881DE558:
				case 0x881DE574:
				case 0x881DE588:
				case 0x881DE59C:
				case 0x881DE5B0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DE428;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881DE430: goto loc_881DE430;
		case 0x881DE47C: goto loc_881DE47C;
		case 0x881DE4BC: goto loc_881DE4BC;
		case 0x881DE4D8: goto loc_881DE4D8;
		case 0x881DE4E8: goto loc_881DE4E8;
		case 0x881DE50C: goto loc_881DE50C;
		case 0x881DE53C: goto loc_881DE53C;
		case 0x881DE558: goto loc_881DE558;
		case 0x881DE574: goto loc_881DE574;
		case 0x881DE588: goto loc_881DE588;
		case 0x881DE59C: goto loc_881DE59C;
		case 0x881DE5B0: goto loc_881DE5B0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881DE430;
	__savegprlr_26(ctx, base);
loc_881DE430:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881DE430;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881de5c0
	if (ctx.cr6.eq) goto loc_881DE5C0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881de5b8
	if (ctx.cr6.eq) goto loc_881DE5B8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881de5b8
	if (ctx.cr6.eq) goto loc_881DE5B8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x881de5b8
	if (ctx.cr6.eq) goto loc_881DE5B8;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,0(r6)
	ctx.current_instruction = 0x881DE470;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// li r3,1064
	ctx.r3.s64 = 1064;
	// bl 0x8815b9f8
	ctx.lr = 0x881DE47C;
	sub_8815B9F8(ctx, base);
loc_881DE47C:
	// stw r3,0(r31)
	ctx.current_instruction = 0x881DE47C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881de498
	if (!ctx.cr6.eq) goto loc_881DE498;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r28)
	ctx.current_instruction = 0x881DE48C;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881DE498:
	// lwz r11,16(r30)
	ctx.current_instruction = 0x881DE498;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881de4c0
	if (!ctx.cr6.eq) goto loc_881DE4C0;
	// lhz r10,14(r30)
	ctx.current_instruction = 0x881DE4A4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x881de4c0
	if (!ctx.cr6.eq) goto loc_881DE4C0;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x881ece80
	ctx.lr = 0x881DE4BC;
	sub_881ECE80(ctx, base);
loc_881DE4BC:
	// b 0x881de4d8
	goto loc_881DE4D8;
loc_881DE4C0:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// beq cr6,0x881de4d4
	if (ctx.cr6.eq) goto loc_881DE4D4;
	// li r5,40
	ctx.r5.s64 = 40;
loc_881DE4D4:
	// bl 0x880547a0
	ctx.lr = 0x881DE4D8;
	sub_880547A0(ctx, base);
loc_881DE4D8:
	// stw r29,4(r31)
	ctx.current_instruction = 0x881DE4D8;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1064
	ctx.r3.s64 = 1064;
	// bl 0x8815b9f8
	ctx.lr = 0x881DE4E8;
	sub_8815B9F8(ctx, base);
loc_881DE4E8:
	// stw r3,4(r31)
	ctx.current_instruction = 0x881DE4E8;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881de518
	if (!ctx.cr6.eq) goto loc_881DE518;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r28)
	ctx.current_instruction = 0x881DE4F8;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.current_instruction = 0x881DE4FC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881de5c0
	if (ctx.cr6.eq) goto loc_881DE5C0;
	// bl 0x8815ba70
	ctx.lr = 0x881DE50C;
	sub_8815BA70(ctx, base);
loc_881DE50C:
	// stw r29,0(r31)
	ctx.current_instruction = 0x881DE50C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881DE518:
	// lwz r11,16(r27)
	ctx.current_instruction = 0x881DE518;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881de540
	if (!ctx.cr6.eq) goto loc_881DE540;
	// lhz r10,14(r27)
	ctx.current_instruction = 0x881DE524;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x881de540
	if (!ctx.cr6.eq) goto loc_881DE540;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x881ece80
	ctx.lr = 0x881DE53C;
	sub_881ECE80(ctx, base);
loc_881DE53C:
	// b 0x881de558
	goto loc_881DE558;
loc_881DE540:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// beq cr6,0x881de554
	if (ctx.cr6.eq) goto loc_881DE554;
	// li r5,40
	ctx.r5.s64 = 40;
loc_881DE554:
	// bl 0x880547a0
	ctx.lr = 0x881DE558;
	sub_880547A0(ctx, base);
loc_881DE558:
	// stw r26,14620(r31)
	ctx.current_instruction = 0x881DE558;
	REX_STORE_U32(ctx.r31.u32 + 14620, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,14552(r31)
	ctx.current_instruction = 0x881DE560;
	REX_STORE_U32(ctx.r31.u32 + 14552, ctx.r29.u32);
	// stw r29,0(r28)
	ctx.current_instruction = 0x881DE564;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// stw r29,14580(r31)
	ctx.current_instruction = 0x881DE568;
	REX_STORE_U32(ctx.r31.u32 + 14580, ctx.r29.u32);
	// stw r29,14468(r31)
	ctx.current_instruction = 0x881DE56C;
	REX_STORE_U32(ctx.r31.u32 + 14468, ctx.r29.u32);
	// bl 0x881dd318
	ctx.lr = 0x881DE574;
	sub_881DD318(ctx, base);
loc_881DE574:
	// stw r3,0(r28)
	ctx.current_instruction = 0x881DE574;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881de5c0
	if (!ctx.cr6.eq) goto loc_881DE5C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881dd218
	ctx.lr = 0x881DE588;
	sub_881DD218(ctx, base);
loc_881DE588:
	// stw r3,0(r28)
	ctx.current_instruction = 0x881DE588;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881de5c0
	if (!ctx.cr6.eq) goto loc_881DE5C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881de258
	ctx.lr = 0x881DE59C;
	sub_881DE258(ctx, base);
loc_881DE59C:
	// stw r3,0(r28)
	ctx.current_instruction = 0x881DE59C;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881de5c0
	if (!ctx.cr6.eq) goto loc_881DE5C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881dd118
	ctx.lr = 0x881DE5B0;
	sub_881DD118(ctx, base);
loc_881DE5B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881DE5B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r28)
	ctx.current_instruction = 0x881DE5BC;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_881DE5C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E0958) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E0958;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E0958) {
			switch (rex_dispatch_address) {
				case 0x881E0960:
				case 0x881E0A24:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E0958;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E0960: goto loc_881E0960;
		case 0x881E0A24: goto loc_881E0A24;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x881E0960;
	__savegprlr_19(ctx, base);
loc_881E0960:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x881E0960;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,300(r1)
	ctx.current_instruction = 0x881E0964;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x881e0988
	if (ctx.cr6.eq) goto loc_881E0988;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
loc_881E0988:
	// lwz r22,292(r1)
	ctx.current_instruction = 0x881E0988;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// srawi r26,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r23.s32 >> 1;
	// srawi. r9,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// srawi r7,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r22.s32 >> 1;
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r7,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// ble 0x881e0a00
	if (!ctx.cr0.gt) goto loc_881E0A00;
	// lwz r30,316(r1)
	ctx.current_instruction = 0x881E09A4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
loc_881E09B0:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x881e09f0
	if (!ctx.cr6.gt) goto loc_881E09F0;
	// add r29,r31,r6
	ctx.r29.u64 = ctx.r31.u64 + ctx.r6.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_881E09D0:
	// lbzx r20,r7,r5
	ctx.current_instruction = 0x881E09D0;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// lbzx r19,r29,r11
	ctx.current_instruction = 0x881E09D4;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stbx r20,r30,r9
	ctx.current_instruction = 0x881E09E0;
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r20.u8);
	// stbx r19,r28,r9
	ctx.current_instruction = 0x881E09E4;
	REX_STORE_U8(ctx.r28.u32 + ctx.r9.u32, ctx.r19.u8);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// bdnz 0x881e09d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E09D0;
loc_881E09F0:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// bne 0x881e09b0
	if (!ctx.cr0.eq) goto loc_881E09B0;
loc_881E0A00:
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x881e0a34
	if (!ctx.cr6.gt) goto loc_881E0A34;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
loc_881E0A14:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881ece80
	ctx.lr = 0x881E0A24;
	sub_881ECE80(ctx, base);
loc_881E0A24:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r22
	ctx.r31.u64 = ctx.r31.u64 + ctx.r22.u64;
	// add r30,r30,r21
	ctx.r30.u64 = ctx.r30.u64 + ctx.r21.u64;
	// bne 0x881e0a14
	if (!ctx.cr0.eq) goto loc_881E0A14;
loc_881E0A34:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E2308) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E2308;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E2308) {
			switch (rex_dispatch_address) {
				case 0x881E2310:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E2308;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881E2310: goto loc_881E2310;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881E2310;
	__savegprlr_14(ctx, base);
loc_881E2310:
	// lwz r31,92(r1)
	ctx.current_instruction = 0x881E2310;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// stw r9,68(r1)
	ctx.current_instruction = 0x881E231C;
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// stw r6,44(r1)
	ctx.current_instruction = 0x881E2324;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// stw r10,76(r1)
	ctx.current_instruction = 0x881E232C;
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// addi r6,r31,-1
	ctx.r6.s64 = ctx.r31.s64 + -1;
	// stw r4,28(r1)
	ctx.current_instruction = 0x881E2334;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// rlwinm r10,r7,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// lwz r25,84(r1)
	ctx.current_instruction = 0x881E233C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// divw r4,r9,r6
	ctx.r4.u64 = uint32_t((ctx.r6.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r9.s32 / ctx.r6.s32 : 0);
	// subf r30,r11,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// stw r4,-164(r1)
	ctx.current_instruction = 0x881E2350;
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r4.u32);
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// addze r7,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r7.s64 = temp.s64;
	// rotlwi r11,r30,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// addi r28,r25,-1
	ctx.r28.s64 = ctx.r25.s64 + -1;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// andc r7,r28,r29
	ctx.r7.u64 = ctx.r28.u64 & ~ctx.r29.u64;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// subf r3,r10,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r10.u64;
	// divw r20,r30,r28
	ctx.r20.u64 = uint32_t((ctx.r28.s32 && !(ctx.r30.s32 == INT32_MIN && ctx.r28.s32 == -1)) ? ctx.r30.s32 / ctx.r28.s32 : 0);
	// twllei r28,0
	if (ctx.r28.s32 == 0 || ctx.r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r3,-172(r1)
	ctx.current_instruction = 0x881E2398;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r3.u32);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881e251c
	if (!ctx.cr6.eq) goto loc_881E251C;
	// mr r15,r10
	ctx.r15.u64 = ctx.r10.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x881e2698
	if (!ctx.cr6.gt) goto loc_881E2698;
	// lwz r19,108(r1)
	ctx.current_instruction = 0x881E23BC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r6,r20,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r19,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r8,r31
	ctx.r9.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,-176(r1)
	ctx.current_instruction = 0x881E23D0;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r8.u32);
loc_881E23D4:
	// addi r9,r18,16
	ctx.r9.s64 = ctx.r18.s64 + 16;
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x881e23e8
	if (!ctx.cr6.gt) goto loc_881E23E8;
	// mr r17,r25
	ctx.r17.u64 = ctx.r25.u64;
loc_881E23E8:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881e2500
	if (!ctx.cr6.gt) goto loc_881E2500;
	// subf r16,r18,r17
	ctx.r16.u64 = ctx.r17.u64 - ctx.r18.u64;
	// mullw r10,r16,r19
	ctx.r10.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r19.s32);
	// subfic r7,r10,-2
	ctx.xer.ca = ctx.r10.u32 <= 4294967294;
	ctx.r7.u64 = static_cast<uint64_t>(-2) - ctx.r10.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_881E2404:
	// srawi r7,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 17;
	// srawi r31,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 16;
	// add r21,r8,r4
	ctx.r21.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mullw r8,r31,r26
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r26.s32);
	// srawi r31,r21,16
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r21.s32 >> 16;
	// add r30,r8,r27
	ctx.r30.u64 = ctx.r8.u64 + ctx.r27.u64;
	// mullw r8,r31,r26
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r26.s32);
	// add r29,r8,r27
	ctx.r29.u64 = ctx.r8.u64 + ctx.r27.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// cmpw cr6,r18,r17
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x881e24e8
	if (!ctx.cr6.lt) goto loc_881E24E8;
	// lwz r3,76(r1)
	ctx.current_instruction = 0x881E2430;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// addi r31,r16,-1
	ctx.r31.s64 = ctx.r16.s64 + -1;
	// lwz r28,44(r1)
	ctx.current_instruction = 0x881E2438;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// rlwinm r24,r19,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r26,r7,r3
	ctx.r26.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// rlwinm r7,r31,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// add r25,r26,r28
	ctx.r25.u64 = ctx.r26.u64 + ctx.r28.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r23,r20,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r19,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881E245C:
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// add r31,r8,r20
	ctx.r31.u64 = ctx.r8.u64 + ctx.r20.u64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// add r8,r23,r8
	ctx.r8.u64 = ctx.r23.u64 + ctx.r8.u64;
	// add r14,r26,r3
	ctx.r14.u64 = ctx.r26.u64 + ctx.r3.u64;
	// lbzx r28,r7,r29
	ctx.current_instruction = 0x881E2470;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// lbzx r7,r7,r30
	ctx.current_instruction = 0x881E2474;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// lbzx r3,r25,r3
	ctx.current_instruction = 0x881E2478;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r3.u32);
	// rotlwi r27,r28,8
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r28.u32, 8);
	// rotlwi r3,r3,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// stw r7,-168(r1)
	ctx.current_instruction = 0x881E2484;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r7.u32);
	// srawi r7,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r31.s32 >> 16;
	// lwz r31,-168(r1)
	ctx.current_instruction = 0x881E248C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// rlwinm r28,r31,24,0,7
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF000000;
	// lbzx r31,r14,r5
	ctx.current_instruction = 0x881E2494;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r14.u32 + ctx.r5.u32);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// lbzx r14,r7,r29
	ctx.current_instruction = 0x881E249C;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// lbzx r7,r7,r30
	ctx.current_instruction = 0x881E24A0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// stw r28,-168(r1)
	ctx.current_instruction = 0x881E24A8;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r28.u32);
	// rotlwi r28,r14,8
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r14.u32, 8);
	// rotlwi r7,r7,24
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 24);
	// lwz r14,-168(r1)
	ctx.current_instruction = 0x881E24B4;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// or r7,r27,r14
	ctx.r7.u64 = ctx.r27.u64 | ctx.r14.u64;
	// or r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 | ctx.r3.u64;
	// stw r7,0(r11)
	ctx.current_instruction = 0x881E24C8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stwx r3,r11,r24
	ctx.current_instruction = 0x881E24CC;
	REX_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r3.u32);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bdnz 0x881e245c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E245C;
	// lwz r3,-172(r1)
	ctx.current_instruction = 0x881E24D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r27,28(r1)
	ctx.current_instruction = 0x881E24DC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r26,68(r1)
	ctx.current_instruction = 0x881E24E0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r25,84(r1)
	ctx.current_instruction = 0x881E24E4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_881E24E8:
	// add r8,r21,r4
	ctx.r8.u64 = ctx.r21.u64 + ctx.r4.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x881e2404
	if (ctx.cr6.lt) goto loc_881E2404;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
loc_881E2500:
	// lwz r8,-176(r1)
	ctx.current_instruction = 0x881E2500;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// add r15,r15,r6
	ctx.r15.u64 = ctx.r15.u64 + ctx.r6.u64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x881e23d4
	if (ctx.cr6.lt) goto loc_881E23D4;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881E251C:
	// mr r14,r10
	ctx.r14.u64 = ctx.r10.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x881e2698
	if (!ctx.cr6.gt) goto loc_881E2698;
	// lwz r18,108(r1)
	ctx.current_instruction = 0x881E252C;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r6,r20,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r18,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r8,r31
	ctx.r9.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,-176(r1)
	ctx.current_instruction = 0x881E2540;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r8.u32);
loc_881E2544:
	// addi r9,r17,16
	ctx.r9.s64 = ctx.r17.s64 + 16;
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x881e2558
	if (!ctx.cr6.gt) goto loc_881E2558;
	// mr r16,r25
	ctx.r16.u64 = ctx.r25.u64;
loc_881E2558:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881e2680
	if (!ctx.cr6.gt) goto loc_881E2680;
	// subf r15,r17,r16
	ctx.r15.u64 = ctx.r16.u64 - ctx.r17.u64;
	// mullw r10,r15,r18
	ctx.r10.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r18.s32);
	// subfic r7,r10,-2
	ctx.xer.ca = ctx.r10.u32 <= 4294967294;
	ctx.r7.u64 = static_cast<uint64_t>(-2) - ctx.r10.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_881E2574:
	// srawi r7,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 17;
	// srawi r31,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 16;
	// add r19,r8,r4
	ctx.r19.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mullw r8,r31,r26
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r26.s32);
	// srawi r31,r19,16
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r19.s32 >> 16;
	// add r29,r8,r27
	ctx.r29.u64 = ctx.r8.u64 + ctx.r27.u64;
	// mullw r8,r31,r26
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r26.s32);
	// add r28,r8,r27
	ctx.r28.u64 = ctx.r8.u64 + ctx.r27.u64;
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// cmpw cr6,r17,r16
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x881e2668
	if (!ctx.cr6.lt) goto loc_881E2668;
	// lwz r4,76(r1)
	ctx.current_instruction = 0x881E25A0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// addi r3,r15,-1
	ctx.r3.s64 = ctx.r15.s64 + -1;
	// lwz r31,44(r1)
	ctx.current_instruction = 0x881E25A8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// rlwinm r30,r18,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r24,r7,r4
	ctx.r24.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// rlwinm r7,r3,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r23,r24,r31
	ctx.r23.u64 = ctx.r24.u64 + ctx.r31.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r22,r20,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r18,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881E25CC:
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// add r4,r8,r20
	ctx.r4.u64 = ctx.r8.u64 + ctx.r20.u64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r27,r24,r3
	ctx.r27.u64 = ctx.r24.u64 + ctx.r3.u64;
	// lbzx r26,r7,r29
	ctx.current_instruction = 0x881E25E0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// add r8,r22,r8
	ctx.r8.u64 = ctx.r22.u64 + ctx.r8.u64;
	// lbzx r25,r7,r28
	ctx.current_instruction = 0x881E25E8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r28.u32);
	// srawi r7,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 16;
	// lbzx r3,r23,r3
	ctx.current_instruction = 0x881E25F0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r3.u32);
	// rotlwi r26,r26,8
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 8);
	// stw r31,-168(r1)
	ctx.current_instruction = 0x881E25F8;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r31.u32);
	// rotlwi r25,r25,8
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r25.u32, 8);
	// lbzx r4,r27,r5
	ctx.current_instruction = 0x881E2600;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbzx r27,r7,r28
	ctx.current_instruction = 0x881E2608;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r28.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbzx r7,r7,r29
	ctx.current_instruction = 0x881E2610;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// add r4,r25,r31
	ctx.r4.u64 = ctx.r25.u64 + ctx.r31.u64;
	// rotlwi r27,r27,8
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 8);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// sth r4,0(r11)
	ctx.current_instruction = 0x881E2620;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// add r26,r26,r3
	ctx.r26.u64 = ctx.r26.u64 + ctx.r3.u64;
	// lwz r4,-168(r1)
	ctx.current_instruction = 0x881E2628;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// clrlwi r7,r26,16
	ctx.r7.u64 = ctx.r26.u32 & 0xFFFF;
	// clrlwi r31,r31,16
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r7,2(r11)
	ctx.current_instruction = 0x881E2640;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// sthx r31,r11,r30
	ctx.current_instruction = 0x881E2644;
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r31.u16);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// sth r3,2(r4)
	ctx.current_instruction = 0x881E264C;
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r3.u16);
	// bdnz 0x881e25cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E25CC;
	// lwz r4,-164(r1)
	ctx.current_instruction = 0x881E2654;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// lwz r3,-172(r1)
	ctx.current_instruction = 0x881E2658;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r27,28(r1)
	ctx.current_instruction = 0x881E265C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r26,68(r1)
	ctx.current_instruction = 0x881E2660;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r25,84(r1)
	ctx.current_instruction = 0x881E2664;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_881E2668:
	// add r8,r19,r4
	ctx.r8.u64 = ctx.r19.u64 + ctx.r4.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x881e2574
	if (ctx.cr6.lt) goto loc_881E2574;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
loc_881E2680:
	// lwz r8,-176(r1)
	ctx.current_instruction = 0x881E2680;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// add r14,r14,r6
	ctx.r14.u64 = ctx.r14.u64 + ctx.r6.u64;
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x881e2544
	if (ctx.cr6.lt) goto loc_881E2544;
loc_881E2698:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EC4D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EC4D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EC4D8) {
			switch (rex_dispatch_address) {
				case 0x881EC524:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EC4D8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EC524: goto loc_881EC524;
		default: break;
	}
	// std r31,-8(r1)
	ctx.current_instruction = 0x881EC4D8;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r21,-16(r1)
	ctx.current_instruction = 0x881EC4E0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r21.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	ctx.current_instruction = 0x881EC4E8;
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881EC4EC;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,84(r31)
	ctx.current_instruction = 0x881EC4F0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x881ec510
	goto loc_881EC510;
loc_881EC510:
	// lwz r11,96(r31)
	ctx.current_instruction = 0x881EC510;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ec524
	if (ctx.cr6.eq) goto loc_881EC524;
	// lwz r3,1408(r21)
	ctx.current_instruction = 0x881EC51C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 1408);
	// bl 0x88243660
	ctx.lr = 0x881EC524;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_881EC524:
	// lwz r1,0(r1)
	ctx.current_instruction = 0x881EC524;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881EC528;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	ctx.current_instruction = 0x881EC52C;
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.current_instruction = 0x881EC530;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EC818) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EC818;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EC818) {
			switch (rex_dispatch_address) {
				case 0x881EC86C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EC818;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EC86C: goto loc_881EC86C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881EC81C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881EC820;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881EC824;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881EC828;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x881ec848
	if (ctx.cr6.eq) goto loc_881EC848;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mulli r11,r11,-10000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(-10000));
	// std r11,80(r1)
	ctx.current_instruction = 0x881EC840;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// b 0x881ec858
	goto loc_881EC858;
loc_881EC848:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,84(r1)
	ctx.current_instruction = 0x881EC850;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	ctx.current_instruction = 0x881EC854;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_881EC858:
	// clrlwi r30,r31,24
	ctx.r30.u64 = ctx.r31.u32 & 0xFF;
loc_881EC85C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x88243820
	ctx.lr = 0x881EC86C;
	__imp__KeDelayExecutionThread(ctx, base);
loc_881EC86C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881ec87c
	if (ctx.cr6.eq) goto loc_881EC87C;
	// cmpwi cr6,r3,257
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 257, ctx.xer);
	// beq cr6,0x881ec85c
	if (ctx.cr6.eq) goto loc_881EC85C;
loc_881EC87C:
	// addi r11,r3,-192
	ctx.r11.s64 = ctx.r3.s64 + -192;
	// li r10,192
	ctx.r10.s64 = 192;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881EC894;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881EC89C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881EC8A0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881ED210) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881ED210);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ED210;
	ctx.current_instruction = 0x881ED210;
	// b 0x88243870
	__imp__MmQueryAddressProtect(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881ED230) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881ED230;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881ED230) {
			switch (rex_dispatch_address) {
				case 0x881ED238:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ED230;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881ED238: goto loc_881ED238;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881ED238;
	__savegprlr_29(ctx, base);
loc_881ED238:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bge cr6,0x881ed268
	if (!ctx.cr6.lt) goto loc_881ED268;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x881ed3cc
	if (ctx.cr6.eq) goto loc_881ED3CC;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_881ED258:
	// stbx r10,r11,r3
	ctx.current_instruction = 0x881ED258;
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881ed258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881ED258;
	// b 0x881ed3cc
	goto loc_881ED3CC;
loc_881ED268:
	// neg r11,r3
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// vspltisb v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x4)));
	// lvsl v13,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// srawi r8,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lvsl v12,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// vslb v0,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// vor v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vspltb v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi8(char(0xF))));
	// beq 0x881ed2a4
	if (ctx.cr0.eq) goto loc_881ED2A4;
	// stvlx v0,0,r3
	ctx.current_instruction = 0x881ED298;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_881ED2A4:
	// rlwinm r11,r5,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x881ed2b4
	if (!ctx.cr6.lt) goto loc_881ED2B4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_881ED2B4:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r6,15324(r11)
	ctx.current_instruction = 0x881ED2BC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 15324);
	// beq cr6,0x881ed2d4
	if (ctx.cr6.eq) goto loc_881ED2D4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881ED2C8:
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bdnz 0x881ed2c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881ED2C8;
loc_881ED2D4:
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi. r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r7,r11,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r11,r7,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// bne 0x881ed304
	if (!ctx.cr0.eq) goto loc_881ED304;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ed3a0
	if (ctx.cr6.eq) goto loc_881ED3A0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881ED2F4:
	// dcbzl r0,r10
	ea = (ctx.r10.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x881ed2f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881ED2F4;
	// b 0x881ed3a0
	goto loc_881ED3A0;
loc_881ED304:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// blt cr6,0x881ed314
	if (ctx.cr6.lt) goto loc_881ED314;
	// li r8,4
	ctx.r8.s64 = 4;
loc_881ED314:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x881ed334
	if (ctx.cr6.eq) goto loc_881ED334;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881ED324:
	// rlwinm r8,r9,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// dcbzl r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x881ed324
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881ED324;
loc_881ED334:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ed3a0
	if (ctx.cr6.eq) goto loc_881ED3A0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881ED344:
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x881ed358
	if (!ctx.cr6.lt) goto loc_881ED358;
	// li r8,512
	ctx.r8.s64 = 512;
	// dcbzl r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
loc_881ED358:
	// li r8,16
	ctx.r8.s64 = 16;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r31,64
	ctx.r31.s64 = 64;
	// li r30,80
	ctx.r30.s64 = 80;
	// stvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,96
	ctx.r29.s64 = 96;
	// li r8,112
	ctx.r8.s64 = 112;
	// stvx128 v0,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stvx128 v0,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r30
	ea = (ctx.r10.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r29
	ea = (ctx.r10.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x881ed344
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881ED344;
loc_881ED3A0:
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x881ed3c8
	if (ctx.cr6.lt) goto loc_881ED3C8;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881ED3B8:
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bdnz 0x881ed3b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881ED3B8;
loc_881ED3C8:
	// stvrx v0,r10,r11
	ctx.current_instruction = 0x881ED3C8;
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
loc_881ED3CC:
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_24) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EED30);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EED30;
	ctx.current_instruction = 0x881EED30;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_30) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EED60);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EED60;
	ctx.current_instruction = 0x881EED60;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_74) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEDC4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEDC4;
	ctx.current_instruction = 0x881EEDC4;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_96) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEE74);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEE74;
	ctx.current_instruction = 0x881EEE74;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_25) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEFD0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EEFD0;
	ctx.current_instruction = 0x881EEFD0;
	uint32_t ea{};
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(__restvmx_84) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF0AC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF0AC;
	ctx.current_instruction = 0x881EF0AC;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_109) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF174);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF174;
	ctx.current_instruction = 0x881EF174;
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_881EF690) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EF690;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EF690) {
			switch (rex_dispatch_address) {
				case 0x881EF6B4:
				case 0x881EF6CC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EF690;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EF6B4: goto loc_881EF6B4;
		case 0x881EF6CC: goto loc_881EF6CC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881EF694;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881EF698;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881EF69C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x881ef6c4
	if (!ctx.cr6.lt) goto loc_881EF6C4;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x88052218
	ctx.lr = 0x881EF6B4;
	sub_88052218(ctx, base);
loc_881EF6B4:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881EF6B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,12(r31)
	ctx.current_instruction = 0x881EF6BC;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x881ef6cc
	goto loc_881EF6CC;
loc_881EF6C4:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x88243680
	ctx.lr = 0x881EF6CC;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_881EF6CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881EF6D0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881EF6D8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F0E10) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F0E10;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F0E10) {
			switch (rex_dispatch_address) {
				case 0x881F0E64:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F0E10;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F0E64: goto loc_881F0E64;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881F0E14;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881F0E18;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881F0E1C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881F0E20;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r30,r11,24064
	ctx.r30.s64 = ctx.r11.s64 + 24064;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_881F0E30:
	// lwz r3,0(r31)
	ctx.current_instruction = 0x881F0E30;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881f0e6c
	if (ctx.cr6.eq) goto loc_881F0E6C;
	// addi r11,r3,2304
	ctx.r11.s64 = ctx.r3.s64 + 2304;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x881f0e60
	if (!ctx.cr6.lt) goto loc_881F0E60;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
loc_881F0E54:
	// addi r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 72;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x881f0e54
	if (ctx.cr6.lt) goto loc_881F0E54;
loc_881F0E60:
	// bl 0x88052278
	ctx.lr = 0x881F0E64;
	sub_88052278(ctx, base);
loc_881F0E64:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	ctx.current_instruction = 0x881F0E68;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_881F0E6C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,256
	ctx.r11.s64 = ctx.r30.s64 + 256;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881f0e30
	if (ctx.cr6.lt) goto loc_881F0E30;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881F0E80;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881F0E88;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881F0E8C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F1C50) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F1C50;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F1C50) {
			switch (rex_dispatch_address) {
				case 0x881F1C58:
				case 0x881F1C74:
				case 0x881F1CA4:
				case 0x881F1CB0:
				case 0x881F1CEC:
				case 0x881F1D0C:
				case 0x881F1D10:
				case 0x881F1D1C:
				case 0x881F1D38:
				case 0x881F1D40:
				case 0x881F1D5C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F1C50;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F1C58: goto loc_881F1C58;
		case 0x881F1C74: goto loc_881F1C74;
		case 0x881F1CA4: goto loc_881F1CA4;
		case 0x881F1CB0: goto loc_881F1CB0;
		case 0x881F1CEC: goto loc_881F1CEC;
		case 0x881F1D0C: goto loc_881F1D0C;
		case 0x881F1D10: goto loc_881F1D10;
		case 0x881F1D1C: goto loc_881F1D1C;
		case 0x881F1D38: goto loc_881F1D38;
		case 0x881F1D40: goto loc_881F1D40;
		case 0x881F1D5C: goto loc_881F1D5C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881F1C58;
	__savegprlr_27(ctx, base);
loc_881F1C58:
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881F1C5C;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	ctx.current_instruction = 0x881F1C64;
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x881f1c88
	if (!ctx.cr6.eq) goto loc_881F1C88;
	// bl 0x880529c8
	ctx.lr = 0x881F1C74;
	sub_880529C8(ctx, base);
loc_881F1C74:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	ctx.current_instruction = 0x881F1C80;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x881f1d60
	goto loc_881F1D60;
loc_881F1C88:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x881f1ca0
	if (ctx.cr6.lt) goto loc_881F1CA0;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,24036(r11)
	ctx.current_instruction = 0x881F1C94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24036);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x881f1cb8
	if (ctx.cr6.lt) goto loc_881F1CB8;
loc_881F1CA0:
	// bl 0x880529c8
	ctx.lr = 0x881F1CA4;
	sub_880529C8(ctx, base);
loc_881F1CA4:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881F1CA8;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880523e8
	ctx.lr = 0x881F1CB0;
	sub_880523E8(ctx, base);
loc_881F1CB0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x881f1d60
	goto loc_881F1D60;
loc_881F1CB8:
	// srawi r11,r27,5
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 5;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r10,24064
	ctx.r29.s64 = ctx.r10.s64 + 24064;
	// clrlwi r11,r27,27
	ctx.r11.u64 = ctx.r27.u32 & 0x1F;
	// mulli r30,r11,72
	ctx.r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r28,r29
	ctx.current_instruction = 0x881F1CD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.current_instruction = 0x881F1CD8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f1ca0
	if (ctx.cr0.eq) goto loc_881F1CA0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881f1b20
	ctx.lr = 0x881F1CEC;
	sub_881F1B20(ctx, base);
loc_881F1CEC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r28,r29
	ctx.current_instruction = 0x881F1CF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.current_instruction = 0x881F1CF8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f1d3c
	if (ctx.cr0.eq) goto loc_881F1D3C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881f1a60
	ctx.lr = 0x881F1D0C;
	sub_881F1A60(ctx, base);
loc_881F1D0C:
	// bl 0x881f2248
	ctx.lr = 0x881F1D10;
	sub_881F2248(ctx, base);
loc_881F1D10:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x881f1d24
	if (!ctx.cr0.eq) goto loc_881F1D24;
	// bl 0x881e9030
	ctx.lr = 0x881F1D1C;
	sub_881E9030(ctx, base);
loc_881F1D1C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x881f1d28
	goto loc_881F1D28;
loc_881F1D24:
	// li r30,0
	ctx.r30.s64 = 0;
loc_881F1D28:
	// stw r30,80(r31)
	ctx.current_instruction = 0x881F1D28;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881f1d50
	if (ctx.cr6.eq) goto loc_881F1D50;
	// bl 0x88052a00
	ctx.lr = 0x881F1D38;
	sub_88052A00(ctx, base);
loc_881F1D38:
	// stw r30,0(r3)
	ctx.current_instruction = 0x881F1D38;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_881F1D3C:
	// bl 0x880529c8
	ctx.lr = 0x881F1D40;
	sub_880529C8(ctx, base);
loc_881F1D40:
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881F1D48;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	ctx.current_instruction = 0x881F1D4C;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_881F1D50:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x881f1d88
	ctx.lr = 0x881F1D5C;
	sub_881F1D88(ctx, base);
loc_881F1D5C:
	// lwz r3,80(r31)
	ctx.current_instruction = 0x881F1D5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
loc_881F1D60:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88202940) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88202940;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88202940) {
			switch (rex_dispatch_address) {
				case 0x88202948:
				case 0x88202A3C:
				case 0x88202AC8:
				case 0x88202AE0:
				case 0x88202B40:
				case 0x88202BE0:
				case 0x88202C70:
				case 0x88202C88:
				case 0x88202D00:
				case 0x88202D30:
				case 0x88202D9C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88202940;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88202948: goto loc_88202948;
		case 0x88202A3C: goto loc_88202A3C;
		case 0x88202AC8: goto loc_88202AC8;
		case 0x88202AE0: goto loc_88202AE0;
		case 0x88202B40: goto loc_88202B40;
		case 0x88202BE0: goto loc_88202BE0;
		case 0x88202C70: goto loc_88202C70;
		case 0x88202C88: goto loc_88202C88;
		case 0x88202D00: goto loc_88202D00;
		case 0x88202D30: goto loc_88202D30;
		case 0x88202D9C: goto loc_88202D9C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x88202948;
	__savegprlr_15(ctx, base);
loc_88202948:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x88202948;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,29(r3)
	ctx.current_instruction = 0x8820294C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 29);
	// li r18,0
	ctx.r18.s64 = 0;
	// lwz r10,0(r4)
	ctx.current_instruction = 0x88202954;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lbz r24,34(r3)
	ctx.current_instruction = 0x8820295C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r3.u32 + 34);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lbz r16,5(r4)
	ctx.current_instruction = 0x88202964;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// rlwinm r21,r10,12,30,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88202984
	if (ctx.cr6.eq) goto loc_88202984;
	// rlwinm r24,r10,8,29,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x7;
loc_88202984:
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// li r15,3
	ctx.r15.s64 = 3;
	// ori r22,r11,32768
	ctx.r22.u64 = ctx.r11.u64 | 32768;
loc_88202994:
	// clrlwi r11,r16,31
	ctx.r11.u64 = ctx.r16.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88202de4
	if (ctx.cr6.eq) goto loc_88202DE4;
	// lwz r11,0(r19)
	ctx.current_instruction = 0x882029A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88202b18
	if (ctx.cr6.eq) goto loc_88202B18;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x88202b18
	if (!ctx.cr6.eq) goto loc_88202B18;
	// lwz r11,608(r25)
	ctx.current_instruction = 0x882029B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 608);
	// lwz r31,0(r25)
	ctx.current_instruction = 0x882029BC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x882029d4
	if (!ctx.cr6.eq) goto loc_882029D4;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// stw r15,20(r31)
	ctx.current_instruction = 0x882029CC;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r15.u32);
	// b 0x88202af8
	goto loc_88202AF8;
loc_882029D4:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x882029D4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.current_instruction = 0x882029D8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r11)
	ctx.current_instruction = 0x882029E0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r29
	ctx.current_instruction = 0x882029F0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r29.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88202ac0
	if (ctx.cr6.lt) goto loc_88202AC0;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88202A00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x88202A10;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x88202A18;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x88202ab8
	if (!ctx.cr6.lt) goto loc_88202AB8;
loc_88202A20:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x88202A20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88202A24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88202a4c
	if (ctx.cr6.lt) goto loc_88202A4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x88202A3C;
	sub_88156440(ctx, base);
loc_88202A3C:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x88202a20
	if (ctx.cr6.eq) goto loc_88202A20;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88202af8
	goto loc_88202AF8;
loc_88202A4C:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x88202A4C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x88202A54;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r7,2(r11)
	ctx.current_instruction = 0x88202A5C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.current_instruction = 0x88202A60;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,4(r11)
	ctx.current_instruction = 0x88202A68;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x88202A6C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r6,r10,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88202A74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x88202A78;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88202A80;
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
	ctx.current_instruction = 0x88202A9C;
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
	ctx.current_instruction = 0x88202AB4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_88202AB8:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88202af8
	goto loc_88202AF8;
loc_88202AC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88202AC8;
	sub_88156500(ctx, base);
loc_88202AC8:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88202AC8;
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
	ctx.lr = 0x88202AE0;
	sub_88156500(ctx, base);
loc_88202AE0:
	// add r10,r30,r22
	ctx.r10.u64 = ctx.r30.u64 + ctx.r22.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x88202AE8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88202ac8
	if (ctx.cr6.lt) goto loc_88202AC8;
loc_88202AF8:
	// lwz r11,0(r25)
	ctx.current_instruction = 0x88202AF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88202AFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88202cb4
	if (!ctx.cr6.eq) goto loc_88202CB4;
	// add r11,r30,r25
	ctx.r11.u64 = ctx.r30.u64 + ctx.r25.u64;
	// add r10,r30,r25
	ctx.r10.u64 = ctx.r30.u64 + ctx.r25.u64;
	// lbz r24,684(r11)
	ctx.current_instruction = 0x88202B10;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 684);
	// lbz r21,692(r10)
	ctx.current_instruction = 0x88202B14;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 692);
loc_88202B18:
	// add r11,r17,r19
	ctx.r11.u64 = ctx.r17.u64 + ctx.r19.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stb r24,8(r11)
	ctx.current_instruction = 0x88202B20;
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r24.u8);
	// bne cr6,0x88202b74
	if (!ctx.cr6.eq) goto loc_88202B74;
	// lwz r31,20(r23)
	ctx.current_instruction = 0x88202B28;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,404(r25)
	ctx.current_instruction = 0x88202B30;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 404);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lbz r5,160(r25)
	ctx.current_instruction = 0x88202B38;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r25.u32 + 160);
	// bl 0x88215008
	ctx.lr = 0x88202B40;
	sub_88215008(ctx, base);
loc_88202B40:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x88202e44
	if (ctx.cr6.eq) goto loc_88202E44;
	// rlwinm r11,r3,1,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// lwz r10,24(r23)
	ctx.current_instruction = 0x88202B4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 24);
	// ori r20,r20,1
	ctx.r20.u64 = ctx.r20.u64 | 1;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// stw r8,20(r23)
	ctx.current_instruction = 0x88202B5C;
	REX_STORE_U32(ctx.r23.u32 + 20, ctx.r8.u32);
	// stb r3,0(r10)
	ctx.current_instruction = 0x88202B60;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// lwz r11,24(r23)
	ctx.current_instruction = 0x88202B64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 24);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,24(r23)
	ctx.current_instruction = 0x88202B6C;
	REX_STORE_U32(ctx.r23.u32 + 24, ctx.r7.u32);
	// b 0x88202dec
	goto loc_88202DEC;
loc_88202B74:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// bne cr6,0x88202cc0
	if (!ctx.cr6.eq) goto loc_88202CC0;
	// lwz r31,0(r25)
	ctx.current_instruction = 0x88202B7C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,612(r25)
	ctx.current_instruction = 0x88202B80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 612);
	// ld r11,0(r31)
	ctx.current_instruction = 0x88202B84;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r29,0(r10)
	ctx.current_instruction = 0x88202B88;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rldicl r9,r11,6,58
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0x3F;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r29
	ctx.current_instruction = 0x88202B94;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// extsh r30,r7
	ctx.r30.s64 = ctx.r7.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88202c64
	if (ctx.cr6.lt) goto loc_88202C64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88202BA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x88202BB4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x88202BBC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x88202c5c
	if (!ctx.cr6.lt) goto loc_88202C5C;
loc_88202BC4:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x88202BC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88202BC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88202bf0
	if (ctx.cr6.lt) goto loc_88202BF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x88202BE0;
	sub_88156440(ctx, base);
loc_88202BE0:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x88202bc4
	if (ctx.cr6.eq) goto loc_88202BC4;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88202ca0
	goto loc_88202CA0;
loc_88202BF0:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x88202BF0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x88202BF8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x88202C00;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x88202C04;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x88202C0C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x88202C10;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88202C18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x88202C1C;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88202C24;
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
	ctx.current_instruction = 0x88202C40;
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
	ctx.current_instruction = 0x88202C58;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_88202C5C:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88202ca0
	goto loc_88202CA0;
loc_88202C64:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88202C70;
	sub_88156500(ctx, base);
loc_88202C70:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88202C70;
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
	ctx.lr = 0x88202C88;
	sub_88156500(ctx, base);
loc_88202C88:
	// add r10,r30,r22
	ctx.r10.u64 = ctx.r30.u64 + ctx.r22.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x88202C90;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88202c70
	if (ctx.cr6.lt) goto loc_88202C70;
loc_88202CA0:
	// lwz r10,0(r25)
	ctx.current_instruction = 0x88202CA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lwz r9,20(r10)
	ctx.current_instruction = 0x88202CA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88202d44
	if (ctx.cr6.eq) goto loc_88202D44;
loc_88202CB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_88202CC0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x88202d40
	if (!ctx.cr6.eq) goto loc_88202D40;
	// lwz r11,0(r19)
	ctx.current_instruction = 0x88202CC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88202d40
	if (!ctx.cr6.eq) goto loc_88202D40;
	// lwz r3,0(r25)
	ctx.current_instruction = 0x88202CD8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88202CDC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88202CE0;
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
	ctx.current_instruction = 0x88202CF0;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88202CF4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88202d00
	if (!ctx.cr0.lt) goto loc_88202D00;
	// bl 0x88156678
	ctx.lr = 0x88202D00;
	sub_88156678(ctx, base);
loc_88202D00:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x88202d38
	if (!ctx.cr6.eq) goto loc_88202D38;
	// lwz r3,0(r25)
	ctx.current_instruction = 0x88202D08;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88202D0C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88202D10;
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
	ctx.current_instruction = 0x88202D20;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88202D24;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88202d30
	if (!ctx.cr0.lt) goto loc_88202D30;
	// bl 0x88156678
	ctx.lr = 0x88202D30;
	sub_88156678(ctx, base);
loc_88202D30:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// b 0x88202d44
	goto loc_88202D44;
loc_88202D38:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// b 0x88202d44
	goto loc_88202D44;
loc_88202D40:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_88202D44:
	// rlwinm r10,r24,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lbz r28,320(r9)
	ctx.current_instruction = 0x88202D58;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r9.u32 + 320);
	// or r20,r6,r20
	ctx.r20.u64 = ctx.r6.u64 | ctx.r20.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x88202cb4
	if (ctx.cr6.eq) goto loc_88202CB4;
	// add r11,r24,r25
	ctx.r11.u64 = ctx.r24.u64 + ctx.r25.u64;
	// lwz r27,404(r25)
	ctx.current_instruction = 0x88202D6C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r25.u32 + 404);
	// lwz r29,24(r23)
	ctx.current_instruction = 0x88202D70;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r23.u32 + 24);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// lwz r31,20(r23)
	ctx.current_instruction = 0x88202D78;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lbz r26,160(r11)
	ctx.current_instruction = 0x88202D80;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 160);
	// ble cr6,0x88202dc4
	if (!ctx.cr6.gt) goto loc_88202DC4;
loc_88202D88:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88215008
	ctx.lr = 0x88202D9C;
	sub_88215008(ctx, base);
loc_88202D9C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x88202dac
	if (!ctx.cr6.eq) goto loc_88202DAC;
	// stbx r18,r30,r29
	ctx.current_instruction = 0x88202DA4;
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r18.u8);
	// b 0x88202db8
	goto loc_88202DB8;
loc_88202DAC:
	// rlwinm r11,r3,1,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// stbx r3,r30,r29
	ctx.current_instruction = 0x88202DB0;
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r3.u8);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_88202DB8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x88202d88
	if (ctx.cr6.lt) goto loc_88202D88;
loc_88202DC4:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x88202cb4
	if (ctx.cr6.eq) goto loc_88202CB4;
	// lwz r11,24(r23)
	ctx.current_instruction = 0x88202DCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 24);
	// stw r31,20(r23)
	ctx.current_instruction = 0x88202DD0;
	REX_STORE_U32(ctx.r23.u32 + 20, ctx.r31.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// stw r11,24(r23)
	ctx.current_instruction = 0x88202DDC;
	REX_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x88202dec
	goto loc_88202DEC;
loc_88202DE4:
	// add r11,r17,r19
	ctx.r11.u64 = ctx.r17.u64 + ctx.r19.u64;
	// stb r18,8(r11)
	ctx.current_instruction = 0x88202DE8;
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r18.u8);
loc_88202DEC:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// rlwinm r16,r16,31,1,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 31) & 0x7FFFFFFF;
	// rldicr r20,r20,8,55
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// cmplwi cr6,r17,6
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 6, ctx.xer);
	// blt cr6,0x88202994
	if (ctx.cr6.lt) goto loc_88202994;
	// lwz r11,0(r19)
	ctx.current_instruction = 0x88202E00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// rldicl r10,r20,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u64, 56) & 0xFFFFFFFFFFFFFF;
	// lbz r9,4(r19)
	ctx.current_instruction = 0x88202E08;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r19.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r8,r11,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lbz r7,5(r19)
	ctx.current_instruction = 0x88202E14;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r19.u32 + 5);
	// lwz r6,4(r23)
	ctx.current_instruction = 0x88202E18;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r5,r8,0,24,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0;
	// lwz r4,1312(r25)
	ctx.current_instruction = 0x88202E20;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 1312);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rldimi r5,r9,8,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00) | (ctx.r5.u64 & 0xFF);
	// or r9,r5,r7
	ctx.r9.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rldicr r8,r9,48,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 48) & 0xFFFF000000000000;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stdx r7,r11,r4
	ctx.current_instruction = 0x88202E38;
	REX_STORE_U64(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_88202E44:
	// lwz r11,24(r23)
	ctx.current_instruction = 0x88202E44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 24);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stb r18,0(r11)
	ctx.current_instruction = 0x88202E4C;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r18.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821A598) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821A598;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821A598) {
			switch (rex_dispatch_address) {
				case 0x8821A5A0:
				case 0x8821A5E4:
				case 0x8821A5FC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821A598;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821A5A0: goto loc_8821A5A0;
		case 0x8821A5E4: goto loc_8821A5E4;
		case 0x8821A5FC: goto loc_8821A5FC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8821A5A0;
	__savegprlr_29(ctx, base);
loc_8821A5A0:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8821A5A0;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// vspltish v1,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x1)));
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vrlh v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, result);
	}
	// li r8,0
	ctx.r8.s64 = 0;
	// lvx128 v2,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// vsubshs v0,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stvx128 v0,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x88218f60
	ctx.lr = 0x8821A5E4;
	sub_88218F60(ctx, base);
loc_8821A5E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lvx128 v2,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// vspltish v1,7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x7)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x882193c8
	ctx.lr = 0x8821A5FC;
	sub_882193C8(ctx, base);
loc_8821A5FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821B228) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821B228;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821B228) {
			switch (rex_dispatch_address) {
				case 0x8821B230:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821B228;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821B230: goto loc_8821B230;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8821B230;
	__savegprlr_26(ctx, base);
loc_8821B230:
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// vsrah v11,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// bne cr6,0x8821b340
	if (!ctx.cr6.eq) goto loc_8821B340;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r5,96
	ctx.r11.s64 = ctx.r5.s64 + 96;
	// li r10,16
	ctx.r10.s64 = 16;
	// rlwinm r29,r4,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r30,-96
	ctx.r30.s64 = -96;
	// li r31,-48
	ctx.r31.s64 = -48;
	// li r5,48
	ctx.r5.s64 = 48;
loc_8821B26C:
	// add r9,r29,r3
	ctx.r9.u64 = ctx.r29.u64 + ctx.r3.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v62,r29,r3
	ea = (ctx.r29.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r28,r3
	ctx.r8.u64 = ctx.r28.u64 + ctx.r3.u64;
	// lvx128 v61,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v60,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r28,r3
	ea = (ctx.r28.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v63,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v3,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v59,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v1,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v31,v62,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v30,v58,v55,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vperm128 v29,v61,v57,v1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v28,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v26,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v23,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v25,v28,v8
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v24,v10,v27
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vslh v22,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v18,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v15,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v17,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v16,v20,v11
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v14,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
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
	// stvx128 v14,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v8,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// bdnz 0x8821b26c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821B26C;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8821B340:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8821b4b0
	if (!ctx.cr6.gt) goto loc_8821B4B0;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// li r10,16
	ctx.r10.s64 = 16;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r5,96
	ctx.r11.s64 = ctx.r5.s64 + 96;
	// rlwinm r29,r4,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,-96
	ctx.r30.s64 = -96;
	// li r31,-48
	ctx.r31.s64 = -48;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r26,-80
	ctx.r26.s64 = -80;
	// li r27,-32
	ctx.r27.s64 = -32;
	// li r28,64
	ctx.r28.s64 = 64;
loc_8821B380:
	// add r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lvx128 v53,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v51,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v50,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// lvx128 v49,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v52,v53,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v47,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v3,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v2,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v50,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v45,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v51,v47,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v44,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v7,v49,v46,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvsl v1,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v31,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v44,v45,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v30,v3,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v29,v10,v5
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v27,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vmrglb v26,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v25,v31,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v24,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v23,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v22,v4,v28
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v21,v7,v26
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vslh v20,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v10,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vaddshs v3,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
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
	// vsrah v28,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v1,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v27,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v31,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v26,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v30,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v29,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v28,r11,r26
	ea = (ctx.r11.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v27,r11,r27
	ea = (ctx.r11.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r11,r28
	ea = (ctx.r11.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// bdnz 0x8821b380
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821B380;
loc_8821B4B0:
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_882219C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x882219C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x882219C0) {
			switch (rex_dispatch_address) {
				case 0x882219C8:
				case 0x88221A20:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882219C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x882219C8: goto loc_882219C8;
		case 0x88221A20: goto loc_88221A20;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x882219C8;
	__savegprlr_27(ctx, base);
loc_882219C8:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x882219C8;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v13,7
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x7)));
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
	// lwz r31,1164(r6)
	ctx.current_instruction = 0x882219E0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vspltish v1,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x1)));
	// vrlh v12,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, result);
	}
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v2,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// vsubshs v11,v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// stvx128 v13,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stvx128 v11,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x88218f60
	ctx.lr = 0x88221A20;
	sub_88218F60(ctx, base);
loc_88221A20:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// vspltish v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// vspltisb v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// vspltish v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x3)));
	// slw r9,r8,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// vspltish v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x0)));
	// vslh v8,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x88221ad0
	if (!ctx.cr6.eq) goto loc_88221AD0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88221b7c
	if (!ctx.cr6.gt) goto loc_88221B7C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_88221A6C:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
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
	ctx.current_instruction = 0x88221ABC;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ctx.current_instruction = 0x88221AC0;
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x88221a6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88221A6C;
	// b 0x88221b7c
	goto loc_88221B7C;
loc_88221AD0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88221b7c
	if (!ctx.cr6.gt) goto loc_88221B7C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_88221AE8:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
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
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x88221ae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88221AE8;
loc_88221B7C:
	// vand v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vcmpgtuh. v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88225168) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88225168;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88225168) {
			switch (rex_dispatch_address) {
				case 0x882251B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88225168;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x882251B8: goto loc_882251B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8822516C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88225170;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88225174;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r8,196(r1)
	ctx.current_instruction = 0x8822517C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// subfic r9,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r9,80(r1)
	ctx.current_instruction = 0x8822518C;
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
	// bl 0x88221b98
	ctx.lr = 0x882251B8;
	sub_88221B98(ctx, base);
loc_882251B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x882251BC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x882251C4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88225308) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88225308;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88225308) {
			switch (rex_dispatch_address) {
				case 0x88225310:
				case 0x88225574:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88225308;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88225310: goto loc_88225310;
		case 0x88225574: goto loc_88225574;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88225310;
	__savegprlr_25(ctx, base);
loc_88225310:
	// stwu r1,-928(r1)
	ctx.current_instruction = 0x88225310;
	ea = -928 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lwz r29,1012(r1)
	ctx.current_instruction = 0x88225338;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1012);
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v62,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v58,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subfic r9,r9,8
	ctx.xer.ca = ctx.r9.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r9.u64;
	// lvx128 v56,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lvx128 v59,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r9,80(r1)
	ctx.current_instruction = 0x8822536C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lvx128 v57,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cntlzw r9,r29
	ctx.r9.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// lvx128 v61,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lvsl v3,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v62,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v31,v57,v56,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// add r8,r31,r3
	ctx.r8.u64 = ctx.r31.u64 + ctx.r3.u64;
	// vperm128 v1,v60,v58,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v55,r31,r3
	ea = (ctx.r31.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// and r9,r7,r30
	ctx.r9.u64 = ctx.r7.u64 & ctx.r30.u64;
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// vmrghb v10,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r27,r1,192
	ctx.r27.s64 = ctx.r1.s64 + 192;
	// vmrghb v11,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v54,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v5,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r26,r1,240
	ctx.r26.s64 = ctx.r1.s64 + 240;
	// vperm128 v6,v55,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r6,1
	ctx.r6.s64 = 1;
	// vadduhm v1,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// vadduhm v31,v4,v12
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// li r25,4
	ctx.r25.s64 = 4;
	// vmrghb v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v29,v2,v10
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v30,v3,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// slw r7,r6,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// vadduhm v28,v1,v12
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvx128 v27,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// slw r6,r25,r30
	ctx.r6.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r30.u8 & 0x3F));
	// vadduhm v25,v30,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsplth v1,v27,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vadduhm v24,v29,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// stvx128 v28,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x882254f0
	if (!ctx.cr6.eq) goto loc_882254F0;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvx128 v53,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vslh v12,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r31,r31,r3
	ctx.r31.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvx128 v52,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v9,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// lvx128 v51,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,288
	ctx.r29.s64 = ctx.r1.s64 + 288;
	// lvx128 v50,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,336
	ctx.r28.s64 = ctx.r1.s64 + 336;
	// lvx128 v49,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,384
	ctx.r27.s64 = ctx.r1.s64 + 384;
	// lvx128 v48,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,432
	ctx.r26.s64 = ctx.r1.s64 + 432;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v3,v52,v49,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v50,v48,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v46,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v46,v47,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v5,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vmrghb v2,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v31,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v30,v5,v12
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v29,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v28,v3,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v31,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v27,v30,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v26,v29,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v25,v28,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// stvx128 v27,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_882254F0:
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// blt cr6,0x8822556c
	if (ctx.cr6.lt) goto loc_8822556C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8822556c
	if (!ctx.cr6.gt) goto loc_8822556C;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// subf r27,r9,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r3,r10,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// subf r3,r9,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r11,r30,-48
	ctx.r11.s64 = ctx.r30.s64 + -48;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8822552C:
	// lbzux r8,r3,r9
	ctx.current_instruction = 0x8822552C;
	ea = ctx.r3.u32 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbzx r26,r27,r10
	ctx.current_instruction = 0x88225530;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// rotlwi r30,r8,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbz r31,0(r10)
	ctx.current_instruction = 0x88225538;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r28,r26,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// add r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r8,r26,r28
	ctx.r8.u64 = ctx.r26.u64 + ctx.r28.u64;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// extsh r31,r30
	ctx.r31.s64 = ctx.r30.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sth r31,48(r11)
	ctx.current_instruction = 0x88225558;
	REX_STORE_U16(ctx.r11.u32 + 48, ctx.r31.u16);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthu r8,96(r11)
	ctx.current_instruction = 0x88225564;
	ea = 96 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8822552c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822552C;
loc_8822556C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x88222bc8
	ctx.lr = 0x88225574;
	sub_88222BC8(ctx, base);
loc_88225574:
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8822B3D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8822B3D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8822B3D0) {
			switch (rex_dispatch_address) {
				case 0x8822B3D8:
				case 0x8822B410:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8822B3D0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8822B3D8: goto loc_8822B3D8;
		case 0x8822B410: goto loc_8822B410;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8822B3D8;
	__savegprlr_28(ctx, base);
loc_8822B3D8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8822B3D8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,52(r3)
	ctx.current_instruction = 0x8822B3DC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 52);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r10,50(r3)
	ctx.current_instruction = 0x8822B3E4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r31,r11,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r30,1320(r3)
	ctx.current_instruction = 0x8822B3F0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwinm r28,r10,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mullw r11,r28,r31
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r31.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88052d90
	ctx.lr = 0x8822B410;
	sub_88052D90(ctx, base);
loc_8822B410:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8822b454
	if (ctx.cr6.eq) goto loc_8822B454;
	// addi r11,r30,-6
	ctx.r11.s64 = ctx.r30.s64 + -6;
	// addi r9,r29,-24
	ctx.r9.s64 = ctx.r29.s64 + -24;
loc_8822B420:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8822b44c
	if (ctx.cr6.eq) goto loc_8822B44C;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_8822B42C:
	// lbz r8,6(r11)
	ctx.current_instruction = 0x8822B42C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lhzu r10,24(r9)
	ctx.current_instruction = 0x8822B430;
	ea = 24 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// rotlwi r6,r10,7
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 7);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// stbu r4,6(r11)
	ctx.current_instruction = 0x8822B444;
	ea = 6 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8822b42c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822B42C;
loc_8822B44C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8822b420
	if (!ctx.cr0.eq) goto loc_8822B420;
loc_8822B454:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8822BD68) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8822BD68);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8822BD68;
	ctx.current_instruction = 0x8822BD68;
	// std r31,-8(r1)
	ctx.current_instruction = 0x8822BD68;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8822BD6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r9,0(r4)
	ctx.current_instruction = 0x8822BD78;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// srawi r8,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 16;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r5,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r31.s32 >> 16;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// add r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r7,-59
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -59, ctx.xer);
	// bge cr6,0x8822bda8
	if (!ctx.cr6.lt) goto loc_8822BDA8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r11,-56
	ctx.r10.s64 = ctx.r11.s64 + -56;
	// b 0x8822bdc0
	goto loc_8822BDC0;
loc_8822BDA8:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8822bdc4
	if (!ctx.cr6.gt) goto loc_8822BDC4;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
loc_8822BDC0:
	// stw r10,0(r3)
	ctx.current_instruction = 0x8822BDC0;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8822BDC4:
	// cmpwi cr6,r31,-59
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -59, ctx.xer);
	// bge cr6,0x8822be00
	if (!ctx.cr6.lt) goto loc_8822BE00;
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// beq cr6,0x8822bdf0
	if (ctx.cr6.eq) goto loc_8822BDF0;
	// addi r10,r11,-60
	ctx.r10.s64 = ctx.r11.s64 + -60;
	// stw r10,0(r4)
	ctx.current_instruction = 0x8822BDE4;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8822BDE8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8822BDF0:
	// addi r10,r11,-56
	ctx.r10.s64 = ctx.r11.s64 + -56;
	// stw r10,0(r4)
	ctx.current_instruction = 0x8822BDF4;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8822BDF8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8822BE00:
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8822be2c
	if (!ctx.cr6.gt) goto loc_8822BE2C;
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8822be28
	if (!ctx.cr6.eq) goto loc_8822BE28;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
loc_8822BE28:
	// stw r10,0(r4)
	ctx.current_instruction = 0x8822BE28;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_8822BE2C:
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8822BE2C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88242388) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88242388;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88242388) {
			switch (rex_dispatch_address) {
				case 0x88242390:
				case 0x882424F8:
				case 0x88242568:
				case 0x88242570:
				case 0x88242B10:
				case 0x88242B18:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88242388;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88242390: goto loc_88242390;
		case 0x882424F8: goto loc_882424F8;
		case 0x88242568: goto loc_88242568;
		case 0x88242570: goto loc_88242570;
		case 0x88242B10: goto loc_88242B10;
		case 0x88242B18: goto loc_88242B18;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88242390;
	__savegprlr_14(ctx, base);
loc_88242390:
	// stwu r1,-288(r1)
	ctx.current_instruction = 0x88242390;
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,22268(r3)
	ctx.current_instruction = 0x88242398;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 22268);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r6,136(r3)
	ctx.current_instruction = 0x882423A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// ori r7,r11,45236
	ctx.r7.u64 = ctx.r11.u64 | 45236;
	// lhz r9,52(r4)
	ctx.current_instruction = 0x882423A8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lhz r5,50(r4)
	ctx.current_instruction = 0x882423B0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x882423BC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// rlwinm r14,r6,4,0,27
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r3,r7
	ctx.current_instruction = 0x882423C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// rlwinm r27,r5,31,1,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,28(r25)
	ctx.current_instruction = 0x882423CC;
	REX_STORE_U32(ctx.r25.u32 + 28, ctx.r10.u32);
	// rlwinm r26,r9,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,22280(r22)
	ctx.current_instruction = 0x882423D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 22280);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r11,32(r25)
	ctx.current_instruction = 0x882423DC;
	REX_STORE_U32(ctx.r25.u32 + 32, ctx.r11.u32);
	// srawi r4,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r14.s32 >> 1;
	// lwz r7,3784(r22)
	ctx.current_instruction = 0x882423E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r22.u32 + 3784);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lwz r8,3776(r22)
	ctx.current_instruction = 0x882423EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r22.u32 + 3776);
	// lwz r11,0(r11)
	ctx.current_instruction = 0x882423F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r5,33(r28)
	ctx.current_instruction = 0x882423F4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r28.u32 + 33);
	// lwz r10,224(r22)
	ctx.current_instruction = 0x882423F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 224);
	// lwz r9,3780(r22)
	ctx.current_instruction = 0x882423FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r22.u32 + 3780);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,220(r22)
	ctx.current_instruction = 0x88242404;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r22.u32 + 220);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r23,272(r22)
	ctx.current_instruction = 0x88242410;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r22.u32 + 272);
	// stw r26,128(r1)
	ctx.current_instruction = 0x88242414;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r14,108(r1)
	ctx.current_instruction = 0x8824241C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// rlwinm r9,r11,16,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFF;
	// stw r3,116(r1)
	ctx.current_instruction = 0x88242424;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,104(r1)
	ctx.current_instruction = 0x88242428;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r27,124(r1)
	ctx.current_instruction = 0x8824242C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r31,92(r1)
	ctx.current_instruction = 0x88242430;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r10,96(r1)
	ctx.current_instruction = 0x88242434;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r8,100(r1)
	ctx.current_instruction = 0x88242438;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stb r5,80(r1)
	ctx.current_instruction = 0x8824243C;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// ble cr6,0x88242bb0
	if (!ctx.cr6.gt) goto loc_88242BB0;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// lis r18,-30678
	ctx.r18.s64 = -2010513408;
	// stw r11,112(r1)
	ctx.current_instruction = 0x8824244C;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r17,-30678
	ctx.r17.s64 = -2010513408;
	// li r20,255
	ctx.r20.s64 = 255;
loc_88242458:
	// li r15,0
	ctx.r15.s64 = 0;
	// lwz r24,92(r1)
	ctx.current_instruction = 0x8824245C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r21,100(r1)
	ctx.current_instruction = 0x88242460;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r16,r15
	ctx.r16.u64 = ctx.r15.u64;
	// ble cr6,0x88242b70
	if (!ctx.cr6.gt) goto loc_88242B70;
	// lwz r11,96(r1)
	ctx.current_instruction = 0x88242470;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r15,88(r1)
	ctx.current_instruction = 0x88242474;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// subf r19,r24,r11
	ctx.r19.u64 = ctx.r11.u64 - ctx.r24.u64;
loc_8824247C:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8824247C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88242b3c
	if (!ctx.cr6.eq) goto loc_88242B3C;
	// cmplw cr6,r16,r7
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x88242b3c
	if (!ctx.cr6.eq) goto loc_88242B3C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r28,556
	ctx.r29.s64 = ctx.r28.s64 + 556;
loc_8824249C:
	// srawi r11,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 2;
	// lwz r9,28(r25)
	ctx.current_instruction = 0x882424A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 28);
	// lwzu r10,4(r29)
	ctx.current_instruction = 0x882424A4;
	ea = 4 + ctx.r29.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r8,-128
	ctx.r8.s64 = -128;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// addi r3,r9,-128
	ctx.r3.s64 = ctx.r9.s64 + -128;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r25
	ctx.current_instruction = 0x882424B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// dcbt r8,r3
	// stw r3,28(r25)
	ctx.current_instruction = 0x882424C4;
	REX_STORE_U32(ctx.r25.u32 + 28, ctx.r3.u32);
	// addi r5,r11,45
	ctx.r5.s64 = ctx.r11.s64 + 45;
	// lwz r11,392(r28)
	ctx.current_instruction = 0x882424CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 392);
	// lwz r4,1384(r28)
	ctx.current_instruction = 0x882424D0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 1384);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,25780(r18)
	ctx.current_instruction = 0x882424D8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 25780);
	// lwz r9,24356(r17)
	ctx.current_instruction = 0x882424DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r17.u32 + 24356);
	// lbz r5,4(r23)
	ctx.current_instruction = 0x882424E0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r23.u32 + 4);
	// rotlwi r10,r5,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 6);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r8,r8,r28
	ctx.current_instruction = 0x882424EC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r28.u32);
	// add r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 + ctx.r4.u64;
	// bl 0x881cc7f8
	ctx.lr = 0x882424F8;
	sub_881CC7F8(ctx, base);
loc_882424F8:
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,768
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 768, ctx.xer);
	// blt cr6,0x8824249c
	if (ctx.cr6.lt) goto loc_8824249C;
	// lbz r10,80(r1)
	ctx.current_instruction = 0x88242508;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88242ae4
	if (ctx.cr6.eq) goto loc_88242AE4;
	// lwz r10,0(r23)
	ctx.current_instruction = 0x88242514;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r11,r10,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88242ae4
	if (ctx.cr6.eq) goto loc_88242AE4;
	// rlwinm r8,r10,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// lwz r7,88(r1)
	ctx.current_instruction = 0x88242528;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,20696(r22)
	ctx.current_instruction = 0x8824252C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20696);
	// lwz r10,20700(r22)
	ctx.current_instruction = 0x88242530;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 20700);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r9,20704(r22)
	ctx.current_instruction = 0x88242538;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r22.u32 + 20704);
	// add r29,r11,r7
	ctx.r29.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r27,r10,r15
	ctx.r27.u64 = ctx.r10.u64 + ctx.r15.u64;
	// lwz r8,104(r1)
	ctx.current_instruction = 0x88242544;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r26,r9,r15
	ctx.r26.u64 = ctx.r9.u64 + ctx.r15.u64;
	// lwz r3,1384(r28)
	ctx.current_instruction = 0x8824254C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 1384);
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x8824256c
	if (!ctx.cr6.eq) goto loc_8824256C;
	// bl 0x881fb930
	ctx.lr = 0x88242568;
	sub_881FB930(ctx, base);
loc_88242568:
	// b 0x88242570
	goto loc_88242570;
loc_8824256C:
	// bl 0x881fb980
	ctx.lr = 0x88242570;
	sub_881FB980(ctx, base);
loc_88242570:
	// lhz r11,50(r28)
	ctx.current_instruction = 0x88242570;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 50);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// rotlwi r30,r11,3
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// beq cr6,0x8824266c
	if (ctx.cr6.eq) goto loc_8824266C;
	// lwz r11,-24(r23)
	ctx.current_instruction = 0x88242580;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + -24);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8824266c
	if (ctx.cr6.eq) goto loc_8824266C;
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r31,r30,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_882425A4:
	// lhz r9,-2(r11)
	ctx.current_instruction = 0x882425A4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r8,0(r11)
	ctx.current_instruction = 0x882425A8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lhz r5,-4(r11)
	ctx.current_instruction = 0x882425B0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhz r4,2(r11)
	ctx.current_instruction = 0x882425B8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r3,r7,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r14,r6,3,0,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// subf r5,r7,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r7.u64;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// subf r4,r6,r14
	ctx.r4.u64 = ctx.r14.u64 - ctx.r6.u64;
	// rlwinm r3,r8,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r14,r8,r5
	ctx.r14.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r5,r9,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r9.u64;
	// subf r4,r8,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r8.u64;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stw r3,120(r1)
	ctx.current_instruction = 0x882425EC;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// subf r3,r10,r14
	ctx.r3.u64 = ctx.r14.u64 - ctx.r10.u64;
	// add r5,r4,r9
	ctx.r5.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r3,r5,3
	ctx.r3.s64 = ctx.r5.s64 + 3;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// lwz r14,120(r1)
	ctx.current_instruction = 0x88242610;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r4,r9,r14
	ctx.r4.u64 = ctx.r14.u64 - ctx.r9.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// subf r4,r10,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r6,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 3;
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// srawi r4,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 3;
	// srawi r3,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 3;
	// srawi r9,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 3;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// sth r8,-4(r11)
	ctx.current_instruction = 0x88242648;
	REX_STORE_U16(ctx.r11.u32 + -4, ctx.r8.u16);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// sth r7,-2(r11)
	ctx.current_instruction = 0x88242650;
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r7.u16);
	// sth r6,0(r11)
	ctx.current_instruction = 0x88242654;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// sth r5,2(r11)
	ctx.current_instruction = 0x8824265C;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bdnz 0x882425a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882425A4;
	// lwz r14,108(r1)
	ctx.current_instruction = 0x88242668;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8824266C:
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r31,r30,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88242680:
	// lhz r9,-2(r11)
	ctx.current_instruction = 0x88242680;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r8,0(r11)
	ctx.current_instruction = 0x88242684;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhz r5,-4(r11)
	ctx.current_instruction = 0x8824268C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhz r4,2(r11)
	ctx.current_instruction = 0x88242694;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r7,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// subf r5,r6,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r6.u64;
	// subf r4,r7,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r7.u64;
	// subf r30,r10,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r10.u64;
	// subf r5,r9,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r9.u64;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r3,r8,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r4,120(r1)
	ctx.current_instruction = 0x882426C0;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// subf r4,r8,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r8.u64;
	// subf r3,r8,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r8.u64;
	// lwz r30,120(r1)
	ctx.current_instruction = 0x882426D0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// subf r30,r9,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r9.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// subf r3,r10,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r10.u64;
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r7,r5,r8
	ctx.r7.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 + ctx.r8.u64;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// addi r4,r6,4
	ctx.r4.s64 = ctx.r6.s64 + 4;
	// addi r3,r7,3
	ctx.r3.s64 = ctx.r7.s64 + 3;
	// srawi r8,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 3;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// srawi r6,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 3;
	// srawi r5,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// sth r3,-4(r11)
	ctx.current_instruction = 0x88242724;
	REX_STORE_U16(ctx.r11.u32 + -4, ctx.r3.u16);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// sth r9,-2(r11)
	ctx.current_instruction = 0x8824272C;
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r9.u16);
	// sth r8,0(r11)
	ctx.current_instruction = 0x88242730;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// sth r7,2(r11)
	ctx.current_instruction = 0x88242738;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bdnz 0x88242680
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88242680;
	// lhz r11,50(r28)
	ctx.current_instruction = 0x88242744;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 50);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// rotlwi r30,r11,2
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// beq cr6,0x88242918
	if (ctx.cr6.eq) goto loc_88242918;
	// lwz r11,-24(r23)
	ctx.current_instruction = 0x88242754;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + -24);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88242838
	if (ctx.cr6.eq) goto loc_88242838;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r31,r30,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88242778:
	// lhz r9,-2(r11)
	ctx.current_instruction = 0x88242778;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r8,0(r11)
	ctx.current_instruction = 0x8824277C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhz r5,-4(r11)
	ctx.current_instruction = 0x88242784;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhz r4,2(r11)
	ctx.current_instruction = 0x8824278C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// rlwinm r14,r7,3,0,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r6,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r6.u64;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// subf r4,r7,r14
	ctx.r4.u64 = ctx.r14.u64 - ctx.r7.u64;
	// subf r14,r9,r5
	ctx.r14.u64 = ctx.r5.u64 - ctx.r9.u64;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r8,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r3,r9,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r9.u64;
	// subf r4,r10,r14
	ctx.r4.u64 = ctx.r14.u64 - ctx.r10.u64;
	// rlwinm r14,r8,3,0,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// subf r3,r8,r14
	ctx.r3.u64 = ctx.r14.u64 - ctx.r8.u64;
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r6,r10,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r5,r5,3
	ctx.r5.s64 = ctx.r5.s64 + 3;
	// addi r4,r7,4
	ctx.r4.s64 = ctx.r7.s64 + 4;
	// addi r3,r8,3
	ctx.r3.s64 = ctx.r8.s64 + 3;
	// srawi r8,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 3;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// srawi r6,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 3;
	// srawi r5,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// sth r3,-4(r11)
	ctx.current_instruction = 0x88242814;
	REX_STORE_U16(ctx.r11.u32 + -4, ctx.r3.u16);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// sth r9,-2(r11)
	ctx.current_instruction = 0x8824281C;
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r9.u16);
	// sth r8,0(r11)
	ctx.current_instruction = 0x88242820;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// sth r7,2(r11)
	ctx.current_instruction = 0x88242828;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bdnz 0x88242778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88242778;
	// lwz r14,108(r1)
	ctx.current_instruction = 0x88242834;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_88242838:
	// lwz r11,-24(r23)
	ctx.current_instruction = 0x88242838;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + -24);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88242918
	if (ctx.cr6.eq) goto loc_88242918;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r31,r30,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8824285C:
	// lhz r9,-2(r11)
	ctx.current_instruction = 0x8824285C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r8,0(r11)
	ctx.current_instruction = 0x88242860;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhz r5,-4(r11)
	ctx.current_instruction = 0x88242868;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhz r4,2(r11)
	ctx.current_instruction = 0x88242870;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// rlwinm r30,r7,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r6,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r6.u64;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// subf r4,r7,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r7.u64;
	// subf r30,r9,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r9.u64;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r8,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r3,r9,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r9.u64;
	// subf r4,r10,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r10.u64;
	// rlwinm r30,r8,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// subf r3,r8,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r8.u64;
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r6,r10,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r5,r5,3
	ctx.r5.s64 = ctx.r5.s64 + 3;
	// addi r4,r7,4
	ctx.r4.s64 = ctx.r7.s64 + 4;
	// addi r3,r8,3
	ctx.r3.s64 = ctx.r8.s64 + 3;
	// srawi r8,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 3;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// srawi r6,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 3;
	// srawi r5,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// sth r3,-4(r11)
	ctx.current_instruction = 0x882428F8;
	REX_STORE_U16(ctx.r11.u32 + -4, ctx.r3.u16);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// sth r9,-2(r11)
	ctx.current_instruction = 0x88242900;
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r9.u16);
	// sth r8,0(r11)
	ctx.current_instruction = 0x88242904;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// sth r7,2(r11)
	ctx.current_instruction = 0x8824290C;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bdnz 0x8824285c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8824285C;
loc_88242918:
	// lhz r11,50(r28)
	ctx.current_instruction = 0x88242918;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 50);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// rotlwi r6,r11,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// beq cr6,0x88242940
	if (ctx.cr6.eq) goto loc_88242940;
	// lwz r11,-24(r23)
	ctx.current_instruction = 0x8824292C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + -24);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88242940
	if (ctx.cr6.eq) goto loc_88242940;
	// li r7,-2
	ctx.r7.s64 = -2;
loc_88242940:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_88242948:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// bge cr6,0x8824299c
	if (!ctx.cr6.lt) goto loc_8824299C;
	// subfic r10,r7,16
	ctx.xer.ca = ctx.r7.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8824295C:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r5,r29
	ctx.current_instruction = 0x88242964;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// ble cr6,0x88242980
	if (!ctx.cr6.gt) goto loc_88242980;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// and r10,r5,r20
	ctx.r10.u64 = ctx.r5.u64 & ctx.r20.u64;
loc_88242980:
	// lhz r5,74(r28)
	ctx.current_instruction = 0x88242980;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + 74);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r4,r3,r21
	ctx.current_instruction = 0x88242994;
	REX_STORE_U8(ctx.r3.u32 + ctx.r21.u32, ctx.r4.u8);
	// bdnz 0x8824295c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8824295C;
loc_8824299C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x88242948
	if (ctx.cr6.lt) goto loc_88242948;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x882429cc
	if (ctx.cr6.eq) goto loc_882429CC;
	// lwz r11,-24(r23)
	ctx.current_instruction = 0x882429B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + -24);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x882429cc
	if (ctx.cr6.eq) goto loc_882429CC;
	// li r7,-2
	ctx.r7.s64 = -2;
loc_882429CC:
	// lhz r11,50(r28)
	ctx.current_instruction = 0x882429CC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 50);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
loc_882429DC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bge cr6,0x88242a30
	if (!ctx.cr6.lt) goto loc_88242A30;
	// subfic r10,r7,8
	ctx.xer.ca = ctx.r7.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_882429F0:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r5,r27
	ctx.current_instruction = 0x882429F8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// ble cr6,0x88242a14
	if (!ctx.cr6.gt) goto loc_88242A14;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// and r10,r5,r20
	ctx.r10.u64 = ctx.r5.u64 & ctx.r20.u64;
loc_88242A14:
	// lhz r5,76(r28)
	ctx.current_instruction = 0x88242A14;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + 76);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r4,r3,r24
	ctx.current_instruction = 0x88242A28;
	REX_STORE_U8(ctx.r3.u32 + ctx.r24.u32, ctx.r4.u8);
	// bdnz 0x882429f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882429F0;
loc_88242A30:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x882429dc
	if (ctx.cr6.lt) goto loc_882429DC;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x88242a60
	if (ctx.cr6.eq) goto loc_88242A60;
	// lwz r11,-24(r23)
	ctx.current_instruction = 0x88242A4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + -24);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88242a60
	if (ctx.cr6.eq) goto loc_88242A60;
	// li r7,-2
	ctx.r7.s64 = -2;
loc_88242A60:
	// lhz r11,50(r28)
	ctx.current_instruction = 0x88242A60;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 50);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
loc_88242A70:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bge cr6,0x88242ac8
	if (!ctx.cr6.lt) goto loc_88242AC8;
	// subfic r10,r7,8
	ctx.xer.ca = ctx.r7.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88242A84:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r5,r26
	ctx.current_instruction = 0x88242A8C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// ble cr6,0x88242aa8
	if (!ctx.cr6.gt) goto loc_88242AA8;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// and r10,r5,r20
	ctx.r10.u64 = ctx.r5.u64 & ctx.r20.u64;
loc_88242AA8:
	// lhz r5,76(r28)
	ctx.current_instruction = 0x88242AA8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + 76);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + ctx.r19.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r4,r3,r24
	ctx.current_instruction = 0x88242AC0;
	REX_STORE_U8(ctx.r3.u32 + ctx.r24.u32, ctx.r4.u8);
	// bdnz 0x88242a84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88242A84;
loc_88242AC8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x88242a70
	if (ctx.cr6.lt) goto loc_88242A70;
	// lwz r27,124(r1)
	ctx.current_instruction = 0x88242AD8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r26,128(r1)
	ctx.current_instruction = 0x88242ADC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x88242b18
	goto loc_88242B18;
loc_88242AE4:
	// lhz r11,0(r23)
	ctx.current_instruction = 0x88242AE4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + 0);
	// add r6,r19,r24
	ctx.r6.u64 = ctx.r19.u64 + ctx.r24.u64;
	// lhz r8,76(r28)
	ctx.current_instruction = 0x88242AEC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r28.u32 + 76);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lhz r7,74(r28)
	ctx.current_instruction = 0x88242AF8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + 74);
	// lwz r3,1384(r28)
	ctx.current_instruction = 0x88242AFC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 1384);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88242b14
	if (!ctx.cr6.eq) goto loc_88242B14;
	// bl 0x881fb9d0
	ctx.lr = 0x88242B10;
	sub_881FB9D0(ctx, base);
loc_88242B10:
	// b 0x88242b18
	goto loc_88242B18;
loc_88242B14:
	// bl 0x881fba20
	ctx.lr = 0x88242B18;
	sub_881FBA20(ctx, base);
loc_88242B18:
	// lwz r10,112(r1)
	ctx.current_instruction = 0x88242B18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.current_instruction = 0x88242B1C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwzu r11,4(r10)
	ctx.current_instruction = 0x88242B20;
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r11,16,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFF;
	// stw r10,112(r1)
	ctx.current_instruction = 0x88242B2C;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addic. r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,116(r1)
	ctx.current_instruction = 0x88242B34;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// ble 0x88242b68
	if (!ctx.cr0.gt) goto loc_88242B68;
loc_88242B3C:
	// lwz r11,88(r1)
	ctx.current_instruction = 0x88242B3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r21,r21,16
	ctx.r21.s64 = ctx.r21.s64 + 16;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// addi r23,r23,24
	ctx.r23.s64 = ctx.r23.s64 + 24;
	// stw r10,88(r1)
	ctx.current_instruction = 0x88242B54;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r15,r15,16
	ctx.r15.s64 = ctx.r15.s64 + 16;
	// cmpw cr6,r16,r27
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8824247c
	if (ctx.cr6.lt) goto loc_8824247C;
	// b 0x88242b70
	goto loc_88242B70;
loc_88242B68:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// stw r11,84(r1)
	ctx.current_instruction = 0x88242B6C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_88242B70:
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88242B70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,232(r22)
	ctx.current_instruction = 0x88242B74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 232);
	// lwz r6,92(r1)
	ctx.current_instruction = 0x88242B78;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lwz r5,100(r1)
	ctx.current_instruction = 0x88242B80;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.current_instruction = 0x88242B84;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r10,228(r22)
	ctx.current_instruction = 0x88242B8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 228);
	// cmpw cr6,r8,r26
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r26.s32, ctx.xer);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x88242B98;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r3,92(r1)
	ctx.current_instruction = 0x88242BA0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r11,96(r1)
	ctx.current_instruction = 0x88242BA4;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	ctx.current_instruction = 0x88242BA8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// blt cr6,0x88242458
	if (ctx.cr6.lt) goto loc_88242458;
loc_88242BB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

